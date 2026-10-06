/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064fcedc; end: 1064fd02b; -[SCChatConversationUpdater _observeUnviewedFriendshipFlashback:] */

void FUN_1064fcedc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x128));
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e0ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fd02c; end: 1064fd073;  */

void FUN_1064fd02c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81300();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064fd074; end: 1064fd167; -[SCChatConversationUpdater _processFriendshipFlashbacksDataModels:] */

void FUN_1064fd074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cb370;
  _objc_retain(param_3);
  func_0x00010bf373a0(puVar1,param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a0c80(param_1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0cce60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2786a0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9af00(param_1,param_2,uVar2,puVar1,0xf);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064fd168; end: 1064fd5ef; -[SCChatConversationUpdater _startObservingSaturnStatus:] */

void FUN_1064fd168(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07cea0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    ppuVar10 = &PTR____CFConstantStringClassReference_110e53218;
LAB_1064fd204:
    FUN_10655f948(uVar3,ppuVar10,1);
    goto LAB_1064fd584;
  }
  uVar1 = *(ulong *)(param_1 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07cec0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0825a0();
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    if ((uVar2 & 1) == 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e53238;
      goto LAB_1064fd204;
    }
    ppuVar10 = &PTR____CFConstantStringClassReference_110e53258;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    ppuVar10 = &PTR____CFConstantStringClassReference_110e53278;
  }
  FUN_10655f948(uVar3,ppuVar10,1);
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1064fce8c;
  uStack_70 = 0x1064fce9c;
  uStack_68 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1064fd5f0;
  puStack_a0 = &UNK_11084aef8;
  puStack_88 = puStack_98;
  func_0x00010c0be1a0(param_3);
  lVar4 = puStack_88[5];
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    FUN_10655f948(*(undefined8 *)(param_1 + 0x1a8),&PTR____CFConstantStringClassReference_110e53298,
                  1);
  }
  else {
    iVar13 = (int)puStack_88[5];
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if (iVar13 == 0) {
      lVar5 = *(long *)(param_1 + 0x178);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c0ee920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar4;
      func_0x00010c149b60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c149b40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      _objc_release(lVar5);
      if (lVar7 == 0) {
        FUN_10655f948(*(undefined8 *)(param_1 + 0x1a8),
                      &PTR____CFConstantStringClassReference_110e532b8,1);
        goto LAB_1064fd568;
      }
      lVar5 = lVar4;
      func_0x00010c149b60(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c149b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a0080(param_1);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010bf609e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar4;
      func_0x00010c08fa60();
      if (lVar5 == 0) {
        FUN_10655f948(*(undefined8 *)(param_1 + 0x1a8),
                      &PTR____CFConstantStringClassReference_110e532b8,1);
LAB_1064fd568:
        _objc_release(lVar4);
        goto LAB_1064fd570;
      }
      func_0x00010c1a0080(param_1);
    }
    _objc_release(lVar4);
    FUN_10655f948(*(undefined8 *)(param_1 + 0x1a8),&PTR____CFConstantStringClassReference_110e532d8,
                  1);
    uVar8 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c149c20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x1a0) = uVar3;
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_initWeak(auStack_c0,param_1);
    uVar9 = *(undefined8 *)(param_1 + 0x170);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c1368a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c8,auStack_c0);
    uVar11 = uVar8;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x198) = uVar11;
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
  }
LAB_1064fd570:
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
LAB_1064fd584:
  _objc_release(param_3);
  return;
}



/* Entry: 1064fd5f0; end: 1064fd66f;  */

void FUN_1064fd5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064fd670; end: 1064fd6b3; -[SCChatConversationUpdater _stopObservingSaturnStatus] */

void FUN_1064fd670(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x198));
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a0090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFriendSaturnUserId__112645a40,0);
  return;
}



/* Entry: 1064fd6b4; end: 1064fd81f; -[SCChatConversationUpdater _handleSaturnStatusUpdate:] */

void FUN_1064fd6b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if ((lVar2 == 0) || (*(long *)(param_1 + 0x1a0) == 0)) {
    func_0x00010c1a0060(param_1);
  }
  else {
    func_0x00010bf9d480();
    uVar3 = *(undefined8 *)(param_1 + 0x1a0);
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    func_0x00010c1a0060(param_1);
    if ((int)uVar5 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e53318;
    }
    else {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e532f8;
    }
    FUN_10655fe60(*(undefined8 *)(param_1 + 0x1a8),ppuVar7,1);
  }
  puVar4 = PTR_PTR_1126cb370;
  func_0x00010bf373a0(PTR_PTR_1126cb370);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c0cce60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2786a0(uVar5);
  _objc_release(puVar6);
  _objc_release(uVar5);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9af00(param_1);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064fd820; end: 1064fd967; -[SCChatConversationUpdater _fetchPublicStoryForCampaign:] */

void FUN_1064fd820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf2be60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf507c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0bf240(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fd968; end: 1064fd9df;  */

void FUN_1064fd968(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c08fa60();
  uVar2 = param_2;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  _objc_retain(uVar2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13540();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064fd9e0; end: 1064fdaeb; -[SCChatConversationUpdater _fetchPublicStoryForCampaignWithUserId:] */

void FUN_1064fd9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa9900(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fdaec; end: 1064fdb53;  */

void FUN_1064fdaec(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9b900();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064fdb54; end: 1064fdc53; -[SCChatConversationUpdater _scheduleUpdateForPublicStoryFetched:error:] */

void FUN_1064fdb54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fdc54; end: 1064fdd2b;  */

void FUN_1064fdc54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cb370;
    func_0x00010bf373a0(PTR_PTR_1126cb370,param_2,0x10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bede2e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0cce60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2786a0(uVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9af00(lVar1,param_2,uVar3,puVar2,0x10);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064fdd2c; end: 1064fdf5f; -[SCChatConversationUpdater _updatePublicStorySummaryInfo:error:] */

void FUN_1064fdd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1064fce8c;
  uStack_70 = 0x1064fce9c;
  uStack_68 = 0;
  uVar1 = param_1;
  func_0x00010bef06a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf507c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf240();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar7 = puStack_88[5];
  uVar1 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if ((uVar7 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bef06a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2be60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5b640();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  if (param_4 == 0) {
    func_0x00010c0ddc60();
  }
  func_0x00010c177ac0(param_1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fdf60; end: 1064fdf97;  */

void FUN_1064fdf60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064fdf98; end: 1064fe07f; -[SCChatConversationUpdater _fetchGroupLocationContextCaptionsIfNecessary:] */

void FUN_1064fdf98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf507c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0bf240(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fe080; end: 1064fe0c7;  */

void FUN_1064fe080(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12420();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064fe0c8; end: 1064fe2eb; -[SCChatConversationUpdater _fetchLocationContextCaptionsForGroup:] */

void FUN_1064fe0c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010c1bf940(param_1);
    func_0x00010c1bf8e0(param_1);
    func_0x00010c1bf8c0(param_1);
    func_0x00010c1bf900(0,param_1);
    func_0x00010c1b0a60(param_1);
    puVar3 = *(undefined **)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0xa8);
    lVar1 = param_3;
    func_0x00010bfceb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((uVar5 & 1) != 0) goto LAB_1064fe2a0;
    lVar1 = param_3;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa8) = lVar1;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126cb378;
    _objc_alloc(PTR_PTR_1126cb378);
    func_0x00010c05c340();
    lVar1 = param_3;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar1);
    func_0x00010bfa83c0(uVar4);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar1);
  }
  _objc_release(puVar3);
LAB_1064fe2a0:
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fe2ec; end: 1064fe2f3;  */

void FUN_1064fe2ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1064fe2f4; end: 1064fe3e7;  */

void FUN_1064fe2f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1064fe3e8; end: 1064fe4cf;  */

void FUN_1064fe3e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  func_0x00010c0720c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126cb370;
    func_0x00010bf373a0(PTR_PTR_1126cb370,param_2,10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be70240(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0cce60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2786a0(uVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9af00(uVar4,param_2,uVar1,puVar2,10);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1064fe4d0; end: 1064fe587; -[SCChatConversationUpdater unsetActiveConversation:token:] */

void FUN_1064fe4d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1064fe588;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fe588; end: 1064fe597;  */

void FUN_1064fe588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed2050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__unsetActiveConversation_token__1125921b8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1064fe598; end: 1064fe6cb; -[SCChatConversationUpdater _unsetActiveConversation:token:] */

void FUN_1064fe598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c162600(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  _objc_release(uVar1);
  func_0x00010c1bf940(param_1,param_2,0);
  func_0x00010c1bf8e0(param_1,param_2,0);
  func_0x00010c1bf8c0(param_1,param_2,0);
  func_0x00010c1bf900(0,param_1);
  func_0x00010c1b0a60(param_1,param_2,0);
  func_0x00010c1b0a20(param_1,param_2,0);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x158));
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  _objc_release(uVar1);
  func_0x00010bec3500(param_1);
  func_0x00010c1a0060(param_1,param_2,0);
  func_0x00010c162620(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0xa0));
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x128));
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 400));
  uVar1 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  _objc_release(uVar1);
  func_0x00010c180a40(param_1,param_2,0);
  func_0x00010c177ac0(param_1,param_2,0);
  func_0x00010be9af00(param_1,param_2,param_4,0,0x11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064fe6cc; end: 1064fe81f; -[SCChatConversationUpdater _processAddToGroupCardState:] */

void FUN_1064fe6cc(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010befc160();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    _objc_release(param_3);
    puVar1 = puVar2;
  }
  else {
    if (param_3 == (undefined *)0x0) {
      _objc_release();
      _objc_release(puVar2);
    }
    else {
      puVar1 = puVar2;
      func_0x00010c071ae0(puVar2,param_2,param_3);
      _objc_release(param_3);
      _objc_release(puVar2);
      _objc_release(puVar2);
      if (((ulong)puVar1 & 1) != 0) goto LAB_1064fe808;
    }
    func_0x00010c1655e0(param_1,param_2,param_3);
    puVar1 = PTR_PTR_1126cb370;
    func_0x00010bf373a0(PTR_PTR_1126cb370,param_2,0x12);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = *(undefined **)(param_1 + 0x68);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0cce60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2786a0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9af00(param_1,param_2,puVar2,puVar1,0x12);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_1064fe808:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064fe820; end: 1064fea17; -[SCChatConversationUpdater dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_1064fe820(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126cb380;
  _objc_retain(param_3);
  func_0x00010bf63740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar2);
  if ((int)uVar3 != 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be25a20(param_1);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126cb388;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  func_0x00010c0c0800(uVar1);
  puVar2 = PTR_PTR_1126cb390;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar5 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar4 = param_4;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_4);
  func_0x00010c0bfca0(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064fea18; end: 1064feb9f;  */

void FUN_1064fea18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1064feba0; end: 1064febab;  */

void FUN_1064feba0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf50250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_conversationFetchDidFailForChatI_1125b1a38,
             param_2);
  return;
}



/* Entry: 1064febac; end: 1064fecbb;  */

void FUN_1064febac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fecbc; end: 1064fed43;  */

void FUN_1064fecbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0xb0);
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  _objc_release(uVar3);
  func_0x00010bea19a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be66ea0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be11420();
  func_0x00010bec72e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be67020(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bec0ca0();
                    /* WARNING: Could not recover jumptable at 0x00010be45b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__issueLoadingViewModelForConvers_11256f070,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1064fed44; end: 1064fed47;  */

void FUN_1064fed44(void)

{
  return;
}



/* Entry: 1064fed48; end: 1064feda3;  */

void FUN_1064fed48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282680(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064feda4; end: 1064fee2b; -[SCChatConversationUpdater conversationFetchDidFailForChatIdentifier:] */

void FUN_1064feda4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1064fee2c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fee2c; end: 1064fee73;  */

void FUN_1064fee2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x50);
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf77590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didInitialConversationFetchFailF_1125bb708,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  return;
}



/* Entry: 1064fee74; end: 1064ff09b; -[SCChatConversationUpdater _scheduleConversationUpdateWithToken:metricsTracker:reason:] */

void FUN_1064fee74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1064ff09c;
  puStack_70 = &UNK_110842e18;
  lStack_68 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_88);
  func_0x00010bdda6a0(param_1);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c0cce80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = param_1;
    func_0x00010c0cce80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27dd80();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 != 1) {
      lVar3 = param_1;
      func_0x00010c0cce80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c7880(param_1);
      _objc_release(lVar3);
      goto LAB_1064fefc0;
    }
  }
  lVar3 = param_1;
  func_0x00010c0cce80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43820();
  _objc_release(lVar3);
  func_0x00010c1c7880(param_1);
LAB_1064fefc0:
  _objc_initWeak(auStack_90,param_1);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1064ff0ac;
  puStack_b0 = &UNK_110842a68;
  uStack_98 = 0;
  _objc_copyWeak(auStack_a0,auStack_90);
  _objc_retain(param_3);
  uVar2 = 0;
  uStack_a8 = param_3;
  func_0x0001008553e8(0,&puStack_c8);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar6);
  func_0x00010bdf99a0(param_1);
  func_0x00010c0f7fe0(*(undefined8 *)(param_1 + 0x18));
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064ff09c; end: 1064ff0ab;  */

void FUN_1064ff09c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064ff0ac; end: 1064ff0df;  */

void FUN_1064ff0ac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf1180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064ff0e0; end: 1064ff2a7; -[SCChatConversationUpdater _createPendingRenderBlockForToken:] */

void FUN_1064ff0e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0cce80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bfd5880();
  if ((uVar7 & 1) == 0) {
    uVar7 = param_1;
    func_0x00010c0cce80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar7 = 0;
  }
  _objc_release(uVar1);
  func_0x00010c278920(uVar7,param_2,0xf);
  func_0x00010c1c7880(param_1,param_2,0);
  _CACurrentMediaTime();
  func_0x00010c1b8d80(param_1);
  uVar1 = param_1;
  func_0x00010bef06a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf500c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cbb80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  func_0x00010c1cfda0(param_1,param_2,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar7;
  func_0x00010c278ec0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bde8dc0(param_1,param_2,uVar1,uVar2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if ((uVar7 != 0) && (uVar3 = uVar7, func_0x00010c27dd80(), uVar3 == 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123540();
    _objc_release(uVar6);
  }
  func_0x00010c278920(uVar7,param_2,0x10);
  func_0x00010c28ca80(param_1,param_2,uVar4,param_3,uVar7);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064ff2a8; end: 1064ff2db; -[SCChatConversationUpdater _cancelCurrentUpdateBlockIfNecessaryForIncomingToken:] */

void FUN_1064ff2a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retainBlock();
  if (lVar1 != 0) {
    _dispatch_block_cancel(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064ff2dc; end: 1064ff3a3; -[SCChatConversationUpdater _delayForUpdate] */

double FUN_1064ff2dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = param_1;
  func_0x00010c0df040();
  lVar2 = param_1;
  func_0x00010bef06a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0cbb80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  dVar6 = 0.0;
  dVar8 = dVar6;
  if (lVar1 == lVar5) {
    _CACurrentMediaTime();
    dVar7 = dVar6;
    func_0x00010c08a6e0(param_1);
    dVar8 = 0.0;
    if (dVar6 - dVar7 <= 0.2) {
      dVar8 = 0.2 - (dVar6 - dVar7);
    }
  }
  return dVar8;
}



/* Entry: 1064ff3a4; end: 106501537; -[SCChatConversationUpdater _conversationViewModelForActiveConversationData:configuration:token:trackingId:] */

void FUN_1064ff3a4(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  ulong uVar53;
  undefined8 uVar54;
  ulong uVar55;
  uint uVar56;
  ulong uVar57;
  undefined *puVar58;
  undefined8 uStack_5b0;
  undefined *puStack_4f8;
  long lStack_498;
  long lStack_490;
  undefined4 uStack_484;
  ulong uStack_470;
  undefined *puStack_420;
  ulong uStack_410;
  ulong uStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3c0;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = &UNK_10f381eb7;
  func_0x0001000ba800();
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar52 = (undefined *)0x0;
    goto LAB_106501338;
  }
  puVar3 = param_3;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar52 = (undefined *)0x0;
  }
  else {
    puVar4 = param_3;
    func_0x00010bf507c0();
    _objc_retainAutoreleasedReturnValue();
    puVar52 = param_3;
    func_0x00010bf8bdc0();
    func_0x00010c08aec0(param_3);
    func_0x00010c0d8c60(param_3);
    puVar5 = param_3;
    func_0x00010c245de0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010c258ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010bf03aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010c244a80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010c105100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50260(param_3);
    puVar16 = param_3;
    func_0x00010bf505c0();
    puVar10 = param_3;
    func_0x00010c0f2880();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_3;
    func_0x00010bef0ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_3;
    func_0x00010bf50800();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    func_0x00010bf60a00();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_1064fce8c;
    uStack_110 = 0x1064fce9c;
    uStack_108 = 0;
    uStack_160 = 0;
    uStack_150 = 0x3032000000;
    pcStack_148 = FUN_1064fce8c;
    uStack_140 = 0x1064fce9c;
    uStack_138 = 0;
    uStack_180 = 0;
    uStack_170 = 0x2020000000;
    uStack_168 = 0;
    puVar14 = param_1;
    puStack_178 = &uStack_180;
    puStack_158 = &uStack_160;
    puStack_128 = &uStack_130;
    func_0x00010befc160(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_106501540;
    puStack_190 = &UNK_110842b58;
    puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0xc2000000;
    uStack_1c0 = 0x106501578;
    puStack_1b8 = &UNK_110842b58;
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_1065015b0;
    puStack_1e0 = &UNK_110847658;
    puStack_1d8 = &uStack_180;
    puStack_1b0 = &uStack_160;
    puStack_188 = &uStack_130;
    func_0x00010c0c0f60();
    _objc_release(puVar14);
    puVar14 = puVar4;
    func_0x000108ef55a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x000108ef5474();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar16 == (undefined *)0x5) && (uVar54 = param_4, func_0x00010c239d80(), (int)uVar54 != 0)
       ) {
      puVar52 = *(undefined **)(param_1 + 0x48);
      puStack_420 = puVar3;
      func_0x00010bfe5d80();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = *(undefined **)(param_1 + 0x40);
      func_0x00010c2923e0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf505e0(puVar52);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_420 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
      _objc_alloc_init();
      puVar17 = puVar3;
      func_0x00010c0cbb80();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar3;
      func_0x00010c0cbb60();
      _objc_retainAutoreleasedReturnValue();
      if ((int)puVar52 != 0) {
        uVar54 = *(undefined8 *)(param_1 + 0x48);
        puVar52 = puVar3;
        func_0x00010bfe5d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c074920(puVar3);
        puVar19 = puVar14;
        func_0x00010c2923e0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29d760(uVar54);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        _objc_release(puVar52);
        func_0x00010befca40(PTR_PTR_1126cb398);
        _objc_release(uVar54);
      }
      puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new();
      puVar52 = puVar3;
      func_0x00010c074920();
      if (((ulong)puVar52 & 1) == 0) {
        uVar25 = *(undefined8 *)(param_1 + 0xd8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar54 = uVar25;
        func_0x00010c07ee60();
        uStack_484 = (undefined4)uVar54;
        _objc_release(uVar25);
      }
      else {
        uStack_484 = 0;
      }
      func_0x00010c076ee0();
      puVar52 = puVar3;
      func_0x00010bf37ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar52 == (undefined *)0x0) {
        puStack_4f8 = (undefined *)0x0;
      }
      else {
        lVar20 = puStack_128[5];
        func_0x00010c08fa60();
        if (lVar20 == 0) {
          lVar20 = puStack_158[5];
          func_0x00010c08fa60();
          if (lVar20 == 0) {
            puStack_4f8 = (undefined *)0x0;
            goto LAB_1064ff9b0;
          }
        }
        puVar52 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = puStack_128[5];
        func_0x00010c08fa60();
        if (lVar20 != 0) {
          puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_218 = 0xc2000000;
          pcStack_210 = FUN_1065015c4;
          puStack_208 = &UNK_110929700;
          puStack_200 = &uStack_130;
          puVar21 = puVar17;
          func_0x00010bfece40();
          if ((puVar21 != (undefined *)0x0) && (puVar21 != (undefined *)0x7fffffffffffffff)) {
            puVar21 = puVar17;
            func_0x00010c0dfd40(puVar17);
            _objc_retainAutoreleasedReturnValue();
            puVar58 = puVar21;
            func_0x00010bf490e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar52);
            _objc_release(puVar58);
            _objc_release(puVar21);
          }
        }
        lVar20 = puStack_158[5];
        func_0x00010c08fa60();
        if (lVar20 != 0) {
          func_0x00010befa120(puVar52);
        }
        puVar21 = puVar52;
        func_0x00010bf529e0();
        if (puVar21 == (undefined *)0x0) {
          puStack_4f8 = (undefined *)0x0;
        }
        else {
          puStack_4f8 = puVar52;
          func_0x00010bf51e00();
        }
        _objc_release(puVar52);
      }
LAB_1064ff9b0:
      puVar21 = PTR_PTR_1126cb3a0;
      func_0x00010c261400(puVar3);
      func_0x00010c06b1a0(puVar3);
      uVar54 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c2923e0(uVar54);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf16fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar54);
      uVar54 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010c269d40(uVar54);
      _objc_retainAutoreleasedReturnValue();
      puVar52 = puVar21;
      func_0x00010c0cba40(puVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123780(uVar54);
      _objc_release(puVar52);
      _objc_release(uVar54);
      uVar54 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      lStack_258 = 0;
      uStack_260 = 0;
      _objc_retain(puVar17);
      puVar52 = puVar17;
      func_0x00010bf52a60();
      if (puVar52 == (undefined *)0x0) {
        uStack_470 = 0;
        puStack_3e0 = (undefined *)0x0;
        uStack_3e8 = 0;
        lStack_498 = 0;
        lStack_490 = 0;
      }
      else {
        uStack_410 = 0;
        lStack_498 = 0;
        bVar1 = false;
        uStack_470 = 0;
        puStack_3e0 = (undefined *)0x0;
        uStack_3e8 = 0;
        lStack_490 = 0;
        lVar20 = *plStack_250;
        do {
          puVar58 = (undefined *)0x0;
          do {
            if (*plStack_250 != lVar20) {
              _objc_enumerationMutation(puVar17);
            }
            uVar57 = *(ulong *)(lStack_258 + (long)puVar58 * 8);
            uVar53 = uVar57;
            func_0x00010bf490e0(uVar57);
            _objc_retainAutoreleasedReturnValue();
            puVar22 = puVar7;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar53);
            puVar23 = puVar21;
            func_0x00010c0cb540();
            _objc_retainAutoreleasedReturnValue();
            uVar53 = uVar57;
            func_0x00010bf490e0(uVar57);
            _objc_retainAutoreleasedReturnValue();
            puVar24 = puVar23;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar53);
            _objc_release(puVar23);
            uVar25 = *(undefined8 *)(param_1 + 0x58);
            func_0x00010c071ac0(uVar25);
            uVar53 = *(ulong *)(param_1 + 0x70);
            _objc_retain(uVar57);
            _objc_retain(uVar53);
            if (uVar57 == 0) {
              uVar55 = 0;
LAB_1064ffcf0:
              _objc_release(uVar53);
              _objc_release(uVar55);
              uVar53 = uVar57;
              func_0x00010704aacc(uVar57,uVar25);
            }
            else {
              uVar55 = uVar53;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar26 = uVar55;
              func_0x00010c101bc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar55);
              puVar23 = PTR__OBJC_CLASS___NSObject_1126b1300;
              if (uVar26 == 0) {
LAB_1064ffce4:
                _objc_release(uVar26);
                uVar55 = uVar57;
                goto LAB_1064ffcf0;
              }
              _objc_retain(uVar26);
              _objc_opt_class(puVar23);
              uVar27 = uVar26;
              _objc_opt_isKindOfClass(uVar26,puVar23);
              uVar55 = uVar26;
              if ((uVar27 & 1) == 0) {
                uVar55 = 0;
              }
              _objc_retain(uVar55);
              _objc_release(uVar26);
              puVar23 = PTR_DAT_1126a53e8;
              _objc_retain(uVar55);
              uVar28 = uVar55;
              func_0x00010010fab4(uVar55,puVar23);
              uVar29 = uVar55;
              if ((int)uVar28 == 0) {
                uVar29 = 0;
              }
              _objc_retain(uVar29);
              _objc_release(uVar55);
              puVar23 = PTR_DAT_1126a53f0;
              if (uVar29 == 0) {
                _objc_retain(uVar55);
                uVar29 = uVar55;
                func_0x00010010fab4(uVar55,puVar23);
                _objc_release(uVar55);
                _objc_release(uVar55);
                if (((uint)uVar29 & (uint)uVar27 & 1) == 0) goto LAB_1064ffce4;
              }
              else {
                _objc_release(uVar26);
                _objc_release(uVar55);
              }
              _objc_release(uVar26);
              _objc_release(uVar53);
              _objc_release(uVar57);
              uVar53 = 1;
            }
            if ((puVar24 != (undefined *)0x0) || ((uVar53 & 1) == 0)) {
              puVar23 = puVar24;
              func_0x00010bfce400();
              _objc_retainAutoreleasedReturnValue();
              puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_280 = 0xc2000000;
              pcStack_278 = FUN_106501614;
              puStack_270 = &UNK_110929730;
              _objc_retain(puVar18);
              puVar30 = puVar23;
              puStack_268 = puVar18;
              func_0x00010c0b8600();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar23);
              uVar53 = uVar57;
              func_0x00010c0cb340();
              _objc_retainAutoreleasedReturnValue();
              uVar55 = uVar53;
              func_0x00010bf4dac0();
              if (uVar55 == 3) {
                uVar55 = uVar57;
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                puStack_3c0 = (undefined *)uVar55;
                func_0x00010c0c5180();
                _objc_retainAutoreleasedReturnValue();
                _objc_retain();
                _objc_release(puStack_3c0);
                _objc_release(uVar55);
              }
              else {
                puStack_3c0 = (undefined *)0x0;
              }
              _objc_release(uVar53);
              puVar23 = puStack_3c0;
              func_0x00010c08fa60();
              if (puVar23 == (undefined *)0x0) {
                uVar53 = uVar57;
                func_0x00010bf490e0(uVar57);
                _objc_retainAutoreleasedReturnValue();
                _objc_retain();
                uVar55 = uVar53;
              }
              else {
                uVar55 = uVar57;
                func_0x00010bf490e0(uVar57);
                _objc_retainAutoreleasedReturnValue();
                uVar26 = uVar55;
                func_0x00010c25ce40();
                _objc_retainAutoreleasedReturnValue();
                uVar53 = uVar26;
                func_0x00010c25ce40();
                _objc_retainAutoreleasedReturnValue();
                _objc_retain();
                _objc_release(uVar53);
                _objc_release(uVar26);
              }
              _objc_release(uVar55);
              puVar23 = PTR_PTR_1126cb3a8;
              puVar31 = param_3;
              func_0x00010bf2be60(param_3);
              _objc_retainAutoreleasedReturnValue();
              puVar32 = param_3;
              func_0x00010bf2be60(param_3);
              _objc_retainAutoreleasedReturnValue();
              puVar33 = puVar32;
              func_0x00010c15ed20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf220a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar33);
              _objc_release(puVar32);
              _objc_release(puVar31);
              puVar31 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar31 == (undefined *)0x0) {
                uVar55 = uVar57;
                func_0x00010bf490e0(uVar57);
                _objc_retainAutoreleasedReturnValue();
                puVar32 = puVar9;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_retain();
                _objc_release(puVar32);
                _objc_release(uVar55);
              }
              else {
                _objc_retain(puVar31);
                puVar32 = puVar31;
              }
              _objc_release(puVar31);
              puVar31 = param_3;
              func_0x00010bf60a00();
              _objc_retainAutoreleasedReturnValue();
              puVar33 = puVar12;
              func_0x00010c120c00();
              _objc_retainAutoreleasedReturnValue();
              puVar34 = param_1;
              func_0x00010be8a1a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar33);
              _objc_release(puVar31);
              if ((uStack_410 & 1) == 0) {
                puVar31 = puVar21;
                func_0x00010c0cb640();
                _objc_retainAutoreleasedReturnValue();
                uVar55 = uVar57;
                func_0x00010bf490e0(uVar57);
                _objc_retainAutoreleasedReturnValue();
                puVar33 = puVar31;
                func_0x00010bf4b900();
                uStack_410 = (ulong)puVar33 & 0xffffffff;
                _objc_release(uVar55);
                _objc_release(puVar31);
              }
              else {
                uStack_410 = 1;
              }
              puVar31 = puVar22;
              func_0x00010c149f00();
              if (puVar31 == (undefined *)0x1) {
                uVar25 = *(undefined8 *)(param_1 + 0x20);
                uVar55 = uVar57;
                func_0x00010bf490e0(uVar57);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1f5740(uVar25);
                _objc_release(uVar55);
              }
              if ((puVar34 != (undefined *)0x0) && (puVar34 != puStack_3e0)) {
                if (bVar1) {
LAB_1065000a8:
                  bVar1 = true;
                }
                else {
                  puVar31 = puStack_3e0;
                  func_0x00010c22f340();
                  if (((((ulong)puVar31 & 1) == 0) &&
                      (puVar31 = puVar34, func_0x00010c22f340(), (int)puVar31 != 0)) &&
                     (puVar33 = puVar34, func_0x00010c2335e0(), puVar31 = PTR_PTR_1126cb398,
                     ((ulong)puVar33 & 1) == 0)) {
                    uVar25 = *(undefined8 *)(param_1 + 0x48);
                    func_0x00010c29d820(uVar25);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befca40(puVar31);
                    _objc_release(uVar25);
                    goto LAB_1065000a8;
                  }
                  bVar1 = false;
                }
                puVar31 = puVar34;
                func_0x00010c234240();
                if ((int)puVar31 != 0) {
                  func_0x00010bf529e0();
                }
                puVar31 = PTR_PTR_1126c6d00;
                _objc_opt_class(PTR_PTR_1126c6d00);
                puVar33 = puVar34;
                _objc_opt_isKindOfClass(puVar34,puVar31);
                if (((ulong)puVar33 & 1) == 0) {
                  func_0x00010c1a7880(puVar34);
                }
                uVar55 = uVar57;
                func_0x00010bf490e0();
                _objc_retainAutoreleasedReturnValue();
                uVar26 = uVar55;
                func_0x00010c0720c0();
                _objc_release(uVar55);
                if ((int)uVar26 != 0) {
                  uVar25 = *(undefined8 *)(param_1 + 0x48);
                  puVar31 = puVar3;
                  func_0x00010bfe5d80(puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befc1a0(uVar25);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar31);
                  func_0x00010befca40(PTR_PTR_1126cb398);
                  _objc_release(uVar25);
                }
                func_0x00010befca40(PTR_PTR_1126cb398);
                uVar25 = *(undefined8 *)(param_1 + 0x40);
                func_0x00010c2923e0(uVar25);
                _objc_retainAutoreleasedReturnValue();
                uVar55 = uVar57;
                func_0x0001070b60d4(uVar57,puVar3,puVar14,uVar25,uStack_484);
                _objc_release(uVar25);
                if ((int)uVar55 == 0) {
                  uVar25 = *(undefined8 *)(param_1 + 0x40);
                  func_0x00010c2923e0(uVar25);
                  _objc_retainAutoreleasedReturnValue();
                  uVar55 = uVar57;
                  func_0x0001070b626c(uVar57,puVar3,puVar14,uVar25,uStack_484);
                  _objc_release(uVar25);
                  lStack_498 = lStack_498 + (uVar55 & 0xffffffff);
                }
                else {
                  lStack_490 = lStack_490 + 1;
                }
                _objc_retain(puVar34);
                _objc_release(puStack_3e0);
                puStack_3e0 = puVar34;
                if ((uStack_470 & 1) == 0) {
                  uVar55 = uVar57;
                  func_0x00010c0cb9a0();
                  _objc_retainAutoreleasedReturnValue();
                  uStack_470 = uVar55;
                  func_0x00010c0812c0();
                  uStack_470 = uStack_470 & 0xffffffff;
                  _objc_release(uVar55);
                }
                else {
                  uStack_470 = 1;
                }
              }
              _objc_retain(uVar57);
              _objc_release(uStack_3e8);
              uVar55 = uVar57;
              func_0x00010bf490e0();
              _objc_retainAutoreleasedReturnValue();
              uVar26 = uVar55;
              func_0x00010c0720c0();
              _objc_release(uVar55);
              if ((int)uVar26 != 0) {
                uVar25 = *(undefined8 *)(param_1 + 0x48);
                puVar31 = puVar3;
                func_0x00010bfe5d80(puVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befc1a0(uVar25);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar31);
                func_0x00010befca40(PTR_PTR_1126cb398);
                _objc_release(uVar25);
              }
              _objc_release(puVar34);
              _objc_release(puVar32);
              _objc_release(puVar23);
              _objc_release(uVar53);
              _objc_release(puStack_3c0);
              _objc_release(puVar30);
              _objc_release(puStack_268);
              uStack_3e8 = uVar57;
            }
            _objc_release(puVar24);
            _objc_release(puVar22);
            puVar58 = puVar58 + 1;
          } while (puVar52 != puVar58);
          puVar52 = puVar17;
          func_0x00010bf52a60();
        } while (puVar52 != (undefined *)0x0);
      }
      _objc_release(puVar17);
      puVar52 = puStack_420;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      puVar58 = puVar52;
      func_0x00010bf529e0();
      _objc_release(puVar52);
      puVar22 = param_1;
      func_0x00010beb32e0();
      puVar52 = param_3;
      func_0x00010bf500c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb860();
      _objc_release(puVar52);
      puVar52 = PTR_PTR_1126cb398;
      uVar56 = (uint)((puVar58 != (undefined *)0x0 || lStack_498 != 0) || lStack_490 != 0);
      if (((uVar56 ^ 1) & (uint)puVar22) == 1) {
        uVar25 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c29d6c0(uVar25);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befca40(puVar52);
LAB_1065004d8:
        _objc_release(uVar25);
      }
      else {
        if ((uStack_470 & 1) == 0) {
          uVar25 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c074920(puVar3);
          puVar52 = puVar3;
          func_0x00010bfe5d80(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar58 = puVar14;
          func_0x00010c2923e0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c29d8a0(uVar25);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar58);
          _objc_release(puVar52);
          func_0x00010befca40(PTR_PTR_1126cb398);
          if (*(char *)(puStack_178 + 3) == '\x01') {
            uVar35 = *(undefined8 *)(param_1 + 0x48);
            puVar52 = puVar3;
            func_0x00010bfe5d80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befc1a0(uVar35);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar52);
            func_0x00010befca40(PTR_PTR_1126cb398);
            _objc_release(uVar35);
          }
          goto LAB_1065004d8;
        }
        if (uVar56 == 0) {
          uVar25 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c29d820(uVar25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befca40(puVar52);
          goto LAB_1065004d8;
        }
      }
      puStack_2b0 = &uStack_2b8;
      uStack_2b8 = 0;
      uStack_2a8 = 0x3032000000;
      pcStack_2a0 = FUN_1064fce8c;
      uStack_298 = 0x1064fce9c;
      puVar52 = puVar14;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      puStack_290 = puVar52;
      if (puStack_2b0[5] == 0) {
        puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2d8 = 0xc2000000;
        pcStack_2d0 = FUN_106501628;
        puStack_2c8 = &UNK_11084aef8;
        puStack_2c0 = &uStack_2b8;
        func_0x00010c0be1a0(puVar11);
      }
      if (lStack_498 != 0 || lStack_490 != 0) {
        puVar52 = puVar14;
        func_0x00010c242760();
        _objc_retainAutoreleasedReturnValue();
        puVar58 = puVar52;
        func_0x00010c08fa60();
        _objc_release(puVar52);
        if (puVar58 == (undefined *)0x0) {
          uVar25 = *(undefined8 *)(param_1 + 0x48);
          puVar52 = puVar3;
          func_0x00010bfe5d80(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c29d800(uVar25);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar52);
          func_0x00010befca40(PTR_PTR_1126cb398);
          _objc_release(uVar25);
        }
      }
      func_0x00010be56500(param_1);
      puVar58 = puStack_420;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      puVar52 = PTR_PTR_1126c6d00;
      _objc_opt_class(PTR_PTR_1126c6d00);
      puVar22 = puVar58;
      _objc_opt_isKindOfClass(puVar58,puVar52);
      if (((ulong)puVar22 & 1) == 0) {
        func_0x00010c1b21e0(puVar58);
      }
      puVar52 = PTR_PTR_1126c6d00;
      _objc_opt_class(PTR_PTR_1126c6d00);
      puVar22 = puStack_3e0;
      _objc_opt_isKindOfClass(puStack_3e0,puVar52);
      if (((ulong)puVar22 & 1) == 0) {
        func_0x00010c1b2180(puStack_3e0);
      }
      func_0x00010c2864a0(PTR_PTR_1126cb3b0);
      puVar22 = PTR_PTR_1126cb3b0;
      func_0x00010c08d000();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = puStack_2b0[5];
      _objc_retain(puVar3);
      _objc_retain(puVar15);
      _objc_retain(puVar13);
      _objc_retain(puVar14);
      _objc_retain(uVar25);
      _objc_retain(puVar4);
      puVar52 = puVar3;
      func_0x00010c074920();
      if ((int)puVar52 == 0) {
        puVar52 = puVar14;
        func_0x00010c2923e0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar4;
        func_0x000108ef5894(puVar4,puVar52);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar52);
        puVar52 = puVar23;
        func_0x00010c08fa60();
        puStack_3c0 = puVar23;
        if (puVar52 == (undefined *)0x0) {
          puStack_3c0 = puVar14;
          func_0x00010901d8b4(puVar14,uVar25);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar23);
        }
      }
      else {
        puVar52 = puVar3;
        func_0x00010c076ee0();
        if ((int)puVar52 == 0) {
          puStack_3c0 = puVar3;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar52 = puVar13;
          func_0x00010901d7c4(puVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar13;
          func_0x00010c2923e0(puVar13);
          _objc_retainAutoreleasedReturnValue();
          puStack_3c0 = puVar15;
          func_0x000108ef3728(puVar15,puVar23,puVar52);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar23);
          _objc_release(puVar52);
        }
      }
      _objc_release(puVar4);
      _objc_release(uVar25);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar15);
      _objc_release(puVar3);
      uVar35 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c269d40(uVar35);
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar35;
      func_0x00010c1006c0();
      _objc_retainAutoreleasedReturnValue();
      puVar52 = puVar6;
      func_0x00010c259cc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar25);
      _objc_release(puVar52);
      _objc_release(uVar25);
      _objc_release(uVar35);
      puStack_308 = &uStack_310;
      uStack_310 = 0;
      uStack_300 = 0x3032000000;
      pcStack_2f8 = FUN_1064fce8c;
      uStack_2f0 = 0x1064fce9c;
      puVar52 = puVar3;
      func_0x00010bfe5d80();
      _objc_retainAutoreleasedReturnValue();
      puStack_2e8 = puVar52;
      func_0x00010c0be1a0(puVar11);
      uVar35 = *(undefined8 *)(param_1 + 0x180);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar35;
      func_0x00010c25bfe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar35);
      uVar35 = uVar25;
      func_0x00010bf9ca60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13c120();
      _objc_release(uVar35);
      puVar24 = param_1;
      func_0x00010be1de00();
      _objc_retainAutoreleasedReturnValue();
      puVar52 = param_1;
      func_0x00010bf2c220();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar6;
      if (puVar52 != (undefined *)0x0) {
        puVar23 = puVar52;
      }
      _objc_retain();
      _objc_release(puVar52);
      puVar31 = param_1;
      func_0x00010bec51e0();
      _objc_retainAutoreleasedReturnValue();
      uVar35 = *(undefined8 *)(param_1 + 200);
      _objc_retain();
      uVar36 = *(undefined8 *)(param_1 + 0xf0);
      _objc_retain();
      puVar30 = PTR_PTR_1126cb3b8;
      func_0x00010c261400();
      puVar52 = param_1;
      func_0x00010c09ecc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ece0(param_1);
      puVar32 = param_1;
      func_0x00010c09ed00();
      _objc_retainAutoreleasedReturnValue();
      puVar33 = param_1;
      func_0x00010c09eca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0801c0();
      func_0x00010c0dcc80();
      puVar34 = param_1;
      func_0x00010bfba800();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar34;
      func_0x00010bfba820();
      _objc_retainAutoreleasedReturnValue();
      puVar38 = puVar3;
      func_0x00010bfe5d80();
      _objc_retainAutoreleasedReturnValue();
      puVar39 = puVar3;
      func_0x00010bf500c0();
      _objc_retainAutoreleasedReturnValue();
      puVar40 = puVar39;
      func_0x00010bf367c0();
      _objc_retainAutoreleasedReturnValue();
      puVar41 = param_3;
      func_0x00010bf2be60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0714e0();
      func_0x00010c0713a0();
      puVar42 = param_1;
      func_0x00010beef440();
      _objc_retainAutoreleasedReturnValue();
      puVar43 = param_1;
      func_0x00010bfb8a80();
      _objc_retainAutoreleasedReturnValue();
      puVar44 = param_1;
      func_0x00010bfb8a60();
      _objc_retainAutoreleasedReturnValue();
      puVar45 = puVar3;
      func_0x00010bf500c0();
      _objc_retainAutoreleasedReturnValue();
      puVar46 = puVar45;
      func_0x00010bf50900();
      _objc_retainAutoreleasedReturnValue();
      puVar47 = puVar3;
      func_0x00010bf500c0();
      _objc_retainAutoreleasedReturnValue();
      puVar48 = puVar47;
      func_0x00010c07ad40();
      if ((int)puVar48 != 0) {
        uStack_5b0 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c076380();
      }
      puVar49 = PTR_PTR_1126ae720;
      _objc_retain(uVar35);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar50 = PTR_PTR_1126ae720;
      _objc_retain(uVar35);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar51 = PTR_PTR_1126ae720;
      _objc_retain(uVar36);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27e520(uVar54);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar51);
      _objc_release(puVar50);
      _objc_release(puVar49);
      if ((int)puVar48 != 0) {
        _objc_release(uStack_5b0);
      }
      _objc_release(puVar47);
      _objc_release(puVar46);
      _objc_release(puVar45);
      _objc_release(puVar44);
      _objc_release(puVar43);
      _objc_release(puVar42);
      _objc_release(puVar41);
      _objc_release(puVar40);
      _objc_release(puVar39);
      _objc_release(puVar38);
      _objc_release(puVar37);
      _objc_release(puVar34);
      _objc_release(puVar33);
      _objc_release(puVar32);
      _objc_release(puVar52);
      func_0x00010c261400(puVar3);
      uVar54 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar54);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf02940();
      func_0x00010c071660();
      _objc_release(uVar54);
      func_0x00010c261400();
      uVar54 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e9060();
      _objc_release(uVar54);
      puVar52 = PTR_PTR_1126cb2f0;
      _objc_alloc(PTR_PTR_1126cb2f0);
      uVar54 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar32 = param_3;
      func_0x00010bf2be60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c004a20(puVar52);
      _objc_release(puVar32);
      _objc_release(uVar54);
      uVar54 = *(undefined8 *)(param_1 + 0x110);
      puVar32 = PTR_PTR_1126cb3c8;
      _objc_alloc(PTR_PTR_1126cb3c8);
      puVar33 = puVar3;
      func_0x00010bfe5d80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar34 = puVar17;
      func_0x00010c089820(puVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar34;
      func_0x00010bf490e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c261400(puVar3);
      puVar38 = puVar3;
      func_0x00010bf500c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06e040();
      func_0x00010c0050c0(puVar32);
      func_0x00010c0d9840(uVar54);
      _objc_release(puVar32);
      _objc_release(puVar38);
      _objc_release(puVar37);
      _objc_release(puVar34);
      _objc_release(puVar33);
      _objc_retain(puVar52);
      _objc_release(puVar52);
      _objc_release(puVar30);
      _objc_release(uVar36);
      _objc_release(uVar35);
      _objc_release(uVar35);
      _objc_release(uVar36);
      _objc_release(uVar35);
      _objc_release(puVar31);
      _objc_release(puVar23);
      _objc_release(puVar24);
      _objc_release(uVar25);
      __Block_object_dispose(&uStack_310,8);
      _objc_release(puStack_2e8);
      _objc_release(puStack_3c0);
      _objc_release(puVar22);
      _objc_release(puVar58);
      __Block_object_dispose(&uStack_2b8,8);
      _objc_release(puStack_290);
      _objc_release(puVar21);
      _objc_release(puStack_4f8);
      _objc_release(puVar19);
      _objc_release(puStack_3e0);
      _objc_release(uStack_3e8);
      _objc_release(puVar18);
      _objc_release(puVar17);
    }
    _objc_release(puVar16);
    _objc_release(puStack_420);
    _objc_release(puVar15);
    _objc_release(puVar14);
    __Block_object_dispose(&uStack_180,8);
    __Block_object_dispose(&uStack_160,8);
    _objc_release(uStack_138);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(uStack_108);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_106501338:
  func_0x0001000e2a84(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_180,8);
    __Block_object_dispose(&uStack_160,8);
    __Block_object_dispose(&uStack_130,8);
    func_0x0001000e2a84(puVar2);
    __Unwind_Resume(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar52);
  return;
}



/* Entry: 106501538; end: 10650153f;  */

void FUN_106501538(void)

{
  return;
}



/* Entry: 106501540; end: 1065015af;  */

void FUN_106501540(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065015b0; end: 1065015c3;  */

void FUN_1065015b0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1065015c4; end: 106501613;  */

undefined8 FUN_1065015c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf490e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106501614; end: 106501627;  */

void FUN_106501614(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 106501628; end: 106501697;  */

void FUN_106501628(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf51e00();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106501698; end: 106501823;  */

void FUN_106501698(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf461c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c078560();
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106501824; end: 1065018f7; -[SCChatConversationUpdater _logNewViewModels:messageTypes:] */

void FUN_106501824(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  puVar2 = &uStack_100;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  puVar3 = auStack_b8;
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_f0;
    do {
      do {
        if (*plStack_f0 != lVar4) {
          _objc_enumerationMutation(param_4);
        }
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      puVar3 = auStack_b8;
      lVar1 = param_4;
      puVar2 = &uStack_100;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  func_0x00010bdda6a0(param_4,param_2,&PTR____CFConstantStringClassReference_110db9378);
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x1065019d4;
  puStack_168 = &UNK_11084c4a0;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110db9378;
  lStack_160 = param_4;
  puStack_158 = (undefined1 *)puVar2;
  puStack_150 = puVar3;
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar5,param_2,&puStack_180);
  _objc_release(ppuStack_148);
  _objc_release(puStack_150);
  _objc_release(puStack_158);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1065018f8; end: 106501a5f; -[SCChatConversationUpdater _issueLoadingViewModelForConversationId:metadata:] */

void FUN_1065018f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bdda6a0(param_1,param_2,&PTR____CFConstantStringClassReference_110db9378);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1065019d4;
  puStack_68 = &UNK_11084c4a0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db9378;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(ppuStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106501a60; end: 106501ca7; -[SCChatConversationUpdater _regularViewModelWithMessage:previousMessage:previousViewModel:messageGroup:currentTime:conversation:conversationSubtypeMetadata:conversationParticipants:earlierContentExists:snapshot:parsingData:messageAnimationData:snapchattersData:postSnapActionsParams:currentUserSnapchatter:reactionMetadata:] */

void FUN_106501a60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain();
  puVar1 = &UNK_10f381f70;
  func_0x0001000ba800();
  uVar2 = param_13;
  func_0x0001068f0d0c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c29d780(uVar3,param_2,param_3,param_6,param_8,param_9,param_10,param_11,uVar2,param_5,
                      param_14,param_15,param_16,param_17,param_18,param_19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106501ca8; end: 106501d83; -[SCChatConversationUpdater updateWithNewViewModel:token:metricsTracker:] */

void FUN_106501ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106501d84;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106501d84; end: 106501db3;  */

void FUN_106501d84(long param_1,undefined8 param_2)

{
  func_0x00010c183da0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bf74310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didConversationViewModelChange_m_1125baa68,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106501db4; end: 106501e5f; +[SCChatConversationUpdater addViewModel:toArray:updateCount:] */

void FUN_106501db4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c13fd60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010befa120(param_4,param_2,param_3);
      lVar1 = param_3;
      func_0x00010c13fd60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(param_5,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106501e60; end: 106501f3b; -[SCChatConversationUpdater _shouldDisplayChatDeleteMessageForConversation:] */

undefined8 FUN_106501e60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c074920();
  lVar3 = param_3;
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c0cb880();
    if (lVar1 != 0) {
      uVar4 = 0;
      goto LAB_106501f20;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c22f440(uVar2,param_2,lVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c22f460(uVar2,param_2,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
LAB_106501f20:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106501f3c; end: 10650203f; -[SCChatConversationUpdater _feedIdForConversationId:metadata:] */

void FUN_106501f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1064fce8c;
  uStack_40 = 0x1064fce9c;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0be1a0(param_4);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106502040; end: 106502077;  */

void FUN_106502040(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106502078; end: 106502213; -[SCChatConversationUpdater _observeStreaksUpdatesForConversationId:] */

void FUN_106502078(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 400));
  uVar1 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010be0ec40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x180);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010c25c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      uVar6 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 400);
      *(undefined8 *)(param_1 + 400) = uVar6;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar1);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106502214; end: 106502283;  */

void FUN_106502214(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be31280(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106502284; end: 1065023df; -[SCChatConversationUpdater _handleStreakUpdate:] */

void FUN_106502284(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x00010bf9ca60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c13c120();
  _objc_release(param_3);
  lVar2 = *(long *)(param_1 + 0x188);
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_1 + 0x188);
    *(undefined **)(param_1 + 0x188) = puVar3;
  }
  else {
    func_0x00010c2827c0();
    if (lVar1 == lVar2) {
      return;
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x188);
    *(undefined **)(param_1 + 0x188) = puVar3;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126cb370;
    func_0x00010bf373a0(PTR_PTR_1126cb370,param_2,0x16);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    func_0x0001070b69d8(uVar4);
    func_0x00010c1b18e0(puVar5,param_2,uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c0cce60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2786a0(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar4);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9af00(param_1,param_2,uVar4,puVar5,0x16);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1065023e0; end: 106502423; -[SCChatConversationUpdater activeConversationId] */

void FUN_1065023e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf50ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106502424; end: 10650247b; -[SCChatConversationUpdater clear] */

void FUN_106502424(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10650247c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 10650247c; end: 1065024f7;  */

void FUN_10650247c(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bec3500(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bdda6a0(*(undefined8 *)(param_1 + 0x20),param_2,
                      &PTR____CFConstantStringClassReference_110dc1d98);
  lStack_28 = *(long *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1065024f8;
  puStack_30 = &UNK_110842e18;
  func_0x00010c0f7fc0(*(undefined8 *)(lStack_28 + 0x18),param_2,&puStack_48);
  return;
}



/* Entry: 1065024f8; end: 106502507;  */

void FUN_1065024f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106502508; end: 106502597; -[SCChatConversationUpdater _handleAnimationUpdateRequestWithToken:] */

void FUN_106502508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106502598;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106502598; end: 1065025ab;  */

void FUN_106502598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9af10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleConversationUpdateWithT_112584568,
             *(undefined8 *)(param_1 + 0x28),0,4);
  return;
}



/* Entry: 1065025ac; end: 1065028ff; -[SCChatConversationUpdater _parseLocationContextResponse:withError:] */

void FUN_1065025ac(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar1 = param_3;
    func_0x00010bfb8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bfb81c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_1064fce8c;
    uStack_70 = 0x1064fce9c;
    uStack_68 = 0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106502900;
    puStack_a0 = &UNK_11084aef8;
    puStack_88 = puStack_98;
    func_0x00010c0be1a0(*(undefined8 *)(param_1 + 0xb0));
    if ((puStack_88[5] != 0) && (uVar3 = uVar1, func_0x00010c0720c0(), (uVar3 & 1) != 0)) {
      uVar3 = uVar2;
      func_0x00010c09ec20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
      if (uVar4 == 0) {
        func_0x00010c1b0a60(param_1);
      }
      else {
        func_0x00010bddde00(param_1);
      }
      if (*(long *)(param_1 + 0x148) == 0) {
        _objc_initWeak(auStack_c0,param_1);
        uVar5 = *(undefined8 *)(param_1 + 0x138);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c1067e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_c8,auStack_c0);
        uVar7 = uVar6;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 0x148);
        *(undefined8 *)(param_1 + 0x148) = uVar7;
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_destroyWeak(auStack_c8);
        _objc_destroyWeak(auStack_c0);
      }
      uVar3 = uVar2;
      func_0x00010c09ec20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010befd100();
      if (uVar3 == 1) {
        uVar3 = uVar4;
        func_0x00010c26fd00(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bf940(param_1);
        _objc_release(uVar3);
      }
      uVar3 = uVar4;
      func_0x00010c26b700(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bf8e0(param_1);
      _objc_release(uVar3);
      func_0x00010c1bf8c0(param_1);
      func_0x00010bf8d020(uVar4);
      func_0x00010c1bf900(param_1);
      uVar3 = uVar2;
      func_0x00010beef440(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1620e0(param_1);
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106502900; end: 10650296b;  */

void FUN_106502900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10650296c; end: 106502a4b; -[SCChatConversationUpdater _parseGroupLocationContextResponse:withError:] */

/* WARNING: Possible PIC construction at 0x000106502a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106502a38) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10650296c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  if (param_4 == 0) {
    func_0x00010bfced80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar2 = lVar1;
    func_0x00010bf30620(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf8e0(param_1);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf07580(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf8c0(param_1);
    _objc_release(lVar2);
    func_0x00010bf8d020(lVar1);
    dVar3 = (double)lVar1;
  }
  else {
    func_0x00010c1bf8e0(param_1,param_2,0);
    dVar3 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1bf910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3,param_1,PTR_s_setLocationContextHeaderTimestam_11264d868);
  return;
}



/* Entry: 106502a4c; end: 106502b33; -[SCChatConversationUpdater _resetLocationBannerEligibilityIfNecessary:] */

void FUN_106502a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bef0ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0be1a0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106502b34; end: 106502b6b;  */

void FUN_106502b34(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1b0a60(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106502b6c; end: 106502dc3; -[SCChatConversationUpdater _checkLocationUpsellEligible] */

void FUN_106502b6c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(param_1 + 0x160);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar4 = lVar2;
  func_0x00010befe800();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (0x12 < lVar4) {
    uVar5 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1064fce8c;
    uStack_60 = 0x1064fce9c;
    uStack_58 = 0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106502dc4;
    puStack_90 = &UNK_11084aef8;
    puStack_78 = puStack_88;
    func_0x00010c0be1a0(*(undefined8 *)(param_1 + 0xb0));
    if (puStack_78[5] == 0) {
      func_0x00010c1b0a60(param_1);
    }
    else {
      lVar2 = param_1;
      func_0x00010bdddde0();
      lVar4 = param_1;
      func_0x00010c0714e0();
      if ((((uint)lVar2 | (uint)lVar4 ^ 0xffffffff) & 1) == 0) {
        func_0x00010c1b0a60(param_1);
      }
      if ((uint)lVar2 != 0) {
        _objc_initWeak(auStack_b0,param_1);
        uVar5 = *(undefined8 *)(param_1 + 0x140);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_b8,auStack_b0);
        func_0x00010c134e60(uVar5);
        _objc_release(uVar5);
        _objc_destroyWeak(auStack_b8);
        _objc_destroyWeak(auStack_b0);
      }
    }
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(uVar6);
  }
  return;
}



/* Entry: 106502dc4; end: 106502e37;  */

void FUN_106502dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106502e38; end: 106502ee7; -[SCChatConversationUpdater _checkLocationSharingEligibilityForUpsellBanner:friendId:] */

bool FUN_106502e38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c22c5c0();
  if (lVar2 == 2) {
    lVar2 = param_3;
    func_0x00010c2a4ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4b900();
    if ((int)lVar3 == 0) {
      bVar1 = true;
    }
    else {
      lVar3 = param_3;
      func_0x00010c22c5c0(param_3);
      bVar1 = lVar3 == 0;
    }
    _objc_release(lVar2);
  }
  else {
    lVar2 = param_3;
    func_0x00010c22c5c0(param_3);
    bVar1 = lVar2 == 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106502ee8; end: 1065030b7; -[SCChatConversationUpdater _subscribeToArrivalNotifActiveAlert] */

void FUN_106502ee8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1064fce8c;
  uStack_60 = 0x1064fce9c;
  uStack_58 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065030b8;
  puStack_90 = &UNK_11084aef8;
  puStack_78 = puStack_88;
  func_0x00010c0be1a0(*(undefined8 *)(param_1 + 0xb0),param_2,0,&puStack_a8);
  lVar1 = puStack_78[5];
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_b0,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x150);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_b0);
    uVar5 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  return;
}



/* Entry: 1065030b8; end: 1065030ef;  */

void FUN_1065030b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065030f0; end: 10650314b;  */

void FUN_1065030f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25ce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650314c; end: 106503293; -[SCChatConversationUpdater _handleArrivalNotifAlertUpdate:friendId:] */

void FUN_10650314c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bf1f3c0();
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x140);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c134e80(uVar2);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_106503248;
    }
  }
  func_0x00010c1b0a20(param_1);
LAB_106503248:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106503294; end: 1065032cf;  */

void FUN_106503294(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1b0a20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065032d0; end: 10650347b; -[SCChatConversationUpdater _handleMerlinBioSubscriptionUpdate:] */

void FUN_1065032d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1064fce8c;
  uStack_50 = 0x1064fce9c;
  uStack_48 = 0;
  func_0x00010c0be1a0(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c252440(param_3);
  func_0x00010c1b4ce0(param_1);
  uVar1 = puStack_68[5];
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_PTR_1126cb370;
    func_0x00010bf373a0(PTR_PTR_1126cb370);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0cce60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2786a0(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9af00(param_1);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10650347c; end: 1065034b3;  */

void FUN_10650347c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065034b4; end: 10650362b; -[SCChatConversationUpdater _handleMerlinBioUpdate] */

void FUN_1065034b4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1064fce8c;
  uStack_40 = 0x1064fce9c;
  uStack_38 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10650362c;
  puStack_70 = &UNK_11084aef8;
  puStack_58 = puStack_68;
  func_0x00010c0be1a0(*(undefined8 *)(param_1 + 0xb0),param_2,0,&puStack_88);
  uVar1 = puStack_58[5];
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_PTR_1126cb370;
    func_0x00010bf373a0(PTR_PTR_1126cb370);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0cce60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2786a0(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9af00(param_1);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10650362c; end: 106503663;  */

void FUN_10650362c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106503664; end: 1065038f7; -[SCChatConversationUpdater _streakMilestoneInfoForConversation:recipientSnapchatter:currentUserSnapchatter:group:] */

void FUN_106503664(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar9 = (undefined *)0x0;
  if ((param_6 != 0) || (*(long *)(param_1 + 0x1b0) == 0)) goto LAB_1065038b8;
  lVar1 = param_5;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c06d440();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar7 != 0) {
      lVar1 = param_5;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_4;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x00010c08fa60();
      if ((lVar1 == 0) || (lVar1 = lVar3, func_0x00010c08fa60(), lVar1 == 0)) {
        puVar9 = (undefined *)0x0;
      }
      else {
        lVar1 = param_3;
        func_0x00010c25c080();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) goto LAB_10650389c;
        lVar7 = lVar1;
        func_0x00010bf9ca60();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
          lVar7 = lVar1;
          func_0x00010bf529e0();
          if ((int)lVar7 < 1) {
            lVar7 = 0;
            goto LAB_1065037d0;
          }
          lVar4 = lVar1;
          func_0x00010bf529e0();
          if ((int)lVar4 != 0) {
            uVar5 = *(undefined8 *)(param_1 + 0x1b0);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c07fe60();
            _objc_release(uVar5);
            if ((int)uVar6 == 0) goto LAB_10650389c;
            puVar9 = PTR_PTR_1126cb3d0;
            _objc_alloc(PTR_PTR_1126cb3d0);
            lVar7 = *(long *)(param_1 + 0x1b0);
            func_0x00010c269d40(lVar7);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c1041e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0061e0(puVar9,param_2,(long)(int)lVar4,lVar8,lVar2,lVar3);
            _objc_release(lVar8);
            goto LAB_1065037d4;
          }
LAB_10650389c:
          puVar9 = (undefined *)0x0;
        }
        else {
LAB_1065037d0:
          puVar9 = (undefined *)0x0;
LAB_1065037d4:
          _objc_release(lVar7);
        }
        _objc_release(lVar1);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_1065038b8;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_1065038b8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1065038f8; end: 106503a2b; -[SCChatConversationUpdater _getCommunityDisplayName:] */

void FUN_1065038f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf33620();
  if (lVar2 != 1) {
    uVar6 = 0;
    goto LAB_106503a0c;
  }
  lVar2 = lVar1;
  func_0x00010bf33480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
LAB_106503a00:
    uVar6 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf8fac0();
    _objc_release(uVar4);
    if ((int)uVar6 == 0) goto LAB_106503a00;
    uVar5 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf625c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(lVar3);
LAB_106503a0c:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106503a2c; end: 106503a37; -[SCChatConversationUpdater conversationViewModel] */

void FUN_106503a2c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1c0,1);
  return;
}



/* Entry: 106503a38; end: 106503a3f; -[SCChatConversationUpdater setConversationViewModel:] */

void FUN_106503a38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106503a40; end: 106503a4b; -[SCChatConversationUpdater activeConversationData] */

void FUN_106503a40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1c8,1);
  return;
}



/* Entry: 106503a4c; end: 106503a53; -[SCChatConversationUpdater setActiveConversationData:] */

void FUN_106503a4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106503a54; end: 106503a5b; -[SCChatConversationUpdater lastUpdateTime] */

undefined8 FUN_106503a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 106503a5c; end: 106503a63; -[SCChatConversationUpdater setLastUpdateTime:] */

void FUN_106503a5c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x1d0) = param_1;
  return;
}



/* Entry: 106503a64; end: 106503a6b; -[SCChatConversationUpdater numberOfMessagesFromLastUpdate] */

undefined8 FUN_106503a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 106503a6c; end: 106503a73; -[SCChatConversationUpdater setNumberOfMessagesFromLastUpdate:] */

void FUN_106503a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1d8) = param_3;
  return;
}



/* Entry: 106503a74; end: 106503a7f; -[SCChatConversationUpdater configuration] */

void FUN_106503a74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1e0,1);
  return;
}



/* Entry: 106503a80; end: 106503a87; -[SCChatConversationUpdater setConfiguration:] */

void FUN_106503a80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106503a88; end: 106503a93; -[SCChatConversationUpdater metricsTracker] */

void FUN_106503a88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1e8,1);
  return;
}



/* Entry: 106503a94; end: 106503a9b; -[SCChatConversationUpdater setMetricsTracker:] */

void FUN_106503a94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106503a9c; end: 106503aa7; -[SCChatConversationUpdater locationContextTimezoneInfo] */

void FUN_106503a9c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1f0,1);
  return;
}



/* Entry: 106503aa8; end: 106503aaf; -[SCChatConversationUpdater setLocationContextTimezoneInfo:] */

void FUN_106503aa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106503ab0; end: 106503abb; -[SCChatConversationUpdater locationContextHeaderLocation] */

void FUN_106503ab0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1f8,1);
  return;
}



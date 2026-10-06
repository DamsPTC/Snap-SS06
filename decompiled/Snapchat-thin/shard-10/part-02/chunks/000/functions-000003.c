/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079a6954; end: 1079a6a1b;  */

undefined1 FUN_1079a6954(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bd800(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1079a6a1c; end: 1079a6a43;  */

void FUN_1079a6a1c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1079a6a44; end: 1079a6d2f; -[SCDiscoverFeedStoriesRequestSender _sendRequestWithStoriesRequest:query:parameters:completion:parsedCompletion:interactionHistoryArray:] */

void FUN_1079a6a44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1079a6ca0;
  _objc_initWeak(auStack_68,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1079a6d30;
  puStack_a8 = &UNK_110931590;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  uStack_a0 = param_5;
  _objc_retain(param_7);
  uStack_80 = param_7;
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_4);
  uStack_90 = param_4;
  _objc_retain(param_6);
  uStack_78 = param_6;
  _objc_retain(param_8);
  ppuVar2 = &puStack_c0;
  uStack_88 = param_8;
  _objc_retainBlock();
  uVar3 = param_5;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c2320;
  func_0x00010c2a1300(PTR_PTR_1126c2320);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c067e20();
  _objc_release(puVar6);
  _objc_release(lVar5);
  iVar9 = 0;
  if (lVar1 != 0) {
    iVar9 = (int)uVar4;
  }
  if (iVar9 == 1) {
    lVar5 = *(long *)(param_1 + 200);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) goto LAB_1079a6c40;
    lVar7 = *(long *)(param_1 + 200);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    _objc_release(lVar5);
    if (lVar8 != 0) goto LAB_1079a6c40;
    func_0x00010beea520((double)lVar1,param_1);
  }
  else {
LAB_1079a6c40:
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_78);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_80);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
LAB_1079a6ca0:
  _objc_release();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079a6d30; end: 1079a6fcf;  */

void FUN_1079a6d30(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = lVar2 + 0x40;
    _objc_loadWeakRetained();
    if (lVar3 != 0) {
      lVar4 = lVar2;
      func_0x00010beb7220();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      if ((int)lVar4 == 0) {
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_1079a6fd0;
        puStack_b0 = &UNK_1108865d8;
        _objc_copyWeak(auStack_78,param_1 + 0x50);
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar8);
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        uStack_a8 = uVar8;
        _objc_retain(uVar9);
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        uStack_a0 = uVar9;
        _objc_retain(uVar8);
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        uStack_98 = uVar8;
        _objc_retain(uVar9);
        uVar8 = *(undefined8 *)(param_1 + 0x40);
        uStack_88 = uVar9;
        _objc_retain(uVar8);
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        uStack_80 = uVar8;
        _objc_retain(uVar9);
        ppuVar5 = &puStack_c8;
        uStack_90 = uVar9;
        _objc_retainBlock(ppuVar5);
        puStack_f8 = puVar1;
        uStack_f0 = 0xc2000000;
        pcStack_e8 = FUN_1079a7038;
        puStack_e0 = &UNK_1108538b0;
        uVar8 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar8);
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        uStack_d8 = uVar8;
        _objc_retain(uVar9);
        ppuVar6 = &puStack_f8;
        uStack_d0 = uVar9;
        _objc_retainBlock(ppuVar6);
        uVar8 = *(undefined8 *)(lVar2 + 0x28);
        func_0x00010be0a040(lVar2);
        func_0x00010c106e80(uVar8);
        uVar8 = *(undefined8 *)(lVar2 + 0x18);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c11de00(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c11de00(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa48e0(uVar8);
        _objc_release(lVar7);
        _objc_release(lVar4);
        _objc_release(uVar8);
        _objc_release(ppuVar6);
        _objc_release(uStack_d0);
        _objc_release(uStack_d8);
        _objc_release(ppuVar5);
        _objc_release(uStack_90);
        _objc_release(uStack_80);
        _objc_release(uStack_88);
        _objc_release(uStack_98);
        _objc_release(uStack_a0);
        _objc_release(uStack_a8);
        _objc_destroyWeak(auStack_78);
      }
      else {
        func_0x00010be9ffc0(lVar2);
      }
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1079a6fd0; end: 1079a7037;  */

void FUN_1079a6fd0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9ffc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a7038; end: 1079a7057;  */

void FUN_1079a7038(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001079a7054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,param_2,0,0);
  return;
}



/* Entry: 1079a7058; end: 1079a7237; -[SCDiscoverFeedStoriesRequestSender _sendRequestOverFrontierGrpcWithStoriesRequest:useBatchEndpoint:parameters:parsedCompletion:] */

void FUN_1079a7058(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdc9140(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      func_0x00010bef9140(puVar2,param_2,lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_1079a731c;
      puStack_98 = &UNK_1109f31a8;
      _objc_retain(lVar1);
      lStack_90 = lVar1;
      _objc_retain(param_6);
      uStack_88 = param_6;
      func_0x00010c258620(uVar5,param_2,param_3,puVar2,&puStack_b0);
      _objc_release(uVar5);
      _objc_release(uStack_88);
      lVar4 = lStack_90;
    }
    else {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1079a7238;
      puStack_68 = &UNK_1109f3178;
      _objc_retain(lVar1);
      lStack_60 = lVar1;
      _objc_retain(param_6);
      uStack_58 = param_6;
      func_0x00010bf17260(uVar5,param_2,param_3,puVar2,&puStack_80);
      _objc_release(uVar5);
      _objc_release(uStack_58);
      lVar4 = lStack_60;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1079a7238; end: 1079a72ff;  */

void FUN_1079a7238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1079a7300; end: 1079a731b;  */

void FUN_1079a7300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079a7318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x20),1,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1079a731c; end: 1079a73e3;  */

void FUN_1079a731c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1079a73e4; end: 1079a73ff;  */

void FUN_1079a73e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079a73fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),0,0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1079a7400; end: 1079a74df; -[SCDiscoverFeedStoriesRequestSender _shouldUseFrontierGrpcForParameters:parsedCompletion:] */

undefined8 FUN_1079a7400(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2320;
    func_0x00010bfbb380(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf1f320(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = param_3;
      func_0x00010bfa43a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf4b900();
      _objc_release(uVar1);
      goto LAB_1079a74b8;
    }
  }
  uVar3 = 0;
LAB_1079a74b8:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1079a74e0; end: 1079a7733; -[SCDiscoverFeedStoriesRequestSender _sendRequestWithStoriesRequest:query:parameters:completion:parsedCompletion:interactionHistoryArray:accessToken:useFrontierGrpc:] */

void FUN_1079a74e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x50));
  _objc_initWeak(auStack_70,param_1);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1079a7734;
  puStack_c0 = &UNK_1109f31d8;
  _objc_copyWeak(auStack_80,auStack_70);
  _objc_retain(param_3);
  uStack_b8 = param_3;
  _objc_retain(param_4);
  uStack_b0 = param_4;
  _objc_retain(param_5);
  uStack_a8 = param_5;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_retain(param_7);
  uStack_88 = param_7;
  _objc_retain(param_8);
  uStack_a0 = param_8;
  _objc_retain(param_9);
  uStack_98 = param_9;
  uStack_78 = param_10;
  ppuVar1 = &puStack_d8;
  _objc_retainBlock(ppuVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  puVar2 = auStack_68;
  _objc_loadWeakRetained(puVar2);
  func_0x00010846e648(0x3ff0000000000000,5,2,param_1,ppuVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079a7734; end: 1079a77db;  */

void FUN_1079a7734(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  func_0x00010be9ffe0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a77dc; end: 1079a83eb; -[SCDiscoverFeedStoriesRequestSender _sendRequestWithStoriesRequest:query:parameters:completion:parsedCompletion:interactionHistoryArray:accessToken:useFrontierGrpc:retryTimer:] */

void FUN_1079a77dc(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined **param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  char param_10,undefined4 param_11,undefined8 param_12)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 *puVar32;
  byte bVar33;
  undefined **ppuVar34;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  lVar1 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + 0x38);
  uVar31 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = param_4;
  func_0x00010c11d960(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_8;
  FUN_107bf2ff8(param_8,lVar1,uVar30,uVar31,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c1ebd20(param_3);
  ppuVar5 = param_5;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar5 == (undefined **)0x0) {
    lVar29 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cb60(param_3);
    _objc_release(lVar29);
  }
  else {
    func_0x00010c17cb60(param_3);
  }
  _objc_release(ppuVar5);
  uVar31 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar31;
  func_0x00010bfd46e0();
  _objc_release(uVar31);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  func_0x00010be0a040();
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  ppuVar5 = param_5;
  func_0x00010bfa43a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc9500(uVar4);
  _objc_release(ppuVar5);
  ppuVar5 = *(undefined ***)(param_1 + 0xa8);
  func_0x00010c2311a0();
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bfc9520();
  _objc_retainAutoreleasedReturnValue();
  if ((int)ppuVar5 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = uVar3;
    func_0x00010bf51e00();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar17;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0d42e0();
  uVar9 = uVar16;
  FUN_1079a5778(uVar16,uVar30,uVar25,uVar8,(uint)uVar31 ^ 1,*(undefined8 *)(param_1 + 0x90),uVar4,
                *(undefined8 *)(param_1 + 200));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar25);
  _objc_release(uVar17);
  _objc_release(uVar6);
  if ((int)ppuVar5 != 0) {
    _objc_release(uVar16);
  }
  func_0x00010c17cd40(param_3);
  ppuVar10 = param_5;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar34 = ppuVar10;
  func_0x00010bf4b900();
  _objc_release(ppuVar10);
  if ((int)ppuVar34 != 0) {
    uVar31 = *(undefined8 *)(param_1 + 0x78);
    uVar30 = uVar9;
    func_0x00010c09ea00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1100(uVar31);
    _objc_release(uVar30);
  }
  func_0x00010c21ab00(param_3);
  ppuVar10 = param_5;
  func_0x00010bfa4380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar10 != (undefined **)0x0) {
    puVar11 = PTR_PTR_1126c1100;
    _objc_opt_new(PTR_PTR_1126c1100);
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    ppuVar10 = param_5;
    func_0x00010bfa4380();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar10;
    func_0x00010bf52a60();
    if (ppuVar5 != (undefined **)0x0) {
      lVar29 = *plStack_140;
      do {
        ppuVar34 = (undefined **)0x0;
        do {
          if (*plStack_140 != lVar29) {
            _objc_enumerationMutation(ppuVar10);
          }
          uVar30 = *(undefined8 *)(lStack_148 + (long)ppuVar34 * 8);
          ppuVar12 = param_5;
          func_0x00010bfa4380(param_5);
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          func_0x00010c067fc0(uVar30);
          func_0x00010c1adcc0(puVar11);
          _objc_release(ppuVar13);
          _objc_release(ppuVar12);
          ppuVar34 = (undefined **)((long)ppuVar34 + 1);
        } while (ppuVar5 != ppuVar34);
        ppuVar5 = ppuVar10;
        func_0x00010bf52a60();
      } while (ppuVar5 != (undefined **)0x0);
    }
    ppuVar5 = (undefined **)0x0;
    _objc_release(ppuVar10);
    func_0x00010c1cf4a0(param_3);
    _objc_release(puVar11);
  }
  ppuVar10 = param_5;
  func_0x00010c0f1e60();
  if (((long)ppuVar10 - 2U < 8) && ((0x87U >> (ulong)((uint)((long)ppuVar10 - 2U) & 0x1f) & 1) != 0)
     ) {
    func_0x00010c1ec040(param_3);
  }
  lVar29 = param_1;
  func_0x00010be3fb20();
  if ((int)lVar29 != 0) {
    func_0x00010c1ec040(param_3);
  }
  puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c26f320(puVar11);
  func_0x00010c1ec1a0(param_3);
  func_0x00010c1d64a0(param_3);
  iVar28 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x0001005929c0();
  if (iVar28 != 0) {
    puVar14 = PTR_PTR_1126c1108;
    _objc_opt_new(PTR_PTR_1126c1108);
    puVar15 = PTR_PTR_1126b7708;
    _objc_alloc_init(PTR_PTR_1126b7708);
    func_0x00010c19b0e0(puVar14);
    func_0x00010c19b160(param_3);
    _objc_release(puVar15);
    _objc_release(puVar14);
  }
  uVar2 = param_4;
  func_0x00010846e5b0(param_4,*(undefined8 *)(param_1 + 0x88));
  if ((uVar2 & 1) == 0) {
    ppuVar10 = param_5;
    func_0x00010bfa43a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar34 = ppuVar10;
    func_0x00010bf529e0();
    if (ppuVar34 == (undefined **)0x0) {
      puVar32 = (undefined1 *)0x1;
    }
    else {
      ppuVar34 = param_5;
      func_0x00010bfa43a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar34;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar5;
      func_0x00010c067ec0();
      puVar32 = (undefined1 *)(ulong)((int)ppuVar12 == 0xdd);
      _objc_release(ppuVar5);
      _objc_release(ppuVar34);
    }
    _objc_release(ppuVar10);
  }
  else {
    puVar32 = (undefined1 *)0x1;
  }
  uVar31 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar31;
  func_0x00010c118120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar31);
  uVar16 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x000108487704(uVar30,uVar16,0,uVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(uVar16);
  func_0x00010c166000(param_3);
  FUN_107bf38a4(param_8,*(undefined8 *)(param_1 + 0x30),uVar3);
  uVar2 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  uVar18 = uVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  _objc_opt_respondsToSelector(uVar18,PTR_s_discoverQueryCoordinator_willSen_1125be3b0);
  if ((uVar19 & 1) != 0) {
    func_0x00010bf82820(uVar18);
  }
  if (param_10 == '\0') {
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf95de0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    if ((int)puVar32 == 0) {
      func_0x00010c2588e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf17280();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar29 = param_1;
    func_0x00010bdc9140();
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = 0;
    uStack_160 = 0x2020000000;
    uStack_158 = 0;
    lVar20 = param_3;
    puStack_168 = &uStack_170;
    func_0x00010bfa43c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_1079a83ec;
    puStack_180 = &UNK_11087e858;
    puStack_178 = &uStack_170;
    func_0x00010bf980c0();
    _objc_release(lVar20);
    lVar20 = param_3;
    func_0x00010bfa4340();
    lVar21 = param_3;
    func_0x00010bfa43c0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010bf529e0();
    if (lVar22 == 0) {
      bVar33 = 1;
    }
    else {
      bVar33 = *(byte *)(puStack_168 + 3);
    }
    _objc_release(lVar21);
    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((int)lVar20 == 0 & bVar33) == 1) {
      uVar19 = param_4;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c136720(param_3);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bfa4340(param_3);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = param_3;
      func_0x00010bfa43c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar20);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(uVar19);
      uVar25 = *(undefined8 *)(param_1 + 0xc0);
      func_0x00010c269d40(uVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c133040();
      _objc_release(uVar25);
      _objc_release(puVar15);
    }
    lVar20 = param_3;
    func_0x000108f130c0(param_3,param_9,uVar16,uVar17,lVar29);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_1a0,param_1);
    func_0x00010bec60e0(param_1);
    func_0x00010be5dfc0(param_1);
    uVar25 = *(undefined8 *)(param_1 + 0x58);
    puVar26 = (undefined1 *)(param_1 + 0x40);
    _objc_loadWeakRetained();
    puVar27 = puVar26;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_208 = puVar14;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_1079a840c;
    puStack_1f0 = &UNK_1109f3208;
    ppuVar5 = &puStack_208;
    _objc_copyWeak(auStack_1b0,auStack_1a0);
    uStack_1a8 = SUB81(puVar32,0);
    _objc_retain(param_6);
    uStack_1b8 = param_6;
    _objc_retain(param_5);
    ppuStack_1e8 = param_5;
    _objc_retain(param_12);
    uStack_1e0 = param_12;
    _objc_retain(puVar11);
    puStack_1d8 = puVar11;
    _objc_retain(param_4);
    uStack_1d0 = param_4;
    _objc_retain(uVar17);
    puVar32 = puVar27;
    uStack_1c8 = uVar17;
    lStack_1c0 = lVar1;
    func_0x00010c25f5e0(uVar25);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(uStack_1c8);
    _objc_release(uStack_1d0);
    _objc_release(puStack_1d8);
    _objc_release(uStack_1e0);
    _objc_release(ppuStack_1e8);
    _objc_release(uStack_1b8);
    _objc_destroyWeak(auStack_1b0);
    _objc_destroyWeak(auStack_1a0);
    _objc_release(lVar20);
    __Block_object_dispose(&uStack_170,8);
    _objc_release(lVar29);
    _objc_release(uVar17);
    _objc_release(uVar16);
  }
  else {
    func_0x00010be9ff00(param_1);
  }
  _objc_release(uVar18);
  _objc_release(uVar2);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(puVar11);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar5 + 0xb);
  _objc_destroyWeak(auStack_1a0);
  iVar28 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  if (iVar28 != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 1;
  *puVar32 = 1;
  return;
}



/* Entry: 1079a83ec; end: 1079a840b;  */

void FUN_1079a83ec(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  if (param_2 != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *param_4 = 1;
  return;
}



/* Entry: 1079a840c; end: 1079a84cf;  */

void FUN_1079a840c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82080();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079a84d0; end: 1079a8a53; -[SCDiscoverFeedStoriesRequestSender _processResponse:isBatchEndpoint:completion:parameters:data:error:retryTimer:requestDate:query:path:request:requestId:] */

void FUN_1079a84d0(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,ulong param_12,undefined4 param_13,
                  undefined4 param_14,undefined8 param_15)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_15);
  _objc_retain(param_11);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_11);
  _objc_release(puVar1);
  uVar12 = *(undefined8 *)(param_2 + 0xa0);
  lVar2 = param_2;
  func_0x00010bdf67c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_7;
  func_0x00010bfa43a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  FUN_1079a592c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852cd74(uVar12,lVar2,uVar3,&PTR____CFConstantStringClassReference_110ea7af8,
                      (long)(param_1 * 1000.0));
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0f1e60();
  uVar4 = param_12;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar11 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010c0f66a0(param_15);
  _objc_release(param_15);
  func_0x00010c08fa60(param_8);
  func_0x00010c0b0da0(uVar11);
  if (param_4 == 0) {
    if (param_9 != 0) {
      func_0x00010bf3ec40();
    }
  }
  else {
    func_0x00010c252ee0(param_4);
  }
  uVar12 = *(undefined8 *)(param_2 + 0x78);
  uVar11 = param_7;
  func_0x00010bfa43a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  FUN_1079a592c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0dc0(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar11);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1079a8a54;
  puStack_90 = &UNK_1109f3238;
  _objc_retain(param_12);
  uStack_88 = param_12;
  _objc_retain(param_10);
  uStack_80 = param_10;
  ppuVar5 = &puStack_a8;
  _objc_retainBlock();
  if (param_9 == 0) {
    uVar4 = param_12;
    func_0x00010c11d960(param_12);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d04e04();
    _objc_release(uVar4);
    (**(code **)(param_6 + 0x10))(param_6,param_4,param_8,0,ppuVar5,0);
    goto LAB_1079a89d8;
  }
  lVar2 = param_4;
  func_0x00010c252ee0();
  if (lVar2 - 500U < 100) {
    uVar4 = param_12;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0720c0();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_12;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0720c0();
      if ((int)uVar7 == 0) {
        uVar7 = param_12;
        func_0x00010c11d960();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar4);
        if ((uVar9 & 1) == 0) goto LAB_1079a88c0;
        goto LAB_1079a895c;
      }
      _objc_release(uVar6);
    }
    _objc_release(uVar4);
LAB_1079a895c:
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c252ee0(param_4);
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,param_4,param_8,param_9,0,puVar10);
    _objc_release(puVar10);
  }
  else {
    lVar2 = param_4;
    func_0x00010c252ee0();
    if (lVar2 - 400U < 100) goto LAB_1079a895c;
LAB_1079a88c0:
    param_2 = param_2 + 0xd8;
    _objc_loadWeakRetained(param_2);
    lVar2 = param_2;
    func_0x00010bf5fc60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar5;
    (*(code *)ppuVar5[2])(ppuVar5,lVar2);
    _objc_release(lVar2);
    _objc_release(param_2);
    if (((ulong)ppuVar8 & 1) == 0) goto LAB_1079a895c;
  }
  uVar4 = param_12;
  func_0x00010c11d960(param_12);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107d04e04();
  _objc_release(uVar4);
LAB_1079a89d8:
  _objc_release(ppuVar5);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(puVar1);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1079a8a54; end: 1079a8a7b;  */

undefined8 FUN_1079a8a54(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != param_2) {
    func_0x00010c069d00();
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c150090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_scheduleNextAttempt_112631a40);
  return uVar1;
}



/* Entry: 1079a8a7c; end: 1079a8c93; -[SCDiscoverFeedStoriesRequestSender _additionalHeadersForParameters:] */

undefined * FUN_1079a8a7c(long param_1,undefined8 param_2,undefined8 ***param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = param_3;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar5 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  pppuVar1 = pppuVar5;
  func_0x00010c067ec0();
  _objc_release(pppuVar5);
  _objc_release(param_3);
  pppuVar5 = (undefined8 ***)0x0;
  iVar7 = (int)pppuVar1;
  if (iVar7 < 0x107) {
    if (iVar7 == 0xf0) {
      pppuVar2 = *(undefined8 ****)(param_1 + 0x88);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar1 = (undefined8 ***)PTR_PTR_1126c2320;
      func_0x00010c24c0c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar7 != 0x102) goto LAB_1079a8c14;
LAB_1079a8b18:
      pppuVar2 = *(undefined8 ****)(param_1 + 0x88);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar1 = (undefined8 ***)PTR_PTR_1126c2320;
      func_0x00010c0cee60();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_1079a8be8:
    pppuVar5 = pppuVar2;
    pppuVar4 = pppuVar1;
    func_0x00010c25d300();
    _objc_retainAutoreleasedReturnValue();
LAB_1079a8c04:
    _objc_release(pppuVar1);
    _objc_release(pppuVar2);
  }
  else {
    if (iVar7 == 0x10b) {
      pppuVar2 = *(undefined8 ****)(param_1 + 0x88);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar1 = pppuVar2;
      func_0x00010c24afa0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar1;
      func_0x00010c098520();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar3;
      func_0x00010c142040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar3);
      goto LAB_1079a8c04;
    }
    if (iVar7 == 0x109) {
      pppuVar2 = *(undefined8 ****)(param_1 + 0x88);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar1 = (undefined8 ***)PTR_PTR_1126c2320;
      func_0x00010c0cede0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1079a8be8;
    }
    if (iVar7 == 0x107) goto LAB_1079a8b18;
  }
LAB_1079a8c14:
  pppuVar1 = pppuVar5;
  func_0x00010c08fa60();
  if (pppuVar1 == (undefined8 ***)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    pppuVar4 = &ppuStack_40;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_40 = pppuVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(pppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar4);
  pppuVar5 = pppuVar4;
  func_0x00010c0f1e60();
  if ((pppuVar5 != (undefined8 ***)0x5) &&
     (pppuVar5 = pppuVar4, func_0x00010c0f1e60(), pppuVar5 != (undefined8 ***)0x3)) {
    pppuVar5 = pppuVar4;
    func_0x00010c0f1e60();
    puVar6 = (undefined *)0x8;
    if (pppuVar5 != (undefined8 ***)0x9) {
      puVar6 = (undefined *)0x0;
    }
    goto LAB_1079a8d78;
  }
  pppuVar5 = pppuVar4;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar1 = pppuVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar1;
  func_0x00010c067ec0();
  _objc_release(pppuVar1);
  _objc_release(pppuVar5);
  puVar6 = (undefined *)0x2;
  iVar7 = (int)pppuVar2;
  if (iVar7 < 0x107) {
    if (iVar7 - 2U < 2) {
      puVar6 = (undefined *)0x0;
      goto LAB_1079a8d78;
    }
    if (iVar7 == 0x102) goto LAB_1079a8d78;
  }
  else {
    if (iVar7 == 0x10b) {
      puVar6 = (undefined *)0xb;
      goto LAB_1079a8d78;
    }
    if (iVar7 == 0x109) goto LAB_1079a8d78;
    if (iVar7 == 0x107) {
      puVar6 = (undefined *)0xa;
      goto LAB_1079a8d78;
    }
  }
  puVar6 = (undefined *)0x5;
LAB_1079a8d78:
  _objc_release(pppuVar4);
  return puVar6;
}



/* Entry: 1079a8c94; end: 1079a8d93; -[SCDiscoverFeedStoriesRequestSender _endpointSourceForParameters:] */

undefined8 FUN_1079a8c94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f1e60();
  if ((lVar1 != 5) && (lVar1 = param_3, func_0x00010c0f1e60(), lVar1 != 3)) {
    lVar1 = param_3;
    func_0x00010c0f1e60();
    uVar4 = 8;
    if (lVar1 != 9) {
      uVar4 = 0;
    }
    goto LAB_1079a8d78;
  }
  lVar1 = param_3;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067ec0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = 2;
  iVar5 = (int)lVar3;
  if (iVar5 < 0x107) {
    if (iVar5 - 2U < 2) {
      uVar4 = 0;
      goto LAB_1079a8d78;
    }
    if (iVar5 == 0x102) goto LAB_1079a8d78;
  }
  else {
    if (iVar5 == 0x10b) {
      uVar4 = 0xb;
      goto LAB_1079a8d78;
    }
    if (iVar5 == 0x109) goto LAB_1079a8d78;
    if (iVar5 == 0x107) {
      uVar4 = 10;
      goto LAB_1079a8d78;
    }
  }
  uVar4 = 5;
LAB_1079a8d78:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1079a8d94; end: 1079a8d97; -[SCDiscoverFeedStoriesRequestSender _submitInternalRequestNotificationWithText:] */

void FUN_1079a8d94(void)

{
  return;
}



/* Entry: 1079a8d98; end: 1079a8df7; -[SCDiscoverFeedStoriesRequestSender _presentStoriesRequestNotificationWithText:] */

void FUN_1079a8d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079a8df8; end: 1079a8e03; -[SCDiscoverFeedStoriesRequestSender _currentCallType] */

undefined ** FUN_1079a8df8(void)

{
  return &PTR____CFConstantStringClassReference_110ea7b58;
}



/* Entry: 1079a8e04; end: 1079a8ec7; -[SCDiscoverFeedStoriesRequestSender _isDiscoverSubfeedWithParameters:] */

byte FUN_1079a8e04(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0f1e60(param_3);
  lVar3 = param_3;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 1) {
    lVar4 = param_3;
    func_0x00010bfa43a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c067ec0();
    bVar1 = (int)lVar6 == 3;
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return lVar2 == 5 & bVar1;
}



/* Entry: 1079a8ec8; end: 1079a8ecb; -[SCDiscoverFeedStoriesRequestSender _maybeDebugLogRequestWithQuery:parameters:useBatchEndpoint:path:additionalHeaders:] */

void FUN_1079a8ec8(void)

{
  return;
}



/* Entry: 1079a8ecc; end: 1079a8ee3; -[SCDiscoverFeedStoriesRequestSender queryCoordinator] */

void FUN_1079a8ecc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079a8ee4; end: 1079a8eef; -[SCDiscoverFeedStoriesRequestSender setQueryCoordinator:] */

void FUN_1079a8ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 1079a8ef0; end: 1079a9043; -[SCDiscoverFeedStoriesRequestSender .cxx_destruct] */

void FUN_1079a8ef0(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd8);
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
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 1079a9044; end: 1079a90b7; -[UNISCFrontierFrontierService initWithUnifiedGrpcService:] */

undefined1 * FUN_1079a9044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9078;
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



/* Entry: 1079a90b8; end: 1079a919b; -[UNISCFrontierFrontierService storiesForMixedFeedWithRequest:callOptionsBuilder:handler:] */

void FUN_1079a90b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b7600;
  _objc_opt_class(PTR_PTR_1126b7600);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ea7b78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1079a919c; end: 1079a927f; -[UNISCFrontierFrontierService batchStoriesForMixedFeedWithRequest:callOptionsBuilder:handler:] */

void FUN_1079a919c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b7608;
  _objc_opt_class(PTR_PTR_1126b7608);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ea7b98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1079a9280; end: 1079a9363; -[UNISCFrontierFrontierService fulfillStoryAdsWithRequest:callOptionsBuilder:handler:] */

void FUN_1079a9280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d5a00;
  _objc_opt_class(PTR_PTR_1126d5a00);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ea7bb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1079a9364; end: 1079a936f; -[UNISCFrontierFrontierService .cxx_destruct] */

void FUN_1079a9364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079a9370; end: 1079a9403; -[SCDiscoverFeedCardResponseProcessor initWithPerformer:discoverFeedDataMutator:] */

undefined1 *
FUN_1079a9370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9080;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079a9404; end: 1079a94d3; -[SCDiscoverFeedCardResponseProcessor handleFeedCardResponse:completion:] */

void FUN_1079a9404(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010bfa43a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1079a94d4; end: 1079a9667; -[SCDiscoverFeedCardResponseProcessor _debugCreateFeedForFeedType:WithLegacyStoryTypes:maxFromEach:completion:] */

void FUN_1079a94d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    _objc_retain(param_4);
    _objc_retain(puVar1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010bf07020(lVar2);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(param_6);
    _objc_release(puVar1);
    _objc_release(param_4);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1079a9668; end: 1079a9abb;  */

void FUN_1079a9668(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf00ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar12);
  lVar11 = lVar12;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (lVar11 == 0) {
      _objc_release(lVar12);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      if (0 < *(long *)(param_1 + 0x30)) {
        lVar11 = 0;
        do {
          lVar15 = *(long *)(param_1 + 0x20);
          _objc_retain(lVar15);
          lVar5 = lVar15;
          func_0x00010bf52a60();
          lVar12 = lRam0000000000000000;
          while (lVar5 != 0) {
            lVar16 = 0;
            do {
              if (lRam0000000000000000 != lVar12) {
                _objc_enumerationMutation(lVar15);
              }
              lVar17 = *(long *)(param_1 + 0x28);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar17;
              func_0x00010c089820();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar17);
              if (lVar6 != 0) {
                func_0x00010befa120(puVar1);
                uVar3 = *(undefined8 *)(param_1 + 0x28);
                func_0x00010c0e00e0(uVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c12cd60();
                _objc_release(uVar3);
              }
              _objc_release(lVar6);
              lVar16 = lVar16 + 1;
            } while (lVar5 != lVar16);
            lVar5 = lVar15;
            func_0x00010bf52a60();
          }
          _objc_release(lVar15);
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(long *)(param_1 + 0x30));
      }
      puVar7 = PTR_PTR_1126cf2f8;
      _objc_alloc(PTR_PTR_1126cf2f8);
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e740(puVar7);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126c2248;
      _objc_alloc(PTR_PTR_1126c2248);
      func_0x00010c0126e0();
      puVar9 = PTR_PTR_1126cf300;
      _objc_alloc(PTR_PTR_1126cf300);
      func_0x00010c012760();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001079a9ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),1);
      return;
    }
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar12);
      }
      uVar13 = *(ulong *)(lVar15 * 8);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar1);
      _objc_retain(param_2);
      lVar16 = param_2;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar16 != 0) {
        lVar17 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(param_2);
          }
          uVar14 = *(ulong *)(lVar17 * 8);
          uVar2 = uVar14;
          func_0x00010c25b720();
          uVar4 = uVar13;
          func_0x00010c067fc0();
          if ((uVar2 == uVar4) && (func_0x00010c0741a0(), (uVar14 & 1) == 0)) {
            uVar3 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010c0e00e0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(uVar3);
            uVar4 = *(ulong *)(param_1 + 0x28);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar4;
            func_0x00010bf529e0();
            uVar14 = *(ulong *)(param_1 + 0x30);
            _objc_release(uVar4);
            if (uVar14 <= uVar2) goto LAB_1079a984c;
          }
          lVar17 = lVar17 + 1;
        } while (lVar16 != lVar17);
        lVar16 = param_2;
        func_0x00010bf52a60();
      }
LAB_1079a984c:
      _objc_release(param_2);
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar11);
    lVar11 = lVar12;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1079a9abc; end: 1079a9acb;  */

void FUN_1079a9abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079a9ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 1079a9acc; end: 1079a9af3; -[SCDiscoverFeedCardResponseProcessor .cxx_destruct] */

void FUN_1079a9acc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079a9af4; end: 1079a9f3b; -[SCDiscoverFeedStoriesResponseProcessor initWithPerformer:userSession:readReceiptCoordinator:interactionHistoryManager:discoverFeedDataAccessor:discoverFeedDataMutator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:adConfigProvider:sectionsCoordinator:circumstanceEngine:snapchattersDataFetcher:promotedStoriesLogger:storiesConfigProvider:rtusClientCacheManager:adRenderDataParser:spotlightDisplayOrdererFactory:contentObjectResolver:] */

undefined8 *
FUN_1079a9af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_70 = PTR_PTR_1126f9088;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_8);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cec38;
    _objc_alloc();
    func_0x00010c00cca0();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d5a08;
    _objc_alloc();
    func_0x00010c034c20();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1080;
    _objc_alloc();
    uVar2 = param_16;
    func_0x00010c269d40(param_16);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c142560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cb40();
    uVar5 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_20;
    _objc_release(uVar2);
  }
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



/* Entry: 1079a9f3c; end: 1079aa20f; -[SCDiscoverFeedStoriesResponseProcessor handleStoriesBatchResponse:existingSections:prependExistingStoryDedupeFps:query:updatingBlock:completion:] */

void FUN_1079a9f3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_loadWeakRetained(param_1 + 0xb0);
  _objc_release();
  lVar1 = param_1 + 0xb0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0xb0;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf82800(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfdb540();
  if ((int)uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c142580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be84a60(param_1);
    _objc_release(uVar5);
  }
  func_0x00010847164c(param_3,*(undefined8 *)(param_1 + 0xa0));
  _objc_initWeak(auStack_68,param_1);
  uVar5 = param_3;
  func_0x00010c258b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1079aa210;
  puStack_b0 = &UNK_1109f32b8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_a8 = param_3;
  _objc_retain(puVar4);
  puStack_a0 = puVar4;
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_retain(param_6);
  uStack_88 = param_6;
  _objc_retain(param_7);
  uStack_80 = param_7;
  _objc_retain(param_8);
  uStack_78 = param_8;
  func_0x00010847021c(uVar5,lVar1,uVar6,&puStack_c8);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(puStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079aa210; end: 1079aa287;  */

void FUN_1079aa210(long param_1,undefined8 param_2)

{
  func_0x00010bd869d0(param_2,0,&PTR___NSConcreteGlobalBlock_1109f3298);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30f20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079aa288; end: 1079aa28f;  */

void FUN_1079aa288(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126dca38;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c11b1e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c25e5c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e5e0(param_3);
    func_0x00010bf08ca0(param_3);
    func_0x00010c270aa0(param_3);
    _objc_release(param_3);
    func_0x00010c010740(param_1,puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079aa290; end: 1079aa54f; -[SCDiscoverFeedStoriesResponseProcessor handleStoriesResponse:query:updatingBlock:completion:] */

void FUN_1079aa290(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  long lStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_loadWeakRetained(param_1 + 0xb0);
  _objc_release();
  lVar1 = param_1 + 0xb0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0xb0;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf82800(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfdb540();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c142580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be84a60(param_1);
    _objc_release(lVar1);
  }
  func_0x000108471500(param_3,*(undefined8 *)(param_1 + 0xa0));
  _objc_initWeak(auStack_78,param_1);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1079aa550;
  puStack_b8 = &UNK_1109f3308;
  _objc_retain(param_3);
  lStack_b0 = param_3;
  lStack_a8 = param_1;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(puVar4);
  puStack_a0 = puVar4;
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_retain(param_6);
  lVar3 = lVar1;
  uStack_88 = param_6;
  func_0x00010847021c(puVar5,lVar1,uVar9,&puStack_d0);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(puStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_release(lStack_b0);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  lVar2 = param_3;
  __Unwind_Resume();
  pcStack_d8 = FUN_1079aa550;
  lStack_120 = lVar1;
  puStack_118 = puVar5;
  puStack_110 = (undefined1 *)&puStack_d0;
  puStack_108 = puVar4;
  uStack_100 = param_6;
  uStack_f8 = param_5;
  uStack_f0 = param_4;
  lStack_e8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar3);
  uVar9 = *(undefined8 *)(lVar2 + 0x20);
  FUN_107b18e50(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(lVar2 + 0x28) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_1079aa6e8;
  puStack_160 = &UNK_1109f3308;
  _objc_retain(lVar3);
  lStack_158 = lVar3;
  _objc_copyWeak(auStack_128,lVar2 + 0x50);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(lVar2 + 0x30);
  uStack_150 = uVar7;
  _objc_retain(uVar8);
  uVar7 = *(undefined8 *)(lVar2 + 0x38);
  uStack_148 = uVar8;
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(lVar2 + 0x40);
  uStack_140 = uVar7;
  _objc_retain(uVar8);
  uVar7 = *(undefined8 *)(lVar2 + 0x48);
  uStack_138 = uVar8;
  _objc_retain(uVar7);
  uStack_130 = uVar7;
  func_0x00010846e1c0(uVar9,lVar6,&puStack_178,*(undefined8 *)(*(long *)(lVar2 + 0x28) + 0x68));
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(uVar9);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_release(lStack_158);
  _objc_release(lVar3);
  return;
}



/* Entry: 1079aa550; end: 1079aa6e7;  */

void FUN_1079aa550(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_107b18e50(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28) + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1079aa6e8;
  puStack_90 = &UNK_1109f3308;
  _objc_retain(param_2);
  uStack_88 = param_2;
  _objc_copyWeak(auStack_58,param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar5;
  _objc_retain(uVar4);
  uStack_60 = uVar4;
  func_0x00010846e1c0(uVar1,lVar3,&puStack_a8,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68));
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(uStack_88);
  _objc_release(param_2);
  return;
}



/* Entry: 1079aa6e8; end: 1079aa777;  */

void FUN_1079aa6e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bd869d0(uVar1,0,&PTR___NSConcreteGlobalBlock_1109f32e8);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31060();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079aa778; end: 1079aa77f;  */

void FUN_1079aa778(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126dca38;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c11b1e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c25e5c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e5e0(param_3);
    func_0x00010bf08ca0(param_3);
    func_0x00010c270aa0(param_3);
    _objc_release(param_3);
    func_0x00010c010740(param_1,puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079aa780; end: 1079aaa9b; -[SCDiscoverFeedStoriesResponseProcessor handleStoryLookupResponse:existingSections:query:stories:updatingBlock:] */

void FUN_1079aa780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_loadWeakRetained(param_1 + 0xb0);
  _objc_release();
  lVar2 = param_1 + 0xb0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0xb0;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf82800(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x0001084713b0(param_3,*(undefined8 *)(param_1 + 0xa0));
  uVar5 = param_5;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c067ec0();
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_initWeak(auStack_80,param_1);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1079aaa9c;
  puStack_98 = &UNK_1109f3338;
  _objc_retain(param_6);
  param_1 = param_1 + 8;
  uStack_90 = param_6;
  uStack_88 = (int)uVar8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_b8 = (int)uVar8;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010beecc80(lVar2);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079aaa9c; end: 1079aaaaf;  */

void FUN_1079aaa9c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_updateStoriesOnPerformer_feedTyp_112680360,
             *(undefined8 *)(param_1 + 0x20),(long)*(int *)(param_1 + 0x28),0);
  return;
}



/* Entry: 1079aaab0; end: 1079aaaef;  */

void FUN_1079aaab0(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be338a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079aaaf0; end: 1079aad1f; -[SCDiscoverFeedStoriesResponseProcessor preprocessAndConvertInterstitialStoryCards:requestID:completion:] */

void FUN_1079aaaf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7600;
  _objc_opt_new();
  func_0x00010c1ebd20();
  puVar2 = PTR_PTR_1126b7630;
  _objc_opt_new(PTR_PTR_1126b7630);
  func_0x00010c1d6200(puVar1);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010c0d3c80(param_3);
  puVar2 = puVar1;
  func_0x00010c0ece40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179880();
  _objc_release(puVar2);
  _objc_release(uVar3);
  func_0x000108471500(puVar1,*(undefined8 *)(param_1 + 0xa0));
  _objc_initWeak(auStack_68,param_1);
  puVar2 = puVar1;
  FUN_107b18e50(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1079aad20;
  puStack_98 = &UNK_1108945d0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_retain(param_4);
  uStack_90 = param_4;
  _objc_retain(puVar1);
  puStack_88 = puVar1;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010846e1c0(puVar2,lVar5,&puStack_b0,*(undefined8 *)(param_1 + 0x68));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(uStack_80);
  _objc_release(puStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079aad20; end: 1079aaf53;  */

void FUN_1079aad20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,PTR____NSArray0__struct_11034ab48);
    }
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_1079aaf54;
    uStack_70 = 0x1079aaf64;
    puStack_68 = PTR____NSArray0__struct_11034ab48;
    lVar4 = lVar1 + 0x28;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,puStack_88[5]);
      }
    }
    else {
      lVar4 = lVar1 + 0x28;
      _objc_loadWeakRetained(lVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar8);
      _objc_retain(param_2);
      lVar2 = lVar1 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar5);
      func_0x00010beecc80(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar4);
      _objc_release(uVar5);
      _objc_release(param_2);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    __Block_object_dispose(&uStack_90,8);
    _objc_release(puStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1079aaf54; end: 1079aaf6b;  */

void FUN_1079aaf54(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079aaf6c; end: 1079ab0ef;  */

void FUN_1079aaf6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b0ef8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125a80();
  func_0x0001084710b0();
  func_0x00010c03ef40(puVar1);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108482d58(uVar6,puVar1,uVar4,param_2,uVar9,uVar7,0x102,0,0,uVar5,
                      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60),
                      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x98));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079ab0f0; end: 1079ab123;  */

void FUN_1079ab0f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    puVar3 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x0001079ab11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
    return;
  }
  return;
}



/* Entry: 1079ab124; end: 1079ab1bf; -[SCDiscoverFeedStoriesResponseProcessor _handledStoryLookupResponse:existingSections:query:feedType:stories:updatingBlock:] */

void FUN_1079ab124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1109f33e8);
  func_0x00010be25c40(param_1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079ab1c0; end: 1079ab1ef;  */

void FUN_1079ab1c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,param_2);
  return;
}



/* Entry: 1079ab1f0; end: 1079ab5cf; -[SCDiscoverFeedStoriesResponseProcessor _handleStoriesResponse:responseTimestamp:watchedStatesByEditionId:snapchatterByUserId:query:updatingBlock:completion:] */

void FUN_1079ab1f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar2 = param_7;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0f1e60();
  if (uVar2 == 5) {
    _objc_initWeak(auStack_70,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1079ab5d0;
    puStack_b8 = &UNK_1109f3408;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    uStack_b0 = param_3;
    _objc_retain(param_4);
    uStack_a8 = param_4;
    _objc_retain(param_5);
    uStack_a0 = param_5;
    _objc_retain(param_6);
    uStack_98 = param_6;
    _objc_retain(param_7);
    uStack_90 = param_7;
    _objc_retain(param_8);
    uStack_88 = param_8;
    _objc_retain(param_9);
    uStack_80 = param_9;
    func_0x00010bfcac60(uVar5);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    ppuVar7 = &puStack_d0;
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x1079ab63c;
    puStack_118 = &UNK_1109f3408;
    _objc_copyWeak(auStack_d8,auStack_70);
    _objc_retain(param_3);
    uStack_110 = param_3;
    _objc_retain(param_4);
    uStack_108 = param_4;
    _objc_retain(param_5);
    uStack_100 = param_5;
    _objc_retain(param_6);
    uStack_f8 = param_6;
    _objc_retain(param_7);
    uStack_f0 = param_7;
    _objc_retain(param_8);
    uStack_e8 = param_8;
    _objc_retain(param_9);
    uStack_e0 = param_9;
    func_0x00010bfcac80(uVar5);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    ppuVar7 = &puStack_130;
  }
  _objc_destroyWeak(ppuVar7 + 0xb);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079ab5d0; end: 1079ab6a7;  */

void FUN_1079ab5d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079ab6a8; end: 1079aba9b; -[SCDiscoverFeedStoriesResponseProcessor _handleStoriesResponse:responseTimestamp:watchedStatesByEditionId:snapchatterByUserId:query:interactionHistoryArray:updatingBlock:completion:] */

void FUN_1079ab6a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_130 [8];
  undefined4 uStack_128;
  byte bStack_124;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar2 = param_7;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010846e5b0(param_7,*(undefined8 *)(param_1 + 0x80));
  uVar4 = uVar1;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  uVar9 = 0xdd;
  if (((uVar2 & 1) == 0) && (uVar5 == 1)) {
    uVar5 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c067ec0();
    uVar9 = (undefined4)uVar6;
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  _objc_release(uVar4);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar10);
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1079aaf54;
  uStack_88 = 0x1079aaf64;
  uStack_80 = 0;
  puStack_a0 = &uStack_a8;
  _objc_initWeak(auStack_b0,param_1);
  lVar7 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar7);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_1079aba9c;
  puStack_108 = &UNK_1109f3478;
  _objc_retain(param_4);
  uStack_100 = param_4;
  lStack_f8 = param_1;
  uStack_b8 = uVar9;
  _objc_retain(param_7);
  uStack_f0 = param_7;
  _objc_retain(param_3);
  uStack_e8 = param_3;
  _objc_retain(uVar10);
  uStack_e0 = uVar10;
  puStack_c0 = &uStack_a8;
  _objc_retain(param_5);
  uStack_d8 = param_5;
  _objc_retain(param_6);
  uStack_d0 = param_6;
  _objc_retain(param_8);
  param_1 = param_1 + 8;
  uStack_c8 = param_8;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_130,auStack_b0);
  _objc_retain(param_3);
  uStack_128 = uVar9;
  bStack_124 = (byte)uVar2 ^ 1;
  _objc_retain(param_10);
  func_0x00010beecc80(lVar7);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(param_10);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_130);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_100);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079aba9c; end: 1079abca7;  */

void FUN_1079aba9c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  uVar1 = *(int *)(param_1 + 0x68) - 0xf0;
  if (uVar1 < 0x18 && (1 << (ulong)(uVar1 & 0x1f) & 0x840001U) != 0) {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
    func_0x000108f4a900();
    if (iVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        lVar7 = param_2;
        func_0x00010bf00a40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar7;
        func_0x00010bd86870();
        if (lVar5 == 0) {
          lVar9 = 0;
        }
        else {
          lVar6 = lVar5;
          func_0x00010c13bd00(lVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          lVar9 = lVar5;
          func_0x00010c13bb80(lVar5);
          lVar9 = lVar9 + 1;
          lVar8 = lVar6;
        }
        _objc_release(lVar5);
        _objc_release(lVar7);
        goto LAB_1079abba4;
      }
    }
  }
  lVar9 = 0;
LAB_1079abba4:
  func_0x000108471500(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lVar7 = *(long *)(param_1 + 0x28);
  FUN_1079aeb9c(uVar4,lVar8,*(undefined4 *)(param_1 + 0x68),lVar9,*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(lVar7 + 0x38),
                *(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x48),
                *(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x58),
                *(undefined8 *)(lVar7 + 0x60),*(undefined8 *)(lVar7 + 0x80),param_2,
                *(undefined8 *)(lVar7 + 0x98));
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  uVar3 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
  _objc_release(uVar3);
  func_0x00010bed70e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c11d960(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c11d960(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010bf070c0(param_2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079abca8; end: 1079abd87;  */

void FUN_1079abca8(double param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_3;
  if (param_4 != 0) {
    uVar1 = param_3;
    func_0x00010c13bd00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar4 = param_1;
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010c13bd00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(uVar1);
    if (param_1 <= dVar4) {
      if (param_1 == dVar4) {
        uVar1 = param_3;
        func_0x00010c13bb80();
        uVar2 = param_4;
        func_0x00010c13bb80();
        if (uVar2 < uVar1) goto LAB_1079abd58;
      }
      uVar3 = param_4;
    }
  }
LAB_1079abd58:
  _objc_retain(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1079abd88; end: 1079abdcf;  */

void FUN_1079abd88(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079abdd0; end: 1079abf7f; -[SCDiscoverFeedStoriesResponseProcessor _handledStoriesResponse:feedType:isScrollQuery:stories:completion:] */

void FUN_1079abdd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x000100504554(param_6,&PTR___NSConcreteGlobalBlock_1109f34d8);
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0e00;
  func_0x00010bf66140(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar4 = param_3;
    func_0x00010c0ece40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c25c6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bfd7500();
    if ((int)uVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uStack_68 = param_3;
      func_0x00010bfbb360();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uStack_68;
      func_0x00010bfbb3c0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf98260(param_3);
    func_0x00010bedf240(param_1);
    if ((int)uVar6 != 0) {
      _objc_release(uVar7);
      _objc_release(uStack_68);
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,1);
  }
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079abf80; end: 1079ac023;  */

void FUN_1079abf80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cece8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c259740(param_2);
  uVar2 = param_2;
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x000108f51f98(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d560(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079ac024; end: 1079ac23f; -[SCDiscoverFeedStoriesResponseProcessor _updateSectionAfterPaginationForFeedType:newStoryIdentifiers:streamToken:frontierToken:hasMoreStories:] */

void FUN_1079ac024(double param_1,long param_2,long param_3,int param_4,undefined *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 - 0xf0U < 0x18) && ((0x840001U >> (ulong)(param_4 - 0xf0U & 0x1f) & 1) != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.60807493534087e-314;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010bfa9fc0(uVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(param_6);
    puVar2 = param_5;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c2898e0(uVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bfab800();
  if (lVar4 < 1) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
  }
  else {
    lVar4 = param_3;
    func_0x00010bfab800(param_3);
    param_1 = (double)lVar4;
  }
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2898e0((double)(long)param_1,uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079ac240; end: 1079ac30f;  */

void FUN_1079ac240(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfab800();
  if (lVar1 < 1) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
  }
  else {
    lVar1 = param_3;
    func_0x00010bfab800(param_3);
    param_1 = (double)lVar1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2898e0((double)(long)param_1,uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079ac310; end: 1079ac747; -[SCDiscoverFeedStoriesResponseProcessor _handleStoriesBatchResponse:responseTimestamp:existingSections:prependExistingStoryDedupeFps:watchedStatesByEditionId:query:updatingBlock:completion:] */

void FUN_1079ac310(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar2 = param_8;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0f1e60();
  if (uVar2 == 5) {
    _objc_initWeak(auStack_70,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1079ac748;
    puStack_c0 = &UNK_1109f3528;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    uStack_b8 = param_3;
    _objc_retain(param_4);
    uStack_b0 = param_4;
    _objc_retain(param_5);
    uStack_a8 = param_5;
    _objc_retain(param_6);
    uStack_a0 = param_6;
    _objc_retain(param_7);
    uStack_98 = param_7;
    _objc_retain(param_8);
    uStack_90 = param_8;
    _objc_retain(param_9);
    uStack_88 = param_9;
    _objc_retain(param_10);
    uStack_80 = param_10;
    func_0x00010bfcac60(uVar5);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    ppuVar7 = &puStack_d8;
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x1079ac7b4;
    puStack_128 = &UNK_1109f3528;
    _objc_copyWeak(auStack_e0,auStack_70);
    _objc_retain(param_3);
    uStack_120 = param_3;
    _objc_retain(param_4);
    uStack_118 = param_4;
    _objc_retain(param_5);
    uStack_110 = param_5;
    _objc_retain(param_6);
    uStack_108 = param_6;
    _objc_retain(param_7);
    uStack_100 = param_7;
    _objc_retain(param_8);
    uStack_f8 = param_8;
    _objc_retain(param_9);
    uStack_f0 = param_9;
    _objc_retain(param_10);
    uStack_e8 = param_10;
    func_0x00010bfcac80(uVar5);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    ppuVar7 = &puStack_140;
  }
  _objc_destroyWeak(ppuVar7 + 0xc);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079ac748; end: 1079ac81f;  */

void FUN_1079ac748(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30f00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079ac820; end: 1079acb0f; -[SCDiscoverFeedStoriesResponseProcessor _handleStoriesBatchResponse:responseTimestamp:existingSections:prependExistingStoryDedupeFps:watchedStatesByEditionId:query:interactionHistoryArray:updatingBlock:completion:] */

void FUN_1079ac820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_initWeak(auStack_70,param_1);
  uVar1 = param_3;
  func_0x00010c258b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107b19070();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1079acb10;
  puStack_c8 = &UNK_1109f3558;
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  _objc_retain(param_6);
  uStack_a8 = param_6;
  _objc_retain(param_7);
  uStack_a0 = param_7;
  _objc_retain(param_8);
  uStack_98 = param_8;
  _objc_retain(param_9);
  uStack_90 = param_9;
  _objc_retain(param_10);
  uStack_88 = param_10;
  _objc_retain(param_11);
  uStack_80 = param_11;
  func_0x00010846e1c0(uVar2,lVar4,&puStack_e0,*(undefined8 *)(param_1 + 0x68));
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079acb10; end: 1079acb83;  */

void FUN_1079acb10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30f40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079acb84; end: 1079acc03;  */

void FUN_1079acb84(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 1079acc04; end: 1079acf7b; -[SCDiscoverFeedStoriesResponseProcessor _handleStoriesBatchResponse:responseTimestamp:existingSections:prependExistingStoryDedupeFps:watchedStatesByEditionId:snapchatterByUserId:query:interactionHistoryArray:updatingBlock:completion:] */

void FUN_1079acc04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_initWeak(auStack_80,param_1);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1079acf7c;
  puStack_d8 = &UNK_1109f35b8;
  _objc_retain(param_3);
  uStack_d0 = param_3;
  lStack_c8 = param_1;
  _objc_retain(puVar1);
  puStack_c0 = puVar1;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_9);
  uStack_b0 = param_9;
  _objc_retain(param_7);
  uStack_a8 = param_7;
  _objc_retain(param_8);
  uStack_a0 = param_8;
  _objc_retain(param_10);
  uStack_98 = param_10;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_retain(puVar2);
  param_1 = param_1 + 8;
  puStack_88 = puVar2;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_80);
  _objc_retain(param_9);
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010beecc80(lVar3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(puStack_c0);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(puVar1);
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
  return;
}



/* Entry: 1079acf7c; end: 1079ad33b;  */

void FUN_1079acf7c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lStack_1a8;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  int iStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_2;
  _objc_retain(param_2);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010c258b60();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = lVar5;
  func_0x00010bf52a60();
  if (lStack_1a8 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar18 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(lVar5);
        }
        uVar20 = *(ulong *)(lStack_138 + lVar18 * 8);
        uVar6 = uVar20;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bfa4340();
        _objc_release(uVar6);
        func_0x00010c125a80(*(undefined8 *)(param_1 + 0x20));
        func_0x00010c1e96a0(uVar20);
        puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_168 = 0xc2000000;
        pcStack_160 = FUN_1079ad33c;
        puStack_158 = &UNK_1109f3588;
        uStack_150 = *(undefined8 *)(param_1 + 0x28);
        iVar17 = (int)uVar7;
        ppuVar8 = &puStack_170;
        iStack_148 = iVar17;
        _objc_retainBlock();
        if ((iVar17 == 0x107) || (iVar17 == 0x102)) {
          puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
          func_0x00010c225c20();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = *(undefined8 *)(param_1 + 0x30);
          uVar3 = *(undefined8 *)(param_1 + 0x38);
          uVar14 = *(undefined8 *)(param_1 + 0x40);
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0cc060(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + 0x48);
          uVar4 = *(undefined8 *)(param_1 + 0x50);
          uVar2 = *(undefined8 *)(param_1 + 0x58);
          uVar12 = *(undefined8 *)(param_1 + 0x60);
          lVar11 = *(long *)(param_1 + 0x28) + 0xb0;
          _objc_loadWeakRetained();
          lVar15 = *(long *)(param_1 + 0x28);
          uVar6 = uVar20;
          FUN_1079ae41c(uVar20,uVar3,0xf0,uVar14,uVar10,uVar1,uVar4,uVar2,uVar12,puVar9,param_2,
                        lVar11,*(undefined8 *)(lVar15 + 0x38),*(undefined8 *)(lVar15 + 0x40),
                        *(undefined8 *)(lVar15 + 0x48),*(undefined8 *)(lVar15 + 0x50),
                        *(undefined8 *)(lVar15 + 0x58),*(undefined8 *)(lVar15 + 0x60),
                        *(undefined8 *)(lVar15 + 0x80),*(undefined8 *)(lVar15 + 0x98),ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar19);
          _objc_release(uVar6);
          _objc_release(lVar11);
          _objc_release(uVar10);
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x68));
          _objc_release(puVar9);
        }
        uVar19 = *(undefined8 *)(param_1 + 0x30);
        lVar11 = *(long *)(param_1 + 0x38);
        uVar10 = *(undefined8 *)(param_1 + 0x40);
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0cc060(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + 0x48);
        uVar3 = *(undefined8 *)(param_1 + 0x50);
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        lVar15 = *(long *)(param_1 + 0x28) + 0xb0;
        _objc_loadWeakRetained();
        lVar16 = *(long *)(param_1 + 0x28);
        FUN_1079ae41c(uVar20,lVar11,uVar7 & 0xffffffff,uVar10,uVar12,uVar1,uVar3,uVar2,uVar4,0,
                      param_2,lVar15,*(undefined8 *)(lVar16 + 0x38),*(undefined8 *)(lVar16 + 0x40),
                      *(undefined8 *)(lVar16 + 0x48),*(undefined8 *)(lVar16 + 0x50),
                      *(undefined8 *)(lVar16 + 0x58),*(undefined8 *)(lVar16 + 0x60),
                      *(undefined8 *)(lVar16 + 0x80),*(undefined8 *)(lVar16 + 0x98),ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar19);
        _objc_release(uVar20);
        _objc_release(lVar15);
        _objc_release(uVar12);
        uVar19 = *(undefined8 *)(param_1 + 0x68);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar19);
        _objc_release(puVar9);
        _objc_release(ppuVar8);
        lVar18 = lVar18 + 1;
      } while (lStack_1a8 != lVar18);
      lStack_1a8 = lVar5;
      func_0x00010bf52a60();
    } while (lStack_1a8 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bed70f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s__updateDisplayOrdererWithRespons_1125935e0,lVar11
             ,*(undefined4 *)(param_2 + 0x28));
  return;
}



/* Entry: 1079ad33c; end: 1079ad34f;  */

void FUN_1079ad33c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed70f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateDisplayOrdererWithRespons_1125935e0,
             param_2,*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 1079ad350; end: 1079ad38b;  */

void FUN_1079ad350(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079ad38c; end: 1079ad60f; -[SCDiscoverFeedStoriesResponseProcessor _handleAppliedStoriesBatchResponseWithQuery:sections:feedTypes:updatingBlock:completion:] */

void FUN_1079ad38c(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong unaff_x25;
  undefined8 uVar9;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = param_4;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_3;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1138;
    _objc_opt_class(PTR_PTR_1126b1138);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    unaff_x25 = uVar2;
    if ((uVar3 & 1) == 0) {
      unaff_x25 = 0;
    }
    _objc_retain(unaff_x25);
    _objc_release(uVar2);
    unaff_x26 = PTR_PTR_1126cecd8;
    _objc_alloc();
    func_0x00010c0f1e60(unaff_x25);
    func_0x00010c0333a0();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289960();
    _objc_release(uVar4);
    unaff_x27 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_148 = unaff_x26;
    puStack_78 = unaff_x26;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288520(unaff_x27);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    puStack_130 = (undefined8 *)0x0;
    _objc_retain(param_4);
    puVar1 = param_4;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      unaff_x28 = (undefined *)*puStack_130;
      do {
        unaff_x26 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_130 != unaff_x28) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010bfa4340(*(undefined8 *)(lStack_138 + (long)unaff_x26 * 8));
          unaff_x26 = unaff_x26 + 1;
        } while (puVar1 != unaff_x26);
        puVar1 = param_4;
        func_0x00010bf52a60();
        unaff_x27 = 0;
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_4);
    _objc_release(puStack_148);
    _objc_release(unaff_x25);
  }
  puVar1 = param_4;
  uVar3 = param_3;
  uVar4 = param_6;
  uVar7 = param_7;
  func_0x00010c130040(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1079ad610;
  puStack_1b0 = unaff_x28;
  uStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  uStack_198 = unaff_x25;
  lStack_190 = param_1;
  uStack_188 = param_7;
  uStack_180 = param_6;
  uStack_178 = param_5;
  puStack_170 = param_4;
  uStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  _objc_retain(uVar7);
  _objc_retain(uVar8);
  _objc_retain(param_8);
  puVar5 = puVar1;
  func_0x00010bfde1e0();
  if ((int)puVar5 != 0) {
    puVar5 = puVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfdb540();
    _objc_release(puVar5);
    if ((int)puVar6 != 0) {
      puVar5 = puVar1;
      func_0x00010c293740(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c142580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be84a60(uVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
  _objc_initWeak(auStack_1b8,uVar2);
  uVar9 = *(undefined8 *)(uVar2 + 0x78);
  _objc_copyWeak(auStack_1c0,auStack_1b8);
  _objc_retain(uVar3);
  _objc_retain(uVar7);
  _objc_retain(uVar8);
  _objc_retain(param_8);
  func_0x00010bfd1200(uVar9);
  _objc_release(param_8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(param_8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1079ad610; end: 1079ad81b; -[SCDiscoverFeedStoriesResponseProcessor handleFeedCardResponse:existingSections:prependExistingStoryDedupeFps:query:updatingBlock:completion:] */

void FUN_1079ad610(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_3;
  func_0x00010bfde1e0();
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfdb540();
    _objc_release(uVar2);
    if ((int)uVar1 != 0) {
      uVar2 = param_3;
      func_0x00010c293740(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c142580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be84a60(param_1);
      _objc_release(uVar1);
      _objc_release(uVar2);
    }
  }
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bfd1200(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079ad81c; end: 1079ad853;  */

void FUN_1079ad81c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c130040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079ad854; end: 1079ad9ff; -[SCDiscoverFeedStoriesResponseProcessor renderSections:query:updatingBlock:completion:] */

void FUN_1079ad854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06fc80();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010be8e380(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079ada00; end: 1079ada37;  */

void FUN_1079ada00(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079ada38; end: 1079ae127; -[SCDiscoverFeedStoriesResponseProcessor _renderSections:query:updatingBlock:completion:] */

void FUN_1079ada38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,1);
  }
  if (param_5 != 0) {
    lVar1 = param_3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x1079adcf0;
    puStack_80 = &UNK_1109f35e8;
    _objc_retain();
    lStack_78 = lVar1;
    _objc_retain(param_3);
    lVar2 = param_3;
    lStack_70 = param_3;
    uStack_68 = param_1;
    func_0x000100504554(param_3,&puStack_98);
    lVar9 = lVar2;
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126c2180;
      _objc_alloc(PTR_PTR_1126c2180);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bfa4340(lVar1);
      func_0x00010c0df760(puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010bf86660(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bfa4340(lVar1);
      func_0x000108f53fe8();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c08cb80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c154d40();
      func_0x00010c0127c0(puVar3);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(puVar4);
      ppuVar10 = &PTR____CFConstantStringClassReference_110f4b1d8;
      uVar8 = 0;
      FUN_1079b7d94(0);
      _objc_retainAutoreleasedReturnValue();
      FUN_1079b7bc4(0,&PTR____CFConstantStringClassReference_110f4b1d8,uVar8,puVar3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      func_0x00010bf09f60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(ppuVar10);
      _objc_release(puVar3);
    }
    puVar4 = PTR_PTR_1126b16f0;
    _objc_alloc(PTR_PTR_1126b16f0);
    func_0x00010c042a40();
    (**(code **)(param_5 + 0x10))(param_5,puVar4,0);
    _objc_release(puVar4);
    _objc_release(lVar9);
    _objc_release(lStack_70);
    _objc_release(lStack_78);
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079ae128; end: 1079ae20f; -[SCDiscoverFeedStoriesResponseProcessor _purgeRTUSEventsWithQuery:rtusResponse:] */

void FUN_1079ae128(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = uVar1;
    func_0x00010bfa43a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc9500(uVar4);
    _objc_release(uVar3);
    func_0x00010c11bea0(*(undefined8 *)(param_1 + 0x90));
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1079ae210; end: 1079ae2ab; -[SCDiscoverFeedStoriesResponseProcessor _updateDisplayOrdererWithResponseStories:feedType:] */

void FUN_1079ae210(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0x102) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c24b200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277ee0();
    _objc_release(param_3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1079ae2ac; end: 1079ae2b3; -[SCDiscoverFeedStoriesResponseProcessor sectionExtensionServices] */

undefined8 FUN_1079ae2ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1079ae2b4; end: 1079ae2e3; -[SCDiscoverFeedStoriesResponseProcessor setSectionExtensionServices:] */

void FUN_1079ae2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079ae2e4; end: 1079ae2fb; -[SCDiscoverFeedStoriesResponseProcessor queryCoordinator] */

void FUN_1079ae2e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079ae2fc; end: 1079ae307; -[SCDiscoverFeedStoriesResponseProcessor setQueryCoordinator:] */

void FUN_1079ae2fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb0,param_3);
  return;
}



/* Entry: 1079ae308; end: 1079ae41b; -[SCDiscoverFeedStoriesResponseProcessor .cxx_destruct] */

void FUN_1079ae308(long param_1)

{
  _objc_destroyWeak(param_1 + 0xb0);
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
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079ae41c; end: 1079aeb9b;  */

void FUN_1079ae41c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,long param_11,undefined *param_12,ulong param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18,long param_19,undefined8 param_20,undefined8 param_21,
                  long param_22)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_19);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010bf0ae60(param_12);
  uVar2 = param_2;
  func_0x00010bf3d480(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ced10;
  _objc_alloc();
  uVar4 = uVar2;
  func_0x00010bf816a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3e60(uVar2);
  uVar10 = param_1;
  func_0x00010c25af40(uVar2);
  uVar20 = uVar10;
  func_0x00010befe7c0(uVar2);
  func_0x00010bf80320(uVar2);
  func_0x00010bff47c0(param_1,uVar10,uVar20);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_2;
  FUN_1079aeb9c(param_2,param_3,param_4,0,param_5,param_7,param_8,param_9,param_14,param_15,param_16
                ,param_17,param_18,param_19,param_20,param_12,param_21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  if (param_22 != 0) {
    (**(code **)(param_22 + 0x10))(param_22,uVar2);
  }
  uVar4 = uVar2;
  if (param_11 != 0) {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1079aeff4;
    puStack_98 = &UNK_1108f1040;
    _objc_retain(param_11);
    lStack_90 = param_11;
    func_0x0001006372a4(uVar2,&puStack_b0);
    _objc_release(uVar2);
    _objc_release(lStack_90);
  }
  uVar2 = param_13;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar5 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    uVar5 = uVar2;
    func_0x00010c07a520();
    iVar1 = (int)uVar5;
  }
  iVar19 = (int)param_4;
  uVar5 = uVar4;
  if (((iVar19 - 0xf0U < 0x18) && ((1 << (ulong)(iVar19 - 0xf0U & 0x1f) & 0x840001U) != 0)) &&
     (iVar1 != 0)) {
    func_0x00010c11d960(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c11d960(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010bf070c0(param_12);
  }
  else {
    _objc_retain(uVar4);
    lVar6 = param_10;
    func_0x00010bf529e0();
    if (((iVar19 == 0x109) || (iVar19 == 0x102)) &&
       (lVar7 = param_19, func_0x000108f4b7b0(), -1 < lVar7)) {
      lVar6 = lVar7;
    }
    if (0 < lVar6) {
      lVar6 = param_10;
      func_0x00010c099060(param_10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_12;
      func_0x00010c258f20();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR____NSArray0__struct_11034ab48;
      if (puVar8 != (undefined *)0x0) {
        puVar11 = puVar8;
      }
      _objc_retain(puVar11);
      _objc_release(puVar8);
      _objc_release(lVar6);
      uVar9 = uVar4;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010bd86590();
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(puVar11);
    }
    func_0x00010c11d960(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c11d960(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar10 = param_5;
    func_0x00010c11d960(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar10);
    func_0x00010c28a4e0(param_12);
    _objc_release(uVar4);
  }
  func_0x00010bf98260();
  puVar11 = PTR_PTR_1126cecc8;
  _objc_alloc();
  uVar4 = uVar5;
  func_0x000100504554(uVar5,&PTR___NSConcreteGlobalBlock_1109f3638);
  uVar9 = param_2;
  func_0x00010bfa3f40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  func_0x00010bfa3f40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0b3b40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  func_0x00010c0ece40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c25c6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar17 = param_2;
  func_0x00010bfd7500();
  if ((uVar17 & 1) == 0) {
    func_0x00010c012780(puVar11);
  }
  else {
    uVar17 = param_2;
    func_0x00010bfbb360();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bfbb3c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012780(puVar11);
    _objc_release(uVar18);
    _objc_release(uVar17);
  }
  _objc_release(puVar8);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(param_22);
  _objc_release(param_19);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1079aeb9c; end: 1079aeff3;  */

void FUN_1079aeb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  puVar1 = PTR_PTR_1126b0ef8;
  _objc_retain();
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c135700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125a80();
  func_0x0001084710b0();
  func_0x00010c03ef40();
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0ece40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf32220();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_10;
  func_0x00010c269d40(param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  uVar5 = uVar4;
  func_0x00010bf12ea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x000108482d58(uVar3,puVar1,uVar5,param_16,param_11,param_7,param_3,param_4,0,uVar6,param_14,
                      param_17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0ece40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bf32220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010846e5b0(param_5,param_15);
  _objc_release(param_15);
  _objc_release(param_5);
  uVar5 = param_12;
  func_0x00010c269d40(param_12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  uVar6 = param_13;
  func_0x00010c269d40(param_13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  func_0x000108487eb8(uVar3,uVar4,uVar5,uVar6,param_17);
  _objc_release(param_17);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar7;
  func_0x000108470ee0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar3 = uVar2;
  func_0x00010bf51e00(uVar2);
  iVar8 = (int)param_3;
  uVar4 = param_9;
  func_0x00010c0d0580(param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar3);
  uVar3 = uVar4;
  if (((iVar8 != 3) && (iVar8 != 0xef)) && (iVar8 != 0xf7)) {
    FUN_107bf2f24(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  uVar4 = uVar3;
  func_0x00010bf51e00(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1079aeff4; end: 1079af083;  */

undefined8 FUN_1079aeff4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25b720(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1079af084; end: 1079af127;  */

void FUN_1079af084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cece8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c259740(param_2);
  uVar2 = param_2;
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x000108f51f98(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d560(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079af128; end: 1079af18b; -[SCDiscoverFeedGenericExtension init] */

undefined1 * FUN_1079af128(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d5a10;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1079af18c; end: 1079af193; -[SCDiscoverFeedGenericExtension localSectionDescriptorProviders] */

undefined8 FUN_1079af18c(void)

{
  return 0;
}



/* Entry: 1079af194; end: 1079af207; -[SCDiscoverFeedGenericExtension remoteSectionProviders] */

undefined * FUN_1079af194(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + 8);
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110caf00;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 1079af208; end: 1079af20f; -[SCDiscoverFeedGenericExtension collectionViewSectionCreators] */

undefined8 FUN_1079af208(void)

{
  return 0;
}



/* Entry: 1079af210; end: 1079af217; -[SCDiscoverFeedGenericExtension loggingParsers] */

undefined8 FUN_1079af210(void)

{
  return 0;
}



/* Entry: 1079af218; end: 1079af223; -[SCDiscoverFeedGenericExtension .cxx_destruct] */

void FUN_1079af218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



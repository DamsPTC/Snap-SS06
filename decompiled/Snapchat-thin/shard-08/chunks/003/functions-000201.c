/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f7fe20; end: 105f7ff13; -[SCLensSpotlightSharePageLauncherPayload initWithUiContainer:configuration:sourcePage:sourcePageSessionId:viewLocation:feedPageEntryType:] */

undefined1 *
FUN_105f7fe20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ee700;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f7ff14; end: 105f7ff1b; -[SCLensSpotlightSharePageLauncherPayload uiContainer] */

undefined8 FUN_105f7ff14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105f7ff1c; end: 105f7ff23; -[SCLensSpotlightSharePageLauncherPayload configuration] */

undefined8 FUN_105f7ff1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f7ff24; end: 105f7ff2b; -[SCLensSpotlightSharePageLauncherPayload sourcePage] */

undefined8 FUN_105f7ff24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f7ff2c; end: 105f7ff33; -[SCLensSpotlightSharePageLauncherPayload sourcePageSessionId] */

undefined8 FUN_105f7ff2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f7ff34; end: 105f7ff3b; -[SCLensSpotlightSharePageLauncherPayload viewLocation] */

undefined8 FUN_105f7ff34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f7ff3c; end: 105f7ff43; -[SCLensSpotlightSharePageLauncherPayload feedPageEntryType] */

undefined8 FUN_105f7ff3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f7ff44; end: 105f7ff7f; -[SCLensSpotlightSharePageLauncherPayload .cxx_destruct] */

void FUN_105f7ff44(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f7ff80; end: 105f7ffc7;  */

void FUN_105f7ff80(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e34438;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e34438,
                      &PTR____CFConstantStringClassReference_110e34458,0);
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



/* Entry: 105f7ffc8; end: 105f80217; -[SCSpotlightCommentShareMessagePlugin initWithSpotlightRepliesRequestSender:spotlightFetcher:pageLauncher:spotlightShareSender:circumstanceEngine:discoverFeedDataMutator:snapchattersSynchronousDataFetcher:storiesConfigProvider:currentUserId:messagingMessageProvider:] */

undefined8 *
FUN_105f7ffc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ee708;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1c400();
    *(char *)(puVar1 + 0xc) = (char)uVar4;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 105f80218; end: 105f8032f; -[SCSpotlightCommentShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105f80218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126ae820;
  _objc_alloc_init(PTR_PTR_1126ae820);
  uVar3 = param_1;
  func_0x00010bde8360(param_1,param_2,param_3,puVar1,puVar2,1,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be13a40(param_1,param_2,param_3,puVar1,puVar2,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar5 = PTR_PTR_1126c68d0;
  func_0x00010bf44480(PTR_PTR_1126c68d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar4,param_2,puVar5,0,uVar3);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f80330; end: 105f8059f; -[SCSpotlightCommentShareMessagePlugin _contextForMessage:commentDisplayInfoSubject:spotlightStoryDisplayInfoSubject:enableOnTap:conversationParticipants:] */

void FUN_105f80330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c24af20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126c68d8;
  _objc_alloc_init(PTR_PTR_1126c68d8);
  uVar1 = param_4;
  func_0x00010c272120(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ede0(puVar6);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c272120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20cec0(puVar6);
  _objc_release(uVar1);
  if (param_6 != 0) {
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar5);
    _objc_retain(uVar2);
    _objc_retain(param_3);
    _objc_retain(param_7);
    func_0x00010c1d3960(puVar6);
    _objc_release(param_7);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f805a0; end: 105f806ff;  */

void FUN_105f805a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c22a700(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c24af20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf41ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107d04eec(uVar8);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x0001070b1c70();
  if (iVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107d04f3c(uVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107d04fac(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be485c0(lVar3,param_2,uVar1,param_4,uVar7,uVar8,uVar9,uVar10);
  _objc_release(param_4);
  _objc_release(uVar10);
  if (iVar2 != 0) {
    _objc_release(uVar9);
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105f80700; end: 105f80ab7; -[SCSpotlightCommentShareMessagePlugin _fetchRequirementsWithMessage:commentDisplayInfoSubject:spotlightStoryDisplayInfoSubject:conversationParticipants:] */

void FUN_105f80700(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c24af20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf41ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c24af20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c22a700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c24af20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_initWeak(auStack_78,param_1);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105f80ab8;
  puStack_88 = &UNK_1109000c0;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar7 = &puStack_a0;
  _objc_retainBlock(ppuVar7);
  func_0x00010be145a0(param_1);
  puStack_c8 = puVar9;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105f80b6c;
  puStack_b0 = &UNK_1109000f0;
  _objc_copyWeak(auStack_a8,auStack_78);
  ppuVar8 = &puStack_c8;
  _objc_retainBlock(ppuVar8);
  puVar9 = PTR_PTR_1126c6878;
  uVar1 = param_3;
  func_0x00010c15de20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c082f00();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)puVar9 == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c15de20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  func_0x00010be14fe0(param_1);
  _objc_release(uVar1);
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(ppuVar7);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f80ab8; end: 105f80c1f;  */

void FUN_105f80ab8(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_2 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be99c80();
    _objc_release(param_5);
    _objc_release(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be07960();
    _objc_release(param_4);
    _objc_release(param_1);
  }
  func_0x00010bf436e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f80c20; end: 105f80f43; -[SCSpotlightCommentShareMessagePlugin _launchSpotlightWithInitialCompositeStoryId:parentCommentId:commentId:senderId:groupId:shareId:] */

void FUN_105f80c20(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined **param_6,undefined *param_7,undefined *param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
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
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = param_6;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    if (param_4 != 0) {
      func_0x00010befa120(puVar2);
    }
    if (param_5 != 0) {
      func_0x00010befa120(puVar2);
    }
    lVar3 = lVar1;
    func_0x000108f4cbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a480(uVar8);
    _objc_release(puVar4);
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110f42758;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f42778;
    puVar4 = param_7;
    ppuStack_90 = param_6;
    if (param_7 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f42798;
    puVar5 = param_8;
    puStack_88 = puVar4;
    if (param_8 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    if (param_8 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    if (param_7 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    lVar7 = param_1;
    func_0x00010bebec80();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_b0,param_1);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_105f80f44;
    puStack_c8 = &UNK_110841fb0;
    ppuVar9 = &puStack_e0;
    _objc_copyWeak(auStack_b8,auStack_b0);
    _objc_retain(lVar7);
    lStack_c0 = lVar7;
    func_0x0001000d76cc("APPSTORE",&puStack_e0);
    _objc_release(lStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar9 + 5);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    lVar1 = param_3 + 0x70;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126c68e0;
    _objc_alloc(PTR_PTR_1126c68e0);
    func_0x00010c058240();
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f80f44; end: 105f81013;  */

void FUN_105f80f44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    lVar2 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126c68e0;
    _objc_alloc(PTR_PTR_1126c68e0);
    func_0x00010c058240();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f81014; end: 105f81167; -[SCSpotlightCommentShareMessagePlugin _spotlightConfigurationForSharedStory:prependedCommentIds:storyLoggingFieldsOverrideDict:] */

void FUN_105f81014(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c24b1a0();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c68b8;
  if ((int)uVar6 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    uVar1 = 0;
    lVar7 = 0;
    puVar5 = puVar2;
    func_0x00010c0d0ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    uVar1 = 0;
    puVar5 = param_3;
    uVar6 = param_5;
    lVar7 = param_4;
    func_0x00010c0d0a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  _objc_retain(uVar1);
  _objc_retain(lVar7);
  lVar8 = *(long *)(param_3 + 0x18);
  _objc_retain(puVar5);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar7);
    _objc_retain(uVar6);
    func_0x00010bfaa320(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    lVar8 = lVar7;
  }
  else {
    lVar8 = *(long *)(param_3 + 0x18);
    func_0x00010c0e00e0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,1,uVar6,lVar8,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  return;
}



/* Entry: 105f81168; end: 105f812d7; -[SCSpotlightCommentShareMessagePlugin _fetchThumbnailUrlWithCompositeStoryId:spotlightStoryDisplayInfoSubject:senderUserId:completion:] */

void FUN_105f81168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010bfaa320(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_4);
    lVar2 = param_6;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,1,param_4,lVar2,param_3);
    _objc_release(param_3);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105f812d8; end: 105f812f7;  */

void FUN_105f812d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000105f812f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_4,*(undefined8 *)(param_1 + 0x20),param_3,param_2);
  return;
}



/* Entry: 105f812f8; end: 105f81573; -[SCSpotlightCommentShareMessagePlugin _fetchSpotlightCommentWithCommentId:snapId:commentDisplayInfoSubject:completion:] */

void FUN_105f812f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    puVar3 = puVar2;
    func_0x00010c131d60(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_release(param_5);
    lVar1 = param_6;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = 1;
    puVar3 = param_5;
    (**(code **)(param_6 + 0x10))(param_6,1,param_5,lVar1,param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  lVar1 = *(long *)(param_3 + 0x30);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,uVar5,0,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    puVar2 = puVar3;
    func_0x00010bfb1920(puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,uVar5,puVar2,*(undefined8 *)(param_3 + 0x28));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105f81574; end: 105f815eb; -[SCSpotlightCommentShareMessagePlugin _saveSpotlightStoryToCacheIfNecessaryWithSpotlightStory:compositeStoryId:] */

void FUN_105f81574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f815ec; end: 105f81663; -[SCSpotlightCommentShareMessagePlugin _saveSpotlightReplyToCacheIfNecessaryWithSpotlightReply:commentId:] */

void FUN_105f815ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f81664; end: 105f81997; -[SCSpotlightCommentShareMessagePlugin _emitSpotlightStoryDisplayWithSpotlightStoryDisplayInfoSubject:spotlightStory:] */

void FUN_105f81664(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  byte bVar1;
  unkuint9 Var2;
  long lVar3;
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
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  ulong uVar21;
  undefined ***pppuVar22;
  long lVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_5;
  func_0x000107d227d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dc1758;
  puVar5 = puVar4;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dc1778;
  puVar9 = puVar4;
  puStack_88 = puVar8;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  if (puVar11 == (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ddd938;
  puVar13 = puVar4;
  puStack_80 = puVar12;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  if (puVar14 == (undefined *)0x0) {
    puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dc1798;
  ppuVar16 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c40f0;
  puStack_78 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar16;
  if (ppuVar16 == (undefined **)0x0) {
    ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  pppuVar22 = &ppuStack_a8;
  puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_70 = ppuVar17;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar16 == (undefined **)0x0) {
    _objc_release(ppuVar17);
  }
  _objc_release(ppuVar16);
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar15);
  }
  _objc_release(puVar14);
  _objc_release(puVar13);
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar12);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  ppuVar16 = &PTR____CFConstantStringClassReference_110dc1718;
  puVar5 = puVar18;
  func_0x000108543d00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c68e8;
  _objc_alloc_init();
  ppuVar17 = ppuVar16;
  func_0x00010beec820(ppuVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dd00(puVar6);
  _objc_release(ppuVar17);
  puVar7 = puVar6;
  func_0x00010c0d9840(param_4);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(ppuVar16);
  _objc_release(puVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  _objc_retain(pppuVar22);
  puVar6 = PTR_PTR_1126c68f0;
  _objc_alloc();
  pppuVar19 = pppuVar22;
  func_0x00010c131f40(pppuVar22);
  _objc_retainAutoreleasedReturnValue();
  pppuVar20 = pppuVar22;
  func_0x00010c132180(pppuVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffe40();
  _objc_release(pppuVar20);
  _objc_release(pppuVar19);
  puVar8 = PTR_PTR_1126b28e0;
  _objc_opt_new();
  pppuVar19 = pppuVar22;
  func_0x00010c131f00(pppuVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar8);
  _objc_release(pppuVar19);
  pppuVar19 = pppuVar22;
  func_0x00010c131f20(pppuVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc60(puVar8);
  _objc_release(pppuVar19);
  func_0x00010c171180(puVar6);
  func_0x00010c1321a0(pppuVar22);
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65620(param_1 / 1000.0 + -978307200.0,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5aa0(0x4024000000000000,PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010c19ed00(puVar6);
  _objc_release(puVar10);
  pppuVar19 = pppuVar22;
  func_0x00010c131f60(pppuVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eec0(puVar6);
  _objc_release(pppuVar19);
  pppuVar19 = pppuVar22;
  func_0x00010c131fa0(pppuVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4320(puVar6);
  _objc_release(pppuVar19);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  pppuVar20 = pppuVar22;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  pppuVar19 = pppuVar20;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (pppuVar19 != (undefined ***)0x0) {
    pppuVar25 = (undefined ***)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(pppuVar20);
      }
      uVar26 = *(ulong *)((long)pppuVar25 * 8);
      puVar10 = PTR_PTR_1126c68f8;
      _objc_alloc(PTR_PTR_1126c68f8);
      uVar21 = uVar26;
      func_0x00010c11f2a0(uVar26);
      func_0x00010c11f2a0(uVar26);
      Var2 = ZEXT89(puVar5);
      func_0x00010bf85d80(uVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04b900((double)uVar21,(double)(unkint9)Var2,puVar10);
      func_0x00010befa120(puVar9);
      _objc_release(puVar10);
      _objc_release(uVar26);
      pppuVar25 = (undefined ***)((long)pppuVar25 + 1);
    } while (pppuVar19 != pppuVar25);
    pppuVar19 = pppuVar20;
    func_0x00010bf52a60();
  }
  _objc_release(pppuVar20);
  puVar10 = puVar9;
  func_0x00010bf51e00(puVar9);
  func_0x00010c1c68a0(puVar6);
  _objc_release(puVar10);
  pppuVar19 = pppuVar22;
  func_0x00010c0f3b40(pppuVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9040(puVar6);
  _objc_release(pppuVar19);
  pppuVar19 = pppuVar22;
  func_0x00010c242640();
  _objc_retainAutoreleasedReturnValue();
  pppuVar20 = pppuVar19;
  func_0x00010c0720c0();
  _objc_release(pppuVar19);
  pppuVar19 = pppuVar22;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  pppuVar25 = pppuVar19;
  func_0x00010bf529e0();
  if (pppuVar25 != (undefined ***)0x0) {
    bVar1 = puVar4[0x60];
    _objc_release(pppuVar19);
    if ((((uint)bVar1 | (uint)pppuVar20) & 1) == 0) goto LAB_105f81eac;
    pppuVar19 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar22;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar25;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (pppuVar20 != (undefined ***)0x0) {
      pppuVar24 = (undefined ***)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(pppuVar25);
        }
        uVar27 = *(undefined8 *)((long)pppuVar24 * 8);
        _objc_retain(pppuVar19);
        func_0x00010c0bd240(uVar27);
        _objc_release(pppuVar19);
        pppuVar24 = (undefined ***)((long)pppuVar24 + 1);
      } while (pppuVar20 != pppuVar24);
      pppuVar20 = pppuVar25;
      func_0x00010bf52a60();
    }
    _objc_release(pppuVar25);
    pppuVar20 = pppuVar19;
    func_0x00010bf529e0();
    if (pppuVar20 != (undefined ***)0x0) {
      pppuVar20 = pppuVar19;
      func_0x00010bf51e00();
      func_0x00010c17ed80(puVar6);
      _objc_release(pppuVar20);
    }
  }
  _objc_release(pppuVar19);
LAB_105f81eac:
  func_0x00010c0d9840(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(pppuVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010bfd8220();
  if ((int)puVar4 != 0) {
    puVar4 = puVar5;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar6 = PTR_PTR_1126b3800;
      _objc_alloc(PTR_PTR_1126b3800);
      func_0x00010bffa140();
      puVar8 = PTR_PTR_1126c6900;
      _objc_alloc_init(PTR_PTR_1126c6900);
      func_0x00010c1863c0();
      func_0x00010befa120(*(undefined8 *)(puVar7 + 0x20));
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105f81998; end: 105f81f1f; -[SCSpotlightCommentShareMessagePlugin _emitCommentDisplayInfoWithCommentDisplayInfoSubject:spotlightReply:] */

void FUN_105f81998(double param_1,long param_2,ulong param_3,long param_4,undefined *param_5)

{
  byte bVar1;
  unkuint9 Var2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = PTR_PTR_1126c68f0;
  _objc_alloc();
  puVar5 = param_5;
  func_0x00010c131f40(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_5;
  func_0x00010c132180(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffe40();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar6 = PTR_PTR_1126b28e0;
  _objc_opt_new();
  puVar5 = param_5;
  func_0x00010c131f00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar6);
  _objc_release(puVar5);
  puVar5 = param_5;
  func_0x00010c131f20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc60(puVar6);
  _objc_release(puVar5);
  func_0x00010c171180(puVar4);
  func_0x00010c1321a0(param_5);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65620(param_1 / 1000.0 + -978307200.0,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5aa0(0x4024000000000000,PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c19ed00(puVar4);
  _objc_release(puVar7);
  puVar5 = param_5;
  func_0x00010c131f60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eec0(puVar4);
  _objc_release(puVar5);
  puVar5 = param_5;
  func_0x00010c131fa0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4320(puVar4);
  _objc_release(puVar5);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_5;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar8);
      }
      uVar13 = *(ulong *)((long)puVar12 * 8);
      puVar11 = PTR_PTR_1126c68f8;
      _objc_alloc(PTR_PTR_1126c68f8);
      uVar9 = uVar13;
      func_0x00010c11f2a0(uVar13);
      func_0x00010c11f2a0(uVar13);
      Var2 = (unkuint9)param_3;
      func_0x00010bf85d80(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04b900((double)uVar9,(double)(unkint9)Var2,puVar11);
      func_0x00010befa120(puVar7);
      _objc_release(puVar11);
      _objc_release(uVar13);
      puVar12 = puVar12 + 1;
    } while (puVar5 != puVar12);
    puVar5 = puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  puVar5 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010c1c68a0(puVar4);
  _objc_release(puVar5);
  puVar5 = param_5;
  func_0x00010c0f3b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9040(puVar4);
  _objc_release(puVar5);
  puVar5 = param_5;
  func_0x00010c242640();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c0720c0();
  _objc_release(puVar5);
  puVar5 = param_5;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010bf529e0();
  if (puVar12 != (undefined *)0x0) {
    bVar1 = *(byte *)(param_2 + 0x60);
    _objc_release(puVar5);
    if ((((uint)bVar1 | (uint)puVar8) & 1) == 0) goto LAB_105f81eac;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_5;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar12);
        }
        uVar14 = *(undefined8 *)((long)puVar11 * 8);
        _objc_retain(puVar5);
        func_0x00010c0bd240(uVar14);
        _objc_release(puVar5);
        puVar11 = puVar11 + 1;
      } while (puVar8 != puVar11);
      puVar8 = puVar12;
      func_0x00010bf52a60();
    }
    _objc_release(puVar12);
    puVar8 = puVar5;
    func_0x00010bf529e0();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = puVar5;
      func_0x00010bf51e00();
      func_0x00010c17ed80(puVar4);
      _objc_release(puVar8);
    }
  }
  _objc_release(puVar5);
LAB_105f81eac:
  func_0x00010c0d9840(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar9 = param_3;
  func_0x00010bfd8220();
  if ((int)uVar9 != 0) {
    uVar9 = param_3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    if (uVar9 != 0) {
      puVar5 = PTR_PTR_1126b3800;
      _objc_alloc(PTR_PTR_1126b3800);
      func_0x00010bffa140();
      puVar4 = PTR_PTR_1126c6900;
      _objc_alloc_init(PTR_PTR_1126c6900);
      func_0x00010c1863c0();
      func_0x00010befa120(*(undefined8 *)(param_4 + 0x20));
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f81f20; end: 105f81fd3;  */

void FUN_105f81f20(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfd8220();
  if ((int)lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b3800;
      _objc_alloc(PTR_PTR_1126b3800);
      func_0x00010bffa140();
      puVar3 = PTR_PTR_1126c6900;
      _objc_alloc_init(PTR_PTR_1126c6900);
      func_0x00010c1863c0();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f81fd4; end: 105f82003; -[SCSpotlightCommentShareMessagePlugin identifier] */

void FUN_105f81fd4(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e34498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e34498);
  return;
}



/* Entry: 105f82004; end: 105f8200b; -[SCSpotlightCommentShareMessagePlugin pluginType] */

undefined8 FUN_105f82004(void)

{
  return 0;
}



/* Entry: 105f8200c; end: 105f8204b; -[SCSpotlightCommentShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

undefined8 FUN_105f8200c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07f380();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105f8204c; end: 105f8208b; -[SCSpotlightCommentShareMessagePlugin canForwardMessageFromCTA:] */

undefined8 FUN_105f8204c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07f380();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105f8208c; end: 105f82193; -[SCSpotlightCommentShareMessagePlugin isSharingRestrictedForMessage:] */

undefined8 FUN_105f8208c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c07f380();
  if ((int)uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar1;
    func_0x00010bf4df40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c24af20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108f52130();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar5,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c07dce0();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  return uVar6;
}



/* Entry: 105f82194; end: 105f82297; -[SCSpotlightCommentShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_105f82194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010be18ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar2 = PTR_PTR_1126c68d0;
  func_0x00010bf44480(PTR_PTR_1126c68d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar1,param_2,puVar2,0,param_1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c6898;
  func_0x00010bf44ea0(PTR_PTR_1126c6898,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c68a0;
  func_0x00010bfbb8c0(PTR_PTR_1126c68a0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c68a8;
  _objc_alloc(PTR_PTR_1126c68a8);
  func_0x00010c039de0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f82298; end: 105f8235f; -[SCSpotlightCommentShareMessagePlugin _forwardingContextForMessage:conversationParticipants:] */

void FUN_105f82298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126ae820;
  _objc_alloc_init(PTR_PTR_1126ae820);
  uVar3 = param_1;
  func_0x00010bde8360(param_1,param_2,param_3,puVar1,puVar2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be13a40(param_1,param_2,param_3,puVar1,puVar2,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105f82360; end: 105f8272b; -[SCSpotlightCommentShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

void FUN_105f82360(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_x4;
  undefined8 in_x6;
  undefined8 uVar10;
  
  _objc_retain(in_x6);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(in_x4);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar10;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  uVar10 = uVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c24af20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf41ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar10);
  uVar10 = uVar1;
  func_0x00010c22a700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c24af20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar10);
  uVar10 = uVar1;
  func_0x00010c22a700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c24af20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar10);
  puVar5 = PTR_PTR_1126c6908;
  _objc_alloc(PTR_PTR_1126c6908);
  func_0x00010c000ba0();
  puVar6 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2b0820(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  uVar10 = in_x4;
  func_0x00010bf026a0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar10);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = in_x4;
  func_0x00010bf50b20(in_x4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_x6);
  func_0x00010c15cbc0(uVar8);
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(in_x6);
  _objc_release(in_x6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105f8272c; end: 105f8273f;  */

void FUN_105f8272c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105f8273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 105f82740; end: 105f8277f; -[SCSpotlightCommentShareMessagePlugin shouldDisplayContextualHeaderForMessage:] */

undefined8 FUN_105f82740(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07f380();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105f82780; end: 105f8281b; -[SCSpotlightCommentShareMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_105f82780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c68c0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar1;
  FUN_105f82a90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e34418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051540(puVar1,param_2,puVar3,0,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f8281c; end: 105f82833; -[SCSpotlightCommentShareMessagePlugin presentingViewController] */

void FUN_105f8281c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f82834; end: 105f8283f; -[SCSpotlightCommentShareMessagePlugin setPresentingViewController:] */

void FUN_105f82834(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105f82840; end: 105f82847; -[SCSpotlightCommentShareMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105f82840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105f82848; end: 105f82877; -[SCSpotlightCommentShareMessagePlugin setActiveConversationIdObservable:] */

void FUN_105f82848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f82878; end: 105f8287f; -[SCSpotlightCommentShareMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105f82878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105f82880; end: 105f828af; -[SCSpotlightCommentShareMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105f82880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f828b0; end: 105f82977; -[SCSpotlightCommentShareMessagePlugin .cxx_destruct] */

void FUN_105f828b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 105f82978; end: 105f82a37; -[SCSpotlightCommentSharePageLauncherPayload initWithUiContainer:configuration:sourcePage:viewLocation:feedPageEntryType:] */

undefined1 *
FUN_105f82978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ee710;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f82a38; end: 105f82a3f; -[SCSpotlightCommentSharePageLauncherPayload uiContainer] */

undefined8 FUN_105f82a38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105f82a40; end: 105f82a47; -[SCSpotlightCommentSharePageLauncherPayload configuration] */

undefined8 FUN_105f82a40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f82a48; end: 105f82a4f; -[SCSpotlightCommentSharePageLauncherPayload sourcePage] */

undefined8 FUN_105f82a48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f82a50; end: 105f82a57; -[SCSpotlightCommentSharePageLauncherPayload viewLocation] */

undefined8 FUN_105f82a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f82a58; end: 105f82a5f; -[SCSpotlightCommentSharePageLauncherPayload feedPageEntryType] */

undefined8 FUN_105f82a58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f82a60; end: 105f82a8f; -[SCSpotlightCommentSharePageLauncherPayload .cxx_destruct] */

void FUN_105f82a60(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f82a90; end: 105f82aa7;  */

void FUN_105f82a90(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e34438;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e34438,
                      &PTR____CFConstantStringClassReference_110e34498,0);
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



/* Entry: 105f82aa8; end: 105f82ab3; +[SCCSpotlightCommentShareView componentPath] */

undefined ** FUN_105f82aa8(void)

{
  return &PTR____CFConstantStringClassReference_110e344b8;
}



/* Entry: 105f82ab4; end: 105f82ae7; -[SCCSpotlightCommentShareView initWithViewModel:componentContext:runtime:] */

void FUN_105f82ab4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee718;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f82ae8; end: 105f82b37; -[SCCSpotlightCommentShareView setViewModel:] */

void FUN_105f82ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f82b38; end: 105f82b7b; -[SCCSpotlightCommentShareView viewModel] */

void FUN_105f82b38(undefined8 param_1)

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



/* Entry: 105f82b7c; end: 105f82bbb; -[SCCCommentMentionAttribute initWithStart:length:displayName:] */

void FUN_105f82b7c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee720;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105f82bbc; end: 105f82bcb; +[SCCCommentMentionAttribute valdiMarshallableObjectDescriptor] */

void FUN_105f82bbc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_start_110900180;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f82bcc; end: 105f82c17; -[SCCSpotlightCommentDisplayInfo initWithCommentPosterDisplayName:commentContentText:] */

void FUN_105f82bcc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee728;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105f82c18; end: 105f82c2b; +[SCCSpotlightCommentDisplayInfo valdiMarshallableObjectDescriptor] */

void FUN_105f82c18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109001f8;
  param_1[1] = &PTR_s_SCCBitmojiInfo_1109002e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f82c2c; end: 105f82c4b; -[SCCSpotlightCommentShareContext init] */

void FUN_105f82c2c(void)

{
  func_0x000105f82cc4(PTR_PTR_1126ee730);
  return;
}



/* Entry: 105f82c4c; end: 105f82c5f; +[SCCSpotlightCommentShareContext valdiMarshallableObjectDescriptor] */

void FUN_105f82c4c(undefined8 *param_1)

{
  *param_1 = &PTR_s_onTap_110900308;
  param_1[1] = &PTR_DAT_110900368;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f82c60; end: 105f82c7f; -[SCCSpotlightCommentsAttachment init] */

void FUN_105f82c60(void)

{
  func_0x000105f82cc4(PTR_PTR_1126ee738);
  return;
}



/* Entry: 105f82c80; end: 105f82c93; +[SCCSpotlightCommentsAttachment valdiMarshallableObjectDescriptor] */

void FUN_105f82c80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110900390;
  param_1[1] = &PTR_DAT_1109003c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f82c94; end: 105f82cb3; -[SCCSpotlightStoryDisplayInfo init] */

void FUN_105f82c94(void)

{
  func_0x000105f82cc4(PTR_PTR_1126ee740);
  return;
}



/* Entry: 105f82cb4; end: 105f82cfb; +[SCCSpotlightStoryDisplayInfo valdiMarshallableObjectDescriptor] */

void FUN_105f82cb4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109003d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f82cfc; end: 105f82d03; -[SCSpotlight916AutoPlaySession mediaStarted] */

undefined1 FUN_105f82cfc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f82d04; end: 105f82d0b; -[SCSpotlight916AutoPlaySession setMediaStarted:] */

void FUN_105f82d04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105f82d0c; end: 105f82d13; -[SCSpotlight916AutoPlaySession isPlaying] */

undefined1 FUN_105f82d0c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105f82d14; end: 105f82d1b; -[SCSpotlight916AutoPlaySession setIsPlaying:] */

void FUN_105f82d14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 105f82d1c; end: 105f83277; -[SCSpotlight916ShareMessagePlugin initWithStorySharingServices:currentUserId:spotlightDataFetcher:publicProfileManager:spotlightShareSender:spotlightScopeExposer:spotlightScopeServices:thumbnailCoordinator:mediaCoordinator:autoPlayEventsLogger:discoverFeedDataMutator:snapchattersSynchronousDataFetcher:spotlightPlatformAnalyticsCreator:groupFetcher:storiesConfigProvider:messagingMessageProvider:currentPageTracker:circumstanceEngine:] */

undefined8 *
FUN_105f82d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
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
  puStack_70 = PTR_PTR_1126ee748;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_4;
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
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_20;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105f83278;
    puStack_88 = &UNK_110842e18;
    _objc_retain(puVar1);
    puStack_80 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_a0);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    _objc_release(puStack_80);
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



/* Entry: 105f83278; end: 105f832bb;  */

void FUN_105f83278(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  *(undefined **)(*(long *)(param_1 + 0x20) + 0xb8) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f832bc; end: 105f8335f; -[SCSpotlight916ShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105f832bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be44120(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bdd17c0(param_1,param_2,param_3,param_4,1,1);
    func_0x00010bee75a0(param_1,param_2,param_3,param_4,0,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f83360; end: 105f8338f; -[SCSpotlight916ShareMessagePlugin setVisibleMessageIds:] */

void FUN_105f83360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f83390; end: 105f8348f; -[SCSpotlight916ShareMessagePlugin _messageVisibilityObservableForMessage:] */

void FUN_105f83390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar3 = *(undefined **)(param_1 + 0x150);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____kCFBooleanFalse_11034ab60);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105f83490;
    puStack_40 = &UNK_110900418;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0b8600(puVar3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f83490; end: 105f834c3;  */

void FUN_105f83490(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf4b900(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105f834c4; end: 105f83643; -[SCSpotlight916ShareMessagePlugin _isLastMessageObservableForMessage:] */

void FUN_105f834c4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x28);
  puVar4 = PTR_PTR_1126ae6b8;
  puVar5 = *(undefined **)(param_1 + 0x80);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105f83644;
    puStack_50 = &UNK_1108dbc00;
    _objc_retain(param_3);
    puStack_48 = param_3;
    func_0x00010c0b8600(puVar5,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c2519e0(puVar5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    puVar5 = puStack_48;
  }
  _objc_release(puVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f83644; end: 105f836bf;  */

void FUN_105f83644(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c0720c0(param_2);
  }
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f836c0; end: 105f8381b; -[SCSpotlight916ShareMessagePlugin _isLatestSpotlightShareObservableForMessage:] */

void FUN_105f836c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x98);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____kCFBooleanFalse_11034ab60);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105f837a0;
    puStack_40 = &UNK_1108dbc00;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0b8600(puVar2,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f8381c; end: 105f8386b; -[SCSpotlight916ShareMessagePlugin _lastMessageIdObservableFromActiveConversationInformationObservable:] */

void FUN_105f8381c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110900448);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f8386c; end: 105f8395b;  */

void FUN_105f8386c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105f8395c;
  uStack_30 = 0x105f8396c;
  uStack_28 = 0;
  func_0x00010c0bf0a0(param_2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((undefined **)puStack_48[5] != (undefined **)0x0) {
    ppuVar1 = (undefined **)puStack_48[5];
  }
  _objc_retain(ppuVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105f8395c; end: 105f83973;  */

void FUN_105f8395c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105f83974; end: 105f839b3;  */

void FUN_105f83974(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c089600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f839b4; end: 105f83ba7; -[SCSpotlight916ShareMessagePlugin _autoPlayPreviewEligibilityObservableForMessage:conversationParticipants:] */

void FUN_105f839b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = param_1;
  func_0x00010bdd17c0();
  if ((int)lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c0cbe00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    lVar3 = param_1;
    func_0x00010be5ffc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be41680(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    lVar5 = lVar3;
    func_0x00010bf41860(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 105f83ba8; end: 105f83c7b;  */

void FUN_105f83ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR____kCFBooleanFalse_11034ab60;
  if (param_1 != 0) {
    func_0x00010bf1f3c0(param_3);
    func_0x00010bf1f3c0(param_2);
    func_0x00010bdd17c0(param_1);
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f83c7c; end: 105f84263; -[SCSpotlight916ShareMessagePlugin _valdiContextParamsForMessage:conversationParticipants:renderType:autoPlayPreviewEnabled:] */

void FUN_105f83c7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x108);
  func_0x00010c0cbe00(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  if (param_5 == 1) {
    lVar6 = lVar2;
    func_0x00010c11ebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  lVar5 = lVar4;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  uStack_78 = PTR_PTR_1126c6880;
  if (lVar7 == 0) {
    param_1 = 0;
    goto LAB_105f841f4;
  }
  if (param_5 == 1) {
    uVar13 = param_3;
    func_0x00010c0cb340(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    func_0x00010c11ec40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11eda0(uStack_78,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar13);
LAB_105f83e24:
    uStack_80 = 0;
    bVar1 = false;
  }
  else {
    func_0x00010c0cbae0(PTR_PTR_1126c6880,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) goto LAB_105f83e24;
    uStack_80 = param_1;
    func_0x00010bdd17a0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
  }
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar5 = 0x50;
  if (param_5 != 2) {
    lVar5 = 0x48;
  }
  lVar15 = *(long *)(param_1 + lVar5);
  _objc_retain(lVar15);
  lVar6 = lVar15;
  func_0x00010c0e00e0(lVar15,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _os_unfair_lock_unlock(param_1 + 0x28);
  puVar8 = PTR_PTR_1126c6878;
  if (lVar6 == 0) {
    uVar13 = param_3;
    func_0x00010c15de20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c082f00();
    _objc_release(uVar11);
    _objc_release(uVar13);
    if ((int)puVar8 == 0) {
      uVar13 = 0;
    }
    else {
      uVar11 = param_3;
      func_0x00010c15de20();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
    }
    func_0x00010be3c4a0(param_1,param_2,param_3,param_4);
    if (param_5 == 2) {
      uStack_98 = (undefined *)0x0;
    }
    else {
      uStack_98 = PTR_PTR_1126c6888;
      _objc_alloc();
      func_0x00010c02b380();
    }
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar15 = param_1;
    func_0x00010bdf7e80(param_1,param_2,param_3,lVar7,uVar13,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3c360(param_1,param_2,lVar15,param_3);
    func_0x00010be3c5a0(param_1,param_2,param_3,lVar7);
    if (bVar1) {
      uVar9 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010c0cbe00(uVar9,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010c0cb9a0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_1;
      func_0x00010be87980(param_1,param_2,lVar3,uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar9);
    }
    else {
      lVar14 = 0;
    }
    _os_unfair_lock_unlock(param_1 + 0x28);
    func_0x00010be07e20(param_1,param_2,lVar14);
    lVar10 = *(long *)(param_1 + 8);
    func_0x00010c295300(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf821c0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar16;
    func_0x00010bf4ef00(lVar16,param_2,lVar15,0,uVar11,uStack_98,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(lVar16);
    _objc_release(lVar10);
    func_0x00010c16cec0(lVar12,param_2,param_6);
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar16 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar16);
    lVar5 = lVar16;
    func_0x00010c0e00e0(lVar16,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      func_0x00010c1d0640(lVar16,param_2,lVar12,lVar3);
    }
    else {
      lVar5 = lVar16;
      func_0x00010c0e00e0(lVar16,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      func_0x00010c16cec0(lVar5,param_2,param_6);
      lVar12 = lVar5;
    }
    _objc_release(lVar16);
    _os_unfair_lock_unlock(param_1 + 0x28);
    func_0x00010bde84e0(param_1,param_2,lVar12,uStack_78,param_3,uStack_80);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    _objc_release(lVar14);
    _objc_release(lVar15);
    _objc_release(uStack_98);
    _objc_release(uVar13);
  }
  else {
    func_0x00010c16cec0(lVar6,param_2,param_6);
    func_0x00010bde84e0(param_1,param_2,lVar6,uStack_78,param_3,uStack_80);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar6);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
LAB_105f841f4:
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f84264; end: 105f84553; -[SCSpotlight916ShareMessagePlugin _contextParamsWithProvider:pluginMessage:message:autoPlayPreviewEligibilityObservable:] */

void FUN_105f84264(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010bf4ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf443a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c6910;
  _objc_opt_class(PTR_PTR_1126c6910);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c16cea0(uVar1);
  func_0x00010c1d2ea0(uVar1);
  func_0x00010c1d2e60(uVar1);
  func_0x00010c1d2a80(uVar1);
  func_0x00010c1d2a60(uVar1);
  if (param_6 != 0) {
    _objc_initWeak(auStack_80,param_1);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105f84554;
    puStack_98 = &UNK_110841fb0;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_5);
    uStack_90 = param_5;
    func_0x00010c1d2ea0(uVar1);
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105f84590;
    puStack_c8 = &UNK_110841fb0;
    _objc_copyWeak(auStack_b8,auStack_80);
    _objc_retain(param_5);
    uStack_c0 = param_5;
    func_0x00010c1d2e60(uVar1);
    puStack_110 = puVar4;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x105f845cc;
    puStack_f8 = &UNK_110841fb0;
    _objc_copyWeak(auStack_e8,auStack_80);
    _objc_retain(param_5);
    uStack_f0 = param_5;
    func_0x00010c1d2a80(uVar1);
    _objc_copyWeak(auStack_118,auStack_80);
    _objc_retain(param_5);
    func_0x00010c1d2a60(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_118);
    _objc_release(uStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_release(uStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f84554; end: 105f84643;  */

void FUN_105f84554(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdd1800(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f84644; end: 105f8475b; -[SCSpotlight916ShareMessagePlugin _autoPlayPreviewSessionDidOpenForMessage:] */

void FUN_105f84644(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bde1d80(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      _os_unfair_lock_lock(param_1 + 0x28);
      lVar1 = *(long *)(param_1 + 0x70);
      func_0x00010c0e00e0(lVar1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        puVar4 = PTR_PTR_1126c6918;
        _objc_opt_new(PTR_PTR_1126c6918);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,puVar4,lVar2);
        _objc_release(puVar4);
      }
      _os_unfair_lock_unlock(param_1 + 0x28);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f8475c; end: 105f8486f; -[SCSpotlight916ShareMessagePlugin _autoPlayPreviewSessionDidCloseForMessage:] */

void FUN_105f8475c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x28);
    uVar4 = *(ulong *)(param_1 + 0x70);
    func_0x00010c0e00e0(uVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x00010c0c68c0();
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x70),param_2,lVar2);
      if ((uVar5 & 1) != 0) {
        func_0x00010c0b1020(uVar3,param_2,lVar2,0);
      }
    }
    _objc_release(uVar4);
    _os_unfair_lock_unlock(param_1 + 0x28);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f84870; end: 105f849e3; -[SCSpotlight916ShareMessagePlugin _autoPlayMediaPlaybackDidStartForMessage:] */

void FUN_105f84870(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bde1da0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _os_unfair_lock_lock(param_1 + 0x28);
      uVar4 = *(ulong *)(param_1 + 0x70);
      func_0x00010c0e00e0(uVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      if ((uVar4 != 0) && (uVar5 = uVar4, func_0x00010c07a400(), (uVar5 & 1) == 0)) {
        func_0x00010c1b35a0(uVar4,param_2,1);
        uVar5 = uVar4;
        func_0x00010c0c68c0();
        func_0x00010c1c5320(uVar4,param_2,1);
        if ((uVar5 & 1) == 0) {
          func_0x00010bf59900(uVar3,param_2,lVar2,lVar1);
          func_0x00010c0c6920(uVar3,param_2,lVar2);
        }
        else {
          func_0x00010c13d620(uVar3,param_2,lVar2);
        }
      }
      _objc_release(uVar4);
      _os_unfair_lock_unlock(param_1 + 0x28);
    }
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f849e4; end: 105f84aeb; -[SCSpotlight916ShareMessagePlugin _autoPlayMediaPlaybackDidPauseForMessage:] */

void FUN_105f849e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x70);
    func_0x00010c0e00e0(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar4 = lVar1, func_0x00010c07a400(), (int)lVar4 != 0)) {
      func_0x00010c1b35a0(lVar1,param_2,0);
      func_0x00010c0f5ee0(uVar3,param_2,lVar2);
    }
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x28);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f84aec; end: 105f84b9f; -[SCSpotlight916ShareMessagePlugin _collectionViewAutoPlayItemIdForMessage:] */

void FUN_105f84aec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c24c520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105f84ba0; end: 105f84c2b; -[SCSpotlight916ShareMessagePlugin _collectionViewAutoPlayLoggingInfoForMessage:] */

void FUN_105f84ba0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bde1d80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c6920;
    _objc_alloc(PTR_PTR_1126c6920);
    func_0x00010c020320();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f84c2c; end: 105f84cc7; -[SCSpotlight916ShareMessagePlugin _autoPlayPreviewEnabledForMessage:conversationParticipants:isLatestSpotlightShare:isVisible:] */

ulong FUN_105f84c2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be44120(param_1,param_2,param_3);
  uVar3 = 0;
  if (((param_6 != 0) && ((int)lVar1 != 0)) &&
     (func_0x00010bebec60(), uVar3 = param_5, param_1 != 1)) {
    if (param_1 == 2) {
      uVar2 = param_4;
      func_0x0001070b1c70(param_4);
      uVar3 = (ulong)((uint)uVar2 ^ 1);
    }
    else {
      uVar3 = 0;
    }
  }
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 105f84cc8; end: 105f84d0f; -[SCSpotlight916ShareMessagePlugin _spotlightChatPreviewAutoPlayTreatment] */

long FUN_105f84cc8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c24af00();
  _objc_release(lVar1);
  if (1 < lVar2 - 1U) {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 105f84d10; end: 105f84e57; -[SCSpotlight916ShareMessagePlugin _dataProviderWithMessage:compositeStoryId:senderUserId:renderType:] */

void FUN_105f84d10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = *(undefined **)(param_1 + 0x30);
  _objc_retain(puVar2);
  if (param_6 == 2) {
    lVar1 = 0x38;
  }
  else {
    puVar3 = puVar2;
    if (param_6 != 1) goto LAB_105f84d98;
    lVar1 = 0x40;
  }
  puVar3 = *(undefined **)(param_1 + lVar1);
  _objc_retain(puVar3);
  _objc_release(puVar2);
LAB_105f84d98:
  puVar2 = puVar3;
  func_0x00010c0e00e0(puVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c6928;
    _objc_alloc(PTR_PTR_1126c6928);
    func_0x00010c000b60();
    func_0x00010c1d0640(puVar3,param_2,puVar2,param_4);
  }
  else {
    puVar2 = puVar3;
    func_0x00010c0e00e0(puVar3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f84e58; end: 105f84ef7; -[SCSpotlight916ShareMessagePlugin _insertDataProviderIntoConversationMap:forMessage:] */

void FUN_105f84e58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c0cbe00(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c0cb9a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f84ef8; end: 105f84f97; -[SCSpotlight916ShareMessagePlugin _insertMessage:forCompositeStoryId:] */

void FUN_105f84ef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    _os_unfair_lock_assert_owner(param_1 + 0x28);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f84f98; end: 105f851ab; -[SCSpotlight916ShareMessagePlugin _insertInChatContextParamsForMessage:conversationParticipants:] */

void FUN_105f84f98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 != 0) && (lVar2 != 0)) {
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_105f8395c;
    uStack_80 = 0x105f8396c;
    uStack_78 = 0;
    _objc_retain(param_4);
    _objc_retain(lVar1);
    _objc_retain(lVar1);
    func_0x00010c0bf240(param_4);
    if (puStack_98[5] != 0) {
      _os_unfair_lock_lock(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      lVar3 = lVar1;
      func_0x00010bf490e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(lVar3);
      _os_unfair_lock_unlock(param_1 + 0x28);
    }
    _objc_release(lVar1);
    _objc_release(lVar1);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



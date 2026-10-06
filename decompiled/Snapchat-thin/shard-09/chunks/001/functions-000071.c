/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106939638; end: 1069397ef; -[SCDiscoverFeedQueryCoordinator _reorderAfterFulfillForQuery:feedType:updatingBlock:] */

void FUN_106939638(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c130ac0(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be83d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069397f0; end: 106939823;  */

void FUN_1069397f0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106939824; end: 106939923; -[SCDiscoverFeedQueryCoordinator _publishAfterFulfillForQuery:updatingBlock:] */

void FUN_106939824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
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



/* Entry: 106939924; end: 10693996b;  */

void FUN_106939924(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be99900(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010bed60a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10693996c; end: 106939be7; -[SCDiscoverFeedQueryCoordinator _sendQuery:snapToken:updatingBlock:invalidFeedTypes:] */

void FUN_10693996c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  uVar1 = uVar6;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106939be8;
  puStack_b0 = &UNK_11094c0d8;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = uVar1;
  uStack_a0 = uVar5;
  uStack_98 = uVar6;
  _objc_retain(param_3);
  uStack_90 = param_3;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_retain(param_6);
  ppuVar2 = &puStack_c8;
  uStack_80 = param_6;
  _objc_retainBlock(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258060(PTR_PTR_1126c10f8);
  uVar4 = uVar3;
  func_0x00010c15bfa0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  if ((int)uVar4 == 0) {
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcac60(uVar3);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcac80(uVar3);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106939be8; end: 106939cab;  */

void FUN_106939be8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_2);
  func_0x00010c11d960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x000107bf2ff8(param_2,uVar1,uVar3,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fc00();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106939cac; end: 106939fdb; -[SCDiscoverFeedQueryCoordinator _sendQuery:snapToken:interactionsHistory:originalInteractionHistory:updatingBlock:requestId:invalidFeedTypes:] */

void FUN_106939cac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_100;
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
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_70,*(undefined8 *)(param_1 + 0x40));
  _objc_initWeak(auStack_78,param_1);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106939fdc;
  puStack_c0 = &UNK_11094c108;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  uStack_b8 = param_3;
  _objc_retain(param_4);
  uStack_b0 = param_4;
  _objc_retain(param_7);
  uStack_88 = param_7;
  _objc_retain(param_5);
  uStack_a8 = param_5;
  _objc_retain(param_6);
  uStack_a0 = param_6;
  _objc_retain(param_8);
  uStack_98 = param_8;
  _objc_retain(param_9);
  uStack_90 = param_9;
  ppuVar1 = &puStack_d8;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c067ec0();
  if ((int)uVar4 < 1) {
    lVar5 = 2;
  }
  else {
    uStack_100 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uStack_100;
    func_0x00010c067ec0(uStack_100);
    lVar5 = (long)(int)uVar6;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  puVar3 = auStack_70;
  _objc_loadWeakRetained(puVar3);
  func_0x00010846e648(0x3ff0000000000000,5,lVar5,uVar6,ppuVar1,puVar3);
  _objc_release(puVar3);
  if (0 < (int)uVar4) {
    _objc_release(uStack_100);
  }
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107bf38a4(param_6,uVar4,param_5);
  _objc_release(uVar4);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_88);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106939fdc; end: 10693a05f;  */

void FUN_106939fdc(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  func_0x00010be9fc60(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10693a060; end: 10693a2ab; -[SCDiscoverFeedQueryCoordinator _sendQueryBlock:snapToken:updatingBlock:retryTimer:interactionsHistory:originalInteractionHistory:requestId:invalidFeedTypes:] */

void FUN_10693a060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c11d980(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
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



/* Entry: 10693a2ac; end: 10693a337;  */

void FUN_10693a2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fc40();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10693a338; end: 10693ad3b; -[SCDiscoverFeedQueryCoordinator _sendQueryBlock:snapToken:sequenceInfo:contentTokens:updatingBlock:retryTimer:interactionsHistory:originalInteractionHistory:requestId:invalidFeedTypes:] */

void FUN_10693a338(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  ulong param_13)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 *puVar27;
  undefined **ppuVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  ulong uVar32;
  ulong uStack_1b8;
  undefined8 uStack_1a0;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_120;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  uint uStack_a8;
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar31 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_4;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar2;
  func_0x00010c14de00(puVar31);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  uVar3 = param_4;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar31);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bfa4340();
  uStack_1b8 = uVar2;
  func_0x00010bfa4340();
  uStack_120 = uVar2;
  func_0x00010bfa4340();
  func_0x00010bfa4340(uVar2);
  uVar4 = param_13;
  func_0x00010bf529e0();
  if (uVar4 == 0) {
LAB_10693a524:
    uVar29 = 0;
    uStack_160 = 0;
    if (uStack_1b8 != 0xdd) goto LAB_10693a554;
    uVar4 = 0xdd;
    uStack_1b8 = 0xdd;
    uVar29 = 0;
  }
  else {
    uVar4 = param_13;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c282760();
    _objc_release(uVar4);
    if (((uint)uVar7 & 0xfffffffe) != 2) goto LAB_10693a524;
    _objc_retain(param_13);
    uVar4 = uVar7 & 0xffffffff;
    uStack_1b8 = 0xfffffffffbadbeef;
    uStack_160 = param_13;
    uVar29 = (uint)uVar7;
    uStack_120 = uVar4;
  }
  func_0x000107d04d80(uVar4);
LAB_10693a554:
  lVar5 = *(long *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c155a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (uStack_120 == 0xdd) {
    lStack_158 = 0;
  }
  else {
    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_158 = lVar5;
    func_0x00010c25c6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(puVar31);
  }
  uVar7 = *(ulong *)(param_2 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bfd46e0();
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c118120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar10 = *(undefined8 *)(param_2 + 0xe0);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + 0x158);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x000108487704(uVar9,uVar10,0,uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_2 + 0x118);
  puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar31;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc9500(uVar10);
  _objc_release(puVar12);
  _objc_release(puVar31);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x118);
  func_0x00010c2311a0();
  uVar10 = *(undefined8 *)(param_2 + 0x118);
  func_0x00010bfc9520();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c0f1c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (iVar1 == 0) {
    uStack_1a0 = 0;
  }
  else {
    uStack_1a0 = param_10;
    func_0x00010bf51e00();
  }
  uVar14 = *(undefined8 *)(param_2 + 0x128);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar11;
  func_0x00010c078a60();
  uVar15 = *(undefined8 *)(param_2 + 0xa8);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar15;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar30;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_2 + 0xb0);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c0d42e0();
  uVar19 = uStack_1a0;
  FUN_106938d5c(uStack_1a0,uVar23,uVar4 & 0xffffffff,uVar16,uVar18,*(undefined8 *)(param_2 + 0x108),
                uVar10,*(undefined8 *)(param_2 + 0x170));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar4;
  func_0x00010c0720c0();
  uVar21 = uVar7;
  func_0x00010846d1c0(uVar7,uStack_1b8,uStack_160,lStack_158,uVar13,0,uVar19,uVar8,
                      CONCAT71((int7)(uVar32 >> 8),(char)uVar20) & 0xffffffffffff00ff,param_12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar30);
  _objc_release(uVar15);
  _objc_release(uVar11);
  _objc_release(uVar14);
  if (iVar1 != 0) {
    _objc_release(uStack_1a0);
  }
  _objc_release(0);
  _objc_release(uVar13);
  _objc_release(uVar7);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x68);
  func_0x0001005929c0();
  if (iVar1 != 0) {
    puVar31 = PTR_PTR_1126c1108;
    _objc_opt_new(PTR_PTR_1126c1108);
    puVar12 = PTR_PTR_1126b7708;
    _objc_alloc_init(PTR_PTR_1126b7708);
    puVar22 = PTR_PTR_1126cf2e8;
    _objc_opt_new(PTR_PTR_1126cf2e8);
    func_0x00010c1f9260();
    func_0x00010c1d0560(puVar12);
    func_0x00010c19b0e0(puVar31);
    func_0x00010c19b160(uVar21);
    _objc_release(puVar22);
    _objc_release(puVar12);
    _objc_release(puVar31);
  }
  uVar11 = param_6;
  func_0x00010846bea8(param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18bae0(uVar21);
  _objc_release(uVar11);
  if (uStack_120 == 0xdd) {
    lVar5 = lVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar5;
    func_0x00010c25c6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    uVar23 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar23;
    func_0x00010c156b00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar24 != 0) {
      func_0x00010c1b82c0(uVar21);
    }
    _objc_release(uVar11);
    _objc_release(uVar23);
    _objc_release(lVar24);
  }
  lVar5 = *(long *)(param_2 + 0x60);
  func_0x00010bf95de0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = *(long *)(param_2 + 0x60);
  if ((int)uVar3 == 0xdd) {
    func_0x00010bf17280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2588e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar25 = lVar24;
  func_0x000108f54f3c();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c08fa60();
  if (lVar26 == 0) {
    puVar31 = (undefined *)0x0;
  }
  else {
    ppuStack_98 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar31 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_90 = lVar25;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar21;
  func_0x000108f130c0(uVar21,param_5,lVar5,lVar24,puVar31);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  _objc_initWeak(auStack_a0,param_2);
  uVar30 = *(undefined8 *)(param_2 + 0x10);
  uVar23 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10693ad3c;
  puStack_f0 = &UNK_11094c168;
  puVar27 = auStack_a0;
  _objc_copyWeak(auStack_b8,puVar27);
  _objc_retain(param_4);
  uStack_e8 = param_4;
  _objc_retain(lVar24);
  lStack_e0 = lVar24;
  _objc_retain(param_8);
  uStack_c0 = param_8;
  _objc_retain(uVar21);
  uStack_d8 = uVar21;
  uStack_b0 = param_1;
  uStack_a8 = uVar29;
  _objc_retain(param_9);
  uStack_d0 = param_9;
  _objc_retain(param_11);
  uStack_c8 = param_11;
  ppuVar28 = &puStack_108;
  uVar4 = uVar3;
  uVar11 = uVar23;
  func_0x00010c25f5e0(uVar30);
  _objc_release(uVar23);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_c0);
  _objc_release(lStack_e0);
  _objc_release(uStack_e8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uVar3);
  _objc_release(puVar31);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar5);
  _objc_release(uVar21);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(lStack_158);
  _objc_release(lVar6);
  _objc_release(uStack_160);
  _objc_release(uVar2);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_a0);
    __Unwind_Resume();
    _objc_retain(ppuVar28);
    _objc_retain(uVar11);
    _objc_retain(uVar4);
    _objc_retain(puVar27);
    lVar6 = param_4 + 0x50;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bed8520(*(undefined8 *)(param_4 + 0x58));
    _objc_release(ppuVar28);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(puVar27);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 10693ad3c; end: 10693adf7;  */

void FUN_10693ad3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed8520(*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10693adf8; end: 10693b64b; -[SCDiscoverFeedQueryCoordinator _updateForResponseFromQuery:path:updatingBlock:request:storiesRequest:partialBatchRequestFeedType:response:data:error:startTime:retryTimer:originalInteractionHistory:] */

/* WARNING: Removing unreachable block (ram,0x00010693b3c0) */
/* WARNING: Removing unreachable block (ram,0x00010693b3dc) */
/* WARNING: Removing unreachable block (ram,0x00010693b598) */
/* WARNING: Removing unreachable block (ram,0x00010693b2b4) */
/* WARNING: Removing unreachable block (ram,0x00010693b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010693b2d4) */

void FUN_10693adf8(double param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,undefined8 param_11,long param_12,undefined8 param_13,
                  undefined8 param_14)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_7);
  _objc_retain(param_5);
  uVar12 = param_4;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0xb8);
  func_0x00010c0f66a0(param_7);
  _objc_release(param_7);
  func_0x00010c08fa60(param_11);
  func_0x00010c0b0da0(uVar13);
  _objc_release(param_5);
  uVar12 = *(ulong *)(param_2 + 0x188);
  _objc_retain(param_4);
  _objc_retain(uVar12);
  if (param_4 == uVar12) {
    _objc_release(uVar12);
    _objc_release(param_4);
  }
  else {
    if (uVar12 == 0) {
      _objc_release();
    }
    else {
      uVar2 = param_4;
      func_0x00010c071ae0();
      _objc_release(uVar12);
      _objc_release(param_4);
      if ((uVar2 & 1) != 0) goto LAB_10693b058;
    }
    uVar11 = *(undefined8 *)(param_2 + 0xb8);
    uVar12 = param_4;
    func_0x00010c11d960(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + 0x188);
    func_0x00010c11d960(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5280(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar12);
    uVar11 = *(undefined8 *)(param_2 + 0x188);
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010c0720c0();
    _objc_release(uVar11);
    if ((int)uVar13 != 0) {
      func_0x00010bed1600(param_2);
      goto LAB_10693b5e0;
    }
  }
LAB_10693b058:
  func_0x00010bf63ce0(*(undefined8 *)(param_2 + 0x138));
  uVar13 = *(undefined8 *)(param_2 + 0xe8);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0960();
  _objc_release(uVar13);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  dVar14 = 1.60807493534087e-314;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10693b64c;
  puStack_88 = &UNK_11094c198;
  _objc_retain(param_4);
  ppuVar3 = &puStack_a0;
  uStack_80 = param_4;
  _objc_retainBlock();
  uVar12 = param_4;
  func_0x00010c11d960(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  FUN_106fd72d4();
  _objc_release(uVar12);
  _CACurrentMediaTime();
  dVar14 = (dVar14 - param_1) * 1000.0;
  if (param_12 == 0) {
    uVar12 = param_4;
    func_0x00010c11d960(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d04e04();
    _objc_release(uVar12);
    uVar12 = param_2;
    func_0x00010be3e600();
    if ((uVar12 & 1) == 0) {
      uVar5 = param_4;
      func_0x00010c11d680();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b1138;
      _objc_opt_class(PTR_PTR_1126b1138);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar12 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar12 = 0;
      }
      _objc_retain(uVar12);
      _objc_release(uVar5);
      uVar5 = uVar12;
      func_0x00010bfa43a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      uVar12 = uVar5;
      func_0x00010bf4b900();
      _objc_release(uVar5);
      if ((int)uVar12 != 0) goto LAB_10693b284;
      puVar6 = PTR_PTR_1126b7600;
      _objc_alloc(PTR_PTR_1126b7600);
      func_0x00010c008360();
      _objc_retain(0);
      uVar5 = param_4;
      func_0x00010c11d680();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126c2130;
      _objc_opt_class(PTR_PTR_1126c2130);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar9);
      uVar12 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar12 = 0;
      }
      _objc_retain(uVar12);
      _objc_release(uVar5);
      uVar5 = uVar12;
      func_0x00010bfa4340();
      _objc_release(uVar12);
      uVar10 = (uint)uVar5;
      uVar13 = 5;
      if (uVar10 == 0xf7) {
        uVar13 = 0x20;
      }
      uVar11 = 4;
      if (uVar10 != 3) {
        uVar11 = uVar13;
      }
      uVar13 = 2;
      if (uVar10 != 2) {
        uVar13 = uVar11;
      }
      uVar11 = 0;
      if (1 < uVar10) {
        uVar11 = uVar13;
      }
      uVar13 = *(undefined8 *)(param_2 + 0xf0);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      FUN_106fd756c(dVar14,1,uVar2,1,uVar11,uVar13);
      _objc_release(uVar13);
      func_0x00010be5e100(param_2);
      func_0x00010be31020(param_2);
    }
    else {
LAB_10693b284:
      puVar6 = PTR_PTR_1126b7608;
      _objc_alloc(PTR_PTR_1126b7608);
      func_0x00010c008360();
      _objc_retain(0);
      uVar13 = *(undefined8 *)(param_2 + 0xf0);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      FUN_106fd756c(dVar14,1,uVar2,1,0,uVar13);
      _objc_release(uVar13);
      func_0x00010c08fa60(param_11);
      func_0x00010be30f60(param_2);
    }
    uVar12 = 0;
    _objc_release(puVar6);
  }
  else {
    uVar13 = *(undefined8 *)(param_2 + 0xf0);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    FUN_106fd756c(dVar14,1,uVar2,0,0xffffffffffffffff,uVar13);
    _objc_release(uVar13);
    lVar4 = param_10;
    func_0x00010c252ee0();
    if (lVar4 - 500U < 100) {
      uVar12 = param_4;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar12;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_4;
        func_0x00010c11d960();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c0720c0();
        if ((int)uVar5 == 0) {
          uVar5 = param_4;
          func_0x00010c11d960();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar2);
          _objc_release(uVar12);
          if ((uVar7 & 1) == 0) goto LAB_10693b2fc;
          goto LAB_10693b428;
        }
        _objc_release(uVar2);
      }
      _objc_release(uVar12);
LAB_10693b428:
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c252ee0(param_10);
      func_0x00010c0df780(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be294e0(param_2);
      _objc_release(puVar6);
    }
    else {
      lVar4 = param_10;
      func_0x00010c252ee0();
      if (lVar4 - 400U < 100) goto LAB_10693b428;
LAB_10693b2fc:
      ppuVar8 = ppuVar3;
      (*(code *)ppuVar3[2])(ppuVar3,param_13,*(undefined8 *)(param_2 + 0x188));
      if (((ulong)ppuVar8 & 1) == 0) goto LAB_10693b428;
    }
    uVar12 = param_4;
    func_0x00010c11d960(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d04e04();
  }
  _objc_release(uVar12);
  _objc_release(ppuVar3);
  _objc_release(uStack_80);
LAB_10693b5e0:
  _objc_release(puVar1);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10693b64c; end: 10693b67b;  */

undefined8 FUN_10693b64c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x20) != param_3) {
    func_0x00010c069d00(param_2);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c150090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_scheduleNextAttempt_112631a40);
  return param_2;
}



/* Entry: 10693b67c; end: 10693b79b; -[SCDiscoverFeedQueryCoordinator _handleFailureWithQuery:error:updatingBlock:statusCodeToDisplay:] */

void FUN_10693b67c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  _objc_retain(param_6);
  _objc_release(uVar3);
  lVar2 = param_1 + 0x198;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf827c0();
  _objc_release(param_6);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,param_4);
  }
  func_0x00010bed1600(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10693b79c; end: 10693bcdb; -[SCDiscoverFeedQueryCoordinator _handleStoriesBatchResponse:storiesRequest:query:partialBatchRequestFeedType:updatingBlock:withMetricSize:originalInteractionHistory:] */

void FUN_10693b79c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  int iStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x198;
  _objc_loadWeakRetained(lVar10);
  func_0x00010bf82800();
  _objc_release(lVar10);
  uVar3 = param_5;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bfa4340();
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76880();
  _objc_release(uVar6);
  if ((uVar3 != 0) && (lVar10 = param_3, func_0x00010bfdb540(), (int)lVar10 != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x118);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc9500(uVar6);
    _objc_release(puVar7);
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x118);
    lVar10 = param_3;
    func_0x00010c142580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11bea0(uVar6);
    _objc_release(lVar10);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_10693bcdc;
  puStack_120 = &UNK_11094c1c8;
  _objc_retain(puVar7);
  puStack_118 = puVar7;
  _objc_retain(puVar8);
  puStack_160 = puVar4;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x10693bd7c;
  puStack_148 = &UNK_11094c1f8;
  puStack_110 = puVar8;
  _objc_retain(puVar8);
  puStack_140 = puVar8;
  func_0x000107b19288(param_3,uVar6,&PTR____CFConstantStringClassReference_110e65558,param_8,
                      &puStack_138,&puStack_160);
  if ((param_6 == 2) || (param_6 == 3)) {
    func_0x00010befa120(puVar8);
  }
  func_0x00010c246ba0(puVar8);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  _objc_retain(puVar7);
  puVar9 = puVar7;
  func_0x00010bf52a60();
  if (puVar9 != (undefined *)0x0) {
    lVar10 = *plStack_190;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_190 != lVar10) {
          _objc_enumerationMutation(puVar7);
        }
        func_0x00010be5e100(param_1);
        puVar11 = puVar11 + 1;
      } while (puVar9 != puVar11);
      puVar9 = puVar7;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  func_0x00010be5e0a0(param_1);
  func_0x00010be574a0(param_1);
  _objc_initWeak(auStack_1a8,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_1 + 0xc0);
  puStack_210 = puVar4;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_10693bdfc;
  puStack_1f8 = &UNK_11094c288;
  _objc_copyWeak(auStack_1b8,auStack_1a8);
  _objc_retain(puVar7);
  puStack_1f0 = puVar7;
  _objc_retain(puVar2);
  puStack_1e8 = puVar2;
  _objc_retain(puVar8);
  puStack_1e0 = puVar8;
  iStack_1b0 = param_6;
  _objc_retain(param_3);
  lStack_1d8 = param_3;
  _objc_retain(param_5);
  uStack_1d0 = param_5;
  _objc_retain(param_9);
  uStack_1c8 = param_9;
  _objc_retain(param_7);
  uStack_1c0 = param_7;
  func_0x00010847021c(puVar7,uVar6,uVar12,&puStack_210);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(lStack_1d8);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1f0);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(puStack_140);
  _objc_release(puStack_110);
  _objc_release(puStack_118);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(auStack_1a8);
    __Unwind_Resume();
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar6);
    func_0x00010befa120(uVar12);
    uVar12 = uVar6;
    func_0x00010bfa3f40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010bfa4340(uVar12);
    _objc_release(uVar12);
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10693bcdc; end: 10693bdf3;  */

void FUN_10693bcdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010befa120(uVar2);
  uVar2 = param_2;
  func_0x00010bfa3f40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfa4340(uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10693bdf4; end: 10693bdfb;  */

void FUN_10693bdf4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_compare__1125ae690);
  return;
}



/* Entry: 10693bdfc; end: 10693bee3;  */

void FUN_10693bdfc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bd869d0(param_2,0,&PTR___NSConcreteGlobalBlock_11094c268);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0cc060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c282fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be316a0(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10693bee4; end: 10693beeb;  */

void FUN_10693bee4(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10693beec; end: 10693c01f; -[SCDiscoverFeedQueryCoordinator _logPromotedStoriesFetched:] */

void FUN_10693beec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        func_0x00010c0ece40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf32220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be574e0(param_1,param_2,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10693c020;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_10693c078;
  puStack_140 = &UNK_11094c2b8;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010bf97e80(puVar4,param_2,&puStack_158);
  return;
}



/* Entry: 10693c020; end: 10693c077; -[SCDiscoverFeedQueryCoordinator _logPromotedStoryCardsFetched:] */

void FUN_10693c020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10693c078;
  puStack_20 = &UNK_11094c2b8;
  uStack_18 = param_1;
  func_0x00010bf97e80(param_3,param_2,&puStack_38);
  return;
}



/* Entry: 10693c078; end: 10693c18f;  */

void FUN_10693c078(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010bf31ee0();
  if ((int)uVar5 == 6) {
    puVar1 = PTR_PTR_1126cf2f0;
    _objc_alloc(PTR_PTR_1126cf2f0);
    uVar5 = param_2;
    func_0x00010c118140(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c118140(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bef26a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044b40(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acfe0();
    _objc_release(uVar5);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10693c190; end: 10693c4e7; -[SCDiscoverFeedQueryCoordinator _handleSuccessStoriesResponses:responseTimestamp:allFeedTypesToKeep:partialBatchRequestFeedType:watchedStatesByEpisodeId:metaStreamToken:upNextDefaultPlaylistArray:query:originalInteractionHistory:updatingBlock:] */

void FUN_10693c190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_initWeak(auStack_70,param_1);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10693c4e8;
  puStack_c8 = &UNK_11094c318;
  _objc_copyWeak(auStack_80,auStack_70);
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  uStack_78 = param_6;
  _objc_retain(param_7);
  uStack_a8 = param_7;
  _objc_retain(param_8);
  uStack_a0 = param_8;
  _objc_retain(param_9);
  uStack_98 = param_9;
  _objc_retain(param_10);
  uStack_90 = param_10;
  _objc_retain(param_12);
  uStack_88 = param_12;
  ppuVar1 = &puStack_e0;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258060(PTR_PTR_1126c10f8);
  uVar3 = uVar2;
  func_0x00010c15bfa0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcac60(uVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258060(PTR_PTR_1126c10f8);
    uVar3 = uVar2;
    func_0x00010c135960();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      (*(code *)ppuVar1[2])(ppuVar1,param_11);
      goto LAB_10693c404;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcac80(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
LAB_10693c404:
  _objc_release(ppuVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10693c4e8; end: 10693c68b;  */

void FUN_10693c4e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_50,param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uStack_48 = *(undefined4 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar9);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar2);
  func_0x00010be14440(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 10693c68c; end: 10693c6ff;  */

void FUN_10693c68c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10693c700; end: 10693c783; -[SCDiscoverFeedQueryCoordinator _fetchSnapchattersWithResponse:completion:] */

void FUN_10693c700(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x000107b19070(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846e1c0(param_3,uVar1,param_4,*(undefined8 *)(param_1 + 0xb0));
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10693c784; end: 10693d0bf; -[SCDiscoverFeedQueryCoordinator _persistStoriesToDataStoreWithStoriesResponses:responseTimestamp:allFeedTypesToKeep:partialBatchRequestFeedType:watchedStatesByEditionId:snapchatterByUserId:metaStreamToken:upNextDefaultPlaylistArray:query:interactionHistoryArray:updatingBlock:] */

void FUN_10693c784(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_318 [8];
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [8];
  undefined4 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined4 uStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar17 = *plStack_1c0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_1c0 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_1c8 + lVar16 * 8);
        func_0x00010c0ece40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar2;
        func_0x00010bf32220();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_11;
        func_0x00010c11d960(param_11);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar10;
        func_0x00010c0720c0();
        uVar4 = *(undefined8 *)(param_1 + 0xd0);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0xe0);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108487eb8(uVar9,(uint)uVar3 ^ 1,uVar4,uVar5,*(undefined8 *)(param_1 + 0x160));
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar2);
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar7 = *(ulong *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfec4e0();
  _objc_release(uVar7);
  lVar1 = param_10;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f8 = 0xc2000000;
    pcStack_1f0 = FUN_10693d0c0;
    puStack_1e8 = &UNK_11094c348;
    _objc_retain(puVar6);
    puStack_1e0 = puVar6;
    uStack_1d8 = uVar8 & 0xffffffff;
    func_0x00010bf980c0(param_10);
    _objc_release(puStack_1e0);
  }
  _objc_initWeak(auStack_208,param_1);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_278 = 0xc2000000;
  pcStack_270 = FUN_10693d10c;
  puStack_268 = &UNK_11094c378;
  _objc_retain(param_3);
  lStack_260 = param_3;
  lStack_258 = param_1;
  _objc_retain(param_4);
  uStack_250 = param_4;
  _objc_retain(param_11);
  uStack_248 = param_11;
  _objc_retain(param_7);
  uStack_240 = param_7;
  _objc_retain(param_8);
  uStack_238 = param_8;
  _objc_retain(param_12);
  uStack_230 = param_12;
  _objc_retain(param_9);
  uStack_228 = param_9;
  _objc_retain(puVar6);
  puStack_220 = puVar6;
  uStack_210 = param_6;
  _objc_copyWeak(auStack_218,auStack_208);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2c0 = 0xc2000000;
  pcStack_2b8 = FUN_10693d59c;
  puStack_2b0 = &UNK_11094c3a8;
  _objc_copyWeak(auStack_290,auStack_208);
  uStack_288 = param_6;
  _objc_retain(puVar6);
  puStack_2a8 = puVar6;
  lStack_2a0 = param_1;
  _objc_retain(param_11);
  uStack_298 = param_11;
  func_0x00010c14ace0(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar9);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar17 = *plStack_300;
    do {
      lVar16 = 0;
      do {
        if (*plStack_300 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_308 + lVar16 * 8);
        lVar12 = *(long *)(param_1 + 400);
        func_0x00010c12a3c0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar9 = uVar10;
        func_0x00010bfa3f40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340();
        func_0x00010c0df760(puVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar12;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(uVar9);
        _objc_release(lVar12);
        if (lVar14 == 0) {
          lVar12 = *(long *)(param_1 + 400);
          func_0x00010c12a3c0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          _objc_release(lVar12);
        }
        uVar9 = uVar10;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar9;
        func_0x00010c230da0();
        if ((int)uVar3 == 0) {
          uVar3 = uVar10;
          func_0x00010bfa3f40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar10;
          func_0x00010bfa3f40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0b3b40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar10;
          func_0x00010bfa3f40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa4340();
          func_0x00010bf98260(uVar10);
          lVar12 = lVar14;
          func_0x00010c0f45c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar15);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar2);
          _objc_release(uVar3);
          _objc_release(uVar9);
          if (lVar12 != 0) {
            func_0x00010befa120(puVar11);
          }
        }
        else {
          _objc_release(uVar9);
          lVar12 = 0;
        }
        _objc_release(lVar12);
        _objc_release(lVar14);
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_318,auStack_208);
  _objc_retain(param_11);
  _objc_retain(param_13);
  func_0x00010c28cca0(uVar9);
  _objc_release(uVar10);
  _objc_release(puVar13);
  _objc_release(uVar9);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_destroyWeak(auStack_318);
  _objc_release(puVar11);
  _objc_release(uStack_298);
  _objc_release(puStack_2a8);
  _objc_destroyWeak(auStack_290);
  _objc_destroyWeak(auStack_218);
  _objc_release(puStack_220);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  _objc_release(uStack_238);
  _objc_release(uStack_240);
  _objc_release(uStack_248);
  _objc_release(uStack_250);
  _objc_release(lStack_260);
  _objc_destroyWeak(auStack_208);
  _objc_release(puVar6);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_318);
  _objc_destroyWeak(auStack_290);
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_208);
  __Unwind_Resume();
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10693d0c0; end: 10693d10b;  */

void FUN_10693d0c0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(long *)(param_1 + 0x28) + param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10693d10c; end: 10693d513;  */

void FUN_10693d10c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar11);
  lVar6 = lVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar11);
      }
      uVar12 = *(undefined8 *)(lVar9 * 8);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uVar7 = uVar12;
      func_0x00010bfa3f40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa4340();
      func_0x00010bdf2f60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      func_0x00010befa120(puVar2);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar7 = uVar12;
      func_0x00010bfa3f40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa4340();
      func_0x00010c0df760(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
      _objc_release(uVar7);
      func_0x00010bfa3f40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar12;
      func_0x00010bfa4340();
      _objc_release(uVar12);
      if ((int)uVar7 == 2) {
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        uVar7 = uVar10;
        func_0x00010c258040(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bedba00(uVar12);
        _objc_release(uVar7);
      }
      _objc_release(uVar10);
      lVar9 = lVar9 + 1;
    } while (lVar6 != lVar9);
    lVar6 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar4 = PTR_PTR_1126cf2f8;
    _objc_alloc(PTR_PTR_1126cf2f8);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c04e740(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126cf300;
    _objc_alloc(PTR_PTR_1126cf300);
    func_0x00010c012760();
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  lVar6 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0();
  if ((lVar6 == 0) || (*(int *)(param_1 + 0x70) != 0)) goto LAB_10693d4c4;
  lVar6 = param_1 + 0x68;
  _objc_loadWeakRetained();
  if (lVar6 == 0) {
LAB_10693d464:
    puVar4 = PTR_PTR_1126cf300;
    _objc_alloc(PTR_PTR_1126cf300);
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf51e00();
    func_0x00010c012760(puVar4);
    func_0x00010befa120(puVar2);
    _objc_release(puVar4);
  }
  else {
    uVar7 = *(undefined8 *)(lVar6 + 0x100);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c283160();
    _objc_release(uVar7);
    if ((int)uVar10 == 0) goto LAB_10693d464;
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar10);
    _objc_retain(puVar2);
    func_0x00010bed6c00(lVar6);
    _objc_release(puVar2);
  }
  _objc_release(uVar10);
  _objc_release(lVar6);
LAB_10693d4c4:
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010befa160(*(undefined8 *)(param_2 + 0x20));
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  puVar2 = PTR_PTR_1126cf300;
  _objc_alloc(PTR_PTR_1126cf300);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf51e00(uVar10);
  func_0x00010c012760(puVar2);
  func_0x00010befa120(uVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 10693d514; end: 10693d59b;  */

void FUN_10693d514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126cf300;
  _objc_alloc(PTR_PTR_1126cf300);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar2);
  func_0x00010c012760(puVar1);
  func_0x00010befa120(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10693d59c; end: 10693d6a7;  */

void FUN_10693d59c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      func_0x00010be99900(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf51e00(uVar3);
      uVar4 = *(undefined8 *)(lVar1 + 0x48);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10693d6a8;
      puStack_58 = &UNK_110841f80;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(*(undefined8 *)(param_1 + 0x30));
      uStack_50 = uVar5;
      uStack_48 = uVar6;
      func_0x00010bf02440(uVar2,param_2,uVar3,uVar4,&puStack_70);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uStack_48);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10693d6a8; end: 10693d6b3;  */

void FUN_10693d6a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveSectionCompletionWithQuery__112583fe0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10693d6b4; end: 10693d6e7;  */

void FUN_10693d6b4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed60a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10693d6e8; end: 10693d867; -[SCDiscoverFeedQueryCoordinator _updateDefaultStoriesCacheWithCompletion:] */

void FUN_10693d6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10693d7bc;
  puStack_50 = &UNK_11094c3f8;
  uStack_48 = uVar1;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf00a20(uVar2,param_2,4,1,PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10693d868; end: 10693d897;  */

void FUN_10693d868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 10693d898; end: 10693d8ff; -[SCDiscoverFeedQueryCoordinator _saveSectionCompletionWithQuery:] */

void FUN_10693d898(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x198;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf827e0(uVar1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10693d900; end: 10693d967; -[SCDiscoverFeedQueryCoordinator _updateContentSectionsAfterStoriesRequestWithQuery:updatingBlock:] */

void FUN_10693d900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bed1600(param_1,param_2,param_3);
  func_0x00010bed60c0(param_1,param_2,param_3,0,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10693d968; end: 10693dd87; -[SCDiscoverFeedQueryCoordinator _handleStoriesResponse:query:originalInteractionHistory:updatingBlock:] */

void FUN_10693d968(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined1 *param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x198;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf82800();
  _objc_release(lVar1);
  uVar2 = param_4;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar7 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar2);
  uVar2 = uVar7;
  func_0x00010bfa4340();
  _objc_release(uVar7);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76880();
  _objc_release(uVar5);
  if ((uVar2 != 0) && (lVar1 = param_3, func_0x00010bfdb540(), (int)lVar1 != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x118);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc9500(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x118);
    lVar1 = param_3;
    func_0x00010c142580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11bea0(uVar5);
    _objc_release(lVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar7 = param_4;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar7);
  _objc_initWeak(auStack_78,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10693dd88;
  puStack_a0 = &UNK_110894390;
  puVar10 = auStack_78;
  _objc_copyWeak(auStack_80,puVar10);
  _objc_retain(param_3);
  lStack_98 = param_3;
  _objc_retain(param_4);
  uStack_90 = param_4;
  _objc_retain(param_6);
  ppuVar8 = &puStack_b8;
  uStack_88 = param_6;
  _objc_retainBlock();
  uVar9 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258060(PTR_PTR_1126c10f8);
  uVar5 = uVar9;
  func_0x00010c15bfa0();
  _objc_release(uVar9);
  if ((int)uVar5 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcac60(uVar5);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258060(PTR_PTR_1126c10f8);
    uVar5 = uVar9;
    func_0x00010c135960();
    _objc_release(uVar9);
    if ((int)uVar5 != 0) {
      puVar10 = param_5;
      (*(code *)ppuVar8[2])(ppuVar8,param_5);
      goto LAB_10693dcd8;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcac80(uVar5);
  }
  _objc_release(uVar9);
  _objc_release(uVar5);
LAB_10693dcd8:
  _objc_release(ppuVar8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
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
  __Unwind_Resume();
  _objc_retain(puVar10);
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  func_0x00010bec9d00();
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10693dd88; end: 10693dddf;  */

void FUN_10693dd88(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9d00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10693dde0; end: 10693df57; -[SCDiscoverFeedQueryCoordinator _syncShowWatchedStateAndHandleStoriesResponse:query:interactionHistoryArray:updatingBlock:] */

void FUN_10693dde0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10693df58;
  puStack_90 = &UNK_11094c478;
  lStack_88 = param_1;
  lStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar4 = uVar7;
  func_0x00010847021c(puVar1,uVar7,uVar8,&puStack_a8);
  _objc_release(puVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(lStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10693df58;
  uStack_100 = uVar8;
  uStack_f8 = uVar7;
  puStack_f0 = puVar1;
  lStack_e8 = param_1;
  uStack_e0 = param_6;
  uStack_d8 = param_5;
  uStack_d0 = param_4;
  lStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar4);
  uVar7 = uVar4;
  func_0x00010bd869d0(uVar4,0,&PTR___NSConcreteGlobalBlock_11094c428);
  _objc_initWeak(auStack_108,*(undefined8 *)(lVar2 + 0x20));
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  func_0x000107b18e50(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x48);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_10693e114;
  puStack_140 = &UNK_11094c448;
  _objc_copyWeak(auStack_110,auStack_108);
  uVar5 = *(undefined8 *)(lVar2 + 0x28);
  _objc_retain(uVar5);
  uStack_138 = uVar5;
  _objc_retain(uVar7);
  uVar5 = *(undefined8 *)(lVar2 + 0x30);
  uStack_130 = uVar7;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(lVar2 + 0x38);
  uStack_128 = uVar5;
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  uStack_120 = uVar6;
  _objc_retain(uVar5);
  uStack_118 = uVar5;
  func_0x00010846e1c0(uVar8,uVar3,&puStack_158,*(undefined8 *)(*(long *)(lVar2 + 0x20) + 0xb0));
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(uVar7);
  _objc_release(uVar4);
  return;
}



/* Entry: 10693df58; end: 10693e10b;  */

void FUN_10693df58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bd869d0(param_2,0,&PTR___NSConcreteGlobalBlock_11094c428);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107b18e50(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10693e114;
  puStack_90 = &UNK_11094c448;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_88 = uVar4;
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar1;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar5;
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010846e1c0(uVar2,uVar3,&puStack_a8,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0));
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10693e10c; end: 10693e113;  */

void FUN_10693e10c(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10693e114; end: 10693e16f;  */

void FUN_10693e114(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be310c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10693e170; end: 10693e7ab; -[SCDiscoverFeedQueryCoordinator _handleStoriesResponse:watchedStatesByEditionId:snapchatterByUserId:query:interactionHistoryArray:updatingBlock:] */

void FUN_10693e170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined4 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
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
  uVar3 = param_6;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0720c0();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_6;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    iVar12 = (int)uVar6;
    _objc_release(uVar5);
  }
  else {
    iVar12 = 1;
  }
  _objc_release(uVar3);
  uVar5 = uVar1;
  func_0x00010bfa4340();
  uVar6 = param_6;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar3 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain();
  _objc_release(uVar6);
  uVar10 = param_3;
  func_0x00010c0ece40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf32220();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_6;
  func_0x00010c11d960(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0720c0();
  uVar8 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108487eb8(uVar11,(uint)uVar7 ^ 1,uVar8,uVar9,*(undefined8 *)(param_1 + 0x160));
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar10);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10693e7ac;
  uStack_88 = 0x10693e7bc;
  uStack_80 = 0;
  _objc_initWeak(auStack_b0,param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  if (iVar12 == 0) {
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    pcStack_1b8 = FUN_10693e924;
    puStack_1b0 = &UNK_11094c4d8;
    puStack_170 = &uStack_a8;
    lStack_1a8 = param_1;
    uStack_168 = (int)uVar5;
    _objc_retain(param_3);
    uStack_1a0 = param_3;
    _objc_retain(puVar4);
    puStack_198 = puVar4;
    _objc_retain(param_6);
    uStack_190 = param_6;
    _objc_retain(param_4);
    uStack_188 = param_4;
    _objc_retain(param_5);
    uStack_180 = param_5;
    _objc_retain(param_7);
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    uStack_178 = param_7;
    func_0x00010c11de00(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_copyWeak(auStack_1d0,auStack_b0);
    func_0x00010c14ace0(uVar10);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_1d0);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(uStack_178);
    _objc_release(uStack_180);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
    _objc_release(puStack_198);
    _objc_release(uStack_1a0);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_10693e7c4;
    puStack_100 = &UNK_11094c4a8;
    lStack_f8 = param_1;
    puStack_c0 = &uStack_a8;
    uStack_b8 = (int)uVar5;
    _objc_retain(param_3);
    uStack_f0 = param_3;
    _objc_retain(puVar4);
    puStack_e8 = puVar4;
    _objc_retain(param_6);
    uStack_e0 = param_6;
    _objc_retain(param_4);
    uStack_d8 = param_4;
    _objc_retain(param_5);
    uStack_d0 = param_5;
    _objc_retain(param_7);
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    uStack_c8 = param_7;
    func_0x00010c11de00(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar2;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_10693e848;
    puStack_148 = &UNK_110857da0;
    _objc_retain(param_3);
    uStack_140 = param_3;
    lStack_138 = param_1;
    puStack_128 = &uStack_a8;
    _objc_copyWeak(auStack_120,auStack_b0);
    _objc_retain(param_6);
    uStack_130 = param_6;
    func_0x00010bf07020(uVar10);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uStack_130);
    _objc_destroyWeak(auStack_120);
    _objc_release(uStack_140);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(puStack_e8);
    _objc_release(uStack_f0);
  }
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10693e7ac; end: 10693e7c3;  */

void FUN_10693e7ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10693e7c4; end: 10693e847;  */

void FUN_10693e7c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf2f60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      param_2,*(undefined4 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10693e848; end: 10693e923;  */

void FUN_10693e848(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4340();
  if ((int)uVar2 == 2) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    _objc_release(uVar1);
    if (lVar5 == 0) goto LAB_10693e8cc;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    func_0x00010c258040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedba00(uVar2);
  }
  _objc_release(uVar1);
LAB_10693e8cc:
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar3 = param_1 + 0x198;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    if ((uVar4 & 1) != 0) {
      func_0x00010bf827e0(uVar3);
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10693e924; end: 10693e9e3;  */

void FUN_10693e924(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf2f60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      param_2,*(undefined4 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar1;
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010bfa3f40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bfa4340();
  if ((int)uVar1 == 2) {
    lVar5 = *(long *)(*(long *)(*(long *)(puVar2 + 0x40) + 8) + 0x28);
    _objc_release(uVar6);
    if (lVar5 == 0) goto LAB_10693ea68;
    uVar1 = *(undefined8 *)(puVar2 + 0x28);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x40) + 8) + 0x28);
    func_0x00010c258040(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedba00(uVar1);
  }
  _objc_release(uVar6);
LAB_10693ea68:
  func_0x00010bed60c0(*(undefined8 *)(puVar2 + 0x28));
  puVar2 = puVar2 + 0x48;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2 + 0x198;
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    _objc_opt_respondsToSelector();
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010bf827e0(puVar3);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10693e9e4; end: 10693eacf;  */

void FUN_10693e9e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4340();
  if ((int)uVar2 == 2) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    _objc_release(uVar1);
    if (lVar5 == 0) goto LAB_10693ea68;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010c258040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedba00(uVar2);
  }
  _objc_release(uVar1);
LAB_10693ea68:
  func_0x00010bed60c0(*(undefined8 *)(param_1 + 0x28));
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar3 = param_1 + 0x198;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    if ((uVar4 & 1) != 0) {
      func_0x00010bf827e0(uVar3);
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10693ead0; end: 10693ec13; -[SCDiscoverFeedQueryCoordinator _updateMetadataForSubscriptionSection:stories:] */

void FUN_10693ead0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfa3f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4340();
  _objc_release(uVar1);
  if ((int)uVar2 == 2) {
    uVar1 = param_5;
    func_0x000100504554(param_5,&PTR___NSConcreteGlobalBlock_11094c558);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_2 + 200);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0ece40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c25c6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98260(param_4);
    func_0x00010c2898e0(param_1,uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10693ec14; end: 10693ecb7;  */

void FUN_10693ec14(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10693ecb8; end: 10693f4c3; -[SCDiscoverFeedQueryCoordinator _createSectionFromResponse:responseTimestamp:dataAccessor:feedType:query:watchedStatesByEditionId:snapchatterByUserId:interactionHistoryArray:shouldAllowDedupeWithStoriesInDataStore:] */

void FUN_10693ecb8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,char param_11)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 uVar18;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  uVar1 = param_7;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b0ef8;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  iVar17 = (int)param_6;
  func_0x00010c125a80();
  func_0x0001084710b0();
  func_0x00010c03ef40();
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0ece40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf32220();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0xa0);
  uVar18 = *(undefined8 *)(param_1 + 0xb8);
  uVar8 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x000108482d58(uVar5,puVar4,uVar7,param_5,uVar16,param_9,param_6,0,uVar18,uVar8,
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x160));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar1 = uVar9;
  func_0x000108470ee0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar5 = param_3;
  func_0x00010bf3d480();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x000107bf2e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_6;
  func_0x000108f53fe8(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x000107cb5a9c(uVar1,uVar5,0,uVar9,uVar2 & 0xffffffff,0,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(lVar10);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d0580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(uVar6);
  uVar7 = uVar6;
  if (param_11 != '\0') {
    uVar7 = param_5;
    func_0x00010bf67b80(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  uVar8 = uVar7;
  if (((iVar17 == 3) || (iVar17 == 0xef)) || (iVar17 == 0xf7)) {
    uVar1 = uVar9;
    func_0x00010c232660();
    if ((int)uVar1 == 0) goto LAB_10693f158;
    uVar18 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_5;
    func_0x00010c0d1100();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar18;
    func_0x00010c130aa0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar16);
    uVar7 = uVar18;
  }
  else {
    func_0x000107bf2f24(uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar7);
LAB_10693f158:
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar16 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f53fe8(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x000107cb6100(uVar8,(uint)uVar3 ^ 1,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar16);
  _objc_release(uVar7);
  _objc_release(param_6);
  _objc_release(lVar10);
  _objc_release(uVar16);
  func_0x00010bf98260(param_3);
  puVar12 = PTR_PTR_1126cf2f8;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010c0ece40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25c6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c04e740();
  _objc_release(puVar13);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar14 = *(long *)(param_1 + 400);
  func_0x00010c12a3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(lVar14);
  if (lVar10 == 0) {
    lVar14 = *(long *)(param_1 + 400);
    func_0x00010c12a3c0(lVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar14;
    func_0x00010c0e00e0(lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(lVar14);
  }
  uVar1 = param_3;
  func_0x00010bfa3f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c230da0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bfa3f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bfa3f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010c0b3b40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_3;
    func_0x00010bfa3f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4340();
    func_0x00010bf98260(param_3);
    lVar14 = lVar10;
    func_0x00010c0f45c0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    lVar14 = 0;
  }
  _objc_release(uVar1);
  puVar13 = PTR_PTR_1126cf300;
  _objc_alloc(PTR_PTR_1126cf300);
  func_0x00010c012760();
  _objc_release(lVar14);
  _objc_release(lVar10);
  _objc_release(puVar12);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10693f4c4; end: 10693f5d3; -[SCDiscoverFeedQueryCoordinator _updateContentSectionsWithQuery:resultState:updatingBlock:] */

void FUN_10693f4c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10693f5d4;
  puStack_68 = &UNK_11094c578;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c11d900(uVar2,param_2,uVar1,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 10693f5d4; end: 10693f5e7;  */

void FUN_10693f5d4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed60f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateContentSectionsWithSectio_1125931e0,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10693f5e8; end: 10693f6bb; -[SCDiscoverFeedQueryCoordinator _updateContentSectionsWithSectionMetadata:query:resultState:updatingBlock:] */

void FUN_10693f5e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + 400);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(param_4);
  FUN_106937724(param_3,uVar3,uVar4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b16f0;
  _objc_alloc(PTR_PTR_1126b16f0);
  func_0x00010c042a40();
  _objc_release(param_4);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,puVar1,0);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10693f6bc; end: 10693f88f; -[SCDiscoverFeedQueryCoordinator _maybeModifyIncomingDedupeFps:] */

void FUN_10693f6bc(long param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_228 [8];
  ulong uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_3;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bfec4e0();
  _objc_release(uVar2);
  if ((int)uVar7 != 0) {
    uVar3 = param_3;
    func_0x00010bfa3f40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa4340();
    _objc_release(uVar3);
    if ((((uint)uVar4 & 0xfffffffe) == 2) &&
       (uVar3 = param_3, func_0x00010bfd9ca0(), (int)uVar3 != 0)) {
      uVar3 = param_3;
      func_0x00010c0ece40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf32220();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf529e0();
      if (uVar8 != 0) {
        _objc_retain(uVar4);
        param_4 = auStack_d8;
        uVar5 = uVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (uVar5 != 0) {
          uVar8 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar4);
            }
            uVar7 = *(undefined8 *)(uVar8 * 8);
            func_0x00010c259740(uVar7);
            func_0x00010c20ce00(uVar7);
            uVar8 = uVar8 + 1;
          } while (uVar5 != uVar8);
          param_4 = auStack_d8;
          uVar5 = uVar4;
          func_0x00010bf52a60();
        }
        _objc_release(uVar4);
        func_0x00010c179880(uVar3);
        uVar5 = uVar3;
        func_0x00010c1d6200(param_3);
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  _objc_retain(param_4);
  uVar4 = uVar5;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar8 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar6);
  uVar3 = uVar4;
  if ((uVar8 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  _objc_initWeak(auStack_1a0,param_3);
  uVar4 = uVar3;
  func_0x00010bfa4340();
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar2 = *(undefined8 *)(param_3 + 0x150);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c2630c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x150);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c263160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uStack_1d0 = 0;
  uStack_1c0 = 0x3032000000;
  pcStack_1b8 = FUN_10693e7ac;
  uStack_1b0 = 0x10693e7bc;
  uStack_1a8 = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  puStack_1c8 = &uStack_1d0;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_10693fb74;
  puStack_200 = &UNK_11094c5a8;
  uStack_1f8 = param_3;
  _objc_retain(uVar5);
  uStack_1f0 = uVar5;
  puStack_1e0 = &uStack_1d0;
  _objc_retain(uVar7);
  uStack_1e8 = uVar7;
  uStack_1d8 = uVar4;
  _objc_retain(puVar6);
  _objc_copyWeak(auStack_228,auStack_1a0);
  uStack_220 = uVar4;
  _objc_retain(param_4);
  func_0x00010beecc80(uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_228);
  _objc_release(puVar6);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  __Block_object_dispose(&uStack_1d0,8);
  _objc_release(uStack_1a8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(uVar5);
  return;
}



/* Entry: 10693f890; end: 10693fb73; -[SCDiscoverFeedQueryCoordinator _sendSyncCacheWithQuery:updatingBlock:] */

void FUN_10693f890(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_108 [8];
  ulong uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_1);
  uVar2 = uVar1;
  func_0x00010bfa4340();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar5 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2630c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c263160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_10693e7ac;
  uStack_90 = 0x10693e7bc;
  uStack_88 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puStack_a8 = &uStack_b0;
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10693fb74;
  puStack_e0 = &UNK_11094c5a8;
  lStack_d8 = param_1;
  _objc_retain(param_3);
  uStack_d0 = param_3;
  puStack_c0 = &uStack_b0;
  _objc_retain(uVar6);
  uStack_c8 = uVar6;
  uStack_b8 = uVar2;
  _objc_retain(puVar3);
  _objc_copyWeak(auStack_108,auStack_80);
  uStack_100 = uVar2;
  _objc_retain(param_4);
  func_0x00010beecc80(uVar5);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar3);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10693fb74; end: 10693fd7f;  */

void FUN_10693fb74(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be3e600();
  uVar2 = param_2;
  if (iVar1 == 0) {
    func_0x00010bf00a40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf00a80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10693fd80; end: 10693fe77; -[SCDiscoverFeedQueryCoordinator _sendCacheSyncRequestWithStories:feedType:updatingBlock:] */

void FUN_10693fd80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10693fe78;
  puStack_58 = &UNK_11094c608;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  func_0x00010c15b7a0(uVar2,param_2,param_3,param_4,1,uVar1,&puStack_70);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_5);
  return;
}



/* Entry: 10693fe78; end: 10693fe93;  */

void FUN_10693fe78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010693fe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,param_4);
    return;
  }
  return;
}



/* Entry: 10693fe94; end: 10693fe9b; -[SCDiscoverFeedQueryCoordinator _isBatchQuery:] */

bool FUN_10693fe94(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010bfa4340();
  if (uVar4 == 0xdd) {
    bVar2 = true;
  }
  else {
    uVar4 = uVar1;
    func_0x00010bfa4340(uVar1);
    bVar2 = uVar4 == 0x106;
  }
  _objc_release(uVar1);
  return bVar2;
}



/* Entry: 10693fe9c; end: 10693ff53; -[SCDiscoverFeedQueryCoordinator _getStoriesMetadataOnPerformerToKeep:completion:] */

void FUN_10693fe9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10693ff54;
  puStack_50 = &UNK_11084a9e8;
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



/* Entry: 10693ff54; end: 10693ff63;  */

void FUN_10693ff54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be23010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__getStoriesMetadataToKeep_comple_1125665a0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10693ff64; end: 106940197; -[SCDiscoverFeedQueryCoordinator _getStoriesMetadataToKeep:completion:] */

void FUN_10693ff64(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0c3120();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 == 0) || (lVar1 = *(long *)(param_1 + 0xd8), lVar1 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,PTR____NSArray0__struct_11034ab48);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c24b6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,PTR____NSArray0__struct_11034ab48);
    }
    else {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      pcStack_68 = FUN_10693e7ac;
      uStack_60 = 0x10693e7bc;
      uStack_58 = 0;
      lVar1 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c25a440();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfb0d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(param_4);
      lVar6 = lVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puStack_78[5];
      puStack_78[5] = lVar6;
      _objc_release(uVar7);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(param_4);
      _objc_release(param_3);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uStack_58);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106940198; end: 106940287;  */

void FUN_106940198(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar5 = *(ulong *)(param_1 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106940288;
  puStack_40 = &UNK_110886d58;
  uStack_38 = param_2;
  _objc_retain(param_2);
  func_0x0001006372a4(uVar5,&puStack_58);
  uVar1 = uVar5;
  func_0x00010bf529e0();
  uVar2 = uVar5;
  if (*(ulong *)(param_1 + 0x38) < uVar1) {
    func_0x00010c25e980(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106940288; end: 1069402df;  */

bool FUN_106940288(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
    bVar3 = 0 < lVar2;
  }
  _objc_release(lVar1);
  return bVar3;
}



/* Entry: 1069402e0; end: 1069405c7; -[SCDiscoverFeedQueryCoordinator _maybeMarkLastEmptySubsSectionFetchedDateWithStoriesRequest:storiesBatchResponse:responseTimestamp:] */

void FUN_1069402e0(long param_1,undefined8 param_2,long param_3,undefined1 *param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 == 0) || (param_4 == (undefined1 *)0x0)) || (param_5 == 0)) goto LAB_106940554;
  lVar2 = param_3;
  func_0x00010bfa4340();
  if (((int)lVar2 != 0xdd) || (lVar2 = param_3, func_0x00010bfa43e0(), lVar2 != 0)) {
    lVar2 = param_3;
    func_0x00010bfa4340();
    if (((int)lVar2 != 0) || (lVar2 = param_3, func_0x00010bfa43e0(), lVar2 == 0))
    goto LAB_106940554;
    lVar2 = param_3;
    func_0x00010bfa43c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      _objc_release(lVar2);
      goto LAB_106940554;
    }
    puStack_108 = &uStack_110;
    uStack_110 = 0;
    uStack_100 = 0x2020000000;
    uStack_f8 = 0;
    func_0x00010bf980c0(lVar2);
    bVar1 = *(byte *)(puStack_108 + 3);
    __Block_object_dispose(&uStack_110,8);
    _objc_release(lVar2);
    if ((bVar1 & 1) == 0) goto LAB_106940554;
  }
  puVar4 = param_4;
  func_0x00010c258b80();
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = param_4;
    func_0x00010c258b60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = auStack_f0;
    puVar4 = puVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar4 != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar5);
        }
        lVar10 = *(long *)((long)puVar11 * 8);
        lVar3 = lVar10;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010bfa4340();
        if ((int)lVar6 == 2) {
          func_0x00010c0ece40();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar10;
          func_0x00010bf32240();
          _objc_release(lVar10);
          _objc_release(lVar3);
          if (lVar6 != 0) {
            _objc_release(puVar5);
            goto LAB_106940554;
          }
        }
        else {
          _objc_release(lVar3);
        }
        puVar11 = puVar11 + 1;
      } while (puVar4 != puVar11);
      puVar9 = auStack_f0;
      puVar4 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb7a0();
  _objc_release(uVar7);
LAB_106940554:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  iVar8 = 8;
  __Block_object_dispose(&uStack_110);
  __Unwind_Resume();
  if (iVar8 == 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 1;
    *puVar9 = 1;
  }
  return;
}



/* Entry: 1069405c8; end: 1069405e7;  */

void FUN_1069405c8(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  if (param_2 == 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1069405e8; end: 1069405ef; -[SCDiscoverFeedQueryCoordinator isLoading] */

undefined1 FUN_1069405e8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x180);
}



/* Entry: 1069405f0; end: 1069405f7; -[SCDiscoverFeedQueryCoordinator currentQuery] */

undefined8 FUN_1069405f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 1069405f8; end: 1069405ff; -[SCDiscoverFeedQueryCoordinator setCurrentQuery:] */

void FUN_1069405f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106940600; end: 106940607; -[SCDiscoverFeedQueryCoordinator sectionExtensionServices] */

undefined8 FUN_106940600(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 106940608; end: 10694061f; -[SCDiscoverFeedQueryCoordinator delegate] */

void FUN_106940608(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106940620; end: 10694062b; -[SCDiscoverFeedQueryCoordinator setDelegate:] */

void FUN_106940620(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x198,param_3);
  return;
}



/* Entry: 10694062c; end: 10694087f; -[SCDiscoverFeedQueryCoordinator .cxx_destruct] */

void FUN_10694062c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x198);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
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



/* Entry: 106940880; end: 10694090b;  */

void FUN_106940880(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c09de60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c09de80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10694090c; end: 106940ebf; -[SCSpotlightQueryCoordinator initWithCircumstanceEngine:discoverFeedDataFetcher:discoverFeedDataMutator:queuePerformer:requestSender:responseProcessor:snapchattersDataFetcher:storiesGrapheneMetricsEmitter:sectionsCoordinator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:cachedReadReceiptViewStateProvider:networkRequester:storiesConfigProvider:adConfigProvider:storiesBadgingServices:networkConnectivityMonitor:locationProvider:spotlightMediaFetcherFactory:feedCardGrapheneMetricsEmitter:adRenderDataParser:userPreferences:feedCardRequestSender:interstitialRepository:interstitialResponseProcessor:] */

undefined8 *
FUN_10694090c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

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
  puStack_70 = PTR_PTR_1126f3de0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[4];
    puVar1[4] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cf310;
    _objc_alloc_init();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[8];
    puVar1[8] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[9];
    puVar1[9] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
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
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_22;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    _objc_retain(param_23);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_27;
    _objc_release(uVar2);
  }
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



/* Entry: 106940ec0; end: 106940ec7; -[SCSpotlightQueryCoordinator canPerformQuery:] */

undefined8 FUN_106940ec0(void)

{
  return 1;
}



/* Entry: 106940ec8; end: 106941003; -[SCSpotlightQueryCoordinator markCompositeStoryIdAsViewed:forFeedType:] */

void FUN_106940ec8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c10e0;
  func_0x00010bf3d4c0(PTR_PTR_1126c10e0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf1f320(lVar1,param_2,puVar2);
  if (((int)lVar3 == 0) || (lVar3 = param_3, func_0x00010c08fa60(), lVar3 == 0)) {
    _objc_release(puVar2);
  }
  else {
    lVar3 = param_4;
    func_0x00010c067fc0();
    _objc_release(puVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) goto LAB_106940fdc;
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106941004;
    puStack_60 = &UNK_110848ba8;
    lStack_58 = param_1;
    _objc_retain(param_4);
    lStack_50 = param_4;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_78);
    _objc_release(lStack_48);
    lVar1 = lStack_50;
  }
  _objc_release(lVar1);
LAB_106940fdc:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106941004; end: 1069410a3;  */

void FUN_106941004(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _os_unfair_lock_lock(*(long *)(param_1 + 0x20) + 0xb8);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0),param_2,puVar2,
                        *(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010c0e00e0(uVar3,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(*(long *)(param_1 + 0x20) + 0xb8);
  return;
}



/* Entry: 1069410a4; end: 10694110b; -[SCSpotlightQueryCoordinator signalDeepViewSessionWithFeedType:] */

void FUN_1069410a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea5180(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10694110c; end: 10694143b; -[SCSpotlightQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_10694110c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar10);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067ec0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010be9d1e0(param_1);
  lVar6 = param_1;
  func_0x00010bdd3660();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    if (param_4 != 0) {
      puVar10 = (undefined *)0x0;
      (**(code **)(param_4 + 0x10))(param_4,0,0);
    }
  }
  else {
    uVar3 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010bea3300(param_1);
    _objc_release(uVar3);
    _objc_initWeak(auStack_b0,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_10694143c;
    puStack_e0 = &UNK_11094c698;
    puVar10 = auStack_b0;
    _objc_copyWeak(auStack_c0,puVar10);
    _objc_retain(param_3);
    uStack_b8 = (undefined4)uVar5;
    uStack_d8 = param_3;
    _objc_retain(param_4);
    lStack_c8 = param_4;
    _objc_retain(lVar6);
    lStack_d0 = lVar6;
    _objc_retain(&puStack_f8);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_retain(uVar7);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar2;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x106948af0;
    puStack_90 = &UNK_110859310;
    ppuStack_88 = &puStack_f8;
    _objc_retain(&puStack_f8);
    func_0x00010bfa9fc0(uVar7);
    _objc_release(uVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuStack_88);
    _objc_release(&puStack_f8);
    _objc_release(uVar7);
    _objc_release(lStack_d0);
    _objc_release(lStack_c8);
    _objc_release(uStack_d8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b0);
  }
  _objc_release(lVar6);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
  _objc_retain(puVar10);
  lVar6 = param_3 + 0x38;
  _objc_loadWeakRetained(lVar6);
  func_0x00010be95aa0();
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 10694143c; end: 106941497;  */

void FUN_10694143c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95aa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106941498; end: 10694179b; -[SCSpotlightQueryCoordinator _resultsForQuery:feedTypeEnum:section:updatingBlock:token:] */

void FUN_106941498(long param_1,undefined8 param_2,ulong param_3,int param_4,ulong param_5,
                  long param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  int iStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) goto LAB_10694155c;
    uVar1 = param_3;
    func_0x00010846e5b0(param_3,*(undefined8 *)(param_1 + 0x60));
    if (((param_5 == 0) || ((uVar1 & 1) != 0)) ||
       (uVar1 = param_5, func_0x00010bfd9420(), (uVar1 & 1) != 0)) {
      func_0x00010be145e0(param_1);
      goto LAB_106941714;
    }
    func_0x00010be5df80(param_1);
  }
  else {
    _objc_release(uVar1);
LAB_10694155c:
    if (param_4 != 0xf0) {
      _objc_initWeak(auStack_68,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      iStack_70 = param_4;
      _objc_retain(param_7);
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010bf00a20(uVar4);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar4);
      uVar1 = param_3;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        func_0x00010be5bc20(param_1);
      }
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_78);
      _objc_release(param_7);
      _objc_destroyWeak(auStack_68);
      goto LAB_106941714;
    }
  }
  func_0x00010be09b40(param_1);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
LAB_106941714:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10694179c; end: 1069417f7;  */

void FUN_10694179c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95a80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069417f8; end: 1069417fb; -[SCSpotlightQueryCoordinator _maybeDebugLogPaginationCancelled:] */

void FUN_1069417f8(void)

{
  return;
}



/* Entry: 1069417fc; end: 1069417ff; -[SCSpotlightQueryCoordinator _maybeDebugLogRequestCancelled:hasEnoughStories:unviewedStoriesCount:validCacheInterval:timeSinceTtlCursor:] */

void FUN_1069417fc(void)

{
  return;
}



/* Entry: 106941800; end: 106941877; -[SCSpotlightQueryCoordinator _makeIndependentBadgeCall] */

void FUN_106941800(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x80);
  func_0x00010c2581c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd3ac0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c2581c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106941878; end: 106941a6f; -[SCSpotlightQueryCoordinator _resultsForPrefetchFromFeedQuery:feedTypeEnum:section:existingDataStoreStories:updatingBlock:token:] */

void FUN_106941878(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x000108f4c3f0(0,param_6,uVar1,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_70 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(uVar2);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106941a70; end: 106941abb;  */

void FUN_106941a70(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106941abc; end: 1069422f7; -[SCSpotlightQueryCoordinator _resultsForPrefetchFromFeedQuery:feedTypeEnum:section:existingDataStoreStories:unviewedStoriesInDataStore:updatingBlock:token:] */

void FUN_106941abc(double param_1,long param_2,undefined **param_3,long param_4,int param_5,
                  long param_6,undefined8 param_7,undefined **param_8,long param_9,
                  undefined8 param_10)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  int iVar17;
  undefined **ppuVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 auStack_100 [8];
  int iStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  int iStack_a0;
  long lStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar14 = param_6;
  func_0x00010bfab800();
  puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar19 = param_1;
  _objc_release(puVar16);
  if (param_5 == 0x102) {
    uVar1 = *(ulong *)(param_2 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126c2320;
    func_0x00010bfbb3a0(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar1;
    func_0x00010bf1f320();
    _objc_release(puVar16);
    _objc_release(uVar1);
  }
  else {
    if (param_5 != 0x107) {
      if (param_5 == 0x109) {
        lVar2 = *(long *)(param_2 + 0x70);
        func_0x000108f4a5e8();
        uVar15 = 0;
        ppuVar18 = (undefined **)0x1;
        dVar20 = dVar19;
        dVar21 = (double)lVar2;
      }
      else {
        lVar5 = *(long *)(param_2 + 0x60);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar5;
        func_0x00010c24afa0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar2;
        func_0x00010c098520();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar8;
        func_0x00010bfa4340();
        _objc_release(lVar8);
        _objc_release(lVar2);
        _objc_release(lVar5);
        if (lVar6 == param_5) {
          uVar4 = *(undefined8 *)(param_2 + 0x60);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          func_0x00010c24afa0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar3;
          func_0x00010c098520();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c125620();
          dVar20 = dVar19;
          _objc_release(uVar7);
          _objc_release(uVar3);
          _objc_release(uVar4);
          ppuVar18 = (undefined **)0x0;
          uVar15 = 0;
          dVar21 = dVar19;
        }
        else {
          ppuVar18 = (undefined **)0x0;
          uVar15 = 0;
          dVar21 = 1200.0;
          dVar20 = dVar19;
        }
      }
      goto LAB_106941c30;
    }
    uVar15 = 0;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cee40();
  dVar20 = dVar19;
  _objc_release(uVar3);
  ppuVar18 = (undefined **)0x0;
  dVar21 = dVar19;
LAB_106941c30:
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf8b980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  if ((((uVar15 & 1) == 0) && (uVar3 = uVar7, func_0x00010bf926c0(), param_5 == 0x102)) &&
     ((int)uVar3 != 0)) {
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010be1fec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    if (lVar2 != 0) {
      puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      dVar19 = dVar20;
      _objc_release(puVar16);
      func_0x00010c28b640(uVar7);
      if ((dVar19 <= 0.0) || (func_0x00010c28b640(uVar7), dVar19 <= dVar20)) {
        func_0x00010c280480(uVar7);
        if ((0.0 < dVar19) && (func_0x00010c280480(uVar7), dVar19 < dVar20)) {
          func_0x00010c280480(uVar7);
          dVar21 = dVar19;
        }
      }
      else {
        func_0x00010c0d8e20(uVar7);
        dVar21 = dVar19;
      }
    }
    _objc_release(lVar2);
  }
  lVar8 = *(long *)(param_2 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = (undefined **)PTR_PTR_1126c0e00;
  func_0x00010bf66140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  ppuVar13 = ppuVar9;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  _objc_release(lVar8);
  lVar8 = lVar2;
  func_0x00010c08fa60();
  iVar17 = (int)ppuVar18;
  if (lVar8 == 0) {
    iVar17 = 1;
  }
  if (iVar17 == 0) {
    if (param_6 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_98 = param_6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar14 = lVar2;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar14;
    func_0x00010bf52680();
    if (lVar8 != 0x22) {
      func_0x00010bf52680();
    }
    ppuVar18 = *(undefined ***)(param_2 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    uVar12 = *(undefined8 *)(param_2 + 8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1069422f8;
    puStack_d0 = &UNK_11094c728;
    lStack_c8 = param_2;
    puStack_c0 = puVar16;
    _objc_retain(param_4);
    lStack_b8 = param_4;
    _objc_retain(param_9);
    lStack_a8 = param_9;
    iStack_a0 = param_5;
    _objc_retain(param_10);
    uStack_b0 = param_10;
    _objc_retain(puVar16);
    ppuVar13 = &PTR____CFConstantStringClassReference_110e65598;
    param_3 = (undefined **)0x0;
    func_0x00010846f9b4(ppuVar18,0,&PTR____CFConstantStringClassReference_110e65598,uVar4,uVar3,
                        lVar2,uVar12,&puStack_e8);
    _objc_release(uVar12);
    _objc_release(ppuVar18);
    _objc_release(uStack_b0);
    _objc_release(lStack_a8);
    _objc_release(lStack_b8);
    _objc_release(puStack_c0);
    _objc_release(puVar16);
    _objc_release(lVar14);
  }
  else {
    ppuVar9 = param_8;
    func_0x00010bf529e0();
    if (((uVar15 & 1) != 0) || (dVar21 <= param_1 - (double)lVar14 || ppuVar9 == (undefined **)0x0))
    {
      _objc_initWeak(auStack_f0,param_2);
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_1069423fc;
      puStack_130 = &UNK_11094c758;
      ppuVar18 = &puStack_148;
      _objc_copyWeak(auStack_100,auStack_f0);
      _objc_retain(param_4);
      lStack_128 = param_4;
      iStack_f8 = param_5;
      _objc_retain(param_6);
      lStack_120 = param_6;
      _objc_retain(param_7);
      uStack_118 = param_7;
      _objc_retain(param_9);
      lStack_108 = param_9;
      _objc_retain(param_10);
      uStack_110 = param_10;
      ppuVar9 = &puStack_148;
      _objc_retainBlock();
      ppuVar10 = param_8;
      func_0x00010bf529e0();
      if (ppuVar10 == (undefined **)0x0) {
        param_3 = (undefined **)0x0;
        (*(code *)ppuVar9[2])(ppuVar9);
      }
      else {
        ppuVar10 = param_8;
        func_0x00010c246ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_8);
        param_3 = &PTR___NSConcreteGlobalBlock_11094c7a8;
        ppuVar11 = ppuVar10;
        func_0x000100504554();
        ppuVar13 = ppuVar11;
        func_0x00010be219a0(param_2);
        _objc_release(ppuVar11);
        param_8 = ppuVar10;
      }
      _objc_release(ppuVar9);
      _objc_release(uStack_110);
      _objc_release(lStack_108);
      _objc_release(uStack_118);
      _objc_release(lStack_120);
      _objc_release(lStack_128);
      _objc_destroyWeak(auStack_100);
      _objc_destroyWeak(auStack_f0);
    }
    else {
      func_0x00010be09b40(param_2);
      func_0x00010bf529e0(param_8);
      func_0x00010be5dfa0(dVar21,param_1 - (double)lVar14,param_2);
      ppuVar13 = param_8;
      func_0x00010be885c0(param_2);
      if (param_9 != 0) {
        param_3 = (undefined **)0x0;
        ppuVar13 = (undefined **)0x0;
        (**(code **)(param_9 + 0x10))(param_9);
      }
    }
  }
  _objc_release(lVar2);
  _objc_release(uVar7);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar18 + 9);
    _objc_destroyWeak(auStack_f0);
    __Unwind_Resume();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar18 = param_3;
    _objc_retain(ppuVar13);
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (ppuVar13 != (undefined **)0x0) {
      uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10);
      _objc_retain(param_3);
      func_0x00010bf0a140(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2ac0(uVar3);
      _objc_release(param_3);
      _objc_release(puVar16);
    }
    func_0x00010be09b40(*(undefined8 *)(param_4 + 0x20));
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(ppuVar18);
    ppuVar13 = ppuVar13 + 9;
    _objc_loadWeakRetained(ppuVar13);
    func_0x00010be145e0();
    _objc_release(ppuVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar13);
    return;
  }
  return;
}



/* Entry: 1069422f8; end: 1069423fb;  */

void FUN_1069422f8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    _objc_retain(param_2);
    func_0x00010bf0a140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2ac0(uVar4);
    _objc_release(param_2);
    _objc_release(puVar1);
  }
  func_0x00010be09b40(*(undefined8 *)(param_1 + 0x20));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar2);
  param_3 = param_3 + 0x48;
  _objc_loadWeakRetained(param_3);
  func_0x00010be145e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069423fc; end: 106942523;  */

void FUN_1069423fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be145e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106942524; end: 106942553;  */

void FUN_106942524(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106942554; end: 106942753; -[SCSpotlightQueryCoordinator _getPrependDedupeFpsFromSpotlightMediaFetcherWithUnviewedSet:feedTypeEnum:fetchBlock:] */

void FUN_106942554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0c3120();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106942754;
  uStack_70 = 0x106942764;
  uStack_68 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24b6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c25a440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar6 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = puStack_88[5];
  puStack_88[5] = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106942754; end: 10694276b;  */

void FUN_106942754(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10694276c; end: 10694285b;  */

void FUN_10694276c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar5 = *(ulong *)(param_1 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10694285c;
  puStack_40 = &UNK_110886d58;
  uStack_38 = param_2;
  _objc_retain(param_2);
  func_0x0001006372a4(uVar5,&puStack_58);
  uVar1 = uVar5;
  func_0x00010bf529e0();
  uVar2 = uVar5;
  if (*(ulong *)(param_1 + 0x38) < uVar1) {
    func_0x00010c25e980(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10694285c; end: 1069428a3;  */

bool FUN_10694285c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  return 0 < lVar2;
}



/* Entry: 1069428a4; end: 106942b47; -[SCSpotlightQueryCoordinator _fetchSpotlightStoriesForQuery:feedTypeEnum:section:existingDataStoreStories:prependExistingStoryDedupeFps:updatingBlock:token:] */

void FUN_1069428a4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126c0f90;
  _objc_opt_new();
  func_0x00010c19b200();
  puVar2 = PTR_PTR_1126b7828;
  _objc_opt_new(PTR_PTR_1126b7828);
  func_0x00010c19b220(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfa43c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar2);
  if (*(long *)(param_1 + 0xf8) == 0) {
    func_0x00010be0bb40(param_1);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    uStack_70 = param_4;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    func_0x00010c2304e0(uVar4);
    _objc_release(uVar3);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



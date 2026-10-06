/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065af384; end: 1065af62b; -[SCChatSnapchattersDataCoordinator _setActiveConversation:metadata:] */

void FUN_1065af384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar10 = *(ulong *)(param_1 + 0x48);
  _objc_retain(uVar10);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1065af62c;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1065af648;
  puStack_a8 = &UNK_110850398;
  lStack_a0 = param_1;
  lStack_78 = param_1;
  func_0x00010c0be1a0(param_4);
  uVar3 = uVar10;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x60));
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x70));
    func_0x00010c12b120(*(undefined8 *)(param_1 + 0x40));
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x88));
    if (((*(byte *)(param_1 + 0x58) & 1) == 0) && (lVar4 = *(long *)(param_1 + 0x50), lVar4 != 0)) {
      func_0x00010c0720c0();
      if ((int)lVar4 == 0) {
        puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be14320(param_1);
        _objc_release(puVar5);
        iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
        func_0x00010c0720c0();
        if (iVar1 != 0) {
          _objc_initWeak(auStack_c8,param_1);
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar6;
          func_0x00010c2445c0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar2;
          func_0x00010c0e0ea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_d0,auStack_c8);
          _objc_retain(param_3);
          uVar8 = uVar7;
          func_0x00010c25ff60();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_1 + 0x88);
          *(undefined8 *)(param_1 + 0x88) = uVar8;
          _objc_release(uVar9);
          _objc_release(uVar7);
          _objc_release(uVar2);
          _objc_release(uVar6);
          _objc_release(param_3);
          _objc_destroyWeak(auStack_d0);
          _objc_destroyWeak(auStack_c8);
        }
      }
      else {
        func_0x00010be13d00(param_1);
      }
    }
  }
  _objc_release(uVar10);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065af62c; end: 1065af647;  */

void FUN_1065af62c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x58) = 1;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065af648; end: 1065af683;  */

void FUN_1065af648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x58) = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065af684; end: 1065af743;  */

void FUN_1065af684(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2268e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14320(param_1);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065af744; end: 1065afb83; -[SCChatSnapchattersDataCoordinator _setOfSnapchatterIdsToFetchWithMessages:participants:kickedParticipants:isGroupConversation:] */

undefined *
FUN_1065af744(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar10,param_2,param_5);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010befa160(puVar10,param_2,param_4);
  }
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  puVar7 = &uStack_1b0;
  lVar5 = param_3;
  func_0x00010bf52a60(param_3,param_2,puVar7,auStack_f0,0x10);
  if (lVar5 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar13 = *(long *)(lStack_1a8 + lVar8 * 8);
        lVar2 = lVar13;
        func_0x00010bfcf4e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c27dd80();
        if (lVar3 == 2) {
          _objc_release(lVar2);
LAB_1065af8b8:
          lVar2 = lVar13;
          func_0x00010bfcf4e0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c0d0380();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = param_1;
          func_0x00010bee6c60(param_1,param_2,lVar3);
          _objc_release(lVar3);
          _objc_release(lVar2);
          if ((int)lVar11 == 0) goto LAB_1065af93c;
          func_0x00010bfcf4e0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar13;
          func_0x00010c0d0380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar10,param_2,lVar2);
          _objc_release(lVar2);
LAB_1065afae8:
          _objc_release(lVar13);
        }
        else {
          lVar3 = lVar13;
          func_0x00010bfcf4e0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar3;
          func_0x00010c27dd80();
          _objc_release(lVar3);
          _objc_release(lVar2);
          if (lVar11 == 4) goto LAB_1065af8b8;
LAB_1065af93c:
          lVar2 = lVar13;
          func_0x00010c27dd80();
          if (lVar2 == 0x15) {
            lVar2 = lVar13;
            func_0x00010c0c6560(lVar13);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010c14ba20();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar1;
            func_0x00010bf4b900(puVar1,param_2,lVar3);
            _objc_release(lVar3);
            _objc_release(lVar2);
            if (((ulong)puVar4 & 1) == 0) {
              lVar2 = lVar13;
              func_0x00010c0c6560(lVar13);
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar2;
              func_0x00010c14ba20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar10,param_2,lVar3);
              _objc_release(lVar3);
              _objc_release(lVar2);
            }
          }
          lVar2 = lVar13;
          func_0x00010c080dc0();
          if ((int)lVar2 != 0) {
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            lStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            plStack_1e0 = (long *)0x0;
            lVar2 = lVar13;
            func_0x00010c0ca740();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010bf52a60();
            if (lVar3 != 0) {
              lVar11 = *plStack_1e0;
              do {
                lVar12 = 0;
                do {
                  if (*plStack_1e0 != lVar11) {
                    _objc_enumerationMutation(lVar2);
                  }
                  func_0x00010befa120(puVar10,param_2,*(undefined8 *)(lStack_1e8 + lVar12 * 8));
                  lVar12 = lVar12 + 1;
                } while (lVar3 != lVar12);
                lVar3 = lVar2;
                func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
              } while (lVar3 != 0);
            }
            _objc_release(lVar2);
          }
          lVar2 = lVar13;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010bf4b900(puVar1,param_2,lVar2);
          _objc_release(lVar2);
          if (((ulong)puVar4 & 1) == 0) {
            func_0x00010c0cb8c0(lVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar10,param_2,lVar13);
            goto LAB_1065afae8;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar5);
      puVar7 = &uStack_1b0;
      lVar5 = param_3;
      func_0x00010bf52a60(param_3,param_2,puVar7,auStack_f0,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar7);
  if (((ulong)puVar10 & 1) == 0) {
    lVar5 = *(long *)(param_3 + 0x60);
    func_0x00010c0e00e0(lVar5,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      puVar6 = puVar7;
      func_0x00010c0720c0(puVar7,param_2,*(undefined8 *)(param_3 + 0x18));
      puVar10 = (undefined *)(ulong)((uint)puVar6 ^ 1);
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    _objc_release(lVar5);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(puVar7);
  return puVar10;
}



/* Entry: 1065afb84; end: 1065afc17; -[SCChatSnapchattersDataCoordinator _userIdCanBeInserted:] */

uint FUN_1065afb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
      uVar4 = (uint)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
    _objc_release(lVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1065afc18; end: 1065afcb3; -[SCChatSnapchattersDataCoordinator _fetchSelfUserSnapchatter] */

void FUN_1065afc18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdcb7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceDataCoordinatorUpdateWi_112550790);
  return;
}



/* Entry: 1065afcb4; end: 1065afe33; -[SCChatSnapchattersDataCoordinator _fetchSnapchattersForUserIds:conversationId:] */

void FUN_1065afcb4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 != 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf00560(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c244e80(uVar2);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065afe34; end: 1065afe87;  */

void FUN_1065afe34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe0c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065afe88; end: 1065b00c3; -[SCChatSnapchattersDataCoordinator _didFetchSnapchatters:requestedSnapchatterIds:conversationId:] */

void FUN_1065afe88(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  puVar5 = param_5;
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_138 = param_4;
    func_0x00010c226ce0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puVar5 = &uStack_130;
    puVar4 = auStack_f0;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar5 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)puVar5 * 8);
          uVar7 = *(undefined8 *)(param_1 + 0x60);
          uVar3 = uVar6;
          func_0x00010c2923e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar7);
          _objc_release(uVar3);
          func_0x00010c2923e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(unaff_x23);
          _objc_release(uVar6);
          puVar5 = (undefined8 *)((long)puVar5 + 1);
        } while (puVar2 != puVar5);
        puVar5 = &uStack_130;
        puVar4 = auStack_f0;
        puVar2 = param_3;
        func_0x00010bf52a60();
        unaff_x24 = (undefined8 *)0x0;
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    puVar2 = param_3;
    func_0x00010bf529e0();
    if (puVar2 != (undefined8 *)0x0) {
      puVar5 = param_3;
      func_0x00010befb740(*(undefined8 *)(param_1 + 0x40));
      func_0x00010bdcb7c0(param_1);
    }
    puVar2 = unaff_x23;
    func_0x00010bf529e0();
    if (puVar2 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x70);
      func_0x00010c0ce860(unaff_x23);
      puVar2 = unaff_x23;
      func_0x00010bf529e0();
      if (puVar2 != (undefined8 *)0x0) {
        unaff_x24 = unaff_x23;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = unaff_x24;
        puVar4 = param_5;
        func_0x00010be138e0(param_1);
        _objc_release(unaff_x24);
      }
    }
    _objc_release(unaff_x23);
    param_4 = puStack_138;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1065b00c4;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  lStack_170 = param_1;
  puStack_168 = param_5;
  puStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  func_0x00010befa160(puVar2[0xe]);
  _objc_initWeak(auStack_188,puVar2);
  uVar3 = puVar2[6];
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = puVar2[2];
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_190,auStack_188);
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  func_0x00010c244ea0(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar4);
  _objc_release(puVar5);
  return;
}



/* Entry: 1065b00c4; end: 1065b021f; -[SCChatSnapchattersDataCoordinator _fetchRemoteSnapchattersForUserIds:conversationId:] */

void FUN_1065b00c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x70));
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c244ea0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065b0220; end: 1065b02bf;  */

void FUN_1065b0220(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce860(uVar2);
    _objc_release(puVar1);
    if (param_3 == 0) {
      func_0x00010bdfe000(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065b02c0; end: 1065b0443; -[SCChatSnapchattersDataCoordinator _didFetchRemoteSnapchatters:conversationId:] */

void FUN_1065b02c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0720c0(uVar2,param_2,param_4);
    if ((int)uVar2 != 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(param_3);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
      if (lVar1 != 0) {
        lVar7 = *plStack_120;
        do {
          lVar8 = 0;
          do {
            if (*plStack_120 != lVar7) {
              _objc_enumerationMutation(param_3);
            }
            uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
            uVar6 = *(undefined8 *)(param_1 + 0x60);
            uVar2 = uVar5;
            func_0x00010c2923e0(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar6,param_2,uVar5,uVar2);
            _objc_release(uVar2);
            lVar8 = lVar8 + 1;
          } while (lVar1 != lVar8);
          lVar1 = param_3;
          func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
        } while (lVar1 != 0);
      }
      _objc_release(param_3);
      func_0x00010befb740(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
      func_0x00010bdcb7c0(param_1);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126cb370;
  func_0x00010bf373a0(PTR_PTR_1126cb370,param_2,8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0x78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0cce60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2786a0(uVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 8);
  _objc_opt_class(param_3);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cbb90;
  _objc_alloc(PTR_PTR_1126cbb90);
  func_0x00010c053e60();
  func_0x00010bf63720(uVar5,param_2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1065b0444; end: 1065b0543; -[SCChatSnapchattersDataCoordinator _announceDataCoordinatorUpdateWithDataRequest] */

void FUN_1065b0444(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cb370;
  func_0x00010bf373a0(PTR_PTR_1126cb370,param_2,8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
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
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class(param_1);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cbb90;
  _objc_alloc(PTR_PTR_1126cbb90);
  func_0x00010c053e60();
  func_0x00010bf63720(uVar4,param_2,param_1,puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065b0544; end: 1065b061b; -[SCChatSnapchattersDataCoordinator .cxx_destruct] */

void FUN_1065b0544(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 1065b061c; end: 1065b0627; +[SCChatWindowingConversationDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_1065b061c(void)

{
  return &PTR____CFConstantStringClassReference_110e54d78;
}



/* Entry: 1065b0628; end: 1065b062f; -[SCChatWindowingConversationDataCoordinator addDataUpdateListener:] */

void FUN_1065b0628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1065b0630; end: 1065b0637; -[SCChatWindowingConversationDataCoordinator removeDataUpdateListener:] */

void FUN_1065b0630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1065b0638; end: 1065b08c7; -[SCChatWindowingConversationDataCoordinator initWithUserId:nativeSessionManager:performerProvider:announcer:chatDisplayReadyLogger:chatGraphene:pageLoadMetricsEmitter:messagingExperimentService:] */

undefined8 *
FUN_1065b0638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_68 = PTR_PTR_1126f1df8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_10);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar1[0x13] = 1;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_10);
  }
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



/* Entry: 1065b08c8; end: 1065b096b;  */

void FUN_1065b08c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cbf60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f440();
  func_0x00010c0df6e0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1065b096c; end: 1065b0b5f; -[SCChatWindowingConversationDataCoordinator _subscribeToWindowUpdates] */

void FUN_1065b096c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010beeb480();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      _objc_initWeak(auStack_68,param_1);
      lVar2 = lVar1;
      func_0x00010c2a7340(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1065b0b60;
      puStack_78 = &UNK_1108b3f28;
      _objc_copyWeak(auStack_70,auStack_68);
      lVar4 = lVar3;
      func_0x00010c25ff60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010c2a7240(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_98,auStack_68);
      lVar4 = lVar3;
      func_0x00010c25ff60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1065b0b60; end: 1065b0bef;  */

void FUN_1065b0b60(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065b0bf0; end: 1065b0c37; -[SCChatWindowingConversationDataCoordinator dealloc] */

void FUN_1065b0bf0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x28));
  puStack_28 = PTR_PTR_1126f1df8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1065b0c38; end: 1065b0dc7; -[SCChatWindowingConversationDataCoordinator handleDataRequest:] */

void FUN_1065b0c38(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb390;
  _objc_opt_class(PTR_PTR_1126cb390);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR_PTR_1126cb390;
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126cba48;
    _objc_opt_class(PTR_PTR_1126cba48);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    puVar1 = PTR_PTR_1126cba48;
    if ((uVar2 & 1) == 0) goto LAB_1065b0dac;
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar3);
LAB_1065b0dac:
  _objc_release(param_3);
  return;
}



/* Entry: 1065b0dc8; end: 1065b0e63;  */

void FUN_1065b0dc8(long param_1,undefined8 param_2)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
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
  pcStack_28 = FUN_1065b0e64;
  puStack_20 = &UNK_110929620;
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1065b0e74;
  puStack_48 = &UNK_11092d398;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1065b0e84;
  puStack_70 = &UNK_110929690;
  uStack_40 = uStack_68;
  uStack_18 = uStack_68;
  func_0x00010c0bfca0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 1065b0e64; end: 1065b0e9b;  */

void FUN_1065b0e64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setActiveConversationId_chatIde_112586008,
             param_2,param_4,param_3);
  return;
}



/* Entry: 1065b0e9c; end: 1065b0f5b; -[SCChatWindowingConversationDataCoordinator _setActiveConversationId:chatIdentifier:metadata:metricsTracker:] */

void FUN_1065b0e9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_6;
  _objc_release(uVar1);
  _objc_release(param_4);
  func_0x00010be0a7e0(param_1,param_2,param_3,param_5,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1065b0f5c; end: 1065b1003; -[SCChatWindowingConversationDataCoordinator _resumeActiveConversationId:chatIdentifier:metadata:] */

void FUN_1065b0f5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = param_4;
    _objc_release(uVar2);
    func_0x00010be0a7e0(param_1,param_2,param_3,param_5,0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065b1004; end: 1065b103b; -[SCChatWindowingConversationDataCoordinator _unsetActiveConversationById:] */

void FUN_1065b1004(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be92830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetConversationState_1125823a8);
    return;
  }
  return;
}



/* Entry: 1065b103c; end: 1065b10af; -[SCChatWindowingConversationDataCoordinator _resetConversationState] */

void FUN_1065b103c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88),param_2,0,*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x98) = 1;
  return;
}



/* Entry: 1065b10b0; end: 1065b12b3; -[SCChatWindowingConversationDataCoordinator _enterConversationAndInitWindow:metadata:isReset:] */

void FUN_1065b10b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
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
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  ppuVar3 = &puStack_e0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bec8860(param_1);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1065b12b4;
  puStack_98 = &UNK_1108488f8;
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  ppuVar2 = &puStack_b0;
  uStack_90 = param_3;
  uStack_80 = param_5;
  _objc_retainBlock(ppuVar2);
  puStack_e0 = puVar4;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1065b140c;
  puStack_c8 = &UNK_110864d98;
  _objc_copyWeak(auStack_b8,auStack_78);
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retainBlock(&puStack_e0);
  puVar4 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  func_0x00010c04f4c0();
  func_0x00010bde8ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1065ac178(param_4);
  func_0x00010bf969a0(param_1);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065b12b4; end: 1065b15a7;  */

void FUN_1065b12b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1065b1354;
    puStack_50 = &UNK_11084d5f8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_38 = *(undefined1 *)(param_1 + 0x30);
    uStack_48 = uVar3;
    lStack_40 = lVar1;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1065b15a8; end: 1065b170f; -[SCChatWindowingConversationDataCoordinator _handleWindowMoveRequest:] */

void FUN_1065b15a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x98) * 0x1e;
    if (99 < lVar1) {
      lVar1 = 100;
    }
    uVar3 = *(ulong *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x80) = 1;
      puVar5 = PTR_PTR_1126cba20;
      _objc_alloc(PTR_PTR_1126cba20);
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      puVar6 = puVar5;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c004a80(puVar5,param_2,uVar8,puVar6,0);
      _objc_release(puVar6);
      func_0x00010bdcb7e0(param_1,param_2,puVar5);
      _objc_release(puVar5);
    }
    lVar2 = param_3;
    func_0x00010bf7f0e0();
    func_0x00010beeb480(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010c0d1900(param_1,param_2,lVar7,lVar1);
    }
    else {
      func_0x00010c0d1920();
    }
    _objc_release(lVar7);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065b1710; end: 1065b20ab; -[SCChatWindowingConversationDataCoordinator _handleWindowUpdate:] */

void FUN_1065b1710(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0720c0();
  _objc_release(lVar5);
  if ((int)lVar6 == 0) goto LAB_1065b1f80;
  lVar5 = param_3;
  func_0x00010c0ebb40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    bVar2 = false;
    bVar3 = false;
  }
  else {
    lVar15 = lVar5;
    func_0x00010c067fc0();
    bVar2 = lVar15 == 0;
    lVar15 = lVar5;
    func_0x00010c067fc0();
    bVar3 = lVar15 == 3;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000100817178();
  _objc_release(uVar7);
  bVar4 = bVar3;
  if (bVar2) {
    puStack_90 = *(undefined **)(param_1 + 0x90);
    if (puStack_90 == (undefined *)0x0) {
      bVar4 = true;
      goto LAB_1065b1828;
    }
    _objc_retain();
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release(uVar7);
LAB_1065b1860:
    *(undefined8 *)(param_1 + 0x98) = 1;
    lVar15 = lVar6;
    func_0x00010c28d4a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar15;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    lVar15 = lVar6;
    func_0x00010c0f2720(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c0e2120();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar6;
    func_0x00010c0f2720(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar18;
    func_0x00010c0d96c0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar9;
    FUN_1065acff0(lVar9,lVar16,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar10);
    _objc_release(lVar18);
    _objc_release(lVar16);
    _objc_release(lVar15);
    lVar15 = lVar6;
    func_0x00010c0f2720(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e2120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar15);
    puVar14 = PTR_PTR_1126cba40;
    _objc_alloc();
    lVar15 = lVar6;
    func_0x00010bf500c0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004a40();
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar14;
    _objc_release(uVar7);
    _objc_release(lVar15);
    if (bVar2) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(lVar13);
      func_0x00010c123840(uVar7);
      _objc_release(uVar7);
      func_0x00010c074920(*(undefined8 *)(param_1 + 0x70));
      func_0x00010c1b18e0(puStack_90);
      lVar15 = lVar6;
      func_0x00010bf500c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar15;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c1d92c0(puStack_90);
      _objc_release(lVar9);
      _objc_release(lVar15);
      uVar19 = *(undefined8 *)(param_1 + 8);
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c074920(uVar7);
      lVar9 = *(long *)(param_1 + 0x48);
      func_0x00010c269d40(lVar9);
      _objc_retainAutoreleasedReturnValue();
      FUN_1065ad160(lVar13,uVar19,uVar7,lVar9);
LAB_1065b1c2c:
      _objc_release(lVar9);
    }
    _objc_release(lVar13);
    lVar15 = lVar6;
    func_0x00010c0f2720();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar15;
    _objc_release(uVar7);
    _objc_retain(lVar5);
    if (lVar5 != 0) {
      lVar15 = lVar5;
      func_0x00010c067fc0();
      if (lVar15 == 2) {
        _objc_release(lVar5);
      }
      else {
        lVar15 = lVar5;
        func_0x00010c067fc0();
        _objc_release(lVar5);
        if (lVar15 != 1) goto LAB_1065b1cb0;
      }
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
    }
LAB_1065b1cb0:
    lVar15 = *(long *)(param_1 + 0x88);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      bVar4 = false;
    }
    else {
      lVar9 = lVar5;
      func_0x00010c067fc0();
      bVar4 = lVar9 == 2;
    }
    lVar9 = *(long *)(param_1 + 0x70);
    func_0x00010c261400(lVar9);
    uVar19 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar19;
    func_0x00010c0e9060();
    uVar1 = ((uint)(8 < lVar9 - 1U) | 0x1e7U >> (ulong)((uint)(lVar9 - 1U) & 0x1f) ^ 1) &
            (uint)uVar7;
    _objc_release(uVar19);
    if (bVar3) {
      lVar9 = lVar15;
      func_0x00010c089d60(lVar15);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar6;
      func_0x00010c28d4a0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar18;
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar18);
      lVar18 = lVar16;
      func_0x0001070b5660(lVar16,*(undefined8 *)(param_1 + 8),uVar1 & 1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      func_0x0001070701e0(uVar7,lVar18,*(undefined8 *)(param_1 + 8),lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88));
      _objc_release(uVar7);
      func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x88));
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
LAB_1065b1df0:
      _objc_release(lVar18);
      _objc_release(lVar16);
      _objc_release(lVar9);
    }
    else if (bVar2 || bVar4) {
      lVar9 = lVar15;
      func_0x00010c089d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar9 == 0) {
        lVar9 = lVar6;
        func_0x00010c28d4a0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar9;
        func_0x00010c246ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        lVar9 = lVar16;
        if (bVar4) {
          puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_80 = 0xc2000000;
          pcStack_78 = FUN_1065b20b4;
          puStack_70 = &UNK_110903fa0;
          _objc_retain(uVar8);
          uStack_68 = uVar8;
          func_0x0001006372a4(lVar16,&puStack_88);
          _objc_release(lVar16);
          _objc_release(uStack_68);
        }
        lVar16 = lVar9;
        func_0x0001070b5660(lVar9,*(undefined8 *)(param_1 + 8),uVar1 & 1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x70);
        func_0x0001070701e0(uVar7,lVar16,*(undefined8 *)(param_1 + 8),0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88));
        _objc_release(uVar7);
        lVar18 = *(long *)(param_1 + 0x88);
        func_0x00010c0e00e0(lVar18);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1065b1df0;
      }
    }
    lVar9 = lVar6;
    func_0x00010c0f2720();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar9;
    func_0x00010c0e2120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar9);
    if (lVar16 == 0) {
      uVar20 = 4;
    }
    else {
      lVar16 = *(long *)(param_1 + 0x88);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar16;
      func_0x00010c089d60();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = (ulong)(lVar9 != 0);
      _objc_release();
      _objc_release(lVar16);
    }
    *(ulong *)(param_1 + 0x80) = uVar20;
    func_0x00010c278920(puStack_90);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puStack_90;
    func_0x00010c0cce60(puStack_90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2786a0(uVar7);
    _objc_release(puVar14);
    _objc_release(uVar7);
    puVar14 = PTR_PTR_1126cba20;
    _objc_alloc(PTR_PTR_1126cba20);
    puVar17 = puVar14;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004a80(puVar14);
    _objc_release(puVar17);
    func_0x00010bdcb7e0(param_1);
    _objc_release(puVar14);
    _objc_release(lVar15);
  }
  else {
LAB_1065b1828:
    puStack_90 = PTR_PTR_1126cb370;
    func_0x00010bf373a0();
    _objc_retainAutoreleasedReturnValue();
    if (bVar4) goto LAB_1065b1860;
    lVar15 = *(long *)(param_1 + 0x70);
    if (lVar15 != 0) {
      func_0x00010c0cbb20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010c28d4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar6;
      func_0x00010c12f460(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar6;
      func_0x00010c0f2720(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar18;
      func_0x00010c0e2120();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010c0f2720(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c0d96c0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar15;
      FUN_1065ac9bc(lVar15,lVar9,lVar16,lVar10,lVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar15);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar18);
      _objc_release(lVar16);
      _objc_release(lVar9);
      lVar15 = lVar6;
      func_0x00010bf500c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar15 == 0) {
        lVar9 = *(long *)(param_1 + 0x70);
        func_0x00010bf500c0(lVar9);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar15);
        lVar9 = lVar15;
      }
      _objc_release(lVar15);
      lVar15 = lVar6;
      func_0x00010c0f2720(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e2120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar15);
      puVar14 = PTR_PTR_1126cba40;
      _objc_alloc();
      func_0x00010c004a40();
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      *(undefined **)(param_1 + 0x70) = puVar14;
      _objc_release(uVar7);
      goto LAB_1065b1c2c;
    }
  }
  _objc_release(puStack_90);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
LAB_1065b1f80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065b20ac; end: 1065b20b3;  */

void FUN_1065b20ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf490f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_consistentId_1125afde0);
  return;
}



/* Entry: 1065b20b4; end: 1065b20ff;  */

uint FUN_1065b20b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf490e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1065b2100; end: 1065b225f; -[SCChatWindowingConversationDataCoordinator _handleWindowError:] */

void FUN_1065b2100(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 3;
    lVar1 = param_3;
    func_0x00010c0ebb40();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c252d60(param_3);
      FUN_1065acfd0();
      func_0x00010bf43820(*(undefined8 *)(param_1 + 0x90),param_2,4,lVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
      _objc_release(uVar5);
      puVar3 = *(undefined **)(param_1 + 0x38);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43960();
      _objc_release(puVar3);
      puVar4 = PTR_PTR_1126cb388;
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa0180(puVar4,param_2,uVar5,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_1065b2248;
      puVar4 = PTR_PTR_1126cba20;
      _objc_alloc(PTR_PTR_1126cba20);
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      puVar3 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c004a80(puVar4,param_2,uVar5,puVar3,0);
    }
    _objc_release(puVar3);
    func_0x00010bdcb7e0(param_1,param_2,puVar4);
    _objc_release(puVar4);
  }
LAB_1065b2248:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065b2260; end: 1065b2317; -[SCChatWindowingConversationDataCoordinator activeConversationDataForConversationId:completion:] */

void FUN_1065b2260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1065b2318;
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



/* Entry: 1065b2318; end: 1065b2467;  */

void FUN_1065b2318(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010bfe5d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c0720c0();
  lVar8 = *(long *)(param_1 + 0x30);
  if ((uVar2 & 1) == 0) {
    (**(code **)(lVar8 + 0x10))(lVar8,0,0,0,0,0,4);
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x78);
    func_0x00010c0e2120(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x78);
    func_0x00010c0d96c0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x78);
    func_0x00010c28d480(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf529e0();
    (**(code **)(lVar8 + 0x10))
              (lVar8,uVar9,uVar3,lVar4 != 0,lVar5 != 0,lVar7 != 0,
               *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065b2468; end: 1065b24af; -[SCChatWindowingConversationDataCoordinator _conversationManager] */

void FUN_1065b2468(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065b24b0; end: 1065b24f7; -[SCChatWindowingConversationDataCoordinator _windowManager] */

void FUN_1065b24b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065b24f8; end: 1065b2573; -[SCChatWindowingConversationDataCoordinator _announceDataCoordinatorUpdateWithDataRequest:] */

void FUN_1065b24f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010bf63720(uVar2,param_2,param_1,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065b2574; end: 1065b264b; -[SCChatWindowingConversationDataCoordinator .cxx_destruct] */

void FUN_1065b2574(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1065b264c; end: 1065b26f7; -[SCChatArroyoPaginationToken initWithMessageId:timestamp:] */

undefined1 *
FUN_1065b264c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1e00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065b26f8; end: 1065b271b; -[SCChatArroyoPaginationToken copyWithZone:] */

undefined8 FUN_1065b26f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1065b271c; end: 1065b278f; -[SCChatArroyoPaginationToken hash] */

undefined8 * FUN_1065b271c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1065b2810:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1065b281c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1065b281c;
        }
        goto LAB_1065b2810;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1065b281c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1065b2790; end: 1065b2837; -[SCChatArroyoPaginationToken isEqual:] */

long FUN_1065b2790(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1065b2810:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1065b281c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1065b281c;
        }
        goto LAB_1065b2810;
      }
    }
    lVar3 = 0;
  }
LAB_1065b281c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1065b2838; end: 1065b283f; -[SCChatArroyoPaginationToken messageId] */

undefined8 FUN_1065b2838(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1065b2840; end: 1065b2847; -[SCChatArroyoPaginationToken timestamp] */

undefined8 FUN_1065b2840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1065b2848; end: 1065b2877; -[SCChatArroyoPaginationToken .cxx_destruct] */

void FUN_1065b2848(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065b2878; end: 1065b28df; +[ChatReactionsUserConfig descriptor] */

void FUN_1065b2878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3a48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ae7350,
                        &PTR____CFConstantStringClassReference_110e54db8,&PTR_DAT_113153ae0,
                        &PTR_DAT_113153af8,2,0x18,0x1c);
    puRam00000001136c3a48 = puVar1;
  }
  return;
}



/* Entry: 1065b28e0; end: 1065b2983; -[SCChatRequestManager initWithContentDelivery:chatLogger:] */

undefined1 *
FUN_1065b28e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1e08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065b2984; end: 1065b2aeb; -[SCChatRequestManager boostMediaDownloadRequestForConversationId:messageId:analyticsMessageId:messageBodyType:media:requestSource:] */

void FUN_1065b2984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0c5180(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010bf4cce0(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  func_0x00010bf88b00(uVar3,param_2,param_3,param_4,param_7,uVar1,param_5,uVar2,param_6,1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_7);
  return;
}



/* Entry: 1065b2aec; end: 1065b2aef;  */

void FUN_1065b2aec(void)

{
  return;
}



/* Entry: 1065b2af0; end: 1065b2d4f; -[SCChatRequestManager sendMediaDownloadRequestForConversationId:messageId:messageBodyType:media:mediaId:analyticsMessageId:contentObject:userInitiated:requestSource:successBlock:failureBlock:] */

void FUN_1065b2af0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c0c5180(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_initWeak(auStack_70,param_1);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1065b2d50;
  puStack_b0 = &UNK_11092da08;
  _objc_copyWeak(auStack_88,auStack_70);
  _objc_retain(in_stack_00000018);
  uStack_98 = in_stack_00000018;
  uStack_78 = param_10;
  _objc_retain(param_6);
  uStack_a8 = param_6;
  uStack_80 = param_5;
  _objc_retain(param_4);
  uStack_a0 = param_4;
  _objc_retain(in_stack_00000020);
  uStack_90 = in_stack_00000020;
  ppuVar2 = &puStack_c8;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88b00();
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065b2d50; end: 1065b2e5b;  */

void FUN_1065b2d50(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2c100(lVar1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2c120(lVar1);
  }
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1065b2e5c; end: 1065b2efb; -[SCChatRequestManager increaseMediaDownloadPriorityForMediaId:] */

void FUN_1065b2e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010bfde980();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4478);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f800();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065b2efc; end: 1065b2f7b; -[SCChatRequestManager _handleMediaDownloadSuccessWithBlock:userInitiated:mediaId:messageBodyType:messageId:responseDataLength:networkStats:] */

void FUN_1065b2efc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0();
  _objc_release(param_5);
  _objc_release(uVar1);
  (**(code **)(param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065b2f7c; end: 1065b3037; -[SCChatRequestManager _handleMediaDownloadFailureWithFailureBlock:mediaId:responseCode:messageId:messageBodyType:userInitiated:networkStats:error:] */

void FUN_1065b2f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1065b3038;
  puStack_58 = &UNK_110845188;
  uStack_50 = param_1;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1065b3038; end: 1065b3147;  */

void FUN_1065b3038(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *(long *)(param_1 + 0x38) - 0x193;
  uVar1 = 0xffffffffffffffff;
  if (7 < uVar6 || (1L << (uVar6 & 0x3f) & 0x83U) == 0) {
    uVar1 = 3;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001065b312c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x10))(lVar5,uVar1);
    return;
  }
  return;
}



/* Entry: 1065b3148; end: 1065b3153; -[SCChatRequestManager requestContextsWithConversationId:] */

void FUN_1065b3148(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cb6b0,PTR_s_requestContextsWithConversationI_11262ae68);
  return;
}



/* Entry: 1065b3154; end: 1065b3257; +[SCChatRequestManager requestContextsWithConversationId:] */

void FUN_1065b3154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b19f8;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1065b3258; end: 1065b3287; -[SCChatRequestManager .cxx_destruct] */

void FUN_1065b3258(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065b3288; end: 1065b339b; -[SCContextPostSnapActionsDataProvider initWithFetcher:] */

undefined1 * FUN_1065b3288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1e10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065b339c; end: 1065b33c3; -[SCContextPostSnapActionsDataProvider postSnapConversationActionsObservable] */

void FUN_1065b339c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065b33c4; end: 1065b349f; -[SCContextPostSnapActionsDataProvider setActiveConversation:] */

void FUN_1065b33c4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065b34a0; end: 1065b34d3;  */

void FUN_1065b34a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec71a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065b34d4; end: 1065b357b; -[SCContextPostSnapActionsDataProvider unsetActiveConversation] */

void FUN_1065b34d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1065b357c; end: 1065b35a7;  */

void FUN_1065b357c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065b35a8; end: 1065b37a3; -[SCContextPostSnapActionsDataProvider _subscribeToActionUpdatesForConversation:] */

void FUN_1065b35a8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(ulong *)(param_1 + 0x10);
  _objc_retain(uVar7);
  _objc_retain(uVar1);
  if (uVar7 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar7);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar7);
    }
    else {
      uVar2 = uVar7;
      func_0x00010c071ae0();
      _objc_release(uVar1);
      _objc_release(uVar7);
      if ((uVar2 & 1) != 0) goto LAB_1065b3754;
    }
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar1;
    _objc_release(uVar3);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf500e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
LAB_1065b3754:
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1065b37a4; end: 1065b3803;  */

void FUN_1065b37a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c074920(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be0f140(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065b3804; end: 1065b397b; -[SCContextPostSnapActionsDataProvider _fetchActionsForConversationId:isGroupConversation:] */

void FUN_1065b3804(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  _objc_retain(param_3);
  if (lVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(lVar3);
      goto LAB_1065b3938;
    }
    lVar1 = lVar3;
    func_0x00010c071ae0();
    _objc_release(param_3);
    _objc_release(lVar3);
    if ((int)lVar1 == 0) goto LAB_1065b3938;
  }
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bfa49e0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
LAB_1065b3938:
  _objc_release(param_3);
  return;
}



/* Entry: 1065b397c; end: 1065b39cf;  */

void FUN_1065b397c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee44c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065b39d0; end: 1065b3a23; -[SCContextPostSnapActionsDataProvider _updateWithActions:conversationId:] */

void FUN_1065b39d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0720c0(uVar1,param_2,param_4);
  if ((int)uVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065b3a24; end: 1065b3a4f; -[SCContextPostSnapActionsDataProvider _unsetActiveConversation] */

void FUN_1065b3a24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1065b3a50; end: 1065b3aa3; -[SCContextPostSnapActionsDataProvider .cxx_destruct] */

void FUN_1065b3a50(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065b3aa4; end: 1065b3b2b; -[SCChatDraftServiceProvider _createChatDraftMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065b3aa4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_11274b0f4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126cbbd0;
  _objc_alloc(PTR_PTR_1126cbbd0);
  func_0x00010c00d820();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065b3b2c; end: 1065b3c0f; -[SCChatDraftServiceProvider provide] */

void FUN_1065b3b2c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbbd8;
  _objc_alloc(PTR_PTR_1126cbbd8);
  func_0x00010bffda80();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065b3c10; end: 1065b3c4f;  */

void FUN_1065b3c10(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdebec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065b3c50; end: 1065b3c87; -[SCChatDraftServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065b3c50(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b0f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b0f8);
  return;
}



/* Entry: 1065b3c88; end: 1065b3d0f; -[SCChatDraftMutator initWithDocObjectContext:] */

undefined1 * FUN_1065b3c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1e18;
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



/* Entry: 1065b3d10; end: 1065b3e6f; -[SCChatDraftMutator fetchChatDraftForConversationId:completionBlock:] */

void FUN_1065b3d10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  pcStack_48 = FUN_1065b3e70;
  uStack_40 = 0x1065b3e80;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065b3e70; end: 1065b3e87;  */

void FUN_1065b3e70(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065b3e88; end: 1065b42cf;  */

void FUN_1065b3e88(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uStack_1b4;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(uVar12);
  _objc_opt_class(PTR_PTR_1126cbbe0);
  if (param_2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_2);
  }
  puVar2 = &uStack_121;
  FUN_1065b4fd4();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  _objc_retain(uVar12);
  ppuStack_198 = &PTR_SUB_110862760;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_110862700;
  uStack_d0 = 0;
  uStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  uStack_1b4 = 0;
  puVar3 = &uStack_b0;
  uStack_168 = uVar12;
  puStack_e8 = puVar2;
  pppuStack_e0 = &ppuStack_198;
  func_0x0001000e77a0(puVar3,&ppuStack_120,&puStack_1b0,&uStack_1b4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_110862700;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_d8;
  func_0x000100105004(&puStack_1b0);
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_SUB_110862760;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_150;
  func_0x000100105004(&puStack_1b0);
  _objc_release(uStack_168);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uVar12);
  _objc_release(param_2);
  puVar4 = puVar3;
  func_0x00010bfb1920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_retain(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  puVar3 = puVar4;
  func_0x00010bf0e540(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60();
  _objc_release(puVar3);
  func_0x00010c1ec620(puVar5);
  puVar6 = puVar5;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_opt_class(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar8 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar7);
  puVar7 = puVar6;
  if (((ulong)puVar8 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  _objc_retain(puVar7);
  puVar8 = PTR_PTR_1126cbbe8;
  _objc_alloc();
  puVar3 = puVar4;
  func_0x00010c0ca820(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x000100504554();
  puVar10 = puVar4;
  func_0x00010c112720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4f80();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar12 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar8;
  _objc_release(uVar12);
  _objc_release(puVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 1065b42d0; end: 1065b42e7;  */

void FUN_1065b42d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001065b42e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 1065b42e8; end: 1065b44b3; -[SCChatDraftMutator storeChatDraftForConversationId:attributedText:mentions:previousMessageId:] */

void FUN_1065b42e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1065b44b4; end: 1065b465f;  */

void FUN_1065b44b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cbbe0;
  _objc_alloc(PTR_PTR_1126cbbe0);
  uVar6 = uVar2;
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_11092db28);
  func_0x00010c004ba0(puVar5);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_retain(param_2);
  puVar4 = puVar5;
  FUN_1065b5794(puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065b4660; end: 1065b4663;  */

void FUN_1065b4660(void)

{
  return;
}



/* Entry: 1065b4664; end: 1065b466f; -[SCChatDraftMutator .cxx_destruct] */

void FUN_1065b4664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065b4670; end: 1065b4797;  */

void FUN_1065b4670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cbbf0;
  _objc_alloc(PTR_PTR_1126cbbf0);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c11f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ea00();
  uVar4 = param_2;
  func_0x00010c11f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c078d00(param_2);
  func_0x00010c05b9c0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065b4798; end: 1065b488b;  */

void FUN_1065b4798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cbbf8;
  _objc_alloc(PTR_PTR_1126cbbf8);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f2a0(param_2);
  puVar3 = PTR_PTR_1126cbc00;
  _objc_alloc(PTR_PTR_1126cbc00);
  func_0x00010c026c00();
  func_0x00010c078d00(param_2);
  func_0x00010c05b9a0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065b488c; end: 1065b49af; -[SCConversationChatDraft initWithConversationId:attributedText:mentions:previousMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1065b488c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1e20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274b114);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274b114) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274b118);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274b118) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274b11c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274b11c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274b120);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274b120) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065b49b0; end: 1065b49d3; -[SCConversationChatDraft copyWithZone:] */

undefined8 FUN_1065b49b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1065b49d4; end: 1065b4a77; -[SCConversationChatDraft hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1065b49d4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b114);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274b118);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b11c);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274b120);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1065b4b48:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1065b4b54;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274b114);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11274b114)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274b118);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11274b118)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274b11c);
          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11274b11c)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11274b120);
            if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11274b120)) {
              func_0x00010c071ae0();
              goto LAB_1065b4b54;
            }
            goto LAB_1065b4b48;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1065b4b54:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1065b4a78; end: 1065b4b6f; -[SCConversationChatDraft isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1065b4a78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1065b4b48:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1065b4b54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11274b114);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274b114)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11274b118);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274b118)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11274b11c);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274b11c)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_11274b120);
            if (lVar3 != *(long *)(param_3 + (long)_DAT_11274b120)) {
              func_0x00010c071ae0();
              goto LAB_1065b4b54;
            }
            goto LAB_1065b4b48;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1065b4b54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1065b4b70; end: 1065b4b7f; -[SCConversationChatDraft conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065b4b70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274b114);
}



/* Entry: 1065b4b80; end: 1065b4b8f; -[SCConversationChatDraft attributedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065b4b80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274b118);
}



/* Entry: 1065b4b90; end: 1065b4b9f; -[SCConversationChatDraft mentions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065b4b90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274b11c);
}



/* Entry: 1065b4ba0; end: 1065b4baf; -[SCConversationChatDraft previousMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065b4ba0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274b120);
}



/* Entry: 1065b4bb0; end: 1065b4c0f; -[SCConversationChatDraft .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065b4bb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b120,0);
  _objc_storeStrong(param_1 + _DAT_11274b11c,0);
  _objc_storeStrong(param_1 + _DAT_11274b118,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b114,0);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106593d24; end: 106593dab;  */

void FUN_106593d24(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    _objc_retain(param_3);
    _objc_retain(param_2);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bedb980();
    _objc_release(param_3);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106593dac; end: 106594067; -[SCArroyoMessageActionHandler _updateMessage:conversation:update:source:completionCallback:failureCallback:] */

void FUN_106593dac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_5 & 0xfffffffffffffffe) == 6) {
    uVar1 = param_3;
    func_0x00010c07ea80();
    if ((int)uVar1 == 0) goto LAB_106594024;
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    FUN_10659286c(param_4,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074920(param_4);
    func_0x00010c0a5160(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else if (param_5 == 5) {
    func_0x00010be55f20(param_1);
  }
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106594068;
  puStack_b0 = &UNK_1108e3258;
  _objc_retain(param_3);
  uStack_a8 = param_3;
  lStack_a0 = param_1;
  uStack_88 = param_5;
  _objc_retain(param_4);
  uStack_98 = param_4;
  uStack_80 = param_6;
  _objc_retain(param_7);
  ppuVar3 = &puStack_c8;
  uStack_90 = param_7;
  _objc_retainBlock();
  puStack_100 = puVar5;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_106594160;
  puStack_e8 = &UNK_110894fc8;
  _objc_retain(param_3);
  uStack_e0 = param_3;
  uStack_d0 = param_5;
  _objc_retain(param_8);
  ppuVar4 = &puStack_100;
  uStack_d8 = param_8;
  _objc_retainBlock(ppuVar4);
  puVar5 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  func_0x00010c04f4c0();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf50280(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb5a0();
  func_0x00010c287c00(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(ppuVar3);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a8);
LAB_106594024:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106594068; end: 10659415f;  */

void FUN_106594068(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x40) == 0x10) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    FUN_10659286c(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf50280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074920(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0a2da0(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106594148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x10))(lVar5,0);
    return;
  }
  return;
}



/* Entry: 106594160; end: 106594193;  */

void FUN_106594160(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (param_2 - 1U < 6) {
      uVar2 = *(undefined8 *)(&UNK_10dddcc48 + (param_2 - 1U) * 8);
    }
    else {
      uVar2 = 0xc;
    }
                    /* WARNING: Could not recover jumptable at 0x000106594190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
    return;
  }
  return;
}



/* Entry: 106594194; end: 10659422f; -[SCArroyoMessageActionHandler sendPriorityNotificationInConversationId:messageId:completion:] */

void FUN_106594194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0cd8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bdc35c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedb9c0(param_1,param_2,puVar1,param_4,0x10,0,param_5,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106594230; end: 1065943af; -[SCArroyoMessageActionHandler loadMediaForConversationId:messageId:media:isGroupConversation:requestContext:requestSource:completion:] */

void FUN_106594230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_6;
  _objc_retain(param_9);
  func_0x00010bfa89a0(param_1);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065943b0; end: 10659441b;  */

void FUN_1065943b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05fa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10659441c; end: 106594a77; -[SCArroyoMessageActionHandler _downloadMediaForConversationId:messageId:message:media:isGroupConversation:requestContext:requestSource:completion:] */

void FUN_10659441c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,undefined8 param_7,long param_8,undefined4 param_9,
                  undefined4 param_10,long param_11)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c272380(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c07ea80();
  if ((int)uVar4 == 0) {
LAB_106594534:
    if (param_5 != 0) {
      uVar4 = param_5;
      func_0x00010c07f260();
      if ((int)uVar4 != 0) {
        func_0x00010be14580(param_1);
        goto LAB_1065946c4;
      }
      lVar7 = param_6;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 == 0) goto LAB_106594650;
      uVar4 = param_5;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100be58bc();
      uVar5 = param_5;
      func_0x00010c15cca0();
      if (uVar5 == 2) {
        uVar8 = *(undefined8 *)(param_1 + 0xa0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_6;
        func_0x00010c0c5180(param_6);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010bf4b4c0();
        _objc_release(lVar7);
        _objc_release(uVar8);
        if ((int)uVar10 == 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c272380(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_5;
          func_0x00010c07d940();
          _objc_release(uVar10);
          if ((uVar5 & 1) == 0) {
            iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
            uVar5 = param_5;
            func_0x00010bf026e0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c27dd80();
            uVar10 = *(undefined8 *)(param_1 + 0xd8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1f3c0();
            func_0x00010c09b980();
            _objc_release(uVar10);
            _objc_release(uVar5);
            if (iVar1 != 0) goto LAB_10659463c;
          }
          uVar2 = (uint)*(undefined8 *)(param_1 + 0x98);
          func_0x00010c071ac0();
          _objc_retain(param_5);
          _objc_retain(uVar3);
          uVar5 = param_5;
          func_0x00010c07ea80();
          if ((int)uVar5 == 0) {
LAB_10659485c:
            uVar11 = 0;
          }
          else {
            uVar5 = param_5;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            if (uVar5 == 0) goto LAB_10659485c;
            uVar6 = param_5;
            func_0x00010c07d940();
            _objc_release(uVar5);
            if ((uVar2 & (uint)uVar6 & 1) != 0) goto LAB_10659485c;
            uVar5 = param_5;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c0c56c0();
            _objc_release(uVar5);
            if (((uVar6 == 0) || (uVar6 == 3)) || ((uVar11 = 0, param_8 == 4 && (uVar6 == 1)))) {
              uVar5 = param_5;
              func_0x00010bf2c560();
              if (((uVar5 & 1) == 0) && (uVar5 = param_5, func_0x00010c0791e0(), (int)uVar5 != 0)) {
                uVar5 = param_5;
                func_0x00010c07d080();
                uVar11 = (uint)uVar5 | uVar2 ^ 1;
              }
              else {
                uVar11 = 1;
              }
            }
          }
          _objc_release(uVar3);
          _objc_release(param_5);
          uVar5 = param_5;
          func_0x00010c07ea80();
          if (((int)uVar5 != 0) && ((uVar11 & 1) == 0)) {
            lVar7 = param_6;
            func_0x00010c0c56c0();
            if (lVar7 == 1) goto LAB_10659463c;
            func_0x00010bedb5a0(param_1);
          }
          uVar5 = param_5;
          func_0x00010c07fd80();
          if (((int)uVar5 == 0) || (uVar5 = param_5, func_0x00010c07fd40(), (uVar5 & 1) == 0)) {
            uVar8 = *(undefined8 *)(param_1 + 0xd8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar8;
            func_0x00010bf1f3c0();
            if ((param_8 - 3U < 2) || ((param_8 == 5 && ((int)uVar10 == 0)))) {
              _objc_release(uVar8);
            }
            else {
              uVar5 = param_5;
              FUN_106594a78(param_5,uVar3);
              _objc_release(uVar8);
              if ((uVar5 & 1) == 0) goto LAB_1065946a8;
            }
            uVar10 = *(undefined8 *)(param_1 + 0x38);
            uVar5 = param_5;
            func_0x00010bf026e0(param_5);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(param_11);
            _objc_retain(param_11);
            func_0x00010bf88a20(uVar10);
            _objc_release(uVar5);
            _objc_release(param_11);
            _objc_release(param_11);
          }
        }
        else {
          uVar10 = *(undefined8 *)(param_1 + 0x30);
          lVar7 = param_6;
          func_0x00010c0c5180(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befadc0(uVar10);
          _objc_release(lVar7);
LAB_10659463c:
          if (param_11 != 0) {
            pcVar9 = *(code **)(param_11 + 0x10);
            uVar10 = 1;
            goto LAB_1065946b8;
          }
        }
      }
      else {
        uVar10 = *(undefined8 *)(param_1 + 0x30);
        lVar7 = param_6;
        func_0x00010c0c5180(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befadc0(uVar10);
        _objc_release(lVar7);
LAB_1065946a8:
        if (param_11 != 0) {
          pcVar9 = *(code **)(param_11 + 0x10);
          uVar10 = 0;
LAB_1065946b8:
          (*pcVar9)(param_11,uVar10);
        }
      }
      _objc_release(uVar4);
      goto LAB_1065946c4;
    }
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x98);
    func_0x00010c071ac0();
    if (iVar1 == 0) goto LAB_106594534;
    uVar4 = param_5;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0fecc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c067fc0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (uVar6 != 6) goto LAB_106594534;
  }
LAB_106594650:
  if (param_11 != 0) {
    (**(code **)(param_11 + 0x10))(param_11,0);
  }
LAB_1065946c4:
  _objc_release(uVar3);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106594a78; end: 106594b1f;  */

uint FUN_106594a78(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c07bc00();
  uVar2 = param_2;
  func_0x00010c0838e0();
  if ((int)uVar2 == 0) {
LAB_106594af4:
    uVar2 = param_2;
    func_0x00010c07ea80(param_2);
    uVar3 = (uint)uVar2 & ((uint)uVar1 ^ 1);
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = param_2;
      func_0x00010c0cb9a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      _objc_release(uVar2);
      if ((long)-param_1 < 0x15181) goto LAB_106594af4;
    }
    uVar3 = 0;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 106594b20; end: 106594b4f;  */

void FUN_106594b20(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106594b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 106594b50; end: 106594d1b; -[SCArroyoMessageActionHandler fetchServerMessageId:conversationId:completion:] */

void FUN_106594b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106594d1c;
  puStack_80 = &UNK_110875d70;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  ppuVar1 = &puStack_98;
  uStack_68 = param_5;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126cba28;
  _objc_alloc(PTR_PTR_1126cba28);
  _objc_retain(param_5);
  func_0x00010c04f4c0(puVar2);
  puVar3 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    (*(code *)ppuVar1[2])(ppuVar1,0);
  }
  else {
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0(param_3);
    func_0x00010bfaa1c0(param_1);
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106594d1c; end: 106594d2f;  */

void FUN_106594d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106594d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0);
  return;
}



/* Entry: 106594d30; end: 106594df7;  */

void FUN_106594d30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c15f0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c15f400();
  _objc_release(param_2);
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106594df8; end: 106594ff3; -[SCArroyoMessageActionHandler _fetchMessageForMessageId:conversationId:completion:] */

void FUN_106594df8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106594ff4;
  puStack_80 = &UNK_110875d70;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  ppuVar1 = &puStack_98;
  uStack_68 = param_5;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126ba510;
  _objc_alloc(PTR_PTR_1126ba510);
  _objc_retain(param_5);
  func_0x00010c04f4c0(puVar2);
  puVar3 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    (*(code *)ppuVar1[2])(ppuVar1,0);
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfc7e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar5 == 0) {
      (*(code *)ppuVar1[2])(ppuVar1,0);
    }
    else {
      func_0x00010c0b4ca0(param_3);
      func_0x00010bfa8940(lVar5);
    }
    _objc_release(lVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106594ff4; end: 10659500f;  */

void FUN_106594ff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106595000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  return;
}



/* Entry: 106595010; end: 1065952a7; -[SCArroyoMessageActionHandler _fetchSponsoredSnapMediaForMessage:completion:] */

void FUN_106595010(long param_1,undefined1 *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **unaff_x27;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = param_3;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c24a6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    if (param_4 != 0) {
      param_2 = (undefined1 *)0x0;
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c24a6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0f3e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
    if (lVar4 == 0) {
      if (param_4 != 0) {
        param_2 = (undefined1 *)0x0;
        (**(code **)(param_4 + 0x10))(param_4);
      }
    }
    else {
      _objc_initWeak(auStack_78,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0xc0);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e343f8;
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_1065952a8;
      puStack_a0 = &UNK_1108a0570;
      unaff_x27 = &puStack_b8;
      param_2 = auStack_78;
      _objc_copyWeak(auStack_80);
      lStack_98 = lVar8;
      lStack_90 = lVar1;
      _objc_retain(param_4);
      lStack_88 = param_4;
      func_0x00010c107180(uVar5);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(lStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 7);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lVar8 = param_3 + 0x38;
  _objc_loadWeakRetained(lVar8);
  func_0x00010bedb5a0();
  _objc_release(lVar8);
  lVar8 = *(long *)(param_3 + 0x30);
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106595308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x10))(lVar8,param_2);
    return;
  }
  return;
}



/* Entry: 1065952a8; end: 10659531b;  */

void FUN_1065952a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bedb5a0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106595308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10659531c; end: 10659538b; -[SCArroyoMessageActionHandler attemptReplayOfSnapsInConversation:completion:] */

void FUN_10659531c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136700();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10659538c; end: 1065954bf; -[SCArroyoMessageActionHandler saveSnapsInConversation:numMessagesToSave:completion:] */

void FUN_10659538c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  func_0x00010c14b020(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1065954c0; end: 1065955a7;  */

void FUN_1065954c0(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  if (param_2 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    _objc_copyWeak(auStack_50,param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_48 = *(undefined4 *)(param_1 + 0x38);
    func_0x00010be10a20(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
  }
  return;
}



/* Entry: 1065955a8; end: 10659566f;  */

void FUN_1065955a8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf509a0(param_2);
      lVar2 = param_2;
      FUN_10659286c(param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a2f20(uVar1);
      _objc_release(lVar2);
      _objc_release(uVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106595670; end: 1065957a7; -[SCArroyoMessageActionHandler batchToggleSaveInConversation:messageIds:toSaved:source:] */

void FUN_106595670(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  )

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      if (param_5 == 0) {
        func_0x00010c2824a0(param_1);
      }
      else {
        func_0x00010c14a9c0();
      }
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf17370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1065957a8; end: 1065957b3; -[SCArroyoMessageActionHandler saveMessagesInConversationId:messageIds:source:] */

void FUN_1065957a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_batchToggleSaveInConversation_me_1125a3680,param_3,param_4,1,param_5);
  return;
}



/* Entry: 1065957b4; end: 1065957bf; -[SCArroyoMessageActionHandler unsaveMessagesInConversationId:messageIds:source:] */

void FUN_1065957b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_batchToggleSaveInConversation_me_1125a3680,param_3,param_4,0,param_5);
  return;
}



/* Entry: 1065957c0; end: 106595833; -[SCArroyoMessageActionHandler conversationId:attemptReplayOfSnap:] */

void FUN_1065957c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a120();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106595834; end: 106595947; -[SCArroyoMessageActionHandler conversationId:finishViewingSnap:] */

void FUN_106595834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cba30;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c243dc0(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a120();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6880();
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x88),param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bb20();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106595948; end: 1065959cb; -[SCArroyoMessageActionHandler conversationId:openSnap:] */

void FUN_106595948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0d9840(uVar1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a120();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065959cc; end: 1065959d3; -[SCArroyoMessageActionHandler conversationId:screenCaptureWithType:] */

void FUN_1065959cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf503b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_conversationId_screenCaptureWith_1125b1a90,param_3,param_4,0);
  return;
}



/* Entry: 1065959d4; end: 106595aab; -[SCArroyoMessageActionHandler conversationId:screenCaptureWithType:source:] */

void FUN_1065959d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010be10a20(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106595aac; end: 106595b07;  */

void FUN_106595aac(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bde8ae0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106595b08; end: 106595c1b; -[SCArroyoMessageActionHandler _conversation:screenCaptureWithType:source:] */

void FUN_106595b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c074920();
  if ((int)uVar1 != 0) {
    func_0x00010c076ee0();
  }
  _objc_release(param_3);
  uVar1 = param_3;
  func_0x000108606200(param_3,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c272380(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c840(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106595c1c; end: 106595d8b; -[SCArroyoMessageActionHandler deleteStoryMediaForMessageId:conversationId:analyticsId:] */

void FUN_106595c1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4d20();
  _objc_release(param_5);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106595d8c;
  puStack_68 = &UNK_1108529c0;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x106595d90;
  puStack_98 = &UNK_1108529c0;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bedb9c0(param_1,param_2,puVar2,param_3,0xd,0,&puStack_80,&puStack_b0);
  _objc_release(puVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106595d8c; end: 106595d93;  */

void FUN_106595d8c(void)

{
  return;
}



/* Entry: 106595d94; end: 106595f4b; -[SCArroyoMessageActionHandler conversationId:recipientUserId:updateChatNotificationStatus:source:completion:] */

void FUN_106595d94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    _objc_retain(param_4);
    _objc_retain(param_7);
    _objc_retain(param_7);
    func_0x00010c04f4c0(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284440();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(param_7);
    _objc_release(param_4);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 106595f4c; end: 106595fcf;  */

void FUN_106595f4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab6a0();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106595fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,1);
    return;
  }
  return;
}



/* Entry: 106595fd0; end: 106595fe7;  */

void FUN_106595fd0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106595fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 106595fe8; end: 10659619f; -[SCArroyoMessageActionHandler conversationId:recipientUserId:updateCallingNotificationStatus:source:completion:] */

void FUN_106595fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    _objc_retain(param_4);
    _objc_retain(param_7);
    _objc_retain(param_7);
    func_0x00010c04f4c0(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2840c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(param_7);
    _objc_release(param_4);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 1065961a0; end: 106596223;  */

void FUN_1065961a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab680();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106596210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,1);
    return;
  }
  return;
}



/* Entry: 106596224; end: 10659623b;  */

void FUN_106596224(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106596234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 10659623c; end: 1065963f3; -[SCArroyoMessageActionHandler conversationId:recipientUserId:updateTemporaryChatNotificationStatusForMuteDurationMinutes:source:completion:] */

void FUN_10659623c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    _objc_retain(param_4);
    _objc_retain(param_7);
    _objc_retain(param_7);
    func_0x00010c04f4c0(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28ad60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(param_7);
    _objc_release(param_4);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 1065963f4; end: 106596497;  */

void FUN_1065963f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab6a0();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106596484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,1);
    return;
  }
  return;
}



/* Entry: 106596498; end: 1065964af;  */

void FUN_106596498(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001065964a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1065964b0; end: 106596667; -[SCArroyoMessageActionHandler conversationId:recipientUserId:updateTemporaryCallingNotificationStatusForMuteDurationMinutes:source:completion:] */

void FUN_1065964b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    _objc_retain(param_4);
    _objc_retain(param_7);
    _objc_retain(param_7);
    func_0x00010c04f4c0(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28ad40();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(param_7);
    _objc_release(param_4);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 106596668; end: 10659670b;  */

void FUN_106596668(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab680();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001065966f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,1);
    return;
  }
  return;
}



/* Entry: 10659670c; end: 106596723;  */

void FUN_10659670c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010659671c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 106596724; end: 1065967d7; -[SCArroyoMessageActionHandler conversationId:userDidScreenRecordForSnap:] */

void FUN_106596724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0cd8;
  _objc_retain(param_4);
  func_0x00010bdc35c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_4;
  func_0x00010c0b4ca0(param_4);
  _objc_release(param_4);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedb9a0(param_1,param_2,puVar1,puVar3,7,0xffffffffffffffff);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065967d8; end: 10659688b; -[SCArroyoMessageActionHandler conversationId:userDidTakeScreenshotForSnap:] */

void FUN_1065967d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0cd8;
  _objc_retain(param_4);
  func_0x00010bdc35c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_4;
  func_0x00010c0b4ca0(param_4);
  _objc_release(param_4);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedb9a0(param_1,param_2,puVar1,puVar3,6,0xffffffffffffffff);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10659688c; end: 106596af7; -[SCArroyoMessageActionHandler didShowCompleteDisplayForConversationId:withMessageId:] */

void FUN_10659688c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    puVar5 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106596af8;
    puStack_88 = &UNK_110841f80;
    _objc_retain(param_3);
    uStack_80 = param_3;
    _objc_retain(param_4);
    puStack_d0 = puVar6;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x106596afc;
    puStack_b8 = &UNK_1108529c0;
    uStack_78 = param_4;
    _objc_retain(param_3);
    uStack_b0 = param_3;
    _objc_retain(param_4);
    uStack_a8 = param_4;
    func_0x00010c04f4c0(puVar5,param_2,&puStack_a0,&puStack_d0);
    puVar6 = PTR_PTR_1126cba38;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010c0b4ca0(param_4);
    func_0x00010c02b700(puVar6,param_2,uVar2,0);
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c58e0(param_1,param_2,puVar7,puVar8,puVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106596af8; end: 106596aff;  */

void FUN_106596af8(void)

{
  return;
}



/* Entry: 106596b00; end: 106596d6b; -[SCArroyoMessageActionHandler didShowPendingDisplayForConversationId:withMessageId:] */

void FUN_106596b00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    puVar5 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106596d6c;
    puStack_88 = &UNK_110841f80;
    _objc_retain(param_3);
    uStack_80 = param_3;
    _objc_retain(param_4);
    puStack_d0 = puVar6;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x106596d70;
    puStack_b8 = &UNK_1108529c0;
    uStack_78 = param_4;
    _objc_retain(param_3);
    uStack_b0 = param_3;
    _objc_retain(param_4);
    uStack_a8 = param_4;
    func_0x00010c04f4c0(puVar5,param_2,&puStack_a0,&puStack_d0);
    puVar6 = PTR_PTR_1126cba38;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010c0b4ca0(param_4);
    func_0x00010c02b700(puVar6,param_2,uVar2,1);
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c58e0(param_1,param_2,puVar7,puVar8,puVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106596d6c; end: 106596d73;  */

void FUN_106596d6c(void)

{
  return;
}



/* Entry: 106596d74; end: 106596ef7; -[SCArroyoMessageActionHandler fetchConversation:completion:] */

void FUN_106596d74(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR_PTR_1126b46e0;
    _objc_alloc(PTR_PTR_1126b46e0);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106596ef8;
    puStack_68 = &UNK_11092c9e8;
    _objc_retain(param_3);
    lStack_60 = param_3;
    _objc_retain(param_4);
    puStack_b0 = puVar2;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106596f8c;
    puStack_98 = &UNK_110875d40;
    lStack_58 = param_4;
    _objc_retain(param_3);
    lStack_90 = param_3;
    _objc_retain(param_4);
    lStack_88 = param_4;
    func_0x00010c04f560(puVar1,param_2,&puStack_80,&puStack_b0,0);
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5fe0(param_1,param_2,puVar2,puVar1);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(puVar1);
    _objc_release(lStack_88);
    _objc_release(lStack_90);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106596ef8; end: 106596f8b;  */

void FUN_106596ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cba40;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c004a40();
  _objc_release(param_3);
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106596f8c; end: 106596f9f;  */

void FUN_106596f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106596f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,1);
  return;
}



/* Entry: 106596fa0; end: 10659715b; -[SCArroyoMessageActionHandler fetchConversationMetadata:completion:] */

void FUN_106596fa0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar2 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if ((param_3 != 0) && (param_4 != 0)) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10659715c;
    puStack_78 = &UNK_110895108;
    _objc_retain(param_3);
    lStack_70 = param_3;
    _objc_retain(param_4);
    ppuVar1 = &puStack_90;
    lStack_68 = param_4;
    _objc_retainBlock(ppuVar1);
    puStack_c0 = puVar3;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1065971d0;
    puStack_a8 = &UNK_110875d40;
    _objc_retain(param_3);
    lStack_a0 = param_3;
    _objc_retain(param_4);
    lStack_98 = param_4;
    _objc_retainBlock();
    puVar3 = PTR_PTR_1126ba338;
    _objc_alloc(PTR_PTR_1126ba338);
    func_0x00010c04f540();
    puVar4 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2,0);
    }
    else {
      func_0x00010c0d58a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa5f00();
      _objc_release(param_1);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(lStack_98);
    _objc_release(lStack_a0);
    _objc_release(ppuVar1);
    _objc_release(lStack_68);
    _objc_release(lStack_70);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659715c; end: 1065971cf;  */

void FUN_10659715c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cba40;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c004a40();
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065971d0; end: 1065971e3;  */

void FUN_1065971d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001065971e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,1);
  return;
}



/* Entry: 1065971e4; end: 1065972cf; -[SCArroyoMessageActionHandler fetchConversationSubtypeMetadata:completion:] */

void FUN_1065971e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bfa5f80(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065972d0; end: 10659739b;  */

void FUN_1065972d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010bdc5740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126cb3a8;
  lVar3 = lVar1;
  func_0x00010c15ed20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf220a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10659739c; end: 10659743b; -[SCArroyoMessageActionHandler _adResponseForConversation:] */

void FUN_10659739c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bef4a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10659743c; end: 1065975af; -[SCArroyoMessageActionHandler fetchConversationFromServerById:showInFriendsFeed:isGroup:] */

void FUN_10659743c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126be918;
  _objc_alloc(PTR_PTR_1126be918);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1065975b0;
  puStack_60 = &UNK_110863ff8;
  _objc_retain(param_3);
  puStack_a0 = puVar2;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1065975b4;
  puStack_88 = &UNK_110855e40;
  uStack_80 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar1,param_2,&puStack_78,&puStack_a0);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b41e0;
  _objc_alloc(PTR_PTR_1126b41e0);
  func_0x00010c004e00();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2665a0();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1065975b0; end: 1065975b7;  */

void FUN_1065975b0(void)

{
  return;
}



/* Entry: 1065975b8; end: 1065975cf; -[SCArroyoMessageActionHandler fetchMessageForConversationId:messageId:completion:] */

void FUN_1065975b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be128d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__fetchMessageForMessageId_conver_1125623d0,param_4,param_3);
    return;
  }
  return;
}



/* Entry: 1065975d0; end: 1065976cf; -[SCArroyoMessageActionHandler fetchChatNotificationStatusForConversation:completion:] */

void FUN_1065975d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be10a20(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065976d0; end: 106597723;  */

void FUN_1065976d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be64280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106597724; end: 106597823; -[SCArroyoMessageActionHandler fetchCallingNotificationStatusForConversation:completion:] */

void FUN_106597724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be10a20(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106597824; end: 106597877;  */

void FUN_106597824(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be64260();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106597878; end: 106597917; -[SCArroyoMessageActionHandler _notificationChatStatusForConversationId:conversation:completion:] */

void FUN_106597878(void)

{
  long lVar1;
  long lVar2;
  long in_x3;
  long in_x4;
  code *pcVar3;
  
  if (in_x3 == 0) {
    pcVar3 = *(code **)(in_x4 + 0x10);
    _objc_retain(in_x4);
    (*pcVar3)(in_x4,0,0);
  }
  else {
    _objc_retain(in_x4);
    func_0x00010bf370e0(in_x3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = in_x3;
    func_0x00010bf69d60();
    lVar2 = in_x3;
    func_0x00010c26b2e0(in_x3);
    (**(code **)(in_x4 + 0x10))(in_x4,lVar1 != 1,lVar2);
    _objc_release(in_x4);
    in_x4 = in_x3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 106597918; end: 1065979b7; -[SCArroyoMessageActionHandler _notificationCallingStatusForConversationId:conversation:completion:] */

void FUN_106597918(void)

{
  long lVar1;
  long lVar2;
  long in_x3;
  long in_x4;
  code *pcVar3;
  
  if (in_x3 == 0) {
    pcVar3 = *(code **)(in_x4 + 0x10);
    _objc_retain(in_x4);
    (*pcVar3)(in_x4,1,0);
  }
  else {
    _objc_retain(in_x4);
    func_0x00010bf28800(in_x3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = in_x3;
    func_0x00010bf69d60();
    lVar2 = in_x3;
    func_0x00010c26b2e0(in_x3);
    (**(code **)(in_x4 + 0x10))(in_x4,lVar1 != 1,lVar2);
    _objc_release(in_x4);
    in_x4 = in_x3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 1065979b8; end: 106597ac3; -[SCArroyoMessageActionHandler loadMoreMessagesForConversationId:sinceMessageId:retryIfFailed:] */

void FUN_1065979b8(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c077ca0();
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar1 == 0) {
    if (param_4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar2 = param_4;
      func_0x00010c067ec0(param_4);
      func_0x00010c0df760(puVar5,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126cba50;
    _objc_alloc(PTR_PTR_1126cba50);
    func_0x00010c005440();
    _objc_release(param_3);
  }
  else {
    puVar3 = PTR_PTR_1126cba48;
    _objc_alloc(PTR_PTR_1126cba48);
    func_0x00010c004ec0();
    puVar5 = param_3;
  }
  _objc_release(puVar5);
  func_0x00010bfd0a00(*(undefined8 *)(param_1 + 0x58),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106597ac4; end: 106597c13; -[SCArroyoMessageActionHandler loadStoryReplyForConversationId:replyMedia:messageId:isGroupConversation:requestContext:requestSource:] */

void FUN_106597ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_78,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uStack_70 = param_7;
  uStack_68 = param_8;
  uStack_60 = param_6;
  func_0x00010bfa89a0(param_1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106597c14; end: 106597c7f;  */

void FUN_106597c14(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05fa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106597c80; end: 106597eb3; -[SCArroyoMessageActionHandler modifyMessageRetentionPolicyForConversationId:retentionMode:source:completion:] */

void FUN_106597c80(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uStack_80 = 2;
  if (param_5 != 1) {
    uStack_80 = 0;
  }
  lVar1 = param_1;
  func_0x00010c0d58a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar7);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106597eb4;
  puStack_b8 = &UNK_1108a8a18;
  lStack_88 = param_4;
  _objc_retain(param_3);
  uStack_b0 = param_3;
  uStack_a8 = uVar6;
  uStack_a0 = uVar7;
  lStack_98 = lVar1;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  ppuVar2 = &puStack_d0;
  _objc_retainBlock(ppuVar2);
  puStack_108 = puVar4;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1065981fc;
  puStack_f0 = &UNK_110894fc8;
  uStack_e8 = param_3;
  uStack_e0 = param_6;
  lStack_d8 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_3);
  ppuVar3 = &puStack_108;
  _objc_retainBlock(ppuVar3);
  puVar4 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  func_0x00010c04f4c0();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (4 < param_4 - 1U) {
    param_4 = 0;
  }
  func_0x00010c284a20(param_1,param_2,puVar5,param_4,param_5,puVar4);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uStack_b0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(lVar1);
  return;
}



/* Entry: 106597eb4; end: 106597feb;  */

void FUN_106597eb4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ba338;
  _objc_alloc(PTR_PTR_1126ba338);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  func_0x00010c04f540(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5f00(uVar5);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
  }
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar6);
  return;
}



/* Entry: 106597fec; end: 10659805b;  */

void FUN_106597fec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_10659805c(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ec0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10659805c; end: 1065981b7;  */

void FUN_10659805c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf509a0();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    lVar1 = lVar4;
    func_0x00010c0f4a60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    if (lVar2 != 1) {
      lVar2 = lVar1;
      func_0x00010c071ae0();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        lVar1 = param_1;
        func_0x00010c0f4aa0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar1);
      }
      lVar1 = lVar3;
      func_0x00010c0f4a60(lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = lVar1;
    func_0x00010c272380(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  else {
    lVar4 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1065981b8; end: 1065981fb;  */

void FUN_1065981b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065981fc; end: 10659821f;  */

void FUN_1065981fc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = 5;
    if (param_2 != 1) {
      uVar1 = 0xc;
    }
                    /* WARNING: Could not recover jumptable at 0x000106598218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  return;
}



/* Entry: 106598220; end: 1065983fb; -[SCArroyoMessageActionHandler modifyCustomNotificationSoundForConversationId:soundId:completion:] */

void FUN_106598220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar2 = &puStack_d0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1065983fc;
  puStack_80 = &UNK_11084a9e8;
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_5);
  ppuVar1 = &puStack_98;
  uStack_68 = param_5;
  _objc_retainBlock(ppuVar1);
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106598414;
  puStack_b8 = &UNK_110875d70;
  uStack_b0 = param_4;
  uStack_a8 = param_3;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_d0);
  puVar3 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  func_0x00010c04f4c0();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284d40(param_1,param_2,puVar4,param_4,puVar3);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1065983fc; end: 10659842b;  */

void FUN_1065983fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010659840c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10659842c; end: 106598607; -[SCArroyoMessageActionHandler modifyCustomRingtoneSoundForConversationId:soundId:completion:] */

void FUN_10659842c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar2 = &puStack_d0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106598608;
  puStack_80 = &UNK_11084a9e8;
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_5);
  ppuVar1 = &puStack_98;
  uStack_68 = param_5;
  _objc_retainBlock(ppuVar1);
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106598620;
  puStack_b8 = &UNK_110875d70;
  uStack_b0 = param_4;
  uStack_a8 = param_3;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_d0);
  puVar3 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  func_0x00010c04f4c0();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284d60(param_1,param_2,puVar4,param_4,puVar3);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106598608; end: 106598637;  */

void FUN_106598608(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106598618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 106598638; end: 1065987e3; -[SCArroyoMessageActionHandler modifyCustomColorForConversationId:colorOption:completion:] */

void FUN_106598638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  ppuVar2 = &puStack_d0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1065987e4;
  puStack_80 = &UNK_1108ecac0;
  uStack_68 = (int)param_4;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_5);
  ppuVar1 = &puStack_98;
  uStack_70 = param_5;
  _objc_retainBlock(ppuVar1);
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1065987fc;
  puStack_b8 = &UNK_11092cad8;
  uStack_b0 = param_3;
  uStack_a8 = param_5;
  uStack_a0 = (int)param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_d0);
  puVar3 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  func_0x00010c04f4c0();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284680(param_1,param_2,puVar4,param_4,puVar3);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1065987e4; end: 106598813;  */

void FUN_1065987e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001065987f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 106598814; end: 1065989bf; -[SCArroyoMessageActionHandler modifyStreakReminderEnabledForConversationId:enabled:completion:] */

void FUN_106598814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  ppuVar2 = &puStack_d0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1065989c0;
  puStack_80 = &UNK_1108523f8;
  uStack_68 = (char)param_4;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_5);
  ppuVar1 = &puStack_98;
  uStack_70 = param_5;
  _objc_retainBlock(ppuVar1);
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1065989d8;
  puStack_b8 = &UNK_11092cb08;
  uStack_b0 = param_3;
  uStack_a8 = param_5;
  uStack_a0 = (char)param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_d0);
  puVar3 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  func_0x00010c04f4c0();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a740(param_1,param_2,puVar4,param_4,puVar3);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1065989c0; end: 1065989ef;  */

void FUN_1065989c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001065989d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 1065989f0; end: 106598a9f; -[SCArroyoMessageActionHandler resetStatesInConversation:isFromBackground:] */

void FUN_1065989f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = puVar1;
  func_0x00010c139760(param_1,param_2,puVar1,param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  uVar2 = *(undefined8 *)(puVar1 + 0x40);
  func_0x00010bf500c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010bf4b900(puVar6,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  if ((int)puVar4 != 0) {
    uVar5 = *(undefined8 *)(puVar1 + 0x40);
    *(undefined8 *)(puVar1 + 0x40) = 0;
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(puVar1 + 0x68);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3360();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106598aa0; end: 106598b6b; -[SCArroyoMessageActionHandler resetStatesInConversations:isFromBackground:] */

void FUN_106598aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf500c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3360();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106598b6c; end: 106598c43; -[SCArroyoMessageActionHandler retryAllFailedMessagesInConversationId:] */

void FUN_106598b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfa5f20(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106598c44; end: 106598d8f;  */

/* WARNING: Possible PIC construction at 0x000106598d14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106598d18) */

void FUN_106598c44(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    func_0x00010c0cbb80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar5 = *(undefined8 *)(lVar6 * 8);
        uVar3 = uVar5;
        func_0x00010bf9fe80();
        if ((int)uVar3 != 0) {
          _objc_loadWeakRetained(param_1 + 0x28);
          func_0x00010bf490e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          goto code_r0x00010be96e60;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010be96e60:
                    /* WARNING: Could not recover jumptable at 0x00010be96e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106598d90; end: 106598d9f; -[SCArroyoMessageActionHandler retryFailedMessageInConversationId:messageId:] */

void FUN_106598d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be96e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__retryFailedBlockMessageId_forCo_112583538,param_4,param_3);
  return;
}



/* Entry: 106598da0; end: 106598f7b; -[SCArroyoMessageActionHandler _retryFailedBlockMessageId:forConversationId:] */

void FUN_106598da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ba510;
  _objc_alloc(PTR_PTR_1126ba510);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c04f4c0(puVar1);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0(param_3);
    func_0x00010bfa8940(param_1);
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106598f7c; end: 1065990cf;  */

void FUN_106598f7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126be750;
  _objc_alloc(PTR_PTR_1126be750);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1065990d0;
  puStack_60 = &UNK_110842e18;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  puStack_a0 = puVar2;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1065990d8;
  puStack_88 = &UNK_110855e40;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar5;
  _objc_retain(uVar6);
  uStack_80 = uVar6;
  func_0x00010c04f4e0(puVar1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_11092cb38,&puStack_a0)
  ;
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0d58a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b4ca0(uVar5);
  func_0x00010c13f980(lVar4,param_2,puVar2,uVar5,puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  return;
}



/* Entry: 1065990d0; end: 1065990df;  */

void FUN_1065990d0(void)

{
  return;
}



/* Entry: 1065990e0; end: 106599267; -[SCArroyoMessageActionHandler cancelSendMessageForConversationId:messageId:] */

void FUN_1065990e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106599268;
  puStack_68 = &UNK_110841f80;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10659926c;
  puStack_98 = &UNK_1108529c0;
  uStack_58 = param_4;
  _objc_retain(param_3);
  uStack_90 = param_3;
  _objc_retain(param_4);
  uStack_88 = param_4;
  func_0x00010c04f4c0(puVar1,param_2,&puStack_80,&puStack_b0);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0b4ca0(param_4);
    func_0x00010bf2e780(param_1,param_2,puVar2,uVar3,puVar1);
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106599268; end: 10659926f;  */

void FUN_106599268(void)

{
  return;
}



/* Entry: 106599270; end: 1065993b3; -[SCArroyoMessageActionHandler sendSaveToCameraRollMessageInConversation:messageId:messageSender:mediaList:] */

void FUN_106599270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be10a20(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065993b4; end: 106599413;  */

void FUN_1065993b4(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea0060();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106599414; end: 106599543; -[SCArroyoMessageActionHandler _sendSaveToCameraRollMessageInConversation:messageId:messageSender:mediaList:] */

void FUN_106599414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000108606200(param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x000100504554(param_6,&PTR___NSConcreteGlobalBlock_11092cba8);
  _objc_release(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c272380(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c820(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106599544; end: 106599573;  */

void FUN_106599544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c6c20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



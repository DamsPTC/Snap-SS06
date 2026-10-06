/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106599574; end: 1065996e7; -[SCArroyoMessageActionHandler saveMessageInConversationId:messageId:source:completion:] */

void FUN_106599574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0(param_4);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  _objc_retain(param_6);
  func_0x00010bfa8960(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065996e8; end: 106599953;  */

void FUN_1065996e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (((lVar1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106599954;
    puStack_a8 = &UNK_11092cbc8;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = uVar6;
    _objc_retain(uVar7);
    uStack_98 = uVar7;
    _objc_retain(param_3);
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    lStack_90 = param_3;
    lStack_88 = lVar1;
    _objc_retain(uVar6);
    ppuVar2 = &puStack_c0;
    uStack_80 = uVar6;
    _objc_retainBlock();
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1065999c8;
    puStack_d0 = &UNK_110852668;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    ppuVar3 = &puStack_e8;
    uStack_c8 = uVar6;
    _objc_retainBlock(ppuVar3);
    puVar4 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedb9c0(lVar1);
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(lVar1 + 0x50);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    FUN_10659286c(param_2,*(undefined8 *)(lVar1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf509a0(param_2);
    func_0x00010be5ff20(lVar1);
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c272380(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d940(param_3);
    func_0x00010c0a2dc0(uVar6);
    _objc_release(uVar7);
    _objc_release(lVar5);
    _objc_release(uVar6);
    _objc_release(ppuVar3);
    _objc_release(uStack_c8);
    _objc_release(ppuVar2);
    _objc_release(uStack_80);
    _objc_release(lStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106599954; end: 1065999c7;  */

void FUN_106599954(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cba58;
  func_0x00010c14be60(PTR_PTR_1126cba58,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xe0));
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065999c8; end: 1065999db;  */

void FUN_1065999c8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001065999d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1065999dc; end: 1065999e3; -[SCArroyoMessageActionHandler saveMessageInConversationId:messageId:source:] */

void FUN_1065999dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_saveMessageInConversationId_mess_112630498);
  return;
}



/* Entry: 1065999e4; end: 106599b27; -[SCArroyoMessageActionHandler unsaveMessageInConversationId:messageId:source:] */

void FUN_1065999e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0(param_4);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010bfa8960(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106599b28; end: 106599cff;  */

void FUN_106599b28(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar2 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    _objc_retain(param_3);
    func_0x00010bedb9c0(lVar2);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(lVar2 + 0x50);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    FUN_10659286c(param_2,*(undefined8 *)(lVar2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf509a0(param_2);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    func_0x00010c272380(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d940(param_3);
    func_0x00010c0a2e20(uVar4);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_release(uVar7);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106599d00; end: 106599d53;  */

void FUN_106599d00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cba58;
  func_0x00010c282540(PTR_PTR_1126cba58,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xe0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106599d54; end: 106599d57; -[SCArroyoMessageActionHandler makeLocalConversationShowOnFeedIfNecessary:] */

void FUN_106599d54(void)

{
  return;
}



/* Entry: 106599d58; end: 106599d67; -[SCArroyoMessageActionHandler updateMediaStateForConversationId:messageId:mediaLoadState:] */

void FUN_106599d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedb5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateMediaLoadState_forMessage_112594710,param_5,param_4,param_3);
  return;
}



/* Entry: 106599d68; end: 106599f7f; -[SCArroyoMessageActionHandler updateConversationSnapPostOpenViewingPolicy:newPolicy:source:completion:] */

void FUN_106599d68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  lVar1 = param_1;
  func_0x00010c0d58a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106599f80;
  puStack_b8 = &UNK_1108a8a18;
  uStack_88 = param_4;
  _objc_retain(param_3);
  uStack_b0 = param_3;
  uStack_a8 = uVar7;
  uStack_a0 = uVar6;
  lStack_98 = lVar1;
  uStack_80 = param_5;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_retain(uVar6);
  ppuVar2 = &puStack_d0;
  _objc_retainBlock(ppuVar2);
  puStack_108 = puVar4;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10659a17c;
  puStack_f0 = &UNK_110894fc8;
  uStack_e8 = param_3;
  uStack_e0 = param_6;
  uStack_d8 = param_4;
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
  func_0x00010c205060(param_1,param_2,puVar5,param_4,puVar4);
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
  _objc_release(lVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 106599f80; end: 10659a0b7;  */

void FUN_106599f80(long param_1)

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



/* Entry: 10659a0b8; end: 10659a12f;  */

void FUN_10659a0b8(long param_1,undefined8 param_2)

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



/* Entry: 10659a130; end: 10659a17b;  */

void FUN_10659a130(long param_1)

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



/* Entry: 10659a17c; end: 10659a19f;  */

void FUN_10659a17c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = 5;
    if (param_2 != 1) {
      uVar1 = 0xc;
    }
                    /* WARNING: Could not recover jumptable at 0x00010659a198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  return;
}



/* Entry: 10659a1a0; end: 10659a24b; -[SCArroyoMessageActionHandler _updateMediaLoadState:forMessageId:conversationId:] */

void FUN_10659a1a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 < 2) {
    if (param_3 == -1) {
      func_0x00010be5d820(param_1,param_2,param_5,param_4);
LAB_10659a214:
      uVar1 = 2;
    }
    else {
      if (param_3 != 1) goto LAB_10659a230;
      uVar1 = 0;
    }
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 3) goto LAB_10659a230;
      goto LAB_10659a214;
    }
    uVar1 = 1;
  }
  func_0x00010bed7220(param_1,param_2,uVar1,param_4,param_5);
LAB_10659a230:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10659a24c; end: 10659a2c3; -[SCArroyoMessageActionHandler _updateDownloadStatus:forMessageId:conversationId:] */

void FUN_10659a24c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a0c0();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10659a2c4; end: 10659a337; -[SCArroyoMessageActionHandler _markSnapAsInvalidForConversationId:messageId:] */

void FUN_10659a2c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 10659a338; end: 10659a483; -[SCArroyoMessageActionHandler logMediaViewWithConversationId:messageId:isGroupConversation:mediaViewInfo:] */

void FUN_10659a338(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0(param_4);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_5;
  _objc_retain(param_6);
  func_0x00010bfa8960(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659a484; end: 10659a4f3;  */

void FUN_10659a484(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55c00();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10659a4f4; end: 10659a683; -[SCArroyoMessageActionHandler _logMediaViewWithConversation:message:isGroupConversation:mediaViewInfo:] */

void FUN_10659a4f4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e54978;
  }
  else {
    if (param_4 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c272380(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131540(param_4);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      FUN_10659286c(param_3,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bf43000(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c13e040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1218e0();
      func_0x00010c0aa1c0(uVar1);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(uVar1);
      goto LAB_10659a650;
    }
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e54998;
  }
  func_0x0001070a4fd8(uVar1,ppuVar5,1);
LAB_10659a650:
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10659a684; end: 10659a863; -[SCArroyoMessageActionHandler _logMessageEraseMetrics:conversation:source:] */

void FUN_10659a684(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf509a0();
  if (lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2d80();
    _objc_release(uVar2);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_4;
    FUN_10659286c(param_4,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_4);
    _objc_retain(param_3);
    uStack_60 = param_5;
    func_0x00010c2448c0(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659a864; end: 10659a8f3;  */

void FUN_10659a864(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((param_2 != 0) && (param_3 == 0)) && (param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2d80();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10659a8f4; end: 10659aa43; -[SCArroyoMessageActionHandler _fetchConversationMetadata:completion:] */

void FUN_10659a8f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10659aa44;
    puStack_58 = &UNK_110875d40;
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    _objc_retainBlock();
    puVar2 = PTR_PTR_1126ba338;
    _objc_alloc(PTR_PTR_1126ba338);
    func_0x00010c04f540();
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,0);
    }
    else {
      func_0x00010c0d58a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa5f00();
      _objc_release(param_1);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659aa44; end: 10659aa53;  */

void FUN_10659aa44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010659aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10659aa54; end: 10659aae3; -[SCArroyoMessageActionHandler _messageRetentionInMinutesForConversation:] */

long FUN_10659aa54(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf509a0();
  lVar2 = param_3;
  func_0x00010c13e040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  if (lVar1 == 1) {
    func_0x00010c281ee0();
  }
  else {
    func_0x00010c1218e0(lVar2);
  }
  _objc_release(lVar2);
  return lVar3 / 0x3c;
}



/* Entry: 10659aae4; end: 10659aae7; -[SCArroyoMessageActionHandler invalidateMediaForConversationId:mediaId:forMessageId:] */

void FUN_10659aae4(void)

{
  return;
}



/* Entry: 10659aae8; end: 10659ad5f; -[SCArroyoMessageActionHandler clearConversationId:correspondentId:mischiefId:source:successBlock:failureBlock:] */

void FUN_10659aae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8);
    }
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    puVar2 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    _objc_retain(param_3);
    _objc_retain(param_7);
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(puVar1);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uStack_88 = param_6;
    _objc_retain(param_3);
    _objc_retain(param_8);
    func_0x00010c04f4c0(puVar2);
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3af80();
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(param_8);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_90);
    _objc_release(param_7);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659ad60; end: 10659adab;  */

void FUN_10659ad60(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  }
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be683a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10659adac; end: 10659adbf;  */

void FUN_10659adac(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010659adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10659adc0; end: 10659af73; -[SCArroyoMessageActionHandler _onClearConversationSuccessWithConversationUUID:correspondentId:mischiefId:source:] */

void FUN_10659adc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ba338;
  _objc_alloc(PTR_PTR_1126ba338);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_70 = param_6;
  _objc_retain(param_3);
  func_0x00010c04f540(puVar1);
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5f00();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659af74; end: 10659afcb;  */

void FUN_10659af74(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be51b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10659afcc; end: 10659afcf;  */

void FUN_10659afcc(void)

{
  return;
}



/* Entry: 10659afd0; end: 10659b19f; -[SCArroyoMessageActionHandler _logClearConversationMetric:correspondentId:mischiefId:source:] */

void FUN_10659afd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 < 4) {
    uVar7 = *(undefined8 *)(&UNK_10dddcc78 + param_6 * 8);
  }
  else {
    uVar7 = 3;
  }
  lVar1 = param_3;
  func_0x00010bf50900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3060(uVar6,param_2,param_4,param_5,uVar7,lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(uVar6);
  lVar1 = param_3;
  func_0x00010bf508e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2950;
  func_0x00010bf3af60(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  if ((lVar1 == 0) || (lVar3 = lVar1, func_0x00010c067ec0(), (int)lVar3 != 0)) {
    lVar3 = lVar1;
    func_0x00010c067ec0();
    if ((int)lVar3 == 1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e549f8;
    }
    else {
      lVar3 = lVar1;
      func_0x00010c067ec0();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e54a18;
      if ((int)lVar3 != 2) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110dabe78;
      }
    }
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e549d8;
  }
  _objc_release(lVar1);
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e549b8,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10659b1a0; end: 10659b393; -[SCArroyoMessageActionHandler sendTypingNotification:typingActivityType:successBlock:failureBlock:] */

void FUN_10659b1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
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
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
  }
  else {
    puVar3 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10659b394;
    puStack_80 = &UNK_11084a9e8;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_5);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10659b3a0;
    puStack_b8 = &UNK_110875d70;
    uStack_68 = param_5;
    _objc_retain(param_3);
    uStack_b0 = param_3;
    _objc_retain(param_4);
    uStack_a8 = param_4;
    _objc_retain(param_6);
    lStack_a0 = param_6;
    func_0x00010c04f4c0(puVar3,param_2,&puStack_98,&puStack_d0);
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c067ec0(param_4);
    func_0x00010c15d800(param_1,param_2,puVar2,(long)(int)uVar4,puVar3);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(lStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
  }
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659b394; end: 10659b3ab;  */

void FUN_10659b394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010659b39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 10659b3ac; end: 10659b513; -[SCArroyoMessageActionHandler .cxx_destruct] */

void FUN_10659b3ac(long param_1)

{
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



/* Entry: 10659b514; end: 10659b60f; -[SCArroyoPrefetchableMessagesFetcher initWithNativeSessionManager:messagingExperimentService:] */

undefined8 *
FUN_10659b514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1d68;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10659b610; end: 10659b66b;  */

void FUN_10659b610(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c2680();
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10659b66c; end: 10659b673; -[SCArroyoPrefetchableMessagesFetcher nativeConversationManager] */

void FUN_10659b66c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc7e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getNativeConversationManagerOrNi_1125cf930);
  return;
}



/* Entry: 10659b674; end: 10659b843; -[SCArroyoPrefetchableMessagesFetcher fetchPrefetchableMessagesForConversationIds:completion:] */

void FUN_10659b674(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0d58a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,PTR____NSArray0__struct_11034ab48);
  }
  else {
    puVar2 = PTR_PTR_1126ba520;
    _objc_alloc(PTR_PTR_1126ba520);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c04f540(puVar2);
    uVar3 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11092cd18);
    puVar4 = PTR_PTR_1126cba60;
    _objc_alloc(PTR_PTR_1126cba60);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c04e3e0(puVar4);
    _objc_release(uVar5);
    func_0x00010bfa95c0(lVar1);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659b844; end: 10659b863;  */

void FUN_10659b844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010659b84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10659b864; end: 10659b893; -[SCArroyoPrefetchableMessagesFetcher .cxx_destruct] */

void FUN_10659b864(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10659b894; end: 10659ba2f; -[SCChatReactionHandler initWithNativeMessagingSessionManager:conversationDataFetcher:chatLogger:snapchatterPublicInfoFetcher:userId:sponsoredSnapAdResponseParser:] */

undefined1 *
FUN_10659b894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f1d70;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10659ba30; end: 10659ba77; -[SCChatReactionHandler _nativeConversationManager] */

void FUN_10659ba30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
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



/* Entry: 10659ba78; end: 10659bc33; -[SCChatReactionHandler reactToMessageInConversationId:messageId:reactionContent:reactionSource:reactionSendSource:source:completionHandler:] */

void FUN_10659ba78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0(param_4);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_88,auStack_68);
  uStack_80 = param_6;
  uStack_78 = param_7;
  uStack_70 = param_8;
  _objc_retain(param_9);
  func_0x00010bfa8960(uVar2);
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659bc34; end: 10659bce7;  */

void FUN_10659bc34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00010c120b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be860a0();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10659bce8; end: 10659c21b; -[SCChatReactionHandler _reactToMessage:reactionId:reactionContent:conversation:reactionSource:reactionSendSource:source:completion:] */

void FUN_10659bce8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lStack_120;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf6e760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0cb5a0();
    lVar3 = lVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_80,param_1);
    puVar4 = PTR_PTR_1126b2730;
    _objc_alloc();
    _objc_retain(lVar3);
    lStack_90 = lVar2;
    _objc_retain(param_4);
    _objc_copyWeak(auStack_98,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_6);
    uStack_88 = param_9;
    _objc_retain(param_10);
    _objc_retain(lVar3);
    _objc_retain(param_10);
    func_0x00010c04f4c0();
    lVar2 = param_6;
    func_0x000108606200(param_6,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_6;
    func_0x00010c06e040();
    lStack_120 = lVar2;
    if ((int)lVar5 != 0) {
      lVar5 = param_6;
      func_0x00010bf50900();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf2c1e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bef4a80();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_6;
        func_0x00010bf50900(param_6);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf2c1e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bef4a80();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0f3e20(uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(uVar9);
        uVar9 = uVar10;
        func_0x00010bef2c20(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c15ed20(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar10;
        func_0x00010c099300(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108607094(lVar2,uVar9,uVar11,uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar9);
        _objc_release(uVar10);
      }
    }
    puVar13 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar14 = puVar13;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010c2b68c0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010c2b68a0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    func_0x00010be61f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar18;
    func_0x00010bf21f60(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c120940(param_1);
    _objc_release(puVar13);
    _objc_release(param_1);
    _objc_release(puVar18);
    _objc_release(lStack_120);
    _objc_release(puVar4);
    _objc_release(param_10);
    _objc_release(lVar3);
    _objc_release(param_10);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_98);
    _objc_release(param_4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_80);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659c21c; end: 10659c283;  */

void FUN_10659c21c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be2ee20();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010659c274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 10659c284; end: 10659c2a3;  */

void FUN_10659c284(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = 0;
    if (param_2 != 6) {
      uVar1 = 0xc;
    }
                    /* WARNING: Could not recover jumptable at 0x00010659c29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  return;
}



/* Entry: 10659c2a4; end: 10659c41f; -[SCChatReactionHandler removeReactionToMessageInConversationId:messageId:reactionContent:source:] */

void FUN_10659c2a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0(param_4);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_6;
  func_0x00010bfa8960(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659c420; end: 10659c4bf;  */

void FUN_10659c420(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c120b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be8cfc0();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10659c4c0; end: 10659c713; -[SCChatReactionHandler _removeReactionToMessage:reactionId:conversation:source:reactionContent:] */

void FUN_10659c4c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf6e760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0cb5a0();
    lVar3 = lVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_80,param_1);
    puVar4 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    _objc_retain(lVar3);
    lStack_90 = lVar2;
    _objc_copyWeak(auStack_98,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_4);
    uStack_88 = param_6;
    _objc_retain(lVar3);
    func_0x00010c04f4c0(puVar4);
    func_0x00010be61f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12de80();
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_98);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_80);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659c714; end: 10659c753;  */

void FUN_10659c714(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ee20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10659c754; end: 10659c757;  */

void FUN_10659c754(void)

{
  return;
}



/* Entry: 10659c758; end: 10659c9e7; -[SCChatReactionHandler _handleRemoveReactionSuccessForMessage:conversation:reactionId:eraseType:source:] */

void FUN_10659c758(long param_1,undefined1 *param_2,undefined *param_3,long param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf509a0();
  lVar2 = param_1;
  puVar8 = param_5;
  func_0x00010be21ec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    if (lVar1 == 1) {
      puVar8 = param_3;
      func_0x00010be57a60(param_1);
    }
    else {
      _objc_initWeak(auStack_78,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
      func_0x00010c15de20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar5;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c11de00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_3);
      _objc_retain(lVar2);
      param_2 = auStack_78;
      _objc_copyWeak(auStack_90);
      puVar8 = puVar6;
      uStack_88 = param_6;
      uStack_80 = param_7;
      func_0x00010c09d7c0(uVar3);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_90);
      _objc_release(lVar2);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar8 == (undefined *)0x0) && (param_2 != (undefined1 *)0x0)) {
    param_3 = param_3 + 0x38;
    _objc_loadWeakRetained(param_3);
    func_0x00010be57a60();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10659c9e8; end: 10659ca57;  */

void FUN_10659c9e8(long param_1,long param_2,long param_3)

{
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (param_2 != 0)) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be57a60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10659ca58; end: 10659cb07; -[SCChatReactionHandler _logRemoveReactionFromMessage:reaction:isGroupConversation:recipient:eraseType:source:] */

void FUN_10659ca58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2d80();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10659cb08; end: 10659cc9b; -[SCChatReactionHandler _getReactionWithId:message:] */

void FUN_10659cb08(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar8 = 0;
  if (lVar3 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(ulong *)(lVar9 * 8);
        uVar4 = uVar8;
        func_0x00010c1209e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c120b60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c071f40();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((uVar6 & 1) != 0) {
          func_0x00010c1209e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10659cc4c;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar8 = 0;
  }
LAB_10659cc4c:
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x38,0);
    _objc_storeStrong(param_3 + 0x30,0);
    _objc_storeStrong(param_3 + 0x28,0);
    _objc_storeStrong(param_3 + 0x20,0);
    _objc_storeStrong(param_3 + 0x18,0);
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 10659cc9c; end: 10659cd07; -[SCChatReactionHandler .cxx_destruct] */

void FUN_10659cc9c(long param_1)

{
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



/* Entry: 10659cd08; end: 10659cdd3; -[SCConversationUpdatesPublisher initWithActionHandler:updaterEventPublisher:conversationIdResolver:] */

undefined1 *
FUN_10659cd08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f1d78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10659cdd4; end: 10659cf2f; -[SCConversationUpdatesPublisher fetchAndObserveConversationForChatIdentifier:] */

void FUN_10659cdd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010bfb26a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10659cf30; end: 10659cf67;  */

bool FUN_10659cf30(undefined8 param_1,long param_2)

{
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 10659cf68; end: 10659cfeb;  */

void FUN_10659cf68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = param_1;
  func_0x00010bfa4cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10659cfec; end: 10659d167; -[SCConversationUpdatesPublisher fetchAndObserveConversation:] */

void FUN_10659cfec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar4);
    puVar1 = PTR_PTR_1126ae6b8;
    _objc_retain(param_3);
    _objc_retain(uVar4);
    func_0x00010bf54280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285a00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae6b8;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(uVar4);
    _objc_release(uVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(param_2);
    func_0x00010bfa5f80(uVar4);
    puVar5 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10659d168; end: 10659d21b;  */

void FUN_10659d168(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfa5f80(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10659d21c; end: 10659d307;  */

void FUN_10659d21c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 == 1)) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar1 = PTR_PTR_1126ba450;
    _objc_alloc(PTR_PTR_1126ba450);
    lVar2 = param_2;
    func_0x00010bf500c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf500c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004c40(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10659d308; end: 10659d44b; -[SCConversationUpdatesPublisher updateEventsForConversation:] */

void FUN_10659d308(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf509e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10659d3e4;
    puStack_40 = &UNK_11085e8a8;
    _objc_retain(param_3);
    uVar3 = uVar2;
    lStack_38 = param_3;
    func_0x00010bfad7a0(uVar2,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10659d44c; end: 10659d5fb; -[SCConversationUpdatesPublisher fetchAndObserveMessage:conversationId:] */

void FUN_10659d44c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar4);
    puVar1 = PTR_PTR_1126ae6b8;
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar4);
    func_0x00010bf54280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285a40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae6b8;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(uVar4);
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(param_2);
    func_0x00010bfa89a0(uVar4);
    puVar5 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10659d5fc; end: 10659d6b7;  */

void FUN_10659d5fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfa89a0(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10659d6b8; end: 10659d71b;  */

/* WARNING: Possible PIC construction at 0x00010659d6f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010659d6fc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10659d6b8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    func_0x00010c28d700(PTR_PTR_1126cba68,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10659d71c; end: 10659d7e7; -[SCConversationUpdatesPublisher updateEventsForMessage:conversationId:] */

void FUN_10659d71c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x00010c285a00(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10659d7e8;
    puStack_40 = &UNK_11092ce18;
    _objc_retain(param_3);
    uVar1 = param_1;
    lStack_38 = param_3;
    func_0x00010bf43280(param_1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10659d7e8; end: 10659da53;  */

void FUN_10659d7e8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c28d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      func_0x00010bf490e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010c0720c0();
      _objc_release(uVar9);
      if ((uVar4 & 1) != 0) {
        puVar8 = PTR_PTR_1126cba68;
        func_0x00010c28d700(PTR_PTR_1126cba68);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10659da04;
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c12f460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      puVar8 = (undefined *)0x0;
LAB_10659da04:
      _objc_release(lVar2);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_2 + 0x18,0);
      _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0cb5a0(*(undefined8 *)(lVar10 * 8));
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      _objc_release(puVar8);
      if (((ulong)puVar6 & 1) != 0) {
        puVar8 = PTR_PTR_1126cba68;
        func_0x00010c12f340(PTR_PTR_1126cba68);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10659da04;
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10659da54; end: 10659dabf; -[SCConversationUpdatesPublisher .cxx_destruct] */

void FUN_10659da54(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10659dac0; end: 10659dacb; +[SCChatConversationManager dataCoordinatorIdentifier] */

undefined ** FUN_10659dac0(void)

{
  return &PTR____CFConstantStringClassReference_110e54a98;
}



/* Entry: 10659dacc; end: 10659dad3; -[SCChatConversationManager addDataUpdateListener:] */

void FUN_10659dacc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10659dad4; end: 10659dadb; -[SCChatConversationManager removeDataUpdateListener:] */

void FUN_10659dad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10659dadc; end: 10659dc27;  */

void FUN_10659dadc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c1a20(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10659dc28; end: 10659dd2b;  */

void FUN_10659dc28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c5e0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0f5a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c5e0();
  _objc_release(puVar1);
  func_0x00010bf6baa0(PTR_PTR_1126cba90,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10659dd2c; end: 10659dd73;  */

void FUN_10659dd2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fd40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10659dd74; end: 10659dddb;  */

void FUN_10659dd74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cbaa0;
  _objc_alloc(PTR_PTR_1126cbaa0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e2e0(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10659dddc; end: 10659e047; -[SCChatConversationManager _handleSendCompleted:] */

void FUN_10659dddc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252d60();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bf43e60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf50b20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar8 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar1 = param_3;
      func_0x00010bf43e40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar8 = *plStack_120;
        do {
          lVar5 = 0;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(lVar1);
            }
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar7 = *(undefined8 *)(lStack_128 + lVar5 * 8);
            uVar6 = uVar7;
            func_0x00010c0cb5a0(uVar7);
            func_0x00010c0df7c0(puVar4,param_2,uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf50280(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar7;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3,param_2,puVar4,uVar6);
            _objc_release(uVar6);
            _objc_release(uVar7);
            _objc_release(puVar4);
            lVar5 = lVar5 + 1;
          } while (lVar2 != lVar5);
          lVar2 = lVar1;
          func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
        } while (lVar2 != 0);
      }
      _objc_release(lVar1);
      uVar6 = *(undefined8 *)(param_1 + 0x100);
      puVar4 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010c0d9840(uVar6,param_2,puVar4);
      _objc_release(puVar4);
      lVar1 = param_3;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf4dac0();
      _objc_release(lVar1);
      if (lVar2 == 1) {
        uVar6 = *(undefined8 *)(param_1 + 0xf8);
        puVar4 = puVar3;
        func_0x00010bf51e00(puVar3);
        func_0x00010c0d9840(uVar6,param_2,puVar4);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_3 + 0xa8);
  _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10659e048; end: 10659e06f; -[SCChatConversationManager snapCountDownManager] */

void FUN_10659e048(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10659e070; end: 10659e077; -[SCChatConversationManager chatRequestManager] */

void FUN_10659e070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_target_112678178);
  return;
}



/* Entry: 10659e078; end: 10659e12f; -[SCChatConversationManager setActiveConversationById:conversationSource:configuration:metricsTracker:] */

void FUN_10659e078(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf3c120(uVar2);
  func_0x00010bea19c0(param_1,param_2,param_4);
  puVar1 = PTR_PTR_1126cbab0;
  func_0x00010c162680(PTR_PTR_1126cbab0,param_2,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  func_0x00010bfd0a00(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10659e130; end: 10659e173; -[SCChatConversationManager resumeActiveConversationById:] */

void FUN_10659e130(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cbab0;
  func_0x00010c13d200(PTR_PTR_1126cbab0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0a00(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10659e174; end: 10659e1b7; -[SCChatConversationManager suspendActiveConversationById:] */

void FUN_10659e174(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cbab0;
  func_0x00010c2640a0(PTR_PTR_1126cbab0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0a00(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10659e1b8; end: 10659e1bf; -[SCChatConversationManager _setActiveConversationSource:] */

void FUN_10659e1b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10659e1c0; end: 10659e1c7; -[SCChatConversationManager activeConversationSource] */

undefined8 FUN_10659e1c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10659e1c8; end: 10659e247; -[SCChatConversationManager unsetActiveConversationById:] */

void FUN_10659e1c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bea19c0(param_1,param_2,0xffffffffffffffff);
    func_0x00010bf3c120(*(undefined8 *)(param_1 + 0xb0));
    puVar1 = PTR_PTR_1126cbab0;
    func_0x00010c2826c0(PTR_PTR_1126cbab0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bfd0a00(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10659e248; end: 10659e29f; -[SCChatConversationManager setBloopsDataCoordinator:] */

void FUN_10659e248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bef7c60(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10659e2a0; end: 10659e2a3; -[SCChatConversationManager didStartSnapchattersUpdateDataRequest:] */

void FUN_10659e2a0(void)

{
  return;
}



/* Entry: 10659e2a4; end: 10659e337; -[SCChatConversationManager didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10659e2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
  
  if (param_4 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10659e338;
    puStack_20 = &UNK_110866ad0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10659e344;
    puStack_48 = &UNK_110866b00;
    uStack_40 = param_1;
    uStack_18 = param_1;
    func_0x00010c0bc6c0(param_3,param_2,0,0,&puStack_38,0,&puStack_60,0,0,0,0);
  }
  return;
}



/* Entry: 10659e338; end: 10659e34f;  */

void FUN_10659e338(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde01d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearConversationForSnapchatter_112555a10,
             param_2);
  return;
}



/* Entry: 10659e350; end: 10659e523; -[SCChatConversationManager _clearConversationForSnapchatter:] */

void FUN_10659e350(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b01c0;
  lVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_68;
  _objc_copyWeak(auStack_70);
  _objc_retain(param_3);
  func_0x00010bf504e0(uVar1);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar8);
  lVar2 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar6 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    if (puVar7 != (undefined1 *)0x0) {
      uVar5 = *(undefined8 *)(lVar2 + 0x38);
      uVar1 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c2923e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3b000(uVar5);
      _objc_release(uVar1);
    }
    _objc_release(puVar6);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10659e524; end: 10659e5db;  */

void FUN_10659e524(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2923e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3b000(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10659e5dc; end: 10659e603; -[SCChatConversationManager lastSnapConversationIdObservable] */

void FUN_10659e5dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10659e604; end: 10659e62b; -[SCChatConversationManager finishedViewingSnapConversationIdObservable] */

void FUN_10659e604(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10659e62c; end: 10659e653; -[SCChatConversationManager lastSentSnapConversationIdsObservable] */

void FUN_10659e62c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10659e654; end: 10659e67b; -[SCChatConversationManager lastSentMessageConversationIdsObservable] */

void FUN_10659e654(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



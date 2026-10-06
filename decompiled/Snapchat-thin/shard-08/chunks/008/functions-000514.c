/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10659e67c; end: 10659e6a3; -[SCChatConversationManager lastChatViewObservable] */

void FUN_10659e67c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10659e6a4; end: 10659e6cb; -[SCChatConversationManager activeConversationDataCoordinator] */

void FUN_10659e6a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10659e6cc; end: 10659e8c7; -[SCChatConversationManager .cxx_destruct] */

void FUN_10659e6cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x120,0);
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



/* Entry: 10659e8c8; end: 10659e90f; -[SCChatMediaExtensionCacheHandler nativeConversationManager] */

void FUN_10659e8c8(long param_1)

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



/* Entry: 10659e910; end: 10659eb9f; -[SCChatMediaExtensionCacheHandler loadMediaFromExtensionForConversationId:messageId:messageTrackingId:messageBodyType:media:isGroupConversation:fetchArroyoConversation:userInitiated:] */

long FUN_10659e910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8,
                  undefined1 param_9)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_7;
  func_0x00010c0c5180(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b4c0();
  _objc_release(lVar5);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_7;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar5 = 0;
    if (lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010be77880();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_7;
      func_0x00010c0c5180(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c22b9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar4;
      func_0x00010bfacbc0();
      if ((int)lVar5 != 0) {
        _objc_initWeak(auStack_68,param_1);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        _objc_copyWeak(auStack_80,auStack_68);
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        uStack_78 = param_6;
        _objc_retain(param_7);
        _objc_retain(lVar4);
        uStack_6f = param_9;
        uStack_70 = param_8;
        func_0x00010c0f7fc0(uVar6);
        _objc_release(lVar4);
        _objc_release(param_7);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_68);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  else {
    lVar5 = 1;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 10659eba0; end: 10659ebf7;  */

void FUN_10659eba0(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4de80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10659ebf8; end: 10659ef53; -[SCChatMediaExtensionCacheHandler _loadMediaFromExtensionForConversationId:messageId:messageTrackingId:messageBodyType:media:file:isGroupConversation:fetchArroyoConversation:userInitiated:] */

void FUN_10659ebf8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_1;
  func_0x00010beb69a0();
  if (((uVar1 & 1) == 0) && (uVar2 = param_8, func_0x00010bfacbc0(), (int)uVar2 != 0)) {
    if (param_9._1_1_ == '\0') {
      func_0x00010bec03a0(param_1);
    }
    else if (param_3 != 0) {
      _objc_initWeak(auStack_80,param_1);
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_10659ef54;
      puStack_c8 = &UNK_11092cf68;
      _objc_copyWeak(auStack_98,auStack_80);
      _objc_retain(param_3);
      lStack_c0 = param_3;
      _objc_retain(param_4);
      uStack_b8 = param_4;
      _objc_retain(param_5);
      uStack_b0 = param_5;
      uStack_90 = param_6;
      _objc_retain(param_7);
      uStack_a8 = param_7;
      _objc_retain(param_8);
      ppuVar3 = &puStack_e0;
      uStack_a0 = param_8;
      _objc_retainBlock(ppuVar3);
      puStack_140 = puVar5;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_10659f0c8;
      puStack_128 = &UNK_11092cfc8;
      _objc_copyWeak(auStack_f8,auStack_80);
      _objc_retain(param_3);
      lStack_120 = param_3;
      _objc_retain(param_4);
      uStack_118 = param_4;
      _objc_retain(param_5);
      uStack_110 = param_5;
      uStack_f0 = param_6;
      _objc_retain(param_7);
      uStack_108 = param_7;
      _objc_retain(param_8);
      ppuVar4 = &puStack_140;
      uStack_100 = param_8;
      _objc_retainBlock();
      puVar5 = PTR_PTR_1126ba338;
      _objc_alloc(PTR_PTR_1126ba338);
      func_0x00010c04f540();
      puVar6 = PTR_PTR_1126b0cd8;
      func_0x00010bdc35c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 == (undefined *)0x0) {
        (*(code *)ppuVar4[2])(ppuVar4,0);
      }
      else {
        func_0x00010c0d58a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa5f00();
        _objc_release(param_1);
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(ppuVar4);
      _objc_release(uStack_100);
      _objc_release(uStack_108);
      _objc_release(uStack_110);
      _objc_release(uStack_118);
      _objc_release(lStack_120);
      _objc_destroyWeak(auStack_f8);
      _objc_release(ppuVar3);
      _objc_release(uStack_a0);
      _objc_release(uStack_a8);
      _objc_release(uStack_b0);
      _objc_release(uStack_b8);
      _objc_release(lStack_c0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_80);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10659ef54; end: 10659f08f;  */

void FUN_10659ef54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf509a0();
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar7);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10659f090; end: 10659f0c7;  */

void FUN_10659f090(long param_1,undefined8 param_2)

{
  func_0x00010bec03a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x58));
  return;
}



/* Entry: 10659f0c8; end: 10659f1d3;  */

void FUN_10659f0c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10659f1d4;
    puStack_78 = &UNK_11092cf98;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lStack_70 = lVar1;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_68 = uVar3;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = uVar4;
    _objc_retain(uVar3);
    uStack_40 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = uVar3;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = uVar4;
    _objc_retain(uVar3);
    uStack_38 = *(undefined1 *)(param_1 + 0x58);
    uStack_48 = uVar3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_90);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10659f1d4; end: 10659f20f;  */

void FUN_10659f1d4(long param_1,undefined8 param_2)

{
  func_0x00010bec03a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),0);
  return;
}



/* Entry: 10659f210; end: 10659f703; -[SCChatMediaExtensionCacheHandler _startLoadMediaFromExtensionForConversationId:messageId:messageTrackingId:messageBodyType:media:file:isGroupConversation:userInitiated:] */

void FUN_10659f210(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,byte param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  uVar9 = (ulong)param_10;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  lVar1 = param_8;
  func_0x00010c0c5180(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar10);
  _objc_release(lVar1);
  func_0x00010be55600(param_2);
  puVar2 = PTR_PTR_1126b2950;
  func_0x00010bf9d9c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1065a03b4(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar9);
  uVar10 = param_7;
  func_0x00010b62cb88(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar10);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar10);
  lVar1 = param_9;
  func_0x00010c121280();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(lVar1);
  lVar5 = param_8;
  func_0x00010c0c5180(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c52a0(uVar10);
  _objc_release(lVar5);
  _objc_release(uVar10);
  _objc_retain(lVar1);
  lVar5 = param_8;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  if (lVar5 != 0) {
    lVar6 = param_8;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar6 != 0) {
      lVar5 = param_8;
      func_0x00010c086560(param_8);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_8;
      func_0x00010c085300(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c156c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
  }
  lVar5 = param_8;
  func_0x00010c0c5180(param_8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010be1d520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_initWeak(auStack_78,param_2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10659f704;
  puStack_c0 = &UNK_11092d028;
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  _objc_retain(param_8);
  lStack_a8 = param_8;
  uStack_88 = param_1;
  uStack_80 = param_7;
  _objc_retain(lVar6);
  lStack_a0 = lVar6;
  _objc_retain(param_9);
  ppuVar8 = &puStack_d8;
  lStack_98 = param_9;
  _objc_retainBlock();
  if (lVar7 == 0) {
    (*(code *)ppuVar8[2])(ppuVar8,0);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14a260();
    _objc_release(uVar10);
  }
  _objc_release(ppuVar8);
  _objc_release(lStack_98);
  _objc_release(lStack_a0);
  _objc_release(lStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10659f704; end: 10659f847;  */

void FUN_10659f704(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    _objc_copyWeak(auStack_60,param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar7);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = param_2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10659f848; end: 10659f98f;  */

void FUN_10659f848(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be581a0(*(undefined8 *)(param_1 + 0x50),lVar1,param_2,uVar2,
                        *(undefined1 *)(param_1 + 0x60));
    _objc_release(uVar2);
    if (*(char *)(param_1 + 0x60) == '\x01') {
      lVar3 = lVar1 + 0x50;
      _objc_loadWeakRetained(lVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0c5180(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283520(lVar3,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x58),2);
      _objc_release(uVar2);
      _objc_release(lVar3);
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar4 = *(undefined8 *)(lVar1 + 0x40);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010bf1f3c0();
        _objc_release(uVar4);
        if ((int)uVar2 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x38);
          func_0x00010c269d40(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6ce20();
          _objc_release(uVar2);
        }
      }
    }
    func_0x00010bf6bde0(*(undefined8 *)(param_1 + 0x40),param_2,0);
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar4,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10659f990; end: 10659fc73; -[SCChatMediaExtensionCacheHandler _logLoadMessageStartForConversationId:messageTrackingId:messageBodyType:media:isGroupConversation:] */

void FUN_10659f990(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_3,&PTR____CFConstantStringClassReference_110dc4098);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010be77880();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c22b9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_7;
  func_0x00010c0c5180(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be816c0(param_2,param_3,lVar3,lVar4);
  _objc_release(lVar4);
  lVar4 = param_7;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d2280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_7;
  func_0x00010c0c5180(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_7;
  func_0x00010c0c6c20();
  lVar8 = param_7;
  func_0x00010bf8b160(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bf885a0(lVar8);
  lVar9 = lVar5;
  func_0x00010bf24a40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar5 == 0) {
    func_0x00010c1c74c0(param_1,uVar6,param_3,param_5,lVar4,param_4,param_8,param_6,lVar7,lVar9,0,0)
    ;
  }
  else {
    lVar10 = lVar5;
    func_0x00010c158380(lVar5);
    func_0x00010c0df840(puVar11,param_3,lVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar10 = lVar5;
    func_0x00010c1581e0(lVar5);
    func_0x00010c0df840(puVar12,param_3,lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c74c0(param_1,uVar6,param_3,param_5,lVar4,param_4,param_8,param_6,lVar7,lVar9,
                        puVar11,puVar12);
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10659fc74; end: 10659fd1b; -[SCChatMediaExtensionCacheHandler _logSaveToCacheForMediaId:start:success:] */

void FUN_10659fc74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  if (param_5 == 0) {
    uVar1 = 2;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = param_1;
  _objc_retain(param_4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0b0a20(param_1,uVar4,uVar3,param_3,param_4,0xd,uVar1);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10659fd1c; end: 10659fdcb; -[SCChatMediaExtensionCacheHandler _processLoadMessageTimestamps:mediaId:] */

void FUN_10659fd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10659fdcc;
  puStack_48 = &UNK_1108aa310;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0d0480(param_3,param_2,&puStack_60,0);
  func_0x00010bf6bde0(param_3,param_2,0);
  _objc_release(param_3);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 10659fdcc; end: 1065a00e7;  */

undefined8 FUN_10659fdcc(long param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
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
  _objc_retain(param_2);
  lVar11 = param_2;
  func_0x00010c08fa60();
  if (lVar11 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar2 = puVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar12 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar12 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    uVar13 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(puVar3);
    param_3 = &uStack_140;
    puVar2 = puVar3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar11 = *plStack_130;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(puVar3);
          }
          puVar4 = PTR_PTR_1126ba1f0;
          puVar14 = *(undefined **)(lStack_138 + (long)puVar12 * 8);
          _objc_retain(puVar14);
          _objc_opt_class(puVar4);
          puVar5 = puVar14;
          _objc_opt_isKindOfClass(puVar14,puVar4);
          puVar4 = puVar14;
          if (((ulong)puVar5 & 1) == 0) {
            puVar4 = (undefined *)0x0;
          }
          _objc_retain(puVar4);
          _objc_release(puVar14);
          if (puVar4 != (undefined *)0x0) {
            puVar4 = puVar14;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0720c0();
            _objc_release(puVar4);
            puVar4 = PTR_PTR_1126ba1f0;
            if (((ulong)puVar5 & 1) == 0) {
              uVar15 = *(undefined8 *)(param_1 + 0x20);
              _objc_retain(puVar14);
              _objc_retain(uVar15);
              _objc_alloc();
              func_0x00010c2536e0(puVar14);
              func_0x00010c2511a0(puVar14);
              uVar6 = uVar13;
              func_0x00010bf95860(puVar14);
              func_0x00010c270c40(puVar14);
              func_0x00010c13ca20(puVar14);
              _objc_release(puVar14);
              func_0x00010c0296e0(uVar13,uVar6);
              _objc_release(uVar15);
              _objc_release(puVar14);
              puVar14 = puVar4;
            }
            uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b1ae0();
            _objc_release(uVar6);
            _objc_release(puVar14);
          }
          puVar12 = puVar12 + 1;
        } while (puVar2 != puVar12);
        param_3 = &uStack_140;
        puVar2 = puVar3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return 0;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar7 = *(ulong *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf4b4c0();
  if ((uVar9 & 1) == 0) {
    uVar13 = *(undefined8 *)(param_2 + 0x48);
    puVar10 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar13);
    _objc_release(puVar10);
  }
  else {
    uVar13 = 1;
  }
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(param_3);
  return uVar13;
}



/* Entry: 1065a00e8; end: 1065a01ab; -[SCChatMediaExtensionCacheHandler _shouldSkipLoadingMediaFromExtension:] */

undefined8 FUN_1065a00e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b4c0(uVar1,param_2,uVar2);
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar5,param_2,uVar4);
    _objc_release(uVar4);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1065a01ac; end: 1065a01e3; -[SCChatMediaExtensionCacheHandler _prefetchedMediaDirectory] */

void FUN_1065a01ac(void)

{
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010bfef8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a01e4; end: 1065a030f; -[SCChatMediaExtensionCacheHandler _getBoltContentIdForPrefetchedMedia:] */

void FUN_1065a01e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_58;
  
  _objc_retain(param_3);
  func_0x00010be77880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c22b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10f880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = 0;
  puVar5 = puVar6;
  func_0x00010bf6ed40(puVar6,param_2,uVar4,&lStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_58;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar6);
  puVar6 = (undefined *)0x0;
  if (lVar1 == 0) {
    puVar6 = puVar5;
    func_0x00010c0899c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1065a0310; end: 1065a0327; -[SCChatMediaExtensionCacheHandler delegate] */

void FUN_1065a0310(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a0328; end: 1065a03b3; -[SCChatMediaExtensionCacheHandler .cxx_destruct] */

void FUN_1065a0328(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 1065a03b4; end: 1065a03cf;  */

undefined ** FUN_1065a03b4(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de78b8;
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de7898;
  }
  return ppuVar1;
}



/* Entry: 1065a03d0; end: 1065a059b; -[SCChatMediaPrefetcher performPrefetchIfNecessaryForConversationIds:groupIds:notificationOpenConversationId:requestContext:dispatchQueue:completionBlock:] */

void FUN_1065a03d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  uVar3 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1065a059c;
  puStack_78 = &UNK_110858070;
  uStack_70 = param_7;
  uStack_68 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010be72400(param_1,param_2,uVar1,uVar3,param_5,param_6,&puStack_90);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b2cb0;
  func_0x00010c107520(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bef9180(uVar3,param_2,puVar2,uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  func_0x00010bfec320(uVar3,param_2,puVar2,uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 1065a059c; end: 1065a0627;  */

void FUN_1065a059c(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1065a0628;
    puStack_48 = &UNK_11084a9b8;
    _objc_retain(lVar2);
    lStack_40 = lVar2;
    uStack_38 = param_2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(lStack_40);
  }
  return;
}



/* Entry: 1065a0628; end: 1065a063b;  */

void FUN_1065a0628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001065a0638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065a063c; end: 1065a07df; -[SCChatMediaPrefetcher _performPrefetchForConversationIds:groupIds:notificationOpenConversationId:requestContext:completionBlock:] */

void FUN_1065a063c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_7 + 0x10))(param_7,1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uStack_50 = param_6;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_7);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bfa95a0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_58);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a07e0; end: 1065a0857;  */

void FUN_1065a07e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),1);
  }
  else {
    func_0x00010be81da0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065a0858; end: 1065a0b23; -[SCChatMediaPrefetcher _processPrefetchCandidates:groupIds:notificationOpenConversationId:requestContext:completionBlock:] */

void FUN_1065a0858(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c07ea80();
      uVar6 = uVar10;
      func_0x00010bf50280(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(uVar6);
      uVar6 = uVar10;
      func_0x00010bf50280(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar6);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(uVar10);
      uVar6 = uVar10;
      func_0x00010c07bc00();
      if ((int)uVar6 != 0) {
        func_0x00010c07d080();
      }
      _objc_release(uVar10);
      func_0x00010c09b9e0(uVar8);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  (**(code **)(param_7 + 0x10))(param_7,1);
  puVar3 = PTR_PTR_1126b2cb0;
  func_0x00010c107e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be55fc0(param_1);
  puVar4 = PTR_PTR_1126b2cb0;
  func_0x00010c1073c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010be55fc0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c2ac460(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1065a0b24; end: 1065a0bd7; -[SCChatMediaPrefetcher _logMetric:isGroupConversation:count:] */

void FUN_1065a0b24(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dbce78,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065a0bd8; end: 1065a0bdb; -[SCChatMediaPrefetcher loadStartedForMediaContent:] */

void FUN_1065a0bd8(void)

{
  return;
}



/* Entry: 1065a0bdc; end: 1065a0c23; -[SCChatMediaPrefetcher .cxx_destruct] */

void FUN_1065a0bdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065a0c24; end: 1065a0cc7; -[SCChatMessageLoaderFactory initWithActionHandler:messagingExperimentService:] */

undefined1 *
FUN_1065a0c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1d98;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065a0cc8; end: 1065a0cf7; -[SCChatMessageLoaderFactory createMessageLoader] */

void FUN_1065a0cc8(void)

{
  _objc_alloc(PTR_PTR_1126cbab8);
  func_0x00010bff0520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a0cf8; end: 1065a0d27; -[SCChatMessageLoaderFactory .cxx_destruct] */

void FUN_1065a0cf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065a0d28; end: 1065a0df3; -[SCCommunityGroupChatActionHandler initWithNativeSessionManager:userTrackedLogger:currentUserId:] */

undefined1 *
FUN_1065a0d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1da0;
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



/* Entry: 1065a0df4; end: 1065a10af; -[SCCommunityGroupChatActionHandler joinCommunityGroupConversation:communityId:groupChatName:createdTimestampMs:source:completion:] */

void FUN_1065a0df4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_initWeak(auStack_78,param_2);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_80 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_8);
  func_0x00010c04f4c0(puVar1);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cbac0;
  _objc_opt_new(PTR_PTR_1126cbac0);
  func_0x00010c216240();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1855a0(puVar4);
  _objc_release(puVar5);
  func_0x00010c17f780(puVar4);
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c085a40();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1065a10b0; end: 1065a10eb;  */

void FUN_1065a10b0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065a10ec; end: 1065a1103;  */

void FUN_1065a10ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001065a10fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1065a1104; end: 1065a1203; -[SCCommunityGroupChatActionHandler _onJoinCommunityGroupSuccess:communityId:source:completion:] */

void FUN_1065a1104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ba358;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c8600();
  _objc_release(param_3);
  func_0x00010c184460(puVar1);
  func_0x00010c206c40(puVar1);
  func_0x00010c1b00c0(puVar1);
  func_0x00010c17f780(puVar1);
  _objc_release(param_4);
  func_0x00010c1fbb80(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1065a1204; end: 1065a123f; -[SCCommunityGroupChatActionHandler .cxx_destruct] */

void FUN_1065a1204(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065a1240; end: 1065a1393; -[SCConversationParticipantProvider initWithCurrentUserId:conversationDataFetcher:groupsDataTracker:snapchatterObservableRepository:sponsoredSnapAdResponseParser:messagingExperimentService:] */

undefined1 *
FUN_1065a1240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f1da8;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
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



/* Entry: 1065a1394; end: 1065a14eb; -[SCConversationParticipantProvider conversationParticipantsForConversation:] */

void FUN_1065a1394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1065a14ec;
  puStack_70 = &UNK_11084f340;
  uStack_68 = uVar3;
  _objc_retain(param_3);
  uStack_60 = param_3;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  puVar2 = puVar1;
  func_0x00010bfb26a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar1);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065a14ec; end: 1065a15bb;  */

void FUN_1065a14ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bfa5f80(uVar1);
  _objc_release(uVar1);
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



/* Entry: 1065a15bc; end: 1065a15cf;  */

void FUN_1065a15bc(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
    return;
  }
  return;
}



/* Entry: 1065a15d0; end: 1065a1667;  */

void FUN_1065a15d0(long param_1,long param_2)

{
  long lVar1;
  long unaff_x21;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf509a0();
  if (lVar1 == 1) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    unaff_x21 = param_1;
    func_0x00010be707a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 != 0) goto LAB_1065a164c;
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    unaff_x21 = param_1;
    func_0x00010be707c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
LAB_1065a164c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 1065a1668; end: 1065a1bb7; -[SCConversationParticipantProvider _participantsForOneOnOneConversation:] */

void FUN_1065a1668(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar13 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar13);
  uVar16 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar16);
  lVar10 = param_3;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar19 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
LAB_1065a179c:
      _objc_release(lVar10);
      puVar4 = PTR_PTR_1126cbac8;
      _objc_alloc();
      lVar10 = *(long *)(param_1 + 0x30);
      lVar1 = param_3;
      func_0x0001070ba4ac(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = *(long *)(param_1 + 0x28);
      _objc_retain(param_3);
      _objc_retain(lVar20);
      lVar19 = param_3;
      func_0x00010c06e040();
      if ((int)lVar19 == 0) {
        lVar19 = 0;
      }
      else {
        lVar5 = param_3;
        func_0x00010bef4a80();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar5;
        func_0x00010c08fa60();
        if (lVar19 == 0) {
          lVar19 = 0;
        }
        else {
          lVar19 = lVar20;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar19;
          func_0x00010c0f3e20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar19);
          if (lVar6 == 0) {
            lVar19 = 0;
          }
          else {
            lVar19 = lVar6;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(lVar6);
        }
        _objc_release(lVar5);
      }
      _objc_release(lVar20);
      _objc_release(param_3);
      func_0x00010c007be0();
      _objc_release(lVar19);
      _objc_release(lVar1);
      puVar7 = *(undefined **)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar7;
      func_0x00010c09dce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar16);
      puVar9 = puVar14;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      _objc_release(puVar14);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(uVar16);
      _objc_release(uVar13);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(lVar10);
        lVar19 = lVar10;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        if (lVar19 == 0) {
          uVar15 = 0;
          uVar13 = 0;
        }
        else {
          uVar15 = 0;
          uVar13 = 0;
          do {
            lVar20 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar10);
              }
              uVar17 = *(undefined8 *)(lVar20 * 8);
              iVar18 = (int)*(undefined8 *)(param_3 + 0x20);
              uVar11 = uVar17;
              func_0x00010c2923e0(uVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0720c0();
              _objc_release(uVar11);
              if (iVar18 != 0) {
                _objc_retain(uVar17);
                _objc_release(uVar13);
                uVar13 = uVar17;
              }
              iVar18 = (int)*(undefined8 *)(param_3 + 0x28);
              uVar11 = uVar17;
              func_0x00010c2923e0(uVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0720c0();
              _objc_release(uVar11);
              if (iVar18 != 0) {
                _objc_retain(uVar17);
                _objc_release(uVar15);
                uVar15 = uVar17;
              }
              lVar20 = lVar20 + 1;
            } while (lVar19 != lVar20);
            lVar19 = lVar10;
            func_0x00010bf52a60();
          } while (lVar19 != 0);
        }
        uVar11 = *(undefined8 *)(param_3 + 0x20);
        puVar9 = PTR_PTR_1126cbad0;
        func_0x00010c0e82c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        _objc_release(uVar13);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
          ___stack_chk_fail();
          puVar14 = *(undefined **)(lVar10 + 0x18);
          _objc_retain(uVar11);
          func_0x00010c269d40(puVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar11;
          func_0x00010bf50280(uVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          uVar15 = uVar13;
          func_0x00010c272380(uVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar14;
          func_0x00010bfcefc0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar4;
          func_0x00010bf870a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(uVar15);
          _objc_release(uVar13);
          _objc_release(puVar14);
          puVar4 = puVar8;
          func_0x00010bfad7a0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar4;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(puVar8);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return;
    }
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar19) {
        _objc_enumerationMutation(lVar10);
      }
      uVar2 = *(ulong *)(lVar20 * 8);
      func_0x00010c0f4a60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        _objc_release(uVar16);
        uVar16 = uVar3;
        goto LAB_1065a179c;
      }
      _objc_release(uVar3);
      lVar20 = lVar20 + 1;
    } while (lVar1 != lVar20);
    lVar1 = lVar10;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1065a1bb8; end: 1065a1cc3; -[SCConversationParticipantProvider _participantsForGroupConversation:] */

void FUN_1065a1bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c272380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bfcefc0(uVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar1 = uVar4;
  func_0x00010bfad7a0(uVar4,param_2,&PTR___NSConcreteGlobalBlock_11092d0e8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065a1cc4; end: 1065a1cdf;  */

bool FUN_1065a1cc4(undefined8 param_1,long param_2)

{
  return param_2 != 0;
}



/* Entry: 1065a1ce0; end: 1065a1d3f; -[SCConversationParticipantProvider .cxx_destruct] */

void FUN_1065a1ce0(long param_1)

{
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



/* Entry: 1065a1d40; end: 1065a1dfb; -[SCSnapCountDownUnit initWithStartCountDownTime:duration:isInfinite:timeProvider:] */

undefined1 *
FUN_1065a1d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1db0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined1 *)((long)puVar1 + 0x11) = param_5;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1065a1dfc; end: 1065a1e27; -[SCSnapCountDownUnit leftTime] */

double FUN_1065a1dfc(long param_1)

{
  double dVar1;
  
  func_0x00010c28b080();
  dVar1 = *(double *)(param_1 + 0x20);
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return dVar1;
}



/* Entry: 1065a1e28; end: 1065a1ed3; -[SCSnapCountDownUnit updateTimeLeft] */

void FUN_1065a1e28(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    _objc_retain(uVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = uVar1;
    _objc_release(uVar2);
  }
  func_0x00010c26f380(uVar1,param_3,*(undefined8 *)(param_2 + 0x18));
  param_1 = *(double *)(param_2 + 0x20) - param_1;
  *(double *)(param_2 + 0x20) = param_1;
  if (*(char *)(param_2 + 0x11) == '\x01') {
    if (*(double *)(param_2 + 0x28) <= 0.0) {
      param_1 = 0.10000000149011612;
    }
    else {
      if (0.0 < param_1) goto LAB_1065a1ec0;
      do {
        param_1 = *(double *)(param_2 + 0x28) + param_1;
      } while (param_1 <= 0.0);
    }
    *(double *)(param_2 + 0x20) = param_1;
  }
LAB_1065a1ec0:
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1065a1ed4; end: 1065a1f3f; -[SCSnapCountDownUnit secondsPlayed] */

double FUN_1065a1ed4(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)(param_2 + 0x20);
  dVar3 = *(double *)(param_2 + 0x28);
  dVar2 = 0.0;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010bf5e5e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(uVar1);
    dVar2 = param_1;
  }
  return (dVar3 - dVar4) + dVar2;
}



/* Entry: 1065a1f40; end: 1065a1f47; -[SCSnapCountDownUnit paused] */

undefined1 FUN_1065a1f40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1065a1f48; end: 1065a1f4f; -[SCSnapCountDownUnit setPaused:] */

void FUN_1065a1f48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1065a1f50; end: 1065a1f57; -[SCSnapCountDownUnit lastCountDownTime] */

undefined8 FUN_1065a1f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1065a1f58; end: 1065a1f87; -[SCSnapCountDownUnit setLastCountDownTime:] */

void FUN_1065a1f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065a1f88; end: 1065a1f8f; -[SCSnapCountDownUnit leftTimeInterval] */

undefined8 FUN_1065a1f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1065a1f90; end: 1065a1f97; -[SCSnapCountDownUnit setLeftTimeInterval:] */

void FUN_1065a1f90(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 1065a1f98; end: 1065a1f9f; -[SCSnapCountDownUnit duration] */

undefined8 FUN_1065a1f98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1065a1fa0; end: 1065a1fa7; -[SCSnapCountDownUnit setDuration:] */

void FUN_1065a1fa0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 1065a1fa8; end: 1065a1faf; -[SCSnapCountDownUnit isInfinite] */

undefined1 FUN_1065a1fa8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1065a1fb0; end: 1065a1fb7; -[SCSnapCountDownUnit setIsInfinite:] */

void FUN_1065a1fb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 1065a1fb8; end: 1065a1fe7; -[SCSnapCountDownUnit .cxx_destruct] */

void FUN_1065a1fb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065a1fe8; end: 1065a202f; -[SCSnapCountDownManager init] */

undefined8 FUN_1065a1fe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c0523e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1065a2030; end: 1065a213f; -[SCSnapCountDownManager initWithTimeProvider:] */

undefined1 * FUN_1065a2030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1db8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x28));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065a2140; end: 1065a2327; -[SCSnapCountDownManager registerCountDownTimerWithStartCountDownTime:duration:isInfinite:snapId:conversationId:] */

void FUN_1065a2140(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_6 != 0) && (param_7 != 0)) {
    _os_unfair_lock_lock(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x00010c0e00e0(lVar1,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126cbad8;
      _objc_alloc(PTR_PTR_1126cbad8);
      func_0x00010c04b9a0(param_1);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,param_6);
      puVar3 = PTR_PTR_1126ae820;
      _objc_opt_new(PTR_PTR_1126ae820);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,puVar3,param_6);
      func_0x00010c0d9840(puVar3,param_3,puVar2);
      if ((param_5 & 1) == 0) {
        puVar4 = PTR_PTR_1126cbae0;
        _objc_alloc(PTR_PTR_1126cbae0);
        uVar5 = param_4;
        func_0x00010bf64e40(param_1,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c047ae0(param_1,puVar4,param_3,param_6,param_7,uVar5,0);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x20),param_3,puVar4,param_6);
        _objc_release(puVar4);
        _objc_release(uVar5);
        lVar1 = *(long *)(param_2 + 0x20);
        func_0x00010bf51e00();
      }
      else {
        lVar1 = 0;
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
      _os_unfair_lock_unlock(param_2 + 8);
      if (lVar1 != 0) {
        func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28),param_3,lVar1);
      }
    }
    else {
      _os_unfair_lock_unlock(param_2 + 8);
      lVar1 = 0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065a2328; end: 1065a245b; -[SCSnapCountDownManager removeCountDownTimerForSnap:conversationId:] */

void FUN_1065a2328(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,0,param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf436e0();
      _objc_release(uVar2);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,0,param_3);
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x00010c0e00e0(lVar1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,0,param_3);
        lVar1 = *(long *)(param_1 + 0x20);
        func_0x00010bf51e00();
        _os_unfair_lock_unlock(param_1 + 8);
        if (lVar1 != 0) {
          func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,lVar1);
          _objc_release(lVar1);
        }
        goto LAB_1065a242c;
      }
    }
    _os_unfair_lock_unlock(param_1 + 8);
  }
LAB_1065a242c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065a245c; end: 1065a2673; -[SCSnapCountDownManager setCountDownTimerPaused:snapId:] */

void FUN_1065a245c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    _os_unfair_lock_lock(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) || (lVar7 = lVar1, func_0x00010c0f6280(), (int)param_3 == (int)lVar7)) {
      lVar7 = 0;
      bVar8 = true;
    }
    else {
      func_0x00010c28b080(lVar1);
      func_0x00010c1d9980(lVar1,param_2,param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0e00e0(uVar2,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840();
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c0e00e0(lVar3,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar1;
        func_0x00010c088840(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08eac0(lVar1);
        lVar4 = lVar7;
        func_0x00010bf64e40(lVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        puVar5 = PTR_PTR_1126cbae0;
        _objc_alloc(PTR_PTR_1126cbae0);
        lVar7 = lVar3;
        func_0x00010c241220(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010bf50280(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b160(lVar3);
        func_0x00010c047ae0(puVar5,param_2,lVar7,lVar6,lVar4,param_3);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar5,param_4);
        _objc_release(puVar5);
        _objc_release(lVar6);
        _objc_release(lVar7);
        lVar7 = *(long *)(param_1 + 0x20);
        func_0x00010bf51e00();
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
      bVar8 = false;
    }
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 8);
    if ((!bVar8) && (lVar7 != 0)) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,lVar7);
    }
    _objc_release(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065a2674; end: 1065a2727; -[SCSnapCountDownManager secondsPlayedForSnap:] */

undefined8 FUN_1065a2674(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    param_1 = 0x10000000000000;
  }
  else {
    _os_unfair_lock_lock(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      param_1 = 0x10000000000000;
    }
    else {
      func_0x00010c155380(lVar1);
    }
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_2 + 8);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1065a2728; end: 1065a27d3; -[SCSnapCountDownManager secondsLeftForSnap:] */

undefined8 FUN_1065a2728(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c08eaa0(lVar1);
    }
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_2 + 8);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1065a27d4; end: 1065a287f; -[SCSnapCountDownManager durationForSnap:] */

undefined8 FUN_1065a27d4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bf8b160(lVar1);
    }
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_2 + 8);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1065a2880; end: 1065a290b; -[SCSnapCountDownManager hasCountDownUnitForSnap:] */

bool FUN_1065a2880(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    _os_unfair_lock_lock(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1065a290c; end: 1065a298f; -[SCSnapCountDownManager countDownDataForSnap:] */

void FUN_1065a290c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065a2990; end: 1065a29b7; -[SCSnapCountDownManager activeCountdownsObservable] */

void FUN_1065a2990(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065a29b8; end: 1065a2a0b; -[SCSnapCountDownManager .cxx_destruct] */

void FUN_1065a29b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1065a2a0c; end: 1065a2a27;  */

void FUN_1065a2a0c(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a2a28; end: 1065a2aa7;  */

void FUN_1065a2a28(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065a2aa8; end: 1065a2b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a2aa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126cbae8;
    _objc_alloc(PTR_PTR_1126cbae8);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274ae5c);
    func_0x00010c069180(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11274ae60;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0520(puVar4,param_2,uVar1,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1065a2b70; end: 1065a2c6f;  */

void FUN_1065a2b70(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be86140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065a2c70; end: 1065a2e2b; -[SCConversationServicesEntryPoint _conversationParticipantProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a2c70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126cbb00;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274ae6c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274ae70;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf50160();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11274ae74;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11274ae78;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11274ae7c;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c14c300();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274ae60;
  _objc_loadWeakRetained(param_1);
  lVar13 = param_1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007580(puVar1,param_2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar13);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065a2e2c; end: 1065a2e33;  */

void FUN_1065a2e2c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c258590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storiesDataCoordinator_112673b88);
  return;
}



/* Entry: 1065a2e34; end: 1065a2edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a2e34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11274aee4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf366a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1065a2edc; end: 1065a2ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a2edc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126cb400;
    _objc_alloc(PTR_PTR_1126cb400);
    puVar1 = PTR_PTR_1126ba4f0;
    _objc_opt_new(PTR_PTR_1126ba4f0);
    puVar2 = PTR_PTR_1126b1600;
    func_0x00010c22bdc0(PTR_PTR_1126b1600);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc(PTR_PTR_1126ae790);
    func_0x00010c021520();
    lVar4 = param_1 + _DAT_11274ae80;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018400(puVar6,param_2,puVar1,puVar2,puVar3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1065a2ff8; end: 1065a3147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a2ff8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11274aee4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb9f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1065a3148; end: 1065a319f;  */

void FUN_1065a3148(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cb6b0;
    _objc_alloc(PTR_PTR_1126cb6b0);
    func_0x00010c002f40();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065a31a0; end: 1065a31bb;  */

void FUN_1065a31a0(void)

{
  _objc_opt_new(PTR_PTR_1126cbb38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a31bc; end: 1065a31fb;  */

void FUN_1065a31bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde8520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065a31fc; end: 1065a3307; -[SCConversationServicesEntryPoint _clearConversationActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a31fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126cbb50;
  _objc_alloc(PTR_PTR_1126cbb50);
  lVar2 = param_1 + _DAT_11274ae9c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274ae5c);
  func_0x00010beee460(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274ae4c);
  param_1 = param_1 + _DAT_11274ae6c;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005620(puVar1,param_2,lVar3,uVar4,uVar7,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065a3308; end: 1065a3317; -[SCConversationServicesEntryPoint _typingNotificationSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a3308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ae5c),PTR_s_internalActionHandler_1125f7e70);
  return;
}



/* Entry: 1065a3318; end: 1065a34d3; -[SCConversationServicesEntryPoint _reactionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a3318(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126cbb58;
  _objc_alloc();
  lVar13 = (long)_DAT_11274ae70;
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar4 = lVar13;
  func_0x00010bf50160();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274aea0;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf0a280();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11274ae78;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11274ae6c;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274ae7c;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010c14c300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e020(puVar1,param_2,lVar3,lVar4,lVar6,lVar8,lVar11,lVar12);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065a34d4; end: 1065a353b; -[SCConversationServicesEntryPoint _contextPostSnapActionsDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a34d4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_11274aea4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c105160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126cbb60;
  _objc_alloc(PTR_PTR_1126cbb60);
  func_0x00010c012980();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065a353c; end: 1065a364b; -[SCConversationServicesEntryPoint _communityGroupChatActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a353c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126cbb68;
  _objc_alloc(PTR_PTR_1126cbb68);
  lVar2 = param_1 + _DAT_11274ae70;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274aea8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274ae6c;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e3e0(puVar1,param_2,lVar3,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065a364c; end: 1065a372b; -[SCConversationServicesEntryPoint _conversationUpdatesPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a364c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cbb70;
  _objc_alloc(PTR_PTR_1126cbb70);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274ae5c);
  func_0x00010beee460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11274ae70;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf50a40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274ae9c;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff06a0(puVar1,param_2,uVar2,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065a372c; end: 1065a374b; -[SCConversationServicesEntryPoint adPrefetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a372c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274ae8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a374c; end: 1065a375f; -[SCConversationServicesEntryPoint setAdPrefetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a374c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274ae8c,param_3);
  return;
}



/* Entry: 1065a3760; end: 1065a377f; -[SCConversationServicesEntryPoint sponsoredSnapAdRenderDataParserServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a3760(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274ae7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a3780; end: 1065a3793; -[SCConversationServicesEntryPoint setSponsoredSnapAdRenderDataParserServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a3780(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274ae7c,param_3);
  return;
}



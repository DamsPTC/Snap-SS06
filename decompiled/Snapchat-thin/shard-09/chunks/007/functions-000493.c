/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070b0558; end: 1070b0587; -[SCChatEligibilityServices .cxx_destruct] */

void FUN_1070b0558(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070b0588; end: 1070b072b;  */

void FUN_1070b0588(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e9e678;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e9e678,
                      &PTR____CFConstantStringClassReference_110e9e658,0);
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



/* Entry: 1070b072c; end: 1070b0873;  */

void FUN_1070b072c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1070b0874;
  puStack_78 = &UNK_11098c330;
  uStack_70 = param_4;
  uStack_68 = param_3;
  uStack_60 = param_2;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x000100504554(uVar1,&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070b0874; end: 1070b0b9b;  */

void FUN_1070b0874(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x000108ef37e4(lVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c071ae0();
  _objc_release(uVar3);
  lVar4 = param_2;
  func_0x00010c1209e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c120b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c1209e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar6 = lVar4;
  func_0x00010c120a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar6;
  func_0x00010c0682a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    lVar9 = lVar6;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar8 = PTR_PTR_1126d4ad0;
    if (lVar9 == 0) {
      puVar10 = (undefined *)0x0;
      goto LAB_1070b0b10;
    }
    lVar9 = lVar6;
    func_0x00010bf8e2c0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8ea40(puVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((int)lVar9 == 0) {
      lVar9 = *(long *)(param_1 + 0x20);
      if (lVar9 != 0) {
        func_0x00010c0ecc20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c086fa0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar9;
        func_0x000108ef3dd0(lVar9,uVar3,lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(lVar9);
        goto LAB_1070b0a5c;
      }
      lVar7 = *(long *)(param_1 + 0x28);
      func_0x00010c0e00e0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar4;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x30);
      func_0x00010bf1bae0(lVar7);
      _objc_retainAutoreleasedReturnValue();
LAB_1070b0a5c:
      lVar9 = lVar7;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar7);
    lVar4 = lVar6;
    func_0x00010c0682a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d4ad0;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1c720(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
  _objc_release(lVar9);
  puVar10 = PTR_PTR_1126d4ad8;
  _objc_alloc(PTR_PTR_1126d4ad8);
  func_0x00010c05bd60();
  _objc_release(puVar8);
LAB_1070b0b10:
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1070b0b9c; end: 1070b0c83;  */

void FUN_1070b0b9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR_PTR_1126be658;
  _objc_retain();
  _objc_opt_new();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1070b0c84;
  puStack_50 = &UNK_11098c360;
  _objc_retain();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1070b0e1c;
  puStack_78 = &UNK_1108450c8;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  puStack_70 = puVar2;
  func_0x00010c0bcb60(param_1,param_2,&puStack_68,&puStack_90);
  _objc_release(param_1);
  puVar1 = puStack_70;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b0c84; end: 1070b0e1b;  */

void FUN_1070b0c84(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126be690;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  lVar2 = param_2;
  func_0x00010c0b4ca0(param_2);
  _objc_release(param_2);
  func_0x00010c01e5c0((double)lVar2,puVar1);
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010c0daa20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26afc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212c20(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf034c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26afc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167f80(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0daa40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd8c0(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf034e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167ee0(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  func_0x00010c1705e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070b0e1c; end: 1070b0e7f;  */

void FUN_1070b0e1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126be660;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c00f540();
  _objc_release(param_2);
  func_0x00010c194460(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070b0e80; end: 1070b115f; -[SCChatMessageReactionsView initWithCurrentUserId:runtime:composerAnimatedImageViewFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1070b0e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126f8938;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_112763d50;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    lVar8 = (long)_DAT_112763d54;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + lVar8));
    puVar4 = PTR_PTR_1126d4ae0;
    _objc_opt_new(PTR_PTR_1126d4ae0);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167ec0(puVar4);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010bf870a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168260(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_initWeak(auStack_88,puVar1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1070b1160;
    puStack_98 = &UNK_11098c390;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010c1d3100(puVar4);
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010c1d30e0(puVar4);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    puVar6 = PTR____NSArray0__struct_11034ab48;
    FUN_1070b11f0(PTR____NSArray0__struct_11034ab48,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d4ae8;
    _objc_alloc();
    func_0x00010c061d40();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763d58);
    *(undefined **)((long)puVar1 + (long)_DAT_112763d58) = puVar7;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763d5c);
    *(undefined **)((long)puVar1 + (long)_DAT_112763d5c) = puVar3;
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1070b1160; end: 1070b11ef;  */

void FUN_1070b1160(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2eb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070b11f0; end: 1070b133f;  */

void FUN_1070b11f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_11098c3e0);
  puVar1 = PTR_PTR_1126d4af8;
  _objc_alloc(PTR_PTR_1126d4af8);
  func_0x00010c03cfc0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1940(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5b80(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2180(puVar1);
  _objc_release(puVar2);
  func_0x00010c1c7080(puVar1);
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0a80(puVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070b1340; end: 1070b1607; -[SCChatMessageReactionsView setReactions:messageId:conversationId:messageSenderUserId:isGroupConversation:hasChatWallpaper:isLastMessage:isEligibleForMultipleReactions:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070b1340(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,uint param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  lVar3 = (long)_DAT_112763d60;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_5;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_112763d64;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_4;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + _DAT_112763d68,param_11);
  lVar4 = (long)_DAT_112763d5c;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(lVar3);
  if (param_3 == lVar3) {
    _objc_release(lVar3);
    _objc_release(param_3);
LAB_1070b146c:
    if (((*(byte *)(param_1 + _DAT_112763d6c) == param_8) &&
        (*(char *)(param_1 + _DAT_112763d70) == (char)param_9)) &&
       (*(char *)(param_1 + _DAT_112763d74) == param_9._1_1_)) goto LAB_1070b15a0;
  }
  else if (lVar3 == 0) {
    _objc_release();
  }
  else {
    lVar2 = param_3;
    func_0x00010c071ae0();
    _objc_release(lVar3);
    _objc_release(param_3);
    if ((int)lVar2 != 0) goto LAB_1070b146c;
  }
  lVar3 = param_3;
  FUN_1070b11f0(param_3,param_6,param_7,(char)param_9,param_8,param_9._1_1_);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_11);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  func_0x00010c1d4da0(lVar3);
  func_0x00010c187f00(lVar3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  *(char *)(param_1 + _DAT_112763d74) = param_9._1_1_;
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112763d58));
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar3);
LAB_1070b15a0:
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070b1608; end: 1070b163b;  */

void FUN_1070b1608(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e9660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070b163c; end: 1070b16b3; -[SCChatMessageReactionsView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070b163c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8938;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_4 + _DAT_112763d58));
  return;
}



/* Entry: 1070b16b4; end: 1070b1763; -[SCChatMessageReactionsView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070b16b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  puVar2 = PTR____NSArray0__struct_11034ab48;
  FUN_1070b11f0(PTR____NSArray0__struct_11034ab48,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112763d58));
  _objc_release(puVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112763d54));
  uVar3 = *(undefined8 *)(param_1 + _DAT_112763d5c);
  *(undefined **)(param_1 + _DAT_112763d5c) = puVar1;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + _DAT_112763d6c) = 0;
  *(undefined1 *)(param_1 + _DAT_112763d70) = 0;
  *(undefined1 *)(param_1 + _DAT_112763d74) = 0;
  return;
}



/* Entry: 1070b1764; end: 1070b17af; -[SCChatMessageReactionsView didChangeVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070b1764(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112763d54);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070b17b0; end: 1070b1837; -[SCChatMessageReactionsView _handleRemoveReactionWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070b17b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if ((*(long *)(param_1 + _DAT_112763d64) != 0) && (*(long *)(param_1 + _DAT_112763d60) != 0)) {
    param_1 = param_1 + _DAT_112763d68;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf79a60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070b1838; end: 1070b18bf; -[SCChatMessageReactionsView _handleReactionSelectionWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070b1838(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if ((*(long *)(param_1 + _DAT_112763d64) != 0) && (*(long *)(param_1 + _DAT_112763d60) != 0)) {
    param_1 = param_1 + _DAT_112763d68;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78f20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070b18c0; end: 1070b1923; -[SCChatMessageReactionsView _handleOpenReactionDetailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070b18c0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112763d64) != 0) {
    param_1 = param_1 + _DAT_112763d68;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0e9660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1070b1924; end: 1070b1a93; +[SCChatMessageReactionsView getHeightForWidth:reactions:currentUserId:messageSenderUserId:isLastMessage:isGroupConversation:isEligibleForMultipleReactions:runtime:] */

undefined8
FUN_1070b1924(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (((param_7 & 1) != 0) || (uVar4 = 0, lVar1 != 0)) {
    lVar1 = param_4;
    FUN_1070b11f0(param_4,param_6,param_8,param_7,0,param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd820();
    func_0x00010c187f00(lVar1);
    puVar2 = PTR_PTR_1126d4ae8;
    func_0x00010bf44480(PTR_PTR_1126d4ae8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_10;
    func_0x00010bf55720(param_10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c2a1580(uVar3);
    uVar4 = 0x7fefffffffffffff;
    func_0x00010c0c3ec0(param_1,0x7fefffffffffffff,uVar3);
    func_0x00010bf6ef60(uVar3);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 1070b1a94; end: 1070b1b2f; -[SCChatMessageReactionsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070b1a94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763d54,0);
  _objc_destroyWeak(param_1 + _DAT_112763d68);
  _objc_storeStrong(param_1 + _DAT_112763d64,0);
  _objc_storeStrong(param_1 + _DAT_112763d60,0);
  _objc_storeStrong(param_1 + _DAT_112763d5c,0);
  _objc_storeStrong(param_1 + _DAT_112763d78,0);
  _objc_storeStrong(param_1 + _DAT_112763d58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763d50,0);
  return;
}



/* Entry: 1070b1b30; end: 1070b1c5f;  */

void FUN_1070b1b30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d4af0;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1070b0b9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ba40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c0bcb60(uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c21e620(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070b1c60; end: 1070b1c6f;  */

void FUN_1070b1c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAvatarId__1126390a0,param_4);
  return;
}



/* Entry: 1070b1c70; end: 1070b1d27;  */

undefined1 FUN_1070b1c70(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bf240(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b1d28; end: 1070b1d3b;  */

void FUN_1070b1d28(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1070b1d3c; end: 1070b1e47;  */

void FUN_1070b1d3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1070b1e48;
  uStack_40 = 0x1070b1e58;
  uStack_38 = 0;
  _objc_retain(param_2);
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b1e48; end: 1070b1e5f;  */

void FUN_1070b1e48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1070b1e60; end: 1070b1faf;  */

void FUN_1070b1e60(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
LAB_1070b1f6c:
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      ___stack_chk_fail();
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar2 = uVar7;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        _objc_retain(uVar7);
        uVar4 = *(undefined8 *)(lVar6 + 0x28);
        *(ulong *)(lVar6 + 0x28) = uVar7;
        _objc_release(uVar4);
        goto LAB_1070b1f6c;
      }
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1070b1fb0; end: 1070b1fb3;  */

void FUN_1070b1fb0(void)

{
  return;
}



/* Entry: 1070b1fb4; end: 1070b20c3;  */

void FUN_1070b1fb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1070b1e48;
  uStack_40 = 0x1070b1e58;
  uStack_38 = 0;
  _objc_retain(param_2);
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b20c4; end: 1070b2107;  */

void FUN_1070b20c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070b2108; end: 1070b210b;  */

void FUN_1070b2108(void)

{
  return;
}



/* Entry: 1070b210c; end: 1070b2253;  */

void FUN_1070b210c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1070b1e48;
  uStack_60 = 0x1070b1e58;
  uStack_58 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b2254; end: 1070b22f3;  */

void FUN_1070b2254(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070b22f4; end: 1070b2403;  */

void FUN_1070b22f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1070b1e48;
  uStack_40 = 0x1070b1e58;
  uStack_38 = 0;
  _objc_retain(param_2);
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b2404; end: 1070b2407;  */

void FUN_1070b2404(void)

{
  return;
}



/* Entry: 1070b2408; end: 1070b244b;  */

void FUN_1070b2408(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070b244c; end: 1070b25d7;  */

void FUN_1070b244c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1070b1e48;
  uStack_60 = 0x1070b1e58;
  uStack_58 = 0;
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b25d8; end: 1070b2673;  */

void FUN_1070b25d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1070b1d3c(uVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ef3ef4(uVar3,uVar4,uVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070b2674; end: 1070b26d3;  */

void FUN_1070b2674(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108ef4364();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070b26d4; end: 1070b27e3;  */

void FUN_1070b26d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1070b1e48;
  uStack_40 = 0x1070b1e58;
  uStack_38 = 0;
  _objc_retain(param_2);
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b27e4; end: 1070b27e7;  */

void FUN_1070b27e4(void)

{
  return;
}



/* Entry: 1070b27e8; end: 1070b2917;  */

void FUN_1070b27e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1070b2894;
  puStack_40 = &UNK_11098c4a0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = param_2;
  uStack_38 = uVar3;
  func_0x000100504554(param_2,&puStack_58);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_38);
  return;
}



/* Entry: 1070b2918; end: 1070b2a0f;  */

void FUN_1070b2918(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1070b1e48;
  uStack_30 = 0x1070b1e58;
  uStack_28 = 0;
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b2a10; end: 1070b2b5f;  */

void FUN_1070b2a10(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar5 = param_4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,param_4,lVar5);
    _objc_release(lVar5);
  }
  lVar5 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,param_3,lVar5);
    _objc_release(lVar5);
  }
  puVar3 = PTR_PTR_1126d4b00;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e82a0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070b2b60; end: 1070b2beb;  */

void FUN_1070b2b60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010050471c();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126d4b00;
  func_0x00010bfcf6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070b2bec; end: 1070b2bf3;  */

void FUN_1070b2bec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1070b2bf4; end: 1070b2c1b;  */

void FUN_1070b2bf4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1070b2c1c; end: 1070b2d67;  */

void FUN_1070b2c1c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1070b1e48;
    uStack_60 = 0x1070b1e58;
    uStack_58 = 0;
    _objc_retain(param_2);
    _objc_retain(param_2);
    func_0x00010c0bf240(param_1);
    uVar1 = puStack_78[5];
    _objc_retain(uVar1);
    _objc_release(param_2);
    _objc_release(param_2);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b2d68; end: 1070b2deb;  */

void FUN_1070b2d68(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000108ef3960(uVar1,0,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070b2dec; end: 1070b2f3b;  */

long FUN_1070b2dec(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *unaff_x22;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    lVar6 = lVar1;
    func_0x000108ef3a20(puVar2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar4;
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_release(unaff_x22);
    puVar3 = puVar2;
  }
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar1;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_1070b2f3c;
  puStack_80 = unaff_x22;
  puStack_78 = puVar3;
  lStack_70 = param_1;
  lStack_68 = param_2;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(lVar6);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1070b1e48;
  uStack_90 = 0x1070b1e58;
  uStack_88 = 0;
  _objc_retain(lVar1);
  _objc_retain(lVar6);
  func_0x00010c0bf240(lVar1);
  lVar5 = puStack_a8[5];
  func_0x00010c2923e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c0720c0();
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  _objc_release(lVar6);
  _objc_release(lVar1);
  return lVar8;
}



/* Entry: 1070b2f3c; end: 1070b307f;  */

undefined8 FUN_1070b2f3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1070b1e48;
  uStack_40 = 0x1070b1e58;
  uStack_38 = 0;
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_58[5];
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1070b3080; end: 1070b30c3;  */

void FUN_1070b3080(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1070b1d3c(uVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1070b30c4; end: 1070b31e3;  */

byte FUN_1070b30c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    bVar3 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar1 = param_1;
    func_0x00010bfee140(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c16a0();
    _objc_release(uVar1);
    bVar3 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar3 & 1;
}



/* Entry: 1070b31e4; end: 1070b31f7;  */

void FUN_1070b31e4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1070b31f8; end: 1070b32b3;  */

undefined1 FUN_1070b31f8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c16a0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b32b4; end: 1070b32c7;  */

void FUN_1070b32b4(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1070b32c8; end: 1070b346b;  */

uint FUN_1070b32c8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bf4ce20();
  uVar6 = 0;
  iVar2 = (int)uVar3;
  uVar3 = param_1;
  if (iVar2 < 5) {
    if (iVar2 == 0) {
LAB_1070b33fc:
      uVar6 = 1;
      goto LAB_1070b3448;
    }
    if (iVar2 != 4) goto LAB_1070b3448;
    func_0x00010c253880(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2544c0();
    bVar1 = (int)uVar4 == 0;
LAB_1070b3358:
    uVar6 = (uint)bVar1;
  }
  else if (iVar2 == 8) {
    func_0x00010c253320(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2533e0();
    uVar6 = (uint)((uint)uVar4 < 0x1e) & 0x21804801U >> (ulong)((uint)uVar4 & 0x1f);
  }
  else {
    if (iVar2 != 7) {
      if (iVar2 != 5) goto LAB_1070b3448;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c22ac80();
      bVar1 = (int)uVar4 == 0 || (int)uVar4 == 0x19;
      goto LAB_1070b3358;
    }
    uVar4 = param_1;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c131be0();
    _objc_release(uVar4);
    iVar2 = (int)uVar5;
    if (iVar2 == 0) goto LAB_1070b33fc;
    if (iVar2 == 0xe) {
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1320c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c22ac80();
      bVar1 = true;
      if ((int)uVar5 != 0) {
        bVar1 = (int)uVar5 == 0x19;
      }
    }
    else {
      if (iVar2 != 0xd) {
        uVar6 = 0;
        goto LAB_1070b3448;
      }
      func_0x00010c242c40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c132140();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2544c0();
      bVar1 = (int)uVar5 == 0;
    }
    uVar6 = (uint)bVar1;
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
LAB_1070b3448:
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 1070b346c; end: 1070b34bb;  */

undefined ** FUN_1070b346c(long param_1)

{
  if (param_1 - 1U < 0x1f) {
    return (undefined **)(&PTR_PTR_11098c530)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 1070b34bc; end: 1070b34df; -[SCNMessagingConversation copyWithZone:] */

undefined8 FUN_1070b34bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070b34e0; end: 1070b34e3; -[SCNativeConversationContainer messagesForRendering] */

void FUN_1070b34e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cbb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_messages_1126108e0);
  return;
}



/* Entry: 1070b34e4; end: 1070b3597; -[SCNativeConversationContainer messagesDictionary] */

void FUN_1070b34e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  func_0x00010c0cbb80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1070b3598;
  puStack_30 = &UNK_11098c670;
  puStack_28 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf97e80(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b3598; end: 1070b35f7;  */

void FUN_1070b3598(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf490e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070b35f8; end: 1070b365b; -[SCNativeConversationContainer id] */

void FUN_1070b35f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070b365c; end: 1070b36bf; -[SCNativeConversationContainer participants] */

void FUN_1070b365c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070b36c0; end: 1070b3707;  */

void FUN_1070b36c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0f4a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b3708; end: 1070b376b; -[SCNativeConversationContainer kickedParticipants] */

void FUN_1070b3708(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c086fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070b376c; end: 1070b37b3;  */

void FUN_1070b376c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0f4a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b37b4; end: 1070b37ef; -[SCNativeConversationContainer isGroupConversation] */

undefined8 FUN_1070b37b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c074920();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b37f0; end: 1070b387f; -[SCNativeConversationContainer isSelfConversation] */

bool FUN_1070b37f0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf509a0();
  if (lVar3 == 0) {
    func_0x00010bf500c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    bVar1 = lVar4 == 1;
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1070b3880; end: 1070b39bb; -[SCNativeConversationContainer hasUnreadMessagesForUserId:] */

undefined1 * FUN_1070b3880(undefined *param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *unaff_x22;
  long lVar9;
  undefined *unaff_x23;
  undefined1 *puVar10;
  undefined1 *unaff_x24;
  undefined1 *puVar11;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [128];
  long lStack_398;
  undefined1 *puStack_390;
  undefined *puStack_388;
  undefined1 *puStack_380;
  undefined *puStack_378;
  undefined1 *puStack_370;
  undefined1 *puStack_368;
  undefined8 **ppuStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [128];
  long lStack_288;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = puVar7;
  func_0x00010bf52a60();
  puVar6 = (undefined1 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_100;
    do {
      unaff_x23 = (undefined *)0x0;
      do {
        if ((undefined1 *)*puStack_100 != unaff_x22) {
          _objc_enumerationMutation(puVar7);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + (long)unaff_x23 * 8);
        puVar3 = (undefined8 *)param_3;
        func_0x00010c07c1e0();
        if (iVar1 == 0) {
          puVar6 = (undefined1 *)0x1;
          goto LAB_1070b3974;
        }
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar7;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    puVar6 = (undefined1 *)0x0;
  }
LAB_1070b3974:
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_230;
  pcStack_118 = FUN_1070b39bc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_3;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar10 = puVar11;
  func_0x00010bf52a60();
  puVar6 = (undefined1 *)0x0;
  if (puVar10 != (undefined1 *)0x0) {
    unaff_x23 = (undefined *)*puStack_220;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined *)*puStack_220 != unaff_x23) {
          _objc_enumerationMutation(puVar11);
        }
        unaff_x22 = *(undefined1 **)(lStack_228 + (long)unaff_x24 * 8);
        puVar6 = unaff_x22;
        func_0x00010c07c1e0(unaff_x22,param_2,puVar3);
        if ((((ulong)puVar6 & 1) == 0) &&
           (puVar6 = unaff_x22, puVar5 = puVar3, func_0x00010c0791e0(), (int)puVar6 == 0)) {
          puVar6 = (undefined1 *)0x1;
          goto LAB_1070b3ac8;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (puVar10 != unaff_x24);
      puVar10 = puVar11;
      puVar5 = &uStack_230;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined1 *)0x0);
    puVar6 = (undefined1 *)0x0;
  }
LAB_1070b3ac8:
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_1070b3b14;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_240 = &puStack_120;
  _objc_retain(puVar5);
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  puStack_340 = (undefined8 *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar3;
  func_0x00010bf52a60();
  if (puVar6 == (undefined1 *)0x0) {
    puVar7 = (undefined *)0x0;
    puVar6 = unaff_x22;
  }
  else {
    puVar7 = (undefined *)0x0;
    unaff_x24 = (undefined1 *)*puStack_340;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_340 != unaff_x24) {
          _objc_enumerationMutation(puVar3);
        }
        unaff_x23 = *(undefined **)(lStack_348 + (long)puVar11 * 8);
        puVar2 = unaff_x23;
        func_0x00010c07d940(unaff_x23,param_2,puVar5);
        if ((((ulong)puVar2 & 1) == 0) &&
           (puVar2 = unaff_x23, func_0x00010c07c1e0(unaff_x23,param_2,puVar5),
           ((ulong)puVar2 & 1) == 0)) {
          puVar2 = unaff_x23;
          func_0x00010c079300(unaff_x23,param_2,puVar5);
          if ((int)puVar2 == 0) goto LAB_1070b3c38;
          func_0x00010bf490e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar7 = unaff_x23;
        }
        puVar11 = puVar11 + 1;
      } while (puVar6 != puVar11);
      puVar6 = (undefined1 *)puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_350,auStack_308,0x10);
    } while (puVar6 != (undefined1 *)0x0);
  }
LAB_1070b3c38:
  _objc_release(puVar3);
  puVar11 = (undefined1 *)puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
    ___stack_chk_fail();
    pcStack_358 = FUN_1070b3c84;
    lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    plStack_450 = (long *)0x0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    puStack_390 = unaff_x24;
    puStack_388 = unaff_x23;
    puStack_380 = puVar6;
    puStack_378 = puVar7;
    puStack_370 = (undefined1 *)puVar3;
    puStack_368 = (undefined1 *)puVar5;
    ppuStack_360 = &ppuStack_240;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar11;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = puVar6;
    func_0x00010bf52a60(puVar6,param_2,&uStack_460,auStack_418,0x10);
    puVar7 = (undefined *)0x0;
    if (puVar11 != (undefined1 *)0x0) {
      lVar9 = *plStack_450;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_450 != lVar9) {
            _objc_enumerationMutation(puVar6);
          }
          lVar8 = *(long *)(lStack_458 + (long)puVar10 * 8);
          lVar4 = lVar8;
          func_0x00010c252440();
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar4 == 2) {
            func_0x00010bf6e760(lVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c0cb5a0();
            func_0x00010c0df7c0(puVar7,param_2,lVar9);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            goto LAB_1070b3da4;
          }
          puVar10 = puVar10 + 1;
        } while (puVar11 != puVar10);
        puVar11 = puVar6;
        func_0x00010bf52a60(puVar6,param_2,&uStack_460,auStack_418,0x10);
      } while (puVar11 != (undefined1 *)0x0);
      puVar7 = (undefined *)0x0;
    }
LAB_1070b3da4:
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
      ___stack_chk_fail();
      func_0x00010bf500c0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar6;
      func_0x00010c0cb860();
      _objc_release(puVar6);
      return puVar11;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return puVar7;
}



/* Entry: 1070b39bc; end: 1070b3b13; -[SCNativeConversationContainer hasUnreadUnopenedMessagesForUserId:] */

undefined1 * FUN_1070b39bc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *unaff_x22;
  long lVar7;
  undefined *unaff_x23;
  undefined1 *puVar8;
  long unaff_x24;
  undefined1 *puVar9;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [128];
  long lStack_288;
  long lStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  undefined *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  puVar4 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    unaff_x23 = (undefined *)*puStack_110;
    do {
      unaff_x24 = 0;
      do {
        if ((undefined *)*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(lVar7);
        }
        unaff_x22 = *(undefined1 **)(lStack_118 + unaff_x24 * 8);
        puVar4 = unaff_x22;
        func_0x00010c07c1e0(unaff_x22,param_2,param_3);
        if ((((ulong)puVar4 & 1) == 0) &&
           (puVar4 = unaff_x22, puVar3 = (undefined8 *)param_3, func_0x00010c0791e0(),
           (int)puVar4 == 0)) {
          puVar4 = (undefined1 *)0x1;
          goto LAB_1070b3ac8;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (lVar1 != unaff_x24);
      lVar1 = lVar7;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar4 = (undefined1 *)0x0;
  }
LAB_1070b3ac8:
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1070b3b14;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bf52a60();
  if (puVar4 == (undefined1 *)0x0) {
    puVar5 = (undefined *)0x0;
    puVar4 = unaff_x22;
  }
  else {
    puVar5 = (undefined *)0x0;
    unaff_x24 = *plStack_230;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != unaff_x24) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined **)(lStack_238 + (long)puVar9 * 8);
        puVar2 = unaff_x23;
        func_0x00010c07d940(unaff_x23,param_2,puVar3);
        if ((((ulong)puVar2 & 1) == 0) &&
           (puVar2 = unaff_x23, func_0x00010c07c1e0(unaff_x23,param_2,puVar3),
           ((ulong)puVar2 & 1) == 0)) {
          puVar2 = unaff_x23;
          func_0x00010c079300(unaff_x23,param_2,puVar3);
          if ((int)puVar2 == 0) goto LAB_1070b3c38;
          func_0x00010bf490e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar5 = unaff_x23;
        }
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_240,auStack_1f8,0x10);
    } while (puVar4 != (undefined1 *)0x0);
  }
LAB_1070b3c38:
  _objc_release(param_3);
  puVar9 = (undefined1 *)puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    pcStack_248 = FUN_1070b3c84;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_280 = unaff_x24;
    puStack_278 = unaff_x23;
    puStack_270 = puVar4;
    puStack_268 = puVar5;
    puStack_260 = param_3;
    puStack_258 = (undefined1 *)puVar3;
    ppuStack_250 = &puStack_130;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar4;
    func_0x00010bf52a60(puVar4,param_2,&uStack_350,auStack_308,0x10);
    puVar5 = (undefined *)0x0;
    if (puVar9 != (undefined1 *)0x0) {
      lVar7 = *plStack_340;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_340 != lVar7) {
            _objc_enumerationMutation(puVar4);
          }
          lVar6 = *(long *)(lStack_348 + (long)puVar8 * 8);
          lVar1 = lVar6;
          func_0x00010c252440();
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar1 == 2) {
            func_0x00010bf6e760(lVar6);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c0cb5a0();
            func_0x00010c0df7c0(puVar5,param_2,lVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar6);
            goto LAB_1070b3da4;
          }
          puVar8 = puVar8 + 1;
        } while (puVar9 != puVar8);
        puVar9 = puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_350,auStack_308,0x10);
      } while (puVar9 != (undefined1 *)0x0);
      puVar5 = (undefined *)0x0;
    }
LAB_1070b3da4:
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
      ___stack_chk_fail();
      func_0x00010bf500c0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c0cb860();
      _objc_release(puVar4);
      return puVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 1070b3b14; end: 1070b3c83; -[SCNativeConversationContainer feedViewedReadUpToMessageIdForUserId:] */

undefined * FUN_1070b3b14(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  long lVar5;
  undefined *unaff_x23;
  undefined *puVar6;
  long unaff_x24;
  long lVar7;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
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
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    puVar3 = (undefined *)0x0;
    lVar5 = unaff_x22;
  }
  else {
    puVar3 = (undefined *)0x0;
    unaff_x24 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined **)(lStack_118 + lVar7 * 8);
        puVar1 = unaff_x23;
        func_0x00010c07d940(unaff_x23,param_2,param_3);
        if ((((ulong)puVar1 & 1) == 0) &&
           (puVar1 = unaff_x23, func_0x00010c07c1e0(unaff_x23,param_2,param_3),
           ((ulong)puVar1 & 1) == 0)) {
          puVar1 = unaff_x23;
          func_0x00010c079300(unaff_x23,param_2,param_3);
          if ((int)puVar1 == 0) goto LAB_1070b3c38;
          func_0x00010bf490e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = unaff_x23;
        }
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      lVar5 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar5 != 0);
  }
LAB_1070b3c38:
  _objc_release(param_1);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_1070b3c84;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_160 = unaff_x24;
    puStack_158 = unaff_x23;
    lStack_150 = lVar5;
    puStack_148 = puVar3;
    lStack_140 = param_1;
    puStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_230,auStack_1e8,0x10);
    puVar3 = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      lVar5 = *plStack_220;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (*plStack_220 != lVar5) {
            _objc_enumerationMutation(puVar2);
          }
          lVar4 = *(long *)(lStack_228 + (long)puVar6 * 8);
          lVar7 = lVar4;
          func_0x00010c252440();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar7 == 2) {
            func_0x00010bf6e760(lVar4);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c0cb5a0();
            func_0x00010c0df7c0(puVar3,param_2,lVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            goto LAB_1070b3da4;
          }
          puVar6 = puVar6 + 1;
        } while (puVar1 != puVar6);
        puVar1 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_230,auStack_1e8,0x10);
      } while (puVar1 != (undefined *)0x0);
      puVar3 = (undefined *)0x0;
    }
LAB_1070b3da4:
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
      ___stack_chk_fail();
      func_0x00010bf500c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0cb860();
      _objc_release(puVar2);
      return puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 1070b3c84; end: 1070b3de3; -[SCNativeConversationContainer lastCommitedMessageId] */

undefined * FUN_1070b3c84(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf52a60(puVar1,param_2,&uStack_110,auStack_c8,0x10);
  puVar4 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    lVar6 = *plStack_100;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(puVar1);
        }
        lVar5 = *(long *)(lStack_108 + (long)puVar7 * 8);
        lVar3 = lVar5;
        func_0x00010c252440();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar3 == 2) {
          func_0x00010bf6e760(lVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c0cb5a0();
          func_0x00010c0df7c0(puVar4,param_2,lVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          goto LAB_1070b3da4;
        }
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (puVar2 != (undefined *)0x0);
    puVar4 = (undefined *)0x0;
  }
LAB_1070b3da4:
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0cb860();
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 1070b3de4; end: 1070b3e1f; -[SCNativeConversationContainer messageRetentionInMinutes] */

undefined8 FUN_1070b3de4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cb860();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b3e20; end: 1070b3e5b; -[SCNativeConversationContainer messageRetentionMode] */

undefined8 FUN_1070b3e20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cb880();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b3e5c; end: 1070b3e9f; -[SCNativeConversationContainer availableRetentionModes] */

void FUN_1070b3e5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf12980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b3ea0; end: 1070b3edb; -[SCNativeConversationContainer is24HourRetentionEnabled] */

bool FUN_1070b3ea0(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c074920();
  if ((uVar2 & 1) == 0) {
    func_0x00010c0cb860(param_1);
    bVar1 = param_1 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1070b3edc; end: 1070b3f47; -[SCNativeConversationContainer recipientUserIdForOneOnOneWithCurrentUserId:] */

void FUN_1070b3edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf500c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c122e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b3f48; end: 1070b3f8b; -[SCNativeConversationContainer title] */

void FUN_1070b3f48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b3f8c; end: 1070b3fcb; -[SCNativeConversationContainer hadAnyMessages] */

bool FUN_1070b3f8c(long param_1)

{
  long lVar1;
  
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1070b3fcc; end: 1070b3fcf; -[SCNativeConversationContainer lastInteractionTimestampOfConversationOrMessages] */

ulong FUN_1070b3fcc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
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
  _objc_retain();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar5 = param_1;
  func_0x00010c0cbb80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf52a60();
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar7 = *plStack_120;
    do {
      uVar8 = 0;
      uVar4 = uVar3;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(uVar5);
        }
        uVar6 = *(ulong *)(lStack_128 + uVar8 * 8);
        uVar3 = uVar6;
        func_0x00010c07ea80();
        if (((uVar3 & 1) != 0) || (uVar2 = uVar6, FUN_1070b5b30(), uVar3 = uVar4, (int)uVar2 != 0))
        {
          func_0x00010c0cb9a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar4);
          uVar3 = uVar6;
          if ((uVar4 != 0) && (uVar2 = uVar6, func_0x00010bf433a0(uVar6,param_2,uVar4), uVar2 != 1))
          {
            uVar3 = uVar4;
          }
          func_0x00010bf51e00();
          _objc_release(uVar4);
          _objc_release(uVar4);
          _objc_release(uVar6);
        }
        uVar8 = uVar8 + 1;
        uVar4 = uVar3;
      } while (uVar1 != uVar8);
      uVar1 = uVar5;
      func_0x00010bf52a60(uVar5,param_2,&uStack_130,auStack_e8,0x10);
    } while (uVar1 != 0);
  }
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    uVar5 = param_1;
    func_0x00010c07ea80();
    if ((int)uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010c243480();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c07d3c0();
      if ((uVar5 & 1) == 0) {
        uVar3 = param_1;
        func_0x00010c243480();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c07c480();
        if ((uVar5 & 1) == 0) {
          uVar8 = param_1;
          func_0x00010c243480();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar8;
          func_0x00010c07d360();
          if ((uVar5 & 1) == 0) {
            uVar5 = param_1;
            func_0x00010c07d080(param_1);
          }
          else {
            uVar5 = 1;
          }
          _objc_release(uVar8);
        }
        else {
          uVar5 = 1;
        }
        _objc_release(uVar3);
      }
      else {
        uVar5 = 1;
      }
      _objc_release(uVar1);
    }
    _objc_release(param_1);
    return uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return uVar3;
}



/* Entry: 1070b3fd0; end: 1070b4027; -[SCNativeConversationContainer latestReceivedReactionSeenId] */

void FUN_1070b3fd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08b1a0();
  func_0x00010c0df7c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b4028; end: 1070b406b; -[SCNativeConversationContainer customNotificationSoundId] */

void FUN_1070b4028(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf619a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b406c; end: 1070b40af; -[SCNativeConversationContainer customRingtoneSoundId] */

void FUN_1070b406c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf61b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b40b0; end: 1070b40f3; -[SCNativeConversationContainer chatWallpaper] */

void FUN_1070b40b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf37ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b40f4; end: 1070b412f; -[SCNativeConversationContainer isLockedConversation] */

undefined8 FUN_1070b40f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c076ee0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b4130; end: 1070b416b; -[SCNativeConversationContainer isAckedLockedConversation] */

undefined8 FUN_1070b4130(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06b500();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b416c; end: 1070b41af; -[SCNativeConversationContainer streakMetadata] */

void FUN_1070b416c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25c080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b41b0; end: 1070b41ef; -[SCNativeConversationContainer areSnapsViewableAfterOpening] */

bool FUN_1070b41b0(long param_1)

{
  long lVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c2425e0();
  _objc_release(param_1);
  return lVar1 == 1;
}



/* Entry: 1070b41f0; end: 1070b4233; -[SCNativeConversationContainer createdTimestampMs] */

void FUN_1070b41f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5a660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b4234; end: 1070b4277; -[SCNativeConversationContainer initialMutualFriendCount] */

void FUN_1070b4234(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c064040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070b4278; end: 1070b42b3; -[SCNativeConversationContainer streakReminderEnabled] */

undefined8 FUN_1070b4278(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25c120();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b42b4; end: 1070b42ef; -[SCNativeConversationContainer hasSummarizedUserListsEnabled] */

undefined8 FUN_1070b42b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfdcfe0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b42f0; end: 1070b432b; -[SCNativeConversationContainer notificationsMuted] */

undefined8 FUN_1070b42f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107d06230();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b432c; end: 1070b4367; -[SCNativeConversationContainer subtype] */

undefined8 FUN_1070b432c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf50920();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b4368; end: 1070b43a3; -[SCNativeConversationContainer canUserSendMessage] */

undefined8 FUN_1070b4368(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2db60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b43a4; end: 1070b4493; -[SCNMessagingMessage _groupUpdateForGroupCreation:] */

void FUN_1070b43a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c064ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0f4ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126d4b08;
  _objc_alloc(PTR_PTR_1126d4b08);
  uVar1 = param_3;
  func_0x00010bfce820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02c7e0(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1070b4494; end: 1070b449b;  */

void FUN_1070b4494(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_toString_11267a308);
  return;
}



/* Entry: 1070b449c; end: 1070b454f; -[SCNMessagingMessage _groupUpdateForNameChange:] */

void FUN_1070b449c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c064ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d4b08;
  _objc_alloc(PTR_PTR_1126d4b08);
  uVar1 = param_3;
  func_0x00010c0d8cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02c7e0(puVar3,param_2,uVar2,uVar1,0,3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1070b4550; end: 1070b473f; -[SCNMessagingMessage _groupUpdateForParticipantChangeStatusMessage:] */

void FUN_1070b4550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c064ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0xfbadbeef;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0xfbadbeef;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0xfbadbeef;
  uVar1 = param_3;
  func_0x00010c252ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126d4b08;
  _objc_alloc(PTR_PTR_1126d4b08);
  func_0x00010c02c7e0();
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



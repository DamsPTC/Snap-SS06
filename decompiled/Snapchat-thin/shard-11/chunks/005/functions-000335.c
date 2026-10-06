/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10863e248; end: 10863e2d7;  */

void FUN_10863e248(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dac08;
  _objc_alloc(PTR_PTR_1126dac08);
  lVar2 = param_1;
  func_0x000107c28308(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  func_0x000107c28138(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031ae0(puVar1,param_2,lVar2,param_1);
  FUN_10863e2d8();
  func_0x00010863e2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10863e2d8; end: 10863e2e7;  */

void FUN_10863e2d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863e2e8; end: 10863e317;  */

void FUN_10863e2e8(void)

{
  _objc_alloc(PTR_PTR_1126cf280);
  func_0x00010c04dde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863e318; end: 10863e407;  */

void FUN_10863e318(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126dac10;
  _objc_alloc(PTR_PTR_1126dac10);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x000107c27f28(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  func_0x0001006a7df8(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x50;
  func_0x0001006a7df8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b0c0(puVar1,param_2,lVar2,lVar3,lVar4,param_1);
  func_0x00010863e4b4();
  func_0x00010863e4cc();
  func_0x00010863e4bc();
  func_0x00010863e4c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10863e408; end: 10863e4d3;  */

void FUN_10863e408(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[8] = param_4[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[0xc] = param_5[2];
    param_1[0xb] = uVar2;
    param_1[10] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}



/* Entry: 10863e4d4; end: 10863e54b; -[SCNMessagingStatelessSession initWithCpp:] */

undefined1 * FUN_10863e4d4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd2e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010863eed0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10863ee84(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10863e54c; end: 10863e72f; +[SCNMessagingStatelessSession create:authContextDelegate:queue:grapheneLogger:] */

void FUN_10863e54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined **appuStack_110 [2];
  long lStack_100;
  long lStack_f8;
  long lStack_60;
  long lStack_58;
  
  func_0x00010863eec8();
  func_0x00010863ef24();
  func_0x00010863ef0c();
  _objc_retain(param_6);
  FUN_10863ef48(&lStack_100,param_3);
  func_0x000107c2c49c(appuStack_110,param_4);
  func_0x000107c31310(auStack_120,param_5);
  func_0x00010b10c27c(auStack_130,param_6);
  FUN_10882ff98(&lStack_60,&lStack_100,appuStack_110,auStack_120,auStack_130);
  func_0x00010595d480(auStack_130);
  func_0x000107c27e70(auStack_120);
  func_0x000107c278a4(appuStack_110);
  func_0x00010863ed24(&lStack_100);
  if (lStack_60 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_110[0] = &PTR_DAT_110a5f310;
    lStack_100 = lStack_60;
    lStack_f8 = lStack_58;
    if (lStack_58 != 0) {
      do {
        func_0x00010863eed0();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_110;
    func_0x000107c31700(pppuVar1,&lStack_100,FUN_10863ee10);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c27d28(&lStack_100);
  }
  FUN_10863ee84(&lStack_60);
  _objc_release(param_6);
  func_0x00010863eeb8();
  func_0x00010863eec0();
  func_0x00010863eeb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 10863e730; end: 10863e81b; -[SCNMessagingStatelessSession getConversationMetadata:] */

void FUN_10863e730(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [56];
  char cStack_38;
  
  func_0x00010863eec8();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010863ef40(auStack_88);
  (**(code **)(*plVar1 + 0x10))(auStack_70,plVar1,auStack_88);
  func_0x000107c27914(auStack_88);
  if (cStack_38 == '\x01') {
    puVar2 = auStack_70;
    FUN_1086226d8(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  FUN_10863ed9c(auStack_70);
  func_0x00010863eeb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10863e81c; end: 10863e947; -[SCNMessagingStatelessSession consumeMessagingPayloadOrSyncConversation:versionNumber:messagingPayloadBytes:callback:] */

void FUN_10863e81c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x00010863eec8();
  func_0x00010863ef24();
  func_0x00010863ef0c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010863ef40(auStack_58);
  func_0x000107c28040(auStack_70,param_5);
  FUN_1086403d8(auStack_80,param_6);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_58,param_4,auStack_70,auStack_80);
  func_0x000104be35c8(auStack_80);
  func_0x000107c27914(auStack_70);
  func_0x000107c27914(auStack_58);
  func_0x00010863eeb8();
  func_0x00010863eec0();
  func_0x00010863eeb0();
  return;
}



/* Entry: 10863e948; end: 10863ea6f; -[SCNMessagingStatelessSession sendMessageWithContent:messageContent:callback:] */

void FUN_10863e948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [88];
  undefined1 auStack_70 [48];
  
  func_0x00010863eec8();
  func_0x00010863ef24();
  func_0x00010863ef0c();
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_1086325e0(auStack_70,param_3);
  FUN_1086305b4(auStack_c8,param_4);
  FUN_10861a5ac(auStack_d8,param_5);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_70,auStack_c8,auStack_d8);
  func_0x000104be3970(auStack_d8);
  FUN_10863edbc(auStack_c8);
  func_0x00010863ede8(auStack_70);
  func_0x00010863eeb8();
  func_0x00010863eec0();
  func_0x00010863eeb0();
  return;
}



/* Entry: 10863ea70; end: 10863eb53; -[SCNMessagingStatelessSession extractMessage:messageId:] */

void FUN_10863ea70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  func_0x00010863eec8();
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x000107c28040(auStack_70,param_3);
  (**(code **)(*plVar2 + 0x28))(auStack_58,plVar2,auStack_70,param_4);
  func_0x00010863eef8();
  puVar1 = auStack_58;
  FUN_108624688(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c279c4(auStack_50);
  func_0x00010863eeb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10863eb54; end: 10863ebb7; -[SCNMessagingStatelessSession setDebugMode:] */

void FUN_10863eb54(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10863ebb8; end: 10863ec8b; +[SCNMessagingStatelessSession createMediaReferenceKey:serverMessageId:mediaListIndex:mediaListId:] */

void FUN_10863ebb8(void)

{
  undefined1 *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010863eec8();
  func_0x00010863ef40(auStack_60);
  FUN_10884848c(auStack_48,auStack_60,in_x3,in_x4,in_x5);
  func_0x00010863eef8();
  puVar1 = auStack_48;
  func_0x000107c27f28(puVar1);
  _objc_retainAutoreleasedReturnValue();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010863eeb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10863ec8c; end: 10863ecdf; -[SCNMessagingStatelessSession .cxx_destruct] */

void FUN_10863ec8c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f310;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10863ee84((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10863ece0; end: 10863ed57; -[SCNMessagingStatelessSession .cxx_construct] */

undefined8 * FUN_10863ece0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010863eed0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10863ed58; end: 10863ed77;  */

void FUN_10863ed58(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10863ed78();
  }
  return;
}



/* Entry: 10863ed78; end: 10863ed9b;  */

/* WARNING: Possible PIC construction at 0x00010863ed8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010863ed90) */
/* WARNING: Removing unreachable block (ram,0x00010863ef38) */

long FUN_10863ed78(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0x18;
}



/* Entry: 10863ed9c; end: 10863edbb;  */

void FUN_10863ed9c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10863edbc; end: 10863ee0f;  */

long FUN_10863edbc(long param_1)

{
  long lStack_28;
  
  func_0x00010069b2d8(param_1 + 0x38);
  func_0x000104bee630(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10863ee10; end: 10863ee83;  */

void FUN_10863ee10(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dac18;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010863eed0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10863ee84(&uStack_30);
  return;
}



/* Entry: 10863ee84; end: 10863eeaf;  */

long FUN_10863ee84(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10863eeb0; end: 10863ef47;  */

void FUN_10863eeb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863ef48; end: 10863f0e7;  */

void FUN_10863ef48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2874c(auStack_68);
  uVar2 = param_2;
  func_0x00010bf704a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10863f0e8(auStack_a0);
  uVar3 = param_2;
  func_0x00010c2912a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_b8);
  uVar4 = param_2;
  func_0x00010bf65f80(param_2);
  func_0x00010c27d8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28718(auStack_e8);
  FUN_10863f158(param_1,auStack_68,auStack_a0,auStack_b8,uVar4,auStack_e8);
  func_0x000107c286c4(auStack_e8);
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  _objc_release(uVar3);
  FUN_10863ed58(auStack_a0);
  _objc_release(uVar2);
  func_0x000107c27914(auStack_68);
  _objc_release(uVar1);
  FUN_10863f270();
  return;
}



/* Entry: 10863f0e8; end: 10863f157;  */

void FUN_10863f0e8(undefined1 *param_1,long param_2)

{
  undefined1 auStack_50 [48];
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  else {
    FUN_108623470(auStack_50,param_2);
    FUN_10863f254(param_1,auStack_50);
    FUN_10863ed78(auStack_50);
  }
  FUN_10863f270();
  return;
}



/* Entry: 10863f158; end: 10863f1c3;  */

long FUN_10863f158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010863f278();
  FUN_10863f1c4(lVar1 + 0x18,param_3);
  uVar3 = param_4[1];
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0x60) = param_4[2];
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined1 *)(param_1 + 0x68) = param_5;
  func_0x000107c2871c(param_1 + 0x70,param_6);
  return param_1;
}



/* Entry: 10863f1c4; end: 10863f1f3;  */

undefined1 * FUN_10863f1c4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_10863f1f4();
  return param_1;
}



/* Entry: 10863f1f4; end: 10863f207;  */

void FUN_10863f1f4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_10863f224();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 10863f208; end: 10863f223;  */

void FUN_10863f208(long param_1)

{
  FUN_10863f224();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10863f224; end: 10863f253;  */

void FUN_10863f224(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010863f278();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10863f254; end: 10863f26f;  */

void FUN_10863f254(long param_1)

{
  FUN_10863f224();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10863f270; end: 10863f29b;  */

void FUN_10863f270(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863f29c; end: 10863f3db;  */

void FUN_10863f29c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2874c(auStack_58);
  uVar1 = param_2;
  func_0x00010c259680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_70);
  uVar2 = param_2;
  func_0x00010c25b720(param_2);
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_90);
  func_0x00010529c144(param_1,auStack_58,auStack_70,uVar2,auStack_90);
  func_0x000107c279a4(auStack_90);
  _objc_release(param_2);
  func_0x000107c27914(auStack_70);
  _objc_release(uVar1);
  func_0x000107c27914(auStack_58);
  func_0x00010863f4ac();
  func_0x00010863f4a4();
  return;
}



/* Entry: 10863f3dc; end: 10863f4a3;  */

void FUN_10863f3dc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126be738;
  _objc_alloc(PTR_PTR_1126be738);
  lVar3 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x18;
  func_0x000107c28044(lVar4);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 0x30);
  param_1 = param_1 + 0x38;
  func_0x0001006a7df8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04daa0(puVar2,param_2,lVar3,lVar4,(long)iVar1,param_1);
  func_0x00010863f4b4();
  func_0x00010863f4ac();
  func_0x00010863f4a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10863f4a4; end: 10863f4bf;  */

void FUN_10863f4a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863f4c0; end: 10863f623;  */

void FUN_10863f4c0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126dac20;
  _objc_alloc(PTR_PTR_1126dac20);
  lVar3 = param_1;
  FUN_10863f3dc(param_1);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x5c))
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  if (*(char *)(param_1 + 0x118) == '\x01') {
    lVar6 = param_1 + 0x68;
    FUN_10861b268(lVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = 0;
  }
  lVar4 = param_1 + 0x120;
  func_0x0001006a8018(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x140;
  FUN_10863f624(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020d40(puVar2,param_2,lVar3,(long)iVar1,puVar5,lVar6,lVar4,param_1);
  func_0x00010863f7ec();
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(puVar5);
  func_0x00010863f7e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10863f624; end: 10863f653;  */

void FUN_10863f624(long param_1)

{
  if (*(char *)(param_1 + 0x388) == '\x01') {
    FUN_10862ffe4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863f654; end: 10863f6c7;  */

long FUN_10863f654(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000105291934();
  *(undefined4 *)(lVar1 + 0x58) = param_3;
  *(undefined8 *)(lVar1 + 0x5c) = param_4;
  FUN_10863f6c8(lVar1 + 0x68,param_5);
  func_0x000107c27afc(param_1 + 0x120,param_6);
  FUN_10863f728(param_1 + 0x140,param_7);
  return param_1;
}



/* Entry: 10863f6c8; end: 10863f6f7;  */

undefined1 * FUN_10863f6c8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xb0] = 0;
  FUN_10863f6f8();
  return param_1;
}



/* Entry: 10863f6f8; end: 10863f70b;  */

void FUN_10863f6f8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    func_0x00010863b7d0();
    *(undefined1 *)(param_1 + 0xb0) = 1;
    return;
  }
  return;
}



/* Entry: 10863f70c; end: 10863f727;  */

void FUN_10863f70c(long param_1)

{
  func_0x00010863b7d0();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 10863f728; end: 10863f757;  */

undefined1 * FUN_10863f728(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x388] = 0;
  FUN_10863f758();
  return param_1;
}



/* Entry: 10863f758; end: 10863f76b;  */

void FUN_10863f758(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x388) == '\x01') {
    FUN_108639eb0();
    *(undefined1 *)(param_1 + 0x388) = 1;
    return;
  }
  return;
}



/* Entry: 10863f76c; end: 10863f7e3;  */

void FUN_10863f76c(long param_1)

{
  FUN_108639eb0();
  *(undefined1 *)(param_1 + 0x388) = 1;
  return;
}



/* Entry: 10863f7e4; end: 10863f7f7;  */

void FUN_10863f7e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863f7f8; end: 10863f86f; -[SCNMessagingStorySendManager initWithCpp:] */

undefined1 * FUN_10863f7f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd2e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010863fdc8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c28710(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10863f870; end: 10863f91b; -[SCNMessagingStorySendManager retryStoryByTaskQueueId:callback:] */

void FUN_10863f870(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  FUN_10863fd78();
  func_0x00010863fde8();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000107c2874c(auStack_48);
  func_0x00010863fe00();
  func_0x00010863fd8c(*(undefined8 *)(*plVar1 + 0x10));
  func_0x00010863fdd8();
  func_0x000107c27914(auStack_48);
  func_0x00010863fdac();
  func_0x00010863fdb4();
  return;
}



/* Entry: 10863f91c; end: 10863fa53; -[SCNMessagingStorySendManager deleteStoryRecipient:storyId:callback:] */

void FUN_10863f91c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain(param_3);
  func_0x00010863fde8();
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c2874c(auStack_58,param_3);
  func_0x000107c2874c(auStack_70,param_4);
  FUN_10861a5ac(auStack_80,param_5);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_58,auStack_70,auStack_80);
  func_0x000104be3970(auStack_80);
  func_0x000107c27914(auStack_70);
  func_0x000107c27914(auStack_58);
  _objc_release(param_5);
  func_0x00010863fdac();
  func_0x00010863fdb4();
  return;
}



/* Entry: 10863fa54; end: 10863faff; -[SCNMessagingStorySendManager getStoryPostStatus:callback:] */

void FUN_10863fa54(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  FUN_10863fd78();
  func_0x00010863fde8();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010863fe0c();
  FUN_10862a68c(auStack_58);
  func_0x00010863fd8c(*(undefined8 *)(*plVar1 + 0x20));
  FUN_10863fd4c(auStack_58);
  func_0x00010863fde0();
  func_0x00010863fdac();
  func_0x00010863fdb4();
  return;
}



/* Entry: 10863fb00; end: 10863fb9b; -[SCNMessagingStorySendManager clearStoryPostTrackingStatus:callback:] */

void FUN_10863fb00(void)

{
  long unaff_x21;
  long *plVar1;
  
  FUN_10863fd78();
  func_0x00010863fde8();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010863fe0c();
  func_0x00010863fe00();
  func_0x00010863fd8c(*(undefined8 *)(*plVar1 + 0x28));
  func_0x00010863fdd8();
  func_0x00010863fde0();
  func_0x00010863fdac();
  func_0x00010863fdb4();
  return;
}



/* Entry: 10863fb9c; end: 10863fbc7;  */

void FUN_10863fb9c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10863fc60();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863fbc8; end: 10863fc1b; -[SCNMessagingStorySendManager .cxx_destruct] */

void FUN_10863fbc8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f320;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c28710((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10863fc1c; end: 10863fc5f; -[SCNMessagingStorySendManager .cxx_construct] */

undefined8 * FUN_10863fc1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010863fdc8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10863fc60; end: 10863fcd7;  */

void FUN_10863fc60(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5f320;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010863fdc8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10863fcd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010863fe24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863fcd8; end: 10863fd4b;  */

void FUN_10863fcd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dac28;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010863fdc8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c28710(&uStack_30);
  return;
}



/* Entry: 10863fd4c; end: 10863fd77;  */

long FUN_10863fd4c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10863fd78; end: 10863fe3f;  */

void FUN_10863fd78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10863fe40; end: 10863fe53;  */

void FUN_10863fe40(void)

{
  FUN_1086400c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10863fe54; end: 10863fe5f;  */

long FUN_10863fe54(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f388;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x0001086400d0();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10863fe60; end: 10863fe9f;  */

void FUN_10863fe60(void)

{
  func_0x0001086400f0();
  return;
}



/* Entry: 10863fea0; end: 10863ff6b;  */

void FUN_10863fea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1086324b4(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ffe4(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6b40(uVar2);
  _objc_release(param_4);
  func_0x0001086400d0();
  func_0x000107c31ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10863ff6c; end: 10864002f;  */

void FUN_10863ff6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ffe4(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_108639b00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6b20(uVar2);
  _objc_release(param_4);
  func_0x0001086400d0();
  func_0x000107c31ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108640030; end: 1086400bf;  */

long FUN_108640030(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f388;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x0001086400d0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1086400c0; end: 1086400fb;  */

void FUN_1086400c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5f3c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086400fc; end: 108640193;  */

void FUN_1086400fc(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126dac30;
  _objc_alloc(PTR_PTR_1126dac30);
  uVar1 = *param_1;
  uVar4 = *(undefined8 *)(param_1 + 2);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    puVar3 = param_1 + 4;
    FUN_108623ecc(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  func_0x00010c006140(puVar2,param_2,uVar1,uVar4,puVar3,*(undefined1 *)(param_1 + 0xe));
  FUN_108640194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108640194; end: 10864019f;  */

void FUN_108640194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086401a0; end: 10864023f;  */

void FUN_1086401a0(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126dac38;
  _objc_alloc(PTR_PTR_1126dac38);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (param_1[8] == '\x01') {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 4));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  func_0x00010c0003c0(puVar3,param_2,uVar1,uVar2,puVar4);
  FUN_108640240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108640240; end: 108640247;  */

void FUN_108640240(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108640248; end: 1086402a7;  */

void FUN_108640248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dac40;
  _objc_alloc(PTR_PTR_1126dac40);
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028ae0(puVar1,param_2,param_1);
  FUN_1086402a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086402a8; end: 1086402b3;  */

void FUN_1086402a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086402b4; end: 108640327;  */

void FUN_1086402b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dac48;
  _objc_alloc(PTR_PTR_1126dac48);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b540(puVar1,param_2,lVar2,*(undefined1 *)(param_1 + 0x18));
  FUN_108640328();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108640328; end: 10864032f;  */

void FUN_108640328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108640330; end: 1086403c7;  */

void FUN_108640330(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dac50;
  _objc_alloc(PTR_PTR_1126dac50);
  lVar2 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  func_0x0001006abd38(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044da0(puVar1,param_2,lVar2,param_1);
  FUN_1086403c8();
  func_0x0001086403d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086403c8; end: 1086403d7;  */

void FUN_1086403c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086403d8; end: 10864048f;  */

void FUN_1086403d8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5f4b0;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108640490);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108640740(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108640490; end: 108640593;  */

void FUN_108640490(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5f4f0;
  puVar4[3] = &PTR_DAT_1107e8048;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a5f540;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108640740(&uStack_50);
  return;
}



/* Entry: 108640594; end: 108640597;  */

void FUN_108640594(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5f4f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108640598; end: 1086405ab;  */

void FUN_108640598(void)

{
  FUN_108640730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086405ac; end: 1086405b7;  */

long FUN_1086405ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f4b0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1086405b8; end: 1086405f7;  */

void FUN_1086405b8(void)

{
  FUN_10864076c();
  return;
}



/* Entry: 1086405f8; end: 108640663;  */

void FUN_1086405f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_108622b74(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2fc0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108640664; end: 10864069b;  */

void FUN_108640664(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10864069c; end: 10864072f;  */

long FUN_10864069c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f4b0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108640730; end: 10864073f;  */

void FUN_108640730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5f4f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108640740; end: 10864076b;  */

long FUN_108640740(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10864076c; end: 1086407a3;  */

long FUN_10864076c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f4b0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1086407a4; end: 1086408ab;  */

void FUN_1086407a4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c25d700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(&uStack_50);
  uVar2 = param_2;
  func_0x00010bf97a20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107c28134();
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (cStack_38 == '\x01') {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  param_1[4] = uVar3;
  param_1[5] = param_3 & 0xff;
  _objc_release(uVar2);
  func_0x000107c279a4(&uStack_50);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1086408ac; end: 10864094b;  */

void FUN_1086408ac(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126dac68;
  _objc_alloc(PTR_PTR_1126dac68);
  lVar3 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 0x18);
  param_1 = param_1 + 0x20;
  FUN_10863f624(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03efc0(puVar2,param_2,lVar3,(long)iVar1,param_1);
  FUN_10864099c();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10864094c; end: 10864099b;  */

undefined8 *
FUN_10864094c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  FUN_10863f728(param_1 + 4,param_4);
  return param_1;
}



/* Entry: 10864099c; end: 1086409ab;  */

void FUN_10864099c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086409ac; end: 1086409bf;  */

void FUN_1086409ac(void)

{
  FUN_108640be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086409c0; end: 1086409cb;  */

long FUN_1086409c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f5b8;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1086409cc; end: 108640a0b;  */

void FUN_1086409cc(void)

{
  func_0x000108640c3c();
  return;
}



/* Entry: 108640a0c; end: 108640a57;  */

void FUN_108640a0c(void)

{
  func_0x000108640c18();
  func_0x000108640c2c();
  FUN_1086408ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7160();
  func_0x000108640c10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108640a58; end: 108640aa3;  */

void FUN_108640a58(void)

{
  func_0x000108640c18();
  func_0x000108640c2c();
  FUN_1086408ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5480();
  func_0x000108640c10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108640aa4; end: 108640aef;  */

void FUN_108640aa4(void)

{
  func_0x000108640c18();
  func_0x000108640c2c();
  FUN_1086408ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7180();
  func_0x000108640c10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108640af0; end: 108640b53;  */

void FUN_108640af0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1086408ac(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7140(uVar2);
  func_0x000108640c10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108640b54; end: 108640be7;  */

long FUN_108640b54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5f5b8;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108640be8; end: 108640c47;  */

void FUN_108640be8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5f5f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108640c48; end: 108640cbf; -[SCNMessagingTaskSendManager initWithCpp:] */

undefined1 * FUN_108640c48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd2f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108640fc0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c28714(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108640cc0; end: 108640d67; -[SCNMessagingTaskSendManager retryTaskByTaskId:callback:] */

void FUN_108640cc0(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x000108640fd0();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108641048();
  func_0x00010864103c();
  func_0x000108640fec(*(undefined8 *)(*plVar1 + 0x10));
  func_0x000108640fe4();
  func_0x000108641018();
  func_0x000108641020();
  func_0x000108641028();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c54cf0; end: 100c54d63;  */

void FUN_100c54cf0(void)

{
  func_0x000107c610f4(PTR_PTR_1126bb5b0);
  func_0x000107c49198();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c54d64; end: 100c54dd7; -[SCFriendsFetchBlizzardLogger initWithUserBlizzard:] */

undefined1 * FUN_100c54d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fdca0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c54dd8; end: 100c54f13; -[SCFriendsFetchBlizzardLogger logFriendsFetchEventWithSuccess:errorMsg:triggerSource:syncType:friendCountFetched:bestFriendsCount:addedMeCount:overallLatencyMS:networkLatencyMS:] */

/* WARNING: Possible PIC construction at 0x000100c54e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c54e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c54e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c54eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c54e8c) */
/* WARNING: Removing unreachable block (ram,0x000100c54e78) */
/* WARNING: Removing unreachable block (ram,0x000100c54e64) */
/* WARNING: Removing unreachable block (ram,0x000100c54ef0) */

void FUN_100c54dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d0;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61160(puVar1);
  func_0x000107c59aa8();
  func_0x000107c54664(puVar1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c54f14; end: 100c54f67; -[SCAFriendsFetchEvent setSuccess:] */

void FUN_100c54f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c54f68; end: 100c54f7f; -[SCAFriendsFetchEvent setErrorMessage:] */

void FUN_100c54f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,4,param_3,0);
  return;
}



/* Entry: 100c54f80; end: 100c54f97; -[SCAFriendsFetchEvent setTriggerSource:] */

void FUN_100c54f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb6978,10,param_3,0);
  return;
}



/* Entry: 100c54f98; end: 100c54feb; -[SCAFriendsFetchEvent setFriendCountFetched:] */

void FUN_100c54f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fdaa18,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c54fec; end: 100c5503f; -[SCAFriendsFetchEvent setBestUserIdCount:] */

void FUN_100c54fec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fda9f8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c55040; end: 100c55093; -[SCAFriendsFetchEvent setOverallLatencyMS:] */

void FUN_100c55040(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fdaa58,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c55094; end: 100c550e7; -[SCAFriendsFetchEvent setNetworkLatencyMS:] */

void FUN_100c55094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fdaa38,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c550e8; end: 100c551cb;  */

/* WARNING: Possible PIC construction at 0x000100c55164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c55190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c551b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c55194) */
/* WARNING: Removing unreachable block (ram,0x000100c5519c) */
/* WARNING: Removing unreachable block (ram,0x000100c55168) */
/* WARNING: Removing unreachable block (ram,0x000100c551b4) */

void FUN_100c550e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  param_1 = param_1 + 0x28;
  func_0x000107c61148();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6071c();
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c4bd48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c551cc; end: 100c55257; -[SCFriendSyncGrapheneLogger logOutgoingSyncCompletedWithMode:latencyMs:success:] */

void FUN_100c551cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eec618;
  if (param_3 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eec638;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110eec5f8;
  if (param_3 != 1) {
    ppuVar2 = ppuVar1;
  }
  func_0x000107c61174(ppuVar2);
  FUN_100c55258(*(undefined8 *)(param_1 + 8),ppuVar2,param_4);
  if ((param_5 & 1) == 0) {
    func_0x000108bf6e08(*(undefined8 *)(param_1 + 8),
                        &PTR____CFConstantStringClassReference_110ee6f98,ppuVar2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 100c55258; end: 100c553cb;  */

void FUN_100c55258(long param_1,undefined *param_2,undefined1 *param_3,undefined1 *param_4,
                  long param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined1 uStack_158;
  undefined8 *puStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar12 = &UNK_10f508987;
    }
    else {
      puVar12 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    func_0x00010002b838(auStack_60,puVar12);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110ab7ad0);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = (undefined1 *)puVar9;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
      puVar8 = (undefined1 *)puVar9;
      param_4 = param_3;
    }
  }
  puVar12 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  lVar2 = *(long *)(puVar12 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110eec618;
  if (puVar8 != (undefined1 *)0x2) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110eec638;
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110eec5f8;
  if (puVar8 != (undefined1 *)0x1) {
    ppuVar6 = ppuVar3;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110eec678;
  if (param_5 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110eec658;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eec698;
  }
  if (param_4 != (undefined1 *)0x0) {
    ppuVar1 = ppuVar3;
  }
  pcStack_88 = FUN_100c553cc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar6;
  ppuVar3 = ppuVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c61174(ppuVar6);
  uVar7 = SUB81(ppuVar4,0);
  func_0x000107c61174(ppuVar1);
  puVar9 = (undefined8 *)0x0;
  if (lVar2 != 0) {
    plVar10 = *(long **)(lVar2 + 8);
    func_0x000107c61174(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar3 = ppuVar6;
      func_0x000107c61178(ppuVar6);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(ppuVar6);
    func_0x00010002b838(auStack_f8,ppuVar3);
    func_0x000107c61174(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f508987;
    }
    else {
      func_0x000107c61178(ppuVar1);
      ppuVar3 = ppuVar1;
      func_0x000107c3ac4c(ppuVar1);
    }
    func_0x000107c61170(ppuVar1);
    func_0x00010002b838(auStack_e0,ppuVar3);
    puStack_118 = (undefined *)0x0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&puStack_118,auStack_f8,&lStack_c8,2);
    puVar12 = &UNK_110ab7a80;
    ppuVar3 = &puStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110ab7a80,ppuVar3,1);
    ppuStack_100 = &puStack_118;
    func_0x00010007e5dc(&ppuStack_100);
    lVar2 = 0;
    puVar9 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar2] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_e0 + lVar2));
      }
      uVar7 = SUB81(puVar12,0);
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  func_0x000107c61170(ppuVar1);
  ppuVar4 = ppuVar6;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(ppuVar1);
  if (cStack_e1 < '\0') {
    func_0x000107c60e14(auStack_f8[0]);
  }
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(ppuVar6);
  ppuVar5 = ppuVar4;
  func_0x000107c60bd8();
  pcStack_128 = FUN_100c55664;
  puStack_150 = puVar9;
  ppuStack_148 = ppuVar4;
  ppuStack_140 = ppuVar1;
  ppuStack_138 = ppuVar6;
  ppuStack_130 = &puStack_90;
  func_0x000107c61174(ppuVar3);
  ppuVar6 = ppuVar5 + 7;
  func_0x000107c61148(ppuVar6);
  func_0x000107c3ad74();
  func_0x000107c61170(ppuVar6);
  puVar12 = ppuVar5[6];
  if ((puVar12 != (undefined *)0x0) && (puVar11 = ppuVar5[5], puVar11 != (undefined *)0x0)) {
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_100c55f84;
    puStack_170 = &UNK_1108523f8;
    func_0x000107c61174(puVar12);
    puStack_160 = puVar12;
    uStack_158 = uVar7;
    func_0x000107c61174(ppuVar3);
    ppuStack_168 = ppuVar3;
    func_0x00010007380c(puVar11,&puStack_188);
    func_0x000107c61170(ppuStack_168);
    func_0x000107c61170(puStack_160);
  }
  func_0x000107c61170(ppuVar3);
  return;
}



/* Entry: 100c553cc; end: 100c55433; -[SCFriendSyncGrapheneLogger logCoordinatedSyncResultWithMode:outgoingError:incomingError:] */

void FUN_100c553cc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined1 uStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_1 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110eec618;
  if (param_3 != 2) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110eec638;
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110eec5f8;
  if (param_3 != 1) {
    ppuVar6 = ppuVar3;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110eec678;
  if (param_5 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110eec658;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eec698;
  }
  if (param_4 != 0) {
    ppuVar1 = ppuVar3;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar6;
  ppuVar3 = ppuVar1;
  func_0x000107c61174(ppuVar6);
  uVar7 = SUB81(ppuVar4,0);
  func_0x000107c61174(ppuVar1);
  puVar10 = (undefined8 *)0x0;
  if (lVar2 != 0) {
    plVar9 = *(long **)(lVar2 + 8);
    func_0x000107c61174(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar3 = ppuVar6;
      func_0x000107c61178(ppuVar6);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(ppuVar6);
    func_0x00010002b838(auStack_78,ppuVar3);
    func_0x000107c61174(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f508987;
    }
    else {
      func_0x000107c61178(ppuVar1);
      ppuVar3 = ppuVar1;
      func_0x000107c3ac4c(ppuVar1);
    }
    func_0x000107c61170(ppuVar1);
    func_0x00010002b838(auStack_60,ppuVar3);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    puVar11 = &UNK_110ab7a80;
    ppuVar3 = &puStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110ab7a80,ppuVar3,1);
    ppuStack_80 = &puStack_98;
    func_0x00010007e5dc(&ppuStack_80);
    lVar2 = 0;
    puVar10 = auStack_78;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      uVar7 = SUB81(puVar11,0);
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  func_0x000107c61170(ppuVar1);
  ppuVar4 = ppuVar6;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(ppuVar1);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(ppuVar6);
  ppuVar5 = ppuVar4;
  func_0x000107c60bd8();
  pcStack_a8 = FUN_100c55664;
  puStack_d0 = puVar10;
  ppuStack_c8 = ppuVar4;
  ppuStack_c0 = ppuVar1;
  ppuStack_b8 = ppuVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(ppuVar3);
  ppuVar6 = ppuVar5 + 7;
  func_0x000107c61148(ppuVar6);
  func_0x000107c3ad74();
  func_0x000107c61170(ppuVar6);
  puVar11 = ppuVar5[6];
  if ((puVar11 != (undefined *)0x0) && (puVar8 = ppuVar5[5], puVar8 != (undefined *)0x0)) {
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_100c55f84;
    puStack_f0 = &UNK_1108523f8;
    func_0x000107c61174(puVar11);
    puStack_e0 = puVar11;
    uStack_d8 = uVar7;
    func_0x000107c61174(ppuVar3);
    ppuStack_e8 = ppuVar3;
    func_0x00010007380c(puVar8,&puStack_108);
    func_0x000107c61170(ppuStack_e8);
    func_0x000107c61170(puStack_e0);
  }
  func_0x000107c61170(ppuVar3);
  return;
}



/* Entry: 100c55434; end: 100c55663;  */

void FUN_100c55434(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  func_0x000107c61174(param_2);
  uVar4 = SUB81(puVar1,0);
  func_0x000107c61174(param_3);
  puVar8 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f508987;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    func_0x000107c61174(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f508987;
    }
    else {
      func_0x000107c61178(param_3);
      puVar2 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110ab7a80;
    puVar2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110ab7a80,puVar2,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar5 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      uVar4 = SUB81(puVar1,0);
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  func_0x000107c61170(param_3);
  puVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  puVar3 = puVar1;
  func_0x000107c60bd8();
  pcStack_a8 = FUN_100c55664;
  puStack_d0 = puVar8;
  puStack_c8 = puVar1;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar2);
  puVar1 = puVar3 + 0x38;
  func_0x000107c61148(puVar1);
  func_0x000107c3ad74();
  func_0x000107c61170(puVar1);
  lVar5 = *(long *)(puVar3 + 0x30);
  if ((lVar5 != 0) && (lVar6 = *(long *)(puVar3 + 0x28), lVar6 != 0)) {
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_100c55f84;
    puStack_f0 = &UNK_1108523f8;
    func_0x000107c61174(lVar5);
    lStack_e0 = lVar5;
    uStack_d8 = uVar4;
    func_0x000107c61174(puVar2);
    puStack_e8 = puVar2;
    func_0x00010007380c(lVar6,&puStack_108);
    func_0x000107c61170(puStack_e8);
    func_0x000107c61170(lStack_e0);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 100c55664; end: 100c5573f;  */

void FUN_100c55664(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174(param_3);
  lVar2 = param_1 + 0x38;
  func_0x000107c61148(lVar2);
  func_0x000107c3ad74();
  func_0x000107c61170(lVar2);
  lVar2 = *(long *)(param_1 + 0x30);
  if ((lVar2 != 0) && (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_100c55f84;
    puStack_50 = &UNK_1108523f8;
    func_0x000107c61174(lVar2);
    lStack_40 = lVar2;
    uStack_38 = param_2;
    func_0x000107c61174(param_3);
    uStack_48 = param_3;
    func_0x00010007380c(lVar1,&puStack_68);
    func_0x000107c61170(uStack_48);
    func_0x000107c61170(lStack_40);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c55740; end: 100c5589f; -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersFetchDataRequest:withSuccess:andError:] */

/* WARNING: Possible PIC construction at 0x000100c557f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c55814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c55864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c55874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c55868) */
/* WARNING: Removing unreachable block (ram,0x000100c55818) */
/* WARNING: Removing unreachable block (ram,0x000100c55870) */
/* WARNING: Removing unreachable block (ram,0x000100c5581c) */
/* WARNING: Removing unreachable block (ram,0x000100c557fc) */
/* WARNING: Removing unreachable block (ram,0x000100c55878) */

void FUN_100c55740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b15e8;
  func_0x000107c61174(param_5);
  func_0x000107c43280(puVar1,param_2,param_3);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126daff8;
  func_0x000107c610f4(PTR_PTR_1126daff8);
  func_0x000107c463ac();
  func_0x000107c4d664(*(undefined8 *)(param_1 + 0x90),param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c558a0; end: 100c558e7;  */

void FUN_100c558a0(long param_1,int param_2)

{
  func_0x000107c3ebcc();
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    func_0x000107c61148(param_1);
    func_0x000107c3cbfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100c558e8; end: 100c55917; -[SCChatEligibilityProvider _updateHasSyncedFriends] */

void FUN_100c558e8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c55050(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcc790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__announceUpdateWithReason__112550b80,
             &PTR____CFConstantStringClassReference_110e03b18);
  return;
}



/* Entry: 100c55918; end: 100c5591f; -[SCChatEligibilityProvider setHasSyncedFriends:] */

void FUN_100c55918(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x4d) = param_3;
  return;
}



/* Entry: 100c55920; end: 100c55993;  */

void FUN_100c55920(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c55994; end: 100c55abf; -[SCUserInfoServicesEntryPoint _birthdayProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c55994(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf518;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf518);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c4d73c(PTR_PTR_1126ae750);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112722ec0);
  func_0x000107c421ac(uVar3);
  func_0x000107c61180();
  func_0x000107c407c8(uVar5,param_2,0,ppuVar1,puVar2,uVar3,&PTR___NSConcreteGlobalBlock_110885468);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  func_0x000107c610f4(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  func_0x000107c61148(param_1);
  lVar4 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c46bcc(puVar2,param_2,lVar4,0,uVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c55ac0; end: 100c55b4f;  */

void FUN_100c55ac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c61174(param_2);
  func_0x000107c4a858(puVar1);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x0001004e5030(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  puVar3 = puVar1;
  func_0x000107c41344(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c55b50; end: 100c55ba3;  */

void FUN_100c55b50(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe3d0 != -1) {
    func_0x00010002a2fc(0x1137fe3d0,&PTR___NSConcreteGlobalBlock_110d9ef30);
  }
  uVar1 = uRam00000001137fe3c8;
  func_0x000107c61174(uRam00000001137fe3c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c55ba4; end: 100c55ce3; -[SCSnapchattersDataRequestTracker didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_100c55ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c6111c(auStack_58,auStack_48);
  func_0x000107c61174(param_3);
  uStack_50 = param_4;
  func_0x000107c61174(param_5);
  func_0x000107c4e524(uVar1);
  func_0x000107c3bee8(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_58);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c55ce4; end: 100c55d47; -[SCSnapchattersDataRequestTracker _markDataFullySyncedIfNeeded:] */

void FUN_100c55ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100c55d48;
  puStack_20 = &UNK_110ab7920;
  uStack_18 = param_1;
  func_0x000107c4c614(param_3,param_2,&puStack_38,0,0);
  return;
}



/* Entry: 100c55d48; end: 100c55d63;  */

void FUN_100c55d48(long param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 0xfffffffffffffffb) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b1330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setIsFriendsDataFullySynced__112649ef0,1);
    return;
  }
  return;
}



/* Entry: 100c55d64; end: 100c55e03;  */

/* WARNING: Possible PIC construction at 0x000100c55dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c55de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c55db0) */
/* WARNING: Removing unreachable block (ram,0x000100c55dec) */

void FUN_100c55d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610fc(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSLocale_1126af788);
  func_0x000107c474b4();
  func_0x000107c5601c(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100c55e04; end: 100c55e0b; -[SCSnapchattersDataRequestTracker setIsFriendsDataFullySynced:] */

void FUN_100c55e04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 100c55e0c; end: 100c55e17; +[SCSnapchattersDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_100c55e0c(void)

{
  return &PTR____CFConstantStringClassReference_110eec2b8;
}



/* Entry: 100c55e18; end: 100c55f23; -[SCDataCoordinatorListenerAnnouncer dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

/* WARNING: Possible PIC construction at 0x000100c55e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c55ed0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c55e8c) */
/* WARNING: Removing unreachable block (ram,0x000100c55ed4) */

void FUN_100c55e18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_50;
  long *plStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_100c55f24(&plStack_50,param_1 + 0x48);
  if ((plStack_50 == (long *)0x0) || (lVar4 = *plStack_50, lVar4 == plStack_50[1])) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x000107c60d68(plStack_48);
      }
    }
  }
  else {
    func_0x000107c61148(lVar4);
    func_0x000107c41224();
    param_4 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c55f24; end: 100c55f83;  */

void FUN_100c55f24(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  func_0x000107c60c40(param_2);
  func_0x000107c60dc4();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 100c55f84; end: 100c55f9b;  */

void FUN_100c55f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c55f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100c55f9c; end: 100c5610f; -[SCSnapchattersGrapheneLogger logStreakErrorsWithTypes:] */

/* WARNING: Possible PIC construction at 0x000100c56088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c560a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c560d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c56138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c56148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5613c) */
/* WARNING: Removing unreachable block (ram,0x000100c560d4) */
/* WARNING: Removing unreachable block (ram,0x000100c5610c) */
/* WARNING: Removing unreachable block (ram,0x000100c560ec) */
/* WARNING: Removing unreachable block (ram,0x000100c560a4) */
/* WARNING: Removing unreachable block (ram,0x000100c560b0) */
/* WARNING: Removing unreachable block (ram,0x000100c5608c) */
/* WARNING: Removing unreachable block (ram,0x000100c5614c) */

void FUN_100c55f9c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_130;
  ulong *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puStack_128 = (ulong *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar1 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (puVar1 != (undefined *)0x0) {
    if (*plStack_120 != *plStack_120) {
      func_0x000107c61128(param_3);
    }
    uVar2 = *puStack_128;
    param_3 = PTR_PTR_1126db0d8;
    func_0x000107c5c0c8(PTR_PTR_1126db0d8);
    func_0x000107c61180();
    func_0x000107c5d388();
    if (uVar2 < 4) {
      func_0x000107c5e508(param_3,param_2,&PTR____CFConstantStringClassReference_110dad058,
                          (&PTR_PTR_110ab72f8)[uVar2]);
      func_0x000107c61180();
    }
    else {
      func_0x000107c45314(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c56110; end: 100c56163;  */

/* WARNING: Possible PIC construction at 0x000100c56138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c56148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5613c) */
/* WARNING: Removing unreachable block (ram,0x000100c5614c) */

void FUN_100c56110(long param_1)

{
  func_0x000107c61120(param_1 + 0x50);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 100c56164; end: 100c5616b;  */

void FUN_100c56164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c5616c; end: 100c561bf;  */

void FUN_100c5616c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c41b6c(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined1 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c561c0; end: 100c562f7; -[SCSnapchattersDataRequestListenerAnnouncer didEndSnapchattersFetchDataRequest:withSuccess:error:] */

/* WARNING: Possible PIC construction at 0x000100c56254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c562a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c56258) */
/* WARNING: Removing unreachable block (ram,0x000100c562a4) */

void FUN_100c561c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puStack_60;
  long *plStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x0001009f2bf8(&puStack_60,param_1 + 0x48);
  if ((puStack_60 == (ulong *)0x0) || (uVar4 = *puStack_60, uVar4 == puStack_60[1])) {
    uVar4 = param_5;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        func_0x000107c60d68(plStack_58);
      }
    }
  }
  else {
    func_0x000107c61148();
    uVar5 = uVar4;
    func_0x000107c61164();
    if ((uVar5 & 1) != 0) {
      func_0x000107c41b6c(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 100c562f8; end: 100c563ef; -[SCDocObjectFideliusFriendMetadataObservableRepository didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_100c562f8(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  if ((param_4 != 0) && (param_3 != 0)) {
    func_0x000107c61144(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c61174(param_3);
    func_0x000107c4e524(uVar1);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c563f0; end: 100c563f7; -[SCLensEffectOffscreenRenderingServices offscreenRenderingWarmuper] */

undefined8 FUN_100c563f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c563f8; end: 100c563ff; -[SCSRLensEffectPluginCameraLifecycleProxyServices cameraLifecycleEventObservable] */

undefined8 FUN_100c563f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c56400; end: 100c56463; -[SCGroupsDataUpdater didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_100c56400(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_4 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_100c56464;
    puStack_20 = &UNK_1108941f0;
    uStack_18 = param_1;
    func_0x000107c4c614(param_3,param_2,&puStack_38,0,0);
  }
  return;
}



/* Entry: 100c56464; end: 100c5646b;  */

void FUN_100c56464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchSnapchattersForAllGroups_112562a40);
  return;
}



/* Entry: 100c5646c; end: 100c5658b; -[SCGroupsDataUpdater _fetchSnapchattersForAllGroups] */

void FUN_100c5646c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ba388;
  func_0x000107c610f4();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c48b58();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174();
  func_0x000107c5dc64(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100c5658c; end: 100c565d3; -[ExternalMusicOffscreenPlaybackEventServices playbackEventNotifierObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5658c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe84d8;
  func_0x000107c61428(param_1 + _DAT_112fe84d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100c565d4; end: 100c56967; -[SCSnapRendererLensEffectPluginImpl initWithLaunchDataServices:lensRenderingFactory:lensEffectWarmer:cameraLifecycleEventObservable:applicationLifecycleEvents:performerProvider:lensProcessingUseCase:performer:crashLogger:lensContentPreparationStrategy:memoriesNavigationServiceFuture:offscreenPlaybackEventNotifierObjc:processingMetadataApplyingFactory:lensLaunchTimeOverrideEnabled:shouldGenerateOnCameraPage:] */

undefined8 *
FUN_100c565d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined4 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  puStack_70 = PTR_PTR_1126f7d48;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[8];
    puVar1[8] = param_16;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0xcb) = param_17._1_1_;
    *(undefined1 *)((long)puVar1 + 0xbc) = param_17._1_1_;
    func_0x000107c61174(param_13);
    uVar2 = puVar1[6];
    puVar1[6] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar4 = puVar1[9];
    puVar1[9] = uVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c40ab0();
    func_0x000107c61180();
    uVar5 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar5);
    *(undefined1 *)(puVar1 + 0x19) = (undefined1)param_17;
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 0x17) = 0;
    func_0x000107c61144(auStack_80,puVar1);
    func_0x000107c6111c(auStack_88,auStack_80);
    func_0x000107c5dc64(param_14);
    func_0x000107c3c9e4(puVar1);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c56968; end: 100c569ab;  */

void FUN_100c56968(undefined8 param_1,long param_2)

{
  func_0x000107c44178();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c4b690(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c569ac; end: 100c569cf; -[SCNativeMessagingSessionManager getNativeConversationManagerOrNilIfDisposed] */

void FUN_100c569ac(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000107c43fbc();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c569d0; end: 100c56a03;  */

void FUN_100c569d0(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3bfb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c56a04; end: 100c56c93; -[SCDocObjectFideliusFriendMetadataObservableRepository _nextSnapchattersFetchDataRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c56a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
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
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f2e8521;
  func_0x0001000ba800();
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c43388();
  func_0x000107c61180();
  uVar11 = *(ulong *)(param_1 + 0x30);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x000107c61174(lVar2);
  lVar4 = lVar2;
  func_0x000107c4080c(lVar2,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          func_0x000107c61128(lVar2);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        lVar5 = lVar2;
        func_0x000107c4d9e8(lVar2,param_2,uVar12);
        func_0x000107c61180();
        uVar6 = uVar11;
        func_0x000107c4d9e8(uVar11,param_2,uVar12);
        func_0x000107c61180();
        uVar7 = uVar6;
        func_0x000107c49cec();
        func_0x000107c61170(uVar6);
        if ((uVar7 & 1) == 0) {
          func_0x000107c56bd8(puVar3,param_2,lVar5,uVar12);
        }
        func_0x000107c61170(lVar5);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar2;
      func_0x000107c4080c(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  func_0x000107c61170(lVar2);
  puVar8 = puVar3;
  func_0x000107c40794();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar11);
  puVar3 = PTR_PTR_1126b15e8;
  func_0x000107c43280(PTR_PTR_1126b15e8,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c3bfa0(param_1,param_2,puVar8,lVar2,puVar3);
  lVar4 = param_1;
  func_0x000107c3bac4();
  if ((int)lVar4 != 0) {
    func_0x000107c3bfa8(param_1,param_2,lVar2,puVar3);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar2);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001000e2a84(puVar1);
  func_0x000107c60bd8();
  func_0x000107c611ac();
  func_0x000107c610f4(PTR_PTR_1126db900);
  func_0x000107c473cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c56c94; end: 100c56d0b; -[SCLensEffectOffscreenRenderingFactoryImpl createOffscreenProcessorWithUsecase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c56c94(void)

{
  func_0x000107c610f4(PTR_PTR_1126db900);
  func_0x000107c473cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c56d0c; end: 100c56f57; -[SCLensProcessingOffscreenAggregator initWithLensProcessingOffscreenFactory:lensProcessingPluginScopeExposer:lensProcessingPluginsScopeServices:lensProcessingURIPluginScopeExposer:lensCarouselStudySettings:bitmojiScopeExposer:performerProvider:usecase:inmemoryAssetsDataProvider:] */

undefined8 *
FUN_100c56d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126fe0d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 1,param_4);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 3,param_6);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 4,param_8);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    func_0x000107c61170(uVar2);
    puVar1[0xe] = param_10;
    func_0x000107c61174(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    func_0x000107c61170(uVar2);
    FUN_100c56f58(param_10);
    func_0x000107c61180();
    lVar3 = puVar1[8];
    func_0x000107c4f2f4();
    func_0x000107c61180();
    if (lVar3 == 0) {
      uVar5 = puVar1[9];
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar2 = uVar5;
      func_0x000107c4e60c();
      func_0x000107c61180();
      uVar4 = puVar1[0xf];
      puVar1[0xf] = uVar2;
      func_0x000107c61170(uVar4);
    }
    else {
      func_0x000107c61174(lVar3);
      uVar5 = puVar1[0xf];
      puVar1[0xf] = lVar3;
    }
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_10);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c56f58; end: 100c56f7f;  */

undefined ** FUN_100c56f58(long param_1)

{
  if (param_1 - 1U < 9) {
    return (undefined **)(&PTR_PTR_110ac17a8)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e07fb8;
}



/* Entry: 100c56f80; end: 100c56ff7; -[SCLensProcessingOffscreenFactory processingPerformerWithIdentifier:] */

void FUN_100c56f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d9c0(uVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c611f0(param_1 + 0x38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c56ff8; end: 100c57057;  */

/* WARNING: Possible PIC construction at 0x000100c57040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c57044) */

void FUN_100c56ff8(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if ((param_3 == 0) && (param_1 != 0)) {
    func_0x000107c611a0(param_1 + 0x78,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c57058; end: 100c57357; -[SCSnapRendererLensEffectPluginImpl _subscribeToLifecycleEvents] */

void FUN_100c57058(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  if ((*(byte *)(param_1 + 0xcb) & 1) == 0) {
    func_0x000107c61144(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c4da88(uVar2);
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    puStack_90 = &UNK_106f250ec;
    puStack_88 = &UNK_110983718;
    func_0x000107c6111c(auStack_80,auStack_78);
    uVar3 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5e39c(uVar4);
    func_0x000107c61180();
    uVar3 = uVar4;
    func_0x000107c4da88();
    func_0x000107c61180();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    puStack_b8 = &UNK_106f251e0;
    puStack_b0 = &UNK_110846510;
    func_0x000107c6111c(auStack_a8,auStack_78);
    uVar2 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c41b80(uVar4);
    func_0x000107c61180();
    uVar3 = uVar4;
    func_0x000107c4da88();
    func_0x000107c61180();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    puStack_e0 = &UNK_106f25214;
    puStack_d8 = &UNK_110846510;
    func_0x000107c6111c(auStack_d0,auStack_78);
    uVar2 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c419f0(uVar4);
    func_0x000107c61180();
    uVar3 = uVar4;
    func_0x000107c4da88();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_f8,auStack_78);
    uVar2 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_f8);
    func_0x000107c61120(auStack_d0);
    func_0x000107c61120(auStack_a8);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  return;
}



/* Entry: 100c57358; end: 100c573fb; -[SCSnapRendererLensEffectPluginFactoryImpl initWithLensEffectPluginImpl:supportedDestinations:] */

undefined1 *
FUN_100c57358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f7d40;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c573fc; end: 100c574b3; -[SCFideliusFriendMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c573fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c5748c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c57498;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112787370);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112787370)) ||
         (func_0x000107c49cec(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112787374);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_112787374)) {
          func_0x000107c49cec();
          goto LAB_100c57498;
        }
        goto LAB_100c5748c;
      }
    }
    lVar3 = 0;
  }
LAB_100c57498:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c574b4; end: 100c575c3; -[SCDocObjectFideliusFriendMetadataObservableRepository _nextDiffFideliusFriendMetadataMap:latestFideliusFriendMetadataMap:snapchattersDataRequest:] */

/* WARNING: Possible PIC construction at 0x000100c57558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c57574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c57584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5755c) */
/* WARNING: Removing unreachable block (ram,0x000100c57588) */

void FUN_100c574b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = &UNK_10f2e8552;
  func_0x0001000ba800(&UNK_10f2e8552);
  func_0x000107c40808();
  if (param_3 == 0) {
    func_0x0001000e2a84(puVar1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    param_5 = PTR_PTR_1126bd0b8;
    func_0x000107c610f4(PTR_PTR_1126bd0b8);
    func_0x000107c46588();
    func_0x000107c4d664(uVar2,param_2,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100c575c4; end: 100c575db; -[SCDocObjectFideliusFriendMetadataObservableRepository _isClosedLoopBridgeEnabled] */

void FUN_100c575c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df63b8,0,0);
  return;
}



/* Entry: 100c575dc; end: 100c5769b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c575dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d33e8;
    func_0x000107c610f4(PTR_PTR_1126d33e8);
    lVar1 = param_1 + _DAT_11276135c;
    func_0x000107c61148(lVar1);
    lVar2 = param_1 + _DAT_112761360;
    func_0x000107c61148(lVar2);
    lVar3 = lVar2;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c487d0(puVar4,param_2,lVar1,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c5769c; end: 100c57797; -[SCMemoriesSnapRendererImpl initWithSnapRendererServices:circumstanceEngine:] */

undefined1 *
FUN_100c5769c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f7d80;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x000107c43bf4();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c57798; end: 100c577f7; -[SCMemoriesSnapRendererImpl registerPlugins:] */

/* WARNING: Possible PIC construction at 0x000100c577d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c577dc) */

void FUN_100c57798(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if ((*(long *)(param_1 + 0x10) == 0) && (lVar1 = param_3, func_0x000107c40808(), lVar1 != 0)) {
    func_0x000107c61174(param_3);
    lVar1 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c577f8; end: 100c5781b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c577f8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127611f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c5781c; end: 100c57963;  */

void FUN_100c5781c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_100c577f8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar3 = uVar2;
  FUN_100c57964();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c3b364();
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c404c0(uVar6);
  func_0x000107c61180();
  uVar4 = uVar6;
  func_0x000107c404bc();
  func_0x000107c61180();
  uVar7 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4fc88();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 100c57964; end: 100c57977;  */

void FUN_100c57964(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f225b8,0,0);
  return;
}



/* Entry: 100c57978; end: 100c57983; -[SCSnapchatterObserver .cxx_destruct] */

void FUN_100c57978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c57984; end: 100c579d7; -[SCDocObjectObserver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c5799c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c579b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c579a0) */
/* WARNING: Removing unreachable block (ram,0x000100c579b8) */

void FUN_100c57984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 100c579d8; end: 100c57a37; -[SCSQLiteDocObjectObservationToken dealloc] */

void FUN_100c579d8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148(lVar1);
  FUN_100c57a38();
  func_0x000107c61170(lVar1);
  puStack_28 = PTR_PTR_1127065e8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100c57a38; end: 100c57af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c57a38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_1 != 0) {
    func_0x000107c61144(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278eb04);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_100c58ab8;
    puStack_70 = &UNK_110982ac8;
    func_0x000107c6111c(auStack_68,auStack_48);
    uStack_60 = param_2;
    uStack_58 = param_3;
    uStack_50 = param_4;
    func_0x00010007380c(uVar1,&puStack_88);
    func_0x000107c61120(auStack_68);
    func_0x000107c61120(auStack_48);
  }
  return;
}



/* Entry: 100c57af4; end: 100c57afb; -[SCSQLiteDocObjectObservationToken .cxx_destruct] */

void FUN_100c57af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x20);
  return;
}



/* Entry: 100c57afc; end: 100c57c03; -[SCFriendsFeedItem isEqual:] */

long FUN_100c57afc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c57bdc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c57be8;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x000107c49cec(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x000107c49cec();
                  goto LAB_100c57be8;
                }
                goto LAB_100c57bdc;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_100c57be8:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c57c04; end: 100c57ce3; -[SCFriendsFeedEntity isEqual:] */

long FUN_100c57c04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c57cbc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c57cc8;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x000107c49cec();
            goto LAB_100c57cc8;
          }
          goto LAB_100c57cbc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_100c57cc8:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c57ce4; end: 100c5801b; -[SCSnapchatter isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c57ce4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c57ff4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c58000;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + (long)_DAT_1127912ac) == *(char *)(param_3 + (long)_DAT_1127912ac) &&
          (*(char *)(param_1 + (long)_DAT_1127912bc) == *(char *)(param_3 + (long)_DAT_1127912bc)))
         && (*(int *)(param_1 + (long)_DAT_1127912dc) == *(int *)(param_3 + (long)_DAT_1127912dc)))
        && (*(char *)(param_1 + (long)_DAT_1127912f8) == *(char *)(param_3 + (long)_DAT_1127912f8)))
       )) {
      lVar3 = *(long *)(param_1 + (long)_DAT_1127912a0);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912a0)) ||
         (func_0x000107c49cec(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_1127912a4);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912a4)) ||
           (func_0x000107c49cec(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_1127912a8);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912a8)) ||
             (func_0x000107c49cec(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_1127912b0);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912b0)) ||
               (func_0x000107c49cec(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_1127912b4);
              if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912b4)) ||
                 (func_0x000107c49cec(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + (long)_DAT_1127912b8);
                if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912b8)) ||
                   (func_0x000107c49cec(), (int)lVar3 != 0)) {
                  lVar3 = *(long *)(param_1 + (long)_DAT_1127912c0);
                  if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912c0)) ||
                     (func_0x000107c49cec(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + (long)_DAT_1127912c4);
                    if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912c4)) ||
                       (func_0x000107c49cec(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + (long)_DAT_1127912c8);
                      if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912c8)) ||
                         (func_0x000107c49cec(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + (long)_DAT_1127912cc);
                        if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912cc)) ||
                           (func_0x000107c49cec(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + (long)_DAT_1127912d0);
                          if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912d0)) ||
                             (func_0x000107c49cec(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + (long)_DAT_1127912d4);
                            if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912d4)) ||
                               (func_0x000107c49cec(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + (long)_DAT_1127912d8);
                              if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912d8)) ||
                                 (func_0x000107c49cec(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + (long)_DAT_1127912e0);
                                if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912e0)) ||
                                   (func_0x000107c49cec(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + (long)_DAT_1127912e4);
                                  if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912e4)) ||
                                     (func_0x000107c49cec(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + (long)_DAT_1127912e8);
                                    if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912e8)) ||
                                       (func_0x000107c49cec(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + (long)_DAT_1127912ec);
                                      if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912ec)) ||
                                         (func_0x000107c49cec(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + (long)_DAT_1127912f0);
                                        if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127912f0)) ||
                                           (func_0x000107c49cec(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + (long)_DAT_1127912f4);
                                          if (lVar3 != *(long *)(param_3 + (long)_DAT_1127912f4)) {
                                            func_0x000107c49cec();
                                            goto LAB_100c58000;
                                          }
                                          goto LAB_100c57ff4;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_100c58000:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c5801c; end: 100c58123; -[SCSnapchattersBitmojiInfo isEqual:] */

long FUN_100c5801c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c580fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c58108;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x000107c49cec(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x000107c49cec();
                  goto LAB_100c58108;
                }
                goto LAB_100c580fc;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_100c58108:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c58124; end: 100c5828f; -[SCSnapchattersFriendInfo isEqual:] */

long FUN_100c58124(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c58270:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c58274;
    uVar2 = param_1;
    func_0x000107c61158(param_1);
    uVar3 = param_3;
    func_0x000107c6115c(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
          if ((dVar5 < 2.2250738585072014e-308) ||
             (dVar5 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                      2.220446049250313e-16)) {
            lVar4 = *(long *)(param_1 + 0x10);
            if (lVar4 != *(long *)(param_3 + 0x10)) {
              func_0x000107c49cec();
              goto LAB_100c58274;
            }
            goto LAB_100c58270;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_100c58274:
  func_0x000107c61170(param_3);
  return lVar4;
}



/* Entry: 100c58290; end: 100c5835f; -[SCSnapchattersFriendSubtypeInfo isEqual:] */

long FUN_100c58290(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c58338:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c58344;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x000107c49cec();
            goto LAB_100c58344;
          }
          goto LAB_100c58338;
        }
      }
    }
    lVar3 = 0;
  }
LAB_100c58344:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c58360; end: 100c584bf; -[SCSnapchattersMutualFriendInfo isEqual:] */

long FUN_100c58360(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c58498:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c584a4;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))))))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) &&
       ((*(int *)(param_1 + 0x18) == *(int *)(param_3 + 0x18) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      if (((dVar4 < 2.2250738585072014e-308) ||
          (dVar4 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                   2.220446049250313e-16)) &&
         ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
          (func_0x000107c49cec(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != *(long *)(param_3 + 0x30)) {
          func_0x000107c49cec();
          goto LAB_100c584a4;
        }
        goto LAB_100c58498;
      }
    }
    lVar3 = 0;
  }
LAB_100c584a4:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c584c0; end: 100c58583; -[SCSnapchattersFriendmoji isEqual:] */

long FUN_100c584c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c5855c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c58568;
    uVar2 = param_1;
    func_0x000107c61158(param_1);
    uVar3 = param_3;
    func_0x000107c6115c(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x000107c49cec();
          goto LAB_100c58568;
        }
        goto LAB_100c5855c;
      }
    }
    lVar4 = 0;
  }
LAB_100c58568:
  func_0x000107c61170(param_3);
  return lVar4;
}



/* Entry: 100c58584; end: 100c5861b; -[SCSnapchattersBirthday isEqual:] */

bool FUN_100c58584(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      func_0x000107c61158(param_1);
      uVar3 = param_3;
      func_0x000107c6115c(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100c5861c; end: 100c586a3; -[SCSnapchattersReverseBestFriendRank isEqual:] */

bool FUN_100c5861c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      func_0x000107c61158(param_1);
      uVar3 = param_3;
      func_0x000107c6115c(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + 8) == *(int *)(param_3 + 8);
      }
    }
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100c586a4; end: 100c58803; -[SCSnapchattersIncomingFriendInfo isEqual:] */

long FUN_100c586a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c587e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c587e8;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
         ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
          (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
       (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      dVar4 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                    2.220446049250313e-16)) {
          lVar3 = *(long *)(param_1 + 0x10);
          if (lVar3 != *(long *)(param_3 + 0x10)) {
            func_0x000107c49cec();
            goto LAB_100c587e8;
          }
          goto LAB_100c587e4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_100c587e8:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c58804; end: 100c588d3; -[SCFriendsFeedItemStory isEqual:] */

long FUN_100c58804(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c588ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c588b8;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x000107c49cec();
            goto LAB_100c588b8;
          }
          goto LAB_100c588ac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_100c588b8:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c588d4; end: 100c589df;  */

/* WARNING: Possible PIC construction at 0x000100c589f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c58a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c58a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c58a14) */
/* WARNING: Removing unreachable block (ram,0x000100c589fc) */
/* WARNING: Removing unreachable block (ram,0x000100c58a2c) */

long FUN_100c588d4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  lVar2 = param_1;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  lVar5 = 0;
  if (lVar2 != 0) {
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_1);
        }
        uVar3 = *(ulong *)(lVar5 * 8);
        FUN_100beb544();
        if ((uVar3 & 1) != 0) {
          lVar5 = 1;
          goto LAB_100c58998;
        }
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_1;
      func_0x000107c4080c();
    } while (lVar2 != 0);
    lVar5 = 0;
  }
LAB_100c58998:
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    func_0x000107c60e78();
    param_1 = param_1 + 0x30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
    return param_1;
  }
  return lVar5;
}



/* Entry: 100c589e0; end: 100c58a3f; -[SCFriendsFeedItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c589f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c58a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c58a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c58a14) */
/* WARNING: Removing unreachable block (ram,0x000100c589fc) */
/* WARNING: Removing unreachable block (ram,0x000100c58a2c) */

void FUN_100c589e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 100c58a40; end: 100c58a7b; -[SCFriendsFeedItemStory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c58a58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c58a5c) */

void FUN_100c58a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100c58a7c; end: 100c58ab7; -[SCFriendsFeedEntity .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c58a94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c58a98) */

void FUN_100c58a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 100c58ab8; end: 100c58d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c58ab8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1 + 0x20;
  func_0x000107c61148();
  uVar16 = *(ulong *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar4 = lVar3 + _DAT_11278eb50;
    func_0x0001001cfc90(lVar4,&uStack_50);
    if (lVar4 != 0) {
      lVar5 = lVar4 + 0x18;
      FUN_100c54734(lVar5,&uStack_48);
      if (((lVar5 != 0) && (uVar7 = *(ulong *)(lVar5 + 0x20), uVar7 != 0)) &&
         (lVar6 = *(long *)(lVar5 + 0x30), lVar6 != 0)) {
        uVar9 = uVar7 - 1;
        if ((uVar7 & uVar9) == 0) {
          uVar10 = uVar9 & uVar16;
        }
        else {
          uVar10 = uVar16;
          if (uVar7 <= uVar16) {
            uVar10 = 0;
            if (uVar7 != 0) {
              uVar10 = uVar16 / uVar7;
            }
            uVar10 = uVar16 - uVar10 * uVar7;
          }
        }
        lVar8 = *(long *)(lVar5 + 0x18);
        puVar12 = *(undefined8 **)(lVar8 + uVar10 * 8);
        if (puVar12 != (undefined8 *)0x0) {
          for (plVar15 = (long *)*puVar12; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
            uVar13 = plVar15[1];
            if (uVar13 == uVar16) {
              if (plVar15[2] == uVar16) {
                lVar11 = *plVar15;
                if ((uVar7 & uVar9) == 0) {
                  uVar16 = uVar16 & uVar9;
                }
                else if (uVar7 <= uVar16) {
                  uVar10 = 0;
                  if (uVar7 != 0) {
                    uVar10 = uVar16 / uVar7;
                  }
                  uVar16 = uVar16 - uVar10 * uVar7;
                }
                plVar2 = *(long **)(lVar8 + uVar16 * 8);
                do {
                  plVar14 = plVar2;
                  plVar2 = (long *)*plVar14;
                } while ((long *)*plVar14 != plVar15);
                if (plVar14 == (long *)(lVar5 + 0x28)) {
LAB_100c58c2c:
                  if (lVar11 == 0) {
LAB_100c58c60:
                    *(undefined8 *)(lVar8 + uVar16 * 8) = 0;
                    lVar11 = *plVar15;
                    goto LAB_100c58c68;
                  }
                  uVar10 = *(ulong *)(lVar11 + 8);
                  if ((uVar7 & uVar9) == 0) {
                    uVar13 = uVar10 & uVar9;
                  }
                  else {
                    uVar13 = uVar10;
                    if (uVar7 <= uVar10) {
                      uVar13 = 0;
                      if (uVar7 != 0) {
                        uVar13 = uVar10 / uVar7;
                      }
                      uVar13 = uVar10 - uVar13 * uVar7;
                    }
                  }
                  if (uVar13 != uVar16) goto LAB_100c58c60;
LAB_100c58c70:
                  if ((uVar7 & uVar9) == 0) {
                    uVar10 = uVar10 & uVar9;
                  }
                  else if (uVar7 <= uVar10) {
                    uVar9 = 0;
                    if (uVar7 != 0) {
                      uVar9 = uVar10 / uVar7;
                    }
                    uVar10 = uVar10 - uVar9 * uVar7;
                  }
                  if (uVar10 != uVar16) {
                    *(long **)(lVar8 + uVar10 * 8) = plVar14;
                    lVar11 = *plVar15;
                  }
                }
                else {
                  uVar10 = plVar14[1];
                  if ((uVar7 & uVar9) == 0) {
                    uVar10 = uVar10 & uVar9;
                  }
                  else if (uVar7 <= uVar10) {
                    uVar13 = 0;
                    if (uVar7 != 0) {
                      uVar13 = uVar10 / uVar7;
                    }
                    uVar10 = uVar10 - uVar13 * uVar7;
                  }
                  if (uVar10 != uVar16) goto LAB_100c58c2c;
LAB_100c58c68:
                  if (lVar11 != 0) {
                    uVar10 = *(ulong *)(lVar11 + 8);
                    goto LAB_100c58c70;
                  }
                }
                *plVar14 = lVar11;
                *plVar15 = 0;
                *(long *)(lVar5 + 0x30) = lVar6 + -1;
                func_0x000100ab4778(plVar15 + 3);
                func_0x000107c60e14(plVar15);
                if ((*(long *)(lVar5 + 0x30) == 0) &&
                   (func_0x000107c306c0(lVar4 + 0x18,lVar5), *(long *)(lVar4 + 0x30) == 0)) {
                  func_0x000107c306c8(lVar3 + _DAT_11278eb50,lVar4);
                }
                break;
              }
            }
            else {
              if ((uVar7 & uVar9) == 0) {
                uVar13 = uVar13 & uVar9;
              }
              else if (uVar7 <= uVar13) {
                uVar1 = 0;
                if (uVar7 != 0) {
                  uVar1 = uVar13 / uVar7;
                }
                uVar13 = uVar13 - uVar1 * uVar7;
              }
              if (uVar13 != uVar10) break;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100c58d1c; end: 100c58d23;  */

void FUN_100c58d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100c58d24; end: 100c58d33; -[_TtC18SCFideliusServices18SCFideliusServices fideliusKeyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c58d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130443d8));
  return;
}



/* Entry: 100c58d34; end: 100c58d53;  */

void FUN_100c58d34(void)

{
  func_0x000107c61168(&PTR_PTR_1127da850);
  return;
}



/* Entry: 100c58d54; end: 100c58d83;  */

void FUN_100c58d54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100c58d34();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 100c58d84; end: 100c58dbf; -[SCPlayerProvider init] */

void FUN_100c58d84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c58dc0; end: 100c58e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c58dc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d33d0;
    func_0x000107c610f4(PTR_PTR_1126d33d0);
    lVar1 = param_1 + _DAT_112761318;
    func_0x000107c61148(lVar1);
    lVar2 = param_1 + _DAT_11276131c;
    func_0x000107c61148(lVar2);
    lVar3 = lVar2;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c487d0(puVar4,param_2,lVar1,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c58e80; end: 100c58e87; -[SCSpectaclesServerNetworkingServices serverMetadataFetcher] */

undefined8 FUN_100c58e80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c58e88; end: 100c58e8f; -[SCSpectaclesOnDemandResourcesServices onDemandResourceFetching] */

undefined8 FUN_100c58e88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c58e90; end: 100c58e97; -[SCSpectaclesAuthorizationServices authorizationProvider] */

undefined8 FUN_100c58e90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c58e98; end: 100c595eb; -[SCLagunaModule initWithUserSession:userPreferences:featureSettingsService:grapheneRegistry:snapAdsId:usernameProvider:email:birthday:fideliusKeyProvider:notificationManager:playerProvider:userTrackedLogger:deviceFeatureScopeExposer:deviceFeatureScopeServices:networkConnectivityMonitor:networkConnectivityServices:crashLogger:backgroundTaskWrapper:serverMetadataFetcher:onDemandResourceFetcher:simpleContentFetcher:announcer:centralManager:clientControllerScopeExposer:clientControllerScopeServices:workerQueue:temporaryFileWriter:applicationLifecycleEvents:authorizationProvider:] */

undefined8 *
FUN_100c58e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  puStack_80 = PTR_PTR_1126eb630;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 3,param_3);
    func_0x000107c611a0(puVar1 + 1,param_12);
    puVar2 = PTR_PTR_1126c17d8;
    func_0x000107c610f4();
    uVar8 = param_14;
    func_0x000107c5c734(param_14);
    func_0x000107c61180();
    func_0x000107c485f4();
    uVar7 = puVar1[10];
    puVar1[10] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    puVar2 = PTR_PTR_1126c17e0;
    func_0x000107c610f4();
    uVar8 = param_3;
    func_0x000107c5d984(param_3);
    func_0x000107c61180();
    uVar7 = param_3;
    func_0x000107c4a960(param_3);
    func_0x000107c61180();
    uVar3 = param_3;
    func_0x000107c3e454(param_3);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126b8238;
    func_0x000107c5d8e4(PTR_PTR_1126b8238);
    func_0x000107c61180();
    func_0x000107c49214();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    puVar4 = PTR_PTR_1126c17e8;
    func_0x000107c610f4();
    func_0x000107c46234();
    func_0x000107c61144(auStack_90,puVar1);
    puVar5 = PTR_PTR_1126c17f0;
    func_0x000107c610f4();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    puStack_b0 = &UNK_105a3bbac;
    puStack_a8 = &UNK_110867030;
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c61174(param_31);
    uStack_a0 = param_31;
    func_0x000107c48918();
    uVar8 = puVar1[4];
    puVar1[4] = puVar5;
    func_0x000107c61170(uVar8);
    puVar5 = PTR_PTR_1126c17f8;
    func_0x000107c610f4();
    func_0x000107c4890c();
    uVar8 = puVar1[8];
    puVar1[8] = puVar5;
    func_0x000107c61170(uVar8);
    puVar5 = PTR_PTR_1126c1800;
    func_0x000107c610f4();
    puVar6 = puVar1;
    func_0x000107c5b740(puVar1);
    func_0x000107c61180();
    func_0x000107c485f0();
    uVar8 = puVar1[6];
    puVar1[6] = puVar5;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar6);
    puVar5 = PTR_PTR_1126c1808;
    func_0x000107c610f4();
    func_0x000107c6111c(auStack_c8,auStack_90);
    func_0x000107c61174(param_31);
    uVar8 = puVar1[4];
    func_0x000107c4c258(uVar8);
    func_0x000107c61180();
    func_0x000107c458a4();
    uVar7 = puVar1[7];
    puVar1[7] = puVar5;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    puVar5 = PTR_PTR_1126c1810;
    func_0x000107c610f4();
    func_0x000107c48910();
    uVar8 = puVar1[5];
    puVar1[5] = puVar5;
    func_0x000107c61170(uVar8);
    func_0x000107c61174(param_13);
    uVar8 = puVar1[2];
    puVar1[2] = param_13;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(param_31);
    func_0x000107c61120(auStack_c8);
    func_0x000107c61170(uStack_a0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c595ec; end: 100c5968f; -[SCSpectaclesLogger initWithServerMetadataFetcher:grapheneRegistry:blizzardLogger:] */

undefined1 *
FUN_100c595ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126eb620;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100c59690; end: 100c5976f; -[SCContentProductSnapRendererImpl initWithSnapRendererServices:circumstanceEngine:] */

undefined1 *
FUN_100c59690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f7d78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x000107c43bf4();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



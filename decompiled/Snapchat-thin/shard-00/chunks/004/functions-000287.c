/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100638470; end: 100638477; -[SCNMessagingFeedUpdateTypeMetadata prefetchMetadata] */

undefined8 FUN_100638470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100638478; end: 10063847f; -[SCNMessagingPrefetchFeedUpdateMetadata loginPaginationComplete] */

undefined8 FUN_100638478(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100638480; end: 1006384ab; -[SCFuture .cxx_destruct] */

void FUN_100638480(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  func_0x000107c6119c(param_1 + 0x20,0);
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = puVar2;
    if (puVar2 != puVar3) {
      do {
        func_0x000107c61170(puVar3[-2]);
        puVar3 = puVar3 + -3;
        func_0x000107c61170(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(param_1 + 8);
    }
    *(undefined8 **)(param_1 + 0x10) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 1006384ac; end: 10063859b; -[SCFriendsFeedEntryStore updateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:metadata:updateType:fetchContext:isInitialFetchFeed:queryTriggered:] */

/* WARNING: Possible PIC construction at 0x000100638554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100638564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100638574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100638568) */
/* WARNING: Removing unreachable block (ram,0x000100638558) */
/* WARNING: Removing unreachable block (ram,0x000100638578) */

void FUN_1006384ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  func_0x000107c3cbdc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 10063859c; end: 1006385af;  */

void FUN_10063859c(void)

{
  return;
}



/* Entry: 1006385b0; end: 10063865b;  */

void FUN_1006385b0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  int extraout_w10;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam000000011383d530 & 1) == 0) {
    iVar2 = 0x1383d530;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      FUN_1006386e8(&uStack_40);
      uRam000000011383d520 = uStack_40;
      lRam000000011383d528 = lStack_38;
      uStack_40 = 0;
      lStack_38 = 0;
      FUN_100638f84();
      func_0x000107c60e4c(0x11383d530);
    }
  }
  lVar1 = lRam000000011383d528;
  *param_1 = uRam000000011383d520;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000100638fe0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10063865c; end: 10063866b;  */

void FUN_10063865c(void)

{
  return;
}



/* Entry: 10063866c; end: 1006386e7;  */

void FUN_10063866c(undefined8 param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_10063865c();
  uStack_28 = extraout_x8;
  FUN_100638738(auStack_40,1);
  FUN_1006389e4(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  FUN_100638ed0(param_1,lVar1 + 0x18);
  FUN_100638fb4(auStack_40);
  func_0x000100638fc4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_100a169a0();
  FUN_100638fb4();
  func_0x000107c393b8();
  pcStack_48 = FUN_1006386e8;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10063866c(&uStack_51);
  return;
}



/* Entry: 1006386e8; end: 100638737;  */

void FUN_1006386e8(void)

{
  undefined1 uStack_11;
  
  FUN_10063866c(&uStack_11);
  return;
}



/* Entry: 100638738; end: 10063875f;  */

long FUN_100638738(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100638708();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100638760; end: 10063877b;  */

void FUN_100638760(void)

{
  return;
}



/* Entry: 10063877c; end: 100638997;  */

undefined8 * FUN_10063877c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_110ce9ae0;
  param_1[1] = &PTR_DAT_110ce9b10;
  param_1[4] = 0x32aaaba7;
  param_1[6] = 0;
  param_1[5] = 0;
  puVar2 = param_1;
  func_0x000100638768();
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 3;
  uVar1 = extraout_x9;
  FUN_100638a28(puVar2 + 0x11,extraout_x9,&PTR_s_https___staging_aws_api_snapchat_110ce9b28);
  uStack_60 = CONCAT44(uStack_60._4_4_,6);
  FUN_10044fc98();
  FUN_100638ae0(param_1 + 0x14,&UNK_10f76e7fd,&uStack_60,uVar1);
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((long)param_1 + 0x124) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)((long)param_1 + 0xbf) = 0;
  param_1[0x25] = 0x32aaaba7;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((long)param_1 + 0x161) = 0;
  *(undefined8 *)((long)param_1 + 0x159) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  puVar2 = (undefined8 *)0xa0;
  func_0x000107c60e20();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110ce9c28;
  puVar2[3] = &PTR_DAT_110ce9c78;
  puVar2[6] = 0x32aaaba7;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  func_0x000100638768();
  puVar2[0x10] = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
  puVar2[0xf] = CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,CONCAT13(uVar6,CONCAT12
                                                  (uVar5,CONCAT11(uVar4,uVar3)))))));
  puVar2[0x12] = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
  puVar2[0x11] = CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,CONCAT13(uVar6,
                                                  CONCAT12(uVar5,CONCAT11(uVar4,uVar3)))))));
  puVar2[0x13] = 0;
  param_1[0x33] = extraout_x8;
  param_1[0x34] = puVar2;
  puStack_68 = puVar2;
  do {
    func_0x000100638c18();
  } while (extraout_w11 != 0);
  do {
    func_0x000100638c18();
  } while (extraout_w11_00 != 0);
  uStack_60 = 0;
  uStack_58 = 0;
  puVar2[4] = extraout_x8_00;
  puVar2[5] = puVar2;
  FUN_100638c34(&uStack_60);
  func_0x000100638c58(auStack_70);
  FUN_1004b5250(&uStack_60,param_1 + 0x14);
  FUN_100638e8c(param_1 + 0x16,&uStack_60);
  FUN_1005544a0(&uStack_60);
  return param_1;
}



/* Entry: 100638998; end: 1006389e3;  */

undefined8 FUN_100638998(undefined8 param_1)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  FUN_10063877c(param_1,auStack_40);
  FUN_1001148fc(auStack_40);
  return param_1;
}



/* Entry: 1006389e4; end: 100638a27;  */

undefined8 * FUN_1006389e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ce9bd8;
  FUN_100638998(param_1 + 3);
  return param_1;
}



/* Entry: 100638a28; end: 100638a5f;  */

void FUN_100638a28(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330
    )(param_1,param_2);
    return;
  }
  uVar1 = *param_3;
  func_0x00010002b82c(param_1,uVar1);
  func_0x000107c613d0(uVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 100638a60; end: 100638adf;  */

void FUN_100638a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100638a4c();
  uStack_38 = extraout_x8;
  FUN_100638b08();
  FUN_100450688();
  FUN_100638b80(uStack_40,param_2,param_3,param_4);
  func_0x000100638bdc();
  func_0x000100450b64();
  func_0x000100638bf4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c350c8();
  func_0x000100450b64();
  func_0x000107c350c0();
  pcStack_58 = FUN_100638ae0;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_100638a60(&uStack_61,uStack_40,param_2,param_3);
  return;
}



/* Entry: 100638ae0; end: 100638b07;  */

void FUN_100638ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_100638a60(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 100638b08; end: 100638b1f;  */

void FUN_100638b08(void)

{
  return;
}



/* Entry: 100638b20; end: 100638b7f;  */

void FUN_100638b20(void)

{
  func_0x000100638b14();
  FUN_10002b838();
  FUN_100638bc0();
  FUN_10028bc78();
  func_0x000100638bcc();
  return;
}



/* Entry: 100638b80; end: 100638bbf;  */

undefined8 * FUN_100638b80(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107ea880;
  param_1[1] = 0;
  FUN_100638b20(param_1 + 3);
  return param_1;
}



/* Entry: 100638bc0; end: 100638c33;  */

void FUN_100638bc0(void)

{
  return;
}



/* Entry: 100638c34; end: 100638c7b;  */

void FUN_100638c34(long param_1)

{
  func_0x000100638c28();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100638c7c; end: 100638e8b; -[SCPreviewFilterDataServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100638c7c(long param_1,undefined8 param_2)

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
  long lVar14;
  undefined *puVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126d4e18;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_1127646cc;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_1127646d0;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c3ce84();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_1127646d4;
  func_0x000107c61148();
  lVar7 = lVar6;
  func_0x000107c4dfdc();
  func_0x000107c61180();
  lVar8 = param_1 + _DAT_1127646d8;
  func_0x000107c61148();
  lVar9 = lVar8;
  func_0x000107c5d13c();
  func_0x000107c61180();
  lVar16 = (long)_DAT_1127646dc;
  lVar10 = param_1 + lVar16;
  func_0x000107c61148(lVar10);
  lVar11 = lVar10;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  lVar16 = param_1 + lVar16;
  func_0x000107c61148(lVar16);
  lVar12 = lVar16;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  lVar13 = param_1 + _DAT_1127646e0;
  func_0x000107c61148();
  param_1 = param_1 + _DAT_1127646e4;
  func_0x000107c61148();
  lVar14 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c4937c(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar12,lVar13,lVar14);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar15 = PTR_PTR_1126d4e20;
  func_0x000107c610f4(PTR_PTR_1126d4e20);
  func_0x000107c480b0();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 100638e8c; end: 100638ecf;  */

undefined8 * FUN_100638e8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_100554470(&uStack_30);
  return param_1;
}



/* Entry: 100638ed0; end: 100638eeb;  */

void FUN_100638ed0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 0x10);
  }
  if ((plVar1 != (long *)0x0) && ((plVar1[1] == 0 || (*(long *)(plVar1[1] + 8) == -1)))) {
    lVar2 = 0;
    if (param_1[1] != 0) {
      do {
        func_0x000100638c18();
      } while (extraout_w11 != 0);
      do {
        func_0x000100638c18();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = plVar1[1];
    lStack_20 = *plVar1;
    *plVar1 = param_2;
    plVar1[1] = lVar2;
    FUN_100638f5c(&lStack_20);
    FUN_100638f84();
    return;
  }
  return;
}



/* Entry: 100638eec; end: 100638f5b;  */

void FUN_100638eec(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    uVar1 = 0;
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x000100638c18();
      } while (extraout_w11 != 0);
      do {
        func_0x000100638c18();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_100638f5c(&uStack_20);
    FUN_100638f84();
    return;
  }
  return;
}



/* Entry: 100638f5c; end: 100638f83;  */

long FUN_100638f5c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 100638f84; end: 100638f8b;  */

void FUN_100638f84(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100638f8c; end: 100638fb3;  */

long FUN_100638f8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100638fb4; end: 100638fef;  */

void FUN_100638fb4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100638ff0; end: 1006390db;  */

void FUN_100638ff0(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_28;
  
  puVar3 = param_2;
  FUN_10063865c();
  uStack_98 = puVar3[1];
  uStack_a0 = *puVar3;
  uStack_28 = extraout_x8;
  if (puVar3[1] != 0) {
    do {
      func_0x000100638fe0();
    } while (extraout_w10 != 0);
  }
  FUN_1006390e4();
  FUN_100634724(&uStack_a0);
  FUN_1006346a8(param_1 + 0x70,param_2);
  lVar1 = *(long *)(param_1 + 0xa0);
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = *(undefined8 *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x18) != 0) {
    do {
      func_0x000100638fe0();
    } while (extraout_w10_00 != 0);
  }
  pcStack_88 = FUN_10063b588;
  ppuStack_80 = &PTR_DAT_110ce9cc0;
  func_0x00010063944c();
  (*extraout_x8_00)();
  FUN_1006396c4();
  func_0x0001006396d4();
  func_0x000100638fc4(uStack_28);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    FUN_1006396c4();
    func_0x0001006396d4();
    func_0x000107c393b8();
    lVar2 = extraout_x8_01;
    FUN_1003b6f78();
    *(long *)(lVar2 + 0x10) = lVar1 + 0x58;
    return;
  }
  return;
}



/* Entry: 1006390dc; end: 1006390e3;  */

void FUN_1006390dc(long param_1,long param_2)

{
  FUN_1003b6f78();
  *(long *)(param_1 + 0x10) = param_2 + 0x58;
  return;
}



/* Entry: 1006390e4; end: 100639213;  */

void FUN_1006390e4(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long alStack_90 [2];
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1006390dc(auStack_80);
  FUN_100639244(alStack_90,lStack_70 + 0x20);
  if (alStack_90[0] != 0) {
    uStack_30 = 0;
    FUN_10063929c(alStack_90[0],auStack_48);
    FUN_1006393ec(auStack_48);
  }
  FUN_100634724(alStack_90);
  if (*param_2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != 0) {
      do {
        FUN_100639280();
      } while (extraout_w10 != 0);
    }
    ppuStack_68 = &PTR_DAT_110ce9a10;
    uStack_a0 = 0;
    uStack_98 = 0;
    pppuStack_50 = &ppuStack_68;
    uStack_60 = uVar3;
    uStack_58 = uVar4;
    FUN_10063929c();
    FUN_1006393ec(&ppuStack_68);
    FUN_100638c34(&uStack_a0);
  }
  FUN_1006346a8(lStack_70 + 0x20,param_2);
  FUN_1000df5a0();
  func_0x000100639438(uStack_28);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    FUN_1006393ec(&ppuStack_68);
    FUN_100638c34(&uStack_a0);
    puVar1 = auStack_80;
    FUN_1000df5a0();
    func_0x000107c39398();
    lVar2 = extraout_x8;
    FUN_1003b6f78();
    *(undefined1 **)(lVar2 + 0x10) = puVar1 + 0x40;
    return;
  }
  return;
}



/* Entry: 100639214; end: 10063923b;  */

void FUN_100639214(long param_1,long param_2)

{
  FUN_1003b6f78();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10063923c; end: 100639243;  */

void FUN_10063923c(void)

{
  return;
}



/* Entry: 100639244; end: 10063927f;  */

void FUN_100639244(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 100639280; end: 10063929b;  */

void FUN_100639280(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10063929c; end: 1006392cb;  */

void FUN_10063929c(long param_1)

{
  long unaff_x20;
  
  func_0x000100639290();
  func_0x000107c60d28(param_1 + 0x1e8);
  FUN_100639330(unaff_x20 + 0x168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x20 + 0x1e8);
  return;
}



/* Entry: 1006392cc; end: 1006392d7;  */

void FUN_1006392cc(void)

{
  return;
}



/* Entry: 1006392d8; end: 10063932f;  */

void FUN_1006392d8(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1006392cc();
  FUN_100639354();
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (lVar1 == unaff_x20) {
    *(long *)(unaff_x19 + 0x18) = unaff_x19;
    func_0x00010063939c(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x0001006393a8();
  }
  else {
    *(long *)(unaff_x19 + 0x18) = lVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
  }
  return;
}



/* Entry: 100639330; end: 100639353;  */

undefined8 FUN_100639330(undefined8 param_1)

{
  FUN_1006392d8();
  return param_1;
}



/* Entry: 100639354; end: 100639393;  */

long FUN_100639354(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 == param_1) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) {
      return param_1;
    }
    uVar2 = 0x28;
  }
  func_0x0001072855c0(uVar2);
  return param_1;
}



/* Entry: 100639394; end: 1006393eb;  */

void FUN_100639394(void)

{
  return;
}



/* Entry: 1006393ec; end: 10063942f;  */

long * FUN_1006393ec(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 100639430; end: 100639483;  */

void FUN_100639430(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100638c28();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100639484; end: 1006396c3; -[SCFriendsFeedEntryStore _updateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:metadata:updateType:fetchContext:isInitialFetchFeed:queryTriggered:] */

/* WARNING: Possible PIC construction at 0x0001006395bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100639620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100639674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100639684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100639694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100639608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100639698) */
/* WARNING: Removing unreachable block (ram,0x000100639688) */
/* WARNING: Removing unreachable block (ram,0x000100639678) */
/* WARNING: Removing unreachable block (ram,0x000100639624) */
/* WARNING: Removing unreachable block (ram,0x0001006395c0) */
/* WARNING: Removing unreachable block (ram,0x0001006395d0) */
/* WARNING: Removing unreachable block (ram,0x00010063960c) */
/* WARNING: Removing unreachable block (ram,0x000100639618) */
/* WARNING: Removing unreachable block (ram,0x00010063961c) */

void FUN_100639484(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,ulong param_8,long param_9)

{
  long lVar1;
  long lVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  lVar1 = param_9;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1006b1458;
    puStack_80 = &UNK_110894d50;
    lStack_78 = param_1;
    func_0x000107c61174(param_9);
    lStack_70 = param_9;
    uStack_68 = param_8;
    func_0x0001006372a4(param_3,&puStack_98);
    lVar1 = param_3;
    if (param_8 < 6) {
      if (((1L << (param_8 & 0x3f) & 0x19U) == 0) || (FUN_10060dccc(), (int)param_9 == 0)) {
        func_0x000107c3cb9c(param_1);
      }
      else {
        func_0x000107c61174(param_7);
        lVar1 = param_7;
        func_0x000107c40708();
        func_0x000107c61180();
        lVar2 = lVar1;
        func_0x000107c40808();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c4070c();
          func_0x000107c61180();
          func_0x000107c40808();
          lVar1 = param_7;
        }
        else {
          func_0x000107c4070c();
          func_0x000107c61180();
          func_0x000107c40808();
          lVar1 = param_7;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1006396c4; end: 1006396db;  */

void FUN_1006396c4(void)

{
  long unaff_x20;
  undefined8 *in_stack_00000030;
  
                    /* WARNING: Could not recover jumptable at 0x0001006396d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000030)(unaff_x20 + 8);
  return;
}



/* Entry: 1006396dc; end: 10063975f;  */

void FUN_1006396dc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if (lRam000000011383d5f0 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    func_0x000107c60c38(0x11383d5f0,&ppuStack_30,FUN_100639760);
  }
  lVar5 = lRam000000011383d608;
  uVar4 = uRam000000011383d600;
  param_1[1] = lRam000000011383d608;
  *param_1 = uVar4;
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
  return;
}



/* Entry: 100639760; end: 1006397cf;  */

void FUN_100639760(void)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ced828;
  *(undefined4 *)(puVar1 + 4) = 3;
  uStack_18 = puRam000000011383d608;
  puRam000000011383d608 = puVar1;
  puVar1[3] = &PTR_DAT_110ced7e8;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = puRam000000011383d600;
  puRam000000011383d600 = puVar1 + 3;
  FUN_1006397dc(&uStack_20);
  FUN_1006397dc(&uStack_30);
  return;
}



/* Entry: 1006397d0; end: 1006397db;  */

undefined8 FUN_1006397d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006397dc; end: 1006397ff;  */

void FUN_1006397dc(long param_1)

{
  FUN_1006397d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100639800; end: 10063980b;  */

void FUN_100639800(void)

{
  return;
}



/* Entry: 10063980c; end: 100639eeb; -[SCFriendsFeedEntryStore _updateCacheWithFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateType:fetchContext:isInitialFetchFeed:queryTriggered:isSuccessfulSync:] */

undefined8 *
FUN_10063980c(long param_1,undefined **param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,long param_6,undefined8 *param_7,undefined8 *param_8,
             undefined4 param_9)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 *extraout_x8;
  long lVar10;
  int extraout_w11;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined7 uStack_46f;
  undefined8 uStack_468;
  undefined1 uStack_448;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c611ec(param_1 + 0x5c);
  func_0x000107c61174(param_3);
  puVar2 = param_3;
  func_0x000107c4080c();
  lVar10 = lRam0000000000000000;
  while (puVar2 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        func_0x000107c61128(param_3);
      }
      uVar11 = *(undefined8 *)((long)puVar13 * 8);
      uVar16 = *(undefined8 *)(param_1 + 0x40);
      func_0x000107c40674();
      func_0x000107c61180();
      func_0x000107c56bd8(uVar16);
      func_0x000107c61170(uVar11);
      puVar13 = (undefined8 *)((long)puVar13 + 1);
    } while (puVar2 != puVar13);
    puVar2 = param_3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_3);
  puVar20 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  func_0x000107c61160();
  func_0x000107c61174(param_5);
  puVar2 = param_5;
  func_0x000107c4080c();
  lVar10 = lRam0000000000000000;
  while (puVar2 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        func_0x000107c61128(param_5);
      }
      uVar18 = *(undefined8 *)((long)puVar13 * 8);
      uVar19 = *(undefined8 *)(param_1 + 0x40);
      uVar11 = uVar18;
      func_0x000107c42f18();
      func_0x000107c61180();
      uVar16 = uVar11;
      func_0x000107c40674();
      func_0x000107c61180();
      func_0x000107c56bd8(uVar19);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar11);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4f9dc(uVar18);
      func_0x000107c4d960(puVar3);
      func_0x000107c61180();
      func_0x000107c3d798(puVar20);
      func_0x000107c61170(puVar3);
      puVar13 = (undefined8 *)((long)puVar13 + 1);
    } while (puVar2 != puVar13);
    puVar2 = param_5;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_5);
  puVar2 = param_7;
  FUN_10063b130(param_7);
  func_0x000107c61180();
  func_0x000107c61174(puVar20);
  puVar3 = puVar20;
  func_0x000107c4080c();
  lVar10 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        func_0x000107c61128(puVar20);
      }
      uVar17 = *(ulong *)((long)puVar12 * 8);
      func_0x000107c49820();
      param_2 = &PTR____CFConstantStringClassReference_110db8b78;
      if (uVar17 < 7) {
        param_2 = (undefined **)(&PTR_PTR_110894d80)[uVar17];
      }
      func_0x000107c40810(puVar20);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x0001064e8ddc();
      func_0x000107c61170(uVar11);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c5c734(uVar11);
      func_0x000107c61180();
      func_0x0001064e900c();
      func_0x000107c61170(uVar11);
      puVar12 = puVar12 + 1;
    } while (puVar3 != puVar12);
    puVar3 = puVar20;
    func_0x000107c4080c();
  }
  func_0x000107c61170(puVar20);
  func_0x000107c61174(param_4);
  puVar13 = param_4;
  func_0x000107c4080c();
  lVar10 = lRam0000000000000000;
  while (puVar13 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        func_0x000107c61128(param_4);
      }
      uVar16 = *(undefined8 *)((long)puVar14 * 8);
      uVar18 = *(undefined8 *)(param_1 + 0x48);
      func_0x000107c44fdc(uVar16);
      func_0x000107c61180();
      uVar11 = uVar16;
      func_0x000107c41844();
      func_0x000107c61180();
      func_0x000107c56bd8(uVar18);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar16);
      puVar14 = (undefined8 *)((long)puVar14 + 1);
    } while (puVar13 != puVar14);
    puVar13 = param_4;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_4);
  func_0x000107c61174(param_6);
  lVar10 = param_6;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_6);
      }
      uVar11 = *(undefined8 *)(lVar15 * 8);
      uVar16 = *(undefined8 *)(param_1 + 0x48);
      func_0x000107c41844(uVar11);
      func_0x000107c61180();
      func_0x000107c56bd8(uVar16);
      func_0x000107c61170(uVar11);
      lVar15 = lVar15 + 1;
    } while (lVar10 != lVar15);
    lVar10 = param_6;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_6);
  if ((param_8 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 0x58) & 1) == 0)) {
    func_0x000107c3d798(*(undefined8 *)(param_1 + 0x50));
  }
  if (param_9._2_1_ != '\0') {
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  puVar13 = param_8;
  func_0x000107c44fdc();
  func_0x000107c61180();
  puVar14 = puVar13;
  func_0x000107c4adac();
  if (puVar14 == (undefined8 *)0x0) {
    FUN_10011df08();
    func_0x000107c61180();
  }
  else {
    puVar14 = param_8;
    func_0x000107c44fdc();
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar13);
  uVar11 = *(undefined8 *)(param_1 + 8);
  puVar13 = (undefined8 *)PTR_PTR_1126ba4a0;
  func_0x000107c610f4();
  puVar5 = param_4;
  puVar6 = param_5;
  lVar10 = param_6;
  puVar7 = param_7;
  puVar4 = param_8;
  func_0x000107c490f4();
  uVar8 = SUB81(puVar4,0);
  puVar4 = puVar13;
  func_0x000107c4d664(uVar11);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar20);
  func_0x000107c611f0(param_1 + 0x5c);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  puVar2 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar2;
  }
  func_0x000107c60e78();
  func_0x000107c611f0(param_1 + 0x5c);
  func_0x000107c60bd8();
  puVar20 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = puVar20;
  *param_2 = (undefined *)0x0;
  param_2[1] = (undefined *)0x0;
  uVar11 = *puVar4;
  puVar2[3] = puVar4[1];
  puVar2[2] = uVar11;
  *puVar4 = 0;
  puVar4[1] = 0;
  uVar11 = *puVar5;
  *puVar5 = 0;
  puVar2[4] = uVar11;
  func_0x000107c60c94(puVar2 + 5,puVar6);
  uStack_448 = SUB81(param_4,0);
  puVar13 = (undefined8 *)CONCAT71(uStack_46f,param_9._2_1_);
  puVar2[8] = lVar10;
  puVar2[9] = puVar7;
  *(undefined1 *)(puVar2 + 10) = uVar8;
  *(undefined1 *)((long)puVar2 + 0x51) = (undefined1)param_9;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xb] = 0;
  uVar11 = *puVar14;
  puVar2[0xc] = puVar14[1];
  puVar2[0xb] = uVar11;
  puVar2[0xd] = puVar14[2];
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  uVar11 = *puVar13;
  puVar2[0xf] = puVar13[1];
  puVar2[0xe] = uVar11;
  puVar2[0x10] = puVar13[2];
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar2[0x11] = uStack_468;
  uVar11 = *param_7;
  puVar2[0x13] = param_7[1];
  puVar2[0x12] = uVar11;
  *param_7 = 0;
  param_7[1] = 0;
  puVar2[0x14] = param_8;
  puVar2[0x15] = param_6;
  *(undefined1 *)(puVar2 + 0x16) = uStack_448;
  lVar10 = param_5[1];
  uVar11 = *param_5;
  puVar2[0x18] = param_5[1];
  puVar2[0x17] = uVar11;
  if (lVar10 != 0) {
    do {
      FUN_10063a024();
      param_3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar11 = *param_3;
  puVar2[0x1a] = param_3[1];
  puVar2[0x19] = uVar11;
  *param_3 = 0;
  param_3[1] = 0;
  return puVar2;
}



/* Entry: 100639eec; end: 10063a023;  */

undefined8 *
FUN_100639eec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 *param_11,undefined8 *param_12,
             undefined8 param_13,undefined8 *param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17,undefined4 param_18,undefined8 *param_19,undefined8 *param_20)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  long lVar2;
  int extraout_w11;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  *param_4 = 0;
  param_1[4] = uVar1;
  func_0x000107c60c94(param_1 + 5,param_5);
  param_1[8] = param_6;
  param_1[9] = param_7;
  *(undefined1 *)(param_1 + 10) = param_8;
  *(undefined1 *)((long)param_1 + 0x51) = param_9;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  uVar1 = *param_11;
  param_1[0xc] = param_11[1];
  param_1[0xb] = uVar1;
  param_1[0xd] = param_11[2];
  *param_11 = 0;
  param_11[1] = 0;
  param_11[2] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar1 = *param_12;
  param_1[0xf] = param_12[1];
  param_1[0xe] = uVar1;
  param_1[0x10] = param_12[2];
  *param_12 = 0;
  param_12[1] = 0;
  param_12[2] = 0;
  param_1[0x11] = param_13;
  uVar1 = *param_14;
  param_1[0x13] = param_14[1];
  param_1[0x12] = uVar1;
  *param_14 = 0;
  param_14[1] = 0;
  param_1[0x14] = param_15;
  param_1[0x15] = param_16;
  *(undefined1 *)(param_1 + 0x16) = param_17;
  lVar2 = param_19[1];
  uVar1 = *param_19;
  param_1[0x18] = param_19[1];
  param_1[0x17] = uVar1;
  if (lVar2 != 0) {
    do {
      FUN_10063a024();
      param_20 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar1 = *param_20;
  param_1[0x1a] = param_20[1];
  param_1[0x19] = uVar1;
  *param_20 = 0;
  param_20[1] = 0;
  return param_1;
}



/* Entry: 10063a024; end: 10063a03f;  */

void FUN_10063a024(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10063a040; end: 10063a063;  */

void FUN_10063a040(long param_1)

{
  func_0x00010063a034();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10063a064; end: 10063a073;  */

undefined1 * FUN_10063a064(void)

{
  return &stack0x00000008;
}



/* Entry: 10063a074; end: 10063a097;  */

void FUN_10063a074(void)

{
  FUN_10063a064();
  FUN_10063a0a8();
  return;
}



/* Entry: 10063a098; end: 10063a0a7;  */

void FUN_10063a098(void)

{
  return;
}



/* Entry: 10063a0a8; end: 10063a14f;  */

void FUN_10063a0a8(void)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  
  FUN_10063a098();
  if (extraout_x8 != 0) {
    func_0x000107c2c590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*unaff_x19);
    return;
  }
  return;
}



/* Entry: 10063a150; end: 10063a167;  */

void FUN_10063a150(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd37e8;
  param_1[1] = &PTR_DAT_110cd3858;
  return;
}



/* Entry: 10063a168; end: 10063a1e7;  */

void FUN_10063a168(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [88];
  
  FUN_10063a150();
  FUN_100100ed0(auStack_88);
  FUN_10063a1f0(auStack_78,auStack_88);
  FUN_10063c3fc(unaff_x19 + 0x10,param_2,auStack_78);
  FUN_10063bfd0(auStack_78);
  FUN_1000df75c(auStack_88);
  return;
}



/* Entry: 10063a1e8; end: 10063a1ef;  */

void FUN_10063a1e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cfa2b0;
  param_1[1] = 0;
  param_1[3] = 0x100000000;
  param_1[2] = 0x100000000;
  param_1[4] = &DAT_10e5b4a18;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  return;
}



/* Entry: 10063a1f0; end: 10063a33f;  */

void FUN_10063a1f0(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  long lStack_120;
  long lStack_118;
  char cStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [77];
  undefined1 uStack_3b;
  int iStack_38;
  
  FUN_10063a1e8(auStack_88);
  uStack_3b = 0;
  if (*param_2 != 0) {
    FUN_10002b838(auStack_e8,&UNK_10f742b9c);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    FUN_10011a82c(auStack_d0,auStack_e8,0,0,0xc,&uStack_100);
    FUN_100100fec(&uStack_100);
    func_0x000107c60ca0(auStack_e8);
    (**(code **)(*(long *)*param_2 + 0x30))(&lStack_120,(long *)*param_2,auStack_d0);
    if (cStack_108 == '\x01') {
      if (lStack_120 == lStack_118) goto LAB_10063a2a8;
      puVar1 = auStack_88;
      FUN_10006369c(puVar1,lStack_120,(int)lStack_118 - (int)lStack_120);
    }
    else {
LAB_10063a2a8:
      puVar1 = (undefined1 *)0x0;
    }
    if (iStack_38 == 0) {
      iStack_38 = 1;
    }
    FUN_1002a2294(&lStack_120);
    FUN_100114924(auStack_d0);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = auStack_88;
      goto LAB_10063a2e4;
    }
  }
  func_0x000107c2c7ac();
  puVar1 = (undefined1 *)0x11383a840;
LAB_10063a2e4:
  func_0x00010063bcd0(param_1,puVar1);
  FUN_10063bfd0(auStack_88);
  return;
}



/* Entry: 10063a340; end: 10063a373;  */

void FUN_10063a340(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110cfa2b0;
  param_1[1] = param_2;
  param_1[3] = 0x100000000;
  param_1[2] = 0x100000000;
  param_1[4] = &DAT_10e5b4a18;
  param_1[5] = param_2;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  return;
}



/* Entry: 10063a374; end: 10063a43b;  */

void FUN_10063a374(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c40808();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x000107c60f94(0,100000000);
    uVar3 = 0x11;
    FUN_1000819a8(0x11,0);
    func_0x000107c61180();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_100841a14;
    puStack_40 = &UNK_110842e18;
    func_0x000107c61174(param_1);
    lStack_38 = param_1;
    FUN_10058c530(uVar2,uVar3,&puStack_58);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lStack_38);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10063a43c; end: 10063a443; -[SCPreviewABServices abProvider] */

undefined8 FUN_10063a43c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10063a444; end: 10063a453; -[_TtC17SCCheckInServices17SCCheckInServices optionFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10063a444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077298));
  return;
}



/* Entry: 10063a454; end: 10063a45b; -[SCUcoDataStoreServices ucoDataStore] */

undefined8 FUN_10063a454(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10063a45c; end: 10063a5f3; -[SCPreviewFilterDataProviderFactoryImpl initWithUserSession:previewABProvider:checkInOptionFetcher:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:circumstanceEngine:] */

undefined1 *
FUN_10063a45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_1126f8a68;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_5);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10063a5f4; end: 10063a667; -[SCPreviewFilterDataProviderServices initWithPreviewFilterDataProviderFactory:] */

undefined1 * FUN_10063a5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fcbf0;
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



/* Entry: 10063a668; end: 10063a6bb;  */

void FUN_10063a668(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10063a6bc; end: 10063a6c3;  */

void FUN_10063a6bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063a6c4; end: 10063a717;  */

void FUN_10063a6c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063a718; end: 10063a727;  */

void FUN_10063a718(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  func_0x0001005c593c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x28) = uStack_70;
  *(undefined8 *)(lVar2 + 0x30) = uStack_78;
  *(undefined8 *)(lVar2 + 0x38) = uStack_80;
  FUN_1000285a8(0x112ed9980,&UNK_10db06300);
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar8 = uStack_88;
  func_0x000107c6157c(uStack_88);
  FUN_10025a71c();
  puVar6 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar2 + 0x18) = puVar6;
  puVar6 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x20) = puVar6;
  puVar6 = PTR_PTR_1126abcd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0dbb00);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  lVar10 = *(long *)(lVar2 + 0x20);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0dbb20);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar8);
  uVar11 = *(undefined8 *)(lVar2 + 0x18);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar11);
  uVar8 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0dbb40);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(uStack_88);
    *(long *)(lVar2 + 0x40) = lVar10;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063ab28);
  (*pcVar1)();
}



/* Entry: 10063a728; end: 10063ab27;  */

void FUN_10063a728(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  func_0x0001005c593c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  FUN_1000285a8(0x112ed9980,&UNK_10db06300);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c6157c(uStack_88);
  FUN_10025a71c();
  puVar5 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar5;
  puVar5 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar5;
  puVar5 = PTR_PTR_1126abcd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0dbb00);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  lVar9 = *(long *)(param_2 + 0x20);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0dbb20);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar7);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar10);
  uVar7 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0dbb40);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar9 != 0) {
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(uStack_88);
    *(long *)(param_2 + 0x40) = lVar9;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063ab28);
  (*pcVar1)();
}



/* Entry: 10063ab28; end: 10063ab2f;  */

void FUN_10063ab28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063ab30; end: 10063ab83;  */

void FUN_10063ab30(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063ab84; end: 10063b0fb;  */

void FUN_10063ab84(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_10023ce70();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126a86e0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef85650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef28ec0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efcd7a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef39b30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar12 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x58) = puVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 10063b0fc; end: 10063b12f;  */

void FUN_10063b0fc(void)

{
  long unaff_x20;
  
  FUN_10063ab84(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10063b130; end: 10063b15f;  */

undefined ** FUN_10063b130(long param_1)

{
  if (param_1 - 1U < 5) {
    return (undefined **)(&PTR_PTR_110928db0)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e53058;
}



/* Entry: 10063b160; end: 10063b1b3;  */

void FUN_10063b160(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063b1b4; end: 10063b1c3;  */

void FUN_10063b1b4(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002188d4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar8 = PTR_PTR_1126a7f20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(undefined **)(lVar2 + 0x40) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063b578);
  (*pcVar1)();
}



/* Entry: 10063b1c4; end: 10063b577;  */

void FUN_10063b1c4(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002188d4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar7 = PTR_PTR_1126a7f20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar7);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined **)(param_2 + 0x40) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063b578);
  (*pcVar1)();
}



/* Entry: 10063b578; end: 10063b587;  */

void FUN_10063b578(long param_1)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c60d6c();
  }
  return;
}



/* Entry: 10063b588; end: 10063b5cb;  */

void FUN_10063b588(void)

{
  undefined8 uStack_30;
  
  FUN_10063b578();
  if ((uStack_30 != 0) && (*(char *)(uStack_30 + 0x124) == '\x01')) {
    FUN_100a17e14();
  }
  FUN_100638f84();
  return;
}



/* Entry: 10063b5cc; end: 10063b60b;  */

void FUN_10063b5cc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10063b60c; end: 10063b617;  */

void FUN_10063b60c(void)

{
  return;
}



/* Entry: 10063b618; end: 10063b67b;  */

void FUN_10063b618(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7490;
  func_0x000107c610f4(PTR_PTR_1126b7490);
  func_0x000107c45480();
  puVar2 = PTR_PTR_1126deb60;
  func_0x000107c610f4(PTR_PTR_1126deb60);
  func_0x000107c4690c();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10063b67c; end: 10063b717; -[SCExtensionSharedFile initUserScopedFileWithUserId:filename:delegate:] */

undefined8
FUN_10063b67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba528;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c41ea0(puVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c45414(param_1,param_2,puVar1,param_4,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10063b718; end: 10063ba83; -[SCSyncedFeedEntriesUpdateEvent initWithUpdatedFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateType:fetchContext:isInitialFetchFeed:queryTriggered:trackingIdentifier:isSuccessfulSync:] */

undefined8 *
FUN_10063b718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_112703b48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[6] = param_7;
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_12;
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10063ba84; end: 10063ba8b; -[SCSyncedFeedEntriesUpdateEvent fetchContext] */

undefined8 FUN_10063ba84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10063ba8c; end: 10063ba93; -[SCSyncedFeedEntriesUpdateEvent updatedFeedEntries] */

undefined8 FUN_10063ba8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10063ba94; end: 10063ba9b; -[SCSyncedFeedEntriesUpdateEvent multiRecipientFeedEntries] */

undefined8 FUN_10063ba94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10063ba9c; end: 10063baa3; -[SCSyncedFeedEntriesUpdateEvent deletedFeedEntries] */

undefined8 FUN_10063ba9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10063baa4; end: 10063baab; -[SCSyncedFeedEntriesUpdateEvent multiRecipientFeedEntriesDeleted] */

undefined8 FUN_10063baa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10063baac; end: 10063bab3; -[SCSyncedFeedEntriesUpdateEvent updateType] */

undefined8 FUN_10063baac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10063bab4; end: 10063babb; -[SCSyncedFeedEntriesUpdateEvent trackingIdentifier] */

undefined8 FUN_10063bab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10063babc; end: 10063bac3; -[SCSyncedFeedEntriesUpdateEvent isSuccessfulSync] */

undefined1 FUN_10063babc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10063bac4; end: 10063bb9f;  */

/* WARNING: Possible PIC construction at 0x00010063bb88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010063bb44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010063bb80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010063bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010063bb48) */

void FUN_10063bac4(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_2;
  func_0x000107c4f794();
  if ((int)lVar1 == 0) {
    func_0x000107c43040();
    func_0x000107c61180();
    func_0x000107c5d028();
  }
  else {
    param_2 = param_1 + 0x20;
    func_0x000107c61148(param_2);
    func_0x000107c3cc20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



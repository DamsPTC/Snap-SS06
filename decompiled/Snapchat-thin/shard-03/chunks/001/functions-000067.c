/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10245cf90; end: 10245cfef; -[SCPromotedStoryShareScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245cf90(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9b950,0);
  *(undefined8 *)(param_1 + _DAT_112e9b958) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10245cff0; end: 10245d023;  */

void FUN_10245cff0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10245d024; end: 10245d05b; -[SCPromotedStoryShareScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245d024(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9b950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b958));
  return;
}



/* Entry: 10245d05c; end: 10245d07b;  */

void FUN_10245d05c(void)

{
  func_0x000107c61168(&PTR_PTR_112842510);
  return;
}



/* Entry: 10245d07c; end: 10245d0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245d07c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9b988) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b990) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10245d0e0; end: 10245d157; -[AdPromotedStoryShareSupport initWithAdLogger:notificationPool:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245d0e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e9b988) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e9b990) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10245d158; end: 10245d213; +[AdPromotedStoryShareSupport makeAdLoggerWithAudioSessionServices:userBlizzardServices:grapheneServices:crashLoggingServices:flipperServices:] */

void FUN_10245d158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  uVar2 = param_3;
  FUN_10245d750(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10245d214; end: 10245d2b3;  */

/* WARNING: Possible PIC construction at 0x00010245d26c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010245d270) */
/* WARNING: Removing unreachable block (ram,0x00010245d28c) */
/* WARNING: Removing unreachable block (ram,0x00010245d2a0) */

void FUN_10245d214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c40930(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10245d2b4; end: 10245d5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245d2b4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [5];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if (param_2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
    puVar3 = (undefined8 *)0x0;
LAB_10245d3e8:
    func_0x00010006e7f4(&uStack_80);
    puVar2 = PTR_PTR_1126c5570;
  }
  else {
    uStack_b8 = 0x6e65697069636572;
    uStack_b0 = 0xef746e756f635f74;
    puVar3 = (undefined8 *)PTR___sSSN_11034da80;
    func_0x000107c602d4(auStack_a8,&uStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_10245d370:
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      puVar8 = auStack_a8;
      func_0x000100df95d0(puVar8);
      if (((ulong)puVar3 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_10245d370;
      }
      puVar3 = &uStack_80;
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + (long)puVar8 * 0x20);
      func_0x000107c6142c(param_2);
    }
    func_0x0001007bbff0(auStack_a8);
    if (lStack_68 == 0) goto LAB_10245d3e8;
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar8 = auStack_a8;
    puVar3 = &uStack_80;
    func_0x000107c6147c(puVar8,puVar3,PTR___sypN_11034f1a8 + 8,uVar1,6);
    puVar2 = PTR_PTR_1126c5570;
    if (((ulong)puVar8 & 1) != 0) {
      func_0x000107c5d388(auStack_a8[0]);
      func_0x000107c61170(auStack_a8[0]);
      puVar2 = PTR_PTR_1126c5570;
    }
  }
  PTR_PTR_1126c5570 = puVar2;
  if (param_1 == 0) {
    func_0x000107c610f8(puVar2);
    lVar6 = 0;
    uVar1 = 0;
    lVar4 = param_1;
    goto LAB_10245d530;
  }
  lVar6 = param_1;
  func_0x000107c3d2dc();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar4 = 0;
    puVar5 = (undefined8 *)0x0;
    puVar8 = puVar3;
  }
  else {
    lVar4 = lVar6;
    func_0x000107c5faec();
    puVar8 = puVar3;
    func_0x000107c61170(lVar6);
    puVar5 = puVar3;
  }
  lVar6 = param_1;
  func_0x000107c3d458();
  func_0x000107c61180();
  if (lVar6 == 0) {
    uVar1 = 0;
    lVar7 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar6 + _DAT_11308f148);
    lVar7 = ((undefined8 *)(lVar6 + _DAT_11308f148))[1];
    func_0x000107c61434(lVar7);
    func_0x000107c61170(lVar6);
  }
  func_0x000107c3ec78();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar6 = 0;
    puVar8 = (undefined8 *)0x0;
    if (puVar5 == (undefined8 *)0x0) goto LAB_10245d4ec;
LAB_10245d4a8:
    func_0x000107c5fadc(lVar4,puVar5);
    func_0x000107c6142c(puVar5);
    if (lVar7 != 0) goto LAB_10245d4c4;
LAB_10245d4f4:
    uVar1 = 0;
  }
  else {
    lVar6 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    if (puVar5 != (undefined8 *)0x0) goto LAB_10245d4a8;
LAB_10245d4ec:
    lVar4 = 0;
    if (lVar7 == 0) goto LAB_10245d4f4;
LAB_10245d4c4:
    func_0x000107c5fadc(uVar1,lVar7);
    func_0x000107c6142c(lVar7);
  }
  puVar2 = PTR_PTR_1126c5570;
  func_0x000107c610f8(PTR_PTR_1126c5570);
  if (puVar8 == (undefined8 *)0x0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c5fadc(lVar6,puVar8);
    func_0x000107c6142c(puVar8);
  }
LAB_10245d530:
  func_0x000107c455c4();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e9b988);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4bde4();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10245d5b4; end: 10245d6e3; -[AdPromotedStoryShareSupport handleCompletedShareForPromotedStory:parameters:] */

/* WARNING: Possible PIC construction at 0x00010245d6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010245d6ac) */

void FUN_10245d5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_4 != 0) {
    func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  lVar5 = 0x676e69646e6573;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  lVar1 = lVar5;
  func_0x000107c5fadc(0x676e69646e6573,0xe700000000000000);
  uVar2 = 0;
  func_0x000107c5fe40(0);
  lVar3 = lVar1;
  uVar4 = uVar2;
  func_0x000107c312f4(lVar1,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar2);
  uVar2 = 0xe700000000000000;
  if (lVar3 != 0) {
    lVar5 = lVar3;
    func_0x000107c5faec(lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = uVar4;
  }
  FUN_10245d214(lVar5,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10245d6e4; end: 10245d717;  */

void FUN_10245d6e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10245d718; end: 10245d74f; -[AdPromotedStoryShareSupport .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010245d734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010245d738) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245d718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b988));
  return;
}



/* Entry: 10245d750; end: 10245d82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10245d750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c52030();
  func_0x000107c61180();
  func_0x000107c444a4(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x00010040de80();
  uVar3 = 0;
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_5 + _DAT_11309bf10);
    func_0x000107c615f0(uVar3);
  }
  uVar2 = 0;
  FUN_102d02a48(0);
  func_0x000107c610f8();
  func_0x000107c45854();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar3);
  return uVar2;
}



/* Entry: 10245d82c; end: 10245d84b;  */

void FUN_10245d82c(void)

{
  func_0x000107c61168(&PTR_PTR_1128425d0);
  return;
}



/* Entry: 10245d84c; end: 10245d85f;  */

bool FUN_10245d84c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10245d860; end: 10245da5b;  */

void FUN_10245d860(void)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xd000000000000017;
  pcVar4 = "dismissed_on_teardown";
  if (cVar3 != '\x01') {
    uVar5 = 0xd000000000000015;
    pcVar4 = "ift.AdPromotedStoryShareSupport";
  }
  uVar1 = 0x6e776f6873;
  if (cVar3 != '\0') {
    uVar1 = uVar5;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 != '\0') {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10245da5c; end: 10245dac3;  */

void FUN_10245da5c(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar5 = 0xd000000000000017;
  pcVar4 = "dismissed_on_teardown";
  if (cVar3 != '\x01') {
    uVar5 = 0xd000000000000015;
    pcVar4 = "ift.AdPromotedStoryShareSupport";
  }
  uVar1 = 0x6e776f6873;
  if (cVar3 != '\0') {
    uVar1 = uVar5;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 != '\0') {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10245dac4; end: 10245db27;  */

ulong FUN_10245dac4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10245db28; end: 10245db2b;  */

void FUN_10245db28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9b9c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daa9688;
  func_0x000107c61520(&UNK_10daa9688,&UNK_11050ba00);
  puRam0000000112e9b9c0 = puVar1;
  return;
}



/* Entry: 10245db2c; end: 10245db6b;  */

void FUN_10245db2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9b9c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daa9688;
  func_0x000107c61520(&UNK_10daa9688,&UNK_11050ba00);
  puRam0000000112e9b9c0 = puVar1;
  return;
}



/* Entry: 10245db6c; end: 10245dccf;  */

int FUN_10245db6c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10245dbe8;
        goto LAB_10245dbcc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10245dbcc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10245dbe8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10245dcd0; end: 10245ddb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10245dcd0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x2a);
  func_0x000107c6142c(uStack_38);
  uStack_40 = 0xd000000000000028;
  uStack_38 = 0x800000010f09f1d0;
  func_0x000100083b20(&lStack_48);
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_113083f78);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_48);
  uVar3 = uVar2;
  func_0x000107c5d984(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c5fb78(uVar2,param_2);
  func_0x000107c6142c(param_2);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10245ddb4; end: 10245e247;  */

bool FUN_10245ddb4(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  lVar1 = 0x112d373d8;
  puVar7 = &UNK_10d9014c0;
  dVar13 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  if (param_1 <= 0.0) {
    return true;
  }
  func_0x000100083b20(&lStack_78);
  lVar2 = lStack_78;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_78);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    FUN_10245dcd0();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
    lVar4 = lVar3;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      uVar5 = 0x112d373e8;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      puVar6 = puVar9;
      func_0x000107c6147c(puVar9,&lStack_78,uVar5,lVar1,6);
      (**(code **)(lVar12 + 0x38))(puVar9,(uint)puVar6 ^ 1,1,lVar1);
      puVar6 = puVar9;
      (**(code **)(lVar12 + 0x30))(puVar9,1,lVar1);
      if ((int)puVar6 != 1) {
        (**(code **)(lVar12 + 0x20))(lVar11,puVar9,lVar1);
        func_0x000107c5eea0(lVar10);
        func_0x000107c5ee68(lVar11);
        pcVar8 = *(code **)(lVar12 + 8);
        (*pcVar8)(lVar10,lVar1);
        (*pcVar8)(lVar11,lVar1);
        if (param_1 <= dVar13) {
          return true;
        }
        return dVar13 < 0.0;
      }
      goto LAB_10245dfe4;
    }
  }
  (**(code **)(lVar12 + 0x38))(puVar9,1,1,lVar1);
LAB_10245dfe4:
  func_0x0001000d1dcc(puVar9);
  return true;
}



/* Entry: 10245e248; end: 10245e317;  */

void FUN_10245e248(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c453e4();
    puVar4 = puVar3;
    FUN_10245dcd0();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    func_0x000107c56bcc(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 10245e318; end: 10245e367;  */

void FUN_10245e318(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10245e368; end: 10245e423;  */

void FUN_10245e368(char param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  ulong uVar4;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x10);
  if (param_1 == '\0') {
    uVar4 = 0xe500000000000000;
    uVar2 = 0x6e776f6873;
  }
  else {
    uVar2 = 0xd000000000000017;
    pcVar1 = "dismissed_on_teardown";
    if (param_1 != '\x01') {
      uVar2 = 0xd000000000000015;
      pcVar1 = "ift.AdPromotedStoryShareSupport";
    }
    uVar4 = (ulong)pcVar1 | 0x8000000000000000;
  }
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000105e8dac0(uVar3,param_1 == '\0',uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10245e424; end: 10245e433;  */

void FUN_10245e424(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108f0950,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10245e434; end: 10245e49f;  */

long FUN_10245e434(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 uStack_21;
  
  func_0x000107c613fc();
  uStack_21 = 0;
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  puVar1 = &uStack_21;
  func_0x00010042e6a0();
  *(undefined1 **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 10245e4a0; end: 10245e50b;  */

/* WARNING: Removing unreachable block (ram,0x00010245e4cc) */

void FUN_10245e4a0(undefined8 param_1,byte param_2)

{
  byte abStack_41 [16];
  byte bStack_31;
  
  func_0x000104886d18(&bStack_31);
  if ((param_2 & 1) != bStack_31) {
    abStack_41[0] = param_2 & 1;
    func_0x0001007d6d78(abStack_41);
  }
  return;
}



/* Entry: 10245e50c; end: 10245e533;  */

/* WARNING: Removing unreachable block (ram,0x00010245e4cc) */

void FUN_10245e50c(void)

{
  byte bVar1;
  long unaff_x20;
  byte abStack_41 [16];
  byte bStack_31;
  
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000104886d18(&bStack_31);
  if ((bVar1 & 1) != bStack_31) {
    abStack_41[0] = bVar1 & 1;
    func_0x0001007d6d78(abStack_41);
  }
  return;
}



/* Entry: 10245e534; end: 10245e557;  */

void FUN_10245e534(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10245e558; end: 10245e62b;  */

void FUN_10245e558(undefined1 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "setPresented(_:)";
  func_0x0001000c10c0("setPresented(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_11050baf0;
  func_0x000107c613fc(&UNK_11050baf0,0x19,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  puVar2[0x18] = param_1;
  uStack_40 = 0x10245e644;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11050bb08;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c6157c();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10245e62c; end: 10245e657;  */

undefined1  [16] FUN_10245e62c(void)

{
  return ZEXT816(0x11050bad0);
}



/* Entry: 10245e658; end: 10245e8d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10245e658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9bc30) = 0;
  lVar3 = _DAT_112e9bc38;
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112e9bc40) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e9bc48) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e9bc50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9bc58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9bc60) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e9bc68) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e9bc70) = param_6;
  lVar3 = 0;
  func_0x0001008f8650();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = param_3;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  *(long *)(unaff_x20 + _DAT_112e9bc78) = lVar3;
  lVar4 = 0;
  func_0x0001008f8670();
  lVar3 = lVar4;
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126aa868;
  func_0x000107c610f8();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x10) = puVar2;
  plVar1 = (long *)(unaff_x20 + _DAT_112e9bc80);
  plVar1[3] = lVar4;
  plVar1[4] = (long)&PTR_DAT_11050ba78;
  *plVar1 = lVar3;
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  puVar2 = &UNK_11050bba0;
  func_0x000107c613fc(&UNK_11050bba0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar5);
  func_0x000107c61174();
  uVar6 = 6;
  func_0x0001001ca524(6,1,0,2,0,0,&UNK_10daa9990,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_6);
  uVar7 = *(undefined8 *)(puVar5 + _DAT_112e9bc30);
  *(undefined8 *)(puVar5 + _DAT_112e9bc30) = uVar6;
  func_0x000107c61170(puVar5);
  func_0x000107c61574(uVar7);
  return puVar5;
}



/* Entry: 10245e8d8; end: 10245e8ef;  */

void FUN_10245e8d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10245e8f0,0,0);
  return;
}



/* Entry: 10245e8f0; end: 10245e9af;  */

void FUN_10245e8f0(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  uVar4 = lVar6 + 0x10;
  func_0x000107c61618();
  if (uVar4 != 0) {
    uVar2 = uVar4;
    FUN_10245ea48();
    func_0x000107c61170(uVar4);
    if ((uVar2 & 1) != 0) {
      lVar6 = *(long *)(unaff_x22 + 0x40);
      func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x28,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61618();
      *(long *)(unaff_x22 + 0x48) = lVar6;
      if (lVar6 != 0) {
        plVar3 = (long *)0xc0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x50) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_10245e9b0;
        plVar3[7] = lVar6;
        lVar6 = 0x112e093f0;
        func_0x0001000285a8(0x112e093f0,&UNK_10daa9a80);
        plVar3[8] = lVar6;
        lVar6 = *(long *)(lVar6 + -8);
        plVar3[9] = lVar6;
        uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar3[10] = uVar4;
        lVar6 = 0x112e093f8;
        func_0x0001000285a8(0x112e093f8,&UNK_10d9df7e0);
        plVar3[0xb] = lVar6;
        lVar6 = *(long *)(lVar6 + -8);
        plVar3[0xc] = lVar6;
        uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar3[0xd] = uVar4;
        lVar6 = 0x112e09400;
        func_0x0001000285a8(0x112e09400,&UNK_10daa9a90);
        plVar3[0xe] = lVar6;
        lVar6 = *(long *)(lVar6 + -8);
        plVar3[0xf] = lVar6;
        uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar3[0x10] = uVar4;
        lVar5 = 0;
        func_0x000107c5fcec();
        puVar1 = PTR___sScMMa_11034fc70;
        lVar6 = lVar5;
        func_0x000107c5fce8();
        plVar3[0x11] = lVar6;
        lVar6 = 0x112d45220;
        FUN_10245fb7c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
        func_0x000107c5fca8();
        plVar3[0x12] = lVar5;
        plVar3[0x13] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_10245ed10,lVar5,lVar6);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010245e9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10245e9b0; end: 10245e9f3;  */

void FUN_10245e9b0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x48);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010245e9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10245e9f4; end: 10245ea47;  */

void FUN_10245e9f4(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10245fc50;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10245e8f0,0,0);
  return;
}



/* Entry: 10245ea48; end: 10245ebe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10245ea48(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010ef10db0);
    lVar3 = lVar1;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    if (((int)lVar3 == 0) || ((int)lVar3 != 1)) {
      func_0x000107c615e8(lVar1);
    }
    else {
      uVar4 = 0;
      func_0x000107c5fadc(0xd000000000000024,0x800000010f09f280);
      lVar3 = lVar1;
      func_0x000107c4c0d0(lVar1);
      func_0x000107c61170();
      FUN_10245ddb4((double)lVar3);
      if ((uVar4 & 1) != 0) {
        func_0x000107c615e8(lVar1);
        return 1;
      }
      func_0x00010245e014(auStack_60 + -extraout_x8,(double)lVar3);
      func_0x000107c615e8(lVar1);
      func_0x0001000d1dcc(auStack_60 + -extraout_x8);
    }
  }
  return 0;
}



/* Entry: 10245ebe4; end: 10245ed0f;  */

void FUN_10245ebe4(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  lVar5 = 0x112e093f0;
  func_0x0001000285a8(0x112e093f0,&UNK_10daa9a80);
  *(long *)(unaff_x22 + 0x40) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar5 = 0x112e093f8;
  func_0x0001000285a8(0x112e093f8,&UNK_10d9df7e0);
  *(long *)(unaff_x22 + 0x58) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar5 = 0x112e09400;
  func_0x0001000285a8(0x112e09400,&UNK_10daa9a90);
  *(long *)(unaff_x22 + 0x70) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  uVar4 = 0x112d45220;
  FUN_10245fb7c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10245ed10,uVar3,uVar4);
  return;
}



/* Entry: 10245ed10; end: 10245f0bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245ed10(void)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar12 = *(long *)(unaff_x22 + 0x10);
  lVar9 = *(long *)(lVar12 + _DAT_113091b78);
  *(long *)(unaff_x22 + 0xa0) = lVar9;
  func_0x000107c615f0(lVar9);
  func_0x000107c61170(lVar12);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000100083b20(unaff_x22 + 0x18);
  lVar12 = *(long *)(unaff_x22 + 0x18);
  uVar13 = *(undefined8 *)(lVar12 + _DAT_113091b70);
  func_0x000107c615f0(uVar13);
  func_0x000107c61170(lVar12);
  uVar8 = uVar13;
  func_0x000107c419f0(uVar13);
  func_0x000107c61180();
  func_0x000107c615e8(uVar13);
  uVar13 = uVar8;
  func_0x0001000b637c(uVar8);
  func_0x000107c61170(uVar8);
  (**(code **)(lVar7 + 0x68))
            (uVar6,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             uVar10);
  func_0x0001000d52ec(uVar11,uVar6);
  func_0x000107c61574(uVar13);
  (**(code **)(lVar7 + 8))(uVar6,uVar10);
  lVar7 = lVar9;
  func_0x000107c3dfc0();
  if ((lVar7 != 0) || (func_0x000107c4d668(), lVar9 == 2)) {
    func_0x000107c5fd34(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x70));
    plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_10245f0bc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar1,unaff_x22 + 0x20,*(undefined8 *)(unaff_x22 + 0x40));
    return;
  }
  uVar2 = *(ulong *)(unaff_x22 + 0x88);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  lVar7 = *(long *)(unaff_x22 + 0xa0);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70));
    func_0x000107c615e8(lVar7);
    goto LAB_10245ef24;
  }
  func_0x000107c3dfc0();
  if (lVar7 == 0) {
    uVar2 = *(ulong *)(unaff_x22 + 0xa0);
    func_0x000107c4d668();
    lVar7 = _DAT_112e9bc50;
    if (uVar2 == 2) goto LAB_10245ef04;
    lVar12 = *(long *)(unaff_x22 + 0x38);
    lVar9 = lVar12;
    if ((*(byte *)(lVar12 + _DAT_112e9bc50) & 1) == 0) {
      FUN_10245f910();
      lVar9 = *(long *)(unaff_x22 + 0x38);
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(lVar12 + lVar7) = 1;
        lVar9 = lVar9 + _DAT_112e9bc80;
        uVar6 = *(undefined8 *)(lVar9 + 0x18);
        lVar7 = *(long *)(lVar9 + 0x20);
        func_0x0001000a8868(lVar9,uVar6);
        (**(code **)(lVar7 + 0x10))(uVar6,lVar7);
        lVar9 = *(long *)(unaff_x22 + 0x38);
      }
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar7 = *(long *)(unaff_x22 + 0x78);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = 0;
    func_0x00010058ec44(0);
    *(undefined8 *)(unaff_x22 + 0x30) = 0x3ff0000000000000;
    uVar13 = 0x112e5e398;
    FUN_10245fb7c(0x112e5e398,&SUB_10058ec44,
                  PTR___sSo13UIWindowLevela5UIKit01_C23NumericRawRepresentableACMc_110351628);
    func_0x000107c5f16c(unaff_x22 + 0x28,PTR__UIWindowLevelAlert_110345e80,unaff_x22 + 0x30,uVar10,
                        uVar13);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar3 = PTR_PTR_1126b1c10;
    func_0x000107c610f8(PTR_PTR_1126b1c10);
    func_0x000107c495e0(uVar13);
    uVar13 = *(undefined8 *)(lVar9 + _DAT_112e9bc68);
    func_0x0001008f8610(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar3);
    func_0x000107c61174(lVar9);
    puVar4 = puVar3;
    func_0x00010372ee48(puVar3,lVar9,8);
    func_0x000107c42c1c(uVar13);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(puVar3);
    pcVar5 = *(code **)(lVar7 + 8);
  }
  else {
LAB_10245ef04:
    lVar7 = *(long *)(unaff_x22 + 0x78);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
    pcVar5 = *(code **)(lVar7 + 8);
  }
  (*pcVar5)(uVar6,uVar8);
LAB_10245ef24:
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010245ef64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10245f0bc; end: 10245f0ff;  */

void FUN_10245f0bc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10245f100,*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 10245f100; end: 10245f3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245f100(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (*(long *)(unaff_x22 + 0x20) != 0) {
    lVar7 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c61170();
    func_0x000107c3dfc0();
    if (lVar7 != 0) {
LAB_10245f154:
      plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb0) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_10245f3c4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                (plVar1,(long *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x40));
      return;
    }
    lVar7 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c4d668();
    if (lVar7 == 2) goto LAB_10245f154;
  }
  lVar7 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(ulong *)(unaff_x22 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar7 + 8))(uVar2,uVar10);
  func_0x000107c5fd5c();
  lVar7 = *(long *)(unaff_x22 + 0xa0);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70));
    func_0x000107c615e8(lVar7);
    goto LAB_10245f22c;
  }
  func_0x000107c3dfc0();
  if (lVar7 == 0) {
    uVar2 = *(ulong *)(unaff_x22 + 0xa0);
    func_0x000107c4d668();
    lVar7 = _DAT_112e9bc50;
    if (uVar2 == 2) goto LAB_10245f20c;
    lVar9 = *(long *)(unaff_x22 + 0x38);
    lVar12 = lVar9;
    if ((*(byte *)(lVar9 + _DAT_112e9bc50) & 1) == 0) {
      FUN_10245f910();
      lVar12 = *(long *)(unaff_x22 + 0x38);
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(lVar9 + lVar7) = 1;
        lVar12 = lVar12 + _DAT_112e9bc80;
        uVar10 = *(undefined8 *)(lVar12 + 0x18);
        lVar7 = *(long *)(lVar12 + 0x20);
        func_0x0001000a8868(lVar12,uVar10);
        (**(code **)(lVar7 + 0x10))(uVar10,lVar7);
        lVar12 = *(long *)(unaff_x22 + 0x38);
      }
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar7 = *(long *)(unaff_x22 + 0x78);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar3 = 0;
    func_0x00010058ec44(0);
    *(undefined8 *)(unaff_x22 + 0x30) = 0x3ff0000000000000;
    uVar13 = 0x112e5e398;
    FUN_10245fb7c(0x112e5e398,&SUB_10058ec44,
                  PTR___sSo13UIWindowLevela5UIKit01_C23NumericRawRepresentableACMc_110351628);
    func_0x000107c5f16c(unaff_x22 + 0x28,PTR__UIWindowLevelAlert_110345e80,unaff_x22 + 0x30,uVar3,
                        uVar13);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar4 = PTR_PTR_1126b1c10;
    func_0x000107c610f8(PTR_PTR_1126b1c10);
    func_0x000107c495e0(uVar13);
    uVar13 = *(undefined8 *)(lVar12 + _DAT_112e9bc68);
    func_0x0001008f8610(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar4);
    func_0x000107c61174(lVar12);
    puVar5 = puVar4;
    func_0x00010372ee48(puVar4,lVar12,8);
    func_0x000107c42c1c(uVar13);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(puVar4);
    pcVar6 = *(code **)(lVar7 + 8);
  }
  else {
LAB_10245f20c:
    lVar7 = *(long *)(unaff_x22 + 0x78);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
    pcVar6 = *(code **)(lVar7 + 8);
  }
  (*pcVar6)(uVar10,uVar8);
LAB_10245f22c:
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010245f26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10245f3c4; end: 10245f407;  */

void FUN_10245f3c4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10245fc4c,*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 10245f408; end: 10245f48f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245f408(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112e9bc30);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10245f490; end: 10245f52b; -[_TtC40DeclaredAgeVerificationRemediationPlugin40DeclaredAgeVerificationRemediationPlugin dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245f490(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112e9bc30);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10245f52c; end: 10245f5c3; -[_TtC40DeclaredAgeVerificationRemediationPlugin40DeclaredAgeVerificationRemediationPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010245f568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010245f56c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245f52c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9bc58));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9bc60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9bc68));
  return;
}



/* Entry: 10245f5c4; end: 10245f6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10245f5c4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e9bc30);
  if (lVar3 != 0) {
    func_0x000107c6157c(lVar3);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9bc38);
  func_0x000107c4b940(uVar4);
  *(undefined1 *)(unaff_x20 + _DAT_112e9bc48) = 1;
  if (*(char *)(unaff_x20 + _DAT_112e9bc40) == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112e9bc40) = 0;
    func_0x000100083b20(&uStack_40);
    uVar2 = uStack_40;
    func_0x000107c614f0(uStack_40);
    (**(code **)(lStack_38 + 0x10))(0,uVar2,lStack_38);
    func_0x000107c615e8(uStack_40);
    lVar3 = unaff_x20 + _DAT_112e9bc80;
    uVar2 = *(undefined8 *)(lVar3 + 0x18);
    lVar1 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar2);
    (**(code **)(lVar1 + 8))(2,uVar2,lVar1);
  }
  func_0x000107c5d278(uVar4);
  return ZEXT816(0);
}



/* Entry: 10245f6ec; end: 10245f803;  */

/* WARNING: Possible PIC construction at 0x00010245f7e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010245f7ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245f6ec(byte param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9bc38);
  func_0x000107c4b940(uVar4);
  if ((((param_1 & 1) == 0) || (*(char *)(unaff_x20 + _DAT_112e9bc48) != '\x01')) &&
     (param_1 = param_1 & 1, param_1 != *(byte *)(unaff_x20 + _DAT_112e9bc40))) {
    *(byte *)(unaff_x20 + _DAT_112e9bc40) = param_1;
    func_0x000100083b20(&uStack_50);
    uVar3 = uStack_50;
    func_0x000107c614f0(uStack_50);
    (**(code **)(lStack_48 + 0x10))(param_1,uVar3,lStack_48);
    func_0x000107c615e8(uStack_50);
    lVar1 = unaff_x20 + _DAT_112e9bc80;
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar3);
    (**(code **)(lVar2 + 8))(param_2,uVar3,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 10245f804; end: 10245f84b; -[_TtC40DeclaredAgeVerificationRemediationPlugin40DeclaredAgeVerificationRemediationPlugin init] */

void FUN_10245f804(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeclaredAgeVerificationRemediationPlugin.DeclaredAgeVerificationRemediationPlugin"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10245f830);
  (*pcVar1)();
}



/* Entry: 10245f84c; end: 10245f853; -[_TtC40DeclaredAgeVerificationRemediationPlugin40DeclaredAgeVerificationRemediationPlugin requiresDeclaredAgeCheck] */

undefined8 FUN_10245f84c(void)

{
  return 1;
}



/* Entry: 10245f854; end: 10245f883; -[_TtC40DeclaredAgeVerificationRemediationPlugin40DeclaredAgeVerificationRemediationPlugin declaredAgeVerificationDidShowBlockingUI] */

void FUN_10245f854(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10245f6ec(1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10245f884; end: 10245f8e3; -[_TtC40DeclaredAgeVerificationRemediationPlugin40DeclaredAgeVerificationRemediationPlugin declaredAgeVerificationCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245f884(long param_1)

{
  func_0x000107c61174();
  FUN_10245e248();
  func_0x000107c4ffe8(*(undefined8 *)(param_1 + _DAT_112e9bc68));
  func_0x000107c61180();
  func_0x000107c615e8();
  FUN_10245f6ec(0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10245f8e4; end: 10245f90f;  */

undefined ** FUN_10245f8e4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10245f910; end: 10245fb7b;  */

bool FUN_10245f910(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar17 = puVar5;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar6 = 0;
  func_0x000101b56c10();
  uVar7 = 0x112d36e48;
  FUN_10245fb7c(0x112d36e48,&SUB_101b56c10,PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
  puVar5 = puVar17;
  func_0x000107c5fe10(puVar17,uVar6,uVar7);
  func_0x000107c61170(puVar17);
  if (((ulong)puVar5 & 0xc000000000000001) == 0) {
    uVar16 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
    puVar12 = (ulong *)(puVar5 + 0x38);
    uVar11 = ~uVar16;
    uVar16 = -uVar16;
    uVar10 = 0xffffffffffffffff;
    if (uVar16 < 0x40) {
      uVar10 = ~(-1L << (uVar16 & 0x3f));
    }
    uVar10 = uVar10 & *puVar12;
    puVar17 = puVar5;
    func_0x000107c61434();
    lStack_70 = 0;
    puVar13 = puVar5;
  }
  else {
    puVar17 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar17 = puVar5;
    }
    func_0x000107c61434(puVar5);
    func_0x000107c60288();
    func_0x000107c5fe30(&puStack_88);
    uVar10 = uStack_68;
    uVar11 = uStack_78;
    puVar12 = puStack_80;
    puVar13 = puStack_88;
  }
LAB_10245fa44:
  do {
    lVar14 = lStack_70;
    uVar16 = uVar10;
    uVar10 = uVar16;
    lVar15 = lVar14;
    if ((long)puVar13 < 0) {
      func_0x000107c602ac();
      if (puVar17 == (undefined *)0x0) {
LAB_10245fb2c:
        bVar4 = false;
        puStack_90 = (undefined *)0x0;
        goto LAB_10245fb34;
      }
      puStack_98 = puVar17;
      func_0x000107c6147c(&puStack_90,&puStack_98,PTR___syXlN_11034f1a0 + 8,uVar6,7);
      puVar17 = puStack_90;
    }
    else {
      while (uVar10 == 0) {
        lVar1 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10245fb7c);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar16 = 0;
          goto LAB_10245fb2c;
        }
        lVar15 = lVar1;
        uVar10 = puVar12[lVar1];
      }
      uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar17 = *(undefined **)
                 (*(long *)(puVar13 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                 lVar15 * 0x200);
      puStack_90 = puVar17;
      func_0x000107c61174(puVar17);
      uVar10 = uVar10 - 1 & uVar10;
    }
    bVar4 = puVar17 != (undefined *)0x0;
    if (puVar17 == (undefined *)0x0) goto LAB_10245fb34;
    puVar8 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    func_0x000107c61168(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
    puVar9 = puVar17;
    func_0x000107c6148c(puVar17,puVar8);
    lStack_70 = lVar15;
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170();
      goto LAB_10245fa44;
    }
    func_0x000107c3d0e4();
    func_0x000107c61170();
    if (puVar9 == (undefined *)0x0) {
LAB_10245fb34:
      func_0x000100deaf38(puVar13,puVar12,uVar11,lVar14,uVar16);
      func_0x000107c6142c(puVar5);
      return bVar4;
    }
  } while( true );
}



/* Entry: 10245fb7c; end: 10245fbbb;  */

void FUN_10245fb7c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10245fbbc; end: 10245fc0f;  */

void FUN_10245fbbc(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10245fc10;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10245e8f0,0,0);
  return;
}



/* Entry: 10245fc10; end: 10245fc4b;  */

void FUN_10245fc10(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010245fc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10245fc4c; end: 10245fc73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245fc4c(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (*(long *)(unaff_x22 + 0x20) != 0) {
    lVar7 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c61170();
    func_0x000107c3dfc0();
    if (lVar7 != 0) {
LAB_10245f154:
      plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb0) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_10245f3c4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                (plVar1,(long *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x40));
      return;
    }
    lVar7 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c4d668();
    if (lVar7 == 2) goto LAB_10245f154;
  }
  lVar7 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(ulong *)(unaff_x22 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar7 + 8))(uVar2,uVar10);
  func_0x000107c5fd5c();
  lVar7 = *(long *)(unaff_x22 + 0xa0);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70));
    func_0x000107c615e8(lVar7);
    goto LAB_10245f22c;
  }
  func_0x000107c3dfc0();
  if (lVar7 == 0) {
    uVar2 = *(ulong *)(unaff_x22 + 0xa0);
    func_0x000107c4d668();
    lVar7 = _DAT_112e9bc50;
    if (uVar2 == 2) goto LAB_10245f20c;
    lVar9 = *(long *)(unaff_x22 + 0x38);
    lVar12 = lVar9;
    if ((*(byte *)(lVar9 + _DAT_112e9bc50) & 1) == 0) {
      FUN_10245f910();
      lVar12 = *(long *)(unaff_x22 + 0x38);
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(lVar9 + lVar7) = 1;
        lVar12 = lVar12 + _DAT_112e9bc80;
        uVar10 = *(undefined8 *)(lVar12 + 0x18);
        lVar7 = *(long *)(lVar12 + 0x20);
        func_0x0001000a8868(lVar12,uVar10);
        (**(code **)(lVar7 + 0x10))(uVar10,lVar7);
        lVar12 = *(long *)(unaff_x22 + 0x38);
      }
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar7 = *(long *)(unaff_x22 + 0x78);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar3 = 0;
    func_0x00010058ec44(0);
    *(undefined8 *)(unaff_x22 + 0x30) = 0x3ff0000000000000;
    uVar13 = 0x112e5e398;
    FUN_10245fb7c(0x112e5e398,&SUB_10058ec44,
                  PTR___sSo13UIWindowLevela5UIKit01_C23NumericRawRepresentableACMc_110351628);
    func_0x000107c5f16c(unaff_x22 + 0x28,PTR__UIWindowLevelAlert_110345e80,unaff_x22 + 0x30,uVar3,
                        uVar13);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar4 = PTR_PTR_1126b1c10;
    func_0x000107c610f8(PTR_PTR_1126b1c10);
    func_0x000107c495e0(uVar13);
    uVar13 = *(undefined8 *)(lVar12 + _DAT_112e9bc68);
    func_0x0001008f8610(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar4);
    func_0x000107c61174(lVar12);
    puVar5 = puVar4;
    func_0x00010372ee48(puVar4,lVar12,8);
    func_0x000107c42c1c(uVar13);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(puVar4);
    pcVar6 = *(code **)(lVar7 + 8);
  }
  else {
LAB_10245f20c:
    lVar7 = *(long *)(unaff_x22 + 0x78);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
    pcVar6 = *(code **)(lVar7 + 8);
  }
  (*pcVar6)(uVar10,uVar8);
LAB_10245f22c:
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010245f26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10245fc74; end: 10245fd2b;  */

void FUN_10245fc74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *param_2;
  func_0x0001000285a8(0x112e9bd08,&UNK_10daa9b30);
  puVar4 = &uStack_58;
  uStack_58 = uVar7;
  func_0x0001000838ec(puVar4);
  FUN_102460c10(uVar5,puVar4,uVar2,uVar1,uVar3,uVar6);
  func_0x000107c61574(puVar4);
  func_0x000100082720("BitmojiExtensionSettingsPresenterEntryPointProvider",0x33,2);
  *param_1 = uVar5;
  return;
}



/* Entry: 10245fd2c; end: 10245fdd7;  */

void FUN_10245fd2c(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10245fd84;
                    /* WARNING: Could not recover jumptable at 0x00010245fd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 10245fdd8; end: 10245fecf;  */

void FUN_10245fdd8(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  int *piVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  if (lVar4 == 0) {
    piVar6 = *(int **)(unaff_x22 + 0x28);
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    plVar2 = (long *)(ulong)(uint)piVar6[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar6 + (long)piVar6);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    pcVar3 = FUN_10245ff14;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    piVar6 = *(int **)(unaff_x22 + 0x28);
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(long *)(unaff_x22 + 0x48) = lVar1;
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = uVar5;
    *(long *)(lVar1 + 0x28) = lVar4;
    plVar2 = (long *)(ulong)(uint)piVar6[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar6 + (long)piVar6);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    pcVar3 = FUN_10245fed0;
  }
  *plVar2 = unaff_x22;
  plVar2[1] = (long)pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010245fecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1);
  return;
}



/* Entry: 10245fed0; end: 10245ff13;  */

void FUN_10245fed0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x48);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010245ff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10245ff14; end: 10245ff4f;  */

void FUN_10245ff14(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010245ff4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10245ff50; end: 10246019f;  */

void FUN_10245ff50(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_11050be50;
  func_0x000107c613fc(&UNK_11050be50,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  puVar4 = &UNK_11050be78;
  func_0x000107c613fc(&UNK_11050be78,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1024605e4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102460614;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_11050be90;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11050bec8;
  func_0x000107c613fc(&UNK_11050bec8,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_3;
  puVar7 = &UNK_11050bef0;
  func_0x000107c613fc(&UNK_11050bef0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_102460634;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x10246064c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11050bf08;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61428(param_2 + 0x10,&puStack_a0,0,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_b8,1,0);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar9);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",99,0x44,0x25,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar7;
    func_0x000107c61544(puVar7,"",99,0x46,0x1c,1);
    func_0x000107c61574(puVar7);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024601a0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10246019c);
  (*pcVar2)();
}



/* Entry: 1024601a0; end: 102460263;  */

void FUN_1024601a0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar2 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010f09f2f0);
    func_0x000107c466bc();
    func_0x000107c61170(uVar2);
  }
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
  func_0x000107c614b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,uVar2);
  return;
}



/* Entry: 102460264; end: 102460283;  */

void FUN_102460264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102460284,0,0);
  return;
}



/* Entry: 102460284; end: 1024604d7;  */

void FUN_102460284(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  uVar11 = *(ulong *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
  if (uVar11 != 0) {
    uVar4 = uVar11;
    func_0x0001016e7c78();
    if (uVar11 <= uVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024604d8);
      (*pcVar3)();
    }
    lVar12 = *(long *)(unaff_x22 + 0x88);
    lVar5 = *(long *)(unaff_x22 + 0xa0) + uVar4 * 0x10;
    uVar14 = *(undefined8 *)(lVar5 + 0x20);
    uVar1 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar1;
    func_0x000107c61434(uVar1);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xb0) = lVar12;
    if (lVar12 != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1024604d8;
      lVar5 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar5,1);
      puVar6 = &UNK_11050bdd8;
      func_0x000107c613fc(&UNK_11050bdd8,0x18,7);
      plVar10 = (long *)(puVar6 + 0x10);
      *plVar10 = 0;
      func_0x000107c5fadc(uVar7,uVar2);
      func_0x000107c5fadc(uVar14,uVar1);
      func_0x000107c42f80();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar7);
      puVar8 = &UNK_11050be00;
      func_0x000107c613fc(&UNK_11050be00,0x20,7);
      puVar13 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar13 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined **)(puVar8 + 0x10) = puVar6;
      *(long *)(puVar8 + 0x18) = lVar5;
      *(code **)(unaff_x22 + 0x70) = FUN_1024605c0;
      *(undefined **)(unaff_x22 + 0x78) = puVar8;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_1010a3098;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11050be18;
      puVar9 = puVar13;
      func_0x000107c60bc4(puVar13);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(uVar14);
      lVar5 = lVar12;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c60bd0(puVar9);
      func_0x000107c61170(lVar12);
      func_0x000107c61428(plVar10,puVar13,1,0);
      lVar12 = *plVar10;
      *plVar10 = lVar5;
      func_0x000107c61574(puVar6);
      func_0x000107c61170(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c6142c(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001024604d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1024604d8; end: 102460543;  */

void FUN_1024604d8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_102460544;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x102460584;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102460544; end: 1024605bf;  */

void FUN_102460544(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102460580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 1024605c0; end: 1024605e3;  */

void FUN_1024605c0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &UNK_11050be50;
  func_0x000107c613fc(&UNK_11050be50,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  puVar5 = &UNK_11050be78;
  func_0x000107c613fc(&UNK_11050be78,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1024605e4;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102460614;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_11050be90;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_78;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11050bec8;
  func_0x000107c613fc(&UNK_11050bec8,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar10;
  puVar8 = &UNK_11050bef0;
  func_0x000107c613fc(&UNK_11050bef0,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_102460634;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  uStack_80 = 0x10246064c;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11050bf08;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar2 = puStack_78;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar2);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61428(lVar1 + 0x10,&puStack_a0,0,0);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61428(lVar1 + 0x10,auStack_b8,1,0);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar10);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",99,0x44,0x25,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar8;
    func_0x000107c61544(puVar8,"",99,0x46,0x1c,1);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar4 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1024601a0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10246019c);
  (*pcVar3)();
}



/* Entry: 1024605e4; end: 102460633;  */

void FUN_1024605e4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar1);
  return;
}



/* Entry: 102460634; end: 102460663;  */

void FUN_102460634(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar2 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010f09f2f0);
    func_0x000107c466bc();
    func_0x000107c61170(uVar2);
  }
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
  func_0x000107c614b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar4,uVar2);
  return;
}



/* Entry: 102460664; end: 10246070f;  */

void FUN_102460664(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102460710; end: 10246071f;  */

void FUN_102460710(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102460720; end: 1024608f3;  */

undefined4 FUN_102460720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar1 = puVar4;
  func_0x000107c3ee08();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    param_2 = 0xe000000000000000;
  }
  else {
    puVar4 = puVar1;
    func_0x000107c5faec();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fb78(0x72616f6279656b2e,0xe900000000000064);
  func_0x000107c6142c(param_2);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168();
  func_0x000107c5ba34();
  func_0x000107c61180();
  uVar2 = 0x79654b656c707041;
  func_0x000107c5fadc(0x79654b656c707041,0xee00736472616f62);
  puVar3 = puVar1;
  func_0x000107c3e168();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
    func_0x000107c5fc54(puVar3,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61170(puVar3);
    puVar3 = puVar1;
    func_0x000101158fcc();
    func_0x000107c6142c(puVar1);
    if (puVar3 != (undefined *)0x0) {
      func_0x000100077018(puVar4,param_2,puVar3);
      func_0x000107c6142c(puVar3);
      func_0x000107c6142c(param_2);
      if (((ulong)puVar4 & 1) == 0) {
        return 0;
      }
      puVar4 = PTR__OBJC_CLASS___UIInputViewController_1126aa870;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar1 = puVar4;
      func_0x000107c448bc();
      func_0x000107c61170(puVar4);
      if ((int)puVar1 != 0) {
        return 2;
      }
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 1024608f4; end: 1024608f7;  */

void FUN_1024608f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9bd78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daa9b60;
  func_0x000107c61520(&UNK_10daa9b60,&UNK_11050bfb0);
  puRam0000000112e9bd78 = puVar1;
  return;
}



/* Entry: 1024608f8; end: 102460937;  */

void FUN_1024608f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9bd78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daa9b60;
  func_0x000107c61520(&UNK_10daa9b60,&UNK_11050bfb0);
  puRam0000000112e9bd78 = puVar1;
  return;
}



/* Entry: 102460938; end: 102460a9b;  */

int FUN_102460938(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1024609b4;
        goto LAB_102460998;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102460998:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1024609b4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102460a9c; end: 102460abb;  */

void FUN_102460a9c(void)

{
  func_0x000107c61168(&PTR_PTR_112e9bdc0);
  return;
}



/* Entry: 102460abc; end: 102460b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102460abc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9be20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102460b08; end: 102460b8f; -[_TtC24BitmojiExtensionSettings31BitmojiExtensionSettingsBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102460b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102460b90; end: 102460bef; -[_TtC24BitmojiExtensionSettings31BitmojiExtensionSettingsBuilder init] */

void FUN_102460b90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiExtensionSettings.BitmojiExtensionSettingsBuilder",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102460bbc);
  (*pcVar1)();
}



/* Entry: 102460bf0; end: 102460bff;  */

undefined1  [16] FUN_102460bf0(void)

{
  return ZEXT816(0x11050c008);
}



/* Entry: 102460c00; end: 102460c0f; -[_TtC24BitmojiExtensionSettings31BitmojiExtensionSettingsBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102460c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9be20));
  return;
}



/* Entry: 102460c10; end: 102460cd7;  */

void FUN_102460c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9be50,&UNK_10daa9ca0);
  puVar1 = &UNK_11050c028;
  func_0x000107c613fc(&UNK_11050c028,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102460e04,puVar1);
  return;
}



/* Entry: 102460cd8; end: 102460e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102460cd8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_70;
  long lStack_68;
  
  plVar5 = &lStack_70;
  lVar2 = param_2;
  FUN_102461c80();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e9be58;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined1 *)(lVar3 + _DAT_112e9be60) = 3;
  *(long *)(lVar3 + _DAT_112e9be68) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e9be70) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112e9be78) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112e9be80) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112e9be88) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112e9be90) = param_7;
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61154(&lStack_70,puVar4);
  *param_1 = plVar5;
  return;
}



/* Entry: 102460e04; end: 102460e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102460e04(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar11 = &lStack_70;
  lVar8 = lVar1;
  FUN_102461c80();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar7 = _DAT_112e9be58;
  puVar10 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + lVar7) = puVar10;
  *(undefined1 *)(lVar9 + _DAT_112e9be60) = 3;
  *(long *)(lVar9 + _DAT_112e9be68) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112e9be70) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112e9be78) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112e9be80) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112e9be88) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112e9be90) = uVar6;
  puVar10 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_70,puVar10);
  *param_1 = plVar11;
  return;
}



/* Entry: 102460e14; end: 102460eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102460e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112e9be58;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112e9be60) = 3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9be68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9be70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9be78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9be80) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e9be88) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e9be90) = param_6;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102460f00; end: 1024610ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102460f00(void)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000100083b20(&puStack_70);
  lVar4 = *(long *)(puStack_70 + _DAT_112f968a0);
  func_0x000107c61170();
  FUN_1024610f0();
  if (lVar4 != 0) {
    func_0x000100083b20(&puStack_70);
    puVar2 = puStack_70;
    uVar6 = *(undefined8 *)(puStack_70 + _DAT_112f96890);
    func_0x000107c615f0(uVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c3e2c0(uVar6);
    func_0x000107c615e8(uVar6);
    func_0x000100083b20(&puStack_70);
    iVar1 = *(int *)(puStack_70 + _DAT_112f968a0);
    func_0x000107c61170();
    if (iVar1 == 1) {
      func_0x000100083b20(&puStack_70);
      uVar5 = *(undefined8 *)(puStack_70 + _DAT_113091b70);
      func_0x000107c615f0(uVar5);
      func_0x000107c61170(puStack_70);
      uVar6 = uVar5;
      func_0x000107c419f0(uVar5);
      func_0x000107c61180();
      func_0x000107c615e8(uVar5);
      puVar2 = &UNK_11050c050;
      func_0x000107c613fc(&UNK_11050c050,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      pcStack_50 = FUN_102461c20;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_100c1de60;
      puStack_58 = &UNK_11050c068;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      uVar5 = uVar6;
      func_0x000107c5c320(uVar6);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(uVar6);
      func_0x000107c3e924(uVar5);
      func_0x000107c61170(uVar5);
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1024610f0; end: 1024613f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1024610f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  puVar12 = PTR_PTR_1126e2160;
  if (param_1 == 1) {
    func_0x000107c610f8(PTR_PTR_1126e2160);
    func_0x000107c453e4();
    func_0x000107c547d8();
    func_0x000100083b20(&plStack_68);
    func_0x000107c4bfb0(plStack_68);
    func_0x000107c615e8();
    FUN_102460720();
    *(char *)(unaff_x20 + _DAT_112e9be60) = (char)plStack_68;
    FUN_102461660();
  }
  else {
    if (param_1 != 0) {
      return (long *)0x0;
    }
    func_0x000107c610f8(PTR_PTR_1126e2160);
    func_0x000107c453e4();
    func_0x000107c547d8();
    func_0x000100083b20(&plStack_68);
    plVar11 = plStack_68;
    func_0x000107c4bfb0(plStack_68);
    func_0x000107c615e8(plVar11);
    func_0x000100083b20(&plStack_68);
    plVar11 = plStack_68;
    plVar5 = plStack_68;
    func_0x000107c5bd7c();
    func_0x000107c61180();
    func_0x000107c61170(plVar11);
    func_0x000100083b20(&plStack_68);
    plVar11 = plStack_68;
    plVar6 = plStack_68;
    func_0x000107c3e550();
    func_0x000107c61180();
    func_0x000107c61170(plVar11);
    func_0x000100083b20(&plStack_68);
    lVar7 = 0;
    FUN_102464398();
    lVar8 = lVar7;
    func_0x000107c610f8();
    lVar2 = _DAT_112e9bf58;
    func_0x000107c61614(lVar8 + _DAT_112e9bf58,0);
    *(undefined8 *)(lVar8 + _DAT_112e9bf60) = 0;
    *(undefined8 *)(lVar8 + _DAT_112e9bf68) = 0;
    *(undefined **)(lVar8 + _DAT_112e9bf70) = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112e9bf78);
    *puVar1 = 0x4372656b63697453;
    puVar1[1] = 0xeb000000006c6c65;
    lVar3 = _DAT_112e9bf80;
    puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c53840(puVar9);
    puVar10 = puVar9;
    func_0x000107c61170();
    *(undefined **)(lVar8 + lVar3) = puVar9;
    *(undefined8 *)(lVar8 + _DAT_112e9bf88) = 0;
    lVar3 = _DAT_112e9bf90;
    FUN_102462cf8();
    *(undefined **)(lVar8 + lVar3) = puVar10;
    *(long **)(lVar8 + _DAT_112e9bf40) = plVar5;
    *(long **)(lVar8 + _DAT_112e9bf48) = plVar6;
    *(long **)(lVar8 + _DAT_112e9bf50) = plStack_68;
    func_0x000107c61604(lVar8 + lVar2);
    puVar9 = PTR_s_init_1125d9248;
    lStack_78 = lVar8;
    lStack_70 = lVar7;
    func_0x000107c61174(plVar5);
    func_0x000107c61174(plVar6);
    func_0x000107c615f0(plStack_68);
    plVar11 = &lStack_78;
    func_0x000107c61154(plVar11,puVar9);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1024613f4);
      (*pcVar4)();
    }
    func_0x000107c61170(plVar5);
    func_0x000107c61170(plVar6);
    func_0x000107c615e8(plStack_68);
    plStack_68 = plVar11;
  }
  func_0x000107c61170(puVar12);
  return plStack_68;
}



/* Entry: 1024613f4; end: 102461477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024613f4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  lVar1 = param_2;
  FUN_102460720();
  if (((uint)lVar1 & 0xff) == 2) {
    if (*(byte *)(param_2 + _DAT_112e9be60) == 2) goto LAB_102461460;
  }
  else if (*(byte *)(param_2 + _DAT_112e9be60) < 2) goto LAB_102461460;
  FUN_102461a04();
LAB_102461460:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102461478; end: 10246149f; -[_TtC24BitmojiExtensionSettings33BitmojiExtensionSettingsPresenter present] */

void FUN_102461478(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102460f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024614a0; end: 102461537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024614a0(void)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000107c614f0();
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112f96890);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_38);
  func_0x000107c41864(uVar1);
  func_0x000107c615e8(uVar1);
  func_0x000107c61154(&stack0xffffffffffffffb8,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102461538; end: 1024615d7; -[_TtC24BitmojiExtensionSettings33BitmojiExtensionSettingsPresenter dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102461538(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_112f96890);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x000107c41864(uVar2);
  func_0x000107c615e8(uVar2);
  uStack_48 = param_1;
  uStack_40 = uVar1;
  func_0x000107c61154(&uStack_48,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024615d8; end: 10246165f; -[_TtC24BitmojiExtensionSettings33BitmojiExtensionSettingsPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024615d8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9be70));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9be68));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9be78));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9be90));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9be88));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9be80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9be58));
  return;
}



/* Entry: 102461660; end: 102461a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102461660(char param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 unaff_x20;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  if (param_1 == '\x02') {
    func_0x000100083b20(&plStack_68);
    plVar11 = plStack_68;
    plVar4 = plStack_68;
    func_0x000107c5bd7c(plStack_68);
    func_0x000107c61180();
    func_0x000107c61170(plVar11);
    func_0x000100083b20(&plStack_68);
    plVar5 = plStack_68;
    func_0x000107c3e550(plStack_68);
    func_0x000107c61180();
    func_0x000107c61170(plStack_68);
    FUN_102468f5c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    plVar11 = plVar4;
    func_0x000102469498(plVar4,plVar5);
    func_0x000107c61170(plVar4);
    func_0x000107c61170(plVar5);
  }
  else {
    func_0x000100083b20(&plStack_68);
    plVar11 = plStack_68;
    plVar4 = plStack_68;
    func_0x000107c5bd7c();
    func_0x000107c61180();
    func_0x000107c61170(plVar11);
    func_0x000100083b20(&plStack_68);
    plVar11 = plStack_68;
    plVar5 = plStack_68;
    func_0x000107c3e550();
    func_0x000107c61180();
    func_0x000107c61170(plVar11);
    func_0x000100083b20(&plStack_68);
    lVar6 = 0;
    FUN_102467604();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar1 = _DAT_112e9c130;
    func_0x000107c61614(lVar7 + _DAT_112e9c130,0);
    *(undefined8 *)(lVar7 + _DAT_112e9c138) = 0;
    lVar2 = _DAT_112e9c140;
    puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c53840(puVar8);
    puVar9 = puVar8;
    func_0x000107c61170();
    *(undefined **)(lVar7 + lVar2) = puVar8;
    lVar2 = _DAT_112e9c148;
    FUN_102464e28();
    *(undefined **)(lVar7 + lVar2) = puVar9;
    lVar2 = _DAT_112e9c150;
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar10 = puVar9;
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(puVar8);
    func_0x000107c61170(puVar10);
    puVar10 = puVar8;
    func_0x000107c4aba4(puVar8);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar10);
    *(undefined **)(lVar7 + lVar2) = puVar8;
    lVar2 = _DAT_112e9c158;
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c5af88(puVar9);
    func_0x000107c61180();
    func_0x000107c52b50(puVar8);
    func_0x000107c61170(puVar9);
    puVar9 = puVar8;
    func_0x000107c4aba4(puVar8);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar9);
    *(undefined **)(lVar7 + lVar2) = puVar8;
    *(undefined8 *)(lVar7 + _DAT_112e9c160) = 0;
    *(long **)(lVar7 + _DAT_112e9c118) = plVar4;
    *(long **)(lVar7 + _DAT_112e9c120) = plVar5;
    *(long **)(lVar7 + _DAT_112e9c128) = plStack_68;
    func_0x000107c61604(lVar7 + lVar1,unaff_x20);
    puVar8 = PTR_s_init_1125d9248;
    lStack_78 = lVar7;
    lStack_70 = lVar6;
    func_0x000107c61174(plVar4);
    func_0x000107c61174(plVar5);
    func_0x000107c615f0(plStack_68);
    plVar11 = &lStack_78;
    func_0x000107c61154(plVar11,puVar8);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102461a04);
      (*pcVar3)();
    }
    func_0x000107c61170(plVar4);
    func_0x000107c61170(plVar5);
    func_0x000107c615e8(plStack_68);
  }
  func_0x000107c61170();
  return plVar11;
}



/* Entry: 102461a04; end: 102461c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102461a04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1;
  FUN_102461660();
  func_0x000100083b20(&puStack_70);
  uVar5 = *(undefined8 *)(puStack_70 + _DAT_112f96890);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(puStack_70);
  puVar2 = &UNK_11050c050;
  func_0x000107c613fc(&UNK_11050c050,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11050c0c0;
  func_0x000107c613fc(&UNK_11050c0c0,0x21,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  puVar3[0x20] = (char)param_1;
  pcStack_50 = FUN_102461d30;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_11050c0d8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c41864(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 102461c20; end: 102461c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102461c20(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  FUN_102460720();
  if (((uint)lVar2 & 0xff) == 2) {
    if (*(byte *)(lVar1 + _DAT_112e9be60) == 2) goto LAB_102461460;
  }
  else if (*(byte *)(lVar1 + _DAT_112e9be60) < 2) goto LAB_102461460;
  FUN_102461a04();
LAB_102461460:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102461c44; end: 102461c6f; -[_TtC24BitmojiExtensionSettings33BitmojiExtensionSettingsPresenter init] */

void FUN_102461c44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiExtensionSettings.BitmojiExtensionSettingsPresenter",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102461c70);
  (*pcVar1)();
}



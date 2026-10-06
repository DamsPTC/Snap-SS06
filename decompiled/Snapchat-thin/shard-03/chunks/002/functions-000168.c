/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102668f80; end: 10266907b;  */

long * FUN_102668f80(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar9 = *param_2;
  *param_1 = lVar9;
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar10 = param_2[1];
    param_1[1] = lVar10;
    iVar6 = *(int *)(param_3 + 0x18);
    lVar7 = 0;
    func_0x000107c5eea4();
    pcVar11 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
    func_0x000107c61434(lVar9);
    func_0x000107c61434(lVar10);
    (*pcVar11)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar7);
    iVar6 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
  }
  else {
    uVar8 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar9 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    func_0x000107c6157c(lVar9);
  }
  return param_1;
}



/* Entry: 10266907c; end: 1026690ff;  */

/* WARNING: Possible PIC construction at 0x000102669098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026690d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010266909c) */
/* WARNING: Removing unreachable block (ram,0x0001026690d4) */

void FUN_10266907c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102669100; end: 1026691cb;  */

undefined8 * FUN_102669100(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *param_1 = uVar3;
  param_1[1] = uVar4;
  iVar5 = *(int *)(param_3 + 0x18);
  lVar6 = 0;
  func_0x000107c5eea4();
  pcVar7 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  (*pcVar7)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
  iVar5 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar4 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1026691cc; end: 102669417;  */

undefined8 * FUN_1026691cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  iVar3 = *(int *)(param_3 + 0x18);
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x18))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *param_2;
  uVar5 = puVar1[1];
  puVar1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  return param_1;
}



/* Entry: 102669418; end: 10266942f;  */

void FUN_102669418(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102669430; end: 102669467;  */

void FUN_102669430(undefined8 param_1)

{
  if (lRam0000000112eb26f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6e9a60);
  return;
}



/* Entry: 102669468; end: 10266957b;  */

void FUN_102669468(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_50 = PTR___sBbWV_11034d660 + 0x40;
  lVar1 = 0x13f;
  puStack_48 = puStack_50;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dac7390;
    puStack_30 = &UNK_10dac7390;
    puStack_28 = &UNK_10dac7390;
    func_0x000107c6153c(param_1,0x100,6,&puStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 10266957c; end: 1026695e7;  */

undefined8 * FUN_10266957c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1026695e8; end: 10266962b;  */

undefined8 * FUN_1026695e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10266962c; end: 10266996f;  */

int FUN_10266962c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102669970; end: 1026699af;  */

void FUN_102669970(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac7488;
  func_0x000107c61520(&UNK_10dac7488,&UNK_1105300e8);
  puRam0000000112eb2738 = puVar1;
  return;
}



/* Entry: 1026699b0; end: 1026699b3;  */

void FUN_1026699b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac7540;
  func_0x000107c61520(&UNK_10dac7540,&UNK_110530058);
  puRam0000000112eb2740 = puVar1;
  return;
}



/* Entry: 1026699b4; end: 1026699f3;  */

void FUN_1026699b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac7540;
  func_0x000107c61520(&UNK_10dac7540,&UNK_110530058);
  puRam0000000112eb2740 = puVar1;
  return;
}



/* Entry: 1026699f4; end: 1026699f7;  */

void FUN_1026699f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac74d8;
  func_0x000107c61520(&UNK_10dac74d8,&UNK_110530058);
  puRam0000000112eb2748 = puVar1;
  return;
}



/* Entry: 1026699f8; end: 102669a37;  */

void FUN_1026699f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac74d8;
  func_0x000107c61520(&UNK_10dac74d8,&UNK_110530058);
  puRam0000000112eb2748 = puVar1;
  return;
}



/* Entry: 102669a38; end: 102669a3b;  */

void FUN_102669a38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac74b0;
  func_0x000107c61520(&UNK_10dac74b0,&UNK_110530058);
  puRam0000000112eb2750 = puVar1;
  return;
}



/* Entry: 102669a3c; end: 102669a7b;  */

void FUN_102669a3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac74b0;
  func_0x000107c61520(&UNK_10dac74b0,&UNK_110530058);
  puRam0000000112eb2750 = puVar1;
  return;
}



/* Entry: 102669a7c; end: 102669a7f;  */

void FUN_102669a7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac73e8;
  func_0x000107c61520(&UNK_10dac73e8,&UNK_1105300e8);
  puRam0000000112eb2758 = puVar1;
  return;
}



/* Entry: 102669a80; end: 102669abf;  */

void FUN_102669a80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac73e8;
  func_0x000107c61520(&UNK_10dac73e8,&UNK_1105300e8);
  puRam0000000112eb2758 = puVar1;
  return;
}



/* Entry: 102669ac0; end: 102669ac3;  */

void FUN_102669ac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac73c0;
  func_0x000107c61520(&UNK_10dac73c0,&UNK_1105300e8);
  puRam0000000112eb2760 = puVar1;
  return;
}



/* Entry: 102669ac4; end: 102669b03;  */

void FUN_102669ac4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac73c0;
  func_0x000107c61520(&UNK_10dac73c0,&UNK_1105300e8);
  puRam0000000112eb2760 = puVar1;
  return;
}



/* Entry: 102669b04; end: 102669b67;  */

ulong FUN_102669b04(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102669b68; end: 102669b7f;  */

undefined1 FUN_102669b68(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102669b80; end: 102669def;  */

void FUN_102669b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb27d8,&UNK_10dac7610);
  puVar1 = &UNK_1105301c8;
  func_0x000107c613fc(&UNK_1105301c8,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(FUN_102669df0,puVar1);
  return;
}



/* Entry: 102669df0; end: 102669e23;  */

void FUN_102669df0(void)

{
  long unaff_x20;
  
  func_0x000102669c94(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102669e24; end: 102669ec3;  */

long FUN_102669e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x48) = param_3;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_8;
  FUN_10266c87c(param_9,unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x40) = param_10;
  return unaff_x20;
}



/* Entry: 102669ec4; end: 10266a123;  */

/* WARNING: Possible PIC construction at 0x00010266a06c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010266a070) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102669ec4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c4c3ac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
    FUN_10266a124();
    lVar5 = _DAT_113083f78;
    if (lVar1 == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      lVar9 = *(long *)(unaff_x20 + 0x10);
      lVar3 = *(long *)(lVar9 + _DAT_113083f78);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar8 = param_2;
      if (lVar3 == 0) {
        func_0x000107c5faec();
        uVar8 = param_2;
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      lVar4 = lVar2;
      func_0x000107c4e67c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        lVar5 = *(long *)(lVar9 + lVar5);
        func_0x000107c5d984();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar8);
        }
        lVar3 = lVar2;
        func_0x000107c4e680();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar3 != 0) {
          puVar6 = &UNK_1105301f0;
          func_0x000107c613fc(&UNK_1105301f0,0x30,7);
          *(long *)(puVar6 + 0x10) = unaff_x20;
          *(long *)(puVar6 + 0x18) = lVar1;
          *(long *)(puVar6 + 0x20) = lVar3;
          *(long *)(puVar6 + 0x28) = lVar4;
          func_0x000107c6157c();
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac7620,puVar6,PTR___sytN_11034f1b0 + 8);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_release_11034f4c0)(puVar6);
          return;
        }
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar4);
      }
      func_0x000107c6142c(lVar1);
    }
  }
  func_0x00010266c8b8(unaff_x20 + 0x58,auStack_70);
  puVar7 = auStack_60;
  func_0x000107c61618();
  func_0x0001011144a0(auStack_70);
  if (puVar7 != (undefined1 *)0x0) {
    func_0x000107c614f0(puVar7);
    (**(code **)(lStack_58 + 8))();
    func_0x000107c615e8(puVar7);
  }
  return;
}



/* Entry: 10266a124; end: 10266a32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10266a124(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  
  lVar7 = _DAT_113083f78;
  lVar10 = *(long *)(unaff_x20 + 0x58);
  uVar14 = *(ulong *)(lVar10 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61434(lVar10);
  if (uVar14 != 0) {
    uVar11 = 0;
    plVar13 = (long *)(lVar10 + 0x28);
    do {
      if (*(ulong *)(lVar10 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10266a32c);
        (*pcVar2)();
      }
      uVar4 = plVar13[-1];
      lVar1 = *plVar13;
      uVar12 = *(ulong *)(lVar9 + lVar7);
      func_0x000107c61434(lVar1);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar3 = uVar12;
      func_0x000107c5faec();
      lVar8 = param_2;
      func_0x000107c61170(uVar12);
      if (uVar4 == uVar3 && lVar1 == param_2) {
        func_0x000107c6142c(lVar1);
        func_0x000107c6142c(param_2);
LAB_10266a228:
        func_0x00010266c7f4(uVar11);
        func_0x000107c6142c(lVar8);
        uVar5 = *(undefined8 *)(lVar9 + lVar7);
        func_0x000107c5d984(uVar5);
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        uVar14 = *(ulong *)(lVar10 + 0x10);
        lVar7 = lVar10;
        func_0x000107c61558();
        if (((int)lVar7 == 0) || (*(ulong *)(lVar10 + 0x18) >> 1 <= uVar14)) {
          FUN_10266ceb4();
          lVar10 = lVar7;
        }
        func_0x0001008d06a4(0,0,1,uVar6,lVar8);
        func_0x000107c6142c(lVar8);
        if (*(ulong *)(lVar10 + 0x10) < 5) {
          return lVar10;
        }
        lVar7 = lVar10;
        func_0x000107c61434(lVar10);
        func_0x000101994330();
        func_0x000107c61430(lVar10,2);
        return lVar7;
      }
      lVar8 = lVar1;
      func_0x000107c605b8(uVar4,lVar1,uVar3,param_2,0);
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(param_2);
      if ((uVar4 & 1) != 0) goto LAB_10266a228;
      uVar11 = uVar11 + 1;
      plVar13 = plVar13 + 2;
      param_2 = lVar8;
    } while (uVar14 != uVar11);
  }
  func_0x000107c6142c(lVar10);
  return 0;
}



/* Entry: 10266a32c; end: 10266a38b;  */

void FUN_10266a32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  lVar1 = 0;
  FUN_102669430();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266a38c,0,0);
  return;
}



/* Entry: 10266a38c; end: 10266a4df;  */

void FUN_10266a38c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0x20);
  lVar8 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_10266a96c();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  lVar1 = lVar8;
  func_0x000107c4e684();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_10266d28c(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  lVar3 = lVar1;
  func_0x000107c5fc54(lVar1,uVar2);
  func_0x000107c61170(lVar1);
  lVar1 = lVar7;
  lVar5 = lVar3;
  func_0x00010266aa7c();
  *(long *)(unaff_x22 + 0x48) = lVar1;
  func_0x000107c6142c(lVar3);
  lVar1 = lVar7;
  func_0x000107c4b848();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c5faec();
  lVar6 = lVar5;
  func_0x000107c61170(lVar1);
  *(long *)(unaff_x22 + 0x50) = lVar3;
  *(long *)(unaff_x22 + 0x58) = lVar5;
  func_0x000107c4077c(lVar8);
  func_0x000107c5dcc0();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar8 = 0;
    lVar6 = 0;
  }
  else {
    lVar8 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
  }
  *(long *)(unaff_x22 + 0x60) = lVar6;
  plVar4 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10266a4e0;
  lVar7 = *(long *)(unaff_x22 + 0x10);
  plVar4[0x1d] = lVar6;
  plVar4[0x1e] = lVar7;
  plVar4[0x1c] = lVar8;
  plVar4[0x1a] = param_1;
  plVar4[0x1b] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266ae68,0,0);
  return;
}



/* Entry: 10266a4e0; end: 10266a54b;  */

void FUN_10266a4e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x60);
  *(undefined8 *)(lVar3 + 0x70) = param_1;
  *(undefined8 *)(lVar3 + 0x78) = param_2;
  *(long *)(lVar3 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x68));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10266a54c;
  }
  else {
    pcVar2 = FUN_10266a7e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10266a54c; end: 10266a5b3;  */

void FUN_10266a54c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  func_0x000107c4077c(*(undefined8 *)(unaff_x22 + 0x28));
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10266a5b4;
  plVar1[0x14] = *(long *)(unaff_x22 + 0x10);
  plVar1[0x12] = param_1;
  plVar1[0x13] = param_2;
  lVar2 = 0;
  func_0x000107c5f804();
  plVar1[0x15] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x16] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x17] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266b32c,0,0);
  return;
}



/* Entry: 10266a5b4; end: 10266a623;  */

void FUN_10266a5b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x98) = param_2;
    *(undefined8 *)(lVar2 + 0xa0) = param_1;
    pcVar1 = FUN_10266a624;
  }
  else {
    pcVar1 = FUN_10266a8a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10266a624; end: 10266a6fb;  */

void FUN_10266a624(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  puVar9 = *(undefined8 **)(unaff_x22 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c5eea0((long)puVar9 + (long)*(int *)(lVar5 + 0x18));
  puVar9[1] = uVar12;
  *puVar9 = uVar11;
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar5 + 0x1c));
  *puVar1 = uVar6;
  puVar1[1] = uVar2;
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar5 + 0x20));
  *puVar1 = uVar4;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar5 + 0x24));
  *puVar1 = uVar3;
  puVar1[1] = uVar7;
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar2);
  FUN_10266b5d8(puVar9);
  plVar10 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_10266a6fc;
  plVar10[0x11] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266b974,0,0);
  return;
}



/* Entry: 10266a6fc; end: 10266a74b;  */

void FUN_10266a6fc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xc0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266a74c,0,0);
  return;
}



/* Entry: 10266a74c; end: 10266a7e7;  */

void FUN_10266a74c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    FUN_10266ca7c(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar2);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    FUN_10266bb9c(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar1);
    FUN_10266ca7c(uVar4);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010266a7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10266a7e8; end: 10266a89f;  */

void FUN_10266a7e8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x80));
  *(undefined8 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c5eea0((long)puVar5 + (long)*(int *)(lVar3 + 0x18));
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x1c));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x20));
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10266b5d8(puVar5);
  plVar6 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10266a6fc;
  plVar6[0x11] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266b974,0,0);
  return;
}



/* Entry: 10266a8a0; end: 10266a96b;  */

void FUN_10266a8a0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x90));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c5eea0((long)puVar7 + (long)*(int *)(lVar4 + 0x18));
  puVar7[1] = uVar10;
  *puVar7 = uVar9;
  puVar1 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x1c));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x20));
  *puVar1 = uVar3;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = uVar2;
  puVar1[1] = uVar5;
  func_0x000107c61434(uVar5);
  FUN_10266b5d8(puVar7);
  plVar8 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10266a6fc;
  plVar8[0x11] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266b974,0,0);
  return;
}



/* Entry: 10266a96c; end: 10266ae47;  */

undefined * FUN_10266a96c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_10266c250();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    FUN_10266cd90(0,lVar6,0);
    puVar7 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar7[-1];
      uVar3 = *puVar7;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar4 = *(ulong *)(puVar5 + 0x18);
      func_0x000107c61434(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        FUN_10266cd90(1 < uVar4,uVar2 + 1,1);
      }
      puVar7 = puVar7 + 2;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar5 + uVar2 * 0x20 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + uVar2 * 0x20 + 0x28) = uVar3;
      *(undefined8 *)(puVar5 + uVar2 * 0x20 + 0x30) = 0x3230303831313733;
      *(undefined8 *)(puVar5 + uVar2 * 0x20 + 0x38) = 0xe800000000000000;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(param_1);
  }
  return puVar5;
}



/* Entry: 10266ae48; end: 10266ae67;  */

void FUN_10266ae48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266ae68,0,0);
  return;
}



/* Entry: 10266ae68; end: 10266b083;  */

void FUN_10266ae68(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xf0) + 0x38);
  func_0x000107c4e7e4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xf8) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0xe8);
    if (lVar1 == 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xc0;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10266b1ec;
      lVar2 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar2,1);
      puVar4 = &UNK_110530518;
      func_0x000107c613fc(&UNK_110530518,0x18,7);
      *(long *)(puVar4 + 0x10) = lVar2;
      *(code **)(unaff_x22 + 0xb0) = FUN_10266d27c;
      *(undefined **)(unaff_x22 + 0xb8) = puVar4;
      *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
      *(code **)(unaff_x22 + 0xa0) = FUN_1025214c0;
      *(undefined **)(unaff_x22 + 0xa8) = &UNK_110530530;
      lVar2 = unaff_x22 + 0x90;
      func_0x000107c60bc4(lVar2);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
      func_0x000107c431f8(uVar7,uVar6,uVar5);
      func_0x000107c60bd0(lVar2);
      lVar2 = unaff_x22 + 0x10;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
      *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xc0;
      *(long *)(unaff_x22 + 0x50) = unaff_x22;
      *(code **)(unaff_x22 + 0x58) = FUN_10266b084;
      lVar3 = unaff_x22 + 0x50;
      func_0x000107c61448(lVar3,0);
      func_0x000107c5fadc(uVar5,lVar1);
      puVar4 = &UNK_110530568;
      func_0x000107c613fc(&UNK_110530568,0x18,7);
      *(long *)(puVar4 + 0x10) = lVar3;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x10266d284;
      *(undefined **)(unaff_x22 + 0xb8) = puVar4;
      *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0x10266d444;
      *(undefined **)(unaff_x22 + 0xa8) = &UNK_110530580;
      lVar1 = unaff_x22 + 0x90;
      func_0x000107c60bc4(lVar1);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
      func_0x000107c43130(lVar2);
      func_0x000107c60bd0(lVar1);
      func_0x000107c61170(uVar5);
      lVar2 = unaff_x22 + 0x50;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010266afb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 10266b084; end: 10266b0c3;  */

void FUN_10266b084(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266b0c4,0,0);
  return;
}



/* Entry: 10266b0c4; end: 10266b1eb;  */

void FUN_10266b0c4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar1 = *(long *)(unaff_x22 + 200);
  if (lVar1 != 0) {
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010266b118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar3,lVar1);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 **)(unaff_x22 + 0x38) = (undefined8 *)(unaff_x22 + 0xc0);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10266b1ec;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  puVar2 = &UNK_110530518;
  func_0x000107c613fc(&UNK_110530518,0x18,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar2 + 0x10) = lVar1;
  *(code **)(unaff_x22 + 0xb0) = FUN_10266d27c;
  *(undefined **)(unaff_x22 + 0xb8) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(code **)(unaff_x22 + 0xa0) = FUN_1025214c0;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_110530530;
  func_0x000107c60bc4(puVar4);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c431f8(uVar6,uVar5,uVar3);
  func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10266b1ec; end: 10266b25b;  */

void FUN_10266b1ec(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x100) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(lVar2 + 200);
    *(undefined8 *)(lVar2 + 0x108) = *(undefined8 *)(lVar2 + 0xc0);
    pcVar1 = FUN_10266b25c;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x10266b294;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10266b25c; end: 10266b32b;  */

void FUN_10266b25c(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010266b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110));
  return;
}



/* Entry: 10266b32c; end: 10266b4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266b32c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0xa0) + 0x40) + _DAT_11302efe0);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xc0) = lVar3;
  if (lVar3 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0xb0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10266b4e8;
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar4,1);
    FUN_10266d28c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar1 + 0x68))
              (uVar2,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,uVar8);
    uVar5 = uVar2;
    func_0x000107c5fff0(uVar2);
    (**(code **)(lVar1 + 8))(uVar2,uVar8);
    puVar6 = &UNK_110530248;
    func_0x000107c613fc(&UNK_110530248,0x18,7);
    puVar7 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar6 + 0x10) = lVar4;
    *(code **)(unaff_x22 + 0x70) = FUN_10266cab8;
    *(undefined **)(unaff_x22 + 0x78) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x10266d448;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110530260;
    func_0x000107c60bc4(puVar7);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4331c(uVar10,uVar9,lVar3);
    func_0x000107c60bd0(puVar7);
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010266b4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 10266b4e8; end: 10266b553;  */

void FUN_10266b4e8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xd8) = *(undefined8 *)(lVar2 + 0x88);
    *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_10266b554;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_10266b59c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10266b554; end: 10266b59b;  */

void FUN_10266b554(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xc0));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010266b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}



/* Entry: 10266b59c; end: 10266b5d7;  */

void FUN_10266b59c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010266b5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10266b5d8; end: 10266b95b;  */

/* WARNING: Removing unreachable block (ram,0x00010266b7dc) */
/* WARNING: Removing unreachable block (ram,0x00010266b948) */
/* WARNING: Removing unreachable block (ram,0x00010266b814) */
/* WARNING: Removing unreachable block (ram,0x00010266b954) */
/* WARNING: Removing unreachable block (ram,0x00010266b6c8) */

void FUN_10266b5d8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_d0 [72];
  long alStack_88 [2];
  undefined1 auStack_78 [8];
  long lStack_70;
  
  lVar1 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5eb34();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  func_0x000107c5eb30(lVar1);
  func_0x000107c5eb38(lVar1);
  lVar3 = 0;
  FUN_102669430();
  lVar1 = lVar3;
  FUN_10266d1d0();
  func_0x000107c5eb4c(param_1,lVar3,lVar1);
  func_0x000107c5fb04(puVar8);
  uVar4 = param_1;
  lVar1 = lVar3;
  func_0x000107c5faf0(param_1,lVar3,puVar8);
  if (lVar1 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c4ab28();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      lVar5 = 0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(undefined8 *)(lVar5 + 0x20) = 0x656e65635370616d;
      *(undefined8 *)(lVar5 + 0x28) = 0xec00000061746144;
      *(undefined8 *)(lVar5 + 0x30) = uVar4;
      *(long *)(lVar5 + 0x38) = lVar1;
      lVar1 = lVar5;
      func_0x0001001830b8();
      func_0x000107c61588(lVar5);
      func_0x000100ab5dc4((undefined8 *)(lVar5 + 0x20));
      uVar4 = 0x112d550a0;
      alStack_88[0] = lVar1;
      func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
      uVar10 = uVar4;
      func_0x00010266d214();
      plVar7 = alStack_88;
      func_0x000107c5eb4c(plVar7,uVar4,uVar10);
      func_0x000107c6142c(lVar1);
      plVar9 = plVar7;
      func_0x000107c5ee20(plVar7,uVar4);
      uVar10 = 0xd000000000000010;
      func_0x000107c5fadc(0xd000000000000010,0x800000010f0b4630);
      func_0x000107c5a8a0(lVar6);
      func_0x000107c61170(plVar9);
      func_0x000107c61170(uVar10);
      func_0x00010006c090(plVar7,uVar4);
      func_0x000107c615e8(lVar6);
      func_0x00010006c090(param_1,lVar3);
      goto LAB_10266b89c;
    }
    func_0x000107c6142c(lVar1);
  }
  func_0x00010006c090(param_1,lVar3);
  func_0x00010266c8b8(unaff_x20 + 0x58,alStack_88);
  puVar8 = auStack_78;
  func_0x000107c61618();
  func_0x0001011144a0(alStack_88);
  if (puVar8 != (undefined1 *)0x0) {
    func_0x000107c614f0(puVar8);
    (**(code **)(lStack_70 + 8))();
    func_0x000107c615e8(puVar8);
  }
LAB_10266b89c:
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 10266b95c; end: 10266b973;  */

void FUN_10266b95c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266b974,0,0);
  return;
}



/* Entry: 10266b974; end: 10266bb27;  */

void FUN_10266b974(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x20);
  func_0x000107c3f770();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c41574();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x90) = lVar2;
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10266bb28;
      lVar1 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar1,0);
      uVar3 = 0xd000000000000010;
      func_0x000107c5fadc(0xd000000000000010,0x800000010f0b4630);
      func_0x000107c4b288(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      puVar4 = &UNK_1105303b0;
      func_0x000107c613fc(&UNK_1105303b0,0x18,7);
      puVar5 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      *(long *)(puVar4 + 0x10) = lVar1;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x10266d144;
      *(undefined **)(unaff_x22 + 0x78) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_1016c1d3c;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1105303c8;
      func_0x000107c60bc4(puVar5);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c5dc68(lVar2);
      func_0x000107c60bd0(puVar5);
      func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010266bb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10266bb28; end: 10266bb9b;  */

void FUN_10266bb28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10266bb68,0,0);
  return;
}



/* Entry: 10266bb9c; end: 10266bcdf;  */

/* WARNING: Possible PIC construction at 0x00010266bbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010266bc98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010266bcb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010266bc9c) */
/* WARNING: Removing unreachable block (ram,0x00010266bbd8) */
/* WARNING: Removing unreachable block (ram,0x00010266bcb8) */

void FUN_10266bb9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    FUN_10266bef8();
    func_0x000107c610f8(PTR_PTR_1126ae6d0);
    func_0x000107c4831c();
    puVar1 = PTR_PTR_1126b1bb0;
    func_0x000107c61168(PTR_PTR_1126b1bb0);
    func_0x000107c3e6c4();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
    puVar2 = puVar1;
    func_0x0001091f3ad0();
    func_0x000107c61180();
    FUN_10266cfc8(param_1);
    func_0x000107c3ed80(uVar4,param_2,puVar1,lVar3,0,puVar2,2,param_1,0);
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10266bce0; end: 10266bef3;  */

void FUN_10266bce0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  if ((param_1 != 0) && (param_2 == 0)) {
    puVar2 = &UNK_110530400;
    func_0x000107c613fc(&UNK_110530400,0x18,7);
    *(long *)(puVar2 + 0x10) = param_3;
    puVar3 = &UNK_110530428;
    func_0x000107c613fc(&UNK_110530428,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10266d14c;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = (code *)0x10266d17c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100fe2610;
    puStack_78 = &UNK_110530440;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    pcStack_70 = FUN_10266bef4;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100de6bdc;
    puStack_78 = &UNK_110530468;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    puVar3 = &UNK_1105304a0;
    func_0x000107c613fc(&UNK_1105304a0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_3;
    puVar6 = &UNK_1105304c8;
    func_0x000107c613fc(&UNK_1105304c8,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_10266d19c;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    pcStack_70 = FUN_10266d1b0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100fe2654;
    puStack_78 = &UNK_1105304e0;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4c744(param_1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
    return;
  }
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_3);
  return;
}



/* Entry: 10266bef4; end: 10266bef7;  */

void FUN_10266bef4(void)

{
  return;
}



/* Entry: 10266bef8; end: 10266c057;  */

undefined * FUN_10266bef8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_b0;
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  puVar3 = &UNK_110530298;
  func_0x000107c613fc(&UNK_110530298,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar4 = &UNK_1105302c0;
  func_0x000107c613fc(&UNK_1105302c0,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  puVar5 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10266d124;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e1779c;
  puStack_68 = &UNK_1105302d8;
  ppuVar6 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar6);
  uStack_90 = 0x10266d130;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e17304;
  puStack_98 = &UNK_110530300;
  puStack_88 = puVar4;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61174(puVar2);
  func_0x000107c6157c();
  func_0x000107c47be0(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_88);
  func_0x000107c61574(puStack_58);
  return puVar5;
}



/* Entry: 10266c058; end: 10266c24f;  */

void FUN_10266c058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = &UNK_110530338;
  func_0x000107c613fc(&UNK_110530338,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_4);
  puVar2 = &UNK_110530360;
  func_0x000107c613fc(&UNK_110530360,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uStack_50 = 0x10266d138;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_110530378;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10266c250; end: 10266c433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10266c250(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x28) + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar5 != 0) {
    uVar12 = *(ulong *)(param_1 + 0x10);
    if (uVar12 != 0) {
      uVar13 = 0;
LAB_10266c2c4:
      uVar1 = uVar13;
      if (uVar13 <= uVar12) {
        uVar1 = uVar12;
      }
      puVar11 = (undefined8 *)(param_1 + 0x28 + uVar13 * 0x10);
      uVar13 = uVar13 + 1;
      do {
        if (uVar13 - uVar1 == 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10266c434);
          (*pcVar4)();
        }
        uVar6 = puVar11[-1];
        uVar2 = *puVar11;
        func_0x000107c61434(uVar2);
        func_0x000107c5fadc(uVar6,uVar2);
        lVar7 = lVar5;
        func_0x000107c4c39c();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar2);
        if (lVar7 != 0) {
          uVar6 = *(undefined8 *)(lVar7 + _DAT_112fcd628);
          lVar3 = ((undefined8 *)(lVar7 + _DAT_112fcd628))[1];
          func_0x000107c61434(lVar3);
          func_0x000107c61170(lVar7);
          if (lVar3 != 0) goto code_r0x00010266c364;
        }
        uVar13 = uVar13 + 1;
        puVar11 = puVar11 + 2;
        if (uVar13 - uVar12 == 1) break;
      } while( true );
    }
LAB_10266c404:
    func_0x000107c615e8(lVar5);
  }
  return puVar10;
code_r0x00010266c364:
  puVar8 = puVar10;
  func_0x000107c61558();
  puVar9 = puVar10;
  if (((ulong)puVar8 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    FUN_10266ceb4(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10,PTR__swift_bridgeObjectRelease_11034f258
                 );
  }
  uVar1 = *(ulong *)(puVar9 + 0x10);
  puVar10 = puVar9;
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    FUN_10266ceb4(puVar10,uVar1 + 1,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
  }
  *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
  *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x20) = uVar6;
  *(long *)(puVar10 + uVar1 * 0x10 + 0x28) = lVar3;
  if (uVar13 == uVar12) goto LAB_10266c404;
  goto LAB_10266c2c4;
}



/* Entry: 10266c434; end: 10266c5f7;  */

void FUN_10266c434(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    func_0x000107c3f6f4();
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    plVar2 = *(long **)(*(long *)(param_3 + 0x40) + 0x28);
    *plVar2 = lVar1;
    plVar2[1] = param_2;
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28);
    *puVar3 = 0;
    puVar3[1] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_3);
  return;
}



/* Entry: 10266c5f8; end: 10266c77b;  */

void FUN_10266c5f8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (param_1 != 0) {
    FUN_10266cadc();
    puVar1 = &UNK_110530628;
    func_0x000107c613f8(&UNK_110530628,param_1,0,0);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
    return;
  }
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010266c6a0();
  }
  plVar4 = *(long **)(*(long *)(param_3 + 0x40) + 0x28);
  *plVar4 = param_1;
  plVar4[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
  return;
}



/* Entry: 10266c77c; end: 10266c87b;  */

/* WARNING: Possible PIC construction at 0x00010266c7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010266c7dc) */

void FUN_10266c77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10266c87c; end: 10266c8f3;  */

undefined8 FUN_10266c87c(undefined8 param_1,undefined8 param_2)

{
  FUN_10266d808(param_2,param_1);
  return param_2;
}



/* Entry: 10266c8f4; end: 10266c96b;  */

void FUN_10266c8f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10266c96c;
  plVar6[4] = lVar1;
  plVar6[5] = lVar3;
  plVar6[2] = lVar4;
  plVar6[3] = lVar2;
  lVar4 = 0;
  FUN_102669430();
  plVar6[6] = lVar4;
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[7] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266a38c,0,0);
  return;
}



/* Entry: 10266c96c; end: 10266ca2b;  */

void FUN_10266c96c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010266c9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10266ca2c; end: 10266ca4b;  */

void FUN_10266ca2c(void)

{
  FUN_102669ec4();
  return;
}



/* Entry: 10266ca4c; end: 10266ca5b;  */

undefined1  [16] FUN_10266ca4c(void)

{
  return ZEXT816(0x110530228);
}



/* Entry: 10266ca5c; end: 10266ca7b;  */

void FUN_10266ca5c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb2820);
  return;
}



/* Entry: 10266ca7c; end: 10266cab7;  */

undefined8 FUN_10266ca7c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102669430();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10266cab8; end: 10266cadb;  */

void FUN_10266cab8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    FUN_10266cadc();
    puVar1 = &UNK_110530628;
    func_0x000107c613f8(&UNK_110530628,param_1,0,0);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar2);
    return;
  }
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010266c6a0();
  }
  plVar5 = *(long **)(*(long *)(lVar4 + 0x40) + 0x28);
  *plVar5 = param_1;
  plVar5[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
  return;
}



/* Entry: 10266cadc; end: 10266cb1b;  */

void FUN_10266cadc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb28c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac7778;
  func_0x000107c61520(&UNK_10dac7778,&UNK_110530628);
  puRam0000000112eb28c8 = puVar1;
  return;
}



/* Entry: 10266cb1c; end: 10266cb23;  */

undefined8 FUN_10266cb1c(void)

{
  return 1;
}



/* Entry: 10266cb24; end: 10266cbc3;  */

void FUN_10266cb24(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10266cbc4; end: 10266cbd3;  */

void FUN_10266cbc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10266cbd4; end: 10266cd8f;  */

ulong FUN_10266cbd4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10266ccb8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10266ccbc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10266d28c(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10266cd90);
  (*pcVar2)();
}



/* Entry: 10266cd90; end: 10266cdab;  */

void FUN_10266cd90(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10266cdac();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10266cdac; end: 10266ceb3;  */

undefined * FUN_10266cdac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10266ceb4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112eb28e0;
    func_0x0001000285a8(0x112eb28e0,&UNK_10dac76f8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11052ffc0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10266ceb4; end: 10266cfc7;  */

undefined *
FUN_10266ceb4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10266cfc8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 10266cfc8; end: 10266d123;  */

undefined * FUN_10266cfc8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_1;
  func_0x000100fe4188();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(long *)(lVar1 + 0x20) = param_1;
  puVar2 = PTR_PTR_1126b5b58;
  func_0x000107c610f8(PTR_PTR_1126b5b58);
  uVar3 = 0;
  FUN_10266d28c(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c61174(param_1);
  lVar4 = lVar1;
  func_0x000107c5fc48(lVar1,uVar3);
  func_0x000107c61574(lVar1);
  func_0x000107c4743c(puVar2);
  func_0x000107c61170(lVar4);
  puVar5 = PTR_PTR_1126b20d8;
  func_0x000107c61168(PTR_PTR_1126b20d8);
  func_0x000107c3eec8();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5e660();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5e518();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  puVar6 = puVar5;
  func_0x000107c3ecc8(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  return puVar6;
}



/* Entry: 10266d124; end: 10266d14b;  */

void FUN_10266d124(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_attachUI__1125a0c08,param_1);
  return;
}



/* Entry: 10266d14c; end: 10266d19b;  */

void FUN_10266d14c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 10266d19c; end: 10266d1af;  */

void FUN_10266d19c(void)

{
  long unaff_x20;
  
  **(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x10) + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 10266d1b0; end: 10266d1cf;  */

void FUN_10266d1b0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10266d1d0; end: 10266d27b;  */

void FUN_10266d1d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eb28d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_102669430(0xff);
  puVar2 = &UNK_10dac7300;
  func_0x000107c61520(&UNK_10dac7300,uVar1);
  puRam0000000112eb28d0 = puVar2;
  return;
}



/* Entry: 10266d27c; end: 10266d28b;  */

void FUN_10266d27c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (param_2 != 0) {
    FUN_10266cadc();
    puVar2 = &UNK_110530628;
    func_0x000107c613f8(&UNK_110530628,param_1,0,0);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar7 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar7 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar5,uVar3);
    return;
  }
  if (param_1 != 0) {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar6 = param_1;
      if (-1 < (long)param_1) {
        uVar6 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10266c5f8);
          (*pcVar1)();
        }
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c61174();
        param_1 = param_2;
      }
      else {
        uVar3 = 0;
        FUN_10266cbd4(0,param_1,&PTR_PTR_1126cd890,0x112ea3b90);
      }
      uVar4 = uVar3;
      func_0x000107c3f6f4();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar3 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      goto LAB_10266c5b4;
    }
  }
  uVar3 = 0;
  param_1 = 0;
LAB_10266c5b4:
  puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x40) + 0x28);
  *puVar7 = uVar3;
  puVar7[1] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar5);
  return;
}



/* Entry: 10266d28c; end: 10266d2cb;  */

void FUN_10266d28c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10266d2cc; end: 10266d3bb;  */

uint FUN_10266d2cc(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 10266d3bc; end: 10266d3fb;  */

void FUN_10266d3bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb28e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac7750;
  func_0x000107c61520(&UNK_10dac7750,&UNK_110530628);
  puRam0000000112eb28e8 = puVar1;
  return;
}



/* Entry: 10266d3fc; end: 10266d44b;  */

void FUN_10266d3fc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10266d44c; end: 10266d497;  */

void FUN_10266d44c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10266d524,param_1);
  return;
}



/* Entry: 10266d498; end: 10266d523;  */

void FUN_10266d498(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e99f48;
  func_0x0001000285a8(0x112e99f48,&UNK_10dabb4f0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10266d524; end: 10266d53b;  */

void FUN_10266d524(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e99f48;
  func_0x0001000285a8(0x112e99f48,&UNK_10dabb4f0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10266d53c; end: 10266d587;  */

void FUN_10266d53c(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb28f0,&UNK_10dac77f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10266d588,param_1);
  return;
}



/* Entry: 10266d588; end: 10266d5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266d588(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10266d688();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eb28f8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10266d5f0; end: 10266d687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266d5f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb28f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10266d688; end: 10266d6d7;  */

void FUN_10266d688(void)

{
  func_0x000107c61168(&PTR_PTR_1128562a8);
  return;
}



/* Entry: 10266d6d8; end: 10266d6e7; -[_TtC17MapGenAISnapScope27MapGenAISnapFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266d6d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb28f8));
  return;
}



/* Entry: 10266d6e8; end: 10266d743;  */

long FUN_10266d6e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10266d744; end: 10266d807;  */

undefined8 * FUN_10266d744(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  func_0x000107c6160c(param_1 + 2,param_2 + 2);
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 10266d808; end: 10266d897;  */

undefined8 * FUN_10266d808(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61620(param_1 + 2,param_2 + 2);
  param_1[3] = param_2[3];
  return param_1;
}



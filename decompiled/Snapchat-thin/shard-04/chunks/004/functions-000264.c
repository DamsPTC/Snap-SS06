/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103415924; end: 10341596b;  */

void FUN_103415924(long param_1,long param_2)

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



/* Entry: 10341596c; end: 103415bf7;  */

void FUN_10341596c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0x6e6f6f735f6f6f74;
  uVar2 = 0x800000010f0e5080;
  uVar4 = 0xd000000000000015;
  if (bVar3 != 2) {
    uVar2 = 0xee00726f7272655f;
    uVar4 = 0x6c616e7265746e69;
  }
  if (bVar3 != 0) {
    uVar5 = 0xd000000000000011;
  }
  uVar1 = 0xe800000000000000;
  if (bVar3 != 0) {
    uVar1 = 0x800000010f0e50a0;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103415bf8; end: 103415c8f;  */

void FUN_103415bf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0x6e6f6f735f6f6f74;
  uVar2 = 0x800000010f0e5080;
  uVar4 = 0xd000000000000015;
  if (bVar3 != 2) {
    uVar2 = 0xee00726f7272655f;
    uVar4 = 0x6c616e7265746e69;
  }
  if (bVar3 != 0) {
    uVar5 = 0xd000000000000011;
  }
  uVar1 = 0xe800000000000000;
  if (bVar3 != 0) {
    uVar1 = 0x800000010f0e50a0;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103415c90; end: 103415cf3;  */

ulong FUN_103415c90(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 103415cf4; end: 103415cf7;  */

void FUN_103415cf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f66ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc2670;
  func_0x000107c61520(&UNK_10dbc2670,&UNK_1106526d8);
  puRam0000000112f66ad8 = puVar1;
  return;
}



/* Entry: 103415cf8; end: 103415d37;  */

void FUN_103415cf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f66ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc2670;
  func_0x000107c61520(&UNK_10dbc2670,&UNK_1106526d8);
  puRam0000000112f66ad8 = puVar1;
  return;
}



/* Entry: 103415d38; end: 103416037;  */

int FUN_103415d38(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x3e < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc1) {
      iVar2 = 4;
    }
    if (param_2 + 0xc1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103415db4;
        goto LAB_103415d98;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103415d98:
      return ((uint)*param_1 | uVar1 << 8) - 0xc1;
    }
  }
LAB_103415db4:
  uVar1 = (*param_1 >> 1 & 0x3e | (uint)(*param_1 >> 7)) ^ 0x3f;
  if (0x3d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103416038; end: 10341608b;  */

void FUN_103416038(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10341608c; end: 103416527;  */

long FUN_10341608c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010fe67c();
  puVar4 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + 0x98) = puVar2;
  *(undefined **)(unaff_x20 + 0xa0) = puVar4;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  plVar3 = (long *)(unaff_x20 + 200);
  func_0x000107c61614(plVar3,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_16;
  *(undefined8 *)(unaff_x20 + 0x88) = param_17;
  func_0x0001010ec5e8();
  func_0x000107c6157c(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c615f0(param_14);
  func_0x000107c6157c(param_17);
  func_0x0001000c2068();
  puVar4 = &UNK_110652750;
  func_0x000107c613fc(&UNK_110652750,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,unaff_x20);
  uVar1 = 0x103417ca4;
  puVar2 = puVar4;
  (**(code **)(*plVar3 + 0x60))();
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_7);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_11);
  func_0x000107c61574(param_13);
  func_0x000107c615e8(param_14);
  func_0x000107c61574(param_15);
  func_0x000107c61574(param_17);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar1;
  *(undefined **)(unaff_x20 + 0xc0) = puVar2;
  func_0x000107c615e8(uVar5);
  return unaff_x20;
}



/* Entry: 103416528; end: 10341660f;  */

void FUN_103416528(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  undefined *puStack_60;
  undefined8 uStack_58;
  char cStack_49;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61648();
  if (puVar1 != (undefined *)0x0) {
    puStack_60 = puVar1;
    uStack_58 = uVar3;
    func_0x000100087bd4(&cStack_49,FUN_103417ec8,auStack_70,PTR___sSbN_11034dd40);
    puVar2 = puVar1;
    if (cStack_49 == '\x01') {
      uVar3 = *(undefined8 *)(puVar1 + 0x78);
      func_0x000107c614f0(uVar3);
      puVar2 = &UNK_1106529a8;
      func_0x000107c613fc(&UNK_1106529a8,0x20,7);
      uVar4 = *(undefined8 *)(puVar1 + 0x18);
      *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar1 + 0x20);
      *(undefined8 *)(puVar2 + 0x10) = uVar4;
      func_0x000107c615f0(uVar4);
      func_0x00010090569c(FUN_103417ee0,puVar2,uVar3);
      func_0x000107c61574(puVar1);
    }
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 103416610; end: 1034166ef;  */

void FUN_103416610(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0xb8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0xc0);
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb8));
  FUN_103417cac(unaff_x20 + 200);
  return;
}



/* Entry: 1034166f0; end: 10341670f;  */

void FUN_1034166f0(void)

{
  FUN_103416610();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103416710; end: 10341686b;  */

void FUN_103416710(ulong param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  byte bStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint7 uStack_e7;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = param_1;
  (**(code **)(unaff_x20 + 0x28))();
  if ((uVar2 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar4 = 0x112f66c08;
    func_0x0001000285a8(0x112f66c08,&UNK_10dbc27f8);
    func_0x000100087bd4(&bStack_101,FUN_103417cd0,&uStack_100,uVar4);
    if (bStack_101 == 4) {
      FUN_10341686c(&uStack_100,0);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
      func_0x000107c614f0(uVar4);
      puVar3 = &UNK_110652778;
      func_0x000107c613fc(&UNK_110652778,0xd8,7);
      *(long *)(puVar3 + 0x10) = unaff_x20;
      *(ulong *)(puVar3 + 0x18) = param_1;
      *(undefined8 *)(puVar3 + 0xa8) = uStack_78;
      *(undefined8 *)(puVar3 + 0xa0) = uStack_80;
      *(undefined8 *)(puVar3 + 0xb8) = uStack_68;
      *(undefined8 *)(puVar3 + 0xb0) = uStack_70;
      *(undefined8 *)(puVar3 + 0x68) = uStack_b8;
      *(undefined8 *)(puVar3 + 0x60) = uStack_c0;
      *(undefined8 *)(puVar3 + 0x78) = uStack_a8;
      *(undefined8 *)(puVar3 + 0x70) = uStack_b0;
      *(undefined8 *)(puVar3 + 0x88) = uStack_98;
      *(undefined8 *)(puVar3 + 0x80) = uStack_a0;
      *(undefined8 *)(puVar3 + 0x98) = uStack_88;
      *(undefined8 *)(puVar3 + 0x90) = uStack_90;
      *(undefined8 *)(puVar3 + 0x28) = uStack_f8;
      *(undefined8 *)(puVar3 + 0x20) = uStack_100;
      *(ulong *)(puVar3 + 0x38) = (ulong)uStack_e7 << 8;
      *(long *)(puVar3 + 0x30) = unaff_x20;
      *(undefined8 *)(puVar3 + 0x48) = uStack_d8;
      *(ulong *)(puVar3 + 0x40) = param_1;
      *(undefined8 *)(puVar3 + 0x58) = uStack_c8;
      *(undefined8 *)(puVar3 + 0x50) = uStack_d0;
      *(undefined8 *)(puVar3 + 0xc0) = uStack_60;
      *(code **)(puVar3 + 200) = param_2;
      *(undefined8 *)(puVar3 + 0xd0) = param_3;
      func_0x000107c6157c();
      func_0x000107c61174(param_1);
      func_0x000107c6157c(param_3);
      func_0x00010090569c(FUN_103417cf0,puVar3,uVar4);
      func_0x000107c61574(puVar3);
      return;
    }
    uVar1 = bStack_101 | 0xffffff80;
  }
  (*param_2)(uVar1);
  return;
}



/* Entry: 10341686c; end: 103416a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341686c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = param_2;
  (**(code **)(unaff_x20 + 0x68))();
  if (uVar2 == 0) {
    uVar7 = 0;
    uVar8 = 0;
    uVar4 = 0;
    lVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    goto joined_r0x000103416918;
  }
  if (*(long *)(uVar2 + _DAT_1130363f8) == 0) {
    lVar3 = 0;
LAB_103416958:
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    lVar3 = ((undefined8 *)(uVar2 + _DAT_1130363f0))[1];
    if (lVar3 == 0) goto LAB_103416958;
    uVar4 = *(undefined8 *)(uVar2 + _DAT_1130363f0);
    puVar1 = (undefined8 *)(*(long *)(uVar2 + _DAT_1130363f8) + _DAT_1130363e8);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    func_0x000107c61434(lVar3);
    func_0x000107c61434(uVar6);
  }
  uVar8 = *(undefined1 *)(uVar2 + _DAT_113036400);
  uVar9 = *(undefined8 *)(uVar2 + _DAT_1130363f0);
  uVar7 = ((undefined8 *)(uVar2 + _DAT_1130363f0))[1];
  func_0x000107c61434(uVar7);
joined_r0x000103416918:
  if ((param_2 & 1) == 0) {
    func_0x000104340e44(&uStack_110,uVar9,uVar7,uVar4,lVar3,uVar5,uVar6,uVar8);
  }
  else {
    func_0x000104340e50(&uStack_110,uVar9,uVar7,uVar4,lVar3,uVar5,uVar6,uVar8);
  }
  func_0x000107c6142c(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000103417e98(uVar4,lVar3,uVar5,uVar6);
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  param_1[4] = uStack_f0;
  param_1[5] = uStack_e8;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[9] = uStack_c8;
  param_1[8] = uStack_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = uStack_c0;
  *(undefined1 *)(param_1 + 0xc) = uStack_b0;
  param_1[0xe] = uStack_a0;
  param_1[0xd] = uStack_a8;
  param_1[0xf] = uStack_98;
  param_1[0x10] = uStack_90;
  param_1[0x12] = uStack_80;
  param_1[0x11] = uStack_88;
  param_1[0x14] = uStack_70;
  param_1[0x13] = uStack_78;
  return;
}



/* Entry: 103416a3c; end: 103416abb;  */

void FUN_103416a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110652980;
  func_0x000107c613fc(&UNK_110652980,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  func_0x000107c6157c(param_5);
  FUN_103416abc(param_2,param_3,FUN_103417e68,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103416abc; end: 103416e43;  */

void FUN_103416abc(undefined8 param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  code *pcVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_78 [24];
  
  uVar9 = *unaff_x20;
  puVar2 = &UNK_110652868;
  func_0x000107c613fc(&UNK_110652868,0x11,7);
  pcVar10 = puVar2 + 0x10;
  *pcVar10 = '\0';
  puVar6 = &UNK_110652750;
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_110652750,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_110652890;
  func_0x000107c613fc(&UNK_110652890,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(code **)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  uVar5 = unaff_x20[3];
  lVar1 = unaff_x20[4];
  func_0x000107c614f0();
  func_0x000107c613fc(&UNK_110652750,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_1106528b8;
  func_0x000107c613fc(&UNK_1106528b8,0x30,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(code **)(puVar7 + 0x18) = FUN_103417da0;
  *(undefined **)(puVar7 + 0x20) = puVar4;
  *(undefined8 *)(puVar7 + 0x28) = param_1;
  puVar8 = &UNK_1106528e0;
  func_0x000107c613fc(&UNK_1106528e0,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_103417da0;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  pcVar11 = *(code **)(lVar1 + 8);
  func_0x000107c61174();
  func_0x000107c61580(puVar4,2);
  func_0x000107c61174();
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar6);
  uVar12 = 0x103417db0;
  (*pcVar11)(param_2,0x103417db0,puVar7,FUN_103417dbc,puVar8,uVar5,lVar1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  if ((param_2 & 1) == 0) {
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x30);
    func_0x000107c6142c(uStack_98);
    uStack_a0 = 0xd00000000000002e;
    uStack_98 = 0x800000010f14ba30;
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    uVar5 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(uVar5,uVar12);
    func_0x000107c6142c(uVar12);
    uVar12 = uStack_98;
    func_0x0001007d6c6c(3,uStack_a0,uStack_98,uVar9,&PTR_DAT_110652810);
    func_0x000107c6142c(uVar12);
    func_0x000107c61428(pcVar10,&uStack_a0,1,0);
    if (*pcVar10 != '\x01') {
      *pcVar10 = '\x01';
      func_0x000107c61428(puVar3 + 0x10,auStack_78,0,0);
      puVar6 = puVar3 + 0x10;
      func_0x000107c61648();
      if (puVar6 != (undefined *)0x0) {
        uVar12 = *(undefined8 *)(puVar6 + 0x90);
        func_0x000107c6157c(uVar12);
        func_0x000100087bd4(FUN_103417de4,puVar6,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar12);
        (*param_3)(0,2);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(puVar3);
        puVar3 = puVar6;
        goto LAB_103416e18;
      }
      (*param_3)();
    }
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x000107c61574(puVar3);
    func_0x000100087bd4(FUN_103417e10,&uStack_a0,PTR___sytN_11034f1b0 + 8);
    puVar3 = puVar2;
  }
LAB_103416e18:
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 103416e44; end: 103416fd3;  */

uint FUN_103416e44(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  char cStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined7 uStack_e7;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = param_1;
  (**(code **)(unaff_x20 + 0x28))();
  if ((uVar2 & 1) != 0) {
    uVar4 = 0x112f66c08;
    func_0x0001000285a8(0x112f66c08,&UNK_10dbc27f8);
    func_0x000100087bd4(&cStack_101,FUN_103418398,&uStack_100,uVar4);
    if (cStack_101 == '\x04') {
      FUN_10341686c(&uStack_100,1);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
      func_0x000107c614f0(uVar4);
      puVar3 = &UNK_1106527a0;
      func_0x000107c613fc(&UNK_1106527a0,200,7);
      *(long *)(puVar3 + 0x10) = unaff_x20;
      *(ulong *)(puVar3 + 0x18) = param_1;
      *(undefined8 *)(puVar3 + 0xa8) = uStack_78;
      *(undefined8 *)(puVar3 + 0xa0) = uStack_80;
      *(undefined8 *)(puVar3 + 0xb8) = uStack_68;
      *(undefined8 *)(puVar3 + 0xb0) = uStack_70;
      *(undefined8 *)(puVar3 + 0xc0) = uStack_60;
      *(undefined8 *)(puVar3 + 0x68) = uStack_b8;
      *(undefined8 *)(puVar3 + 0x60) = uStack_c0;
      *(undefined8 *)(puVar3 + 0x78) = uStack_a8;
      *(undefined8 *)(puVar3 + 0x70) = uStack_b0;
      *(undefined8 *)(puVar3 + 0x88) = uStack_98;
      *(undefined8 *)(puVar3 + 0x80) = uStack_a0;
      *(undefined8 *)(puVar3 + 0x98) = uStack_88;
      *(undefined8 *)(puVar3 + 0x90) = uStack_90;
      *(undefined8 *)(puVar3 + 0x28) = uStack_f8;
      *(undefined8 *)(puVar3 + 0x20) = uStack_100;
      *(ulong *)(puVar3 + 0x38) = CONCAT71(uStack_e7,1);
      *(long *)(puVar3 + 0x30) = unaff_x20;
      *(undefined8 *)(puVar3 + 0x48) = uStack_d8;
      *(ulong *)(puVar3 + 0x40) = param_1;
      *(undefined8 *)(puVar3 + 0x58) = uStack_c8;
      *(undefined8 *)(puVar3 + 0x50) = uStack_d0;
      func_0x000107c6157c();
      func_0x000107c61174(param_1);
      func_0x00010090569c(0x103417d00,puVar3,uVar4);
      func_0x000107c61574(puVar3);
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
      lVar1 = *(long *)(unaff_x20 + 0x20);
      func_0x000107c614f0(uVar4);
      FUN_10341686c(&uStack_100,1);
      (**(code **)(lVar1 + 0x20))(&uStack_100,uVar4,lVar1);
      func_0x000103417d34(&uStack_100);
      (**(code **)(lVar1 + 0x28))(uVar4,lVar1);
    }
  }
  return (uint)uVar2 & 1;
}



/* Entry: 103416fd4; end: 103416fd7;  */

void FUN_103416fd4(void)

{
  return;
}



/* Entry: 103416fd8; end: 103417077;  */

void FUN_103416fd8(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000100087bd4(FUN_103417d68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x000107c614f0(uVar2);
  puVar1 = &UNK_1106527c8;
  func_0x000107c613fc(&UNK_1106527c8,0x20,7);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x000107c615f0(uVar3);
  func_0x00010090569c(0x1034183e4,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103417078; end: 1034170ff;  */

void FUN_103417078(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  func_0x000107c6142c(uVar1);
  func_0x000107c61428(param_1 + 0x98,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar1);
  func_0x000107c61428(param_1 + 0xa0,auStack_50,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103417100; end: 1034172d7;  */

void FUN_103417100(undefined1 *param_1,double param_2,long param_3,undefined1 *param_4,ulong param_5
                  )

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar4 = auStack_90;
  if (*(long *)(param_3 + 0xb0) != 0) {
    uVar5 = 1;
    goto LAB_1034172b4;
  }
  if (((ulong)param_4 & 1) == 0) {
    puVar7 = auStack_78;
    func_0x000107c61428(param_3 + 0xa0,puVar7,0,0);
    uVar6 = *(undefined8 *)(param_3 + 0xa0);
    func_0x000107c61434(uVar6);
    uVar1 = param_5;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    puVar3 = puVar7;
    func_0x0001000f66f0(uVar2,puVar7,uVar6);
    func_0x000107c6142c(puVar7);
    func_0x000107c6142c(uVar6);
    param_4 = puVar3;
    if ((uVar2 & 1) == 0) {
      uVar1 = param_5;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      func_0x000107c61428(param_3 + 0x98,auStack_90,0x20,0);
      puVar7 = *(undefined1 **)(param_3 + 0x98);
      param_4 = puVar4;
      if (*(long *)(puVar7 + 0x10) != 0) {
        func_0x000107c61434(puVar7);
        param_4 = puVar3;
        func_0x000100029284();
        if (((ulong)param_4 & 1) != 0) {
          dVar8 = *(double *)(*(long *)(puVar7 + 0x38) + uVar2 * 8);
          func_0x000107c614a8(auStack_90);
          func_0x000107c6142c(puVar3);
          func_0x000107c6142c(puVar7);
          (**(code **)(param_3 + 0x80))();
          dVar8 = param_2 - dVar8;
          (**(code **)(param_3 + 0x58))();
          if (dVar8 < param_2) {
            uVar5 = 0;
            goto LAB_1034172b4;
          }
          goto LAB_103417278;
        }
        func_0x000107c6142c(puVar3);
        puVar3 = puVar7;
      }
      func_0x000107c6142c(puVar3);
      func_0x000107c614a8(auStack_90);
    }
  }
LAB_103417278:
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar1 = param_5;
  func_0x000107c5faec();
  func_0x000107c61170(param_5);
  uVar6 = *(undefined8 *)(param_3 + 0xb0);
  *(ulong *)(param_3 + 0xa8) = uVar1;
  *(undefined1 **)(param_3 + 0xb0) = param_4;
  func_0x000107c6142c(uVar6);
  uVar5 = 4;
LAB_1034172b4:
  *param_1 = uVar5;
  return;
}



/* Entry: 1034172d8; end: 10341762f;  */

void FUN_1034172d8(undefined1 *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auStack_78 [24];
  
  (**(code **)(param_3 + 0x80))();
  uVar11 = 1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_4 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_4 + 0x38);
  func_0x000107c61434(param_4);
  lVar13 = 0;
joined_r0x000103417358:
  do {
    if (uVar17 != 0) {
      uVar3 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 - 1 & uVar17;
      puVar1 = (ulong *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
                        lVar13 * 0x400);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c61428(param_3 + 0x98,auStack_78,0x20,0);
      lVar14 = *(long *)(param_3 + 0x98);
      lVar15 = *(long *)(lVar14 + 0x10);
      func_0x000107c61434(uVar2);
      if (lVar15 != 0) {
        func_0x000107c61434(lVar14);
        uVar7 = uVar2;
        func_0x000100029284(uVar3);
        if ((uVar7 & 1) != 0) {
          func_0x000107c614a8(auStack_78);
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(lVar14);
          goto joined_r0x000103417358;
        }
        func_0x000107c6142c(lVar14);
      }
      func_0x000107c614a8(auStack_78);
      func_0x000107c61428(param_3 + 0x98,auStack_78,0x21,0);
      uVar6 = *(ulong *)(param_3 + 0x98);
      func_0x000107c61558();
      lVar15 = *(long *)(param_3 + 0x98);
      *(undefined8 *)(param_3 + 0x98) = 0x8000000000000000;
      uVar7 = uVar3;
      uVar9 = uVar2;
      func_0x000100029284();
      uVar12 = (ulong)~(uint)uVar9 & 1;
      lVar14 = *(long *)(lVar15 + 0x10) + uVar12;
      if (SCARRY8(*(long *)(lVar15 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10341761c);
        (*pcVar4)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar14) {
        func_0x000101432e00(lVar14,uVar6);
        uVar7 = uVar3;
        uVar6 = uVar2;
        func_0x000100029284();
        if (((uint)uVar9 & 1) != ((uint)uVar6 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103417630);
          (*pcVar4)();
        }
      }
      else if ((uVar6 & 1) == 0) {
        func_0x000101432c98();
      }
      if ((uVar9 & 1) == 0) {
        lVar14 = lVar15 + (uVar7 >> 6) * 8;
        *(ulong *)(lVar14 + 0x40) = *(ulong *)(lVar14 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar7 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar7 * 8) = param_2;
        if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103417620);
          (*pcVar4)();
        }
        *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
      }
      else {
        *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar7 * 8) = param_2;
        func_0x000107c6142c(uVar2);
      }
      *(long *)(param_3 + 0x98) = lVar15;
      func_0x000107c614a8(auStack_78);
      goto joined_r0x000103417358;
    }
    bVar5 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103417618);
      (*pcVar4)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar13) break;
    uVar17 = ((ulong *)(param_4 + 0x38))[lVar13];
  } while( true );
  func_0x000107c61574(param_4);
  func_0x000107c61428(param_3 + 0x98,auStack_78,1,0);
  uVar16 = *(undefined8 *)(param_3 + 0x98);
  func_0x000107c61434(param_4);
  uVar8 = uVar16;
  func_0x000107c61434();
  FUN_103418118();
  func_0x000107c6142c(uVar16);
  func_0x000107c6142c(param_4);
  uVar16 = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(param_3 + 0x98) = uVar8;
  func_0x000107c6142c(uVar16);
  lVar13 = *(long *)(param_3 + 0xb0);
  if (lVar13 != 0) {
    uVar17 = *(ulong *)(param_3 + 0xa8);
    func_0x000107c61434(lVar13);
    func_0x0001000f66f0(uVar17,lVar13,param_4);
    func_0x000107c6142c(lVar13);
    if ((uVar17 & 1) == 0) {
      uVar10 = 1;
      goto LAB_1034175e4;
    }
  }
  uVar10 = 0;
LAB_1034175e4:
  *param_1 = uVar10;
  return;
}



/* Entry: 103417630; end: 103417797;  */

void FUN_103417630(uint param_1,undefined8 param_2,long param_3,long param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_80,1,0);
    *(undefined1 *)(param_3 + 0x10) = 1;
    func_0x000107c61428(param_4 + 0x10,auStack_98,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61648();
    if (param_4 == 0) {
      (*param_5)(param_1 & 1,param_2);
    }
    else {
      uVar3 = *(undefined8 *)(param_4 + 0x90);
      func_0x000107c6157c(uVar3);
      func_0x000100087bd4(FUN_1034183b4,param_4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar3);
      (*param_5)(param_1 & 1,param_2);
      if ((((uint)param_2 & 0xff) == 4) && ((param_1 & 1) == 0)) {
        func_0x000107c61428(param_4 + 200,auStack_b8,0,0);
        lVar1 = param_4 + 200;
        func_0x000107c61618();
        if (lVar1 != 0) {
          lVar4 = *(long *)(param_4 + 0xd0);
          lVar2 = lVar1;
          func_0x000107c614f0();
          (**(code **)(lVar4 + 8))(param_7,lVar2,lVar4);
          func_0x000107c615e8(lVar1);
        }
      }
      func_0x000107c61574(param_4);
    }
  }
  return;
}



/* Entry: 103417798; end: 10341781b;  */

void FUN_103417798(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    FUN_10341781c(param_4,param_2,param_3);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10341781c; end: 103417acb;  */

void FUN_10341781c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  puVar1 = &UNK_110652908;
  func_0x000107c613fc(&UNK_110652908,0x20,7);
  *(code **)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c6157c(param_3);
  func_0x0001000d224c(&uStack_68);
  uVar3 = uStack_68;
  uVar2 = uStack_68;
  func_0x000107c61150(uStack_68,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_presentFullscreenPaywallForLens__112620b20);
  if ((uVar2 & 1) == 0) {
    func_0x000107c615e8(uVar3);
    func_0x0001000d224c(&uStack_68);
    uVar3 = uStack_68;
    func_0x000107c61150(uStack_68,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_presentPaywallForLens_at_onDismi_112621000);
    if ((uVar3 & 1) == 0) {
      func_0x000107c615e8(uStack_68);
      puStack_98 = (undefined *)0x0;
      uStack_90 = 0xe000000000000000;
      func_0x000107c602fc(0x3b);
      uVar6 = 0x800000010f14ba60;
      func_0x000107c5fb78(0xd000000000000039,0x800000010f14ba60);
      func_0x000107c4b1dc(param_1);
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb78(uVar5,uVar6);
      func_0x000107c6142c(uVar6);
      uVar5 = uStack_90;
      func_0x0001007d6c6c(3,puStack_98,uStack_90,uVar7,&PTR_DAT_110652810);
      func_0x000107c6142c(uVar5);
      (*param_2)(0,2);
    }
    else {
      pcStack_78 = FUN_103417e28;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f3aa0;
      puStack_80 = &UNK_110652920;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar1;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c6157c(puVar1);
      func_0x000107c4efa8(uStack_68);
      func_0x000107c615e8(uStack_68);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(puStack_70);
      func_0x0001007d6c6c(3,0xd000000000000047,0x800000010f14baa0,uVar7,&PTR_DAT_110652810);
    }
  }
  else {
    pcStack_78 = FUN_103417e28;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f3aa0;
    puStack_80 = &UNK_110652948;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar1;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c4ef08(uVar3);
    func_0x000107c615e8(uVar3);
    func_0x000107c60bd0(ppuVar4);
    puVar1 = puStack_70;
  }
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 103417acc; end: 103417b67;  */

void FUN_103417acc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  uVar2 = param_2;
  func_0x000107c4b1dc(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  func_0x000107c61428(param_1 + 0xa0,auStack_68,0x21,0);
  func_0x000100403b00(auStack_50,uVar1,uVar2);
  func_0x000107c614a8(auStack_68);
  func_0x000107c6142c(uStack_48);
  return;
}



/* Entry: 103417b68; end: 103417b8b;  */

uint FUN_103417b68(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x38))();
  return param_1 & 1;
}



/* Entry: 103417b8c; end: 103417b8f;  */

void FUN_103417b8c(ulong param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  byte bStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint7 uStack_e7;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = param_1;
  (**(code **)(unaff_x20 + 0x28))();
  if ((uVar2 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar4 = 0x112f66c08;
    func_0x0001000285a8(0x112f66c08,&UNK_10dbc27f8);
    func_0x000100087bd4(&bStack_101,FUN_103417cd0,&uStack_100,uVar4);
    if (bStack_101 == 4) {
      FUN_10341686c(&uStack_100,0);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
      func_0x000107c614f0(uVar4);
      puVar3 = &UNK_110652778;
      func_0x000107c613fc(&UNK_110652778,0xd8,7);
      *(long *)(puVar3 + 0x10) = unaff_x20;
      *(ulong *)(puVar3 + 0x18) = param_1;
      *(undefined8 *)(puVar3 + 0xa8) = uStack_78;
      *(undefined8 *)(puVar3 + 0xa0) = uStack_80;
      *(undefined8 *)(puVar3 + 0xb8) = uStack_68;
      *(undefined8 *)(puVar3 + 0xb0) = uStack_70;
      *(undefined8 *)(puVar3 + 0x68) = uStack_b8;
      *(undefined8 *)(puVar3 + 0x60) = uStack_c0;
      *(undefined8 *)(puVar3 + 0x78) = uStack_a8;
      *(undefined8 *)(puVar3 + 0x70) = uStack_b0;
      *(undefined8 *)(puVar3 + 0x88) = uStack_98;
      *(undefined8 *)(puVar3 + 0x80) = uStack_a0;
      *(undefined8 *)(puVar3 + 0x98) = uStack_88;
      *(undefined8 *)(puVar3 + 0x90) = uStack_90;
      *(undefined8 *)(puVar3 + 0x28) = uStack_f8;
      *(undefined8 *)(puVar3 + 0x20) = uStack_100;
      *(ulong *)(puVar3 + 0x38) = (ulong)uStack_e7 << 8;
      *(long *)(puVar3 + 0x30) = unaff_x20;
      *(undefined8 *)(puVar3 + 0x48) = uStack_d8;
      *(ulong *)(puVar3 + 0x40) = param_1;
      *(undefined8 *)(puVar3 + 0x58) = uStack_c8;
      *(undefined8 *)(puVar3 + 0x50) = uStack_d0;
      *(undefined8 *)(puVar3 + 0xc0) = uStack_60;
      *(code **)(puVar3 + 200) = param_2;
      *(undefined8 *)(puVar3 + 0xd0) = param_3;
      func_0x000107c6157c();
      func_0x000107c61174(param_1);
      func_0x000107c6157c(param_3);
      func_0x00010090569c(FUN_103417cf0,puVar3,uVar4);
      func_0x000107c61574(puVar3);
      return;
    }
    uVar1 = bStack_101 | 0xffffff80;
  }
  (*param_2)(uVar1);
  return;
}



/* Entry: 103417b90; end: 103417c7b;  */

void FUN_103417b90(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000100087bd4(FUN_1034183cc);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x000107c614f0(uVar2);
  puVar1 = &UNK_110652840;
  func_0x000107c613fc(&UNK_110652840,0x20,7);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x000107c615f0(uVar3);
  func_0x00010090569c(FUN_1034183e0,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103417c7c; end: 103417cab;  */

uint FUN_103417c7c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  char cStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined7 uStack_e7;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = param_1;
  (**(code **)(unaff_x20 + 0x28))();
  if ((uVar2 & 1) != 0) {
    uVar4 = 0x112f66c08;
    func_0x0001000285a8(0x112f66c08,&UNK_10dbc27f8);
    func_0x000100087bd4(&cStack_101,FUN_103418398,&uStack_100,uVar4);
    if (cStack_101 == '\x04') {
      FUN_10341686c(&uStack_100,1);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
      func_0x000107c614f0(uVar4);
      puVar3 = &UNK_1106527a0;
      func_0x000107c613fc(&UNK_1106527a0,200,7);
      *(long *)(puVar3 + 0x10) = unaff_x20;
      *(ulong *)(puVar3 + 0x18) = param_1;
      *(undefined8 *)(puVar3 + 0xa8) = uStack_78;
      *(undefined8 *)(puVar3 + 0xa0) = uStack_80;
      *(undefined8 *)(puVar3 + 0xb8) = uStack_68;
      *(undefined8 *)(puVar3 + 0xb0) = uStack_70;
      *(undefined8 *)(puVar3 + 0xc0) = uStack_60;
      *(undefined8 *)(puVar3 + 0x68) = uStack_b8;
      *(undefined8 *)(puVar3 + 0x60) = uStack_c0;
      *(undefined8 *)(puVar3 + 0x78) = uStack_a8;
      *(undefined8 *)(puVar3 + 0x70) = uStack_b0;
      *(undefined8 *)(puVar3 + 0x88) = uStack_98;
      *(undefined8 *)(puVar3 + 0x80) = uStack_a0;
      *(undefined8 *)(puVar3 + 0x98) = uStack_88;
      *(undefined8 *)(puVar3 + 0x90) = uStack_90;
      *(undefined8 *)(puVar3 + 0x28) = uStack_f8;
      *(undefined8 *)(puVar3 + 0x20) = uStack_100;
      *(ulong *)(puVar3 + 0x38) = CONCAT71(uStack_e7,1);
      *(long *)(puVar3 + 0x30) = unaff_x20;
      *(undefined8 *)(puVar3 + 0x48) = uStack_d8;
      *(ulong *)(puVar3 + 0x40) = param_1;
      *(undefined8 *)(puVar3 + 0x58) = uStack_c8;
      *(undefined8 *)(puVar3 + 0x50) = uStack_d0;
      func_0x000107c6157c();
      func_0x000107c61174(param_1);
      func_0x00010090569c(0x103417d00,puVar3,uVar4);
      func_0x000107c61574(puVar3);
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
      lVar1 = *(long *)(unaff_x20 + 0x20);
      func_0x000107c614f0(uVar4);
      FUN_10341686c(&uStack_100,1);
      (**(code **)(lVar1 + 0x20))(&uStack_100,uVar4,lVar1);
      func_0x000103417d34(&uStack_100);
      (**(code **)(lVar1 + 0x28))(uVar4,lVar1);
    }
  }
  return (uint)uVar2 & 1;
}



/* Entry: 103417cac; end: 103417ccf;  */

undefined8 FUN_103417cac(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103417cd0; end: 103417cef;  */

void FUN_103417cd0(void)

{
  long unaff_x20;
  
  FUN_103417100(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103417cf0; end: 103417cff;  */

void FUN_103417cf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 200);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xd0);
  puVar4 = &UNK_110652980;
  func_0x000107c613fc(&UNK_110652980,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  func_0x000107c6157c(uVar3);
  FUN_103416abc(uVar2,unaff_x20 + 0x20,FUN_103417e68,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 103417d00; end: 103417d67;  */

void FUN_103417d00(void)

{
  long unaff_x20;
  
  FUN_103416abc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + 0x20
                ,FUN_103416fd4,0);
  return;
}



/* Entry: 103417d68; end: 103417d9f;  */

void FUN_103417d68(void)

{
  FUN_103417078();
  return;
}



/* Entry: 103417da0; end: 103417dbb;  */

void FUN_103417da0(uint param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x28));
  if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_80,1,0);
    *(undefined1 *)(lVar3 + 0x10) = 1;
    func_0x000107c61428(lVar2 + 0x10,auStack_98,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61648();
    if (lVar2 == 0) {
      (*pcVar1)(param_1 & 1,param_2);
    }
    else {
      uVar6 = *(undefined8 *)(lVar2 + 0x90);
      func_0x000107c6157c(uVar6);
      func_0x000100087bd4(FUN_1034183b4,lVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar6);
      (*pcVar1)(param_1 & 1,param_2);
      if ((((uint)param_2 & 0xff) == 4) && ((param_1 & 1) == 0)) {
        func_0x000107c61428(lVar2 + 200,auStack_b8,0,0);
        lVar3 = lVar2 + 200;
        func_0x000107c61618();
        if (lVar3 != 0) {
          lVar7 = *(long *)(lVar2 + 0xd0);
          lVar4 = lVar3;
          func_0x000107c614f0();
          (**(code **)(lVar7 + 8))(uVar5,lVar4,lVar7);
          func_0x000107c615e8(lVar3);
        }
      }
      func_0x000107c61574(lVar2);
    }
  }
  return;
}



/* Entry: 103417dbc; end: 103417de3;  */

void FUN_103417dbc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,4);
  return;
}



/* Entry: 103417de4; end: 103417e0f;  */

void FUN_103417de4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103417e10; end: 103417e27;  */

void FUN_103417e10(void)

{
  long unaff_x20;
  
  FUN_103417acc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103417e28; end: 103417e4b;  */

void FUN_103417e28(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1,4);
  return;
}



/* Entry: 103417e4c; end: 103417e67;  */

void FUN_103417e4c(long param_1,long param_2)

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



/* Entry: 103417e68; end: 103417ec7;  */

void FUN_103417e68(uint param_1,uint param_2)

{
  long unaff_x20;
  
  if ((param_2 & 0xff) != 4) {
    param_1 = param_2 | 0xffffff80;
  }
  (**(code **)(unaff_x20 + 0x10))(param_1);
  return;
}



/* Entry: 103417ec8; end: 103417edf;  */

void FUN_103417ec8(void)

{
  long unaff_x20;
  
  FUN_1034172d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103417ee0; end: 103417ee3;  */

void FUN_103417ee0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x10))();
  return;
}



/* Entry: 103417ee4; end: 103417f1f;  */

void FUN_103417ee4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x10))();
  return;
}



/* Entry: 103417f20; end: 103418117;  */

void FUN_103417f20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lStack_b8;
  undefined1 auStack_a8 [72];
  
  lStack_b8 = 0;
  uVar12 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_3 + 0x40);
  lVar9 = 0;
LAB_103417f9c:
  do {
    do {
      if (uVar15 == 0) {
        do {
          lVar14 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103418118);
            (*pcVar4)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) {
            func_0x00010206edb0(param_1,param_2,lStack_b8,param_3);
            return;
          }
          uVar15 = ((ulong *)(param_3 + 0x40))[lVar14];
          lVar9 = lVar9 + 1;
        } while (uVar15 == 0);
        uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar15 = uVar15 - 1 & uVar15;
      }
      else {
        uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar15 = uVar15 - 1 & uVar15;
        lVar14 = lVar9;
      }
      uVar8 = LZCOUNT(uVar8);
      lVar9 = lVar14;
    } while (*(long *)(param_4 + 0x10) == 0);
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + (uVar8 | lVar14 << 6) * 0x10);
    uVar11 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_4 + 0x28));
    func_0x000107c61434(uVar2);
    puVar6 = auStack_a8;
    func_0x000107c5fb58(puVar6,uVar11,uVar2);
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar6 & (uVar10 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_4 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (ulong *)(*(long *)(param_4 + 0x30) + uVar13 * 0x10);
        uVar7 = *puVar1;
        uVar3 = puVar1[1];
        if ((uVar7 == uVar11 && uVar3 == uVar2) ||
           (func_0x000107c605b8(uVar7,uVar3,uVar11,uVar2,0), (uVar7 & 1) != 0)) {
          func_0x000107c6142c(uVar2);
          uVar11 = (uVar8 & 0xffffffffffffffc0 | lVar14 << 6) >> 3;
          *(ulong *)(param_1 + uVar11) = *(ulong *)(param_1 + uVar11) | 1L << (uVar8 & 0x3f);
          bVar5 = SCARRY8(lStack_b8,1);
          lStack_b8 = lStack_b8 + 1;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1034180e0);
            (*pcVar4)();
          }
          goto LAB_103417f9c;
        }
        uVar13 = uVar13 + 1 & ~uVar10;
      } while ((*(ulong *)(param_4 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
    }
    func_0x000107c6142c(uVar2);
  } while( true );
}



/* Entry: 103418118; end: 103418363;  */

undefined1 * FUN_103418118(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *unaff_x21;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 *apuStack_80 [2];
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f)) + 0x3fU >> 6;
  uVar6 = uVar5 * 8;
  puStack_60 = param_2;
  if ((*(byte *)(param_1 + 4) & 0x3f) < 0xe) {
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar4 = uVar6, func_0x000107c61594(uVar6,8), (uVar4 & 1) == 0)) {
      func_0x000107c6158c(uVar6,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      func_0x00010206efe8(apuStack_80,uVar6,uVar5,param_1,FUN_103418364,auStack_70,&puStack_88);
      puVar2 = apuStack_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar2 = puStack_88;
      }
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x000103418310;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = auStack_90 + -(uVar6 + 0xf & 0x3ffffffffffffff0);
  func_0x000107c60ee4(puVar2,uVar6);
  func_0x000107c61434(param_2);
  FUN_103417f20(puVar2,uVar5,param_1,param_2);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar2 = unaff_x21;
  }
  func_0x000107c6142c(param_2);
joined_r0x000103418310:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c6142c(param_2);
    param_2 = param_1;
    func_0x000107c61574();
  }
  else {
    iVar1 = 2;
    puStack_88 = puVar2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_88,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c6142c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    uVar3 = *param_2;
    func_0x0001000f66f0(uVar3,param_2[1],param_1[2]);
    return (undefined1 *)(ulong)((uint)uVar3 & 1);
  }
  return puVar2;
}



/* Entry: 103418364; end: 103418397;  */

uint FUN_103418364(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_1;
  func_0x0001000f66f0(uVar1,param_1[1],*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)uVar1 & 1;
}



/* Entry: 103418398; end: 1034183ab;  */

void FUN_103418398(void)

{
  FUN_103417cd0();
  return;
}



/* Entry: 1034183ac; end: 1034183b3;  */

void FUN_1034183ac(long param_1,long param_2)

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



/* Entry: 1034183b4; end: 1034183c7;  */

void FUN_1034183b4(void)

{
  FUN_103417de4();
  return;
}



/* Entry: 1034183c8; end: 1034183cb;  */

void FUN_1034183c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  undefined *puStack_60;
  undefined8 uStack_58;
  char cStack_49;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  puVar1 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61648();
  if (puVar1 != (undefined *)0x0) {
    puStack_60 = puVar1;
    uStack_58 = uVar3;
    func_0x000100087bd4(&cStack_49,FUN_103417ec8,auStack_70,PTR___sSbN_11034dd40);
    puVar2 = puVar1;
    if (cStack_49 == '\x01') {
      uVar3 = *(undefined8 *)(puVar1 + 0x78);
      func_0x000107c614f0(uVar3);
      puVar2 = &UNK_1106529a8;
      func_0x000107c613fc(&UNK_1106529a8,0x20,7);
      uVar4 = *(undefined8 *)(puVar1 + 0x18);
      *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar1 + 0x20);
      *(undefined8 *)(puVar2 + 0x10) = uVar4;
      func_0x000107c615f0(uVar4);
      func_0x00010090569c(FUN_103417ee0,puVar2,uVar3);
      func_0x000107c61574(puVar1);
    }
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1034183cc; end: 1034183df;  */

void FUN_1034183cc(void)

{
  FUN_103417d68();
  return;
}



/* Entry: 1034183e0; end: 1034183e7;  */

void FUN_1034183e0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x10))();
  return;
}



/* Entry: 1034183e8; end: 103418403;  */

void FUN_1034183e8(void)

{
  undefined8 *unaff_x20;
  
  func_0x000107c3f574(*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 103418404; end: 10341841b;  */

undefined8 FUN_103418404(void)

{
  return 0x4000000000000000;
}



/* Entry: 10341841c; end: 1034184df;  */

void FUN_10341841c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034184e0; end: 1034184ef;  */

undefined1  [16] FUN_1034184e0(void)

{
  return ZEXT816(0x110652ab8);
}



/* Entry: 1034184f0; end: 1034185b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1034184f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  func_0x0001000285a8(0x112d5ce60,&UNK_10d923870);
  func_0x000107c61174(param_1);
  uVar2 = param_2;
  func_0x000107c4f598();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  uVar2 = *(undefined8 *)(param_3 + _DAT_1130344e8);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  func_0x000107c6157c();
  func_0x000107c61170(param_3);
  return unaff_x20;
}



/* Entry: 1034185b8; end: 1034185e7;  */

undefined8 FUN_1034185b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103418dc0();
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1034185e8; end: 103418ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034185e8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x20;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  long lStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  
  auStack_70[0] = 0;
  lVar21 = *(long *)(unaff_x20 + 0x18);
  lVar19 = *(long *)(lVar21 + _DAT_1130720b0);
  if (lVar19 == 0) {
    uStack_100 = 0;
    puStack_f8 = (undefined *)0x0;
  }
  else {
    puStack_f8 = &UNK_110652ba0;
    func_0x000107c613fc(&UNK_110652ba0,0x18,7);
    *(undefined8 **)(puStack_f8 + 0x10) = auStack_70;
    puVar23 = &UNK_110652bc8;
    func_0x000107c613fc(&UNK_110652bc8,0x20,7);
    uStack_100 = 0x103418f20;
    *(undefined8 *)(puVar23 + 0x10) = 0x103418f20;
    *(undefined **)(puVar23 + 0x18) = puStack_f8;
    ppuStack_c0 = (undefined **)0x103418f58;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_1019dec60;
    puStack_c8 = &UNK_110652be0;
    ppuVar4 = &puStack_e0;
    puStack_b8 = puVar23;
    func_0x000107c60bc4(ppuVar4);
    puVar23 = puStack_b8;
    func_0x000107c61174(lVar19);
    func_0x000107c61574(puVar23);
    func_0x000107c4c590(lVar19);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar19);
  }
  uVar14 = auStack_70[0];
  puVar23 = *(undefined **)(lVar21 + _DAT_1130720a0);
  uVar24 = *(undefined8 *)(lVar21 + _DAT_1130720a8);
  lVar5 = 0;
  func_0x0001034184c0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar24;
  uVar22 = *(undefined8 *)(lVar21 + _DAT_113072098);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = 0;
  FUN_10341afc8();
  lVar21 = lVar6;
  func_0x000107c610f8();
  puStack_c8 = &UNK_110652ab8;
  ppuStack_c0 = &PTR_DAT_110652ad0;
  plVar9 = (long *)(lVar21 + _DAT_112f66e80);
  *plVar9 = 0;
  plVar9[1] = 0;
  *(undefined8 *)(lVar21 + _DAT_112f66ea8) = 0;
  *(undefined1 *)(lVar21 + _DAT_112f66eb0) = 0;
  lVar19 = _DAT_112f66eb8;
  uVar7 = uVar14;
  puStack_e0 = puVar23;
  func_0x000107c61174();
  func_0x000107c615f0(puVar23);
  func_0x000107c61174(uVar24);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  pcVar8 = "LensPromptPrivacyDisclaimerWorkflow";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar21 + lVar19) = pcVar8;
  puVar1 = (undefined8 *)(lVar21 + _DAT_112f66e88);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar21 + _DAT_112f66ec0) = 0;
  lVar19 = _DAT_112f66e78;
  uVar24 = 0x112d67258;
  func_0x0001000285a8(0x112d67258,&UNK_10d92b770);
  func_0x000107c613fc();
  uVar18 = 0x1034191a0;
  func_0x0001000bdd8c(0x1034191a0,0);
  *(undefined8 *)(lVar21 + lVar19) = uVar18;
  lVar19 = *plVar9;
  *plVar9 = lVar5;
  plVar9[1] = (long)&PTR_DAT_110652af0;
  func_0x000107c615f0(lVar5);
  func_0x000107c615e8(lVar19);
  *(undefined8 *)(lVar21 + _DAT_112f66e90) = uVar14;
  *(undefined8 *)(lVar21 + _DAT_112f66e98) = uVar2;
  *(undefined8 *)(lVar21 + _DAT_112f66ea0) = uVar3;
  puVar23 = PTR_s_init_1125d9248;
  lStack_80 = lVar21;
  lStack_78 = lVar6;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar7);
  plVar9 = &lStack_80;
  func_0x000107c61154(plVar9,puVar23);
  puVar23 = &UNK_110652b28;
  func_0x000107c613fc(&UNK_110652b28,0x18,7);
  func_0x000107c61614(puVar23 + 0x10,plVar9);
  FUN_103418e80(&puStack_e0,&iStack_a8);
  puVar10 = &UNK_110652b50;
  func_0x000107c613fc(&UNK_110652b50,0x40,7);
  *(undefined **)(puVar10 + 0x10) = puVar23;
  FUN_103418ec4(&iStack_a8,puVar10 + 0x18);
  func_0x000107c613fc(uVar24,0x18,7);
  func_0x000107c61174();
  uVar24 = 0x103418edc;
  func_0x0001000bdd8c();
  uVar18 = *(undefined8 *)((long)plVar9 + _DAT_112f66e78);
  *(undefined8 *)((long)plVar9 + _DAT_112f66e78) = uVar24;
  func_0x000107c61574(uVar18);
  uVar11 = *(ulong *)((long)plVar9 + _DAT_112f66e90);
  if (uVar11 != 0) {
    func_0x000107c61174();
    uVar12 = uVar11;
    func_0x000107c4f490();
    func_0x000107c61180();
    uVar13 = uVar12;
    func_0x000107c5faec();
    func_0x000107c61170(uVar12);
    func_0x000107c6142c(puVar10);
    uVar12 = uVar13 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    if (uVar12 != 0) {
      uVar12 = uVar11;
      func_0x000107c43700();
      func_0x000107c61180();
      if (uVar12 != 0) {
        iStack_a8 = 0;
        uStack_a4 = CONCAT31(uStack_a4._1_3_,1);
        func_0x000107c60664();
        func_0x000107c61170(uVar12);
        if (((char)uStack_a4 != '\x01') && (iStack_a8 == 3)) {
          func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
          func_0x0001000d224c(&iStack_a8);
          uVar24 = CONCAT44(uStack_a4,iStack_a8);
          uVar18 = uVar24;
          func_0x000107c50814();
          func_0x000107c61180();
          func_0x000107c615e8(uVar24);
          uVar24 = uVar18;
          func_0x0001000b637c(uVar18);
          func_0x000107c61170();
          func_0x00010061bc80();
          func_0x000107c61574(uVar24);
          func_0x0001000d224c(&iStack_a8);
          uVar24 = CONCAT44(uStack_a4,iStack_a8);
          uVar14 = uVar18;
          func_0x0001006c733c(uVar18);
          func_0x000107c61574(uVar24);
          plVar20 = *(long **)((long)plVar9 + _DAT_112f66eb8);
          plVar15 = plVar20;
          func_0x000107c615f0();
          func_0x000100471e0c();
          func_0x000107c61574(uVar14);
          func_0x000107c615e8(plVar20);
          puVar23 = &UNK_110652b28;
          func_0x000107c613fc(&UNK_110652b28,0x18,7);
          func_0x000107c61614(puVar23 + 0x10,plVar9);
          puVar16 = &UNK_110652b78;
          func_0x000107c613fc(&UNK_110652b78,0x20,7);
          *(undefined8 *)(puVar16 + 0x10) = 0x103418ef0;
          *(undefined **)(puVar16 + 0x18) = puVar23;
          pcVar17 = FUN_103418ef8;
          puVar10 = puVar16;
          (**(code **)(*plVar15 + 0x60))();
          func_0x000107c61574(plVar15);
          func_0x000107c61574(puVar16);
          func_0x000107c61574(uVar18);
          func_0x000107c61170(uVar11);
          goto LAB_103418c10;
        }
      }
    }
    func_0x000107c61170(uVar11);
  }
  func_0x0001000d224c(&iStack_a8);
  plVar15 = (long *)CONCAT44(uStack_a4,iStack_a8);
  puVar23 = &UNK_110652b28;
  func_0x000107c613fc(&UNK_110652b28,0x18,7);
  func_0x000107c61614(puVar23 + 0x10,plVar9);
  pcVar17 = (code *)0x103418ee8;
  puVar10 = puVar23;
  (**(code **)(*plVar15 + 0x60))();
  func_0x000107c61574(plVar15);
  func_0x000107c61574(puVar23);
LAB_103418c10:
  puVar1 = (undefined8 *)((long)plVar9 + _DAT_112f66e88);
  uVar24 = *puVar1;
  *puVar1 = pcVar17;
  puVar1[1] = puVar10;
  func_0x000107c615e8(uVar24);
  puStack_b0 = PTR_DAT_11269cb30;
  plVar15 = plVar9;
  func_0x000107c61494(plVar9,1,&puStack_b0);
  if (plVar15 != (long *)0x0) {
    func_0x000107c4fc08(*(undefined8 *)(lVar5 + 0x10));
  }
  func_0x000107c61170(plVar9);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(lVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(&puStack_e0);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x10);
  *(long **)(unaff_x20 + 0x10) = plVar9;
  func_0x000107c61170(uVar24);
  func_0x000107c61170(auStack_70[0]);
  func_0x0001032e7e70(uStack_100,puStack_f8);
  return;
}



/* Entry: 103418ccc; end: 103418d13;  */

undefined8 FUN_103418ccc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_10341a760();
    func_0x000107c61170(lVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar2);
  return 0;
}



/* Entry: 103418d14; end: 103418d4f;  */

void FUN_103418d14(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103418d50; end: 103418dbf;  */

void FUN_103418d50(void)

{
  FUN_1034185e8();
  return;
}



/* Entry: 103418dc0; end: 103418e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103418dc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  func_0x0001000285a8(0x112d5ce60,&UNK_10d923870);
  func_0x000107c61174(param_1);
  uVar1 = param_2;
  func_0x000107c4f598();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(param_3 + _DAT_1130344e8);
  func_0x000107c6157c();
  return;
}



/* Entry: 103418e80; end: 103418ec3;  */

long FUN_103418e80(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103418ec4; end: 103418ef7;  */

undefined8 * FUN_103418ec4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 103418ef8; end: 103418f77;  */

void FUN_103418ef8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 103418f78; end: 103418f93;  */

void FUN_103418f78(long param_1,long param_2)

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



/* Entry: 103418f94; end: 103418fb3;  */

void FUN_103418f94(void)

{
  func_0x000107c61168(&PTR_PTR_112f66e00);
  return;
}



/* Entry: 103418fb4; end: 103419057;  */

undefined8
FUN_103418fb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x0001000c6518(param_3,*(undefined8 *)(param_3 + 0x18));
  func_0x00010341aef8(param_1,param_2,lVar1,param_4,param_5,param_6,param_7);
  func_0x0001000834e4(param_3);
  return param_1;
}



/* Entry: 103419058; end: 1034190b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103419058(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f66ec0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f66ec0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1034190b8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1034190b8; end: 1034191cf;  */

undefined * FUN_1034190b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c56ba8(puVar1);
  func_0x000107c59c74(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(puVar1);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f14bb60);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 1034191d0; end: 1034192bb;  */

undefined8
FUN_1034191d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  long alStack_80 [2];
  undefined1 auStack_70 [8];
  
  lVar1 = *(long *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x0001000c6518(param_3,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(auStack_70 + lVar3);
  *(long *)((long)alStack_80 + lVar3) = lVar1;
  *(undefined8 *)((long)alStack_80 + lVar3 + 8) = uVar2;
  FUN_10341a97c(param_1,param_2,auStack_70 + lVar3,param_4,param_5,param_6,param_7,unaff_x20);
  func_0x0001000834e4(param_3);
  return param_1;
}



/* Entry: 1034192bc; end: 103419857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034192bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined1 auStack_98 [24];
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61428(param_6 + 0x10,auStack_98,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3fdd0(0x3fd0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c52b50(puVar2);
    func_0x000107c61170(puVar4);
    puVar3 = puVar2;
    func_0x000107c4aba4(puVar2);
    func_0x000107c61180();
    func_0x000107c539d0();
    func_0x000107c61170(puVar3);
    puVar3 = puVar2;
    func_0x000107c4aba4(puVar2);
    func_0x000107c61180();
    func_0x000107c539d4(0x4010000000000000);
    func_0x000107c61170(puVar3);
    puVar3 = puVar2;
    func_0x000107c4aba4(puVar2);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar3);
    uVar5 = *(undefined8 *)(param_7 + 0x18);
    lVar1 = *(long *)(param_7 + 0x20);
    func_0x0001000a8868(param_7,uVar5);
    (**(code **)(lVar1 + 0x18))(puVar2,uVar5,lVar1);
    uVar5 = *(undefined8 *)(param_7 + 0x18);
    lVar1 = *(long *)(param_7 + 0x20);
    func_0x0001000a8868(param_7,uVar5);
    (**(code **)(lVar1 + 8))(uVar5,lVar1);
    func_0x000107c5a050(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar4 = puVar3;
    func_0x0001008478a8();
    puVar6 = puVar4;
    func_0x000107c613fc();
    dVar12 = 1.48219693752374e-323;
    *(undefined8 *)(puVar6 + 0x18) = 7;
    *(undefined8 *)(puVar6 + 0x10) = 3;
    puVar7 = puVar2;
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar11 = uVar5;
    func_0x000107c3f75c(uVar5);
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar11);
    *(undefined **)(puVar6 + 0x20) = puVar8;
    puVar7 = puVar2;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar8);
    func_0x000107c609cc(dVar12,param_3,param_4,param_5);
    puVar8 = puVar7;
    func_0x000107c402b0((dVar12 + dVar12) / 3.0);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    *(undefined **)(puVar6 + 0x28) = puVar8;
    puVar7 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar9 = uVar5;
    func_0x000107c5cbe4(uVar5);
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(param_7 + 0x18);
    lVar1 = *(long *)(param_7 + 0x20);
    func_0x0001000a8868(param_7,uVar11);
    (**(code **)(lVar1 + 0x10))(uVar11,lVar1);
    puVar8 = puVar7;
    func_0x000107c40284();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar9);
    *(undefined **)(puVar6 + 0x30) = puVar8;
    uVar9 = 0;
    func_0x000100847984(0);
    puVar7 = puVar6;
    func_0x000107c5fc48(puVar6,uVar9);
    func_0x000107c61574(puVar6);
    func_0x000107c3d048(puVar3);
    func_0x000107c61170(puVar7);
    FUN_103419058();
    func_0x000107c3d89c(puVar2);
    func_0x000107c61170(puVar7);
    lVar1 = _DAT_112f66ec0;
    func_0x000107c5a050(*(undefined8 *)(param_6 + _DAT_112f66ec0));
    func_0x000107c613fc(puVar4,((ulong)*(uint *)(puVar4 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                        *(ushort *)(puVar4 + 0x34) | 7);
    *(undefined8 *)(puVar4 + 0x18) = 9;
    *(undefined8 *)(puVar4 + 0x10) = 4;
    uVar10 = *(undefined8 *)(param_6 + lVar1);
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c3f75c(puVar2);
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar6);
    *(undefined8 *)(puVar4 + 0x20) = uVar11;
    puVar6 = puVar2;
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(param_6 + lVar1);
    func_0x000107c5e308(uVar11);
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c40284(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar11);
    *(undefined **)(puVar4 + 0x28) = puVar7;
    uVar10 = *(undefined8 *)(param_6 + lVar1);
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c3f764(puVar2);
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar6);
    *(undefined8 *)(puVar4 + 0x30) = uVar11;
    puVar6 = puVar2;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(param_6 + lVar1);
    func_0x000107c44d9c(uVar11);
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c40284(0x4020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar11);
    *(undefined **)(puVar4 + 0x38) = puVar7;
    puVar6 = puVar4;
    func_0x000107c5fc48(puVar4,uVar9);
    func_0x000107c61574(puVar4);
    func_0x000107c3d048(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c5a378(puVar2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(uVar5);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 103419858; end: 1034198eb;  */

void FUN_103419858(undefined8 param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = auStack_48;
  func_0x000107c61428(param_3 + 0x10,puVar1,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_2 == 0) {
      param_2 = 0;
      puVar1 = (undefined1 *)0x0;
    }
    else {
      func_0x000107c5faec(param_2);
    }
    FUN_103419e0c(param_1,param_2,puVar1);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(puVar1);
  }
  return;
}



/* Entry: 1034198ec; end: 103419947;  */

void FUN_1034198ec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103419948(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103419948; end: 103419ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103419948(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uStack_68;
  
  lVar1 = _DAT_112f66ea8;
  func_0x000107c498f8(*(undefined8 *)(unaff_x20 + _DAT_112f66ea8));
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar2);
  if (*(char *)(unaff_x20 + _DAT_112f66eb0) == '\x01') {
    func_0x00010341a698();
  }
  if (param_1 != 0) {
    func_0x000107c61174();
    uVar3 = param_1;
    func_0x000107c4d554();
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f66e78);
      func_0x000107c6157c(uVar2);
      func_0x0001000d224c(&uStack_68);
      func_0x000107c61574(uVar2);
      func_0x000107c550d8(uStack_68);
      uVar3 = param_1;
      func_0x000107c5db50();
      if ((int)uVar3 != 0) {
        uVar7 = uStack_68;
        func_0x000107c550d8(uStack_68);
        FUN_103419058();
        uVar3 = uVar7;
        func_0x00010341b124();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
        func_0x000107c59c6c(uVar7);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uStack_68);
        uStack_68 = uVar7;
LAB_103419a50:
        func_0x000107c61170(uStack_68);
        uStack_68 = uVar3;
        goto LAB_103419cb0;
      }
      uVar3 = param_1;
      func_0x000107c4a2a0();
      if (((uVar3 & 1) != 0) || (uVar3 = param_1, func_0x000107c4a63c(), (int)uVar3 != 0)) {
        uVar3 = *(ulong *)(unaff_x20 + _DAT_112f66e90);
        uVar7 = uStack_68;
        if (uVar3 == 0) {
LAB_103419c40:
          func_0x000107c550d8(uStack_68);
          FUN_103419058();
          uVar6 = uVar7;
          func_0x00010341b2c0();
          func_0x000107c5fadc();
          func_0x000107c6142c(param_2);
          func_0x000107c59c6c(uVar7);
        }
        else {
          func_0x000107c61174();
          uVar6 = uVar3;
          func_0x000107c4f490();
          func_0x000107c61180();
          uVar4 = uVar6;
          func_0x000107c5faec();
          uVar8 = param_2;
          func_0x000107c61170(uVar6);
          func_0x000107c6142c(param_2);
          uVar6 = uVar4 & 0xffffffffffff;
          if ((param_2 & 0x2000000000000000) != 0) {
            uVar6 = param_2 >> 0x38 & 0xf;
          }
          param_2 = uVar8;
          if (uVar6 == 0) {
LAB_103419c38:
            func_0x000107c61170(uVar3);
            goto LAB_103419c40;
          }
          uVar6 = uVar3;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          uVar4 = uVar6;
          func_0x000107c5faec();
          uVar9 = uVar8;
          func_0x000107c61170(uVar6);
          uVar6 = param_1;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          uVar5 = uVar6;
          func_0x000107c5faec();
          param_2 = uVar9;
          func_0x000107c61170(uVar6);
          if ((uVar4 == uVar5) && (uVar8 == uVar9)) {
            func_0x000107c6142c(uVar8);
            func_0x000107c6142c(uVar9);
          }
          else {
            param_2 = uVar8;
            func_0x000107c605b8(uVar4,uVar8,uVar5,uVar9,0);
            func_0x000107c6142c(uVar8);
            func_0x000107c6142c(uVar9);
            if ((uVar4 & 1) == 0) goto LAB_103419c38;
          }
          uVar6 = uVar3;
          FUN_10341a084();
          if ((uVar6 & 1) == 0) {
            func_0x000107c61170(param_1);
            goto LAB_103419a50;
          }
          func_0x000107c550d8(uStack_68);
          FUN_103419058();
          uVar6 = 1;
          FUN_103419ce4(1);
          func_0x000107c5fadc();
          func_0x000107c6142c(param_2);
          func_0x000107c59c6c(uVar7);
          func_0x000107c61170(uVar3);
        }
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar6);
        uVar3 = param_1;
        func_0x000107c4a63c();
        if ((int)uVar3 != 0) {
          FUN_10341a284(0x4014000000000000);
        }
      }
      func_0x000107c61170(param_1);
      goto LAB_103419cb0;
    }
    func_0x000107c61170(param_1);
  }
  lVar1 = _DAT_112f66e78;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f66e78);
  func_0x000107c6157c(uVar2);
  func_0x000104875e28(&uStack_68);
  func_0x000107c61574(uVar2);
  if (uStack_68 == 0) {
    return;
  }
  func_0x000107c61170();
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar2);
  func_0x0001000d224c(&uStack_68);
  func_0x000107c61574(uVar2);
  func_0x000107c550d8(uStack_68);
LAB_103419cb0:
  func_0x000107c61170(uStack_68);
  return;
}



/* Entry: 103419ce4; end: 103419e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103419ce4(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if ((param_1 & 1) == 0) {
    lVar2 = -0x2fffffffffffffe8;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f14bbe0);
    uVar3 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010f14bba0);
    uVar4 = 0;
    func_0x000107c5fe40(0);
    lVar5 = lVar2;
    uVar7 = uVar3;
    func_0x0001000f6108(lVar2,uVar3,uVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    if (lVar5 != 0) {
      lVar2 = lVar5;
      func_0x000107c5faec(lVar5);
      func_0x000107c61170(lVar5);
      auVar10._8_8_ = uVar7;
      auVar10._0_8_ = lVar2;
      return auVar10;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10341b38c);
    (*pcVar1)();
  }
  func_0x00010341b1f0();
  lVar5 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  lVar6 = 0x48;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f66e90);
  if (lVar2 != 0) {
    func_0x000107c4f47c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar8 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170();
      goto LAB_103419d90;
    }
  }
  lVar8 = 0;
  lVar6 = 0;
LAB_103419d90:
  *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(long *)(lVar5 + 0x40) = lVar2;
  lVar2 = 0x7461686370616e53;
  if (lVar6 != 0) {
    lVar2 = lVar8;
  }
  lVar8 = -0x14ffffffff8d9a8c;
  if (lVar6 != 0) {
    lVar8 = lVar6;
  }
  *(long *)(lVar5 + 0x20) = lVar2;
  *(long *)(lVar5 + 0x28) = lVar8;
  uVar7 = param_2;
  func_0x000107c5fb00(param_1,param_2,lVar5);
  func_0x000107c6142c(param_2);
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 103419e0c; end: 10341a083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103419e0c(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  
  if (param_1 != 0) {
    uVar2 = param_1;
    uVar3 = param_2;
    func_0x000107c61174();
    uVar5 = uVar2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = uVar5;
    func_0x000107c5faec();
    uVar6 = uVar3;
    func_0x000107c61170(uVar5);
    if (param_3 == 0) {
LAB_103419f48:
      param_3 = uVar6;
      func_0x000107c6142c(uVar3);
    }
    else if ((param_2 == uVar4) && (param_3 == uVar3)) {
      func_0x000107c6142c(uVar3);
      param_3 = uVar6;
LAB_103419eac:
      uVar5 = uVar2;
      func_0x000107c4a63c();
      if ((int)uVar5 != 0) {
        uVar5 = *(ulong *)(unaff_x20 + _DAT_112f66e90);
        if (uVar5 == 0) {
          uVar4 = 0;
          uVar5 = 0;
          uVar3 = param_3;
        }
        else {
          func_0x000107c4b1dc();
          func_0x000107c61180();
          uVar4 = uVar5;
          func_0x000107c5faec();
          uVar3 = param_3;
          func_0x000107c61170(uVar5);
          uVar5 = param_3;
        }
        uVar6 = uVar2;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar7 = uVar6;
        func_0x000107c5faec();
        param_3 = uVar3;
        func_0x000107c61170(uVar6);
        uVar6 = param_3;
        if (uVar5 == 0) goto LAB_103419f48;
        if ((uVar4 == uVar7) && (uVar5 == uVar3)) {
          func_0x000107c6142c(uVar5);
          func_0x000107c6142c(uVar3);
LAB_103419fa8:
          lVar1 = _DAT_112f66ea8;
          func_0x000107c498f8(*(undefined8 *)(unaff_x20 + _DAT_112f66ea8));
          uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
          *(undefined8 *)(unaff_x20 + lVar1) = 0;
          func_0x000107c61170(uVar8);
          if (*(char *)(unaff_x20 + _DAT_112f66eb0) == '\x01') {
            func_0x00010341a698();
          }
          uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f66e78);
          func_0x000107c6157c(uVar8);
          func_0x0001000d224c(&stack0xffffffffffffffa8);
          func_0x000107c61574(uVar8);
          func_0x000107c550d8(in_stack_ffffffffffffffa8);
          func_0x000107c61170(in_stack_ffffffffffffffa8);
          FUN_103419058();
          uVar8 = in_stack_ffffffffffffffa8;
          FUN_10341b054();
          func_0x000107c5fadc();
          func_0x000107c6142c(param_3);
          func_0x000107c59c6c(in_stack_ffffffffffffffa8);
          func_0x000107c61170(uVar2);
          func_0x000107c61170(in_stack_ffffffffffffffa8);
          func_0x000107c61170(uVar8);
          return;
        }
        param_3 = uVar5;
        func_0x000107c605b8(uVar4,uVar5,uVar7,uVar3,0);
        func_0x000107c6142c(uVar5);
        func_0x000107c6142c(uVar3);
        if ((uVar4 & 1) != 0) goto LAB_103419fa8;
      }
    }
    else {
      func_0x000107c605b8(param_2,param_3,uVar4,uVar3,0);
      func_0x000107c6142c(uVar3);
      if ((param_2 & 1) != 0) goto LAB_103419eac;
    }
    func_0x000107c61170(uVar2);
    param_2 = param_3;
  }
  lVar1 = _DAT_112f66ea8;
  func_0x000107c498f8(*(undefined8 *)(unaff_x20 + _DAT_112f66ea8));
  uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar8);
  if (*(char *)(unaff_x20 + _DAT_112f66eb0) == '\x01') {
    func_0x00010341a698();
  }
  if (param_1 != 0) {
    func_0x000107c61174();
    uVar2 = param_1;
    func_0x000107c4d554();
    if ((int)uVar2 != 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f66e78);
      func_0x000107c6157c(uVar8);
      func_0x0001000d224c(&uStack_68);
      func_0x000107c61574(uVar8);
      func_0x000107c550d8(uStack_68);
      uVar2 = param_1;
      func_0x000107c5db50();
      if ((int)uVar2 != 0) {
        uVar5 = uStack_68;
        func_0x000107c550d8(uStack_68);
        FUN_103419058();
        uVar2 = uVar5;
        func_0x00010341b124();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
        func_0x000107c59c6c(uVar5);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uStack_68);
        uStack_68 = uVar5;
LAB_103419a50:
        func_0x000107c61170(uStack_68);
        uStack_68 = uVar2;
        goto LAB_103419cb0;
      }
      uVar2 = param_1;
      func_0x000107c4a2a0();
      if (((uVar2 & 1) != 0) || (uVar2 = param_1, func_0x000107c4a63c(), (int)uVar2 != 0)) {
        uVar2 = *(ulong *)(unaff_x20 + _DAT_112f66e90);
        uVar5 = uStack_68;
        if (uVar2 == 0) {
LAB_103419c40:
          func_0x000107c550d8(uStack_68);
          FUN_103419058();
          uVar4 = uVar5;
          func_0x00010341b2c0();
          func_0x000107c5fadc();
          func_0x000107c6142c(param_2);
          func_0x000107c59c6c(uVar5);
        }
        else {
          func_0x000107c61174();
          uVar4 = uVar2;
          func_0x000107c4f490();
          func_0x000107c61180();
          uVar3 = uVar4;
          func_0x000107c5faec();
          uVar6 = param_2;
          func_0x000107c61170(uVar4);
          func_0x000107c6142c(param_2);
          uVar4 = uVar3 & 0xffffffffffff;
          if ((param_2 & 0x2000000000000000) != 0) {
            uVar4 = param_2 >> 0x38 & 0xf;
          }
          param_2 = uVar6;
          if (uVar4 == 0) {
LAB_103419c38:
            func_0x000107c61170(uVar2);
            goto LAB_103419c40;
          }
          uVar4 = uVar2;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          uVar3 = uVar4;
          func_0x000107c5faec();
          uVar9 = uVar6;
          func_0x000107c61170(uVar4);
          uVar4 = param_1;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          uVar7 = uVar4;
          func_0x000107c5faec();
          param_2 = uVar9;
          func_0x000107c61170(uVar4);
          if ((uVar3 == uVar7) && (uVar6 == uVar9)) {
            func_0x000107c6142c(uVar6);
            func_0x000107c6142c(uVar9);
          }
          else {
            param_2 = uVar6;
            func_0x000107c605b8(uVar3,uVar6,uVar7,uVar9,0);
            func_0x000107c6142c(uVar6);
            func_0x000107c6142c(uVar9);
            if ((uVar3 & 1) == 0) goto LAB_103419c38;
          }
          uVar4 = uVar2;
          FUN_10341a084();
          if ((uVar4 & 1) == 0) {
            func_0x000107c61170(param_1);
            goto LAB_103419a50;
          }
          func_0x000107c550d8(uStack_68);
          FUN_103419058();
          uVar4 = 1;
          FUN_103419ce4(1);
          func_0x000107c5fadc();
          func_0x000107c6142c(param_2);
          func_0x000107c59c6c(uVar5);
          func_0x000107c61170(uVar2);
        }
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar4);
        uVar2 = param_1;
        func_0x000107c4a63c();
        if ((int)uVar2 != 0) {
          FUN_10341a284(0x4014000000000000);
        }
      }
      func_0x000107c61170(param_1);
      goto LAB_103419cb0;
    }
    func_0x000107c61170(param_1);
  }
  lVar1 = _DAT_112f66e78;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f66e78);
  func_0x000107c6157c(uVar8);
  func_0x000104875e28(&uStack_68);
  func_0x000107c61574(uVar8);
  if (uStack_68 == 0) {
    return;
  }
  func_0x000107c61170();
  uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar8);
  func_0x0001000d224c(&uStack_68);
  func_0x000107c61574(uVar8);
  func_0x000107c550d8(uStack_68);
LAB_103419cb0:
  func_0x000107c61170(uStack_68);
  return;
}



/* Entry: 10341a084; end: 10341a283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10341a084(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  if (uStack_48 != 0) {
    lVar7 = param_1;
    func_0x000107c4f490();
    func_0x000107c61180();
    lVar4 = param_2;
    if (lVar7 == 0) {
      func_0x000107c5faec();
      lVar4 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    uVar1 = uStack_48;
    func_0x000107c43f50();
    func_0x000107c61180();
    func_0x000107c615e8(uStack_48);
    func_0x000107c61170(lVar7);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5d0a8();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c5d0b8();
        func_0x000107c61170(uVar2);
        if (1 < uVar3) goto LAB_10341a148;
        if (uVar3 == 1) {
          lVar7 = param_1;
          func_0x000107c4f478();
          func_0x000107c61180();
          if (lVar7 == 0) {
            lVar8 = 0;
            lVar7 = 0;
            lVar5 = lVar4;
          }
          else {
            lVar8 = lVar7;
            func_0x000107c5faec();
            lVar5 = lVar4;
            func_0x000107c61170(lVar7);
            lVar7 = lVar4;
          }
          func_0x000107c4f4c0();
          func_0x000107c61180();
          if (param_1 == 0) {
            if (lVar7 != 0) {
LAB_10341a218:
              func_0x000107c61170(uVar1);
              lVar5 = lVar7;
              goto LAB_10341a238;
            }
          }
          else {
            lVar4 = param_1;
            func_0x000107c5faec();
            func_0x000107c61170(param_1);
            if (lVar7 == 0) {
              func_0x000107c61170(uVar1);
              if (lVar5 == 0) {
                uVar6 = 0;
                goto LAB_10341a198;
              }
LAB_10341a238:
              func_0x000107c6142c(lVar5);
              goto LAB_10341a194;
            }
            if (lVar5 == 0) goto LAB_10341a218;
            if ((lVar8 != lVar4) || (lVar7 != lVar5)) {
              func_0x000107c605b8(lVar8,lVar7,lVar4,lVar5,0);
              func_0x000107c6142c(lVar7);
              func_0x000107c6142c(lVar5);
              func_0x000107c61170(uVar1);
              uVar6 = (uint)lVar8 ^ 1;
              goto LAB_10341a198;
            }
            func_0x000107c6142c(lVar7);
            func_0x000107c6142c(lVar5);
          }
LAB_10341a148:
          func_0x000107c61170(uVar1);
          uVar6 = 0;
          goto LAB_10341a198;
        }
      }
      func_0x000107c61170(uVar1);
    }
  }
LAB_10341a194:
  uVar6 = 1;
LAB_10341a198:
  return uVar6 & 1;
}



/* Entry: 10341a284; end: 10341a37b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341a284(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112f66ea8;
  ppuVar4 = &puStack_70;
  func_0x000107c498f8(*(undefined8 *)(unaff_x20 + _DAT_112f66ea8));
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  puVar3 = &UNK_110652c88;
  func_0x000107c613fc(&UNK_110652c88,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_50 = 0x10341b018;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100fef460;
  puStack_58 = &UNK_110652cf0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c51924(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10341a37c; end: 10341a3eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341a37c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c498f8(*(undefined8 *)(param_2 + _DAT_112f66ea8));
    FUN_10341a3ec(0x3fd3333333333333);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10341a3ec; end: 10341a603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341a3ec(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar2 = _DAT_112f66e78;
  ppuVar7 = &puStack_80;
  ppuVar9 = &puStack_80;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f66e78);
  func_0x000107c6157c(uVar10);
  func_0x000104875e28(&puStack_80);
  func_0x000107c61574(uVar10);
  if (puStack_80 != (undefined *)0x0) {
    func_0x000107c61170();
    uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c6157c(uVar10);
    func_0x0001000d224c(&puStack_80);
    func_0x000107c61574(uVar10);
    puVar6 = puStack_80;
    puVar4 = puStack_80;
    func_0x000107c49eac();
    func_0x000107c61170(puVar6);
    lVar3 = _DAT_112f66eb0;
    if (((ulong)puVar4 & 1) == 0) {
      if ((*(byte *)(unaff_x20 + _DAT_112f66eb0) & 1) == 0) {
        uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
        func_0x000107c6157c(uVar10);
        func_0x0001000d224c(&puStack_80);
        func_0x000107c61574(uVar10);
        puVar8 = puStack_80;
        *(undefined1 *)(unaff_x20 + lVar3) = 1;
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar6 = &UNK_110652c38;
        func_0x000107c613fc(&UNK_110652c38,0x18,7);
        *(undefined **)(puVar6 + 0x10) = puStack_80;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_60 = FUN_10341afe8;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_110652c50;
        puStack_58 = puVar6;
        func_0x000107c60bc4(&puStack_80);
        puVar6 = puStack_58;
        func_0x000107c61174();
        func_0x000107c61574(puVar6);
        puVar6 = &UNK_110652c88;
        func_0x000107c613fc(&UNK_110652c88,0x18,7);
        func_0x000107c61614(puVar6 + 0x10);
        puVar4 = &UNK_110652cb0;
        func_0x000107c613fc(&UNK_110652cb0,0x20,7);
        *(undefined **)(puVar4 + 0x10) = puVar6;
        *(undefined **)(puVar4 + 0x18) = puVar8;
        pcStack_60 = (code *)0x10341b010;
        puStack_80 = puVar1;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_100288f10;
        puStack_68 = &UNK_110652cc8;
        puStack_58 = puVar4;
        func_0x000107c60bc4(&puStack_80);
        puVar6 = puStack_58;
        func_0x000107c61174(puVar8);
        func_0x000107c61574(puVar6);
        func_0x000107c3dcd0(param_1,puVar5);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(puVar8);
      }
    }
  }
  return;
}



/* Entry: 10341a604; end: 10341a75f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341a604(ulong param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f66eb0;
  if (param_2 != 0) {
    if ((param_1 & 1) != 0) {
      if (*(char *)(param_2 + _DAT_112f66eb0) == '\x01') {
        func_0x000107c550d8(param_3);
        func_0x000107c526c0(0x3ff0000000000000,param_3);
        *(undefined1 *)(param_2 + lVar1) = 0;
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10341a760; end: 10341a86b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341a760(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f66e78);
  func_0x000107c6157c(uVar3);
  func_0x000104875e28(&uStack_48);
  func_0x000107c61574(uVar3);
  func_0x000107c4ff34(uStack_48);
  func_0x000107c61170(uStack_48);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f66e80);
  if (lVar4 != 0) {
    lVar5 = ((long *)(unaff_x20 + _DAT_112f66e80))[1];
    func_0x000107c614f0(lVar4);
    pcVar6 = *(code **)(lVar5 + 0x10);
    func_0x000107c615f0(lVar4);
    (*pcVar6)();
    func_0x000107c615e8(lVar4);
  }
  plVar1 = (long *)(unaff_x20 + _DAT_112f66e88);
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = plVar1[1];
    lVar5 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar6 = *(code **)(lVar2 + 8);
    func_0x000107c615f0(lVar4);
    (*pcVar6)(lVar5,lVar2);
    func_0x000107c615e8(lVar4);
    lVar4 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar4);
  return;
}



/* Entry: 10341a86c; end: 10341a8c7; -[_TtC27LensPromptPrivacyDisclaimer35LensPromptPrivacyDisclaimerWorkflow init] */

void FUN_10341a86c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPromptPrivacyDisclaimer.LensPromptPrivacyDisclaimerWorkflow",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10341a898);
  (*pcVar1)();
}



/* Entry: 10341a8c8; end: 10341a96f; -[_TtC27LensPromptPrivacyDisclaimer35LensPromptPrivacyDisclaimerWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010341a904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010341a908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341a8c8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f66e80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f66e90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f66e98));
  return;
}



/* Entry: 10341a970; end: 10341a977; -[_TtC27LensPromptPrivacyDisclaimer35LensPromptPrivacyDisclaimerWorkflow isPointInsideView:] */

undefined8 FUN_10341a970(void)

{
  return 0;
}



/* Entry: 10341a978; end: 10341a97b; -[_TtC27LensPromptPrivacyDisclaimer35LensPromptPrivacyDisclaimerWorkflow setUIHidden:] */

void FUN_10341a978(void)

{
  return;
}



/* Entry: 10341a97c; end: 10341afc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10341a97c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                    long param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  int iStack_c0;
  undefined4 uStack_bc;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined8 uStack_68;
  
  lStack_70 = param_9;
  uStack_68 = param_10;
  func_0x0001000c5db4(auStack_88);
  (**(code **)(*(long *)(param_9 + -8) + 0x20))();
  plVar4 = (long *)(param_8 + _DAT_112f66e80);
  *plVar4 = 0;
  plVar4[1] = 0;
  *(undefined8 *)(param_8 + _DAT_112f66ea8) = 0;
  *(undefined1 *)(param_8 + _DAT_112f66eb0) = 0;
  lVar14 = _DAT_112f66eb8;
  puVar2 = &UNK_10dbc29c0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(param_8 + lVar14) = puVar2;
  puVar1 = (undefined8 *)(param_8 + _DAT_112f66e88);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_8 + _DAT_112f66ec0) = 0;
  lVar14 = _DAT_112f66e78;
  uVar3 = 0x112d67258;
  func_0x0001000285a8(0x112d67258,&UNK_10d92b770);
  func_0x000107c613fc();
  uVar12 = 0x1034191a0;
  func_0x0001000bdd8c(0x1034191a0,0);
  *(undefined8 *)(param_8 + lVar14) = uVar12;
  lVar14 = *plVar4;
  *plVar4 = param_1;
  plVar4[1] = param_2;
  func_0x000107c615f0(param_1);
  func_0x000107c615e8();
  *(undefined8 *)(param_8 + _DAT_112f66e90) = param_5;
  *(undefined8 *)(param_8 + _DAT_112f66e98) = param_6;
  *(undefined8 *)(param_8 + _DAT_112f66ea0) = param_7;
  FUN_10341afc8();
  puVar2 = PTR_s_init_1125d9248;
  lStack_98 = param_8;
  lStack_90 = lVar14;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61174(param_5);
  plVar4 = &lStack_98;
  func_0x000107c61154(plVar4,puVar2);
  puVar2 = &UNK_110652c88;
  func_0x000107c613fc(&UNK_110652c88,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,plVar4);
  FUN_103418e80(auStack_88,&iStack_c0);
  puVar5 = &UNK_110652d28;
  func_0x000107c613fc(&UNK_110652d28,0x40,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  FUN_103418ec4(&iStack_c0,puVar5 + 0x18);
  func_0x000107c613fc(uVar3,0x18,7);
  func_0x000107c61174();
  uVar3 = 0x10341b020;
  func_0x0001000bdd8c();
  uVar12 = *(undefined8 *)((long)plVar4 + _DAT_112f66e78);
  *(undefined8 *)((long)plVar4 + _DAT_112f66e78) = uVar3;
  func_0x000107c61574(uVar12);
  uVar6 = *(ulong *)((long)plVar4 + _DAT_112f66e90);
  if (uVar6 != 0) {
    func_0x000107c61174();
    uVar7 = uVar6;
    func_0x000107c4f490();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    func_0x000107c6142c(puVar5);
    uVar7 = uVar8 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar7 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      uVar7 = uVar6;
      func_0x000107c43700();
      func_0x000107c61180();
      if (uVar7 != 0) {
        iStack_c0 = 0;
        uStack_bc = CONCAT31(uStack_bc._1_3_,1);
        func_0x000107c60664();
        func_0x000107c61170(uVar7);
        if (((char)uStack_bc != '\x01') && (iStack_c0 == 3)) {
          func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
          func_0x0001000d224c(&iStack_c0);
          uVar3 = CONCAT44(uStack_bc,iStack_c0);
          uVar12 = uVar3;
          func_0x000107c50814();
          func_0x000107c61180();
          func_0x000107c615e8(uVar3);
          uVar3 = uVar12;
          func_0x0001000b637c(uVar12);
          func_0x000107c61170();
          func_0x00010061bc80();
          func_0x000107c61574(uVar3);
          func_0x0001000d224c(&iStack_c0);
          uVar3 = CONCAT44(uStack_bc,iStack_c0);
          uVar9 = uVar12;
          func_0x0001006c733c(uVar12);
          func_0x000107c61574(uVar3);
          plVar15 = *(long **)((long)plVar4 + _DAT_112f66eb8);
          plVar10 = plVar15;
          func_0x000107c615f0();
          func_0x000100471e0c();
          func_0x000107c61574(uVar9);
          func_0x000107c615e8(plVar15);
          puVar2 = &UNK_110652c88;
          func_0x000107c613fc(&UNK_110652c88,0x18,7);
          func_0x000107c61614(puVar2 + 0x10,plVar4);
          puVar11 = &UNK_110652d50;
          func_0x000107c613fc(&UNK_110652d50,0x20,7);
          *(undefined8 *)(puVar11 + 0x10) = 0x10341b034;
          *(undefined **)(puVar11 + 0x18) = puVar2;
          uVar3 = 0x10341b03c;
          puVar5 = puVar11;
          (**(code **)(*plVar10 + 0x60))();
          func_0x000107c61574(plVar10);
          func_0x000107c61574(puVar11);
          func_0x000107c61574(uVar12);
          func_0x000107c61170(uVar6);
          goto LAB_10341ae14;
        }
      }
    }
    func_0x000107c61170(uVar6);
  }
  func_0x0001000d224c(&iStack_c0);
  plVar10 = (long *)CONCAT44(uStack_bc,iStack_c0);
  puVar2 = &UNK_110652c88;
  func_0x000107c613fc(&UNK_110652c88,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,plVar4);
  uVar3 = 0x10341b02c;
  puVar5 = puVar2;
  (**(code **)(*plVar10 + 0x60))();
  func_0x000107c61574(plVar10);
  func_0x000107c61574(puVar2);
LAB_10341ae14:
  puVar1 = (undefined8 *)((long)plVar4 + _DAT_112f66e88);
  uVar12 = *puVar1;
  *puVar1 = uVar3;
  puVar1[1] = puVar5;
  func_0x000107c615e8(uVar12);
  if (param_1 == 0) {
    func_0x0001000834e4(auStack_88);
    func_0x000107c61170(plVar4);
    func_0x000107c61170(param_5);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_7);
    func_0x000107c61574(param_4);
  }
  else {
    lVar14 = param_1;
    func_0x000107c614f0(param_1);
    pcVar13 = *(code **)(param_2 + 8);
    func_0x000107c615f0(param_1);
    (*pcVar13)(plVar4,lVar14,param_2);
    func_0x000107c61170(param_5);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_7);
    func_0x000107c61170(plVar4);
    func_0x000107c61574(param_4);
    func_0x000107c615ec(param_1,2);
    func_0x0001000834e4(auStack_88);
  }
  return plVar4;
}



/* Entry: 10341afc8; end: 10341afe7;  */

void FUN_10341afc8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d8e00);
  return;
}



/* Entry: 10341afe8; end: 10341b053;  */

void FUN_10341afe8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10341b054; end: 10341b38b;  */

undefined1  [16] FUN_10341b054(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f14bb80);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f14bba0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10341b124);
  (*pcVar1)();
}



/* Entry: 10341b38c; end: 10341b39b; -[_TtC30SCViewfinderDataSourceServices44SCCameraUIScopedViewfinderDataSourceServices viewfinderDataSourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341b38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f66ef0));
  return;
}



/* Entry: 10341b39c; end: 10341b433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341b39c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f66ef0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10341b434; end: 10341b48b; -[_TtC30SCViewfinderDataSourceServices44SCCameraUIScopedViewfinderDataSourceServices initWithViewfinderDataSourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341b434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f66ef0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10341b48c; end: 10341b4eb; -[_TtC30SCViewfinderDataSourceServices44SCCameraUIScopedViewfinderDataSourceServices init] */

void FUN_10341b48c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCViewfinderDataSourceServices.SCCameraUIScopedViewfinderDataSourceServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10341b4b8);
  (*pcVar1)();
}



/* Entry: 10341b4ec; end: 10341b4fb; -[_TtC30SCViewfinderDataSourceServices44SCCameraUIScopedViewfinderDataSourceServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341b4ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f66ef0));
  return;
}



/* Entry: 10341b4fc; end: 10341b50b; -[_TtC30SCViewfinderDataSourceServices30SCViewfinderDataSourceServices dataSourceCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341b4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f66f20));
  return;
}



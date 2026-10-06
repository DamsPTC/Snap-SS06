/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028050dc; end: 102805173;  */

undefined8 FUN_1028050dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ec2b28;
  func_0x0001000285a8(0x112ec2b28,&UNK_10dae1790);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102805174; end: 1028051b7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102805174(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 1028051b8; end: 1028051ff;  */

void FUN_1028051b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae1940,0x4e,2);
  uRam00000001138048d0 = uStack_38;
  uRam00000001138048c8 = uStack_40;
  uRam00000001138048e0 = uStack_28;
  uRam00000001138048d8 = uStack_30;
  uRam00000001138048f0 = uStack_18;
  uRam00000001138048e8 = uStack_20;
  return;
}



/* Entry: 102805200; end: 1028052d3;  */

/* WARNING: Removing unreachable block (ram,0x0001028052d0) */

void FUN_102805200(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x138))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_110790980,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1028052d4; end: 102805357;  */

void FUN_1028052d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *unaff_x20;
  long unaff_x21;
  
  if (((*unaff_x20 != '\x01') ||
      ((**(code **)(param_3 + 0x68))(1,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_102805358(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                        param_2,param_3);
  }
  return;
}



/* Entry: 102805358; end: 1028053df;  */

void FUN_102805358(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x28);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1028053e0; end: 102805427;  */

uint FUN_1028053e0(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  uVar7 = *(ulong *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_2 + 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(ulong *)(param_2 + 0x28);
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_10280585c;
    if ((float)uVar5 == (float)uVar6) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_1028058f0;
    }
    else {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
LAB_1028058f0:
      func_0x000101553ccc(uVar5,uVar7,uVar3);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x000100e25fcc(uVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 8),
                          *(undefined8 *)(param_2 + 0x10));
      uVar1 = (uint)uVar5;
      goto LAB_10280594c;
    }
LAB_10280585c:
    func_0x00010161ef18(&uStack_80,auStack_b8);
    func_0x00010161ef18(&uStack_a0,auStack_b8);
    func_0x000101553ccc(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x000101553ccc(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_10280594c:
  return uVar1 & 1;
}



/* Entry: 102805428; end: 102805457;  */

undefined1  [16] FUN_102805428(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 102805458; end: 10280548b;  */

void FUN_102805458(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10280548c; end: 10280549f;  */

undefined1  [16] FUN_10280548c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10280549c;
  return auVar1;
}



/* Entry: 1028054a0; end: 1028054b3;  */

void FUN_1028054a0(void)

{
  FUN_102805200();
  return;
}



/* Entry: 1028054b4; end: 1028054eb;  */

void FUN_1028054b4(void)

{
  FUN_1028052d4();
  return;
}



/* Entry: 1028054ec; end: 1028054ef;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1028054ec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1028054f0; end: 102805527;  */

uint FUN_1028054f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_102805db4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102805528; end: 10280556f;  */

uint FUN_102805528(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_1028057b4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102805570; end: 10280560f;  */

/* WARNING: Possible PIC construction at 0x0001028055bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028055cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028055c0) */
/* WARNING: Removing unreachable block (ram,0x0001028055d0) */

void FUN_102805570(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec2b38 != -1) {
    func_0x000107c61568(0x112ec2b38,FUN_1028051b8);
  }
  uVar5 = uRam00000001138048f0;
  uVar4 = uRam00000001138048e8;
  uVar3 = uRam00000001138048e0;
  uVar2 = uRam00000001138048d8;
  uVar1 = uRam00000001138048d0;
  *param_1 = uRam00000001138048c8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102805610; end: 10280564b;  */

void FUN_102805610(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec2b58;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec2b58,&UNK_10dae1938);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10280564c; end: 10280576f;  */

void FUN_10280564c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102805770; end: 1028057b3;  */

uint FUN_102805770(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_1028057b4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1028057b4; end: 10280596f;  */

uint FUN_1028057b4(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  uVar7 = *(ulong *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_2 + 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(ulong *)(param_2 + 0x28);
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_10280585c;
    if ((float)uVar5 == (float)uVar6) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_1028058f0;
    }
    else {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
LAB_1028058f0:
      func_0x000101553ccc(uVar5,uVar7,uVar3);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x000100e25fcc(uVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 8),
                          *(undefined8 *)(param_2 + 0x10));
      uVar1 = (uint)uVar5;
      goto LAB_10280594c;
    }
LAB_10280585c:
    func_0x00010161ef18(&uStack_80,auStack_b8);
    func_0x00010161ef18(&uStack_a0,auStack_b8);
    func_0x000101553ccc(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x000101553ccc(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_10280594c:
  return uVar1 & 1;
}



/* Entry: 102805970; end: 1028059af;  */

void FUN_102805970(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1878;
  func_0x000107c61520(&UNK_10dae1878,&UNK_1105519c8);
  puRam0000000112ec2b40 = puVar1;
  return;
}



/* Entry: 1028059b0; end: 1028059d3;  */

void FUN_1028059b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1028059d4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1028059d4; end: 102805a13;  */

void FUN_1028059d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1850;
  func_0x000107c61520(&UNK_10dae1850,&UNK_1105519c8);
  puRam0000000112ec2b48 = puVar1;
  return;
}



/* Entry: 102805a14; end: 102805a3f;  */

void FUN_102805a14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102805970();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000102802c40();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102805a40; end: 102805a43;  */

void FUN_102805a40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae18b8;
  func_0x000107c61520(&UNK_10dae18b8,&UNK_1105519c8);
  puRam0000000112ec2b50 = puVar1;
  return;
}



/* Entry: 102805a44; end: 102805a83;  */

void FUN_102805a44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae18b8;
  func_0x000107c61520(&UNK_10dae18b8,&UNK_1105519c8);
  puRam0000000112ec2b50 = puVar1;
  return;
}



/* Entry: 102805a84; end: 102805af7;  */

long FUN_102805a84(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102805af8; end: 102805c6b;  */

undefined1 * FUN_102805af8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010006c00c(uVar2,uVar1);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar3 = *(ulong *)(param_2 + 0x28);
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010006c00c(uVar2,uVar3);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(ulong *)(param_1 + 0x28) = uVar3;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  }
  return param_1;
}



/* Entry: 102805c6c; end: 102805cff;  */

undefined1 * FUN_102805c6c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (*(ulong *)(param_1 + 0x28) >> 0x3c < 0xf) {
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(ulong *)(param_1 + 0x28) = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x000101599dcc(param_1 + 0x18);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



/* Entry: 102805d00; end: 102805db3;  */

int FUN_102805d00(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x30] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102805db4; end: 102805df3;  */

void FUN_102805db4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae1824;
  func_0x000107c61520(&DAT_10dae1824,&UNK_1105519c8);
  puRam0000000112ec2b60 = puVar1;
  return;
}



/* Entry: 102805df4; end: 102805dff;  */

void FUN_102805df4(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_102807ce0();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102805e00; end: 102805e3f;  */

void FUN_102805e00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ec2bd0;
  func_0x0001000285a8(0x112ec2bd0,&UNK_10dae1990);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102805e40; end: 102805e57;  */

void FUN_102805e40(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_102807ce0();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102805e58; end: 102805e97;  */

void FUN_102805e58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ec2c80;
  func_0x0001000285a8(0x112ec2c80,&UNK_10dae1998);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102805e98; end: 102805eaf;  */

void FUN_102805e98(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x102807cec)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102805eb0; end: 102805f1f;  */

void FUN_102805eb0(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102805f20; end: 102805f2b;  */

void FUN_102805f20(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x102807cf8)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102805f2c; end: 102805fe3;  */

void FUN_102805f2c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102805fe4; end: 102806017;  */

void FUN_102805fe4(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 102806018; end: 102806057;  */

void FUN_102806018(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ec2d50;
  func_0x0001000285a8(0x112ec2d50,&UNK_10dae19a8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102806058; end: 102806093;  */

void FUN_102806058(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 102806094; end: 102806173;  */

void FUN_102806094(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102806174; end: 1028061af;  */

bool FUN_102806174(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 1028061b0; end: 1028061f7;  */

void FUN_1028061b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae2420,0x2c,2);
  uRam0000000113804900 = uStack_38;
  uRam00000001138048f8 = uStack_40;
  uRam0000000113804910 = uStack_28;
  uRam0000000113804908 = uStack_30;
  uRam0000000113804920 = uStack_18;
  uRam0000000113804918 = uStack_20;
  return;
}



/* Entry: 1028061f8; end: 102806297;  */

/* WARNING: Possible PIC construction at 0x000102806244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102806254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102806248) */
/* WARNING: Removing unreachable block (ram,0x000102806258) */

void FUN_1028061f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec2d68 != -1) {
    func_0x000107c61568(0x112ec2d68,FUN_1028061b0);
  }
  uVar5 = uRam0000000113804920;
  uVar4 = uRam0000000113804918;
  uVar3 = uRam0000000113804910;
  uVar2 = uRam0000000113804908;
  uVar1 = uRam0000000113804900;
  *param_1 = uRam00000001138048f8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102806298; end: 1028062df;  */

void FUN_102806298(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae23b0,0x6f,2);
  uRam0000000113804930 = uStack_38;
  uRam0000000113804928 = uStack_40;
  uRam0000000113804940 = uStack_28;
  uRam0000000113804938 = uStack_30;
  uRam0000000113804950 = uStack_18;
  uRam0000000113804948 = uStack_20;
  return;
}



/* Entry: 1028062e0; end: 10280637f;  */

/* WARNING: Possible PIC construction at 0x00010280632c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280633c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102806330) */
/* WARNING: Removing unreachable block (ram,0x000102806340) */

void FUN_1028062e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec2d70 != -1) {
    func_0x000107c61568(0x112ec2d70,FUN_102806298);
  }
  uVar5 = uRam0000000113804950;
  uVar4 = uRam0000000113804948;
  uVar3 = uRam0000000113804940;
  uVar2 = uRam0000000113804938;
  uVar1 = uRam0000000113804930;
  *param_1 = uRam0000000113804928;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102806380; end: 1028063c7;  */

void FUN_102806380(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae2370,0x38,2);
  uRam0000000113804960 = uStack_38;
  uRam0000000113804958 = uStack_40;
  uRam0000000113804970 = uStack_28;
  uRam0000000113804968 = uStack_30;
  uRam0000000113804980 = uStack_18;
  uRam0000000113804978 = uStack_20;
  return;
}



/* Entry: 1028063c8; end: 102806467;  */

/* WARNING: Possible PIC construction at 0x000102806414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102806424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102806418) */
/* WARNING: Removing unreachable block (ram,0x000102806428) */

void FUN_1028063c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec2d78 != -1) {
    func_0x000107c61568(0x112ec2d78,FUN_102806380);
  }
  uVar5 = uRam0000000113804980;
  uVar4 = uRam0000000113804978;
  uVar3 = uRam0000000113804970;
  uVar2 = uRam0000000113804968;
  uVar1 = uRam0000000113804960;
  *param_1 = uRam0000000113804958;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102806468; end: 1028064af;  */

void FUN_102806468(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae2340,0x2d,2);
  uRam0000000113804990 = uStack_38;
  uRam0000000113804988 = uStack_40;
  uRam00000001138049a0 = uStack_28;
  uRam0000000113804998 = uStack_30;
  uRam00000001138049b0 = uStack_18;
  uRam00000001138049a8 = uStack_20;
  return;
}



/* Entry: 1028064b0; end: 10280654f;  */

/* WARNING: Possible PIC construction at 0x0001028064fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280650c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102806500) */
/* WARNING: Removing unreachable block (ram,0x000102806510) */

void FUN_1028064b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec2d80 != -1) {
    func_0x000107c61568(0x112ec2d80,FUN_102806468);
  }
  uVar5 = uRam00000001138049b0;
  uVar4 = uRam00000001138049a8;
  uVar3 = uRam00000001138049a0;
  uVar2 = uRam0000000113804998;
  uVar1 = uRam0000000113804990;
  *param_1 = uRam0000000113804988;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102806550; end: 102806597;  */

void FUN_102806550(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae22a0,0x9c,2);
  uRam00000001138049c0 = uStack_38;
  uRam00000001138049b8 = uStack_40;
  uRam00000001138049d0 = uStack_28;
  uRam00000001138049c8 = uStack_30;
  uRam00000001138049e0 = uStack_18;
  uRam00000001138049d8 = uStack_20;
  return;
}



/* Entry: 102806598; end: 102806757;  */

/* WARNING: Removing unreachable block (ram,0x000102806754) */

void FUN_102806598(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar3 = *(code **)(param_3 + 0x180);
            func_0x000102807ee0();
            goto LAB_102806740;
          }
          if (lVar1 != 2) goto LAB_102806620;
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x10;
        }
        else if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x18;
        }
        else {
          if (lVar1 != 4) goto LAB_102806620;
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x28;
        }
LAB_102806610:
        (*pcVar3)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 != 5) {
            if (lVar1 == 6) {
              pcVar3 = *(code **)(param_3 + 0x160);
              lVar1 = unaff_x20 + 0x38;
              goto LAB_102806610;
            }
            goto LAB_102806620;
          }
          pcVar3 = *(code **)(param_3 + 0x1a0);
          func_0x0001027ff0d8();
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x0001015cabb8();
        }
        else {
          if (lVar1 != 8) {
            if (lVar1 == 9) {
              pcVar3 = *(code **)(param_3 + 0x160);
              lVar1 = unaff_x20 + 0x50;
              goto LAB_102806610;
            }
            goto LAB_102806620;
          }
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_102807ea0();
        }
LAB_102806740:
        (*pcVar3)();
      }
LAB_102806620:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 102806758; end: 10280695f;  */

void FUN_102806758(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  code *pcVar7;
  long lStack_60;
  undefined1 uStack_58;
  
  if (*unaff_x20 != 0) {
    uStack_58 = (undefined1)unaff_x20[1];
    pcVar7 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_60 = *unaff_x20;
    func_0x000102807ee0();
    (*pcVar7)(&lStack_60,1,&UNK_11066cdc0,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((*(long *)(unaff_x20[2] + 0x10) == 0) ||
     ((**(code **)(param_3 + 0x100))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[4];
    uVar1 = unaff_x20[3] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[3],uVar2,3,param_2,param_3), unaff_x21 == 0)) &&
       ((lVar4 = unaff_x20[5], *(long *)(lVar4 + 0x10) == 0 ||
        ((**(code **)(param_3 + 0x100))(lVar4,4,param_2,param_3), unaff_x21 == 0)))) {
      lVar6 = unaff_x20[6];
      if (*(long *)(lVar6 + 0x10) != 0) {
        pcVar7 = *(code **)(param_3 + 0x118);
        func_0x0001027ff0d8();
        (*pcVar7)(lVar6,5,&UNK_110552078,lVar4,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      if (((*(long *)(unaff_x20[7] + 0x10) == 0) ||
          ((**(code **)(param_3 + 0x100))(unaff_x20[7],6,param_2,param_3), unaff_x21 == 0)) &&
         (plVar5 = unaff_x20, FUN_102806960(), unaff_x21 == 0)) {
        if (unaff_x20[8] != 0) {
          uStack_58 = (undefined1)unaff_x20[9];
          pcVar7 = *(code **)(param_3 + 0x80);
          lStack_60 = unaff_x20[8];
          func_0x000102807ea0();
          (*pcVar7)(&lStack_60,8,&UNK_110551f60,plVar5,param_2,param_3);
        }
        if (*(long *)(unaff_x20[10] + 0x10) != 0) {
          (**(code **)(param_3 + 0x100))(unaff_x20[10],9,param_2,param_3);
        }
        func_0x000100076224(param_1,unaff_x20[0xb],unaff_x20[0xc],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 102806960; end: 1028069e7;  */

void FUN_102806960(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x78);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x70);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015cabb8();
    (*pcVar1)(&uStack_70,7,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1028069e8; end: 102806a5b;  */

void FUN_1028069e8(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = puVar1;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  param_1[7] = puVar1;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = puVar1;
  param_1[0xc] = 0xc000000000000000;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 102806a5c; end: 102806a8b;  */

undefined1  [16] FUN_102806a5c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 102806a8c; end: 102806abf;  */

void FUN_102806a8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 102806ac0; end: 102806ad3;  */

undefined1  [16] FUN_102806ac0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x102806ad0;
  return auVar1;
}



/* Entry: 102806ad4; end: 102806ae7;  */

void FUN_102806ad4(void)

{
  FUN_102806598();
  return;
}



/* Entry: 102806ae8; end: 102806b37;  */

void FUN_102806ae8(void)

{
  FUN_102806758();
  return;
}



/* Entry: 102806b38; end: 102806b3b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102806b38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 102806b3c; end: 102806b73;  */

uint FUN_102806b3c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102809c44();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102806b74; end: 102806bf3;  */

uint FUN_102806b74(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_28 = param_1[0x11];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[0x11];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_1028082bc(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 102806bf4; end: 102806c93;  */

/* WARNING: Possible PIC construction at 0x000102806c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102806c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102806c44) */
/* WARNING: Removing unreachable block (ram,0x000102806c54) */

void FUN_102806bf4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec2d88 != -1) {
    func_0x000107c61568(0x112ec2d88,FUN_102806550);
  }
  uVar5 = uRam00000001138049e0;
  uVar4 = uRam00000001138049d8;
  uVar3 = uRam00000001138049d0;
  uVar2 = uRam00000001138049c8;
  uVar1 = uRam00000001138049c0;
  *param_1 = uRam00000001138049b8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102806c94; end: 102806ccf;  */

void FUN_102806c94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec2ee0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec2ee0,&UNK_10dae2210);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102806cd0; end: 102806e0b;  */

void FUN_102806cd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_38 = unaff_x20[0x11];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102806e0c; end: 102806e8b;  */

uint FUN_102806e0c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_b8 = param_1[0x11];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_28 = param_2[0x11];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_1028082bc(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 102806e8c; end: 102806ed3;  */

void FUN_102806e8c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae2250,0x44,2);
  uRam00000001138049f0 = uStack_38;
  uRam00000001138049e8 = uStack_40;
  uRam0000000113804a00 = uStack_28;
  uRam00000001138049f8 = uStack_30;
  uRam0000000113804a10 = uStack_18;
  uRam0000000113804a08 = uStack_20;
  return;
}



/* Entry: 102806ed4; end: 10280703b;  */

/* WARNING: Removing unreachable block (ram,0x000102807030) */

void FUN_102806ed4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x0001028086d8();
          goto LAB_102806f58;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
LAB_102807020:
          (*pcVar3)(lVar1,param_2,param_3);
        }
        else if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x20;
          goto LAB_102807020;
        }
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000102808718();
        }
        else {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x60);
            lVar1 = unaff_x20 + 0x40;
            goto LAB_102807020;
          }
          if (lVar1 != 6) goto LAB_102806f6c;
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_102808ecc();
        }
LAB_102806f58:
        (*pcVar3)();
      }
LAB_102806f6c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10280703c; end: 1028071b7;  */

void FUN_10280703c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar5;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar5 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    func_0x0001028086d8();
    (*pcVar5)(&lStack_50,1,&UNK_110551db0,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar4 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar4,2,param_2,param_3), unaff_x21 == 0)) {
    uVar4 = unaff_x20[4];
    uVar2 = unaff_x20[5];
    uVar1 = uVar4 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(uVar4,uVar2,3,param_2,param_3), unaff_x21 == 0)) {
      if (unaff_x20[6] != 0) {
        uStack_48 = (undefined1)unaff_x20[7];
        pcVar5 = *(code **)(param_3 + 0x80);
        lStack_50 = unaff_x20[6];
        func_0x000102808718();
        (*pcVar5)(&lStack_50,4,&UNK_110551e40,uVar4,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      if (((unaff_x20[8] == 0) ||
          ((**(code **)(param_3 + 0x20))(unaff_x20[8],5,param_2,param_3), unaff_x21 == 0)) &&
         (FUN_1028071b8(), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 1028071b8; end: 102807247;  */

void FUN_1028071b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x70);
  if (lStack_68 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x60);
    uStack_80 = *(undefined8 *)(param_1 + 0x58);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    uStack_48 = *(undefined8 *)(param_1 + 0x90);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102808ecc();
    (*pcVar1)(&uStack_80,6,&UNK_110552110,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102807248; end: 1028072b3;  */

uint FUN_102807248(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_280 [64];
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *param_1;
  lVar5 = *param_2;
  if ((char)param_2[1] != '\x01') {
    if (lVar4 == lVar5) goto LAB_102807f70;
    goto LAB_10280813c;
  }
  if (lVar5 < 2) {
    if (lVar5 == 0) {
      if (lVar4 == 0) {
LAB_102807f70:
        uVar2 = param_1[2];
        if ((uVar2 == param_2[2] && param_1[3] == param_2[3]) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[4];
          if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            lVar4 = param_1[6];
            lVar5 = param_2[6];
            if ((char)param_2[7] == '\x01') {
              if (lVar5 < 4) {
                if (lVar5 < 2) {
                  if (lVar5 == 0) {
                    if (lVar4 == 0) {
LAB_102808000:
                      if (param_1[8] == param_2[8]) {
                        lStack_b8 = param_1[0xc];
                        lStack_c0 = param_1[0xb];
                        lStack_a8 = param_1[0xe];
                        lStack_b0 = param_1[0xd];
                        lStack_98 = param_1[0x10];
                        lStack_a0 = param_1[0xf];
                        lStack_88 = param_1[0x12];
                        lStack_90 = param_1[0x11];
                        lStack_f8 = param_2[0xc];
                        lStack_100 = param_2[0xb];
                        lStack_e8 = param_2[0xe];
                        lStack_f0 = param_2[0xd];
                        lStack_d8 = param_2[0x10];
                        lStack_e0 = param_2[0xf];
                        lStack_c8 = param_2[0x12];
                        lStack_d0 = param_2[0x11];
                        lStack_168 = param_1[0xe];
                        lStack_170 = param_1[0xd];
                        lStack_178 = param_1[0xc];
                        lStack_180 = param_1[0xb];
                        lStack_158 = param_1[0x10];
                        lStack_160 = param_1[0xf];
                        lStack_148 = param_1[0x12];
                        lStack_150 = param_1[0x11];
                        lStack_1a8 = param_2[0xe];
                        lStack_1b0 = param_2[0xd];
                        lStack_1b8 = param_2[0xc];
                        lStack_1c0 = param_2[0xb];
                        lStack_198 = param_2[0x10];
                        lStack_1a0 = param_2[0xf];
                        lStack_188 = param_2[0x12];
                        lStack_190 = param_2[0x11];
                        lStack_140 = lStack_1c0;
                        lStack_138 = lStack_1b8;
                        lStack_130 = lStack_1b0;
                        lStack_128 = lStack_1a8;
                        lStack_120 = lStack_1a0;
                        lStack_118 = lStack_198;
                        lStack_110 = lStack_190;
                        lStack_108 = lStack_188;
                        if (lStack_168 == 0) {
                          if (lStack_1a8 == 0) {
                            lStack_1f8 = param_1[0xc];
                            lStack_200 = param_1[0xb];
                            lStack_1e8 = param_1[0xe];
                            lStack_1f0 = param_1[0xd];
                            lStack_1d8 = param_1[0x10];
                            lStack_1e0 = param_1[0xf];
                            lStack_1c8 = param_1[0x12];
                            lStack_1d0 = param_1[0x11];
                            FUN_102807d04(&lStack_c0,&lStack_80,0x112ec2d58,&UNK_10dae19b8);
                            FUN_102807d04(&lStack_100,&lStack_80,0x112ec2d58,&UNK_10dae19b8);
                            func_0x000102807d78(&lStack_200,0x112ec2d58,&UNK_10dae19b8);
LAB_1028082ac:
                            lVar4 = param_1[9];
                            func_0x000100e25fcc(lVar4,param_1[10],param_2[9],param_2[10]);
                            uVar1 = (uint)lVar4;
                            goto LAB_102808140;
                          }
                        }
                        else if (lStack_1a8 != 0) {
                          lStack_238 = param_2[0xc];
                          lStack_240 = param_2[0xb];
                          lStack_228 = param_2[0xe];
                          lStack_230 = param_2[0xd];
                          lStack_218 = param_2[0x10];
                          lStack_220 = param_2[0xf];
                          lStack_208 = param_2[0x12];
                          lStack_210 = param_2[0x11];
                          lStack_78 = param_1[0xc];
                          lStack_80 = param_1[0xb];
                          lStack_68 = param_1[0xe];
                          lStack_70 = param_1[0xd];
                          lStack_58 = param_1[0x10];
                          lStack_60 = param_1[0xf];
                          lStack_48 = param_1[0x12];
                          lStack_50 = param_1[0x11];
                          lStack_200 = lStack_240;
                          lStack_1f8 = lStack_238;
                          lStack_1f0 = lStack_230;
                          lStack_1e8 = lStack_228;
                          lStack_1e0 = lStack_220;
                          lStack_1d8 = lStack_218;
                          lStack_1d0 = lStack_210;
                          lStack_1c8 = lStack_208;
                          FUN_102807d04(&lStack_c0,auStack_280,0x112ec2d58,&UNK_10dae19b8);
                          FUN_102807d04(&lStack_100,auStack_280,0x112ec2d58,&UNK_10dae19b8);
                          plVar3 = &lStack_80;
                          func_0x000102807db8(plVar3,&lStack_200);
                          func_0x000102807d78(&lStack_240,0x112ec2d58,&UNK_10dae19b8);
                          func_0x000102807d78(&lStack_180,0x112ec2d58,&UNK_10dae19b8);
                          if (((ulong)plVar3 & 1) != 0) goto LAB_1028082ac;
                          goto LAB_10280813c;
                        }
                        lStack_200 = lStack_180;
                        lStack_1f8 = lStack_178;
                        lStack_1f0 = lStack_170;
                        lStack_1e8 = lStack_168;
                        lStack_1e0 = lStack_160;
                        lStack_1d8 = lStack_158;
                        lStack_1d0 = lStack_150;
                        lStack_1c8 = lStack_148;
                        FUN_102807d04(&lStack_c0,&lStack_80,0x112ec2d58,&UNK_10dae19b8);
                        FUN_102807d04(&lStack_100,&lStack_80,0x112ec2d58,&UNK_10dae19b8);
                        func_0x000102807d78(&lStack_200,0x112ec2d60,&UNK_10dae19c0);
                        uVar1 = 0;
                        goto LAB_102808140;
                      }
                    }
                  }
                  else if (lVar4 == 1) goto LAB_102808000;
                }
                else if (lVar5 == 2) {
                  if (lVar4 == 2) goto LAB_102808000;
                }
                else if (lVar4 == 3) goto LAB_102808000;
              }
              else if (lVar5 < 6) {
                if (lVar5 == 4) {
                  if (lVar4 == 4) goto LAB_102808000;
                }
                else if (lVar4 == 5) goto LAB_102808000;
              }
              else if (lVar5 == 6) {
                if (lVar4 == 6) goto LAB_102808000;
              }
              else if (lVar4 == 7) goto LAB_102808000;
            }
            else if (lVar4 == lVar5) goto LAB_102808000;
          }
        }
      }
    }
    else if (lVar4 == 1) goto LAB_102807f70;
  }
  else if (lVar5 == 2) {
    if (lVar4 == 2) goto LAB_102807f70;
  }
  else if (lVar4 == 3) goto LAB_102807f70;
LAB_10280813c:
  uVar1 = 0;
LAB_102808140:
  return uVar1 & 1;
}



/* Entry: 1028072b4; end: 1028072e3;  */

undefined1  [16] FUN_1028072b4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 1028072e4; end: 102807317;  */

void FUN_1028072e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 102807318; end: 10280732b;  */

undefined1  [16] FUN_102807318(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x102807328;
  return auVar1;
}



/* Entry: 10280732c; end: 10280733f;  */

void FUN_10280732c(void)

{
  FUN_102806ed4();
  return;
}



/* Entry: 102807340; end: 102807397;  */

void FUN_102807340(void)

{
  FUN_10280703c();
  return;
}



/* Entry: 102807398; end: 10280739b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102807398(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10280739c; end: 1028073d3;  */

uint FUN_10280739c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102809c04();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1028073d4; end: 102807463;  */

uint FUN_1028073d4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_102807f20(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 102807464; end: 102807503;  */

/* WARNING: Possible PIC construction at 0x0001028074b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028074c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028074b4) */
/* WARNING: Removing unreachable block (ram,0x0001028074c4) */

void FUN_102807464(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec2da8 != -1) {
    func_0x000107c61568(0x112ec2da8,FUN_102806e8c);
  }
  uVar5 = uRam0000000113804a10;
  uVar4 = uRam0000000113804a08;
  uVar3 = uRam0000000113804a00;
  uVar2 = uRam00000001138049f8;
  uVar1 = uRam00000001138049f0;
  *param_1 = uRam00000001138049e8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102807504; end: 10280753f;  */

void FUN_102807504(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec2ed0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec2ed0,&UNK_10dae2208);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102807540; end: 10280768b;  */

void FUN_102807540(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_40 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000107c6068c(auStack_118,0);
  func_0x000107c5fa50(auStack_118,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10280768c; end: 10280771b;  */

uint FUN_10280768c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_102807f20(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 10280771c; end: 102807763;  */

void FUN_10280771c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae2220,0x21,2);
  uRam0000000113804a20 = uStack_38;
  uRam0000000113804a18 = uStack_40;
  uRam0000000113804a30 = uStack_28;
  uRam0000000113804a28 = uStack_30;
  uRam0000000113804a40 = uStack_18;
  uRam0000000113804a38 = uStack_20;
  return;
}



/* Entry: 102807764; end: 10280784b;  */

/* WARNING: Removing unreachable block (ram,0x00010280783c) */

void FUN_102807764(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x150);
        lVar1 = unaff_x20 + 0x20;
LAB_1028077cc:
        (*pcVar4)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_1028077cc;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000102808798();
          (*pcVar4)();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10280784c; end: 102807947;  */

void FUN_10280784c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000102808798();
    (*pcVar4)(&lStack_50,1,&UNK_110551ed0,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[5];
    uVar1 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
    }
  }
  return;
}



/* Entry: 102807948; end: 102807993;  */

void FUN_102807948(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 102807994; end: 1028079c3;  */

undefined1  [16] FUN_102807994(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 1028079c4; end: 1028079f7;  */

void FUN_1028079c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 1028079f8; end: 102807a0b;  */

undefined1  [16] FUN_1028079f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x102807a08;
  return auVar1;
}



/* Entry: 102807a0c; end: 102807a33;  */

void FUN_102807a0c(void)

{
  FUN_102807764();
  return;
}



/* Entry: 102807a34; end: 102807a37;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102807a34(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 102807a38; end: 102807a6f;  */

uint FUN_102807a38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_102809bc4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102807a70; end: 102807ab7;  */

uint FUN_102807a70(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  func_0x000102807db8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102807ab8; end: 102807b57;  */

/* WARNING: Possible PIC construction at 0x000102807b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102807b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102807b08) */
/* WARNING: Removing unreachable block (ram,0x000102807b18) */

void FUN_102807ab8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec2dc8 != -1) {
    func_0x000107c61568(0x112ec2dc8,FUN_10280771c);
  }
  uVar5 = uRam0000000113804a40;
  uVar4 = uRam0000000113804a38;
  uVar3 = uRam0000000113804a30;
  uVar2 = uRam0000000113804a28;
  uVar1 = uRam0000000113804a20;
  *param_1 = uRam0000000113804a18;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102807b58; end: 102807b93;  */

void FUN_102807b58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec2ec0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec2ec0,&UNK_10dae2200);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102807b94; end: 102807c97;  */

void FUN_102807b94(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102fba7cc; end: 102fba9e7;  */

/* WARNING: Removing unreachable block (ram,0x000102fba96c) */

void FUN_102fba7cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x21;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 auStack_110 [64];
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uVar6 = *(ulong *)(param_1 + 0x48);
  uVar9 = *(ulong *)(param_1 + 0x38) & uVar6 & 0x3000000000000000;
  lVar5 = param_1;
  if (uVar9 != 0x3000000000000000 && (uVar6 & 0x2000000000000000) != 0) {
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar4 = *(long *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = uVar7;
    uStack_c8 = uVar2;
    lStack_c0 = lVar4;
    uStack_b8 = uVar1;
    uStack_b0 = uVar3;
    uStack_a8 = *(ulong *)(param_1 + 0x38);
    uStack_98 = uVar6;
    FUN_102fb6cc4(&uStack_d0,auStack_110);
    lVar5 = 0;
    func_0x000102fbdc3c(0,0,0,0,0);
    uStack_88 = uVar2 & 0xff;
    uStack_90 = uVar7;
    lStack_80 = lVar4;
    uStack_78 = uVar1;
    uStack_70 = uVar3;
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_102fbccf4();
  (*pcVar8)(&uStack_90,&UNK_1105f73e0,lVar5,param_3,param_4);
  uVar7 = uStack_70;
  uVar3 = uStack_78;
  lVar5 = lStack_80;
  uVar6 = uStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_80 != 0)) {
    if (uVar9 == 0x3000000000000000) {
      func_0x000107c61434(lStack_80);
      func_0x00010006c00c(uVar3,uVar7);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_80);
      func_0x00010006c00c(uVar3,uVar7);
      (*pcVar8)(param_3,param_4);
    }
    func_0x000102fbdc3c(uStack_90,uStack_88,lStack_80,uStack_78,uStack_70);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    lStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(ulong *)(param_1 + 0x18) = uVar6 & 0xff;
    *(long *)(param_1 + 0x20) = lVar5;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0x2000000000000000;
    func_0x000102fbdbfc(&uStack_d0,0x112f2e690,&UNK_10db729d0);
  }
  else {
    func_0x000102fbdc3c(uStack_90,uStack_88,lStack_80,uStack_78,uStack_70);
  }
  return;
}



/* Entry: 102fba9e8; end: 102fbaadb;  */

void FUN_102fba9e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000102fbc64c();
    (*pcVar2)(&lStack_50,1,&UNK_1105f72e0,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_102fbaadc();
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[10] == '\x01') {
      (**(code **)(param_3 + 0x68))(1,3,param_2,param_3);
    }
    FUN_102fbab84();
    func_0x000100076224(param_1,unaff_x20[0xb],unaff_x20[0xc],param_2,param_3);
  }
  return;
}



/* Entry: 102fbaadc; end: 102fbab83;  */

void FUN_102fbaadc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x38);
  uStack_48 = *(ulong *)(param_1 + 0x48);
  if (((uStack_58 & uStack_48 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (uStack_48 & 0x2000000000000000) == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102fbcbc8();
    (*pcVar1)(&uStack_80,2,&UNK_1105f7358,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102fbab84; end: 102fbac23;  */

void FUN_102fbab84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (((*(ulong *)(param_1 + 0x38) & *(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) &
      0x3000000000000000) != 0 && (*(ulong *)(param_1 + 0x48) & 0x2000000000000000) != 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102fbccf4();
    (*pcVar1)(&uStack_70,4,&UNK_1105f73e0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102fbac24; end: 102fbac87;  */

void FUN_102fbac24(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0x3000000000000000;
  param_1[9] = 0x3000000000000000;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = 0xc000000000000000;
  param_1[0xb] = 0;
  return;
}



/* Entry: 102fbac88; end: 102fbacb7;  */

undefined1  [16] FUN_102fbac88(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 102fbacb8; end: 102fbaceb;  */

void FUN_102fbacb8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 102fbacec; end: 102fbacff;  */

undefined1  [16] FUN_102fbacec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x102fbacfc;
  return auVar1;
}



/* Entry: 102fbad00; end: 102fbad13;  */

void FUN_102fbad00(void)

{
  FUN_102fba438();
  return;
}



/* Entry: 102fbad14; end: 102fbad5b;  */

void FUN_102fbad14(void)

{
  FUN_102fba9e8();
  return;
}



/* Entry: 102fbad5c; end: 102fbad5f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102fbad5c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102fbad60; end: 102fbad97;  */

uint FUN_102fbad60(long param_1,long param_2)

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
  func_0x000102fbdb7c();
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



/* Entry: 102fbad98; end: 102fbadff;  */

uint FUN_102fbad98(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_90 = unaff_x20[0xc];
  FUN_102fbc0d8(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 102fbae00; end: 102fbae9f;  */

/* WARNING: Possible PIC construction at 0x000102fbae4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fbae5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fbae50) */
/* WARNING: Removing unreachable block (ram,0x000102fbae60) */

void FUN_102fbae00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2e790 != -1) {
    func_0x000107c61568(0x112f2e790,0x102fba3f0);
  }
  uVar5 = uRam0000000113806960;
  uVar4 = uRam0000000113806958;
  uVar3 = uRam0000000113806950;
  uVar2 = uRam0000000113806948;
  uVar1 = uRam0000000113806940;
  *param_1 = uRam0000000113806938;
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



/* Entry: 102fbaea0; end: 102fbaedb;  */

void FUN_102fbaea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2e8a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2e8a0,&UNK_10db730f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102fbaedc; end: 102fbb007;  */

void FUN_102fbaedc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fbb008; end: 102fbb0b7;  */

uint FUN_102fbb008(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  FUN_102fbc0d8(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 102fbb0b8; end: 102fbb157;  */

/* WARNING: Possible PIC construction at 0x000102fbb104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fbb114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fbb108) */
/* WARNING: Removing unreachable block (ram,0x000102fbb118) */

void FUN_102fbb0b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2e7a8 != -1) {
    func_0x000107c61568(0x112f2e7a8,0x102fbb070);
  }
  uVar5 = uRam0000000113806990;
  uVar4 = uRam0000000113806988;
  uVar3 = uRam0000000113806980;
  uVar2 = uRam0000000113806978;
  uVar1 = uRam0000000113806970;
  *param_1 = uRam0000000113806968;
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



/* Entry: 102fbb158; end: 102fbb19f;  */

void FUN_102fbb158(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db73170,0x19,2);
  uRam00000001138069a0 = uStack_38;
  uRam0000000113806998 = uStack_40;
  uRam00000001138069b0 = uStack_28;
  uRam00000001138069a8 = uStack_30;
  uRam00000001138069c0 = uStack_18;
  uRam00000001138069b8 = uStack_20;
  return;
}



/* Entry: 102fbb1a0; end: 102fbb24b;  */

void FUN_102fbb1a0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x150);
      goto LAB_102fbb1dc;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_102fbb1dc:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x168);
  goto LAB_102fbb1dc;
}



/* Entry: 102fbb24c; end: 102fbb347;  */

void FUN_102fbb24c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar1 = unaff_x20[4];
  uVar2 = unaff_x20[5];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)uVar1;
      lVar6 = (long)uVar1 >> 0x20;
      goto LAB_102fbb304;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_102fbb324;
  }
  else {
    if (uVar4 != 2) goto LAB_102fbb324;
    lVar5 = *(long *)(uVar1 + 0x10);
    lVar6 = *(long *)(uVar1 + 0x18);
LAB_102fbb304:
    if (lVar5 == lVar6) goto LAB_102fbb324;
  }
  (**(code **)(param_3 + 0x78))(uVar1,uVar2,3,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_102fbb324:
  func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  return;
}



/* Entry: 102fbb348; end: 102fbb387;  */

void FUN_102fbb348(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 102fbb388; end: 102fbb3b7;  */

undefined1  [16] FUN_102fbb388(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 102fbb3b8; end: 102fbb3eb;  */

void FUN_102fbb3b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 102fbb3ec; end: 102fbb3ff;  */

undefined1  [16] FUN_102fbb3ec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x102fbb3fc;
  return auVar1;
}



/* Entry: 102fbb400; end: 102fbb427;  */

void FUN_102fbb400(void)

{
  FUN_102fbb1a0();
  return;
}



/* Entry: 102fbb428; end: 102fbb42b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102fbb428(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102fbb42c; end: 102fbb463;  */

uint FUN_102fbb42c(long param_1,long param_2)

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
  func_0x000102fbdb3c();
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



/* Entry: 102fbb464; end: 102fbb4ab;  */

uint FUN_102fbb464(undefined8 *param_1)

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
  FUN_102fbbecc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102fbb4ac; end: 102fbb54b;  */

/* WARNING: Possible PIC construction at 0x000102fbb4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fbb508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fbb4fc) */
/* WARNING: Removing unreachable block (ram,0x000102fbb50c) */

void FUN_102fbb4ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2e7b0 != -1) {
    func_0x000107c61568(0x112f2e7b0,FUN_102fbb158);
  }
  uVar5 = uRam00000001138069c0;
  uVar4 = uRam00000001138069b8;
  uVar3 = uRam00000001138069b0;
  uVar2 = uRam00000001138069a8;
  uVar1 = uRam00000001138069a0;
  *param_1 = uRam0000000113806998;
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



/* Entry: 102fbb54c; end: 102fbb587;  */

void FUN_102fbb54c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2e890;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2e890,&UNK_10db730f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102fbb588; end: 102fbb68b;  */

void FUN_102fbb588(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102fbb68c; end: 102fbb71b;  */

uint FUN_102fbb68c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_102fbbecc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102fbb71c; end: 102fbb7ef;  */

/* WARNING: Removing unreachable block (ram,0x000102fbb7ec) */

void FUN_102fbb71c(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000102fbc70c();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x160))(unaff_x20 + 0x10,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102fbb7f0; end: 102fbb8af;  */

void FUN_102fbb7f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000102fbc70c();
    (*pcVar2)(&lStack_50,1,&UNK_1105f7480,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((*(long *)(unaff_x20[2] + 0x10) == 0) ||
     ((**(code **)(param_3 + 0x100))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 102fbb8b0; end: 102fbb90f;  */

void FUN_102fbb8b0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 102fbb910; end: 102fbb937;  */

void FUN_102fbb910(void)

{
  FUN_102fbb71c();
  return;
}



/* Entry: 102fbb938; end: 102fbb96f;  */

uint FUN_102fbb938(long param_1,long param_2)

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
  FUN_102fbdafc();
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



/* Entry: 102fbb970; end: 102fbb9b7;  */

uint FUN_102fbb970(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_102fbbf58(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102fbb9b8; end: 102fbba57;  */

/* WARNING: Possible PIC construction at 0x000102fbba04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fbba14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fbba08) */
/* WARNING: Removing unreachable block (ram,0x000102fbba18) */

void FUN_102fbb9b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2e7c0 != -1) {
    func_0x000107c61568(0x112f2e7c0,0x102fbb6d4);
  }
  uVar5 = uRam00000001138069f0;
  uVar4 = uRam00000001138069e8;
  uVar3 = uRam00000001138069e0;
  uVar2 = uRam00000001138069d8;
  uVar1 = uRam00000001138069d0;
  *param_1 = uRam00000001138069c8;
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



/* Entry: 102fbba58; end: 102fbba6b;  */

void FUN_102fbba58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2e880;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2e880,&UNK_10db730e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102fbba6c; end: 102fbba9f;  */

void FUN_102fbba6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 102fbbaa0; end: 102fbbbc3;  */

void FUN_102fbbaa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = *(undefined1 *)(unaff_x20 + 1);
  uStack_48 = unaff_x20[2];
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fbbbc4; end: 102fbbc53;  */

uint FUN_102fbbbc4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_102fbbf58(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102fbbc54; end: 102fbbcf3;  */

/* WARNING: Possible PIC construction at 0x000102fbbca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fbbcb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fbbca4) */
/* WARNING: Removing unreachable block (ram,0x000102fbbcb4) */

void FUN_102fbbc54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2e7d8 != -1) {
    func_0x000107c61568(0x112f2e7d8,0x102fbbc0c);
  }
  uVar5 = uRam0000000113806a20;
  uVar4 = uRam0000000113806a18;
  uVar3 = uRam0000000113806a10;
  uVar2 = uRam0000000113806a08;
  uVar1 = uRam0000000113806a00;
  *param_1 = uRam00000001138069f8;
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



/* Entry: 102fbbcf4; end: 102fbbecb;  */

undefined8 FUN_102fbbcf4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  uVar6 = *param_1;
  uVar9 = param_1[2];
  uVar8 = param_1[3];
  uVar11 = param_1[4];
  uVar15 = param_1[7];
  uVar10 = *param_2;
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  uVar12 = param_2[4];
  if ((uVar15 >> 0x3d & 1) == 0) {
    uVar17 = param_2[7];
    if ((uVar17 >> 0x3d & 1) != 0) {
      return 0;
    }
    uVar2 = param_1[5];
    uVar7 = param_1[6];
    uVar3 = param_2[5];
    uVar5 = param_2[6];
    if (((uVar6 != uVar10) || (param_1[1] != param_2[1])) &&
       (func_0x000107c605b8(uVar6,param_1[1],uVar10,param_2[1],0), (uVar6 & 1) == 0)) {
      return 0;
    }
    if (((uVar9 != uVar1) || (uVar8 != uVar4)) &&
       (func_0x000107c605b8(uVar9,uVar8,uVar1,uVar4,0), (uVar9 & 1) == 0)) {
      return 0;
    }
    func_0x000100e25fcc(uVar11,uVar2,uVar12,uVar3);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    func_0x000100e25fcc(uVar7,uVar15,uVar5,uVar17);
  }
  else {
    if ((*(byte *)((long)param_2 + 0x3f) >> 5 & 1) == 0) {
      return 0;
    }
    if ((char)param_2[1] == '\x01') {
      if ((long)uVar10 < 2) {
        if (uVar10 == 0) {
          if (uVar6 != 0) {
            return 0;
          }
        }
        else if (uVar6 != 1) {
          return 0;
        }
      }
      else if (uVar10 == 2) {
        if (uVar6 != 2) {
          return 0;
        }
      }
      else if (uVar6 != 3) {
        return 0;
      }
    }
    else if (uVar6 != uVar10) {
      return 0;
    }
    lVar16 = *(long *)(uVar9 + 0x10);
    if (lVar16 != *(long *)(uVar1 + 0x10)) {
      return 0;
    }
    if (lVar16 != 0 && uVar9 != uVar1) {
      plVar14 = (long *)(uVar1 + 0x28);
      plVar13 = (long *)(uVar9 + 0x28);
      do {
        uVar9 = plVar13[-1];
        if ((uVar9 != plVar14[-1] || *plVar13 != *plVar14) &&
           (func_0x000107c605b8(), (uVar9 & 1) == 0)) {
          return 0;
        }
        plVar14 = plVar14 + 2;
        plVar13 = plVar13 + 2;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    func_0x000100e25fcc(uVar8,uVar11,uVar4,uVar12);
    uVar7 = uVar8;
  }
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 102fbbecc; end: 102fbbf57;  */

/* WARNING: Possible PIC construction at 0x000102fbbefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fbbf2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102fbbf30) */
/* WARNING: Removing unreachable block (ram,0x000102fbbf34) */
/* WARNING: Removing unreachable block (ram,0x000102fbbf00) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102fbbecc(undefined8 *param_1,byte *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  long lVar23;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar26;
  undefined8 uVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  
  puVar26 = &stack0xfffffffffffffff0;
  pbVar11 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar15 = *(byte **)param_2;
  pbVar16 = *(byte **)(param_2 + 8);
  if ((byte *)*param_1 != *(byte **)param_2 || (byte *)param_1[1] != *(byte **)(param_2 + 8)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar14,pbVar15,pbVar16,0);
    return pbVar11;
  }
  uVar12 = param_1[2];
  if ((uVar12 != *(ulong *)(param_2 + 0x10) || param_1[3] != *(long *)(param_2 + 0x18)) &&
     (func_0x000107c605b8(), (uVar12 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar24 = (byte *)param_1[5];
  lVar23 = *(long *)(param_2 + 0x20);
  uVar12 = *(ulong *)(param_2 + 0x28);
  uVar27 = 0x102fbbf30;
  puVar7 = &stack0xffffffffffffffe0;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = param_1;
    *(byte **)(puVar7 + -0x18) = param_2;
    *(undefined1 **)(puVar7 + -0x10) = puVar26;
    *(undefined8 *)(puVar7 + -8) = uVar27;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar12 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar12 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar12 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar18,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar12 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar24;
            puVar7[-0x67] = (char)((ulong)pbVar24 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar24 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar24 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar24 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar24 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar24;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            param_2 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar25 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          param_2 = pbVar10;
          unaff_x25 = pbVar24;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        param_1 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar23,uVar12);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar12;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar19 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(undefined8 **)(puVar7 + -0xa0) = param_1;
    *(byte **)(puVar7 + -0x98) = param_2;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar22 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar23 = *(long *)pbVar13;
          uVar27 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar27);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar16 = *(byte **)(pbVar13 + 0x10);
        lVar23 = *(long *)pbVar13;
        uVar27 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar27);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar10;
        pbVar14 = pbVar24;
        if ((pbVar10 == pbVar15) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar16 = *(byte **)(pbVar13 + 8);
        lVar23 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar10 == pbVar16)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar23);
            func_0x000107c61174();
            pbVar11 = pbVar22;
            func_0x000107c60118();
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(lVar23);
            pbVar22 = pbVar11;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar16 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar10 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar14 = pbVar22, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar16 = *(byte **)(pbVar13 + 0x18),
           pbVar24 == *(byte **)(pbVar13 + 0x10) && pbVar22 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar13 + 0x10);
      lVar23 = *(long *)(pbVar13 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar10;
        pbVar14 = pbVar24;
        if ((pbVar10 != pbVar15) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar13 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar13 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar28 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar13 + 0x20);
        lVar23 = *(long *)(pbVar13 + 0x18);
        bVar28 = pbVar13[8] | (byte)lVar23;
        bVar29 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
        bVar30 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar31 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar32 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar33 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar34 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar35 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar36 = pbVar13[0x10] | (byte)lVar25;
        bVar37 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar38 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar39 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar40 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar41 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar42 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar43 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar13 + 0x20);
      lVar23 = *(long *)(pbVar13 + 0x18);
      bVar28 = pbVar13[8] | (byte)lVar23;
      bVar29 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
      bVar30 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar31 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar32 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar33 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar34 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar35 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar36 = pbVar13[0x10] | (byte)lVar25;
      bVar37 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar38 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar39 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar40 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar41 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar42 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar43 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar13 + 8);
    uVar12 = *(ulong *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
    uVar27 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar27);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    puVar26 = *(undefined1 **)(puVar7 + -0x90);
    uVar27 = *(undefined8 *)(puVar7 + -0x88);
    param_1 = *(undefined8 **)(puVar7 + -0xa0);
    param_2 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102fbbf58; end: 102fbc063;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fbc044: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102fbc048) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102fbbf58(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  undefined8 *puVar28;
  byte *unaff_x23;
  undefined8 *puVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 < 2) {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 2) {
      if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 3) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar22 = param_1[2];
  lVar23 = param_2[2];
  lVar19 = *(long *)(lVar22 + 0x10);
  if (lVar19 != *(long *)(lVar23 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar19 != 0 && lVar22 != lVar23) {
    puVar28 = (undefined8 *)(lVar23 + 0x28);
    puVar29 = (undefined8 *)(lVar22 + 0x28);
    do {
      pbVar12 = (byte *)puVar29[-1];
      pbVar14 = (byte *)*puVar29;
      pbVar15 = (byte *)puVar28[-1];
      pbVar17 = (byte *)*puVar28;
      if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
      goto code_r0x000107c605b8;
      puVar28 = puVar28 + 2;
      puVar29 = puVar29 + 2;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  pbVar10 = (byte *)param_1[3];
  pbVar27 = (byte *)param_1[4];
  lVar19 = param_2[3];
  uVar16 = param_2[4];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar27 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar24 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar19 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
        if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar27;
            puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar27;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar22 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar27;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar26 = *(byte **)(pbVar9 + 0x18);
    bVar30 = pbVar9[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar19 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar19,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar27;
        if ((pbVar10 == pbVar15) && (pbVar27 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar19 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar26 != (byte *)0x0) {
            if (lVar19 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar19);
            func_0x000107c61174();
            pbVar12 = pbVar26;
            func_0x000107c60118();
            func_0x000107c61170(pbVar26);
            func_0x000107c61170(lVar19);
            pbVar26 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar19 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar22 = *(long *)(pbVar9 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar27, pbVar14 = pbVar26, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar27 == *(byte **)(pbVar13 + 0x10) && pbVar26 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar19 = *(long *)(pbVar13 + 0x20);
      if (pbVar27 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar27;
        if ((pbVar10 != pbVar15) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
      }
      if (lVar22 != 0) {
        if (lVar19 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar26 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar26,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar26 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar30 != 5) {
      if ((((pbVar26 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar22 == 0) && pbVar27 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar13 + 0x20);
        lVar19 = *(long *)(pbVar13 + 0x18);
        bVar30 = pbVar13[8] | (byte)lVar19;
        bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
        bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
        bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
        bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
        bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
        bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
        bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
        bVar38 = pbVar13[0x10] | (byte)lVar22;
        bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar3[1] = bVar31;
        auVar3[0] = bVar30;
        auVar3[2] = bVar32;
        auVar3[3] = bVar33;
        auVar3[4] = bVar34;
        auVar3[5] = bVar35;
        auVar3[6] = bVar36;
        auVar3[7] = bVar37;
        auVar3[8] = bVar38;
        auVar3[9] = bVar39;
        auVar3[10] = bVar40;
        auVar3[0xb] = bVar41;
        auVar3[0xc] = bVar42;
        auVar3[0xd] = bVar43;
        auVar3[0xe] = bVar44;
        auVar3[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar3,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar26 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar13 + 0x20);
      lVar19 = *(long *)(pbVar13 + 0x18);
      bVar30 = pbVar13[8] | (byte)lVar19;
      bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
      bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
      bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
      bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
      bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
      bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
      bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
      bVar38 = pbVar13[0x10] | (byte)lVar22;
      bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar31;
      auVar1[0] = bVar30;
      auVar1[2] = bVar32;
      auVar1[3] = bVar33;
      auVar1[4] = bVar34;
      auVar1[5] = bVar35;
      auVar1[6] = bVar36;
      auVar1[7] = bVar37;
      auVar1[8] = bVar38;
      auVar1[9] = bVar39;
      auVar1[10] = bVar40;
      auVar1[0xb] = bVar41;
      auVar1[0xc] = bVar42;
      auVar1[0xd] = bVar43;
      auVar1[0xe] = bVar44;
      auVar1[0xf] = bVar45;
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar46 = NEON_ext(auVar1,auVar2,8,1);
      lVar19 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar19 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar22 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar22,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102fbc064; end: 102fbc097;  */

undefined1  [16] FUN_102fbc064(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = param_1;
  if (param_1 == 10) {
    uVar2 = 3;
  }
  uVar3 = param_1;
  if (2 < param_1) {
    uVar3 = uVar2;
  }
  uVar1 = 1;
  if (2 < param_1) {
    uVar1 = (uint)(param_1 == 10);
  }
  auVar4._8_4_ = uVar1;
  auVar4._0_8_ = uVar3;
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Entry: 102fbc098; end: 102fbc0d7;  */

void FUN_102fbc098(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db72ce8;
  func_0x000107c61520(&DAT_10db72ce8,&UNK_1105f71b0);
  puRam0000000112f2e780 = puVar1;
  return;
}



/* Entry: 102fbc0d8; end: 102fbc4bf;  */

uint FUN_102fbc0d8(long *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_280 [64];
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
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
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  lVar5 = *param_1;
  if ((char)param_1[1] == '\x01') {
    lVar5 = *(long *)(&UNK_10db73270 + lVar5 * 8);
  }
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar5 != 0) {
          return 0;
        }
      }
      else if (lVar5 != 1) {
        return 0;
      }
    }
    else if (lVar6 == 2) {
      if (lVar5 != 2) {
        return 0;
      }
    }
    else if (lVar5 != 10) {
      return 0;
    }
  }
  else if (lVar5 != lVar6) {
    return 0;
  }
  lStack_f8 = param_1[3];
  lStack_100 = param_1[2];
  lStack_e8 = param_1[5];
  lStack_f0 = param_1[4];
  lStack_1b8 = param_1[3];
  uVar16 = param_1[2];
  lVar5 = param_1[5];
  uVar17 = param_1[4];
  uVar14 = param_1[7];
  uVar11 = param_1[6];
  lStack_c8 = param_1[9];
  lStack_d0 = param_1[8];
  lStack_d8 = param_1[7];
  lStack_e0 = param_1[6];
  lStack_138 = param_2[3];
  lStack_140 = param_2[2];
  lStack_128 = param_2[5];
  lStack_130 = param_2[4];
  lStack_118 = param_2[7];
  lStack_120 = param_2[6];
  lStack_108 = param_2[9];
  lStack_110 = param_2[8];
  lStack_178 = param_2[3];
  lStack_180 = param_2[2];
  lStack_168 = param_2[5];
  lStack_170 = param_2[4];
  uVar9 = param_1[9];
  uVar7 = param_1[8];
  uStack_158 = param_2[7];
  lStack_160 = param_2[6];
  uStack_148 = param_2[9];
  lStack_150 = param_2[8];
  uStack_1c0 = uVar16;
  uStack_1b0 = uVar17;
  lStack_1a8 = lVar5;
  uStack_1a0 = uVar11;
  uStack_198 = uVar14;
  uStack_190 = uVar7;
  uStack_188 = uVar9;
  if (((uVar14 & uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if (((uStack_158 & uStack_148 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
LAB_102fbc244:
      uStack_240 = uVar16;
      lStack_238 = lStack_1b8;
      uStack_230 = uVar17;
      lStack_228 = lVar5;
      uStack_220 = uVar11;
      uStack_218 = uVar14;
      uStack_210 = uVar7;
      uStack_208 = uVar9;
      lStack_200 = lStack_180;
      lStack_1f8 = lStack_178;
      lStack_1f0 = lStack_170;
      lStack_1e8 = lStack_168;
      lStack_1e0 = lStack_160;
      uStack_1d8 = uStack_158;
      lStack_1d0 = lStack_150;
      uStack_1c8 = uStack_148;
      FUN_102fb9ab4(&lStack_100,auStack_280);
      FUN_102fb9ab4(&lStack_140,auStack_280);
      uVar3 = 0x112f2e8c0;
      puVar4 = &UNK_10db731f8;
      puVar2 = &uStack_240;
      goto LAB_102fbc41c;
    }
    lStack_238 = param_1[3];
    uStack_240 = param_1[2];
    lStack_228 = param_1[5];
    uStack_230 = param_1[4];
    uStack_218 = param_1[7];
    uStack_220 = param_1[6];
    uStack_208 = param_1[9];
    uStack_210 = param_1[8];
    FUN_102fb9ab4(&lStack_100,auStack_280);
    FUN_102fb9ab4(&lStack_140,auStack_280);
    puVar2 = &uStack_240;
LAB_102fbc1f8:
    FUN_102fbdbfc(puVar2,0x112f2e690,&UNK_10db729d0);
LAB_102fbc1fc:
    if (((*(byte *)(param_1 + 10) ^ *(byte *)(param_2 + 10)) & 1) == 0) {
      lVar5 = param_1[0xb];
      func_0x000100e25fcc(lVar5,param_1[0xc],param_2[0xb],param_2[0xc]);
      uVar1 = (uint)lVar5;
      goto LAB_102fbc424;
    }
  }
  else {
    if (((uStack_158 & uStack_148 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0)
    goto LAB_102fbc244;
    lStack_238 = param_2[3];
    uStack_240 = param_2[2];
    lVar6 = param_2[5];
    uVar12 = param_2[4];
    uVar10 = param_2[7];
    uVar8 = param_2[6];
    uVar15 = param_2[9];
    uVar13 = param_2[8];
    uStack_230 = uVar12;
    lStack_228 = lVar6;
    uStack_220 = uVar8;
    uStack_218 = uVar10;
    uStack_210 = uVar13;
    uStack_208 = uVar15;
    if ((uVar9 >> 0x3d & 1) == 0) {
      if ((((uVar15 >> 0x3d & 1) != 0) ||
          (((uVar16 != uStack_240 || (lStack_1b8 != lStack_238)) &&
           (func_0x000107c605b8(uVar16,lStack_1b8,uStack_240,lStack_238,0), (uVar16 & 1) == 0)))) ||
         (((uVar17 != uVar12 || (lVar5 != lVar6)) &&
          (func_0x000107c605b8(uVar17,lVar5,uVar12,lVar6,0), (uVar17 & 1) == 0))))
      goto LAB_102fbc3d8;
      FUN_102fb9ab4(&lStack_100,auStack_280);
      FUN_102fb9ab4(&lStack_140,auStack_280);
      func_0x000100e25fcc(uVar11,uVar14,uVar8,uVar10);
      if ((uVar11 & 1) == 0) goto LAB_102fbc3f0;
      func_0x000100e25fcc(uVar7,uVar9,uVar13,uVar15);
      FUN_102fbdbfc(&uStack_240,0x112f2e690,&UNK_10db729d0);
      if ((uVar7 & 1) != 0) {
        puVar2 = &uStack_1c0;
        goto LAB_102fbc1f8;
      }
    }
    else {
      uStack_b0 = (undefined1)lStack_1b8;
      uStack_b8 = uVar16;
      uStack_a8 = uVar17;
      lStack_a0 = lVar5;
      uStack_98 = uVar11;
      if ((uVar15 >> 0x3d & 1) != 0) {
        uStack_88 = (undefined1)lStack_238;
        uStack_90 = uStack_240;
        uStack_80 = uVar12;
        lStack_78 = lVar6;
        uStack_70 = uVar8;
        FUN_102fb9ab4(&lStack_100,auStack_280);
        FUN_102fb9ab4(&lStack_140,auStack_280);
        puVar2 = &uStack_b8;
        FUN_102fbbf58(puVar2,&uStack_90);
        FUN_102fbdbfc(&uStack_240,0x112f2e690,&UNK_10db729d0);
        FUN_102fbdbfc(&uStack_1c0,0x112f2e690,&UNK_10db729d0);
        if (((ulong)puVar2 & 1) != 0) goto LAB_102fbc1fc;
        goto LAB_102fbc420;
      }
LAB_102fbc3d8:
      FUN_102fb9ab4(&lStack_100,auStack_280);
      FUN_102fb9ab4(&lStack_140,auStack_280);
LAB_102fbc3f0:
      FUN_102fbdbfc(&uStack_240,0x112f2e690,&UNK_10db729d0);
    }
    uVar3 = 0x112f2e690;
    puVar4 = &UNK_10db729d0;
    puVar2 = &uStack_1c0;
LAB_102fbc41c:
    FUN_102fbdbfc(puVar2,uVar3,puVar4);
  }
LAB_102fbc420:
  uVar1 = 0;
LAB_102fbc424:
  return uVar1 & 1;
}



/* Entry: 102fbc4c0; end: 102fbc60b;  */

uint FUN_102fbc4c0(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_198 [104];
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
  
  if ((*param_1 != *param_2) || (param_1[1] != param_2[1])) {
    return 0;
  }
  lVar4 = param_1[2];
  lVar3 = param_2[2];
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 == *(long *)(lVar3 + 0x10)) {
    if (lVar5 != 0 && lVar4 != lVar3) {
      puVar6 = (undefined8 *)(lVar4 + 0x20);
      puVar7 = (undefined8 *)(lVar3 + 0x20);
      do {
        uStack_128 = puVar6[1];
        uStack_130 = *puVar6;
        uStack_118 = puVar6[3];
        uStack_120 = puVar6[2];
        uStack_108 = puVar6[5];
        uStack_110 = puVar6[4];
        uStack_f8 = puVar6[7];
        uStack_100 = puVar6[6];
        uStack_e8 = puVar6[9];
        uStack_f0 = puVar6[8];
        uStack_d8 = puVar6[0xb];
        uStack_e0 = puVar6[10];
        uStack_d0 = puVar6[0xc];
        uStack_78 = puVar7[9];
        uStack_80 = puVar7[8];
        uStack_68 = puVar7[0xb];
        uStack_70 = puVar7[10];
        uStack_60 = puVar7[0xc];
        uStack_88 = puVar7[7];
        uStack_90 = puVar7[6];
        uStack_b8 = puVar7[1];
        uStack_c0 = *puVar7;
        uStack_a8 = puVar7[3];
        uStack_b0 = puVar7[2];
        uStack_98 = puVar7[5];
        uStack_a0 = puVar7[4];
        FUN_102fb6c28(&uStack_130,auStack_198);
        FUN_102fb6c28(&uStack_c0,auStack_198);
        puVar2 = &uStack_130;
        FUN_102fbc0d8(puVar2,&uStack_c0);
        func_0x000102fb6c64(&uStack_c0);
        func_0x000102fb6c64(&uStack_130);
        if (((ulong)puVar2 & 1) == 0) goto LAB_102fbc5e8;
        puVar7 = puVar7 + 0xd;
        puVar6 = puVar6 + 0xd;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    lVar5 = param_1[3];
    func_0x000100e25fcc(lVar5,param_1[4],param_2[3],param_2[4]);
    uVar1 = (uint)lVar5;
  }
  else {
LAB_102fbc5e8:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 102fbc60c; end: 102fbc78b;  */

void FUN_102fbc60c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72c80;
  func_0x000107c61520(&UNK_10db72c80,&UNK_1105f7128);
  puRam0000000112f2e788 = puVar1;
  return;
}



/* Entry: 102fbc78c; end: 102fbc79f;  */

void FUN_102fbc78c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102fbc7a0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102fbc7e0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102fbc7a0; end: 102fbc84b;  */

void FUN_102fbc7a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e7e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72aa8;
  func_0x000107c61520(&UNK_10db72aa8,&UNK_1105f72e0);
  puRam0000000112f2e7e0 = puVar1;
  return;
}



/* Entry: 102fbc84c; end: 102fbc84f;  */

void FUN_102fbc84c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72ae8;
  func_0x000107c61520(&UNK_10db72ae8,&UNK_1105f72e0);
  puRam0000000112f2e800 = puVar1;
  return;
}



/* Entry: 102fbc850; end: 102fbc88f;  */

void FUN_102fbc850(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72ae8;
  func_0x000107c61520(&UNK_10db72ae8,&UNK_1105f72e0);
  puRam0000000112f2e800 = puVar1;
  return;
}



/* Entry: 102fbc890; end: 102fbc8a3;  */

void FUN_102fbc890(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102fbc8a4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102fbc8e4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102fbc8a4; end: 102fbc94f;  */

void FUN_102fbc8a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72ba8;
  func_0x000107c61520(&UNK_10db72ba8,&UNK_1105f7480);
  puRam0000000112f2e808 = puVar1;
  return;
}



/* Entry: 102fbc950; end: 102fbc993;  */

void FUN_102fbc950(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102fbc994; end: 102fbc997;  */

void FUN_102fbc994(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72be8;
  func_0x000107c61520(&UNK_10db72be8,&UNK_1105f7480);
  puRam0000000112f2e828 = puVar1;
  return;
}



/* Entry: 102fbc998; end: 102fbc9d7;  */

void FUN_102fbc998(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72be8;
  func_0x000107c61520(&UNK_10db72be8,&UNK_1105f7480);
  puRam0000000112f2e828 = puVar1;
  return;
}



/* Entry: 102fbc9d8; end: 102fbc9fb;  */

void FUN_102fbc9d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102fbc9fc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102fbc9fc; end: 102fbca3b;  */

void FUN_102fbc9fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72c58;
  func_0x000107c61520(&UNK_10db72c58,&UNK_1105f7128);
  puRam0000000112f2e830 = puVar1;
  return;
}



/* Entry: 102fbca3c; end: 102fbca53;  */

void FUN_102fbca3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102fbc60c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102fb3efc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102fbca54; end: 102fbca93;  */

void FUN_102fbca54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72cc0;
  func_0x000107c61520(&UNK_10db72cc0,&UNK_1105f7128);
  puRam0000000112f2e838 = puVar1;
  return;
}



/* Entry: 102fbca94; end: 102fbcab7;  */

void FUN_102fbca94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102fbcab8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102fbcab8; end: 102fbcaf7;  */

void FUN_102fbcab8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72d30;
  func_0x000107c61520(&UNK_10db72d30,&UNK_1105f71b0);
  puRam0000000112f2e840 = puVar1;
  return;
}



/* Entry: 102fbcaf8; end: 102fbcb0f;  */

void FUN_102fbcaf8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102fbc68c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102fbc098();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102fbcb10; end: 102fbcb4f;  */

void FUN_102fbcb10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72d98;
  func_0x000107c61520(&UNK_10db72d98,&UNK_1105f71b0);
  puRam0000000112f2e848 = puVar1;
  return;
}



/* Entry: 102fbcb50; end: 102fbcb73;  */

void FUN_102fbcb50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102fbcb74();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102fbcb74; end: 102fbcbb3;  */

void FUN_102fbcb74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72e18;
  func_0x000107c61520(&UNK_10db72e18,&UNK_1105f7358);
  puRam0000000112f2e850 = puVar1;
  return;
}



/* Entry: 102fbcbb4; end: 102fbcbc7;  */

void FUN_102fbcbb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102fbc6cc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102fbcbc8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102fbcbc8; end: 102fbcc07;  */

void FUN_102fbcbc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db72dd0;
  func_0x000107c61520(&DAT_10db72dd0,&UNK_1105f7358);
  puRam0000000112f2e858 = puVar1;
  return;
}



/* Entry: 102fbcc08; end: 102fbcc0b;  */

void FUN_102fbcc08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72e80;
  func_0x000107c61520(&UNK_10db72e80,&UNK_1105f7358);
  puRam0000000112f2e860 = puVar1;
  return;
}



/* Entry: 102fbcc0c; end: 102fbcc4b;  */

void FUN_102fbcc0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72e80;
  func_0x000107c61520(&UNK_10db72e80,&UNK_1105f7358);
  puRam0000000112f2e860 = puVar1;
  return;
}



/* Entry: 102fbcc4c; end: 102fbcc6f;  */

void FUN_102fbcc4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102fbcc70();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102fbcc70; end: 102fbccaf;  */

void FUN_102fbcc70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72ef0;
  func_0x000107c61520(&UNK_10db72ef0,&UNK_1105f73e0);
  puRam0000000112f2e868 = puVar1;
  return;
}



/* Entry: 102fbccb0; end: 102fbccc3;  */

void FUN_102fbccb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102fbc74c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102fbccf4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102fbccc4; end: 102fbccf3;  */

void FUN_102fbccc4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102fbccf4; end: 102fbcd33;  */

void FUN_102fbccf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db72ea8;
  func_0x000107c61520(&DAT_10db72ea8,&UNK_1105f73e0);
  puRam0000000112f2e870 = puVar1;
  return;
}



/* Entry: 102fbcd34; end: 102fbcd37;  */

void FUN_102fbcd34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72f58;
  func_0x000107c61520(&UNK_10db72f58,&UNK_1105f73e0);
  puRam0000000112f2e878 = puVar1;
  return;
}



/* Entry: 102fbcd38; end: 102fbcd77;  */

void FUN_102fbcd38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db72f58;
  func_0x000107c61520(&UNK_10db72f58,&UNK_1105f73e0);
  puRam0000000112f2e878 = puVar1;
  return;
}



/* Entry: 102fbcd78; end: 102fbce37;  */

undefined8 * FUN_102fbcd78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  uVar1 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 102fbce38; end: 102fbce83;  */

undefined8 * FUN_102fbce38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 102fbce84; end: 102fbce93;  */

undefined1  [16] FUN_102fbce84(void)

{
  return ZEXT816(0x1105f7128);
}



/* Entry: 102fbce94; end: 102fbcf0b;  */

/* WARNING: Possible PIC construction at 0x000102fbced8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fbcedc) */

void FUN_102fbce94(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,ulong param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((param_8 >> 0x3d & 1) == 0) {
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    unaff_x30 = 0x102fbcedc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    param_4 = param_5;
    unaff_x19 = param_8;
    unaff_x20 = param_5;
    unaff_x29 = puVar1;
  }
  else {
    func_0x000107c61434(param_3);
    param_6 = param_5;
  }
  uVar2 = (uint)(param_6 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c6157c(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_6 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102fbcf0c; end: 102fbcf57;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fbcf0c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((*(ulong *)(param_1 + 0x38) & *(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) &
      0x3000000000000000) != 0) {
    FUN_102fbcf58(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                  *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30),*(ulong *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40));
  }
  uVar1 = *(ulong *)(param_1 + 0x58);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x60) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x60) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102fbcf58; end: 102fbcfcf;  */

/* WARNING: Possible PIC construction at 0x000102fbcf9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fbcfa0) */

void FUN_102fbcf58(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,ulong param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((param_8 >> 0x3d & 1) == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_4);
    unaff_x30 = 0x102fbcfa0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    param_4 = param_5;
    unaff_x19 = param_8;
    unaff_x20 = param_5;
    unaff_x29 = puVar1;
  }
  else {
    func_0x000107c6142c(param_3);
    param_6 = param_5;
  }
  uVar2 = (uint)(param_6 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_6 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102fbcfd0; end: 102fbd22f;  */

undefined8 * FUN_102fbcfd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar3 = param_2[7];
  uVar2 = param_2[9];
  if (((uVar3 & uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar6 = param_2[2];
    uVar8 = param_2[5];
    uVar7 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar6;
    param_1[5] = uVar8;
    param_1[4] = uVar7;
    uVar6 = param_2[6];
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar6;
    param_1[9] = uVar8;
    param_1[8] = uVar7;
  }
  else {
    uVar6 = param_2[2];
    uVar8 = param_2[3];
    uVar7 = param_2[4];
    uVar1 = param_2[5];
    uVar4 = param_2[6];
    uVar5 = param_2[8];
    FUN_102fbce94(uVar6,uVar8,uVar7,uVar1,uVar4,uVar3,uVar5,uVar2);
    param_1[2] = uVar6;
    param_1[3] = uVar8;
    param_1[4] = uVar7;
    param_1[5] = uVar1;
    param_1[6] = uVar4;
    param_1[7] = uVar3;
    param_1[8] = uVar5;
    param_1[9] = uVar2;
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar6 = param_2[0xb];
  uVar7 = param_2[0xc];
  func_0x00010006c00c(uVar6,uVar7);
  param_1[0xb] = uVar6;
  param_1[0xc] = uVar7;
  return param_1;
}



/* Entry: 102fbd230; end: 102fbd327;  */

undefined8 * FUN_102fbd230(undefined8 *param_1)

{
  FUN_102fbcf58(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7]);
  return param_1;
}



/* Entry: 102fbd328; end: 102fbd3ff;  */

int FUN_102fbd328(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 0x14)) {
    uVar1 = *(byte *)(param_1 + 0x14) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102fbd400; end: 102fbd51b;  */

undefined8 * FUN_102fbd400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  FUN_102fbce94(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  return param_1;
}



/* Entry: 102fbd51c; end: 102fbd567;  */

undefined8 * FUN_102fbd51c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  FUN_102fbcf58(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  return param_1;
}



/* Entry: 102fbd568; end: 102fbd6a3;  */

int FUN_102fbd568(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xf;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  uVar1 = (uVar1 >> 0x1d & 1 |
          (uVar1 >> 0x1a & 4 | (uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x3c) & 3) << 1) ^ 0xf
  ;
  if (0xd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102fbd6a4; end: 102fbd6db;  */

/* WARNING: Possible PIC construction at 0x000102fbd6c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fbd6cc) */

void FUN_102fbd6a4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102fbd6dc; end: 102fbd753;  */

undefined8 * FUN_102fbd6dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 102fbd754; end: 102fbd7f7;  */

undefined8 * FUN_102fbd754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[4];
  uVar3 = param_1[5];
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 102fbd7f8; end: 102fbd85b;  */

undefined8 * FUN_102fbd7f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102fbd85c; end: 102fbd903;  */

int FUN_102fbd85c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



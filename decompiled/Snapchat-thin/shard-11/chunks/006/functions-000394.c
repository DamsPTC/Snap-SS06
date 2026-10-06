/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108728df0; end: 108728f97;  */

undefined1 FUN_108728df0(long param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = *(undefined1 *)(param_1 + 0x298);
  func_0x000107c29e74();
  uVar1 = 0;
  if (param_3 == 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108728f98; end: 108728ffb;  */

byte FUN_108728f98(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_170 [312];
  byte bStack_38;
  
  func_0x000100867b68();
  func_0x00010872a2ec();
  func_0x00010872a2e0();
  func_0x00010872a2b8();
  FUN_108706f8c(auStack_170);
  if ((bStack_38 & 1) != 0) {
    FUN_108866468(*unaff_x20);
  }
  return bStack_38;
}



/* Entry: 108728ffc; end: 1087290d3;  */

void FUN_108728ffc(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_618 [888];
  undefined1 auStack_2a0 [464];
  byte bStack_d0;
  undefined1 auStack_c8 [144];
  byte bStack_38;
  
  FUN_10886618c(auStack_618,*param_2);
  FUN_108705ca4(auStack_c8,auStack_618);
  func_0x00010872a29c();
  if ((bStack_38 & 1) == 0) {
    *param_1 = 0;
    param_1[0x378] = 0;
  }
  else {
    func_0x00010872a2c8(auStack_2a0,*param_2,param_3);
    if ((bStack_d0 & 1) == 0) {
      *param_1 = 0;
      param_1[0x378] = 0;
    }
    else {
      FUN_108729688(auStack_618,param_2,auStack_c8,auStack_2a0);
      FUN_108729bc4(param_1,auStack_618);
      func_0x00010872a2d0();
    }
    func_0x00010872a2c0();
  }
  FUN_108706c90(auStack_c8);
  return;
}



/* Entry: 1087290d4; end: 10872929f;  */

void FUN_1087290d4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [16];
  byte bStack_148;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  long lStack_88;
  char cStack_80;
  undefined1 auStack_78 [56];
  long lStack_40;
  undefined4 uStack_38;
  
  FUN_1087292a0(auStack_158,param_1,param_2,1);
  FUN_1087070f0(auStack_c0,auStack_158);
  FUN_108706c90(auStack_158);
  func_0x000107c279d4(auStack_178,auStack_78);
  if ((*(uint *)(param_3 + 0x10) & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
  }
  if (lStack_a0 < lVar5) {
    ppuVar3 = &PTR_PTR_113278360;
    if (*(undefined ***)(param_3 + 0x38) != (undefined **)0x0) {
      ppuVar3 = *(undefined ***)(param_3 + 0x38);
    }
    puVar6 = ppuVar3[5];
    uStack_90 = 0 < (long)puVar6;
    uStack_98 = (ulong)puVar6 & ((long)puVar6 >> 0x3f ^ 0xffffffffffffffffU);
  }
  lVar1 = lVar5;
  if (lVar5 <= lStack_a0) {
    lVar1 = lStack_a0;
  }
  lVar2 = lStack_88;
  if (cStack_80 == '\0') {
    lVar2 = 0;
  }
  if (lVar2 < *(long *)(param_3 + 0x98)) {
    cStack_80 = '\x01';
    lStack_88 = *(long *)(param_3 + 0x98);
  }
  if (((*(uint *)(param_3 + 0x10) >> 2 & 1) != 0) && (lStack_a0 < lVar5)) {
    lStack_a0 = lVar1;
    FUN_1088edaf8(auStack_158,0,*(undefined8 *)(param_3 + 0x48));
    if ((bStack_148 & 1) != 0) {
      ppuVar3 = &PTR_PTR_113278268;
      if (*(undefined ***)(param_3 + 0x48) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(param_3 + 0x48);
      }
      ppuVar4 = &PTR_PTR_11326cb58;
      if ((undefined **)ppuVar3[6] != (undefined **)0x0) {
        ppuVar4 = (undefined **)ppuVar3[6];
      }
      func_0x000107c29ee0(auStack_190,ppuVar4);
      FUN_10869026c(auStack_78,auStack_190);
      func_0x000107c27914(auStack_190);
    }
    FUN_1088edbcc(auStack_158);
    lVar1 = lStack_a0;
  }
  lStack_a0 = lVar1;
  if (lStack_40 < *(long *)(param_3 + 0x80)) {
    uStack_38 = 1;
    lStack_40 = *(long *)(param_3 + 0x80);
  }
  FUN_1088663a4(*param_1,auStack_c0);
  func_0x000107c279dc(auStack_178);
  FUN_108706cb0(auStack_c0);
  return;
}



/* Entry: 1087292a0; end: 10872934f;  */

void FUN_1087292a0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auStack_170 [168];
  undefined1 auStack_c8 [144];
  char cStack_38;
  
  func_0x00010872a2ec();
  func_0x00010872a2e0();
  FUN_108706f8c(auStack_170);
  if (cStack_38 == '\x01') {
    func_0x000108729be0(param_1,auStack_c8);
    func_0x00010872a2b8();
  }
  else {
    func_0x00010872a2b8();
    if ((param_4 & 1) == 0) {
      *param_1 = 0;
      param_1[0x90] = 0;
    }
    else {
      FUN_108729414(auStack_170);
      FUN_1087072d4(param_1,auStack_170);
      FUN_108706cb0(auStack_170);
    }
  }
  return;
}



/* Entry: 108729350; end: 108729413;  */

void FUN_108729350(undefined8 *param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined1 auStack_168 [144];
  undefined1 auStack_d8 [128];
  long lStack_58;
  uint uStack_50;
  byte bStack_48;
  
  FUN_1087292a0(auStack_d8,param_1,param_2,0);
  if ((bStack_48 & 1) == 0) {
    FUN_108729414(auStack_168);
    FUN_108729464(auStack_d8,auStack_168);
    FUN_108706cb0(auStack_168);
    lStack_58 = param_4 / 1000;
    uStack_50 = (uint)(param_3 != 2);
    FUN_1088663a4(*param_1,auStack_d8);
  }
  FUN_108706c90(auStack_d8);
  return;
}



/* Entry: 108729414; end: 108729463;  */

void FUN_108729414(long param_1)

{
  func_0x000107c27994();
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}



/* Entry: 108729464; end: 108729497;  */

long FUN_108729464(long param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_108707054();
  }
  else {
    func_0x0001087070d4();
  }
  return param_1;
}



/* Entry: 108729498; end: 1087295d3;  */

void FUN_108729498(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_5b8 [888];
  undefined1 auStack_240 [464];
  char cStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  iVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  do {
    FUN_10886623c(auStack_5b8,*param_2,2,500,iVar3);
    FUN_1087295d4(auStack_240,auStack_5b8);
    FUN_108729ac0(&lStack_68,auStack_240);
    func_0x000108729b54(auStack_240);
    func_0x00010872a29c();
    lVar2 = lStack_60;
    for (lVar4 = lStack_68; lVar4 != lVar2; lVar4 = lVar4 + 0x90) {
      func_0x00010872a2c8(auStack_240,*param_2,lVar4);
      if (cStack_70 == '\x01') {
        FUN_108729688(auStack_5b8,param_2,lVar4,auStack_240);
        func_0x000107c27b14(param_1,auStack_5b8);
        func_0x00010872a2d0();
      }
      func_0x00010872a2c0();
    }
    uVar1 = (lStack_60 - lStack_68) / 0x90;
    iVar3 = iVar3 + (int)uVar1;
  } while (499 < uVar1);
  func_0x000108729b54(&lStack_68);
  return;
}



/* Entry: 1087295d4; end: 108729687;  */

void FUN_1087295d4(undefined8 param_1)

{
  undefined1 auStack_2b0 [160];
  undefined1 auStack_210 [160];
  undefined1 auStack_170 [160];
  undefined1 auStack_d0 [160];
  
  FUN_108707144(auStack_170);
  FUN_108729c6c(auStack_d0,auStack_170);
  _bzero(auStack_2b0,0xa0);
  FUN_108729c6c(auStack_210,auStack_2b0);
  FUN_108729d10(param_1,auStack_d0,auStack_210);
  func_0x00010872a2d8();
  func_0x00010872a270(auStack_2b0);
  func_0x00010872a2b0();
  func_0x00010872a270(auStack_170);
  return;
}



/* Entry: 108729688; end: 1087297bf;  */

void FUN_108729688(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  uint uStack_c8;
  char cStack_c0;
  uint auStack_a0 [3];
  undefined1 uStack_94;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  FUN_108729870(auStack_90);
  auStack_a0[0] = auStack_a0[0] & 0xffffff00;
  uStack_94 = 0;
  func_0x000107c29fc8(auStack_e0,*param_2,param_3);
  if (cStack_c0 == '\x01') {
    auStack_a0[0] = uStack_c8;
    auStack_a0[1] = 0;
    auStack_a0[2] = 0;
    uStack_94 = 1;
  }
  func_0x000107c2922c(auStack_e0);
  uStack_f8 = 0;
  uStack_e8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0x100000000;
  uStack_f0 = 0;
  func_0x000107c29468(auStack_e0,&uStack_110);
  FUN_1087252d4(param_1,param_2 + 9,auStack_90,param_3,param_4,auStack_e0,auStack_a0,
                *(undefined8 *)(param_2[4] + 0x10),*(undefined1 *)(param_2[4] + 0x18));
  func_0x000107c27b20(auStack_e0);
  func_0x000107c29490((ulong)&uStack_110 | 8);
  func_0x000107c279dc(auStack_70);
  return;
}



/* Entry: 1087297c0; end: 10872986f;  */

void FUN_1087297c0(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  uint param_5)

{
  undefined1 auStack_3a0 [448];
  undefined1 auStack_1e0 [32];
  long lStack_1c0;
  char cStack_1b8;
  char cStack_38;
  
  if ((param_5 & 1) == 0) {
    *param_1 = 0;
    param_1[0x1a8] = 0;
  }
  else {
    FUN_108868228(auStack_3a0,*param_2,param_3,1);
    func_0x000107c28998(auStack_1e0,auStack_3a0);
    func_0x000107c28948(auStack_3a0);
    if ((cStack_38 == '\x01') && (cStack_1b8 == '\x01' && param_4 <= lStack_1c0)) {
      FUN_10867bc80(param_1,auStack_1e0);
    }
    else {
      *param_1 = 0;
      param_1[0x1a8] = 0;
    }
    func_0x000107c288dc(auStack_1e0);
  }
  return;
}



/* Entry: 108729870; end: 10872997f;  */

void FUN_108729870(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_240 [40];
  undefined8 uStack_218;
  undefined1 uStack_210;
  char cStack_208;
  undefined1 auStack_200 [432];
  
  FUN_1087297c0(auStack_200,param_2,param_3,*(undefined8 *)(param_4 + 0x178),
                *(undefined8 *)(param_4 + 0x180));
  if (*(char *)(param_4 + 0x180) == '\x01') {
    FUN_1088639fc(auStack_240,*param_2,param_3,*(undefined8 *)(param_4 + 0x178),param_2 + 6);
    FUN_1087155f0(&uStack_218,auStack_240);
    if (cStack_208 == '\0') {
      uStack_218 = 0;
      uStack_210 = 0;
    }
    FUN_10871d008(auStack_240);
  }
  else {
    uStack_210 = 0;
    uStack_218 = 0;
  }
  FUN_1087250a4(param_1,param_2 + 9,param_3,param_4,auStack_200,uStack_218,uStack_210);
  FUN_10872a678(param_2[2],param_1,param_3);
  func_0x000107c288dc(auStack_200);
  return;
}



/* Entry: 108729980; end: 108729abf;  */

int FUN_108729980(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  byte abStack_440 [32];
  undefined1 auStack_420 [32];
  undefined1 auStack_400 [464];
  byte bStack_230;
  long alStack_228 [19];
  byte bStack_190;
  long alStack_188 [19];
  byte bStack_f0;
  undefined1 auStack_e8 [168];
  
  FUN_108866230(auStack_e8,*param_1,2);
  FUN_108707144(alStack_188,auStack_e8);
  _bzero(alStack_228,0xa0);
  iVar2 = 0;
  while ((((bStack_f0 & 1) != 0 || ((bStack_190 & 1) != 0)) && (alStack_188[0] != alStack_228[0])))
  {
    plVar1 = alStack_188;
    FUN_10870715c(plVar1);
    func_0x00010872a2c8(auStack_400,*param_1,plVar1);
    if ((bStack_230 & 1) != 0) {
      FUN_108729870(abStack_440,param_1,plVar1,auStack_400);
      iVar2 = iVar2 + (abStack_440[0] ^ 1);
      func_0x000107c279dc(auStack_420);
    }
    func_0x000107c288c8(auStack_400);
    FUN_10872a10c(alStack_188);
  }
  func_0x00010872a270(alStack_228);
  func_0x00010872a270(alStack_188);
  FUN_108706f8c(auStack_e8);
  return iVar2;
}



/* Entry: 108729ac0; end: 108729b17;  */

void FUN_108729ac0(void)

{
  func_0x000100867b68();
  func_0x000108729ae0();
  func_0x000100867bcc();
  return;
}



/* Entry: 108729b18; end: 108729b1f;  */

void FUN_108729b18(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100867b68(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x90;
    FUN_108706cb0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108729b20; end: 108729bc3;  */

void FUN_108729b20(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100867b68();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x90;
    FUN_108706cb0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108729bc4; end: 108729bfb;  */

void FUN_108729bc4(long param_1)

{
  func_0x000107c27af4();
  *(undefined1 *)(param_1 + 0x378) = 1;
  return;
}



/* Entry: 108729bfc; end: 108729c6b;  */

long FUN_108729bfc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x000107c27994();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x31);
  *(undefined8 *)(lVar1 + 0x39) = *(undefined8 *)(param_2 + 0x39);
  *(undefined8 *)(lVar1 + 0x31) = uVar6;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  func_0x000107c279d4(lVar1 + 0x48,param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  return param_1;
}



/* Entry: 108729c6c; end: 108729ccf;  */

void FUN_108729c6c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_c0 [160];
  
  func_0x000108729cb0(auStack_c0,param_2);
  func_0x000108729cb0(param_1,auStack_c0);
  func_0x00010872a2b0();
  return;
}



/* Entry: 108729cd0; end: 108729cfb;  */

undefined1 * FUN_108729cd0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x90] = 0;
  FUN_108729cfc();
  return param_1;
}



/* Entry: 108729cfc; end: 108729d0f;  */

void FUN_108729cfc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_1087070f0();
    *(undefined1 *)(param_1 + 0x90) = 1;
    return;
  }
  return;
}



/* Entry: 108729d10; end: 108729d9b;  */

undefined8 * FUN_108729d10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_170 [160];
  undefined1 auStack_d0 [160];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010872a084(auStack_d0);
  func_0x00010872a084(auStack_170,param_3);
  FUN_108729d9c(param_1,auStack_d0,auStack_170);
  func_0x00010872a2b0();
  func_0x00010872a2d8();
  return param_1;
}



/* Entry: 108729d9c; end: 108729e33;  */

void FUN_108729d9c(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  while ((((*(byte *)(param_2 + 0x13) & 1) != 0 || ((*(byte *)(param_3 + 0x13) & 1) != 0)) &&
         (*param_2 != *param_3))) {
    plVar1 = param_2;
    FUN_10870715c(param_2);
    FUN_108729e34(param_1,plVar1);
    FUN_10872a10c(param_2);
  }
  uStack_38 = 1;
  func_0x00010872a058(&uStack_40);
  return;
}



/* Entry: 108729e34; end: 108729e97;  */

long FUN_108729e34(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000108729e70();
    lVar2 = uVar1 + 0x90;
  }
  else {
    lVar2 = param_1;
    FUN_108729e98();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x90;
}



/* Entry: 108729e98; end: 108729ffb;  */

long * FUN_108729e98(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar8 = param_1[1] - *param_1;
  uVar1 = lVar8 / 0x90 + 1;
  if (0x1c71c71c71c71c7 < uVar1) {
    FUN_108729ffc();
LAB_108729ff8:
    func_0x000104bd35f4();
    plVar6 = (long *)&DAT_10f62a4d8;
    func_0x000104bd47e8();
    lVar8 = plVar6[1];
    while (lVar8 != plVar6[2]) {
      plVar6[2] = plVar6[2] + -0x90;
      FUN_108706cb0();
    }
    if (*plVar6 != 0) {
      __ZdlPv();
    }
    return plVar6;
  }
  plStack_58 = param_1 + 2;
  uVar3 = (*plStack_58 - *param_1) / 0x90;
  uVar7 = uVar3 * 2;
  if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
    uVar7 = uVar1;
  }
  if (0xe38e38e38e38e2 < uVar3) {
    uVar7 = 0x1c71c71c71c71c7;
  }
  if (uVar7 == 0) {
    lVar4 = 0;
  }
  else {
    if (0x1c71c71c71c71c7 < uVar7) goto LAB_108729ff8;
    lVar4 = uVar7 * 0x90;
    __Znwm();
  }
  lVar8 = lVar4 + lVar8;
  FUN_1087070f0(lVar8,param_2);
  lVar9 = *param_1;
  lVar2 = param_1[1];
  lVar11 = lVar8 + ((lVar2 - lVar9) / -0x90) * 0x90;
  lVar5 = lVar11;
  for (lVar10 = lVar9; lVar10 != lVar2; lVar10 = lVar10 + 0x90) {
    FUN_1087070f0(lVar5,lVar10);
    lVar5 = lVar5 + 0x90;
  }
  for (; lVar9 != lVar2; lVar9 = lVar9 + 0x90) {
    FUN_108706cb0(lVar9);
  }
  lStack_78 = *param_1;
  *param_1 = lVar11;
  param_1[1] = lVar8 + 0x90;
  lStack_60 = param_1[2];
  param_1[2] = lVar4 + uVar7 * 0x90;
  lStack_70 = lStack_78;
  lStack_68 = lStack_78;
  FUN_10872a010(&lStack_78);
  return (long *)(lVar8 + 0x90);
}



/* Entry: 108729ffc; end: 10872a00f;  */

long * FUN_108729ffc(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = plVar1[1];
  while (lVar2 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -0x90;
    FUN_108706cb0();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10872a010; end: 10872a0a3;  */

long * FUN_10872a010(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x90;
    FUN_108706cb0();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10872a0a4; end: 10872a0db;  */

undefined1 * FUN_10872a0a4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x90] = 0;
  FUN_10872a0dc();
  return param_1;
}



/* Entry: 10872a0dc; end: 10872a0ef;  */

void FUN_10872a0dc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_108729bfc();
    *(undefined1 *)(param_1 + 0x90) = 1;
    return;
  }
  return;
}



/* Entry: 10872a0f0; end: 10872a10b;  */

void FUN_10872a0f0(long param_1)

{
  FUN_108729bfc();
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



/* Entry: 10872a10c; end: 10872a17f;  */

void FUN_10872a10c(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_b0 [144];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x000107c3141c(), (int)lVar2 != 0)) {
    FUN_10872a180(auStack_b0,*param_1);
    FUN_108729464(param_1 + 1,auStack_b0);
    FUN_108706cb0(auStack_b0);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[0x13] == '\x01') {
    FUN_108706cb0();
    *(undefined1 *)(plVar1 + 0x12) = 0;
  }
  return;
}



/* Entry: 10872a180; end: 10872a267;  */

void FUN_10872a180(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  func_0x000107c313f8();
  func_0x000107c2879c(param_1);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,1);
  *(int *)(param_1 + 0x18) = (int)uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar2 = 3;
  uVar1 = param_2;
  func_0x000107c28228();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = uVar2;
  uVar2 = 4;
  uVar1 = param_2;
  func_0x000107c28228();
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined1 *)(param_1 + 0x40) = uVar2;
  func_0x000107c2893c(param_1 + 0x48,param_2,5);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,6);
  *(int *)(param_1 + 0x68) = (int)uVar1;
  uVar2 = 7;
  uVar1 = param_2;
  func_0x000107c28228();
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined1 *)(param_1 + 0x78) = uVar2;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,8);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  func_0x000107c313d8(param_2,9);
  *(int *)(param_1 + 0x88) = (int)param_2;
  return;
}



/* Entry: 10872a268; end: 10872a317;  */

void FUN_10872a268(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10872a318; end: 10872a33f;  */

undefined4 FUN_10872a318(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x000107c29e74();
  uVar1 = 0;
  if (param_1 == 2) {
    uVar1 = param_2;
  }
  return uVar1;
}



/* Entry: 10872a340; end: 10872a343;  */

undefined8 * FUN_10872a340(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a693d0;
  func_0x000107c288a4(param_1 + 0xd);
  func_0x000107c28800(param_1 + 0xb);
  func_0x000107c27a68(param_1 + 9);
  func_0x000107c28ab8(param_1 + 7);
  func_0x000107c29574(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 10872a344; end: 10872a357;  */

void FUN_10872a344(void)

{
  FUN_10872a358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10872a358; end: 10872a3b7;  */

undefined8 * FUN_10872a358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a693d0;
  func_0x000107c288a4(param_1 + 0xd);
  func_0x000107c28800(param_1 + 0xb);
  func_0x000107c27a68(param_1 + 9);
  func_0x000107c28ab8(param_1 + 7);
  func_0x000107c29574(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 10872a3b8; end: 10872a3d3;  */

void FUN_10872a3b8(long param_1)

{
  FUN_10872a3fc();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10872a3d4; end: 10872a3fb;  */

void FUN_10872a3d4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10872a4c4();
  func_0x000107c3194c();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10872a3fc; end: 10872a423;  */

void FUN_10872a3fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10872a424; end: 10872a45b;  */

long FUN_10872a424(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10872a3d4();
  }
  else {
    FUN_10872a3b8();
  }
  return param_1;
}



/* Entry: 10872a45c; end: 10872a4c3;  */

void FUN_10872a45c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c313f8();
  func_0x000107c2879c(&uStack_40);
  func_0x000107c313d8(param_2,1);
  uVar1 = uStack_30;
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  param_1[2] = uVar1;
  param_1[3] = param_2;
  func_0x00010872a4d0();
  return;
}



/* Entry: 10872a4c4; end: 10872a4e3;  */

void FUN_10872a4c4(void)

{
  return;
}



/* Entry: 10872a4e4; end: 10872a5b7;  */

void FUN_10872a4e4(long param_1,int param_2,uint param_3,int param_4,long param_5,undefined8 param_6
                  )

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  *(uint *)(param_1 + 0x30) = param_3;
  if (param_2 == 0) {
    uVar3 = 7;
    uVar4 = 9;
  }
  else if (param_2 == 1) {
    uVar3 = 6;
    uVar4 = 8;
  }
  else {
    if (param_2 != 2) goto LAB_10872a558;
    uVar3 = 5;
    uVar4 = 7;
  }
  if (((uint)(param_3 < 0x1f) & 0x20218004U >> (ulong)(param_3 & 0x1f)) == 0) {
    uVar4 = uVar3;
  }
  *(undefined8 *)(param_1 + 0x38) = uVar4;
LAB_10872a558:
  uVar1 = param_5 / 1000;
  if (*(ulong *)(param_1 + 0x20) < uVar1) {
    *(ulong *)(param_1 + 0x20) = uVar1;
    *(uint *)(param_1 + 0x340) = (uint)(param_4 != 2);
  }
  *(ulong *)(param_1 + 0x28) = uVar1;
  *(uint *)(param_1 + 0x344) = (uint)(param_4 != 2);
  FUN_108690b88(param_1 + 0xe8,param_6);
  *(undefined1 *)(param_1 + 0x40) = 0;
  puVar2 = (undefined8 *)(param_1 + 0xd0);
  func_0x00010065adc4(puVar2,*puVar2);
  while (puVar2 != unaff_x19) {
    func_0x00010065ae00();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10872a5b8; end: 10872a5bb;  */

undefined8 * FUN_10872a5b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a694c0;
  func_0x000107c29178(param_1 + 0xf);
  func_0x000107c28800(param_1 + 0xd);
  func_0x000107c28808(param_1 + 0xb);
  func_0x000107c27914(param_1 + 8);
  func_0x000107c29498(param_1 + 5);
  func_0x000107c28ae4(param_1 + 3);
  func_0x000107c29190(param_1 + 1);
  return param_1;
}



/* Entry: 10872a5bc; end: 10872a5cf;  */

void FUN_10872a5bc(void)

{
  func_0x00010872a608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10872a5d0; end: 10872a66f;  */

long FUN_10872a5d0(long param_1)

{
  func_0x000107c279dc(param_1 + 0x48);
  func_0x000107c27914(param_1 + 0x30);
  func_0x000107c27914(param_1 + 0x10);
  return param_1;
}



/* Entry: 10872a670; end: 10872a677;  */

long FUN_10872a670(void)

{
  long unaff_x29;
  long lStack_28;
  
  lStack_28 = unaff_x29 + -0x60;
  func_0x000100100fd4(&lStack_28);
  return unaff_x29 + -0x60;
}



/* Entry: 10872a678; end: 10872a75f;  */

void FUN_10872a678(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  uint auStack_40 [2];
  int iStack_38;
  long lStack_30;
  char cStack_28;
  
  func_0x000107c296e4(auStack_40,*param_1,param_3);
  if (cStack_28 == '\x01') {
    lStack_30 = lStack_30 / 1000;
    if (*(long *)(param_2 + 8) < lStack_30) {
      *(long *)(param_2 + 8) = lStack_30;
    }
    if (((*param_2 & 1) != 0) || (*(int *)(param_1 + 5) == 0 && auStack_40[0] == 2)) {
      if (auStack_40[0] < 3) {
        *(uint *)(param_2 + 4) = 9 - auStack_40[0];
      }
      *(long *)(param_2 + 0x10) = lStack_30;
      *(uint *)(param_2 + 0x18) = (uint)(iStack_38 != 2);
      FUN_108690b88(param_2 + 0x20,param_1 + 2);
      *param_2 = 1;
    }
  }
  return;
}



/* Entry: 10872a760; end: 10872a79b;  */

void FUN_10872a760(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined *puStack_18;
  
  puStack_18 = (&PTR_s_Unknown_110a69500)[param_2];
  func_0x000107c28268(*param_3,&DAT_10f2fb62f,&puStack_18);
  return;
}



/* Entry: 10872a79c; end: 10872a7d3;  */

void FUN_10872a79c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10872a7d4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10872a7d4; end: 10872a7e7;  */

void FUN_10872a7d4(void)

{
  func_0x000107c28d14();
  return;
}



/* Entry: 10872a7e8; end: 10872a7f3;  */

void FUN_10872a7e8(void)

{
  return;
}



/* Entry: 10872a7f4; end: 10872a86f;  */

void FUN_10872a7f4(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x00010872a838();
  if (param_1 != 0) {
    func_0x00010872b384();
  }
  return;
}



/* Entry: 10872a870; end: 10872a8f3;  */

void FUN_10872a870(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  func_0x00010872b384();
  uStack_40 = param_3[1];
  uStack_48 = *param_3;
  uStack_38 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uStack_50 = uVar1;
  FUN_10872a8f4(param_1 + 3,param_2,&uStack_50);
  func_0x000104be58b8(&uStack_48);
  return;
}



/* Entry: 10872a8f4; end: 10872a943;  */

undefined8 FUN_10872a8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c27994(auStack_38);
  FUN_10872abd4(param_1,auStack_38,param_3);
  func_0x00010872b390();
  return param_3;
}



/* Entry: 10872a944; end: 10872a9a3;  */

void FUN_10872a944(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_28;
  
  plVar3 = (long *)(param_1 + 0x20);
  plVar2 = *(long **)(param_2 + 0x38);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar2 != plVar3) {
    if ((plVar1 != plVar2) && (plVar3 = (long *)plVar2[1], plVar1 != plVar3)) {
      lVar4 = *plVar2;
      *(long **)(lVar4 + 8) = plVar3;
      *plVar3 = lVar4;
      lVar4 = *plVar1;
      *(long **)(lVar4 + 8) = plVar2;
      *plVar2 = lVar4;
      *plVar1 = (long)plVar2;
      plVar2[1] = (long)plVar1;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    }
    return;
  }
  lStack_28 = param_2;
  FUN_10872aa94(plVar3,plVar1,&lStack_28);
  *(long **)(param_2 + 0x38) = plVar3;
  return;
}



/* Entry: 10872a9a4; end: 10872aa43;  */

undefined8 * FUN_10872a9a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x00010872a9f4(param_1,param_2,*puVar1,puVar1);
  if ((puVar1 == param_1) || (FUN_10866f054(param_2,param_1 + 4), (int)param_2 != 0)) {
    param_1 = puVar1;
  }
  return param_1;
}



/* Entry: 10872aa44; end: 10872aa93;  */

void FUN_10872aa44(long param_1,long *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != param_4) && (plVar1 = (long *)param_4[1], param_2 != plVar1)) {
    lVar2 = *param_4;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = param_4;
    *param_4 = lVar2;
    *param_2 = (long)param_4;
    param_4[1] = (long)param_2;
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  return;
}



/* Entry: 10872aa94; end: 10872aadf;  */

void FUN_10872aa94(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10872aae0(param_1,0,0,param_3);
  lVar2 = *param_2;
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  *param_2 = (long)plVar1;
  plVar1[1] = (long)param_2;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10872aae0; end: 10872ab6f;  */

undefined8 *
FUN_10872aae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  long lStack_38;
  
  puVar1 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = 1;
  FUN_10872ab70(auStack_50);
  puVar2 = puStack_40;
  *puStack_40 = param_2;
  puStack_40[1] = param_3;
  puStack_40[2] = *param_4;
  puStack_40 = (undefined8 *)0x0;
  FUN_10872abc4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar1[1] = uVar3;
  puVar2 = puVar1;
  FUN_10872ab98();
  puVar1[2] = puVar2;
  return puVar1;
}



/* Entry: 10872ab70; end: 10872ab97;  */

long FUN_10872ab70(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10872ab98();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10872ab98; end: 10872abc3;  */

void FUN_10872ab98(long param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10872abc4; end: 10872abd3;  */

void FUN_10872abc4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10872abd4; end: 10872adfb;  */

ulong * FUN_10872abd4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *unaff_x19;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  undefined8 uStack_68;
  
  func_0x00010872b39c();
  puVar10 = unaff_x19 + 2;
  if (puVar10 == param_1) {
    uVar6 = *param_3;
    uVar2 = param_3[1];
    uVar11 = param_3[2];
    uVar3 = param_3[3];
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[1] = 0;
    puVar5 = (ulong *)0x60;
    uStack_90 = uVar2;
    uStack_88 = uVar11;
    uStack_80 = uVar3;
    __Znwm();
    uVar7 = *param_2;
    puVar9 = puVar5 + 4;
    puVar5[5] = param_2[1];
    *puVar9 = uVar7;
    uStack_68 = 1;
    uVar7 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar5[6] = uVar7;
    puVar5[7] = (ulong)(unaff_x19 + 4);
    puVar5[8] = uVar6;
    puVar5[9] = uVar2;
    puVar5[10] = uVar11;
    puVar5[0xb] = uVar3;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    puVar8 = (ulong *)*puVar10;
    puStack_70 = puVar10;
    puStack_78 = puVar5;
    while (puVar5 = puVar10, puVar8 != (ulong *)0x0) {
      while (puVar10 = puVar8, puVar8 = puVar9, FUN_10866f054(puVar9,puVar10 + 4), (int)puVar8 == 0)
      {
        puVar8 = puVar10 + 4;
        FUN_10866f054(puVar8,puVar9);
        if ((int)puVar8 == 0) {
          param_1 = (ulong *)*puVar5;
          if (param_1 == (ulong *)0x0) goto LAB_10872ace0;
          goto LAB_10872ad1c;
        }
        puVar5 = puVar10 + 1;
        puVar8 = (ulong *)*puVar5;
        if ((ulong *)*puVar5 == (ulong *)0x0) goto LAB_10872ace0;
      }
      puVar8 = (ulong *)*puVar10;
    }
LAB_10872ace0:
    param_1 = puStack_78;
    *puStack_78 = 0;
    puStack_78[1] = 0;
    puStack_78[2] = (ulong)puVar10;
    *puVar5 = (ulong)puStack_78;
    if (*(ulong *)unaff_x19[1] != 0) {
      unaff_x19[1] = *(ulong *)unaff_x19[1];
    }
    func_0x000107c27be4(unaff_x19[2],puStack_78);
    unaff_x19[3] = unaff_x19[3] + 1;
    puStack_78 = (ulong *)0x0;
LAB_10872ad1c:
    func_0x00010872b308(&puStack_78);
    func_0x000104be58b8(&uStack_90);
  }
  else {
    param_1[8] = *param_3;
    FUN_10872adfc(param_1 + 9,param_3 + 1);
  }
  func_0x00010872b3a8();
  if (*unaff_x19 < unaff_x19[6]) {
    uVar11 = *(ulong *)(unaff_x19[4] + 0x10);
    uVar6 = uVar11;
    func_0x000107c27be0();
    if (unaff_x19[1] == uVar11) {
      unaff_x19[1] = uVar6;
    }
    unaff_x19[3] = unaff_x19[3] - 1;
    func_0x00010530d618(unaff_x19[2],uVar11);
    func_0x00010872b34c(uVar11 + 0x20);
    __ZdlPv(uVar11);
    lVar1 = *(long *)unaff_x19[4];
    plVar4 = (long *)((long *)unaff_x19[4])[1];
    *(long **)(lVar1 + 8) = plVar4;
    *plVar4 = lVar1;
    unaff_x19[6] = unaff_x19[6] - 1;
    __ZdlPv();
  }
  return param_1 + 8;
}



/* Entry: 10872adfc; end: 10872ae2f;  */

undefined8 * FUN_10872adfc(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_10872ae30(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 10872ae30; end: 10872ae3f;  */

void FUN_10872ae30(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar1 = (param_3 - param_2) / 0xa8;
  if ((ulong)((param_1[2] - *param_1) / 0xa8) < uVar1) {
    func_0x000104be5680(param_1);
    plVar2 = param_1;
    FUN_10872afb0(param_1,uVar1);
    FUN_10872af64(param_1,plVar2);
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (uVar1 <= (ulong)(lVar3 / 0xa8)) {
      FUN_10872b1c0(param_2,param_3);
      func_0x00010065adc4();
      while (param_1 != unaff_x19) {
        param_1 = param_1 + -0x15;
        func_0x000104be56f0();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10872b1c0(param_2,param_2 + lVar3);
    param_2 = param_2 + lVar3;
  }
  plVar2 = param_1 + 2;
  func_0x00010872b010(plVar2,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10872ae40; end: 10872af2f;  */

void FUN_10872ae40(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if ((ulong)((param_1[2] - *param_1) / 0xa8) < param_4) {
    func_0x000104be5680(param_1);
    plVar1 = param_1;
    FUN_10872afb0(param_1,param_4);
    FUN_10872af64(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0xa8)) {
      FUN_10872b1c0(param_2,param_3);
      func_0x00010065adc4();
      while (param_1 != unaff_x19) {
        param_1 = param_1 + -0x15;
        func_0x000104be56f0();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10872b1c0(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
  }
  plVar1 = param_1 + 2;
  func_0x00010872b010(plVar1,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10872af30; end: 10872af63;  */

void FUN_10872af30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x00010872b010();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10872af64; end: 10872afaf;  */

long * FUN_10872af64(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x186186186186187) {
    plVar2 = param_1 + 2;
    FUN_10872b2b4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + (long)param_2 * 0x15);
    return plVar2;
  }
  FUN_10872b2a0();
  if ((long *)0x186186186186186 < param_2) {
    FUN_10872b2a0();
    FUN_10872b024();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0xa8;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0xc30c30c30c30c2 < uVar1) {
    plVar2 = (long *)0x186186186186186;
  }
  return plVar2;
}



/* Entry: 10872afb0; end: 10872b023;  */

long * FUN_10872afb0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x186186186186186 < param_2) {
    FUN_10872b2a0();
    FUN_10872b024();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0xa8;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0xc30c30c30c30c2 < uVar1) {
    plVar2 = (long *)0x186186186186186;
  }
  return plVar2;
}



/* Entry: 10872b024; end: 10872b0bb;  */

long FUN_10872b024(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0xa8) {
    FUN_10872b0bc(param_4,param_2);
    param_4 = lStack_38 + 0xa8;
  }
  uStack_48 = 1;
  FUN_10872b140(&uStack_60);
  return param_4;
}



/* Entry: 10872b0bc; end: 10872b13f;  */

long FUN_10872b0bc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c27994();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  func_0x000104be11e4(param_1 + 0x30,param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  func_0x000107c2795c(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



/* Entry: 10872b140; end: 10872b16f;  */

long FUN_10872b140(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10872b170(param_1);
  }
  return param_1;
}



/* Entry: 10872b170; end: 10872b18f;  */

void FUN_10872b170(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xa8;
    func_0x000104be56f0();
  }
  return;
}



/* Entry: 10872b190; end: 10872b1bf;  */

void FUN_10872b190(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xa8;
    func_0x000104be56f0();
  }
  return;
}



/* Entry: 10872b1c0; end: 10872b1eb;  */

void FUN_10872b1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10872b1ec(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10872b1ec; end: 10872b247;  */

undefined1  [16] FUN_10872b1ec(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0xa8) {
    FUN_10872b248(lVar1,param_2);
    lVar1 = lVar1 + 0xa8;
    param_4 = param_4 + 0xa8;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 10872b248; end: 10872b29f;  */

long FUN_10872b248(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c27cfc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x18,param_2 + 0x18);
  FUN_108726c2c(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x85);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x85) = uVar1;
  func_0x000107c27d2c(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



/* Entry: 10872b2a0; end: 10872b2b3;  */

void FUN_10872b2a0(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_10872b2d8();
  return;
}



/* Entry: 10872b2b4; end: 10872b2d7;  */

void FUN_10872b2b4(void)

{
  FUN_10872b2d8();
  return;
}



/* Entry: 10872b2d8; end: 10872b307;  */

long * FUN_10872b2d8(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 < 0x186186186186187) {
    plVar1 = (long *)(param_2 * 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010872b34c(lVar2 + 0x20);
    }
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 10872b308; end: 10872b373;  */

long * FUN_10872b308(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010872b34c(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10872b374; end: 10872b3c7;  */

void FUN_10872b374(void)

{
  return;
}



/* Entry: 10872b3c8; end: 10872b413;  */

void FUN_10872b3c8(void)

{
  undefined1 in_ZR;
  
  func_0x00010872d618();
  if ((bool)in_ZR) {
    func_0x00010872d4dc();
    func_0x00010872d5f4();
    func_0x00010872d4a0();
    func_0x00010872d4ac();
  }
  return;
}



/* Entry: 10872b414; end: 10872b68b;  */

long * FUN_10872b414(float param_1,float param_2,long param_3,long *param_4)

{
  undefined **ppuVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  ulong extraout_x9_00;
  long *plVar10;
  long *plVar11;
  long *extraout_x10;
  long *plVar12;
  long *plVar13;
  long *extraout_x11;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x19;
  undefined8 unaff_x22;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *unaff_x26;
  undefined1 auStack_178 [272];
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar10 = (long *)(param_3 + 0x58);
  func_0x000107c28e60();
  if (((ulong)plVar10 & 1) != 0) {
    return plVar10;
  }
  if ((*(byte *)((long)param_4 + 0x11) >> 4 & 1) != 0) {
    if ((*(byte *)(param_4[0x19] + 0x10) & 1) == 0) {
      return plVar10;
    }
    if (*(char *)(*(long *)(param_4[0x19] + 0x28) + 0x10) != '\x01') {
      return plVar10;
    }
  }
  ppuVar1 = &PTR_PTR_11326cb58;
  if ((undefined **)param_4[0xd] != (undefined **)0x0) {
    ppuVar1 = (undefined **)param_4[0xd];
  }
  plVar10 = (long *)(param_3 + 8);
  FUN_10872c7cc(plVar10,ppuVar1);
  if (plVar10 != (long *)0x0) {
    if ((ulong)param_4[0x1c] <= (ulong)plVar10[0x22]) {
      return plVar10;
    }
    plVar22 = plVar10 + 6;
    func_0x0001088f56bc();
    if (plVar22 != param_4) {
      lVar7 = param_4[0x23];
      lVar16 = param_4[0x24];
      uVar8 = lVar16 - lVar7;
      lVar6 = plVar10[0x29];
      if ((ulong)(plVar10[0x2b] - lVar6) < uVar8) {
        if (lVar6 != 0) {
          FUN_1086cd85c(plVar10 + 0x29);
          __ZdlPv(plVar10[0x29]);
          plVar10[0x29] = 0;
          plVar10[0x2a] = 0;
          plVar10[0x2b] = 0;
        }
        plVar21 = plVar10 + 0x29;
        FUN_10872c978(plVar21,(long)uVar8 / 0x28);
        FUN_10872c930(plVar10 + 0x29,plVar21);
      }
      else {
        uVar19 = plVar10[0x2a] - lVar6;
        if (uVar8 <= uVar19) {
          FUN_10872ca54(lVar7,lVar16);
          FUN_1086cd864(plVar10 + 0x29,lVar7);
          return plVar22;
        }
        FUN_10872ca54(lVar7,lVar7 + uVar19);
        lVar7 = lVar7 + uVar19;
      }
      FUN_10872c890(plVar10 + 0x29,lVar7,lVar16);
    }
    return plVar22;
  }
  func_0x00010872d564();
  plVar10 = (long *)(param_3 + 0x30);
  FUN_10872cb08();
  if (plVar10 == (long *)0x0) {
    func_0x00010872d564();
    plVar10 = (long *)(param_3 + 8);
    func_0x00010872d4b4();
    plVar22 = (long *)unaff_x19[1];
    if (plVar22 != (long *)0x0) {
      uVar8 = (long)plVar22 - 1;
      if (((ulong)plVar22 & uVar8) == 0) {
        unaff_x26 = (long *)(uVar8 & (ulong)plVar10);
      }
      else {
        unaff_x26 = plVar10;
        if (plVar22 <= plVar10) {
          uVar19 = 0;
          if (plVar22 != (long *)0x0) {
            uVar19 = (ulong)plVar10 / (ulong)plVar22;
          }
          unaff_x26 = (long *)((long)plVar10 - uVar19 * (long)plVar22);
        }
      }
      plVar21 = *(long **)(*unaff_x19 + (long)unaff_x26 * 8);
      if (plVar21 != (long *)0x0) {
        do {
          while( true ) {
            plVar21 = (long *)*plVar21;
            if (plVar21 == (long *)0x0) goto LAB_10872c530;
            plVar9 = (long *)plVar21[1];
            if (plVar9 != plVar10) break;
            plVar9 = unaff_x19 + 4;
            FUN_1086a9f40(plVar9,plVar21 + 2);
            if (((ulong)plVar9 & 1) != 0) {
              return plVar9;
            }
          }
          if (((ulong)plVar22 & uVar8) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar8);
          }
          else if (plVar22 <= plVar9) {
            uVar19 = 0;
            if (plVar22 != (long *)0x0) {
              uVar19 = (ulong)plVar9 / (ulong)plVar22;
            }
            plVar9 = (long *)((long)plVar9 - uVar19 * (long)plVar22);
          }
        } while (plVar9 == unaff_x26);
      }
    }
LAB_10872c530:
    plVar21 = unaff_x19 + 2;
    plVar5 = (long *)0x160;
    __Znwm();
    plStack_58 = (long *)0x0;
    *plVar5 = 0;
    plVar5[1] = (long)plVar10;
    plStack_68 = plVar5;
    plStack_60 = plVar21;
    FUN_10865ecd8(plVar5 + 2);
    plVar9 = plVar5 + 6;
    FUN_10872cbe8(plVar9,unaff_x22);
    func_0x00010872d548();
    if ((plVar22 != (long *)0x0) && (param_1 <= param_2 * (float)plVar22)) goto LAB_10872c730;
    bVar3 = (long *)0x2 < plVar22;
    bVar4 = plVar22 == (long *)0x3;
    func_0x00010872d450((long)plVar22 << 1);
    plVar20 = extraout_x8;
    if (!bVar3 || bVar4) {
      plVar20 = extraout_x9;
    }
    if ((long)plVar20 - 1U == 0) {
      plVar20 = (long *)0x2;
    }
    else if (((ulong)plVar20 & (long)plVar20 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar9 = plVar20;
    }
    plVar22 = (long *)unaff_x19[1];
    if (plVar22 < plVar20) {
LAB_10872c5cc:
      if ((ulong)plVar20 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10872c7a8);
        (*pcVar2)();
      }
      lVar7 = (long)plVar20 << 3;
      __Znwm(lVar7);
      plVar9 = unaff_x19;
      FUN_10872cc2c(unaff_x19,lVar7);
      unaff_x19[1] = (long)plVar20;
      lVar7 = *unaff_x19;
      for (plVar22 = (long *)0x0; plVar20 != plVar22; plVar22 = (long *)((long)plVar22 + 1)) {
        *(undefined8 *)(lVar7 + (long)plVar22 * 8) = 0;
      }
      plVar11 = (long *)*plVar21;
      plVar22 = plVar20;
      if (plVar11 != (long *)0x0) {
        plVar12 = (long *)plVar11[1];
        uVar19 = (long)plVar20 - 1;
        uVar8 = 0;
        if (plVar20 != (long *)0x0) {
          uVar8 = (ulong)plVar12 / (ulong)plVar20;
        }
        plVar13 = plVar12;
        if (plVar20 <= plVar12) {
          plVar13 = (long *)((long)plVar12 - uVar8 * (long)plVar20);
        }
        if (((ulong)plVar20 & uVar19) == 0) {
          plVar13 = (long *)((ulong)plVar12 & uVar19);
        }
        *(long **)(lVar7 + (long)plVar13 * 8) = plVar21;
        while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
          plVar15 = (long *)plVar11[1];
          if (((ulong)plVar20 & uVar19) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar19);
          }
          else if (plVar20 <= plVar15) {
            uVar8 = 0;
            if (plVar20 != (long *)0x0) {
              uVar8 = (ulong)plVar15 / (ulong)plVar20;
            }
            plVar15 = (long *)((long)plVar15 - uVar8 * (long)plVar20);
          }
          if (plVar15 != plVar13) {
            if (*(long *)(lVar7 + (long)plVar15 * 8) == 0) {
              *(long **)(lVar7 + (long)plVar15 * 8) = plVar12;
              plVar13 = plVar15;
            }
            else {
              *plVar12 = *plVar11;
              func_0x00010872d5bc();
              lVar7 = extraout_x8_00;
              uVar19 = extraout_x9_00;
              plVar11 = extraout_x10;
              plVar13 = extraout_x11;
            }
          }
        }
      }
    }
    else if (plVar20 < plVar22) {
      plVar9 = (long *)(long)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
      if ((plVar22 < (long *)0x3) || (((ulong)plVar22 & (long)plVar22 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010872d4f0();
      }
      if (plVar20 <= plVar9) {
        plVar20 = plVar9;
      }
      if (plVar20 < plVar22) {
        if (plVar20 != (long *)0x0) goto LAB_10872c5cc;
        plVar9 = unaff_x19;
        FUN_10872cc2c(unaff_x19,0);
        unaff_x19[1] = 0;
        plVar22 = (long *)0x0;
      }
      else {
        plVar22 = (long *)unaff_x19[1];
      }
    }
    if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar22 - 1U & (ulong)plVar10);
    }
    else {
      unaff_x26 = plVar10;
      if (plVar22 <= plVar10) {
        uVar8 = 0;
        if (plVar22 != (long *)0x0) {
          uVar8 = (ulong)plVar10 / (ulong)plVar22;
        }
        unaff_x26 = (long *)((long)plVar10 - uVar8 * (long)plVar22);
      }
    }
LAB_10872c730:
    lVar7 = *unaff_x19;
    plVar10 = *(long **)(lVar7 + (long)unaff_x26 * 8);
    if (plVar10 == (long *)0x0) {
      *plVar5 = *plVar21;
      *plVar21 = (long)plVar5;
      *(long **)(lVar7 + (long)unaff_x26 * 8) = plVar21;
      if (*plVar5 != 0) {
        plVar10 = *(long **)(*plVar5 + 8);
        if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
          plVar10 = (long *)((ulong)plVar10 & (long)plVar22 - 1U);
        }
        else if (plVar22 <= plVar10) {
          uVar8 = 0;
          if (plVar22 != (long *)0x0) {
            uVar8 = (ulong)plVar10 / (ulong)plVar22;
          }
          plVar10 = (long *)((long)plVar10 - uVar8 * (long)plVar22);
        }
        *(long **)(lVar7 + (long)plVar10 * 8) = plVar5;
      }
    }
    else {
      *plVar5 = *plVar10;
      *plVar10 = (long)plVar5;
    }
    func_0x00010872d5a4();
    func_0x00010872cc44();
    return plVar9;
  }
  if ((*(byte *)(plVar10 + 0x2c) & 1) == 0) {
    auStack_178[0] = 0;
    plStack_60 = (long *)((ulong)plStack_60 & 0xffffffffffffff00);
  }
  else {
    FUN_10872cbcc(auStack_178,plVar10 + 6);
    if (((char)plVar10[0x2c] == '\x01') && ((ulong)param_4[0x1c] <= (ulong)plVar10[0x22]))
    goto LAB_10872b674;
  }
  func_0x00010872d564();
  FUN_10872c478(param_3 + 8);
  uVar19 = *(ulong *)(param_3 + 0x38);
  lVar7 = *plVar10;
  uVar8 = plVar10[1];
  uVar14 = uVar19 - 1;
  if ((uVar19 & uVar14) == 0) {
    uVar8 = uVar14 & uVar8;
  }
  else if (uVar19 <= uVar8) {
    uVar17 = 0;
    if (uVar19 != 0) {
      uVar17 = uVar8 / uVar19;
    }
    uVar8 = uVar8 - uVar17 * uVar19;
  }
  lVar16 = *(long *)(param_3 + 0x30);
  plVar22 = *(long **)(lVar16 + uVar8 * 8);
  do {
    plVar21 = plVar22;
    plVar22 = (long *)*plVar21;
  } while ((long *)*plVar21 != plVar10);
  if (plVar21 == (long *)(param_3 + 0x40)) {
LAB_10872b5d0:
    if (lVar7 == 0) {
LAB_10872b604:
      *(undefined8 *)(lVar16 + uVar8 * 8) = 0;
      lVar7 = *plVar10;
      goto LAB_10872b60c;
    }
    uVar17 = *(ulong *)(lVar7 + 8);
    if ((uVar19 & uVar14) == 0) {
      uVar18 = uVar17 & uVar14;
    }
    else {
      uVar18 = uVar17;
      if (uVar19 <= uVar17) {
        uVar18 = 0;
        if (uVar19 != 0) {
          uVar18 = uVar17 / uVar19;
        }
        uVar18 = uVar17 - uVar18 * uVar19;
      }
    }
    if (uVar18 != uVar8) goto LAB_10872b604;
LAB_10872b614:
    if ((uVar19 & uVar14) == 0) {
      uVar17 = uVar17 & uVar14;
    }
    else if (uVar19 <= uVar17) {
      uVar14 = 0;
      if (uVar19 != 0) {
        uVar14 = uVar17 / uVar19;
      }
      uVar17 = uVar17 - uVar14 * uVar19;
    }
    if (uVar17 != uVar8) {
      *(long **)(lVar16 + uVar17 * 8) = plVar21;
      lVar7 = *plVar10;
    }
  }
  else {
    uVar17 = plVar21[1];
    if ((uVar19 & uVar14) == 0) {
      uVar17 = uVar17 & uVar14;
    }
    else if (uVar19 <= uVar17) {
      uVar18 = 0;
      if (uVar19 != 0) {
        uVar18 = uVar17 / uVar19;
      }
      uVar17 = uVar17 - uVar18 * uVar19;
    }
    if (uVar17 != uVar8) goto LAB_10872b5d0;
LAB_10872b60c:
    if (lVar7 != 0) {
      uVar17 = *(ulong *)(lVar7 + 8);
      goto LAB_10872b614;
    }
  }
  *plVar21 = lVar7;
  *plVar10 = 0;
  *(long *)(param_3 + 0x48) = *(long *)(param_3 + 0x48) + -1;
  plStack_58 = plVar10;
  func_0x00010872ccac(&plStack_58);
LAB_10872b674:
  plVar10 = (long *)auStack_178;
  FUN_10872cd14(plVar10);
  return plVar10;
}



/* Entry: 10872b68c; end: 10872b6d7;  */

void FUN_10872b68c(void)

{
  undefined1 in_ZR;
  
  func_0x00010872d618();
  if ((bool)in_ZR) {
    func_0x00010872d4dc();
    func_0x00010872d5f4();
    func_0x00010872d4a0();
    func_0x00010872d4ac();
  }
  return;
}



/* Entry: 10872b6d8; end: 10872b79b;  */

void FUN_10872b6d8(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  undefined1 auStack_298 [280];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [280];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x00010872d618();
  if ((bool)in_ZR) {
    ppuVar1 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(param_2 + 0x68) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x68);
    }
    func_0x000107c28dc8(auStack_298);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c28dec(auStack_168,auStack_298);
    uStack_50 = uStack_180;
    uStack_40 = uStack_170;
    uStack_48 = uStack_178;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
    uStack_38 = 1;
    FUN_10872b79c(param_1,ppuVar1,auStack_168);
    func_0x00010872d34c(auStack_168);
    func_0x00010872cde8(auStack_298);
  }
  return;
}



/* Entry: 10872b79c; end: 10872bad3;  */

void FUN_10872b79c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  long **pplVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x25;
  ulong uVar14;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  undefined1 uStack_188;
  undefined1 auStack_180 [16];
  uint uStack_170;
  ulong uStack_a0;
  char cStack_68;
  
  pplVar7 = &plStack_2a0;
  if ((*(byte *)(param_3 + 0x130) & 1) == 0) {
    auStack_180[0] = 0;
    cStack_68 = '\0';
LAB_10872b804:
    uVar11 = param_1 + 0x48;
    FUN_1086a9f1c(uVar11,param_2);
    uVar13 = *(ulong *)(param_1 + 0x38);
    if (uVar13 != 0) {
      uVar14 = uVar13 - 1;
      if ((uVar13 & uVar14) == 0) {
        unaff_x25 = uVar14 & uVar11;
      }
      else {
        unaff_x25 = uVar11;
        if (uVar13 <= uVar11) {
          uVar9 = 0;
          if (uVar13 != 0) {
            uVar9 = uVar11 / uVar13;
          }
          unaff_x25 = uVar11 - uVar9 * uVar13;
        }
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x30) + unaff_x25 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10872b8a8;
            uVar9 = plVar12[1];
            if (uVar9 != uVar11) break;
            puVar5 = (undefined1 *)(param_1 + 0x50);
            FUN_1086a9f40(puVar5,plVar12 + 2,param_2);
            if (((ulong)puVar5 & 1) != 0) goto LAB_10872ba20;
          }
          if ((uVar13 & uVar14) == 0) {
            uVar9 = uVar9 & uVar14;
          }
          else if (uVar13 <= uVar9) {
            uVar2 = 0;
            if (uVar13 != 0) {
              uVar2 = uVar9 / uVar13;
            }
            uVar9 = uVar9 - uVar2 * uVar13;
          }
        } while (uVar9 == unaff_x25);
      }
    }
LAB_10872b8a8:
    plVar6 = (long *)0x168;
    __Znwm();
    plVar12 = (long *)(param_1 + 0x40);
    uStack_290 = 0;
    *plVar6 = 0;
    plVar6[1] = uVar11;
    plStack_2a0 = plVar6;
    plStack_298 = plVar12;
    FUN_10865ecd8(plVar6 + 2,param_2);
    *(undefined1 *)(plVar6 + 6) = 0;
    *(undefined1 *)(plVar6 + 0x2c) = 0;
    uStack_290 = CONCAT71(uStack_290._1_7_,1);
    if ((uVar13 == 0) ||
       (*(float *)(param_1 + 0x50) * (float)uVar13 < (float)(*(long *)(param_1 + 0x48) + 1))) {
      func_0x00010872d58c();
      bVar3 = 2 < uVar13;
      bVar4 = uVar13 == 3;
      func_0x00010872d450();
      uVar1 = extraout_x8;
      if (!bVar3 || bVar4) {
        uVar1 = extraout_x9;
      }
      FUN_10872d02c(param_1 + 0x30,uVar1);
      uVar13 = *(ulong *)(param_1 + 0x38);
      if ((uVar13 & uVar13 - 1) == 0) {
        unaff_x25 = uVar13 - 1 & uVar11;
      }
      else {
        unaff_x25 = uVar11;
        if (uVar13 <= uVar11) {
          uVar14 = 0;
          if (uVar13 != 0) {
            uVar14 = uVar11 / uVar13;
          }
          unaff_x25 = uVar11 - uVar14 * uVar13;
        }
      }
    }
    lVar8 = *(long *)(param_1 + 0x30);
    plVar10 = *(long **)(lVar8 + unaff_x25 * 8);
    if (plVar10 == (long *)0x0) {
      *plVar6 = *plVar12;
      *plVar12 = (long)plVar6;
      *(long **)(lVar8 + unaff_x25 * 8) = plVar12;
      if (*plVar6 != 0) {
        uVar11 = *(ulong *)(*plVar6 + 8);
        if ((uVar13 & uVar13 - 1) == 0) {
          uVar11 = uVar11 & uVar13 - 1;
        }
        else if (uVar13 <= uVar11) {
          uVar14 = 0;
          if (uVar13 != 0) {
            uVar14 = uVar11 / uVar13;
          }
          uVar11 = uVar11 - uVar14 * uVar13;
        }
        *(long **)(lVar8 + uVar11 * 8) = plVar6;
      }
    }
    else {
      *plVar6 = *plVar10;
      *plVar10 = (long)plVar6;
    }
    plStack_2a0 = (long *)0x0;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    func_0x00010872ccac();
    puVar5 = (undefined1 *)pplVar7;
LAB_10872ba20:
    func_0x00010872d5e8();
    func_0x00010872d5dc();
    if (puVar5 == (undefined1 *)0x0) goto LAB_10872ba38;
  }
  else {
    FUN_10872d010(auStack_180,param_3);
    if (cStack_68 != '\x01') goto LAB_10872b804;
    if ((uStack_170 >> 7 & 1) == 0) {
      if ((uStack_170 >> 0xc & 1) != 0) {
        lVar8 = 2;
        goto LAB_10872b948;
      }
    }
    else {
      lVar8 = 1;
LAB_10872b948:
      if ((*(byte *)(param_1 + 0x58 + lVar8) & 1) == 0) goto LAB_10872ba38;
    }
    puVar5 = (undefined1 *)(param_1 + 0x30);
    FUN_10872cb08(puVar5,param_2);
    if (puVar5 != (undefined1 *)0x0) {
      if (puVar5[0x160] == '\x01') {
        FUN_10872cbcc(&plStack_2a0,puVar5 + 0x30);
        if ((puVar5[0x160] != '\x01') || (*(ulong *)(puVar5 + 0x110) < uStack_a0))
        goto LAB_10872ba80;
      }
      else {
        plStack_2a0 = (long *)((ulong)plStack_2a0 & 0xffffffffffffff00);
        uStack_188 = 0;
LAB_10872ba80:
        func_0x00010872d5e8();
      }
      FUN_10872cd14(&plStack_2a0);
      goto LAB_10872ba38;
    }
    func_0x00010872d5dc();
    if (puVar5 == (undefined1 *)0x0) {
      func_0x00010872d510();
      goto LAB_10872ba38;
    }
    if (uStack_a0 < *(ulong *)(puVar5 + 0x110)) goto LAB_10872ba38;
    func_0x00010872d510();
  }
  func_0x00010872d218(param_1 + 8,puVar5);
LAB_10872ba38:
  FUN_10872cd14(auStack_180);
  return;
}



/* Entry: 10872bad4; end: 10872bb1f;  */

void FUN_10872bad4(void)

{
  undefined1 in_ZR;
  
  func_0x00010872d618();
  if ((bool)in_ZR) {
    func_0x00010872d444();
    func_0x000107c28dc8();
    func_0x00010872d4a0();
    func_0x00010872d4ac();
  }
  return;
}



/* Entry: 10872bb20; end: 10872bb8b;  */

void FUN_10872bb20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_178 [304];
  undefined1 uStack_48;
  undefined1 auStack_40 [32];
  
  func_0x000107c29ee4(auStack_40,param_2);
  auStack_178[0] = 0;
  uStack_48 = 0;
  FUN_10872b79c(param_1,auStack_40,auStack_178);
  func_0x00010872d34c(auStack_178);
  func_0x000107c2a2e0(auStack_40);
  return;
}



/* Entry: 10872bb8c; end: 10872bbeb;  */

void FUN_10872bb8c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *puVar1 = &PTR_FUN_110a696a8;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  *(undefined2 *)(puVar1 + 0xb) = *(undefined2 *)(param_2 + 0x29);
  *(undefined1 *)((long)puVar1 + 0x5a) = *(undefined1 *)(param_2 + 0x2b);
  *param_1 = puVar1;
  return;
}



/* Entry: 10872bbec; end: 10872c0e3;  */

void FUN_10872bbec(long param_1,long *param_2)

{
  bool bVar1;
  undefined **ppuVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  uint uVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  undefined1 auStack_288 [200];
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [16];
  long lStack_98;
  undefined1 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = *param_2;
  if ((((lVar8 != 0) && (___dynamic_cast(lVar8,&PTR_DAT_110a69600,&PTR_DAT_110a69610,0), lVar8 != 0)
       ) && ((uVar10 = *(ulong *)(lVar8 + 0x20), uVar10 != 0 || (*(long *)(lVar8 + 0x48) != 0)))) &&
     ((*(char *)(param_1 + 0x28) == '\x01' && (*(char *)(param_1 + 0x2c) == '\x01')))) {
    plVar11 = *(long **)(param_1 + 8);
    lStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    if (uVar10 != 0) {
      if (0x147ae147ae147ae < uVar10) {
        FUN_108686d98();
LAB_10872c024:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10872c028);
        (*pcVar7)();
      }
      FUN_10872c258(auStack_288,uVar10,0,&uStack_290);
      FUN_10872c16c(&lStack_2a0,auStack_288);
      func_0x00010872c354(auStack_288);
    }
    plVar14 = (long *)(lVar8 + 0x18);
    while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
      lVar13 = plVar14[0x29];
      lVar3 = plVar14[0x2a];
      lStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      for (; lVar13 != lVar3; lVar13 = lVar13 + 0x28) {
        uVar6 = *(int *)(lVar13 + 0x20) - 2;
        if (uVar6 < 3) {
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
          ppuVar2 = &PTR_PTR_11326cb58;
          if (*(undefined ***)(lVar13 + 0x18) != (undefined **)0x0) {
            ppuVar2 = *(undefined ***)(lVar13 + 0x18);
          }
          func_0x000107c29ee0(&uStack_110,ppuVar2);
          if (uStack_b8 < uStack_b0) {
            func_0x00010872d600();
            uVar10 = uStack_b8 + 0x20;
          }
          else {
            plVar9 = &lStack_c0;
            FUN_10862c008(plVar9,((long)(uStack_b8 - lStack_c0) >> 5) + 1);
            FUN_10862bd90(auStack_a8,plVar9,(long)(uStack_b8 - lStack_c0) >> 5,&uStack_b0);
            func_0x00010872d600(lStack_98);
            lStack_98 = lStack_98 + 0x20;
            FUN_10862bd10(&lStack_c0,auStack_a8);
            uVar10 = uStack_b8;
            func_0x00010862bf9c(auStack_a8);
          }
          uStack_b8 = uVar10;
          func_0x000107c27914(&uStack_110);
        }
      }
      ppuVar2 = &PTR_PTR_11326cb58;
      if ((undefined **)plVar14[0x13] != (undefined **)0x0) {
        ppuVar2 = (undefined **)plVar14[0x13];
      }
      func_0x000107c29ee0(auStack_d8,ppuVar2);
      cVar4 = *(char *)((plVar14[0x12] & 0xfffffffffffffffcU) + 0x17);
      if (cVar4 < '\0') {
        if (*(long *)((plVar14[0x12] & 0xfffffffffffffffcU) + 8) != 0) goto LAB_10872bdc4;
LAB_10872bdd8:
        auStack_a8[0] = 0;
        uStack_90 = 0;
      }
      else {
        if (cVar4 == '\0') goto LAB_10872bdd8;
LAB_10872bdc4:
        func_0x000107c27f70(auStack_a8);
      }
      FUN_108845eac(auStack_f0,plVar14 + 6);
      FUN_108686df4(&uStack_80,&lStack_c0);
      uStack_108 = uStack_78;
      uStack_110 = uStack_80;
      uStack_100 = uStack_70;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      FUN_10862bb24();
      uStack_f8 = 1;
      uVar6 = *(uint *)(plVar14 + 8);
      bVar1 = (uVar6 >> 0xc & 1) != 0;
      if (bVar1) {
        FUN_108844330(&uStack_1c0,plVar14[0x1f]);
        uStack_168 = uStack_1b8;
        uStack_170 = uStack_1c0;
        lStack_160 = lStack_1b0;
        uStack_1b8 = 0;
        lStack_1b0 = 0;
        uStack_1c0 = 0;
        uStack_158 = uStack_1a8;
        uStack_148 = uStack_198;
        uStack_150 = uStack_1a0;
        uStack_140 = uStack_190;
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        uStack_128 = uStack_178;
        uStack_130 = uStack_180;
        uStack_138 = uStack_188;
      }
      else {
        uStack_170 = uStack_170 & 0xffffffffffffff00;
      }
      uStack_120 = bVar1;
      FUN_10862ba10(auStack_288,auStack_d8,auStack_a8,auStack_f0,&uStack_110,&uStack_170);
      func_0x000107c279f8(&uStack_170);
      if ((uVar6 >> 0xc & 1) != 0) {
        func_0x000104be1234(&uStack_1c0);
      }
      FUN_10862bb04(&uStack_110);
      func_0x000107c27a04(auStack_f0);
      func_0x000107c279a4(auStack_a8);
      func_0x000107c27914(auStack_d8);
      FUN_10862bb24(&lStack_c0);
      if (uStack_298 < uStack_290) {
        func_0x00010872c2a4(uStack_298,auStack_288);
        uVar10 = uStack_298 + 200;
      }
      else {
        lVar13 = (long)(uStack_298 - lStack_2a0) / 200;
        uVar10 = lVar13 + 1;
        if (0x147ae147ae147ae < uVar10) {
          FUN_108686d98();
          goto LAB_10872c024;
        }
        uVar5 = (long)(uStack_290 - lStack_2a0) / 200;
        uVar12 = uVar5 * 2;
        if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
          uVar12 = uVar10;
        }
        if (0xa3d70a3d70a3d6 < uVar5) {
          uVar12 = 0x147ae147ae147ae;
        }
        FUN_10872c258(&uStack_170,uVar12,lVar13,&uStack_290);
        func_0x00010872c2a4(lStack_160,auStack_288);
        lStack_160 = lStack_160 + 200;
        FUN_10872c16c(&lStack_2a0,&uStack_170);
        uVar10 = uStack_298;
        func_0x00010872c354(&uStack_170);
      }
      uStack_298 = uVar10;
      func_0x000108686fcc(auStack_288);
    }
    uStack_170 = 0;
    uStack_168 = 0;
    lStack_160 = 0;
    func_0x000107c27ab0(&uStack_170,*(undefined8 *)(lVar8 + 0x48));
    plVar14 = (long *)(lVar8 + 0x40);
    while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
      func_0x000107c29ee0(auStack_288,plVar14 + 2);
      func_0x000107c27ac4(&uStack_170,auStack_288);
      func_0x000107c27914(auStack_288);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11,&lStack_2a0,&uStack_170);
    func_0x000107c27a04(&uStack_170);
    func_0x000107c28c78(&lStack_2a0);
  }
  return;
}



/* Entry: 10872c0e4; end: 10872c0e7;  */

undefined8 * FUN_10872c0e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69638;
  func_0x000107c28808(param_1 + 3);
  func_0x000107c286f8(param_1 + 1);
  return param_1;
}



/* Entry: 10872c0e8; end: 10872c0fb;  */

void FUN_10872c0e8(void)

{
  FUN_10872d36c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10872c0fc; end: 10872c0ff;  */

undefined8 * FUN_10872c0fc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a696a8;
  plVar2 = (long *)param_1[8];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x00010872ccec(lVar1);
    func_0x00010872d520();
  }
  lVar1 = param_1[6];
  param_1[6] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar2 = (long *)param_1[3];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x00010872cc84(lVar1);
    func_0x00010872d520();
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10872c100; end: 10872c113;  */

void FUN_10872c100(void)

{
  FUN_10872d3a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10872c114; end: 10872c16b;  */

undefined8 * FUN_10872c114(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[2];
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[2] = uVar2;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  func_0x000107c27914(&uStack_38);
  return param_1;
}



/* Entry: 10872c16c; end: 10872c257;  */

void FUN_10872c16c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -200) * 200;
  lStack_50 = lVar5;
  lStack_48 = lVar5;
  func_0x00010872d574();
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 200) {
    func_0x00010872c2a4(lVar2,lVar3);
    lVar2 = lStack_48 + 200;
    lStack_48 = lVar2;
  }
  uStack_58 = 1;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 200) {
    func_0x000108686fcc(lVar4);
  }
  FUN_108686f5c(auStack_70);
  param_2[1] = lVar5;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



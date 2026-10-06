/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083d09d4; end: 1083d0a5f;  */

long * FUN_1083d09d4(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x0001083d34ac();
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    lVar3 = *unaff_x20;
    plVar1 = (long *)(*unaff_x19 + (long)iVar2 * 8);
    *unaff_x20 = 0;
    *plVar1 = lVar3;
  }
  else {
    plVar1 = unaff_x19;
    FUN_1083d2938(0x3ff8000000000000);
    lVar3 = *unaff_x20;
    plVar1 = plVar1 + (int)unaff_x19[1];
    *unaff_x20 = 0;
    *plVar1 = lVar3;
    FUN_1083d28e8();
    iVar2 = (int)unaff_x19[1];
  }
  *(int *)(unaff_x19 + 1) = iVar2 + 1;
  return plVar1;
}



/* Entry: 1083d0a60; end: 1083d0aa7;  */

long FUN_1083d0a60(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = param_1;
  *(undefined8 *)(param_1 + 0x18) = 0x400000000;
  FUN_1083d27cc(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



/* Entry: 1083d0aa8; end: 1083d0ae3;  */

void FUN_1083d0aa8(undefined8 *param_1)

{
  undefined4 unaff_w19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x0001083d3724();
  func_0x0001083d3598();
  *(undefined4 *)(param_1 + 1) = unaff_w19;
  *(undefined4 *)((long)param_1 + 0xc) = 0x2b;
  param_1[2] = unaff_x20;
  *param_1 = &PTR_DAT_110a44600;
  *unaff_x21 = param_1;
  return;
}



/* Entry: 1083d0ae4; end: 1083d0b43;  */

void FUN_1083d0ae4(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar2 = *param_4;
  if (*param_4 == 0) {
    FUN_1083d0aa8(&lStack_28,*(undefined8 *)(**(long **)(*param_2 + 0x28) + 0xe8));
    lVar1 = *param_4;
    *param_4 = lStack_28;
    lVar2 = lStack_28;
    if (lVar1 != 0) {
      func_0x0001083d314c();
      lVar2 = *param_4;
    }
  }
  *param_4 = 0;
  *param_1 = lVar2;
  return;
}



/* Entry: 1083d0b44; end: 1083d0cc3;  */

bool FUN_1083d0b44(long *param_1,int param_2,undefined4 param_3,code *param_4,ulong param_5,
                  long *param_6)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  FUN_1083cbed4();
  FUN_1083cf840();
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    if ((param_5 & 1) != 0) {
      param_4 = *(code **)(*(long *)((long)param_1 + ((long)param_5 >> 1)) +
                          ((ulong)param_4 & 0xffffffff));
    }
    (*param_4)(&lStack_48);
    bVar1 = lStack_48 != 0;
    if (lStack_48 != 0) {
      uStack_50 = *(undefined4 *)(*param_6 + 8);
      puVar2 = &uStack_50;
      FUN_1083d0cc4(puVar2,*(undefined4 *)(lStack_48 + 8));
      lStack_68 = lStack_48;
      uVar4 = *(undefined8 *)(*param_1 + 0x28);
      lStack_60 = *param_6;
      *param_6 = 0;
      lStack_48 = 0;
      FUN_1083d94c8(auStack_58,uVar4,(ulong)puVar2 & 0xffffffff,&lStack_60,param_3,&lStack_68);
      FUN_1083d0ae4(&uStack_50,param_1,(ulong)puVar2 & 0xffffffff,auStack_58);
      lVar3 = *param_6;
      *param_6 = CONCAT44(uStack_4c,uStack_50);
      if (lVar3 != 0) {
        func_0x0001083d314c();
      }
      func_0x0001083d34e4();
      if (lVar3 != 0) {
        func_0x0001083d314c();
      }
      func_0x0001083d3760();
      if (lVar3 != 0) {
        func_0x0001083d314c();
      }
      func_0x0001083d3468();
      if (lVar3 != 0) {
        func_0x0001083d314c();
      }
      func_0x0001083d3754();
      if (lVar3 != 0) {
        func_0x0001083d314c();
      }
    }
  }
  return bVar1;
}



/* Entry: 1083d0cc4; end: 1083d0d03;  */

uint FUN_1083d0cc4(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = (((int)(param_2 << 8) >> 8) + (param_2 >> 0x18)) - ((int)(uVar1 << 8) >> 8);
  if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  if ((uVar1 & 0xffffff) != 0xffffff && (param_2 & 0xffffff) != 0xffffff) {
    uVar1 = uVar1 & 0xffffff | iVar2 << 0x18;
  }
  return uVar1;
}



/* Entry: 1083d0d04; end: 1083d0d8f;  */

void FUN_1083d0d04(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *unaff_x19;
  long alStack_48 [3];
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001083d31c0();
  FUN_1083d0d90(alStack_48);
  if (alStack_48[0] == 0) {
LAB_1083d0d64:
    *unaff_x19 = alStack_48[0];
  }
  else {
    do {
      func_0x0001083d3334();
      if (uVar1 != 0x42) goto LAB_1083d0d64;
      func_0x0001083d32b0();
      func_0x0001083d31f8();
    } while ((uVar1 & 1) != 0);
    func_0x0001083d34d8();
    if (CONCAT44(uVar2,uVar1) != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083d0d90; end: 1083d0e1b;  */

void FUN_1083d0d90(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *unaff_x19;
  long alStack_48 [3];
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001083d31c0();
  FUN_1083d0e1c(alStack_48);
  if (alStack_48[0] == 0) {
LAB_1083d0df0:
    *unaff_x19 = alStack_48[0];
  }
  else {
    do {
      func_0x0001083d3334();
      if (uVar1 != 0x43) goto LAB_1083d0df0;
      func_0x0001083d32b0();
      func_0x0001083d31f8();
    } while ((uVar1 & 1) != 0);
    func_0x0001083d34d8();
    if (CONCAT44(uVar2,uVar1) != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083d0e1c; end: 1083d0ea7;  */

void FUN_1083d0e1c(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *unaff_x19;
  long alStack_48 [3];
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001083d31c0();
  FUN_1083d0ea8(alStack_48);
  if (alStack_48[0] == 0) {
LAB_1083d0e7c:
    *unaff_x19 = alStack_48[0];
  }
  else {
    do {
      func_0x0001083d3334();
      if (uVar1 != 0x3d) goto LAB_1083d0e7c;
      func_0x0001083d32b0();
      func_0x0001083d31f8();
    } while ((uVar1 & 1) != 0);
    func_0x0001083d34d8();
    if (CONCAT44(uVar2,uVar1) != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083d0ea8; end: 1083d0f33;  */

void FUN_1083d0ea8(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *unaff_x19;
  long alStack_48 [3];
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001083d31c0();
  FUN_1083d0f34(alStack_48);
  if (alStack_48[0] == 0) {
LAB_1083d0f08:
    *unaff_x19 = alStack_48[0];
  }
  else {
    do {
      func_0x0001083d3334();
      if (uVar1 != 0x3e) goto LAB_1083d0f08;
      func_0x0001083d32b0();
      func_0x0001083d31f8();
    } while ((uVar1 & 1) != 0);
    func_0x0001083d34d8();
    if (CONCAT44(uVar2,uVar1) != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083d0f34; end: 1083d0fbf;  */

void FUN_1083d0f34(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *unaff_x19;
  long alStack_48 [3];
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001083d31c0();
  FUN_1083d0fc0(alStack_48);
  if (alStack_48[0] == 0) {
LAB_1083d0f94:
    *unaff_x19 = alStack_48[0];
  }
  else {
    do {
      func_0x0001083d3334();
      if (uVar1 != 0x3f) goto LAB_1083d0f94;
      func_0x0001083d32b0();
      func_0x0001083d31f8();
    } while ((uVar1 & 1) != 0);
    func_0x0001083d34d8();
    if (CONCAT44(uVar2,uVar1) != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083d0fc0; end: 1083d105b;  */

void FUN_1083d0fc0(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *unaff_x19;
  long alStack_48 [3];
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001083d31c0();
  FUN_1083d105c(alStack_48);
  if (alStack_48[0] == 0) {
LAB_1083d1030:
    *unaff_x19 = alStack_48[0];
  }
  else {
    do {
      func_0x0001083d3334();
      if ((uVar1 != 0x48) && (uVar1 != 0x49)) goto LAB_1083d1030;
      func_0x0001083d31d4();
    } while ((uVar1 & 1) != 0);
    func_0x0001083d34d8();
    if (CONCAT44(uVar2,uVar1) != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083d105c; end: 1083d10fb;  */

void FUN_1083d105c(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *unaff_x19;
  long alStack_48 [3];
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001083d31c0();
  FUN_1083d10fc(alStack_48);
  if (alStack_48[0] == 0) {
LAB_1083d10d0:
    *unaff_x19 = alStack_48[0];
  }
  else {
    do {
      func_0x0001083d3334();
      if (3 < uVar1 - 0x4a) goto LAB_1083d10d0;
      func_0x0001083d31d4();
    } while ((uVar1 & 1) != 0);
    func_0x0001083d34d8();
    if (CONCAT44(uVar2,uVar1) != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083d10fc; end: 1083d1197;  */

void FUN_1083d10fc(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *unaff_x19;
  long alStack_48 [3];
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001083d31c0();
  FUN_1083d1198(alStack_48);
  if (alStack_48[0] == 0) {
LAB_1083d116c:
    *unaff_x19 = alStack_48[0];
  }
  else {
    do {
      func_0x0001083d3334();
      if ((uVar1 != 0x3b) && (uVar1 != 0x3c)) goto LAB_1083d116c;
      func_0x0001083d31d4();
    } while ((uVar1 & 1) != 0);
    func_0x0001083d34d8();
    if (CONCAT44(uVar2,uVar1) != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083d1198; end: 1083d1233;  */

void FUN_1083d1198(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *unaff_x19;
  long alStack_48 [3];
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001083d31c0();
  FUN_1083d1234(alStack_48);
  if (alStack_48[0] == 0) {
LAB_1083d1208:
    *unaff_x19 = alStack_48[0];
  }
  else {
    do {
      func_0x0001083d3334();
      if ((uVar1 != 0x36) && (uVar1 != 0x37)) goto LAB_1083d1208;
      func_0x0001083d31d4();
    } while ((uVar1 & 1) != 0);
    func_0x0001083d34d8();
    if (CONCAT44(uVar2,uVar1) != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083d1234; end: 1083d12c7;  */

void FUN_1083d1234(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *unaff_x19;
  long alStack_48 [3];
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001083d31c0();
  FUN_1083d12c8(alStack_48);
  if (alStack_48[0] == 0) {
LAB_1083d129c:
    *unaff_x19 = alStack_48[0];
  }
  else {
    do {
      func_0x0001083d3334();
      if (2 < uVar1 - 0x38) goto LAB_1083d129c;
      func_0x0001083d31d4();
    } while ((uVar1 & 1) != 0);
    func_0x0001083d34d8();
    if (CONCAT44(uVar2,uVar1) != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083d12c8; end: 1083d20f3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083d12c8(long *******param_1,long *******param_2,long *******param_3,undefined8 param_4,
                  long *******param_5)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  ulong uVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  long *****ppppplVar12;
  long *******ppppppplVar13;
  int iVar14;
  int iVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *******ppppppplVar16;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long *******extraout_x10;
  long *******extraout_x10_00;
  long *******extraout_x10_01;
  long *******extraout_x10_02;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  uint uVar17;
  long *******unaff_x19;
  long *******ppppppplVar18;
  int iVar19;
  long *******unaff_x23;
  long *******unaff_x24;
  long *******unaff_x25;
  long *******ppppppplVar20;
  long *******unaff_x26;
  undefined1 auStack_1e8 [8];
  long ******pppppplStack_1e0;
  undefined1 auStack_1d8 [8];
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  ulong uStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  long ******pppppplStack_168;
  long *******ppppppplStack_160;
  undefined4 uStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  undefined4 uStack_138;
  long ******pppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  undefined4 uStack_e8;
  long ******pppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******appppppplStack_c0 [2];
  long *******ppppppplStack_b0;
  undefined8 uStack_a8;
  long *******ppppppplStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  
  ppppppplVar16 = param_2;
  func_0x0001083d335c();
  uStack_158 = 0;
  ppppppplStack_160 = ppppppplVar16;
  uStack_80 = extraout_x8;
  func_0x0001083cbf08();
  iVar14 = (int)ppppppplVar16;
  uVar7 = iVar14 + -0x34 == 3;
  ppppppplVar18 = (long *******)0x0;
  switch(iVar14 + -0x34) {
  case 0:
    ppppppplVar18 = (long *******)0x20;
    break;
  case 1:
    ppppppplVar18 = (long *******)0x21;
    break;
  case 2:
    break;
  case 3:
    ppppppplVar18 = (long *******)0x1;
    break;
  default:
    if (iVar14 == 0x40) {
      ppppppplVar18 = (long *******)0xb;
      uVar7 = true;
      break;
    }
    if (iVar14 == 0x44) {
      ppppppplVar18 = (long *******)0x7;
      uVar7 = true;
      break;
    }
    uStack_138 = 0;
    uStack_e8 = 0;
    ppppppplStack_140 = param_2;
    ppppppplStack_f0 = param_2;
    func_0x0001083d3334();
    iVar15 = (int)ppppppplVar16;
    unaff_x19 = (long *******)((ulong)ppppppplVar16 >> 0x20);
    iVar14 = (int)param_3;
    uVar17 = (uint)((ulong)ppppppplVar16 >> 0x20);
    if (iVar15 - 4U < 2) {
      unaff_x23 = ppppppplVar16;
      ppppppplVar18 = param_3;
      func_0x0001083d3460();
      if (((int)unaff_x23 != 4) && ((int)unaff_x23 != 5)) {
        ppppppplVar9 = unaff_x23;
        func_0x0001083d35e8();
        ppppppplStack_120 = ppppppplVar9;
        ppppppplStack_118 = ppppppplVar18;
        func_0x0001083d3874();
        func_0x0001083d3854(&UNK_10f4920cf);
        func_0x0001083d34c0();
        unaff_x25 = (long *******)&ppppppplStack_a0;
        func_0x0001083d3880();
        func_0x0001083d32cc();
        func_0x0001083cbe04(param_2,unaff_x23);
        func_0x0001083d3474();
        func_0x0001083d349c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppplStack_e0);
      }
      if (0xfe < iVar14) {
        iVar14 = 0xff;
      }
      uVar7 = ((ulong)ppppppplVar16 & 0x8000000000000000) == 0;
      unaff_x19 = (long *******)0xffffff;
      if ((bool)uVar7) {
        unaff_x19 = (long *******)(ulong)(uVar17 & 0xffffff | iVar14 << 0x18);
      }
      func_0x0001083d397c();
      ppppppplVar13 = unaff_x19;
      func_0x0001083c7504(appppppplStack_c0);
      ppppppplStack_a0 = appppppplStack_c0[0];
      appppppplStack_c0[0] = (long *******)0x0;
      param_5 = (long *******)&ppppppplStack_a0;
      func_0x0001083d326c(&ppppppplStack_148);
      ppppppplVar9 = ppppppplStack_a0;
      if (ppppppplStack_a0 != (long *******)0x0) {
        func_0x0001083d314c();
      }
LAB_1083d174c:
      func_0x0001083d3650();
joined_r0x0001083d1794:
      if (ppppppplVar9 != (long *******)0x0) {
        func_0x0001083d314c();
      }
    }
    else {
      unaff_x25 = (long *******)&UNK_110a459d0;
      cVar5 = SBORROW4(iVar15,1);
      cVar6 = iVar15 + -1 < 0;
      uVar7 = iVar15 == 1;
      if ((bool)uVar7) {
        ppppppplStack_120 = (long *******)0xffffffff0000005d;
        ppppppplStack_118 = (long *******)CONCAT44(ppppppplStack_118._4_4_,0xffffffff);
        ppppppplVar13 = (long *******)0x1;
        ppppppplVar9 = param_2;
        FUN_1083cbfb4(param_2,1,&UNK_10f49209d,&ppppppplStack_120);
        ppppppplVar18 = ppppppplStack_120;
        if ((int)ppppppplVar9 == 0) {
LAB_1083d1598:
          ppppppplVar18 = unaff_x24;
          ppppppplStack_100 = (long *******)((ulong)ppppppplStack_100 & 0xffffffff00000000);
        }
        else {
          unaff_x23 = (long *******)((ulong)ppppppplStack_118 & 0xffffffff);
          pppppplVar11 = param_2[9];
          ppppppplVar13 = ppppppplStack_120;
          func_0x0001083cbe30(pppppplVar11,ppppppplStack_120,unaff_x23);
          pppppplStack_e0 = pppppplVar11;
          ppppppplStack_d8 = ppppppplVar13;
          FUN_1083d3dbc();
          if ((int)pppppplVar11 == 0) {
            func_0x000107c27958(appppppplStack_c0,&pppppplStack_e0);
            unaff_x26 = (long *******)&ppppppplStack_a0;
            func_0x0001004c3cd0(&ppppppplStack_a0,&UNK_10f4920ab,appppppplStack_c0);
            func_0x0001083d32cc();
            uVar1 = extraout_x11;
            ppppppplVar9 = extraout_x10;
            if (cVar6 == cVar5) {
              uVar1 = extraout_x8_00;
              ppppppplVar9 = unaff_x26;
            }
            ppppppplVar13 = ppppppplVar18;
            func_0x0001083cbe04(param_2,ppppppplVar18,unaff_x23,ppppppplVar9,uVar1);
            func_0x0001083d3474();
            func_0x0001083d349c();
            unaff_x24 = ppppppplVar18;
            goto LAB_1083d1598;
          }
        }
        if (-1 < (long)ppppppplVar16) {
          uVar7 = iVar14 == 0xff;
        }
        func_0x0001083d36c8();
        fVar4 = ppppppplStack_100._0_4_;
        unaff_x19 = *(long ********)(*extraout_x8_02 + 0xf8);
        ppppppplVar16 = (long *******)0x20;
        FUN_1083d3a60();
        func_0x0001083d3634((double)fVar4);
        param_5 = (long *******)&ppppppplStack_a0;
        ppppppplStack_a0 = ppppppplVar16;
        func_0x0001083d34cc(&ppppppplStack_148);
        FUN_1083d0ae4();
        unaff_x24 = ppppppplVar18;
        ppppppplVar9 = ppppppplStack_a0;
        goto joined_r0x0001083d1794;
      }
      uVar7 = iVar15 == 2;
      if ((bool)uVar7) {
        ppppppplVar13 = (long *******)&ppppppplStack_a0;
        ppppppplVar18 = param_2;
        FUN_1083cd77c();
        if (((ulong)ppppppplVar18 & 1) == 0) {
          ppppppplStack_a0 = (long *******)0x0;
        }
        if (-1 < (long)ppppppplVar16) {
          uVar7 = iVar14 == 0xff;
        }
        func_0x0001083d36c8();
        param_3 = ppppppplStack_a0;
        unaff_x19 = *(long ********)(*extraout_x8_01 + 0x100);
        ppppppplVar18 = (long *******)0x20;
        FUN_1083d3a60();
        func_0x0001083d3634((double)(long)param_3);
        param_5 = (long *******)appppppplStack_c0;
        appppppplStack_c0[0] = ppppppplVar18;
        func_0x0001083d34cc(&ppppppplStack_148);
        FUN_1083d0ae4();
        ppppppplVar9 = appppppplStack_c0[0];
        goto joined_r0x0001083d1794;
      }
      uVar7 = iVar15 == 0x2a;
      ppppppplVar13 = param_3;
      if ((bool)uVar7) {
        ppppppplStack_a0 = (long *******)0x0;
        uStack_98 = 0;
        ppppppplVar9 = ppppppplVar16;
        func_0x0001083d3860();
        if ((int)ppppppplVar9 != 0) {
          if (0xfe < iVar14) {
            iVar14 = 0xff;
          }
          uVar7 = ((ulong)ppppppplVar16 & 0x8000000000000000) == 0;
          unaff_x19 = (long *******)0xffffff;
          if ((bool)uVar7) {
            unaff_x19 = (long *******)(ulong)(uVar17 & 0xffffff | iVar14 << 0x18);
          }
          func_0x0001083d3744();
          FUN_1083ee39c(appppppplStack_c0);
          ppppppplVar9 = (long *******)&ppppppplStack_148;
          param_5 = (long *******)appppppplStack_c0;
          func_0x0001083d326c();
          goto LAB_1083d174c;
        }
LAB_1083d1698:
        ppppppplStack_148 = (long *******)0x0;
      }
      else {
        cVar5 = SBORROW4(iVar15,0x2c);
        cVar6 = iVar15 + -0x2c < 0;
        uVar7 = iVar15 == 0x2c;
        if (!(bool)uVar7) {
          func_0x0001083d3460();
          param_3 = (long *******)((ulong)param_3 & 0xffffffff);
          ppppppplVar9 = (long *******)param_2[9];
          ppppppplVar18 = ppppppplVar16;
          func_0x0001083d35a0();
          ppppppplStack_120 = ppppppplVar9;
          ppppppplStack_118 = ppppppplVar18;
          func_0x0001083d3874();
          func_0x0001083d3854(&UNK_10f492055);
          func_0x0001083d34c0();
          unaff_x19 = (long *******)&ppppppplStack_a0;
          func_0x0001083d3880();
          func_0x0001083d32cc();
          param_5 = extraout_x10_00;
          if (cVar6 == cVar5) {
            param_5 = unaff_x19;
          }
          func_0x0001083d3528(param_2);
          func_0x0001083d3474();
          func_0x0001083d349c();
          ppppppplVar9 = &pppppplStack_e0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          *(undefined1 *)(param_2 + 8) = 1;
          ppppppplVar13 = ppppppplVar16;
          goto LAB_1083d1698;
        }
        func_0x0001083d3460();
        ppppppplVar9 = (long *******)&ppppppplStack_f0;
        FUN_1083cf840();
        if (((ulong)ppppppplVar9 & 1) == 0) goto LAB_1083d1698;
        ppppppplVar9 = (long *******)&ppppppplStack_148;
        func_0x0001083d3428();
        unaff_x23 = ppppppplStack_148;
        if (ppppppplStack_148 == (long *******)0x0) goto LAB_1083d1698;
        func_0x0001083d32e0(param_2);
        if ((long)ppppppplVar16 < 0) {
          ppppppplVar13 = (long *******)0xffffff;
        }
        else {
          uVar7 = iVar14 == 0xff;
          if (0xfe < iVar14) {
            iVar14 = 0xff;
          }
          ppppppplVar13 = (long *******)(ulong)(uVar17 & 0xffffff | iVar14 << 0x18);
        }
        ppppppplVar9 = param_2;
        func_0x0001083cc2c8();
        *(int *)(unaff_x23 + 1) = (int)ppppppplVar9;
      }
    }
    func_0x0001083d3168(uStack_e8);
    if (ppppppplStack_148 == (long *******)0x0) {
      *param_1 = (long ******)0x0;
      ppppppplVar18 = ppppppplStack_148;
    }
    else {
      unaff_x24 = (long *******)appppppplStack_c0;
      unaff_x26 = (long *******)&ppppppplStack_a0;
      ppppppplStack_178 = param_1;
LAB_1083d1814:
      do {
        ppppppplVar18 = ppppppplStack_148;
        unaff_x25 = (long *******)0x35100000000000;
        unaff_x23 = (long *******)0x1;
        func_0x0001083d3334();
        uVar7 = (uint)ppppppplVar9 == 0x35;
        ppppppplVar16 = param_3;
        if (0x35 < (uint)ppppppplVar9) break;
        uVar7 = false;
        ppppppplVar20 = ppppppplVar13;
        if ((1L << ((ulong)ppppppplVar9 & 0x3f) & 0x35100000000000U) == 0) {
          uVar7 = ((ulong)ppppppplVar9 & 0xffffffff) == 1;
          if (!(bool)uVar7) break;
          uStack_180 = uStack_180 & 0xffffffff00000000 | (ulong)ppppppplVar13 & 0xffffffff;
          pppppplVar11 = param_2[9];
          func_0x0001083cbe30();
          uVar7 = *(char *)pppppplVar11 == '.';
          ppppppplVar20 = ppppppplVar9;
          if (!(bool)uVar7) break;
        }
        ppppppplVar16 = (long *******)&ppppppplStack_140;
        FUN_1083cf840();
        if ((int)ppppppplVar16 == 0) {
          *param_1 = (long ******)0x0;
          ppppppplStack_148 = (long *******)0x0;
          func_0x0001083d3158();
          goto LAB_1083d1df0;
        }
        ppppppplStack_148 = (long *******)0x0;
        uStack_e8 = 0;
        ppppppplStack_f0 = param_2;
        func_0x0001083d3460();
        ppppppplVar9 = (long *******)&ppppppplStack_f0;
        ppppppplVar13 = ppppppplVar20;
        FUN_1083cf840();
        if (((ulong)ppppppplVar9 & 1) == 0) {
LAB_1083d1d54:
          ppppppplStack_150 = (long *******)0x0;
          goto LAB_1083d1d58;
        }
        iVar19 = (int)ppppppplVar16;
        iVar3 = iVar19 + -0x2c;
        cVar6 = SBORROW4(iVar3,9);
        iVar14 = iVar19 + -0x35;
        uVar7 = iVar3 == 9;
        uVar17 = (uint)((ulong)ppppppplVar16 >> 0x20);
        iVar15 = (int)ppppppplVar20;
        switch(iVar3) {
        case 0:
          uStack_a8 = 0x400000000;
          ppppppplStack_b0 = unaff_x24;
          func_0x0001083d3334();
          param_1 = ppppppplStack_178;
          uVar7 = (int)ppppppplVar9 == 0x2d;
          if (!(bool)uVar7) {
            do {
              func_0x0001083d3924(&ppppppplStack_a0);
              if (ppppppplStack_a0 == (long *******)0x0) {
                ppppppplStack_150 = (long *******)0x0;
                goto code_r0x0001083d1d90;
              }
              ppppppplVar13 = (long *******)&ppppppplStack_a0;
              FUN_1083c7ed8(unaff_x24 + 2);
              unaff_x19 = param_2;
              func_0x0001083d32c0();
              ppppppplVar9 = ppppppplStack_a0;
              ppppppplStack_a0 = (long *******)0x0;
              if (ppppppplVar9 != (long *******)0x0) {
                func_0x0001083d314c();
              }
            } while (((ulong)unaff_x19 & 1) != 0);
          }
          ppppppplVar9 = param_2;
          func_0x0001083d3318(param_2,0x2d,&UNK_10f491fef);
          func_0x0001083d32a4();
          FUN_1083c8078(&pppppplStack_e0,appppppplStack_c0);
          ppppppplVar16 = (long *******)(*param_2)[5];
          ppppppplStack_100 = ppppppplVar18;
          FUN_1083c8078(&ppppppplStack_a0,&pppppplStack_e0);
          unaff_x19 = (long *******)((ulong)ppppppplVar9 & 0xffffffff);
          ppppppplVar13 = unaff_x19;
          FUN_1083e0960(&ppppppplStack_120,ppppppplVar16,unaff_x19,&ppppppplStack_100,
                        &ppppppplStack_a0);
          ppppppplVar18 = (long *******)&ppppppplStack_150;
          param_5 = (long *******)&ppppppplStack_120;
          func_0x0001083d326c();
          func_0x0001083d39b8();
          if (ppppppplVar18 != (long *******)0x0) {
            func_0x0001083d314c();
          }
          FUN_1083c81d4(unaff_x26 + 2);
          ppppppplVar9 = ppppppplStack_100;
          ppppppplStack_100 = (long *******)0x0;
          if (ppppppplVar9 != (long *******)0x0) {
            func_0x0001083d314c();
          }
          func_0x0001083d3670(&pppppplStack_e0);
          ppppppplVar18 = (long *******)0x0;
code_r0x0001083d1d90:
          func_0x0001083d3844();
          break;
        case 4:
          ppppppplVar13 = (long *******)0x31;
          ppppppplVar9 = param_2;
          func_0x0001083d333c();
          param_1 = ppppppplStack_178;
          if ((int)ppppppplVar9 == 0) {
            ppppppplVar9 = (long *******)&ppppppplStack_a0;
            func_0x0001083d3428();
            ppppppplVar16 = ppppppplStack_a0;
            if (ppppppplStack_a0 == (long *******)0x0) goto LAB_1083d1d54;
            ppppppplVar9 = param_2;
            func_0x0001083d3318(param_2,0x31,&UNK_10f491f99);
            func_0x0001083d32a4();
            func_0x0001083d3614();
            ppppppplStack_100 = ppppppplVar16;
            unaff_x19 = (long *******)((ulong)ppppppplVar9 & 0xffffffff);
            ppppppplVar13 = unaff_x19;
            ppppppplStack_120 = ppppppplVar18;
            FUN_1083e6ae8(appppppplStack_c0,extraout_x9_00,unaff_x19,&ppppppplStack_120,
                          &ppppppplStack_100);
            ppppppplVar18 = (long *******)&ppppppplStack_150;
            param_5 = (long *******)appppppplStack_c0;
            func_0x0001083d326c();
            func_0x0001083d3650();
            if (ppppppplVar18 != (long *******)0x0) {
              func_0x0001083d314c();
            }
            ppppppplVar9 = ppppppplStack_100;
            ppppppplStack_100 = (long *******)0x0;
            if (ppppppplVar9 != (long *******)0x0) {
              func_0x0001083d314c();
            }
            func_0x0001083d39b8();
            goto joined_r0x0001083d18e0;
          }
          ppppppplVar9 = param_2;
          func_0x0001083cc300(param_2,ppppppplVar16,(ulong)ppppppplVar20 & 0xffffffff);
          param_5 = (long *******)0x15;
          func_0x0001083cc2b4(param_2,(ulong)ppppppplVar9 & 0xffffffff,&UNK_10f491f83);
          func_0x0001083d32a4();
          func_0x0001083d36c8();
          ppppppplVar13 = *(long ********)(*extraout_x8_05 + 0xe8);
          ppppppplVar9 = (long *******)&ppppppplStack_150;
          FUN_1083d0aa8();
          break;
        case 6:
          ppppppplStack_a0 = (long *******)0x0;
          uStack_98 = 0;
          func_0x0001083d3860();
          if ((int)ppppppplVar9 == 0) {
LAB_1083d1b1c:
            unaff_x24 = (long *******)param_2[9];
            ppppppplVar9 = ppppppplVar16;
            func_0x0001083cbe30(unaff_x24,ppppppplVar16,(ulong)ppppppplVar20 & 0xffffffff);
            unaff_x26 = (long *******)((long)unaff_x24 + 1);
            ppppppplVar20 = (long *******)((long)ppppppplVar9 + -1);
            ppppppplStack_100 = unaff_x26;
            ppppppplStack_f8 = ppppppplVar20;
            func_0x0001083d32a4();
            if (0xfe < iVar15) {
              iVar15 = 0xff;
            }
            uVar2 = 0xffffff;
            if (((ulong)ppppppplVar16 & 0x8000000000000000) == 0) {
              uVar2 = uVar17 & 0xffffff | iVar15 << 0x18;
            }
            unaff_x19 = (long *******)
                        (ulong)((uVar2 & 0xff000000 | uVar2 + 1 & 0xffffff) - 0x1000000);
            param_1 = unaff_x24;
            func_0x0001083d37b4();
            func_0x0001083cc2c8();
            ppppppplVar13 = param_2;
            FUN_1083cbc70();
            iVar14 = (int)ppppppplVar13;
            cVar5 = SBORROW4(iVar14,0x2a);
            cVar6 = iVar14 + -0x2a < 0;
            uVar7 = iVar14 == 0x2a;
            if ((bool)uVar7) {
              ppppppplVar16 = ppppppplVar13;
              func_0x0001083d32a4();
              ppppppplVar20 = ppppppplVar16;
              func_0x0001083d37b4();
              func_0x0001083cc2c8();
              ppppppplStack_108 = ppppppplVar18;
              func_0x000107c27958(appppppplStack_c0,&ppppppplStack_100);
              pppppplVar11 = param_2[9];
              func_0x0001083cbe30(pppppplVar11,ppppppplVar13,(ulong)ppppppplVar9 & 0xffffffff);
              pppppplStack_130 = pppppplVar11;
              ppppppplStack_128 = ppppppplVar13;
              func_0x000107c27958(&ppppppplStack_120,&pppppplStack_130);
              func_0x0001083d3714();
              func_0x00010533a9c0(&ppppppplStack_a0,appppppplStack_c0,&ppppppplStack_120);
              func_0x0001083d32cc();
              uVar1 = extraout_x11_01;
              ppppppplVar18 = extraout_x10_02;
              if (cVar6 == cVar5) {
                uVar1 = extraout_x8_04;
                ppppppplVar18 = unaff_x26;
              }
              param_5 = (long *******)&ppppppplStack_108;
              ppppppplVar13 = param_2;
              FUN_1083d20f4(&ppppppplStack_150,param_2,(ulong)ppppppplVar16 & 0xffffffff,param_5,
                            ppppppplVar18,uVar1,(ulong)ppppppplVar20 & 0xffffffff);
              func_0x0001083d3474();
              func_0x0001083d362c();
              func_0x0001083d349c();
              ppppppplVar9 = ppppppplStack_108;
            }
            else {
              ppppppplVar16 = (long *******)((ulong)unaff_x24 & 0xffffffff);
              if (ppppppplVar20 == (long *******)0x0) {
                param_5 = (long *******)0x2d;
                func_0x0001083cc2b4(param_2,ppppppplVar16,&UNK_10f491fc1);
                func_0x0001083d36c8();
                ppppppplVar13 = *(long ********)(*extraout_x8_06 + 0xe8);
                ppppppplVar9 = (long *******)&ppppppplStack_150;
                FUN_1083d0aa8(ppppppplVar9,ppppppplVar13,ppppppplVar16);
                func_0x0001083d3714();
                break;
              }
              *(long ********)((long)param_2 + 0x84) = ppppppplVar13;
              *(int *)((long)param_2 + 0x8c) = (int)ppppppplVar9;
              param_5 = (long *******)&ppppppplStack_a0;
              ppppppplVar13 = param_2;
              ppppppplStack_a0 = ppppppplVar18;
              FUN_1083d20f4(&ppppppplStack_150,param_2,ppppppplVar16,param_5,unaff_x26,ppppppplVar20
                            ,(ulong)param_1 & 0xffffffff);
              ppppppplVar9 = ppppppplStack_a0;
              func_0x0001083d3714();
            }
          }
          else {
            func_0x0001083d32a4();
            uVar1 = uStack_98;
            ppppppplVar20 = ppppppplStack_a0;
            if (0xfe < iVar15) {
              iVar15 = 0xff;
            }
            uVar7 = ((ulong)ppppppplVar16 & 0x8000000000000000) == 0;
            uVar2 = 0xffffff;
            if ((bool)uVar7) {
              uVar2 = uVar17 & 0xffffff | iVar15 << 0x18;
            }
            ppppppplVar10 = param_2;
            appppppplStack_c0[0] = ppppppplVar18;
            func_0x0001083cc2c8(param_2,uVar2 + (uVar2 >> 0x18) & 0xffffff | 0x1000000);
            param_5 = (long *******)appppppplStack_c0;
            ppppppplVar13 = param_2;
            FUN_1083d20f4(&ppppppplStack_150,param_2,(ulong)ppppppplVar9 & 0xffffffff,param_5,
                          ppppppplVar20,uVar1,(ulong)ppppppplVar10 & 0xffffffff);
            unaff_x19 = ppppppplVar9;
            ppppppplVar9 = appppppplStack_c0[0];
            param_1 = ppppppplStack_178;
          }
          goto joined_r0x0001083d18e0;
        case 8:
        case 9:
          func_0x0001083d32a4();
          func_0x0001083d3614();
          unaff_x19 = (long *******)((ulong)ppppppplVar9 & 0xffffffff);
          uVar7 = iVar19 == 0x34;
          uVar1 = 0x20;
          if (!(bool)uVar7) {
            uVar1 = 0x21;
          }
          ppppppplVar13 = unaff_x19;
          appppppplStack_c0[0] = ppppppplVar18;
          FUN_1083e8ee8(&ppppppplStack_a0,extraout_x9,unaff_x19,appppppplStack_c0,uVar1);
          param_5 = (long *******)&ppppppplStack_a0;
          func_0x0001083d326c(&ppppppplStack_150);
          ppppppplVar9 = ppppppplStack_a0;
          ppppppplStack_a0 = (long *******)0x0;
          if (ppppppplVar9 != (long *******)0x0) {
            func_0x0001083d314c();
          }
          func_0x0001083d3650();
          param_1 = ppppppplStack_178;
joined_r0x0001083d18e0:
          if (ppppppplVar9 != (long *******)0x0) {
            func_0x0001083d314c();
          }
          ppppppplVar18 = (long *******)0x0;
          break;
        default:
          cVar6 = SBORROW4(iVar19,1);
          iVar14 = iVar19 + -1;
          uVar7 = false;
          if (iVar19 == 1) goto LAB_1083d1b1c;
        case 1:
        case 2:
        case 3:
        case 5:
        case 7:
          cVar5 = iVar14 < 0;
          ppppppplVar13 = (long *******)param_2[9];
          ppppppplVar9 = ppppppplVar16;
          func_0x0001083cbe30(ppppppplVar13,ppppppplVar16,(ulong)ppppppplVar20 & 0xffffffff);
          ppppppplStack_100 = ppppppplVar13;
          ppppppplStack_f8 = ppppppplVar9;
          func_0x000107c27958(&ppppppplStack_120,&ppppppplStack_100);
          func_0x0001004c3cd0(appppppplStack_c0,&UNK_10f492012,&ppppppplStack_120);
          func_0x0001083d34c0(&ppppppplStack_a0,appppppplStack_c0);
          func_0x00010048a6c8();
          func_0x0001083d32cc();
          uVar1 = extraout_x11_00;
          param_5 = extraout_x10_01;
          if (cVar5 == cVar6) {
            uVar1 = extraout_x8_03;
            param_5 = unaff_x26;
          }
          ppppppplVar9 = param_2;
          ppppppplVar13 = ppppppplVar16;
          func_0x0001083cbe04(param_2,ppppppplVar16,(ulong)ppppppplVar20 & 0xffffffff,param_5,uVar1)
          ;
          param_1 = ppppppplStack_178;
          func_0x0001083d3474();
          func_0x0001083d349c();
          func_0x0001083d362c();
          ppppppplStack_150 = (long *******)0x0;
        }
LAB_1083d1d58:
        func_0x0001083d3168(uStack_e8);
        ppppppplStack_148 = ppppppplStack_150;
        ppppppplStack_150 = (long *******)0x0;
        param_3 = ppppppplVar16;
        if (ppppppplVar18 == (long *******)0x0) {
          ppppppplVar18 = ppppppplStack_148;
          if (ppppppplStack_148 == (long *******)0x0) break;
          goto LAB_1083d1814;
        }
        func_0x0001083d3158();
        ppppppplVar18 = ppppppplStack_148;
      } while (ppppppplStack_148 != (long *******)0x0);
      unaff_x25 = (long *******)0x35100000000000;
      unaff_x23 = (long *******)0x1;
      *param_1 = (long ******)ppppppplVar18;
      param_3 = ppppppplVar16;
    }
LAB_1083d1df0:
    func_0x0001083d3168(uStack_138);
    goto LAB_1083d149c;
  }
  func_0x0001083d3460();
  uVar8 = 0;
  FUN_1083cf840();
  param_3 = ppppppplVar16;
  if (((uVar8 & 1) == 0) ||
     (FUN_1083d12c8(&ppppppplStack_a0,param_2), ppppppplStack_a0 == (long *******)0x0)) {
    *param_1 = (long ******)0x0;
  }
  else {
    uVar17 = (uint)((ulong)ppppppplVar16 >> 0x20);
    iVar14 = (((int)(*(uint *)(ppppppplStack_a0 + 1) << 8) >> 8) - uVar17) +
             (*(uint *)(ppppppplStack_a0 + 1) >> 0x18);
    uVar7 = iVar14 == 0xff;
    if (0xfe < iVar14) {
      iVar14 = 0xff;
    }
    unaff_x19 = (long *******)(ulong)(uVar17 & 0xffffff | iVar14 << 0x18);
    ppppppplStack_170 = ppppppplStack_a0;
    FUN_1083e93bc(&pppppplStack_168,(*param_2)[5],unaff_x19,ppppppplVar18,&ppppppplStack_170);
    param_5 = &pppppplStack_168;
    func_0x0001083d326c();
    func_0x0001083d34e4();
    if (param_1 != (long *******)0x0) {
      func_0x0001083d314c();
    }
    func_0x0001083d3468();
    if (param_1 != (long *******)0x0) {
      func_0x0001083d314c();
    }
  }
LAB_1083d149c:
  func_0x0001083d3168(uStack_158);
  func_0x0001083d3278(uStack_80);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001083d3414();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppppplStack_c0);
  func_0x0001083d3168(uStack_e8);
  func_0x0001083d3168(uStack_138);
  func_0x0001083d3128(uStack_158);
  pcStack_188 = FUN_1083d20f4;
  ppppppplVar16 = param_5;
  ppppppplStack_1d0 = unaff_x26;
  ppppppplStack_1c8 = unaff_x25;
  ppppppplStack_1c0 = unaff_x24;
  ppppppplStack_1b8 = unaff_x23;
  ppppppplStack_1b0 = param_3;
  ppppppplStack_1a8 = ppppppplVar18;
  ppppppplStack_1a0 = param_2;
  ppppppplStack_198 = unaff_x19;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x0001083d3724();
  ppppplVar12 = (*ppppppplVar16)[2];
  (*(code *)(*ppppplVar12)[0x1a])();
  if (((ulong)ppppplVar12 & 1) == 0) {
    ppppplVar12 = (*param_5)[2];
    (*(code *)(*ppppplVar12)[0x17])();
    if (((ulong)ppppplVar12 & 1) == 0) {
      func_0x0001083d397c();
      pppppplStack_1e0 = *param_5;
      *param_5 = (long ******)0x0;
      FUN_1083df0b0(auStack_1d8);
      func_0x0001083d326c();
      func_0x0001083d34e4();
      if (ppppppplVar18 != (long *******)0x0) {
        func_0x0001083d314c();
      }
      func_0x0001083d3468();
      ppppppplVar16 = ppppppplVar18;
      goto joined_r0x0001083d21a0;
    }
  }
  func_0x0001083d397c();
  ppppppplVar16 = (long *******)*param_5;
  *param_5 = (long ******)0x0;
  FUN_1083ec3f4(auStack_1e8);
  func_0x0001083d326c();
  func_0x0001083d3760();
  if (ppppppplVar18 != (long *******)0x0) {
    func_0x0001083d314c();
  }
joined_r0x0001083d21a0:
  if (ppppppplVar16 != (long *******)0x0) {
    func_0x0001083d314c();
  }
  return;
}



/* Entry: 1083d20f4; end: 1083d225f;  */

void FUN_1083d20f4(void)

{
  long *plVar1;
  long *in_x3;
  long lVar2;
  long unaff_x21;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  plVar1 = in_x3;
  func_0x0001083d3724();
  plVar1 = *(long **)(*plVar1 + 0x10);
  (**(code **)(*plVar1 + 0xd0))();
  if (((ulong)plVar1 & 1) == 0) {
    plVar1 = *(long **)(*in_x3 + 0x10);
    (**(code **)(*plVar1 + 0xb8))();
    if (((ulong)plVar1 & 1) == 0) {
      func_0x0001083d397c();
      lStack_60 = *in_x3;
      *in_x3 = 0;
      FUN_1083df0b0(auStack_58);
      func_0x0001083d326c();
      func_0x0001083d34e4();
      if (unaff_x21 != 0) {
        func_0x0001083d314c();
      }
      func_0x0001083d3468();
      lVar2 = unaff_x21;
      goto joined_r0x0001083d21a0;
    }
  }
  func_0x0001083d397c();
  lVar2 = *in_x3;
  *in_x3 = 0;
  FUN_1083ec3f4(auStack_68);
  func_0x0001083d326c();
  func_0x0001083d3760();
  if (unaff_x21 != 0) {
    func_0x0001083d314c();
  }
joined_r0x0001083d21a0:
  if (lVar2 != 0) {
    func_0x0001083d314c();
  }
  return;
}



/* Entry: 1083d2260; end: 1083d231b;  */

undefined8 FUN_1083d2260(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001083d3608();
  func_0x0001083d37cc();
  if ((int)param_1 != 0) {
    uVar2 = 0xffffffff0000005d;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
    func_0x0001083cbe30(uVar1,0xffffffff0000005d,0xffffffff);
    *unaff_x19 = uVar1;
    unaff_x19[1] = uVar2;
  }
  return param_1;
}



/* Entry: 1083d231c; end: 1083d23af;  */

undefined8 * FUN_1083d231c(undefined8 *param_1,long *param_2,undefined8 *param_3,int param_4)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = 0;
  if (param_4 != 0) {
    *param_1 = param_2;
    lVar3 = *(long *)(*param_2 + 0x28);
    lVar4 = *(long *)(lVar3 + 0x20);
    uVar1 = *(undefined1 *)(lVar4 + 0x20);
    plVar2 = (long *)0x40;
    __Znwm();
    *plVar2 = lVar4;
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *(undefined1 *)(plVar2 + 4) = uVar1;
    *(undefined1 *)((long)plVar2 + 0x21) = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[5] = 0;
    FUN_1083c5f2c(param_3,plVar2);
    func_0x0001083d35d0();
    *(undefined8 *)(lVar3 + 0x20) = *param_3;
  }
  return param_1;
}



/* Entry: 1083d23b0; end: 1083d23b3;  */

undefined8 * FUN_1083d23b0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_110a444e8;
  if (*(int *)(param_1 + 5) != 0) {
    uVar2 = param_1[4];
    uVar1 = uVar2 + (long)*(int *)(param_1 + 5) * 0x20;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      uVar2 = uVar2 + 0x20;
    } while (uVar2 < uVar1);
  }
  if ((*(byte *)((long)param_1 + 0x2c) & 1) != 0) {
    _free(param_1[4]);
  }
  return param_1;
}



/* Entry: 1083d23b4; end: 1083d23c7;  */

void FUN_1083d23b4(void)

{
  FUN_1083d2510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083d23c8; end: 1083d250f;  */

void FUN_1083d23c8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 extraout_w8;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [24];
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x000107c27958(auStack_80,&uStack_60);
  iVar3 = *(int *)(param_1 + 0x28);
  uStack_68 = param_4;
  if (iVar3 < (int)(*(uint *)(param_1 + 0x2c) >> 1)) {
    func_0x0001083d356c(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x20);
  }
  else {
    if (iVar3 == 0x7fffffff) {
      func_0x00010bdb1a68();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1083d2504);
      (*pcVar4)();
    }
    uStack_48 = 0x7fffffff;
    uStack_50 = 0x20;
    puVar5 = &uStack_50;
    uVar6 = (ulong)(iVar3 + 1);
    FUN_10840fe24(0x3ff8000000000000,puVar5,uVar6);
    lVar7 = 0;
    func_0x0001083d356c(puVar5 + (long)*(int *)(param_1 + 0x28) * 4);
    for (lVar8 = 0; lVar8 < *(int *)(param_1 + 0x28); lVar8 = lVar8 + 1) {
      puVar1 = (undefined8 *)((long)puVar5 + lVar7);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
      uVar10 = puVar2[1];
      uVar9 = *puVar2;
      puVar1[2] = puVar2[2];
      puVar1[1] = uVar10;
      *puVar1 = uVar9;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar2 + 3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                (*(long *)(param_1 + 0x20) + lVar7);
      lVar7 = lVar7 + 0x20;
    }
    if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
      _free(*(undefined8 *)(param_1 + 0x20));
    }
    func_0x0001083d3438(uVar6 >> 5);
    *(undefined8 **)(param_1 + 0x20) = puVar5;
    func_0x0001083d36a4();
    *(undefined4 *)(param_1 + 0x2c) = extraout_w8;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  func_0x0001083d3494();
  return;
}



/* Entry: 1083d2510; end: 1083d258b;  */

undefined8 * FUN_1083d2510(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_110a444e8;
  if (*(int *)(param_1 + 5) != 0) {
    uVar2 = param_1[4];
    uVar1 = uVar2 + (long)*(int *)(param_1 + 5) * 0x20;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      uVar2 = uVar2 + 0x20;
    } while (uVar2 < uVar1);
  }
  if ((*(byte *)((long)param_1 + 0x2c) & 1) != 0) {
    _free(param_1[4]);
  }
  return param_1;
}



/* Entry: 1083d258c; end: 1083d25b7;  */

void FUN_1083d258c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + -8) != 0) {
    lVar1 = *(long *)(param_1 + -8) << 5;
    do {
      if (*(int *)(param_1 + -0x20 + lVar1) != 0) {
        *(undefined4 *)(param_1 + -0x20 + lVar1) = 0;
      }
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 1083d25b8; end: 1083d25f3;  */

void FUN_1083d25b8(undefined8 *param_1,undefined8 *param_2)

{
  func_0x0001083d38a0();
  param_2[1] = 0x1400ffffff;
  *param_2 = &PTR_FUN_110a44700;
  *param_1 = param_2;
  return;
}



/* Entry: 1083d25f4; end: 1083d2617;  */

void FUN_1083d25f4(void)

{
  return;
}



/* Entry: 1083d2618; end: 1083d263b;  */

undefined8 FUN_1083d2618(undefined8 param_1)

{
  FUN_1083d263c(param_1,0);
  return param_1;
}



/* Entry: 1083d263c; end: 1083d2653;  */

void FUN_1083d263c(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083d2654; end: 1083d268f;  */

void FUN_1083d2654(void)

{
  func_0x0001083d3904();
  return;
}



/* Entry: 1083d2690; end: 1083d2727;  */

undefined1 * FUN_1083d2690(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  plVar2 = *(long **)(param_2 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x38))(auStack_50,plVar2,0x11);
    func_0x0001083d380c(&UNK_10f486005);
    puVar3 = auStack_38;
    func_0x00010048a6c8(param_1,puVar3,";");
    func_0x0001083d3374();
    func_0x0001083d3494();
    return puVar3;
  }
  puVar1 = &UNK_10f48e919;
  func_0x00010002b82c(param_1,&UNK_10f48e919);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar1);
  return unaff_x20;
}



/* Entry: 1083d2728; end: 1083d2777;  */

void FUN_1083d2728(void)

{
  return;
}



/* Entry: 1083d2778; end: 1083d27bb;  */

void FUN_1083d2778(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  func_0x0001083d3598();
  *(undefined4 *)(param_2 + 1) = param_3;
  *(undefined4 *)((long)param_2 + 0xc) = 0x2b;
  param_2[2] = uVar1;
  *param_2 = &PTR_DAT_110a44600;
  *param_1 = param_2;
  return;
}



/* Entry: 1083d27bc; end: 1083d27cb;  */

void FUN_1083d27bc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10df20bcd;
  func_0x00010002b82c(param_1,&UNK_10df20bcd);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 1083d27cc; end: 1083d28e7;  */

undefined8 * FUN_1083d27cc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    func_0x0001083d2880(param_1);
    if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) {
      func_0x0001083d28a0(0x3ff0000000000000,param_1,*(undefined4 *)(param_2 + 1));
      iVar1 = *(int *)(param_2 + 1);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 != 0) {
        _memcpy(*param_1,*param_2,(long)iVar1 << 3);
      }
    }
    else {
      if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
        func_0x0001083d3590();
      }
      uVar2 = *param_2;
      *param_2 = 0;
      *param_1 = uVar2;
      *(uint *)((long)param_1 + 0xc) =
           *(uint *)((long)param_2 + 0xc) & 0xfffffffe | *(uint *)((long)param_1 + 0xc) & 1;
      *(uint *)((long)param_2 + 0xc) = *(uint *)((long)param_2 + 0xc) & 1;
      *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_1;
}



/* Entry: 1083d28e8; end: 1083d2937;  */

void FUN_1083d28e8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 extraout_w8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001083d34ac();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001083d3838();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083d3590();
  }
  func_0x0001083d3438(param_3 >> 3);
  *unaff_x19 = unaff_x20;
  func_0x0001083d36a4();
  *(undefined4 *)((long)unaff_x19 + 0xc) = extraout_w8;
  return;
}



/* Entry: 1083d2938; end: 1083d297f;  */

void FUN_1083d2938(undefined8 param_1,long param_2,int param_3)

{
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_2 + 8) ^ 0x7fffffff) < param_3) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1083d295c;
    func_0x00010bdb1a68();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001083d3554(param_1,8);
  return;
}



/* Entry: 1083d2980; end: 1083d2a0f;  */

void FUN_1083d2980(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x0001083d3608();
  func_0x0001083d29b4();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 1083d2a10; end: 1083d2af3;  */

ulong *** FUN_1083d2a10(long param_1)

{
  ulong uVar1;
  ulong ***pppuVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  undefined8 *unaff_x20;
  ulong **ppuVar8;
  long lVar9;
  ulong **ppuVar10;
  ulong **ppuStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong **ppuStack_40;
  ulong **ppuStack_38;
  
  func_0x0001083d34ac();
  pppuVar2 = (ulong ***)(param_1 + 0x10);
  ppuVar8 = *(ulong ***)(param_1 + 8);
  if (ppuVar8 < *pppuVar2) {
    puVar4 = (ulong *)*unaff_x20;
    *unaff_x20 = 0;
    ppuVar10 = ppuVar8 + 1;
    *ppuVar8 = puVar4;
  }
  else {
    lVar9 = (long)ppuVar8 - *unaff_x19;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_1083d2af4();
      FUN_1083cad50(&ppuStack_58);
      func_0x0001083d3320();
      puVar3 = &DAT_10f62a4d8;
      func_0x000104bd47e8();
      func_0x0001083d334c();
      if (puVar3 != (undefined *)0x0) {
        FUN_1083d3a98();
      }
      return pppuVar2;
    }
    uVar5 = (long)*pppuVar2 - *unaff_x19;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    ppuStack_38 = (ulong **)pppuVar2;
    if (uVar6 == 0) {
      ppuStack_58 = (ulong **)0x0;
    }
    else {
      FUN_1083cad10();
      ppuStack_58 = (ulong **)pppuVar2;
    }
    puStack_50 = (ulong *)((long)ppuStack_58 + lVar9);
    ppuStack_40 = ppuStack_58 + uVar6;
    uVar7 = *unaff_x20;
    *unaff_x20 = 0;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = uVar7;
    FUN_1083cacf0();
    ppuVar10 = (ulong **)unaff_x19[1];
    pppuVar2 = &ppuStack_58;
    FUN_1083cad50(pppuVar2);
  }
  unaff_x19[1] = (long)ppuVar10;
  return pppuVar2;
}



/* Entry: 1083d2af4; end: 1083d2b07;  */

void FUN_1083d2af4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x0001083d334c();
  if (puVar1 != (undefined *)0x0) {
    FUN_1083d3a98();
  }
  return;
}



/* Entry: 1083d2b08; end: 1083d2b2b;  */

void FUN_1083d2b08(long param_1)

{
  func_0x0001083d334c();
  if (param_1 != 0) {
    FUN_1083d3a98();
  }
  return;
}



/* Entry: 1083d2b2c; end: 1083d2b4f;  */

void FUN_1083d2b2c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001083d3554(param_1,8,param_2,param_2);
  return;
}



/* Entry: 1083d2b50; end: 1083d2b57;  */

void FUN_1083d2b50(void)

{
  return;
}



/* Entry: 1083d2b58; end: 1083d2bab;  */

void FUN_1083d2b58(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_1083e43a8(auStack_38,*(undefined8 *)(param_2 + 0x10));
  func_0x00010048a6c8(param_1,auStack_38,";");
  func_0x0001083d36c0();
  return;
}



/* Entry: 1083d2bac; end: 1083d2c43;  */

void FUN_1083d2bac(long param_1)

{
  func_0x0001083d334c();
  if (param_1 != 0) {
    FUN_1083d3a98();
  }
  return;
}



/* Entry: 1083d2c44; end: 1083d2c53;  */

void FUN_1083d2c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083d2c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1083d2c54; end: 1083d2caf;  */

long * FUN_1083d2c54(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001082da4ec(lVar1 + 0x10);
    FUN_1083d3a98(lVar1);
  }
  return param_1;
}



/* Entry: 1083d2cb0; end: 1083d2cc7;  */

void FUN_1083d2cb0(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083d2ce4();
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083d2cc8; end: 1083d2ce3;  */

void FUN_1083d2cc8(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083d2ce4();
  }
  FUN_1083d3bc4(param_2);
  if (*param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083d2ce4; end: 1083d2d3b;  */

long FUN_1083d2ce4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28) = 0;
  }
  FUN_1083c8734(param_1 + 0x28);
  return param_1;
}



/* Entry: 1083d2d3c; end: 1083d2d5f;  */

void FUN_1083d2d3c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001083d3554(param_1,0x58,param_2,param_2);
  return;
}



/* Entry: 1083d2d60; end: 1083d2e47;  */

void FUN_1083d2d60(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001083d34ac();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    func_0x0001083d2de4();
    if (*(int *)(unaff_x20 + 1) != 0) {
      _memcpy(*unaff_x19,*unaff_x20,(long)*(int *)(unaff_x20 + 1) * 0x58);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x20 + 1);
    *unaff_x19 = *unaff_x20;
    *(uint *)((long)unaff_x19 + 0xc) = iVar1 << 1 | 1;
    *unaff_x20 = 0;
    *(undefined4 *)((long)unaff_x20 + 0xc) = 1;
  }
  *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(unaff_x20 + 1);
  *(undefined4 *)(unaff_x20 + 1) = 0;
  return;
}



/* Entry: 1083d2e48; end: 1083d2f1b;  */

void FUN_1083d2e48(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lStack_48;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  plVar3 = (long *)(param_1 + 2);
  lVar5 = *plVar3;
  *plVar3 = 0;
  lVar6 = (long)param_2;
  puVar2 = (undefined8 *)(lVar6 << 5 | 0x10);
  if (param_2 < 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  lStack_48 = lVar5;
  __Znam();
  *puVar2 = 0x20;
  puVar2[1] = lVar6;
  if (param_2 != 0) {
    lVar6 = lVar6 << 5;
    puVar2 = puVar2 + 2;
    do {
      *(undefined4 *)puVar2 = 0;
      lVar6 = lVar6 + -0x20;
      puVar2 = puVar2 + 4;
    } while (lVar6 != 0);
  }
  FUN_1083d2f1c(plVar3);
  lVar5 = lVar5 + 8;
  for (uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    if (*(int *)(lVar5 + -8) != 0) {
      func_0x0001083d3408();
      FUN_1083d2f34();
    }
    lVar5 = lVar5 + 0x20;
  }
  func_0x0001083d2568(&lStack_48);
  return;
}



/* Entry: 1083d2f1c; end: 1083d2f33;  */

void FUN_1083d2f1c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 5;
      do {
        if (*(int *)(lVar1 + -0x20 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x20 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083d2f34; end: 1083d3017;  */

void FUN_1083d2f34(int *param_1,ulong *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = *param_2;
  FUN_1083d3018(uVar7,param_2[1]);
  iVar5 = 0;
  iVar4 = param_1[1];
  uVar3 = (uint)uVar7;
  uVar6 = iVar4 - 1U & uVar3;
  while( true ) {
    if (iVar4 <= iVar5) {
      return;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar6 * 0x20);
    if (*puVar1 == 0) break;
    if (uVar3 == *puVar1) {
      uVar7 = *param_2;
      FUN_10821b208(uVar7,param_2[1],*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      if ((uVar7 & 1) != 0) {
        if (*puVar1 != 0) {
          *puVar1 = 0;
        }
        uVar8 = param_2[1];
        uVar7 = *param_2;
        *(ulong *)(puVar1 + 6) = param_2[2];
        *(ulong *)(puVar1 + 4) = uVar8;
        *(ulong *)(puVar1 + 2) = uVar7;
        *puVar1 = uVar3;
        return;
      }
      iVar4 = param_1[1];
    }
    iVar2 = 0;
    if ((int)uVar6 < 1) {
      iVar2 = iVar4;
    }
    uVar6 = (uVar6 + iVar2) - 1;
    iVar5 = iVar5 + 1;
  }
  uVar8 = param_2[1];
  uVar7 = *param_2;
  *(ulong *)(puVar1 + 6) = param_2[2];
  *(ulong *)(puVar1 + 4) = uVar8;
  *(ulong *)(puVar1 + 2) = uVar7;
  *puVar1 = uVar3;
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 1083d3018; end: 1083d3047;  */

uint FUN_1083d3018(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uStack_11;
  
  puVar2 = &uStack_11;
  func_0x00010832b714(puVar2,param_1,param_2);
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1083d3048; end: 1083d3093;  */

void FUN_1083d3048(long param_1)

{
  func_0x0001083d334c();
  if (param_1 != 0) {
    FUN_1083e7560();
    FUN_1083d3a98();
  }
  return;
}



/* Entry: 1083d3094; end: 1083d30ab;  */

void FUN_1083d3094(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083d30c8();
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083d30ac; end: 1083d30c7;  */

void FUN_1083d30ac(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083d30c8();
  }
  FUN_1083d3bc4(param_2);
  if (*param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083d30c8; end: 1083d30f3;  */

long FUN_1083d30c8(long param_1)

{
  FUN_1082da480(param_1 + 0x28);
  func_0x0001083c5f0c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083d30f4; end: 1083d38a7;  */

void FUN_1083d30f4(void)

{
  long in_stack_00000010;
  int in_stack_00000018;
  
  *(int *)(in_stack_00000010 + 0x80) = *(int *)(in_stack_00000010 + 0x80) - in_stack_00000018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1083d38a8; end: 1083d38bf;  */

void FUN_1083d38a8(void)

{
  func_0x0001083cbe30();
  return;
}



/* Entry: 1083d38c0; end: 1083d39c3;  */

undefined8 * FUN_1083d38c0(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long unaff_x29;
  
  if (*(int *)(unaff_x29 + -0x80) != 0) {
    plVar3 = *(long **)(unaff_x29 + -0x88);
    plVar1 = plVar3 + *(int *)(unaff_x29 + -0x80);
    do {
      lVar2 = *plVar3;
      *plVar3 = 0;
      if (lVar2 != 0) {
        func_0x0001083d314c();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 < plVar1);
  }
  if ((*(byte *)(unaff_x29 + -0x7c) & 1) != 0) {
    func_0x0001083d3590();
  }
  return (undefined8 *)(unaff_x29 + -0x88);
}



/* Entry: 1083d39c4; end: 1083d39f3;  */

long * FUN_1083d39c4(long *param_1)

{
  long *extraout_x8;
  
  FUN_1083d3bc4(param_1);
  if (*param_1 == *extraout_x8) {
    *param_1 = 0;
  }
  FUN_1083d3b80(extraout_x8,0);
  return extraout_x8;
}



/* Entry: 1083d39f4; end: 1083d3a5f;  */

void FUN_1083d39f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)0x8;
  __Znwm();
  *puVar2 = 0;
  *param_1 = puVar2;
  FUN_1083d3ac4(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  FUN_1083d3b80(puVar2,uVar1);
  func_0x0001083d3b58(&uStack_28);
  return;
}



/* Entry: 1083d3a60; end: 1083d3a8b;  */

/* WARNING: Possible PIC construction at 0x0001081865c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081865cc) */

long * FUN_1083d3a60(long *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  plVar2 = param_1;
  func_0x0001083d3bd4();
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar2);
    return plVar2;
  }
  lVar1 = *param_1 + 0x10000;
  iVar3 = 8;
  if ((ulong)plVar2 >> 0x20 != 0) {
    iVar3 = 8;
    _abort();
  }
  lVar4 = *(long *)(lVar1 + 8);
  uVar5 = (ulong)(-(int)lVar4 & iVar3 - 1U);
  if ((ulong)(*(long *)(lVar1 + 0x10) - lVar4) < uVar5 + ((ulong)plVar2 & 0xffffffff)) {
    func_0x00010840f7d0();
    lVar4 = *(long *)(lVar1 + 8);
    uVar5 = (ulong)(-(int)lVar4 & iVar3 - 1U);
  }
  return (long *)(lVar4 + uVar5);
}



/* Entry: 1083d3a8c; end: 1083d3a97;  */

/* WARNING: Possible PIC construction at 0x0001081865c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081865cc) */

long FUN_1083d3a8c(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = (uint)param_2;
  param_1 = param_1 + 0x10000;
  iVar2 = 8;
  if ((int)((ulong)param_2 >> 0x20) != 0) {
    iVar2 = 8;
    _abort();
  }
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = (ulong)(-(int)lVar3 & iVar2 - 1U);
  if ((ulong)(*(long *)(param_1 + 0x10) - lVar3) < uVar4 + uVar1) {
    func_0x00010840f7d0();
    lVar3 = *(long *)(param_1 + 8);
    uVar4 = (ulong)(-(int)lVar3 & iVar2 - 1U);
  }
  return lVar3 + uVar4;
}



/* Entry: 1083d3a98; end: 1083d3ac3;  */

void FUN_1083d3a98(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083d3ac4; end: 1083d3b1b;  */

void FUN_1083d3ac4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10020;
  __Znwm();
  _bzero();
  FUN_1083d3b1c(uVar1);
  *param_1 = uVar1;
  return;
}



/* Entry: 1083d3b1c; end: 1083d3b23;  */

long FUN_1083d3b1c(long param_1)

{
  FUN_10840f6d0(param_1 + 0x10000,param_1,0x10000,0x8000);
  return param_1;
}



/* Entry: 1083d3b24; end: 1083d3b7f;  */

long FUN_1083d3b24(long param_1,undefined8 param_2)

{
  FUN_10840f6d0(param_1 + 0x10000,param_1,0x10000,param_2);
  return param_1;
}



/* Entry: 1083d3b80; end: 1083d3b97;  */

void FUN_1083d3b80(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10840f740(lVar1 + 0x10000);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1083d3b98; end: 1083d3bc3;  */

void FUN_1083d3b98(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10840f740(param_2 + 0x10000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1083d3bc4; end: 1083d3c2b;  */

void FUN_1083d3bc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001083d3bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340dca8)();
  return;
}



/* Entry: 1083d3c2c; end: 1083d3dbb;  */

void FUN_1083d3c2c(long *param_1,float param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  double dStack_168;
  undefined1 auStack_160 [8];
  long alStack_158 [2];
  undefined8 uStack_148;
  undefined1 auStack_140 [256];
  
  plVar2 = alStack_158;
  func_0x000105680760(plVar2);
  lVar3 = *(long *)(alStack_158[0] + -0x18);
  __ZNSt3__16locale7classicEv();
  FUN_1083d3eac(auStack_160,(long)alStack_158 + lVar3,plVar2);
  __ZNSt3__16localeD1Ev(auStack_160);
  *(undefined8 *)((long)&uStack_148 + *(long *)(alStack_158[0] + -0x18)) = 7;
  func_0x0001083d423c();
  func_0x000107c28540(param_1,auStack_140);
  plVar2 = alStack_158;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(plVar2,&dStack_168);
  bVar1 = true;
  if (((uint)ABS(param_2) < 0x7f800000) && (bVar1 = false, !NAN(param_2) && !NAN((float)dStack_168))
     ) {
    bVar1 = param_2 == (float)dStack_168;
  }
  if (!bVar1) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000100552dc8(auStack_140,&uStack_180);
    func_0x0001083d4234();
    __ZNSt3__18ios_base5clearEj((long)alStack_158 + *(long *)(alStack_158[0] + -0x18),0);
    *(undefined8 *)((long)&uStack_148 + *(long *)(alStack_158[0] + -0x18)) = 9;
    func_0x0001083d423c();
    func_0x000107c28540(&uStack_180,auStack_140);
    plVar2 = param_1;
    func_0x000107c27b9c(param_1,&uStack_180);
    func_0x0001083d4234();
  }
  func_0x0001083d4214();
  func_0x0001083d4194();
  if (((ulong)plVar2 & 1) == 0) {
    func_0x0001083d4214();
    func_0x0001083d4194();
    if (((ulong)plVar2 & 1) == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&DAT_10f36c659);
    }
  }
  func_0x000105673d7c(alStack_158);
  return;
}



/* Entry: 1083d3dbc; end: 1083d3eab;  */

bool FUN_1083d3dbc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  undefined1 auStack_168 [8];
  long alStack_160 [4];
  byte abStack_140 [248];
  undefined1 auStack_48 [24];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (auStack_48,param_1,param_2);
  plVar1 = alStack_160;
  func_0x0001078d8678(plVar1,auStack_48,0x18);
  lVar3 = *(long *)(alStack_160[0] + -0x18);
  __ZNSt3__16locale7classicEv();
  FUN_1083d3eac(auStack_168,(long)alStack_160 + lVar3,plVar1);
  __ZNSt3__16localeD1Ev(auStack_168);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf(alStack_160,param_3);
  if ((abStack_140[*(long *)(alStack_160[0] + -0x18)] & 5) == 0) {
    bVar2 = (*param_3 & 0x7fffffff) < 0x7f800000;
  }
  else {
    bVar2 = false;
  }
  func_0x000105673d7c(alStack_160);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return bVar2;
}



/* Entry: 1083d3eac; end: 1083d3f27;  */

void FUN_1083d3eac(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  __ZNKSt3__18ios_base6getlocEv();
  __ZNSt3__18ios_base5imbueERKNS_6localeE(auStack_38,param_1,param_2);
  __ZNSt3__16localeD1Ev(auStack_38);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1083d41c8(auStack_40,*(long *)(param_1 + 0x28),param_2);
    __ZNSt3__16localeD1Ev(auStack_40);
  }
  return;
}



/* Entry: 1083d3f28; end: 1083d4027;  */

bool FUN_1083d3f28(long param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  bool bVar2;
  int ****ppppiVar3;
  int ****ppppiVar4;
  ulong uVar5;
  long lStack_70;
  int ***pppiStack_68;
  ulong uStack_60;
  byte bStack_51;
  long lStack_50;
  long lStack_48;
  
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    lStack_48 = param_2;
    if ((*(byte *)(param_1 + param_2 + -1) & 0xdf) == 0x55) {
      lStack_48 = param_2 + -1;
    }
    ppppiVar3 = &pppiStack_68;
    lStack_50 = param_1;
    func_0x000107c27958(ppppiVar3,&lStack_50);
    bVar1 = bStack_51;
    ppppiVar4 = (int ****)pppiStack_68;
    uVar5 = (ulong)bStack_51;
    ___error();
    if (-1 < (char)bVar1) {
      ppppiVar4 = &pppiStack_68;
      uStack_60 = uVar5;
    }
    *(undefined4 *)ppppiVar3 = 0;
    ppppiVar3 = (int ****)pppiStack_68;
    if (-1 < (char)bStack_51) {
      ppppiVar3 = &pppiStack_68;
    }
    _strtoull(ppppiVar3,&lStack_70,0);
    bVar2 = false;
    *param_3 = ppppiVar3;
    if (lStack_70 == (long)ppppiVar4 + uStack_60) {
      ppppiVar4 = ppppiVar3;
      ___error();
      bVar2 = *(int *)ppppiVar4 == 0 && (ulong)ppppiVar3 >> 0x20 == 0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppiStack_68);
  }
  return bVar2;
}



/* Entry: 1083d4028; end: 1083d407b;  */

void FUN_1083d4028(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1083d407c(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 1083d407c; end: 1083d416b;  */

void FUN_1083d407c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [256];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_148;
  uStack_158 = param_3;
  uStack_150 = param_3;
  _vsnprintf(puVar1,0x100,param_2,param_3);
  lVar3 = (long)(int)puVar1;
  uVar2 = lVar3 + 1;
  if (uVar2 < 0x101) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,auStack_148,lVar3);
  }
  else {
    __Znam();
    uStack_160 = uVar2;
    _vsnprintf();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,uVar2,lVar3);
    func_0x0001078ae540(&uStack_160);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078ae540(&uStack_160);
  func_0x0001083d4248();
  FUN_1083d407c();
  return;
}



/* Entry: 1083d416c; end: 1083d41c7;  */

void FUN_1083d416c(undefined8 param_1,undefined8 param_2)

{
  FUN_1083d407c(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 1083d41c8; end: 1083d4213;  */

void FUN_1083d41c8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  (**(code **)(*param_2 + 0x10))();
  __ZNSt3__16localeC1ERKS0_(param_1,param_2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__16localeaSERKS0__110346838)(param_2 + 1,param_3);
  return;
}



/* Entry: 1083d4214; end: 1083d424f;  */

undefined8 * FUN_1083d4214(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  puVar1 = (undefined8 *)*unaff_x19;
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    puVar1 = unaff_x19;
  }
  return puVar1;
}



/* Entry: 1083d4250; end: 1083d462f;  */

void FUN_1083d4250(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = param_1;
  FUN_10831c910();
  plVar1 = (long *)*plVar3;
  if (-1 < *(char *)((long)plVar3 + 0x17)) {
    plVar1 = plVar3;
  }
  FUN_10831c910();
  uVar2 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
                    /* WARNING: Could not recover jumptable at 0x0001083d42b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,plVar1,uVar2);
  return;
}



/* Entry: 1083d4630; end: 1083d463f;  */

void FUN_1083d4630(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001083d463c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x38))();
  return;
}



/* Entry: 1083d4640; end: 1083d4697;  */

byte FUN_1083d4640(long param_1)

{
  undefined **ppuStack_20;
  undefined2 uStack_18;
  undefined1 uStack_16;
  
  if (*(char *)(*(long *)(param_1 + 0x48) + 0x2c) == '\f') {
    uStack_18._0_1_ = 0;
  }
  else {
    ppuStack_20 = &PTR_FUN_110a44788;
    uStack_18 = 0;
    uStack_16 = 0;
    FUN_1083d4698(&ppuStack_20);
    uStack_18._0_1_ = (byte)uStack_18 ^ 1;
  }
  return (byte)uStack_18 & 1;
}



/* Entry: 1083d4698; end: 1083d4853;  */

ulong FUN_1083d4698(ulong param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  uint uVar4;
  long extraout_x8;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined2 uStack_58;
  byte bStack_56;
  undefined **ppuStack_50;
  undefined2 uStack_48;
  byte bStack_46;
  
  uVar4 = 0;
  switch(*(undefined4 *)(param_2 + 0xc)) {
  case 0xc:
  case 0x17:
    if (0xc < *(int *)(param_2 + 0xc) - 0xcU) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1083c29d4);
      (*pcVar3)();
    }
    func_0x0001083c3950(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001083c28a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df20988)[extraout_x8] * 4 + 0x1083c28a4))();
    return param_1;
  case 0xd:
    uVar4 = 1;
    *(undefined1 *)(param_1 + 9) = 1;
    break;
  case 0xe:
    uVar4 = 1;
    *(undefined1 *)(param_1 + 10) = 1;
    break;
  case 0x10:
    func_0x0001083d4864();
    goto code_r0x0001083d4768;
  case 0x12:
    func_0x0001083d4864();
code_r0x0001083d4768:
    func_0x0001083d487c();
    uVar4 = (uint)(byte)uStack_48;
code_r0x0001083d47e4:
    *(char *)(param_1 + 8) = (char)uVar4;
    break;
  case 0x13:
    func_0x0001083d4864();
    uStack_58 = 0;
    bStack_56 = 0;
    func_0x0001083d487c();
    if (*(long *)(param_2 + 0x20) == 0) {
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      FUN_1083d4698(auStack_60);
      uVar4 = (uint)(byte)uStack_58;
      uVar5 = (uint)bStack_56;
      uVar6 = (uint)uStack_58._1_1_;
    }
    *(byte *)(param_1 + 9) = (byte)(uStack_48._1_1_ | uVar6) & 1;
    *(byte *)(param_1 + 10) = (byte)(bStack_46 | uVar5) & 1;
    *(char *)(param_1 + 8) = (char)((byte)uStack_48 & uVar4);
    uVar4 = uStack_48._1_1_ | uVar6 | bStack_46 | uVar5 | (byte)uStack_48 & uVar4;
    break;
  case 0x15:
    goto code_r0x0001083d47e0;
  case 0x16:
    bVar7 = 0;
    uStack_48._0_1_ = 1;
    plVar2 = *(long **)(*(long *)(param_2 + 0x18) + 0x28);
    for (lVar8 = (long)*(int *)(*(long *)(param_2 + 0x18) + 0x30) << 3; lVar8 != 0;
        lVar8 = lVar8 + -8) {
      bVar1 = *(byte *)(*plVar2 + 0x10);
      ppuStack_50 = &PTR_FUN_110a44788;
      uStack_48 = 0;
      bStack_46 = '\0';
      func_0x0001083d487c();
      if (bStack_46 == '\x01') {
        *(undefined1 *)(param_1 + 10) = 1;
        goto code_r0x0001083d4834;
      }
      if (uStack_48._1_1_ == '\x01') goto code_r0x0001083d4834;
      bVar7 = bVar1 | bVar7;
      plVar2 = plVar2 + 1;
    }
    if (((byte)uStack_48 & bVar7 & 1) == 0) {
code_r0x0001083d4834:
      uVar4 = 0;
      break;
    }
    goto code_r0x0001083d47e0;
  }
  return (ulong)(uVar4 & 1);
code_r0x0001083d47e0:
  uVar4 = 1;
  goto code_r0x0001083d47e4;
}



/* Entry: 1083d4854; end: 1083d4883;  */

void FUN_1083d4854(void)

{
  return;
}



/* Entry: 1083d4884; end: 1083d490b;  */

undefined8 FUN_1083d4884(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  ppuStack_58 = &PTR_FUN_110a447e8;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  plVar1 = *(long **)(param_1 + 0x40);
  for (plVar2 = *(long **)(param_1 + 0x38); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*(int *)(*plVar2 + 0xc) == 1) {
      FUN_1083d490c(&ppuStack_58);
    }
  }
  FUN_1083d4cc4(&ppuStack_58);
  return 1;
}



/* Entry: 1083d490c; end: 1083d4cc3;  */

long * FUN_1083d490c(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long alStack_70 [3];
  long lStack_58;
  
  if (*(int *)(param_2 + 0xc) != 1) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if (6 < uVar2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1083c2a10);
      (*pcVar7)();
    }
    if ((1 << (ulong)(uVar2 & 0x1f) & 0x75U) != 0) {
      return (long *)0x0;
    }
    lVar5 = 0x18;
    if (uVar2 != 1) {
      lVar5 = 0x10;
    }
                    /* WARNING: Could not recover jumptable at 0x0001083c39b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))(param_1,param_2 + lVar5);
    return param_1;
  }
  lStack_58 = *(long *)(param_2 + 0x10);
  uVar8 = (uint)&lStack_58;
  FUN_1083d4e78();
  uVar6 = *(uint *)((long)param_1 + 0x14);
  uVar2 = uVar6 - 1 & uVar8;
  for (uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar13 = (uint *)(param_1[3] + (long)(int)uVar2 * 0x18);
    if (*puVar13 == 0) break;
    if ((uVar8 == *puVar13) && (lStack_58 == *(long *)(puVar13 + 2))) {
      if (puVar13[4] != 0) {
        return (long *)0x0;
      }
      FUN_1083e43a8(auStack_88,lStack_58);
      func_0x0001004c3cd0(alStack_70,&UNK_10f492110,auStack_88);
      func_0x0001083d5014();
      plVar16 = (long *)param_1[5];
      goto LAB_1083d4bb4;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar6;
    }
    uVar2 = (uVar2 + uVar4) - 1;
  }
  if (0x188 < (ulong)(param_1[5] - param_1[4])) {
    func_0x000107c278b8(alStack_70,&UNK_10f49214a);
    for (puVar14 = (undefined8 *)param_1[4]; puVar14 != (undefined8 *)param_1[5];
        puVar14 = puVar14 + 1) {
      FUN_1083e43a8(auStack_a0,*puVar14);
      func_0x0001004c3cd0(auStack_88,&UNK_10f492110,auStack_a0);
      func_0x0001083d5048();
      func_0x0001083d5014();
      func_0x0001083d5040();
    }
    FUN_1083e43a8(auStack_a0,lStack_58);
    func_0x0001004c3cd0(auStack_88,&UNK_10f492110,auStack_a0);
    func_0x0001083d5048();
    func_0x0001083d5014();
    func_0x0001083d5040();
    func_0x0001083d501c();
    FUN_1083c8a60();
    func_0x0001083d5060();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_70);
    return (long *)0x1;
  }
  FUN_1083d4d88(param_1 + 2,lStack_58,0);
  lVar5 = lStack_58;
  plVar16 = (long *)param_1[5];
  if (plVar16 < (long *)param_1[6]) {
    plVar17 = plVar16 + 1;
    *plVar16 = lStack_58;
  }
  else {
    lVar12 = param_1[4];
    lVar15 = (long)plVar16 - lVar12;
    uVar1 = (lVar15 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_1083d4fb4();
LAB_1083d4c54:
      func_0x000104bd35f4();
      plVar16 = alStack_70;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001083d506c();
      *plVar16 = (long)&PTR_FUN_110a447e8;
      FUN_1083d4fc8(plVar16 + 4);
      func_0x0001083d4f54(plVar16 + 3);
      return plVar16;
    }
    uVar10 = param_1[6] - lVar12;
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 == 0) {
      lVar9 = 0;
    }
    else {
      if (uVar11 >> 0x3d != 0) goto LAB_1083d4c54;
      lVar9 = uVar11 << 3;
      __Znwm();
    }
    plVar16 = (long *)(lVar9 + lVar15);
    plVar17 = plVar16 + 1;
    *plVar16 = lVar5;
    _memcpy(plVar16 + -(lVar15 >> 3),lVar12,lVar15);
    param_1[4] = (long)(plVar16 + -(lVar15 >> 3));
    param_1[5] = (long)plVar17;
    param_1[6] = lVar9 + uVar11 * 8;
    if (lVar12 != 0) {
      __ZdlPv(lVar12);
    }
  }
  param_1[5] = (long)plVar17;
  plVar16 = param_1;
  FUN_1083c29d4(param_1,param_2);
  func_0x0001083d5060();
  param_1[5] = param_1[5] + -8;
  return plVar16;
  while( true ) {
    plVar16 = plVar16 + -1;
    FUN_1083e43a8(auStack_b8,*plVar16);
    func_0x0001004c3cd0(auStack_a0,&UNK_10f492110,auStack_b8);
    func_0x000100610910(auStack_88,auStack_a0,alStack_70);
    func_0x0001083d5054();
    func_0x0001083d5014();
    func_0x0001083d5040();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    if (*plVar16 == lStack_58) break;
LAB_1083d4bb4:
    if (plVar16 == (long *)param_1[4]) break;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_88,&UNK_10f492113,alStack_70);
  func_0x0001083d5054();
  func_0x0001083d5014();
  func_0x0001083d501c();
  FUN_1083c8a60();
  puVar13[4] = 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_70);
  return (long *)0x1;
}



/* Entry: 1083d4cc4; end: 1083d4d03;  */

undefined8 * FUN_1083d4cc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a447e8;
  FUN_1083d4fc8(param_1 + 4);
  func_0x0001083d4f54(param_1 + 3);
  return param_1;
}



/* Entry: 1083d4d04; end: 1083d4d17;  */

void FUN_1083d4d04(void)

{
  FUN_1083d4cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083d4d18; end: 1083d4d87;  */

long * FUN_1083d4d18(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long extraout_x8;
  
  if (*(int *)(param_2 + 0xc) == 0x27) {
    if (((*(long *)(*(long *)(param_2 + 0x18) + 0x28) != 0) &&
        (*(char *)(*(long *)(param_2 + 0x18) + 0x54) == -1)) &&
       (plVar2 = param_1, (**(code **)(*param_1 + 0x20))(), ((ulong)plVar2 & 1) != 0)) {
      return (long *)0x1;
    }
  }
  if (*(int *)(param_2 + 0xc) - 0x19U < 0x1a) {
    func_0x0001083c3950(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001083c2754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df2096e)[extraout_x8] * 4 + 0x1083c2758))();
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c2868);
  (*pcVar1)();
}



/* Entry: 1083d4d88; end: 1083d4e77;  */

void FUN_1083d4d88(int *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  uStack_40 = (ulong)param_3;
  uVar1 = param_1[1];
  uStack_48 = param_2;
  if ((int)(uVar1 * 3) <= *param_1 * 4) {
    uVar2 = uVar1 << 1;
    if ((int)uVar1 < 1) {
      uVar2 = 4;
    }
    *param_1 = 0;
    param_1[1] = uVar2;
    lVar6 = *(long *)(param_1 + 2);
    param_1[2] = 0;
    param_1[3] = 0;
    puVar3 = (undefined8 *)((ulong)uVar2 * 0x18 + 0x10);
    lStack_38 = lVar6;
    __Znam();
    *puVar3 = 0x18;
    puVar3[1] = (ulong)uVar2;
    lVar4 = (ulong)uVar2 * 0x18;
    puVar5 = puVar3 + 2;
    do {
      *(undefined4 *)puVar5 = 0;
      lVar4 = lVar4 + -0x18;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
    *(undefined8 **)(param_1 + 2) = puVar3 + 2;
    lVar6 = lVar6 + 8;
    for (uVar7 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1)
    {
      if (*(int *)(lVar6 + -8) != 0) {
        FUN_1083d4ea4(param_1,lVar6);
      }
      lVar6 = lVar6 + 0x18;
    }
    func_0x0001083d4f54(&lStack_38);
  }
  FUN_1083d4ea4(param_1,&uStack_48);
  return;
}



/* Entry: 1083d4e78; end: 1083d4ea3;  */

uint FUN_1083d4e78(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uStack_11;
  
  puVar2 = &uStack_11;
  FUN_10831e6c4(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1083d4ea4; end: 1083d4f83;  */

void FUN_1083d4ea4(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  
  plVar6 = param_2;
  FUN_1083d4e78();
  uVar4 = param_1[1];
  uVar5 = (uint)plVar6;
  uVar1 = uVar4 - 1 & uVar5;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    puVar7 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 0x18);
    if (*puVar7 == 0) break;
    if ((uVar5 == *puVar7) && (*param_2 == *(long *)(puVar7 + 2))) {
      *puVar7 = 0;
      lVar8 = *param_2;
      *(long *)(puVar7 + 4) = param_2[1];
      *(long *)(puVar7 + 2) = lVar8;
      *puVar7 = uVar5;
      return;
    }
    uVar3 = 0;
    if ((int)uVar1 < 1) {
      uVar3 = uVar4;
    }
    uVar1 = (uVar1 + uVar3) - 1;
    uVar2 = uVar2 - 1;
  }
  lVar8 = *param_2;
  *(long *)(puVar7 + 4) = param_2[1];
  *(long *)(puVar7 + 2) = lVar8;
  *puVar7 = uVar5;
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 1083d4f84; end: 1083d4fb3;  */

void FUN_1083d4f84(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + -8) != 0) {
    lVar1 = *(long *)(param_1 + -8) * 0x18;
    do {
      if (*(int *)(param_1 + -0x18 + lVar1) != 0) {
        *(undefined4 *)(param_1 + -0x18 + lVar1) = 0;
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 1083d4fb4; end: 1083d4fc7;  */

undefined * FUN_1083d4fb4(void)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  puStack_38 = puVar1;
  FUN_1083d4ffc(&puStack_38);
  return puVar1;
}



/* Entry: 1083d4fc8; end: 1083d4ffb;  */

undefined8 FUN_1083d4fc8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1083d4ffc(&uStack_28);
  return param_1;
}



/* Entry: 1083d4ffc; end: 1083d5073;  */

void FUN_1083d4ffc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



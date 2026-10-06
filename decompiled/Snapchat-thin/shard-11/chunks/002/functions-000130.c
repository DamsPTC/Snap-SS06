/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10827ad4c; end: 10827ae47;  */

void FUN_10827ad4c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  int extraout_w9;
  int iVar3;
  long extraout_x9;
  undefined1 auStack_40 [16];
  int iStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  
  puVar1 = &uStack_28;
  uStack_28 = param_1;
  FUN_108270170(puVar1);
  func_0x00010827ade8(auStack_40,puVar1,param_2);
  func_0x00010827afe8();
  func_0x00010827ade8();
  while ((func_0x00010827afd8(), lVar2 = extraout_x8, iVar3 = iStack_30, !(bool)in_ZR ||
         ((extraout_x9 != 0 &&
          (func_0x00010827b090(), lVar2 = extraout_x8_00, iVar3 = extraout_w9, !(bool)in_ZR))))) {
    func_0x000106f47224(lVar2 + iVar3 + 0x20);
    iStack_30 = iStack_30 + -0x48;
    in_ZR = iStack_30 == iStack_2c;
    if (iStack_30 < iStack_2c) {
      func_0x000108270228(auStack_40);
      func_0x00010827ae08(auStack_40);
    }
  }
  func_0x00010827b1e0();
  return;
}



/* Entry: 10827ae48; end: 10827ae6b;  */

undefined8 FUN_10827ae48(undefined8 param_1)

{
  FUN_10827ae6c();
  FUN_10840fc40();
  return param_1;
}



/* Entry: 10827ae6c; end: 10827af77;  */

void FUN_10827ae6c(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w9;
  int iVar2;
  long extraout_x9;
  undefined1 auStack_40 [16];
  int iStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010827b1a8();
  func_0x00010827afe8();
  func_0x00010827af18();
  while ((func_0x00010827afd8(), lVar1 = extraout_x8, iVar2 = iStack_30, !(bool)in_ZR ||
         ((extraout_x9 != 0 &&
          (func_0x00010827b090(), lVar1 = extraout_x8_00, iVar2 = extraout_w9, !(bool)in_ZR))))) {
    in_ZR = 0;
    func_0x00010827a384(lVar1 + iVar2);
    func_0x00010827819c(auStack_40);
  }
  func_0x00010827b1e0();
  return;
}



/* Entry: 10827af78; end: 10827b28b;  */

long * FUN_10827af78(undefined8 *param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[1];
  *(undefined1 *)*param_1 = *param_2;
  lVar3 = *(long *)(param_2 + 8);
  *(long *)(param_2 + 8) = 0;
  lVar2 = *plVar1;
  *plVar1 = lVar3;
  if (lVar2 != 0) {
    func_0x00010827af88();
  }
  return plVar1;
}



/* Entry: 10827b28c; end: 10827b32f;  */

void FUN_10827b28c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = *param_4;
  *param_4 = 0;
  uStack_38 = *param_5;
  *param_5 = 0;
  FUN_1082bfb6c(&uStack_28,param_2,param_3,&uStack_30,&uStack_38);
  FUN_10810a400(&uStack_38);
  FUN_1082764bc(&uStack_30);
  uStack_40 = uStack_28;
  uStack_28 = 0;
  FUN_10827b330(param_1,&uStack_40,2,param_8);
  FUN_10827f5e4(&uStack_40);
  func_0x00010827fec8();
  return;
}



/* Entry: 10827b330; end: 10827b41f;  */

void FUN_10827b330(undefined8 *param_1,long *param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_48;
  
  if (*param_2 != 0) {
    plVar4 = *(long **)(*param_2 + 8);
    plVar1 = plVar4;
    (**(code **)(*plVar4 + 0x40))();
    if ((int)plVar1 == 0) {
      uVar2 = (ulong)*(uint *)(*param_2 + 0x30);
      FUN_10827b420(uVar2);
      FUN_10827b43c(plVar4,uVar2);
      if (((int)plVar4 != 0) && ((param_3 == 2 || (param_3 == 1)))) {
        uVar3 = 0x3a0;
        __Znwm();
        lStack_48 = *param_2;
        *param_2 = 0;
        FUN_10827b5ac();
        *param_1 = uVar3;
        FUN_10827f5e4(&lStack_48);
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10827b420; end: 10827b43b;  */

undefined4 FUN_10827b420(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x24) {
    return *(undefined4 *)(&UNK_10df12f54 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10827b43c);
  (*pcVar1)();
}



/* Entry: 10827b43c; end: 10827b473;  */

bool FUN_10827b43c(int param_1,int param_2)

{
  if ((param_2 - 0xeU < 0xb) && ((0x7c1U >> (ulong)(param_2 - 0xeU & 0x1f) & 1) != 0)) {
    return false;
  }
  func_0x00010828c69c();
  return 0 < param_1;
}



/* Entry: 10827b474; end: 10827b58f;  */

void FUN_10827b474(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 extraout_x8;
  int extraout_w10;
  undefined4 in_stack_00000008;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_10827b590((int)param_4[1]);
    uStack_70 = 0;
    if (*param_4 != 0) {
      do {
        func_0x00010827fc90();
        uStack_70 = extraout_x8;
      } while (extraout_w10 != 0);
    }
    FUN_1082bfec4(&uStack_68,param_2);
    func_0x00010827fd14();
    uStack_78 = uStack_68;
    uStack_68 = 0;
    FUN_10827b330(param_1,&uStack_78,*(undefined4 *)((long)param_4 + 0xc),in_stack_00000008);
    func_0x00010827fec8();
    func_0x00010827fe58();
  }
  return;
}



/* Entry: 10827b590; end: 10827b5ab;  */

undefined4 FUN_10827b590(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1b) {
    return *(undefined4 *)(&UNK_10df12fe4 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10827b5ac);
  (*pcVar1)();
}



/* Entry: 10827b5ac; end: 10827b747;  */

undefined8 * FUN_10827b5ac(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long lVar5;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *param_2;
  uVar1 = (ulong)*(uint *)(lVar5 + 0x30);
  FUN_10827b420();
  uStack_40 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x90);
  uStack_50 = 0;
  if (*(long *)(lVar5 + 0x20) != 0) {
    do {
      func_0x00010827fc80();
      uStack_40 = extraout_x8;
      uStack_50 = extraout_x9;
    } while (extraout_w11 != 0);
  }
  uStack_48 = 0x200000000;
  if ((param_3 & 2) != 0) {
    uStack_48 = 0x100000000;
  }
  uStack_38 = 0;
  uStack_48 = uStack_48 | uVar1 & 0xffffffff;
  FUN_10810a400(&uStack_38);
  FUN_108346a28(param_1,&uStack_50,*param_2 + 0x50);
  FUN_10810a400(&uStack_50);
  *param_1 = &PTR_FUN_110a34a08;
  uVar4 = 0;
  if (*(long *)(*param_2 + 8) != 0) {
    do {
      func_0x00010827fc80();
      uVar4 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[0x25] = uVar4;
  *(undefined1 *)(param_1 + 0x26) = 0;
  lVar5 = *param_2;
  *param_2 = 0;
  param_1[0x27] = lVar5;
  plVar2 = *(long **)(lVar5 + 0x10);
  uStack_48 = plVar2[0x12];
  uStack_50 = 0;
  (**(code **)(*plVar2 + 0x28))();
  if ((char)plVar2[1] < '\x02') {
    bVar3 = *(byte *)(lVar5 + 0x50) >> 1 & 1;
  }
  else {
    bVar3 = 1;
  }
  FUN_108277fcc(param_1 + 0x28,&uStack_50,param_1 + 0x1f,bVar3);
  if ((param_3 & 1) != 0) {
    if (*(char *)(*(long *)(param_1[0x25] + 0x20) + 0x54) == '\x01') {
      FUN_10827b938(*(long *)(param_1[0x25] + 0x20),&UNK_10f480ea9);
    }
    uStack_48 = param_1[4];
    uStack_50 = 0;
    FUN_10827b97c(param_1[0x27],&uStack_50,&UNK_10df12d64);
  }
  return param_1;
}



/* Entry: 10827b748; end: 10827b7af;  */

undefined8 * FUN_10827b748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e108;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 10827b7b0; end: 10827b7b3;  */

undefined8 * FUN_10827b7b0(undefined8 *param_1)

{
  FUN_1082780e0(param_1 + 0x28);
  FUN_10827f5e4(param_1 + 0x27);
  FUN_10827f63c(param_1 + 0x25);
  *param_1 = &PTR_FUN_110a3e108;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 10827b7b4; end: 10827b7c7;  */

void FUN_10827b7b4(void)

{
  func_0x00010827b778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827b7c8; end: 10827b863;  */

undefined8 FUN_10827b7c8(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [56];
  
  lVar1 = *(long *)(param_1 + 0x128);
  func_0x00010827fcf0();
  if (lVar1 != 0) {
    lVar2 = param_2 + 0x10;
    FUN_10827b864(lVar2,param_1 + 0x10);
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x138);
      FUN_10827eb2c(auStack_78,param_2);
      FUN_1082ba0d4(uVar3,lVar1,auStack_78,param_3 & 0xffffffff | param_4 << 0x20);
      func_0x00010827ec18(auStack_78);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 10827b864; end: 10827b897;  */

ulong FUN_10827b864(ulong param_1,long param_2)

{
  FUN_10827eaec();
  if ((int)param_1 == 0) {
    return param_1;
  }
  if ((0 < (int)*(uint *)(param_2 + 0x10)) &&
     ((0 < (int)*(uint *)(param_2 + 0x14) && *(uint *)(param_2 + 0x10) >> 0x1d == 0) &&
      *(uint *)(param_2 + 0x14) >> 0x1d == 0)) {
    return (ulong)(*(int *)(param_2 + 8) != 0 && *(int *)(param_2 + 0xc) != 0);
  }
  return 0;
}



/* Entry: 10827b898; end: 10827b933;  */

undefined8 FUN_10827b898(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [56];
  
  lVar1 = *(long *)(param_1 + 0x128);
  func_0x00010827fcf0();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x10;
    FUN_10827b864(lVar2,param_2 + 0x10);
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x138);
      FUN_10827ec38(auStack_78,param_2);
      FUN_1082badbc(uVar3,lVar1,auStack_78,param_3 & 0xffffffff | param_4 << 0x20);
      func_0x00010827ed24(auStack_78);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 10827b934; end: 10827b937;  */

undefined8 FUN_10827b934(void)

{
  return 0;
}



/* Entry: 10827b938; end: 10827b97b;  */

void FUN_10827b938(void)

{
  long unaff_x19;
  undefined8 uStack_28;
  
  func_0x00010827fd2c();
  FUN_1083a3348();
  FUN_10827ed44(unaff_x19 + 0x40,&uStack_28);
  FUN_1083a3ca0(uStack_28);
  return;
}



/* Entry: 10827b97c; end: 10827b9af;  */

void FUN_10827b97c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long *unaff_x19;
  ulong unaff_x20;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  long lStack_a0;
  ulong auStack_98 [3];
  undefined1 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010827feb0();
  uVar8 = *param_3;
  uVar10 = param_3[1];
  uVar12 = param_3[2];
  fVar14 = (float)param_3[3];
  FUN_10827f67c();
  uVar11 = uVar10;
  uVar13 = uVar12;
  fVar15 = fVar14;
  func_0x0001082c4e98();
  if ((unaff_x20 & 1) != 0) {
    return;
  }
  func_0x0001082c4ed4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  puVar2 = (undefined8 *)unaff_x19[2];
  FUN_1082b1dfc();
  uStack_60 = 0;
  uStack_68 = puVar2;
  if (unaff_x19 == (long *)0x0) {
    uStack_60._4_4_ = 0;
    uStack_60._0_4_ = 0;
    puVar3 = puVar2;
LAB_1082c4ab0:
    uStack_58 = puVar2;
    if ((int)uStack_60 < 1 && uStack_60._4_4_ < 1) {
      if ((int)uStack_68 <= (int)uStack_58) {
        if (uStack_68._4_4_ <= uStack_58._4_4_) goto LAB_1082c4adc;
      }
    }
  }
  else {
    puVar3 = &uStack_68;
    uStack_58 = puVar2;
    FUN_108287e44();
    if ((int)puVar3 == 0) {
      return;
    }
    puVar2 = uStack_58;
    if ((((((int)uStack_60 < 1 && uStack_60._4_4_ < 1) && ((int)uStack_68 <= (int)uStack_58)) &&
         (bVar1 = uStack_68._4_4_ <= uStack_58._4_4_, bVar1)) ||
        (uVar6 = *(ulong *)(*(long *)(*(long *)(unaff_x19[1] + 0x10) + 0xb8) + 0x18),
        ((uint)uVar6 >> 0x1b & 1) != 0)) ||
       (((uVar6 & 0x440000) == 0 &&
        ((((int)uStack_60 != 0 || (uStack_60._4_4_ != 0)) ||
         ((int)uStack_58 < *(int *)(unaff_x19[2] + 0x90) ||
          uStack_58._4_4_ < *(int *)(unaff_x19[2] + 0x94))))))) goto LAB_1082c4ab0;
    uStack_60 = 0;
    uStack_58 = uStack_68;
LAB_1082c4adc:
    func_0x0001082c4f10();
    plVar4 = unaff_x19;
    (**(code **)(*unaff_x19 + 0x20))(unaff_x19);
    puVar2 = puVar3;
    FUN_1082ffac4(puVar3,plVar4);
    if (((int)puVar2 != 0) &&
       ((*(byte *)(*(long *)(*(long *)(unaff_x19[1] + 0x10) + 0xb8) + 0x1b) >> 3 & 1) == 0)) {
      func_0x0001082c4eb4();
      FUN_1082ff6ec(puVar3,1);
      return;
    }
    *(undefined4 *)(puVar3 + 0x13) = 2;
    *(undefined8 *)((long)puVar3 + 0xa4) = 0;
    *(undefined8 *)((long)puVar3 + 0x9c) = 0;
  }
  uVar5 = (uint)*(undefined8 *)(*(long *)(*(long *)(unaff_x19[1] + 0x10) + 0xb8) + 0x18);
  if ((uVar5 >> 0x1b & 1) == 0) {
    if ((int)uStack_60 < 1 && uStack_60._4_4_ < 1) {
      if ((int)uStack_58 < (int)uStack_68) goto LAB_1082c4b70;
      if ((uVar5 >> 0x1a & 1) != 0) {
        if (uStack_58._4_4_ < uStack_68._4_4_) goto LAB_1082c4bb8;
      }
    }
    else {
LAB_1082c4b70:
      if ((uVar5 >> 0x1a & 1) != 0) goto LAB_1082c4bb8;
    }
    func_0x0001082c4eb4();
    FUN_1082eed10(auStack_c0,unaff_x19[1],&uStack_68);
    FUN_1082c493c(unaff_x19,auStack_c0);
    func_0x0001082c4f38();
    if (unaff_x19 != (long *)0x0) {
      func_0x0001082c4e8c();
    }
  }
  else {
LAB_1082c4bb8:
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    auStack_98[2] = 0;
    uStack_80 = 1;
    uVar9 = 0x3f800000;
    uVar5 = 3;
    if (fVar14 != 1.0) {
      uVar5 = 1;
    }
    uVar6 = (ulong)uVar5;
    uStack_7c = uVar8;
    uStack_78 = uVar10;
    uStack_74 = uVar12;
    fStack_70 = fVar14;
    FUN_1082ca37c();
    uStack_80 = 0;
    lVar7 = unaff_x19[1];
    auStack_98[0] = uVar6;
    FUN_10817500c(&uStack_60);
    uStack_b0 = uVar9;
    uStack_ac = uVar11;
    uStack_a8 = uVar13;
    fStack_a4 = fVar15;
    FUN_1082fadbc(&lStack_a0,lVar7,auStack_98,0x113254e20,&uStack_b0,0);
    lStack_b8 = lStack_a0;
    func_0x0001082c4f20();
    if (lStack_b8 != 0) {
      func_0x0001082c4e8c();
    }
    func_0x00010827ee54(auStack_98);
  }
  return;
}



/* Entry: 10827b9b0; end: 10827b9c7;  */

void FUN_10827b9b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [192];
  
  func_0x00010827fcfc(param_1 + 0x140,param_1 + 0xf8,param_2);
  FUN_10827eddc();
  FUN_108276b30(auStack_100,param_1 + 0xf8,auStack_140,param_4,param_3);
  FUN_108279e4c();
  func_0x00010827fe80();
  func_0x00010827fed8();
  return;
}



/* Entry: 10827b9c8; end: 10827ba53;  */

void FUN_10827b9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [192];
  
  func_0x00010827fcfc();
  FUN_10827eddc();
  FUN_108276b30(auStack_100,param_2,auStack_140,param_4,param_5);
  FUN_108279e4c();
  func_0x00010827fe80();
  func_0x00010827fed8();
  return;
}



/* Entry: 10827ba54; end: 10827bb37;  */

void FUN_10827ba54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *(uint *)(*(long *)(param_5 + 0x138) + 0x50);
  if (*(long *)(param_6 + 0x10) == 0) {
    func_0x000108280004();
    FUN_10817500c(param_6);
    puVar2 = &uStack_58;
    puVar3 = (undefined8 *)&uStack_68;
    uStack_68 = param_1;
    uStack_64 = param_2;
    uStack_60 = param_3;
    uStack_5c = param_4;
  }
  else {
    if (*(long *)(param_6 + 0x10) != -1) {
      FUN_108376ad8(&uStack_68);
      FUN_1083912bc(param_6,&uStack_68);
      func_0x000108280004();
      FUN_10827b9c8(param_5 + 0x140,&uStack_58,&uStack_68,uVar1 >> 1 & 1,param_7);
      FUN_10837ca5c(CONCAT44(uStack_64,uStack_68));
      return;
    }
    uStack_58 = 0;
    uStack_50 = 0;
    puVar2 = (undefined8 *)0x113254e20;
    puVar3 = &uStack_58;
  }
  FUN_108279db4(param_5 + 0x140,puVar2,puVar3,uVar1 >> 1 & 1,param_7);
  return;
}



/* Entry: 10827bb38; end: 10827bcc3;  */

void FUN_10827bb38(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long alStack_98 [2];
  int iStack_88;
  int iStack_80;
  long alStack_78 [2];
  int iStack_68;
  int iStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010827feb0();
  param_1 = param_1 + 0x140;
  FUN_1082782c4();
  lStack_40 = param_1;
  uStack_38 = param_2;
  FUN_10838f5dc();
  func_0x00010838f5bc(auStack_58,&lStack_40);
  puVar3 = (undefined8 *)(unaff_x20 + 0x140);
  FUN_10827bcc4(alStack_78);
  FUN_10827bd4c(alStack_98);
  do {
    if (((alStack_78[0] == alStack_98[0]) && (alStack_98[0] == 0 || iStack_68 == iStack_88)) ||
       (iStack_80 == iStack_60)) {
      FUN_10838f648(auStack_58);
      return;
    }
    lVar2 = alStack_78[0] + iStack_68;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0xffffffffffffffff;
    if (*(char *)(lVar2 + 0x38) == '\x02') {
      iVar1 = (int)lVar2 + 0x40;
      func_0x0001081420b8();
      if (iVar1 == 0) goto LAB_10827bc04;
      func_0x00010812f180();
      lStack_c0 = lVar2;
      puStack_b8 = puVar3;
      FUN_10838f5dc(&uStack_b0,&lStack_c0);
    }
    else {
LAB_10827bc04:
      FUN_108376ad8(&lStack_c0);
      FUN_1082d8288(lVar2,&lStack_c0,1);
      func_0x000108142294(&lStack_c0,lVar2 + 0x40,1);
      FUN_108390bcc(&uStack_b0,&lStack_c0,auStack_58);
      FUN_10837ca5c(lStack_c0);
    }
    puVar3 = &uStack_b0;
    FUN_10827bd6c();
    FUN_10838f648(&uStack_b0);
    FUN_10827bd74(alStack_78);
  } while( true );
}



/* Entry: 10827bcc4; end: 10827bd4b;  */

void FUN_10827bcc4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lStack_28;
  
  lVar1 = *(long *)(param_2 + 0xf8) + (long)*(int *)(*(long *)(param_2 + 0xf8) + 0x18);
  bVar4 = *(byte *)(lVar1 + 0x3c) < 2;
  if (*(long *)(lVar1 + 0x20) != 0) {
    bVar4 = *(byte *)(lVar1 + 0x3c) == 0;
  }
  if (bVar4) {
    FUN_10827ac04(param_1,0,0);
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  lStack_28 = param_2 + 8;
  iVar2 = *(int *)(param_2 + 0x34);
  iVar3 = *(int *)(lVar1 + 0x30);
  FUN_108279b94(param_1,&lStack_28);
  *(int *)(param_1 + 0x18) = iVar2 - iVar3;
  return;
}



/* Entry: 10827bd4c; end: 10827bd6b;  */

void FUN_10827bd4c(long param_1)

{
  FUN_10827ac04(param_1,0,0);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10827bd6c; end: 10827bd73;  */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_10827bd6c(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int *piVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  uint uStack_51c;
  uint auStack_510 [256];
  undefined8 uStack_110;
  undefined4 uStack_108;
  uint *puStack_100;
  uint uStack_f8;
  undefined1 auStack_f4 [4];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint auStack_e0 [2];
  uint *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  uint uStack_c0;
  undefined1 auStack_b8 [28];
  undefined1 auStack_9c [28];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = (uint)param_3;
  puVar17 = param_1;
  puVar13 = param_2;
  if (uVar14 == 4) {
    lVar21 = *(long *)(param_2 + 4);
    lVar16 = *(long *)(param_1 + 4);
    puVar18 = param_1;
    puVar19 = param_2;
joined_r0x00010838fa98:
    uVar9 = lVar21 == -1;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if ((bool)uVar9) goto LAB_10838fdbc;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (lVar16 == -1) {
LAB_10838fb28:
      FUN_10839097c();
      if ((bool)uVar9) goto LAB_10838fb38;
      goto LAB_10838ff70;
    }
    uStack_e8 = 0;
    uStack_f0 = 0;
    puVar17 = puVar19;
    puVar13 = puVar18;
    FUN_10821a044();
    if (((ulong)puVar17 & 1) == 0) goto LAB_10838fb28;
    if ((lVar16 == 0) &&
       (puVar17 = puVar18, puVar13 = puVar19, func_0x000108313590(), (int)puVar17 != 0))
    goto LAB_10838fdbc;
    lVar16 = 0;
    param_2 = puVar18;
LAB_10838fba0:
    FUN_10838ff88(puVar19,auStack_9c,auStack_f4);
    param_3 = &uStack_f8;
    FUN_10838ff88(param_2,auStack_b8);
    puStack_100 = auStack_510;
    uStack_110 = 0;
    uStack_108 = 0x100;
    uStack_78 = 0x7fffffff;
    uStack_80 = 0;
    puVar17 = (uint *)((ulong)&uStack_80 | 8);
    uVar14 = *puVar19;
    puVar13 = (uint *)(ulong)uVar14;
    uVar24 = puVar19[1];
    uVar23 = *param_2;
    puVar19 = puVar19 + 3;
    uStack_c0 = uVar23;
    if ((int)uVar14 <= (int)uVar23) {
      uStack_c0 = uVar14;
    }
    auStack_e0[0]._0_2_ = *(undefined2 *)(&UNK_10df1e3d0 + lVar16 * 2);
    uStack_d0 = 0x100000000;
    lStack_c8 = 0;
    puVar18 = (uint *)0x7fffffff;
    puStack_d8 = puStack_100;
    uVar14 = param_2[1];
    puVar10 = param_2;
    while (uVar25 = uVar14, uVar24 != 0x7fffffff || uVar25 != 0x7fffffff) {
      uVar12 = (uint)puVar13;
      uVar14 = uVar24;
      param_3 = puVar19;
      uStack_51c = uVar12;
      if ((int)uVar12 < (int)uVar23) {
        if ((int)uVar23 < (int)uVar24) {
          uVar14 = uVar23;
          uStack_51c = uVar23;
        }
        bVar5 = (int)uVar24 <= (int)uVar23;
        bVar8 = false;
      }
      else {
        uVar6 = uVar24;
        if ((int)uVar25 < (int)uVar24) {
          uVar14 = 0;
          uVar6 = uVar23;
        }
        if ((int)uVar25 <= (int)uVar24) {
          uVar14 = uVar25;
          uStack_51c = uVar25;
        }
        uVar2 = uVar25;
        uVar7 = uVar23;
        if ((int)uVar12 < (int)uVar25) {
          uVar2 = uVar12;
          uVar7 = uVar12;
        }
        uVar3 = uVar12;
        if ((int)uVar23 < (int)uVar12) {
          uVar3 = uVar23;
          uStack_51c = uVar12;
        }
        puVar13 = (uint *)(ulong)uVar3;
        bVar5 = (int)uVar23 < (int)uVar12;
        uVar23 = uVar6;
        uVar6 = uVar24;
        if (bVar5) {
          param_3 = puVar17;
          uVar14 = uVar2;
          uVar23 = uVar7;
          uVar6 = uVar12;
        }
        bVar8 = (int)uVar25 <= (int)uVar6;
        bVar5 = !bVar5 && (int)uVar24 <= (int)uVar25;
      }
      puVar22 = (uint *)(ulong)uVar14;
      uVar9 = (int)puVar13 == (int)puVar18;
      if ((int)puVar18 < (int)puVar13) {
        func_0x000108390660(auStack_e0,puVar13,puVar17,puVar17);
      }
      param_2 = auStack_e0;
      puVar13 = puVar22;
      func_0x000108390660();
      if ((param_1 == (uint *)0x0) && (lStack_c8 != 0)) goto LAB_10838ff24;
      uVar14 = uVar24;
      if (bVar5) {
        uVar14 = puVar19[(long)(int)puVar19[-1] * 2 + 1];
        puVar19 = puVar19 + (long)(int)puVar19[-1] * 2 + 3;
        uStack_51c = uVar14;
        if (uVar14 != 0x7fffffff) {
          uStack_51c = uVar24;
        }
      }
      uVar24 = uVar14;
      puVar13 = (uint *)(ulong)uStack_51c;
      puVar18 = puVar22;
      uVar14 = uVar25;
      if (bVar8) {
        param_2 = puVar10 + (long)(int)puVar10[2] * 2 + 3;
        uVar14 = param_2[1];
        uVar23 = uVar14;
        puVar10 = param_2;
        if (uVar14 != 0x7fffffff) {
          uVar23 = uVar25;
        }
      }
    }
    lVar16 = *(long *)(puStack_d8 + 0x104);
    *(uint *)(lVar16 + (long)(int)uStack_d0 * 4) = uStack_c0;
    iVar1 = uStack_d0._4_4_ + (int)lStack_c8;
    *(undefined4 *)(lVar16 + (long)iVar1 * 4) = 0x7fffffff;
    uVar14 = (iVar1 - (int)uStack_d0) + 1;
    uVar20 = (ulong)uVar14;
    if (param_1 == (uint *)0x0) {
      uVar9 = uVar14 == 2;
      puVar19 = (uint *)(ulong)(uVar14 == 0xffffffff || 2 < (int)uVar14);
    }
    else {
      uVar9 = uVar14 == 2;
      if ((int)uVar14 < 3) {
LAB_10838fe04:
        func_0x00010838f750();
        param_2 = param_1;
        puVar19 = (uint *)0x0;
      }
      else {
        puVar13 = puStack_100;
        if (7 < uVar14) {
          puVar17 = puStack_100 + uVar20;
          puVar19 = puStack_100 + 3;
          if (*puVar19 == 0x7fffffff) {
            puStack_100[3] = puStack_100[1];
            puVar13 = puVar19;
          }
          if (puVar17[-5] == 0x7fffffff) {
            puVar17[-4] = 0x7fffffff;
            puVar17 = puVar17 + -3;
          }
          uVar20 = (ulong)((long)puVar17 - (long)puVar13) >> 2;
        }
        uVar9 = (int)uVar20 == 7;
        if ((bool)uVar9) {
          uVar23 = puVar13[4];
          uVar14 = *puVar13;
          uVar24 = puVar13[1];
          *param_1 = puVar13[3];
          param_1[1] = uVar14;
          param_1[2] = uVar23;
          param_1[3] = uVar24;
          puVar13 = param_1;
          FUN_10838f5dc();
          param_2 = param_1;
          puVar19 = param_1;
        }
        else {
          uVar11 = *(ulong *)(param_1 + 4);
          uVar9 = uVar11 + 1 == 2;
          if ((uVar11 + 1 < 2) || (uVar9 = *(int *)(uVar11 + 4) == (int)uVar20, !(bool)uVar9)) {
            FUN_10838f664(param_1);
            uVar11 = uVar20;
            func_0x00010838f6d0();
            *(ulong *)(param_1 + 4) = uVar11;
          }
          FUN_10838f7ec();
          *(ulong *)(param_1 + 4) = uVar11;
          param_3 = (uint *)(-(uVar20 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar20 & 0xffffffff) << 2
                            );
          _memcpy(uVar11 + 0x10,puVar13);
          puVar13 = param_1;
          FUN_10838f85c(*(undefined8 *)(param_1 + 4));
          param_2 = param_1;
          FUN_10821a6d8();
          if ((int)param_2 != 0) goto LAB_10838fe04;
LAB_10838ff24:
          puVar19 = (uint *)0x1;
        }
      }
    }
    func_0x0001083909cc();
    param_1 = param_2;
  }
  else {
    uVar9 = 1;
    if (uVar14 == 5) goto code_r0x00010838fa64;
    uStack_f0 = 0;
    uStack_e8 = 0;
    lVar16 = *(long *)(param_2 + 4);
    uVar9 = uVar14 == 3;
    if (uVar14 < 4) {
      lVar21 = *(long *)(param_1 + 4);
      puVar19 = param_1;
      switch((ulong)param_3 & 0xffffffff) {
      case 0:
        puVar18 = param_2;
        goto joined_r0x00010838fa98;
      case 1:
        uVar9 = lVar21 == -1 || lVar16 == -1;
        if (lVar21 != -1 && lVar16 != -1) {
          puVar17 = (uint *)&uStack_f0;
          puVar13 = param_1;
          param_3 = param_2;
          FUN_10838ea90();
          if (((ulong)puVar17 & 1) != 0) {
            if (lVar21 != 0 || lVar16 != 0) {
              if ((lVar21 != 0) || (func_0x0001083909fc(), (int)puVar17 == 0)) {
                if ((lVar16 == 0) && (func_0x0001083909c0(), (int)puVar17 != 0))
                goto code_r0x00010838feb0;
                lVar16 = 1;
                goto LAB_10838fba0;
              }
              break;
            }
            if (param_1 == (uint *)0x0) {
              param_1 = (uint *)&uStack_f0;
              FUN_10821a6d8();
              puVar19 = (uint *)(ulong)((uint)param_1 ^ 1);
            }
            else {
              puVar13 = (uint *)&uStack_f0;
              FUN_10838f5dc();
              puVar19 = param_1;
            }
            goto LAB_10838ff2c;
          }
        }
LAB_10838fdbc:
        func_0x0001083901e0();
        goto LAB_10838fdc4;
      case 2:
        uVar9 = lVar21 == -1;
        if (!(bool)uVar9) {
          uVar9 = lVar16 == -1;
          if (((bool)uVar9) || ((lVar21 == 0 && (func_0x0001083909fc(), (int)puVar17 != 0)))) {
code_r0x00010838feb0:
            FUN_10839097c();
            if ((bool)uVar9) goto LAB_10838fb38;
            goto LAB_10838ff70;
          }
          if ((lVar16 != 0) || (func_0x0001083909c0(), (int)puVar17 == 0)) {
            lVar16 = 2;
            goto LAB_10838fba0;
          }
        }
        break;
      case 3:
        uVar9 = lVar21 == -1;
        if (!(bool)uVar9) {
          uVar9 = 1;
          if (lVar16 == -1) goto code_r0x00010838feb0;
          lVar16 = 3;
          goto LAB_10838fba0;
        }
      }
code_r0x00010838fa64:
      FUN_10839097c();
      puVar19 = param_2;
      if ((bool)uVar9) {
LAB_10838fb38:
        if (param_1 == (uint *)0x0) {
          return (uint *)(ulong)(*(long *)(puVar19 + 4) != -1);
        }
        if (param_1 != puVar19) {
          FUN_10838f664(param_1);
          uVar26 = *(undefined8 *)puVar19;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar19 + 2);
          *(undefined8 *)param_1 = uVar26;
          piVar15 = *(int **)(puVar19 + 4);
          *(int **)(param_1 + 4) = piVar15;
          if (1 < (long)piVar15 + 1U) {
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar5) {
                *piVar15 = *piVar15 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        return (uint *)(ulong)(*(long *)(param_1 + 4) != -1);
      }
      goto LAB_10838ff70;
    }
LAB_10838fdc4:
    puVar19 = (uint *)0x0;
  }
LAB_10838ff2c:
  FUN_10839097c();
  puVar17 = param_1;
  if ((bool)uVar9) {
    return puVar19;
  }
LAB_10838ff70:
  ___stack_chk_fail();
  func_0x0001083909cc();
  func_0x0001083909b8();
  lVar16 = *(long *)(puVar17 + 4);
  if (lVar16 == 0) {
    *puVar13 = puVar17[1];
    uVar14 = 1;
    puVar13[1] = puVar17[3];
    puVar13[2] = 1;
    puVar13[3] = *puVar17;
    puVar13[4] = puVar17[2];
    puVar13[5] = 0x7fffffff;
    puVar13[6] = 0x7fffffff;
  }
  else if (lVar16 == -1) {
    uVar14 = 0;
    *puVar13 = 0x7fffffff;
  }
  else {
    puVar13 = (uint *)(lVar16 + 0x10);
    uVar14 = *(uint *)(lVar16 + 0xc);
  }
  *param_3 = uVar14;
  return puVar13;
}



/* Entry: 10827bd74; end: 10827bdc3;  */

long * FUN_10827bd74(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[3];
  do {
    *(int *)(param_1 + 3) = iVar1 + -1;
    FUN_108279bd8(param_1);
    iVar1 = (int)param_1[3];
    if (iVar1 < 1) {
      return param_1;
    }
  } while (-1 < *(int *)(*param_1 + (long)(int)param_1[2] + 0xb8));
  return param_1;
}



/* Entry: 10827bdc4; end: 10827be4f;  */

undefined8 FUN_10827bdc4(long param_1)

{
  long alStack_50 [2];
  int iStack_40;
  int iStack_38;
  long alStack_30 [2];
  int iStack_20;
  int iStack_18;
  
  FUN_10827bcc4(alStack_30,param_1 + 0x140);
  FUN_10827bd4c(alStack_50);
  while (((alStack_30[0] != alStack_50[0] || (alStack_50[0] != 0 && iStack_20 != iStack_40)) &&
         (iStack_38 != iStack_18))) {
    if ((*(byte *)(alStack_30[0] + iStack_20 + 0x6c) & 1) != 0) {
      return 1;
    }
    FUN_10827bd74(alStack_30);
  }
  return 0;
}



/* Entry: 10827be50; end: 10827bebb;  */

void FUN_10827be50(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  long unaff_x19;
  undefined1 auStack_50 [48];
  
  func_0x00010827fd08();
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  func_0x00010827fbd0();
  uVar1 = *(ulong *)(unaff_x19 + 0x138);
  func_0x00010827ff7c();
  if ((uVar1 & 1) != 0) {
    FUN_1082c0440(*(undefined8 *)(unaff_x19 + 0x138),unaff_x19 + 0x140,auStack_50,unaff_x19 + 0xf8);
  }
  func_0x00010827fcdc();
  return;
}



/* Entry: 10827bebc; end: 10827c39b;  */

void FUN_10827bebc(undefined8 param_1,float *param_2,long param_3,long param_4,long *param_5)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  float *pfVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  undefined8 uVar12;
  undefined **ppuStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  ulong uStack_e4;
  undefined8 uStack_dc;
  undefined **ppuStack_c0;
  float *pfStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  
  pfVar8 = param_2;
  func_0x00010827fc28();
  uStack_68 = extraout_x8;
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    pfVar8 = (float *)&UNK_10f480eea;
    FUN_10827b938();
  }
  fVar11 = *(float *)(param_5 + 8);
  uVar5 = (ulong)(uint)fVar11;
  uVar12 = 0;
  uVar2 = fVar11 == 0.0;
  if (0.0 <= fVar11) {
    lVar4 = *(long *)(unaff_x19 + 0x138);
    if ((*(uint *)(param_5 + 9) & 1) == 0) {
      pfVar10 = (float *)(ulong)(*(byte *)(lVar4 + 0x50) >> 1 & 1);
    }
    else {
      pfVar10 = (float *)0x1;
    }
    uVar9 = (uint)param_2;
    uVar2 = uVar9 == 1 && param_3 == 2;
    if (uVar9 == 1 && param_3 == 2) {
      if (*param_5 == 0) {
        if (((*(uint *)(param_5 + 9) & 0xc) == 4) ||
           (uVar2 = 0.0 < fVar11 && param_5[2] == 0, fVar11 <= 0.0 || param_5[2] != 0))
        goto LAB_10827bf40;
        ppuStack_c0 = (undefined **)0x0;
        pfStack_b8 = (float *)0x0;
        uStack_b0 = 0;
        uStack_a8 = CONCAT31(uStack_a8._1_3_,1);
        func_0x00010827fc3c();
        iVar3 = (int)lVar4;
        uStack_9c = (undefined4)uVar12;
        uStack_98 = (undefined4)((ulong)uVar12 >> 0x20);
        uStack_a4 = (undefined4)uVar5;
        uStack_a0 = (undefined4)(uVar5 >> 0x20);
        func_0x00010827fd1c();
        if (iVar3 != 0) {
          uVar12 = *(undefined8 *)(unaff_x19 + 0x138);
          func_0x00010827fe88(&ppuStack_100);
          FUN_1082c3450(uVar12,unaff_x19 + 0x140,&ppuStack_c0,pfVar10,unaff_x19 + 0xf8,param_4,
                        &ppuStack_100);
        }
LAB_10827c294:
        pppuVar7 = &ppuStack_c0;
      }
      else {
        ppuStack_100 = (undefined **)0x0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 1;
        func_0x00010827fc3c();
        iVar3 = (int)lVar4;
        uStack_e4 = uVar5;
        uStack_dc = uVar12;
        func_0x00010827fd1c();
        if (iVar3 != 0) {
          FUN_108376ad8(&uStack_128);
          uStack_120 = uStack_120 | 0x4000000000000;
          FUN_10817abbc(&uStack_128,param_4);
          func_0x0001081f7a64(&uStack_128,param_4 + 8);
          uVar12 = *(undefined8 *)(unaff_x19 + 0x138);
          func_0x00010827fe88(&ppuStack_c0);
          uStack_80 = (undefined ***)((ulong)uStack_80._4_4_ << 0x20);
          uStack_a8 = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          uStack_9c = 0;
          uStack_b0 = 0;
          lStack_140 = 0;
          if (*param_5 != 0) {
            do {
              func_0x00010827fc80();
              lStack_140 = extraout_x8_00;
            } while (extraout_w11 != 0);
          }
          FUN_1082b1318(&ppuStack_c0,&lStack_140);
          func_0x000108115b70(&lStack_140);
          FUN_1082c2bdc(uVar12,unaff_x19 + 0x140,&ppuStack_100,pfVar10,unaff_x19 + 0xf8,&uStack_128,
                        &ppuStack_c0);
          func_0x00010827ef04(&ppuStack_c0);
          FUN_10837ca5c(uStack_128);
        }
        pppuVar7 = &ppuStack_100;
      }
      func_0x00010827ee54(pppuVar7);
    }
    else {
LAB_10827bf40:
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x128) + 0x10) + 0xb8);
      if (fVar11 == 0.0) {
LAB_10827bf54:
        uVar12 = 0;
        uVar2 = uVar9 - 1 == 1;
        if ((((1 < uVar9 - 1) || ((*(byte *)(lVar4 + 0x1d) >> 5 & 1) == 0)) && (*param_5 == 0)) &&
           (param_5[2] == 0)) {
          iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x138);
          FUN_10827c39c();
          uVar2 = iVar3 == 1;
          pfVar8 = pfVar10;
          if (!(bool)uVar2) {
            ppuStack_c0 = (undefined **)0x0;
            pfStack_b8 = (float *)0x0;
            uStack_b0 = 0;
            uStack_a8 = CONCAT31(uStack_a8._1_3_,1);
            func_0x00010827fc3c();
            uStack_9c = (undefined4)uVar12;
            uStack_98 = (undefined4)((ulong)uVar12 >> 0x20);
            uStack_a4 = (undefined4)uVar5;
            uStack_a0 = (undefined4)(uVar5 >> 0x20);
            uVar5 = *(ulong *)(unaff_x19 + 0x138);
            func_0x00010827fd1c();
            if ((uVar5 & 1) != 0) {
              FUN_1083a94dc(&ppuStack_100,0,param_3,param_4,0,0,0,0);
              ppuVar6 = ppuStack_100;
              uVar2 = uVar9 == 3;
              if (2 < uVar9) goto LAB_10827c2c8;
              uStack_128 = CONCAT71(uStack_128._1_7_,(char)param_2 + '\x02');
              ppuStack_100 = (undefined **)0x0;
              ppuStack_148 = ppuVar6;
              FUN_1082c2640(*(undefined8 *)(unaff_x19 + 0x138),unaff_x19 + 0x140,&ppuStack_c0,
                            unaff_x19 + 0xf8,&ppuStack_148,&uStack_128,0);
              func_0x00010827f564(&ppuStack_148);
              func_0x00010827f564(&ppuStack_100);
            }
            goto LAB_10827c294;
          }
        }
      }
      else {
        uVar2 = fVar11 == 1.0;
        if ((bool)uVar2) {
          iVar3 = (int)unaff_x19 + 0xf8;
          pfVar8 = &fStack_70;
          FUN_1083656d4();
          if ((iVar3 != 0) &&
             (uVar2 = ABS(fStack_70 + -1.0) == 0.00024414062, ABS(fStack_70 + -1.0) <= 0.00024414062
             )) {
            fVar11 = ABS(fStack_6c + -1.0);
            uVar5 = (ulong)(uint)fVar11;
            uVar2 = fVar11 == 0.00024414062;
            if (fVar11 <= 0.00024414062) goto LAB_10827bf54;
          }
        }
      }
      ppuVar6 = (undefined **)(unaff_x19 + 0x140);
      FUN_1082782c4();
      ppuStack_c0 = ppuVar6;
      pfStack_b8 = pfVar8;
      FUN_108386d74(&ppuStack_100,&ppuStack_c0);
      uStack_b0 = 0;
      pfStack_b8 = (float *)0x0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_80 = (undefined ***)0x0;
      lStack_88 = 0;
      ppuStack_c0 = &PTR_FUN_110a3e608;
      uStack_78 = 0;
      func_0x00010835c804(&lStack_140,*(undefined4 *)(unaff_x19 + 0x20),
                          *(undefined4 *)(unaff_x19 + 0x24));
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      if (lStack_140 != 0) {
        do {
          func_0x00010827fc90();
          uStack_118 = extraout_x8_01;
        } while (extraout_w10 != 0);
      }
      uStack_108 = uStack_130;
      uStack_110 = uStack_138;
      FUN_10827c3e4(&pfStack_b8,&uStack_128);
      FUN_10810a400(&uStack_118);
      func_0x00010827fd14();
      lStack_88 = unaff_x19 + 0xf8;
      uStack_80 = &ppuStack_100;
      FUN_10834a5e4(&ppuStack_c0,param_2,param_3,param_4,param_5);
      FUN_10814ca20(&ppuStack_c0);
      FUN_108386ed4(&ppuStack_100);
    }
  }
  func_0x00010827fc08(uStack_68);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10827c2c8:
  FUN_10841076c(&UNK_10f481101);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10827c2e8);
  (*pcVar1)();
}



/* Entry: 10827c39c; end: 10827c3db;  */

undefined4 FUN_10827c39c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 unaff_w19;
  long unaff_x20;
  
  func_0x00010827ff38();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010827fcb0();
  uVar1 = 2;
  if ((*(char *)(lVar2 + 8) < '\x02') && (uVar1 = 2, *(char *)(unaff_x20 + 0x60) == '\0')) {
    uVar1 = unaff_w19;
  }
  return uVar1;
}



/* Entry: 10827c3dc; end: 10827c3e3;  */

undefined1  [16] FUN_10827c3dc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x238) + (long)*(int *)(*(long *)(param_1 + 0x238) + 0x18);
  cVar8 = '\0';
  if (*(char *)(lVar2 + 0x3c) != '\0') {
    cVar8 = '\x04';
  }
  cVar3 = *(char *)(lVar2 + 0x3c);
  if (*(long *)(lVar2 + 0x20) != 0) {
    cVar3 = cVar8;
  }
  if (cVar3 == '\0') {
    uVar7 = 0;
    uVar6 = 0;
  }
  else if (cVar3 == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + 0x380);
    uVar6 = *(undefined8 *)(param_1 + 0x388);
  }
  else {
    if (*(int *)(lVar2 + 0x38) == 0) {
      puVar1 = (undefined8 *)(param_1 + 0x380);
      puVar5 = puVar1;
      FUN_10838edd8(puVar1,lVar2,&uStack_40);
      bVar4 = (((uint)puVar5 ^ 1) & 1) == 0;
      puVar5 = (undefined8 *)(param_1 + 0x388);
      if (bVar4) {
        puVar5 = &uStack_38;
      }
      auVar10._8_8_ = *puVar5;
      if (bVar4) {
        puVar1 = &uStack_40;
      }
      auVar10._0_8_ = *puVar1;
      return auVar10;
    }
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x18);
  }
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 10827c3e4; end: 10827c40b;  */

undefined8 * FUN_10827c3e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x0001078bddd4(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10827c40c; end: 10827c517;  */

void FUN_10827c40c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined1 in_ZR;
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_160 [224];
  long alStack_80 [9];
  undefined8 uStack_38;
  
  plVar3 = param_3;
  func_0x00010827fc28();
  uStack_38 = extraout_x8;
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  func_0x00010827fd70(alStack_80);
  if (param_3[2] == 0 && *param_3 == 0) {
    func_0x00010827fbd0();
    uVar1 = *(ulong *)(unaff_x19 + 0x138);
    func_0x00010827fc70();
    if ((uVar1 & 1) != 0) {
      func_0x00010827fd38();
      FUN_1082c1bc0();
      param_6 = (int)param_2;
    }
    func_0x00010827fcdc();
  }
  else {
    plVar3 = alStack_80;
    FUN_10827efc4(auStack_160,param_2,plVar3,1);
    func_0x000108280028();
    func_0x00010827fd9c();
    func_0x00010827f18c(auStack_160);
  }
  func_0x00010827ef04(alStack_80);
  func_0x00010827fc08(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010827fcfc();
  func_0x00010827f18c();
  plVar2 = alStack_80;
  func_0x00010827ef04();
  func_0x00010827fca0();
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  FUN_1082b8a20(plVar2[0x27] + 0x20);
  if (param_6 != 3) {
    func_0x0001082b705c();
  }
  if (plVar3 == (long *)0x0) {
    func_0x00010827ff18(plVar2[0x27]);
    func_0x00010827c684();
  }
  else {
    func_0x00010827ff18(plVar2[0x27]);
    FUN_10827c60c();
  }
  func_0x00010827fcdc();
  return;
}



/* Entry: 10827c518; end: 10827c60b;  */

void FUN_10827c518(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined1 in_ZR;
  
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  FUN_1082b8a20(*(long *)(param_1 + 0x138) + 0x20);
  if (param_6 != 3) {
    func_0x0001082b705c();
  }
  if (param_3 == 0) {
    func_0x00010827ff18(*(undefined8 *)(param_1 + 0x138));
    func_0x00010827c684();
  }
  else {
    func_0x00010827ff18(*(undefined8 *)(param_1 + 0x138));
    FUN_10827c60c();
  }
  func_0x00010827fcdc();
  return;
}



/* Entry: 10827c60c; end: 10827c737;  */

void FUN_10827c60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  undefined1 auStack_ac [52];
  undefined1 auStack_78 [52];
  undefined4 uStack_44;
  
  lVar1 = param_6;
  if (param_7 != 0) {
    lVar1 = param_7;
  }
  FUN_1082d3a0c(auStack_ac,param_6,param_5);
  FUN_1082d3a0c(auStack_78,lVar1,0x113254e20);
  uStack_44 = param_4;
  func_0x00010827ff68(param_1);
  FUN_1082c0dd8();
  return;
}



/* Entry: 10827c738; end: 10827c86f;  */

undefined1 * FUN_10827c738(undefined8 param_1,undefined8 param_2,undefined1 *param_3,uint param_4)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  uint uVar6;
  undefined1 auStack_170 [224];
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_48;
  
  puVar5 = param_3;
  func_0x00010827fc28();
  uStack_48 = extraout_x8;
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  lVar1 = *(long *)(param_3 + 0x10);
  if (lVar1 == 0) {
    func_0x00010827fd70(auStack_90);
    if (lStack_80 != 0) goto LAB_10827c7d4;
  }
  else {
    FUN_108298d90();
    func_0x00010827fd70(auStack_90);
    in_ZR = lStack_80 == 0;
    uVar6 = 0;
    if ((bool)in_ZR) {
      uVar6 = (uint)lVar1;
    }
    if ((uVar6 & 1) == 0) {
LAB_10827c7d4:
      puVar5 = auStack_90;
      param_4 = 1;
      FUN_10827c870(auStack_170,param_2,puVar5);
      func_0x000108280028();
      func_0x00010827fd9c();
      func_0x00010827f18c(auStack_170);
      goto LAB_10827c814;
    }
  }
  func_0x00010827fbd0();
  uVar2 = *(ulong *)(unaff_x19 + 0x138);
  func_0x00010827fc70();
  if ((uVar2 & 1) != 0) {
    if ((param_3[0x48] & 1) == 0) {
      param_4 = *(byte *)(*(long *)(unaff_x19 + 0x138) + 0x50) >> 1 & 1;
    }
    else {
      param_4 = 1;
    }
    func_0x00010827fd38();
    FUN_1082c0c88();
  }
  func_0x00010827fcdc();
LAB_10827c814:
  puVar3 = auStack_90;
  func_0x00010827ef04(puVar3);
  func_0x00010827fc08(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010827fcfc();
  func_0x00010827f18c();
  puVar4 = auStack_90;
  func_0x00010827ef04();
  func_0x00010827fca0();
  puVar3 = puVar4;
  FUN_10827f288();
  FUN_10827f020(puVar3 + 0x40,puVar5);
  *(undefined4 *)(puVar4 + 0x88) = 0;
  *(undefined2 *)(puVar4 + 0x8c) = 0;
  puVar4[0x90] = 0;
  *(undefined8 *)(puVar4 + 0xa8) = 0;
  puVar4[0xa0] = 0;
  *(undefined4 *)(puVar4 + 0xd8) = 0;
  puVar4[0x3a] = 1;
  puVar4[0x39] = 6;
  FUN_1082771a4(puVar4,0);
  if (param_4 != 0) {
    func_0x00010827ffc4();
  }
  return puVar4;
}



/* Entry: 10827c870; end: 10827c887;  */

long FUN_10827c870(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10827f288();
  FUN_10827f020(lVar1 + 0x40,param_3);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(undefined1 *)(param_1 + 0x39) = 6;
  FUN_1082771a4(param_1,0);
  if (param_4 != 0) {
    func_0x00010827ffc4();
  }
  return param_1;
}



/* Entry: 10827c888; end: 10827cbdf;  */

/* WARNING: Removing unreachable block (ram,0x00010827cb84) */

undefined8 ***
FUN_10827c888(undefined8 ***param_1,undefined *param_2,undefined1 ***param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined1 ***pppuVar8;
  undefined *puVar9;
  undefined1 ***pppuVar10;
  byte bVar11;
  uint uVar12;
  long *plVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 uVar14;
  long unaff_x19;
  uint uVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  ulong uStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined1 auStack_150 [16];
  long lStack_140;
  undefined8 **ppuStack_138;
  uint uStack_130;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined1 uStack_fc;
  undefined4 uStack_f8;
  undefined1 **appuStack_90 [2];
  long lStack_80;
  undefined8 uStack_58;
  
  puVar9 = param_2;
  pppuVar10 = param_3;
  plVar13 = param_4;
  func_0x00010827fc28();
  uVar12 = (uint)plVar13;
  uStack_58 = extraout_x8_00;
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    puVar9 = &UNK_10f480f73;
    FUN_10827b938();
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    if (*(int *)(param_3 + 6) == 0) {
      func_0x00010827fc08(uStack_58);
      if (!(bool)in_ZR) goto LAB_10827cb60;
      func_0x00010827ff68();
      pppuVar8 = pppuVar10;
      func_0x00010827fc28();
      func_0x00010827fbf4();
      if ((bool)in_ZR) {
        FUN_10827b938();
      }
      ppuVar4 = pppuVar10[2];
      if (ppuVar4 == (undefined1 **)0x0) {
        func_0x00010827fd70(appuStack_90);
        if (lStack_80 != 0) goto LAB_10827c7d4;
      }
      else {
        FUN_108298d90();
        func_0x00010827fd70(appuStack_90);
        in_ZR = lStack_80 == 0;
        uVar15 = 0;
        if ((bool)in_ZR) {
          uVar15 = (uint)ppuVar4;
        }
        if ((uVar15 & 1) == 0) {
LAB_10827c7d4:
          pppuVar8 = appuStack_90;
          uVar12 = 1;
          FUN_10827c870(&uStack_170,puVar9,pppuVar8);
          func_0x000108280028();
          func_0x00010827fd9c();
          func_0x00010827f18c(&uStack_170);
          goto LAB_10827c814;
        }
      }
      func_0x00010827fbd0();
      uVar5 = *(ulong *)(unaff_x19 + 0x138);
      func_0x00010827fc70();
      if ((uVar5 & 1) != 0) {
        if (((ulong)pppuVar10[9] & 1) == 0) {
          uVar12 = *(byte *)(*(long *)(unaff_x19 + 0x138) + 0x50) >> 1 & 1;
        }
        else {
          uVar12 = 1;
        }
        func_0x00010827fd38();
        FUN_1082c0c88();
      }
      func_0x00010827fcdc();
LAB_10827c814:
      pppuVar6 = (undefined8 ***)appuStack_90;
      func_0x00010827ef04(pppuVar6);
      func_0x00010827fc08(extraout_x8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010827fcfc();
        func_0x00010827f18c();
        pppuVar7 = (undefined8 ***)appuStack_90;
        func_0x00010827ef04();
        func_0x00010827fca0();
        pcStack_178 = FUN_10827c870;
        pppuVar6 = pppuVar7;
        pppuStack_180 = (undefined1 ***)&stack0xfffffffffffffff0;
        func_0x00010827f288();
        FUN_10827f020(pppuVar6 + 8,pppuVar8);
        *(undefined4 *)(pppuVar7 + 0x11) = 0;
        *(undefined2 *)((long)pppuVar7 + 0x8c) = 0;
        *(undefined1 *)(pppuVar7 + 0x12) = 0;
        pppuVar7[0x15] = (undefined8 **)0x0;
        *(undefined1 *)(pppuVar7 + 0x14) = 0;
        *(undefined4 *)(pppuVar7 + 0x1b) = 0;
        *(undefined1 *)((long)pppuVar7 + 0x3a) = 1;
        *(undefined1 *)((long)pppuVar7 + 0x39) = 6;
        FUN_1082771a4(pppuVar7,0);
        if (uVar12 != 0) {
          func_0x00010827ffc4();
        }
        return pppuVar7;
      }
      return pppuVar6;
    }
    uVar18 = 0x3f800000;
    uVar20 = 0;
    FUN_1083a6264(auStack_150,param_4);
    iVar3 = (int)auStack_150;
    FUN_10827cbe0();
    iVar1 = 0;
    if (param_4[2] == 0) {
      iVar1 = iVar3;
    }
    in_ZR = iVar1 == 1 && *param_4 == 0;
    if ((bool)in_ZR) {
      if ((*(byte *)(param_4 + 9) & 1) == 0) {
        in_ZR = (*(byte *)(*(long *)(unaff_x19 + 0x138) + 0x50) & 2) == 0;
        uVar14 = 2;
        if (!(bool)in_ZR) {
          uVar14 = 3;
        }
      }
      else {
        uVar14 = 3;
      }
      uVar17 = *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x138) + 8) + 0x10) + 0xb8) +
                0x10);
      uStack_130 = uStack_130 & 0xffffff00;
      uStack_fc = 0;
      uVar5 = unaff_x19 + 0xf8;
      ppuStack_138 = param_3;
      func_0x0001081420b8();
      pppuVar10 = param_3;
      if ((uVar5 & 1) == 0) {
        pppuVar6 = &ppuStack_138;
        func_0x00010827f2ac(pppuVar6);
        pppuVar8 = param_3;
        FUN_1083857ec(param_3,unaff_x19 + 0xf8,pppuVar6);
        pppuVar10 = (undefined1 ***)ppuStack_138;
        if ((int)pppuVar8 == 0) goto LAB_10827c910;
      }
      lStack_140 = 0;
      FUN_1082cac88(&pppuStack_180,&lStack_140,uVar14,pppuVar10,uVar17);
      lVar2 = lStack_140;
      lStack_140 = 0;
      if (lVar2 != 0) {
        func_0x00010827fc1c();
      }
      pcVar16 = pcStack_178;
      if (((ulong)pppuStack_180 & 1) == 0) {
        pcStack_178 = (code *)0x0;
        if (pcVar16 != (code *)0x0) {
          func_0x00010827fe98();
        }
      }
      else if (pcStack_178 != (code *)0x0) {
        pppuStack_180 = (undefined1 ***)0x0;
        pcStack_178 = (code *)0x0;
        uStack_170 = 0;
        uStack_168 = 1;
        func_0x00010827fc3c();
        param_1 = *(undefined8 ****)(unaff_x19 + 0x138);
        uStack_164 = uVar18;
        uStack_15c = uVar20;
        func_0x00010827ff7c();
        if (((ulong)param_1 & 1) != 0) {
          uStack_188 = (ulong)pcVar16;
          FUN_10827cbfc(&pppuStack_180,&uStack_188);
          uVar5 = uStack_188;
          uStack_188 = 0;
          if (uVar5 != 0) {
            func_0x00010827fc1c();
          }
          if ((*(byte *)(param_4 + 9) & 1) == 0) {
            bVar11 = *(byte *)(*(long *)(unaff_x19 + 0x138) + 0x50) >> 1 & 1;
          }
          else {
            bVar11 = 1;
          }
          dVar19 = (double)NEON_fmov(0x3f800000,4);
          ppuStack_138 = (undefined8 **)-dVar19;
          uStack_130 = 0x40800000;
          uStack_12c = 0;
          uStack_11c = 0;
          uStack_124 = 0;
          uStack_f8 = 0;
          uStack_114 = 0;
          FUN_1082c0c88(*(long *)(unaff_x19 + 0x138),unaff_x19 + 0x140,&pppuStack_180,bVar11,
                        unaff_x19 + 0xf8,param_2,&ppuStack_138);
          param_1 = &ppuStack_138;
          func_0x00010827ef04(param_1);
          pcVar16 = (code *)0x0;
        }
        func_0x00010827fee0();
        if (pcVar16 != (code *)0x0) {
          func_0x00010827fe98();
        }
        goto LAB_10827c98c;
      }
    }
LAB_10827c910:
    FUN_108376ad8(&pppuStack_180);
    pcStack_178 = (code *)((ulong)pcStack_178 | 0x4000000000000);
    FUN_10837816c(&pppuStack_180,param_2,0);
    FUN_10837816c(&pppuStack_180,param_3,0);
    pcStack_178 = (code *)((ulong)pcStack_178 & 0xfffcffffffffffff | 0x1000000000000);
    FUN_10827cc20(&ppuStack_138,&pppuStack_180,param_4);
    func_0x000108280028();
    FUN_108285fec();
    func_0x00010827f18c(&ppuStack_138);
    param_1 = (undefined8 ***)pppuStack_180;
    FUN_10837ca5c(pppuStack_180);
  }
LAB_10827c98c:
  func_0x00010827fc08(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
LAB_10827cb60:
  ___stack_chk_fail();
  pppuVar6 = &ppuStack_138;
  func_0x00010827ef04(pppuVar6);
  iVar3 = (int)pppuVar6;
  func_0x00010827fee0();
  func_0x00010827fca0();
  func_0x0001083a630c();
  return (undefined8 ***)(ulong)(iVar3 == 1);
}



/* Entry: 10827cbe0; end: 10827cbfb;  */

bool FUN_10827cbe0(int param_1)

{
  func_0x0001083a630c();
  return param_1 == 1;
}



/* Entry: 10827cbfc; end: 10827cc1f;  */

void FUN_10827cbfc(long param_1)

{
  FUN_108279a90(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10827cc20; end: 10827cc9b;  */

void FUN_10827cc20(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x9;
  int extraout_w12;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 unaff_x23;
  undefined8 uStack_438;
  ulong *puStack_430;
  undefined1 *puStack_428;
  undefined8 ***pppuStack_420;
  code *pcStack_418;
  undefined8 uStack_398;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  undefined1 auStack_320 [72];
  undefined8 uStack_2d8;
  undefined1 ***pppuStack_2a0;
  code *pcStack_298;
  long alStack_288 [3];
  undefined1 uStack_270;
  undefined8 uStack_26c;
  undefined1 auStack_258 [224];
  undefined8 uStack_178;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  ulong uStack_100;
  byte bStack_f2;
  undefined8 uStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  puVar2 = auStack_70;
  func_0x00010827fc28();
  uStack_28 = extraout_x8;
  FUN_10827ef30(auStack_70,param_4);
  FUN_10827f320();
  func_0x00010827ef04(auStack_70);
  func_0x00010827fc08(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010827fcfc();
  func_0x00010827ef04();
  func_0x00010827fca0();
  pcStack_78 = FUN_10827cc9c;
  puVar4 = param_3;
  puVar3 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010827fc28();
  uStack_b8 = extraout_x8_00;
  if (*(long *)(puVar3 + 0x10) == 0) {
    func_0x00010827fbd0();
    uVar1 = *(ulong *)(unaff_x19 + 0x138);
    func_0x00010827fc70();
    if ((uVar1 & 1) != 0) {
      if ((puVar2[0x48] & 1) == 0) {
        func_0x00010828001c();
      }
      else {
        unaff_x23 = 1;
      }
      func_0x00010827fd50();
      func_0x00010827fd38();
      func_0x00010827ff08();
      FUN_1082c2a4c();
      func_0x00010827fd48();
    }
    func_0x00010827fcdc();
  }
  else {
    FUN_108376ad8(&uStack_100);
    FUN_1083912bc(param_3,&uStack_100);
    bStack_f2 = bStack_f2 | 4;
    puVar4 = &uStack_100;
    FUN_10827cd9c();
    FUN_10837ca5c();
    uVar1 = uStack_100;
    puVar3 = puVar2;
  }
  func_0x00010827fc08(uStack_b8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010827fd48();
    func_0x00010827fcdc();
    func_0x00010827fca0();
    pcStack_138 = FUN_10827cd9c;
    puVar5 = puVar4;
    ppuStack_140 = &puStack_80;
    func_0x00010827fc28();
    uStack_178 = extraout_x8_01;
    func_0x00010827fbf4();
    if ((bool)in_ZR) {
      puVar5 = (ulong *)&UNK_10f480fd4;
      FUN_10827b938();
    }
    if (*(long *)(puVar3 + 0x10) == 0) {
      alStack_288[0] = 0;
      alStack_288[1] = 0;
      alStack_288[2] = 0;
      uStack_270 = 1;
      func_0x00010827fc3c();
      puVar2 = *(undefined1 **)(uVar1 + 0x138);
      plVar6 = (long *)(uVar1 + 0xf8);
      uStack_26c = param_1;
      func_0x00010827ff7c();
      if (((ulong)puVar2 & 1) != 0) {
        uVar8 = *(undefined8 *)(uVar1 + 0x138);
        if ((puVar3[0x48] & 1) == 0) {
          func_0x00010828001c();
        }
        else {
          unaff_x23 = 1;
        }
        FUN_10827ef30(auStack_258,puVar3);
        puVar5 = (ulong *)(uVar1 + 0x140);
        plVar6 = alStack_288;
        FUN_1082c2bdc(uVar8,puVar5,plVar6,unaff_x23,uVar1 + 0xf8,puVar4,auStack_258);
        puVar2 = auStack_258;
        func_0x00010827ef04();
      }
      func_0x00010827fee8();
    }
    else {
      func_0x00010827ff68(auStack_258);
      FUN_10827cc20();
      func_0x000108280028();
      plVar6 = (long *)(uVar1 + 0x140);
      FUN_108285fec();
      puVar2 = auStack_258;
      func_0x00010827f18c();
    }
    func_0x00010827fc08(uStack_178);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010827ef04(auStack_258);
    func_0x00010827fee8();
    func_0x00010827fca0();
    pcStack_298 = FUN_10827cee8;
    plVar7 = plVar6;
    pppuStack_2a0 = &ppuStack_140;
    func_0x00010827fc28();
    uStack_2d8 = extraout_x8_02;
    func_0x00010827fbf4();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    if (plVar6[2] == 0) {
      func_0x00010827fbd0();
      puVar2 = *(undefined1 **)(puVar2 + 0x138);
      func_0x00010827fc70();
      if (((ulong)puVar2 & 1) != 0) {
        if ((*(byte *)(plVar6 + 9) & 1) == 0) {
          func_0x00010828001c();
        }
        func_0x00010827fd50();
        func_0x00010827fd38();
        func_0x00010827ff08();
        FUN_1082c2c74();
        func_0x00010827fd48();
      }
      func_0x00010827fcdc();
    }
    else {
      FUN_1081779a8(auStack_320,puVar5);
      FUN_10827c738(puVar2,auStack_320);
      plVar7 = plVar6;
    }
    func_0x00010827fc08(uStack_2d8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar3 = puVar2;
      func_0x00010827fd48();
      func_0x00010827fcdc();
      func_0x00010827fca0();
      pcStack_358 = FUN_10827cfcc;
      pppuStack_360 = &pppuStack_2a0;
      func_0x00010827feb0();
      func_0x00010827fc60();
      uStack_398 = extraout_x8_03;
      func_0x00010827fbf4();
      if ((bool)in_ZR) {
        FUN_10827b938();
      }
      if (plVar7[2] == 0) {
        func_0x00010827fbd0();
        puVar3 = (undefined1 *)puVar5[0x27];
        func_0x00010827fd1c();
        if (((ulong)puVar3 & 1) != 0) {
          if ((*(byte *)(plVar7 + 9) & 1) == 0) {
            func_0x00010828001c();
          }
          func_0x00010827fd50();
          func_0x00010827ff18();
          func_0x00010827ff08();
          FUN_1082c2e6c();
          func_0x00010827fd48();
        }
        func_0x00010827fcdc();
        func_0x00010827fc08(uStack_398);
        if ((bool)in_ZR) {
          return;
        }
      }
      else {
        func_0x00010827fc08(uStack_398);
        if ((bool)in_ZR) {
          func_0x00010834862c();
          FUN_10837b4c0(&stack0xfffffffffffffc70,puVar2,
                        (*(uint *)(plVar7 + 9) & 0xc0) == 0 && *plVar7 == 0);
          func_0x000108348564(*(undefined8 *)(*puVar5 + 0x130));
          func_0x0001083485a8();
          return;
        }
      }
      ___stack_chk_fail();
      puVar2 = puVar3;
      func_0x00010827fd48();
      func_0x00010827fcdc();
      func_0x00010827fca0();
      pcStack_418 = FUN_10827d0c0;
      uStack_438 = 0;
      puStack_430 = puVar5;
      puStack_428 = puVar3;
      pppuStack_420 = &pppuStack_360;
      if (*(long *)(puVar2 + 0x128) != 0) {
        do {
          func_0x00010827fef8();
          uStack_438 = extraout_x9;
        } while (extraout_w12 != 0);
      }
      FUN_1082e18e8(&uStack_438,*(undefined4 *)(*(long *)(puVar2 + 0x138) + 0x18));
      FUN_10827f63c(&uStack_438);
      return;
    }
  }
  return;
}



/* Entry: 10827cc9c; end: 10827cd9b;  */

void FUN_10827cc9c(undefined8 param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  int extraout_w12;
  long unaff_x19;
  undefined8 uVar9;
  undefined8 unaff_x23;
  undefined8 uStack_3c8;
  ulong *puStack_3c0;
  undefined1 *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_328;
  undefined1 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined1 auStack_2b0 [72];
  undefined8 uStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  long alStack_218 [3];
  undefined1 uStack_200;
  undefined8 uStack_1fc;
  undefined1 auStack_1e8 [224];
  undefined8 uStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_90;
  byte bStack_82;
  undefined8 uStack_48;
  
  puVar4 = param_3;
  lVar6 = param_4;
  func_0x00010827fc28();
  uStack_48 = extraout_x8;
  if (*(long *)(lVar6 + 0x10) == 0) {
    func_0x00010827fbd0();
    uVar1 = *(ulong *)(unaff_x19 + 0x138);
    func_0x00010827fc70();
    if ((uVar1 & 1) != 0) {
      if ((*(byte *)(param_4 + 0x48) & 1) == 0) {
        func_0x00010828001c();
      }
      else {
        unaff_x23 = 1;
      }
      func_0x00010827fd50();
      func_0x00010827fd38();
      func_0x00010827ff08();
      FUN_1082c2a4c();
      func_0x00010827fd48();
    }
    func_0x00010827fcdc();
  }
  else {
    FUN_108376ad8(&uStack_90);
    FUN_1083912bc(param_3,&uStack_90);
    bStack_82 = bStack_82 | 4;
    puVar4 = &uStack_90;
    FUN_10827cd9c();
    FUN_10837ca5c();
    uVar1 = uStack_90;
    lVar6 = param_4;
  }
  func_0x00010827fc08(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010827fd48();
    func_0x00010827fcdc();
    func_0x00010827fca0();
    pcStack_c8 = FUN_10827cd9c;
    puVar5 = puVar4;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00010827fc28();
    uStack_108 = extraout_x8_00;
    func_0x00010827fbf4();
    if ((bool)in_ZR) {
      puVar5 = (ulong *)&UNK_10f480fd4;
      FUN_10827b938();
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      alStack_218[0] = 0;
      alStack_218[1] = 0;
      alStack_218[2] = 0;
      uStack_200 = 1;
      func_0x00010827fc3c();
      puVar2 = *(undefined1 **)(uVar1 + 0x138);
      plVar7 = (long *)(uVar1 + 0xf8);
      uStack_1fc = param_1;
      func_0x00010827ff7c();
      if (((ulong)puVar2 & 1) != 0) {
        uVar9 = *(undefined8 *)(uVar1 + 0x138);
        if ((*(byte *)(lVar6 + 0x48) & 1) == 0) {
          func_0x00010828001c();
        }
        else {
          unaff_x23 = 1;
        }
        FUN_10827ef30(auStack_1e8,lVar6);
        puVar5 = (ulong *)(uVar1 + 0x140);
        plVar7 = alStack_218;
        FUN_1082c2bdc(uVar9,puVar5,plVar7,unaff_x23,uVar1 + 0xf8,puVar4,auStack_1e8);
        puVar2 = auStack_1e8;
        func_0x00010827ef04();
      }
      func_0x00010827fee8();
    }
    else {
      func_0x00010827ff68(auStack_1e8);
      FUN_10827cc20();
      func_0x000108280028();
      plVar7 = (long *)(uVar1 + 0x140);
      FUN_108285fec();
      puVar2 = auStack_1e8;
      func_0x00010827f18c();
    }
    func_0x00010827fc08(uStack_108);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010827ef04(auStack_1e8);
    func_0x00010827fee8();
    func_0x00010827fca0();
    pcStack_228 = FUN_10827cee8;
    plVar8 = plVar7;
    ppuStack_230 = &puStack_d0;
    func_0x00010827fc28();
    uStack_268 = extraout_x8_01;
    func_0x00010827fbf4();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    if (plVar7[2] == 0) {
      func_0x00010827fbd0();
      puVar2 = *(undefined1 **)(puVar2 + 0x138);
      func_0x00010827fc70();
      if (((ulong)puVar2 & 1) != 0) {
        if ((*(byte *)(plVar7 + 9) & 1) == 0) {
          func_0x00010828001c();
        }
        func_0x00010827fd50();
        func_0x00010827fd38();
        func_0x00010827ff08();
        FUN_1082c2c74();
        func_0x00010827fd48();
      }
      func_0x00010827fcdc();
    }
    else {
      FUN_1081779a8(auStack_2b0,puVar5);
      FUN_10827c738(puVar2,auStack_2b0);
      plVar8 = plVar7;
    }
    func_0x00010827fc08(uStack_268);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar3 = puVar2;
      func_0x00010827fd48();
      func_0x00010827fcdc();
      func_0x00010827fca0();
      pcStack_2e8 = FUN_10827cfcc;
      pppuStack_2f0 = &ppuStack_230;
      func_0x00010827feb0();
      func_0x00010827fc60();
      uStack_328 = extraout_x8_02;
      func_0x00010827fbf4();
      if ((bool)in_ZR) {
        FUN_10827b938();
      }
      if (plVar8[2] == 0) {
        func_0x00010827fbd0();
        puVar3 = (undefined1 *)puVar5[0x27];
        func_0x00010827fd1c();
        if (((ulong)puVar3 & 1) != 0) {
          if ((*(byte *)(plVar8 + 9) & 1) == 0) {
            func_0x00010828001c();
          }
          func_0x00010827fd50();
          func_0x00010827ff18();
          func_0x00010827ff08();
          FUN_1082c2e6c();
          func_0x00010827fd48();
        }
        func_0x00010827fcdc();
        func_0x00010827fc08(uStack_328);
        if ((bool)in_ZR) {
          return;
        }
      }
      else {
        func_0x00010827fc08(uStack_328);
        if ((bool)in_ZR) {
          func_0x00010834862c();
          FUN_10837b4c0(&stack0xfffffffffffffce0,puVar2,
                        (*(uint *)(plVar8 + 9) & 0xc0) == 0 && *plVar8 == 0);
          func_0x000108348564(*(undefined8 *)(*puVar5 + 0x130));
          func_0x0001083485a8();
          return;
        }
      }
      ___stack_chk_fail();
      puVar2 = puVar3;
      func_0x00010827fd48();
      func_0x00010827fcdc();
      func_0x00010827fca0();
      pcStack_3a8 = FUN_10827d0c0;
      uStack_3c8 = 0;
      puStack_3c0 = puVar5;
      puStack_3b8 = puVar3;
      pppuStack_3b0 = &pppuStack_2f0;
      if (*(long *)(puVar2 + 0x128) != 0) {
        do {
          func_0x00010827fef8();
          uStack_3c8 = extraout_x9;
        } while (extraout_w12 != 0);
      }
      FUN_1082e18e8(&uStack_3c8,*(undefined4 *)(*(long *)(puVar2 + 0x138) + 0x18));
      FUN_10827f63c(&uStack_3c8);
      return;
    }
  }
  return;
}



/* Entry: 10827cd9c; end: 10827cee7;  */

void FUN_10827cd9c(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  int extraout_w12;
  long unaff_x19;
  undefined8 uVar6;
  undefined8 unaff_x23;
  undefined8 uStack_308;
  long *plStack_300;
  undefined1 *puStack_2f8;
  undefined1 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined1 auStack_1f0 [72];
  undefined8 uStack_1a8;
  undefined1 *puStack_170;
  code *pcStack_168;
  long alStack_158 [3];
  undefined1 uStack_140;
  undefined8 uStack_13c;
  undefined1 auStack_128 [224];
  undefined8 uStack_48;
  
  plVar3 = param_3;
  func_0x00010827fc28();
  uStack_48 = extraout_x8;
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    plVar3 = (long *)&UNK_10f480fd4;
    FUN_10827b938();
  }
  if (*(long *)(param_4 + 0x10) == 0) {
    alStack_158[0] = 0;
    alStack_158[1] = 0;
    alStack_158[2] = 0;
    uStack_140 = 1;
    func_0x00010827fc3c();
    puVar1 = *(undefined1 **)(unaff_x19 + 0x138);
    plVar4 = (long *)(unaff_x19 + 0xf8);
    uStack_13c = param_1;
    func_0x00010827ff7c();
    if (((ulong)puVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x138);
      if ((*(byte *)(param_4 + 0x48) & 1) == 0) {
        func_0x00010828001c();
      }
      else {
        unaff_x23 = 1;
      }
      FUN_10827ef30(auStack_128,param_4);
      plVar3 = (long *)(unaff_x19 + 0x140);
      plVar4 = alStack_158;
      FUN_1082c2bdc(uVar6,plVar3,plVar4,unaff_x23,unaff_x19 + 0xf8,param_3,auStack_128);
      puVar1 = auStack_128;
      func_0x00010827ef04();
    }
    func_0x00010827fee8();
  }
  else {
    func_0x00010827ff68(auStack_128);
    FUN_10827cc20();
    func_0x000108280028();
    plVar4 = (long *)(unaff_x19 + 0x140);
    FUN_108285fec();
    puVar1 = auStack_128;
    func_0x00010827f18c();
  }
  func_0x00010827fc08(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010827ef04(auStack_128);
  func_0x00010827fee8();
  func_0x00010827fca0();
  pcStack_168 = FUN_10827cee8;
  plVar5 = plVar4;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010827fc28();
  uStack_1a8 = extraout_x8_00;
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  if (plVar4[2] == 0) {
    func_0x00010827fbd0();
    puVar1 = *(undefined1 **)(puVar1 + 0x138);
    func_0x00010827fc70();
    if (((ulong)puVar1 & 1) != 0) {
      if ((*(byte *)(plVar4 + 9) & 1) == 0) {
        func_0x00010828001c();
      }
      func_0x00010827fd50();
      func_0x00010827fd38();
      func_0x00010827ff08();
      FUN_1082c2c74();
      func_0x00010827fd48();
    }
    func_0x00010827fcdc();
  }
  else {
    FUN_1081779a8(auStack_1f0,plVar3);
    FUN_10827c738(puVar1,auStack_1f0);
    plVar5 = plVar4;
  }
  func_0x00010827fc08(uStack_1a8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x00010827fd48();
    func_0x00010827fcdc();
    func_0x00010827fca0();
    pcStack_228 = FUN_10827cfcc;
    ppuStack_230 = &puStack_170;
    func_0x00010827feb0();
    func_0x00010827fc60();
    uStack_268 = extraout_x8_01;
    func_0x00010827fbf4();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    if (plVar5[2] == 0) {
      func_0x00010827fbd0();
      puVar2 = (undefined1 *)plVar3[0x27];
      func_0x00010827fd1c();
      if (((ulong)puVar2 & 1) != 0) {
        if ((*(byte *)(plVar5 + 9) & 1) == 0) {
          func_0x00010828001c();
        }
        func_0x00010827fd50();
        func_0x00010827ff18();
        func_0x00010827ff08();
        FUN_1082c2e6c();
        func_0x00010827fd48();
      }
      func_0x00010827fcdc();
      func_0x00010827fc08(uStack_268);
      if ((bool)in_ZR) {
        return;
      }
    }
    else {
      func_0x00010827fc08(uStack_268);
      if ((bool)in_ZR) {
        func_0x00010834862c();
        FUN_10837b4c0(&stack0xfffffffffffffda0,puVar1,
                      (*(uint *)(plVar5 + 9) & 0xc0) == 0 && *plVar5 == 0);
        func_0x000108348564(*(undefined8 *)(*plVar3 + 0x130));
        func_0x0001083485a8();
        return;
      }
    }
    ___stack_chk_fail();
    puVar1 = puVar2;
    func_0x00010827fd48();
    func_0x00010827fcdc();
    func_0x00010827fca0();
    plStack_300 = plVar3;
    puStack_2f8 = puVar2;
    pppuStack_2f0 = &ppuStack_230;
    pcStack_2e8 = FUN_10827d0c0;
    uStack_308 = 0;
    if (*(long *)(puVar1 + 0x128) != 0) {
      do {
        func_0x00010827fef8();
        uStack_308 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    FUN_1082e18e8(&uStack_308,*(undefined4 *)(*(long *)(puVar1 + 0x138) + 0x18));
    FUN_10827f63c(&uStack_308);
    return;
  }
  return;
}



/* Entry: 10827cee8; end: 10827cfcb;  */

void FUN_10827cee8(undefined8 param_1,long *param_2,long *param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w12;
  ulong unaff_x19;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  
  plVar3 = param_3;
  func_0x00010827fc28();
  uStack_48 = extraout_x8;
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  if (param_3[2] == 0) {
    func_0x00010827fbd0();
    unaff_x19 = *(ulong *)(unaff_x19 + 0x138);
    func_0x00010827fc70();
    if ((unaff_x19 & 1) != 0) {
      if ((*(byte *)(param_3 + 9) & 1) == 0) {
        func_0x00010828001c();
      }
      func_0x00010827fd50();
      func_0x00010827fd38();
      func_0x00010827ff08();
      FUN_1082c2c74();
      func_0x00010827fd48();
    }
    func_0x00010827fcdc();
  }
  else {
    FUN_1081779a8(auStack_90,param_2);
    FUN_10827c738();
    plVar3 = param_3;
  }
  func_0x00010827fc08(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar1 = unaff_x19;
    func_0x00010827fd48();
    func_0x00010827fcdc();
    func_0x00010827fca0();
    pcStack_c8 = FUN_10827cfcc;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00010827feb0();
    func_0x00010827fc60();
    uStack_108 = extraout_x8_00;
    func_0x00010827fbf4();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    if (plVar3[2] == 0) {
      func_0x00010827fbd0();
      uVar1 = param_2[0x27];
      func_0x00010827fd1c();
      if ((uVar1 & 1) != 0) {
        if ((*(byte *)(plVar3 + 9) & 1) == 0) {
          func_0x00010828001c();
        }
        func_0x00010827fd50();
        func_0x00010827ff18();
        func_0x00010827ff08();
        FUN_1082c2e6c();
        func_0x00010827fd48();
      }
      func_0x00010827fcdc();
      func_0x00010827fc08(uStack_108);
      if ((bool)in_ZR) {
        return;
      }
    }
    else {
      func_0x00010827fc08(uStack_108);
      if ((bool)in_ZR) {
        func_0x00010834862c();
        FUN_10837b4c0(&stack0xffffffffffffff00,unaff_x19,
                      (*(uint *)(plVar3 + 9) & 0xc0) == 0 && *plVar3 == 0);
        func_0x000108348564(*(undefined8 *)(*param_2 + 0x130));
        func_0x0001083485a8();
        return;
      }
    }
    ___stack_chk_fail();
    uVar2 = uVar1;
    func_0x00010827fd48();
    func_0x00010827fcdc();
    func_0x00010827fca0();
    pcStack_188 = FUN_10827d0c0;
    uStack_1a8 = 0;
    plStack_1a0 = param_2;
    uStack_198 = uVar1;
    ppuStack_190 = &puStack_d0;
    if (*(long *)(uVar2 + 0x128) != 0) {
      do {
        func_0x00010827fef8();
        uStack_1a8 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    FUN_1082e18e8(&uStack_1a8,*(undefined4 *)(*(long *)(uVar2 + 0x138) + 0x18));
    FUN_10827f63c(&uStack_1a8);
    return;
  }
  return;
}



/* Entry: 10827cfcc; end: 10827d0bf;  */

void FUN_10827cfcc(ulong param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  int extraout_w12;
  long *unaff_x20;
  undefined8 uStack_e8;
  
  func_0x00010827feb0();
  func_0x00010827fc60();
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  if (*(long *)(param_3 + 0x10) == 0) {
    func_0x00010827fbd0();
    param_1 = unaff_x20[0x27];
    func_0x00010827fd1c();
    if ((param_1 & 1) != 0) {
      if ((*(byte *)(param_3 + 0x48) & 1) == 0) {
        func_0x00010828001c();
      }
      func_0x00010827fd50();
      func_0x00010827ff18();
      func_0x00010827ff08();
      FUN_1082c2e6c();
      func_0x00010827fd48();
    }
    func_0x00010827fcdc();
    func_0x00010827fc08(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    func_0x00010827fc08(extraout_x8);
    if ((bool)in_ZR) {
      func_0x00010834862c();
      FUN_10837b4c0(&stack0xffffffffffffffc0);
      func_0x000108348564(*(undefined8 *)(*unaff_x20 + 0x130));
      func_0x0001083485a8();
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010827fd48();
  func_0x00010827fcdc();
  func_0x00010827fca0();
  uStack_e8 = 0;
  if (*(long *)(param_1 + 0x128) != 0) {
    do {
      func_0x00010827fef8();
      uStack_e8 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  FUN_1082e18e8(&uStack_e8,*(undefined4 *)(*(long *)(param_1 + 0x138) + 0x18));
  FUN_10827f63c(&uStack_e8);
  return;
}



/* Entry: 10827d0c0; end: 10827d11b;  */

void FUN_10827d0c0(long param_1)

{
  undefined8 extraout_x9;
  int extraout_w12;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x128) != 0) {
    do {
      func_0x00010827fef8();
      uStack_28 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  FUN_1082e18e8(&uStack_28,*(undefined4 *)(*(long *)(param_1 + 0x138) + 0x18));
  FUN_10827f63c(&uStack_28);
  return;
}



/* Entry: 10827d11c; end: 10827d2cb;  */

void FUN_10827d11c(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 in_x7;
  int extraout_w10;
  undefined8 uVar4;
  undefined4 *unaff_x23;
  long lVar5;
  undefined1 auStack_98 [24];
  long *plStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  long *plStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  long *aplStack_60 [2];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar5 = *(long *)(param_2 + 0x138);
  lVar2 = *(long *)(lVar5 + 0x10);
  func_0x00010827fcb0();
  if (*(char *)(lVar2 + 10) == '\x01') {
    *param_1 = 0;
    return;
  }
  lStack_48 = param_3[1];
  uStack_50 = *param_3;
  plVar3 = *(long **)(lVar5 + 0x10);
  if (plVar3 == (long *)0x0) {
    func_0x00010827fe14();
LAB_10827d1ac:
    aplStack_60[0] = (long *)0x0;
    uStack_68 = *unaff_x23;
    uStack_64 = *(undefined2 *)(unaff_x23 + 1);
    plStack_70 = plVar3;
    FUN_1082b28ac(auStack_98,*(undefined8 *)(param_2 + 0x128),&plStack_70,0,*param_3,param_3[1],0,1,
                  in_x7,&UNK_10f480ff4,0x12);
    FUN_108279f20(aplStack_60,auStack_98);
    FUN_1082764bc(auStack_98);
    FUN_1082764bc(&plStack_70);
    if (aplStack_60[0] == (long *)0x0) {
      *param_1 = 0;
      goto LAB_10827d280;
    }
    lStack_48 = aplStack_60[0][0x12];
    uStack_50 = 0;
    plVar3 = aplStack_60[0];
  }
  else {
    do {
      func_0x00010827fc90();
    } while (extraout_w10 != 0);
    aplStack_60[0] = plVar3;
    func_0x00010827fe14();
    if (((param_4 & 1) != 0) ||
       ((**(code **)(*plVar3 + 0x18))(), bVar1 = plVar3 == (long *)0x0, plVar3 = aplStack_60[0],
       bVar1)) goto LAB_10827d1ac;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  aplStack_60[0] = (long *)0x0;
  uStack_78 = *unaff_x23;
  uStack_74 = *(undefined2 *)(unaff_x23 + 1);
  plStack_80 = plVar3;
  FUN_10828ae78(auStack_98,param_2 + 0x10);
  FUN_1082e482c(param_1,uVar4,&uStack_50,0,&plStack_80,auStack_98,param_2 + 0x28);
  func_0x00010827fed0();
  FUN_1082764bc(&plStack_80);
LAB_10827d280:
  func_0x00010827fe60();
  return;
}



/* Entry: 10827d2cc; end: 10827d42b;  */

void FUN_10827d2cc(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 0x138);
  lVar1 = *(long *)(lVar2 + 0x10);
  func_0x00010827fcb0();
  if (*(char *)(lVar1 + 10) != '\x01') {
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x90);
    FUN_10828aef0(&uStack_88,lVar2 + 0x20);
    uStack_70 = uVar3;
    FUN_1082a0c24(auStack_68,&uStack_88,*param_4);
    FUN_1082bc400(&lStack_48,lVar2,auStack_68,*(undefined4 *)(lVar2 + 0x18),*param_3,param_3[1],0,1)
    ;
    func_0x00010827fd5c();
    func_0x00010827fed0();
    if (lStack_48 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x128);
      uStack_80 = *param_4;
      uStack_88 = 0;
      uStack_98 = 0;
      if (*(long *)(lStack_48 + 0x10) != 0) {
        do {
          func_0x00010827fc80();
          uStack_98 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      uStack_90 = *(undefined4 *)(lStack_48 + 0x18);
      uStack_8c = *(undefined2 *)(lStack_48 + 0x1c);
      FUN_10828ae78(auStack_68,param_2 + 0x10);
      FUN_1082e482c(param_1,uVar3,&uStack_88,0,&uStack_98,auStack_68,param_2 + 0x28);
      func_0x00010827fd5c();
      FUN_1082764bc(&uStack_98);
      func_0x00010827fe48();
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10827d42c; end: 10827d47b;  */

void FUN_10827d42c(long *param_1,undefined *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_60 [8];
  float fStack_58;
  float fStack_4c;
  long lStack_38;
  
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    param_2 = &UNK_10f481007;
    FUN_10827b938();
  }
  func_0x00010827ff68();
  FUN_108347720(&lStack_38,param_2);
  if (lStack_38 == 0) goto LAB_108347824;
  FUN_10835e5d0(&uStack_a0,param_1 + 0x17,param_2 + 0x78);
  FUN_10816eab0(auStack_60,&uStack_a0);
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uVar3 = param_3;
  FUN_1081753ec(param_3,&uStack_a0);
  if ((uVar3 & 1) == 0) {
    iVar2 = (int)auStack_60;
    func_0x0001081420d4();
    if ((iVar2 == 0) || (fStack_58 != (float)(int)fStack_58)) goto LAB_108347800;
    bVar1 = fStack_4c == (float)(int)fStack_4c;
  }
  else {
LAB_108347800:
    bVar1 = false;
  }
  (**(code **)(*param_1 + 0x1b8))(param_1,lStack_38,auStack_60,param_3,param_4,bVar1);
LAB_108347824:
  FUN_1083389b0(&lStack_38);
  return;
}



/* Entry: 10827d47c; end: 10827d4f3;  */

void FUN_10827d47c(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined4 param_7)

{
  byte bVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((*(byte *)(param_6 + 0x48) & 1) == 0) {
    bVar1 = -(*(byte *)(*(long *)(param_1 + 0x138) + 0x50) >> 1 & 1) & 0xf;
  }
  else {
    bVar1 = 0xf;
  }
  if (param_3 == (undefined8 *)0x0) {
    uStack_20 = 0;
    uStack_18 = NEON_scvtf(*(undefined8 *)(param_2 + 0x20),4);
  }
  else {
    uStack_18 = param_3[1];
    uStack_20 = *param_3;
  }
  FUN_108280fc4(param_1,param_2,&uStack_20,param_4,0,bVar1,0,param_5,param_6,param_7);
  return;
}



/* Entry: 10827d4f4; end: 10827d60f;  */

uint FUN_10827d4f4(long param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x18))();
  uVar1 = 0;
  if (plVar2 != (long *)0x0) {
    if (((*(byte *)(param_7 + 0x48) & 1) == 0) &&
       ((*(uint *)(*(long *)(param_1 + 0x138) + 0x50) >> 1 & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xf;
    }
    (**(code **)(*plVar2 + 0x18))();
    if (param_4 == (undefined8 *)0x0) {
      uStack_70 = 0;
      uStack_68 = NEON_scvtf(*(undefined8 *)(param_3 + 0x20),4);
    }
    else {
      uStack_68 = param_4[1];
      uStack_70 = *param_4;
    }
    FUN_108321600(param_2,param_3,&uStack_70,param_5,uVar3,param_6,param_7,param_8,
                  *(undefined1 *)(plVar2[2] + 0x9f));
    uVar1 = (uint)param_2;
  }
  return uVar1 & 1;
}



/* Entry: 10827d610; end: 10827d64f;  */

/* WARNING: Possible PIC construction at 0x00010827d638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010827d63c) */

ulong * FUN_10827d610(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xfffffffffffffff0;
  if ((param_1[0xb] & 1) == 0) {
    param_2 = *param_1;
    FUN_10827f70c(param_1 + 1);
    unaff_x30 = 0x10827d63c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar2;
  }
  puVar7 = param_1 + 1;
  if ((param_1[0xb] & 1) == 0) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000104bdc2c8();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_1081a1048;
    uVar8 = param_2;
    FUN_1081a10f0();
    uVar5 = *(uint *)((long)puVar7 + 4);
    uVar3 = uVar5 - 1 & (uint)uVar8;
    uVar4 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    while( true ) {
      if (uVar4 == 0) {
        return (ulong *)0x0;
      }
      puVar10 = (uint *)(puVar7[1] + (long)(int)uVar3 * 0x18);
      uVar6 = *puVar10;
      if (uVar6 == 0) break;
      if ((uint)uVar8 == uVar6) {
        puVar1 = (ulong *)(puVar10 + 2);
        uVar9 = param_2;
        FUN_1083a3440(param_2,puVar1);
        if ((uVar9 & 1) != 0) {
          return puVar1;
        }
      }
      uVar6 = 0;
      if ((int)uVar3 < 1) {
        uVar6 = uVar5;
      }
      uVar3 = (uVar3 + uVar6) - 1;
      uVar4 = uVar4 - 1;
    }
    return (ulong *)0x0;
  }
  return puVar7;
}



/* Entry: 10827d650; end: 10827d9bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10827d650(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined4 uStack_168;
  undefined2 uStack_164;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  uint uStack_148;
  undefined4 uStack_144;
  ulong uStack_140;
  undefined4 uStack_138;
  undefined2 uStack_134;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined4 uStack_108;
  undefined2 uStack_104;
  undefined8 uStack_100;
  long alStack_f8 [4];
  undefined1 uStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [80];
  undefined1 uStack_68;
  
  uVar3 = 0x70;
  __Znwm();
  FUN_10835d750();
  uStack_128 = uVar3;
  FUN_1082e0d0c(&uStack_140,*(undefined8 *)(param_2 + 0x128),param_3,0,0);
  if (uStack_140 != 0) {
    uStack_160 = 0;
    if (*(long *)(param_3 + 0x10) != 0) {
      do {
        func_0x00010827fc90();
        uStack_160 = extraout_x8;
      } while (extraout_w10 != 0);
    }
    FUN_10828adb8(auStack_158);
    FUN_10810a400(&uStack_160);
    uStack_178 = uStack_128;
    uStack_170 = uStack_140;
    uStack_140 = 0;
    uStack_168 = uStack_138;
    uStack_164 = uStack_134;
    uStack_128 = 0;
    lVar4 = *(long *)(*(long *)(param_2 + 0x128) + 0x20);
    if (*(char *)(lVar4 + 0x54) == '\x01') {
      FUN_10827b938(lVar4,&UNK_10f481029);
    }
    auStack_b8[0] = 0;
    uStack_68 = 0;
    uStack_c0 = param_7;
    if (0x23 < uStack_148) {
LAB_10827d90c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10827d910);
      (*pcVar1)();
    }
    if ((1L << ((ulong)uStack_148 & 0x3f) & 0xff9defffdU) != 0) {
      uVar2 = (int)param_7 + 0x30;
      func_0x000108343560();
      if (((uVar2 ^ 0xffffffff) & 0xffffff) != 0) {
        puVar5 = &uStack_c0;
        FUN_10827d610(puVar5);
        FUN_108188360(param_7);
        FUN_108376208(puVar5,(int)param_7 << 0x18 | 0xffffff);
        param_7 = uStack_c0;
      }
    }
    alStack_f8[1] = 0;
    alStack_f8[2] = 0;
    alStack_f8[3] = 0;
    uStack_d8 = 1;
    func_0x00010827fc3c();
    uVar6 = *(ulong *)(param_2 + 0x138);
    alStack_f8[0] = 0;
    uStack_d4 = param_1;
    FUN_1082b9108(uVar6,param_7,param_2 + 0xf8,alStack_f8,alStack_f8 + 1);
    if (alStack_f8[0] != 0) {
      func_0x00010827fc1c();
    }
    if ((uVar6 & 1) != 0) {
      if (0x23 < uStack_148) goto LAB_10827d90c;
      if ((1L << ((ulong)uStack_148 & 0x3f) & 0xff9defffdU) == 0) {
        FUN_108266014(&uStack_110,&UNK_10f481050);
        func_0x0001082b2838(&uStack_170,uStack_110 & 0xffff);
      }
      FUN_10828b188(&uStack_100,auStack_158,*(long *)(param_2 + 0x138) + 0x20);
      uStack_118 = uStack_100;
      uStack_120 = uStack_178;
      uStack_108 = uStack_168;
      uStack_104 = uStack_164;
      uStack_100 = 0;
      uStack_110 = uStack_170;
      uStack_178 = 0;
      uStack_170 = 0;
      FUN_1082c2f10(*(undefined8 *)(param_2 + 0x138),param_2 + 0x140,alStack_f8 + 1,param_2 + 0xf8,
                    &uStack_110,uStack_144,&uStack_118,param_6,&uStack_120,param_5);
      FUN_10827f75c(&uStack_120);
      FUN_10827f5a4(&uStack_118);
      FUN_1082764bc(&uStack_110);
      FUN_10827f5a4(&uStack_100);
    }
    func_0x00010827ee54(alStack_f8 + 1);
    FUN_10819a688(auStack_b8);
    FUN_10827f75c(&uStack_178);
    FUN_1082764bc(&uStack_170);
    func_0x00010827fd5c();
  }
  func_0x00010827fe60();
  FUN_10827f75c(&uStack_128);
  return;
}



/* Entry: 10827d9c0; end: 10827d9c7;  */

undefined8 FUN_10827d9c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 10827d9c8; end: 10827daa7;  */

void FUN_10827d9c8(undefined8 param_1,long param_2,int *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  ulong uVar3;
  undefined8 uVar4;
  int *piStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_54;
  
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 1;
  func_0x00010827fc3c();
  uVar3 = *(ulong *)(param_2 + 0x138);
  uStack_54 = param_1;
  FUN_10827daa8(uVar3,param_5,param_2 + 0xf8,*param_4,*(long *)(param_3 + 8) != 0,&uStack_70);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x138);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
      if (bVar2) {
        *param_3 = *param_3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    piStack_78 = param_3;
    FUN_1082c2640(uVar4,param_2 + 0x140,&uStack_70,param_2 + 0xf8,&piStack_78,0,param_6);
    func_0x00010827f564(&piStack_78);
  }
  func_0x00010827fee0();
  return;
}



/* Entry: 10827daa8; end: 10827dabb;  */

undefined8 FUN_10827daa8(undefined8 param_1)

{
  int in_w4;
  
  if (in_w4 == 0) {
    func_0x0001082b968c();
    func_0x0001082b95f4();
  }
  else {
    FUN_1082b8a90();
    func_0x0001082b95f4();
  }
  return param_1;
}



/* Entry: 10827dabc; end: 10827dc6f;  */

void FUN_10827dabc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  char acStack_70 [8];
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined4 uStack_48;
  
  func_0x00010827feb0();
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  if (*unaff_x19 != 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 1;
    uStack_7c = 0x3f8000003f800000;
    uStack_84 = 0x3f8000003f800000;
    uVar2 = *(ulong *)(unaff_x20 + 0x138);
    FUN_10827daa8(uVar2,param_4,unaff_x20 + 0xf8,*param_3,*(int *)(*unaff_x19 + 0x8c) != 0,
                  &uStack_a0);
    if ((uVar2 & 1) != 0) {
      uStack_b0 = 0;
      uStack_a8 = 0x100000000;
      lStack_60 = *(long *)(unaff_x20 + 0x138);
      lStack_58 = lStack_60 + 0x20;
      lStack_50 = lStack_60 + 0x50;
      uStack_48 = 1;
      lVar3 = unaff_x19[6];
      for (lVar5 = (long)(int)unaff_x19[7] << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
        FUN_108298dc8(acStack_70,lVar3,&lStack_60);
        lVar1 = lStack_68;
        if (acStack_70[0] != '\x01') {
          lStack_68 = 0;
          if (lVar1 != 0) {
            func_0x00010827fc1c();
          }
          goto LAB_10827dc10;
        }
        FUN_10827f37c(&uStack_b0,&lStack_68);
        lVar1 = lStack_68;
        lStack_68 = 0;
        if (lVar1 != 0) {
          func_0x00010827fc1c();
        }
        lVar3 = lVar3 + 8;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + 0x138);
      func_0x00010827f824(auStack_c0,&uStack_b0);
      FUN_1082c2798(uVar4,unaff_x20 + 0x140,&uStack_a0,unaff_x20 + 0xf8);
      FUN_10827f4d4(auStack_c0);
LAB_10827dc10:
      FUN_10827f4d4(&uStack_b0);
    }
    func_0x00010827ee54(&uStack_a0);
  }
  return;
}



/* Entry: 10827dc70; end: 10827dd43;  */

void FUN_10827dc70(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 auStack_80 [48];
  
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  func_0x00010827fbd0();
  uVar1 = *(ulong *)(param_1 + 0x138);
  if (param_4 == 0) {
    FUN_1082b8a50(uVar1,param_7,param_1 + 0xf8,auStack_80);
    if ((int)uVar1 == 0) goto LAB_10827dd1c;
  }
  else {
    FUN_1082b9154(uVar1,param_7,param_1 + 0xf8,*param_6,auStack_80);
    if ((uVar1 & 1) == 0) goto LAB_10827dd1c;
  }
  FUN_1082c2914(*(undefined8 *)(param_1 + 0x138),param_1 + 0x140,auStack_80,param_1 + 0xf8,param_5,
                param_2,param_3,param_4);
LAB_10827dd1c:
  func_0x00010827fcdc();
  return;
}



/* Entry: 10827dd44; end: 10827de1f;  */

void FUN_10827dd44(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  func_0x00010827fbf4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  if (*(long *)(param_3 + 0x10) == 0) {
    FUN_10827de20(&lStack_60,param_1,param_3,param_4);
    if (lStack_60 != 0) {
      func_0x00010827ff50();
      FUN_10827de9c();
    }
    FUN_10827f8e8(&lStack_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    lStack_60 = *(long *)(param_1 + 0x28);
    lVar1 = param_1;
    FUN_108347cac();
    uStack_50 = (undefined4)lVar1;
    lStack_48 = param_1 + 0x130;
    FUN_1082c0350(uVar2,param_2,param_1 + 0x140,param_1 + 0xf8,param_3,&lStack_60,param_4);
  }
  return;
}



/* Entry: 10827de20; end: 10827de9b;  */

void FUN_10827de20(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x00010827ff28();
  FUN_108347cac();
  FUN_1083a1940();
  FUN_108314c30(&uStack_38,unaff_x21 + 0xf8);
  uVar1 = uStack_38;
  uStack_38 = 0;
  *extraout_x8 = uVar1;
  FUN_10827f928(&uStack_38);
  return;
}



/* Entry: 10827de9c; end: 10827df1f;  */

void FUN_10827de9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *extraout_x8;
  undefined **ppuVar3;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110a34c38;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_1;
  FUN_1083178f8(*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),
                *(undefined8 *)(param_3 + 0x20),param_2,param_4,param_3,&ppuStack_48);
  pppuVar1 = &ppuStack_48;
  FUN_10827fb94();
  func_0x00010827fc08(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010827fd2c();
  FUN_10827fb94();
  func_0x00010827fca0();
  ppuVar3 = pppuVar1[5];
  extraout_x8[1] = pppuVar1[6];
  *extraout_x8 = ppuVar3;
  pppuVar2 = pppuVar1;
  FUN_108347cac();
  *(int *)(extraout_x8 + 2) = (int)pppuVar2;
  extraout_x8[3] = pppuVar1 + 0x26;
  return;
}



/* Entry: 10827df20; end: 10827df53;  */

void FUN_10827df20(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (undefined4)param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar2;
  FUN_108347cac();
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[3] = param_2 + 0x130;
  return;
}



/* Entry: 10827df54; end: 10827e093;  */

void FUN_10827df54(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6,long *param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(int *)(*(long *)(*(long *)(param_5 + 0x128) + 0x10) + 0xc) == 1) {
    if (param_8 == 0) {
      uStack_58 = *(undefined8 *)(param_5 + 0x100);
      param_1 = *(undefined8 *)(param_5 + 0xf8);
      uStack_48 = *(undefined8 *)(param_5 + 0x110);
      param_2 = *(undefined8 *)(param_5 + 0x108);
      uStack_40 = *(undefined8 *)(param_5 + 0x118);
      uStack_60 = param_1;
      uStack_50 = param_2;
    }
    else {
      FUN_1081600e0(&uStack_60);
      param_6 = param_8;
    }
    uVar4 = (undefined4)param_2;
    uVar3 = (undefined4)param_1;
    lVar1 = param_5 + 0x140;
    FUN_1082782c4();
    uStack_78 = lVar1;
    uStack_70 = param_6;
    (**(code **)(*param_7 + 0x50))(&lStack_68,param_7,1,&uStack_60,&uStack_78,param_5 + 0x10);
    lStack_80 = lStack_68;
    if (lStack_68 != 0) {
      uVar2 = *(undefined8 *)(param_5 + 0x138);
      lStack_68 = 0;
      func_0x00010834cbc8(param_7);
      uStack_90 = uVar3;
      uStack_8c = uVar4;
      uStack_88 = param_3;
      uStack_84 = param_4;
      func_0x000108142084(&uStack_60,&uStack_90,1);
      uStack_78 = CONCAT44(uVar4,uVar3);
      uStack_70 = CONCAT44(param_4,param_3);
      FUN_1082c3094(uVar2,&lStack_80,&uStack_78);
      if (lStack_80 != 0) {
        func_0x00010827fc1c();
      }
      lVar1 = lStack_68;
      lStack_68 = 0;
      if (lVar1 == 0) {
        return;
      }
      func_0x00010827fc1c();
      return;
    }
  }
  func_0x00010827ff68(param_7);
  FUN_10834cb04();
  return;
}



/* Entry: 10827e094; end: 10827e10b;  */

long * FUN_10827e094(long param_1)

{
  long *plVar1;
  int extraout_w11;
  long *aplStack_30 [2];
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x138) + 0x10);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
    aplStack_30[0] = (long *)0x0;
    func_0x000108280040();
  }
  else {
    do {
      func_0x00010827fc80();
    } while (extraout_w11 != 0);
    aplStack_30[0] = plVar1;
    func_0x000108280040();
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_1082764bc(aplStack_30);
  return plVar1;
}



/* Entry: 10827e10c; end: 10827e11b;  */

void FUN_10827e10c(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  int extraout_w11;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  uVar1 = *(ulong *)(param_1 + 0x138);
  uVar2 = uVar1;
  func_0x0001082c3c74();
  if ((uVar2 & 1) == 0) {
    plVar3 = *(long **)(uVar1 + 8);
    func_0x0001082c3fc0();
    if ((bool)in_ZR) {
      func_0x0001082c402c();
      plVar3 = *(long **)(uVar1 + 8);
    }
    uVar7 = (uint)param_2;
    if (((uVar7 == 0) || ((*(byte *)(*(long *)(plVar3[2] + 0xb8) + 0x1e) & 1) != 0)) &&
       ((**(code **)(*plVar3 + 0x18))(), plVar3 != (long *)0x0)) {
      lVar8 = plVar3[0x10];
      puVar4 = (undefined8 *)((long)(int)uVar7 * 8 + 0x10);
      if (0xffffffffffffffef < (ulong)((long)(int)uVar7 * 8) || (int)uVar7 < 0) {
        puVar4 = (undefined8 *)0xffffffffffffffff;
      }
      __Znam();
      *puVar4 = 8;
      puVar4[1] = (long)(int)uVar7;
      puStack_58 = puVar4 + 2;
      if (uVar7 != 0) {
        _bzero(puStack_58,-(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3)
        ;
      }
      for (lVar9 = 0; (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) << 3 != lVar9;
          lVar9 = lVar9 + 8) {
        func_0x0001082af91c(&uStack_60,lVar8,param_3,1,param_4);
        uVar6 = uStack_60;
        uStack_60 = 0;
        lVar5 = *(long *)((long)puStack_58 + lVar9);
        *(undefined8 *)((long)puStack_58 + lVar9) = uVar6;
        if (lVar5 != 0) {
          func_0x0001082c3c9c();
        }
        func_0x0001082c400c();
        if (lVar5 != 0) {
          func_0x0001082c3c9c();
        }
        param_3 = param_3 + 0x38;
      }
      uVar6 = 0;
      if (*(long *)(uVar1 + 0x10) != 0) {
        do {
          func_0x0001082c3d3c();
          uVar6 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      puStack_68 = puStack_58;
      puStack_58 = (undefined8 *)0x0;
      uStack_60 = uVar6;
      FUN_108293698();
      FUN_108294bf0(&puStack_68);
      func_0x0001082c3ee8();
      FUN_108294bf0(&puStack_58);
    }
  }
  return;
}



/* Entry: 10827e11c; end: 10827e273;  */

undefined8
FUN_10827e11c(long param_1,int param_2,long *param_3,undefined8 param_4,undefined8 *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  undefined8 extraout_x9;
  int extraout_w12;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  plStack_30 = (long *)*param_3;
  *param_3 = 0;
  if (plStack_30 != (long *)0x0) {
    plStack_30 = (long *)((long)plStack_30 + *(long *)(*plStack_30 + -0x18));
  }
  uStack_38 = *param_5;
  *param_5 = 0;
  FUN_1082bfb6c(&lStack_28,uVar1,param_4,&plStack_30,&uStack_38,param_6,param_7);
  FUN_10810a400(&uStack_38);
  FUN_1082764bc(&plStack_30);
  if (lStack_28 == 0) {
LAB_10827e1b4:
    uVar1 = 0;
  }
  else {
    lVar3 = lStack_28;
    if (param_2 == 1) {
      plVar2 = *(long **)(param_1 + 0x128);
      (**(code **)(*plVar2 + 0x40))();
      if (((ulong)plVar2 & 1) != 0) goto LAB_10827e1b4;
      lVar3 = *(long *)(param_1 + 0x138);
      uStack_48 = 0;
      if (*(long *)(lVar3 + 0x10) != 0) {
        do {
          func_0x00010827fef8();
          lVar3 = extraout_x8;
          uStack_48 = extraout_x9;
        } while (extraout_w12 != 0);
      }
      uStack_40 = *(undefined4 *)(lVar3 + 0x18);
      uStack_3c = *(undefined2 *)(lVar3 + 0x1c);
      FUN_1082c46f8();
      FUN_1082764bc(&uStack_48);
      lVar3 = lStack_28;
    }
    lStack_28 = 0;
    FUN_10827f608(param_1 + 0x138,lVar3);
    uVar1 = 1;
  }
  FUN_10827f5e4(&lStack_28);
  return uVar1;
}



/* Entry: 10827e274; end: 10827e49b;  */

long * FUN_10827e274(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,long *param_5
                    ,code *param_6,long *param_7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint extraout_w8;
  undefined8 extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 extraout_x10;
  int extraout_w12;
  int extraout_w12_00;
  uint *unaff_x19;
  uint uVar15;
  long *unaff_x20;
  long *unaff_x23;
  long unaff_x24;
  ulong uVar16;
  uint *unaff_x25;
  long *plVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  long *aplStack_220 [7];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [88];
  char cStack_168;
  long lStack_150;
  long *plStack_148;
  long *plStack_140;
  uint *puStack_138;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  uint uStack_d0;
  undefined2 uStack_cc;
  uint uStack_c8;
  byte bStack_c4;
  undefined1 *puStack_c0;
  char cStack_70;
  undefined8 uStack_58;
  
  func_0x00010827ff38();
  func_0x00010827fc60();
  uStack_58 = extraout_x8;
  FUN_10827e094();
  lVar14 = unaff_x20[0x27];
  lStack_d8 = 0;
  if (*(long *)(lVar14 + 0x10) != 0) {
    do {
      func_0x00010827fef8();
      lVar14 = extraout_x8_00;
      lStack_d8 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uStack_d0 = *(uint *)(lVar14 + 0x18);
  uStack_cc = *(undefined2 *)(lVar14 + 0x1c);
  puVar4 = (uint *)(ulong)*(uint *)(unaff_x20 + 3);
  FUN_10827b590();
  puVar13 = (uint *)0x1;
  puVar11 = puVar4;
  FUN_10828a818(&uStack_c8,*(undefined8 *)(*(long *)(unaff_x20[0x25] + 0x10) + 0xb8));
  if ((bStack_c4 & 1) == 0) {
    unaff_x20 = (long *)0x0;
  }
  else {
    unaff_x24 = *(long *)(unaff_x20[0x25] + 0x48);
    unaff_x25 = (uint *)unaff_x20[4];
    unaff_x23 = (long *)(long)(char)param_1[1];
    param_6 = (code *)&lStack_d8;
    FUN_1082b27cc();
    puVar11 = &uStack_c8;
    param_4 = (uint *)0x1;
    param_7 = (long *)0x1;
    puVar13 = unaff_x25;
    param_5 = unaff_x23;
    FUN_1082a5548(&plStack_e0,unaff_x24,puVar11,unaff_x25,1);
    if (plStack_e0 == (long *)0x0) {
      unaff_x20 = (long *)0x0;
    }
    else {
      lVar14 = (long)plStack_e0 + *(long *)(*plStack_e0 + -0x18);
      (**(code **)(*(long *)((long)plStack_e0 + *(long *)(*plStack_e0 + -0x18)) + 0x28))();
      if (lVar14 != 0) {
        do {
          func_0x00010827fc90();
        } while (extraout_w10 != 0);
      }
      lStack_f0 = 0;
      lStack_e8 = lVar14;
      if (unaff_x20[2] != 0) {
        do {
          func_0x00010827fc90();
          lStack_f0 = extraout_x8_01;
        } while (extraout_w10_00 != 0);
      }
      param_6 = (code *)(ulong)uStack_d0;
      puVar13 = (uint *)&lStack_e8;
      param_5 = &lStack_f0;
      param_7 = unaff_x20 + 5;
      param_4 = puVar4;
      FUN_10827e11c();
      func_0x00010827fd14();
      func_0x0001082764f4(&lStack_e8);
      puVar11 = unaff_x19;
    }
    func_0x00010827aaa0(&plStack_e0);
  }
  uVar3 = cStack_70 == '\x01';
  if ((bool)uVar3) {
    func_0x00010827fdf4();
  }
  plVar7 = &lStack_d8;
  func_0x0001082764bc();
  func_0x00010827fc08(uStack_58);
  if ((bool)uVar3) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  func_0x00010827fd14();
  func_0x0001082764f4(&lStack_e8);
  func_0x00010827aaa0(&plStack_e0);
  uVar3 = cStack_70 == '\x01';
  if ((bool)uVar3) {
    func_0x00010827fdf4();
  }
  plVar5 = &lStack_d8;
  func_0x0001082764bc();
  func_0x00010827fca0();
  plVar17 = (long *)plVar5[0x27];
  plVar6 = (long *)plVar17[1];
  lStack_150 = unaff_x24;
  plStack_148 = unaff_x23;
  plStack_140 = param_1;
  puStack_138 = puVar4;
  func_0x00010827fcf0();
  plVar9 = plStack_140;
  plVar5 = plStack_148;
  if (plVar6 == (long *)0x0) {
    return (long *)0x0;
  }
  func_0x0001082bfb54(FUN_10827e49c);
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x0001082bf870();
  if (plVar6 == (long *)0x0) {
    uStack_270 = 0;
    func_0x0001082bf968();
    func_0x0001082bfb14();
    plVar6 = plVar9;
    param_4 = unaff_x25;
    param_5 = plVar7;
    goto joined_r0x0001082bbeac;
  }
  plVar7 = (long *)plVar17[2];
  plVar5 = plVar17;
  if ((plVar7 != (long *)0x0) && (func_0x0001082bf83c(), plVar7 != (long *)0x0)) {
    uVar3 = *(char *)((long)plVar7 + 10) == '\x01';
    if ((bool)uVar3) {
      plStack_278 = (long *)0x0;
      func_0x0001082bf968();
      plVar17 = plStack_278;
      plStack_278 = (long *)0x0;
      goto joined_r0x0001082bbeac;
    }
    func_0x0001082bfb34();
    if ((extraout_w8 >> 3 & 1) != 0) {
      uStack_280 = 0;
      func_0x0001082bf968();
      func_0x0001082bfad4();
      plVar17 = plVar7;
      goto joined_r0x0001082bbeac;
    }
  }
  uVar8 = (ulong)puVar11[2];
  FUN_1082bc3c8();
  if ((int)uVar8 != 0) {
    puVar4 = puVar13;
    func_0x00010821a0c0();
    if (((puVar4 == *(uint **)(puVar11 + 4)) && ((int)plVar17[3] != 1)) &&
       (*(uint *)((long)plVar17 + 0x34) == puVar11[3])) {
      lVar14 = plVar17[4];
      FUN_108343f98(lVar14,*(undefined8 *)puVar11);
      uVar15 = (uint)lVar14 ^ 1;
    }
    else {
      uVar15 = 1;
    }
    FUN_108283324(auStack_1c0,plVar17[2] + 0x20);
    plVar7 = *(long **)(*(long *)(plVar17[1] + 0x10) + 0xb8);
    FUN_10828a790(plVar7,(int)plVar17[6],auStack_1c0,uVar8);
    if ((int)plVar7 == 0) {
      plStack_290 = (long *)0x0;
      func_0x0001082bf8a0();
      param_5 = plStack_290;
      plStack_290 = (long *)0x0;
      goto LAB_1082bc1a0;
    }
    func_0x0001082bc3e4();
    func_0x0001082bc3e4();
    plVar9 = (long *)(ulong)*(uint *)(plVar17 + 6);
    func_0x0001082bc3e4();
    if (((uint)uVar8 & ((uint)plVar7 ^ 0xffffffff) & (uint)plVar9) != 0) {
      plStack_298 = (long *)0x0;
      func_0x0001082bf8a0();
      param_5 = plStack_298;
      plStack_298 = (long *)0x0;
      plVar7 = plVar9;
      goto LAB_1082bc1a0;
    }
    uVar19 = *puVar13;
    uVar8 = (ulong)puVar13[1];
    if (uVar15 == 0) {
      param_5 = (long *)0x0;
    }
    else {
      FUN_1082a0a90(aplStack_220,puVar11);
      func_0x0001082a0bd8(&plStack_268,aplStack_220,(int)plVar17[6]);
      func_0x0001082bf880();
      FUN_1082bc400(aplStack_220,plVar17,&plStack_268,0,*(undefined8 *)puVar13,
                    *(undefined8 *)(puVar13 + 2),param_4,param_5);
      param_5 = aplStack_220[0];
      if (aplStack_220[0] == (long *)0x0) {
        plStack_2a0 = (long *)0x0;
        func_0x0001082bf8a0();
        plVar17 = plStack_2a0;
        plStack_2a0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          func_0x0001082bf730();
        }
      }
      else {
        uVar8 = 0;
        uVar19 = 0;
      }
      func_0x0001082bf8d0();
      plVar5 = param_5;
      if (param_5 == (long *)0x0) goto LAB_1082bc1a8;
    }
    uVar12 = *(undefined8 *)(puVar11 + 4);
    param_4 = (uint *)((ulong)uVar19 | uVar8 << 0x20);
    FUN_1082b8664();
    puStack_2b0 = param_4;
    uStack_2a8 = uVar12;
    if (*(char *)(plVar5[2] + 0xcb) == '\x01') {
      plStack_268 = (long *)0x0;
      (*param_6)(param_7,&plStack_268);
      plVar7 = plStack_268;
      plStack_268 = (long *)0x0;
      if (plVar7 == (long *)0x0) goto LAB_1082bc1a0;
      func_0x0001082bf730();
      goto LAB_1082bc1a0;
    }
    uVar16 = (ulong)puVar11[2];
    lVar14 = plVar6[0x13];
    uVar8 = uVar16;
    FUN_1082bc3c8(uVar16);
    plVar7 = &lStack_150;
    FUN_1082bc508(plVar7,plVar5,uVar8,&puStack_2b0);
    iVar18 = (int)((ulong)uVar12 >> 0x20);
    iVar20 = (int)((ulong)param_4 >> 0x20);
    if (lStack_150 != 0) {
      func_0x0001082bfa38();
      *plVar7 = (long)param_6;
      plVar7[1] = (long)param_7;
      plVar7[2] = CONCAT44(iVar18 - iVar20,(int)uVar12 - (int)param_4);
      plVar7[3] = lVar14;
      FUN_1082beb3c(plVar7 + 4,&lStack_150);
      plStack_268 = (long *)0x0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_258 = 0;
      uStack_230 = 0;
      lStack_238 = 0;
      pcStack_250 = FUN_1082bebac;
      plStack_240 = plVar7;
      aplStack_220[0] = plVar6;
      func_0x0001082bf824(aplStack_220,plVar5[2]);
      goto LAB_1082bc198;
    }
    uStack_1c8 = CONCAT44(iVar18 - iVar20,(int)uVar12 - (int)param_4);
    uVar8 = (ulong)*(uint *)((long)plVar5 + 0x34);
    uStack_1d8 = 0;
    if (plVar5[4] != 0) {
      do {
        func_0x0001082bf9b0();
        uStack_1c8 = extraout_x8_03;
        uVar8 = extraout_x9_00;
        uStack_1d8 = extraout_x10;
      } while (extraout_w12_00 != 0);
    }
    uStack_1e0 = 0;
    uStack_1d0 = uVar16 | uVar8 << 0x20;
    FUN_10810a400(&uStack_1e0);
    plVar7 = plVar6;
    if ((bRam000000011372a630 & 1) == 0) goto LAB_1082bc1f0;
    goto LAB_1082bc0b0;
  }
  plStack_288 = (long *)0x0;
  func_0x0001082bf968();
  plVar17 = plStack_288;
  plStack_288 = (long *)0x0;
joined_r0x0001082bbeac:
  if (plVar17 != (long *)0x0) {
    func_0x0001082bf730();
  }
  while (func_0x0001082bf7d8(extraout_x8_02), !(bool)uVar3) {
    ___stack_chk_fail();
LAB_1082bc1f0:
    iVar18 = 0x1372a630;
    ___cxa_guard_acquire();
    plVar7 = plVar6;
    if (iVar18 != 0) {
      uRam000000011372a628 = 0;
      ___cxa_guard_release(0x11372a630);
    }
LAB_1082bc0b0:
    puVar10 = (undefined8 *)0x80;
    __Znwm();
    uVar1 = uRam000000011372a628;
    *puVar10 = &PTR_FUN_110a373a8;
    puVar10[0xd] = puVar10 + 1;
    puVar10[0xe] = 0x800000000;
    *(undefined4 *)(puVar10 + 0xf) = uVar1;
    FUN_1082a0a90(aplStack_220,&uStack_1d8);
    FUN_10828d3a4(&plStack_268,aplStack_220);
    func_0x0001082bf880();
    uVar12 = 0;
    if (lStack_238 != 0) {
      do {
        func_0x0001082bf774();
        uVar12 = extraout_x8_04;
      } while (extraout_w10_01 != 0);
    }
    uStack_1e8 = uVar12;
    FUN_1082bc920(puVar10,&uStack_1e8,CONCAT44(uStack_25c,uStack_260));
    FUN_1082beaf4(uStack_1e8);
    FUN_108290898(aplStack_220,&plStack_268);
    plVar6 = plVar5;
    FUN_1082ba0d4(plVar5,plVar7,aplStack_220,param_4);
    func_0x0001082bf980();
    if (((ulong)plVar6 & 1) == 0) {
      puStack_228 = (undefined8 *)0x0;
      func_0x0001082bfa24();
    }
    else {
      puStack_228 = puVar10;
      func_0x0001082bfa24();
      puVar10 = (undefined8 *)0x0;
    }
    puVar2 = puStack_228;
    puStack_228 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      func_0x0001082bf730();
    }
    func_0x0001082bf988();
    if (puVar10 != (undefined8 *)0x0) {
      func_0x0001082bf7b0();
    }
    FUN_10810a400(&uStack_1d8);
LAB_1082bc198:
    plVar7 = &lStack_150;
    func_0x0001082bef60(plVar7);
LAB_1082bc1a0:
    plVar17 = plVar7;
    if (param_5 != (long *)0x0) {
      func_0x0001082bf784();
      plVar17 = plVar7;
    }
LAB_1082bc1a8:
    uVar3 = cStack_168 == '\x01';
    if ((bool)uVar3) {
      func_0x0001082bf768(auStack_1c0);
    }
  }
  return plVar17;
}



/* Entry: 10827e49c; end: 10827e52b;  */

void FUN_10827e49c(long param_1,undefined8 *param_2,uint *param_3,ulong param_4,ulong param_5,
                  code *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x9;
  int extraout_w10;
  undefined8 extraout_x10;
  int extraout_w12;
  ulong unaff_x19;
  uint uVar10;
  undefined8 uVar11;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong uVar12;
  ulong unaff_x25;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 unaff_x30;
  ulong uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  ulong auStack_110 [7];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [88];
  char cStack_58;
  
  uVar13 = *(ulong *)(param_1 + 0x138);
  uVar5 = *(ulong *)(uVar13 + 8);
  func_0x00010827fcf0();
  if (uVar5 == 0) {
    return;
  }
  func_0x0001082bfb54(unaff_x30);
  func_0x0001082bf870();
  if (uVar5 == 0) {
    uStack_160 = 0;
    func_0x0001082bf968();
    func_0x0001082bfb14();
    uVar5 = unaff_x22;
    param_4 = unaff_x25;
    param_5 = unaff_x19;
    uVar6 = uVar13;
    goto joined_r0x0001082bbeac;
  }
  uVar6 = *(ulong *)(uVar13 + 0x10);
  unaff_x23 = uVar13;
  if ((uVar6 != 0) && (func_0x0001082bf83c(), uVar6 != 0)) {
    in_ZR = *(char *)(uVar6 + 10) == '\x01';
    if ((bool)in_ZR) {
      uStack_168 = 0;
      func_0x0001082bf968();
      uVar6 = uStack_168;
      uStack_168 = 0;
      goto joined_r0x0001082bbeac;
    }
    func_0x0001082bfb34();
    if ((extraout_w8 >> 3 & 1) != 0) {
      uStack_170 = 0;
      func_0x0001082bf968();
      func_0x0001082bfad4();
      goto joined_r0x0001082bbeac;
    }
  }
  uVar6 = (ulong)*(uint *)(param_2 + 1);
  FUN_1082bc3c8();
  if ((int)uVar6 != 0) {
    puVar7 = param_3;
    func_0x00010821a0c0();
    if (((puVar7 == (uint *)param_2[2]) && (*(int *)(uVar13 + 0x18) != 1)) &&
       (*(int *)(uVar13 + 0x34) == *(int *)((long)param_2 + 0xc))) {
      uVar8 = *(undefined8 *)(uVar13 + 0x20);
      FUN_108343f98(uVar8,*param_2);
      uVar10 = (uint)uVar8 ^ 1;
    }
    else {
      uVar10 = 1;
    }
    FUN_108283324(auStack_b0,*(long *)(uVar13 + 0x10) + 0x20);
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(uVar13 + 8) + 0x10) + 0xb8);
    FUN_10828a790(uVar8,*(undefined4 *)(uVar13 + 0x30),auStack_b0,uVar6);
    uVar15 = (uint)uVar8;
    if (uVar15 == 0) {
      uStack_180 = 0;
      func_0x0001082bf8a0();
      param_5 = uStack_180;
      uStack_180 = 0;
      goto LAB_1082bc1a0;
    }
    func_0x0001082bc3e4();
    func_0x0001082bc3e4();
    uVar4 = *(uint *)(uVar13 + 0x30);
    func_0x0001082bc3e4();
    if (((uint)uVar6 & (uVar15 ^ 0xffffffff) & uVar4) != 0) {
      uStack_188 = 0;
      func_0x0001082bf8a0();
      param_5 = uStack_188;
      uStack_188 = 0;
      goto LAB_1082bc1a0;
    }
    uVar15 = *param_3;
    uVar6 = (ulong)param_3[1];
    if (uVar10 == 0) {
      param_5 = 0;
    }
    else {
      FUN_1082a0a90(auStack_110,param_2);
      func_0x0001082a0bd8(&lStack_158,auStack_110,*(undefined4 *)(uVar13 + 0x30));
      func_0x0001082bf880();
      FUN_1082bc400(auStack_110,uVar13,&lStack_158,0,*(undefined8 *)param_3,
                    *(undefined8 *)(param_3 + 2),param_4,param_5);
      param_5 = auStack_110[0];
      if (auStack_110[0] == 0) {
        lStack_190 = 0;
        func_0x0001082bf8a0();
        lVar2 = lStack_190;
        lStack_190 = 0;
        if (lVar2 != 0) {
          func_0x0001082bf730();
        }
      }
      else {
        uVar6 = 0;
        uVar15 = 0;
      }
      func_0x0001082bf8d0();
      uVar13 = param_5;
      if (param_5 == 0) goto LAB_1082bc1a8;
    }
    uVar8 = param_2[2];
    param_4 = (ulong)uVar15 | uVar6 << 0x20;
    FUN_1082b8664();
    uStack_1a0 = param_4;
    uStack_198 = uVar8;
    if (*(char *)(*(long *)(uVar13 + 0x10) + 0xcb) == '\x01') {
      lStack_158 = 0;
      (*param_6)(param_7,&lStack_158);
      lVar2 = lStack_158;
      lStack_158 = 0;
      if (lVar2 == 0) goto LAB_1082bc1a0;
      func_0x0001082bf730();
      goto LAB_1082bc1a0;
    }
    uVar12 = (ulong)*(uint *)(param_2 + 1);
    uVar11 = *(undefined8 *)(uVar5 + 0x98);
    uVar6 = uVar12;
    FUN_1082bc3c8(uVar12);
    puVar9 = (undefined8 *)&stack0xffffffffffffffc0;
    FUN_1082bc508(puVar9,uVar13,uVar6,&uStack_1a0);
    iVar14 = (int)((ulong)uVar8 >> 0x20);
    iVar16 = (int)(param_4 >> 0x20);
    if (unaff_x24 != 0) {
      func_0x0001082bfa38();
      *puVar9 = param_6;
      puVar9[1] = param_7;
      puVar9[2] = CONCAT44(iVar14 - iVar16,(int)uVar8 - (int)param_4);
      puVar9[3] = uVar11;
      FUN_1082beb3c(puVar9 + 4,&stack0xffffffffffffffc0);
      lStack_158 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_148 = 0;
      uStack_120 = 0;
      lStack_128 = 0;
      pcStack_140 = FUN_1082bebac;
      puStack_130 = puVar9;
      auStack_110[0] = uVar5;
      func_0x0001082bf824(auStack_110,*(undefined8 *)(uVar13 + 0x10));
      goto LAB_1082bc198;
    }
    uStack_b8 = CONCAT44(iVar14 - iVar16,(int)uVar8 - (int)param_4);
    uVar6 = (ulong)*(uint *)(uVar13 + 0x34);
    uStack_c8 = 0;
    if (*(long *)(uVar13 + 0x20) != 0) {
      do {
        func_0x0001082bf9b0();
        uStack_b8 = extraout_x8_00;
        uVar6 = extraout_x9;
        uStack_c8 = extraout_x10;
      } while (extraout_w12 != 0);
    }
    uStack_d0 = 0;
    uStack_c0 = uVar12 | uVar6 << 0x20;
    FUN_10810a400(&uStack_d0);
    uVar6 = uVar5;
    if ((bRam000000011372a630 & 1) == 0) goto LAB_1082bc1f0;
    goto LAB_1082bc0b0;
  }
  uStack_178 = 0;
  func_0x0001082bf968();
  uVar6 = uStack_178;
  uStack_178 = 0;
joined_r0x0001082bbeac:
  uVar13 = unaff_x23;
  if (uVar6 != 0) {
    func_0x0001082bf730();
  }
  while (func_0x0001082bf7d8(extraout_x8), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_1082bc1f0:
    iVar14 = 0x1372a630;
    ___cxa_guard_acquire();
    uVar6 = uVar5;
    if (iVar14 != 0) {
      uRam000000011372a628 = 0;
      ___cxa_guard_release(0x11372a630);
    }
LAB_1082bc0b0:
    puVar9 = (undefined8 *)0x80;
    __Znwm();
    uVar1 = uRam000000011372a628;
    *puVar9 = &PTR_FUN_110a373a8;
    puVar9[0xd] = puVar9 + 1;
    puVar9[0xe] = 0x800000000;
    *(undefined4 *)(puVar9 + 0xf) = uVar1;
    FUN_1082a0a90(auStack_110,&uStack_c8);
    FUN_10828d3a4(&lStack_158,auStack_110);
    func_0x0001082bf880();
    uVar8 = 0;
    if (lStack_128 != 0) {
      do {
        func_0x0001082bf774();
        uVar8 = extraout_x8_01;
      } while (extraout_w10 != 0);
    }
    uStack_d8 = uVar8;
    FUN_1082bc920(puVar9,&uStack_d8,CONCAT44(uStack_14c,uStack_150));
    FUN_1082beaf4(uStack_d8);
    FUN_108290898(auStack_110,&lStack_158);
    uVar5 = uVar13;
    FUN_1082ba0d4(uVar13,uVar6,auStack_110,param_4);
    func_0x0001082bf980();
    if ((uVar5 & 1) == 0) {
      puStack_118 = (undefined8 *)0x0;
      func_0x0001082bfa24();
    }
    else {
      puStack_118 = puVar9;
      func_0x0001082bfa24();
      puVar9 = (undefined8 *)0x0;
    }
    puVar3 = puStack_118;
    puStack_118 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      func_0x0001082bf730();
    }
    func_0x0001082bf988();
    if (puVar9 != (undefined8 *)0x0) {
      func_0x0001082bf7b0();
    }
    FUN_10810a400(&uStack_c8);
LAB_1082bc198:
    func_0x0001082bef60(&stack0xffffffffffffffc0);
LAB_1082bc1a0:
    if (param_5 != 0) {
      func_0x0001082bf784();
    }
LAB_1082bc1a8:
    in_ZR = cStack_58 == '\x01';
    if ((bool)in_ZR) {
      func_0x0001082bf768(auStack_b0);
    }
  }
  return;
}



/* Entry: 10827e52c; end: 10827e5db;  */

void FUN_10827e52c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_1 + 0x138);
  lVar1 = *(long *)(lVar2 + 8);
  func_0x00010827fcf0();
  if (lVar1 != 0) {
    uStack_58 = *param_4;
    *param_4 = 0;
    FUN_1082bc9b0(lVar2,lVar1,param_2,param_3,&uStack_58,param_5,param_6,param_7,param_8);
    FUN_10810a400(&uStack_58);
  }
  return;
}



/* Entry: 10827e5dc; end: 10827e723;  */

void FUN_10827e5dc(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uVar3;
  long lVar4;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_2 + 0x30);
  uStack_50 = CONCAT44((int)param_3[3],*(undefined4 *)(param_2 + 0x28));
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  uVar1 = (ulong)*(uint *)(param_3 + 1);
  FUN_10827b590(uVar1);
  uStack_60 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010827fc90();
      uStack_60 = extraout_x8;
    } while (extraout_w10 != 0);
  }
  lVar4 = param_3[2];
  plVar2 = *(long **)(*(long *)(param_2 + 0x138) + 0x10);
  (**(code **)(*plVar2 + 0x28))();
  FUN_1082c0054(&lStack_58,uVar3,uVar1,&uStack_60,0,lVar4,&uStack_50,(long)(char)plVar2[1],0,
                *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x138) + 0x10) + 0xcb),
                *(undefined4 *)(*(long *)(param_2 + 0x138) + 0x18),1);
  func_0x00010827fd14();
  if (lStack_58 == 0) {
    *param_1 = 0;
  }
  else {
    plVar2 = param_3;
    func_0x0001081fc0c4(param_3);
    lStack_70 = lStack_58;
    lStack_58 = 0;
    FUN_10827b330(&uStack_68,&lStack_70,*(undefined4 *)((long)param_3 + 0xc),plVar2);
    uVar3 = uStack_68;
    uStack_68 = 0;
    *param_1 = uVar3;
    FUN_108276880(&uStack_68);
    FUN_10827f5e4(&lStack_70);
  }
  func_0x00010827fe58();
  return;
}



/* Entry: 10827e724; end: 10827e79f;  */

void FUN_10827e724(void)

{
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x21;
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010827ff28();
  FUN_10827e094();
  lVar1 = *(long *)(unaff_x21 + 0x128);
  func_0x00010827fcb0();
  if (lVar1 == 0) {
    *extraout_x8 = 0;
  }
  else {
    if (unaff_x19 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *unaff_x19;
    }
    FUN_10827b474(&stack0xffffffffffffffd8,lVar1,0);
    if (unaff_x21 == 0) {
      *extraout_x8 = 0;
    }
    else {
      FUN_108276444(&stack0xffffffffffffffc0,&stack0xffffffffffffffd8);
      *extraout_x8 = uVar2;
      FUN_1082768c4(&stack0xffffffffffffffc0);
    }
    FUN_108276880(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 10827e7a0; end: 10827e873;  */

bool FUN_10827e7a0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = -1;
  lVar3 = param_2;
  FUN_10827bb38(param_2,&uStack_48);
  lVar2 = lStack_38;
  if (lStack_38 != -1) {
    lVar4 = *(long *)(param_2 + 0x138);
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x00010827fc3c();
    ppuStack_78 = &PTR_PTR_110a34ca8;
    uStack_60 = 0;
    uVar1 = *(uint *)(lVar4 + 0x50);
    uStack_5c = param_1;
    FUN_10827e874();
    FUN_1082c2a4c(lVar4,0,&ppuStack_78,uVar1 >> 1 & 1,0x113254e20,&uStack_48,lVar3,&UNK_10df12d74);
    func_0x00010827fee8();
  }
  FUN_10838f648(&uStack_48);
  return lVar2 != -1;
}



/* Entry: 10827e874; end: 10827e8eb;  */

undefined8 FUN_10827e874(void)

{
  int iVar1;
  
  if ((bRam0000000113254d18 & 1) == 0) {
    iVar1 = 0x13254d18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      dRam0000000113254cd0 = (double)NEON_fmov(0x3f800000,4);
      dRam0000000113254cd0 = -dRam0000000113254cd0;
      uRam0000000113254cd8 = 0x40800000;
      uRam0000000113254d10 = 0;
      uRam0000000113254cdc = 0;
      uRam0000000113254cec = 0;
      uRam0000000113254ce4 = 0;
      uRam0000000113254cf4 = 0;
      ___cxa_guard_release(0x113254d18);
    }
  }
  return 0x113254cd0;
}



/* Entry: 10827e8ec; end: 10827e927;  */

void FUN_10827e8ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x238) + (long)*(int *)(*(long *)(param_1 + 0x238) + 0x18);
  *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
  return;
}



/* Entry: 10827e928; end: 10827e9a3;  */

void FUN_10827e928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [192];
  
  func_0x00010827fcfc();
  FUN_10827f288();
  FUN_108276b30(auStack_f0,unaff_x19 + 0xf8,auStack_130,param_4,param_3);
  FUN_108279e4c(unaff_x19 + 0x140,auStack_f0);
  func_0x00010827fe80();
  func_0x00010827fed8();
  return;
}



/* Entry: 10827e9a4; end: 10827e9fb;  */

void FUN_10827e9a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar2 = &uStack_40;
  FUN_10817500c(param_6);
  uStack_40 = (undefined4 *)CONCAT44(param_2,param_1);
  uStack_38 = (undefined1 *)CONCAT44(param_4,param_3);
  FUN_10835e94c(param_5 + 0xb8);
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_108277294();
  uStack_40 = puVar1;
  uStack_38 = (undefined1 *)puVar2;
  FUN_108279d18(param_5 + 0x140,&uStack_40);
  return;
}



/* Entry: 10827e9fc; end: 10827eaa7;  */

bool FUN_10827e9fc(long param_1)

{
  return *(char *)(*(long *)(param_1 + 0x238) + (long)*(int *)(*(long *)(param_1 + 0x238) + 0x18) +
                  0x3c) == '\0';
}



/* Entry: 10827eaa8; end: 10827eaeb;  */

void FUN_10827eaa8(long param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  *param_2 = 0;
  FUN_108279cb4(param_1 + 0x140,&uStack_28);
  func_0x000106f47224(&uStack_28);
  return;
}



/* Entry: 10827eaec; end: 10827eb2b;  */

bool FUN_10827eaec(long param_1)

{
  if ((0 < (int)*(uint *)(param_1 + 0x10)) &&
     ((0 < (int)*(uint *)(param_1 + 0x14) && *(uint *)(param_1 + 0x10) >> 0x1d == 0) &&
      *(uint *)(param_1 + 0x14) >> 0x1d == 0)) {
    return *(int *)(param_1 + 8) != 0 && *(int *)(param_1 + 0xc) != 0;
  }
  return false;
}



/* Entry: 10827eb2c; end: 10827eb7b;  */

void FUN_10827eb2c(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010827fcfc();
  FUN_1082a0a90();
  func_0x000108280034();
  FUN_10827eb7c();
  func_0x00010828afb8(auStack_40);
  return;
}



/* Entry: 10827eb7c; end: 10827ebf7;  */

void FUN_10827eb7c(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x21;
  ulong uVar2;
  undefined1 auStack_70 [64];
  
  func_0x00010827fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  uVar2 = *(ulong *)(unaff_x19 + 8);
  uVar1 = unaff_x19 + 0x10;
  FUN_108269618();
  if ((unaff_x21 == 0) || (uVar2 < uVar1)) {
    func_0x000108280054();
    func_0x000108280034();
    FUN_10827ebf8();
    func_0x00010827ec18(auStack_70);
  }
  return;
}



/* Entry: 10827ebf8; end: 10827ec37;  */

void FUN_10827ebf8(void)

{
  func_0x00010827fdb8();
  func_0x00010827ff84();
  return;
}



/* Entry: 10827ec38; end: 10827ec87;  */

void FUN_10827ec38(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010827fcfc();
  FUN_1082a0a90();
  func_0x000108280034();
  FUN_10827ec88();
  func_0x00010828afb8(auStack_40);
  return;
}



/* Entry: 10827ec88; end: 10827ed03;  */

void FUN_10827ec88(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x21;
  ulong uVar2;
  undefined1 auStack_70 [64];
  
  func_0x00010827fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  uVar2 = *(ulong *)(unaff_x19 + 8);
  uVar1 = unaff_x19 + 0x10;
  FUN_108269618();
  if ((unaff_x21 == 0) || (uVar2 < uVar1)) {
    func_0x000108280054();
    func_0x000108280034();
    FUN_10827ed04();
    func_0x00010827ed24(auStack_70);
  }
  return;
}



/* Entry: 10827ed04; end: 10827ed43;  */

void FUN_10827ed04(void)

{
  func_0x00010827fdb8();
  func_0x00010827ff84();
  return;
}



/* Entry: 10827ed44; end: 10827eddb;  */

long * FUN_10827ed44(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  
  func_0x00010827fd08();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    plVar1 = (long *)(*unaff_x19 + (long)*(int *)(param_1 + 8) * 8);
    func_0x00010827ff50();
    FUN_1083a33c4();
  }
  else {
    plVar1 = unaff_x19;
    FUN_10815ecac(0x3ff8000000000000);
    plVar1 = plVar1 + (int)unaff_x19[1];
    func_0x00010827ff50();
    FUN_1083a33c4();
    FUN_10815ecd0();
  }
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  return plVar1;
}



/* Entry: 10827eddc; end: 10827ee7f;  */

long FUN_10827eddc(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  func_0x00010827ee00();
  return param_1;
}



/* Entry: 10827ee80; end: 10827eea7;  */

undefined8 FUN_10827ee80(undefined8 param_1)

{
  FUN_10827eea8(param_1,0);
  return param_1;
}



/* Entry: 10827eea8; end: 10827ef2f;  */

void FUN_10827eea8(long *param_1,int param_2)

{
  int extraout_w8;
  int unaff_w19;
  long *unaff_x20;
  
  if (*(int *)((long)param_1 + 0x20) != param_2) {
    func_0x00010827ff38();
    if (6 < extraout_w8) {
      param_1 = (long *)*unaff_x20;
      _free();
    }
    if (unaff_w19 < 7) {
      param_1 = unaff_x20 + 1;
      if (unaff_w19 < 1) {
        param_1 = (long *)0x0;
      }
    }
    else {
      func_0x00010827fff8();
    }
    *unaff_x20 = (long)param_1;
    *(int *)(unaff_x20 + 4) = unaff_w19;
  }
  return;
}



/* Entry: 10827ef30; end: 10827efc3;  */

long FUN_10827ef30(long param_1,long *param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  FUN_1083a6264(0x3f800000);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  uStack_38 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010827fc80();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1082b1318(param_1,&uStack_38);
  func_0x000108115b70(&uStack_38);
  return param_1;
}



/* Entry: 10827efc4; end: 10827f01f;  */

undefined8 FUN_10827efc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_10827a530();
  func_0x00010827ffd8();
  func_0x00010827fd78();
  if (param_4 != 0) {
    func_0x00010827ffc4();
  }
  return param_1;
}



/* Entry: 10827f020; end: 10827f077;  */

undefined8 * FUN_10827f020(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = 0;
  if (param_2[2] != 0) {
    do {
      func_0x00010827fc80();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[2] = uVar1;
  FUN_10827f078(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10827f078; end: 10827f0b7;  */

long FUN_10827f078(long param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_10827f0b8();
  return param_1;
}



/* Entry: 10827f0b8; end: 10827f107;  */

void FUN_10827f0b8(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010827fd08();
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_10827eea8(param_1 + 2,param_2[10]);
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    _memcpy(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x20 + 8),
            (long)*(int *)(unaff_x20 + 0x28) << 2);
  }
  return;
}



/* Entry: 10827f108; end: 10827f12f;  */

undefined8 FUN_10827f108(undefined8 param_1)

{
  FUN_10827f130(param_1,0);
  return param_1;
}



/* Entry: 10827f130; end: 10827f1bf;  */

void FUN_10827f130(long *param_1,int param_2)

{
  int extraout_w8;
  int unaff_w19;
  long *unaff_x20;
  
  if (*(int *)((long)param_1 + 0x30) != param_2) {
    func_0x00010827ff38();
    if (10 < extraout_w8) {
      param_1 = (long *)*unaff_x20;
      _free();
    }
    if (unaff_w19 < 0xb) {
      param_1 = unaff_x20 + 1;
      if (unaff_w19 < 1) {
        param_1 = (long *)0x0;
      }
    }
    else {
      func_0x00010827fff8();
    }
    *unaff_x20 = (long)param_1;
    *(int *)(unaff_x20 + 6) = unaff_w19;
  }
  return;
}



/* Entry: 10827f1c0; end: 10827f287;  */

long FUN_10827f1c0(long param_1,undefined8 param_2,int param_3,undefined1 param_4,undefined8 param_5
                  ,undefined8 param_6,int param_7)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10827f288();
  FUN_10827f020(lVar1 + 0x40,param_6);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(bool *)(param_1 + 0x3a) = param_3 == 0;
  *(undefined1 *)(param_1 + 0x39) = param_4;
  FUN_1082771a4(param_1,param_5);
  if (param_7 != 0) {
    func_0x00010827ffc4();
  }
  return param_1;
}



/* Entry: 10827f288; end: 10827f307;  */

long FUN_10827f288(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  func_0x00010827739c();
  return param_1;
}



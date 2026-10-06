/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074d152c; end: 1074d1553;  */

void FUN_1074d152c(void)

{
  func_0x0001074d3ff0();
  func_0x0001074d3f78(&PTR_FUN_1109b5260);
  return;
}



/* Entry: 1074d1554; end: 1074d1577;  */

void FUN_1074d1554(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b5260;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074d1578; end: 1074d159f;  */

void FUN_1074d1578(undefined8 param_1)

{
  func_0x0001074d43c8();
  func_0x0001074d4050(param_1,&PTR_DAT_1109b52c0);
  func_0x0001074d3f3c();
  return;
}



/* Entry: 1074d15a0; end: 1074d15ab;  */

undefined ** FUN_1074d15a0(void)

{
  return &PTR_DAT_1109b52c0;
}



/* Entry: 1074d15ac; end: 1074d16a3;  */

void FUN_1074d15ac(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined1 auStack_c8 [24];
  char cStack_b0;
  undefined4 uStack_a0;
  undefined8 uStack_38;
  
  func_0x0001074d3a84();
  if ((*(byte *)*param_1 & 1) == 0) {
    func_0x0001074d3e80();
    iVar2 = *(int *)(param_2 + 8);
    if (iVar2 == 2) {
      uStack_a0 = 9;
      func_0x0001074d4254();
      func_0x0001074d3da4();
      if (unaff_w21 != 0) {
        func_0x0001074d4140();
        func_0x0001074d3dc0();
        func_0x0001074d4138();
        in_ZR = cStack_b0 == '\x01';
        if ((bool)in_ZR) {
          uVar3 = *(undefined8 *)(unaff_x19 + 8);
          func_0x0001074d1478(uVar3,auStack_c8);
          if ((int)uVar3 != 0) {
            func_0x0001074d3cd0();
          }
        }
        func_0x0001074d414c();
        goto LAB_1074d1660;
      }
      iVar2 = *(int *)(unaff_x20 + 8);
    }
    in_ZR = iVar2 == 0x12;
    if ((bool)in_ZR) {
      lVar4 = *(long *)(unaff_x20 + 0x48);
      do {
        in_ZR = 1;
        if (lVar4 == *(long *)(unaff_x20 + 0x50)) goto LAB_1074d1660;
        pcVar1 = (char *)(lVar4 + 0xe0);
        lVar4 = lVar4 + 0x100;
        in_ZR = *pcVar1 == '\x01';
      } while (!(bool)in_ZR);
      func_0x0001074d3cd0();
    }
    else {
      func_0x0001074d46e8();
      func_0x0001074d4398();
    }
  }
LAB_1074d1660:
  func_0x0001074d39e4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074d403c();
  FUN_1074030e4();
  func_0x0001074d3bc4();
  func_0x0001074d419c();
  FUN_1074d16c0();
  return;
}



/* Entry: 1074d16a4; end: 1074d16bf;  */

void FUN_1074d16a4(void)

{
  func_0x0001074d419c();
  FUN_1074d16c0();
  return;
}



/* Entry: 1074d16c0; end: 1074d1723;  */

long * FUN_1074d16c0(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_68 [32];
  long alStack_48 [4];
  undefined8 uStack_28;
  
  if ((int)param_1[9] == 0) {
    return (long *)0x0;
  }
  uVar2 = (int)param_1[9] == 1;
  if (!(bool)uVar2) {
    func_0x0001074d3a98(param_2 + 8);
    func_0x0001074d3bcc();
    plVar3 = alStack_48;
    FUN_1074d1788(plVar3,auStack_68);
    func_0x0001074d4b00();
    func_0x0001074d4160();
    func_0x0001074d39e4(uStack_28);
    if ((bool)uVar2) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x0001074d42c4();
    func_0x0001074d3bc4();
    func_0x0001074d3c2c();
    func_0x0001074d3bec(&PTR_FUN_1109b52e0);
    return plVar3;
  }
  lVar1 = *param_1;
  do {
    lVar4 = lVar1;
    if (lVar4 == param_1[1]) break;
    lVar1 = lVar4 + 0x120;
  } while (*(char *)(lVar4 + 0x118) != '\x01');
  return (long *)(ulong)(lVar4 != param_1[1]);
}



/* Entry: 1074d1724; end: 1074d1787;  */

undefined1 * FUN_1074d1724(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001074d3a98();
  func_0x0001074d3bcc();
  puVar1 = auStack_48;
  FUN_1074d1788(puVar1,auStack_68);
  func_0x0001074d4b00();
  func_0x0001074d4160();
  func_0x0001074d39e4(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001074d42c4();
  func_0x0001074d3bc4();
  func_0x0001074d3c2c();
  func_0x0001074d3bec(&PTR_FUN_1109b52e0);
  return puVar1;
}



/* Entry: 1074d1788; end: 1074d17ab;  */

void FUN_1074d1788(void)

{
  func_0x0001074d3c2c();
  func_0x0001074d3bec(&PTR_FUN_1109b52e0);
  return;
}



/* Entry: 1074d17ac; end: 1074d17b3;  */

void FUN_1074d17ac(void)

{
  return;
}



/* Entry: 1074d17b4; end: 1074d17db;  */

void FUN_1074d17b4(void)

{
  func_0x0001074d3ff0();
  func_0x0001074d3f78(&PTR_FUN_1109b52e0);
  return;
}



/* Entry: 1074d17dc; end: 1074d17ff;  */

void FUN_1074d17dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b52e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074d1800; end: 1074d1827;  */

void FUN_1074d1800(undefined8 param_1)

{
  func_0x0001074d43c8();
  func_0x0001074d4050(param_1,&PTR_DAT_1109b5340);
  func_0x0001074d3f3c();
  return;
}



/* Entry: 1074d1828; end: 1074d1833;  */

undefined ** FUN_1074d1828(void)

{
  return &PTR_DAT_1109b5340;
}



/* Entry: 1074d1834; end: 1074d192b;  */

void FUN_1074d1834(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 in_ZR;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined1 auStack_c8 [24];
  char cStack_b0;
  undefined4 uStack_a0;
  undefined8 uStack_38;
  
  func_0x0001074d3a84();
  if ((*(byte *)*param_1 & 1) == 0) {
    func_0x0001074d3e80();
    iVar2 = *(int *)(param_2 + 8);
    if (iVar2 == 2) {
      uStack_a0 = 9;
      func_0x0001074d4254();
      func_0x0001074d3da4();
      if (unaff_w21 != 0) {
        func_0x0001074d4140();
        func_0x0001074d3dc0();
        func_0x0001074d4138();
        in_ZR = cStack_b0 == '\x01';
        if ((bool)in_ZR) {
          param_1 = *(undefined8 **)(unaff_x19 + 8);
          func_0x0001074d1700(param_1,auStack_c8);
          if ((int)param_1 != 0) {
            func_0x0001074d3cd0();
          }
        }
        func_0x0001074d414c();
        goto LAB_1074d18e8;
      }
      iVar2 = *(int *)(unaff_x20 + 8);
    }
    in_ZR = iVar2 == 0x12;
    if ((bool)in_ZR) {
      lVar3 = *(long *)(unaff_x20 + 0x48);
      do {
        in_ZR = 1;
        if (lVar3 == *(long *)(unaff_x20 + 0x50)) goto LAB_1074d18e8;
        pcVar1 = (char *)(lVar3 + 0xf8);
        lVar3 = lVar3 + 0x100;
        in_ZR = *pcVar1 == '\x01';
      } while (!(bool)in_ZR);
      func_0x0001074d3cd0();
    }
    else {
      func_0x0001074d46e8();
      func_0x0001074d4398();
    }
  }
LAB_1074d18e8:
  func_0x0001074d39e4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074d403c();
  FUN_1074030e4();
  func_0x0001074d3bc4();
  func_0x0001074d3e80();
  FUN_107433134();
  FUN_1073dd9b0(param_1 + 9,unaff_x20 + 0x48);
  FUN_107433134(unaff_x19 + 0x80,unaff_x20 + 0x80);
  FUN_1073dd9b0(unaff_x19 + 200,unaff_x20 + 200);
  FUN_1073dd9b0(unaff_x19 + 0x100,unaff_x20 + 0x100);
  FUN_1073dd9b0(unaff_x19 + 0x138,unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x20 + 0x170);
  *(undefined1 *)(unaff_x19 + 0x178) = *(undefined1 *)(unaff_x20 + 0x178);
  FUN_1073dd9b0(unaff_x19 + 0x180,unaff_x20 + 0x180);
  FUN_107433134(unaff_x19 + 0x1b8,unaff_x20 + 0x1b8);
  FUN_1073dd9b0(unaff_x19 + 0x200,unaff_x20 + 0x200);
  FUN_107433134(unaff_x19 + 0x238,unaff_x20 + 0x238);
  FUN_1073dd9b0(unaff_x19 + 0x280,unaff_x20 + 0x280);
  FUN_1073dd9b0(unaff_x19 + 0x2b8,unaff_x20 + 0x2b8);
  FUN_1073dd9b0(unaff_x19 + 0x2f0,unaff_x20 + 0x2f0);
  *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x20 + 0x328);
  *(undefined1 *)(unaff_x19 + 0x330) = *(undefined1 *)(unaff_x20 + 0x330);
  return;
}



/* Entry: 1074d192c; end: 1074d19fb;  */

void FUN_1074d192c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074d3e80();
  FUN_107433134();
  FUN_1073dd9b0(param_1 + 0x48,unaff_x20 + 0x48);
  FUN_107433134(unaff_x19 + 0x80,unaff_x20 + 0x80);
  FUN_1073dd9b0(unaff_x19 + 200,unaff_x20 + 200);
  FUN_1073dd9b0(unaff_x19 + 0x100,unaff_x20 + 0x100);
  FUN_1073dd9b0(unaff_x19 + 0x138,unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x20 + 0x170);
  *(undefined1 *)(unaff_x19 + 0x178) = *(undefined1 *)(unaff_x20 + 0x178);
  FUN_1073dd9b0(unaff_x19 + 0x180,unaff_x20 + 0x180);
  FUN_107433134(unaff_x19 + 0x1b8,unaff_x20 + 0x1b8);
  FUN_1073dd9b0(unaff_x19 + 0x200,unaff_x20 + 0x200);
  FUN_107433134(unaff_x19 + 0x238,unaff_x20 + 0x238);
  FUN_1073dd9b0(unaff_x19 + 0x280,unaff_x20 + 0x280);
  FUN_1073dd9b0(unaff_x19 + 0x2b8,unaff_x20 + 0x2b8);
  FUN_1073dd9b0(unaff_x19 + 0x2f0,unaff_x20 + 0x2f0);
  *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x20 + 0x328);
  *(undefined1 *)(unaff_x19 + 0x330) = *(undefined1 *)(unaff_x20 + 0x330);
  return;
}



/* Entry: 1074d19fc; end: 1074d1b87;  */

undefined8 * FUN_1074d19fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w9;
  undefined1 extraout_w10;
  byte extraout_w11;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  byte bStack_92;
  undefined1 uStack_91;
  undefined1 auStack_90 [16];
  long alStack_80 [8];
  int iStack_40;
  undefined8 uStack_38;
  
  func_0x0001074d3a84();
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  uStack_a0 = 4;
  FUN_107433134(alStack_80,param_2);
  func_0x00010002b838(auStack_c0,param_3);
  puVar2 = auStack_90;
  func_0x0001072c9ff4(puVar2,&uStack_a8);
  func_0x00010785f1f4();
  uStack_97 = 0;
  puVar2 = puVar2 + 0x2e0;
  func_0x00010724e2c8(puVar2,&uStack_97);
  if (((ulong)puVar2 & 1) == 0) {
    if (iStack_40 == 0) {
      uStack_96 = 1;
      goto LAB_1074d1aac;
    }
    uStack_96 = *(undefined1 *)(alStack_80[0] + 0x20);
  }
  else {
    uStack_96 = 0;
    if (iStack_40 == 0) {
LAB_1074d1aac:
      uStack_95 = 1;
      uStack_94 = 1;
      uStack_93 = 1;
      bStack_92 = 1;
      goto LAB_1074d1ab8;
    }
  }
  func_0x0001074d4c88();
  uStack_95 = extraout_w8;
  uStack_94 = extraout_w9;
  uStack_93 = extraout_w10;
  bStack_92 = extraout_w11;
LAB_1074d1ab8:
  bStack_92 = bStack_92 & 1;
  uStack_91 = 0;
  func_0x0001072c9f9c(puVar1,0x13,auStack_90,&uStack_96);
  func_0x0001074d4470();
  *puVar1 = &PTR_FUN_1109b5360;
  FUN_107433134(puVar1 + 9,alStack_80);
  func_0x0001072625b4(puVar1 + 0x12,auStack_c0);
  *param_1 = puVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  FUN_1073debc4(alStack_80);
  puVar1 = &uStack_a8;
  func_0x0001072c9884();
  func_0x0001074d39e4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074d4470();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    FUN_1073debc4(alStack_80);
    puVar1 = &uStack_a8;
    func_0x0001072c9884();
    func_0x0001074d4abc();
    func_0x0001074d3fe0();
    func_0x000104c2f714(puVar1 + 0x12);
    FUN_1073debc4(puVar1 + 9);
    *puVar1 = &PTR_DAT_1109d4888;
    func_0x0001001148fc(puVar1 + 5);
    func_0x0001072c9884(puVar1 + 2);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1074d1b88; end: 1074d1b8b;  */

undefined8 * FUN_1074d1b88(undefined8 *param_1)

{
  func_0x000104c2f714(param_1 + 0x12);
  FUN_1073debc4(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1074d1b8c; end: 1074d1b9f;  */

void FUN_1074d1b8c(void)

{
  FUN_1074d1e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d1ba0; end: 1074d1baf;  */

long * FUN_1074d1ba0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_1[0x11] == 0) {
    return param_1;
  }
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 == (long *)0x0) {
    func_0x000104bfeb48(0,param_1[9]);
    plVar2 = (long *)plVar1[3];
    if (plVar2 == plVar1) {
      lVar3 = 0x20;
    }
    else {
      if (plVar2 == (long *)0x0) {
        return plVar1;
      }
      lVar3 = 0x28;
    }
    (**(code **)(*plVar2 + lVar3))();
    return plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return plVar1;
}



/* Entry: 1074d1bb0; end: 1074d1c33;  */

long * FUN_1074d1bb0(ulong param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_2 + 8) == 0x13) {
    func_0x0001074d4018();
    func_0x0001074d49c4();
    if ((param_1 & 1) == 0) {
      uVar1 = unaff_x20 + 0x90;
      func_0x000107262f24(uVar1,unaff_x19 + 0x90);
      if ((uVar1 & 1) == 0) {
        if (*(int *)(unaff_x20 + 0x88) == 0) {
          if (*(int *)(unaff_x19 + 0x88) == 0) {
            if (((*(float *)(unaff_x20 + 0x48) == *(float *)(unaff_x19 + 0x48)) &&
                (*(float *)(unaff_x20 + 0x4c) == *(float *)(unaff_x19 + 0x4c))) &&
               (*(float *)(unaff_x20 + 0x50) == *(float *)(unaff_x19 + 0x50))) {
              return (long *)(ulong)(*(float *)(unaff_x20 + 0x54) == *(float *)(unaff_x19 + 0x54));
            }
            return (long *)0x0;
          }
        }
        else if (*(int *)(unaff_x19 + 0x88) != 0) {
          plVar2 = *(long **)(unaff_x20 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x0001074d1c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(unaff_x19 + 0x48));
          return plVar2;
        }
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 1074d1c34; end: 1074d1c8b;  */

long * FUN_1074d1c34(undefined8 param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  ulong uVar7;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  undefined ***pppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 *puStack_1a8;
  undefined ****ppppuStack_1a0;
  undefined ***pppuStack_198;
  long lStack_178;
  undefined ***pppuStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long alStack_128 [3];
  undefined **ppuStack_110;
  long *plStack_108;
  undefined ***pppuStack_f8;
  undefined8 uStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)auStack_a0;
  func_0x0001074d3a98(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x0001074d4a84();
  func_0x000107296ad0();
  func_0x0001074d39e4(uStack_28);
  plVar2 = plVar1;
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074d3fac();
    func_0x000107296ad0();
    func_0x0001074d3bc4();
    pcStack_a8 = FUN_1074d1c8c;
    plVar2 = plVar1;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x0001074d3a84();
    alStack_128[0] = 0;
    alStack_128[1] = 0;
    alStack_128[2] = 0;
    (**(code **)(*plVar2 + 0x40))(&ppuStack_110);
    func_0x0001074d2254(alStack_128,&ppuStack_110);
    func_0x000104c2f714(&ppuStack_110);
    ppuStack_110 = &PTR_FUN_1109b55b0;
    plStack_108 = alStack_128;
    pppuStack_f8 = &ppuStack_110;
    func_0x0001074d4398(*(undefined8 *)(*plVar1 + 0x10));
    FUN_10745df78(&ppuStack_110);
    FUN_107327958(&uStack_140,alStack_128);
    *extraout_x8_00 = 0;
    *(undefined8 *)(extraout_x8_00 + 4) = uStack_138;
    *(undefined8 *)(extraout_x8_00 + 2) = uStack_140;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x000104c33108(&uStack_140);
    plVar2 = alStack_128;
    func_0x000107269124();
    func_0x0001074d39e4(uStack_d8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      FUN_10745df78(&ppuStack_110);
      plVar3 = alStack_128;
      func_0x000107269124();
      func_0x0001074d3bc4();
      pcStack_148 = FUN_1074d1d84;
      plVar4 = plVar3;
      pppuStack_170 = &ppuStack_110;
      plStack_168 = alStack_128;
      plStack_160 = plVar1;
      plStack_158 = plVar2;
      ppuStack_150 = &puStack_b0;
      func_0x0001074d3a84();
      (**(code **)(*plVar4 + 0x40))(&ppuStack_1b0);
      pppuVar5 = &ppuStack_1b0;
      FUN_1074d25b4();
      func_0x000104c2f714(&ppuStack_1b0);
      lStack_1c0 = 0;
      ppuStack_1b0 = &PTR_FUN_1109b53e8;
      ppppuStack_1a0 = &pppuStack_1b8;
      pppuStack_1b8 = pppuVar5;
      puStack_1a8 = (undefined1 *)&lStack_1c0;
      pppuStack_198 = &ppuStack_1b0;
      func_0x0001074d4398(*(undefined8 *)(*plVar3 + 0x10));
      pppuVar6 = &ppuStack_1b0;
      FUN_10745df78(pppuVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
        ___stack_chk_fail();
        func_0x0001074d4ca8();
        FUN_10745df78();
        func_0x0001074d3bc4();
        pcStack_1c8 = FUN_1074d25b4;
        plStack_1d8 = (long *)0x0;
        pppuStack_1d0 = &ppuStack_150;
        func_0x0001073f26dc(&plStack_1d8,pppuVar6);
        return plStack_1d8;
      }
      uVar7 = (long)pppuVar5 * 0x1000 + ((ulong)pppuVar5 >> 4) + lStack_1c0 + -0x61c8864680b583eb ^
              (ulong)pppuVar5;
      return (long *)((long)pppuStack_1b8 + (uVar7 >> 4) + uVar7 * 0x1000 + -0x61c8864680b583eb ^
                     uVar7);
    }
  }
  return plVar2;
}



/* Entry: 1074d1c8c; end: 1074d1d83;  */

long * FUN_1074d1c8c(undefined4 *param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long lStack_120;
  undefined ***pppuStack_118;
  undefined **ppuStack_110;
  undefined1 *puStack_108;
  undefined ****ppppuStack_100;
  undefined ***pppuStack_f8;
  long lStack_d8;
  undefined ***pppuStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long alStack_88 [3];
  undefined **ppuStack_70;
  long *plStack_68;
  undefined ***pppuStack_58;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  func_0x0001074d3a84();
  alStack_88[0] = 0;
  alStack_88[1] = 0;
  alStack_88[2] = 0;
  (**(code **)(*plVar1 + 0x40))(&ppuStack_70);
  func_0x0001074d2254(alStack_88,&ppuStack_70);
  func_0x000104c2f714(&ppuStack_70);
  ppuStack_70 = &PTR_FUN_1109b55b0;
  plStack_68 = alStack_88;
  pppuStack_58 = &ppuStack_70;
  func_0x0001074d4398(*(undefined8 *)(*param_2 + 0x10));
  FUN_10745df78(&ppuStack_70);
  FUN_107327958(&uStack_a0,alStack_88);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_98;
  *(undefined8 *)(param_1 + 2) = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x000104c33108(&uStack_a0);
  plVar1 = alStack_88;
  func_0x000107269124();
  func_0x0001074d39e4(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  FUN_10745df78(&ppuStack_70);
  plVar2 = alStack_88;
  func_0x000107269124();
  func_0x0001074d3bc4();
  pcStack_a8 = FUN_1074d1d84;
  plVar3 = plVar2;
  pppuStack_d0 = &ppuStack_70;
  plStack_c8 = alStack_88;
  plStack_c0 = param_2;
  plStack_b8 = plVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001074d3a84();
  (**(code **)(*plVar3 + 0x40))(&ppuStack_110);
  pppuVar4 = &ppuStack_110;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_110);
  lStack_120 = 0;
  ppuStack_110 = &PTR_FUN_1109b53e8;
  ppppuStack_100 = &pppuStack_118;
  pppuStack_118 = pppuVar4;
  puStack_108 = (undefined1 *)&lStack_120;
  pppuStack_f8 = &ppuStack_110;
  func_0x0001074d4398(*(undefined8 *)(*plVar2 + 0x10));
  pppuVar5 = &ppuStack_110;
  FUN_10745df78(pppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    uVar6 = (long)pppuVar4 * 0x1000 + ((ulong)pppuVar4 >> 4) + lStack_120 + -0x61c8864680b583eb ^
            (ulong)pppuVar4;
    return (long *)((long)pppuStack_118 + (uVar6 >> 4) + uVar6 * 0x1000 + -0x61c8864680b583eb ^
                   uVar6);
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_128 = FUN_1074d25b4;
  plStack_138 = (long *)0x0;
  ppuStack_130 = &puStack_b0;
  func_0x0001073f26dc(&plStack_138,pppuVar5);
  return plStack_138;
}



/* Entry: 1074d1d84; end: 1074d1d9b;  */

ulong FUN_1074d1d84(long *param_1)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined ****ppppuStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  plVar1 = param_1;
  func_0x0001074d3a84();
  (**(code **)(*plVar1 + 0x40))(&ppuStack_70);
  pppuVar2 = &ppuStack_70;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_70);
  lStack_80 = 0;
  ppuStack_70 = &PTR_FUN_1109b53e8;
  ppppuStack_60 = &pppuStack_78;
  pppuStack_78 = pppuVar2;
  puStack_68 = (undefined1 *)&lStack_80;
  pppuStack_58 = &ppuStack_70;
  func_0x0001074d4398(*(undefined8 *)(*param_1 + 0x10));
  pppuVar3 = &ppuStack_70;
  FUN_10745df78(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    uVar4 = (long)pppuVar2 * 0x1000 + ((ulong)pppuVar2 >> 4) + lStack_80 + -0x61c8864680b583eb ^
            (ulong)pppuVar2;
    return (long)pppuStack_78 + (uVar4 >> 4) + uVar4 * 0x1000 + -0x61c8864680b583eb ^ uVar4;
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_88 = FUN_1074d25b4;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,pppuVar3);
  return uStack_98;
}



/* Entry: 1074d1d9c; end: 1074d1e5f;  */

undefined8 * FUN_1074d1d9c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  func_0x0001074d4778();
  func_0x0001074d3a84();
  puVar1 = *(undefined8 **)(param_2 + 0xd8);
  puVar3 = puVar1;
  if ((puVar1 != (undefined8 *)0x0) && (in_ZR = *(int *)(puVar1 + 0xd) == 9, (bool)in_ZR)) {
    func_0x0001074d2730();
    puVar2 = puVar1;
    FUN_1074d2700();
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar1;
      func_0x0001074d2708(puVar3,unaff_x21 + 0x90);
      func_0x0001074d39e4(uStack_38);
      if ((bool)in_ZR) {
        func_0x0001074d46a8(extraout_x8 + 8,puVar3);
        *(undefined4 *)(unaff_x19 + 0xe) = 1;
        return unaff_x19;
      }
      goto LAB_1074d1e54;
    }
  }
  if (*(int *)(unaff_x21 + 0x88) == 0) {
    uVar4 = *(undefined8 *)(unaff_x21 + 0x48);
    *(undefined8 *)(extraout_x8 + 0x18) = *(undefined8 *)(unaff_x21 + 0x50);
    *(undefined8 *)(extraout_x8 + 0x10) = uVar4;
    *(undefined4 *)(extraout_x8 + 0x70) = 4;
    *(undefined4 *)(extraout_x8 + 0x78) = 1;
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x21 + 0x48);
    func_0x0001074d4b80();
    func_0x0001074d44d4();
    func_0x0001074d3f34();
  }
  func_0x0001074d39e4(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
LAB_1074d1e54:
  ___stack_chk_fail();
  func_0x0001074d3c20();
  func_0x0001074d3bc4();
  func_0x000104c2f714(puVar3 + 0x12);
  FUN_1073debc4(puVar3 + 9);
  *puVar3 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 1074d1e60; end: 1074d1ecf;  */

undefined8 * FUN_1074d1e60(undefined8 *param_1)

{
  func_0x000104c2f714(param_1 + 0x12);
  FUN_1073debc4(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1074d1ed0; end: 1074d1ee7;  */

uint FUN_1074d1ed0(uint param_1)

{
  FUN_10745de74();
  return param_1 ^ 1;
}



/* Entry: 1074d1ee8; end: 1074d1f1b;  */

undefined8 * FUN_1074d1ee8(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1074d1f1c(param_1,param_2,param_2 + param_3 * 0x78,param_3);
  return param_1;
}



/* Entry: 1074d1f1c; end: 1074d1f77;  */

void FUN_1074d1f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001074d46f8();
    FUN_1074d1f78();
    func_0x0001074d4c4c();
    FUN_1074d1fc0();
  }
  uStack_38 = 1;
  func_0x0001074d21b8(&uStack_40);
  return;
}



/* Entry: 1074d1f78; end: 1074d1fbf;  */

void FUN_1074d1f78(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x222222222222223) {
    plVar1 = param_1 + 2;
    FUN_1074d2004();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xf);
  }
  else {
    FUN_1074d1ff0();
    plVar1 = param_1 + 2;
    func_0x0001074d2054();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1074d1fc0; end: 1074d1fef;  */

void FUN_1074d1fc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x0001074d2054();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1074d1ff0; end: 1074d2003;  */

void FUN_1074d1ff0(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_1074d2028();
  return;
}



/* Entry: 1074d2004; end: 1074d2027;  */

void FUN_1074d2004(void)

{
  FUN_1074d2028();
  return;
}



/* Entry: 1074d2028; end: 1074d2067;  */

void FUN_1074d2028(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x222222222222223) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x78);
    return;
  }
  func_0x000104bd35f4();
  FUN_1074d2068();
  return;
}



/* Entry: 1074d2068; end: 1074d20cb;  */

long FUN_1074d2068(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001074d41b0();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x78) {
    func_0x0001074d42fc();
    FUN_1074d20cc();
    unaff_x20 = lStack_38 + 0x78;
    lStack_38 = unaff_x20;
  }
  uStack_48 = 1;
  FUN_1074d2138(auStack_60);
  return unaff_x20;
}



/* Entry: 1074d20cc; end: 1074d2103;  */

undefined1 * FUN_1074d20cc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x70] = 0;
  FUN_1074d2104();
  return param_1;
}



/* Entry: 1074d2104; end: 1074d2117;  */

void FUN_1074d2104(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  if (*(char *)(param_2 + 0x70) == '\x01') {
    func_0x0001074d46a8();
    *(undefined1 *)(unaff_x19 + 0x70) = 1;
    return;
  }
  return;
}



/* Entry: 1074d2118; end: 1074d2137;  */

void FUN_1074d2118(void)

{
  long unaff_x19;
  
  func_0x0001074d46a8();
  *(undefined1 *)(unaff_x19 + 0x70) = 1;
  return;
}



/* Entry: 1074d2138; end: 1074d2167;  */

long FUN_1074d2138(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1074d2168(param_1);
  }
  return param_1;
}



/* Entry: 1074d2168; end: 1074d2187;  */

void FUN_1074d2168(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x78;
    func_0x000107296ad0();
  }
  return;
}



/* Entry: 1074d2188; end: 1074d2217;  */

void FUN_1074d2188(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x78;
    func_0x000107296ad0();
  }
  return;
}



/* Entry: 1074d2218; end: 1074d221f;  */

void FUN_1074d2218(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074d4018(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    func_0x000107296ad0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074d2220; end: 1074d228f;  */

void FUN_1074d2220(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074d4018();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    func_0x000107296ad0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074d2290; end: 1074d22bf;  */

void FUN_1074d2290(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1074d2350(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x40;
  return;
}



/* Entry: 1074d22c0; end: 1074d234f;  */

long FUN_1074d22c0(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001074d3e80();
  func_0x000107289660();
  func_0x000107289720(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 6,unaff_x19 + 2);
  FUN_1074d2350(lStack_38);
  lStack_38 = lStack_38 + 0x40;
  func_0x0001074d43bc();
  func_0x0001072896a0();
  lVar1 = unaff_x19[1];
  func_0x000107289820(auStack_48);
  return lVar1;
}



/* Entry: 1074d2350; end: 1074d23ab;  */

undefined1 * FUN_1074d2350(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar1 = auStack_60;
  func_0x0001074d3a98();
  uStack_28 = extraout_x8;
  func_0x000104c318bc(auStack_60);
  func_0x000104c33004(param_1,auStack_60);
  func_0x000104c2f714(auStack_60);
  func_0x0001074d39e4(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  return puVar1;
}



/* Entry: 1074d23ac; end: 1074d23b3;  */

void FUN_1074d23ac(void)

{
  return;
}



/* Entry: 1074d23b4; end: 1074d23e3;  */

void FUN_1074d23b4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109b55b0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1074d23e4; end: 1074d240f;  */

void FUN_1074d23e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b55b0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074d2410; end: 1074d2437;  */

void FUN_1074d2410(undefined8 param_1)

{
  func_0x0001074d43c8();
  func_0x0001074d4050(param_1,&PTR_DAT_1109b5610);
  func_0x0001074d3f3c();
  return;
}



/* Entry: 1074d2438; end: 1074d2443;  */

undefined ** FUN_1074d2438(void)

{
  return &PTR_DAT_1109b5610;
}



/* Entry: 1074d2444; end: 1074d24b3;  */

long * FUN_1074d2444(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  long *plStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long lStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined1 *puStack_d8;
  undefined ****ppppuStack_d0;
  undefined ***pppuStack_c8;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  long alStack_68 [8];
  undefined8 uStack_28;
  
  func_0x0001074d3a98();
  uStack_28 = extraout_x8;
  (**(code **)(*param_2 + 0x28))(alStack_68,param_2);
  func_0x0001074d43bc();
  func_0x0001072aad1c();
  plVar1 = alStack_68;
  func_0x000104c3323c();
  func_0x0001074d39e4(uStack_28);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x0001074d403c();
  func_0x000104c3323c();
  func_0x0001074d3bc4();
  pcStack_78 = FUN_1074d24b4;
  plVar2 = plVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001074d3a84();
  (**(code **)(*plVar2 + 0x40))(&ppuStack_e0);
  pppuVar3 = &ppuStack_e0;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_e0);
  lStack_f0 = 0;
  ppuStack_e0 = &PTR_FUN_1109b53e8;
  ppppuStack_d0 = &pppuStack_e8;
  pppuStack_e8 = pppuVar3;
  puStack_d8 = (undefined1 *)&lStack_f0;
  pppuStack_c8 = &ppuStack_e0;
  func_0x0001074d4398(*(undefined8 *)(*plVar1 + 0x10));
  pppuVar4 = &ppuStack_e0;
  FUN_10745df78(pppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    uVar5 = (long)pppuVar3 * 0x1000 + ((ulong)pppuVar3 >> 4) + lStack_f0 + -0x61c8864680b583eb ^
            (ulong)pppuVar3;
    return (long *)((long)pppuStack_e8 + (uVar5 >> 4) + uVar5 * 0x1000 + -0x61c8864680b583eb ^ uVar5
                   );
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_f8 = FUN_1074d25b4;
  plStack_108 = (long *)0x0;
  ppuStack_100 = &puStack_80;
  func_0x0001073f26dc(&plStack_108,pppuVar4);
  return plStack_108;
}



/* Entry: 1074d24b4; end: 1074d25b3;  */

ulong FUN_1074d24b4(long *param_1)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined ****ppppuStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  plVar1 = param_1;
  func_0x0001074d3a84();
  (**(code **)(*plVar1 + 0x40))(&ppuStack_70);
  pppuVar2 = &ppuStack_70;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_70);
  lStack_80 = 0;
  ppuStack_70 = &PTR_FUN_1109b53e8;
  ppppuStack_60 = &pppuStack_78;
  pppuStack_78 = pppuVar2;
  puStack_68 = (undefined1 *)&lStack_80;
  pppuStack_58 = &ppuStack_70;
  func_0x0001074d4398(*(undefined8 *)(*param_1 + 0x10));
  pppuVar3 = &ppuStack_70;
  FUN_10745df78(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    uVar4 = (long)pppuVar2 * 0x1000 + ((ulong)pppuVar2 >> 4) + lStack_80 + -0x61c8864680b583eb ^
            (ulong)pppuVar2;
    return (long)pppuStack_78 + (uVar4 >> 4) + uVar4 * 0x1000 + -0x61c8864680b583eb ^ uVar4;
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_88 = FUN_1074d25b4;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,pppuVar3);
  return uStack_98;
}



/* Entry: 1074d25b4; end: 1074d25db;  */

undefined8 FUN_1074d25b4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x0001073f26dc(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 1074d25dc; end: 1074d25e3;  */

void FUN_1074d25dc(void)

{
  return;
}



/* Entry: 1074d25e4; end: 1074d2617;  */

void FUN_1074d25e4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b53e8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1074d2618; end: 1074d2647;  */

void FUN_1074d2618(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109b53e8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074d2648; end: 1074d266f;  */

void FUN_1074d2648(undefined8 param_1)

{
  func_0x0001074d43c8();
  func_0x0001074d4050(param_1,&PTR_DAT_1109b5448);
  func_0x0001074d3f3c();
  return;
}



/* Entry: 1074d2670; end: 1074d268f;  */

undefined ** FUN_1074d2670(void)

{
  return &PTR_DAT_1109b5448;
}



/* Entry: 1074d2690; end: 1074d26db;  */

void FUN_1074d2690(ulong *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_1074d26dc();
  uVar2 = *param_1;
  *param_1 = (ulong)(puVar1 + (uVar2 >> 4) + uVar2 * 0x1000 + -0x61c8864680b583eb) ^ uVar2;
  return;
}



/* Entry: 1074d26dc; end: 1074d26ff;  */

void FUN_1074d26dc(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2);
  return;
}



/* Entry: 1074d2700; end: 1074d2707;  */

void FUN_1074d2700(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined1 auStack_90 [16];
  
  param_1 = (undefined8 *)*param_1;
  func_0x0001074d4018();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  func_0x0001074d4cd4();
  func_0x0001074d3e80();
  lVar6 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar7 = *unaff_x20;
  uVar5 = uVar7 >> 0xc ^ param_2 >> 7;
  bVar3 = (byte)param_2;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)auStack_90;
      func_0x00010726cac8(auStack_90,uVar1 + uVar9 * 0xa8);
      if (iVar4 != 0) {
        lVar6 = *unaff_x19 + uVar9;
        bVar10 = 0xa8;
        goto LAB_1074d2844;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  lVar6 = 0;
LAB_1074d2844:
  func_0x0001074d47a8(bVar10,lVar6);
  return;
}



/* Entry: 1074d2708; end: 1074d274f;  */

undefined8 * FUN_1074d2708(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *unaff_x19;
  ulong *unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  undefined1 auStack_b0 [16];
  
  FUN_1074d2750();
  if (param_1 != 0) {
    return (undefined8 *)(param_2 + 0x38);
  }
  puVar5 = (undefined8 *)&UNK_10f40ec73;
  func_0x00010ae87d60();
  if (*(int *)(puVar5 + 0xd) == 9) {
    return puVar5 + 1;
  }
  func_0x00010563ab98();
  func_0x0001074d4018();
  Hint_Prefetch(*puVar5,0,2,0);
  func_0x000104c2fe38(*puVar5);
  func_0x0001074d4cd4();
  func_0x0001074d3e80();
  lVar7 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar8 = *unaff_x20;
  uVar6 = uVar8 >> 0xc ^ param_2 >> 7;
  bVar3 = (byte)param_2;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      iVar4 = (int)auStack_b0;
      func_0x00010726cac8(auStack_b0,uVar1 + uVar10 * 0xa8);
      if (iVar4 != 0) {
        puVar5 = (undefined8 *)(*unaff_x19 + uVar10);
        bVar11 = 0xa8;
        goto LAB_1074d2844;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  puVar5 = (undefined8 *)0x0;
LAB_1074d2844:
  func_0x0001074d47a8(bVar11,puVar5);
  return puVar5;
}



/* Entry: 1074d2750; end: 1074d2787;  */

void FUN_1074d2750(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined1 auStack_90 [16];
  
  func_0x0001074d4018();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  func_0x0001074d4cd4();
  func_0x0001074d3e80();
  lVar6 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar7 = *unaff_x20;
  uVar5 = uVar7 >> 0xc ^ param_2 >> 7;
  bVar3 = (byte)param_2;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)auStack_90;
      func_0x00010726cac8(auStack_90,uVar1 + uVar9 * 0xa8);
      if (iVar4 != 0) {
        lVar6 = *unaff_x19 + uVar9;
        bVar10 = 0xa8;
        goto LAB_1074d2844;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  lVar6 = 0;
LAB_1074d2844:
  func_0x0001074d47a8(bVar10,lVar6);
  return;
}



/* Entry: 1074d2788; end: 1074d286b;  */

void FUN_1074d2788(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  func_0x0001074d4cd4();
  func_0x0001074d3e80();
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ param_3 >> 7;
  bVar3 = (byte)param_3;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)&stack0xffffffffffffff70;
      func_0x00010726cac8(&stack0xffffffffffffff70,uVar1 + uVar9 * 0xa8);
      if (iVar4 != 0) {
        lVar6 = *unaff_x19 + uVar9;
        bVar10 = 0xa8;
        goto LAB_1074d2844;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  lVar6 = 0;
LAB_1074d2844:
  func_0x0001074d47a8(bVar10,lVar6);
  return;
}



/* Entry: 1074d286c; end: 1074d288f;  */

void FUN_1074d286c(void)

{
  long unaff_x19;
  
  func_0x0001074d46a8();
  *(undefined4 *)(unaff_x19 + 0x70) = 1;
  return;
}



/* Entry: 1074d2890; end: 1074d28e7;  */

void FUN_1074d2890(long *param_1,long *param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x0001074d3e80();
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    func_0x0001074d3ff0();
    *param_1 = (long)&PTR_FUN_1109b5468;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = lVar1;
  }
  *(long **)(unaff_x19 + 8) = param_1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 1074d28e8; end: 1074d28eb;  */

void FUN_1074d28e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074d28ec; end: 1074d28ff;  */

void FUN_1074d28ec(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d2900; end: 1074d2907;  */

void FUN_1074d2900(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1074d1e60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d2908; end: 1074d2937;  */

long FUN_1074d2908(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001074d43c8();
  func_0x0001074d4050();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1074d2938; end: 1074d293b;  */

void FUN_1074d2938(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d293c; end: 1074d2953;  */

void FUN_1074d293c(long param_1)

{
  if (param_1 != 0) {
    FUN_1074d1e60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d2954; end: 1074d29af;  */

long FUN_1074d2954(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001077b0f58(param_1,&uStack_30);
  func_0x0001072c9b9c(&uStack_30);
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return param_1;
}



/* Entry: 1074d29b0; end: 1074d29cb;  */

void FUN_1074d29b0(long param_1)

{
  FUN_107432e00();
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1074d29cc; end: 1074d29f3;  */

void FUN_1074d29cc(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001074d4874();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    FUN_1074d293c();
  }
  return;
}



/* Entry: 1074d29f4; end: 1074d29f7;  */

undefined8 * FUN_1074d29f4(undefined8 *param_1)

{
  func_0x000104c2f714(param_1 + 0x10);
  func_0x0001074d49f4();
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1074d29f8; end: 1074d2a0b;  */

void FUN_1074d29f8(void)

{
  FUN_1074d2bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d2a0c; end: 1074d2a1b;  */

long * FUN_1074d2a0c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_1[0xf] == 0) {
    return param_1;
  }
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 == (long *)0x0) {
    func_0x000104bfeb48(0,param_1[9]);
    plVar2 = (long *)plVar1[3];
    if (plVar2 == plVar1) {
      lVar3 = 0x20;
    }
    else {
      if (plVar2 == (long *)0x0) {
        return plVar1;
      }
      lVar3 = 0x28;
    }
    (**(code **)(*plVar2 + lVar3))();
    return plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return plVar1;
}



/* Entry: 1074d2a1c; end: 1074d2a9f;  */

long * FUN_1074d2a1c(ulong param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_2 + 8) == 0x13) {
    func_0x0001074d4018();
    func_0x0001074d49c4();
    if ((param_1 & 1) == 0) {
      uVar1 = unaff_x20 + 0x80;
      func_0x000107262f24(uVar1,unaff_x19 + 0x80);
      if ((uVar1 & 1) == 0) {
        if (*(int *)(unaff_x20 + 0x78) == 0) {
          if (*(int *)(unaff_x19 + 0x78) == 0) {
            return (long *)(ulong)(*(float *)(unaff_x20 + 0x48) == *(float *)(unaff_x19 + 0x48));
          }
        }
        else if (*(int *)(unaff_x19 + 0x78) != 0) {
          plVar2 = *(long **)(unaff_x20 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x0001074d2a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(unaff_x19 + 0x48));
          return plVar2;
        }
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 1074d2aa0; end: 1074d2af7;  */

long * FUN_1074d2aa0(undefined8 param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long lStack_120;
  undefined ***pppuStack_118;
  undefined **ppuStack_110;
  undefined1 *puStack_108;
  undefined ****ppppuStack_100;
  undefined ***pppuStack_f8;
  long lStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  plVar4 = (long *)auStack_a0;
  func_0x0001074d3a98(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x0001074d4a84();
  func_0x000107296ad0();
  func_0x0001074d39e4(uStack_28);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x0001074d3fac();
  func_0x000107296ad0();
  func_0x0001074d3bc4();
  pcStack_a8 = FUN_1074d2af8;
  plVar1 = plVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001074d3a84();
  (**(code **)(*plVar1 + 0x40))(&ppuStack_110);
  pppuVar2 = &ppuStack_110;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_110);
  lStack_120 = 0;
  ppuStack_110 = &PTR_FUN_1109b53e8;
  ppppuStack_100 = &pppuStack_118;
  pppuStack_118 = pppuVar2;
  puStack_108 = (undefined1 *)&lStack_120;
  pppuStack_f8 = &ppuStack_110;
  func_0x0001074d4398(*(undefined8 *)(*plVar4 + 0x10));
  pppuVar3 = &ppuStack_110;
  FUN_10745df78(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    uVar5 = (long)pppuVar2 * 0x1000 + ((ulong)pppuVar2 >> 4) + lStack_120 + -0x61c8864680b583eb ^
            (ulong)pppuVar2;
    return (long *)((long)pppuStack_118 + (uVar5 >> 4) + uVar5 * 0x1000 + -0x61c8864680b583eb ^
                   uVar5);
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_128 = FUN_1074d25b4;
  plStack_138 = (long *)0x0;
  ppuStack_130 = &puStack_b0;
  func_0x0001073f26dc(&plStack_138,pppuVar3);
  return plStack_138;
}



/* Entry: 1074d2af8; end: 1074d2b0f;  */

ulong FUN_1074d2af8(long *param_1)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined ****ppppuStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  plVar1 = param_1;
  func_0x0001074d3a84();
  (**(code **)(*plVar1 + 0x40))(&ppuStack_70);
  pppuVar2 = &ppuStack_70;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_70);
  lStack_80 = 0;
  ppuStack_70 = &PTR_FUN_1109b53e8;
  ppppuStack_60 = &pppuStack_78;
  pppuStack_78 = pppuVar2;
  puStack_68 = (undefined1 *)&lStack_80;
  pppuStack_58 = &ppuStack_70;
  func_0x0001074d4398(*(undefined8 *)(*param_1 + 0x10));
  pppuVar3 = &ppuStack_70;
  FUN_10745df78(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    uVar4 = (long)pppuVar2 * 0x1000 + ((ulong)pppuVar2 >> 4) + lStack_80 + -0x61c8864680b583eb ^
            (ulong)pppuVar2;
    return (long)pppuStack_78 + (uVar4 >> 4) + uVar4 * 0x1000 + -0x61c8864680b583eb ^ uVar4;
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_88 = FUN_1074d25b4;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,pppuVar3);
  return uStack_98;
}



/* Entry: 1074d2b10; end: 1074d2bd7;  */

undefined8 * FUN_1074d2b10(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001074d4778();
  func_0x0001074d3a84();
  puVar1 = *(undefined8 **)(param_2 + 0xd8);
  puVar3 = puVar1;
  if ((puVar1 != (undefined8 *)0x0) && (in_ZR = *(int *)(puVar1 + 0xd) == 9, (bool)in_ZR)) {
    func_0x0001074d2730();
    puVar2 = puVar1;
    FUN_1074d2700();
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar1;
      func_0x0001074d2708(puVar3,unaff_x21 + 0x80);
      func_0x0001074d39e4(uStack_38);
      if ((bool)in_ZR) {
        func_0x0001074d46a8(extraout_x8 + 8,puVar3);
        *(undefined4 *)(unaff_x19 + 0xe) = 1;
        return unaff_x19;
      }
      goto LAB_1074d2bcc;
    }
  }
  if (*(int *)(unaff_x21 + 0x78) == 0) {
    *(double *)(extraout_x8 + 0x10) = (double)*(float *)(unaff_x21 + 0x48);
    *(undefined4 *)(extraout_x8 + 0x70) = 2;
    *(undefined4 *)(extraout_x8 + 0x78) = 1;
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x21 + 0x48);
    func_0x0001074d4b80();
    func_0x0001074d44d4();
    func_0x0001074d3f34();
  }
  func_0x0001074d39e4(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
LAB_1074d2bcc:
  ___stack_chk_fail();
  func_0x0001074d3c20();
  func_0x0001074d3bc4();
  func_0x000104c2f714(puVar3 + 0x10);
  func_0x0001074d49f4();
  *puVar3 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 1074d2bd8; end: 1074d2c03;  */

undefined8 * FUN_1074d2bd8(undefined8 *param_1)

{
  func_0x000104c2f714(param_1 + 0x10);
  func_0x0001074d49f4();
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1074d2c04; end: 1074d2c07;  */

void FUN_1074d2c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074d2c08; end: 1074d2c1b;  */

void FUN_1074d2c08(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d2c1c; end: 1074d2c23;  */

void FUN_1074d2c1c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1074d2bd8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d2c24; end: 1074d2c53;  */

long FUN_1074d2c24(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001074d43c8();
  func_0x0001074d4050();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1074d2c54; end: 1074d2c57;  */

void FUN_1074d2c54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d2c58; end: 1074d2c6f;  */

void FUN_1074d2c58(long param_1)

{
  if (param_1 != 0) {
    FUN_1074d2bd8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d2c70; end: 1074d2c97;  */

void FUN_1074d2c70(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001074d4874();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    FUN_1074d2c58();
  }
  return;
}



/* Entry: 1074d2c98; end: 1074d2d13;  */

undefined1 * FUN_1074d2c98(undefined1 *param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x0001074d4c20();
  if ((ulong)(extraout_x9 / 0x120) < param_2) {
    if (0xe38e38e38e38e3 < param_2) {
      FUN_1074c6cf0();
      func_0x0001074d403c();
      func_0x0001074c6ea8();
      func_0x0001074d3bc4();
      FUN_1074d2d38();
      return param_1;
    }
    param_1 = auStack_48;
    FUN_1074c6cfc(param_1);
    func_0x0001074d43bc();
    FUN_1074c6cac();
    func_0x0001074d44f4();
  }
  return param_1;
}



/* Entry: 1074d2d14; end: 1074d2d37;  */

undefined8 FUN_1074d2d14(undefined8 param_1)

{
  FUN_1074d2d38(param_1,0);
  return param_1;
}



/* Entry: 1074d2d38; end: 1074d2d4f;  */

void FUN_1074d2d38(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1074d2d50; end: 1074d2d8f;  */

void FUN_1074d2d50(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1074d2d90; end: 1074d2f4f;  */

long * FUN_1074d2d90(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long alStack_d8 [10];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long *plStack_28;
  
  func_0x0001074d4cd4();
  lVar6 = param_4 - (long)param_3;
  plVar2 = param_1;
  if (0 < lVar6) {
    func_0x0001074d3e80();
    plVar2 = param_1 + 2;
    lVar5 = param_1[1];
    lVar4 = lVar6 / 0x98;
    if (lVar6 <= *plVar2 - lVar5) {
      lVar7 = lVar5 - unaff_x20;
      lVar6 = lVar7 / 0x98;
      uVar1 = lVar4 == lVar6;
      if (lVar6 < lVar4) {
        plVar3 = plVar2;
        FUN_1074c32fc(plVar2,(long)param_3 + lVar7,param_4,lVar5);
        unaff_x19[1] = (long)plVar3;
        uVar1 = lVar7 == 1;
        if (lVar7 < 1) {
          return plVar3;
        }
        func_0x0001074d4358();
        lVar4 = lVar6;
      }
      else {
        func_0x0001074d4358();
      }
      plVar3 = param_3;
      func_0x0001074d47a8();
      plStack_30 = plVar2;
      plStack_28 = param_3;
      func_0x0001074d3a84();
      plVar2 = unaff_x19 + 2;
      for (lVar4 = lVar4 * 0x98; lVar4 != 0; lVar4 = lVar4 + -0x98) {
        plStack_40 = plVar2;
        FUN_1074c3374(alStack_d8,plVar3);
        func_0x0001074d43bc();
        FUN_1074d3064();
        unaff_x19 = alStack_d8;
        func_0x00010748be00(unaff_x19);
        unaff_x20 = unaff_x20 + 0x98;
        plVar3 = plVar3 + 0x13;
      }
      func_0x0001074d39e4(uStack_38);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        __Unwind_Resume();
        func_0x0001074d4018();
        func_0x0001074d30b4();
        uVar9 = *(undefined8 *)(unaff_x20 + 0x31);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x29);
        lVar5 = *(long *)(unaff_x20 + 0x10);
        lVar4 = *(long *)(unaff_x20 + 0x28);
        lVar6 = *(long *)(unaff_x20 + 0x20);
        plVar3[3] = *(long *)(unaff_x20 + 0x18);
        plVar3[2] = lVar5;
        plVar3[5] = lVar4;
        plVar3[4] = lVar6;
        *(undefined8 *)((long)plVar3 + 0x31) = uVar9;
        *(undefined8 *)((long)plVar3 + 0x29) = uVar8;
        func_0x0001074d30ec(plVar3 + 8,unaff_x20 + 0x40);
        func_0x000104c2f1f0(plVar3 + 0xb,unaff_x20 + 0x58);
        *(undefined1 *)(plVar3 + 0x12) = *(undefined1 *)(unaff_x20 + 0x90);
        return plVar3;
      }
      return unaff_x19;
    }
    plVar3 = unaff_x19;
    FUN_10748bb28();
    FUN_10748bbd0(&lStack_88,plVar3,(unaff_x20 - *unaff_x19) / 0x98,plVar2);
    lVar4 = lStack_78 + lVar6;
    for (; lVar6 != 0; lVar6 = lVar6 + -0x98) {
      FUN_1074c3374(lStack_78,param_3);
      lStack_78 = lStack_78 + 0x98;
      param_3 = param_3 + 0x13;
    }
    lStack_78 = lVar4;
    FUN_10748bc60(plVar2);
    lVar6 = *unaff_x19;
    lStack_78 = lStack_78 + (unaff_x19[1] - unaff_x20);
    unaff_x19[1] = unaff_x20;
    FUN_10748bc60(plVar2);
    lStack_88 = *unaff_x19;
    *unaff_x19 = lStack_80 + ((unaff_x20 - lVar6) / -0x98) * 0x98;
    lVar6 = unaff_x19[2];
    unaff_x19[2] = lStack_70;
    unaff_x19[1] = lStack_78;
    lStack_80 = lStack_88;
    lStack_78 = lStack_88;
    lStack_70 = lVar6;
    func_0x0001074d44ec();
  }
  return plVar2;
}



/* Entry: 1074d2f50; end: 1074d2fdb;  */

void FUN_1074d2f50(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar3;
  for (uVar2 = param_2 + (lVar3 - param_4); uVar2 < param_3; uVar2 = uVar2 + 0x98) {
    FUN_10748babc(lVar1,uVar2);
    lVar1 = lVar1 + 0x98;
  }
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = lVar3 + -0x98;
  param_2 = param_2 + (lVar1 - param_4);
  for (param_4 = param_4 - lVar3; param_4 != 0; param_4 = param_4 + 0x98) {
    FUN_1074d3064(lVar1,param_2);
    param_2 = param_2 + -0x98;
    lVar1 = lVar1 + -0x98;
  }
  return;
}



/* Entry: 1074d2fdc; end: 1074d3063;  */

undefined1 * FUN_1074d2fdc(undefined1 *param_1,undefined1 *param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [152];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001074d3a84();
  puVar1 = param_1 + 0x10;
  for (param_3 = param_3 * 0x98; param_3 != 0; param_3 = param_3 + -0x98) {
    puStack_40 = puVar1;
    FUN_1074c3374(auStack_d8,param_2);
    func_0x0001074d43bc();
    FUN_1074d3064();
    param_1 = auStack_d8;
    func_0x00010748be00(param_1);
    param_4 = param_4 + 0x98;
    param_2 = param_2 + 0x98;
  }
  func_0x0001074d39e4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x0001074d4018();
    func_0x0001074d30b4();
    uVar3 = *(undefined8 *)(param_4 + 0x31);
    uVar2 = *(undefined8 *)(param_4 + 0x29);
    uVar6 = *(undefined8 *)(param_4 + 0x10);
    uVar5 = *(undefined8 *)(param_4 + 0x28);
    uVar4 = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    *(undefined8 *)(param_2 + 0x28) = uVar5;
    *(undefined8 *)(param_2 + 0x20) = uVar4;
    *(undefined8 *)(param_2 + 0x31) = uVar3;
    *(undefined8 *)(param_2 + 0x29) = uVar2;
    func_0x0001074d30ec(param_2 + 0x40,param_4 + 0x40);
    func_0x000104c2f1f0(param_2 + 0x58,param_4 + 0x58);
    param_2[0x90] = *(undefined1 *)(param_4 + 0x90);
    return param_2;
  }
  return param_1;
}



/* Entry: 1074d3064; end: 1074d314b;  */

void FUN_1074d3064(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001074d4018();
  func_0x0001074d30b4();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x31);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x29);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x31) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x29) = uVar1;
  func_0x0001074d30ec(unaff_x20 + 0x40,unaff_x19 + 0x40);
  func_0x000104c2f1f0(unaff_x20 + 0x58,unaff_x19 + 0x58);
  *(undefined1 *)(unaff_x20 + 0x90) = *(undefined1 *)(unaff_x19 + 0x90);
  return;
}



/* Entry: 1074d314c; end: 1074d32a7;  */

long * FUN_1074d314c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long alStack_170 [29];
  undefined1 auStack_88 [16];
  long lStack_78;
  long *plStack_50;
  undefined8 uStack_48;
  
  func_0x0001074d4cd4();
  lVar8 = param_4 - param_3;
  if (0 < lVar8) {
    func_0x0001074d4018();
    plVar3 = param_1 + 2;
    lVar7 = param_1[1];
    lVar6 = lVar8 / 0x120;
    if (lVar8 <= *plVar3 - lVar7) {
      lVar9 = lVar7 - unaff_x19;
      lVar8 = lVar9 / 0x120;
      uVar2 = lVar6 == lVar8;
      if (lVar8 < lVar6) {
        param_2 = (undefined8 *)(param_3 + lVar9);
        FUN_1074cfff4(plVar3,param_2,param_4,lVar7);
        unaff_x20[1] = (long)plVar3;
        uVar2 = lVar9 == 1;
        if (lVar9 < 1) {
          return plVar3;
        }
        func_0x0001074d4334();
        func_0x0001074d42fc();
        param_1 = plVar3;
        lVar6 = lVar8;
      }
      else {
        func_0x0001074d4334();
        func_0x0001074d42fc();
      }
      func_0x0001074d47a8();
      plVar5 = param_2;
      func_0x0001074d3a98();
      plVar3 = param_1 + 2;
      plVar4 = param_1;
      uStack_48 = extraout_x8;
      for (lVar8 = lVar6 * 0x120; lVar8 != 0; lVar8 = lVar8 + -0x120) {
        plStack_50 = plVar3;
        FUN_1074d0058(alStack_170,param_2);
        plVar5 = alStack_170;
        FUN_1074d34f8(unaff_x19);
        plVar4 = alStack_170;
        func_0x0001074ae9a8();
        unaff_x19 = unaff_x19 + 0x120;
        param_2 = param_2 + 0x24;
      }
      func_0x0001074d39e4(uStack_48);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        __Unwind_Resume();
        func_0x0001074d4778();
        plVar1 = (long *)plVar5[1];
        FUN_1074c6d80(plVar4 + 2,lVar6,plVar4[1],plVar5[2]);
        lVar8 = *plVar3;
        lVar7 = param_2[1];
        param_2[2] = param_2[2] + (param_1[3] - lVar6);
        param_1[3] = lVar6;
        lVar7 = lVar7 + ((lVar6 - lVar8) / -0x120) * 0x120;
        FUN_1074c6d80(param_1 + 4,lVar8,lVar6,lVar7);
        param_2[1] = lVar7;
        lVar8 = *plVar3;
        param_1[3] = lVar8;
        *plVar3 = param_2[1];
        param_2[1] = lVar8;
        lVar8 = param_1[3];
        param_1[3] = param_2[2];
        param_2[2] = lVar8;
        lVar8 = param_1[4];
        param_1[4] = param_2[3];
        param_2[3] = lVar8;
        *param_2 = param_2[1];
        return plVar1;
      }
      return plVar4;
    }
    plVar4 = unaff_x20;
    FUN_1074c6c54();
    FUN_1074c6cfc(auStack_88,plVar4,(unaff_x19 - *unaff_x20) / 0x120,plVar3);
    lVar6 = lStack_78 + lVar8;
    for (; lVar8 != 0; lVar8 = lVar8 + -0x120) {
      FUN_1074d0058(lStack_78,param_3);
      lStack_78 = lStack_78 + 0x120;
      param_3 = param_3 + 0x120;
    }
    lStack_78 = lVar6;
    FUN_1074d33b4();
    func_0x0001074d44f4();
    param_1 = unaff_x20;
  }
  return param_1;
}



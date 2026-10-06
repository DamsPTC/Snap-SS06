/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107324a6c; end: 107324be3;  */

void FUN_107324a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 uStack_140;
  undefined8 uStack_138;
  byte bStack_130;
  undefined1 auStack_120 [88];
  undefined1 auStack_c8 [4];
  undefined1 uStack_c4;
  undefined1 auStack_90 [32];
  undefined1 uStack_70;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uVar5;
  
  uVar5 = param_3;
  func_0x0001073447e0();
  iVar4 = (int)uVar5;
  uStack_48 = extraout_x8;
  func_0x000107766098();
  if (iVar4 != 0) {
    func_0x000107346fb0(auStack_120);
    auStack_c8[0] = 0;
    uStack_c4 = 0;
    auStack_90[0] = 0;
    uStack_70 = 0;
    func_0x000107771274(&uStack_140,auStack_120,param_3,*(undefined8 *)(param_1 + 8),auStack_c8,
                        auStack_90);
    func_0x0001072c94e0(auStack_90);
    in_ZR = bStack_130 == 1;
    if ((bool)in_ZR) {
      lVar6 = *(long *)(param_1 + 0x10);
      func_0x000107345bbc(auStack_c8);
      if ((bStack_130 & 1) == 0) goto LAB_107324b94;
      func_0x000104c318bc(auStack_90,auStack_c8);
      uStack_50 = uStack_138;
      uStack_58 = uStack_140;
      uStack_140 = 0;
      uStack_138 = 0;
      uVar3 = 0;
      lVar2 = lVar6;
      FUN_107324c18();
      if ((uVar3 & 1) != 0) {
        func_0x000107347d5c(*(undefined8 *)(lVar6 + 8));
        func_0x000104c318bc();
        *(undefined8 *)(lVar2 + 0x40) = uStack_50;
        *(undefined8 *)(lVar2 + 0x38) = uStack_58;
        uStack_58 = 0;
        uStack_50 = 0;
      }
      func_0x0001072c9578(auStack_90);
      func_0x000104c2f714(auStack_c8);
    }
    func_0x0001072c95d0(&uStack_140);
    func_0x0001072ca718(auStack_120);
  }
  func_0x00010734615c();
  func_0x0001073447cc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107324b94:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107324b9c);
  (*pcVar1)();
}



/* Entry: 107324be4; end: 107324c0b;  */

void FUN_107324be4(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a10e8);
  func_0x000107344bc4();
  return;
}



/* Entry: 107324c0c; end: 107324c17;  */

undefined ** FUN_107324c0c(void)

{
  return &PTR_DAT_1109a10e8;
}



/* Entry: 107324c18; end: 107324c83;  */

void FUN_107324c18(ulong param_1)

{
  uint extraout_w8;
  long unaff_x28;
  
  func_0x0001073459d0();
  func_0x000107344bd4();
  func_0x000107344ad0();
  while( true ) {
    func_0x000107344e30();
    while (unaff_x28 != 0) {
      func_0x000107344ea8();
      FUN_107324ce0();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010734706c();
    }
    func_0x0001073450b0();
    if ((extraout_w8 & 1) != 0) break;
    func_0x000107347060();
  }
  func_0x0001073460c8();
  FUN_107324c84();
  func_0x00010734762c();
  return;
}



/* Entry: 107324c84; end: 107324cdf;  */

void FUN_107324c84(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  
  func_0x000107345658();
  func_0x000100061de0();
  func_0x0001073464fc();
  if ((extraout_x9 == 0) && (func_0x000107346ad8(), !(bool)in_ZR)) {
    FUN_107324d50();
    func_0x000107345130();
  }
  func_0x000107345560();
  func_0x00010734475c();
  return;
}



/* Entry: 107324ce0; end: 107324ceb;  */

bool FUN_107324ce0(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 107324cec; end: 107324d4f;  */

void FUN_107324cec(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107348074();
  func_0x000107344ef0();
  FUN_107324d80();
  func_0x000107346698();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107346680();
      func_0x000107324db0();
    }
    func_0x000107347df8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107324d50; end: 107324d7f;  */

undefined * FUN_107324d50(undefined *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined *puVar4;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar3) &&
     (uVar1 = uVar3 * 0x19 + *(long *)(param_1 + 0x18) * -0x20 == 0,
     (ulong)(*(long *)(param_1 + 0x18) * 0x20) <= uVar3 * 0x19)) {
    func_0x000107344b50();
    puVar2 = &UNK_1109a10c8;
    func_0x00010734796c();
    func_0x0001073447cc(extraout_x8);
    if ((bool)uVar1) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar4 = *(undefined **)(puVar2 + 0x30);
    if (puVar4 == (undefined *)0xffffffffffffffff) {
      puVar4 = puVar2;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(puVar2);
      func_0x0001001030f4(puVar4,puVar4 + (long)puVar2);
      func_0x000104c343b0();
      func_0x000104c2ffc0();
    }
    return puVar4;
  }
  func_0x000107348074(param_1,uVar3 << 1 | 1);
  func_0x000107344ef0();
  FUN_107324d80();
  func_0x000107346698();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107346680();
      func_0x000107324db0();
    }
    func_0x000107347df8();
  }
  if (unaff_x23 != 0) {
    puVar2 = (undefined *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return puVar2;
  }
  return param_1;
}



/* Entry: 107324d80; end: 107324def;  */

void FUN_107324d80(undefined8 param_1)

{
  func_0x000107345a40();
  func_0x000107345c6c();
  func_0x000107345994();
  func_0x0001000631d0(param_1,0x48);
  return;
}



/* Entry: 107324df0; end: 107324e27;  */

undefined * FUN_107324df0(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x000107344b50();
  puVar1 = &UNK_1109a10c8;
  func_0x00010734796c();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 107324e28; end: 107324e2f;  */

long FUN_107324e28(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107324e30; end: 107324e47;  */

void FUN_107324e30(void)

{
  FUN_107324e48();
  func_0x000107347da8();
  return;
}



/* Entry: 107324e48; end: 107324e4b;  */

void FUN_107324e48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 107324e4c; end: 107324e67;  */

void FUN_107324e4c(void)

{
  func_0x000107344fd4();
  func_0x000107533664();
  return;
}



/* Entry: 107324e68; end: 107324e7f;  */

void FUN_107324e68(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107324e80; end: 107324ec3;  */

long * FUN_107324e80(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072c9b9c(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 107324ec4; end: 107324ecb;  */

void FUN_107324ec4(void)

{
  return;
}



/* Entry: 107324ecc; end: 107324ef3;  */

void FUN_107324ecc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073450c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a1108;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107324ef4; end: 107324f13;  */

void FUN_107324ef4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a1108;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107324f14; end: 10732514f;  */

void FUN_107324f14(long param_1,undefined8 *param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [48];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_70;
  undefined8 uStack_68;
  
  plVar1 = param_3;
  func_0x0001073447e0();
  uStack_f0 = *param_2;
  uStack_e8 = param_2[1];
  plVar6 = plVar1 + 1;
  plVar7 = plVar6;
  uStack_68 = extraout_x8;
  (**(code **)(*plVar1 + 0x18))();
  if ((int)plVar7 != 0) {
    lStack_108 = 0;
    lStack_100 = 0;
    uStack_f8 = 0;
    for (plVar7 = (long *)0x0; plVar1 = plVar6, (**(code **)(*param_3 + 0x20))(), plVar7 < plVar1;
        plVar7 = (long *)((long)plVar7 + 1)) {
      (**(code **)(*param_3 + 0x28))(&lStack_e0,plVar6,plVar7);
      (**(code **)(lStack_e0 + 0x68))(&uStack_a8,auStack_d8);
      func_0x0001072f5f6c(&lStack_e0);
      if (cStack_70 == '\x01') {
        func_0x000104c2fe00(&lStack_e0,&uStack_a8);
        func_0x0001072999ec(&lStack_108,&lStack_e0);
        func_0x0001073465e4();
      }
      func_0x00010724b3d8(&uStack_a8);
    }
    in_ZR = lStack_108 == lStack_100;
    if (!(bool)in_ZR) {
      lVar5 = *(long *)(param_1 + 8);
      func_0x000107345bbc(&uStack_a8);
      uVar4 = 0;
      lVar2 = lVar5;
      FUN_107325184();
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(lVar5 + 8) + lVar2 * 0x50;
        func_0x000107347930();
        *(undefined8 *)(lVar3 + 0x38) = 0;
        *(undefined8 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x48) = 0;
      }
      func_0x000107299810(*(long *)(lVar5 + 8) + lVar2 * 0x50 + 0x38,&lStack_108);
      func_0x000107346dec();
      func_0x00010734615c();
      func_0x0001073462e8();
      goto LAB_1073250c0;
    }
    func_0x0001073462e8();
  }
  func_0x000107347854();
  func_0x0001004c3cd0(&lStack_e0,&UNK_10f40a49b,&lStack_108);
  func_0x00010048a6c8(&uStack_a8,&lStack_e0,&UNK_10f40a4b2);
  unaff_x19[1] = uStack_a0;
  *unaff_x19 = uStack_a8;
  unaff_x19[2] = uStack_98;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  *(undefined1 *)(unaff_x19 + 3) = 1;
  func_0x000107347794();
  func_0x000107345f54();
  func_0x000107345728();
LAB_1073250c0:
  func_0x0001073447cc(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073462e8();
  func_0x000107345604();
  func_0x000107345760();
  func_0x000107345650();
  func_0x000107344bc4();
  return;
}



/* Entry: 107325150; end: 107325177;  */

void FUN_107325150(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a1168);
  func_0x000107344bc4();
  return;
}



/* Entry: 107325178; end: 107325183;  */

undefined ** FUN_107325178(void)

{
  return &PTR_DAT_1109a1168;
}



/* Entry: 107325184; end: 1073251ef;  */

void FUN_107325184(ulong param_1)

{
  uint extraout_w8;
  long unaff_x28;
  
  func_0x0001073459d0();
  func_0x000107344bd4();
  func_0x000107344ad0();
  while( true ) {
    func_0x000107344e30();
    while (unaff_x28 != 0) {
      func_0x000107344ea8();
      FUN_10732524c();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010734706c();
    }
    func_0x0001073450b0();
    if ((extraout_w8 & 1) != 0) break;
    func_0x000107347060();
  }
  func_0x0001073460c8();
  FUN_1073251f0();
  func_0x00010734762c();
  return;
}



/* Entry: 1073251f0; end: 10732524b;  */

void FUN_1073251f0(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  
  func_0x000107345658();
  func_0x000100061de0();
  func_0x0001073464fc();
  if ((extraout_x9 == 0) && (func_0x000107346ad8(), !(bool)in_ZR)) {
    FUN_1073252c4();
    func_0x000107345130();
  }
  func_0x000107345560();
  func_0x00010734475c();
  return;
}



/* Entry: 10732524c; end: 107325257;  */

bool FUN_10732524c(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 107325258; end: 1073252c3;  */

void FUN_107325258(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107348074();
  func_0x000107344ef0();
  func_0x00010726d624();
  func_0x000107346acc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107346680();
      FUN_1073252f4();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1073252c4; end: 1073252f3;  */

undefined * FUN_1073252c4(undefined *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined *puVar4;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar3) &&
     (uVar1 = uVar3 * 0x19 + *(long *)(param_1 + 0x18) * -0x20 == 0,
     (ulong)(*(long *)(param_1 + 0x18) * 0x20) <= uVar3 * 0x19)) {
    func_0x000107344b50();
    puVar2 = &UNK_1109a34d8;
    func_0x00010ae6c914();
    func_0x0001073447cc(extraout_x8);
    if ((bool)uVar1) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar4 = *(undefined **)(puVar2 + 0x30);
    if (puVar4 == (undefined *)0xffffffffffffffff) {
      puVar4 = puVar2;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(puVar2);
      func_0x0001001030f4(puVar4,puVar4 + (long)puVar2);
      func_0x000104c343b0();
      func_0x000104c2ffc0();
    }
    return puVar4;
  }
  func_0x000107348074(param_1,uVar3 << 1 | 1);
  func_0x000107344ef0();
  func_0x00010726d624();
  func_0x000107346acc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107346680();
      FUN_1073252f4();
    }
  }
  if (unaff_x23 != 0) {
    puVar2 = (undefined *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return puVar2;
  }
  return param_1;
}



/* Entry: 1073252f4; end: 107325373;  */

undefined8 FUN_1073252f4(void)

{
  undefined8 unaff_x19;
  
  func_0x0001073465a4();
  func_0x000107325318();
  func_0x000107346a38();
  func_0x00010726e078();
  func_0x000107345ab0();
  return unaff_x19;
}



/* Entry: 107325374; end: 1073253af;  */

undefined * FUN_107325374(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x000107344b50();
  puVar1 = &UNK_1109a34d8;
  func_0x00010ae6c914();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 1073253b0; end: 1073253ef;  */

long FUN_1073253b0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1073253f0; end: 1073254b3;  */

void FUN_1073253f0(long param_1)

{
  long unaff_x19;
  long lVar1;
  ulong uVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107345658();
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001072bef58(uVar2);
    lVar1 = uVar2 + 0x18;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  else {
    FUN_1073254b4();
    func_0x000107346820();
    FUN_1073255bc(auStack_58);
    func_0x0001072bef58();
    lStack_48 = lStack_48 + 0x18;
    func_0x000107346270();
    FUN_1073254fc();
    lVar1 = *(long *)(unaff_x19 + 8);
    FUN_107325664(auStack_58);
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 1073254b4; end: 1073254fb;  */

undefined1 * FUN_1073254b4(long *param_1,undefined1 *param_2)

{
  long lVar1;
  ulong uVar2;
  long **pplVar3;
  undefined1 *puVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_60;
  long lStack_58;
  
  if (param_2 < (undefined1 *)0xaaaaaaaaaaaaaab) {
    uVar2 = (param_1[2] - *param_1) / 0x18;
    puVar4 = (undefined1 *)(uVar2 * 2);
    if (puVar4 < param_2 || (long)puVar4 - (long)param_2 == 0) {
      puVar4 = param_2;
    }
    if (0x555555555555554 < uVar2) {
      puVar4 = (undefined1 *)0xaaaaaaaaaaaaaaa;
    }
    return puVar4;
  }
  func_0x0001072bef0c();
  pplVar3 = &plStack_80;
  func_0x000100a2b988();
  lVar5 = *param_1;
  lVar1 = param_1[1];
  lVar7 = *(long *)(param_2 + 8) + ((lVar1 - lVar5) / -0x18) * 0x18;
  plStack_80 = param_1 + 2;
  plStack_78 = &lStack_60;
  plStack_70 = &lStack_58;
  lStack_58 = lVar7;
  lStack_60 = lVar7;
  for (lVar6 = lVar5; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
    FUN_1073255f0(lStack_58,lVar6);
    lStack_58 = lStack_58 + 0x18;
  }
  func_0x000107346cb4(lStack_58);
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
    func_0x0001072b978c(lVar5);
  }
  func_0x0001072bf024(&plStack_80);
  *(long *)(unaff_x19 + 8) = lVar7;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107344920();
  return (undefined1 *)pplVar3;
}



/* Entry: 1073254fc; end: 1073255bb;  */

void FUN_1073254fc(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_50;
  long lStack_48;
  
  func_0x000100a2b988();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  lVar4 = *(long *)(param_2 + 8) + ((lVar1 - lVar2) / -0x18) * 0x18;
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_48 = lVar4;
  lStack_50 = lVar4;
  for (lVar3 = lVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    FUN_1073255f0(lStack_48,lVar3);
    lStack_48 = lStack_48 + 0x18;
  }
  func_0x000107346cb4(lStack_48);
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x0001072b978c(lVar2);
  }
  func_0x0001072bf024(&plStack_70);
  *(long *)(unaff_x19 + 8) = lVar4;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107344920();
  return;
}



/* Entry: 1073255bc; end: 1073255ef;  */

void FUN_1073255bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001073467d0();
  if (param_2 != 0) {
    func_0x0001072bef18(param_4);
  }
  func_0x000107347674(0x18);
  return;
}



/* Entry: 1073255f0; end: 107325617;  */

void FUN_1073255f0(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x10) = extraout_w8;
  FUN_107325618();
  return;
}



/* Entry: 107325618; end: 10732565b;  */

void FUN_107325618(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107345658();
  func_0x0001072b978c();
  iVar1 = *(int *)(unaff_x20 + 0x10);
  if (iVar1 != -1) {
    func_0x0001073448fc(&PTR_FUN_1109a1178);
    *(int *)(unaff_x19 + 0x10) = iVar1;
  }
  return;
}



/* Entry: 10732565c; end: 107325663;  */

void FUN_10732565c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 107325664; end: 1073256a3;  */

void FUN_107325664(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0001073469b0();
  while (func_0x000107347cf4(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x18;
    func_0x0001072b978c();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1073256a4; end: 10732577b;  */

void FUN_1073256a4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x000107345658();
  func_0x00010002b838(auStack_68,PTR_DAT_1131acfb8);
  func_0x00010734560c(auStack_50);
  func_0x000107345728();
  func_0x00010002b838(auStack_68,PTR_DAT_1131acf60);
  uVar1 = *param_3;
  FUN_1073259c0(uVar1,auStack_68);
  func_0x000107345728();
  func_0x00010028af84();
  *(char *)(unaff_x19 + 0x20) = (char)uVar1;
  func_0x000107263b58(unaff_x19 + 0x28);
  func_0x00010734729c();
  return;
}



/* Entry: 10732577c; end: 10732578f;  */

/* WARNING: Possible PIC construction at 0x000107323174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073231bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107323178) */
/* WARNING: Removing unreachable block (ram,0x0001073231c0) */

void FUN_10732577c(undefined8 param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 auStack_1b8 [24];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  undefined4 uStack_188;
  undefined1 auStack_180 [56];
  byte bStack_148;
  undefined1 auStack_140 [16];
  byte bStack_130;
  undefined1 auStack_128 [56];
  undefined1 auStack_f0 [56];
  byte bStack_b8;
  undefined1 auStack_b0 [56];
  byte bStack_78;
  byte bStack_40;
  
  puVar7 = &UNK_10f40a4c4;
  uVar8 = 0x16;
  func_0x00010734479c();
  puStack_1a0 = puVar7;
  uStack_198 = uVar8;
  FUN_1073232dc(auStack_140);
  if ((bStack_130 & 1) == 0) {
    func_0x000107346ed8();
  }
  else {
    func_0x0001073453b0();
    if ((extraout_x8 & 1) == 0) {
      func_0x000107345644();
      func_0x000107346178(auStack_b0);
      func_0x000107264c5c(auStack_b0);
      func_0x000107346f1c();
    }
    iVar4 = (int)auStack_140;
    func_0x00010777016c();
    if (iVar4 == 0) {
      param_2 = auStack_1b8;
      FUN_1073238e4(auStack_b0,auStack_140,param_2,param_3);
      if ((bStack_78 & 1) != 0) {
        puVar5 = auStack_f0;
        puVar6 = auStack_b0;
        goto code_r0x0001000df598;
      }
      auStack_180[0] = 0;
      bStack_148 = 0;
      func_0x000107345e28();
    }
    else {
      uStack_188 = 3;
      bVar2 = *(byte *)(param_3 + 0x57);
      in_ZR = bVar2 == 0;
      uVar1 = *(ulong *)(param_3 + 0x48);
      plVar3 = (long *)*(long *)(param_3 + 0x40);
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        plVar3 = (long *)(param_3 + 0x40);
      }
      param_2 = auStack_190;
      func_0x000107770280(auStack_b0,auStack_140,param_2,param_3,plVar3,uVar1);
      func_0x0001072c9884(auStack_190);
      if ((bStack_40 & 1) == 0) {
        func_0x000107345370();
        auStack_180[0] = 0;
        bStack_148 = 0;
      }
      else {
        param_2 = auStack_128;
        FUN_107323900(auStack_f0,auStack_b0);
        if ((bStack_b8 & 1) != 0) {
          puVar5 = auStack_128;
          puVar6 = auStack_f0;
          goto code_r0x0001000df598;
        }
        func_0x000107345360();
        auStack_180[0] = 0;
        bStack_148 = 0;
        func_0x00010724b3d8(auStack_f0);
      }
      func_0x000107296ad0(auStack_b0);
    }
    if ((bStack_148 & 1) == 0) {
      func_0x000107346ed8();
    }
    else {
      param_2 = auStack_180;
      func_0x0001072627ac();
      in_ZR = bStack_148 == 1;
      if ((bool)in_ZR) {
        func_0x000107347898();
      }
    }
    func_0x000107345728();
  }
  func_0x0001072f5f4c();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_f0);
  func_0x000107296ad0(auStack_b0);
  func_0x000107345728();
  puVar6 = auStack_140;
  func_0x0001072f5f4c();
  func_0x000107345604();
  puVar5 = extraout_x8_00;
  if (puVar6[0x38] == '\0') {
    puVar6 = param_2;
  }
code_r0x0001000df598:
  func_0x000104c318ec();
  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(puVar6 + 0x30);
  return;
}



/* Entry: 107325790; end: 1073259bf;  */

void FUN_107325790(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long *unaff_x19;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  ulong uStack_70;
  
  func_0x000107345c14();
  func_0x000107346c9c();
  func_0x00010002b838(auStack_90,&UNK_10f40a4db);
  FUN_107325a40(&uStack_78);
  func_0x000107345944();
  uVar10 = uStack_78;
  do {
    if (uVar10 == uStack_70) {
      func_0x00010726e078(&uStack_78);
      return;
    }
    uVar4 = uVar10;
    func_0x000107264c5c();
    func_0x0001000633dc();
    if ((uVar4 & 1) == 0) {
      func_0x0001073476c8();
      func_0x0001000633dc();
      if ((uVar4 & 1) != 0) {
        uVar13 = 2;
        goto LAB_1073258c0;
      }
      func_0x0001073476c8();
      func_0x0001000633dc();
      if ((uVar4 & 1) != 0) {
        uVar13 = 3;
        goto LAB_1073258c0;
      }
      func_0x0001073476c8();
      func_0x0001000633dc();
      if ((uVar4 & 1) != 0) {
        uVar13 = 4;
        goto LAB_1073258c0;
      }
      func_0x0001073476c8();
      func_0x0001073479d4();
      iVar3 = (int)uVar4;
      if ((uVar4 & 1) != 0) {
        uVar13 = 5;
        goto LAB_1073258c0;
      }
      func_0x0001073476c8();
      func_0x0001000633dc();
      if (iVar3 != 0) {
        uVar13 = 6;
        goto LAB_1073258c0;
      }
    }
    else {
      uVar13 = 1;
LAB_1073258c0:
      puVar8 = (undefined1 *)unaff_x19[1];
      if (puVar8 < (undefined1 *)unaff_x19[2]) {
        puVar11 = puVar8 + 1;
        *puVar8 = uVar13;
      }
      else {
        lVar6 = *unaff_x19;
        lVar12 = (long)puVar8 - lVar6;
        uVar4 = lVar12 + 1;
        if ((long)uVar4 < 0) {
          func_0x000107325d04();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x107325990);
          (*pcVar2)();
        }
        uVar7 = unaff_x19[2] - lVar6;
        uVar9 = uVar7 * 2;
        if (uVar9 < uVar4 || uVar9 - uVar4 == 0) {
          uVar9 = uVar4;
        }
        if (0x3ffffffffffffffe < uVar7) {
          uVar9 = 0x7fffffffffffffff;
        }
        if (uVar9 == 0) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = unaff_x19 + 2;
          FUN_107325d10();
          lVar6 = *unaff_x19;
          puVar8 = (undefined1 *)unaff_x19[1];
        }
        puVar1 = (undefined1 *)((long)plVar5 + lVar12);
        puVar11 = puVar1 + 1;
        *puVar1 = uVar13;
        _memcpy(puVar1 + (lVar6 - (long)puVar8),lVar6,(long)puVar8 - lVar6);
        lVar12 = *unaff_x19;
        *unaff_x19 = (long)(puVar1 + (lVar6 - (long)puVar8));
        unaff_x19[1] = (long)puVar11;
        unaff_x19[2] = (long)plVar5 + uVar9;
        if (lVar12 != 0) {
          __ZdlPv();
        }
      }
      unaff_x19[1] = (long)puVar11;
    }
    uVar10 = uVar10 + 0x38;
  } while( true );
}



/* Entry: 1073259c0; end: 107325a3f;  */

undefined1 * FUN_1073259c0(long *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [24];
  byte bStack_28;
  
  puVar2 = auStack_60;
  (**(code **)(*param_1 + 0x68))(auStack_40);
  if ((bStack_28 & 1) != 0) {
    func_0x0001002a82b4(auStack_60,auStack_40);
    func_0x0001072daee8(auStack_60);
    func_0x0001001148fc(auStack_60);
    func_0x00010734729c();
    return puVar2;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107325a28);
  (*pcVar1)();
}



/* Entry: 107325a40; end: 107325cc7;  */

/* WARNING: Possible PIC construction at 0x000107325c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107325b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107325b94) */

long * FUN_107325a40(void)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 *puVar7;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined4 uStack_138;
  undefined1 auStack_130 [16];
  undefined1 uStack_120;
  undefined7 uStack_11f;
  char cStack_110;
  undefined1 auStack_108 [16];
  long lStack_f8;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  undefined1 auStack_d0 [8];
  char cStack_c8;
  long alStack_c0 [13];
  int iStack_58;
  char cStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = (undefined1 **)auStack_140;
  func_0x000107346d60();
  func_0x0001073448a8();
  uStack_48 = extraout_x8;
  func_0x000107346c9c();
  func_0x000107347554();
  FUN_1073232dc(&lStack_d8);
  uVar3 = cStack_c8 == '\x01';
  if ((bool)uVar3) {
    iVar4 = (int)&lStack_d8;
    func_0x00010777016c();
    if (iVar4 == 0) {
      uVar3 = cStack_c8 == '\x01';
      if (((bool)uVar3) && (func_0x000107346e98(*(undefined8 *)(lStack_d8 + 0x18)), iVar4 != 0)) {
        puVar7 = (undefined1 *)0x0;
        while( true ) {
          puVar5 = auStack_d0;
          (**(code **)(lStack_d8 + 0x20))();
          uVar3 = puVar7 == puVar5;
          if (puVar5 <= puVar7) break;
          (**(code **)(lStack_d8 + 0x28))(&lStack_f8,auStack_d0,puVar7);
          (**(code **)(lStack_f8 + 0x68))(alStack_c0,auStack_f0);
          func_0x000107347058();
          func_0x0001073460bc();
          if ((bool)uVar3) {
            func_0x0001072d17f4();
          }
          func_0x00010724b3d8(alStack_c0);
          puVar7 = puVar7 + 1;
        }
      }
      goto LAB_107325c14;
    }
    uStack_138 = 3;
    func_0x0001072f5dec(&lStack_f8,auStack_140);
    func_0x0001072f6ad4(auStack_130,&lStack_f8);
    func_0x00010734753c();
    func_0x0001072ca12c(auStack_108,auStack_130);
    func_0x000107346ef4(alStack_c0,&lStack_d8,auStack_108);
    func_0x000107346144();
    if (cStack_50 != '\x01' || iStack_58 != 8) {
      uStack_120 = 0;
      cStack_110 = '\0';
      func_0x000107296ad0(alStack_c0);
      func_0x0001072c9884(auStack_130);
      func_0x0001072c9884(&lStack_f8);
      func_0x0001072c9884(auStack_140);
      if (cStack_110 == '\x01') {
        lVar1 = ((long *)CONCAT71(uStack_11f,uStack_120))[1];
        for (lVar8 = *(long *)CONCAT71(uStack_11f,uStack_120); lVar8 != lVar1; lVar8 = lVar8 + 0x70)
        {
          if (*(int *)(lVar8 + 0x68) == 3) {
            FUN_10732393c(lVar8);
            func_0x0001072d17f4();
          }
        }
      }
      unaff_x19 = (long *)&uStack_120;
      uVar10 = 0x107325c14;
      ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
      goto SUB_107325ce4;
    }
    unaff_x19 = alStack_c0;
    uVar11 = 0x107325b94;
  }
  else {
LAB_107325c14:
    plVar6 = &lStack_d8;
    func_0x0001072f5f4c(plVar6);
    func_0x0001073447cc(uStack_48);
    if ((bool)uVar3) {
      return plVar6;
    }
    ___stack_chk_fail();
    func_0x000107296ad0(alStack_c0);
    func_0x0001072c9884(auStack_130);
    func_0x0001072c9884(&lStack_f8);
    func_0x0001072c9884(auStack_140);
    func_0x0001072f5f4c(&lStack_d8);
    func_0x00010726e078();
    uVar11 = 0x107325cc8;
    func_0x000107345614();
  }
  if ((int)unaff_x19[0xd] == 8) {
    return unaff_x19 + 1;
  }
  ppuVar2 = &puStack_150;
  ppuVar9 = &puStack_150;
  uVar10 = 0x107325ce4;
  puStack_150 = &stack0xfffffffffffffff0;
  uStack_148 = uVar11;
  func_0x00010563ab98();
SUB_107325ce4:
  if ((char)unaff_x19[2] == '\x01') {
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar9;
    *(undefined8 *)((long)ppuVar2 + -8) = uVar10;
    func_0x00010726b188();
  }
  return unaff_x19;
}



/* Entry: 107325cc8; end: 107325d0f;  */

long FUN_107325cc8(long param_1)

{
  if (*(int *)(param_1 + 0x68) == 8) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010726b188();
  }
  return param_1;
}



/* Entry: 107325d10; end: 107325d57;  */

void FUN_107325d10(undefined8 param_1,undefined8 param_2)

{
  __Znwm(param_2);
  return;
}



/* Entry: 107325d58; end: 107325d6f;  */

void FUN_107325d58(undefined8 *param_1)

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



/* Entry: 107325d70; end: 107325da7;  */

void FUN_107325d70(long param_1)

{
  long unaff_x20;
  
  func_0x000107345658();
  func_0x00010028af84();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107347a20();
  return;
}



/* Entry: 107325da8; end: 107325dc7;  */

void FUN_107325da8(void)

{
  func_0x000107348014();
  func_0x000107326460();
  return;
}



/* Entry: 107325dc8; end: 107325ddb;  */

void FUN_107325dc8(void)

{
  FUN_107325da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107325ddc; end: 107325e13;  */

undefined8 FUN_107325ddc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_107325ed8();
  return uVar1;
}



/* Entry: 107325e14; end: 107325e37;  */

void FUN_107325e14(long param_1,undefined8 param_2)

{
  func_0x000107348014(param_2,param_1 + 8);
  FUN_107325d70();
  return;
}



/* Entry: 107325e38; end: 107325ea3;  */

void FUN_107325e38(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_60 [6];
  int iStack_30;
  char cStack_28;
  
  FUN_1073a1f08(auStack_60,param_3);
  if (cStack_28 == '\x01' && iStack_30 == 0) {
    FUN_107325ef8(param_1,auStack_60[0]);
  }
  else {
    *param_1 = 0;
    param_1[0x78] = 0;
  }
  FUN_107325f6c(auStack_60);
  return;
}



/* Entry: 107325ea4; end: 107325ecb;  */

void FUN_107325ea4(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a1218);
  func_0x000107344bc4();
  return;
}



/* Entry: 107325ecc; end: 107325ed7;  */

undefined ** FUN_107325ecc(void)

{
  return &PTR_DAT_1109a1218;
}



/* Entry: 107325ed8; end: 107325ef7;  */

void FUN_107325ed8(void)

{
  func_0x000107348014();
  FUN_107325d70();
  return;
}



/* Entry: 107325ef8; end: 107325f13;  */

void FUN_107325ef8(long param_1)

{
  FUN_107325f14();
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 107325f14; end: 107325f33;  */

void FUN_107325f14(void)

{
  func_0x000107348040();
  FUN_107325f34();
  return;
}



/* Entry: 107325f34; end: 107325f6b;  */

/* WARNING: Possible PIC construction at 0x00010726934c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107269350) */

void FUN_107325f34(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  if (param_1 != 2) {
    if (param_1 != 1) {
      if (param_1 == 0) {
        func_0x0001072cfc8c(param_3);
        func_0x0001072c02b8();
        return;
      }
      return;
    }
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072747cc(param_3);
    unaff_x30 = &UNK_107269350;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010727473c();
  func_0x0001072693e4();
  return;
}



/* Entry: 107325f6c; end: 107325f93;  */

void FUN_107325f6c(void)

{
  undefined1 in_ZR;
  
  func_0x000107346978();
  if ((bool)in_ZR) {
    FUN_107325f94();
  }
  return;
}



/* Entry: 107325f94; end: 107325fcf;  */

void FUN_107325f94(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001073474cc();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a1208)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 107325fd0; end: 107325fdf;  */

void FUN_107325fd0(undefined8 param_1,long param_2)

{
  func_0x000107345acc();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107325fe0; end: 10732603f;  */

void FUN_107325fe0(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107326040; end: 107326083;  */

void FUN_107326040(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734624c();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x0001073449b0();
    func_0x000107345720();
  }
  else {
    func_0x0001073461ec();
  }
  return;
}



/* Entry: 107326084; end: 10732613b;  */

void FUN_107326084(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107345658();
  *param_1 = *param_2;
  func_0x000104c2f1f0(param_1 + 2,param_2 + 2);
  func_0x0001072e948c(unaff_x19 + 0x40,unaff_x20 + 0x40);
  FUN_10732613c(unaff_x19 + 0x80,unaff_x20 + 0x80);
  FUN_1073261e8(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x121);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x119);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x121) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x119) = uVar2;
  func_0x0001002a8208(unaff_x19 + 0x130,unaff_x20 + 0x130);
  func_0x000104c2f98c(unaff_x19 + 0x150,unaff_x20 + 0x150);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x20 + 0x160);
  *(undefined1 *)(unaff_x19 + 0x168) = uVar1;
  func_0x0001072e948c(unaff_x19 + 0x170,unaff_x20 + 0x170);
  *(undefined2 *)(unaff_x19 + 0x1b0) = *(undefined2 *)(unaff_x20 + 0x1b0);
  func_0x000100a2b994(unaff_x19 + 0x1b8,unaff_x20 + 0x1b8);
  func_0x000100603e48(unaff_x19 + 0x1d0,unaff_x20 + 0x1d0);
  return;
}



/* Entry: 10732613c; end: 10732615f;  */

undefined8 FUN_10732613c(undefined8 param_1)

{
  FUN_107326160();
  return param_1;
}



/* Entry: 107326160; end: 107326187;  */

void FUN_107326160(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x48);
  if (cVar1 != *(char *)(param_2 + 0x48)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        func_0x000104c2f714();
        *(undefined1 *)(param_1 + 0x48) = 0;
      }
      return;
    }
    func_0x00010724afb0();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000100a2b988();
    func_0x000104c2f1f0();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x3d);
    *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x3d) = uVar2;
    return;
  }
  return;
}



/* Entry: 107326188; end: 1073261e7;  */

void FUN_107326188(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x000104c2f1f0();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x3d);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x3d) = uVar1;
  return;
}



/* Entry: 1073261e8; end: 10732620b;  */

undefined8 FUN_1073261e8(undefined8 param_1)

{
  FUN_10732620c();
  return param_1;
}



/* Entry: 10732620c; end: 107326233;  */

undefined4 * FUN_10732620c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  long unaff_x19;
  
  cVar1 = *(char *)(param_1 + 0xe);
  if (cVar1 != *(char *)(param_2 + 0xe)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xe) == '\x01') {
        func_0x000107345708();
        func_0x00010724b15c();
        *(undefined1 *)(unaff_x19 + 0x38) = 0;
      }
      return param_1;
    }
    func_0x00010724b038();
    *(undefined1 *)(param_1 + 0xe) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    *param_1 = *param_2;
    FUN_10732628c(param_1 + 2,param_2 + 2);
    return param_1;
  }
  return param_1;
}



/* Entry: 107326234; end: 10732628b;  */

undefined4 * FUN_107326234(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_10732628c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10732628c; end: 1073262af;  */

undefined8 FUN_10732628c(undefined8 param_1)

{
  FUN_1073262b0();
  return param_1;
}



/* Entry: 1073262b0; end: 1073262d7;  */

void FUN_1073262b0(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 != *(char *)(param_2 + 0x28)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x28) == '\x01') {
        func_0x00010724b17c();
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      return;
    }
    func_0x00010724b0bc();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000100a2b988();
    func_0x00010732638c();
    *unaff_x19 = 0;
    func_0x0001072d4d88();
    lVar3 = unaff_x19[2];
    lVar5 = unaff_x19[1];
    unaff_x20[2] = lVar3;
    unaff_x20[1] = lVar5;
    unaff_x19[1] = 0;
    lVar5 = unaff_x19[3];
    unaff_x20[3] = lVar5;
    *(undefined4 *)(unaff_x20 + 4) = *(undefined4 *)(unaff_x19 + 4);
    if (lVar5 != 0) {
      uVar4 = *(ulong *)(lVar3 + 8);
      uVar6 = unaff_x20[1];
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar6 - 1 & uVar4;
      }
      else if (uVar6 <= uVar4) {
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar2 * uVar6;
      }
      *(long **)(*unaff_x20 + uVar4 * 8) = unaff_x20 + 2;
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
    }
    return;
  }
  return;
}



/* Entry: 1073262d8; end: 1073262fb;  */

void FUN_1073262d8(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010724b17c();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 1073262fc; end: 1073263db;  */

void FUN_1073262fc(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010732638c();
  *unaff_x19 = 0;
  func_0x0001072d4d88();
  lVar2 = unaff_x19[2];
  lVar4 = unaff_x19[1];
  unaff_x20[2] = lVar2;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = 0;
  lVar4 = unaff_x19[3];
  unaff_x20[3] = lVar4;
  *(undefined4 *)(unaff_x20 + 4) = *(undefined4 *)(unaff_x19 + 4);
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(lVar2 + 8);
    uVar5 = unaff_x20[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar3 = uVar5 - 1 & uVar3;
    }
    else if (uVar5 <= uVar3) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar3 / uVar5;
      }
      uVar3 = uVar3 - uVar1 * uVar5;
    }
    *(long **)(*unaff_x20 + uVar3 * 8) = unaff_x20 + 2;
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 1073263dc; end: 1073263fb;  */

void FUN_1073263dc(long param_1)

{
  if (*(char *)(param_1 + 600) == '\x01') {
    FUN_1073263fc();
  }
  return;
}



/* Entry: 1073263fc; end: 107326483;  */

long FUN_1073263fc(long param_1)

{
  func_0x00010732642c(param_1 + 0x230);
  func_0x00010724b374(param_1 + 0x38);
  func_0x000107345ab0();
  return param_1;
}



/* Entry: 107326484; end: 1073264ab;  */

long FUN_107326484(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != *(char *)(param_2 + 0x18)) {
    if (cVar1 != '\0') {
      lVar2 = param_1;
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x0001072b978c();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return lVar2;
    }
    FUN_1073255f0();
    func_0x000107347d90();
    return param_1;
  }
  if (cVar1 != '\0') {
    FUN_107326518();
    return param_1;
  }
  return param_1;
}



/* Entry: 1073264ac; end: 1073264db;  */

void FUN_1073264ac(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001072b978c();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1073264dc; end: 1073264f3;  */

void FUN_1073264dc(void)

{
  FUN_1073255f0();
  func_0x000107347d90();
  return;
}



/* Entry: 1073264f4; end: 107326517;  */

undefined8 FUN_1073264f4(undefined8 param_1)

{
  FUN_107326518();
  return param_1;
}



/* Entry: 107326518; end: 10732656b;  */

void FUN_107326518(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x10) != -1 || *(int *)(param_2 + 0x10) != -1) {
    if (*(int *)(param_2 + 0x10) == -1) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        func_0x0001072ce6fc((&PTR_DAT_11099a760)[*(uint *)(param_1 + 0x10)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    func_0x000107345474();
  }
  return;
}



/* Entry: 10732656c; end: 10732657b;  */

undefined8 * FUN_10732656c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(int *)(puVar1 + 2) != 0) {
    func_0x0001073460d4();
    FUN_1073265ac();
    return puVar1;
  }
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  param_2[1] = uVar3;
  *param_2 = uVar2;
  func_0x00010726ee94(&uStack_30);
  return param_2;
}



/* Entry: 10732657c; end: 1073265ab;  */

undefined8 * FUN_10732657c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 2) != 0) {
    func_0x0001073460d4();
    FUN_1073265ac();
    return param_1;
  }
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  func_0x00010726ee94(&uStack_30);
  return param_2;
}



/* Entry: 1073265ac; end: 1073265b7;  */

void FUN_1073265ac(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988(*param_1,param_1[1]);
  func_0x0001072b978c();
  func_0x000107346d90();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined4 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1073265b8; end: 1073265e3;  */

void FUN_1073265b8(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x0001072b978c();
  func_0x000107346d90();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined4 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1073265e4; end: 1073265eb;  */

void FUN_1073265e4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x10) == 1) {
    func_0x000107345010(param_2,param_3);
    func_0x0001072915e0();
    return;
  }
  func_0x0001073460d4();
  FUN_107326644();
  return;
}



/* Entry: 1073265ec; end: 10732661f;  */

void FUN_1073265ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x10) == 1) {
    func_0x000107345010(param_2,param_3);
    func_0x0001072915e0();
    return;
  }
  func_0x0001073460d4();
  FUN_107326644();
  return;
}



/* Entry: 107326620; end: 107326643;  */

void FUN_107326620(void)

{
  func_0x000107345010();
  func_0x0001072915e0();
  return;
}



/* Entry: 107326644; end: 10732664f;  */

void FUN_107326644(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988(*param_1,param_1[1]);
  func_0x0001072b978c();
  func_0x000107346d90();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined4 *)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 107326650; end: 10732667f;  */

void FUN_107326650(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x0001072b978c();
  func_0x000107346d90();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined4 *)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 107326680; end: 10732669b;  */

void FUN_107326680(void)

{
  undefined1 uStack_11;
  
  FUN_10732669c(&uStack_11);
  return;
}



/* Entry: 10732669c; end: 107326703;  */

void FUN_10732669c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uStack_30;
  
  func_0x0001073447e0();
  func_0x000107346378();
  FUN_107326704();
  func_0x000107347710(uStack_30);
  *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x18) = 0x1021200;
  *(undefined8 *)(extraout_x8_00 + 0x20) = 0x4018000000000000;
  func_0x000107344a14();
  func_0x000107326774();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107346404();
  FUN_107326724();
  func_0x0001073465ec();
  return;
}



/* Entry: 107326704; end: 107326723;  */

void FUN_107326704(void)

{
  func_0x000107346404();
  FUN_107326724();
  func_0x0001073465ec();
  return;
}



/* Entry: 107326724; end: 107326747;  */

void FUN_107326724(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109a3488;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107326748; end: 10732674b;  */

void FUN_107326748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a3488;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10732674c; end: 10732675f;  */

void FUN_10732674c(void)

{
  func_0x000107326768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107326760; end: 107326783;  */

void FUN_107326760(void)

{
  return;
}



/* Entry: 107326784; end: 1073267f3;  */

void FUN_107326784(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073267f4; end: 1073267ff;  */

void FUN_1073267f4(void)

{
  func_0x000107345150();
  FUN_107326820();
  return;
}



/* Entry: 107326800; end: 10732681f;  */

void FUN_107326800(void)

{
  FUN_107326820();
  return;
}



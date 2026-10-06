/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086b121c; end: 1086b1237;  */

void FUN_1086b121c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x20) {
    FUN_1086b130c(param_4,uVar1);
    param_4 = lStack_48 + 0x20;
  }
  uStack_58 = 1;
  FUN_1086b12dc(param_1,param_2,param_3);
  FUN_1086b1334(&uStack_70);
  return;
}



/* Entry: 1086b1238; end: 1086b12db;  */

void FUN_1086b1238(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x20) {
    FUN_1086b130c(param_4,lVar1);
    param_4 = lStack_38 + 0x20;
  }
  uStack_48 = 1;
  FUN_1086b12dc(param_1,param_2,param_3);
  FUN_1086b1334(&uStack_60);
  return;
}



/* Entry: 1086b12dc; end: 1086b130b;  */

void FUN_1086b12dc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086b130c; end: 1086b1333;  */

void FUN_1086b130c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1086b1334; end: 1086b1363;  */

long FUN_1086b1334(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1086b1364(param_1);
  }
  return param_1;
}



/* Entry: 1086b1364; end: 1086b1383;  */

void FUN_1086b1364(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086b1384; end: 1086b13df;  */

void FUN_1086b1384(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086b13e0; end: 1086b13e7;  */

void FUN_1086b13e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086b13e8; end: 1086b1483;  */

void FUN_1086b13e8(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086b1484; end: 1086b150f;  */

long FUN_1086b1484(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  plVar1 = param_1;
  FUN_1086b1510(param_1,(param_1[1] - *param_1 >> 5) + 1);
  FUN_1086b11b0(auStack_48,plVar1,param_1[1] - *param_1 >> 5,param_1 + 2);
  FUN_1086b130c(lStack_38,param_2);
  lStack_38 = lStack_38 + 0x20;
  func_0x0001086b15a8();
  lVar2 = param_1[1];
  func_0x0001086b1598();
  return lVar2;
}



/* Entry: 1086b1510; end: 1086b154f;  */

ulong FUN_1086b1510(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 >> 0x3b == 0) {
    uVar2 = (long)(param_1[2] - *param_1) >> 4;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffdf < param_1[2] - *param_1) {
      uVar2 = 0x7ffffffffffffff;
    }
    return uVar2;
  }
  FUN_1086b111c();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  while (uVar2 != uVar1) {
    uVar2 = uVar2 - 0x20;
    func_0x000107c27914();
  }
  param_1[1] = uVar1;
  return uVar2;
}



/* Entry: 1086b1550; end: 1086b1557;  */

void FUN_1086b1550(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1086b1558; end: 1086b158f;  */

void FUN_1086b1558(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1086b1590; end: 1086b15b3;  */

void FUN_1086b1590(void)

{
  return;
}



/* Entry: 1086b15b4; end: 1086b16b7;  */

undefined8 * FUN_1086b15b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a63770;
  param_1[1] = &PTR_DAT_110a63b28;
  param_1[4] = &PTR_DAT_110a63b80;
  param_1[5] = &PTR_DAT_110a63bc0;
  param_1[6] = &PTR_DAT_110a63bf0;
  param_1[7] = &PTR_DAT_110a63c18;
  param_1[8] = &PTR_DAT_110a63c40;
  func_0x000107c289f8(param_1 + 0x70);
  func_0x000107c289f8(param_1 + 0x6a);
  func_0x000107c289f8(param_1 + 100);
  func_0x000107c289f8(param_1 + 0x5e);
  func_0x000107c289f8(param_1 + 0x58);
  func_0x000107c289f8(param_1 + 0x52);
  func_0x000107c28eb4(param_1 + 0x4a);
  func_0x0001086ca4c0(param_1 + 0x43);
  func_0x000107c28eb4(param_1 + 0x3b);
  func_0x000107c289f8(param_1 + 0x35);
  func_0x00010869f0a4(param_1 + 0x2f);
  func_0x000100864b68(param_1 + 0x28);
  func_0x000100864b68(param_1 + 0x23);
  func_0x000107c27f9c(param_1 + 0x21);
  func_0x000107c27f98(param_1 + 0x20);
  func_0x000100864b68(param_1 + 0x1b);
  FUN_1086c15f8(param_1 + 0x1a);
  func_0x000107c29084(param_1 + 0x11);
  func_0x000107c28a6c(param_1 + 0xf);
  func_0x000107c29130(param_1 + 0xd);
  func_0x000107c2912c(param_1 + 0xb);
  func_0x000107c29128(param_1 + 9);
  func_0x000107c29124(param_1 + 2);
  return param_1;
}



/* Entry: 1086b16b8; end: 1086b16eb;  */

undefined8 * FUN_1086b16b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a63770;
  param_1[1] = &PTR_DAT_110a63b28;
  param_1[4] = &PTR_DAT_110a63b80;
  param_1[5] = &PTR_DAT_110a63bc0;
  param_1[6] = &PTR_DAT_110a63bf0;
  param_1[7] = &PTR_DAT_110a63c18;
  param_1[8] = &PTR_DAT_110a63c40;
  func_0x000107c289f8(param_1 + 0x70);
  func_0x000107c289f8(param_1 + 0x6a);
  func_0x000107c289f8(param_1 + 100);
  func_0x000107c289f8(param_1 + 0x5e);
  func_0x000107c289f8(param_1 + 0x58);
  func_0x000107c289f8(param_1 + 0x52);
  func_0x000107c28eb4(param_1 + 0x4a);
  func_0x0001086ca4c0(param_1 + 0x43);
  func_0x000107c28eb4(param_1 + 0x3b);
  func_0x000107c289f8(param_1 + 0x35);
  func_0x00010869f0a4(param_1 + 0x2f);
  func_0x000100864b68(param_1 + 0x28);
  func_0x000100864b68(param_1 + 0x23);
  func_0x000107c27f9c(param_1 + 0x21);
  func_0x000107c27f98(param_1 + 0x20);
  func_0x000100864b68(param_1 + 0x1b);
  FUN_1086c15f8(param_1 + 0x1a);
  func_0x000107c29084(param_1 + 0x11);
  func_0x000107c28a6c(param_1 + 0xf);
  func_0x000107c29130(param_1 + 0xd);
  func_0x000107c2912c(param_1 + 0xb);
  func_0x000107c29128(param_1 + 9);
  func_0x000107c29124(param_1 + 2);
  return param_1;
}



/* Entry: 1086b16ec; end: 1086b16ff;  */

void FUN_1086b16ec(void)

{
  FUN_1086b15b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086b1700; end: 1086b174b;  */

void FUN_1086b1700(long param_1)

{
  FUN_1086b15b4(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086b174c; end: 1086b18df;  */

void FUN_1086b174c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *in_x3;
  code *pcVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *unaff_x19;
  long unaff_x20;
  undefined *unaff_x21;
  long *unaff_x22;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined1 auStack_d8 [8];
  undefined4 uStack_d0;
  undefined1 uStack_a8;
  undefined1 auStack_90 [40];
  uint uStack_68;
  char cStack_64;
  byte bStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  
  func_0x0001086daaa8();
  func_0x0001086d9934();
  uStack_38 = extraout_x8;
  func_0x0001006b444c();
  FUN_10885ee8c(auStack_d8);
  FUN_108663a10(auStack_90,auStack_d8);
  FUN_108656820(auStack_d8);
  if ((bStack_60 & 1) == 0) {
    puVar4 = (undefined1 *)*unaff_x19;
    unaff_x21 = (undefined *)unaff_x19[1];
    func_0x0001086d9a80();
  }
  else {
    in_ZR = cStack_64 == '\x01' && uStack_68 == 2;
    if (cStack_64 == '\x01' && uStack_68 < 2) {
      puVar4 = (undefined1 *)*unaff_x19;
      unaff_x21 = (undefined *)unaff_x19[1];
      func_0x0001086da32c();
    }
    else {
      unaff_x22 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x90);
      FUN_1086b19b4(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
      auStack_d8[0] = 0;
      uStack_a8 = 0;
      in_x3 = &uStack_58;
      puVar4 = (undefined1 *)0x120095;
      (**(code **)(*unaff_x22 + 0x18))(unaff_x22);
      func_0x00010086ab34(auStack_d8);
      FUN_1086d1cac(&uStack_58);
    }
  }
  FUN_1086569a0(auStack_90);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_38);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086d9d38();
      func_0x00010086ab34();
      FUN_1086d1cac(&uStack_58);
      puVar3 = auStack_90;
      FUN_1086569a0();
      in_ZR = (int)unaff_x22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086da058();
      ___cxa_end_catch();
    }
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    unaff_x21 = &DAT_10f35e3b3;
    func_0x0001086d9a74();
    ___cxa_end_catch();
    puVar4 = puVar3;
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  pcVar5 = FUN_1086b18e0;
  func_0x0001086db620();
  puStack_50 = &stack0xfffffffffffffff0;
  pcStack_48 = pcVar5;
  func_0x0001086d9810();
  if (((extraout_x8_00 & 1) == 0) && (puVar4 != (undefined1 *)0x0)) {
    func_0x0001086d9c18();
    if (unaff_x21 != (undefined *)0x0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    uStack_d0 = SUB84(in_x3,0);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1c6c);
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (long *)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086da6b4();
  }
  func_0x000100864c10();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086d9af0();
  func_0x0001086da6b4();
  func_0x0001086d9ff8();
  plStack_110 = unaff_x22;
  func_0x0001086da128();
  FUN_1086d1d40();
  uVar1 = *in_x3;
  lVar2 = in_x3[1];
  uStack_120 = uVar1;
  lStack_118 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_02 != 0);
  }
  unaff_x19[3] = 0;
  func_0x000107c3268c();
  func_0x0001086dabd4(&PTR_SUB_110a649c8);
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(long *)(puVar3 + 0x20) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_03 != 0);
  }
  unaff_x19[3] = (long)puVar3;
  FUN_1086c1620(auStack_130);
  return;
}



/* Entry: 1086b18e0; end: 1086b19b3;  */

void FUN_1086b18e0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar4 = (undefined4)((ulong)param_4 >> 0x20);
  uVar3 = (undefined4)param_4;
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1c6c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086da6b4();
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x0001086da6b4();
    func_0x0001086d9ff8();
    func_0x0001086da128();
    FUN_1086d1d40();
    uVar1 = *(undefined8 *)CONCAT44(uVar4,uVar3);
    lVar2 = ((undefined8 *)CONCAT44(uVar4,uVar3))[1];
    uStack_40 = uVar1;
    lStack_38 = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    func_0x000107c3268c();
    func_0x0001086dabd4(&PTR_SUB_110a649c8);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(long *)(param_1 + 0x20) = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    *(long *)(unaff_x19 + 0x18) = param_1;
    FUN_1086c1620(auStack_50);
    return;
  }
  return;
}



/* Entry: 1086b19b4; end: 1086b1a3b;  */

void FUN_1086b19b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001086da128();
  FUN_1086d1d40();
  uVar1 = *param_4;
  lVar2 = param_4[1];
  uStack_40 = uVar1;
  lStack_38 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  func_0x000107c3268c();
  func_0x0001086dabd4(&PTR_SUB_110a649c8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(long *)(param_1 + 0x20) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  *(long *)(unaff_x19 + 0x18) = param_1;
  FUN_1086c1620(auStack_50);
  return;
}



/* Entry: 1086b1a3c; end: 1086b1b47;  */

void FUN_1086b1a3c(undefined8 param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x21;
  long lVar1;
  
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    lVar1 = *(long *)(unaff_x21 + 0x70);
    func_0x0001086da220();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086db914();
    func_0x0001086d9a28(&PTR_DAT_110a64158);
    func_0x0001086da01c();
    if (lVar1 == 0) {
      func_0x0001086d9ab0();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086db91c();
      func_0x0001086da9f0();
    }
    func_0x0001086da6b4();
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086da9f0();
    func_0x0001086da6b4();
    func_0x0001086d9ff8();
    func_0x0001086dbf94();
    func_0x0001086d9bbc();
    func_0x0001086d9bd0();
    func_0x0001086d9b3c();
    func_0x0001086d9dd4();
    func_0x0001086d9f78();
    func_0x000107c316c4();
    func_0x0001086d9860();
    func_0x0001086da160();
    func_0x0001086da5bc();
    func_0x000107c32690();
    func_0x000107c326ac();
    func_0x0001086da504();
    FUN_1086b18e0();
    return;
  }
  return;
}



/* Entry: 1086b1b48; end: 1086b1bbb;  */

void FUN_1086b1b48(void)

{
  func_0x0001086dbf94();
  func_0x0001086d9bbc();
  func_0x0001086d9bd0();
  func_0x0001086d9b3c();
  func_0x0001086d9dd4();
  func_0x0001086d9f78();
  func_0x000107c316c4();
  func_0x0001086d9860();
  func_0x0001086da160();
  func_0x0001086da5bc();
  func_0x000107c32690();
  func_0x000107c326ac();
  func_0x0001086da504();
  FUN_1086b18e0();
  return;
}



/* Entry: 1086b1bbc; end: 1086b1f67;  */

void FUN_1086b1bbc(undefined8 param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 ***pppuVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x24;
  long lVar5;
  undefined **ppuVar6;
  undefined1 auStack_6c0 [16];
  long lStack_6b0;
  undefined8 uStack_6a8;
  undefined1 auStack_698 [24];
  long lStack_680;
  undefined **ppuStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 **ppuStack_658;
  undefined8 uStack_650;
  char *pcStack_648;
  undefined8 **ppuStack_640;
  undefined1 uStack_638;
  undefined8 **ppuStack_240;
  undefined8 uStack_238;
  char *pcStack_230;
  undefined8 uStack_228;
  char cStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  long *plStack_40;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  func_0x0001086da060();
  func_0x0001086d9990();
  func_0x0001086da64c(&ppuStack_240,*(undefined8 *)(extraout_x8 + 0x20));
  uVar1 = cStack_70 == '\x01';
  if ((bool)uVar1) {
    func_0x0001086dbdb4();
    ppuStack_678 = (undefined **)unaff_x20[1];
    lStack_680 = *unaff_x20;
    lVar4 = extraout_x8_00;
    if (unaff_x20[1] != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
      lVar4 = *(long *)(unaff_x19 + 0xd0);
    }
    plVar2 = *(long **)(lVar4 + 0x210);
    func_0x0001006b46a8(&uStack_670,plVar2,&ppuStack_240);
    func_0x000107c28150();
    func_0x0001086dac8c();
    func_0x0001086da518();
    lVar5 = *(long *)(unaff_x24 + 0x70);
    lStack_50 = 0x1086d1d18;
    ppuStack_48 = &PTR_FUN_110a64170;
    func_0x0001086db078();
    plVar2[1] = (long)ppuStack_678;
    *plVar2 = lStack_680;
    lVar4 = lStack_680;
    ppuVar6 = ppuStack_678;
    if (ppuStack_678 != (undefined **)0x0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086da99c();
    plStack_40 = plVar2;
    func_0x0001086db824(unaff_x24 + 0x48);
    func_0x0001086d9c64(ppuStack_48);
    func_0x0001086da258();
    if (lVar5 == 0) {
      func_0x0001086d9eac();
      lStack_50 = lVar4;
      ppuStack_48 = ppuVar6;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086db82c();
      func_0x0001086da988();
    }
    FUN_1086b1f7c(&lStack_680);
  }
  else {
    (**(code **)(**(long **)(*(long *)(unaff_x19 + 0xd0) + 0x10) + 0xe8))(&lStack_680);
    plVar2 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0x290);
    FUN_1086d1d40(auStack_6c0,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18));
    lStack_6b0 = lStack_680;
    if (lStack_680 != 0) {
      do {
        func_0x0001086d9cec();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001086da81c();
    uStack_6a8 = param_1;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001086da478(auStack_698);
    FUN_1086ca564(&lStack_50,auStack_6c0);
    FUN_1086ca4e4(&uStack_68);
    func_0x0001086b1fa0(&lStack_50);
    func_0x0001086b1fa0(auStack_6c0);
    func_0x000107c27f9c(&uStack_68);
    func_0x000107c27f9c(&lStack_680);
  }
  func_0x000107c288c8(&ppuStack_240);
LAB_1086b1d7c:
  do {
    func_0x0001006ba334(uStack_8);
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9fec();
    func_0x0001086da988();
    FUN_1086b1f7c(&lStack_680);
    pppuVar3 = &ppuStack_240;
    func_0x000107c288c8();
    while( true ) {
      uVar1 = (int)plVar2 == 2;
      if ((bool)uVar1) break;
      uVar1 = (int)plVar2 == 1;
      if ((bool)uVar1) {
        func_0x0001086da000();
        func_0x0001086da510();
        func_0x0001086d98d0();
        uStack_238 = 0;
        uStack_228 = 0;
        pcStack_230 = "getConversation";
        ppuStack_240 = pppuVar3;
        func_0x0001086d9b3c();
        func_0x0001086da324(&uStack_68);
        func_0x0001086da31c(&ppuStack_240);
        func_0x000107c316c4();
        pcStack_648 = pcStack_230;
        lStack_680 = CONCAT44(lStack_680._4_4_,0x10);
        ppuStack_678 = (undefined **)0x0;
        uStack_668 = uStack_60;
        uStack_670 = uStack_68;
        uStack_660 = uStack_58;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_650 = uStack_238;
        ppuStack_658 = ppuStack_240;
        ppuStack_240 = (undefined8 **)0x0;
        uStack_238 = 0;
        pcStack_230 = (char *)0x0;
        uStack_638 = 0;
        ppuStack_640 = pppuVar3;
        func_0x0001086da358();
        func_0x00010786e114(&lStack_680);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_240);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
        func_0x0001086da504();
        FUN_1086b1fd0();
        ___cxa_end_catch();
        goto LAB_1086b1d7c;
      }
      func_0x0001086da008();
      func_0x0001086da22c();
      func_0x0001086d9fec();
    }
    func_0x0001086da000();
    func_0x000108848514();
    func_0x0001086da750();
    FUN_1086b1fd0();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1086b1f68; end: 1086b1f7b;  */

void FUN_1086b1f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long extraout_x8;
  undefined1 auStack_300 [216];
  byte bStack_228;
  undefined8 auStack_220 [27];
  byte bStack_148;
  undefined1 auStack_140 [232];
  undefined1 auStack_58 [24];
  
  func_0x000107c32538(param_1,param_2,param_3);
  func_0x000107c316c8(auStack_58,&UNK_10f4b09fc);
  func_0x000107c32568(extraout_x8);
  func_0x000107c29f64();
  uVar1 = *(char *)(extraout_x8 + 0x1d0) == '\x01';
  if ((bool)uVar1) {
    func_0x000107c32568(auStack_140);
    func_0x000107c29fa8();
    func_0x000107c28ee8(auStack_220,auStack_140);
    func_0x000107c3257c(auStack_300);
    while ((((bStack_148 & 1) != 0 || ((bStack_228 & 1) != 0)) &&
           (func_0x0001086b0c28(auStack_220[0]), !(bool)uVar1))) {
      FUN_1086a10f8(auStack_220);
      func_0x0001086b0834();
      func_0x000107c28fdc(auStack_220);
    }
    func_0x000107c324f8(auStack_300);
    func_0x000107c324f8(auStack_220);
    func_0x000107c28fcc(auStack_140);
  }
  func_0x0001086b0520();
  return;
}



/* Entry: 1086b1f7c; end: 1086b1fcf;  */

long FUN_1086b1f7c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006ba274();
  func_0x0001006b74f4();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086b1fd0; end: 1086b20a3;  */

/* WARNING: Possible PIC construction at 0x0001086b23f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086b242c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086b2430) */

undefined8 ******* FUN_1086b1fd0(undefined8 *******param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined4 uVar4;
  code *pcVar5;
  code *pcVar6;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 ******extraout_x8_03;
  undefined8 ******ppppppuVar7;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  undefined8 *****unaff_x22;
  long unaff_x24;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 *in_stack_00000050;
  undefined8 *******in_stack_00000058;
  undefined8 in_stack_00000090;
  long lStack_660;
  undefined **ppuStack_658;
  long lStack_650;
  undefined **ppuStack_648;
  undefined8 ****ppppuStack_640;
  undefined8 ******ppppppuStack_638;
  undefined8 uStack_630;
  char *pcStack_628;
  undefined8 ******ppppppuStack_620;
  undefined1 uStack_618;
  undefined8 *puStack_5d0;
  code *pcStack_5c8;
  undefined8 ******ppppppuStack_220;
  undefined8 uStack_218;
  char *pcStack_210;
  undefined8 uStack_208;
  byte bStack_50;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 ****ppppuStack_30;
  undefined8 uStack_8;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != (long *)0x0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(FUN_1086d1d7c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (undefined8 *****)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086db0dc();
  }
  func_0x000100864c10();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001086d9af0();
  func_0x0001086db0dc();
  func_0x0001086d9ff8();
  pcVar5 = FUN_1086b20a4;
  func_0x000107c32728();
  plVar1 = &lStack_660;
  in_stack_00000050 = &stack0x00000090;
  in_stack_00000058 = (undefined8 *******)pcVar5;
  func_0x0001086d9990();
  FUN_1086b1f68(&ppppppuStack_220,*(undefined8 *)(extraout_x8_02 + 0x20));
  if ((bStack_50 & 1) == 0) {
    pppppppuVar3 = (undefined8 *******)*param_3;
    param_2 = param_3[1];
    func_0x0001086daec0();
    FUN_1086b2358();
  }
  else {
    func_0x0001086dbdb4();
    ppuVar10 = (undefined **)param_3[1];
    lVar9 = *param_3;
    ppppppuVar7 = extraout_x8_03;
    lStack_660 = lVar9;
    ppuStack_658 = ppuVar10;
    if (param_3[1] != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
      ppppppuVar7 = param_1[0x1a];
    }
    unaff_x22 = ppppppuVar7[0x42];
    pppppppuVar3 = &ppppppuStack_220;
    func_0x0001006b46a8(&lStack_650);
    func_0x000107c28150();
    func_0x0001086dac8c();
    func_0x0001086da518();
    lVar8 = *(long *)(unaff_x24 + 0x70);
    lStack_40 = 0x1086d1e04;
    ppuStack_38 = &PTR_FUN_110a641b8;
    func_0x0001086db078();
    func_0x0001086d9ed4();
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001086da99c();
    ppppuStack_30 = unaff_x22;
    func_0x0001086da990();
    func_0x0001086d9c38();
    func_0x0001086da258();
    if (lVar8 == 0) {
      func_0x0001086d9eac();
      lStack_40 = lVar9;
      ppuStack_38 = ppuVar10;
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da95c();
      func_0x0001086da590();
    }
    FUN_1086b2434(&lStack_660);
  }
  pppppppuVar2 = &ppppppuStack_220;
  func_0x000107c288c8(pppppppuVar2);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_8);
      if ((bool)in_ZR) {
        return pppppppuVar2;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x0001086da590();
      FUN_1086b2434(&lStack_660);
      pppppppuVar2 = &ppppppuStack_220;
      func_0x000107c288c8();
      in_ZR = (int)unaff_x22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da750();
      pppppppuVar2 = param_1;
      FUN_1086b2358(param_1);
      ___cxa_end_catch();
    }
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    func_0x0001086da510();
    func_0x0001086d98d0();
    uStack_218 = 0;
    uStack_208 = 0;
    pcStack_210 = "fetchConversation";
    ppppppuStack_220 = pppppppuVar2;
    func_0x0001086d9b3c();
    pcVar5 = (code *)&ppppppuStack_220;
    func_0x0001086da324(&lStack_40);
    func_0x0001086da31c(&ppppppuStack_220);
    func_0x000107c316c4();
    pcStack_628 = pcStack_210;
    lStack_660 = CONCAT44(lStack_660._4_4_,0x10);
    ppuStack_658 = (undefined **)0x0;
    ppuStack_648 = ppuStack_38;
    lStack_650 = lStack_40;
    ppppuStack_640 = ppppuStack_30;
    lStack_40 = 0;
    ppuStack_38 = (undefined **)0x0;
    ppppuStack_30 = (undefined8 *****)0x0;
    uStack_630 = uStack_218;
    ppppppuStack_638 = ppppppuStack_220;
    ppppppuStack_220 = (undefined8 ******)0x0;
    uStack_218 = 0;
    pcStack_210 = (char *)0x0;
    uStack_618 = 0;
    ppppppuStack_620 = pppppppuVar2;
    func_0x0001086da358();
    func_0x0001086db0d4();
    pppppppuVar2 = &ppppppuStack_220;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppuVar2);
    func_0x0001086db060();
    pppppppuVar3 = (undefined8 *******)*param_3;
    param_2 = param_3[1];
    func_0x0001086da504();
    FUN_1086b2358();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  pcVar6 = FUN_1086b2358;
  func_0x0001086db620();
  puStack_5d0 = &stack0x00000050;
  pcStack_5c8 = pcVar6;
  func_0x0001086d9810();
  if (((extraout_x8_06 & 1) == 0) && (pppppppuVar3 != (undefined8 *******)0x0)) {
    func_0x0001086d9c18();
    uVar4 = SUB84(pcVar5,0);
    if (param_2 != 0) {
      do {
        func_0x000107c325f8();
        uVar4 = SUB84(pcVar5,0);
      } while (extraout_w10_05 != 0);
    }
    lStack_650 = CONCAT44(lStack_650._4_4_,uVar4);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1dc0);
    if (extraout_x8_07 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_06 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (undefined8 *****)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_08 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_07 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
  }
  else {
    func_0x000100864c10();
    if ((bool)in_ZR) {
      return pppppppuVar2;
    }
    ___stack_chk_fail();
    func_0x0001086d9af0();
  }
  func_0x00010054ffe4();
  if (plVar1 != (long *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1086b20a4; end: 1086b2357;  */

/* WARNING: Possible PIC construction at 0x0001086b23f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086b242c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086b2430) */

undefined8 **** FUN_1086b20a4(undefined8 ****param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined4 uVar4;
  code *pcVar5;
  long extraout_x8;
  undefined8 ***extraout_x8_00;
  undefined8 ***pppuVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 **unaff_x22;
  long unaff_x24;
  long lVar7;
  undefined8 ****unaff_x30;
  long lVar8;
  undefined **ppuVar9;
  undefined8 in_stack_00000050;
  long lStack_660;
  undefined **ppuStack_658;
  long lStack_650;
  undefined **ppuStack_648;
  undefined8 *puStack_640;
  undefined8 ***pppuStack_638;
  undefined8 uStack_630;
  char *pcStack_628;
  undefined8 ***pppuStack_620;
  undefined1 uStack_618;
  undefined8 *puStack_5d0;
  code *pcStack_5c8;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  char *pcStack_210;
  undefined8 uStack_208;
  byte bStack_50;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  plVar1 = &lStack_660;
  func_0x0001086d9990();
  FUN_1086b1f68(&pppuStack_220,*(undefined8 *)(extraout_x8 + 0x20));
  if ((bStack_50 & 1) == 0) {
    ppppuVar3 = (undefined8 ****)*param_3;
    param_2 = param_3[1];
    func_0x0001086daec0();
    FUN_1086b2358();
  }
  else {
    func_0x0001086dbdb4();
    ppuVar9 = (undefined **)param_3[1];
    lVar8 = *param_3;
    pppuVar6 = extraout_x8_00;
    lStack_660 = lVar8;
    ppuStack_658 = ppuVar9;
    if (param_3[1] != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
      pppuVar6 = param_1[0x1a];
    }
    unaff_x22 = pppuVar6[0x42];
    ppppuVar3 = &pppuStack_220;
    func_0x0001006b46a8(&lStack_650);
    func_0x000107c28150();
    func_0x0001086dac8c();
    func_0x0001086da518();
    lVar7 = *(long *)(unaff_x24 + 0x70);
    lStack_40 = 0x1086d1e04;
    ppuStack_38 = &PTR_FUN_110a641b8;
    func_0x0001086db078();
    func_0x0001086d9ed4();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086da99c();
    puStack_30 = unaff_x22;
    func_0x0001086da990();
    func_0x0001086d9c38();
    func_0x0001086da258();
    if (lVar7 == 0) {
      func_0x0001086d9eac();
      lStack_40 = lVar8;
      ppuStack_38 = ppuVar9;
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da95c();
      func_0x0001086da590();
    }
    FUN_1086b2434(&lStack_660);
  }
  ppppuVar2 = &pppuStack_220;
  func_0x000107c288c8(ppppuVar2);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_8);
      if ((bool)in_ZR) {
        return ppppuVar2;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x0001086da590();
      FUN_1086b2434(&lStack_660);
      ppppuVar2 = &pppuStack_220;
      func_0x000107c288c8();
      in_ZR = (int)unaff_x22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da750();
      ppppuVar2 = param_1;
      FUN_1086b2358(param_1);
      ___cxa_end_catch();
    }
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    func_0x0001086da510();
    func_0x0001086d98d0();
    uStack_218 = 0;
    uStack_208 = 0;
    pcStack_210 = "fetchConversation";
    pppuStack_220 = ppppuVar2;
    func_0x0001086d9b3c();
    unaff_x30 = &pppuStack_220;
    func_0x0001086da324(&lStack_40);
    func_0x0001086da31c(&pppuStack_220);
    func_0x000107c316c4();
    pcStack_628 = pcStack_210;
    lStack_660 = CONCAT44(lStack_660._4_4_,0x10);
    ppuStack_658 = (undefined **)0x0;
    ppuStack_648 = ppuStack_38;
    lStack_650 = lStack_40;
    puStack_640 = puStack_30;
    lStack_40 = 0;
    ppuStack_38 = (undefined **)0x0;
    puStack_30 = (undefined8 **)0x0;
    uStack_630 = uStack_218;
    pppuStack_638 = pppuStack_220;
    pppuStack_220 = (undefined8 ***)0x0;
    uStack_218 = 0;
    pcStack_210 = (char *)0x0;
    uStack_618 = 0;
    pppuStack_620 = ppppuVar2;
    func_0x0001086da358();
    func_0x0001086db0d4();
    ppppuVar2 = &pppuStack_220;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar2);
    func_0x0001086db060();
    ppppuVar3 = (undefined8 ****)*param_3;
    param_2 = param_3[1];
    func_0x0001086da504();
    FUN_1086b2358();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  pcVar5 = FUN_1086b2358;
  func_0x0001086db620();
  puStack_5d0 = &stack0x00000050;
  pcStack_5c8 = pcVar5;
  func_0x0001086d9810();
  if (((extraout_x8_03 & 1) == 0) && (ppppuVar3 != (undefined8 ****)0x0)) {
    func_0x0001086d9c18();
    uVar4 = SUB84(unaff_x30,0);
    if (param_2 != 0) {
      do {
        func_0x000107c325f8();
        uVar4 = SUB84(unaff_x30,0);
      } while (extraout_w10_02 != 0);
    }
    lStack_650 = CONCAT44(lStack_650._4_4_,uVar4);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1dc0);
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (undefined8 **)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
  }
  else {
    func_0x000100864c10();
    if ((bool)in_ZR) {
      return ppppuVar2;
    }
    ___stack_chk_fail();
    func_0x0001086d9af0();
  }
  func_0x00010054ffe4();
  if (plVar1 != (long *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1086b2358; end: 1086b2433;  */

/* WARNING: Possible PIC construction at 0x0001086b23f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086b242c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086b2430) */

void FUN_1086b2358(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x22;
  undefined4 in_stack_00000010;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    in_stack_00000010 = param_4;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1dc0);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
  }
  else {
    func_0x000100864c10();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9af0();
  }
  func_0x00010054ffe4();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1086b2434; end: 1086b2457;  */

long FUN_1086b2434(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006ba274();
  func_0x0001006b74f4();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086b2458; end: 1086b279f;  */

void FUN_1086b2458(undefined8 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long unaff_x19;
  long lVar5;
  long unaff_x23;
  long lVar6;
  undefined **in_register_00005008;
  undefined8 auStack_4a0 [6];
  undefined1 auStack_470 [32];
  long lStack_450;
  long lStack_448;
  undefined8 uStack_430;
  undefined **ppuStack_428;
  undefined8 *puStack_420;
  long lStack_400;
  undefined8 uStack_8;
  
  func_0x0001086dbf74();
  puVar3 = auStack_4a0;
  func_0x0001006b4438();
  uStack_8 = extraout_x8;
  FUN_1086b27a0(&lStack_450);
  uVar2 = lStack_450 == lStack_448;
  if ((bool)uVar2) {
    func_0x0001086daec0();
    FUN_1086b2c68();
  }
  else {
    func_0x0001086dac38();
    uVar4 = (extraout_x9 - extraout_x8_00) / 0x1d0;
    func_0x0001006b7184(0xd981);
    if (extraout_x8_01 <= uVar4) goto LAB_1086b260c;
    func_0x0001006b7194(auStack_4a0);
    func_0x0001006b7410(auStack_470,auStack_4a0);
    func_0x0001006b74b0();
    for (lVar5 = lStack_450; uVar2 = lVar5 == lStack_448, !(bool)uVar2; lVar5 = lVar5 + 0x1d0) {
      func_0x0001006b46a8(&uStack_430,*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x210),lVar5);
      func_0x0001006b70b8(auStack_470,&uStack_430);
      puVar3 = &uStack_430;
      func_0x0001006b74f4();
    }
    func_0x0001006b9e48();
    auStack_4a0[0] = param_1;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x0001086d9b74();
    func_0x000107c28150();
    func_0x0001006b9e5c();
    func_0x0001006b9e68();
    lVar6 = *(long *)(unaff_x23 + 0x70);
    uStack_430 = 0x1086d1e70;
    ppuStack_428 = &PTR_FUN_110a641e8;
    func_0x000107c3268c();
    func_0x0001086d9e2c();
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107c325ec();
      } while (extraout_w11 != 0);
    }
    func_0x0001086d9b58();
    puStack_420 = puVar3;
    lStack_400 = lVar5;
    func_0x000107c28154(unaff_x23 + 0x48,&uStack_430);
    func_0x0001086d9acc(ppuStack_428);
    func_0x0001006b9eb8();
    if (lVar6 == 0) {
      func_0x0001006b9ec0();
      uStack_430 = param_1;
      ppuStack_428 = in_register_00005008;
      if (extraout_x8_03 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c3265c();
      func_0x000107c327f4();
      func_0x0001086db264();
    }
    FUN_1086b2d44(auStack_4a0);
    func_0x0001006ba2a4(auStack_470);
  }
  func_0x0001086aaf34(&lStack_450);
  func_0x0001006ba334(uStack_8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_1086b260c:
  FUN_1086caca4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1086b2614);
  (*pcVar1)();
}



/* Entry: 1086b27a0; end: 1086b2c67;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001086b29e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1086b27a0(undefined8 param_1,undefined8 *param_2,long param_3,long ****param_4,
                  ulong param_5)

{
  ulong *puVar1;
  long ***ppplVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  long ***extraout_x8;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long ***ppplVar16;
  long ****pppplVar17;
  ulong *puVar18;
  long *plVar19;
  long *plVar20;
  long lStack_620;
  long ***ppplStack_618;
  long ***ppplStack_610;
  long lStack_608;
  undefined4 uStack_600;
  long alStack_5f8 [59];
  byte bStack_420;
  long alStack_418 [59];
  byte bStack_240;
  undefined1 auStack_238 [488];
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined4 auStack_30 [4];
  long ***ppplStack_20;
  long ***ppplStack_18;
  undefined8 uStack_10;
  
  func_0x000107c32728();
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plStack_48 = (long *)0x0;
  lStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  auStack_30[0] = 0x3f800000;
  func_0x0001086da2a0(param_4[1]);
  func_0x0001086af4f8(&lStack_50);
  ppplVar2 = param_4[1];
  for (ppplVar16 = *param_4; ppplVar16 != ppplVar2; ppplVar16 = ppplVar16 + 3) {
    func_0x000107c29ee4(auStack_238,ppplVar16);
    FUN_1086a9d60(&lStack_50,auStack_238);
    func_0x000107c2a2e0(auStack_238);
  }
  func_0x0001006b4588(auStack_238,*(undefined8 *)(*(long *)(param_3 + 0xd0) + 0x20));
  func_0x000107c2905c(alStack_418,auStack_238);
  func_0x000107c327e8(alStack_5f8);
  do {
    if ((((bStack_240 & 1) == 0) && ((bStack_420 & 1) == 0)) || (alStack_418[0] == alStack_5f8[0]))
    {
      func_0x0001006b9e40(alStack_5f8);
      func_0x0001006b9e40(alStack_418);
      func_0x000107c29150(auStack_238);
      FUN_1086af46c(&lStack_50);
      return;
    }
    plVar7 = alStack_418;
    func_0x000107c29060();
    if (((param_5 >> 0x20 == 0) ||
        (*(uint *)(plVar7 + 0x21) ==
         (uint)((param_5 & 0xffffffff00000000) != 0 && (int)param_5 == 1))) &&
       (((long)param_4[1] - (long)*param_4) / 0x18 == (long)(int)plVar7[7])) {
      ppplStack_618 = (long ***)0x0;
      lStack_620 = 0;
      lStack_608 = 0;
      ppplStack_610 = (long ***)0x0;
      uStack_600 = 0x3f800000;
      FUN_1086d3c10(&lStack_620,(long)(float)(ulong)(long)(int)plVar7[7]);
      uVar11 = plVar7[6];
      puVar18 = (ulong *)(plVar7 + 6);
      if ((uVar11 & 1) != 0) {
        puVar18 = (ulong *)(uVar11 + 7);
      }
      puVar1 = puVar18 + (int)plVar7[7];
      pppplVar15 = param_4;
      while( true ) {
        uVar5 = (long)puVar18 - (long)puVar1 < 0;
        bVar6 = puVar18 == puVar1;
        pppplVar17 = (long ****)ppplStack_610;
        plVar12 = plStack_48;
        if (bVar6) break;
        func_0x0001086db1a0(*puVar18);
        ppplVar16 = (long ***)&PTR_PTR_11326cb58;
        if (!bVar6) {
          ppplVar16 = extraout_x8;
        }
        pppplVar13 = &ppplStack_20;
        ppplStack_20 = ppplVar16;
        func_0x000107c278cc(pppplVar13,8);
        pppplVar17 = (long ****)ppplStack_618;
        if ((long ****)ppplStack_618 != (long ****)0x0) {
          uVar11 = (long)ppplStack_618 - 1;
          if (((ulong)ppplStack_618 & uVar11) == 0) {
            pppplVar15 = (long ****)(uVar11 & (ulong)pppplVar13);
            uVar5 = false;
          }
          else {
            uVar5 = (long)pppplVar13 - (long)ppplStack_618 < 0;
            pppplVar15 = pppplVar13;
            if (ppplStack_618 <= pppplVar13) {
              uVar3 = 0;
              if ((long ****)ppplStack_618 != (long ****)0x0) {
                uVar3 = (ulong)pppplVar13 / (ulong)ppplStack_618;
              }
              pppplVar15 = (long ****)((long)pppplVar13 - uVar3 * (long)ppplStack_618);
            }
          }
          plVar12 = *(long **)(lStack_620 + (long)pppplVar15 * 8);
          if (plVar12 != (long *)0x0) {
            do {
              while( true ) {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto LAB_1086b29bc;
                pppplVar14 = (long ****)plVar12[1];
                if (pppplVar14 != pppplVar13) break;
                uVar5 = plVar12[2] - (long)ppplVar16 < 0;
                if ((long ***)plVar12[2] == ppplVar16) goto LAB_1086b2abc;
              }
              if (((ulong)ppplStack_618 & uVar11) == 0) {
                pppplVar14 = (long ****)((ulong)pppplVar14 & uVar11);
              }
              else if (ppplStack_618 <= pppplVar14) {
                uVar3 = 0;
                if ((long ****)ppplStack_618 != (long ****)0x0) {
                  uVar3 = (ulong)pppplVar14 / (ulong)ppplStack_618;
                }
                pppplVar14 = (long ****)((long)pppplVar14 - uVar3 * (long)ppplStack_618);
              }
              uVar5 = (long)pppplVar14 - (long)pppplVar15 < 0;
            } while (pppplVar14 == pppplVar15);
          }
        }
LAB_1086b29bc:
        pppplVar14 = pppplVar13;
        func_0x0001086da44c();
        uStack_10 = 1;
        ppplStack_20 = (long ***)pppplVar14;
        ppplStack_18 = (long ***)&ppplStack_610;
        *pppplVar14 = (long ***)0x0;
        pppplVar14[1] = (long ***)pppplVar13;
        pppplVar14[2] = ppplVar16;
        func_0x0001086dbec8(lStack_608);
        if ((pppplVar17 == (long ****)0x0) ||
           (func_0x0001086dbc80(param_1,uStack_600,(float)pppplVar17), (bool)uVar5)) {
          func_0x0001086d9f3c((long)pppplVar17 << 1);
          FUN_1086d3c10(&lStack_620);
          pppplVar17 = (long ****)ppplStack_618;
          if (((ulong)ppplStack_618 & (long)ppplStack_618 - 1U) == 0) {
            pppplVar15 = (long ****)((long)ppplStack_618 - 1U & (ulong)pppplVar13);
          }
          else {
            pppplVar15 = pppplVar13;
            if (ppplStack_618 <= pppplVar13) {
              uVar11 = 0;
              if ((long ****)ppplStack_618 != (long ****)0x0) {
                uVar11 = (ulong)pppplVar13 / (ulong)ppplStack_618;
              }
              pppplVar15 = (long ****)((long)pppplVar13 - uVar11 * (long)ppplStack_618);
            }
          }
        }
        lVar4 = lStack_620;
        plVar12 = *(long **)(lStack_620 + (long)pppplVar15 * 8);
        if (plVar12 == (long *)0x0) {
          *pppplVar14 = ppplStack_610;
          *(long *****)(lVar4 + (long)pppplVar15 * 8) = &ppplStack_610;
          ppplStack_610 = (long ***)pppplVar14;
          if (*pppplVar14 != (long ***)0x0) {
            pppplVar13 = (long ****)(*pppplVar14)[1];
            if (((ulong)pppplVar17 & (long)pppplVar17 - 1U) == 0) {
              pppplVar13 = (long ****)((ulong)pppplVar13 & (long)pppplVar17 - 1U);
            }
            else if (pppplVar17 <= pppplVar13) {
              uVar11 = 0;
              if (pppplVar17 != (long ****)0x0) {
                uVar11 = (ulong)pppplVar13 / (ulong)pppplVar17;
              }
              pppplVar13 = (long ****)((long)pppplVar13 - uVar11 * (long)pppplVar17);
            }
            *(long *****)(lVar4 + (long)pppplVar13 * 8) = pppplVar14;
          }
        }
        else {
          *pppplVar14 = (long ***)*plVar12;
          *plVar12 = (long)pppplVar14;
        }
        ppplStack_20 = (long ***)0x0;
        lStack_608 = lStack_608 + 1;
        FUN_1086d3d74(&ppplStack_20);
LAB_1086b2abc:
        puVar18 = puVar18 + 1;
      }
      for (; plStack_48 = plVar12, pppplVar17 != (long ****)0x0; pppplVar17 = (long ****)*pppplVar17
          ) {
        if ((plVar12 == (long *)0x0) || (lStack_38 == 0)) goto LAB_1086b2b98;
        ppplVar16 = pppplVar17[2];
        plVar8 = &lStack_38;
        FUN_1086a9f1c(plVar8,ppplVar16);
        uVar11 = (long)plVar12 - 1;
        if (((ulong)plVar12 & uVar11) == 0) {
          plVar19 = (long *)((ulong)plVar8 & uVar11);
        }
        else {
          plVar19 = plVar8;
          if (plVar12 <= plVar8) {
            uVar3 = 0;
            if (plVar12 != (long *)0x0) {
              uVar3 = (ulong)plVar8 / (ulong)plVar12;
            }
            plVar19 = (long *)((long)plVar8 - uVar3 * (long)plVar12);
          }
        }
        plVar20 = *(long **)(lStack_50 + (long)plVar19 * 8);
        if (plVar20 == (long *)0x0) goto LAB_1086b2b98;
        do {
          while( true ) {
            plVar20 = (long *)*plVar20;
            if (plVar20 == (long *)0x0) goto LAB_1086b2b98;
            plVar10 = (long *)plVar20[1];
            if (plVar10 == plVar8) break;
            if (((ulong)plVar12 & uVar11) == 0) {
              plVar10 = (long *)((ulong)plVar10 & uVar11);
            }
            else if (plVar12 <= plVar10) {
              uVar3 = 0;
              if (plVar12 != (long *)0x0) {
                uVar3 = (ulong)plVar10 / (ulong)plVar12;
              }
              plVar10 = (long *)((long)plVar10 - uVar3 * (long)plVar12);
            }
            if (plVar10 != plVar19) goto LAB_1086b2b98;
          }
          puVar9 = auStack_30;
          FUN_1086a9f40(puVar9,plVar20 + 2,ppplVar16);
        } while ((int)puVar9 == 0);
        plVar12 = plStack_48;
      }
      FUN_1086a5594(param_2,plVar7);
LAB_1086b2b98:
      FUN_1086d3bd0(&lStack_620);
    }
    func_0x000107c29158(alStack_418);
  } while( true );
}



/* Entry: 1086b2c68; end: 1086b2d43;  */

/* WARNING: Possible PIC construction at 0x0001086b2d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086b2d3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086b2d40) */

void FUN_1086b2c68(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x22;
  undefined4 in_stack_00000010;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    in_stack_00000010 = param_4;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1e2c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
  }
  else {
    func_0x000100864c10();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9af0();
  }
  func_0x00010054ffe4();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1086b2d44; end: 1086b2d67;  */

long FUN_1086b2d44(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006ba274();
  func_0x0001006ba2a4();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086b2d68; end: 1086b2fb7;  */

void FUN_1086b2d68(undefined8 param_1,int param_2,undefined *param_3,undefined8 param_4,
                  long *param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined4 *unaff_x22;
  long unaff_x24;
  long lVar6;
  undefined **in_register_00005008;
  undefined8 in_stack_00000050;
  undefined1 auStack_15a0 [1496];
  undefined1 auStack_fc8 [464];
  byte bStack_df8;
  undefined4 *puStack_df0;
  undefined *puStack_de8;
  undefined1 auStack_dc0 [16];
  undefined4 auStack_db0 [32];
  undefined8 *puStack_d30;
  code *pcStack_d28;
  undefined1 auStack_7d0 [1496];
  char cStack_1f8;
  long alStack_1f0 [53];
  byte bStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  undefined4 *puStack_30;
  undefined *puStack_10;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  plVar4 = param_5;
  func_0x0001086d9934();
  uStack_8 = extraout_x8;
  func_0x0001006b444c();
  FUN_108862cf0(auStack_dc0);
  func_0x0001086db0fc(alStack_1f0);
  func_0x0001086da6a4();
  if ((bStack_48 & 1) != 0) {
    func_0x0001086dafb4(alStack_1f0);
    in_ZR = param_2 == 4;
    if (!(bool)in_ZR) {
      plVar4 = alStack_1f0;
      puVar3 = param_3;
      FUN_1086b3094(auStack_7d0);
      in_ZR = cStack_1f8 == '\x01';
      if ((bool)in_ZR) {
        func_0x0001086d9f1c();
        if (extraout_x8_00 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10 != 0);
        }
        unaff_x22 = auStack_db0;
        puVar2 = auStack_7d0;
        func_0x000107c27a88();
        func_0x000107c28150();
        func_0x0001086dac8c();
        func_0x0001086da518();
        lVar6 = *(long *)(unaff_x24 + 0x70);
        uStack_40 = 0x1086d1edc;
        ppuStack_38 = &PTR_FUN_110a64218;
        func_0x0001086db748();
        func_0x0001086d9ed4();
        if (extraout_x8_01 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_00 != 0);
        }
        func_0x0001086db834();
        puStack_30 = unaff_x22;
        puStack_10 = param_3;
        func_0x0001086da990();
        func_0x0001086d9c38();
        func_0x0001086da258();
        if (lVar6 == 0) {
          func_0x0001086d9eac();
          uStack_40 = param_1;
          ppuStack_38 = in_register_00005008;
          if (extraout_x8_02 != 0) {
            do {
              func_0x000107c325f8();
            } while (extraout_w10_01 != 0);
          }
          func_0x000107c3265c();
          func_0x0001086da95c();
          func_0x0001086da590();
        }
        FUN_1086b312c(auStack_dc0);
      }
      else {
        puVar2 = (undefined1 *)*param_5;
        puVar3 = (undefined *)param_5[1];
        func_0x0001086da1f4();
        FUN_1086b2fb8();
      }
      func_0x0001086dafac();
      goto LAB_1086b2ebc;
    }
  }
  puVar2 = (undefined1 *)*param_5;
  puVar3 = (undefined *)param_5[1];
  func_0x0001086da1f4();
  FUN_1086b2fb8();
LAB_1086b2ebc:
  func_0x0001086daf94();
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x0001086da590();
      puVar1 = auStack_dc0;
      FUN_1086b312c();
      func_0x0001086dafac();
      func_0x0001086daf94();
      in_ZR = (int)unaff_x22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      FUN_1086b2fb8();
      ___cxa_end_catch();
    }
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    puVar3 = &UNK_10f4b0e44;
    func_0x0001086da04c();
    FUN_1086b314c();
    ___cxa_end_catch();
    puVar2 = puVar1;
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  pcVar5 = FUN_1086b2fb8;
  func_0x0001086db620();
  puStack_d30 = &stack0x00000050;
  pcStack_d28 = pcVar5;
  func_0x0001086d9810();
  if (((extraout_x8_03 & 1) == 0) && (puVar2 != (undefined1 *)0x0)) {
    func_0x0001086d9c18();
    if (puVar3 != (undefined *)0x0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    auStack_db0[0] = SUB84(plVar4,0);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1e98);
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (undefined4 *)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x000108621230(auStack_dc0);
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x000108621230(auStack_dc0);
    func_0x0001086d9ff8();
    puStack_df0 = unaff_x22;
    puStack_de8 = param_3;
    func_0x0001086da550();
    FUN_1086b1f68(auStack_fc8,*(undefined8 *)(*(long *)(puVar2 + 0xd0) + 0x20));
    if ((bStack_df8 & 1) == 0) {
      *(undefined1 *)param_5 = 0;
      *(undefined1 *)(param_5 + 0xbb) = 0;
    }
    else {
      FUN_1086a1380(auStack_15a0,*(undefined8 *)(*(long *)(param_3 + 0xd0) + 0x20),
                    *(long *)(param_3 + 0xd0) + 0x170,auStack_fc8,plVar4);
      func_0x000107c32738();
      func_0x000107c27a88();
      *(undefined1 *)(param_5 + 0xbb) = 1;
      func_0x000107c27a10(auStack_15a0);
    }
    func_0x000107c288c8(auStack_fc8);
    return;
  }
  return;
}



/* Entry: 1086b2fb8; end: 1086b3093;  */

void FUN_1086b2fb8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_7e0 [1496];
  undefined1 auStack_208 [464];
  byte bStack_38;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1e98);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x000108621230();
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x000108621230();
    func_0x0001086d9ff8();
    func_0x0001086da550();
    FUN_1086b1f68(auStack_208,*(undefined8 *)(*(long *)(param_2 + 0xd0) + 0x20));
    if ((bStack_38 & 1) == 0) {
      *unaff_x19 = 0;
      unaff_x19[0x5d8] = 0;
    }
    else {
      FUN_1086a1380(auStack_7e0,*(undefined8 *)(*(long *)(unaff_x21 + 0xd0) + 0x20),
                    *(long *)(unaff_x21 + 0xd0) + 0x170,auStack_208,param_4);
      func_0x000107c32738();
      func_0x000107c27a88();
      unaff_x19[0x5d8] = 1;
      func_0x000107c27a10(auStack_7e0);
    }
    func_0x000107c288c8(auStack_208);
    return;
  }
  return;
}



/* Entry: 1086b3094; end: 1086b312b;  */

void FUN_1086b3094(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *unaff_x19;
  long unaff_x21;
  undefined1 auStack_7e0 [1496];
  undefined1 auStack_208 [464];
  byte bStack_38;
  
  func_0x0001086da550();
  FUN_1086b1f68(auStack_208,*(undefined8 *)(*(long *)(param_2 + 0xd0) + 0x20));
  if ((bStack_38 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x5d8] = 0;
  }
  else {
    FUN_1086a1380(auStack_7e0,*(undefined8 *)(*(long *)(unaff_x21 + 0xd0) + 0x20),
                  *(long *)(unaff_x21 + 0xd0) + 0x170,auStack_208,param_4);
    func_0x000107c32738();
    func_0x000107c27a88();
    unaff_x19[0x5d8] = 1;
    func_0x000107c27a10(auStack_7e0);
  }
  func_0x000107c288c8(auStack_208);
  return;
}



/* Entry: 1086b312c; end: 1086b314b;  */

long FUN_1086b312c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006ba274();
  func_0x000107c27a10();
  lVar1 = unaff_x19;
  func_0x0001006248cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086b314c; end: 1086b31bf;  */

void FUN_1086b314c(void)

{
  func_0x0001086dbf94();
  func_0x0001086d9bbc();
  func_0x0001086d9bd0();
  func_0x0001086d9b3c();
  func_0x0001086d9dd4();
  func_0x0001086d9f78();
  func_0x000107c316c4();
  func_0x0001086d9860();
  func_0x0001086da160();
  func_0x0001086da5bc();
  func_0x000107c32690();
  func_0x000107c326ac();
  func_0x0001086da504();
  FUN_1086b2fb8();
  return;
}



/* Entry: 1086b31c0; end: 1086b373b;  */

void FUN_1086b31c0(code **param_1,undefined8 param_2,undefined8 param_3,code **param_4,long *param_5
                  )

{
  ulong uVar1;
  code **ppcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  code ***pppcVar7;
  long *plVar8;
  code ***pppcVar9;
  code ***pppcVar10;
  code *pcVar11;
  uint uVar12;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  long *unaff_x19;
  code **ppcVar13;
  int iVar14;
  long unaff_x24;
  long lVar15;
  undefined **in_register_00005008;
  undefined **ppuVar16;
  undefined8 in_stack_00000050;
  undefined1 auStack_f60 [1496];
  char cStack_988;
  undefined1 auStack_980 [424];
  byte bStack_7d8;
  code **appcStack_7d0 [5];
  byte bStack_7a4;
  char cStack_7a0;
  undefined1 auStack_798 [16];
  long lStack_788;
  code **ppcStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  code **ppcStack_750;
  undefined **ppuStack_748;
  code **ppcStack_740;
  undefined **ppuStack_738;
  code **ppcStack_730;
  code *pcStack_728;
  undefined8 uStack_720;
  uint uStack_718;
  undefined4 uStack_714;
  undefined8 uStack_710;
  undefined8 uStack_708;
  code *pcStack_6f0;
  undefined8 *puStack_6e8;
  code **ppcStack_6e0;
  undefined **ppuStack_6d8;
  code **ppcStack_6c8;
  code **ppcStack_6c0;
  code **ppcStack_6b0;
  undefined **ppuStack_6a8;
  code **ppcStack_6a0;
  undefined1 auStack_690 [16];
  undefined8 uStack_680;
  code **ppcStack_670;
  undefined **ppuStack_668;
  code *apcStack_660 [31];
  int iStack_568;
  byte bStack_4a0;
  undefined8 auStack_88 [2];
  undefined8 *puStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  code **ppcStack_60;
  undefined **ppuStack_58;
  code **ppcStack_50;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined **ppuStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  func_0x0001006b4438();
  uStack_8 = extraout_x8;
  FUN_1086cacd0(&ppcStack_670);
  FUN_1086cacf4(&ppcStack_6b0,&ppcStack_670,1);
  pppcVar10 = &ppcStack_6b0;
  func_0x0001086db7c0(&ppcStack_6c8);
  FUN_108620fd8(&ppcStack_6b0);
  func_0x000107c27914(&ppcStack_670);
  uVar5 = ppcStack_6c8 == ppcStack_6c0;
  if ((bool)uVar5) {
    if (((ulong)param_4 & 1) == 0) {
      pppcVar9 = (code ***)*param_5;
      pppcVar10 = (code ***)param_5[1];
      func_0x0001086daec0();
      FUN_1086b2fb8();
    }
    else {
      func_0x0001006b457c();
      func_0x0001086da598(&ppcStack_670);
      uVar5 = iStack_568 == 1;
      uVar12 = 0;
      if ((bool)uVar5) {
        uVar12 = (uint)bStack_4a0;
      }
      FUN_1086d1d40(&ppcStack_6e0,unaff_x19[2],unaff_x19[3]);
      ppuStack_6a8 = ppuStack_6d8;
      ppcStack_6b0 = ppcStack_6e0;
      ppcVar13 = ppcStack_6e0;
      if (ppuStack_6d8 != (undefined **)0x0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_02 != 0);
      }
      func_0x0001086da81c();
      ppcStack_6a0 = ppcVar13;
      if (extraout_x8_03 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_03 != 0);
      }
      FUN_1086cacd0(auStack_690,param_3);
      FUN_1086b3958(&ppcStack_730,&ppcStack_6b0);
      ppuStack_748 = ppuStack_6d8;
      ppcStack_750 = ppcStack_6e0;
      ppcVar13 = ppcStack_6e0;
      ppuVar16 = ppuStack_6d8;
      if (ppuStack_6d8 != (undefined **)0x0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      func_0x0001086da81c();
      ppcStack_740 = ppcVar13;
      ppuStack_738 = ppuVar16;
      if (extraout_x8_04 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_05 != 0);
      }
      puVar6 = auStack_88;
      FUN_1086d1f2c(puVar6,1);
      puVar4 = puStack_78;
      puStack_78[2] = 0;
      *puStack_78 = &PTR_FUN_110a64258;
      puStack_78[1] = 0;
      pcStack_40 = FUN_1086d1f90;
      ppuStack_38 = &PTR_FUN_110a642c8;
      func_0x000107c326e0();
      uVar3 = CONCAT44(uStack_714,uStack_718);
      puVar6[1] = pcStack_728;
      *puVar6 = ppcStack_730;
      ppcStack_730 = (code **)0x0;
      pcStack_728 = (code *)0x0;
      puVar6[3] = uVar3;
      puVar6[2] = uStack_720;
      if (CONCAT44(uStack_714,uStack_718) != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_06 != 0);
      }
      func_0x0001086db708(&ppcStack_730);
      ppuStack_58 = ppuStack_748;
      ppcStack_60 = ppcStack_750;
      param_4 = &pcStack_70;
      pcStack_70 = FUN_1086d2430;
      ppuStack_68 = &PTR_DAT_110a642e8;
      ppcStack_750 = (code **)0x0;
      ppuStack_748 = (undefined **)0x0;
      ppuStack_48 = ppuStack_738;
      ppcStack_50 = ppcStack_740;
      puStack_30 = puVar6;
      if (ppuStack_738 != (undefined **)0x0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_07 != 0);
      }
      FUN_1086d24e0(puVar4 + 3,&pcStack_40,&pcStack_70);
      func_0x0001086d9ec8(ppuStack_68);
      func_0x0001086d9be4(ppuStack_38);
      puStack_6e8 = puStack_78;
      puStack_78 = (undefined8 *)0x0;
      pcStack_6f0 = (code *)(puStack_6e8 + 3);
      func_0x0001086d25d0(auStack_88);
      func_0x0001086b39c0(&ppcStack_750);
      func_0x0001086b39e0(&ppcStack_730);
      func_0x0001086da478(&ppcStack_770);
      pcStack_728 = (code *)uStack_768;
      ppcStack_730 = ppcStack_770;
      uStack_720 = uStack_760;
      func_0x0001086dac08();
      uStack_710 = 0;
      uStack_708 = 0;
      uStack_718 = uVar12;
      func_0x0001086da03c();
      ppuStack_38 = (undefined **)puStack_6e8;
      pcStack_40 = pcStack_6f0;
      if (puStack_6e8 != (undefined8 *)0x0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_08 != 0);
      }
      pppcVar9 = &ppcStack_730;
      pppcVar10 = (code ***)0x1;
      (**(code **)(*unaff_x19 + 0x168))();
      func_0x0001086db068();
      func_0x000107c27914(&ppcStack_730);
      FUN_1086d25e0(&pcStack_6f0);
      func_0x0001086b39e0(&ppcStack_6b0);
      func_0x000107c29120(&ppcStack_6e0);
      func_0x0001086db29c();
    }
  }
  else {
    func_0x0001086dbdb4();
    func_0x0001086da81c();
    ppcStack_670 = param_1;
    ppuStack_668 = in_register_00005008;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    param_4 = apcStack_660;
    func_0x000107c27a88();
    func_0x000107c28150();
    func_0x0001086dac8c();
    func_0x0001086da518();
    lVar15 = *(long *)(unaff_x24 + 0x70);
    ppcStack_6b0 = (code **)0x1086d1f04;
    ppuStack_6a8 = &PTR_FUN_110a64230;
    func_0x0001086db748();
    ppcVar13 = ppcStack_670;
    param_4[1] = (code *)ppuStack_668;
    *param_4 = (code *)ppcVar13;
    ppuVar16 = ppuStack_668;
    if (ppuStack_668 != (undefined **)0x0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086db834();
    pppcVar9 = &ppcStack_6b0;
    ppcStack_6a0 = param_4;
    uStack_680 = param_3;
    func_0x000107c28154(unaff_x24 + 0x48,pppcVar9);
    func_0x0001086d9c64(ppuStack_6a8);
    func_0x0001086da258();
    if (lVar15 == 0) {
      func_0x0001086d9eac();
      ppcStack_6b0 = ppcVar13;
      ppuStack_6a8 = ppuVar16;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      pppcVar9 = &ppcStack_6b0;
      (*extraout_x8_02)();
      func_0x000107c27e74(&ppcStack_6b0);
    }
    FUN_1086b3938(&ppcStack_670);
  }
  func_0x0001086cae20(&ppcStack_6c8);
  while( true ) {
    while( true ) {
      while( true ) {
        func_0x0001006ba334(uStack_8);
        if ((bool)uVar5) {
          return;
        }
        ___stack_chk_fail();
        func_0x0001086d9fec();
        func_0x0001086db068();
        func_0x000107c27914(&ppcStack_730);
        FUN_1086d25e0(&pcStack_6f0);
        func_0x0001086b39e0(&ppcStack_6b0);
        func_0x000107c29120(&ppcStack_6e0);
        func_0x0001086db29c();
        pppcVar7 = &ppcStack_6c8;
        func_0x0001086cae20();
        iVar14 = (int)param_4;
        uVar5 = iVar14 == 3;
        if (!(bool)uVar5) break;
        func_0x0001086da000();
        func_0x000108848514();
        func_0x0001086da750();
        FUN_1086b2fb8();
        ___cxa_end_catch();
      }
      uVar5 = iVar14 == 2;
      if (!(bool)uVar5) break;
      func_0x0001086da000();
      pppcVar10 = (code ***)&UNK_10f4b0e51;
      FUN_1086b314c();
      ___cxa_end_catch();
      pppcVar9 = pppcVar7;
    }
    uVar5 = iVar14 == 1;
    if (!(bool)uVar5) break;
    func_0x0001086da000();
    pppcVar9 = (code ***)*param_5;
    pppcVar10 = (code ***)param_5[1];
    func_0x0001086da504();
    FUN_1086b2fb8();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  pcVar11 = FUN_1086b373c;
  func_0x0001086dbf74();
  ppcStack_730 = (code **)&stack0x00000050;
  pcStack_728 = pcVar11;
  func_0x000107c32648();
  FUN_1086b3d70();
  ppcVar2 = pppcVar10[1];
  for (ppcVar13 = *pppcVar10; iVar14 = (int)pppcVar7, ppcVar13 != ppcVar2; ppcVar13 = ppcVar13 + 4)
  {
    func_0x0001086da100();
    func_0x0001086db810(auStack_f60);
    func_0x0001086db92c(appcStack_7d0);
    func_0x0001086daa28();
    if ((cStack_7a0 == '\x01') && ((bStack_7a4 & 1) == 0)) {
      func_0x0001086da100();
      FUN_108862de8(auStack_f60);
      func_0x0001086db0fc(auStack_980);
      func_0x0001086da6a4();
      if (((bStack_7d8 & 1) != 0) && (func_0x0001086db6d4(), iVar14 != 4)) {
        FUN_1086b3094(auStack_f60,pppcVar9,appcStack_7d0,auStack_980);
        if (cStack_988 == '\x01') {
          uVar1 = unaff_x19[1];
          if (uVar1 < (ulong)unaff_x19[2]) {
            FUN_1086cb140(uVar1,auStack_f60,ppcVar13);
            lVar15 = uVar1 + 0x5f8;
          }
          else {
            plVar8 = unaff_x19;
            FUN_1086cb1a8();
            FUN_1086caf30(auStack_798,plVar8,(unaff_x19[1] - *unaff_x19) / 0x5f8,unaff_x19 + 2);
            FUN_1086cb140(lStack_788,auStack_f60,ppcVar13);
            lStack_788 = lStack_788 + 0x5f8;
            FUN_1086caee0();
            lVar15 = unaff_x19[1];
            func_0x0001086cb0dc(auStack_798);
          }
          unaff_x19[1] = lVar15;
        }
        func_0x0001086cacb0(auStack_f60);
      }
      func_0x000107c288dc(auStack_980);
    }
    pppcVar7 = appcStack_7d0;
    FUN_1086569a0();
  }
  return;
}



/* Entry: 1086b373c; end: 1086b3937;  */

void FUN_1086b373c(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *unaff_x19;
  long lVar5;
  long lVar6;
  undefined1 auStack_7f0 [1496];
  char cStack_218;
  undefined1 auStack_210 [424];
  byte bStack_68;
  undefined1 auStack_60 [44];
  byte bStack_34;
  char cStack_30;
  undefined1 auStack_28 [16];
  long lStack_18;
  
  func_0x0001086dbf74();
  func_0x000107c32648();
  FUN_1086b3d70();
  lVar2 = param_3[1];
  for (lVar5 = *param_3; iVar3 = (int)param_1, lVar5 != lVar2; lVar5 = lVar5 + 0x20) {
    func_0x0001086da100();
    func_0x0001086db810(auStack_7f0);
    func_0x0001086db92c(auStack_60);
    func_0x0001086daa28();
    if ((cStack_30 == '\x01') && ((bStack_34 & 1) == 0)) {
      func_0x0001086da100();
      FUN_108862de8(auStack_7f0);
      func_0x0001086db0fc(auStack_210);
      func_0x0001086da6a4();
      if (((bStack_68 & 1) != 0) && (func_0x0001086db6d4(), iVar3 != 4)) {
        FUN_1086b3094(auStack_7f0,param_2,auStack_60,auStack_210);
        if (cStack_218 == '\x01') {
          uVar1 = unaff_x19[1];
          if (uVar1 < (ulong)unaff_x19[2]) {
            FUN_1086cb140(uVar1,auStack_7f0,lVar5);
            lVar6 = uVar1 + 0x5f8;
          }
          else {
            plVar4 = unaff_x19;
            FUN_1086cb1a8();
            FUN_1086caf30(auStack_28,plVar4,(unaff_x19[1] - *unaff_x19) / 0x5f8,unaff_x19 + 2);
            FUN_1086cb140(lStack_18,auStack_7f0,lVar5);
            lStack_18 = lStack_18 + 0x5f8;
            FUN_1086caee0();
            lVar6 = unaff_x19[1];
            func_0x0001086cb0dc(auStack_28);
          }
          unaff_x19[1] = lVar6;
        }
        func_0x0001086cacb0(auStack_7f0);
      }
      func_0x000107c288dc(auStack_210);
    }
    param_1 = auStack_60;
    FUN_1086569a0();
  }
  return;
}



/* Entry: 1086b3938; end: 1086b3957;  */

long FUN_1086b3938(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006ba274();
  func_0x000107c27a10();
  lVar1 = unaff_x19;
  func_0x0001006248cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086b3958; end: 1086b39bf;  */

void FUN_1086b3958(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  
  func_0x0001086da390();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086dbbf4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  FUN_1086cacd0(unaff_x19 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 1086b39c0; end: 1086b3a03;  */

long FUN_1086b39c0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006ba274();
  func_0x000108621230();
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086b3a04; end: 1086b3c6f;  */

undefined8 *** FUN_1086b3a04(undefined8 ***param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 ***pppuVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 ***unaff_x19;
  int unaff_w22;
  long unaff_x23;
  long lVar2;
  undefined **in_register_00005008;
  undefined8 **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  
  func_0x0001006b4438(param_2,param_3,param_3);
  pppuVar1 = &ppuStack_d0;
  func_0x0001086db7c0();
  func_0x0001006b9e48();
  ppuStack_100 = param_1;
  ppuStack_f8 = in_register_00005008;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086d9b74();
  func_0x000107c28150();
  func_0x0001006b9e5c();
  func_0x0001006b9e68();
  lVar2 = *(long *)(unaff_x23 + 0x70);
  ppuStack_b0 = (undefined8 **)FUN_1086d2604;
  ppuStack_a8 = &PTR_FUN_110a64350;
  func_0x000107c3268c();
  func_0x0001086d9e2c();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c325ec();
    } while (extraout_w11 != 0);
  }
  func_0x0001086d9b58();
  ppuStack_a0 = pppuVar1;
  func_0x000107c28154(unaff_x23 + 0x48,&ppuStack_b0);
  func_0x0001086d9acc(ppuStack_a8);
  func_0x0001006b9eb8();
  if (lVar2 == 0) {
    func_0x0001006b9ec0();
    ppuStack_b0 = param_1;
    ppuStack_a8 = in_register_00005008;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c3265c();
    (*extraout_x8_02)();
    func_0x0001086db190();
  }
  FUN_1086b3c70(&ppuStack_100);
  pppuVar1 = &ppuStack_d0;
  func_0x0001086cae20(pppuVar1);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(extraout_x8);
      if ((bool)in_ZR) {
        return pppuVar1;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x0001086db190();
      FUN_1086b3c70(&ppuStack_100);
      pppuVar1 = &ppuStack_d0;
      func_0x0001086cae20();
      in_ZR = unaff_w22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da750();
      pppuVar1 = unaff_x19;
      FUN_1086b3c94();
      ___cxa_end_catch();
    }
    in_ZR = unaff_w22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    func_0x0001086da510();
    func_0x0001086d98d0();
    ppuStack_f8 = (undefined **)0x0;
    puStack_f0 = &UNK_10f4b0e68;
    uStack_e8 = 0;
    ppuStack_100 = pppuVar1;
    func_0x0001086d9b3c();
    func_0x0001086da324(&ppuStack_d0);
    func_0x0001086d9f78();
    func_0x000107c316c4();
    ppuStack_b0 = (undefined8 **)CONCAT44(ppuStack_b0._4_4_,0x10);
    ppuStack_a8 = (undefined **)0x0;
    uStack_98 = uStack_c8;
    ppuStack_a0 = ppuStack_d0;
    uStack_90 = uStack_c0;
    func_0x0001086dac38();
    ppuStack_88 = ppuStack_100;
    func_0x0001086da834(puStack_f0);
    func_0x0001086da358();
    func_0x0001086db188();
    func_0x000107c32690();
    func_0x0001086da5c4();
    func_0x0001086da504();
    FUN_1086b3c94();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  func_0x0001006ba274();
  func_0x0001086cae20();
  pppuVar1 = unaff_x19;
  func_0x0001006248cc();
  if (pppuVar1 != (undefined8 ***)0x0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086b3c70; end: 1086b3c93;  */

long FUN_1086b3c70(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006ba274();
  func_0x0001086cae20();
  lVar1 = unaff_x19;
  func_0x0001006248cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086b3c94; end: 1086b3d6f;  */

/* WARNING: Possible PIC construction at 0x0001086b422c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086b4260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086b4264) */

void FUN_1086b3c94(undefined8 param_1,ulong param_2,undefined8 *****param_3,undefined8 ******param_4
                  )

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  undefined8 *****pppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *****pppppuVar5;
  undefined4 uVar6;
  undefined8 ******ppppppuVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  undefined1 *unaff_x22;
  long unaff_x24;
  long lVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 ****ppppuStack_430;
  undefined8 ****ppppuStack_428;
  undefined8 uStack_420;
  undefined1 auStack_418 [24];
  undefined1 *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  char cStack_3d4;
  undefined8 *****pppppuStack_3d0;
  undefined8 uStack_3c8;
  char *pcStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  byte bStack_3a8;
  byte bStack_228;
  undefined8 ****ppppuStack_220;
  undefined8 ****ppppuStack_218;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *****pppppuStack_1f8;
  undefined8 uStack_58;
  undefined1 auStack_48 [40];
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != (undefined8 *****)0x0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d262c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (undefined1 *)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x00010862143c();
  }
  func_0x000100864c10();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086d9af0();
  func_0x00010862143c();
  func_0x0001086d9ff8();
  func_0x0001086dbc58();
  if (param_2 <= (ulong)(extraout_x9 / 0x5f8)) {
    return;
  }
  uVar1 = param_2 == 0x2ae3da78a0d674;
  if (param_2 < 0x2ae3da78a0d674) {
    FUN_1086caf30(auStack_48);
    func_0x0001006b7404();
    FUN_1086caee0();
    func_0x0001086cb0dc(auStack_48);
    return;
  }
  FUN_1086caed4();
  func_0x0001086da024();
  func_0x0001086cb0dc();
  func_0x0001086d9ff8();
  func_0x000107c32728();
  pppppuVar3 = &ppppuStack_430;
  ppppppuVar7 = param_4;
  func_0x0001086da550();
  func_0x0001086d9990();
  FUN_108862cf0(&ppppuStack_220,*(undefined8 *)(extraout_x8_02 + 0x20));
  func_0x0001006b90c8(&pppppuStack_3d0,&ppppuStack_220);
  iVar2 = (int)&ppppuStack_220;
  func_0x000107c28948();
  if ((bStack_228 & 1) == 0) {
LAB_1086b3e4c:
    ppppppuVar7 = (undefined8 ******)0x7;
  }
  else {
    func_0x0001086dafb4(&pppppuStack_3d0);
    uVar1 = iVar2 == 4;
    if ((bool)uVar1) goto LAB_1086b3e4c;
    if ((bStack_3a8 & 1) != 0) {
      func_0x0001006b457c();
      func_0x0001086db810(&ppppuStack_220);
      FUN_108655080(&puStack_400,&ppppuStack_220);
      FUN_108656820(&ppppuStack_220);
      uVar1 = cStack_3d4 == '\x01';
      if ((bool)uVar1) {
        pppppuVar5 = *param_4;
        param_3 = param_4[1];
        ppppppuVar7 = (undefined8 ******)0x4;
        FUN_1086b418c();
      }
      else {
        pppppuVar10 = param_4[1];
        pppppuVar9 = *param_4;
        ppppuStack_430 = pppppuVar9;
        ppppuStack_428 = pppppuVar10;
        if (param_4[1] != (undefined8 *****)0x0) {
          do {
            func_0x000107c325ec();
            uStack_3b0 = extraout_x8_03;
          } while (extraout_w11 != 0);
        }
        unaff_x22 = auStack_418;
        uStack_420 = uStack_3b0;
        func_0x0001086da478();
        func_0x000107c28150();
        func_0x0001086dac8c();
        func_0x0001086da518();
        lVar8 = *(long *)(unaff_x24 + 0x70);
        ppppuStack_220 = (undefined8 ****)FUN_1086d26b4;
        ppppuStack_218 = (undefined8 ****)&PTR_FUN_110a64398;
        func_0x0001086da334();
        func_0x0001086d9ed4();
        if (extraout_x8_04 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_02 != 0);
        }
        *(undefined8 *)(unaff_x22 + 0x10) = uStack_420;
        func_0x000107c27994(unaff_x22 + 0x18,auStack_418);
        pppppuVar5 = &ppppuStack_220;
        puStack_210 = unaff_x22;
        func_0x000107c28154(unaff_x24 + 0x48);
        func_0x0001006b9e8c(ppppuStack_218);
        func_0x0001086da258();
        if (lVar8 == 0) {
          func_0x0001086d9eac();
          ppppuStack_220 = pppppuVar9;
          ppppuStack_218 = pppppuVar10;
          if (extraout_x8_05 != 0) {
            do {
              func_0x000107c325f8();
            } while (extraout_w10_03 != 0);
          }
          func_0x000107c3265c();
          pppppuVar5 = &ppppuStack_220;
          (*extraout_x8_06)();
          func_0x0001086db2d4();
        }
        FUN_1086b4268(&ppppuStack_430);
      }
      func_0x0001086da684();
      goto LAB_1086b3e5c;
    }
    ppppppuVar7 = (undefined8 ******)0x4;
  }
  pppppuVar5 = *param_4;
  param_3 = param_4[1];
  FUN_1086b418c();
LAB_1086b3e5c:
  func_0x000107c288dc(&pppppuStack_3d0);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_58);
      if ((bool)uVar1) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x0001086db2d4();
      FUN_1086b4268(&ppppuStack_430);
      func_0x0001086da684();
      ppppppuVar4 = &pppppuStack_3d0;
      func_0x000107c288dc();
      uVar1 = (int)unaff_x22 == 2;
      if (!(bool)uVar1) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da750();
      FUN_1086b418c();
      ___cxa_end_catch();
    }
    uVar1 = (int)unaff_x22 == 1;
    if (!(bool)uVar1) break;
    func_0x0001086da000();
    func_0x0001086da510();
    func_0x0001086d98d0();
    uStack_3c8 = 0;
    pcStack_3c0 = "fetchServerMessageIdentifier";
    uStack_3b8 = 0;
    pppppuStack_3d0 = ppppppuVar4;
    func_0x0001086d9b3c();
    ppppppuVar7 = &pppppuStack_3d0;
    func_0x0001086da324(&puStack_400);
    func_0x0001086da31c(&pppppuStack_3d0);
    func_0x000107c316c4();
    ppppuStack_220 = (undefined8 ****)CONCAT44(ppppuStack_220._4_4_,0x10);
    ppppuStack_218 = (undefined8 *****)0x0;
    uStack_208 = uStack_3f8;
    puStack_210 = puStack_400;
    uStack_200 = uStack_3f0;
    func_0x0001086dac38();
    pppppuStack_1f8 = pppppuStack_3d0;
    pppppuStack_3d0 = (undefined8 *****)0x0;
    uStack_3c8 = 0;
    pcStack_3c0 = (char *)0x0;
    func_0x0001086da358();
    func_0x00010786e114(&ppppuStack_220);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_3d0);
    func_0x0001086da5c4();
    pppppuVar5 = *param_4;
    param_3 = param_4[1];
    func_0x0001086da504();
    FUN_1086b418c();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8_07 & 1) == 0) && (pppppuVar5 != (undefined8 *****)0x0)) {
    func_0x0001086d9c18();
    uVar6 = SUB84(ppppppuVar7,0);
    if (param_3 != (undefined8 *****)0x0) {
      do {
        func_0x000107c325f8();
        uVar6 = SUB84(ppppppuVar7,0);
      } while (extraout_w10_04 != 0);
    }
    uStack_420 = CONCAT44(uStack_420._4_4_,uVar6);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d2670);
    if (extraout_x8_08 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_05 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (undefined1 *)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_09 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_06 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
  }
  else {
    func_0x000100864c10();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9af0();
  }
  func_0x00010054ffe4();
  if (pppppuVar3 != (undefined8 *****)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1086b3d70; end: 1086b3def;  */

/* WARNING: Possible PIC construction at 0x0001086b422c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086b4260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086b4264) */

void FUN_1086b3d70(undefined8 param_1,ulong param_2,undefined8 ****param_3,undefined8 *****param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined4 uVar6;
  undefined8 *****pppppuVar7;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  undefined1 *unaff_x22;
  long unaff_x24;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuStack_430;
  undefined8 ***pppuStack_428;
  undefined8 uStack_420;
  undefined1 auStack_418 [24];
  undefined1 *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  char cStack_3d4;
  undefined8 ****ppppuStack_3d0;
  undefined8 uStack_3c8;
  char *pcStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  byte bStack_3a8;
  byte bStack_228;
  undefined8 ***pppuStack_220;
  undefined8 ***pppuStack_218;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 ****ppppuStack_1f8;
  undefined8 uStack_58;
  undefined1 auStack_48 [40];
  
  func_0x0001086dbc58();
  if (param_2 <= (ulong)(extraout_x9 / 0x5f8)) {
    return;
  }
  uVar1 = param_2 == 0x2ae3da78a0d674;
  if (param_2 < 0x2ae3da78a0d674) {
    FUN_1086caf30(auStack_48);
    func_0x0001006b7404();
    FUN_1086caee0();
    func_0x0001086cb0dc(auStack_48);
    return;
  }
  FUN_1086caed4();
  func_0x0001086da024();
  func_0x0001086cb0dc();
  func_0x0001086d9ff8();
  func_0x000107c32728();
  ppppuVar3 = &pppuStack_430;
  pppppuVar7 = param_4;
  func_0x0001086da550();
  func_0x0001086d9990();
  FUN_108862cf0(&pppuStack_220,*(undefined8 *)(extraout_x8 + 0x20));
  func_0x0001006b90c8(&ppppuStack_3d0,&pppuStack_220);
  iVar2 = (int)&pppuStack_220;
  func_0x000107c28948();
  if ((bStack_228 & 1) == 0) {
LAB_1086b3e4c:
    pppppuVar7 = (undefined8 *****)0x7;
  }
  else {
    func_0x0001086dafb4(&ppppuStack_3d0);
    uVar1 = iVar2 == 4;
    if ((bool)uVar1) goto LAB_1086b3e4c;
    if ((bStack_3a8 & 1) != 0) {
      func_0x0001006b457c();
      func_0x0001086db810(&pppuStack_220);
      FUN_108655080(&puStack_400,&pppuStack_220);
      FUN_108656820(&pppuStack_220);
      uVar1 = cStack_3d4 == '\x01';
      if ((bool)uVar1) {
        ppppuVar5 = *param_4;
        param_3 = param_4[1];
        pppppuVar7 = (undefined8 *****)0x4;
        FUN_1086b418c();
      }
      else {
        ppppuVar10 = param_4[1];
        ppppuVar9 = *param_4;
        pppuStack_430 = ppppuVar9;
        pppuStack_428 = ppppuVar10;
        if (param_4[1] != (undefined8 ****)0x0) {
          do {
            func_0x000107c325ec();
            uStack_3b0 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        unaff_x22 = auStack_418;
        uStack_420 = uStack_3b0;
        func_0x0001086da478();
        func_0x000107c28150();
        func_0x0001086dac8c();
        func_0x0001086da518();
        lVar8 = *(long *)(unaff_x24 + 0x70);
        pppuStack_220 = (undefined8 ***)FUN_1086d26b4;
        pppuStack_218 = (undefined8 ***)&PTR_FUN_110a64398;
        func_0x0001086da334();
        func_0x0001086d9ed4();
        if (extraout_x8_01 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10 != 0);
        }
        *(undefined8 *)(unaff_x22 + 0x10) = uStack_420;
        func_0x000107c27994(unaff_x22 + 0x18,auStack_418);
        ppppuVar5 = &pppuStack_220;
        puStack_210 = unaff_x22;
        func_0x000107c28154(unaff_x24 + 0x48);
        func_0x0001006b9e8c(pppuStack_218);
        func_0x0001086da258();
        if (lVar8 == 0) {
          func_0x0001086d9eac();
          pppuStack_220 = ppppuVar9;
          pppuStack_218 = ppppuVar10;
          if (extraout_x8_02 != 0) {
            do {
              func_0x000107c325f8();
            } while (extraout_w10_00 != 0);
          }
          func_0x000107c3265c();
          ppppuVar5 = &pppuStack_220;
          (*extraout_x8_03)();
          func_0x0001086db2d4();
        }
        FUN_1086b4268(&pppuStack_430);
      }
      func_0x0001086da684();
      goto LAB_1086b3e5c;
    }
    pppppuVar7 = (undefined8 *****)0x4;
  }
  ppppuVar5 = *param_4;
  param_3 = param_4[1];
  FUN_1086b418c();
LAB_1086b3e5c:
  func_0x000107c288dc(&ppppuStack_3d0);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_58);
      if ((bool)uVar1) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x0001086db2d4();
      FUN_1086b4268(&pppuStack_430);
      func_0x0001086da684();
      pppppuVar4 = &ppppuStack_3d0;
      func_0x000107c288dc();
      uVar1 = (int)unaff_x22 == 2;
      if (!(bool)uVar1) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da750();
      FUN_1086b418c();
      ___cxa_end_catch();
    }
    uVar1 = (int)unaff_x22 == 1;
    if (!(bool)uVar1) break;
    func_0x0001086da000();
    func_0x0001086da510();
    func_0x0001086d98d0();
    uStack_3c8 = 0;
    pcStack_3c0 = "fetchServerMessageIdentifier";
    uStack_3b8 = 0;
    ppppuStack_3d0 = pppppuVar4;
    func_0x0001086d9b3c();
    pppppuVar7 = &ppppuStack_3d0;
    func_0x0001086da324(&puStack_400);
    func_0x0001086da31c(&ppppuStack_3d0);
    func_0x000107c316c4();
    pppuStack_220 = (undefined8 ***)CONCAT44(pppuStack_220._4_4_,0x10);
    pppuStack_218 = (undefined8 ****)0x0;
    uStack_208 = uStack_3f8;
    puStack_210 = puStack_400;
    uStack_200 = uStack_3f0;
    func_0x0001086dac38();
    ppppuStack_1f8 = ppppuStack_3d0;
    ppppuStack_3d0 = (undefined8 ****)0x0;
    uStack_3c8 = 0;
    pcStack_3c0 = (char *)0x0;
    func_0x0001086da358();
    func_0x00010786e114(&pppuStack_220);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_3d0);
    func_0x0001086da5c4();
    ppppuVar5 = *param_4;
    param_3 = param_4[1];
    func_0x0001086da504();
    FUN_1086b418c();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8_04 & 1) == 0) && (ppppuVar5 != (undefined8 ****)0x0)) {
    func_0x0001086d9c18();
    uVar6 = SUB84(pppppuVar7,0);
    if (param_3 != (undefined8 ****)0x0) {
      do {
        func_0x000107c325f8();
        uVar6 = SUB84(pppppuVar7,0);
      } while (extraout_w10_01 != 0);
    }
    uStack_420 = CONCAT44(uStack_420._4_4_,uVar6);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d2670);
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (undefined1 *)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_03 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
  }
  else {
    func_0x000100864c10();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9af0();
  }
  func_0x00010054ffe4();
  if (ppppuVar3 != (undefined8 ****)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1086b3df0; end: 1086b418b;  */

/* WARNING: Possible PIC construction at 0x0001086b422c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086b4260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086b4264) */

void FUN_1086b3df0(undefined8 param_1,undefined8 param_2,undefined8 **param_3,undefined8 ***param_4)

{
  undefined1 in_ZR;
  int iVar1;
  code **ppcVar2;
  undefined8 ***pppuVar3;
  code **ppcVar4;
  undefined4 uVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  undefined1 *unaff_x22;
  long unaff_x24;
  long lVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 in_stack_00000050;
  code *pcStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [24];
  undefined1 *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  char cStack_384;
  undefined8 **ppuStack_380;
  undefined8 uStack_378;
  char *pcStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  byte bStack_358;
  undefined8 *puStack_350;
  code *pcStack_348;
  byte bStack_1d8;
  code *pcStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  ppcVar2 = &pcStack_3e0;
  pppuVar6 = param_4;
  func_0x0001086da550();
  func_0x0001086d9990();
  FUN_108862cf0(&pcStack_1d0,*(undefined8 *)(extraout_x8 + 0x20));
  func_0x0001006b90c8(&ppuStack_380,&pcStack_1d0);
  iVar1 = (int)&pcStack_1d0;
  func_0x000107c28948();
  if ((bStack_1d8 & 1) == 0) {
LAB_1086b3e4c:
    pppuVar6 = (undefined8 ***)0x7;
  }
  else {
    func_0x0001086dafb4(&ppuStack_380);
    in_ZR = iVar1 == 4;
    if ((bool)in_ZR) goto LAB_1086b3e4c;
    if ((bStack_358 & 1) != 0) {
      func_0x0001006b457c();
      func_0x0001086db810(&pcStack_1d0);
      FUN_108655080(&puStack_3b0,&pcStack_1d0);
      FUN_108656820(&pcStack_1d0);
      in_ZR = cStack_384 == '\x01';
      if ((bool)in_ZR) {
        ppcVar4 = (code **)*param_4;
        param_3 = param_4[1];
        pppuVar6 = (undefined8 ***)0x4;
        FUN_1086b418c();
      }
      else {
        ppuVar10 = param_4[1];
        ppuVar9 = *param_4;
        pcStack_3e0 = (code *)ppuVar9;
        ppuStack_3d8 = (undefined **)ppuVar10;
        if (param_4[1] != (undefined8 **)0x0) {
          do {
            func_0x000107c325ec();
            uStack_360 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        unaff_x22 = auStack_3c8;
        uStack_3d0 = uStack_360;
        func_0x0001086da478();
        func_0x000107c28150();
        func_0x0001086dac8c();
        func_0x0001086da518();
        lVar8 = *(long *)(unaff_x24 + 0x70);
        pcStack_1d0 = FUN_1086d26b4;
        ppuStack_1c8 = &PTR_FUN_110a64398;
        func_0x0001086da334();
        func_0x0001086d9ed4();
        if (extraout_x8_01 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10 != 0);
        }
        *(undefined8 *)(unaff_x22 + 0x10) = uStack_3d0;
        func_0x000107c27994(unaff_x22 + 0x18,auStack_3c8);
        ppcVar4 = &pcStack_1d0;
        puStack_1c0 = unaff_x22;
        func_0x000107c28154(unaff_x24 + 0x48);
        func_0x0001006b9e8c(ppuStack_1c8);
        func_0x0001086da258();
        if (lVar8 == 0) {
          func_0x0001086d9eac();
          pcStack_1d0 = (code *)ppuVar9;
          ppuStack_1c8 = (undefined **)ppuVar10;
          if (extraout_x8_02 != 0) {
            do {
              func_0x000107c325f8();
            } while (extraout_w10_00 != 0);
          }
          func_0x000107c3265c();
          ppcVar4 = &pcStack_1d0;
          (*extraout_x8_03)();
          func_0x0001086db2d4();
        }
        FUN_1086b4268(&pcStack_3e0);
      }
      func_0x0001086da684();
      goto LAB_1086b3e5c;
    }
    pppuVar6 = (undefined8 ***)0x4;
  }
  ppcVar4 = (code **)*param_4;
  param_3 = param_4[1];
  FUN_1086b418c();
LAB_1086b3e5c:
  func_0x000107c288dc(&ppuStack_380);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x0001086db2d4();
      FUN_1086b4268(&pcStack_3e0);
      func_0x0001086da684();
      pppuVar3 = &ppuStack_380;
      func_0x000107c288dc();
      in_ZR = (int)unaff_x22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da750();
      FUN_1086b418c();
      ___cxa_end_catch();
    }
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    func_0x0001086da510();
    func_0x0001086d98d0();
    uStack_378 = 0;
    pcStack_370 = "fetchServerMessageIdentifier";
    uStack_368 = 0;
    ppuStack_380 = pppuVar3;
    func_0x0001086d9b3c();
    pppuVar6 = &ppuStack_380;
    func_0x0001086da324(&puStack_3b0);
    func_0x0001086da31c(&ppuStack_380);
    func_0x000107c316c4();
    pcStack_1d0 = (code *)CONCAT44(pcStack_1d0._4_4_,0x10);
    ppuStack_1c8 = (undefined **)0x0;
    uStack_1b8 = uStack_3a8;
    puStack_1c0 = puStack_3b0;
    uStack_1b0 = uStack_3a0;
    func_0x0001086dac38();
    ppuStack_1a8 = ppuStack_380;
    ppuStack_380 = (undefined8 **)0x0;
    uStack_378 = 0;
    pcStack_370 = (char *)0x0;
    func_0x0001086da358();
    func_0x00010786e114(&pcStack_1d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_380);
    func_0x0001086da5c4();
    ppcVar4 = (code **)*param_4;
    param_3 = param_4[1];
    func_0x0001086da504();
    FUN_1086b418c();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  pcVar7 = FUN_1086b418c;
  func_0x0001086db620();
  puStack_350 = &stack0x00000050;
  pcStack_348 = pcVar7;
  func_0x0001086d9810();
  if (((extraout_x8_04 & 1) == 0) && (ppcVar4 != (code **)0x0)) {
    func_0x0001086d9c18();
    uVar5 = SUB84(pppuVar6,0);
    if (param_3 != (undefined8 **)0x0) {
      do {
        func_0x000107c325f8();
        uVar5 = SUB84(pppuVar6,0);
      } while (extraout_w10_01 != 0);
    }
    uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar5);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d2670);
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (undefined1 *)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_03 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
  }
  else {
    func_0x000100864c10();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9af0();
  }
  func_0x00010054ffe4();
  if (ppcVar2 != (code **)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1086b418c; end: 1086b4267;  */

/* WARNING: Possible PIC construction at 0x0001086b422c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086b4260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086b4264) */

void FUN_1086b418c(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x22;
  undefined4 in_stack_00000010;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    in_stack_00000010 = param_4;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d2670);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
  }
  else {
    func_0x000100864c10();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9af0();
  }
  func_0x00010054ffe4();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1086b4268; end: 1086b428f;  */

undefined8 FUN_1086b4268(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27914(param_1 + 0x18);
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086b4290; end: 1086b43ef;  */

int FUN_1086b4290(long param_1,long param_2,long *param_3,undefined8 param_4,ulong param_5,
                 ulong param_6)

{
  undefined **ppuVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iStack_604;
  undefined1 auStack_600 [1496];
  undefined1 auStack_28 [40];
  
  func_0x000107c32728();
  func_0x0001086da4ac();
  func_0x000107c29ee4(auStack_28,param_1 + 0x98);
  func_0x000107c28f30(param_2 + 0x18,param_1 + 0xb0);
  iStack_604 = 0;
  lVar2 = param_3[1];
  for (lVar8 = *param_3; lVar8 != lVar2; lVar8 = lVar8 + 0x1a8) {
    ppuVar1 = &PTR_PTR_113280c30;
    if (*(undefined ***)(lVar8 + 0x78) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar8 + 0x78);
    }
    iVar6 = (int)param_6;
    iVar7 = (int)param_5;
    if (iVar7 == 0 && iVar6 == 0) break;
    iVar3 = *(int *)(ppuVar1 + 0x15);
    if ((iVar7 != 0 || iVar3 != 0) && (iVar6 != 0 || iVar3 == 0)) {
      uVar5 = *(ulong *)(*(long *)(param_1 + 0xd0) + 0xd0);
      func_0x000107c29d10(uVar5,param_2,*(undefined8 *)(lVar8 + 0x20));
      iVar4 = (int)uVar5;
      if ((uVar5 & 1) == 0) {
        func_0x0001086db564();
        FUN_1086a2764();
        if (iVar4 != 0) {
          func_0x000107c29260(auStack_600,*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x170),lVar8,
                              param_2);
          func_0x000107c27aa8(param_4,auStack_600);
          func_0x000107c27a10(auStack_600);
          iStack_604 = iStack_604 + 1;
          param_6 = (ulong)(iVar6 - (uint)(iVar3 != 0));
          param_5 = (ulong)(iVar7 - (uint)(iVar3 == 0));
        }
      }
    }
  }
  func_0x0001086daf44();
  return iStack_604;
}



/* Entry: 1086b43f0; end: 1086b4ef7;  */

void FUN_1086b43f0(undefined ***param_1,long *param_2,int *param_3,ulong *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar10;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  undefined **ppuVar13;
  long lVar14;
  long *plVar15;
  undefined **ppuVar16;
  ulong *puStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined1 auStack_b30 [24];
  undefined1 auStack_b18 [24];
  undefined1 auStack_b00 [24];
  undefined1 auStack_ae8 [24];
  undefined1 auStack_ad0 [24];
  undefined1 auStack_ab8 [40];
  undefined1 auStack_a90 [8];
  undefined1 auStack_a88 [72];
  undefined **ppuStack_a40;
  undefined **ppuStack_a38;
  undefined8 uStack_a30;
  undefined **appuStack_a20 [3];
  long lStack_a08;
  long lStack_a00;
  undefined8 uStack_9f8;
  undefined8 *puStack_9f0;
  undefined8 *puStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined ***pppuStack_9d0;
  undefined1 uStack_9c8;
  byte bStack_808;
  long lStack_800;
  long lStack_7f8;
  undefined8 uStack_7f0;
  long lStack_7e8;
  undefined **ppuStack_7e0;
  undefined **ppuStack_7d8;
  undefined ***pppuStack_7d0;
  long lStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b8;
  byte bStack_610;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 uStack_3d0;
  char cStack_20;
  undefined8 uStack_18;
  
  func_0x000107c32728();
  func_0x0001086d9a34();
  pppuVar5 = appuStack_a20;
  uStack_18 = extraout_x8;
  func_0x000107c316c8(pppuVar5,&UNK_10f4b0e81);
  ppuStack_a40 = (undefined **)0x0;
  ppuStack_a38 = (undefined **)0x0;
  uStack_a30 = 0;
  uVar3 = *param_2 == param_2[1];
  if ((!(bool)uVar3) && (uVar3 = *(char *)(param_1 + 0x19) == '\x01', !(bool)uVar3)) {
    ppuVar13 = param_1[0x1a];
    pppuStack_7d0 = (undefined ***)0x0;
    lStack_7c8 = 0;
    ppuStack_7d8 = (undefined **)0x0;
    ppuStack_7e0 = &PTR_FUN_110a609a8;
    puStack_7c0 = (undefined8 *)CONCAT44(puStack_7c0._4_4_,0x17e);
    func_0x000107c278b8(auStack_ad0,&UNK_10f4b0eab);
    func_0x0001086dbbac();
    pppuVar5 = &ppuStack_7e0;
    func_0x000107c28824(pppuVar5,auStack_ad0);
    func_0x000107c278b8(auStack_ae8,&UNK_10f4b0ebd);
    lVar12 = (param_2[1] - *param_2) / 0x18;
    func_0x000107c28af4(lVar12);
    func_0x000107c28824(pppuVar5,auStack_ae8,lVar12);
    func_0x000107c2884c(auStack_ab8,pppuVar5);
    func_0x0001086da9cc(auStack_a90,ppuVar13 + 0x26,auStack_ab8);
    func_0x000107c2882c(auStack_ab8);
    func_0x0001086db68c();
    func_0x0001086dab18();
    pppuVar5 = &ppuStack_7e0;
    func_0x000107c2882c();
    puStack_b50 = param_4;
    if (((ulong)param_1[0x34] & 1) == 0) {
      unaff_x22 = *param_2;
      lVar12 = param_2[1];
      while (uVar3 = unaff_x22 == lVar12, !(bool)uVar3) {
        uStack_9d8 = 0;
        pppuStack_9d0 = (undefined ***)0x0;
        uStack_9c8 = 0;
        func_0x000107c28258();
        uStack_9c8 = 1;
        pppuStack_9d0 = pppuVar5;
        func_0x0001086daea8();
        func_0x0001086da788(&ppuStack_7e0);
        if ((bStack_610 & 1) == 0) {
          func_0x0001086d9f90();
        }
        else {
          lStack_7f8 = 0;
          lStack_800 = 0;
          uStack_7f0 = 0;
          func_0x000107c316c8(&puStack_9f0,&UNK_10f4b0ec9);
          ppuStack_3f0 = (undefined **)((ulong)ppuStack_3f0 & 0xffffffff00000000);
          plVar15 = &lStack_7c8;
          pppuVar5 = &ppuStack_3f0;
          FUN_1086a3d00(plVar15,pppuVar5,param_1 + 0x13);
          plVar6 = plVar15;
          func_0x0001086dbb2c();
          if (((ulong)pppuVar5 & 1) == 0) {
            plVar15 = (long *)0x0;
          }
          lStack_a08 = 0;
          lStack_a00 = 0;
          uStack_9f8 = 0;
          FUN_1088614f0(&ppuStack_3f0,param_1[0x1a][4],unaff_x22,(ulong)plVar6 & 0xffffffff,plVar15)
          ;
          func_0x0001086a9b44(&lStack_a08,&ppuStack_3f0);
          func_0x0001086db674();
          func_0x0001086da100();
          ppuStack_3f0 = (undefined **)FUN_1086adc18;
          ppuStack_3e8 = &PTR_DAT_110a63748;
          ppuStack_3e0 = (undefined **)&lStack_800;
          FUN_1086a1530();
          func_0x0001006b9e8c(ppuStack_3e8);
          func_0x00010867b9fc(&lStack_a08);
          func_0x000107c316d0(&puStack_9f0);
          pppuVar5 = &ppuStack_3f0;
          func_0x000107c316c8(pppuVar5,&UNK_10f4b0ed7);
          uVar4 = (uint)pppuVar5;
          uVar2 = param_3[1];
          func_0x0001086dbb84();
          FUN_1086b4290();
          uVar3 = *param_3 == 1 && uVar2 == uVar4;
          if (*param_3 == 1 && uVar4 < uVar2) {
            func_0x0001086dbb84();
            FUN_1086b4290();
          }
          func_0x000107c316d0(&ppuStack_3f0);
          plVar15 = (long *)param_1[0x1a][0x26];
          ppuStack_3e8 = (undefined **)0x0;
          ppuStack_3e0 = (undefined **)0x0;
          ppuStack_3d8 = (undefined **)0x0;
          ppuStack_3f0 = &PTR_FUN_110a609a8;
          uStack_3d0 = CONCAT44(uStack_3d0._4_4_,0x17f);
          func_0x000107c278b8(auStack_b00,&UNK_10f4b0eab);
          func_0x0001086dbbac();
          func_0x000107c28824(&ppuStack_3f0,auStack_b00);
          func_0x000107c278b8(auStack_b18,&UNK_10f4b0ef0);
          func_0x000107c28af4((lStack_7f8 - lStack_800) / 0x1a8);
          func_0x0001086da9e8();
          puVar7 = auStack_b30;
          func_0x0001086dabb8(puVar7);
          func_0x000107c278b8();
          func_0x0001086da45c(ppuStack_a38);
          func_0x0001086da9e8();
          puVar8 = &uStack_9d8;
          func_0x000107c2825c();
          puStack_9f0 = puVar8;
          (**(code **)(*plVar15 + 0x18))(plVar15,puVar7,&puStack_9f0);
          func_0x0001086daa38();
          func_0x0001086da710();
          func_0x0001086da644();
          func_0x000107c2882c(&ppuStack_3f0);
          func_0x00010867b9fc(&lStack_800);
        }
        pppuVar5 = &ppuStack_7e0;
        func_0x000107c288c8();
        unaff_x22 = unaff_x22 + 0x18;
        if ((bStack_610 & 1) == 0) goto LAB_1086b4c30;
      }
      uStack_9d8 = 0x1086b5038;
      uVar3 = ppuStack_a40 == ppuStack_a38;
      if (!(bool)uVar3) {
        FUN_1086cb200(ppuStack_a40,ppuStack_a38,&uStack_9d8,
                      LZCOUNT(((long)ppuStack_a38 - (long)ppuStack_a40) / 0x5d8) << 1 ^ 0x7e,1);
      }
    }
    else {
      uVar11 = (ulong)param_3[1];
      unaff_x22 = *param_2;
      lVar12 = param_2[1];
      uStack_b40 = 0;
      uStack_b38 = 0;
      uStack_b48 = 0;
      for (; uVar3 = unaff_x22 == lVar12, !(bool)uVar3; unaff_x22 = unaff_x22 + 0x18) {
        func_0x0001086daea8();
        func_0x0001086da788(&uStack_9d8);
        if ((bStack_808 & 1) != 0) {
          puStack_9f0 = (undefined8 *)0x0;
          puStack_9e8 = (undefined8 *)0x0;
          uStack_9e0 = 0;
          func_0x0001086da100();
          FUN_1088660e8(&ppuStack_7e0);
          FUN_10869148c(&ppuStack_3f0,&ppuStack_7e0);
          func_0x000107c288ec(&ppuStack_7e0);
          if (cStack_20 == '\x01') {
            FUN_1086b5168(&ppuStack_7e0,&ppuStack_3f0);
            func_0x000107c28910(&puStack_9f0,&ppuStack_7e0);
            func_0x000107c27ae4(&ppuStack_7e0);
          }
          func_0x000107c288cc(&ppuStack_3f0);
          uVar10 = (long)puStack_9e8 - (long)puStack_9f0 >> 3;
          if (uVar10 < uVar11) {
            func_0x0001086da100();
            FUN_1088615a4(&ppuStack_7e0);
            FUN_1086d27d8(&ppuStack_3f0,puStack_9f0,puStack_9e8,&lStack_800);
            func_0x000107c29024(&lStack_a08,&ppuStack_7e0);
            lStack_800 = lStack_a08;
            uStack_7f0 = uStack_9f8;
            lStack_7f8 = lStack_a00;
            while ((char)uStack_7f0 == '\x01' && lStack_800 != 0) {
              plVar15 = &lStack_800;
              func_0x000107c2902c();
              lStack_7e8 = *plVar15;
              pppuVar5 = &ppuStack_3f0;
              FUN_1086cbfbc(pppuVar5,&lStack_7e8);
              if (&ppuStack_3e8 == pppuVar5) {
                plVar15 = &lStack_800;
                func_0x000107c2902c(plVar15);
                func_0x000107c28944(&puStack_9f0,plVar15);
              }
              func_0x000107c29030(&lStack_800);
            }
            func_0x00010867bb28(&ppuStack_3f0);
            func_0x000107c29020(&ppuStack_7e0);
            uVar10 = (long)puStack_9e8 - (long)puStack_9f0 >> 3;
          }
          if (uVar11 < uVar10 && puStack_9e8 != puStack_9f0 + uVar11) {
            puVar8 = puStack_9f0 + uVar11;
            puVar1 = (undefined8 *)
                     ((long)puVar8 + ((long)puStack_9e8 - (long)(puStack_9f0 + uVar11)));
            lVar14 = (long)puStack_9e8 - (long)puVar1;
            if (puStack_9e8 != puVar1) {
              _memmove(puVar8,puVar1,lVar14);
            }
            puStack_9e8 = (undefined8 *)((long)puVar8 + lVar14);
          }
          func_0x0001086da100();
          FUN_108861670(&ppuStack_3f0);
          func_0x0001086da100();
          ppuStack_7e0 = (undefined **)FUN_1086d2ab0;
          ppuStack_7d8 = &PTR_FUN_110a643f8;
          pppuStack_7d0 = param_1;
          lStack_7c8 = unaff_x22;
          puStack_7c0 = &uStack_b48;
          puStack_7b8 = &uStack_9d8;
          FUN_1086a1530();
          func_0x0001086dae1c();
          func_0x0001086db674();
          func_0x000107c27ae4(&puStack_9f0);
        }
        func_0x000107c288c8(&uStack_9d8);
      }
      func_0x000107c290a0(&ppuStack_a40,&uStack_b48);
      func_0x0001086db1d4();
    }
    puVar7 = auStack_a88;
    func_0x0001086dbaf0(puVar7,0x11);
    func_0x000107c28af0(auStack_a88,puVar7);
    func_0x0001086dabb8();
    pppuVar5 = &ppuStack_7e0;
    func_0x000107c278b8(pppuVar5);
    func_0x0001086da45c(ppuStack_a38);
    func_0x000107c278b8(&ppuStack_3f0,pppuVar5);
    func_0x000107c29050(auStack_a90,&ppuStack_7e0,&ppuStack_3f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_3f0);
    pppuVar5 = &ppuStack_7e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    goto LAB_1086b4b54;
  }
  param_1 = (undefined ***)param_1[0x1a][0x20];
  ppuStack_3e8 = (undefined **)param_4[1];
  ppuStack_3f0 = (undefined **)*param_4;
  if (param_4[1] == 0) {
    ppuStack_3d8 = (undefined **)0x0;
    uStack_3d0 = 0;
  }
  else {
    do {
      func_0x000107c325f8();
      ppuStack_3d8 = ppuStack_a38;
      uStack_3d0 = uStack_a30;
    } while (extraout_w10 != 0);
  }
  ppuStack_3e0 = (undefined **)0x0;
  ppuStack_a38 = (undefined **)0x0;
  uStack_a30 = 0;
  ppuStack_a40 = (undefined **)0x0;
  func_0x000107c28150();
  func_0x0001086db600();
  func_0x0001086da438();
  lVar12 = *(long *)(unaff_x22 + 0x70);
  ppuStack_7e0 = (undefined **)0x1086d2744;
  ppuStack_7d8 = &PTR_FUN_110a643b0;
  func_0x000107c3268c();
  func_0x0001086dbb98();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c325ec();
    } while (extraout_w11 != 0);
  }
  ppuVar16 = ppuStack_3d8;
  ppuVar13 = ppuStack_3e0;
  pppuVar5[3] = ppuStack_3d8;
  pppuVar5[2] = ppuVar13;
  func_0x0001086d9f54();
  pppuStack_7d0 = pppuVar5;
  func_0x0001086dbb44();
  func_0x0001086d9a28(ppuStack_7d8);
  func_0x0001086da250();
  if (lVar12 == 0) {
    func_0x0001086d9ab0();
    ppuStack_7e0 = ppuVar13;
    ppuStack_7d8 = ppuVar16;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c3265c();
    (*extraout_x8_01)();
    func_0x0001086daf34();
  }
  FUN_1086b4ef8(&ppuStack_3f0);
  do {
    func_0x000107c27a08(&ppuStack_a40);
    func_0x000107c316d0(appuStack_a20);
    func_0x0001006ba334(uStack_18);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086daf34();
    FUN_1086b514c(&ppuStack_3f0);
    do {
      func_0x000107c28b40(auStack_a90);
      func_0x000107c27a08(&ppuStack_a40);
      func_0x000107c316d0(appuStack_a20);
      func_0x0001086da008();
      func_0x0001086d9fec();
      func_0x000107c316d0(&ppuStack_3f0);
      func_0x00010867b9fc(&lStack_800);
      pppuVar9 = &ppuStack_7e0;
      func_0x000107c288c8();
      uVar3 = (int)unaff_x22 == 2;
      if ((bool)uVar3) {
        func_0x0001086da000();
        func_0x000108848514();
        func_0x0001086dad84();
        ___cxa_end_catch();
        pppuVar5 = pppuVar9;
        goto LAB_1086b4b54;
      }
      uVar3 = (int)unaff_x22 == 1;
    } while (!(bool)uVar3);
    func_0x0001086da000();
    pppuVar5 = param_1;
    FUN_1086b50d8(param_1,pppuVar9,&UNK_10f4b0e81,puStack_b50);
    ___cxa_end_catch();
LAB_1086b4b54:
    param_1 = (undefined ***)param_1[0x1a][0x20];
    ppuStack_3e8 = (undefined **)puStack_b50[1];
    ppuStack_3f0 = (undefined **)*puStack_b50;
    if (puStack_b50[1] != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    ppuStack_3d8 = ppuStack_a38;
    ppuStack_3e0 = ppuStack_a40;
    uStack_3d0 = uStack_a30;
    ppuStack_a38 = (undefined **)0x0;
    uStack_a30 = 0;
    ppuStack_a40 = (undefined **)0x0;
    func_0x000107c28150();
    func_0x0001086db600();
    func_0x0001086da438();
    lVar12 = *(long *)(unaff_x22 + 0x70);
    ppuStack_7e0 = (undefined **)0x1086d27b0;
    ppuStack_7d8 = &PTR_FUN_110a643e0;
    func_0x000107c3268c();
    func_0x0001086dbb98();
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107c325ec();
      } while (extraout_w11_00 != 0);
    }
    ppuVar16 = ppuStack_3d8;
    ppuVar13 = ppuStack_3e0;
    pppuVar5[3] = ppuStack_3d8;
    pppuVar5[2] = ppuVar13;
    func_0x0001086d9f54();
    pppuStack_7d0 = pppuVar5;
    func_0x0001086dbb44();
    func_0x0001086d9a28(ppuStack_7d8);
    func_0x0001086da250();
    if (lVar12 == 0) {
      func_0x0001086d9ab0();
      ppuStack_7e0 = ppuVar13;
      ppuStack_7d8 = ppuVar16;
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c3265c();
      (*extraout_x8_03)();
      func_0x0001086daf34();
    }
    FUN_1086b514c(&ppuStack_3f0);
LAB_1086b4c30:
    func_0x000107c28b40(auStack_a90);
  } while( true );
}



/* Entry: 1086b4ef8; end: 1086b4f13;  */

long FUN_1086b4ef8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086da1c8();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086b4f14; end: 1086b4fef;  */

undefined1 * FUN_1086b4f14(undefined1 *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  long unaff_x22;
  undefined4 in_stack_00000010;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    in_stack_00000010 = param_4;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d276c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    param_1 = (undefined1 *)register0x00000008;
    func_0x000104be3f18();
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x000104be3f18();
    func_0x0001086d9ff8();
    func_0x000107c32714();
    if (((undefined1 *)register0x00000008 != (undefined1 *)0x0) &&
       (func_0x0001086dbae4(), (undefined1 *)register0x00000008 != (undefined1 *)0x0)) {
      lVar1 = *unaff_x19;
      func_0x0001086dbae4(lVar1);
      puVar2 = (undefined1 *)(lVar1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi_110346758
      )(puVar2,0,10);
      return puVar2;
    }
    return (undefined1 *)0x0;
  }
  return param_1;
}



/* Entry: 1086b4ff0; end: 1086b50d7;  */

long FUN_1086b4ff0(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x000107c32714();
  if ((param_1 != 0) && (func_0x0001086dbae4(), param_1 != 0)) {
    lVar1 = *unaff_x19;
    func_0x0001086dbae4(lVar1);
    lVar1 = lVar1 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi_110346758)
              (lVar1,0,10);
    return lVar1;
  }
  return 0;
}



/* Entry: 1086b50d8; end: 1086b514b;  */

void FUN_1086b50d8(void)

{
  func_0x0001086dbf94();
  func_0x0001086d9bbc();
  func_0x0001086d9bd0();
  func_0x0001086d9b3c();
  func_0x0001086d9dd4();
  func_0x0001086d9f78();
  func_0x000107c316c4();
  func_0x0001086d9860();
  func_0x0001086da160();
  func_0x0001086da5bc();
  func_0x000107c32690();
  func_0x000107c326ac();
  func_0x0001086da504();
  FUN_1086b4f14();
  return;
}



/* Entry: 1086b514c; end: 1086b5167;  */

long FUN_1086b514c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086da1c8();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086b5168; end: 1086b51bb;  */

void FUN_1086b5168(void)

{
  long unaff_x20;
  
  func_0x0001086dbe44();
  func_0x000107c27acc();
  FUN_1086cbec4(*(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158));
  return;
}



/* Entry: 1086b51bc; end: 1086b5573;  */

undefined8 ****** FUN_1086b51bc(undefined8 *****param_1)

{
  undefined1 in_ZR;
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  long lVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *****pppppuVar5;
  undefined4 uVar6;
  undefined8 ******in_x3;
  code *pcVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 ******unaff_x19;
  undefined8 *****unaff_x21;
  undefined8 ******unaff_x22;
  undefined8 ****ppppuVar8;
  undefined8 ***pppuVar9;
  undefined8 **ppuVar10;
  undefined8 in_register_00005008;
  undefined8 in_stack_00000050;
  undefined8 ****ppppuStack_dc0;
  undefined8 uStack_db8;
  undefined8 ****ppppuStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 *****pppppuStack_d98;
  undefined8 uStack_d90;
  undefined *puStack_d88;
  undefined8 *****pppppuStack_d80;
  undefined1 uStack_d78;
  undefined8 *puStack_d30;
  code *pcStack_d28;
  char cStack_7d8;
  undefined8 *****pppppuStack_7d0;
  undefined8 uStack_7c8;
  undefined *puStack_7c0;
  undefined8 uStack_7b8;
  byte bStack_1f8;
  undefined8 ****ppppuStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  byte bStack_48;
  undefined8 ***pppuStack_40;
  undefined8 **ppuStack_38;
  long lStack_30;
  undefined8 *****pppppuStack_10;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  ppppppuVar4 = (undefined8 ******)&ppppuStack_dc0;
  ppppppuVar1 = in_x3;
  func_0x0001086da550();
  func_0x0001086d9990();
  ppppppuVar2 = *(undefined8 *******)(extraout_x8 + 0x20);
  FUN_108862d6c(&ppppuStack_dc0);
  func_0x0001086db0fc(&ppppuStack_1f0);
  func_0x0001086da6a4();
  if ((bStack_48 & 1) != 0) {
    func_0x0001086dafb4(&ppppuStack_1f0);
    in_ZR = (int)ppppppuVar2 == 4;
    if (!(bool)in_ZR) {
      ppppppuVar2 = &pppppuStack_7d0;
      ppppppuVar1 = (undefined8 ******)&ppppuStack_1f0;
      FUN_1086b3094();
      if ((bStack_1f8 & 1) == 0) {
        pppppuVar5 = *in_x3;
        unaff_x21 = in_x3[1];
        func_0x0001086daec0();
        FUN_1086b5574();
      }
      else {
        ppppuVar8 = unaff_x19[0x1a][0x20];
        func_0x0001086da81c();
        ppppuStack_dc0 = param_1;
        uStack_db8 = in_register_00005008;
        if (extraout_x8_00 == 0) {
          ppppuStack_db0 = (undefined8 ****)((ulong)ppppuStack_db0 & 0xffffffffffffff00);
LAB_1086b529c:
          cStack_7d8 = 0;
          unaff_x22 = (undefined8 ******)&ppppuStack_db0;
          func_0x000107c28b7c(unaff_x22,&pppppuStack_7d0);
          cStack_7d8 = '\x01';
        }
        else {
          do {
            func_0x000107c325f8();
          } while (extraout_w10 != 0);
          ppppuStack_db0 = (undefined8 ****)((ulong)ppppuStack_db0 & 0xffffffffffffff00);
          cStack_7d8 = '\0';
          unaff_x22 = ppppppuVar2;
          if (bStack_1f8 == 1) goto LAB_1086b529c;
        }
        func_0x000107c28150();
        pppuVar9 = ppppuVar8[2];
        __ZNSt3__15mutex4lockEv(pppuVar9 + 1);
        ppuVar10 = pppuVar9[0xe];
        pppuStack_40 = (undefined8 ****)0x1086d2bb8;
        ppuStack_38 = (undefined8 **)&PTR_FUN_110a64428;
        lVar3 = 0x5f0;
        __Znwm();
        func_0x0001086d9ed4();
        if (extraout_x8_01 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_00 != 0);
        }
        *(undefined1 *)(lVar3 + 0x10) = 0;
        *(undefined1 *)(lVar3 + 0x5e8) = 0;
        in_ZR = cStack_7d8 == '\x01';
        if ((bool)in_ZR) {
          func_0x000107c27a88((undefined1 *)(lVar3 + 0x10),&ppppuStack_db0);
          *(undefined1 *)(lVar3 + 0x5e8) = 1;
        }
        pppppuVar5 = (undefined8 *****)&pppuStack_40;
        lStack_30 = lVar3;
        pppppuStack_10 = unaff_x22;
        func_0x000107c28154(pppuVar9 + 9);
        func_0x0001086d9d10(ppuStack_38);
        __ZNSt3__15mutex6unlockEv(pppuVar9 + 1);
        if (ppuVar10 == (undefined8 **)0x0) {
          ppuStack_38 = ppppuVar8[3];
          pppuStack_40 = ppppuVar8[2];
          if (ppppuVar8[3] != (undefined8 ***)0x0) {
            do {
              func_0x000107c325f8();
            } while (extraout_w10_01 != 0);
          }
          func_0x000107c3265c();
          func_0x0001086da95c();
          func_0x0001086da590();
        }
        FUN_1086b5648(&ppppuStack_dc0);
        ppppppuVar2 = ppppppuVar4;
      }
      func_0x0001086dafac();
      goto LAB_1086b5388;
    }
  }
  pppppuVar5 = *in_x3;
  unaff_x21 = in_x3[1];
  func_0x0001086daec0();
  FUN_1086b5574();
LAB_1086b5388:
  func_0x0001086daf94();
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_8);
      if ((bool)in_ZR) {
        return ppppppuVar2;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x0001086da590();
      ppppppuVar2 = (undefined8 ******)&ppppuStack_dc0;
      FUN_1086b5648();
      func_0x0001086dafac();
      func_0x0001086daf94();
      in_ZR = (int)unaff_x22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da750();
      ppppppuVar2 = unaff_x19;
      FUN_1086b5574();
      ___cxa_end_catch();
    }
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    func_0x0001086da510();
    func_0x0001086d98d0();
    uStack_7c8 = 0;
    uStack_7b8 = 0;
    puStack_7c0 = &UNK_10f4b0f0d;
    pppppuStack_7d0 = ppppppuVar2;
    func_0x0001086d9b3c();
    ppppppuVar1 = &pppppuStack_7d0;
    func_0x0001086da324(&ppppuStack_1f0);
    func_0x0001086da31c(&pppppuStack_7d0);
    func_0x000107c316c4();
    puStack_d88 = puStack_7c0;
    ppppuStack_dc0 = (undefined8 ****)CONCAT44(ppppuStack_dc0._4_4_,0x10);
    uStack_db8 = 0;
    uStack_da8 = uStack_1e8;
    ppppuStack_db0 = ppppuStack_1f0;
    uStack_da0 = uStack_1e0;
    ppppuStack_1f0 = (undefined8 *****)0x0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_d90 = uStack_7c8;
    pppppuStack_d98 = pppppuStack_7d0;
    pppppuStack_7d0 = (undefined8 *****)0x0;
    uStack_7c8 = 0;
    puStack_7c0 = (undefined *)0x0;
    uStack_d78 = 0;
    pppppuStack_d80 = ppppppuVar2;
    func_0x0001086da358();
    func_0x0001086db0d4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_7d0);
    ppppppuVar2 = (undefined8 ******)&ppppuStack_1f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar2);
    pppppuVar5 = *in_x3;
    unaff_x21 = in_x3[1];
    func_0x0001086da504();
    FUN_1086b5574();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  pcVar7 = FUN_1086b5574;
  func_0x0001086db620();
  puStack_d30 = &stack0x00000050;
  pcStack_d28 = pcVar7;
  func_0x0001086d9810();
  if (((extraout_x8_02 & 1) == 0) && (pppppuVar5 != (undefined8 *****)0x0)) {
    func_0x0001086d9c18();
    uVar6 = SUB84(ppppppuVar1,0);
    if (unaff_x21 != (undefined8 *****)0x0) {
      do {
        func_0x000107c325f8();
        uVar6 = SUB84(ppppppuVar1,0);
      } while (extraout_w10_02 != 0);
    }
    ppppuStack_db0 = (undefined8 ****)CONCAT44(ppppuStack_db0._4_4_,uVar6);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d2b74);
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (undefined8 ******)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_04 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086db934();
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x0001086db934();
    func_0x0001086d9ff8();
    func_0x0001006ba274();
    func_0x0001086cacb0();
    ppppppuVar1 = unaff_x19;
    func_0x0001006248cc();
    if (ppppppuVar1 != (undefined8 ******)0x0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return ppppppuVar2;
}



/* Entry: 1086b5574; end: 1086b5647;  */

long FUN_1086b5574(long param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long unaff_x22;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d2b74);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086db934();
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x0001086db934();
    func_0x0001086d9ff8();
    func_0x0001006ba274();
    func_0x0001086cacb0();
    lVar1 = unaff_x19;
    func_0x0001006248cc();
    if (lVar1 != 0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return param_1;
}



/* Entry: 1086b5648; end: 1086b566b;  */

long FUN_1086b5648(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006ba274();
  func_0x0001086cacb0();
  lVar1 = unaff_x19;
  func_0x0001006248cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086b566c; end: 1086b57d3;  */

byte FUN_1086b566c(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 unaff_x19;
  byte bVar3;
  undefined1 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001086dbf08(param_1);
    func_0x0001086d9a34();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    func_0x000107c326c4();
    FUN_108862cf0((undefined1 *)((long)register0x00000008 + -0x568));
    func_0x0001006b90c8((undefined1 *)((long)register0x00000008 + -0x390),
                        (undefined1 *)((long)register0x00000008 + -0x568));
    func_0x0001086db330();
    if ((*(byte *)((long)register0x00000008 + -0x1e8) & 1) == 0) {
LAB_1086b56bc:
      bVar3 = 0;
    }
    else {
      uVar2 = 0;
      func_0x000107c28e64();
      if ((uVar2 & 1) != 0) goto LAB_1086b56bc;
      param_2 = *(undefined1 **)(unaff_x21[0x1a] + 0x20);
      FUN_1086b1f68((undefined1 *)((long)register0x00000008 + -0x568));
      bVar3 = *(byte *)((long)register0x00000008 + -0x398);
      if ((bVar3 & 1) != 0) {
        plVar1 = unaff_x21 + 0x1a;
        unaff_x21 = *(undefined8 **)(*plVar1 + 0xe0);
        FUN_1086a125c((undefined1 *)((long)register0x00000008 + -0x1e0),
                      *(undefined8 *)(*plVar1 + 0x20),
                      (undefined1 *)((long)register0x00000008 + -0x390));
        param_2 = (undefined1 *)((long)register0x00000008 + -0x1e0);
        func_0x0001086db71c((undefined1 *)((long)register0x00000008 + -0x580));
        func_0x0001086da8b0();
        func_0x0001086da6cc(*(undefined8 *)*unaff_x21);
        (*extraout_x8_00)();
        func_0x0001086da6d8();
        func_0x0001086da6c4();
        func_0x000107c288e0((undefined1 *)((long)register0x00000008 + -0x1e0));
      }
      func_0x0001086dabcc();
    }
    func_0x000107c288dc((undefined1 *)((long)register0x00000008 + -0x390));
    unaff_x20 = param_2;
    while( true ) {
      func_0x0001006ba334(*(undefined8 *)((long)register0x00000008 + -0x38));
      if ((bool)in_ZR) {
        return bVar3;
      }
      ___stack_chk_fail();
      param_2 = unaff_x20;
      func_0x0001086da024();
      func_0x000104be1274();
      func_0x0001086da6c4();
      func_0x000107c288e0((undefined1 *)((long)register0x00000008 + -0x1e0));
      func_0x0001086dabcc();
      param_1 = (undefined1 *)((long)register0x00000008 + -0x390);
      func_0x000107c288dc();
      in_ZR = (int)unaff_x20 == 1;
      if (!(bool)in_ZR) break;
      func_0x0001086daabc();
      ___cxa_end_catch();
      bVar3 = 0;
      unaff_x20 = param_2;
    }
    unaff_x30 = FUN_1086b57d4;
    func_0x0001086d9ff8();
    param_1 = param_1 + -0x38;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x5a0);
  } while( true );
}



/* Entry: 1086b57d4; end: 1086b57db;  */

byte FUN_1086b57d4(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 unaff_x19;
  byte bVar3;
  undefined1 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001086dbf08(param_1 + -0x38);
    func_0x0001086d9a34();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    func_0x000107c326c4();
    FUN_108862cf0((undefined1 *)((long)register0x00000008 + -0x568));
    func_0x0001006b90c8((undefined1 *)((long)register0x00000008 + -0x390),
                        (undefined1 *)((long)register0x00000008 + -0x568));
    func_0x0001086db330();
    if ((*(byte *)((long)register0x00000008 + -0x1e8) & 1) == 0) {
LAB_1086b56bc:
      bVar3 = 0;
    }
    else {
      uVar2 = 0;
      func_0x000107c28e64();
      if ((uVar2 & 1) != 0) goto LAB_1086b56bc;
      param_2 = *(undefined1 **)(unaff_x21[0x1a] + 0x20);
      FUN_1086b1f68((undefined1 *)((long)register0x00000008 + -0x568));
      bVar3 = *(byte *)((long)register0x00000008 + -0x398);
      if ((bVar3 & 1) != 0) {
        plVar1 = unaff_x21 + 0x1a;
        unaff_x21 = *(undefined8 **)(*plVar1 + 0xe0);
        FUN_1086a125c((undefined1 *)((long)register0x00000008 + -0x1e0),
                      *(undefined8 *)(*plVar1 + 0x20),
                      (undefined1 *)((long)register0x00000008 + -0x390));
        param_2 = (undefined1 *)((long)register0x00000008 + -0x1e0);
        func_0x0001086db71c((undefined1 *)((long)register0x00000008 + -0x580));
        func_0x0001086da8b0();
        func_0x0001086da6cc(*(undefined8 *)*unaff_x21);
        (*extraout_x8_00)();
        func_0x0001086da6d8();
        func_0x0001086da6c4();
        func_0x000107c288e0((undefined1 *)((long)register0x00000008 + -0x1e0));
      }
      func_0x0001086dabcc();
    }
    func_0x000107c288dc((undefined1 *)((long)register0x00000008 + -0x390));
    unaff_x20 = param_2;
    while( true ) {
      func_0x0001006ba334(*(undefined8 *)((long)register0x00000008 + -0x38));
      if ((bool)in_ZR) {
        return bVar3;
      }
      ___stack_chk_fail();
      param_2 = unaff_x20;
      func_0x0001086da024();
      func_0x000104be1274();
      func_0x0001086da6c4();
      func_0x000107c288e0((undefined1 *)((long)register0x00000008 + -0x1e0));
      func_0x0001086dabcc();
      param_1 = (undefined1 *)((long)register0x00000008 + -0x390);
      func_0x000107c288dc();
      in_ZR = (int)unaff_x20 == 1;
      if (!(bool)in_ZR) break;
      func_0x0001086daabc();
      ___cxa_end_catch();
      bVar3 = 0;
      unaff_x20 = param_2;
    }
    unaff_x30 = FUN_1086b57d4;
    func_0x0001086d9ff8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x5a0);
  } while( true );
}



/* Entry: 1086b57dc; end: 1086b580f;  */

void FUN_1086b57dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 auStack_30 [2];
  undefined1 uStack_28;
  undefined1 uStack_20;
  undefined1 uStack_18;
  undefined1 uStack_14;
  
  auStack_30[0] = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_1086b5810(param_1,param_2,auStack_30,param_3);
  return;
}



/* Entry: 1086b5810; end: 1086b6457;  */

void FUN_1086b5810(undefined8 param_1,undefined8 param_2,int *param_3,long *param_4)

{
  ulong *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 extraout_x8;
  ulong **extraout_x8_00;
  ulong **ppuVar9;
  ulong uVar10;
  code *extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  int unaff_w22;
  long lVar15;
  ulong **ppuVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_628 [24];
  undefined1 auStack_610 [24];
  undefined1 auStack_5f8 [24];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  ulong uStack_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 auStack_590 [464];
  undefined1 *puStack_3c0;
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [24];
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  int iStack_358;
  undefined1 uStack_354;
  undefined1 auStack_350 [24];
  ulong **appuStack_338 [3];
  ulong *apuStack_320 [4];
  ulong *puStack_300;
  long lStack_2f8;
  long lStack_2f0;
  ulong uStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [40];
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  ulong uStack_270;
  uint uStack_268;
  undefined8 uStack_218;
  long lStack_148;
  long lStack_128;
  byte bStack_120;
  byte bStack_118;
  byte bStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [24];
  code *pcStack_70;
  undefined **ppuStack_68;
  ulong *puStack_60;
  long lStack_58;
  undefined4 uStack_50;
  ulong **ppuStack_40;
  undefined8 uStack_18;
  
  func_0x000107c32728();
  func_0x0001086d9934();
  uStack_18 = extraout_x8;
  func_0x000107c316c8(auStack_88,&UNK_10f4b0f27);
  plVar19 = (long *)(param_3 + 2);
  if ((char)param_3[4] == '\0') {
    plVar19 = (long *)&UNK_10df42bd0;
  }
  if ((char)param_3[7] == '\x01') {
    iVar11 = param_3[6];
  }
  else {
    iVar11 = 0;
  }
  lVar21 = *plVar19;
  uVar2 = *param_3 == 0;
  puVar5 = (undefined1 *)(unaff_x20 + 0xd8);
  FUN_1086d2be0(0x100089,puVar5,param_2);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x0001086da858();
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x0001086d9c9c();
    uStack_298 = 0;
    uStack_280 = 0x2d5;
    puVar5 = auStack_2a0;
    func_0x0001086da6fc(puVar5);
    func_0x000107c2884c(auStack_b0,puVar5);
    func_0x0001086da84c();
    func_0x0001086da424();
    func_0x000107c2882c(auStack_b0);
    puVar5 = auStack_2a0;
    func_0x000107c2882c();
  }
  puStack_c0 = (undefined1 *)0x0;
  uStack_c8 = 0;
  uStack_b8 = 0;
  func_0x000107c28258();
  uStack_b8 = 1;
  puStack_c0 = puVar5;
  func_0x0001086daea8();
  puVar5 = auStack_2a0;
  FUN_1086b1f68();
  if ((bStack_d0 & 1) == 0) {
    func_0x0001086da858();
    func_0x0001086d9a8c();
    uStack_50 = 0x2d6;
    func_0x0001086da4e4();
    func_0x000107c2884c(auStack_2c8,puVar5);
    func_0x0001086da84c();
    func_0x0001086da424();
    func_0x000107c2882c();
    func_0x0001086da528();
    if ((bStack_d0 & 1) == 0) {
      func_0x0001086da1f4();
      FUN_1086b64dc();
      goto LAB_1086b6174;
    }
  }
  func_0x0001086db774(auStack_2a0);
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2d0 = 0;
  if (*param_3 == 0) {
    ppuVar16 = &puStack_300;
    func_0x000107c316c8(ppuVar16,&UNK_10f4b0f4d);
    func_0x0001086dba98(apuStack_320);
    puVar1 = &uStack_270;
    if ((uStack_270 & 1) != 0) {
      puVar1 = (ulong *)(uStack_270 + 7);
    }
    ppuVar6 = &PTR_PTR_11326cb58;
    bVar3 = uStack_268 == 1;
    if (bVar3) {
      uVar18 = *(ulong *)(*puVar1 + 0x28);
      func_0x0001086db1a0();
      if (!bVar3) {
        ppuVar6 = (undefined **)extraout_x8_00;
      }
      func_0x000107c287e8(ppuVar6,apuStack_320);
      ppuVar16 = (ulong **)ppuVar6;
      uVar7 = uVar18;
      if ((int)ppuVar6 == 0) {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0;
      uVar18 = 0;
      for (lVar15 = (long)(int)uStack_268 << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
        uVar12 = *puVar1;
        ppuVar9 = *(ulong ***)(uVar12 + 0x18);
        ppuVar16 = (ulong **)ppuVar6;
        if (ppuVar9 != (ulong **)0x0) {
          ppuVar16 = ppuVar9;
        }
        func_0x000107c287e8(ppuVar16,apuStack_320);
        uVar10 = *(ulong *)(uVar12 + 0x28);
        uVar12 = uVar7;
        if (uVar7 <= uVar10) {
          uVar12 = uVar10;
        }
        if ((int)ppuVar16 == 0) {
          uVar10 = uVar18;
          uVar7 = uVar12;
        }
        uVar18 = uVar10;
        puVar1 = puVar1 + 1;
      }
    }
    func_0x0001086dbb2c();
    if (uVar18 <= uVar7) {
      uVar7 = uVar18;
    }
    FUN_108861424(appuStack_338,*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x20),param_2,
                  (ulong)ppuVar16 & 0xffffffff,uVar7);
    func_0x0001086da100();
    pcStack_70 = FUN_1086adc18;
    puStack_60 = &uStack_2e0;
    ppuStack_68 = &PTR_DAT_110a63748;
    FUN_1086a1530();
    func_0x0001086d9a28(ppuStack_68);
    ppuVar16 = &puStack_300;
    func_0x000107c316d4();
    func_0x0001086d9f9c();
    (*extraout_x8_01)();
    uVar7 = uStack_2d8;
    while ((uStack_2e0 != uStack_2d8 && uStack_2e0 <= uVar7 - 0x1a8 &&
           ((*(byte *)(uVar7 - 0x180) & 1) == 0))) {
      *(ulong ***)(uVar7 - 200) = ppuVar16;
      lVar15 = uVar7 - 0x158;
      FUN_1086a2754();
      ppuVar16 = (ulong **)((long)ppuVar16 + -1);
      *(undefined8 *)(lVar15 + 0x120) = *(undefined8 *)(uVar7 - 200);
      uVar7 = uVar7 - 0x1a8;
    }
    func_0x00010867b9fc(appuStack_338);
    func_0x000107c2a2e0(apuStack_320);
    ppuVar16 = &puStack_300;
  }
  else {
    func_0x000107c316c8(apuStack_320,&UNK_10f4b0f71);
    func_0x0001086da100();
    lStack_2f0 = (long)iVar11;
    puStack_300 = (ulong *)CONCAT44(puStack_300._4_4_,4);
    pcStack_70 = FUN_1086adc18;
    ppuStack_68 = &PTR_DAT_110a63748;
    puStack_60 = &uStack_2e0;
    lStack_2f8 = lVar21;
    FUN_1086a15ac();
    func_0x0001086d9a28(ppuStack_68);
    func_0x000107c316d4(apuStack_320);
    ppuVar16 = apuStack_320;
  }
  func_0x000107c316d0();
  func_0x0001086dba90();
  uVar18 = uStack_2d8;
  uVar7 = uStack_2e0;
  plVar19 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
  appuStack_338[0] = ppuVar16;
  func_0x0001086d9a8c();
  uStack_50 = 0x15c;
  func_0x0001086da4e4();
  func_0x0001086dabb8();
  func_0x000107c278b8(auStack_350);
  lVar15 = (long)(uVar18 - uVar7) / 0x1a8;
  lVar13 = lVar15;
  func_0x000107c28af4(lVar15);
  func_0x000107c28824(ppuVar16,auStack_350,lVar13);
  unaff_w22 = 0x41019f;
  func_0x000107c29054();
  (**(code **)(*plVar19 + 0x18))(plVar19,ppuVar16,appuStack_338);
  puVar5 = auStack_350;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
  func_0x0001086da528();
  plVar19 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
  func_0x0001086d9a8c();
  uStack_50 = 0x15f;
  func_0x0001086da6fc();
  func_0x0001086da190();
  (**(code **)(*plVar19 + 0x78))(plVar19,puVar5,(long)(int)lVar15);
  func_0x0001086da528();
  func_0x000107c316c8(apuStack_320,&UNK_10f4b0f84);
  while ((((uStack_2e0 != uStack_2d8 && ((bStack_120 & 1) != 0)) &&
          (*(char *)(uStack_2d8 - 0x180) == '\x01')) && (*(long *)(uStack_2d8 - 0x188) < lStack_128)
         )) {
    FUN_10867ba70(&uStack_2e0,uStack_2d8 - 0x1a8);
  }
  ppuVar16 = apuStack_320;
  func_0x000107c316d4();
  lVar15 = (long)(uStack_2d8 - uStack_2e0) / 0x1a8;
  uVar2 = *param_3 == 1;
  if ((bool)uVar2) {
    if (lStack_148 == 0) goto LAB_1086b5f90;
    uVar2 = bStack_118 == 1;
    if (!(bool)uVar2) {
      if ((char)param_3[7] != '\0') {
        uVar2 = lVar15 == iVar11;
      }
      goto LAB_1086b5f90;
    }
    if (((char)param_3[7] == '\0') || (uVar2 = lVar15 == iVar11, iVar11 <= lVar15))
    goto LAB_1086b5f90;
    lVar13 = *(long *)(*(long *)(unaff_x20 + 0xd0) + 0x100);
    lStack_2f8 = param_4[1];
    puStack_300 = (ulong *)*param_4;
    if (param_4[1] != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    lVar20 = *(long *)(lVar13 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar20 + 8);
    lVar14 = *(long *)(lVar20 + 0x70);
    pcStack_70 = (code *)0x1086d2c50;
    ppuStack_68 = &PTR_DAT_110a64458;
    lStack_58 = lStack_2f8;
    puStack_60 = puStack_300;
    if (lStack_2f8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    ppuStack_40 = ppuVar16;
    func_0x000107c28154(lVar20 + 0x48,&pcStack_70);
    func_0x0001086dad04();
    func_0x0001086daf54();
    if (lVar14 == 0) {
      ppuStack_68 = *(undefined ***)(lVar13 + 0x18);
      pcStack_70 = *(code **)(lVar13 + 0x10);
      if (*(long *)(lVar13 + 0x18) != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      (*extraout_x8_03)();
      func_0x000107c27e74(&pcStack_70);
    }
    func_0x000104be32dc(&puStack_300);
    uVar2 = false;
    lVar13 = 0x7fffffffffffffff;
    if ((bStack_120 == 1) &&
       (uVar2 = (0 < lStack_128 & bStack_118) == 0, lVar13 = lStack_128, (bool)uVar2)) {
      lVar13 = 0x7fffffffffffffff;
    }
    uVar4 = SUB81(auStack_2a0,0);
    func_0x000107c28dac();
    FUN_1086d1d40(auStack_3a0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c27994(auStack_390,param_2);
    lStack_370 = param_4[1];
    lStack_378 = *param_4;
    if (param_4[1] != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    lStack_368 = lVar13;
    lStack_360 = lVar21;
    iStack_358 = iVar11;
    uStack_354 = uVar4;
    FUN_1086cc204(&pcStack_70,auStack_3a0);
    FUN_1086cc180(&puStack_300);
    FUN_1086b65b8(&pcStack_70);
    puVar5 = auStack_3a0;
    FUN_1086b65b8();
    plVar19 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
    func_0x0001086d9a8c();
    uStack_50 = 0x15b;
    func_0x0001086da4e4();
    func_0x0001086dabb8();
    func_0x000107c278b8(auStack_3b8);
    func_0x000108681620(lVar15);
    func_0x000107c28824(puVar5,auStack_3b8,lVar15);
    func_0x0001086da190();
    func_0x0001086dba90();
    puStack_3c0 = puVar5;
    func_0x0001086dad28(*(undefined8 *)(*plVar19 + 0x18),plVar19);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3b8);
    func_0x0001086da528();
    func_0x000107c27f9c(&puStack_300);
  }
  else {
    if (*param_3 == 0) {
      func_0x000107c316c8(&pcStack_70,&UNK_10f4b0f93);
      func_0x0001086da2e8(uStack_218);
      uVar4 = 0;
      if (((bool)uVar2) &&
         (uVar4 = *(char *)(*(long *)(extraout_x8_02 + 0x10) + 0x20) == '\x01', (bool)uVar4)) {
        ppuVar16 = &puStack_300;
        func_0x0001086da234(ppuVar16);
        func_0x0001086dbb2c();
        FUN_1086a3fb4(&uStack_2e0,auStack_2a0,&puStack_300,ppuVar16);
        func_0x000107c27914(&puStack_300);
      }
      func_0x000107c316d0(&pcStack_70);
      uVar2 = uVar4;
    }
LAB_1086b5f90:
    uVar7 = (ulong)uStack_268;
    func_0x000107c28af4(uVar7);
    func_0x000107c28de8(auStack_590,auStack_2a0);
    uStack_5a8 = uStack_2d8;
    uStack_5b0 = uStack_2e0;
    uStack_5a0 = uStack_2d0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    FUN_1086b65dc();
    func_0x00010867b9fc(&uStack_5b0);
    puVar5 = auStack_590;
    func_0x000107c287e4();
    func_0x0001086dba90();
    ppuVar16 = appuStack_338[0];
    plVar19 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
    puVar8 = puVar5;
    func_0x0001086d9a8c();
    uStack_50 = 0x15d;
    func_0x0001086da4e4();
    func_0x0001086dabb8();
    func_0x000107c278b8(auStack_5c8);
    lVar21 = lVar15;
    func_0x000108681620(lVar15);
    func_0x000107c28824(puVar8,auStack_5c8,lVar21);
    func_0x0001086db570();
    puVar8 = auStack_5e0;
    func_0x000107c278b8(puVar8);
    func_0x0001086dba5c();
    func_0x0001086da190();
    (**(code **)(*plVar19 + 0x18))(plVar19,puVar8,appuStack_338);
    func_0x0001086dab18();
    func_0x0001086db684();
    func_0x0001086da528();
    plVar19 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
    func_0x0001086d9a8c();
    uStack_50 = 0x15e;
    func_0x0001086da6fc();
    func_0x0001086db570();
    puVar8 = auStack_5f8;
    func_0x000107c278b8(puVar8);
    func_0x0001086dba5c();
    func_0x0001086da190();
    (**(code **)(*plVar19 + 0x78))(plVar19,puVar8,(long)(int)lVar15);
    func_0x0001086db68c();
    func_0x0001086da528();
    plVar17 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
    func_0x0001086d9a8c();
    uStack_50 = 0x15b;
    func_0x0001086da6fc();
    func_0x0001086dabb8();
    func_0x000107c278b8(auStack_610);
    func_0x000107c28824(plVar19,auStack_610,lVar21);
    func_0x0001086db570();
    func_0x000107c278b8(auStack_628);
    func_0x000107c28824(plVar19,auStack_628,uVar7);
    func_0x0001086da190();
    puStack_300 = (ulong *)(((long)puVar5 - (long)ppuVar16) + (long)appuStack_338[0]);
    (**(code **)(*plVar17 + 0x18))(plVar17,plVar19);
    func_0x0001086da710();
    func_0x0001086da644();
    func_0x0001086da528();
  }
  func_0x000107c316d0(apuStack_320);
  func_0x00010867b9fc(&uStack_2e0);
LAB_1086b6174:
  func_0x000107c288c8(auStack_2a0);
  func_0x000107c316d0(auStack_88);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_18);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x000107c27e74(&pcStack_70);
      func_0x000104be32dc(&puStack_300);
      func_0x000107c316d0(apuStack_320);
      func_0x00010867b9fc(&uStack_2e0);
      func_0x000107c288c8(auStack_2a0);
      func_0x000107c316d0();
      uVar2 = unaff_w22 == 2;
      if (!(bool)uVar2) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086dad94();
      ___cxa_end_catch();
    }
    uVar2 = unaff_w22 == 1;
    if (!(bool)uVar2) break;
    func_0x0001086da000();
    FUN_1086b69b0();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  FUN_1086b5810();
  return;
}



/* Entry: 1086b6458; end: 1086b6493;  */

void FUN_1086b6458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined4 auStack_30 [2];
  undefined8 uStack_28;
  undefined1 uStack_20;
  undefined4 uStack_18;
  
  auStack_30[0] = 1;
  uStack_28 = param_3;
  uStack_20 = param_4;
  uStack_18 = param_5;
  FUN_1086b5810(param_1,param_2,auStack_30,param_6);
  return;
}



/* Entry: 1086b6494; end: 1086b64db;  */

void FUN_1086b6494(void)

{
  uint unaff_w19;
  
  func_0x000107c32750();
  func_0x000107c326d4();
  func_0x000107c3260c(unaff_w19 & 0x8b);
  func_0x0001086da13c();
  func_0x000107c325dc();
  return;
}



/* Entry: 1086b64dc; end: 1086b65b7;  */

undefined1 * FUN_1086b64dc(undefined1 *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *unaff_x19;
  long unaff_x22;
  undefined4 in_stack_00000010;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    in_stack_00000010 = param_4;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(FUN_1086d2bfc);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x000104be32dc();
    param_1 = (undefined1 *)register0x00000008;
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x000104be32dc();
    func_0x0001086d9ff8();
    func_0x000107c32730();
    func_0x000104be32dc();
    func_0x000107c327f0();
    puVar1 = unaff_x19;
    func_0x00010055315c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return unaff_x19;
  }
  return param_1;
}



/* Entry: 1086b65b8; end: 1086b65db;  */

long FUN_1086b65b8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c32730();
  func_0x000104be32dc();
  func_0x000107c327f0();
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086b65dc; end: 1086b69af;  */

void FUN_1086b65dc(undefined8 param_1,long param_2,int param_3,long *param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 in_stack_00000050;
  undefined8 uStack_650;
  long lStack_648;
  undefined1 auStack_640 [64];
  undefined1 *puStack_600;
  undefined8 uStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 *puStack_5b0;
  code *pcStack_5a8;
  long lStack_4a0;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined1 auStack_1f0 [72];
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x000107c32728();
  func_0x000107c325d4();
  uStack_18 = extraout_x8;
  func_0x000107c316c8(auStack_68,&UNK_10f4b1255);
  uStack_80 = 0;
  ppuStack_78 = (undefined **)0x0;
  uStack_70 = 0;
  func_0x000104be6ea0(&uStack_80,(param_4[1] - *param_4) / 0x1a8);
  lVar10 = *(long *)(param_2 + 0x1b0);
  lVar7 = *(long *)(unaff_x19 + 0xd0);
  uStack_c8 = *(undefined8 *)(lVar7 + 0x178);
  uStack_d0 = *(undefined8 *)(lVar7 + 0x170);
  lStack_88 = lVar10;
  if (*(long *)(lVar7 + 0x178) != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  puStack_b8 = &uStack_80;
  plStack_b0 = &lStack_88;
  lStack_c0 = param_2;
  func_0x0001086db200(auStack_a8);
  if (param_3 == 0) {
    lVar7 = *param_4;
    lVar9 = param_4[1];
    FUN_1086c3d7c(auStack_160,&uStack_d0);
    for (; lVar7 != lVar9; lVar7 = lVar7 + 0x1a8) {
      FUN_1086cf774(auStack_160,lVar7);
    }
    puVar4 = auStack_118;
    puVar8 = auStack_160;
    puVar2 = auStack_118;
    puVar5 = auStack_160;
  }
  else {
    lVar7 = *param_4;
    lVar9 = param_4[1];
    FUN_1086c3d7c(auStack_1f0,&uStack_d0);
    while (lVar9 != lVar7) {
      lVar9 = lVar9 + -0x1a8;
      FUN_1086cf774(auStack_1f0,lVar9);
    }
    puVar4 = auStack_1a8;
    puVar8 = auStack_1f0;
    puVar2 = auStack_1a8;
    puVar5 = auStack_1f0;
  }
  func_0x0001086cf73c(puVar2,puVar5);
  FUN_1086c3dd0(puVar4);
  FUN_1086c3dd0(puVar8);
  func_0x0001086dbdb4();
  lStack_648 = param_6[1];
  uStack_650 = *param_6;
  lVar7 = extraout_x8_00;
  if (param_6[1] != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
    lVar7 = *(long *)(unaff_x19 + 0xd0);
  }
  func_0x000107c291f8(auStack_640,*(undefined8 *)(lVar7 + 0x210),param_2);
  ppuStack_210 = ppuStack_78;
  uStack_218 = uStack_80;
  uStack_208 = uStack_70;
  ppuStack_78 = (undefined **)0x0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_200 = (undefined1)param_5;
  func_0x000107c28150();
  func_0x0001086dac8c();
  func_0x0001086da518();
  lVar7 = *(long *)(puVar4 + 0x70);
  uStack_50 = 0x1086d52b0;
  ppuStack_48 = &PTR_FUN_110a64cc8;
  puVar3 = (undefined8 *)0x458;
  __Znwm();
  puVar3[1] = lStack_648;
  *puVar3 = uStack_650;
  if (lStack_648 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001006b7234(puVar3 + 2,auStack_640);
  ppuVar12 = ppuStack_210;
  uVar11 = uStack_218;
  puVar3[0x88] = ppuStack_210;
  puVar3[0x87] = uStack_218;
  puVar3[0x89] = uStack_208;
  ppuStack_210 = (undefined **)0x0;
  uStack_208 = 0;
  uStack_218 = 0;
  *(undefined1 *)(puVar3 + 0x8a) = uStack_200;
  puStack_40 = puVar3;
  uStack_20 = param_5;
  func_0x0001086db824(puVar4 + 0x48);
  func_0x000100864c04(ppuStack_48);
  func_0x0001086da258();
  if (lVar7 == 0) {
    func_0x0001086d9eac();
    uStack_50 = uVar11;
    ppuStack_48 = ppuVar12;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    func_0x000107c3265c();
    func_0x0001086db82c();
    func_0x0001086da988();
  }
  func_0x0001086c3df4(&uStack_650);
  uVar1 = lStack_88 == lVar10;
  if (lVar10 < lStack_88) {
    func_0x000107c32698();
    func_0x0001086da598(&uStack_650);
    lStack_4a0 = lStack_88;
    func_0x000107c32698();
    FUN_10885ff98();
    func_0x0001086da9c0();
    func_0x0001086d9c9c();
    func_0x0001086db5a0();
    func_0x0001086da780();
    func_0x0001086dadb8();
    func_0x000107c288c8(&uStack_650);
  }
  FUN_1086c3dd0(&uStack_d0);
  func_0x000107c27a08(&uStack_80);
  func_0x000107c316d0(auStack_68);
  func_0x0001006ba334(uStack_18);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086da988();
  func_0x0001086c3df4(&uStack_650);
  FUN_1086c3dd0(&uStack_d0);
  func_0x000107c27a08(&uStack_80);
  puVar4 = auStack_68;
  func_0x000107c316d0();
  func_0x0001086d9ff8();
  pcVar6 = FUN_1086b69b0;
  func_0x0001086dbf94();
  puStack_5b0 = &stack0x00000050;
  pcStack_5a8 = pcVar6;
  func_0x0001086d9bbc();
  func_0x0001086d9bd0();
  uStack_5f8 = 0;
  uStack_5e8 = 0;
  puStack_600 = puVar4;
  puStack_5f0 = puVar3;
  func_0x0001086d9b3c();
  func_0x0001086d9dd4();
  func_0x0001086d9f78();
  func_0x000107c316c4();
  func_0x0001086d9860();
  func_0x0001086da160();
  func_0x0001086da5bc();
  func_0x000107c32690();
  func_0x000107c326ac();
  func_0x0001086da504();
  FUN_1086b64dc();
  return;
}



/* Entry: 1086b69b0; end: 1086b6a23;  */

void FUN_1086b69b0(void)

{
  func_0x0001086dbf94();
  func_0x0001086d9bbc();
  func_0x0001086d9bd0();
  func_0x0001086d9b3c();
  func_0x0001086d9dd4();
  func_0x0001086d9f78();
  func_0x000107c316c4();
  func_0x0001086d9860();
  func_0x0001086da160();
  func_0x0001086da5bc();
  func_0x000107c32690();
  func_0x000107c326ac();
  func_0x0001086da504();
  FUN_1086b64dc();
  return;
}



/* Entry: 1086b6a24; end: 1086b79eb;  */

void FUN_1086b6a24(code *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  code **ppcVar8;
  long lVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined8 **ppuVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 extraout_x8;
  long lVar16;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *pcVar17;
  code *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  undefined8 extraout_x8_10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  long lVar18;
  long lVar19;
  long unaff_x20;
  uint uVar20;
  long *plVar22;
  undefined8 uVar23;
  undefined **in_register_00005008;
  code *pcVar24;
  code *pcVar25;
  code *pcVar26;
  undefined8 *puStack_b10;
  undefined8 *puStack_b08;
  undefined1 auStack_b00 [16];
  undefined1 auStack_af0 [24];
  undefined1 auStack_ad8 [64];
  undefined8 uStack_a98;
  undefined1 *puStack_a90;
  undefined1 uStack_a88;
  undefined1 auStack_a80 [24];
  int iStack_a68;
  int iStack_a40;
  undefined1 auStack_a28 [40];
  uint uStack_a00;
  char cStack_9fc;
  undefined1 auStack_9f8 [24];
  code *apcStack_9e0 [4];
  uint uStack_9c0;
  int iStack_8dc;
  long lStack_8a0;
  byte bStack_82c;
  undefined1 auStack_828 [8];
  long alStack_820 [8];
  int iStack_7e0;
  byte bStack_7d0;
  char cStack_638;
  byte bStack_440;
  byte bStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_400;
  code **ppcStack_3d8;
  code **ppcStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined8 uStack_3b0;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  code *pcStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined1 uStack_370;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  char cStack_338;
  code *pcStack_1e0;
  undefined **ppuStack_1d8;
  code *pcStack_1d0;
  undefined **ppuStack_1c8;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 auStack_190 [344];
  char cStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  ulong uVar21;
  
  func_0x000107c32728();
  func_0x0001086d9934();
  uStack_18 = extraout_x8;
  func_0x0001086da4ac();
  uStack_430 = 0;
  func_0x000107c28258();
  uStack_420 = 1;
  uStack_428 = param_2;
  FUN_108705d34(alStack_820,*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0xb0),param_3);
  uVar21 = (ulong)bStack_438;
  uVar20 = (uint)bStack_438;
  puVar6 = auStack_a28;
  FUN_1086b79ec();
  func_0x0001086da100();
  FUN_1086a1a54(auStack_a80);
  uStack_a98 = 0;
  puStack_a90 = (undefined1 *)0x0;
  uStack_a88 = 0;
  func_0x000107c28258();
  uStack_a88 = 1;
  puStack_a90 = puVar6;
  func_0x0001086da864();
  func_0x000107c278b8(auStack_af0,"enterConversation");
  func_0x0001086da67c(auStack_ad8);
  func_0x0001086da5c4();
  func_0x0001086dba68();
  FUN_1086b7de0();
  FUN_108839478(&uStack_418,*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0xc0),auStack_a28);
  plVar22 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0xa0);
  FUN_1086b7ebc(&ppuStack_3a0,&uStack_418);
  func_0x0001086da424(*(undefined8 *)(*plVar22 + 200));
  func_0x000107c27a04(&ppuStack_3a0);
  func_0x000107c31428(auStack_ad8);
  if (lStack_400 != 0) {
    uVar23 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x110);
    func_0x0001086d2d44(&pcStack_1e0,&uStack_418);
    lVar16 = *(long *)(unaff_x20 + 0xd0);
    in_register_00005008 = *(undefined ***)(lVar16 + 0xf8);
    param_1 = *(code **)(lVar16 + 0xf0);
    pcStack_1b8 = param_1;
    ppuStack_1b0 = in_register_00005008;
    if (*(long *)(lVar16 + 0xf8) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
      lVar16 = *(long *)(unaff_x20 + 0xd0);
    }
    uVar7 = *(undefined8 *)(lVar16 + 0x30);
    func_0x000107c3271c(uVar7);
    func_0x0001086db95c();
    ppuStack_3a0 = (undefined **)FUN_1086d2db4;
    func_0x0001086d2e38(&ppuStack_398,&pcStack_1e0);
    func_0x00010bcce9b8(auStack_b00,uVar23,&ppuStack_3a0,uVar7);
    func_0x0001086d9c54();
    func_0x000107c27f44(auStack_b00);
    FUN_1086b7f0c(&pcStack_1e0);
  }
  FUN_1086d2c8c(&uStack_418);
  puVar14 = &uStack_a98;
  func_0x000107c2825c();
  puStack_b08 = puVar14;
  FUN_1086995ac(unaff_x20 + 0xd8,auStack_a28);
  func_0x0001086daa68();
  (**(code **)(extraout_x8_00 + 0x40))();
  iVar5 = (int)auStack_9f8;
  func_0x000107c28db0();
  iVar4 = 0;
  if (iVar5 != 0) {
    plVar22 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
    (**(code **)(*plVar22 + 0x48))(plVar22,0x26d,1);
    iVar4 = (int)plVar22;
  }
  lVar16 = alStack_820[0];
  if (bStack_438 != 1) goto LAB_1086b6e20;
  if ((bStack_440 & 1) == 0) goto LAB_1086b6e20;
  if ((bRam000000011372c528 & 1) == 0) goto LAB_1086b7680;
  do {
    uVar20 = (uint)uVar21;
    if (((iStack_7e0 - 0x11U < 2) && (cStack_638 == '\x01')) && ((bStack_7d0 & 1) == 0)) {
      func_0x0001086da864();
      func_0x000107c278b8(&puStack_30,&UNK_10f4b133d);
      func_0x0001086da67c(&uStack_418);
      func_0x0001086db924();
      func_0x0001086da100();
      FUN_108862e68(&ppuStack_3a0);
      func_0x0001006b90c8(&pcStack_1e0,&ppuStack_3a0);
      func_0x000107c28948(&ppuStack_3a0);
      if (cStack_38 == '\x01') {
        iVar5 = (int)auStack_190;
        func_0x000107c29e78();
        if (iVar5 == 0x11) {
          FUN_1086c2034();
          uVar23 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x20);
          ppuStack_3b8 = ppuStack_1c8;
          func_0x0001086d0774(&ppuStack_3a0,&ppuStack_3b8,1);
          FUN_108864508(uVar23,auStack_a28,&ppuStack_3a0);
          func_0x000107c27ae4(&ppuStack_3a0);
        }
      }
      func_0x000107c31428(&uStack_418);
      func_0x000107c288dc(&pcStack_1e0);
      func_0x000107c31424(&uStack_418);
    }
    ppuStack_3a0 = (undefined **)0x1086d2e80;
    ppuStack_398 = &PTR_DAT_110a64488;
    pcStack_390 = FUN_1086a6488;
    func_0x0001086da1e8(*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x240));
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    pcStack_1e0 = FUN_1086d2ea4;
    ppuStack_1d8 = &PTR_FUN_110a644a0;
    uStack_410 = 0;
    uStack_418 = 0;
    pcStack_1d0 = param_1;
    ppuStack_1c8 = in_register_00005008;
    func_0x000107c3265c();
    (*extraout_x8_02)();
    func_0x0001086d9a28(ppuStack_1d8);
    puVar14 = &uStack_418;
    func_0x000107c29124(puVar14);
    iVar4 = (int)puVar14;
    func_0x0001086d9c54();
LAB_1086b6e20:
    if ((bStack_82c & 1) == 0) {
      func_0x0001086da858();
      func_0x0001086d9ba4();
      uStack_380 = 0xa0;
      func_0x0001086dba68();
      func_0x000107c29054(&ppuStack_3a0,iVar4 + 0x41019f);
      FUN_1086b7f30();
      lVar19 = lStack_8a0;
      ppcVar8 = &pcStack_1e0;
      func_0x000107c278b8(ppcVar8,PTR_DAT_113268f70);
      uVar23 = 0x12e8;
      if (lVar19 < 1) {
        uVar23 = 0x12e0;
      }
      func_0x0001086db3d8(uVar23);
      func_0x0001086da9e8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_1e0);
      func_0x000107c2884c(&uStack_418,ppcVar8);
      func_0x0001086da84c();
      func_0x0001086da424();
      func_0x000107c2882c(&uStack_418);
      func_0x0001086da63c();
    }
    func_0x0001086da32c();
    puVar14 = &uStack_430;
    func_0x000107c2825c();
    lVar19 = lStack_8a0;
    puStack_b10 = puVar14;
    if (cStack_9fc == '\x01' && uStack_a00 < 2) {
      uVar3 = uStack_a00 == 1;
      if ((bool)uVar3) {
        plVar22 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x10);
        ppuStack_3a0 = (undefined **)((ulong)ppuStack_3a0 & 0xffffffffffffff00);
        uStack_370 = 0;
        (**(code **)(*plVar22 + 0x60))(&pcStack_1e0,plVar22,auStack_a28,&ppuStack_3a0);
        func_0x00010086ab34(&ppuStack_3a0);
        func_0x000107c27f9c(&pcStack_1e0);
      }
    }
    else {
      if (uVar20 == 0) {
        lVar16 = 0;
        bVar2 = false;
      }
      else {
        func_0x0001086dba68();
        bVar2 = (int)puVar14 == 2;
      }
      lVar9 = unaff_x20 + 0x178;
      func_0x000107c28ecc(lVar9,auStack_9f8);
      if (lVar9 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(lVar9 + 0x28);
      }
      uVar1 = 0;
      if (lVar19 < lVar16) {
        uVar1 = uVar20;
      }
      if ((lVar19 == 0) || ((uVar1 & 1) != 0)) {
        func_0x0001086d9d7c(*(undefined8 *)(unaff_x20 + 0xd0));
        func_0x0001086dad40();
        if (lVar9 != 0) goto LAB_1086b6fb8;
      }
      else if (lVar9 == 0) {
        if (bVar2) {
          func_0x0001086d9d7c(*(undefined8 *)(unaff_x20 + 0xd0));
          func_0x0001086d9e68();
        }
      }
      else {
        func_0x0001086d9d7c(*(undefined8 *)(unaff_x20 + 0xd0));
        func_0x0001086dad40();
LAB_1086b6fb8:
        func_0x0001086d9ba4();
        uStack_380 = 0x16a;
        func_0x0001086db970();
        func_0x000107c28b44();
        func_0x0001086da63c();
        if (lVar19 != 0 && lVar18 != 0 || (lVar18 != 0 || lVar19 != 0) && lVar18 == 0) {
          func_0x0001086d9ba4();
          uStack_380 = 0x16b;
          func_0x0001086db970();
          func_0x000107c28b4c();
          func_0x0001086da63c();
        }
      }
      pppuVar10 = (undefined ***)(unaff_x20 + 0x380);
      func_0x000107c289e8();
      if (*(char *)pppuVar10 == '\x01' && iStack_8dc == 8) {
        func_0x0001086da100();
        FUN_1088657e4(&ppuStack_3a0);
        if (cStack_338 == '\x01') {
          uVar23 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0xe0);
          FUN_1086e09c0(&pcStack_1e0,*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x20),auStack_a28
                        ,&ppuStack_3a0);
          func_0x0001086db594();
          (*extraout_x8_03)(uVar23,auStack_9f8,&ppuStack_3a0,&pcStack_1e0);
          func_0x00010867b9fc(&pcStack_1e0);
        }
        pppuVar10 = &ppuStack_3a0;
        FUN_1086cc6d0();
      }
      iVar5 = (int)pppuVar10;
      uVar3 = *(char *)(unaff_x20 + 0x112) == '\x01';
      if ((bool)uVar3) {
        iVar4 = (int)apcStack_9e0;
        FUN_1086a63a0();
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar5 = (int)unaff_x20 + 0x118;
          uVar21 = 0;
          FUN_1086995ac();
          if ((uVar21 & 1) != 0) {
            func_0x0001086dac44();
            pppuVar10 = &ppuStack_3a0;
            func_0x0001086ce8a0();
            func_0x0001086da234(&puStack_30);
            func_0x000107c29ee4(&pcStack_1e0);
            FUN_1086bce28(pppuVar10);
            func_0x000107c287d0();
            func_0x000107c2a2e0(&pcStack_1e0);
            func_0x0001086da694();
            FUN_108841374(&pcStack_1e0,&UNK_10df617c0);
            func_0x0001086bce5c(pppuVar10);
            FUN_1086a509c();
            func_0x000107c2a2b4(&pcStack_1e0);
            *(undefined4 *)(pppuVar10 + 5) = 3;
            ppcVar8 = apcStack_9e0;
            FUN_1086a3e64(&pcStack_1e0,ppcVar8,unaff_x20 + 0x98);
            if (((ulong)ppuStack_1c8 & 1) == 0) {
              ppcVar8 = &pcStack_1e0;
              FUN_108690b88(ppcVar8,unaff_x20 + 0x98);
            }
            lVar19 = *(long *)(unaff_x20 + 0xd0);
            func_0x0001086db070();
            ppcVar8[1] = (code *)0x0;
            ppcVar8[2] = (code *)0x0;
            *ppcVar8 = (code *)&PTR_FUN_110a65170;
            pcVar17 = pcStack_1d0;
            ppuVar11 = ppuStack_1d8;
            pcVar24 = pcStack_1e0;
            ppuStack_1d8 = (undefined **)0x0;
            pcStack_1e0 = (code *)0x0;
            pcStack_1d0 = (code *)0x0;
            in_register_00005008 = *(undefined ***)(lVar19 + 0x188);
            param_1 = *(code **)(lVar19 + 0x180);
            if (*(long *)(lVar19 + 0x188) != 0) {
              do {
                func_0x000107c325ec();
                pcVar17 = extraout_x8_04;
              } while (extraout_w11 != 0);
            }
            pcVar26 = *(code **)(lVar19 + 0x138);
            pcVar25 = *(code **)(lVar19 + 0x130);
            if (*(long *)(lVar19 + 0x138) != 0) {
              do {
                func_0x000107c325ec();
                pcVar17 = extraout_x8_05;
              } while (extraout_w11_00 != 0);
            }
            ppcVar8[3] = (code *)&PTR_FUN_110a651c0;
            ppcVar8[5] = (code *)ppuVar11;
            ppcVar8[4] = pcVar24;
            ppcVar8[6] = pcVar17;
            uStack_28 = 0;
            puStack_20 = (undefined8 *)0x0;
            puStack_30 = (undefined8 *)0x0;
            ppcVar8[8] = (code *)in_register_00005008;
            ppcVar8[7] = param_1;
            uStack_3b0 = 0;
            ppuStack_3b8 = (undefined **)0x0;
            ppcVar8[10] = pcVar26;
            ppcVar8[9] = pcVar25;
            puStack_3c0 = (undefined8 *)0x0;
            puStack_3c8 = (undefined8 *)0x0;
            func_0x000107c288a4(&puStack_3c8);
            func_0x000107c286e0(&ppuStack_3b8);
            func_0x0001086da694();
            ppcStack_3d8 = ppcVar8 + 3;
            ppcStack_3d0 = ppcVar8;
            FUN_1086bb2f4();
            func_0x000104be3970(&ppcStack_3d8);
            iVar5 = (int)&pcStack_1e0;
            func_0x000107c279dc();
            func_0x0001086db968();
          }
        }
      }
      func_0x00010086492c();
      func_0x0001086daf04();
      (*extraout_x8_06)();
      if (iVar5 != 0) {
        uVar21 = 0;
        FUN_1086995ac(unaff_x20 + 0x140);
        if ((uVar21 & 1) != 0) {
          func_0x0001086dac44();
          FUN_1088f9614(&ppuStack_3a0);
          uStack_358 = 0x13;
          ppuVar11 = ppuStack_398;
          if (((ulong)ppuStack_398 & 1) != 0) {
            func_0x0001086da030();
          }
          func_0x0001086d0740();
          ppuVar12 = &puStack_30;
          ppuStack_360 = ppuVar11;
          func_0x0001086da234();
          func_0x000107c29ee4(&pcStack_1e0);
          func_0x0001086da344();
          if (ppuVar12 == (undefined8 **)0x0) {
            puVar13 = ppuVar11[1];
            if (((ulong)puVar13 & 1) != 0) {
              func_0x0001086da030();
            }
            func_0x000107c287e0();
            ppuVar11[3] = puVar13;
          }
          func_0x000107c287d0();
          func_0x000107c2a2e0(&pcStack_1e0);
          func_0x0001086da694();
          lVar19 = *(long *)(unaff_x20 + 0xd0);
          uStack_28 = 1;
          puVar14 = (undefined8 *)0x48;
          __Znwm();
          puVar14[1] = 0;
          puVar14[2] = 0;
          *puVar14 = &PTR_FUN_110a65208;
          puStack_20 = puVar14;
          func_0x000107c27994(&pcStack_1e0,auStack_9f8);
          in_register_00005008 = *(undefined ***)(lVar19 + 0x138);
          param_1 = *(code **)(lVar19 + 0x130);
          if (*(long *)(lVar19 + 0x138) != 0) {
            do {
              func_0x000107c325f8();
            } while (extraout_w10_01 != 0);
          }
          puVar14[3] = &PTR_FUN_110a65258;
          puVar14[5] = ppuStack_1d8;
          puVar14[4] = pcStack_1e0;
          puVar14[6] = pcStack_1d0;
          pcStack_1e0 = (code *)0x0;
          ppuStack_1d8 = (undefined **)0x0;
          pcStack_1d0 = (code *)0x0;
          puVar14[8] = in_register_00005008;
          puVar14[7] = param_1;
          uStack_3b0 = 0;
          ppuStack_3b8 = (undefined **)0x0;
          func_0x000107c288a4(&ppuStack_3b8);
          func_0x000107c27914(&pcStack_1e0);
          puStack_20 = (undefined8 *)0x0;
          FUN_1086d74f4(&puStack_30);
          puStack_3c8 = puVar14 + 3;
          puStack_3c0 = puVar14;
          FUN_1086bb2f4();
          func_0x000104be3970(&puStack_3c8);
          func_0x0001086db968();
        }
      }
    }
    uVar23 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x110);
    func_0x0001086da1e8();
    pcStack_1e0 = param_1;
    ppuStack_1d8 = in_register_00005008;
    if (extraout_x8_07 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    func_0x000107c27994(&pcStack_1d0,auStack_a28);
    puVar15 = *(undefined8 **)(*(long *)(unaff_x20 + 0xd0) + 0x30);
    func_0x000107c3271c();
    (*extraout_x8_08)();
    ppuStack_3a0 = (undefined **)FUN_1086d5fc4;
    ppuStack_398 = &PTR_FUN_110a64e40;
    puVar14 = puVar15;
    func_0x000107c3268c();
    puVar14[1] = ppuStack_1d8;
    *puVar14 = pcStack_1e0;
    ppuStack_1d8 = (undefined **)0x0;
    pcStack_1e0 = (code *)0x0;
    func_0x000107c27994(puVar14 + 2,&pcStack_1d0);
    pcStack_390 = (code *)puVar14;
    func_0x00010bcce9b8(&puStack_30,uVar23,&ppuStack_3a0,puVar15);
    func_0x0001086d9c54();
    func_0x000107c27f44(&puStack_30);
    func_0x0001086c5688(&pcStack_1e0);
    lVar19 = *(long *)(unaff_x20 + 0xd0);
    uVar23 = *(undefined8 *)(lVar19 + 0x290);
    in_register_00005008 = *(undefined ***)(lVar19 + 0x68);
    param_1 = *(code **)(lVar19 + 0x60);
    pcStack_1e0 = param_1;
    ppuStack_1d8 = in_register_00005008;
    if (*(long *)(lVar19 + 0x68) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c28dc8(&pcStack_1d0,apcStack_9e0);
    FUN_1086d0898(&ppuStack_3a0,&pcStack_1e0);
    FUN_1086d0814(&puStack_30,&ppuStack_3a0,uVar23);
    func_0x0001086c6df4(&ppuStack_3a0);
    func_0x0001086c6df4(&pcStack_1e0);
    func_0x000107c27f9c(&puStack_30);
    uVar23 = **(undefined8 **)(unaff_x20 + 0xd0);
    func_0x0001086da408(uVar23);
    (*extraout_x8_09)();
    FUN_10868168c(0x1e5,uVar23);
    func_0x000107c28288(&uStack_430);
    func_0x0001086d9ba4();
    uStack_380 = 0x7d;
    func_0x0001086db570();
    func_0x000107c278b8(&pcStack_1e0);
    uVar21 = (ulong)uStack_9c0;
    func_0x000107c28af4(uVar21);
    pppuVar10 = &ppuStack_3a0;
    func_0x000107c28824(pppuVar10,&pcStack_1e0,uVar21);
    puVar14 = &uStack_430;
    func_0x000107c2825c();
    puStack_30 = puVar14;
    func_0x000107c28b50(pppuVar10,&puStack_30);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_1e0);
    func_0x0001086da63c();
    func_0x0001086d9ba4();
    uStack_380 = 0x166;
    func_0x0001086dabb8();
    func_0x000107c278b8(&puStack_30);
    uVar21 = (ulong)(uint)(iStack_a40 + iStack_a68);
    func_0x000107c28af4();
    func_0x000107c28824(&ppuStack_3a0,&puStack_30,uVar21);
    func_0x000107c28b50();
    func_0x0001086db924();
    func_0x0001086da63c();
    pcStack_390 = (code *)0x0;
    uStack_388 = 0;
    ppuStack_398 = (undefined **)0x0;
    ppuStack_3a0 = &PTR_FUN_110a609a8;
    uStack_380 = 0x167;
    func_0x000107c28b50(&ppuStack_3a0,auStack_828);
    func_0x0001086da63c();
    pcStack_390 = (code *)0x0;
    uStack_388 = 0;
    ppuStack_398 = (undefined **)0x0;
    ppuStack_3a0 = &PTR_FUN_110a609a8;
    uStack_380 = 0x168;
    func_0x0001086dabb8();
    func_0x000107c278b8(&ppuStack_3b8);
    func_0x000107c28824(&ppuStack_3a0,&ppuStack_3b8,uVar21);
    func_0x000107c28b50();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_3b8);
    func_0x0001086da63c();
    func_0x0001086d9ba4();
    uStack_380 = 0x169;
    func_0x000107c28b50(&ppuStack_3a0,&puStack_b10);
    func_0x0001086da63c();
    func_0x0001086db140();
    FUN_1086cc73c(auStack_a80);
    func_0x0001086cc760(auStack_a28);
    func_0x0001086cc784(alStack_820);
    func_0x0001006ba334(uStack_18);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
LAB_1086b7680:
    lVar19 = 0x11372c528;
    ___cxa_guard_acquire();
    if ((int)lVar19 != 0) {
      func_0x0001086da3c4();
      *(undefined8 *)(lVar19 + 8) = 0;
      *(undefined8 *)(lVar19 + 0x10) = 0;
      func_0x0001086db418(&PTR_SUB_110a652b8);
      uRam000000011372c550 = extraout_x8_10;
      lRam000000011372c558 = lVar19;
      ___cxa_guard_release(0x11372c528);
    }
  } while( true );
}



/* Entry: 1086b79ec; end: 1086b7ddf;  */

void FUN_1086b79ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 uVar6;
  char cVar7;
  long alStack_580 [4];
  undefined4 uStack_560;
  undefined1 auStack_558 [40];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [240];
  uint uStack_428;
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [8];
  undefined1 uStack_3e0;
  undefined4 uStack_3d8;
  undefined1 uStack_3d4;
  undefined1 auStack_2d0 [24];
  undefined1 *puStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined1 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_280;
  undefined1 uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
  undefined1 uStack_240;
  undefined4 uStack_238;
  undefined1 uStack_234;
  undefined1 auStack_228 [344];
  undefined8 uStack_d0;
  char cStack_b8;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  char cStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined1 uStack_8;
  
  func_0x0001086dbf74();
  plVar2 = alStack_580;
  func_0x000107c32678();
  uStack_18 = 0;
  func_0x000107c28258();
  uStack_8 = 1;
  uStack_10 = param_1;
  func_0x0001086da100();
  func_0x0001086db810(auStack_228);
  FUN_108663a10(&uStack_50,auStack_228);
  FUN_108656820(auStack_228);
  auStack_228[0] = 0;
  cStack_58 = '\0';
  if (cStack_20 == '\x01') {
    func_0x0001086da100();
    FUN_1086a1148(auStack_400);
    func_0x000107c290ac(auStack_228,auStack_400);
    func_0x000107c288c8(auStack_400);
    if (cStack_58 == '\x01') {
      bVar4 = false;
      uVar6 = 0;
      cVar7 = cStack_b8;
      if (cStack_b8 == '\0') {
        uVar6 = uStack_d0;
      }
      goto LAB_1086b7ab0;
    }
  }
  bVar4 = true;
  uVar6 = 0;
  cVar7 = '\0';
LAB_1086b7ab0:
  if (((cStack_20 != '\x01') || (bVar4)) || (cVar7 != '\0')) {
    func_0x000107c28dcc(auStack_518);
    if (param_4 < 2) {
      uStack_428 = param_4;
    }
    func_0x0001086daa50(auStack_400);
    func_0x0001086a506c(auStack_518);
    func_0x000107c287d0();
    func_0x000107c2a2e0(auStack_400);
    func_0x0001086da478(auStack_400);
    func_0x000107c28dc8(auStack_3e8,auStack_518);
    puVar1 = auStack_2d0;
    func_0x000107c278b8(puVar1,&DAT_10f4bdfe8);
    func_0x0001086d9f9c();
    (*extraout_x8)();
    uStack_2b0 = 1;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_278 = 1;
    uStack_274 = 7;
    uStack_240 = 0;
    uStack_24f = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_257 = 0;
    uStack_260 = 0;
    uStack_238 = 3;
    uStack_234 = 1;
    puStack_2b8 = puVar1;
    uStack_2a8 = uVar6;
    func_0x000107c29058(auStack_228,auStack_400);
    func_0x000107c287e4(auStack_400);
    func_0x0001086da478(auStack_400);
    auStack_3e8[0] = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 3;
    uStack_3d4 = 1;
    FUN_1086b7fd0(&uStack_50,auStack_400);
    func_0x000107c27914(auStack_400);
    func_0x0001086da864();
    uVar6 = *(undefined8 *)(extraout_x8_00 + 0x18);
    func_0x000107c278b8(auStack_530,&UNK_10f4b0fb2);
    func_0x000107c31420(auStack_400,uVar6,auStack_530);
    func_0x0001086da644();
    if (cVar7 != '\0') {
      func_0x0001086da720(*(undefined8 *)(unaff_x20 + 0xd0));
      (**(code **)(extraout_x8_01 + 0xd0))();
      func_0x0001086da100();
      FUN_108868114();
    }
    func_0x0001086da100();
    FUN_10885fef4();
    func_0x0001086da100();
    FUN_10885ff98();
    func_0x000107c31428(auStack_400);
    plVar5 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
    func_0x0001086da304();
    alStack_580[2] = 0;
    alStack_580[3] = 0;
    alStack_580[0] = extraout_x8_02 + 0x10;
    alStack_580[1] = 0;
    uStack_560 = 0x259;
    func_0x0001086db7a0(alStack_580,0x1bd);
    func_0x000107c2884c(auStack_558,plVar2);
    func_0x0001086dad8c(*(undefined8 *)(*plVar5 + 0x50));
    func_0x0001086da90c();
    func_0x0001086da6ac();
    func_0x000107c31424(auStack_400);
    func_0x000107c2a3a8(auStack_518);
  }
  unaff_x19[1] = uStack_48;
  *unaff_x19 = uStack_50;
  unaff_x19[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  unaff_x19[4] = CONCAT35(uStack_2b,uStack_30);
  unaff_x19[3] = uStack_38;
  *(ulong *)((long)unaff_x19 + 0x25) = CONCAT53(uStack_28,uStack_2b);
  func_0x000107c28de8(unaff_x19 + 6,auStack_228);
  puVar3 = &uStack_18;
  func_0x000107c2825c();
  unaff_x19[0x40] = puVar3;
  func_0x000107c288c8(auStack_228);
  FUN_1086569a0(&uStack_50);
  return;
}



/* Entry: 1086b7de0; end: 1086b7ebb;  */

void FUN_1086b7de0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x0001086dbe64();
  if (*(long *)(param_3 + 0x18) != 0) {
    func_0x0001086da840();
    func_0x0001086db860();
    func_0x0001086da55c();
    FUN_10886488c();
  }
  if (*(long *)(unaff_x23 + 0x18) == 0) {
    bVar1 = true;
  }
  else {
    func_0x0001086da840();
    FUN_1086c07b8();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x20);
    FUN_10869ad4c(auStack_58,*(undefined8 *)(unaff_x23 + 0x10),0);
    FUN_108864508(uVar2,param_2,auStack_58);
    func_0x000107c27ae4(auStack_58);
    bVar1 = *(long *)(unaff_x23 + 0x18) == 0;
  }
  if ((*(long *)(unaff_x22 + 0x18) != 0) || (!bVar1)) {
    func_0x0001086da720(*(undefined8 *)(param_1 + 0xd0));
    func_0x0001086da664(*(undefined8 *)(extraout_x8 + 0x140));
    (*extraout_x8_00)();
  }
  return;
}



/* Entry: 1086b7ebc; end: 1086b7f0b;  */

void FUN_1086b7ebc(long param_1)

{
  undefined8 extraout_x8;
  long unaff_x20;
  long *plVar1;
  
  func_0x0001086dbe44();
  func_0x000107c27ab0(extraout_x8,*(undefined8 *)(param_1 + 0x18));
  plVar1 = (long *)(unaff_x20 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    func_0x000107c28840();
  }
  return;
}



/* Entry: 1086b7f0c; end: 1086b7f2f;  */

undefined8 FUN_1086b7f0c(void)

{
  undefined8 unaff_x19;
  
  func_0x000107c32730();
  FUN_1086cc6ac();
  func_0x0001086d2cb4();
  func_0x000107c327e0();
  FUN_1086d2d2c();
  return unaff_x19;
}



/* Entry: 1086b7f30; end: 1086b7f87;  */

void FUN_1086b7f30(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x000107c32628();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000107c32624();
  }
  else {
    func_0x0001086db228();
  }
  func_0x000107c326d4();
  func_0x000107c327bc();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000107c3260c();
  }
  else {
    func_0x0001086db210();
  }
  func_0x000107c32630();
  func_0x000107c325dc();
  return;
}



/* Entry: 1086b7f88; end: 1086b7fcf;  */

void FUN_1086b7f88(void)

{
  uint unaff_w19;
  
  func_0x000107c32750();
  func_0x000107c326d4();
  func_0x000107c3260c(unaff_w19 & 0x1df);
  func_0x0001086da13c();
  func_0x000107c325dc();
  return;
}



/* Entry: 1086b7fd0; end: 1086b8003;  */

long FUN_1086b7fd0(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1086568f8();
  }
  else {
    func_0x000108656950();
  }
  return param_1;
}



/* Entry: 1086b8004; end: 1086b805b;  */

void FUN_1086b8004(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x000107c32628();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000107c32624();
  }
  else {
    func_0x0001086db228();
  }
  func_0x000107c326d4();
  func_0x000107c327bc();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000107c3260c();
  }
  else {
    func_0x0001086db210();
  }
  func_0x000107c32630();
  func_0x000107c325dc();
  return;
}



/* Entry: 1086b805c; end: 1086b80e7;  */

void FUN_1086b805c(void)

{
  FUN_1086b80e8();
  return;
}



/* Entry: 1086b80e8; end: 1086b817f;  */

void FUN_1086b80e8(void)

{
  undefined1 auStack_3b0 [448];
  undefined1 auStack_1f0 [424];
  byte bStack_48;
  
  func_0x0001086da0b0();
  FUN_108862cf0(auStack_3b0);
  func_0x0001086db0fc(auStack_1f0);
  func_0x0001086da6a4();
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    FUN_1086c2034();
  }
  func_0x000107c288dc(auStack_1f0);
  return;
}



/* Entry: 1086b8180; end: 1086b8b47;  */

undefined1 * FUN_1086b8180(undefined8 param_1,long *param_2,long ****param_3,ulong param_4)

{
  char cVar1;
  long ***ppplVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  long ****pppplVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined **ppuVar10;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long *unaff_x20;
  long ****pppplVar11;
  uint uVar12;
  long *plVar13;
  undefined1 auStack_548 [24];
  long ***ppplStack_530;
  long ***ppplStack_528;
  long *plStack_520;
  undefined8 uStack_518;
  undefined4 uStack_510;
  uint uStack_508;
  undefined1 uStack_504;
  undefined1 auStack_500 [24];
  long **applStack_4e8 [14];
  undefined8 uStack_478;
  char cStack_3e7;
  int iStack_3e4;
  byte bStack_330;
  undefined1 auStack_328 [24];
  long lStack_310;
  undefined1 uStack_2f9;
  long ***ppplStack_2f8;
  long ***ppplStack_2f0;
  long ***appplStack_2e8 [2];
  undefined8 uStack_2d8;
  long ***ppplStack_2d0;
  uint uStack_2c8;
  long ***ppplStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  int iStack_298;
  char cStack_294;
  undefined8 uStack_258;
  undefined1 uStack_250;
  byte bStack_210;
  byte bStack_138;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long *plStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_40;
  long ***ppplStack_38;
  undefined **ppuStack_30;
  long *plStack_28;
  int iStack_20;
  undefined8 uStack_8;
  
  func_0x0001086dbf74();
  iVar5 = (int)param_4;
  func_0x0001086d9934();
  uStack_8 = extraout_x8;
  if ((bRam000000011372c510 & 1) == 0) {
    lVar9 = 0x11372c510;
    ___cxa_guard_acquire();
    if ((int)lVar9 != 0) {
      func_0x0001086da3c4();
      *(undefined8 *)(lVar9 + 8) = 0;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      func_0x0001086db418(&PTR_SUB_110a644c8);
      uRam000000011372c530 = extraout_x8_06;
      lRam000000011372c538 = lVar9;
      ___cxa_guard_release(0x11372c510);
    }
  }
  func_0x0001086dbab0();
  uVar6 = *(undefined8 *)(unaff_x20[0x1a] + 0xc0);
  FUN_10883928c(auStack_328,uVar6,param_2);
  if (lStack_310 != 0) {
    plVar13 = *(long **)(unaff_x20[0x1a] + 0xa0);
    FUN_1086b7ebc(auStack_500,auStack_328);
    func_0x0001086db310(*(undefined8 *)(*plVar13 + 200));
    func_0x000107c27a04(auStack_500);
    uVar6 = *(undefined8 *)(unaff_x20[0x1a] + 0xf0);
    func_0x000107c3271c();
    func_0x0001086db6e4();
  }
  func_0x0001086da100();
  func_0x0001086da598(auStack_500);
  uStack_508 = uStack_508 & 0xffffff00;
  uStack_504 = 0;
  bVar3 = bStack_330 == 1;
  if (bVar3) {
    func_0x0001086db774(auStack_500);
    uStack_508 = (uint)uVar6;
  }
  uStack_504 = bVar3;
  func_0x0001086dbe0c();
  func_0x0001086dad28(*(undefined8 *)(extraout_x8_00 + 0xe0));
  uVar4 = 0;
  if (bStack_330 == 1) {
    uVar4 = iStack_3e4 == 3;
    if ((bool)uVar4) {
      func_0x0001086da100();
      plVar13 = param_2;
      FUN_1086a5e84();
      if (((ulong)plVar13 & 1) != 0) {
        func_0x0001086da100();
        FUN_10886acfc(&lStack_2a8);
        if ((bStack_210 & 1) == 0) {
          func_0x0001086da478(&ppplStack_d0);
          plStack_b8 = (long *)((ulong)plStack_b8 & 0xffffffffffffff00);
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_40 = 0;
          FUN_1086b8b48(&lStack_2a8,&ppplStack_d0);
          FUN_1086ccb14(&ppplStack_d0);
        }
        uStack_250 = SUB81(plVar13,0);
        uStack_258 = uVar6;
        func_0x0001086da100();
        FUN_10886ae78();
        FUN_1086ccb70(&lStack_2a8);
      }
    }
    else {
      uVar4 = iStack_3e4 == 8;
      if (((bool)uVar4) && ((param_4 & 1) != 0)) {
        func_0x0001086da544(*(undefined8 *)(*unaff_x20 + 0x68));
        func_0x0001086db1ac();
      }
    }
  }
  func_0x0001086daa68();
  func_0x0001086dad28(*(undefined8 *)(extraout_x8_01 + 0x48));
  if ((bStack_330 & 1) == 0) {
    func_0x0001086da32c();
    goto LAB_1086b8870;
  }
  uVar4 = cStack_3e7 == '\x01';
  if ((bool)uVar4) {
    func_0x000107c29200(*(undefined8 *)(unaff_x20[0x1a] + 0x210),param_2,1);
  }
  func_0x0001086da2e8(uStack_478);
  if ((bool)uVar4) {
    ppuVar10 = *(undefined ***)(extraout_x8_02 + 0x10);
  }
  else {
    ppuVar10 = &PTR_PTR_11326be60;
  }
  uVar4 = *(char *)((long)ppuVar10 + 0x21) == '\x01';
  if ((bool)uVar4) {
    if ((param_4 & 1) == 0) {
      func_0x0001086dba98(&lStack_2a8);
      param_3 = (long ****)applStack_4e8;
      FUN_1086dd910(param_3,&lStack_2a8,1);
      func_0x000107c2a2e0(&lStack_2a8);
    }
    ppplStack_528 = (long ***)0x0;
    ppplStack_530 = (long ***)0x0;
    uStack_518 = 0;
    plStack_520 = (long *)0x0;
    uStack_510 = 0x3f800000;
    uStack_2d8 = 0;
    ppplStack_2d0 = (long ***)((ulong)ppplStack_2d0 & 0xffffffffffffff00);
    uStack_2c8 = uStack_2c8 & 0xffffff00;
    ppplStack_d8 = (long ***)param_3;
    func_0x0001086da234(&lStack_2a8);
    func_0x000107c29ee4(&ppplStack_2f8,&lStack_2a8);
    func_0x000107c27914(&lStack_2a8);
    func_0x000107c28078(param_2,unaff_x20 + 0x16);
    uStack_2f9 = SUB81(param_2,0);
    ppplStack_38 = (long ***)FUN_1086d4ad8;
    ppuStack_30 = &PTR_FUN_110a64b80;
    func_0x0001086da334();
    *param_2 = (long)&ppplStack_d8;
    param_2[1] = (long)&ppplStack_2f8;
    param_2[2] = (long)&ppplStack_530;
    param_2[3] = (long)&uStack_2f9;
    param_2[4] = (long)&uStack_2d8;
    param_2[5] = (long)&ppplStack_2d0;
    plStack_28 = param_2;
    func_0x0001086da100();
    func_0x000107c29f60(&lStack_2a8);
    if ((bStack_138 & 1) == 0) {
      func_0x0001086da100();
      uStack_2b8 = 0;
      ppplStack_2c0 = (long ***)0x0;
      uStack_2b0 = 0;
      ppplStack_d0 = (long ***)FUN_1086d4aa8;
      ppplStack_c8 = (long ***)&PTR_DAT_110a64b68;
      ppplStack_c0 = (long ***)&ppplStack_38;
      plStack_b8 = &lStack_2a8;
      FUN_1086a15ac();
      func_0x0001086d9acc(ppplStack_c8);
    }
    func_0x000107c287e4(&lStack_2a8);
    func_0x0001086d9be4(ppuStack_30);
    func_0x000107c2a2e0(&ppplStack_2f8);
    plVar13 = plStack_520;
    if ((uStack_2c8 & 1) != 0) {
      func_0x0001086da544();
      FUN_1086b80e8();
      plVar13 = plStack_520;
    }
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      func_0x0001086da544(*(undefined8 *)(*unaff_x20 + 0xa0));
      (*extraout_x8_03)();
    }
    func_0x00010867bb84(&ppplStack_530);
    if ((param_4 & 1) != 0) {
      func_0x0001086da544();
      FUN_1086b80e8();
      goto LAB_1086b8870;
    }
  }
  uVar6 = *(undefined8 *)(unaff_x20[0x1a] + 0x20);
  func_0x0001086da478(&ppplStack_d0);
  func_0x0001086daf8c(&lStack_2a8,&ppplStack_d0);
  FUN_10885efd8(&ppplStack_530,uVar6,&lStack_2a8);
  func_0x000107c27a04(&lStack_2a8);
  func_0x000107c27914(&ppplStack_d0);
  pppplVar11 = (long ****)ppplStack_530;
  uVar4 = ppplStack_530 == ppplStack_528;
  if (!(bool)uVar4) {
    func_0x0001086da100();
    FUN_108866530(&lStack_2a8);
    cVar1 = cStack_294;
    lVar9 = lStack_2a0;
    if (cStack_294 == '\0') {
      uVar12 = 0xffffffff;
    }
    else {
      cStack_294 = '\0';
      uVar12 = iStack_298 - 1;
    }
    lStack_2a0 = 0;
    uVar4 = cVar1 == '\0' || lVar9 == 0;
    FUN_1086d2f54(&lStack_2a8);
    func_0x0001086da864();
    func_0x000107c278b8(auStack_548,"exitConversation");
    func_0x0001086dae14(&lStack_2a8);
    func_0x000107c326ac();
    func_0x0001086da100();
    FUN_108866aec();
    func_0x0001086da100();
    FUN_108866468();
    func_0x0001086da100();
    FUN_108868114();
    func_0x000107c31428(&lStack_2a8);
    func_0x0001086da8d8(unaff_x20[0x1a]);
    (*extraout_x8_04)();
    if (cVar1 != '\0' && lVar9 != 0) {
      plVar13 = *(long **)(unaff_x20[0x1a] + 0xa0);
      func_0x000107c27994(&ppplStack_38,pppplVar11);
      uVar4 = uVar12 == 3;
      iStack_20 = 0;
      if (uVar12 < 3) {
        iStack_20 = uVar12 + 1;
      }
      appplStack_2e8[0] = (long ***)0x0;
      ppplStack_2f8 = (long ***)0x0;
      ppplStack_2f0 = (long ***)0x0;
      ppplStack_2c0 = (long ***)&ppplStack_2f8;
      uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
      lVar9 = 1;
      pppplVar11 = appplStack_2e8;
      FUN_1086ccb9c();
      appplStack_2e8[0] = (long ***)(pppplVar11 + lVar9 * 4);
      ppplStack_c8 = (long ***)&ppplStack_d8;
      ppplStack_c0 = (long ***)&ppplStack_2d0;
      plStack_b8 = (long *)((ulong)plStack_b8 & 0xffffffffffffff00);
      ppplStack_2f8 = (long ***)pppplVar11;
      ppplStack_2f0 = (long ***)pppplVar11;
      ppplStack_2d0 = (long ***)pppplVar11;
      ppplStack_d8 = (long ***)pppplVar11;
      ppplStack_d0 = (long ***)appplStack_2e8;
      func_0x000107c27994();
      *(int *)(pppplVar11 + 3) = iStack_20;
      pppplVar11 = (long ****)(ppplStack_2d0 + 4);
      plStack_b8 = (long *)CONCAT71(plStack_b8._1_7_,1);
      ppplStack_2d0 = (long ***)pppplVar11;
      FUN_1086ccbd8(&ppplStack_d0);
      uStack_2b8 = CONCAT71(uStack_2b8._1_7_,1);
      ppplStack_2f0 = (long ***)pppplVar11;
      func_0x0001086ccc3c(&ppplStack_2c0);
      func_0x0001086db904(*(undefined8 *)(*plVar13 + 0xe8));
      func_0x0001086cccc8(&ppplStack_2f8);
      func_0x0001086db694();
    }
    func_0x0001086db764();
  }
  iVar5 = (int)auStack_500;
  func_0x0001086a74d4();
  if (iVar5 != 0) {
    FUN_10867a634(&lStack_2a8,unaff_x20 + 0xf);
    if (lStack_2a8 == 0) {
      func_0x0001086db76c();
    }
    else {
      FUN_10867a634(&ppplStack_d0,unaff_x20 + 0xf);
      pppplVar11 = (long ****)ppplStack_d0;
      func_0x0001086da408();
      func_0x0001086da980();
      iVar5 = (int)&ppplStack_d0;
      func_0x000107c28a70();
      func_0x0001086db76c();
      if (((ulong)pppplVar11 & 1) == 0) {
        func_0x0001086da100();
        FUN_1086b8b7c();
        if (iVar5 != 0) {
          func_0x0001086da100();
          FUN_10886df1c();
          if (iVar5 == 0) goto LAB_1086b8860;
        }
        func_0x0001086da864();
        func_0x0001086db0e4();
        func_0x0001086da67c(&lStack_2a8);
        func_0x000107c32690();
        func_0x0001086da100();
        FUN_108866b68();
        func_0x0001086da100();
        FUN_108866468();
        func_0x0001086da100();
        FUN_108868114();
        func_0x000107c31428(&lStack_2a8);
        func_0x0001086da8d8(unaff_x20[0x1a]);
        func_0x0001086da978();
        func_0x0001086dbe0c();
        func_0x0001086dad28(*(undefined8 *)(extraout_x8_05 + 0xd8));
        pppplVar11 = *(long *****)(unaff_x20[0x1a] + 0x260);
        (*(code *)(*pppplVar11)[2])(&ppplStack_d0,pppplVar11);
        pppplVar7 = (long ****)ppplStack_d0;
        func_0x0001086daf04();
        func_0x0001086da978();
        ppplStack_38 = ppplStack_d0;
        ppplStack_d0 = (long ***)0x0;
        func_0x0001086da424((*pppplVar11)[3]);
        func_0x0001086daf80();
        if (pppplVar7 != (long ****)0x0) {
          func_0x0001086d9ac0();
        }
        ppplVar2 = ppplStack_d0;
        ppplStack_d0 = (long ***)0x0;
        if (ppplVar2 != (long ***)0x0) {
          func_0x0001086d9ac0();
        }
        func_0x0001086db764();
      }
    }
  }
LAB_1086b8860:
  iVar5 = (int)pppplVar11;
  func_0x0001086da32c();
  func_0x000107c27a04(&ppplStack_530);
LAB_1086b8870:
  func_0x000107c288c8(auStack_500);
  puVar8 = auStack_328;
  FUN_1086d2c8c(puVar8);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_8);
      if ((bool)uVar4) {
        return puVar8;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      puVar8 = (undefined1 *)0x11372c510;
      ___cxa_guard_abort();
      uVar4 = iVar5 == 2;
      if (!(bool)uVar4) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086da058();
      ___cxa_end_catch();
    }
    uVar4 = iVar5 == 1;
    if (!(bool)uVar4) break;
    func_0x0001086da000();
    func_0x0001086d9a74();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  if (puVar8[0x98] == '\x01') {
    func_0x0001086cc7b4();
  }
  else {
    FUN_1086cc804();
  }
  return puVar8;
}



/* Entry: 1086b8b48; end: 1086b8b7b;  */

long FUN_1086b8b48(long param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    func_0x0001086cc7b4();
  }
  else {
    FUN_1086cc804();
  }
  return param_1;
}



/* Entry: 1086b8b7c; end: 1086b8b9f;  */

bool FUN_1086b8b7c(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x360);
  FUN_108679cf0();
  return 0 < *plVar1;
}



/* Entry: 1086b8ba0; end: 1086b8ba7;  */

long FUN_1086b8ba0(long param_1)

{
  return param_1 + 0xd8;
}



/* Entry: 1086b8ba8; end: 1086b8c93;  */

void FUN_1086b8ba8(void)

{
  code *extraout_x8;
  long unaff_x20;
  undefined1 auStack_218 [264];
  int iStack_110;
  long lStack_c0;
  byte bStack_48;
  
  func_0x0001086da8e8();
  func_0x0001086da0b0();
  func_0x0001086da598(auStack_218);
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    if (iStack_110 != 1 && 0 < lStack_c0) {
      func_0x000107c326e4(*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x120));
      (*extraout_x8)();
    }
    func_0x0001086da32c();
  }
  func_0x0001086da654();
  return;
}



/* Entry: 1086b8c94; end: 1086b8cd3;  */

byte FUN_1086b8c94(void)

{
  undefined1 auStack_1f8 [284];
  int iStack_dc;
  byte bStack_28;
  
  func_0x0001086da790(auStack_1f8);
  func_0x0001086da654();
  return iStack_dc != 8 | (bStack_28 ^ 0xff) & 1;
}



/* Entry: 1086b8cd4; end: 1086b8e6b;  */

void FUN_1086b8cd4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar13;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined1 auStack_220 [464];
  undefined1 uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined4 uStack_8;
  
  func_0x0001086dbf74();
  lVar3 = in_stack_00000038;
  uVar2 = in_stack_00000030;
  uVar1 = in_stack_00000028;
  lVar8 = in_stack_00000020;
  bVar5 = *(char *)(param_4 + 0x28) != '\x01';
  bVar6 = *(char *)(param_4 + 8) == '\0';
  uVar4 = bVar5 || bVar6;
  if (!bVar5 && !bVar6) {
    lVar9 = *param_6;
    lVar10 = param_6[1];
    puVar12 = (undefined8 *)0x4;
    func_0x0001086db620();
    func_0x0001086d9810();
    if (((extraout_x8 & 1) == 0) && (lVar9 != 0)) {
      func_0x0001086d9c18();
      if (lVar10 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10 != 0);
      }
      func_0x000107c28150();
      func_0x0001086da310();
      func_0x0001086da1e0();
      func_0x0001086d97f8(0x1086d1c6c);
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001086d995c();
      func_0x0001086d9ad8();
      func_0x0001086d9850();
      func_0x0001086da01c();
      if (lVar8 == 0) {
        func_0x0001086d990c();
        if (extraout_x8_01 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_01 != 0);
        }
        func_0x000107c3265c();
        func_0x0001086da218();
        func_0x0001086da044();
      }
      func_0x0001086da6b4();
    }
    func_0x000100864c10();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x0001086da6b4();
    func_0x0001086d9ff8();
    in_stack_00000020 = lVar8;
    in_stack_00000028 = uVar1;
    in_stack_00000030 = uVar2;
    in_stack_00000038 = lVar3;
    func_0x0001086da128();
    FUN_1086d1d40();
    uVar1 = *puVar12;
    lVar8 = puVar12[1];
    in_stack_00000010 = uVar1;
    in_stack_00000018 = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    *(undefined8 *)(lVar3 + 0x18) = 0;
    func_0x000107c3268c();
    func_0x0001086dabd4(&PTR_SUB_110a649c8);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(long *)(param_1 + 0x20) = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    *(long *)(lVar3 + 0x18) = param_1;
    FUN_1086c1620(&stack0x00000000);
    return;
  }
  lVar8 = param_1;
  func_0x0001086da3fc();
  ppuStack_48 = &PTR_FUN_110a96130;
  uStack_40 = 0;
  uStack_8 = 0;
  func_0x0001086dbef4();
  if (extraout_w9 == 0) {
    if (extraout_w8 == 0) {
      FUN_1086b18e0(param_1,*param_6,param_6[1],4);
      goto LAB_1086b8e3c;
    }
    func_0x0001086db6f4();
    FUN_1086b8e6c();
    func_0x0001086a56ec();
    func_0x0001086b8ea0();
  }
  else {
    func_0x0001086db6f4();
    FUN_1086b8e6c();
    func_0x0001086a56ec();
    if (*(int *)(lVar8 + 0x1c) != 2) {
      FUN_1088b82d4(lVar8);
      *(undefined4 *)(lVar8 + 0x1c) = 2;
      func_0x0001086daf64();
      *(undefined8 *)(lVar8 + 0x10) = extraout_x8_02;
    }
    uVar11 = *(ulong *)(lVar8 + 8);
    if ((uVar11 & 1) != 0) {
      uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
    }
    lVar8 = lVar8 + 0x10;
    func_0x000107c30248(lVar8,param_4 + 0x10,uVar11);
  }
  func_0x0001086db6f4();
  uVar7 = (undefined4)*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x20);
  FUN_1086b8c94();
  *(undefined4 *)(lVar8 + 0x20) = uVar7;
  plVar13 = *(long **)(param_1 + 0x58);
  FUN_108685190(auStack_220,param_5);
  uStack_50 = 1;
  func_0x0001086db444(*(undefined8 *)(*plVar13 + 0x20));
  func_0x0001086da610(plVar13);
  func_0x0001086da768();
  func_0x0001086da5d4();
  func_0x0001086da5cc();
LAB_1086b8e3c:
  func_0x0001086daf70();
  return;
}



/* Entry: 1086b8e6c; end: 1086b8ed3;  */

void FUN_1086b8e6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  func_0x0001086d9cd8();
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086ab074();
    *(ulong *)(param_1 + 0x18) = uVar2;
  }
  return;
}



/* Entry: 1086b8ed4; end: 1086b9037;  */

void FUN_1086b8ed4(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long in_x3;
  undefined8 *puVar10;
  long *in_x4;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_2a0 [16];
  undefined1 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  byte bStack_48;
  
  func_0x0001086da11c();
  uVar2 = *(char *)(in_x3 + 0x28) == '\x01';
  if ((!(bool)uVar2) || ((*(byte *)(in_x3 + 8) & 1) == 0)) {
    FUN_1088444fc(auStack_68,in_x3);
    uVar3 = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0xd0) + 0x20);
    FUN_1086b8c94();
    if ((bStack_48 & uVar3 & 1) == 0) {
      func_0x0001086da408(*(undefined8 *)(unaff_x22 + 0x58));
      func_0x0001086da610();
      (*extraout_x8_02)();
    }
    else {
      func_0x0001086d9ef4();
      uStack_a8 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = 0;
      puVar5 = auStack_b0;
      FUN_1086ccd88();
      puVar6 = puVar5;
      func_0x0001086d9cd8();
      if (puVar6 == (undefined1 *)0x0) {
        uVar7 = *(ulong *)(puVar5 + 8);
        if ((uVar7 & 1) != 0) {
          func_0x0001086da030();
        }
        func_0x0001086ab0dc();
        *(ulong *)(puVar5 + 0x18) = uVar7;
      }
      FUN_1088b85b0();
      uStack_288 = 0;
      uStack_b8 = 0;
      auStack_2a0[0] = 0;
      uStack_290 = 0;
      func_0x000107c326e4(*(undefined8 *)(unaff_x22 + 0x58));
      func_0x0001086da610();
      func_0x0001086da768();
      FUN_1086ccd68(auStack_2a0);
      func_0x0001086db090();
      FUN_10891cac8(auStack_b0);
    }
    FUN_1086cce00(auStack_68);
    return;
  }
  lVar8 = *in_x4;
  lVar9 = in_x4[1];
  puVar10 = (undefined8 *)0x4;
  lVar4 = unaff_x22;
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (lVar8 != 0)) {
    func_0x0001086d9c18();
    if (lVar9 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1c6c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086da6b4();
  }
  func_0x000100864c10();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x0001086da6b4();
    func_0x0001086d9ff8();
    func_0x0001086da128();
    FUN_1086d1d40();
    uVar1 = *puVar10;
    lVar8 = puVar10[1];
    if (lVar8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    func_0x000107c3268c();
    func_0x0001086dabd4(&PTR_SUB_110a649c8);
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
    *(long *)(lVar4 + 0x20) = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    *(long *)(unaff_x19 + 0x18) = lVar4;
    FUN_1086c1620(auStack_50);
    return;
  }
  return;
}



/* Entry: 1086b9038; end: 1086b9047;  */

void FUN_1086b9038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086b9044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x18))();
  return;
}



/* Entry: 1086b9048; end: 1086b90a7;  */

void FUN_1086b9048(long param_1)

{
  code *extraout_x8;
  undefined1 auStack_210 [16];
  undefined1 uStack_200;
  undefined1 uStack_1f8;
  undefined1 uStack_28;
  
  uStack_1f8 = 0;
  uStack_28 = 0;
  auStack_210[0] = 0;
  uStack_200 = 0;
  func_0x000107c326e4(*(undefined8 *)(param_1 + 0x58));
  (*extraout_x8)();
  FUN_1086ccd68(auStack_210);
  func_0x0001086db090();
  return;
}



/* Entry: 1086b90a8; end: 1086b90cf;  */

void FUN_1086b90a8(void)

{
  long unaff_x19;
  
  func_0x000107c32730();
  func_0x000107c290c0();
  FUN_1086cce20(unaff_x19 + 0x18);
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1086b90d0; end: 1086b9443;  */

void FUN_1086b90d0(long param_1,code **param_2,long *param_3,undefined8 param_4,ulong *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  char *pcVar8;
  long *plVar9;
  undefined1 *puVar10;
  code **ppcVar11;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong uVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar13;
  ulong uVar14;
  long unaff_x19;
  long *unaff_x22;
  long *plVar15;
  long lVar16;
  long *plVar17;
  code *pcVar18;
  undefined **ppuVar19;
  undefined1 auStack_a58 [440];
  long lStack_850;
  ulong uStack_848;
  long lStack_838;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined1 auStack_678 [40];
  undefined1 auStack_650 [8];
  char cStack_648;
  undefined1 auStack_5c8 [224];
  long *plStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  undefined1 auStack_4a8 [464];
  byte bStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_228 [40];
  code *pcStack_200;
  undefined **ppuStack_1f8;
  code *pcStack_1f0;
  undefined **ppuStack_1e8;
  undefined4 uStack_1e0;
  code *pcStack_20;
  undefined **ppuStack_18;
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  func_0x0001086d99bc();
  if (*param_3 == param_3[1]) {
    param_2 = *(code ***)(*(long *)(param_1 + 0xd0) + 0x100);
    ppuStack_18 = (undefined **)param_5[1];
    pcStack_20 = (code *)*param_5;
    uVar7 = 1;
    if (param_5[1] != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    plVar17 = *(long **)(param_1 + 0x70);
    pcStack_200 = FUN_1086d32e8;
    ppuStack_1f8 = &PTR_DAT_110a645e8;
    ppuStack_1e8 = ppuStack_18;
    pcStack_1f0 = pcStack_20;
    pcVar18 = pcStack_20;
    ppuVar19 = ppuStack_18;
    if (ppuStack_18 != (undefined **)0x0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    ppcVar11 = &pcStack_200;
    func_0x000107c28154(param_1 + 0x48,ppcVar11);
    func_0x0001086d9a28(ppuStack_1f8);
    func_0x0001086da01c();
    if (plVar17 == (long *)0x0) {
      func_0x0001086d9ab0();
      pcStack_200 = pcVar18;
      ppuStack_1f8 = ppuVar19;
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c3265c();
      ppcVar11 = &pcStack_200;
      (*extraout_x8_03)();
      func_0x0001086db190();
    }
    func_0x000104be3970();
  }
  else {
    func_0x0001086dac20();
    pcVar8 = (char *)(param_1 + 0x350);
    func_0x000107c289e8();
    cVar4 = *pcVar8;
    if (*(int *)(unaff_x19 + 0x40) == 0x1a) {
      plVar17 = *(long **)(*(long *)(param_1 + 0xd0) + 0x130);
      pcStack_1f0 = (code *)0x0;
      ppuStack_1e8 = (undefined **)0x0;
      func_0x0001086d9c9c();
      ppuStack_1f8 = (undefined **)0x0;
      uStack_1e0 = 0x2d8;
      pcStack_200 = extraout_x8;
      func_0x000107c278b8(&pcStack_20,PTR_DAT_113268fe0);
      uVar7 = cVar4 == '\0';
      uVar1 = 0x14d8;
      if ((bool)uVar7) {
        uVar1 = 0x14e0;
      }
      func_0x0001086db3d8(uVar1);
      ppcVar11 = &pcStack_200;
      func_0x000107c28824(ppcVar11,&pcStack_20);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_20);
      func_0x000107c2884c(auStack_228,ppcVar11);
      func_0x0001086db310(*(undefined8 *)(*plVar17 + 0x50));
      func_0x0001086da90c();
      func_0x000107c2882c(&pcStack_200);
      if (cVar4 != '\0') {
        func_0x0001086daf04();
        ppcVar11 = param_2;
        (*extraout_x8_00)();
        plVar17 = unaff_x22;
        goto LAB_1086b9380;
      }
    }
    lVar16 = *unaff_x22;
    lVar3 = unaff_x22[1];
    FUN_1086d2fbc(&pcStack_20,1);
    ppcVar11 = (code **)(lVar3 - lVar16 >> 3);
    puStack_10[2] = 0;
    *puStack_10 = &PTR_FUN_110a64578;
    puStack_10[1] = 0;
    pcStack_200 = (code *)0x1086d3320;
    ppuStack_1f8 = &PTR_DAT_110a64600;
    FUN_10883fc34(puStack_10 + 3,ppcVar11,param_5,&pcStack_200);
    func_0x0001086d9acc(ppuStack_1f8);
    puVar6 = puStack_10;
    puStack_10 = (undefined8 *)0x0;
    func_0x0001086d32b4(&pcStack_20);
    plVar17 = (long *)unaff_x22[1];
    for (plVar9 = (long *)*unaff_x22; uVar7 = plVar9 == plVar17, !(bool)uVar7; plVar9 = plVar9 + 1)
    {
      pcStack_200 = (code *)((ulong)pcStack_200 & 0xffffffffffffff00);
      if (puVar6 != (undefined8 *)0x0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10 != 0);
      }
      pcStack_20 = (code *)((ulong)pcStack_20 & 0xffffffffffffff00);
      puStack_10 = (undefined8 *)((ulong)puStack_10 & 0xffffffffffffff00);
      func_0x000107c326e4();
      ppcVar11 = param_2;
      (*extraout_x8_01)();
      FUN_1086ccd68(&pcStack_20);
      func_0x0001086da6b4();
      func_0x0001086a7890(&pcStack_200);
    }
    FUN_1086d32c4();
  }
LAB_1086b9380:
  func_0x0001006ba334(uStack_8);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086db190();
  func_0x000104be3970(&pcStack_20);
  func_0x0001086d9ff8();
  func_0x0001086dac20();
  func_0x0001086d9934();
  uStack_2b8 = extraout_x8_04;
  func_0x000107c326c4();
  func_0x0001086da598(auStack_4a8);
  if ((bStack_2d8 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    lStack_4c0 = 0;
    uStack_4b0 = 0x3f800000;
    plStack_4e0 = (long *)0x0;
    plStack_4e8 = (long *)0x0;
    uStack_4d8 = 0;
    lVar3 = plVar17[1];
    for (lVar16 = *plVar17; lVar16 != lVar3; lVar16 = lVar16 + 8) {
      func_0x0001086da100();
      FUN_108862cf0(&lStack_850);
      FUN_1086b9814(&uStack_690,&lStack_850);
      func_0x0001086daa30();
      puVar10 = auStack_5c8;
      FUN_108844954();
      uStack_2d0 = 3;
      FUN_1086d3338(&lStack_850,&uStack_2d0,2);
      if ((uStack_848 != 0) && (lStack_838 != 0)) {
        uVar12 = (ulong)puVar10 & 0xffffffff;
        uVar13 = uStack_848 - 1;
        uVar2 = 0;
        if (uStack_848 <= uVar12) {
          uVar2 = uStack_848;
        }
        uVar2 = uVar12 - uVar2;
        if ((uStack_848 & uVar13) == 0) {
          uVar2 = (int)uStack_848 - 1 & uVar12;
        }
        plVar17 = *(long **)(lStack_850 + uVar2 * 8);
        if (plVar17 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_1086b95b8;
              uVar14 = plVar17[1];
              if (uVar14 != uVar12) break;
              if (*(int *)(plVar17 + 2) == (int)puVar10) {
                FUN_10867b1ac(&uStack_4d0,auStack_678);
                if (cStack_648 == '\x01') {
                  func_0x000107c28944(&plStack_4e8,auStack_650);
                }
                goto LAB_1086b95b8;
              }
            }
            if ((uStack_848 & uVar13) == 0) {
              uVar14 = uVar14 & uVar13;
            }
            else if (uStack_848 <= uVar14) {
              uVar5 = 0;
              if (uStack_848 != 0) {
                uVar5 = uVar14 / uStack_848;
              }
              uVar14 = uVar14 - uVar5 * uStack_848;
            }
          } while (uVar14 == uVar2);
        }
      }
LAB_1086b95b8:
      FUN_1086d378c(&lStack_850);
      func_0x000107c288e0(&uStack_690);
    }
    func_0x0001086da864();
    func_0x000107c326d4();
    func_0x0001086da67c(&lStack_850);
    func_0x0001086da10c();
    func_0x0001086da100();
    FUN_10886488c();
    func_0x000107c31428(&lStack_850);
    uStack_690 = 0;
    uStack_688 = 0;
    uStack_680 = 0;
    func_0x000104be7444(&uStack_690,uStack_4b8);
    plVar17 = plStack_4e8;
    plVar9 = plStack_4e0;
    for (plVar15 = (long *)lStack_4c0; plStack_4e8 = plVar17, plStack_4e0 = plVar9,
        plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      FUN_10867d0d8(&uStack_690,ppcVar11,plVar15 + 2);
      plVar17 = plStack_4e8;
      plVar9 = plStack_4e0;
    }
    while( true ) {
      uVar7 = plVar17 == plVar9;
      if ((bool)uVar7) break;
      plVar17 = plVar17 + 1;
      func_0x0001086dad28(*(undefined8 *)(**(long **)(param_2[0x1a] + 0xa0) + 0x148));
    }
    plVar9 = *(long **)(param_2[0x1a] + 0xe0);
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    (**(code **)(*plVar9 + 8))(plVar9,ppcVar11,&uStack_2d0,&uStack_690);
    func_0x00010867b9fc(&uStack_2d0);
    func_0x0001086da32c();
    func_0x000104be1274(&uStack_690);
    func_0x000107c31424(&lStack_850);
    func_0x000107c27ae4(&plStack_4e8);
    func_0x00010867bb84(&uStack_4d0);
  }
  func_0x000107c288c8(auStack_4a8);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_2b8);
      if ((bool)uVar7) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x00010867b9fc(&uStack_2d0);
      func_0x000104be1274(&uStack_690);
      func_0x000107c31424(&lStack_850);
      func_0x000107c27ae4(&plStack_4e8);
      func_0x00010867bb84(&uStack_4d0);
      func_0x000107c288c8(auStack_4a8);
      uVar7 = (int)plVar17 == 2;
      if (!(bool)uVar7) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086da058();
      ___cxa_end_catch();
    }
    uVar7 = (int)plVar17 == 1;
    if (!(bool)uVar7) break;
    func_0x0001086da000();
    func_0x0001086d9a74();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  func_0x000107c288bc(auStack_a58);
  puVar10 = auStack_a58;
  func_0x000107c288c0(puVar10);
  func_0x000107c28a9c(extraout_x8_05,puVar10);
  func_0x00010086e190(auStack_a58);
  return;
}



/* Entry: 1086b9444; end: 1086b9813;  */

void FUN_1086b9444(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x20;
  long *unaff_x22;
  long *plVar9;
  long lVar10;
  undefined1 auStack_808 [440];
  long lStack_600;
  ulong uStack_5f8;
  long lStack_5e8;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 auStack_428 [40];
  undefined1 auStack_400 [8];
  char cStack_3f8;
  undefined1 auStack_378 [224];
  long *plStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined1 auStack_258 [464];
  byte bStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001086dac20();
  func_0x0001086d9934();
  uStack_68 = extraout_x8;
  func_0x000107c326c4();
  func_0x0001086da598(auStack_258);
  if ((bStack_88 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    lStack_270 = 0;
    uStack_260 = 0x3f800000;
    plStack_290 = (long *)0x0;
    plStack_298 = (long *)0x0;
    uStack_288 = 0;
    lVar2 = unaff_x22[1];
    for (lVar10 = *unaff_x22; lVar10 != lVar2; lVar10 = lVar10 + 8) {
      func_0x0001086da100();
      FUN_108862cf0(&lStack_600);
      FUN_1086b9814(&uStack_440,&lStack_600);
      func_0x0001086daa30();
      puVar4 = auStack_378;
      FUN_108844954();
      uStack_80 = 3;
      FUN_1086d3338(&lStack_600,&uStack_80,2);
      if ((uStack_5f8 != 0) && (lStack_5e8 != 0)) {
        uVar5 = (ulong)puVar4 & 0xffffffff;
        uVar6 = uStack_5f8 - 1;
        uVar1 = 0;
        if (uStack_5f8 <= uVar5) {
          uVar1 = uStack_5f8;
        }
        uVar1 = uVar5 - uVar1;
        if ((uStack_5f8 & uVar6) == 0) {
          uVar1 = (int)uStack_5f8 - 1 & uVar5;
        }
        plVar7 = *(long **)(lStack_600 + uVar1 * 8);
        if (plVar7 != (long *)0x0) {
          do {
            while( true ) {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) goto LAB_1086b95b8;
              uVar8 = plVar7[1];
              if (uVar8 != uVar5) break;
              if (*(int *)(plVar7 + 2) == (int)puVar4) {
                FUN_10867b1ac(&uStack_280,auStack_428);
                if (cStack_3f8 == '\x01') {
                  func_0x000107c28944(&plStack_298,auStack_400);
                }
                goto LAB_1086b95b8;
              }
            }
            if ((uStack_5f8 & uVar6) == 0) {
              uVar8 = uVar8 & uVar6;
            }
            else if (uStack_5f8 <= uVar8) {
              uVar3 = 0;
              if (uStack_5f8 != 0) {
                uVar3 = uVar8 / uStack_5f8;
              }
              uVar8 = uVar8 - uVar3 * uStack_5f8;
            }
          } while (uVar8 == uVar1);
        }
      }
LAB_1086b95b8:
      FUN_1086d378c(&lStack_600);
      func_0x000107c288e0(&uStack_440);
    }
    func_0x0001086da864();
    func_0x000107c326d4();
    func_0x0001086da67c(&lStack_600);
    func_0x0001086da10c();
    func_0x0001086da100();
    FUN_10886488c();
    func_0x000107c31428(&lStack_600);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x000104be7444(&uStack_440,uStack_268);
    unaff_x22 = plStack_298;
    plVar7 = plStack_290;
    for (plVar9 = (long *)lStack_270; plStack_298 = unaff_x22, plStack_290 = plVar7,
        plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      FUN_10867d0d8(&uStack_440,param_2,plVar9 + 2);
      unaff_x22 = plStack_298;
      plVar7 = plStack_290;
    }
    while( true ) {
      in_ZR = unaff_x22 == plVar7;
      if ((bool)in_ZR) break;
      unaff_x22 = unaff_x22 + 1;
      func_0x0001086dad28(*(undefined8 *)(**(long **)(*(long *)(unaff_x20 + 0xd0) + 0xa0) + 0x148));
    }
    plVar7 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0xe0);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    (**(code **)(*plVar7 + 8))(plVar7,param_2,&uStack_80,&uStack_440);
    func_0x00010867b9fc(&uStack_80);
    func_0x0001086da32c();
    func_0x000104be1274(&uStack_440);
    func_0x000107c31424(&lStack_600);
    func_0x000107c27ae4(&plStack_298);
    func_0x00010867bb84(&uStack_280);
  }
  func_0x000107c288c8(auStack_258);
  while( true ) {
    while( true ) {
      func_0x0001006ba334(uStack_68);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x00010867b9fc(&uStack_80);
      func_0x000104be1274(&uStack_440);
      func_0x000107c31424(&lStack_600);
      func_0x000107c27ae4(&plStack_298);
      func_0x00010867bb84(&uStack_280);
      func_0x000107c288c8(auStack_258);
      in_ZR = (int)unaff_x22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086da058();
      ___cxa_end_catch();
    }
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    func_0x0001086d9a74();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  func_0x000107c288bc(auStack_808);
  puVar4 = auStack_808;
  func_0x000107c288c0(puVar4);
  func_0x000107c28a9c(extraout_x8_00,puVar4);
  func_0x00010086e190(auStack_808);
  return;
}



/* Entry: 1086b9814; end: 1086b9873;  */

void FUN_1086b9814(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_1e8 [440];
  
  func_0x000107c288bc(auStack_1e8);
  puVar1 = auStack_1e8;
  func_0x000107c288c0(puVar1);
  func_0x000107c28a9c(param_1,puVar1);
  func_0x00010086e190(auStack_1e8);
  return;
}



/* Entry: 1086b9874; end: 1086b994f;  */

void FUN_1086b9874(undefined8 param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar7;
  int iVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 in_stack_00000010;
  undefined8 *in_stack_00000050;
  code *in_stack_00000058;
  undefined8 in_stack_00000090;
  undefined1 auStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined1 uStack_4b0;
  undefined1 auStack_4a8 [24];
  undefined1 uStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  long lStack_2b8;
  undefined1 auStack_2b0 [464];
  undefined1 uStack_e0;
  long alStack_d8 [3];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  char cStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_30 [24];
  long lStack_18;
  long lStack_10;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != (long *)0x0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    in_stack_00000010 = (undefined4)param_4;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(FUN_1086d3b8c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x000107c285ec();
  }
  func_0x000100864c10();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086d9af0();
  puVar3 = (undefined1 *)register0x00000008;
  func_0x000107c285ec();
  func_0x0001086d9ff8();
  pcVar6 = FUN_1086b9950;
  func_0x000107c32728();
  in_stack_00000050 = &stack0x00000090;
  in_stack_00000058 = pcVar6;
  func_0x000107c279ac(&lStack_18);
  func_0x0001086da234(auStack_30);
  lVar4 = *param_2;
  func_0x000107c28da4(lVar4,param_2[1],auStack_30);
  if (param_2[1] == lVar4) {
    func_0x000107c28840(&lStack_18,auStack_30);
  }
  FUN_1086b27a0(&lStack_48,puVar3,&lStack_18,param_4 & 0xffffffff | 0x100000000);
  if (lStack_48 == lStack_40) {
    auStack_68[0] = 0;
    cStack_50 = '\0';
  }
  else {
    FUN_10868ca64(auStack_68);
    if (cStack_50 == '\x01') {
      plVar7 = *(long **)(*(long *)(puVar3 + 0xd0) + 0xe0);
      func_0x000107c29f60(auStack_2b0,*(undefined8 *)(*(long *)(puVar3 + 0xd0) + 0x20),auStack_68,1)
      ;
      func_0x0001086dad6c(*(undefined8 *)(*plVar7 + 0x40));
      func_0x000107c287e4(auStack_2b0);
      func_0x000107c3265c(*param_6);
      (*extraout_x8_02)();
      func_0x0001086da304();
      func_0x0001086daee4();
      func_0x0001086dbb3c(auStack_2b0,0xc4);
      func_0x000107c28b44();
      func_0x0001086db308();
      goto code_r0x000100572518;
    }
  }
  FUN_1088486d8(auStack_80,param_4,&lStack_18);
  func_0x000107c3265c();
  (*extraout_x8_03)();
  func_0x0001086d9f9c();
  (*extraout_x8_04)();
  func_0x0001086da864();
  func_0x000107c278b8(alStack_d8,"createConversation");
  func_0x0001086dbb34(auStack_c0);
  plVar7 = alStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  auStack_2b0[0] = 0;
  uStack_e0 = 0;
  func_0x0001086dbe20();
  (**(code **)(*plVar7 + 0x10))(&lStack_2b8);
  iVar8 = (int)param_4;
  if (iVar8 == 1) {
    func_0x0001086daea8();
    auStack_4a8[0] = 0;
    uStack_490 = 0;
    FUN_1086a50f4(&ppuStack_488,auStack_c0);
    func_0x0001086dbabc();
    func_0x0001086db36c();
    func_0x0001086db7b0();
    ppuStack_488 = (undefined **)0x0;
    uStack_480 = 0;
    uStack_478 = 0;
    func_0x000107c3265c(lStack_2b8);
    (*extraout_x8_05)();
    FUN_1086cd80c(&ppuStack_488);
  }
  else {
    auStack_4a8[0] = 0;
    uStack_490 = 0;
    if (lStack_10 - lStack_18 == 0x30) {
      lVar5 = lStack_18;
      func_0x000107c28078(lStack_18,auStack_30);
      lVar4 = lStack_10 + -0x18;
      if ((int)lVar5 == 0) {
        lVar4 = lStack_18;
      }
      FUN_1086b9f28(auStack_4a8,lVar4);
    }
    uVar9 = *(undefined8 *)(*(long *)(puVar3 + 0xd0) + 0x20);
    uVar10 = *(undefined8 *)(*(long *)(puVar3 + 0xd0) + 0xa0);
    auStack_4c8[0] = 0;
    uStack_4b0 = 0;
    func_0x0001086da234(auStack_4e0);
    FUN_1086a515c(&ppuStack_488,auStack_c0,uVar9,uVar10,auStack_80,auStack_4c8,auStack_4e0,
                  auStack_4a8,puVar3[0x111]);
    func_0x0001086dbabc();
    func_0x0001086db36c();
    func_0x0001086da498();
    func_0x0001086db340();
    func_0x0001086db7b0();
  }
  func_0x000107c31428(auStack_c0);
  func_0x0001086dac14(*(undefined8 *)(puVar3 + 0xd0));
  (**(code **)(extraout_x8_06 + 0x40))();
  func_0x0001086dbe20();
  lVar4 = lStack_2b8;
  lStack_2b8 = 0;
  func_0x0001086da408();
  (*extraout_x8_07)();
  if (lVar4 != 0) {
    func_0x0001086d9ac0();
  }
  uStack_478 = 0;
  uStack_470 = 0;
  ppuStack_488 = &PTR_FUN_110a609a8;
  uStack_480 = 0;
  uStack_468 = 0x1e7;
  func_0x0001086dbb3c(&ppuStack_488,0xc5);
  func_0x000107c28b44();
  func_0x0001086dbb1c();
  uStack_478 = 0;
  uStack_470 = 0;
  ppuStack_488 = &PTR_FUN_110a609a8;
  uStack_480 = 0;
  uStack_468 = 0x259;
  uVar1 = 0x4901ba;
  if (iVar8 != 1) {
    uVar1 = 0x4901bc;
  }
  FUN_1086b8004(&ppuStack_488,uVar1);
  func_0x000107c28b44();
  func_0x0001086dbb1c();
  if (iVar8 == 1) {
    uVar2 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar2 = (ulong)*(byte *)(param_3 + 0x17);
    }
    if (uVar2 == 0) goto LAB_1086b9cb8;
    func_0x0001086dac2c();
    func_0x0001086db998();
  }
  else {
LAB_1086b9cb8:
    FUN_1086b9f58(puVar3,*param_6,param_6[1],auStack_80);
  }
  lVar4 = lStack_2b8;
  lStack_2b8 = 0;
  if (lVar4 != 0) {
    func_0x0001086d9ac0();
  }
  func_0x000107c288c8(auStack_2b0);
  func_0x000107c31424(auStack_c0);
  func_0x000107c27914(auStack_80);
code_r0x000100572518:
  func_0x000107c279dc(auStack_68);
  func_0x0001086aaf34(&lStack_48);
  func_0x0001086da694();
  func_0x000107c27a04(&lStack_18);
  return;
}



/* Entry: 1086b9950; end: 1086b9edf;  */

void FUN_1086b9950(long param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined1 uStack_4b0;
  undefined1 auStack_4a8 [24];
  undefined1 uStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  long lStack_2b8;
  undefined1 auStack_2b0 [464];
  undefined1 uStack_e0;
  long alStack_d8 [3];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  char cStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_30 [24];
  long lStack_18;
  long lStack_10;
  
  func_0x000107c32728();
  func_0x000107c279ac(&lStack_18);
  func_0x0001086da234(auStack_30);
  lVar3 = *param_2;
  func_0x000107c28da4(lVar3,param_2[1],auStack_30);
  if (param_2[1] == lVar3) {
    func_0x000107c28840(&lStack_18,auStack_30);
  }
  FUN_1086b27a0(&lStack_48,param_1,&lStack_18,param_4 & 0xffffffff | 0x100000000);
  if (lStack_48 == lStack_40) {
    auStack_68[0] = 0;
    cStack_50 = '\0';
  }
  else {
    FUN_10868ca64(auStack_68);
    if (cStack_50 == '\x01') {
      plVar5 = *(long **)(*(long *)(param_1 + 0xd0) + 0xe0);
      func_0x000107c29f60(auStack_2b0,*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x20),auStack_68,1
                         );
      func_0x0001086dad6c(*(undefined8 *)(*plVar5 + 0x40));
      func_0x000107c287e4(auStack_2b0);
      func_0x000107c3265c(*param_6);
      (*extraout_x8)();
      func_0x0001086da304();
      func_0x0001086daee4();
      func_0x0001086dbb3c(auStack_2b0,0xc4);
      func_0x000107c28b44();
      func_0x0001086db308();
      goto code_r0x000100572518;
    }
  }
  FUN_1088486d8(auStack_80,param_4,&lStack_18);
  func_0x000107c3265c();
  (*extraout_x8_00)();
  func_0x0001086d9f9c();
  (*extraout_x8_01)();
  func_0x0001086da864();
  func_0x000107c278b8(alStack_d8,"createConversation");
  func_0x0001086dbb34(auStack_c0);
  plVar5 = alStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  auStack_2b0[0] = 0;
  uStack_e0 = 0;
  func_0x0001086dbe20();
  (**(code **)(*plVar5 + 0x10))(&lStack_2b8);
  iVar6 = (int)param_4;
  if (iVar6 == 1) {
    func_0x0001086daea8();
    auStack_4a8[0] = 0;
    uStack_490 = 0;
    FUN_1086a50f4(&ppuStack_488,auStack_c0);
    func_0x0001086dbabc();
    func_0x0001086db36c();
    func_0x0001086db7b0();
    ppuStack_488 = (undefined **)0x0;
    uStack_480 = 0;
    uStack_478 = 0;
    func_0x000107c3265c(lStack_2b8);
    (*extraout_x8_02)();
    FUN_1086cd80c(&ppuStack_488);
  }
  else {
    auStack_4a8[0] = 0;
    uStack_490 = 0;
    if (lStack_10 - lStack_18 == 0x30) {
      lVar4 = lStack_18;
      func_0x000107c28078(lStack_18,auStack_30);
      lVar3 = lStack_10 + -0x18;
      if ((int)lVar4 == 0) {
        lVar3 = lStack_18;
      }
      FUN_1086b9f28(auStack_4a8,lVar3);
    }
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x20);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0xa0);
    auStack_4c8[0] = 0;
    uStack_4b0 = 0;
    func_0x0001086da234(auStack_4e0);
    FUN_1086a515c(&ppuStack_488,auStack_c0,uVar7,uVar8,auStack_80,auStack_4c8,auStack_4e0,
                  auStack_4a8,*(undefined1 *)(param_1 + 0x111));
    func_0x0001086dbabc();
    func_0x0001086db36c();
    func_0x0001086da498();
    func_0x0001086db340();
    func_0x0001086db7b0();
  }
  func_0x000107c31428(auStack_c0);
  func_0x0001086dac14(*(undefined8 *)(param_1 + 0xd0));
  (**(code **)(extraout_x8_03 + 0x40))();
  func_0x0001086dbe20();
  lVar3 = lStack_2b8;
  lStack_2b8 = 0;
  func_0x0001086da408();
  (*extraout_x8_04)();
  if (lVar3 != 0) {
    func_0x0001086d9ac0();
  }
  uStack_478 = 0;
  uStack_470 = 0;
  ppuStack_488 = &PTR_FUN_110a609a8;
  uStack_480 = 0;
  uStack_468 = 0x1e7;
  func_0x0001086dbb3c(&ppuStack_488,0xc5);
  func_0x000107c28b44();
  func_0x0001086dbb1c();
  uStack_478 = 0;
  uStack_470 = 0;
  ppuStack_488 = &PTR_FUN_110a609a8;
  uStack_480 = 0;
  uStack_468 = 0x259;
  uVar1 = 0x4901ba;
  if (iVar6 != 1) {
    uVar1 = 0x4901bc;
  }
  FUN_1086b8004(&ppuStack_488,uVar1);
  func_0x000107c28b44();
  func_0x0001086dbb1c();
  if (iVar6 == 1) {
    uVar2 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar2 = (ulong)*(byte *)(param_3 + 0x17);
    }
    if (uVar2 == 0) goto LAB_1086b9cb8;
    func_0x0001086dac2c();
    func_0x0001086db998();
  }
  else {
LAB_1086b9cb8:
    FUN_1086b9f58(param_1,*param_6,param_6[1],auStack_80);
  }
  lVar3 = lStack_2b8;
  lStack_2b8 = 0;
  if (lVar3 != 0) {
    func_0x0001086d9ac0();
  }
  func_0x000107c288c8(auStack_2b0);
  func_0x000107c31424(auStack_c0);
  func_0x000107c27914(auStack_80);
code_r0x000100572518:
  func_0x000107c279dc(auStack_68);
  func_0x0001086aaf34(&lStack_48);
  func_0x0001086da694();
  func_0x000107c27a04(&lStack_18);
  return;
}



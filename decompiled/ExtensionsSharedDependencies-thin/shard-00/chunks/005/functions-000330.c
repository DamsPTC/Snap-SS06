/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0066d9f4; end: 0066da3f;  */

void FUN_0066d9f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0067578c(1,4);
  FUN_00665c80();
  FUN_0066d7d8();
  *puVar1 = param_2;
  *(char *)(puVar1 + 1) = (char)param_1;
  *(undefined2 *)((long)puVar1 + 9) = 0;
  *(undefined1 *)((long)puVar1 + 0xb) = 0;
  return;
}



/* Entry: 0066da40; end: 0066dc0b;  */

void FUN_0066da40(long *param_1,int param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long *extraout_x9;
  long extraout_x10;
  long *plVar7;
  long lVar8;
  long extraout_x11;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  func_0x00676210();
  if (param_2 == 10) {
    bVar4 = 0;
  }
  else if (param_2 == 0) {
    bVar4 = *(char *)((long)param_1 + 10) - 1;
  }
  else {
    bVar4 = *(byte *)((long)param_1 + 10) >> 1;
  }
  *(byte *)(param_3 + 10) = bVar4;
  *(byte *)((long)param_1 + 10) = *(char *)((long)param_1 + 10) - bVar4;
  plVar6 = param_1 + 2;
  lVar11 = (ulong)*(byte *)(param_3 + 10) * -0x18;
  lVar8 = 0x10;
  plVar3 = param_1;
  while (lVar11 + lVar8 != 0x10) {
    func_0x00675728();
    plVar6 = extraout_x9;
    lVar11 = extraout_x10;
    lVar8 = extraout_x11 + 0x18;
  }
  bVar4 = *(char *)((long)param_1 + 10) - 1;
  *(byte *)((long)param_1 + 10) = bVar4;
  plVar10 = (long *)*param_1;
  bVar2 = *(byte *)(param_1 + 1);
  uVar5 = (ulong)bVar2;
  plVar6 = plVar6 + (ulong)bVar4 * 3;
  bVar4 = *(byte *)((long)plVar10 + 10);
  if (bVar2 < bVar4) {
    uVar9 = (ulong)((uint)bVar4 - (uint)bVar2) & 0xff;
    plVar7 = plVar10 + uVar5 * 3 + uVar9 * 3 + -1;
    for (lVar8 = uVar9 * -0x18; lVar8 != 0; lVar8 = lVar8 + 0x18) {
      plVar7[4] = plVar7[1];
      plVar7[3] = *plVar7;
      plVar7[5] = plVar7[2];
      plVar7 = plVar7 + -3;
    }
    bVar4 = *(byte *)((long)plVar10 + 10);
  }
  lVar11 = plVar6[1];
  lVar8 = *plVar6;
  plVar10[uVar5 * 3 + 4] = plVar6[2];
  plVar10[uVar5 * 3 + 3] = lVar11;
  plVar10[uVar5 * 3 + 2] = lVar8;
  bVar4 = bVar4 + 1;
  *(byte *)((long)plVar10 + 10) = bVar4;
  if ((*(char *)((long)plVar10 + 0xb) == '\0') && (uVar1 = bVar2 + 1, uVar1 < bVar4)) {
    while (uVar1 < bVar4) {
      func_0x00675b34();
      lVar8 = plVar3[(byte)(bVar4 - 1)];
      plVar3 = plVar10;
      FUN_0066c844();
      plVar3[bVar4] = lVar8;
      *(byte *)(lVar8 + 8) = bVar4;
      bVar4 = bVar4 - 1;
    }
  }
  lVar8 = *param_1;
  bVar4 = *(byte *)(param_1 + 1);
  FUN_0066c844();
  *(long *)(lVar8 + ((ulong)(bVar4 + 1) & 0xff) * 8) = param_3;
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    func_0x00675ea0();
    for (bVar4 = 0; bVar4 <= *(byte *)(param_3 + 10); bVar4 = bVar4 + 1) {
      func_0x00675b68();
    }
  }
  return;
}



/* Entry: 0066dc0c; end: 0066dc7b;  */

void FUN_0066dc0c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_0066dc7c();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_0066dce4();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      func_0x00675c28();
      func_0x0066dcf8();
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 0066dc7c; end: 0066dce3;  */

void FUN_0066dc7c(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_0066dce4();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      func_0x00675c28();
      func_0x0066dcf8();
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 0066dce4; end: 0066dd2f;  */

void FUN_0066dce4(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  func_0x00675160();
  auStack_20[0] = param_2;
  func_0x00490290(auStack_20);
  return;
}



/* Entry: 0066dd30; end: 0066dd53;  */

undefined8 FUN_0066dd30(undefined8 param_1)

{
  FUN_0066dd54(param_1,0);
  return param_1;
}



/* Entry: 0066dd54; end: 0066dd7b;  */

void FUN_0066dd54(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_0067d448();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0066dd7c; end: 0066de27;  */

undefined8 * FUN_0066dd7c(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long extraout_x9;
  undefined8 auStack_58 [7];
  
  func_0x0067414c();
  puVar2 = auStack_58;
  func_0x0066741c();
  puVar3 = auStack_58;
  func_0x00676834();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      puVar3 = (undefined8 *)&UNK_00a0dd50;
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_0066de54();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar5 = (ulong)*(char *)((long)puVar2 + 0x17);
    puVar4 = puVar2;
    if ((long)uVar5 < 0) {
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = puVar2[1];
    }
    uVar1 = puVar3[1];
    puVar2 = (undefined8 *)*puVar3;
    if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
      puVar2 = puVar3;
    }
    if (uVar1 == uVar5) {
      func_0x0046d038(puVar2,uVar1,puVar4);
      puVar2 = (undefined8 *)(ulong)((int)puVar2 == 0);
    }
    else {
      puVar2 = (undefined8 *)0x0;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 0066de28; end: 0066de53;  */

bool FUN_0066de28(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar4 = param_1;
  if ((long)uVar5 < 0) {
    puVar4 = (undefined8 *)*param_1;
    uVar5 = param_1[1];
  }
  uVar1 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  if (uVar1 == uVar5) {
    func_0x0046d038(puVar3,uVar1,puVar4);
    bVar2 = (int)puVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 0066de54; end: 0066debb;  */

void FUN_0066de54(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_0066debc();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      func_0x00675c28();
      func_0x0066ded0();
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 0066debc; end: 0066dee3;  */

void FUN_0066debc(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  func_0x00675160();
  auStack_20[0] = param_2;
  func_0x00490290(auStack_20);
  return;
}



/* Entry: 0066dee4; end: 0066df63;  */

void FUN_0066dee4(ulong param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w10;
  
  func_0x006743ac();
  iVar1 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x006750c4(), iVar1 == 0)) {
    FUN_0065556c(*param_2);
    do {
      func_0x0067626c();
    } while (extraout_w10 != 0);
    func_0x00674b54();
    if ((bool)in_ZR) {
      func_0x00674ccc();
    }
  }
  return;
}



/* Entry: 0066df64; end: 0066dfdf;  */

long FUN_0066df64(void)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x24;
  long unaff_x28;
  
  func_0x00674e30();
  func_0x00674960();
  do {
    func_0x0067644c();
    func_0x00674f7c();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x00674eb0();
      uVar1 = *unaff_x20;
      FUN_0066dfe0(uVar1,unaff_x20[1],unaff_x24 + unaff_x28 * 0x18);
      if ((int)uVar1 != 0) {
        return *unaff_x19 + unaff_x28;
      }
      func_0x00675f08();
    }
    func_0x006745a8();
  } while ((extraout_x8_00 & 1) == 0);
  return 0;
}



/* Entry: 0066dfe0; end: 0066e007;  */

bool FUN_0066dfe0(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  if (uVar1 == param_2) {
    func_0x0046d038(puVar3,uVar1,param_1);
    bVar2 = (int)puVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 0066e008; end: 0066e113;  */

void FUN_0066e008(long *param_1)

{
  char *pcVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      FUN_00567000();
      __ZdlPv();
    }
    lVar2 = param_1[0xb];
    param_1[0xb] = 0;
    if (lVar2 != 0) {
      FUN_0067da50();
      __ZdlPv();
    }
    lVar2 = param_1[9];
    if (lVar2 != 0) {
      pcVar1 = (char *)param_1[7];
      while (lVar2 != 0) {
        if (-1 < *pcVar1) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        }
        func_0x00674c10();
      }
      func_0x00674d30(param_1[7]);
    }
    lVar2 = param_1[5];
    param_1[5] = 0;
    if (lVar2 != 0) {
      func_0x00665a58(lVar2 + 0x188);
      func_0x00665a7c(lVar2 + 0x170);
      func_0x00665aa0(lVar2 + 0x158);
      func_0x00665ac4(lVar2 + 0x140);
      FUN_00665ae8(lVar2 + 0x120);
      func_0x00665b50(lVar2 + 0x108);
      FUN_0065430c(lVar2 + 0xe8);
      func_0x00654330(lVar2 + 200);
      func_0x00654354(lVar2 + 0xb0);
      func_0x00665f44(lVar2 + 0x98);
      FUN_00665fd0(lVar2 + 0x78);
      FUN_00666014(lVar2 + 0x58);
      FUN_00666038(lVar2 + 0x38);
      FUN_00666038(lVar2 + 0x18);
      func_0x00459128(lVar2);
      __ZdlPv();
    }
    FUN_0066bfd8(param_1 + 4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 0066e114; end: 0066e1a3;  */

long FUN_0066e114(void)

{
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  long lVar1;
  long extraout_x10_00;
  long extraout_x10_01;
  ulong extraout_x11;
  ulong uVar2;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  long extraout_x12;
  ulong extraout_x13;
  long extraout_x13_00;
  ulong uVar3;
  ulong extraout_x14;
  ulong extraout_x15;
  char in_b0;
  char in_register_00005001;
  char in_register_00005002;
  char in_register_00005003;
  char in_register_00005004;
  char in_register_00005005;
  char in_register_00005006;
  char in_register_00005007;
  uint uVar4;
  undefined8 uVar5;
  
  func_0x00674878();
  FUN_0066e1a4();
  func_0x00676a38(0);
  lVar1 = extraout_x10;
  uVar2 = extraout_x11;
  uVar3 = extraout_x13;
  while( true ) {
    uVar5 = *(undefined8 *)(lVar1 + (uVar3 & uVar2));
    uVar3 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) == in_register_00005007),
                     CONCAT16(-((char)((ulong)uVar5 >> 0x30) == in_register_00005006),
                              CONCAT15(-((char)((ulong)uVar5 >> 0x28) == in_register_00005005),
                                       CONCAT14(-((char)((ulong)uVar5 >> 0x20) ==
                                                 in_register_00005004),
                                                CONCAT13(-((char)((ulong)uVar5 >> 0x18) ==
                                                          in_register_00005003),
                                                         CONCAT12(-((char)((ulong)uVar5 >> 0x10) ==
                                                                   in_register_00005002),
                                                                  CONCAT11(-((char)((ulong)uVar5 >>
                                                                                   8) ==
                                                                            in_register_00005001),
                                                                           -((char)uVar5 == in_b0)))
                                                        ))))) & 0x8080808080808080;
    while (uVar3 != 0) {
      func_0x00676128();
      if (*(long *)(extraout_x12 + (extraout_x15 & extraout_x11_00) * 8) == extraout_x9) {
        return extraout_x10_00 + (extraout_x15 & extraout_x11_00);
      }
      uVar3 = extraout_x14 - 1 & extraout_x14;
    }
    uVar4 = (uint)uVar5;
    func_0x006761e8();
    if ((uVar4 & 1) != 0) break;
    uVar3 = extraout_x8 + 8 + extraout_x13_00;
    lVar1 = extraout_x10_01;
    uVar2 = extraout_x11_01;
  }
  return 0;
}



/* Entry: 0066e1a4; end: 0066e1bb;  */

void FUN_0066e1a4(void)

{
  func_0x00675d0c();
  return;
}



/* Entry: 0066e1bc; end: 0066e1d3;  */

void FUN_0066e1bc(void)

{
  func_0x00676568(&PTR_LOOP_00a01490);
  return;
}



/* Entry: 0066e1d4; end: 0066e1ef;  */

void FUN_0066e1d4(void)

{
  func_0x00676568();
  return;
}



/* Entry: 0066e1f0; end: 0066e2e3;  */

void FUN_0066e1f0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined4 extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long unaff_x19;
  
  func_0x006746c4();
  FUN_0066e1a4();
  func_0x00674934();
  do {
    func_0x00675244();
    lVar2 = CONCAT44(extraout_var,extraout_w13);
    uVar3 = extraout_x10;
    lVar4 = extraout_x11;
    lVar5 = extraout_x12;
    uVar6 = extraout_w13;
    uVar7 = extraout_var;
    while (lVar2 != 0) {
      uVar1 = (CONCAT44(uVar7,uVar6) & 0xaaaaaaaaaaaaaaaa) >> 1 |
              (CONCAT44(uVar7,uVar6) & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      if (*(long *)(*(long *)(unaff_x19 + 8) +
                   (lVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar3) * 8) ==
          lVar4) {
        return;
      }
      func_0x0067692c();
      uVar3 = extraout_x10_00;
      lVar4 = extraout_x11_00;
      lVar5 = extraout_x12_00;
      uVar6 = extraout_w13_00;
      uVar7 = extraout_var_00;
      lVar2 = CONCAT44(extraout_var_00,extraout_w13_00);
    }
    func_0x006761e8();
  } while ((param_3 & 1) == 0);
  func_0x0066e26c();
  return;
}



/* Entry: 0066e2e4; end: 0066e35b;  */

void FUN_0066e2e4(long param_1)

{
  char *pcVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  char *unaff_x22;
  long unaff_x23;
  long lVar2;
  long lVar3;
  
  func_0x00676210();
  func_0x00674364();
  FUN_0066d34c();
  lVar2 = *(long *)(unaff_x19 + 8);
  pcVar1 = unaff_x22;
  for (lVar3 = unaff_x23; lVar3 != 0; lVar3 = lVar3 + -1) {
    if (-1 < *pcVar1) {
      func_0x00674cfc();
      FUN_0066e1a4();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      *(undefined8 *)(lVar2 + param_1 * 8) = *unaff_x20;
    }
    pcVar1 = pcVar1 + 1;
    unaff_x20 = unaff_x20 + 1;
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
  return;
}



/* Entry: 0066e35c; end: 0066e35f;  */

void FUN_0066e35c(void)

{
  func_0x00675d0c();
  return;
}



/* Entry: 0066e360; end: 0066e3d7;  */

void FUN_0066e360(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x00674608();
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00675018();
    }
    func_0x0066e394();
    *(ulong *)(unaff_x19 + 0x60) = uVar1;
  }
  return;
}



/* Entry: 0066e3d8; end: 0066e3df;  */

void FUN_0066e3d8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  long extraout_x13;
  long lVar6;
  long extraout_x14;
  long *unaff_x19;
  long *unaff_x20;
  ulong *puVar7;
  ulong uVar8;
  
  puVar3 = param_2;
  func_0x006755c0();
  puVar7 = param_2;
  func_0x006750fc();
  param_1 = (ulong *)*param_1;
  Hint_Prefetch(*param_1,0,2,0);
  puVar1 = param_1;
  FUN_0066696c(*param_1,param_1,*puVar7,param_2[1]);
  uVar8 = param_1[2];
  func_0x00674f64(*param_1 >> 0xc ^ (ulong)puVar1 >> 7);
  do {
    func_0x00674f7c();
    lVar6 = extraout_x13;
    for (uVar5 = extraout_x8 & 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar2 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar7 = (ulong *)(extraout_x14 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar8
                        );
      uVar2 = *param_2;
      FUN_0066dfe0(uVar2,param_2[1],param_1[1] + (long)puVar7 * lVar6);
      if ((uVar2 & 1) != 0) {
        uVar4 = 0;
        goto LAB_0066e4bc;
      }
      lVar6 = 0x18;
    }
    func_0x006745a8();
  } while ((extraout_x8_00 & 1) == 0);
  FUN_0066698c(param_1,puVar1);
  FUN_00456d78(*(long *)(*unaff_x20 + 8) + (long)param_1 * 0x18,puVar3);
  uVar4 = 1;
  puVar7 = param_1;
LAB_0066e4bc:
  lVar6 = ((long *)*unaff_x20)[1];
  *unaff_x19 = *(long *)*unaff_x20 + (long)puVar7;
  unaff_x19[1] = lVar6 + (long)puVar7 * 0x18;
  *(undefined1 *)(unaff_x19 + 2) = uVar4;
  func_0x0067559c();
  return;
}



/* Entry: 0066e3e0; end: 0066e51b;  */

void FUN_0066e3e0(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  long extraout_x13;
  long lVar5;
  long extraout_x14;
  long *unaff_x19;
  long *unaff_x20;
  ulong *puVar6;
  ulong uVar7;
  
  func_0x006755c0();
  puVar6 = param_2;
  func_0x006750fc();
  param_1 = (ulong *)*param_1;
  Hint_Prefetch(*param_1,0,2,0);
  puVar1 = param_1;
  FUN_0066696c(*param_1,param_1,*puVar6,param_2[1]);
  uVar7 = param_1[2];
  func_0x00674f64(*param_1 >> 0xc ^ (ulong)puVar1 >> 7);
  do {
    func_0x00674f7c();
    lVar5 = extraout_x13;
    for (uVar4 = extraout_x8 & 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar2 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar6 = (ulong *)(extraout_x14 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar7
                        );
      uVar2 = *param_2;
      FUN_0066dfe0(uVar2,param_2[1],param_1[1] + (long)puVar6 * lVar5);
      if ((uVar2 & 1) != 0) {
        uVar3 = 0;
        goto LAB_0066e4bc;
      }
      lVar5 = 0x18;
    }
    func_0x006745a8();
  } while ((extraout_x8_00 & 1) == 0);
  FUN_0066698c(param_1,puVar1);
  FUN_00456d78(*(long *)(*unaff_x20 + 8) + (long)param_1 * 0x18,param_3);
  uVar3 = 1;
  puVar6 = param_1;
LAB_0066e4bc:
  lVar5 = ((long *)*unaff_x20)[1];
  *unaff_x19 = *(long *)*unaff_x20 + (long)puVar6;
  unaff_x19[1] = lVar5 + (long)puVar6 * 0x18;
  *(undefined1 *)(unaff_x19 + 2) = uVar3;
  func_0x0067559c();
  return;
}



/* Entry: 0066e51c; end: 0066e553;  */

void FUN_0066e51c(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  
  func_0x00674b00();
  puVar1 = param_2;
  _strlen();
  puVar2 = param_2;
  func_0x006753c8();
  if ((*param_2 & 3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_009989c8)
              (*param_2 & 0xfffffffffffffffc);
    return;
  }
  if (unaff_x19 == (ulong *)0x0) {
    FUN_00532d74(puVar1,puVar2);
  }
  else {
    FUN_00532d40();
    puVar1 = unaff_x19;
  }
  *param_2 = (ulong)puVar1;
  return;
}



/* Entry: 0066e554; end: 0066e767;  */

void FUN_0066e554(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x400;
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00675018();
    }
    func_0x0066e394();
    *(ulong *)(param_1 + 0x98) = uVar1;
  }
  return;
}



/* Entry: 0066e768; end: 0066e7bb;  */

void FUN_0066e768(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x006743c8();
  uStack_20 = 0x561238;
  uStack_28 = param_4;
  uStack_18 = extraout_x8;
  FUN_0056138c(param_1,param_2,*param_3,param_3[1],&uStack_28,1);
  func_0x00674120(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0066e7bc; end: 0066e7bf;  */

void FUN_0066e7bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0066e7c0; end: 0066e80b;  */

void FUN_0066e7c0(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00674c00();
  FUN_0066e1f0();
  lVar1 = unaff_x20[1];
  if ((param_3 & 1) != 0) {
    *(undefined8 *)(lVar1 + param_2 * 8) = *unaff_x21;
  }
  *unaff_x19 = *unaff_x20 + param_2;
  unaff_x19[1] = lVar1 + param_2 * 8;
  *(char *)(unaff_x19 + 2) = (char)param_3;
  return;
}



/* Entry: 0066e80c; end: 0066e877;  */

long * FUN_0066e80c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x120);
    FUN_00668654(lVar1 + 0xf8);
    func_0x00668678(lVar1 + 0xd8);
    FUN_00668654(lVar1 + 0xb8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x90);
    FUN_0065acf8(lVar1 + 0x70);
    FUN_0066869c(lVar1 + 0x20);
    func_0x00675e98();
  }
  return param_1;
}



/* Entry: 0066e878; end: 0066e887;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0066e878(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  section *psVar8;
  section *psVar9;
  qword *pqVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  qword *pqVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *******ppppppplVar21;
  long lVar22;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  qword qVar23;
  long *extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong uVar24;
  undefined8 *extraout_x8_07;
  long extraout_x8_08;
  long *******extraout_x8_09;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  undefined8 *extraout_x9_03;
  undefined8 *extraout_x9_04;
  long extraout_x9_05;
  undefined8 *extraout_x9_06;
  undefined8 *extraout_x9_07;
  undefined8 extraout_x9_08;
  undefined8 extraout_x9_09;
  undefined8 extraout_x9_10;
  undefined8 extraout_x9_11;
  undefined8 *extraout_x9_12;
  undefined8 *extraout_x9_13;
  int extraout_w10;
  undefined8 *extraout_x10;
  ulong extraout_x10_00;
  long *extraout_x10_01;
  long ******pppppplVar25;
  long extraout_x10_02;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long extraout_x10_08;
  long extraout_x10_09;
  long extraout_x10_10;
  long extraout_x10_11;
  long extraout_x10_12;
  long extraout_x10_13;
  ulong extraout_x11;
  uint extraout_w12;
  int iVar26;
  ulong uVar28;
  dword *pdVar29;
  long *plVar30;
  ulong uVar31;
  undefined8 uVar32;
  long lVar33;
  uint uVar34;
  undefined8 uVar35;
  long *plVar36;
  long *******ppppppplVar37;
  dword *pdVar38;
  int iVar39;
  long unaff_x28;
  long ******pppppplVar40;
  qword *pqStack_f0;
  long lStack_e8;
  section *psStack_c8;
  qword *pqStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  undefined8 *puStack_a8;
  long *plStack_98;
  long *******ppppppplStack_90;
  ulong uStack_88;
  long *******ppppppplVar27;
  
  lVar22 = param_1[1];
  uVar3 = param_1[2];
  uVar32 = *(undefined8 *)(lVar22 + 0x28);
  uVar35 = *(undefined8 *)(lVar22 + 0x10);
  psVar8 = &section_00000158;
  __Znwm();
  *(long *)psVar8->sectname = lVar22;
  *(undefined8 *)(psVar8->sectname + 8) = uVar32;
  *(undefined1 *)&psVar8->addr = 0;
  *(undefined8 *)psVar8->segname = uVar3;
  *(undefined8 *)(psVar8->segname + 8) = uVar35;
  psVar8[1].segname[8] = '\0';
  psVar8[1].addr = 0;
  pdVar29 = &psVar8[1].flags;
  psVar8[1].flags = 0;
  psVar8[1].reserved1 = 0;
  psVar8[1].reserved2 = 0;
  psVar8[1].reserved3 = 0;
  psVar8[2].sectname[0] = '\0';
  psVar8[2].sectname[1] = '\0';
  psVar8[2].sectname[2] = '\0';
  psVar8[2].sectname[3] = '\0';
  psVar8[2].sectname[4] = '\0';
  psVar8[2].sectname[5] = '\0';
  psVar8[2].sectname[6] = '\0';
  psVar8[2].sectname[7] = '\0';
  psVar9 = psVar8;
  func_0x00674868();
  *(undefined8 *)(psVar9[2].segname + 8) = extraout_x8;
  psVar9[1].size = 0;
  psVar9[1].offset = 0;
  psVar9[1].align = 0;
  *(undefined1 *)&psVar9[1].reloff = 0;
  psVar9[2].size = 0;
  psVar9[2].offset = 0;
  psVar9[2].align = 0;
  pdVar38 = &psVar9[2].reloff;
  psVar9[2].reloff = (int)extraout_x8;
  psVar9[2].nrelocs = (int)((ulong)extraout_x8 >> 0x20);
  psVar9[2].addr = 0;
  psVar9[2].flags = 0;
  psVar9[2].reserved1 = 0;
  psVar9[2].reserved2 = 0;
  psVar9[2].reserved3 = 0;
  *(undefined8 *)(psVar9[3].sectname + 8) = extraout_x8;
  psVar9[3].sectname[0] = '\0';
  psVar9[3].sectname[1] = '\0';
  psVar9[3].sectname[2] = '\0';
  psVar9[3].sectname[3] = '\0';
  psVar9[3].sectname[4] = '\0';
  psVar9[3].sectname[5] = '\0';
  psVar9[3].sectname[6] = '\0';
  psVar9[3].sectname[7] = '\0';
  psVar9[3].segname[8] = '\0';
  psVar9[3].segname[9] = '\0';
  psVar9[3].segname[10] = '\0';
  psVar9[3].segname[0xb] = '\0';
  psVar9[3].segname[0xc] = '\0';
  psVar9[3].segname[0xd] = '\0';
  psVar9[3].segname[0xe] = '\0';
  psVar9[3].segname[0xf] = '\0';
  psVar9[3].segname[0] = '\0';
  psVar9[3].segname[1] = '\0';
  psVar9[3].segname[2] = '\0';
  psVar9[3].segname[3] = '\0';
  psVar9[3].segname[4] = '\0';
  psVar9[3].segname[5] = '\0';
  psVar9[3].segname[6] = '\0';
  psVar9[3].segname[7] = '\0';
  psVar9[3].size = 0;
  psVar9[3].addr = 0;
  psVar9[3].reloff = 0;
  psVar9[3].nrelocs = 0;
  psVar9[3].offset = 0;
  psVar9[3].align = 0;
  psVar9[3].flags = 0;
  psVar9[3].reserved1 = 0;
  func_0x006759a0();
  FUN_00425cb4(&psVar9[3].reserved2);
  psVar8[4].segname[0] = ' ';
  psVar8[4].segname[1] = '\0';
  psVar8[4].segname[2] = '\0';
  psVar8[4].segname[3] = '\0';
  if ((bRam0000000000b63c88 & 1) == 0) {
    iVar26 = 0xb63c88;
    ___cxa_guard_acquire();
    if (iVar26 != 0) {
      FUN_00533800(&PTR_PTR_00b25a18,uRam0000000000b258d0,0xb,0,0,&PTR_PTR_00b25780,0,0);
      ___cxa_guard_release(0xb63c88);
    }
  }
  lVar33 = param_1[3];
  psStack_c8 = psVar8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pdVar29,*(ulong *)(lVar33 + 0xb0) & 0xfffffffffffffffc);
  pqVar10 = *(qword **)(psVar8->sectname + 8);
  lVar22 = (long)psVar8[2].sectname[7];
  if (lVar22 < 0) {
    pdVar29 = *(dword **)&psVar8[1].flags;
    lVar22._0_4_ = psVar8[1].reserved2;
    lVar22._4_4_ = psVar8[1].reserved3;
  }
  FUN_006557c4(pqVar10,pdVar29,lVar22);
  if (pqVar10 != (qword *)0x0) {
    uVar11 = (ulong)*(uint *)(pqVar10 + 4);
    FUN_0065c4d4(uVar11,pqVar10,lVar33);
    if ((uVar11 & 1) != 0) goto LAB_0065aa88;
  }
  lVar22 = 0;
  uVar11 = 0;
  while( true ) {
    plVar30 = *(long **)(psVar8->sectname + 8);
    if ((ulong)((plVar30[1] - *plVar30) / 0x18) <= uVar11) break;
    lVar12 = *plVar30 + lVar22;
    FUN_00459c38(lVar12,*(ulong *)(lVar33 + 0xb0) & 0xfffffffffffffffc);
    if ((int)lVar12 != 0) {
      func_0x00675824();
      FUN_0065c464();
      goto LAB_00659de0;
    }
    uVar11 = uVar11 + 1;
    lVar22 = lVar22 + 0x18;
  }
  uVar11 = *(ulong *)(lVar33 + 0xb8) & 0xfffffffffffffffc;
  if ((*(char *)(uVar11 + 0x17) < '\0') && (0x1ff < *(ulong *)(uVar11 + 8))) {
    func_0x00674d90(psVar8,uVar11,lVar33);
LAB_00659de0:
    pqVar10 = (qword *)0x0;
    goto LAB_0065aa88;
  }
  if (((*(byte *)(*(long *)psVar8->sectname + 0x31) & 1) == 0) &&
     (*(long *)(*(long *)psVar8->sectname + 8) != 0)) {
    FUN_00479520(plVar30,*(ulong *)(lVar33 + 0xb0) & 0xfffffffffffffffc);
    lVar22 = 0;
    puVar1 = (undefined8 *)(lVar33 + 0x18);
    while( true ) {
      lVar12 = *(long *)(psVar8->sectname + 8);
      uVar7 = lVar22 == *(int *)(lVar33 + 0x20);
      if (*(int *)(lVar33 + 0x20) <= lVar22) break;
      func_0x00675108(*puVar1);
      FUN_006557c4();
      if (lVar12 == 0) {
        lVar12 = *(long *)psVar8->sectname;
        if (*(long *)(lVar12 + 0x18) != 0) {
          func_0x00674d10();
          puVar18 = puVar1;
          if (!(bool)uVar7) {
            puVar18 = extraout_x10;
          }
          puVar18 = (undefined8 *)*puVar18;
          lVar12 = (long)*(char *)((long)puVar18 + 0x17);
          puVar19 = puVar18;
          if (lVar12 < 0) {
            puVar19 = (undefined8 *)*puVar18;
            lVar12 = puVar18[1];
          }
          lVar13 = extraout_x8_00;
          FUN_00655a68(extraout_x8_00,puVar19,lVar12);
          if (lVar13 != 0) goto LAB_00659eb4;
          lVar12 = *(long *)psVar8->sectname;
        }
        func_0x00675108(*puVar1,lVar12);
        FUN_00655b64();
      }
LAB_00659eb4:
      lVar22 = lVar22 + 1;
    }
    FUN_00643970();
    plVar30 = *(long **)(psVar8->sectname + 8);
  }
  uVar11 = plVar30[0x29];
  uVar7 = uVar11 == plVar30[0x2a];
  if (uVar11 < (ulong)plVar30[0x2a]) {
    plVar20 = plVar30;
    FUN_006660c8();
    lVar13 = uVar11 + 0x14;
  }
  else {
    plVar36 = (long *)plVar30[0x28];
    lVar22 = uVar11 - (long)plVar36;
    if (0xccccccccccccccc < lVar22 / 0x14 + 1U) {
      func_0x00666114();
LAB_0065ac54:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x65ac58);
      (*pcVar6)();
    }
    func_0x00676ca8();
    uVar7 = extraout_x9 == 0x666666666666666;
    uVar11 = extraout_x10_00;
    if (0x666666666666665 < extraout_x9) {
      uVar11 = extraout_x8_01;
    }
    if (uVar11 == 0) {
      lVar12 = 0;
    }
    else {
      uVar7 = uVar11 == extraout_x8_01;
      if (extraout_x8_01 <= uVar11 && !(bool)uVar7) {
        FUN_0040cee8();
        goto LAB_0065ac54;
      }
      lVar12 = uVar11 * 0x14;
      __Znwm();
    }
    lVar2 = lVar12 + lVar22;
    FUN_006660c8(lVar2,plVar30);
    lVar13 = lVar2 + 0x14;
    pdVar38 = (dword *)(lVar2 + (lVar22 / -0x14) * 0x14);
    plVar20 = plVar36;
    _memcpy(pdVar38,plVar36,lVar22);
    plVar30[0x28] = (long)pdVar38;
    plVar30[0x29] = lVar13;
    plVar30[0x2a] = lVar12 + uVar11 * 0x14;
    if (plVar36 != (long *)0x0) {
      __ZdlPv(plVar36);
    }
  }
  plVar30[0x29] = lVar13;
  pqVar14 = &section_000000b8.size;
  __Znwm();
  func_0x00675de8();
  pqStack_c0 = pqVar14;
  FUN_0065bbd0(pqVar14);
  if (*pqVar14 == 0) {
    *(int *)((long)pqVar14 + 0x7c) = *(int *)((long)pqVar14 + 0x7c) + 1;
    func_0x006754e8(pqVar14);
    qVar23 = *pqVar14;
    if ((*(uint *)(lVar33 + 0x10) >> 3 & 1) != 0) {
      if (qVar23 == 0) {
        *(int *)((long)pqVar14 + 0xa4) = *(int *)((long)pqVar14 + 0xa4) + 1;
        if ((*(byte *)(lVar33 + 0x10) >> 4 & 1) != 0) goto LAB_0065a008;
        goto LAB_0065a014;
      }
      func_0x006740c8();
      goto LAB_0065a70c;
    }
    if ((*(uint *)(lVar33 + 0x10) >> 4 & 1) != 0) {
      if (qVar23 == 0) {
LAB_0065a008:
        *(int *)(pqVar14 + 0xf) = *(int *)(pqVar14 + 0xf) + 1;
        goto LAB_0065a014;
      }
      func_0x006740c8();
      goto LAB_0065a70c;
    }
    if (qVar23 != 0) {
      func_0x006740c8();
      goto LAB_0065a70c;
    }
LAB_0065a014:
    *(int *)(pqVar14 + 0xe) = *(int *)(pqVar14 + 0xe) + *(int *)(lVar33 + 0x68) * 0x40;
    plVar20 = (long *)(ulong)(uint)(*(int *)(lVar33 + 0x68) << 1);
    func_0x0065bbfc(pqVar14);
    func_0x00675578();
    plVar36 = extraout_x8_02;
    if (!(bool)uVar7) {
      plVar36 = extraout_x10_01;
    }
    plVar30 = plVar36 + (int)extraout_x8_02[1];
    for (; plVar36 != plVar30; plVar36 = plVar36 + 1) {
      pdVar38 = (dword *)*plVar36;
      if (((byte)pdVar38[4] >> 1 & 1) == 0) {
        if (*pqVar14 != 0) {
          func_0x006740c8();
          goto LAB_0065a70c;
        }
      }
      else {
        if (*pqVar14 != 0) {
          func_0x006740c8();
          goto LAB_0065a70c;
        }
        *(int *)((long)pqVar14 + 0x9c) = *(int *)((long)pqVar14 + 0x9c) + 1;
      }
      *(dword *)(pqVar14 + 0xe) = *(int *)(pqVar14 + 0xe) + pdVar38[8] * 0x50;
      plVar20 = (long *)(ulong)(pdVar38[8] << 1);
      func_0x0065bbfc(pqVar14);
      pdVar29 = pdVar38 + 6;
      func_0x00675590(*(undefined8 *)pdVar29);
      uVar11 = (long)(int)pdVar38[8] & 0x1fffffffffffffff;
      while (pdVar38 = pdVar29, uVar11 != 0) {
        func_0x00676c9c();
        if ((extraout_w12 >> 3 & 1) != 0) {
          if (extraout_x9_00 != 0) {
            func_0x006740c8();
            goto LAB_0065a70c;
          }
          *(int *)(pqVar14 + 0x14) = extraout_w10 + 1;
        }
        func_0x006769ac();
        uVar11 = extraout_x11;
      }
    }
    FUN_006686dc(lVar33 + 0x30,pqVar14);
    FUN_00668870(lVar33 + 0x48,pqVar14);
    FUN_0066896c(lVar33 + 0x78,pqVar14);
    FUN_00668c54(pqVar14,*(undefined4 *)(lVar33 + 0xa0));
    plVar20 = (long *)(ulong)*(uint *)(lVar33 + 0x90);
    FUN_00668c54(pqVar14);
    if (*pqVar14 != 0) {
      func_0x006740c8();
      goto LAB_0065a70c;
    }
    *(int *)(pqVar14 + 0xe) = *(int *)(pqVar14 + 0xe) + *(int *)(lVar33 + 0x20) * 8;
    pqVar10 = pqVar14;
    FUN_0065c5b4(pqVar14,*(undefined8 *)(psVar8->sectname + 8));
    func_0x00675824();
    FUN_0065c654();
    pdVar38 = *(dword **)(psVar8->sectname + 8);
    if (pqVar10 == (qword *)0x0) {
      lStack_e8 = *(long *)(pdVar38 + 0x52);
      ppppppplVar15 = (long *******)0x0;
      for (uVar11 = (ulong)*(int *)(lStack_e8 + -0xc);
          uVar11 < (ulong)(*(long *)(pdVar38 + 0x58) - *(long *)(pdVar38 + 0x56) >> 3);
          uVar11 = uVar11 + 1) {
        ppppppplVar16 = (long *******)(*(long *)(pdVar38 + 0x56) + uVar11 * 8);
        Hint_Prefetch(*(undefined8 *)(pdVar38 + 0x32),0,2,0);
        ppppppplVar15 = (long *******)*ppppppplVar16;
        FUN_0066c31c(*(undefined8 *)(pdVar38 + 0x32));
        lVar22 = *(long *)(pdVar38 + 0x34);
        func_0x00676198(*(ulong *)(pdVar38 + 0x32) >> 0xc);
        do {
          func_0x0067644c();
          func_0x006753d4();
          while ((extraout_x8_03 & 0x8080808080808080) != 0) {
            func_0x00674eb0();
            ppppppplVar15 = ppppppplVar16;
            FUN_0066c33c(ppppppplVar16,*(undefined8 *)(lVar22 + unaff_x28 * 8));
            if (((ulong)ppppppplVar15 & 1) != 0) {
              ppppppplVar15 = (long *******)(pdVar38 + 0x32);
              func_0x00676740(*(undefined8 *)(pdVar38 + 0x32));
              goto LAB_0065a350;
            }
            func_0x00675f08();
          }
          func_0x00674774();
        } while ((extraout_x8_04 & 1) == 0);
LAB_0065a350:
      }
      for (uVar11 = (ulong)*(int *)(lStack_e8 + -8); lVar22 = *(long *)(pdVar38 + 0x5c),
          uVar11 < (ulong)(*(long *)(pdVar38 + 0x5e) - lVar22 >> 3); uVar11 = uVar11 + 1) {
        Hint_Prefetch(*(undefined8 *)(pdVar38 + 0x3a),0,2,0);
        ppppppplVar15 = *(long ********)(*(long *)(lVar22 + uVar11 * 8) + 8);
        func_0x0066c3a4();
        lVar33 = *(long *)(pdVar38 + 0x3c);
        func_0x00676198(*(ulong *)(pdVar38 + 0x3a) >> 0xc);
        do {
          func_0x0067644c();
          func_0x006753d4();
          while ((extraout_x8_05 & 0x8080808080808080) != 0) {
            func_0x00674eb0();
            ppppppplVar15 = *(long ********)(lVar22 + uVar11 * 8);
            func_0x0066c384(ppppppplVar15,*(undefined8 *)(lVar33 + unaff_x28 * 8));
            if (((ulong)ppppppplVar15 & 1) != 0) {
              ppppppplVar15 = (long *******)(pdVar38 + 0x3a);
              func_0x00676740(*(undefined8 *)(pdVar38 + 0x3a));
              goto LAB_0065a3e8;
            }
            func_0x00675f08();
          }
          func_0x00674774();
        } while ((extraout_x8_06 & 1) == 0);
LAB_0065a3e8:
      }
      for (uVar11 = (ulong)*(int *)(lStack_e8 + -4);
          uVar11 < (ulong)(*(long *)(pdVar38 + 100) - *(long *)(pdVar38 + 0x62) >> 4);
          uVar11 = uVar11 + 1) {
        ppppppplVar17 = (long *******)(*(long *)(pdVar38 + 0x62) + uVar11 * 0x10);
        ppppppplVar21 = ppppppplVar17;
        FUN_00666ce8(pdVar38 + 0x42);
        ppppppplVar16 = (long *******)(pdVar38 + 0x42);
        func_0x006766f4();
        uVar34 = (uint)ppppppplVar21;
        ppppppplVar15 = ppppppplVar16;
        if (*(long ********)(pdVar38 + 0x44) == ppppppplVar16 &&
            uVar34 == *(byte *)((long)*(long ********)(pdVar38 + 0x44) + 10)) {
LAB_0065a48c:
          ppppppplVar27 = (long *******)((ulong)ppppppplVar21 & 0xffffffff);
          ppppppplVar17 = ppppppplVar16;
          ppppppplVar37 = ppppppplVar27;
LAB_0065a49c:
          iVar39 = (int)ppppppplVar37;
          iVar26 = (int)ppppppplVar27;
          if (*(char *)((long)ppppppplVar17 + 0xb) != '\0') {
            lVar22 = (long)(int)(iVar26 - uVar34);
            bVar5 = true;
            goto joined_r0x0065a4b0;
          }
          if (ppppppplVar27 != (long *******)((ulong)ppppppplVar21 & 0xffffffff)) {
            bVar5 = true;
            goto LAB_0065a4c4;
          }
        }
        else {
          func_0x00666cb0(ppppppplVar17,ppppppplVar16 + (long)(int)uVar34 * 3 + 2);
          ppppppplVar15 = ppppppplVar17;
          if ((char)ppppppplVar17 < '\0') goto LAB_0065a48c;
          ppppppplVar15 = (long *******)&ppppppplStack_b8;
          ppppppplStack_b8 = ppppppplVar16;
          ppppppplStack_b0 = (long *******)((ulong)ppppppplVar21 & 0xffffffff);
          FUN_0066c3c8();
          ppppppplVar27 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffff);
          iVar26 = (int)ppppppplStack_b0;
          ppppppplVar17 = ppppppplStack_b8;
          ppppppplVar37 = ppppppplStack_b0;
          if (ppppppplStack_b8 == ppppppplVar16) goto LAB_0065a49c;
          bVar5 = false;
LAB_0065a4c4:
          iVar39 = (int)ppppppplVar37;
          if (*(char *)((long)ppppppplVar16 + 0xb) == '\0') {
            func_0x00675b34();
            ppppppplVar37 = (long *******)ppppppplVar15[(ulong)(uVar34 + 1) & 0xff];
            lVar22 = 1;
          }
          else {
            lVar22 = (long)(int)-uVar34;
            ppppppplVar37 = ppppppplVar16;
          }
          while (*(char *)((long)ppppppplVar37 + 0xb) == '\0') {
            func_0x00665c68();
          }
          uVar28 = (ulong)*(byte *)(ppppppplVar37 + 1);
          ppppppplVar37 = (long *******)*ppppppplVar37;
          uVar31 = (ulong)iVar26;
          while( true ) {
            ppppppplVar15 = ppppppplVar37;
            FUN_00665ccc();
            ppppppplVar15 = (long *******)ppppppplVar15[uVar28 & 0xff];
            cVar4 = '\0';
            if (*(char *)((long)ppppppplVar15 + 0xb) == '\0') {
              while (cVar4 == '\0') {
                func_0x00665c68();
                cVar4 = *(char *)((long)ppppppplVar15 + 0xb);
              }
              uVar28 = (ulong)*(byte *)(ppppppplVar15 + 1);
              ppppppplVar37 = (long *******)*ppppppplVar15;
            }
            uVar24 = uVar31;
            if ((ppppppplVar15 == ppppppplVar17) ||
               (uVar24 = (ulong)*(byte *)((long)ppppppplVar15 + 10),
               ppppppplVar37 == ppppppplVar17 && uVar28 == uVar31)) break;
            if (*(byte *)((long)ppppppplVar37 + 10) <= uVar28) {
              do {
                ppppppplVar27 = ppppppplVar37 + 1;
                uVar28 = (ulong)*(byte *)ppppppplVar27;
                ppppppplVar37 = (long *******)*ppppppplVar37;
                if (ppppppplVar37 == ppppppplVar17 && uVar31 == uVar28) goto LAB_0065a59c;
              } while (*(byte *)((long)ppppppplVar37 + 10) <= *(byte *)ppppppplVar27);
            }
            lVar22 = lVar22 + uVar24 + 1;
            uVar28 = uVar28 + 1;
          }
LAB_0065a59c:
          lVar22 = uVar24 + lVar22;
joined_r0x0065a4b0:
          if (lVar22 != 0) {
            uVar31 = *(ulong *)(pdVar38 + 0x46);
            uVar28 = uVar31 - lVar22;
            if (uVar28 == 0) {
              ppppppplVar15 = (long *******)(pdVar38 + 0x42);
              func_0x00665b50();
            }
            else if (bVar5) {
              FUN_0066c538(ppppppplVar16,uVar34 & 0xff,iVar39 - uVar34 & 0xff);
              func_0x00675ac8(*(long *)(pdVar38 + 0x46) - lVar22);
              ppppppplVar15 = ppppppplVar16;
            }
            else {
              while( true ) {
                uVar24 = uVar31 - uVar28;
                if (uVar31 < uVar28 || uVar24 == 0) break;
                uVar34 = (uint)ppppppplVar21;
                if (*(char *)((long)ppppppplVar16 + 0xb) == '\0') {
                  ppppppplStack_90 = ppppppplVar16;
                  uStack_88 = (ulong)ppppppplVar21 & 0xffffffff;
                  func_0x0066c47c(&ppppppplStack_90);
                  pppppplVar25 = ppppppplStack_90[(long)(int)uStack_88 * 3 + 4];
                  pppppplVar40 = ppppppplStack_90[(long)(int)uStack_88 * 3 + 2];
                  ppppppplVar16[(long)(int)uVar34 * 3 + 3] =
                       ppppppplStack_90[(long)(int)uStack_88 * 3 + 3];
                  ppppppplVar16[(long)(int)uVar34 * 3 + 2] = pppppplVar40;
                  ppppppplVar16[(long)(int)uVar34 * 3 + 4] = pppppplVar25;
                  *(char *)((long)ppppppplStack_90 + 10) =
                       *(char *)((long)ppppppplStack_90 + 10) + -1;
                  *(long *)(pdVar38 + 0x46) = *(long *)(pdVar38 + 0x46) + -1;
                  ppppppplVar15 = (long *******)(pdVar38 + 0x42);
                  ppppppplVar16 = ppppppplStack_90;
                  FUN_0066c614(ppppppplVar15,ppppppplStack_90,uStack_88);
                  ppppppplStack_b0 =
                       (long *******)CONCAT44(ppppppplStack_b0._4_4_,(int)ppppppplVar16);
                  ppppppplVar16 = (long *******)&ppppppplStack_b8;
                  ppppppplStack_b8 = ppppppplVar15;
                  FUN_0066c3c8();
                  ppppppplVar21 = ppppppplStack_b0;
                  ppppppplVar17 = ppppppplStack_b8;
                }
                else {
                  uVar31 = (ulong)(int)(*(byte *)((long)ppppppplVar16 + 10) - uVar34);
                  if (uVar24 <= uVar31) {
                    uVar31 = uVar24;
                  }
                  ppppppplVar21 = (long *******)(ulong)(uVar34 & 0xff);
                  FUN_0066c538(ppppppplVar16,ppppppplVar21,(uint)uVar31 & 0xff);
                  func_0x00675ac8(*(long *)(pdVar38 + 0x46) - (uVar31 & 0xff));
                  ppppppplVar17 = ppppppplVar16;
                }
                uVar31 = *(ulong *)(pdVar38 + 0x46);
                ppppppplVar15 = ppppppplVar16;
                ppppppplVar16 = ppppppplVar17;
              }
            }
          }
        }
      }
      plVar20 = (long *)(long)*(int *)(lStack_e8 + -0xc);
      lVar22 = *(long *)(pdVar38 + 0x56);
      puVar1 = *(undefined8 **)(pdVar38 + 0x58);
      plVar30 = (long *)((long)puVar1 - lVar22 >> 3);
      pqStack_f0 = pqVar10;
      if (plVar20 <= plVar30) goto LAB_0065a714;
      uVar11 = (long)plVar20 - (long)plVar30;
      if ((ulong)(*(long *)(pdVar38 + 0x5a) - (long)puVar1 >> 3) < uVar11) {
        lVar22 = (long)(pdVar38 + 0x56);
        func_0x00666120();
        plStack_98 = (long *)(pdVar38 + 0x5a);
        lVar33 = *(long *)(pdVar38 + 0x56);
        lVar12 = *(long *)(pdVar38 + 0x58);
        if (lVar22 != 0) {
          FUN_00666174();
        }
        func_0x00676a18(lVar12 - lVar33);
        puStack_a8 = extraout_x8_07 + uVar11;
        puVar1 = extraout_x8_07;
        for (lVar22 = (long)plVar20 * 8 + (long)plVar30 * -8; lVar22 != 0; lVar22 = lVar22 + -8) {
          *puVar1 = &UNK_0082398c;
          puVar1 = puVar1 + 1;
        }
        FUN_00666148(pdVar38 + 0x56,&ppppppplStack_b8);
        ppppppplVar15 = (long *******)&ppppppplStack_b8;
        func_0x0066619c();
      }
      else {
        puVar18 = puVar1;
        for (lVar22 = (long)plVar20 * 8 + (long)plVar30 * -8; lVar22 != 0; lVar22 = lVar22 + -8) {
          *puVar18 = &UNK_0082398c;
          puVar18 = puVar18 + 1;
        }
        *(undefined8 **)(pdVar38 + 0x58) = puVar1 + uVar11;
      }
      goto LAB_0065a788;
    }
    lVar22 = *(long *)(pdVar38 + 0x52);
    *(long *)(pdVar38 + 0x52) = lVar22 + -0x14;
    if (*(long *)(pdVar38 + 0x50) == lVar22 + -0x14) {
      *(undefined8 *)(pdVar38 + 0x58) = *(undefined8 *)(pdVar38 + 0x56);
      *(undefined8 *)(pdVar38 + 0x5e) = *(undefined8 *)(pdVar38 + 0x5c);
      *(undefined8 *)(pdVar38 + 100) = *(undefined8 *)(pdVar38 + 0x62);
    }
    *(undefined1 *)((long)pqVar10 + 2) = 1;
    uVar11 = (ulong)*(uint *)(pqVar14 + 0xe);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x15);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x74);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xac);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0xf);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x16);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x7c);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xb4);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0x10);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x17);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x84);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xbc);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0x11);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x18);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x8c);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xc4);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0x12);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x19);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x94);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xcc);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0x13);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x1a);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x9c);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xd4);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0x14);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x1b);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0xa4);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xdc);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
  }
  else {
    func_0x006740c8();
LAB_0065a70c:
    ppppppplVar15 = (long *******)&ppppppplStack_b8;
    FUN_005558a0();
    lVar22 = extraout_x9_01;
LAB_0065a714:
    pqVar10 = pqStack_f0;
    if (plVar20 < plVar30) {
      *(long *)(pdVar38 + 0x58) = lVar22 + (long)plVar20 * 8;
    }
LAB_0065a788:
    uVar11 = (ulong)*(int *)(lStack_e8 + -8);
    lVar22 = *(long *)(pdVar38 + 0x5e);
    uVar28 = lVar22 - *(long *)(pdVar38 + 0x5c) >> 3;
    if (uVar28 < uVar11) {
      uVar31 = uVar11 - uVar28;
      if ((ulong)(*(long *)(pdVar38 + 0x60) - lVar22 >> 3) < uVar31) {
        lVar22 = (long)(pdVar38 + 0x5c);
        FUN_006661d8();
        plStack_98 = (long *)(pdVar38 + 0x60);
        lVar33 = *(long *)(pdVar38 + 0x5c);
        lVar12 = *(long *)(pdVar38 + 0x5e);
        if (lVar22 != 0) {
          FUN_0066622c();
        }
        func_0x00676a18(lVar12 - lVar33);
        puVar1 = (undefined8 *)(extraout_x8_08 + uVar31 * 8);
        lVar22 = uVar11 * 8 + uVar28 * -8;
        while (lVar22 != 0) {
          func_0x00675e68();
          puVar1 = extraout_x9_03;
          lVar22 = extraout_x10_03;
        }
        puStack_a8 = puVar1;
        FUN_00666200(pdVar38 + 0x5c,&ppppppplStack_b8);
        ppppppplVar15 = (long *******)&ppppppplStack_b8;
        func_0x00666254();
      }
      else {
        lVar22 = lVar22 + uVar31 * 8;
        lVar33 = uVar11 * 8 + uVar28 * -8;
        while (lVar33 != 0) {
          func_0x00675e68();
          lVar22 = extraout_x9_02;
          lVar33 = extraout_x10_02;
        }
        *(long *)(pdVar38 + 0x5e) = lVar22;
      }
    }
    else if (uVar11 < uVar28) {
      *(ulong *)(pdVar38 + 0x5e) = *(long *)(pdVar38 + 0x5c) + uVar11 * 8;
    }
    uVar11 = (ulong)*(int *)(lStack_e8 + -4);
    lVar22 = *(long *)(pdVar38 + 100);
    uVar28 = lVar22 - *(long *)(pdVar38 + 0x62) >> 4;
    if (uVar28 < uVar11) {
      uVar31 = uVar11 - uVar28;
      if ((ulong)(*(long *)(pdVar38 + 0x66) - lVar22 >> 4) < uVar31) {
        lVar22 = (long)(pdVar38 + 0x62);
        FUN_00666290(lVar22);
        FUN_006662fc(&ppppppplStack_b8,lVar22,
                     *(long *)(pdVar38 + 100) - *(long *)(pdVar38 + 0x62) >> 4,pdVar38 + 0x66);
        puVar1 = puStack_a8 + uVar31 * 2;
        lVar22 = uVar11 * 0x10 + uVar28 * -0x10;
        while (lVar22 != 0) {
          func_0x00676b58();
          puVar1 = extraout_x9_04;
          lVar22 = extraout_x10_04;
        }
        puStack_a8 = puVar1;
        FUN_006662d0(pdVar38 + 0x62,&ppppppplStack_b8);
        ppppppplVar15 = (long *******)&ppppppplStack_b8;
        FUN_00666350();
      }
      else {
        lVar22 = lVar22 + uVar31 * 0x10;
        lVar33 = uVar11 * 0x10 + uVar28 * -0x10;
        while (lVar33 != 0) {
          func_0x00676b58();
          lVar22 = extraout_x9_05;
          lVar33 = extraout_x10_05;
        }
        *(long *)(pdVar38 + 100) = lVar22;
      }
    }
    else if (uVar11 < uVar28) {
      *(ulong *)(pdVar38 + 100) = *(long *)(pdVar38 + 0x62) + uVar11 * 0x10;
    }
    uVar28 = (ulong)*(int *)(lStack_e8 + -0x14);
    ppppppplVar16 = (long *******)(pdVar38 + 0x2c);
    uVar11 = *(long *)(pdVar38 + 0x2e) - (long)*ppppppplVar16 >> 3;
    if (uVar11 < uVar28) {
      if ((ulong)(*(long *)(pdVar38 + 0x30) - *(long *)(pdVar38 + 0x2e) >> 3) < uVar28 - uVar11) {
        func_0x00675824();
        FUN_0066638c();
        FUN_006663b4(&ppppppplStack_b8,ppppppplVar15,
                     *(long *)(pdVar38 + 0x2e) - *(long *)(pdVar38 + 0x2c) >> 3,pdVar38 + 0x30);
        func_0x00675750(puStack_a8);
        puVar1 = extraout_x9_06;
        lVar22 = extraout_x10_06;
        while (lVar22 != 0) {
          func_0x00675e68();
          puVar1 = extraout_x9_07;
          lVar22 = extraout_x10_07;
        }
        puStack_a8 = puVar1;
        func_0x00666408(ppppppplVar16,&ppppppplStack_b8);
        ppppppplVar15 = (long *******)&ppppppplStack_b8;
        FUN_00666428();
      }
      else {
        func_0x00675750();
        uVar3 = extraout_x9_08;
        lVar22 = extraout_x10_08;
        while (lVar22 != 0) {
          func_0x00675e68();
          uVar3 = extraout_x9_09;
          lVar22 = extraout_x10_09;
        }
        *(undefined8 *)(pdVar38 + 0x2e) = uVar3;
      }
    }
    else if (uVar28 < uVar11) {
      FUN_00665d04(ppppppplVar16,*ppppppplVar16 + uVar28);
      ppppppplVar15 = ppppppplVar16;
    }
    uVar28 = (ulong)*(int *)(lStack_e8 + -0x10);
    plVar30 = (long *)(pdVar38 + 0x26);
    uVar11 = *(long *)(pdVar38 + 0x28) - *plVar30 >> 3;
    if (uVar11 < uVar28) {
      plVar36 = (long *)(pdVar38 + 0x2a);
      if ((ulong)(*plVar36 - *(long *)(pdVar38 + 0x28) >> 3) < uVar28 - uVar11) {
        func_0x00675824();
        func_0x0066647c();
        lVar22 = *(long *)(pdVar38 + 0x26);
        lVar33 = *(long *)(pdVar38 + 0x28);
        plStack_98 = plVar36;
        if (ppppppplVar15 != (long *******)0x0) {
          FUN_006664d0();
        }
        func_0x00676a2c(lVar33 - lVar22);
        ppppppplStack_b0 = extraout_x8_09;
        func_0x00675750();
        puVar1 = extraout_x9_12;
        lVar22 = extraout_x10_12;
        while (lVar22 != 0) {
          func_0x00675e68();
          puVar1 = extraout_x9_13;
          lVar22 = extraout_x10_13;
        }
        puStack_a8 = puVar1;
        FUN_006664a4(plVar30,&ppppppplStack_b8);
        func_0x006664f8(&ppppppplStack_b8);
      }
      else {
        func_0x00675750();
        uVar3 = extraout_x9_10;
        lVar22 = extraout_x10_10;
        while (lVar22 != 0) {
          func_0x00675e68();
          uVar3 = extraout_x9_11;
          lVar22 = extraout_x10_11;
        }
        *(undefined8 *)(pdVar38 + 0x28) = uVar3;
      }
    }
    else if (uVar28 < uVar11) {
      func_0x00665f74(plVar30,*plVar30 + uVar28 * 8);
    }
    *(long *)(pdVar38 + 0x52) = *(long *)(pdVar38 + 0x52) + -0x14;
  }
  func_0x0066f568(&pqStack_c0);
LAB_0065aa88:
  *(qword **)*param_1 = pqVar10;
  FUN_0066e80c(&psStack_c8);
  return;
}



/* Entry: 0066e888; end: 0066e8cf;  */

void FUN_0066e888(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  
  func_0x00673f20();
  func_0x00674d74();
  func_0x00673fe0();
  plVar2 = (long *)&UNK_00911db9;
  FUN_00532c74();
  func_0x00673f60();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006761f4();
  func_0x006743c8();
  lVar4 = *plVar2;
  func_0x006744f4();
  FUN_00532c74();
  func_0x00674174(*(undefined8 *)(*(long *)(lVar4 + 0x118) + 8));
  FUN_00532c74();
  uVar1 = *(char *)(lVar4 + 0xa7) == '\0';
  puVar3 = (undefined8 *)&UNK_00911e04;
  FUN_00532c74();
  func_0x00674834();
  func_0x00674120(extraout_x8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00676464();
    lVar4 = puVar3[1];
    func_0x006744f4();
    func_0x00674174(*puVar3);
    FUN_00532c74(&UNK_00911e39);
    FUN_00532c74(lVar4 + 0x138);
    func_0x00675e8c();
    func_0x006754cc();
    return;
  }
  return;
}



/* Entry: 0066e8d0; end: 0066ea5b;  */

void FUN_0066e8d0(long *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  
  func_0x006761f4();
  func_0x006743c8();
  lVar3 = *param_1;
  func_0x006744f4();
  FUN_00532c74();
  func_0x00674174(*(undefined8 *)(*(long *)(lVar3 + 0x118) + 8));
  FUN_00532c74();
  uVar1 = *(char *)(lVar3 + 0xa7) == '\0';
  puVar2 = (undefined8 *)&UNK_00911e04;
  FUN_00532c74();
  func_0x00674834();
  func_0x00674120(extraout_x8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00676464();
    lVar3 = puVar2[1];
    func_0x006744f4();
    func_0x00674174(*puVar2);
    FUN_00532c74(&UNK_00911e39);
    FUN_00532c74(lVar3 + 0x138);
    func_0x00675e8c();
    func_0x006754cc();
    return;
  }
  return;
}



/* Entry: 0066ea5c; end: 0066eacf;  */

void FUN_0066ea5c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong extraout_x12;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar2;
  long extraout_x14;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000018;
  
  func_0x006760c8(in_stack_00000018);
  func_0x00674d38();
  func_0x00676ce0();
  FUN_00532c74(&UNK_00911ec5);
  func_0x00674834();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00674ad8();
  Hint_Prefetch(*param_2,0,2,0);
  FUN_006667d0(*param_2,param_3);
  func_0x00674e58(*unaff_x21);
  do {
    func_0x00676254();
    uVar2 = extraout_x13;
    while (uVar2 != 0) {
      func_0x00675cf0();
      if (extraout_x14 == unaff_x20) goto LAB_0066eb44;
      uVar2 = extraout_x13_00 - 1 & extraout_x13_00;
    }
    func_0x00675648();
  } while ((extraout_x12 & 1) == 0);
  puVar1 = unaff_x21;
  FUN_0066eb68();
  *(long *)(unaff_x21[1] + (long)puVar1 * 8) = unaff_x20;
LAB_0066eb44:
  func_0x0067698c();
  return;
}



/* Entry: 0066ead0; end: 0066eb67;  */

void FUN_0066ead0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong extraout_x12;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar2;
  long extraout_x14;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00674ad8();
  Hint_Prefetch(*param_2,0,2,0);
  FUN_006667d0(*param_2,param_3);
  func_0x00674e58(*unaff_x21);
  do {
    func_0x00676254();
    uVar2 = extraout_x13;
    while (uVar2 != 0) {
      func_0x00675cf0();
      if (extraout_x14 == unaff_x20) goto LAB_0066eb44;
      uVar2 = extraout_x13_00 - 1 & extraout_x13_00;
    }
    func_0x00675648();
  } while ((extraout_x12 & 1) == 0);
  puVar1 = unaff_x21;
  FUN_0066eb68();
  *(long *)(unaff_x21[1] + (long)puVar1 * 8) = unaff_x20;
LAB_0066eb44:
  func_0x0067698c();
  return;
}



/* Entry: 0066eb68; end: 0066ebdf;  */

void FUN_0066eb68(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x0067409c();
  func_0x00675394();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674720();
    }
    else {
      func_0x0067452c();
      FUN_0066ebe0();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00674120(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *unaff_x22;
      FUN_006667d0(uVar1);
      func_0x0067444c();
      func_0x00673efc((uint)uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 0066ebe0; end: 0066ec47;  */

void FUN_0066ebe0(void)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *unaff_x22;
      FUN_006667d0(uVar1);
      func_0x0067444c();
      func_0x00673efc((uint)uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 0066ec48; end: 0066ed13;  */

void FUN_0066ec48(void)

{
  func_0x00676568(&PTR_LOOP_00a01490);
  return;
}



/* Entry: 0066ed14; end: 0066ed97;  */

long * FUN_0066ed14(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined1 **ppuVar10;
  long **pplVar11;
  undefined4 *in_x5;
  long in_x6;
  long in_x7;
  ulong extraout_x8;
  ulong extraout_x9;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  undefined1 *extraout_x10_02;
  ulong extraout_x10_03;
  undefined8 *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 **ppuStack_740;
  long **pplStack_738;
  long lStack_730;
  code *pcStack_728;
  long *plStack_720;
  undefined1 uStack_718;
  long lStack_710;
  undefined1 *puStack_708;
  ulong uStack_700;
  long *plStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  long lStack_6e0;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined1 *puStack_640;
  long *plStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  long alStack_620 [3];
  long *plStack_608;
  long lStack_600;
  undefined1 *apuStack_5d8 [6];
  long *plStack_5a8;
  long lStack_5a0;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined1 *puStack_440;
  long *plStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  long alStack_420 [3];
  long *plStack_408;
  long lStack_400;
  undefined1 *puStack_3d8;
  long *plStack_3a8;
  long lStack_3a0;
  undefined1 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined1 auStack_2d8 [8];
  long *plStack_2d0;
  undefined1 auStack_2c0 [24];
  long *plStack_2a8;
  long lStack_2a0;
  undefined1 *puStack_278;
  undefined *puStack_248;
  long lStack_240;
  undefined1 *puStack_218;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  
  func_0x00673f20();
  func_0x00674d74();
  func_0x00673fe0();
  func_0x0067505c();
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_c8 = 0x66ed50;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00673f20();
    func_0x00674d74();
    func_0x00673fe0();
    param_1 = (long *)&UNK_00911f06;
    FUN_00532c74();
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcStack_188 = FUN_0066ed98;
      ppuStack_190 = &puStack_d0;
      func_0x00674188();
      func_0x006744f4();
      lVar8 = *(long *)unaff_x20[1] + 1;
      plStack_1e8 = param_1;
      uStack_1e0 = param_2;
      FUN_00479db4(auStack_2c0,*unaff_x20,lVar8,0xffffffffffffffff);
      func_0x00674e80();
      puStack_218 = extraout_x10;
      if (in_NG == in_OV) {
        puStack_218 = auStack_2c0;
      }
      puVar5 = &UNK_00911f1c;
      FUN_00532c74();
      plVar6 = (long *)*unaff_x20;
      puStack_248 = puVar5;
      lStack_240 = lVar8;
      func_0x0067657c(auStack_2d8);
      func_0x00674ed8();
      puStack_278 = extraout_x10_00;
      if (in_NG == in_OV) {
        puStack_278 = auStack_2d8;
      }
      func_0x00674674();
      plStack_2a8 = plVar6;
      lStack_2a0 = lVar8;
      func_0x00675664();
      func_0x006754b4();
      func_0x00674d6c();
      func_0x00674d88();
      func_0x0067406c();
      if ((bool)in_ZR) {
        return plVar6;
      }
      ___stack_chk_fail();
      func_0x00674d88();
      func_0x00674bc8();
      plVar7 = alStack_420;
      pcStack_2e8 = FUN_0066ee7c;
      pppuStack_2f0 = &ppuStack_190;
      func_0x00674188();
      func_0x006744f4();
      func_0x00675934();
      func_0x00673fe0();
      plVar6 = (long *)&UNK_00911f36;
      FUN_00532c74();
      plStack_3a8 = plVar6;
      lStack_3a0 = lVar8;
      if (*plStack_2d0 == 0) {
        func_0x00676014();
      }
      else {
        lVar8 = *(long *)(*plStack_2d0 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
        plVar6 = plVar7;
      }
      func_0x006746b0();
      puStack_3d8 = extraout_x10_01;
      if (in_NG == in_OV) {
        puStack_3d8 = (undefined1 *)alStack_420;
      }
      func_0x00674674();
      plStack_408 = plVar6;
      lStack_400 = lVar8;
      func_0x00675664();
      func_0x006754b4();
      func_0x00674d64();
      func_0x0067406c();
      if ((bool)in_ZR) {
        return plVar6;
      }
      ___stack_chk_fail();
      param_1 = plVar6;
      func_0x00674bc8();
      pcStack_428 = FUN_0066ef30;
      puStack_440 = auStack_2d8;
      plStack_438 = plVar6;
      pppuStack_430 = &pppuStack_2f0;
      func_0x00673f20();
      func_0x00674d74();
      func_0x00673fe0();
      func_0x0067505c();
      func_0x00673f60();
      func_0x00673f78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        plVar7 = alStack_620;
        pcStack_4e8 = FUN_0066ef6c;
        pppuStack_4f0 = &pppuStack_430;
        func_0x00674188();
        func_0x006744f4();
        func_0x00675934();
        func_0x00673fe0();
        plVar6 = (long *)&UNK_00911f5a;
        FUN_00532c74();
        plStack_5a8 = plVar6;
        lStack_5a0 = lVar8;
        if (*plStack_2d0 == 0) {
          func_0x00676014();
        }
        else {
          lVar8 = *(long *)(*plStack_2d0 + 8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          plVar6 = plVar7;
        }
        func_0x006746b0();
        apuStack_5d8[0] = extraout_x10_02;
        if (in_NG == in_OV) {
          apuStack_5d8[0] = (undefined1 *)alStack_620;
        }
        func_0x00674674();
        plStack_608 = plVar6;
        lStack_600 = lVar8;
        func_0x00675664();
        ppuVar10 = apuStack_5d8;
        pplVar11 = &plStack_608;
        func_0x006754b4();
        func_0x00674d64();
        func_0x0067406c();
        if ((bool)in_ZR) {
          return plVar6;
        }
        ___stack_chk_fail();
        func_0x00674bc8();
        pcStack_628 = FUN_0066f020;
        puStack_640 = auStack_2d8;
        plStack_638 = plVar6;
        pppuStack_630 = &pppuStack_4f0;
        func_0x00673f20();
        func_0x00674d74();
        func_0x00673fe0();
        param_1 = (long *)&UNK_00911f9d;
        FUN_00532c74();
        func_0x00673f60();
        func_0x00673f78();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          pcVar9 = FUN_0066f068;
          func_0x00675c80();
          pppuStack_690 = &pppuStack_630;
          pcStack_688 = pcVar9;
          func_0x006751dc();
          uVar2 = param_1[1];
          if (uVar2 < (ulong)param_1[2]) {
            func_0x00675e8c();
            FUN_0066f278();
            lVar13 = uVar2 + 0x58;
          }
          else {
            lVar13 = uVar2 - *plVar6;
            if (0x2e8ba2e8ba2e8ba < lVar13 / 0x58 + 1U) {
              FUN_0066f2c8();
LAB_0066f1a0:
              FUN_0040cee8();
              pcStack_6e8 = FUN_0066f1a4;
              plVar7 = param_1;
              ppuStack_740 = ppuVar10;
              pplStack_738 = pplVar11;
              lStack_730 = lVar8;
              pcStack_728 = pcVar9;
              lStack_710 = lVar13;
              puStack_708 = auStack_2c0;
              uStack_700 = uVar2;
              plStack_6f8 = plVar6;
              pppuStack_6f0 = &pppuStack_690;
              FUN_00456d78();
              FUN_00456d78(plVar7 + 3,&ppuStack_740);
              plStack_720 = param_1 + 6;
              *plStack_720 = 0;
              param_1[7] = 0;
              param_1[8] = 0;
              uStack_718 = 0;
              if (in_x6 != 0) {
                FUN_0066bc48(plStack_720,in_x6 * 4 >> 2);
                puVar4 = (undefined4 *)param_1[7];
                for (in_x6 = in_x6 << 2; in_x6 != 0; in_x6 = in_x6 + -4) {
                  *puVar4 = *in_x5;
                  puVar4 = puVar4 + 1;
                  in_x5 = in_x5 + 1;
                }
                param_1[7] = (long)puVar4;
              }
              uStack_718 = 1;
              func_0x0066bc80(&plStack_720);
              param_1[9] = in_x7;
              param_1[10] = lStack_6e0;
              return param_1;
            }
            func_0x00676ca8();
            uVar1 = extraout_x10_03;
            if (0x1745d1745d1745c < extraout_x9) {
              uVar1 = extraout_x8;
            }
            if (uVar1 == 0) {
              lVar8 = 0;
            }
            else {
              if (extraout_x8 < uVar1) goto LAB_0066f1a0;
              lVar8 = uVar1 * 0x58;
              __Znwm();
            }
            func_0x00675f74();
            FUN_0066f278();
            lVar12 = *plVar6;
            lVar3 = plVar6[1];
            lVar16 = lVar8 + lVar13 + ((lVar3 - lVar12) / -0x58) * 0x58;
            lVar14 = lVar16;
            for (lVar15 = lVar12; lVar15 != lVar3; lVar15 = lVar15 + 0x58) {
              FUN_0066f278(lVar14,lVar15);
              lVar14 = lVar14 + 0x58;
            }
            for (; lVar12 != lVar3; lVar12 = lVar12 + 0x58) {
              FUN_0066975c(lVar12);
            }
            lVar13 = lVar8 + lVar13 + 0x58;
            param_1 = (long *)*plVar6;
            *plVar6 = lVar16;
            plVar6[1] = lVar13;
            plVar6[2] = lVar8 + uVar1 * 0x58;
            if (param_1 != (long *)0x0) {
              __ZdlPv();
            }
          }
          plVar6[1] = lVar13;
          return param_1;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 0066ed98; end: 0066ee7b;  */

long * FUN_0066ed98(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  undefined1 **ppuVar11;
  long **pplVar12;
  undefined4 *in_x5;
  long in_x6;
  long in_x7;
  ulong extraout_x8;
  ulong extraout_x9;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  undefined1 *extraout_x10_02;
  ulong extraout_x10_03;
  undefined8 *unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 **ppuStack_5c0;
  long **pplStack_5b8;
  long lStack_5b0;
  code *pcStack_5a8;
  long *plStack_5a0;
  undefined1 uStack_598;
  long lStack_590;
  undefined1 *puStack_588;
  ulong uStack_580;
  long *plStack_578;
  undefined8 ****ppppuStack_570;
  code *pcStack_568;
  long lStack_560;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  undefined1 *puStack_4c0;
  long *plStack_4b8;
  undefined1 ****ppppuStack_4b0;
  code *pcStack_4a8;
  long alStack_4a0 [3];
  long *plStack_488;
  long lStack_480;
  undefined1 *apuStack_458 [6];
  long *plStack_428;
  long lStack_420;
  undefined1 ***pppuStack_370;
  code *pcStack_368;
  undefined1 *puStack_2c0;
  long *plStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  long alStack_2a0 [3];
  long *plStack_288;
  long lStack_280;
  undefined1 *puStack_258;
  long *plStack_228;
  long lStack_220;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [8];
  long *plStack_150;
  undefined1 auStack_140 [24];
  long *plStack_128;
  long lStack_120;
  undefined1 *puStack_f8;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 *puStack_98;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x00674188();
  func_0x006744f4();
  lVar9 = *(long *)unaff_x20[1] + 1;
  uStack_68 = param_1;
  uStack_60 = param_2;
  FUN_00479db4(auStack_140,*unaff_x20,lVar9,0xffffffffffffffff);
  func_0x00674e80();
  puStack_98 = extraout_x10;
  if (in_NG == in_OV) {
    puStack_98 = auStack_140;
  }
  puVar5 = &UNK_00911f1c;
  FUN_00532c74();
  plVar6 = (long *)*unaff_x20;
  puStack_c8 = puVar5;
  lStack_c0 = lVar9;
  func_0x0067657c(auStack_158);
  func_0x00674ed8();
  puStack_f8 = extraout_x10_00;
  if (in_NG == in_OV) {
    puStack_f8 = auStack_158;
  }
  func_0x00674674();
  plStack_128 = plVar6;
  lStack_120 = lVar9;
  func_0x00675664();
  func_0x006754b4();
  func_0x00674d6c();
  func_0x00674d88();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00674d88();
  func_0x00674bc8();
  plVar7 = alStack_2a0;
  pcStack_168 = FUN_0066ee7c;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00674188();
  func_0x006744f4();
  func_0x00675934();
  func_0x00673fe0();
  plVar6 = (long *)&UNK_00911f36;
  FUN_00532c74();
  plStack_228 = plVar6;
  lStack_220 = lVar9;
  if (*plStack_150 == 0) {
    func_0x00676014();
  }
  else {
    lVar9 = *(long *)(*plStack_150 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    plVar6 = plVar7;
  }
  func_0x006746b0();
  puStack_258 = extraout_x10_01;
  if (in_NG == in_OV) {
    puStack_258 = (undefined1 *)alStack_2a0;
  }
  func_0x00674674();
  plStack_288 = plVar6;
  lStack_280 = lVar9;
  func_0x00675664();
  func_0x006754b4();
  func_0x00674d64();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  plVar7 = plVar6;
  func_0x00674bc8();
  pcStack_2a8 = FUN_0066ef30;
  puStack_2c0 = auStack_158;
  plStack_2b8 = plVar6;
  ppuStack_2b0 = &puStack_170;
  func_0x00673f20();
  func_0x00674d74();
  func_0x00673fe0();
  func_0x0067505c();
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar7 = alStack_4a0;
    pcStack_368 = FUN_0066ef6c;
    pppuStack_370 = &ppuStack_2b0;
    func_0x00674188();
    func_0x006744f4();
    func_0x00675934();
    func_0x00673fe0();
    plVar6 = (long *)&UNK_00911f5a;
    FUN_00532c74();
    plStack_428 = plVar6;
    lStack_420 = lVar9;
    if (*plStack_150 == 0) {
      func_0x00676014();
    }
    else {
      lVar9 = *(long *)(*plStack_150 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      plVar6 = plVar7;
    }
    func_0x006746b0();
    apuStack_458[0] = extraout_x10_02;
    if (in_NG == in_OV) {
      apuStack_458[0] = (undefined1 *)alStack_4a0;
    }
    func_0x00674674();
    plStack_488 = plVar6;
    lStack_480 = lVar9;
    func_0x00675664();
    ppuVar11 = apuStack_458;
    pplVar12 = &plStack_488;
    func_0x006754b4();
    func_0x00674d64();
    func_0x0067406c();
    if ((bool)in_ZR) {
      return plVar6;
    }
    ___stack_chk_fail();
    func_0x00674bc8();
    pcStack_4a8 = FUN_0066f020;
    puStack_4c0 = auStack_158;
    plStack_4b8 = plVar6;
    ppppuStack_4b0 = &pppuStack_370;
    func_0x00673f20();
    func_0x00674d74();
    func_0x00673fe0();
    plVar7 = (long *)&UNK_00911f9d;
    FUN_00532c74();
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar10 = FUN_0066f068;
      func_0x00675c80();
      ppppuStack_510 = &ppppuStack_4b0;
      pcStack_508 = pcVar10;
      func_0x006751dc();
      uVar2 = plVar7[1];
      if (uVar2 < (ulong)plVar7[2]) {
        func_0x00675e8c();
        FUN_0066f278();
        lVar14 = uVar2 + 0x58;
      }
      else {
        lVar14 = uVar2 - *plVar6;
        if (0x2e8ba2e8ba2e8ba < lVar14 / 0x58 + 1U) {
          FUN_0066f2c8();
LAB_0066f1a0:
          FUN_0040cee8();
          pcStack_568 = FUN_0066f1a4;
          plVar8 = plVar7;
          ppuStack_5c0 = ppuVar11;
          pplStack_5b8 = pplVar12;
          lStack_5b0 = lVar9;
          pcStack_5a8 = pcVar10;
          lStack_590 = lVar14;
          puStack_588 = auStack_140;
          uStack_580 = uVar2;
          plStack_578 = plVar6;
          ppppuStack_570 = &ppppuStack_510;
          FUN_00456d78();
          FUN_00456d78(plVar8 + 3,&ppuStack_5c0);
          plStack_5a0 = plVar7 + 6;
          *plStack_5a0 = 0;
          plVar7[7] = 0;
          plVar7[8] = 0;
          uStack_598 = 0;
          if (in_x6 != 0) {
            FUN_0066bc48(plStack_5a0,in_x6 * 4 >> 2);
            puVar4 = (undefined4 *)plVar7[7];
            for (in_x6 = in_x6 << 2; in_x6 != 0; in_x6 = in_x6 + -4) {
              *puVar4 = *in_x5;
              puVar4 = puVar4 + 1;
              in_x5 = in_x5 + 1;
            }
            plVar7[7] = (long)puVar4;
          }
          uStack_598 = 1;
          func_0x0066bc80(&plStack_5a0);
          plVar7[9] = in_x7;
          plVar7[10] = lStack_560;
          return plVar7;
        }
        func_0x00676ca8();
        uVar1 = extraout_x10_03;
        if (0x1745d1745d1745c < extraout_x9) {
          uVar1 = extraout_x8;
        }
        if (uVar1 == 0) {
          lVar9 = 0;
        }
        else {
          if (extraout_x8 < uVar1) goto LAB_0066f1a0;
          lVar9 = uVar1 * 0x58;
          __Znwm();
        }
        func_0x00675f74();
        FUN_0066f278();
        lVar13 = *plVar6;
        lVar3 = plVar6[1];
        lVar17 = lVar9 + lVar14 + ((lVar3 - lVar13) / -0x58) * 0x58;
        lVar15 = lVar17;
        for (lVar16 = lVar13; lVar16 != lVar3; lVar16 = lVar16 + 0x58) {
          FUN_0066f278(lVar15,lVar16);
          lVar15 = lVar15 + 0x58;
        }
        for (; lVar13 != lVar3; lVar13 = lVar13 + 0x58) {
          FUN_0066975c(lVar13);
        }
        lVar14 = lVar9 + lVar14 + 0x58;
        plVar7 = (long *)*plVar6;
        *plVar6 = lVar17;
        plVar6[1] = lVar14;
        plVar6[2] = lVar9 + uVar1 * 0x58;
        if (plVar7 != (long *)0x0) {
          __ZdlPv();
        }
      }
      plVar6[1] = lVar14;
      return plVar7;
    }
  }
  return plVar7;
}



/* Entry: 0066ee7c; end: 0066ef2f;  */

long * FUN_0066ee7c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 **ppuVar8;
  long **pplVar9;
  undefined4 *in_x5;
  long in_x6;
  long in_x7;
  ulong extraout_x8;
  ulong extraout_x9;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  ulong extraout_x10_01;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 **ppuStack_460;
  long **pplStack_458;
  undefined8 uStack_450;
  code *pcStack_448;
  long *plStack_440;
  undefined1 uStack_438;
  long lStack_430;
  long lStack_400;
  long alStack_340 [3];
  long *plStack_328;
  undefined8 uStack_320;
  undefined1 *apuStack_2f8 [6];
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long alStack_140 [3];
  long *plStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_f8;
  long *plStack_c8;
  undefined8 uStack_c0;
  
  plVar4 = alStack_140;
  func_0x00674188();
  func_0x006744f4();
  func_0x00675934();
  func_0x00673fe0();
  plVar6 = (long *)&UNK_00911f36;
  FUN_00532c74();
  plStack_c8 = plVar6;
  uStack_c0 = param_2;
  if (**(long **)(unaff_x20 + 8) == 0) {
    func_0x00676014();
  }
  else {
    param_2 = *(undefined8 *)(**(long **)(unaff_x20 + 8) + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    plVar6 = plVar4;
  }
  func_0x006746b0();
  puStack_f8 = extraout_x10;
  if (in_NG == in_OV) {
    puStack_f8 = (undefined1 *)alStack_140;
  }
  func_0x00674674();
  plStack_128 = plVar6;
  uStack_120 = param_2;
  func_0x00675664();
  func_0x006754b4();
  func_0x00674d64();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00674bc8();
  func_0x00673f20();
  func_0x00674d74();
  func_0x00673fe0();
  func_0x0067505c();
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar6 = alStack_340;
    func_0x00674188();
    func_0x006744f4();
    func_0x00675934();
    func_0x00673fe0();
    plVar4 = (long *)&UNK_00911f5a;
    FUN_00532c74();
    plStack_2c8 = plVar4;
    uStack_2c0 = param_2;
    if (**(long **)(unaff_x20 + 8) == 0) {
      func_0x00676014();
    }
    else {
      param_2 = *(undefined8 *)(**(long **)(unaff_x20 + 8) + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      plVar4 = plVar6;
    }
    func_0x006746b0();
    apuStack_2f8[0] = extraout_x10_00;
    if (in_NG == in_OV) {
      apuStack_2f8[0] = (undefined1 *)alStack_340;
    }
    func_0x00674674();
    plStack_328 = plVar4;
    uStack_320 = param_2;
    func_0x00675664();
    ppuVar8 = apuStack_2f8;
    pplVar9 = &plStack_328;
    func_0x006754b4();
    func_0x00674d64();
    func_0x0067406c();
    if ((bool)in_ZR) {
      return plVar4;
    }
    ___stack_chk_fail();
    func_0x00674bc8();
    func_0x00673f20();
    func_0x00674d74();
    func_0x00673fe0();
    plVar6 = (long *)&UNK_00911f9d;
    FUN_00532c74();
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar7 = FUN_0066f068;
      func_0x00675c80();
      func_0x006751dc();
      uVar1 = plVar6[1];
      if (uVar1 < (ulong)plVar6[2]) {
        func_0x00675e8c();
        FUN_0066f278();
        lVar11 = uVar1 + 0x58;
      }
      else {
        lVar11 = uVar1 - *plVar4;
        if (0x2e8ba2e8ba2e8ba < lVar11 / 0x58 + 1U) {
          FUN_0066f2c8();
LAB_0066f1a0:
          FUN_0040cee8();
          plVar4 = plVar6;
          ppuStack_460 = ppuVar8;
          pplStack_458 = pplVar9;
          uStack_450 = param_2;
          pcStack_448 = pcVar7;
          lStack_430 = lVar11;
          FUN_00456d78();
          FUN_00456d78(plVar4 + 3,&ppuStack_460);
          plStack_440 = plVar6 + 6;
          *plStack_440 = 0;
          plVar6[7] = 0;
          plVar6[8] = 0;
          uStack_438 = 0;
          if (in_x6 != 0) {
            FUN_0066bc48(plStack_440,in_x6 * 4 >> 2);
            puVar3 = (undefined4 *)plVar6[7];
            for (in_x6 = in_x6 << 2; in_x6 != 0; in_x6 = in_x6 + -4) {
              *puVar3 = *in_x5;
              puVar3 = puVar3 + 1;
              in_x5 = in_x5 + 1;
            }
            plVar6[7] = (long)puVar3;
          }
          uStack_438 = 1;
          func_0x0066bc80(&plStack_440);
          plVar6[9] = in_x7;
          plVar6[10] = lStack_400;
          return plVar6;
        }
        func_0x00676ca8();
        uVar1 = extraout_x10_01;
        if (0x1745d1745d1745c < extraout_x9) {
          uVar1 = extraout_x8;
        }
        if (uVar1 == 0) {
          lVar5 = 0;
        }
        else {
          if (extraout_x8 < uVar1) goto LAB_0066f1a0;
          lVar5 = uVar1 * 0x58;
          __Znwm();
        }
        func_0x00675f74();
        FUN_0066f278();
        lVar10 = *plVar4;
        lVar2 = plVar4[1];
        lVar14 = lVar5 + lVar11 + ((lVar2 - lVar10) / -0x58) * 0x58;
        lVar12 = lVar14;
        for (lVar13 = lVar10; lVar13 != lVar2; lVar13 = lVar13 + 0x58) {
          FUN_0066f278(lVar12,lVar13);
          lVar12 = lVar12 + 0x58;
        }
        for (; lVar10 != lVar2; lVar10 = lVar10 + 0x58) {
          FUN_0066975c(lVar10);
        }
        lVar11 = lVar5 + lVar11 + 0x58;
        plVar6 = (long *)*plVar4;
        *plVar4 = lVar14;
        plVar4[1] = lVar11;
        plVar4[2] = lVar5 + uVar1 * 0x58;
        if (plVar6 != (long *)0x0) {
          __ZdlPv();
        }
      }
      plVar4[1] = lVar11;
      return plVar6;
    }
  }
  return plVar6;
}



/* Entry: 0066ef30; end: 0066ef6b;  */

long * FUN_0066ef30(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined1 **ppuVar8;
  long **pplVar9;
  undefined4 *in_x5;
  long in_x6;
  long in_x7;
  ulong extraout_x8;
  ulong extraout_x9;
  undefined1 *extraout_x10;
  ulong extraout_x10_00;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 **ppuStack_320;
  long **pplStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  long *plStack_300;
  undefined1 uStack_2f8;
  long lStack_2f0;
  long lStack_2c0;
  long alStack_200 [3];
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *apuStack_1b8 [6];
  long *plStack_188;
  undefined8 uStack_180;
  
  func_0x00673f20();
  func_0x00674d74();
  func_0x00673fe0();
  func_0x0067505c();
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar5 = alStack_200;
    func_0x00674188();
    func_0x006744f4();
    func_0x00675934();
    func_0x00673fe0();
    plVar4 = (long *)&UNK_00911f5a;
    FUN_00532c74();
    plStack_188 = plVar4;
    uStack_180 = param_2;
    if (**(long **)(unaff_x20 + 8) == 0) {
      func_0x00676014();
    }
    else {
      param_2 = *(undefined8 *)(**(long **)(unaff_x20 + 8) + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      plVar4 = plVar5;
    }
    func_0x006746b0();
    apuStack_1b8[0] = extraout_x10;
    if (in_NG == in_OV) {
      apuStack_1b8[0] = (undefined1 *)alStack_200;
    }
    func_0x00674674();
    plStack_1e8 = plVar4;
    uStack_1e0 = param_2;
    func_0x00675664();
    ppuVar8 = apuStack_1b8;
    pplVar9 = &plStack_1e8;
    func_0x006754b4();
    func_0x00674d64();
    func_0x0067406c();
    if ((bool)in_ZR) {
      return plVar4;
    }
    ___stack_chk_fail();
    func_0x00674bc8();
    func_0x00673f20();
    func_0x00674d74();
    func_0x00673fe0();
    param_1 = (long *)&UNK_00911f9d;
    FUN_00532c74();
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar7 = FUN_0066f068;
      func_0x00675c80();
      func_0x006751dc();
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        func_0x00675e8c();
        FUN_0066f278();
        lVar11 = uVar1 + 0x58;
      }
      else {
        lVar11 = uVar1 - *plVar4;
        if (0x2e8ba2e8ba2e8ba < lVar11 / 0x58 + 1U) {
          FUN_0066f2c8();
LAB_0066f1a0:
          FUN_0040cee8();
          plVar4 = param_1;
          ppuStack_320 = ppuVar8;
          pplStack_318 = pplVar9;
          uStack_310 = param_2;
          pcStack_308 = pcVar7;
          lStack_2f0 = lVar11;
          FUN_00456d78();
          FUN_00456d78(plVar4 + 3,&ppuStack_320);
          plStack_300 = param_1 + 6;
          *plStack_300 = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          uStack_2f8 = 0;
          if (in_x6 != 0) {
            FUN_0066bc48(plStack_300,in_x6 * 4 >> 2);
            puVar3 = (undefined4 *)param_1[7];
            for (in_x6 = in_x6 << 2; in_x6 != 0; in_x6 = in_x6 + -4) {
              *puVar3 = *in_x5;
              puVar3 = puVar3 + 1;
              in_x5 = in_x5 + 1;
            }
            param_1[7] = (long)puVar3;
          }
          uStack_2f8 = 1;
          func_0x0066bc80(&plStack_300);
          param_1[9] = in_x7;
          param_1[10] = lStack_2c0;
          return param_1;
        }
        func_0x00676ca8();
        uVar1 = extraout_x10_00;
        if (0x1745d1745d1745c < extraout_x9) {
          uVar1 = extraout_x8;
        }
        if (uVar1 == 0) {
          lVar6 = 0;
        }
        else {
          if (extraout_x8 < uVar1) goto LAB_0066f1a0;
          lVar6 = uVar1 * 0x58;
          __Znwm();
        }
        func_0x00675f74();
        FUN_0066f278();
        lVar10 = *plVar4;
        lVar2 = plVar4[1];
        lVar14 = lVar6 + lVar11 + ((lVar2 - lVar10) / -0x58) * 0x58;
        lVar12 = lVar14;
        for (lVar13 = lVar10; lVar13 != lVar2; lVar13 = lVar13 + 0x58) {
          FUN_0066f278(lVar12,lVar13);
          lVar12 = lVar12 + 0x58;
        }
        for (; lVar10 != lVar2; lVar10 = lVar10 + 0x58) {
          FUN_0066975c(lVar10);
        }
        lVar11 = lVar6 + lVar11 + 0x58;
        param_1 = (long *)*plVar4;
        *plVar4 = lVar14;
        plVar4[1] = lVar11;
        plVar4[2] = lVar6 + uVar1 * 0x58;
        if (param_1 != (long *)0x0) {
          __ZdlPv();
        }
      }
      plVar4[1] = lVar11;
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 0066ef6c; end: 0066f01f;  */

long * FUN_0066ef6c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 **ppuVar8;
  long **pplVar9;
  undefined4 *in_x5;
  long in_x6;
  long in_x7;
  ulong extraout_x8;
  ulong extraout_x9;
  undefined1 *extraout_x10;
  ulong extraout_x10_00;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 **ppuStack_260;
  long **pplStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  long *plStack_240;
  undefined1 uStack_238;
  long lStack_230;
  long lStack_200;
  long alStack_140 [3];
  long *plStack_128;
  undefined8 uStack_120;
  undefined1 *apuStack_f8 [6];
  long *plStack_c8;
  undefined8 uStack_c0;
  
  plVar6 = alStack_140;
  func_0x00674188();
  func_0x006744f4();
  func_0x00675934();
  func_0x00673fe0();
  plVar4 = (long *)&UNK_00911f5a;
  FUN_00532c74();
  plStack_c8 = plVar4;
  uStack_c0 = param_2;
  if (**(long **)(unaff_x20 + 8) == 0) {
    func_0x00676014();
  }
  else {
    param_2 = *(undefined8 *)(**(long **)(unaff_x20 + 8) + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    plVar4 = plVar6;
  }
  func_0x006746b0();
  apuStack_f8[0] = extraout_x10;
  if (in_NG == in_OV) {
    apuStack_f8[0] = (undefined1 *)alStack_140;
  }
  func_0x00674674();
  plStack_128 = plVar4;
  uStack_120 = param_2;
  func_0x00675664();
  ppuVar8 = apuStack_f8;
  pplVar9 = &plStack_128;
  func_0x006754b4();
  func_0x00674d64();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00674bc8();
  func_0x00673f20();
  func_0x00674d74();
  func_0x00673fe0();
  plVar6 = (long *)&UNK_00911f9d;
  FUN_00532c74();
  func_0x00673f60();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  pcVar7 = FUN_0066f068;
  func_0x00675c80();
  func_0x006751dc();
  uVar1 = plVar6[1];
  if (uVar1 < (ulong)plVar6[2]) {
    func_0x00675e8c();
    FUN_0066f278();
    lVar11 = uVar1 + 0x58;
  }
  else {
    lVar11 = uVar1 - *plVar4;
    if (0x2e8ba2e8ba2e8ba < lVar11 / 0x58 + 1U) {
      FUN_0066f2c8();
LAB_0066f1a0:
      FUN_0040cee8();
      plVar4 = plVar6;
      ppuStack_260 = ppuVar8;
      pplStack_258 = pplVar9;
      uStack_250 = param_2;
      pcStack_248 = pcVar7;
      lStack_230 = lVar11;
      FUN_00456d78();
      FUN_00456d78(plVar4 + 3,&ppuStack_260);
      plStack_240 = plVar6 + 6;
      *plStack_240 = 0;
      plVar6[7] = 0;
      plVar6[8] = 0;
      uStack_238 = 0;
      if (in_x6 != 0) {
        FUN_0066bc48(plStack_240,in_x6 * 4 >> 2);
        puVar3 = (undefined4 *)plVar6[7];
        for (in_x6 = in_x6 << 2; in_x6 != 0; in_x6 = in_x6 + -4) {
          *puVar3 = *in_x5;
          puVar3 = puVar3 + 1;
          in_x5 = in_x5 + 1;
        }
        plVar6[7] = (long)puVar3;
      }
      uStack_238 = 1;
      func_0x0066bc80(&plStack_240);
      plVar6[9] = in_x7;
      plVar6[10] = lStack_200;
      return plVar6;
    }
    func_0x00676ca8();
    uVar1 = extraout_x10_00;
    if (0x1745d1745d1745c < extraout_x9) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      if (extraout_x8 < uVar1) goto LAB_0066f1a0;
      lVar5 = uVar1 * 0x58;
      __Znwm();
    }
    func_0x00675f74();
    FUN_0066f278();
    lVar10 = *plVar4;
    lVar2 = plVar4[1];
    lVar14 = lVar5 + lVar11 + ((lVar2 - lVar10) / -0x58) * 0x58;
    lVar12 = lVar14;
    for (lVar13 = lVar10; lVar13 != lVar2; lVar13 = lVar13 + 0x58) {
      FUN_0066f278(lVar12,lVar13);
      lVar12 = lVar12 + 0x58;
    }
    for (; lVar10 != lVar2; lVar10 = lVar10 + 0x58) {
      FUN_0066975c(lVar10);
    }
    lVar11 = lVar5 + lVar11 + 0x58;
    plVar6 = (long *)*plVar4;
    *plVar4 = lVar14;
    plVar4[1] = lVar11;
    plVar4[2] = lVar5 + uVar1 * 0x58;
    if (plVar6 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar4[1] = lVar11;
  return plVar6;
}



/* Entry: 0066f020; end: 0066f067;  */

undefined *
FUN_0066f020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 *param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 in_ZR;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long *unaff_x19;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 *puStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined8 uStack_c0;
  
  func_0x00673f20();
  func_0x00674d74();
  func_0x00673fe0();
  puVar5 = &UNK_00911f9d;
  FUN_00532c74();
  func_0x00673f60();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  pcVar7 = FUN_0066f068;
  func_0x00675c80();
  func_0x006751dc();
  uVar1 = *(ulong *)(puVar5 + 8);
  if (uVar1 < *(ulong *)(puVar5 + 0x10)) {
    func_0x00675e8c();
    FUN_0066f278();
    lVar9 = uVar1 + 0x58;
  }
  else {
    lVar9 = uVar1 - *unaff_x19;
    if (0x2e8ba2e8ba2e8ba < lVar9 / 0x58 + 1U) {
      FUN_0066f2c8();
LAB_0066f1a0:
      FUN_0040cee8();
      puVar6 = puVar5;
      uStack_120 = param_4;
      uStack_118 = param_5;
      uStack_110 = param_2;
      pcStack_108 = pcVar7;
      lStack_f0 = lVar9;
      FUN_00456d78();
      FUN_00456d78(puVar6 + 0x18,&uStack_120);
      puStack_100 = (undefined8 *)(puVar5 + 0x30);
      *puStack_100 = 0;
      *(undefined8 *)(puVar5 + 0x38) = 0;
      *(undefined8 *)(puVar5 + 0x40) = 0;
      uStack_f8 = 0;
      if (param_7 != 0) {
        FUN_0066bc48(puStack_100,param_7 * 4 >> 2);
        puVar3 = *(undefined4 **)(puVar5 + 0x38);
        for (param_7 = param_7 << 2; param_7 != 0; param_7 = param_7 + -4) {
          *puVar3 = *param_6;
          puVar3 = puVar3 + 1;
          param_6 = param_6 + 1;
        }
        *(undefined4 **)(puVar5 + 0x38) = puVar3;
      }
      uStack_f8 = 1;
      func_0x0066bc80(&puStack_100);
      *(undefined8 *)(puVar5 + 0x48) = param_8;
      *(undefined8 *)(puVar5 + 0x50) = uStack_c0;
      return puVar5;
    }
    func_0x00676ca8();
    uVar1 = extraout_x10;
    if (0x1745d1745d1745c < extraout_x9) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      if (extraout_x8 < uVar1) goto LAB_0066f1a0;
      lVar4 = uVar1 * 0x58;
      __Znwm();
    }
    func_0x00675f74();
    FUN_0066f278();
    lVar8 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar12 = lVar4 + lVar9 + ((lVar2 - lVar8) / -0x58) * 0x58;
    lVar10 = lVar12;
    for (lVar11 = lVar8; lVar11 != lVar2; lVar11 = lVar11 + 0x58) {
      FUN_0066f278(lVar10,lVar11);
      lVar10 = lVar10 + 0x58;
    }
    for (; lVar8 != lVar2; lVar8 = lVar8 + 0x58) {
      FUN_0066975c(lVar8);
    }
    lVar9 = lVar4 + lVar9 + 0x58;
    puVar5 = (undefined *)*unaff_x19;
    *unaff_x19 = lVar12;
    unaff_x19[1] = lVar9;
    unaff_x19[2] = lVar4 + uVar1 * 0x58;
    if (puVar5 != (undefined *)0x0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = lVar9;
  return puVar5;
}



/* Entry: 0066f068; end: 0066f1a3;  */

long FUN_0066f068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 *param_6,long param_7,undefined8 param_8,
                 undefined8 param_9)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long *unaff_x19;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  long lStack_30;
  
  func_0x00675c80();
  func_0x006751dc();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00675e8c();
    FUN_0066f278();
    lVar6 = uVar1 + 0x58;
  }
  else {
    lVar6 = uVar1 - *unaff_x19;
    if (0x2e8ba2e8ba2e8ba < lVar6 / 0x58 + 1U) {
      FUN_0066f2c8();
LAB_0066f1a0:
      FUN_0040cee8();
      lVar4 = param_1;
      uStack_60 = param_4;
      uStack_58 = param_5;
      uStack_50 = param_2;
      lStack_30 = lVar6;
      FUN_00456d78();
      FUN_00456d78(lVar4 + 0x18,&uStack_60);
      puStack_40 = (undefined8 *)(param_1 + 0x30);
      *puStack_40 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      uStack_38 = 0;
      if (param_7 != 0) {
        FUN_0066bc48(puStack_40,param_7 * 4 >> 2);
        puVar3 = *(undefined4 **)(param_1 + 0x38);
        for (param_7 = param_7 << 2; param_7 != 0; param_7 = param_7 + -4) {
          *puVar3 = *param_6;
          puVar3 = puVar3 + 1;
          param_6 = param_6 + 1;
        }
        *(undefined4 **)(param_1 + 0x38) = puVar3;
      }
      uStack_38 = 1;
      func_0x0066bc80(&puStack_40);
      *(undefined8 *)(param_1 + 0x48) = param_8;
      *(undefined8 *)(param_1 + 0x50) = param_9;
      return param_1;
    }
    func_0x00676ca8();
    uVar1 = extraout_x10;
    if (0x1745d1745d1745c < extraout_x9) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      if (extraout_x8 < uVar1) goto LAB_0066f1a0;
      lVar4 = uVar1 * 0x58;
      __Znwm();
    }
    func_0x00675f74();
    FUN_0066f278();
    lVar5 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar9 = lVar4 + lVar6 + ((lVar2 - lVar5) / -0x58) * 0x58;
    lVar7 = lVar9;
    for (lVar8 = lVar5; lVar8 != lVar2; lVar8 = lVar8 + 0x58) {
      FUN_0066f278(lVar7,lVar8);
      lVar7 = lVar7 + 0x58;
    }
    for (; lVar5 != lVar2; lVar5 = lVar5 + 0x58) {
      FUN_0066975c(lVar5);
    }
    lVar6 = lVar4 + lVar6 + 0x58;
    param_1 = *unaff_x19;
    *unaff_x19 = lVar9;
    unaff_x19[1] = lVar6;
    unaff_x19[2] = lVar4 + uVar1 * 0x58;
    if (param_1 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = lVar6;
  return param_1;
}



/* Entry: 0066f1a4; end: 0066f277;  */

long FUN_0066f1a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 *param_6,long param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  lVar2 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_00456d78(param_1,&uStack_50);
  FUN_00456d78(lVar2 + 0x18,&uStack_60);
  puStack_40 = (undefined8 *)(param_1 + 0x30);
  *puStack_40 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uStack_38 = 0;
  if (param_7 != 0) {
    FUN_0066bc48(puStack_40,param_7 * 4 >> 2);
    puVar1 = *(undefined4 **)(param_1 + 0x38);
    for (param_7 = param_7 << 2; param_7 != 0; param_7 = param_7 + -4) {
      *puVar1 = *param_6;
      puVar1 = puVar1 + 1;
      param_6 = param_6 + 1;
    }
    *(undefined4 **)(param_1 + 0x38) = puVar1;
  }
  uStack_38 = 1;
  func_0x0066bc80(&puStack_40);
  *(undefined8 *)(param_1 + 0x48) = param_8;
  *(undefined8 *)(param_1 + 0x50) = param_9;
  return param_1;
}



/* Entry: 0066f278; end: 0066f2c7;  */

void FUN_0066f278(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00675c98();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



/* Entry: 0066f2c8; end: 0066f2d3;  */

void FUN_0066f2c8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00674690();
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e138);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  FUN_00534b28();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 0066f2d4; end: 0066f2df;  */

void FUN_0066f2d4(undefined8 param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0067ffd4(param_1,0,param_2);
  func_0x0068048c(&PTR_FUN_00a0e138);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  FUN_00534b28();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 0066f2e0; end: 0066f307;  */

void FUN_0066f2e0(void)

{
  func_0x00676958();
  FUN_0066f308();
  func_0x006743e8();
  return;
}



/* Entry: 0066f308; end: 0066f343;  */

undefined1  [16] FUN_0066f308(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((param_1 & 1) == 0) {
    uVar1 = (long)(param_1 << 0x3e) >> 0x3f;
    auVar2._0_8_ = uVar1 & 0x810ff6;
    auVar2._8_8_ = uVar1 & 0x1b;
    return auVar2;
  }
  auVar3._8_8_ = (long)*(char *)(param_1 + 0x1e);
  if (-1 < auVar3._8_8_) {
    auVar3._0_8_ = param_1 + 7;
    return auVar3;
  }
  return *(undefined1 (*) [16])(param_1 + 7);
}



/* Entry: 0066f344; end: 0066f35b;  */

void FUN_0066f344(long *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_0055169c();
  func_0x00676920();
  if (unaff_x20 == 0) {
    FUN_0067d448(unaff_x19 + 8);
  }
  return;
}



/* Entry: 0066f35c; end: 0066f383;  */

void FUN_0066f35c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00676920();
  if (unaff_x20 == 0) {
    FUN_0067d448(unaff_x19 + 8);
  }
  return;
}



/* Entry: 0066f384; end: 0066f42b;  */

void FUN_0066f384(long param_1)

{
  undefined8 extraout_x8;
  long *plVar1;
  undefined8 *unaff_x20;
  long lVar2;
  ulong uVar3;
  
  func_0x00676210();
  func_0x006750fc();
  lVar2 = *(long *)(param_1 + 8);
  FUN_00425cb4(extraout_x8,&UNK_0091202f);
  for (uVar3 = (ulong)*(int *)*unaff_x20; plVar1 = *(long **)(lVar2 + 8),
      uVar3 < (ulong)((plVar1[1] - *plVar1) / 0x18); uVar3 = uVar3 + 1) {
    FUN_004bab3c();
    func_0x00674f10();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  }
  FUN_004bab3c();
  return;
}



/* Entry: 0066f42c; end: 0066f647;  */

void FUN_0066f42c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  long extraout_x8;
  ulong *puVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined1 auStack_148 [48];
  undefined8 *puStack_118;
  undefined8 uStack_110;
  
  func_0x00673f44();
  func_0x00675804();
  uVar5 = *(ulong *)(*unaff_x19 + 0x18);
  uVar1 = (uVar5 & 1) == 0;
  puVar4 = (ulong *)(*unaff_x19 + 0x18);
  if (!(bool)uVar1) {
    puVar4 = (ulong *)(uVar5 + (long)*(int *)unaff_x19[1] * 8 + 7);
  }
  func_0x00673fe0(*puVar4);
  puVar2 = (undefined8 *)&UNK_0091205f;
  FUN_00532c74();
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x006750fc();
    func_0x0067414c();
    func_0x006753ec(*puVar2);
    if (extraout_x8 == 0) {
      func_0x00675804();
      puVar4 = (ulong *)(*(long *)(unaff_x20 + 8) + 0x18);
      uVar5 = *puVar4;
      uVar1 = (uVar5 & 1) == 0;
      if (!(bool)uVar1) {
        puVar4 = (ulong *)(uVar5 + (long)**(int **)(unaff_x20 + 0x10) * 8 + 7);
      }
      puStack_118 = puVar2;
      uStack_110 = param_2;
      func_0x00673fe0(*puVar4);
      puStack_178 = &UNK_00912073;
    }
    else {
      func_0x00675804();
      puVar4 = (ulong *)(*(long *)(unaff_x20 + 8) + 0x18);
      uVar5 = *puVar4;
      uVar1 = (uVar5 & 1) == 0;
      if (!(bool)uVar1) {
        puVar4 = (ulong *)(uVar5 + (long)**(int **)(unaff_x20 + 0x10) * 8 + 7);
      }
      puStack_118 = puVar2;
      uStack_110 = param_2;
      func_0x00673fe0(*puVar4);
      puStack_178 = &UNK_0091208a;
    }
    FUN_00532c74();
    ppuVar3 = &puStack_118;
    uStack_170 = param_2;
    FUN_00575ddc(ppuVar3,auStack_148,&puStack_178);
    func_0x00673f78();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x006752e8();
      *unaff_x19 = 0;
      if (ppuVar3 != (undefined8 **)0x0) {
        __ZdlPv();
      }
      return;
    }
  }
  return;
}



/* Entry: 0066f648; end: 0066f693;  */

void FUN_0066f648(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  
  func_0x00674c00();
  FUN_00667c94();
  lVar1 = unaff_x20[1];
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(lVar1 + param_2 * 4) = *unaff_x21;
  }
  *unaff_x19 = *unaff_x20 + param_2;
  unaff_x19[1] = lVar1 + param_2 * 4;
  *(char *)(unaff_x19 + 2) = (char)param_3;
  return;
}



/* Entry: 0066f694; end: 0066f78f;  */

void FUN_0066f694(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  ulong *puVar4;
  undefined1 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 extraout_x9;
  ulong *extraout_x11;
  undefined8 extraout_x12;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x00674e30();
  func_0x00674c00();
  Hint_Prefetch(*param_2,0,2,0);
  cVar3 = *(char *)(param_3 + 0x17) < '\0';
  cVar2 = '\0';
  puVar6 = unaff_x20;
  FUN_0066696c();
  lVar7 = 0;
  uVar8 = unaff_x20[2];
  func_0x00676cbc(*unaff_x20 >> 0xc);
  func_0x00674f64();
  uVar9 = extraout_x8;
  while( true ) {
    uVar9 = uVar9 & uVar8;
    func_0x00674f7c();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      func_0x00676ae4();
      puVar6 = (ulong *)(uVar9 + (extraout_x8_01 >> 3) & uVar8);
      puVar4 = unaff_x21;
      FUN_0066f790();
      if (((ulong)puVar4 & 1) != 0) {
        uVar5 = 0;
        goto LAB_0066f748;
      }
      func_0x00676acc();
      puVar6 = puVar4;
    }
    func_0x006745a8();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar9 = lVar7 + uVar9;
  }
  func_0x00676ba8();
  func_0x006698a0();
  func_0x00676a4c(unaff_x20[1] + (long)puVar6 * 0x10);
  uVar1 = extraout_x12;
  puVar4 = extraout_x11;
  if (cVar3 == cVar2) {
    uVar1 = extraout_x9;
    puVar4 = unaff_x21;
  }
  *extraout_x8_03 = puVar4;
  extraout_x8_03[1] = uVar1;
  uVar5 = 1;
LAB_0066f748:
  uVar9 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + (long)puVar6;
  unaff_x19[1] = uVar9 + (long)puVar6 * 0x10;
  *(undefined1 *)(unaff_x19 + 2) = uVar5;
  return;
}



/* Entry: 0066f790; end: 0066f7af;  */

bool FUN_0066f790(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  puVar3 = param_1;
  if (lVar2 < 0) {
    puVar3 = (undefined8 *)*param_1;
    lVar2 = param_1[1];
  }
  if (param_3 == lVar2) {
    func_0x0046d038(param_2,param_3,puVar3);
    bVar1 = (int)param_2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 0066f7b0; end: 0066fccf;  */

void FUN_0066f7b0(long *param_1,undefined **param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  code *pcVar11;
  undefined *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *extraout_x8_03;
  long extraout_x8_04;
  long *extraout_x9;
  undefined8 *extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  long *extraout_x11;
  long extraout_x11_00;
  undefined8 *extraout_x11_01;
  undefined1 *extraout_x12;
  dword *pdVar12;
  undefined *unaff_x21;
  long *plVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  long lVar19;
  long *unaff_x25;
  undefined **unaff_x26;
  undefined8 unaff_x30;
  long lStack_348;
  undefined1 auStack_340 [72];
  undefined1 auStack_2f8 [40];
  uint uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2b8;
  undefined **ppuStack_2b0;
  long *plStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  undefined *puStack_288;
  dword *pdStack_280;
  long *plStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined **ppuStack_260;
  undefined8 *puStack_258;
  undefined **ppuStack_250;
  long lStack_240;
  long *plStack_238;
  long lStack_230;
  undefined1 auStack_228 [232];
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined1 *puStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *apuStack_f8 [9];
  undefined1 auStack_b0 [160];
  
  func_0x00676d94();
  plVar13 = (long *)*param_1;
  ppuVar8 = (undefined **)param_2[4];
  uVar2 = *(uint *)(param_2[2] + 0x20);
  pdVar12 = (dword *)(ulong)uVar2;
  puVar1 = (undefined8 *)(param_2[2] + 0x90);
  if (param_2[3] != (undefined *)0x0) {
    puVar1 = (undefined8 *)(param_2[3] + 0x30);
  }
  puVar15 = (undefined *)*puVar1;
  puStack_130 = param_3;
  func_0x00674eec();
  param_2[5] = extraout_x8;
  param_2[6] = extraout_x8;
  ppuVar9 = param_2;
  if ((*(byte *)(plVar13 + 0xd) & 1) == 0) {
LAB_0066fc78:
    func_0x00675ef8();
    func_0x00674bbc();
    func_0x00676624();
    ppuVar8 = &puStack_100;
    FUN_005558a0();
    func_0x0067550c();
    func_0x006754c4();
    func_0x00674bc8();
    pcVar11 = FUN_0066fcd0;
    func_0x00676d94();
    puStack_140 = &stack0xfffffffffffffff0;
    pcStack_138 = pcVar11;
    ppuVar14 = (undefined **)*ppuVar8;
    puVar15 = ppuVar9[4];
    iVar3 = *(int *)(ppuVar9[2] + 0x20);
    puVar1 = (undefined8 *)(ppuVar9[2] + 0x90);
    if (ppuVar9[3] != (undefined *)0x0) {
      puVar1 = (undefined8 *)(ppuVar9[3] + 0x30);
    }
    puVar17 = (undefined *)*puVar1;
    ppuStack_250 = ppuVar8;
    func_0x00674eec();
    ppuVar9[5] = extraout_x8_03;
    ppuVar9[6] = extraout_x8_03;
    ppuVar10 = ppuVar9;
    if (((ulong)ppuVar14[0xd] & 1) == 0) {
LAB_0066ff54:
      func_0x00675ef8();
      func_0x00674bbc();
      func_0x00676624();
      plVar13 = &lStack_230;
      FUN_005558a0();
      plVar5 = plVar13;
      func_0x0067550c();
      func_0x006754c4();
      func_0x00674bc8();
      pcStack_268 = FUN_0066ff9c;
      ppuStack_2b0 = unaff_x26;
      plStack_2a8 = unaff_x25;
      puStack_2a0 = puVar15;
      puStack_298 = puVar17;
      ppuStack_290 = ppuVar14;
      puStack_288 = unaff_x21;
      pdStack_280 = pdVar12;
      plStack_278 = plVar13;
      ppuStack_270 = &puStack_140;
      func_0x00676158();
      puVar15 = ppuVar10[7];
      iVar3 = *(int *)(ppuVar10[2] + 0x20);
      if (((*(byte *)((long)ppuVar10 + 1) >> 4 & 1) == 0) || (plVar13[5] == 0)) {
        if ((*(byte *)((long)ppuVar10 + 1) >> 3 & 1) == 0) {
          plVar5 = (long *)(plVar13[4] + 0x30);
        }
        else {
          func_0x0067584c();
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)(plVar13[2] + 0x90);
          }
          else {
            func_0x0067584c();
            plVar5 = plVar5 + 6;
          }
        }
      }
      else {
        plVar5 = (long *)(plVar13[5] + 0x28);
      }
      lVar16 = *plVar5;
      func_0x00674eec();
      plVar13[8] = extraout_x8_04;
      plVar13[9] = extraout_x8_04;
      if ((unaff_x21[0x68] & 1) != 0) {
        ppuVar8 = &PTR_PTR_00b25a18;
        if ((puVar15[0x28] & 1) != 0) {
          ppuVar8 = *(undefined ***)(unaff_x21 + 8);
          puVar17 = puVar15;
          func_0x0066e5c4(puVar15,&PTR_PTR_00b25a18);
          FUN_00655344(ppuVar8,puVar17);
          plVar13[8] = (long)ppuVar8;
          if (*(long *)(puVar15 + 0x70) != 0) {
            FUN_00678b18(*(long *)(puVar15 + 0x70),ppuVar8);
            ppuVar8 = (undefined **)plVar13[8];
          }
          *(uint *)(puVar15 + 0x28) = *(uint *)(puVar15 + 0x28) & 0xfffffffe;
        }
        FUN_0066f2d4(auStack_2f8,ppuVar8);
        if (iVar3 < 1000) {
          if ((undefined **)plVar13[8] != &PTR_PTR_00b25a18) {
            func_0x00675658();
            func_0x00674d90(unaff_x21);
          }
          if (pdVar12[0x15] == 2) {
            uStack_2d0 = uStack_2d0 | 1;
            uStack_2c8 = 3;
          }
          if (pdVar12[0x16] == 10) {
            uStack_2d0 = uStack_2d0 | 0x10;
            uStack_2b8 = 2;
          }
          if (puVar15[0x88] == 1) {
            uStack_2d0 = uStack_2d0 | 4;
            uStack_2c0 = 1;
          }
          if (((iVar3 == 999) && (((byte)puVar15[0x28] >> 4 & 1) != 0)) &&
             ((puVar15[0x88] & 1) == 0)) {
            uStack_2d0 = uStack_2d0 | 4;
            uStack_2c0 = 2;
          }
        }
        puVar18 = auStack_2f8;
        FUN_0067d670();
        if (puVar18 == (undefined1 *)0x0) {
          plVar13[9] = lVar16;
        }
        else {
          FUN_00688c50(&lStack_348,unaff_x21 + 0x20,lVar16,auStack_2f8);
          if (lStack_348 == 0) {
            lVar16 = *(long *)(unaff_x21 + 8);
            FUN_0066f344(&lStack_348);
            FUN_00655344(lVar16,auStack_340);
            plVar13[9] = lVar16;
          }
          else {
            func_0x00675478(unaff_x21,plVar13[1],pdVar12);
          }
          FUN_0066f35c(&lStack_348);
        }
        FUN_0067d448(auStack_2f8);
        return;
      }
      FUN_00533884(auStack_2f8,&UNK_00911fe9);
      func_0x00674bbc();
      FUN_00776794(&lStack_348);
      func_0x00676738();
      func_0x00674f88();
      FUN_0066f35c();
      FUN_0067d448(auStack_2f8);
      func_0x00674bc8();
      func_0x00676958();
      FUN_0066f308();
      func_0x006743e8();
      return;
    }
    ppuVar10 = &PTR_PTR_00b25a18;
    if ((puVar15[0x28] & 1) != 0) {
      puVar7 = puVar15;
      func_0x0066e628(puVar15,&PTR_PTR_00b25a18);
      func_0x006764f4();
      ppuVar9[5] = puVar7;
      ppuVar8 = *(undefined ***)(puVar15 + 0x48);
      if (ppuVar8 != (undefined **)0x0) {
        FUN_00678b18(ppuVar8,puVar7);
      }
      *(uint *)(puVar15 + 0x28) = *(uint *)(puVar15 + 0x28) & 0xfffffffe;
    }
    func_0x006759f4();
    if (iVar3 < 1000 && (undefined **)ppuVar9[5] != &PTR_PTR_00b25a18) {
      func_0x00675658();
      ppuVar8 = ppuVar14;
      func_0x00674d90();
    }
    func_0x006759fc();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar9[6] = puVar17;
      ppuVar8 = (undefined **)0x0;
    }
    else {
      func_0x00675b84();
      if (lStack_230 == 0) {
        ppuVar14 = (undefined **)ppuVar14[1];
        func_0x00675aa0();
        ppuVar8 = ppuVar14;
        FUN_00655344(ppuVar14,auStack_228);
        ppuVar9[6] = (undefined *)ppuVar8;
      }
      else {
        plStack_238 = &lStack_230;
        ppuVar8 = ppuVar14;
        func_0x00675478(ppuVar14,ppuVar9[1],param_3);
      }
      func_0x0067550c();
    }
    func_0x006754c4();
    lVar16 = 0;
    puStack_258 = (undefined8 *)(param_3 + 0x18);
    ppuStack_260 = ppuVar9;
    for (lStack_240 = 0; bVar4 = lStack_240 == *(int *)((long)ppuVar9 + 4),
        lStack_240 < *(int *)((long)ppuVar9 + 4); lStack_240 = lStack_240 + 1) {
      pdVar12 = (dword *)ppuVar9[7];
      func_0x00675108(*puStack_258);
      puVar1 = extraout_x11_01;
      if (!bVar4) {
        puVar1 = extraout_x9_00;
      }
      puVar17 = (undefined *)*puVar1;
      puVar15 = *ppuStack_250;
      lVar19 = *(long *)((long)pdVar12 + lVar16 + 0x10);
      unaff_x26 = *(undefined ***)((long)pdVar12 + lVar16 + 0x18);
      uVar2 = *(uint *)(*(long *)(lVar19 + 0x10) + 0x20);
      unaff_x21 = (undefined *)(ulong)uVar2;
      unaff_x25 = *(long **)(lVar19 + 0x30);
      *(undefined ***)((long)pdVar12 + lVar16 + 0x20) = &PTR_PTR_00b25a18;
      *(undefined ***)((long)pdVar12 + lVar16 + 0x28) = &PTR_PTR_00b25a18;
      if ((puVar15[0x68] & 1) == 0) goto LAB_0066ff54;
      lStack_240 = extraout_x10_00;
      if (((ulong)unaff_x26[5] & 1) != 0) {
        ppuVar9 = unaff_x26;
        func_0x0066e658();
        func_0x00676090();
        *(undefined ***)((long)pdVar12 + lVar16 + 0x20) = ppuVar9;
        ppuVar8 = (undefined **)unaff_x26[9];
        if (ppuVar8 != (undefined **)0x0) {
          FUN_00678b18(ppuVar8,ppuVar9);
        }
        func_0x006760b8();
        ppuVar9 = ppuStack_260;
      }
      func_0x006759f4();
      if (((int)uVar2 < 1000) &&
         (*(undefined ***)((long)pdVar12 + lVar16 + 0x20) != &PTR_PTR_00b25a18)) {
        func_0x0067556c();
        func_0x00674858();
      }
      func_0x006759fc();
      if (ppuVar8 == (undefined **)0x0) {
        *(long **)((long)pdVar12 + lVar16 + 0x28) = unaff_x25;
      }
      else {
        func_0x00675b98();
        if (lStack_230 == 0) {
          func_0x00675aa0();
          func_0x00676050();
          *(undefined ***)((long)pdVar12 + lVar16 + 0x28) = ppuVar8;
        }
        else {
          func_0x006761a8((undefined *)((long)pdVar12 + lVar16));
          func_0x00675178();
          FUN_0065ad28();
        }
        func_0x0067550c();
      }
      func_0x006754c4();
      lVar16 = lVar16 + 0x30;
      ppuVar14 = ppuVar10;
    }
    func_0x00676d7c(pcStack_138);
  }
  else {
    ppuVar9 = &PTR_PTR_00b25a18;
    plVar5 = param_1;
    if (((ulong)ppuVar8[5] & 1) != 0) {
      ppuVar9 = ppuVar8;
      func_0x0066e594();
      func_0x006764f4();
      param_2[5] = (undefined *)ppuVar9;
      plVar5 = (long *)ppuVar8[9];
      if (plVar5 != (long *)0x0) {
        FUN_00678b18();
        ppuVar9 = (undefined **)param_2[5];
      }
      *(uint *)(ppuVar8 + 5) = *(uint *)(ppuVar8 + 5) & 0xfffffffe;
    }
    func_0x006759f4();
    if ((int)uVar2 < 1000 && (undefined **)param_2[5] != &PTR_PTR_00b25a18) {
      ppuVar9 = (undefined **)param_2[1];
      func_0x00675658();
      plVar5 = plVar13;
      param_3 = puStack_130;
      func_0x00674d90();
    }
    func_0x006759fc();
    if (plVar5 == (long *)0x0) {
      param_2[6] = puVar15;
      plVar13 = (long *)0x0;
    }
    else {
      func_0x00675b84();
      if (puStack_100 == (undefined *)0x0) {
        plVar13 = (long *)plVar13[1];
        pdVar12 = (dword *)&puStack_100;
        func_0x00675aa0();
        ppuVar9 = apuStack_f8;
        FUN_00655344();
        param_2[6] = (undefined *)plVar13;
      }
      else {
        ppuVar9 = (undefined **)param_2[1];
        ppuStack_108 = &puStack_100;
        param_3 = puStack_130;
        func_0x00675478();
      }
      func_0x0067550c();
    }
    func_0x006754c4();
    func_0x00675154();
    while ((long)unaff_x21 < (long)*(int *)((long)param_2 + 0x84)) {
      func_0x006742f4(param_2[10]);
      ppuVar9 = (undefined **)(extraout_x8_00 + (long)pdVar12);
      plVar13 = param_1;
      FUN_0066fcd0();
      func_0x00674db0();
    }
    lVar16 = 0;
    lStack_110 = 0;
    puStack_128 = (undefined8 *)(puStack_130 + 0x90);
    plStack_120 = param_1;
    while( true ) {
      bVar4 = lStack_110 == *(int *)(param_2 + 0xf);
      if (*(int *)(param_2 + 0xf) <= lStack_110) break;
      puVar15 = param_2[8];
      func_0x00675108(*puStack_128);
      plVar5 = extraout_x11;
      if (!bVar4) {
        plVar5 = extraout_x9;
      }
      puVar18 = (undefined1 *)*plVar5;
      unaff_x25 = (long *)*param_1;
      unaff_x21 = puVar15 + lVar16;
      lVar19 = *(long *)(unaff_x21 + 0x18);
      uVar2 = *(uint *)(*(long *)(*(long *)(unaff_x21 + 0x10) + 0x10) + 0x20);
      pdVar12 = (dword *)(ulong)uVar2;
      unaff_x26 = *(undefined ***)(*(long *)(unaff_x21 + 0x10) + 0x30);
      *(undefined ***)(unaff_x21 + 0x20) = &PTR_PTR_00b25a18;
      *(undefined ***)(unaff_x21 + 0x28) = &PTR_PTR_00b25a18;
      if ((*(byte *)(unaff_x25 + 0xd) & 1) == 0) goto LAB_0066fc78;
      ppuVar9 = &PTR_PTR_00b25a18;
      puStack_118 = extraout_x12;
      lStack_110 = extraout_x10;
      if ((*(byte *)(lVar19 + 0x28) & 1) != 0) {
        ppuVar9 = (undefined **)unaff_x25[1];
        lVar6 = lVar19;
        func_0x0066e5f8(lVar19);
        FUN_00655344(ppuVar9,lVar6);
        *(undefined ***)(unaff_x21 + 0x20) = ppuVar9;
        plVar13 = *(long **)(lVar19 + 0x48);
        if (plVar13 != (long *)0x0) {
          FUN_00678b18();
          ppuVar9 = *(undefined ***)(unaff_x21 + 0x20);
        }
        *(uint *)(lVar19 + 0x28) = *(uint *)(lVar19 + 0x28) & 0xfffffffe;
      }
      func_0x006759f4();
      if (((int)uVar2 < 1000) && (*(undefined ***)(unaff_x21 + 0x20) != &PTR_PTR_00b25a18)) {
        ppuVar9 = *(undefined ***)(puVar15 + lVar16 + 8);
        plVar13 = unaff_x25;
        param_3 = puVar18;
        func_0x00674858();
      }
      func_0x006759fc();
      param_1 = plStack_120;
      if (plVar13 == (long *)0x0) {
        *(undefined ***)(unaff_x21 + 0x28) = unaff_x26;
        unaff_x25 = (long *)0x0;
      }
      else {
        param_3 = auStack_b0;
        FUN_00688c50(&puStack_100,unaff_x25 + 4);
        if (puStack_100 == (undefined *)0x0) {
          unaff_x25 = (long *)unaff_x25[1];
          func_0x00675aa0();
          ppuVar9 = apuStack_f8;
          FUN_00655344();
          *(long **)(unaff_x21 + 0x28) = unaff_x25;
        }
        else {
          func_0x006761a8(puVar15 + lVar16);
          FUN_0065ad28();
          ppuVar9 = unaff_x26;
          param_3 = puVar18;
        }
        func_0x0067550c();
      }
      func_0x006754c4();
      lStack_110 = lStack_110 + 1;
      lVar16 = lVar16 + 0x38;
      plVar13 = unaff_x25;
    }
    func_0x00675154();
    while ((long)unaff_x21 < (long)*(int *)((long)param_2 + 4)) {
      func_0x006742f4(param_2[7]);
      func_0x00676704();
      func_0x00674db0();
    }
    func_0x00675154();
    for (; (long)unaff_x21 < (long)*(int *)(param_2 + 0x10); unaff_x21 = unaff_x21 + 1) {
      func_0x006742f4(param_2[9]);
      ppuVar9 = (undefined **)(extraout_x8_01 + (long)pdVar12);
      plVar13 = param_1;
      FUN_0066f7b0();
      pdVar12 = pdVar12 + 0x26;
    }
    func_0x00675154();
    while ((long)unaff_x21 < (long)*(int *)((long)param_2 + 0x8c)) {
      func_0x006742f4(param_2[0xc]);
      func_0x00676704();
      func_0x00674db0();
    }
    puStack_118 = puStack_130 + 0x60;
    pdVar12 = &MACH_HEADER.cpusubtype;
    for (lVar16 = 0; lVar16 < *(int *)(param_2 + 0x11); lVar16 = lVar16 + 1) {
      func_0x00674d10(param_2[0xb]);
      lVar19 = *param_1;
      unaff_x21 = (undefined *)(extraout_x8_02 + extraout_x11_00);
      unaff_x26 = *(undefined ***)(unaff_x21 + 8);
      iVar3 = *(int *)(*(long *)(*(long *)(unaff_x21 + 0x10) + 0x10) + 0x20);
      unaff_x25 = *(long **)(*(long *)(unaff_x21 + 0x10) + 0x30);
      func_0x006769c4();
      *(undefined ***)(unaff_x21 + 0x18) = ppuVar9;
      *(undefined ***)(unaff_x21 + 0x20) = ppuVar9;
      if ((*(byte *)(lVar19 + 0x68) & 1) == 0) goto LAB_0066fc78;
      if (((ulong)unaff_x26[5] & 1) != 0) {
        ppuVar9 = unaff_x26;
        FUN_0066e360();
        func_0x00676090();
        *(undefined ***)(unaff_x21 + 0x18) = ppuVar9;
        plVar13 = (long *)unaff_x26[0xc];
        if (plVar13 != (long *)0x0) {
          FUN_00678b18();
          ppuVar9 = *(undefined ***)(unaff_x21 + 0x18);
        }
        func_0x006760b8();
        param_1 = plStack_120;
      }
      func_0x006759f4();
      bVar4 = iVar3 == 999;
      if ((iVar3 < 1000) && (func_0x006751b4(*(undefined8 *)(unaff_x21 + 0x18)), !bVar4)) {
        ppuVar9 = *(undefined ***)(*(long *)(unaff_x21 + 0x10) + 8);
        func_0x0067556c();
        func_0x00674858();
      }
      func_0x006759fc();
      if (plVar13 == (long *)0x0) {
        *(long **)(unaff_x21 + 0x20) = unaff_x25;
      }
      else {
        func_0x00675b98();
        if (puStack_100 == (undefined *)0x0) {
          func_0x00675aa0();
          func_0x00676050();
          *(long **)(unaff_x21 + 0x20) = plVar13;
        }
        else {
          func_0x006761a8(*(undefined8 *)(unaff_x21 + 0x10));
          func_0x00675178();
          FUN_0065ad28();
        }
        func_0x0067550c();
      }
      func_0x006754c4();
      pdVar12 = pdVar12 + 2;
    }
    func_0x00676d7c(unaff_x30);
  }
  return;
}



/* Entry: 0066fcd0; end: 0066ff9b;  */

void FUN_0066fcd0(undefined **param_1,undefined **param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined *extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 *extraout_x11;
  undefined *unaff_x20;
  ulong unaff_x21;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 unaff_x25;
  long unaff_x26;
  long lVar15;
  undefined8 unaff_x30;
  long lStack_218;
  undefined1 auStack_210 [72];
  undefined1 auStack_1c8 [40];
  uint uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_128;
  undefined **ppuStack_120;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  undefined1 auStack_f8 [232];
  
  func_0x00676d94();
  ppuVar12 = (undefined **)*param_1;
  puVar14 = param_2[4];
  iVar2 = *(int *)(param_2[2] + 0x20);
  puVar1 = (undefined8 *)(param_2[2] + 0x90);
  if (param_2[3] != (undefined *)0x0) {
    puVar1 = (undefined8 *)(param_2[3] + 0x30);
  }
  puVar13 = (undefined *)*puVar1;
  ppuStack_120 = param_1;
  func_0x00674eec();
  param_2[5] = extraout_x8;
  param_2[6] = extraout_x8;
  ppuVar11 = param_2;
  if (((ulong)ppuVar12[0xd] & 1) != 0) {
    ppuVar11 = &PTR_PTR_00b25a18;
    if ((puVar14[0x28] & 1) != 0) {
      puVar5 = puVar14;
      func_0x0066e628(puVar14,&PTR_PTR_00b25a18);
      func_0x006764f4();
      param_2[5] = puVar5;
      param_1 = *(undefined ***)(puVar14 + 0x48);
      if (param_1 != (undefined **)0x0) {
        FUN_00678b18(param_1,puVar5);
      }
      *(uint *)(puVar14 + 0x28) = *(uint *)(puVar14 + 0x28) & 0xfffffffe;
    }
    func_0x006759f4();
    if (iVar2 < 1000 && (undefined **)param_2[5] != &PTR_PTR_00b25a18) {
      func_0x00675658();
      param_1 = ppuVar12;
      func_0x00674d90();
    }
    func_0x006759fc();
    if (param_1 == (undefined **)0x0) {
      param_2[6] = puVar13;
      ppuVar7 = (undefined **)0x0;
    }
    else {
      func_0x00675b84();
      if (lStack_100 == 0) {
        ppuVar12 = (undefined **)ppuVar12[1];
        func_0x00675aa0();
        ppuVar7 = ppuVar12;
        FUN_00655344(ppuVar12,auStack_f8);
        param_2[6] = (undefined *)ppuVar7;
      }
      else {
        plStack_108 = &lStack_100;
        ppuVar7 = ppuVar12;
        func_0x00675478(ppuVar12,param_2[1],param_3);
      }
      func_0x0067550c();
    }
    func_0x006754c4();
    lVar15 = 0;
    lStack_110 = 0;
    puStack_128 = (undefined8 *)(param_3 + 0x18);
    ppuStack_130 = param_2;
    while( true ) {
      bVar4 = lStack_110 == *(int *)((long)param_2 + 4);
      if (*(int *)((long)param_2 + 4) <= lStack_110) {
        func_0x00676d7c(unaff_x30);
        return;
      }
      unaff_x20 = param_2[7];
      func_0x00675108(*puStack_128);
      puVar1 = extraout_x11;
      if (!bVar4) {
        puVar1 = extraout_x9;
      }
      puVar13 = (undefined *)*puVar1;
      puVar14 = *ppuStack_120;
      unaff_x26 = *(long *)(unaff_x20 + lVar15 + 0x18);
      uVar3 = *(uint *)(*(long *)(*(long *)(unaff_x20 + lVar15 + 0x10) + 0x10) + 0x20);
      unaff_x21 = (ulong)uVar3;
      unaff_x25 = *(undefined8 *)(*(long *)(unaff_x20 + lVar15 + 0x10) + 0x30);
      *(undefined ***)(unaff_x20 + lVar15 + 0x20) = &PTR_PTR_00b25a18;
      *(undefined ***)(unaff_x20 + lVar15 + 0x28) = &PTR_PTR_00b25a18;
      if ((puVar14[0x68] & 1) == 0) break;
      lStack_110 = extraout_x10;
      if ((*(byte *)(unaff_x26 + 0x28) & 1) != 0) {
        lVar6 = unaff_x26;
        func_0x0066e658();
        func_0x00676090();
        *(long *)(unaff_x20 + lVar15 + 0x20) = lVar6;
        ppuVar7 = *(undefined ***)(unaff_x26 + 0x48);
        if (ppuVar7 != (undefined **)0x0) {
          FUN_00678b18(ppuVar7,lVar6);
        }
        func_0x006760b8();
        param_2 = ppuStack_130;
      }
      func_0x006759f4();
      if (((int)uVar3 < 1000) && (*(undefined ***)(unaff_x20 + lVar15 + 0x20) != &PTR_PTR_00b25a18))
      {
        func_0x0067556c();
        func_0x00674858();
      }
      func_0x006759fc();
      if (ppuVar7 == (undefined **)0x0) {
        *(undefined8 *)(unaff_x20 + lVar15 + 0x28) = unaff_x25;
      }
      else {
        func_0x00675b98();
        if (lStack_100 == 0) {
          func_0x00675aa0();
          func_0x00676050();
          *(undefined ***)(unaff_x20 + lVar15 + 0x28) = ppuVar7;
        }
        else {
          func_0x006761a8(unaff_x20 + lVar15);
          func_0x00675178();
          FUN_0065ad28();
        }
        func_0x0067550c();
      }
      func_0x006754c4();
      lStack_110 = lStack_110 + 1;
      lVar15 = lVar15 + 0x30;
      ppuVar12 = ppuVar11;
    }
  }
  func_0x00675ef8();
  func_0x00674bbc();
  func_0x00676624();
  plVar8 = &lStack_100;
  FUN_005558a0();
  plVar9 = plVar8;
  func_0x0067550c();
  func_0x006754c4();
  func_0x00674bc8();
  pcStack_138 = FUN_0066ff9c;
  lStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  puStack_170 = puVar14;
  puStack_168 = puVar13;
  ppuStack_160 = ppuVar12;
  uStack_158 = unaff_x21;
  puStack_150 = unaff_x20;
  plStack_148 = plVar8;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00676158();
  puVar14 = ppuVar11[7];
  iVar2 = *(int *)(ppuVar11[2] + 0x20);
  if (((*(byte *)((long)ppuVar11 + 1) >> 4 & 1) == 0) || (plVar8[5] == 0)) {
    if ((*(byte *)((long)ppuVar11 + 1) >> 3 & 1) == 0) {
      plVar9 = (long *)(plVar8[4] + 0x30);
    }
    else {
      func_0x0067584c();
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(plVar8[2] + 0x90);
      }
      else {
        func_0x0067584c();
        plVar9 = plVar9 + 6;
      }
    }
  }
  else {
    plVar9 = (long *)(plVar8[5] + 0x28);
  }
  lVar15 = *plVar9;
  func_0x00674eec();
  plVar8[8] = extraout_x8_00;
  plVar8[9] = extraout_x8_00;
  if ((*(byte *)(unaff_x21 + 0x68) & 1) != 0) {
    ppuVar12 = &PTR_PTR_00b25a18;
    if ((puVar14[0x28] & 1) != 0) {
      ppuVar12 = *(undefined ***)(unaff_x21 + 8);
      puVar13 = puVar14;
      func_0x0066e5c4(puVar14,&PTR_PTR_00b25a18);
      FUN_00655344(ppuVar12,puVar13);
      plVar8[8] = (long)ppuVar12;
      if (*(long *)(puVar14 + 0x70) != 0) {
        FUN_00678b18(*(long *)(puVar14 + 0x70),ppuVar12);
        ppuVar12 = (undefined **)plVar8[8];
      }
      *(uint *)(puVar14 + 0x28) = *(uint *)(puVar14 + 0x28) & 0xfffffffe;
    }
    FUN_0066f2d4(auStack_1c8,ppuVar12);
    if (iVar2 < 1000) {
      if ((undefined **)plVar8[8] != &PTR_PTR_00b25a18) {
        func_0x00675658();
        func_0x00674d90(unaff_x21);
      }
      if (*(int *)(unaff_x20 + 0x54) == 2) {
        uStack_1a0 = uStack_1a0 | 1;
        uStack_198 = 3;
      }
      if (*(int *)(unaff_x20 + 0x58) == 10) {
        uStack_1a0 = uStack_1a0 | 0x10;
        uStack_188 = 2;
      }
      if (puVar14[0x88] == 1) {
        uStack_1a0 = uStack_1a0 | 4;
        uStack_190 = 1;
      }
      if (((iVar2 == 999) && (((byte)puVar14[0x28] >> 4 & 1) != 0)) && ((puVar14[0x88] & 1) == 0)) {
        uStack_1a0 = uStack_1a0 | 4;
        uStack_190 = 2;
      }
    }
    puVar10 = auStack_1c8;
    FUN_0067d670();
    if (puVar10 == (undefined1 *)0x0) {
      plVar8[9] = lVar15;
    }
    else {
      FUN_00688c50(&lStack_218,unaff_x21 + 0x20,lVar15,auStack_1c8);
      if (lStack_218 == 0) {
        lVar15 = *(long *)(unaff_x21 + 8);
        FUN_0066f344(&lStack_218);
        FUN_00655344(lVar15,auStack_210);
        plVar8[9] = lVar15;
      }
      else {
        func_0x00675478(unaff_x21,plVar8[1],unaff_x20);
      }
      FUN_0066f35c(&lStack_218);
    }
    FUN_0067d448(auStack_1c8);
    return;
  }
  FUN_00533884(auStack_1c8,&UNK_00911fe9);
  func_0x00674bbc();
  FUN_00776794(&lStack_218);
  func_0x00676738();
  func_0x00674f88();
  FUN_0066f35c();
  FUN_0067d448(auStack_1c8);
  func_0x00674bc8();
  func_0x00676958();
  FUN_0066f308();
  func_0x006743e8();
  return;
}



/* Entry: 0066ff9c; end: 00670213;  */

void FUN_0066ff9c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lStack_e8;
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [40];
  uint uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  
  func_0x00676158();
  lVar5 = *(long *)(param_2 + 0x38);
  iVar1 = *(int *)(*(long *)(param_2 + 0x10) + 0x20);
  if (((*(byte *)(param_2 + 1) >> 4 & 1) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) {
    if ((*(byte *)(param_2 + 1) >> 3 & 1) == 0) {
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x30);
    }
    else {
      func_0x0067584c();
      if (param_1 == 0) {
        puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x90);
      }
      else {
        func_0x0067584c();
        puVar4 = (undefined8 *)(param_1 + 0x30);
      }
    }
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x28);
  }
  uVar6 = *puVar4;
  func_0x00674eec();
  *(undefined8 *)(unaff_x19 + 0x40) = extraout_x8;
  *(undefined8 *)(unaff_x19 + 0x48) = extraout_x8;
  if ((*(byte *)(unaff_x21 + 0x68) & 1) != 0) {
    ppuVar7 = &PTR_PTR_00b25a18;
    if ((*(byte *)(lVar5 + 0x28) & 1) != 0) {
      ppuVar7 = *(undefined ***)(unaff_x21 + 8);
      lVar2 = lVar5;
      func_0x0066e5c4(lVar5,&PTR_PTR_00b25a18);
      FUN_00655344(ppuVar7,lVar2);
      *(undefined ***)(unaff_x19 + 0x40) = ppuVar7;
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00678b18(*(long *)(lVar5 + 0x70),ppuVar7);
        ppuVar7 = *(undefined ***)(unaff_x19 + 0x40);
      }
      *(uint *)(lVar5 + 0x28) = *(uint *)(lVar5 + 0x28) & 0xfffffffe;
    }
    FUN_0066f2d4(auStack_98,ppuVar7);
    if (iVar1 < 1000) {
      if (*(undefined ***)(unaff_x19 + 0x40) != &PTR_PTR_00b25a18) {
        func_0x00675658();
        func_0x00674d90();
      }
      if (*(int *)(unaff_x20 + 0x54) == 2) {
        uStack_70 = uStack_70 | 1;
        uStack_68 = 3;
      }
      if (*(int *)(unaff_x20 + 0x58) == 10) {
        uStack_70 = uStack_70 | 0x10;
        uStack_58 = 2;
      }
      if (*(byte *)(lVar5 + 0x88) == 1) {
        uStack_70 = uStack_70 | 4;
        uStack_60 = 1;
      }
      if (((iVar1 == 999) && ((*(byte *)(lVar5 + 0x28) >> 4 & 1) != 0)) &&
         ((*(byte *)(lVar5 + 0x88) & 1) == 0)) {
        uStack_70 = uStack_70 | 4;
        uStack_60 = 2;
      }
    }
    puVar3 = auStack_98;
    FUN_0067d670();
    if (puVar3 == (undefined1 *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
    }
    else {
      FUN_00688c50(&lStack_e8,unaff_x21 + 0x20,uVar6,auStack_98);
      if (lStack_e8 == 0) {
        uVar6 = *(undefined8 *)(unaff_x21 + 8);
        FUN_0066f344(&lStack_e8);
        FUN_00655344(uVar6,auStack_e0);
        *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
      }
      else {
        func_0x00675478();
      }
      FUN_0066f35c(&lStack_e8);
    }
    FUN_0067d448(auStack_98);
    return;
  }
  FUN_00533884(auStack_98,&UNK_00911fe9);
  func_0x00674bbc();
  FUN_00776794(&lStack_e8);
  func_0x00676738();
  func_0x00674f88();
  FUN_0066f35c();
  FUN_0067d448(auStack_98);
  func_0x00674bc8();
  func_0x00676958();
  FUN_0066f308();
  func_0x006743e8();
  return;
}



/* Entry: 00670214; end: 00670353;  */

void FUN_00670214(void)

{
  func_0x00676958();
  FUN_0066f308();
  func_0x006743e8();
  return;
}



/* Entry: 00670354; end: 0067041f;  */

void FUN_00670354(void)

{
  long unaff_x19;
  long unaff_x23;
  
  func_0x00676210();
  func_0x006749c4();
  func_0x0067546c();
  while (unaff_x23 < *(int *)(unaff_x19 + 4)) {
    func_0x00674298(*(undefined8 *)(unaff_x19 + 0x38));
    FUN_00670420();
    func_0x00675860();
  }
  func_0x0067546c();
  while (unaff_x23 < *(int *)(unaff_x19 + 0x80)) {
    func_0x00674298(*(undefined8 *)(unaff_x19 + 0x48));
    FUN_00670354();
    func_0x006761b8();
  }
  func_0x0067546c();
  for (; unaff_x23 < *(int *)(unaff_x19 + 0x8c); unaff_x23 = unaff_x23 + 1) {
    func_0x00674d10(*(undefined8 *)(unaff_x19 + 0x60));
    FUN_00670420();
  }
  return;
}



/* Entry: 00670420; end: 00670427;  */

void FUN_00670420(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((*(int *)(*(long *)(param_2 + 0x48) + 0x30) == 3) && ((*(byte *)(param_2 + 1) & 0xc0) == 0x40)
     ) {
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0x3f | 0x80;
  }
  if (((*(char *)(param_2 + 2) == '\v') &&
      ((*(byte *)(*(long *)(*(long *)(param_2 + 0x20) + 0x20) + 0x53) & 1) == 0)) &&
     (uVar1 = *(int *)(*(long *)(param_2 + 0x48) + 0x40) == 2, (bool)uVar1)) {
    func_0x00675e74(*(undefined8 *)(param_3 + 0x28));
    FUN_0065b6cc();
    func_0x00675120();
    if ((!(bool)uVar1) || ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x53) & 1) == 0)) {
      *(undefined1 *)(param_2 + 2) = 10;
    }
  }
  return;
}



/* Entry: 00670428; end: 0067098b;  */

void FUN_00670428(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar8;
  long lVar9;
  long *extraout_x9;
  long *extraout_x11;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  long *plVar11;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  int aiStack_c8 [8];
  long alStack_a8 [2];
  byte bStack_98;
  char cStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00674c64();
  plVar11 = (long *)*param_1;
  func_0x00675b24(*(undefined8 *)(param_2 + 8),&plStack_88);
  if (((*(byte *)(*plVar11 + 0x36) & 1) == 0) &&
     ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x54) & 1) == 0)) {
    func_0x00676b6c();
    FUN_00661670();
    func_0x00676b6c();
    FUN_00661670();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_88);
  lVar7 = 0;
  lStack_d0 = 0x7fffffff;
  if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x50) == '\0') {
    lStack_d0 = 0x1fffffff;
  }
  plVar1 = (long *)(*(long *)(unaff_x19 + 0x58) + 8);
  for (uVar8 = (ulong)(*(uint *)(unaff_x19 + 0x88) &
                      ((int)*(uint *)(unaff_x19 + 0x88) >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
      uVar8 = uVar8 - 1) {
    if (*plVar1 != 0) {
      lVar7 = lVar7 + *(int *)(*plVar1 + 0x38);
    }
    plVar1 = plVar1 + 5;
  }
  puStack_f0 = &UNK_00811030;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  if (lVar7 != 0) {
    if (lVar7 == 7) {
      lVar7 = 8;
    }
    else {
      lVar7 = (lVar7 + -1) / 7 + lVar7;
    }
    uVar8 = 0xffffffffffffffff >> (LZCOUNT(lVar7) & 0x3fU);
    if (lVar7 == 0) {
      uVar8 = 1;
    }
    FUN_0066991c(&puStack_f0,uVar8);
  }
  lVar7 = 0;
  puVar10 = unaff_x20;
  do {
    if (*(int *)(unaff_x19 + 0x88) <= lVar7) {
LAB_0067080c:
      func_0x00669788(&puStack_f0);
      func_0x00675154();
      while (lVar7 < *(int *)(unaff_x19 + 0x84)) {
        func_0x006742f4(*(undefined8 *)(unaff_x19 + 0x50));
        FUN_00664688(*unaff_x20,extraout_x8_01 + (long)puVar10);
        func_0x00674db0();
      }
      func_0x00675154();
      while (lVar7 < *(int *)(unaff_x19 + 4)) {
        func_0x006742f4(*(undefined8 *)(unaff_x19 + 0x38));
        func_0x006765c0();
        func_0x00674db0();
      }
      func_0x00675154();
      for (; lVar7 < *(int *)(unaff_x19 + 0x80); lVar7 = lVar7 + 1) {
        func_0x006742f4(*(undefined8 *)(unaff_x19 + 0x48));
        FUN_00670428(unaff_x20,extraout_x8_02 + (long)puVar10);
        puVar10 = puVar10 + 0x13;
      }
      func_0x00675154();
      while (lVar7 < *(int *)(unaff_x19 + 0x8c)) {
        func_0x006742f4(*(undefined8 *)(unaff_x19 + 0x60));
        func_0x006765c0();
        func_0x00674db0();
      }
      return;
    }
    puVar10 = (undefined8 *)(*(long *)(unaff_x19 + 0x58) + lVar7 * 0x28);
    if (lStack_d0 + 1 < (long)*(int *)((long)puVar10 + 4)) {
      plStack_88 = &lStack_d0;
      FUN_0065ad28(plVar11,*(long *)(unaff_x19 + 8) + 0x18,param_3,1,&plStack_88,FUN_00672c18);
    }
    lVar9 = puVar10[1];
    if (*(int *)(lVar9 + 0x38) != 0) {
      if (((*(byte *)(lVar9 + 0x28) >> 1 & 1) != 0) && (*(int *)(lVar9 + 0x68) == 1)) {
        func_0x0067461c(*(undefined8 *)(unaff_x19 + 8));
        FUN_0065ad28(plVar11,extraout_x8_00 + 0x18);
        goto LAB_0067080c;
      }
      uVar8 = *(ulong *)(param_3 + 0x60);
      bVar5 = (uVar8 & 1) == 0;
      puVar2 = (ulong *)(param_3 + 0x60);
      if (!bVar5) {
        puVar2 = (ulong *)(uVar8 + lVar7 * 8 + 7);
      }
      uVar8 = *puVar2;
      plStack_88 = (long *)&UNK_00811030;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      func_0x00676c30();
      plVar1 = extraout_x9;
      if (!bVar5) {
        plVar1 = extraout_x11;
      }
      for (puVar10 = (undefined8 *)(extraout_x8 << 3); puVar10 != (undefined8 *)0x0;
          puVar10 = puVar10 + -1) {
        lVar9 = *plVar1;
        iVar3 = *(int *)(lVar9 + 0x28);
        if (iVar3 < *(int *)(uVar8 + 0x20) || *(int *)(uVar8 + 0x24) <= iVar3) {
          alStack_a8[0] = lVar9;
          func_0x00675714();
          FUN_0065ad28();
          iVar3 = *(int *)(lVar9 + 0x28);
        }
        aiStack_c8[0] = iVar3;
        FUN_0066f648(alStack_a8,&plStack_88,aiStack_c8);
        if ((bStack_98 & 1) == 0) {
          alStack_a8[0] = lVar9;
          func_0x00675714();
          FUN_0065ad28();
        }
        uVar4 = *(uint *)(lVar9 + 0x10);
        if (((uVar4 ^ 0xffffffff) & 3) == 0) {
          FUN_0066f694(alStack_a8);
          if ((bStack_98 & 1) == 0) {
            alStack_a8[0] = lVar9;
            func_0x00676148();
            FUN_0065ad28();
            break;
          }
          func_0x00675bf8(*(undefined8 *)(lVar9 + 0x18));
          FUN_00664c74(alStack_a8);
          if (cStack_90 == '\x01') {
            func_0x00676478();
            func_0x00676148();
            FUN_0065ad28();
            func_0x00675cd0();
          }
          puVar6 = (undefined8 *)(*(ulong *)(lVar9 + 0x20) & 0xfffffffffffffffc);
          if (*(char *)((long)puVar6 + 0x17) < '\0') {
            puVar6 = (undefined8 *)*puVar6;
          }
          FUN_00663118();
          if (((ulong)puVar6 & 1) == 0) {
            func_0x00675bf8(*(undefined8 *)(lVar9 + 0x20));
            FUN_00664c74(aiStack_c8);
            FUN_004575fc(alStack_a8,aiStack_c8);
            func_0x00675cd0();
            if (cStack_90 == '\x01') {
              func_0x00676478();
              func_0x00676148();
              FUN_0065ad28();
              func_0x00675cd0();
            }
          }
          FUN_00457530(alStack_a8);
        }
        else if ((((uVar4 ^ (uVar4 & 2) >> 1) & 1) != 0) || ((*(byte *)(lVar9 + 0x2c) & 1) == 0)) {
          alStack_a8[0] = lVar9;
          func_0x00675714();
          FUN_0065ad28();
        }
        plVar1 = plVar1 + 1;
      }
      func_0x00667c38(&plStack_88);
    }
    lVar7 = lVar7 + 1;
  } while( true );
}



/* Entry: 0067098c; end: 00670c67;  */

void FUN_0067098c(void)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676464();
  func_0x006749c4();
  func_0x00676c88();
  if (!(bool)in_ZR) {
    func_0x00676290();
    func_0x0067479c();
    func_0x00674a68();
  }
  func_0x006759ac();
  while (unaff_x24 < *(int *)(unaff_x19 + 0x84)) {
    func_0x00674574(*(undefined8 *)(unaff_x19 + 0x50));
    func_0x00670ba4();
    func_0x006760e8();
  }
  func_0x006759ac();
  for (; unaff_x24 < *(int *)(unaff_x19 + 0x78); unaff_x24 = unaff_x24 + 1) {
    if (*(long *)(*(long *)(unaff_x19 + 0x40) + unaff_x23 + 0x20) != unaff_x22) {
      func_0x00675bd8();
      func_0x0067479c();
      func_0x00674a68();
    }
    unaff_x23 = unaff_x23 + 0x38;
  }
  func_0x006759ac();
  while (unaff_x24 < *(int *)(unaff_x19 + 4)) {
    func_0x00674574(*(undefined8 *)(unaff_x19 + 0x38));
    func_0x00676604();
    func_0x006760e8();
  }
  func_0x006759ac();
  for (; unaff_x24 < *(int *)(unaff_x19 + 0x80); unaff_x24 = unaff_x24 + 1) {
    func_0x00674574(*(undefined8 *)(unaff_x19 + 0x48));
    FUN_0067098c();
    unaff_x23 = unaff_x23 + 0x98;
  }
  func_0x006759ac();
  while (unaff_x24 < *(int *)(unaff_x19 + 0x8c)) {
    func_0x00674574(*(undefined8 *)(unaff_x19 + 0x60));
    func_0x00676604();
    func_0x006760e8();
  }
  func_0x006759ac();
  for (; unaff_x24 < *(int *)(unaff_x19 + 0x88); unaff_x24 = unaff_x24 + 1) {
    if (*(long *)(*(long *)(unaff_x19 + 0x58) + unaff_x23 + 0x18) != unaff_x22) {
      func_0x006762cc();
      lVar1 = *(long *)(*(long *)(extraout_x9 + 0x10) + 8);
      lVar2 = (long)*(char *)(lVar1 + 0x2f);
      if (lVar2 < 0) {
        lVar2 = *(long *)(lVar1 + 0x20);
      }
      func_0x0067479c(lVar2,*(undefined8 *)(*unaff_x20 + 0x10),
                      *(undefined8 *)(*(long *)(extraout_x9 + 0x10) + 0x10));
      func_0x00674a68();
    }
    unaff_x23 = unaff_x23 + 0x28;
  }
  return;
}



/* Entry: 00670c68; end: 00670cdf;  */

void FUN_00670c68(long *param_1,long param_2)

{
  if (*(undefined ***)(param_2 + 0x40) != &PTR_PTR_00b25a18) {
    func_0x00675584(*(undefined8 *)(param_1[1] + 0xb0),*(undefined8 *)(*param_1 + 0x10),
                    *(undefined8 *)(param_2 + 0x10));
    func_0x00674a68();
  }
  return;
}



/* Entry: 00670ce0; end: 00670e7b;  */

void FUN_00670ce0(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  long extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  ulong extraout_x12;
  ulong uVar8;
  ulong extraout_x12_00;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar10;
  long unaff_x21;
  long lVar11;
  undefined8 *puVar12;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 ***pppuStack_50;
  code *pcStack_48;
  
  func_0x0067527c();
  puVar12 = (undefined8 *)(param_1 + 0xa0);
  Hint_Prefetch(*puVar12,0,2,0);
  FUN_006667d0(*puVar12,param_2);
  func_0x00674e58(0);
  do {
    func_0x0067623c();
    for (uVar8 = extraout_x12; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar9 = *(long *)(unaff_x20 + 0xa8);
      puVar5 = (undefined8 *)
               (extraout_x11 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x10);
      if (*(long *)(lVar9 + (long)puVar5 * 0x20) == unaff_x21) goto LAB_00670d8c;
    }
    func_0x00675648();
  } while ((extraout_x12_00 & 1) == 0);
  FUN_00670e7c();
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xa8) + (long)puVar12 * 0x20);
  *plVar1 = unaff_x21;
  plVar1[1] = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  lVar9 = *(long *)(unaff_x20 + 0xa8);
  puVar5 = puVar12;
LAB_00670d8c:
  lVar9 = lVar9 + (long)puVar5 * 0x20;
  puVar12 = *(undefined8 **)(lVar9 + 0x10);
  if (puVar12 < *(undefined8 **)(lVar9 + 0x18)) {
    uVar14 = unaff_x19[1];
    uVar13 = *unaff_x19;
    uVar15 = unaff_x19[2];
    uVar17 = unaff_x19[5];
    uVar16 = unaff_x19[4];
    puVar12[3] = unaff_x19[3];
    puVar12[2] = uVar15;
    puVar12[5] = uVar17;
    puVar12[4] = uVar16;
    puVar12[1] = uVar14;
    *puVar12 = uVar13;
    puVar12 = puVar12 + 6;
  }
  else {
    lVar10 = *(long *)(lVar9 + 8);
    lVar11 = (long)puVar12 - lVar10;
    uVar8 = lVar11 / 0x30 + 1;
    uVar3 = 0x555555555555554 < uVar8;
    uVar4 = uVar8 == 0x555555555555555;
    if (0x555555555555555 < uVar8) {
      FUN_00670f54();
LAB_00670e78:
      FUN_0040cee8();
      pcStack_48 = FUN_00670e7c;
      pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
      func_0x00673fc4();
      func_0x00674f04();
      if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)uVar4)) {
        func_0x00674f2c();
        if (((bool)uVar3) && (func_0x006742b8(), (bool)uVar3)) {
          func_0x00674668();
        }
        else {
          func_0x0067452c();
          FUN_00670eec();
        }
        func_0x0067444c();
      }
      func_0x00673eb4();
      func_0x00673f78();
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      pcVar7 = FUN_00670eec;
      func_0x00676210();
      pppuStack_50 = &pppuStack_50;
      pcStack_48 = pcVar7;
      func_0x006742e0();
      func_0x00674f44();
      while (unaff_x23 != unaff_x24) {
        if (-1 < *(char *)(lVar9 + unaff_x24)) {
          func_0x006667c8(lVar10);
          func_0x00674324();
          func_0x00673efc((uint)lVar11 & 0x7f);
          func_0x00675c28();
          FUN_006667f4();
        }
        func_0x00675698();
      }
      if (unaff_x23 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(lVar9 + -8);
      return;
    }
    uVar2 = ((long)*(undefined8 **)(lVar9 + 0x18) - lVar10) / 0x30;
    unaff_x23 = uVar2 * 2;
    if (unaff_x23 < uVar8 || unaff_x23 - uVar8 == 0) {
      unaff_x23 = uVar8;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar2) {
      unaff_x23 = 0x555555555555555;
    }
    if (unaff_x23 == 0) {
      lVar6 = 0;
    }
    else {
      uVar3 = 0x555555555555554 < unaff_x23;
      uVar4 = unaff_x23 == 0x555555555555555;
      if (0x555555555555555 < unaff_x23) goto LAB_00670e78;
      lVar6 = unaff_x23 * 0x30;
      __Znwm();
    }
    puVar5 = (undefined8 *)(lVar6 + lVar11);
    uVar13 = *unaff_x19;
    uVar15 = unaff_x19[3];
    uVar14 = unaff_x19[2];
    puVar5[1] = unaff_x19[1];
    *puVar5 = uVar13;
    puVar5[3] = uVar15;
    puVar5[2] = uVar14;
    uVar13 = unaff_x19[4];
    puVar5[5] = unaff_x19[5];
    puVar5[4] = uVar13;
    puVar12 = puVar5 + 6;
    func_0x00674cfc();
    _memcpy();
    *(undefined8 **)(lVar9 + 8) = puVar5 + (lVar11 / -0x30) * 6;
    *(undefined8 **)(lVar9 + 0x10) = puVar12;
    *(ulong *)(lVar9 + 0x18) = lVar6 + unaff_x23 * 0x30;
    if (lVar10 != 0) {
      func_0x00675e98();
    }
  }
  *(undefined8 **)(lVar9 + 0x10) = puVar12;
  return;
}



/* Entry: 00670e7c; end: 00670eeb;  */

void FUN_00670e7c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_00670eec();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x006667c8();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      func_0x00675c28();
      FUN_006667f4();
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 00670eec; end: 00670f53;  */

void FUN_00670eec(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x006667c8();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      func_0x00675c28();
      FUN_006667f4();
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 00670f54; end: 00670f5f;  */

void FUN_00670f54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  long unaff_x21;
  undefined8 uStack_110;
  
  func_0x00674690();
  func_0x00673fac();
  func_0x006759cc();
  func_0x00675678(*(undefined4 *)(unaff_x21 + 0x1c));
  func_0x006759c4();
  func_0x00675530();
  func_0x0067488c();
  func_0x00675a04();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00674388(uStack_110);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00576604();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006747d8();
    func_0x00674f1c();
    func_0x0067539c();
    uVar1 = extraout_x13;
    uVar2 = extraout_x12;
    if (in_NG == in_OV) {
      uVar1 = extraout_x10;
      uVar2 = extraout_x9;
    }
    func_0x006752d8(extraout_x8,&UNK_00912139,0x2b,uVar2,uVar1);
    FUN_00657c64();
    return;
  }
  return;
}



/* Entry: 00670f60; end: 00670fb7;  */

void FUN_00670f60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  long unaff_x21;
  undefined8 uStack_100;
  
  func_0x00673fac();
  func_0x006759cc();
  func_0x00675678(*(undefined4 *)(unaff_x21 + 0x1c));
  func_0x006759c4();
  func_0x00675530();
  func_0x0067488c();
  func_0x00675a04();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00674388(uStack_100);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00576604();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006747d8();
    func_0x00674f1c();
    func_0x0067539c();
    uVar1 = extraout_x13;
    uVar2 = extraout_x12;
    if (in_NG == in_OV) {
      uVar1 = extraout_x10;
      uVar2 = extraout_x9;
    }
    func_0x006752d8(extraout_x8,&UNK_00912139,0x2b,uVar2,uVar1);
    FUN_00657c64();
    return;
  }
  return;
}



/* Entry: 00670fb8; end: 00671023;  */

void FUN_00670fb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  undefined8 in_stack_00000010;
  
  func_0x00674388(in_stack_00000010);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00576604();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006747d8();
    func_0x00674f1c();
    func_0x0067539c();
    uVar1 = extraout_x13;
    uVar2 = extraout_x12;
    if (in_NG == in_OV) {
      uVar1 = extraout_x10;
      uVar2 = extraout_x9;
    }
    func_0x006752d8(extraout_x8,&UNK_00912139,0x2b,uVar2,uVar1);
    FUN_00657c64();
    return;
  }
  return;
}



/* Entry: 00671024; end: 00671047;  */

void FUN_00671024(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  
  func_0x0067539c();
  uVar1 = extraout_x13;
  uVar2 = extraout_x12;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    uVar2 = extraout_x9;
  }
  func_0x006752d8(extraout_x8,&UNK_00912139,0x2b,uVar2,uVar1);
  FUN_00657c64();
  return;
}



/* Entry: 00671048; end: 0067106b;  */

void FUN_00671048(void)

{
  func_0x006752d8();
  FUN_00657c64();
  return;
}



/* Entry: 0067106c; end: 006710db;  */

void FUN_0067106c(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  undefined8 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_006710dc();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_0066e1a4();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      puVar1 = (undefined8 *)(unaff_x25 + param_1 * 0x20);
      uVar2 = *unaff_x20;
      uVar4 = unaff_x20[3];
      uVar3 = unaff_x20[2];
      puVar1[1] = unaff_x20[1];
      *puVar1 = uVar2;
      puVar1[3] = uVar4;
      puVar1[2] = uVar3;
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 006710dc; end: 00671147;  */

void FUN_006710dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_0066e1a4();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      puVar1 = (undefined8 *)(unaff_x25 + param_1 * 0x20);
      uVar2 = *unaff_x20;
      uVar4 = unaff_x20[3];
      uVar3 = unaff_x20[2];
      puVar1[1] = unaff_x20[1];
      *puVar1 = uVar2;
      puVar1[3] = uVar4;
      puVar1[2] = uVar3;
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 00671148; end: 0067114f;  */

void FUN_00671148(void)

{
  func_0x00675d0c();
  return;
}



/* Entry: 00671150; end: 00671227;  */

void FUN_00671150(void)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x9;
  undefined8 extraout_x12;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00673fac();
  func_0x00674a0c();
  func_0x006759c4();
  func_0x00674e14(*(undefined8 *)(unaff_x19 + 8));
  uVar1 = extraout_x12;
  if (in_NG == in_OV) {
    uVar1 = extraout_x9;
  }
  func_0x00675530();
  FUN_00670fb8();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006741a4();
  func_0x00674e14(*unaff_x20);
  func_0x00674b68();
  func_0x006757b4(uVar1,&UNK_00912198,0x23);
  func_0x0067406c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006752d8();
    FUN_00659414();
    return;
  }
  return;
}



/* Entry: 00671228; end: 0067124b;  */

void FUN_00671228(void)

{
  func_0x006752d8();
  FUN_00659414();
  return;
}



/* Entry: 0067124c; end: 00671277;  */

void FUN_0067124c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  
  func_0x0067539c();
  uVar1 = extraout_x13;
  uVar2 = extraout_x12;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    uVar2 = extraout_x9;
  }
  func_0x006752d8(extraout_x8,&UNK_009121bc,0x1c,uVar2,uVar1);
  FUN_00657c64();
  return;
}



/* Entry: 00671278; end: 0067134f;  */

void FUN_00671278(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack_238;
  
  func_0x00673fac();
  func_0x00674a0c();
  func_0x00675678(*(undefined4 *)(unaff_x21 + 4));
  func_0x006759c4();
  func_0x00675530();
  func_0x0067488c();
  FUN_00670fb8();
  func_0x0067406c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673fac();
    func_0x00674a0c();
    func_0x00675678(*(undefined4 *)(unaff_x21 + 4));
    func_0x006759c4();
    func_0x00675530();
    func_0x0067488c();
    plVar1 = unaff_x20;
    FUN_00670fb8();
    func_0x0067406c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      lVar2 = extraout_x8;
      func_0x006743c8(extraout_x8,&UNK_00912260,0x69,*(ulong *)(*plVar1 + 0x18) & 0xfffffffffffffffc
                     );
      func_0x00676c60();
      func_0x00674a9c();
      FUN_0056189c();
      func_0x00674120(uStack_238);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00673fc4();
      func_0x00674f04();
      if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
        func_0x00674f2c();
        if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
          func_0x00674668();
        }
        else {
          func_0x0067452c();
          FUN_0067142c();
        }
        func_0x0067444c();
      }
      func_0x00673eb4();
      func_0x00673f78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00676210();
        func_0x00674364();
        FUN_006714f0();
        func_0x00674f44();
        for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
          if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
            func_0x00674cfc();
            FUN_006714a0();
            func_0x00674324();
            func_0x00673efc((uint)unaff_x21 & 0x7f);
            lVar2 = unaff_x25 + lVar2 * 0x40;
            func_0x006714b4(lVar2,unaff_x20);
          }
          unaff_x20 = unaff_x20 + 8;
        }
        if (unaff_x23 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 00671350; end: 00671373;  */

void FUN_00671350(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack_18;
  
  func_0x006743c8(param_1,&UNK_00912260,0x69,*(ulong *)(*param_2 + 0x18) & 0xfffffffffffffffc);
  func_0x00676c60();
  func_0x00674a9c();
  FUN_0056189c();
  func_0x00674120(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_0067142c();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x00674364();
  FUN_006714f0();
  func_0x00674f44();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_006714a0();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      param_1 = unaff_x25 + param_1 * 0x40;
      func_0x006714b4(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 00671374; end: 006713b3;  */

void FUN_00671374(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack_18;
  
  func_0x006743c8();
  func_0x00676c60();
  func_0x00674a9c();
  FUN_0056189c();
  func_0x00674120(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_0067142c();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x00674364();
  FUN_006714f0();
  func_0x00674f44();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_006714a0();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      param_1 = unaff_x25 + param_1 * 0x40;
      func_0x006714b4(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 006713b4; end: 0067142b;  */

void FUN_006713b4(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_0067142c();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x00674364();
  FUN_006714f0();
  func_0x00674f44();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_006714a0();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      param_1 = unaff_x25 + param_1 * 0x40;
      func_0x006714b4(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 0067142c; end: 0067149f;  */

void FUN_0067142c(long param_1)

{
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00676210();
  func_0x00674364();
  FUN_006714f0();
  func_0x00674f44();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_006714a0();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      param_1 = unaff_x25 + param_1 * 0x40;
      func_0x006714b4(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 006714a0; end: 006714ef;  */

void FUN_006714a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  func_0x00675160();
  auStack_20[0] = param_2;
  func_0x00490290(auStack_20);
  return;
}



/* Entry: 006714f0; end: 0067151f;  */

void FUN_006714f0(undefined8 param_1)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x00674b94();
  func_0x006756cc(param_1,unaff_x20 + extraout_x8 * 0x40);
  func_0x006748bc();
  FUN_00537d24(param_1,0x40);
  return;
}



/* Entry: 00671520; end: 0067152f;  */

void FUN_00671520(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  func_0x00675160();
  auStack_20[0] = param_2;
  func_0x00490290(auStack_20);
  return;
}



/* Entry: 00671530; end: 006716b3;  */

undefined * FUN_00671530(long *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long *unaff_x19;
  long *unaff_x20;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 auStack_c8 [48];
  undefined **ppuStack_98;
  long lStack_90;
  ulong uStack_88;
  code *pcStack_80;
  long lStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code *pcStack_40;
  
  func_0x00674188();
  bVar1 = *(char *)(*param_1 + 0x20) == '\0';
  puStack_108 = &UNK_009122ca;
  if (bVar1) {
    puStack_108 = &UNK_009122d1;
  }
  uStack_100 = 6;
  if (bVar1) {
    uStack_100 = 7;
  }
  param_1 = param_1 + 1;
  uVar2 = *(char *)(*param_1 + 0x20) == '\0';
  puStack_118 = &UNK_009122ca;
  if ((bool)uVar2) {
    puStack_118 = &UNK_009122d1;
  }
  uStack_110 = 6;
  if ((bool)uVar2) {
    uStack_110 = 7;
  }
  func_0x006759a0();
  func_0x00675e24();
  uVar3 = *unaff_x20 + 8;
  lVar6 = *param_1 + 8;
  FUN_00459c38();
  if ((uVar3 & 1) == 0) {
    ppuVar4 = (undefined **)&UNK_009122d9;
    FUN_00532c74();
    ppuStack_98 = ppuVar4;
    lStack_90 = lVar6;
    func_0x00674108();
    puVar5 = &UNK_009122dd;
    FUN_00532c74();
    puStack_f8 = puVar5;
    lStack_f0 = lVar6;
    FUN_00575ddc(auStack_148,&ppuStack_98,auStack_c8,&puStack_f8);
    FUN_004575b8(auStack_130,auStack_148);
    func_0x00674d6c();
  }
  uStack_88 = *(ulong *)(unaff_x20[2] + 0x18) & 0xfffffffffffffffc;
  uStack_58 = *(ulong *)(*(long *)unaff_x20[1] + 0x18) & 0xfffffffffffffffc;
  lStack_78 = *unaff_x20 + 8;
  ppuStack_98 = &puStack_108;
  lStack_90 = 0x561238;
  pcStack_80 = FUN_00561110;
  pcStack_70 = FUN_00561110;
  ppuStack_68 = &puStack_118;
  uStack_60 = 0x561238;
  pcStack_50 = FUN_00561110;
  puStack_48 = auStack_130;
  pcStack_40 = FUN_00561110;
  puVar5 = &UNK_009122e0;
  FUN_0056189c(&UNK_009122e0,0x56,&ppuStack_98,6);
  func_0x00674d88();
  func_0x0067406c();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00674cf0();
    func_0x00674bc8();
    func_0x006751dc();
    lVar6 = 0;
    puVar5 = (undefined *)0x0;
    do {
      if ((undefined *)((unaff_x19[1] - *unaff_x19) / 0x18) <= puVar5) {
        func_0x00674f10();
        func_0x0045a4f0();
        return (undefined *)((unaff_x19[1] - *unaff_x19) / 0x18 + -1);
      }
      if (puVar5 != (undefined *)0x1) {
        uVar3 = *unaff_x19 + lVar6;
        FUN_00459c38(uVar3,param_1);
        if ((uVar3 & 1) != 0) {
          return puVar5;
        }
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while( true );
  }
  return puVar5;
}



/* Entry: 006716b4; end: 00671737;  */

ulong FUN_006716b4(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong uVar2;
  
  func_0x006751dc();
  uVar2 = 0;
  while( true ) {
    uVar1 = *unaff_x19;
    if ((ulong)((long)(unaff_x19[1] - uVar1) / 0x18) <= uVar2) {
      func_0x00674f10();
      func_0x0045a4f0();
      return (long)(unaff_x19[1] - *unaff_x19) / 0x18 - 1;
    }
    if ((uVar2 != 1) && (FUN_00459c38(), (uVar1 & 1) != 0)) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* Entry: 00671738; end: 0067194b;  */

void FUN_00671738(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined *puVar2;
  code *pcVar3;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  undefined8 extraout_x11;
  undefined8 *unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 ****ppppuStack_2e0;
  code *pcStack_2d8;
  undefined1 ****ppppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 ***pppuStack_220;
  undefined8 uStack_218;
  undefined1 **ppuStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  func_0x00673f44();
  puVar2 = &UNK_00912337;
  FUN_00532c74();
  puStack_58 = puVar2;
  uStack_50 = param_2;
  func_0x006753ec(*unaff_x19);
  func_0x00673f90();
  func_0x00674c70();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_98 = 0x671784;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00673f44();
  FUN_00532c74(&UNK_0091237f);
  func_0x00674438();
  func_0x00673f90();
  FUN_00532c74(&UNK_0091238e);
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_158 = 0x6717d8;
    ppuStack_160 = &puStack_a0;
    func_0x00673f44();
    FUN_00532c74(&UNK_009123a3);
    func_0x00674d74();
    func_0x00674174(*(ulong *)(extraout_x8 + 0x30) & 0xfffffffffffffffc);
    uVar1 = extraout_x11;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_00;
    }
    func_0x00674408(uVar1);
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_218 = 0x67182c;
      pppuStack_220 = &ppuStack_160;
      func_0x0067414c();
      func_0x0066853c(&uStack_268,0x1fffffff);
      FUN_00671048(extraout_x8_01,&UNK_009123c2,0x28,uStack_268,uStack_260);
      func_0x00673f78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uStack_278 = 0x67187c;
        ppppuStack_280 = &pppuStack_220;
        func_0x00673f44();
        func_0x00675134();
        func_0x006753ec(*(undefined8 *)(extraout_x8_01 + 8));
        func_0x00674174();
        FUN_00671228();
        func_0x00673f78();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          pcStack_2d8 = (code *)0x6718dc;
          ppppuStack_2e0 = &ppppuStack_280;
          func_0x00673fc4();
          func_0x00674f04();
          if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
            func_0x00674f2c();
            if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
              func_0x00674668();
            }
            else {
              func_0x0067452c();
              FUN_0067194c();
            }
            func_0x0067444c();
          }
          func_0x00673eb4();
          func_0x00673f78();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            pcVar3 = FUN_0067194c;
            func_0x00676210();
            ppppuStack_2e0 = &ppppuStack_2e0;
            pcStack_2d8 = pcVar3;
            func_0x006742e0();
            func_0x00674f44();
            while (unaff_x23 != unaff_x24) {
              if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
                func_0x00674cfc();
                FUN_006719b4();
                func_0x00674324();
                func_0x00673efc(unaff_w21 & 0x7f);
                func_0x00675c28();
                func_0x006719c8();
              }
              func_0x00675698();
            }
            if (unaff_x23 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
            return;
          }
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 0067194c; end: 006719b3;  */

void FUN_0067194c(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_006719b4();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      func_0x00675c28();
      func_0x006719c8();
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 006719b4; end: 00671a07;  */

void FUN_006719b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  func_0x00675160();
  auStack_20[0] = param_2;
  func_0x00490290(auStack_20);
  return;
}



/* Entry: 00671a08; end: 00671a5f;  */

void FUN_00671a08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  long unaff_x21;
  undefined1 auStack_98 [104];
  
  func_0x00673fac();
  func_0x006759cc();
  func_0x0066853c(auStack_98,*(undefined4 *)(unaff_x21 + 0x1c));
  func_0x006759c4();
  func_0x00675530();
  func_0x0067488c();
  func_0x00675a04();
  func_0x0067406c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0067539c();
    uVar1 = extraout_x13;
    uVar2 = extraout_x12;
    if (in_NG == in_OV) {
      uVar1 = extraout_x10;
      uVar2 = extraout_x9;
    }
    func_0x006752d8(extraout_x8,&UNK_009124ea,0x2b,uVar2,uVar1);
    FUN_00657c64();
    return;
  }
  return;
}



/* Entry: 00671a60; end: 00671a83;  */

void FUN_00671a60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  
  func_0x0067539c();
  uVar1 = extraout_x13;
  uVar2 = extraout_x12;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    uVar2 = extraout_x9;
  }
  func_0x006752d8(extraout_x8,&UNK_009124ea,0x2b,uVar2,uVar1);
  FUN_00657c64();
  return;
}



/* Entry: 00671a84; end: 00671adb;  */

void FUN_00671a84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  
  func_0x006741a4();
  func_0x00674e14(*param_1);
  func_0x00674b68();
  func_0x006757b4();
  func_0x0067406c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0067539c();
    uVar1 = extraout_x13;
    uVar2 = extraout_x12;
    if (in_NG == in_OV) {
      uVar1 = extraout_x10;
      uVar2 = extraout_x9;
    }
    func_0x006752d8(extraout_x8,&UNK_0091253f,0x1c,uVar2,uVar1);
    FUN_00657c64();
    return;
  }
  return;
}



/* Entry: 00671adc; end: 00671b07;  */

void FUN_00671adc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  
  func_0x0067539c();
  uVar1 = extraout_x13;
  uVar2 = extraout_x12;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    uVar2 = extraout_x9;
  }
  func_0x006752d8(extraout_x8,&UNK_0091253f,0x1c,uVar2,uVar1);
  FUN_00657c64();
  return;
}



/* Entry: 00671b08; end: 00671b9f;  */

void FUN_00671b08(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  
  func_0x00674188();
  FUN_00532c74();
  func_0x00674bf0();
  func_0x00673fe0();
  FUN_00532c74(&UNK_009125e0);
  func_0x0067638c();
  func_0x00673fe0();
  puVar3 = (undefined8 *)&UNK_009125f9;
  FUN_00532c74();
  puVar5 = *(undefined8 **)(**(long **)(unaff_x20 + 0x10) + 8);
  puVar4 = &UNK_009116da;
  func_0x00674784();
  FUN_00671ba0();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0067414c();
  uStack_1c8 = puVar3[1];
  uStack_1d0 = *puVar3;
  uStack_1b8 = param_2[1];
  uStack_1c0 = *param_2;
  uStack_1a8 = param_3[1];
  uStack_1b0 = *param_3;
  uStack_198 = param_4[1];
  uStack_1a0 = *param_4;
  uStack_188 = param_5[1];
  uStack_190 = *param_5;
  bVar1 = *(byte *)((long)puVar5 + 0x17);
  uVar2 = bVar1 == 0;
  uStack_178 = puVar5[1];
  puStack_180 = (undefined8 *)*puVar5;
  if (-1 < (char)bVar1) {
    uStack_178 = (ulong)bVar1;
    puStack_180 = puVar5;
  }
  FUN_00532c74();
  puStack_170 = puVar4;
  puStack_168 = param_2;
  FUN_00575fc4(extraout_x8,&uStack_1d0,7);
  func_0x00673f78();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0067539c();
    func_0x0067539c();
    func_0x006752d8(extraout_x8_00,&UNK_0091260d,0x82);
    FUN_00659414();
    return;
  }
  return;
}



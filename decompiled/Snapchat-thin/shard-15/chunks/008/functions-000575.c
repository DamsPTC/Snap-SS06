/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd0418c; end: 10bd041f3;  */

void FUN_10bd0418c(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107c3a68c();
      FUN_10bd041f4();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      func_0x000107c3a6d0();
      func_0x00010bd0420c();
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd041f4; end: 10bd0421f;  */

void FUN_10bd041f4(undefined8 param_1,undefined8 param_2)

{
  char in_NG;
  char in_OV;
  undefined8 extraout_x10;
  undefined8 auStack_20 [2];
  
  func_0x000107c3a6b0();
  auStack_20[0] = extraout_x10;
  if (in_NG == in_OV) {
    auStack_20[0] = param_2;
  }
  func_0x000100062cf8(auStack_20);
  return;
}



/* Entry: 10bd04220; end: 10bd04293;  */

void FUN_10bd04220(ulong param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w10;
  
  func_0x00010bd0a230();
  iVar1 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x00010bd0ad60(), iVar1 == 0)) {
    FUN_10bced964(*param_2);
    do {
      func_0x00010bd0b9c4();
    } while (extraout_w10 != 0);
    func_0x00010bd0a78c();
    if ((bool)in_ZR) {
      func_0x00010bd0a914();
    }
  }
  return;
}



/* Entry: 10bd04294; end: 10bd042ab;  */

void FUN_10bd04294(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010bcec704(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd042ac; end: 10bd042c7;  */

void FUN_10bd042ac(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010bcec704(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd042c8; end: 10bd042e7;  */

void FUN_10bd042c8(void)

{
  func_0x00010bd0bba0();
  FUN_10bd042e8();
  return;
}



/* Entry: 10bd042e8; end: 10bd042ff;  */

void FUN_10bd042e8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10bd12c58(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd04300; end: 10bd0431b;  */

void FUN_10bd04300(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10bd12c58(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0431c; end: 10bd04347;  */

long FUN_10bd0431c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  func_0x00010bd0a704();
  uVar4 = unaff_x19[1];
  func_0x000107c284ac();
  func_0x00010bd0ab30();
  func_0x00010bd0b250();
  func_0x00010bd0a9fc();
  lVar5 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  func_0x00010bd0adb8(*param_1 >> 0xc ^ uVar4 >> 7);
  uVar4 = extraout_x8;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    func_0x00010bd0addc();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      uVar6 = (extraout_x8_00 & 0x8080808080808080) >> 7;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar4 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar2;
      puVar3 = (undefined1 *)register0x00000008;
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      FUN_10bcddd64(&stack0x00000000,uVar1 + uVar6 * 0x18);
      if ((int)puVar3 != 0) {
        return *unaff_x19 + uVar6;
      }
      func_0x00010bd0bdc0();
    }
    func_0x00010bd0a514();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar4 = lVar5 + uVar4;
  }
  return 0;
}



/* Entry: 10bd04348; end: 10bd043f3;  */

long FUN_10bd04348(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  
  uVar5 = (undefined4)((ulong)param_3 >> 0x20);
  uVar4 = (undefined4)param_3;
  func_0x00010bd0b250();
  func_0x00010bd0a9fc();
  lVar6 = 0;
  uVar1 = param_1[2];
  func_0x00010bd0adb8(*param_1 >> 0xc ^ CONCAT44(uVar5,uVar4) >> 7);
  uVar7 = extraout_x8;
  while( true ) {
    uVar7 = uVar7 & uVar1;
    func_0x00010bd0addc();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      uVar2 = (extraout_x8_00 & 0x8080808080808080) >> 7;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      iVar3 = (int)&stack0x00000000;
      FUN_10bcddd64();
      if (iVar3 != 0) {
        return *unaff_x19 + (uVar7 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar1);
      }
      func_0x00010bd0bdc0();
    }
    func_0x00010bd0a514();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  }
  return 0;
}



/* Entry: 10bd043f4; end: 10bd0440b;  */

void FUN_10bd043f4(long param_1)

{
  if (param_1 != 0) {
    FUN_10bcedb7c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0440c; end: 10bd0449f;  */

long FUN_10bd0440c(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x10;
  long lVar2;
  long extraout_x10_00;
  ulong extraout_x11;
  ulong uVar3;
  ulong extraout_x11_00;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar4;
  ulong extraout_x13_00;
  ulong uVar5;
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
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  
  func_0x00010bd0a704();
  FUN_10bd044a0();
  func_0x00010bd0c6b8(0);
  uVar6 = 0x8080808080808080;
  lVar1 = extraout_x8;
  lVar2 = extraout_x10;
  uVar3 = extraout_x11;
  uVar4 = extraout_x13;
  while( true ) {
    uVar4 = uVar4 & uVar3;
    uVar8 = *(undefined8 *)(lVar2 + uVar4);
    uVar5 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) == in_register_00005007),
                     CONCAT16(-((char)((ulong)uVar8 >> 0x30) == in_register_00005006),
                              CONCAT15(-((char)((ulong)uVar8 >> 0x28) == in_register_00005005),
                                       CONCAT14(-((char)((ulong)uVar8 >> 0x20) ==
                                                 in_register_00005004),
                                                CONCAT13(-((char)((ulong)uVar8 >> 0x18) ==
                                                          in_register_00005003),
                                                         CONCAT12(-((char)((ulong)uVar8 >> 0x10) ==
                                                                   in_register_00005002),
                                                                  CONCAT11(-((char)((ulong)uVar8 >>
                                                                                   8) ==
                                                                            in_register_00005001),
                                                                           -((char)uVar8 == in_b0)))
                                                        ))))) & 0x8080808080808080;
    while (uVar5 != 0) {
      func_0x00010bd0bc44();
      if (*(long *)(extraout_x12 + (extraout_x15 & extraout_x11_00) * 8) == extraout_x9) {
        return extraout_x10_00 + (extraout_x15 & extraout_x11_00);
      }
      uVar4 = extraout_x13_00;
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x10_00;
      uVar3 = extraout_x11_00;
      uVar5 = extraout_x14 - 1 & extraout_x14;
    }
    bVar7 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar8 >> 0x38) == (char)((ulong)uVar6 >> 0x38)),
                                CONCAT16(-((char)((ulong)uVar8 >> 0x30) ==
                                          (char)((ulong)uVar6 >> 0x30)),
                                         CONCAT15(-((char)((ulong)uVar8 >> 0x28) ==
                                                   (char)((ulong)uVar6 >> 0x28)),
                                                  CONCAT14(-((char)((ulong)uVar8 >> 0x20) ==
                                                            (char)((ulong)uVar6 >> 0x20)),
                                                           CONCAT13(-((char)((ulong)uVar8 >> 0x18)
                                                                     == (char)((ulong)uVar6 >> 0x18)
                                                                     ),CONCAT12(-((char)((ulong)
                                                  uVar8 >> 0x10) == (char)((ulong)uVar6 >> 0x10)),
                                                  CONCAT11(-((char)((ulong)uVar8 >> 8) ==
                                                            (char)((ulong)uVar6 >> 8)),
                                                           -((char)uVar8 == (char)uVar6)))))))),1);
    if ((bVar7 & 1) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
  return 0;
}



/* Entry: 10bd044a0; end: 10bd044b7;  */

void FUN_10bd044a0(void)

{
  func_0x00010bd0b8a4();
  return;
}



/* Entry: 10bd044b8; end: 10bd044cf;  */

void FUN_10bd044b8(void)

{
  func_0x00010bd0c01c(&PTR_LOOP_110c8acd8);
  return;
}



/* Entry: 10bd044d0; end: 10bd044eb;  */

void FUN_10bd044d0(void)

{
  func_0x00010bd0c01c();
  return;
}



/* Entry: 10bd044ec; end: 10bd045db;  */

void FUN_10bd044ec(void)

{
  ulong uVar1;
  ulong extraout_x10;
  long extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong extraout_x13_00;
  long unaff_x19;
  
  func_0x00010bd0a5a0();
  FUN_10bd044a0();
  func_0x00010bd0a7a0();
  do {
    func_0x00010bd0ae3c();
    for (uVar2 = extraout_x13; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      uVar1 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      if (*(long *)(*(long *)(unaff_x19 + 8) +
                   (extraout_x12 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                   extraout_x10) * 8) == extraout_x11) {
        return;
      }
    }
    func_0x00010bd0bf0c();
  } while ((extraout_x13_00 & 1) == 0);
  func_0x00010bd04568();
  return;
}



/* Entry: 10bd045dc; end: 10bd04653;  */

void FUN_10bd045dc(long param_1)

{
  char *pcVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  char *unaff_x22;
  long unaff_x23;
  long lVar2;
  long lVar3;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a33c();
  func_0x000107c28444();
  lVar2 = *(long *)(unaff_x19 + 8);
  pcVar1 = unaff_x22;
  for (lVar3 = unaff_x23; lVar3 != 0; lVar3 = lVar3 + -1) {
    if (-1 < *pcVar1) {
      func_0x000107c3a68c();
      FUN_10bd044a0();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      *(undefined8 *)(lVar2 + param_1 * 8) = *unaff_x20;
    }
    pcVar1 = pcVar1 + 1;
    unaff_x20 = unaff_x20 + 1;
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 10bd04654; end: 10bd04657;  */

void FUN_10bd04654(void)

{
  func_0x00010bd0b8a4();
  return;
}



/* Entry: 10bd04658; end: 10bd046d7;  */

void FUN_10bd04658(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x00010bd0a4f4();
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bd0b414();
    }
    func_0x00010bd0468c();
    *(ulong *)(unaff_x19 + 0x60) = uVar1;
  }
  return;
}



/* Entry: 10bd046d8; end: 10bd046df;  */

void FUN_10bd046d8(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_2;
  uVar3 = param_3;
  FUN_10bcddc50();
  if ((uVar3 & 1) != 0) {
    func_0x000107c27958(*(long *)(*param_2 + 8) + lVar2 * 0x18,param_3);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x18;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 10bd046e0; end: 10bd0474f;  */

void FUN_10bd046e0(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_10bcddc50();
  if ((param_3 & 1) != 0) {
    func_0x000107c27958(*(long *)(*param_2 + 8) + lVar2 * 0x18,param_4);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x18;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 10bd04750; end: 10bd04963;  */

void FUN_10bd04750(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x400;
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bd0b414();
    }
    func_0x00010bd0468c();
    *(ulong *)(param_1 + 0x98) = uVar1;
  }
  return;
}



/* Entry: 10bd04964; end: 10bd049b7;  */

void FUN_10bd04964(undefined8 param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x00010bd0a30c();
  puVar2 = (undefined8 *)*param_3;
  func_0x000107c2b998();
  func_0x000107c3a64c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar2;
  func_0x00010bd0a9fc();
  FUN_10bd044ec();
  lVar3 = unaff_x20[1];
  if (((ulong)puVar1 & 1) != 0) {
    *(undefined8 *)(lVar3 + param_2 * 8) = *puVar2;
  }
  *unaff_x19 = *unaff_x20 + param_2;
  unaff_x19[1] = lVar3 + param_2 * 8;
  *(char *)(unaff_x19 + 2) = (char)puVar1;
  return;
}



/* Entry: 10bd049b8; end: 10bd04a07;  */

void FUN_10bd049b8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  
  puVar1 = param_3;
  func_0x00010bd0a9fc();
  FUN_10bd044ec();
  lVar2 = unaff_x20[1];
  if (((ulong)puVar1 & 1) != 0) {
    *(undefined8 *)(lVar2 + param_2 * 8) = *param_3;
  }
  *unaff_x19 = *unaff_x20 + param_2;
  unaff_x19[1] = lVar2 + param_2 * 8;
  *(char *)(unaff_x19 + 2) = (char)puVar1;
  return;
}



/* Entry: 10bd04a08; end: 10bd04a27;  */

void FUN_10bd04a08(void)

{
  func_0x00010bd0bba0();
  FUN_10bd04a28();
  return;
}



/* Entry: 10bd04a28; end: 10bd04a3f;  */

void FUN_10bd04a28(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010bcf5674(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd04a40; end: 10bd04a5b;  */

void FUN_10bd04a40(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010bcf5674(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd04a5c; end: 10bd04a6b;  */

void FUN_10bd04a5c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = param_1[1];
  FUN_10bcf1c4c(&uStack_28,lVar1,*(undefined8 *)(lVar1 + 0x28),param_1[2],
                *(undefined8 *)(lVar1 + 0x10));
  FUN_10bcf1cac(uStack_28,param_1[3]);
  *(undefined8 *)*param_1 = uStack_28;
  FUN_10bd04a08(&uStack_28);
  return;
}



/* Entry: 10bd04a6c; end: 10bd04ab3;  */

void FUN_10bd04a6c(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  
  FUN_10bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  plVar2 = (long *)&UNK_10f833277;
  func_0x000107c284bc();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd0bcb4();
  func_0x00010bd0a30c();
  lVar4 = *plVar2;
  func_0x00010bd0a3e4();
  func_0x000107c284bc();
  func_0x00010bd0a0f8(*(undefined8 *)(*(long *)(lVar4 + 0x118) + 8));
  func_0x000107c284bc();
  uVar1 = *(char *)(lVar4 + 0xa7) == '\0';
  puVar3 = (undefined8 *)&UNK_10f8332c2;
  func_0x000107c284bc();
  func_0x00010bd0a6b0();
  func_0x000107c3a64c(extraout_x8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010bd0c370();
    lVar4 = puVar3[1];
    func_0x00010bd0a3e4();
    func_0x00010bd0a0f8(*puVar3);
    func_0x000107c284bc(&UNK_10f8332f7);
    func_0x000107c284bc(lVar4 + 0x138);
    func_0x00010bd0b808();
    func_0x00010bd0b1b4();
    return;
  }
  return;
}



/* Entry: 10bd04ab4; end: 10bd04c3f;  */

void FUN_10bd04ab4(long *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  
  func_0x00010bd0bcb4();
  func_0x00010bd0a30c();
  lVar3 = *param_1;
  func_0x00010bd0a3e4();
  func_0x000107c284bc();
  func_0x00010bd0a0f8(*(undefined8 *)(*(long *)(lVar3 + 0x118) + 8));
  func_0x000107c284bc();
  uVar1 = *(char *)(lVar3 + 0xa7) == '\0';
  puVar2 = (undefined8 *)&UNK_10f8332c2;
  func_0x000107c284bc();
  func_0x00010bd0a6b0();
  func_0x000107c3a64c(extraout_x8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010bd0c370();
    lVar3 = puVar2[1];
    func_0x00010bd0a3e4();
    func_0x00010bd0a0f8(*puVar2);
    func_0x000107c284bc(&UNK_10f8332f7);
    func_0x000107c284bc(lVar3 + 0x138);
    func_0x00010bd0b808();
    func_0x00010bd0b1b4();
    return;
  }
  return;
}



/* Entry: 10bd04c40; end: 10bd04cb3;  */

void FUN_10bd04c40(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

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
  
  func_0x00010bd0bbe4(in_stack_00000018);
  func_0x00010bd0aaac();
  func_0x00010bd0c52c();
  func_0x000107c284bc(&UNK_10f833383);
  func_0x00010bd0a6b0();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a688();
  Hint_Prefetch(*param_2,0,2,0);
  FUN_10bcfe660(*param_2,param_3);
  func_0x00010bd0aba8(*unaff_x21);
  do {
    func_0x00010bd0bd0c();
    uVar2 = extraout_x13;
    while (uVar2 != 0) {
      func_0x00010bd0b888();
      if (extraout_x14 == unaff_x20) goto LAB_10bd04d28;
      uVar2 = extraout_x13_00 - 1 & extraout_x13_00;
    }
    func_0x00010bd0b32c();
  } while ((extraout_x12 & 1) == 0);
  puVar1 = unaff_x21;
  FUN_10bd04d4c();
  *(long *)(unaff_x21[1] + (long)puVar1 * 8) = unaff_x20;
LAB_10bd04d28:
  func_0x00010bd0c3d8();
  return;
}



/* Entry: 10bd04cb4; end: 10bd04d4b;  */

void FUN_10bd04cb4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong extraout_x12;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar2;
  long extraout_x14;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x000107c3a688();
  Hint_Prefetch(*param_2,0,2,0);
  FUN_10bcfe660(*param_2,param_3);
  func_0x00010bd0aba8(*unaff_x21);
  do {
    func_0x00010bd0bd0c();
    uVar2 = extraout_x13;
    while (uVar2 != 0) {
      func_0x00010bd0b888();
      if (extraout_x14 == unaff_x20) goto LAB_10bd04d28;
      uVar2 = extraout_x13_00 - 1 & extraout_x13_00;
    }
    func_0x00010bd0b32c();
  } while ((extraout_x12 & 1) == 0);
  puVar1 = unaff_x21;
  FUN_10bd04d4c();
  *(long *)(unaff_x21[1] + (long)puVar1 * 8) = unaff_x20;
LAB_10bd04d28:
  func_0x00010bd0c3d8();
  return;
}



/* Entry: 10bd04d4c; end: 10bd04dbf;  */

void FUN_10bd04d4c(void)

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
  
  func_0x00010bd0a084();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a670();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd04dc0();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a64c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *unaff_x22;
      FUN_10bcfe660(uVar1);
      func_0x000107c3a660();
      func_0x000107c3a638((uint)uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd04dc0; end: 10bd04e27;  */

void FUN_10bd04dc0(void)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *unaff_x22;
      FUN_10bcfe660(uVar1);
      func_0x000107c3a660();
      func_0x000107c3a638((uint)uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd04e28; end: 10bd04eeb;  */

void FUN_10bd04e28(void)

{
  func_0x00010bd0c01c(&PTR_LOOP_110c8acd8);
  return;
}



/* Entry: 10bd04eec; end: 10bd04f6f;  */

long * FUN_10bd04eec(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined1 **ppuVar9;
  long **pplVar10;
  long in_x5;
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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 **ppuStack_730;
  long **pplStack_728;
  long lStack_720;
  code *pcStack_718;
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
  
  FUN_10bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  func_0x00010bd0ad18();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_c8 = 0x10bd04f28;
    puStack_d0 = &stack0xfffffffffffffff0;
    FUN_10bd09f38();
    func_0x00010bd0aac0();
    func_0x00010bd09fc4();
    param_1 = (long *)&UNK_10f8333c4;
    func_0x000107c284bc();
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcStack_188 = FUN_10bd04f70;
      ppuStack_190 = &puStack_d0;
      func_0x00010bd0a10c();
      func_0x00010bd0a3e4();
      lVar7 = *(long *)unaff_x20[1] + 1;
      plStack_1e8 = param_1;
      uStack_1e0 = param_2;
      func_0x000107c27fb4(auStack_2c0,*unaff_x20,lVar7,0xffffffffffffffff);
      func_0x00010bd0abbc();
      puStack_218 = extraout_x10;
      if (in_NG == in_OV) {
        puStack_218 = auStack_2c0;
      }
      puVar4 = &UNK_10f8333da;
      func_0x000107c284bc();
      plVar5 = (long *)*unaff_x20;
      puStack_248 = puVar4;
      lStack_240 = lVar7;
      func_0x00010bd0bf88(auStack_2d8);
      func_0x00010bd0ac0c();
      puStack_278 = extraout_x10_00;
      if (in_NG == in_OV) {
        puStack_278 = auStack_2d8;
      }
      func_0x00010bd0a524();
      plStack_2a8 = plVar5;
      lStack_2a0 = lVar7;
      func_0x00010bd0b33c();
      func_0x00010bd0b1a4();
      func_0x00010bd0aab8();
      func_0x00010bd0aad4();
      func_0x00010bd09ff8();
      if ((bool)in_ZR) {
        return plVar5;
      }
      ___stack_chk_fail();
      func_0x00010bd0aad4();
      func_0x00010bd0a974();
      plVar6 = alStack_420;
      pcStack_2e8 = FUN_10bd05054;
      pppuStack_2f0 = &ppuStack_190;
      func_0x00010bd0a10c();
      func_0x00010bd0a3e4();
      func_0x00010bd0b558();
      func_0x00010bd09fc4();
      plVar5 = (long *)&UNK_10f8333f4;
      func_0x000107c284bc();
      plStack_3a8 = plVar5;
      lStack_3a0 = lVar7;
      if (*plStack_2d0 == 0) {
        func_0x00010bd0b998();
      }
      else {
        lVar7 = *(long *)(*plStack_2d0 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
        plVar5 = plVar6;
      }
      func_0x00010bd0a58c();
      puStack_3d8 = extraout_x10_01;
      if (in_NG == in_OV) {
        puStack_3d8 = (undefined1 *)alStack_420;
      }
      func_0x00010bd0a524();
      plStack_408 = plVar5;
      lStack_400 = lVar7;
      func_0x00010bd0b33c();
      func_0x00010bd0b1a4();
      func_0x00010bd0aaa4();
      func_0x00010bd09ff8();
      if ((bool)in_ZR) {
        return plVar5;
      }
      ___stack_chk_fail();
      param_1 = plVar5;
      func_0x00010bd0a974();
      pcStack_428 = FUN_10bd05108;
      puStack_440 = auStack_2d8;
      plStack_438 = plVar5;
      pppuStack_430 = &pppuStack_2f0;
      FUN_10bd09f38();
      func_0x00010bd0aac0();
      func_0x00010bd09fc4();
      func_0x00010bd0ad18();
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        plVar6 = alStack_620;
        pcStack_4e8 = FUN_10bd05144;
        pppuStack_4f0 = &pppuStack_430;
        func_0x00010bd0a10c();
        func_0x00010bd0a3e4();
        func_0x00010bd0b558();
        func_0x00010bd09fc4();
        plVar5 = (long *)&UNK_10f833413;
        func_0x000107c284bc();
        plStack_5a8 = plVar5;
        lStack_5a0 = lVar7;
        if (*plStack_2d0 == 0) {
          func_0x00010bd0b998();
        }
        else {
          lVar7 = *(long *)(*plStack_2d0 + 8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          plVar5 = plVar6;
        }
        func_0x00010bd0a58c();
        apuStack_5d8[0] = extraout_x10_02;
        if (in_NG == in_OV) {
          apuStack_5d8[0] = (undefined1 *)alStack_620;
        }
        func_0x00010bd0a524();
        plStack_608 = plVar5;
        lStack_600 = lVar7;
        func_0x00010bd0b33c();
        ppuVar9 = apuStack_5d8;
        pplVar10 = &plStack_608;
        func_0x00010bd0b1a4();
        func_0x00010bd0aaa4();
        func_0x00010bd09ff8();
        if ((bool)in_ZR) {
          return plVar5;
        }
        ___stack_chk_fail();
        func_0x00010bd0a974();
        pcStack_628 = FUN_10bd051f8;
        puStack_640 = auStack_2d8;
        plStack_638 = plVar5;
        pppuStack_630 = &pppuStack_4f0;
        FUN_10bd09f38();
        func_0x00010bd0aac0();
        func_0x00010bd09fc4();
        param_1 = (long *)&UNK_10f833456;
        func_0x000107c284bc();
        func_0x00010bd09f78();
        func_0x000107c3a63c();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          pcVar8 = FUN_10bd05240;
          func_0x00010bd0bbbc();
          pppuStack_690 = &pppuStack_630;
          pcStack_688 = pcVar8;
          func_0x00010bd0afbc();
          uVar2 = param_1[1];
          if (uVar2 < (ulong)param_1[2]) {
            func_0x00010bd0b808();
            FUN_10bd05418();
            lVar12 = uVar2 + 0x58;
          }
          else {
            lVar12 = uVar2 - *plVar5;
            if (0x2e8ba2e8ba2e8ba < lVar12 / 0x58 + 1U) {
              FUN_10bd05468();
LAB_10bd0537c:
              func_0x000104bd35f4();
              pcStack_6e8 = FUN_10bd05380;
              plVar6 = param_1;
              ppuStack_730 = ppuVar9;
              pplStack_728 = pplVar10;
              lStack_720 = lVar7;
              pcStack_718 = pcVar8;
              lStack_710 = lVar12;
              puStack_708 = auStack_2c0;
              uStack_700 = uVar2;
              plStack_6f8 = plVar5;
              pppuStack_6f0 = &pppuStack_690;
              func_0x000107c27958();
              func_0x000107c27958(plVar6 + 3,&ppuStack_730);
              param_1[6] = 0;
              param_1[7] = 0;
              param_1[8] = 0;
              func_0x000107c27fd4(param_1 + 6,in_x5,in_x5 + in_x6 * 4,(in_x6 << 2) >> 2);
              param_1[9] = in_x7;
              param_1[10] = lStack_6e0;
              return param_1;
            }
            func_0x00010bd0c6cc();
            uVar1 = extraout_x10_03;
            if (0x1745d1745d1745c < extraout_x9) {
              uVar1 = extraout_x8;
            }
            if (uVar1 == 0) {
              lVar7 = 0;
            }
            else {
              if (extraout_x8 < uVar1) goto LAB_10bd0537c;
              lVar7 = uVar1 * 0x58;
              __Znwm();
            }
            lVar12 = lVar7 + lVar12;
            FUN_10bd05418(lVar12,auStack_2c0);
            lVar11 = *plVar5;
            lVar3 = plVar5[1];
            lVar15 = lVar12 + ((lVar3 - lVar11) / -0x58) * 0x58;
            lVar13 = lVar15;
            for (lVar14 = lVar11; lVar14 != lVar3; lVar14 = lVar14 + 0x58) {
              FUN_10bd05418(lVar13,lVar14);
              lVar13 = lVar13 + 0x58;
            }
            for (; lVar11 != lVar3; lVar11 = lVar11 + 0x58) {
              FUN_10bd0011c(lVar11);
            }
            lVar12 = lVar12 + 0x58;
            param_1 = (long *)*plVar5;
            *plVar5 = lVar15;
            plVar5[1] = lVar12;
            plVar5[2] = lVar7 + uVar1 * 0x58;
            if (param_1 != (long *)0x0) {
              __ZdlPv();
            }
          }
          plVar5[1] = lVar12;
          return param_1;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10bd04f70; end: 10bd05053;  */

long * FUN_10bd04f70(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined1 **ppuVar10;
  long **pplVar11;
  long in_x5;
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
  undefined1 **ppuStack_5b0;
  long **pplStack_5a8;
  long lStack_5a0;
  code *pcStack_598;
  long lStack_590;
  undefined1 *puStack_588;
  ulong uStack_580;
  long *plStack_578;
  undefined1 ******ppppppuStack_570;
  code *pcStack_568;
  long lStack_560;
  undefined1 *****pppppuStack_510;
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
  
  func_0x00010bd0a10c();
  func_0x00010bd0a3e4();
  lVar8 = *(long *)unaff_x20[1] + 1;
  uStack_68 = param_1;
  uStack_60 = param_2;
  func_0x000107c27fb4(auStack_140,*unaff_x20,lVar8,0xffffffffffffffff);
  func_0x00010bd0abbc();
  puStack_98 = extraout_x10;
  if (in_NG == in_OV) {
    puStack_98 = auStack_140;
  }
  puVar4 = &UNK_10f8333da;
  func_0x000107c284bc();
  plVar5 = (long *)*unaff_x20;
  puStack_c8 = puVar4;
  lStack_c0 = lVar8;
  func_0x00010bd0bf88(auStack_158);
  func_0x00010bd0ac0c();
  puStack_f8 = extraout_x10_00;
  if (in_NG == in_OV) {
    puStack_f8 = auStack_158;
  }
  func_0x00010bd0a524();
  plStack_128 = plVar5;
  lStack_120 = lVar8;
  func_0x00010bd0b33c();
  func_0x00010bd0b1a4();
  func_0x00010bd0aab8();
  func_0x00010bd0aad4();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x00010bd0aad4();
  func_0x00010bd0a974();
  plVar6 = alStack_2a0;
  pcStack_168 = FUN_10bd05054;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010bd0a10c();
  func_0x00010bd0a3e4();
  func_0x00010bd0b558();
  func_0x00010bd09fc4();
  plVar5 = (long *)&UNK_10f8333f4;
  func_0x000107c284bc();
  plStack_228 = plVar5;
  lStack_220 = lVar8;
  if (*plStack_150 == 0) {
    func_0x00010bd0b998();
  }
  else {
    lVar8 = *(long *)(*plStack_150 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    plVar5 = plVar6;
  }
  func_0x00010bd0a58c();
  puStack_258 = extraout_x10_01;
  if (in_NG == in_OV) {
    puStack_258 = (undefined1 *)alStack_2a0;
  }
  func_0x00010bd0a524();
  plStack_288 = plVar5;
  lStack_280 = lVar8;
  func_0x00010bd0b33c();
  func_0x00010bd0b1a4();
  func_0x00010bd0aaa4();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  func_0x00010bd0a974();
  pcStack_2a8 = FUN_10bd05108;
  puStack_2c0 = auStack_158;
  plStack_2b8 = plVar5;
  ppuStack_2b0 = &puStack_170;
  func_0x00010bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  func_0x00010bd0ad18();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar6 = alStack_4a0;
    pcStack_368 = FUN_10bd05144;
    pppuStack_370 = &ppuStack_2b0;
    func_0x00010bd0a10c();
    func_0x00010bd0a3e4();
    func_0x00010bd0b558();
    func_0x00010bd09fc4();
    plVar5 = (long *)&UNK_10f833413;
    func_0x000107c284bc();
    plStack_428 = plVar5;
    lStack_420 = lVar8;
    if (*plStack_150 == 0) {
      func_0x00010bd0b998();
    }
    else {
      lVar8 = *(long *)(*plStack_150 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      plVar5 = plVar6;
    }
    func_0x00010bd0a58c();
    apuStack_458[0] = extraout_x10_02;
    if (in_NG == in_OV) {
      apuStack_458[0] = (undefined1 *)alStack_4a0;
    }
    func_0x00010bd0a524();
    plStack_488 = plVar5;
    lStack_480 = lVar8;
    func_0x00010bd0b33c();
    ppuVar10 = apuStack_458;
    pplVar11 = &plStack_488;
    func_0x00010bd0b1a4();
    func_0x00010bd0aaa4();
    func_0x00010bd09ff8();
    if ((bool)in_ZR) {
      return plVar5;
    }
    ___stack_chk_fail();
    func_0x00010bd0a974();
    pcStack_4a8 = FUN_10bd051f8;
    puStack_4c0 = auStack_158;
    plStack_4b8 = plVar5;
    ppppuStack_4b0 = &pppuStack_370;
    func_0x00010bd09f38();
    func_0x00010bd0aac0();
    func_0x00010bd09fc4();
    plVar6 = (long *)&UNK_10f833456;
    func_0x000107c284bc();
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar9 = FUN_10bd05240;
      func_0x00010bd0bbbc();
      pppppuStack_510 = &ppppuStack_4b0;
      pcStack_508 = pcVar9;
      func_0x00010bd0afbc();
      uVar2 = plVar6[1];
      if (uVar2 < (ulong)plVar6[2]) {
        func_0x00010bd0b808();
        FUN_10bd05418();
        lVar13 = uVar2 + 0x58;
      }
      else {
        lVar13 = uVar2 - *plVar5;
        if (0x2e8ba2e8ba2e8ba < lVar13 / 0x58 + 1U) {
          FUN_10bd05468();
LAB_10bd0537c:
          func_0x000104bd35f4();
          pcStack_568 = FUN_10bd05380;
          plVar7 = plVar6;
          ppuStack_5b0 = ppuVar10;
          pplStack_5a8 = pplVar11;
          lStack_5a0 = lVar8;
          pcStack_598 = pcVar9;
          lStack_590 = lVar13;
          puStack_588 = auStack_140;
          uStack_580 = uVar2;
          plStack_578 = plVar5;
          ppppppuStack_570 = &pppppuStack_510;
          func_0x000107c27958();
          func_0x000107c27958(plVar7 + 3,&ppuStack_5b0);
          plVar6[6] = 0;
          plVar6[7] = 0;
          plVar6[8] = 0;
          func_0x000107c27fd4(plVar6 + 6,in_x5,in_x5 + in_x6 * 4,(in_x6 << 2) >> 2);
          plVar6[9] = in_x7;
          plVar6[10] = lStack_560;
          return plVar6;
        }
        func_0x00010bd0c6cc();
        uVar1 = extraout_x10_03;
        if (0x1745d1745d1745c < extraout_x9) {
          uVar1 = extraout_x8;
        }
        if (uVar1 == 0) {
          lVar8 = 0;
        }
        else {
          if (extraout_x8 < uVar1) goto LAB_10bd0537c;
          lVar8 = uVar1 * 0x58;
          __Znwm();
        }
        lVar13 = lVar8 + lVar13;
        FUN_10bd05418(lVar13,auStack_140);
        lVar12 = *plVar5;
        lVar3 = plVar5[1];
        lVar16 = lVar13 + ((lVar3 - lVar12) / -0x58) * 0x58;
        lVar14 = lVar16;
        for (lVar15 = lVar12; lVar15 != lVar3; lVar15 = lVar15 + 0x58) {
          FUN_10bd05418(lVar14,lVar15);
          lVar14 = lVar14 + 0x58;
        }
        for (; lVar12 != lVar3; lVar12 = lVar12 + 0x58) {
          FUN_10bd0011c(lVar12);
        }
        lVar13 = lVar13 + 0x58;
        plVar6 = (long *)*plVar5;
        *plVar5 = lVar16;
        plVar5[1] = lVar13;
        plVar5[2] = lVar8 + uVar1 * 0x58;
        if (plVar6 != (long *)0x0) {
          __ZdlPv();
        }
      }
      plVar5[1] = lVar13;
      return plVar6;
    }
  }
  return plVar6;
}



/* Entry: 10bd05054; end: 10bd05107;  */

long * FUN_10bd05054(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 **ppuVar7;
  long **pplVar8;
  long in_x5;
  long in_x6;
  long in_x7;
  ulong extraout_x8;
  ulong extraout_x9;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  ulong extraout_x10_01;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 **ppuStack_450;
  long **pplStack_448;
  undefined8 uStack_440;
  code *pcStack_438;
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
  
  plVar3 = alStack_140;
  func_0x00010bd0a10c();
  func_0x00010bd0a3e4();
  func_0x00010bd0b558();
  func_0x00010bd09fc4();
  plVar5 = (long *)&UNK_10f8333f4;
  func_0x000107c284bc();
  plStack_c8 = plVar5;
  uStack_c0 = param_2;
  if (**(long **)(unaff_x20 + 8) == 0) {
    func_0x00010bd0b998();
  }
  else {
    param_2 = *(undefined8 *)(**(long **)(unaff_x20 + 8) + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    plVar5 = plVar3;
  }
  func_0x00010bd0a58c();
  puStack_f8 = extraout_x10;
  if (in_NG == in_OV) {
    puStack_f8 = (undefined1 *)alStack_140;
  }
  func_0x00010bd0a524();
  plStack_128 = plVar5;
  uStack_120 = param_2;
  func_0x00010bd0b33c();
  func_0x00010bd0b1a4();
  func_0x00010bd0aaa4();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x00010bd0a974();
  func_0x00010bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  func_0x00010bd0ad18();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar5 = alStack_340;
    func_0x00010bd0a10c();
    func_0x00010bd0a3e4();
    func_0x00010bd0b558();
    func_0x00010bd09fc4();
    plVar3 = (long *)&UNK_10f833413;
    func_0x000107c284bc();
    plStack_2c8 = plVar3;
    uStack_2c0 = param_2;
    if (**(long **)(unaff_x20 + 8) == 0) {
      func_0x00010bd0b998();
    }
    else {
      param_2 = *(undefined8 *)(**(long **)(unaff_x20 + 8) + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      plVar3 = plVar5;
    }
    func_0x00010bd0a58c();
    apuStack_2f8[0] = extraout_x10_00;
    if (in_NG == in_OV) {
      apuStack_2f8[0] = (undefined1 *)alStack_340;
    }
    func_0x00010bd0a524();
    plStack_328 = plVar3;
    uStack_320 = param_2;
    func_0x00010bd0b33c();
    ppuVar7 = apuStack_2f8;
    pplVar8 = &plStack_328;
    func_0x00010bd0b1a4();
    func_0x00010bd0aaa4();
    func_0x00010bd09ff8();
    if ((bool)in_ZR) {
      return plVar3;
    }
    ___stack_chk_fail();
    func_0x00010bd0a974();
    func_0x00010bd09f38();
    func_0x00010bd0aac0();
    func_0x00010bd09fc4();
    plVar5 = (long *)&UNK_10f833456;
    func_0x000107c284bc();
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar6 = FUN_10bd05240;
      func_0x00010bd0bbbc();
      func_0x00010bd0afbc();
      uVar1 = plVar5[1];
      if (uVar1 < (ulong)plVar5[2]) {
        func_0x00010bd0b808();
        FUN_10bd05418();
        lVar10 = uVar1 + 0x58;
      }
      else {
        lVar10 = uVar1 - *plVar3;
        if (0x2e8ba2e8ba2e8ba < lVar10 / 0x58 + 1U) {
          FUN_10bd05468();
LAB_10bd0537c:
          func_0x000104bd35f4();
          plVar3 = plVar5;
          ppuStack_450 = ppuVar7;
          pplStack_448 = pplVar8;
          uStack_440 = param_2;
          pcStack_438 = pcVar6;
          lStack_430 = lVar10;
          func_0x000107c27958();
          func_0x000107c27958(plVar3 + 3,&ppuStack_450);
          plVar5[6] = 0;
          plVar5[7] = 0;
          plVar5[8] = 0;
          func_0x000107c27fd4(plVar5 + 6,in_x5,in_x5 + in_x6 * 4,(in_x6 << 2) >> 2);
          plVar5[9] = in_x7;
          plVar5[10] = lStack_400;
          return plVar5;
        }
        func_0x00010bd0c6cc();
        uVar1 = extraout_x10_01;
        if (0x1745d1745d1745c < extraout_x9) {
          uVar1 = extraout_x8;
        }
        if (uVar1 == 0) {
          lVar4 = 0;
        }
        else {
          if (extraout_x8 < uVar1) goto LAB_10bd0537c;
          lVar4 = uVar1 * 0x58;
          __Znwm();
        }
        lVar10 = lVar4 + lVar10;
        FUN_10bd05418(lVar10);
        lVar9 = *plVar3;
        lVar2 = plVar3[1];
        lVar13 = lVar10 + ((lVar2 - lVar9) / -0x58) * 0x58;
        lVar11 = lVar13;
        for (lVar12 = lVar9; lVar12 != lVar2; lVar12 = lVar12 + 0x58) {
          FUN_10bd05418(lVar11,lVar12);
          lVar11 = lVar11 + 0x58;
        }
        for (; lVar9 != lVar2; lVar9 = lVar9 + 0x58) {
          FUN_10bd0011c(lVar9);
        }
        lVar10 = lVar10 + 0x58;
        plVar5 = (long *)*plVar3;
        *plVar3 = lVar13;
        plVar3[1] = lVar10;
        plVar3[2] = lVar4 + uVar1 * 0x58;
        if (plVar5 != (long *)0x0) {
          __ZdlPv();
        }
      }
      plVar3[1] = lVar10;
      return plVar5;
    }
  }
  return plVar5;
}



/* Entry: 10bd05108; end: 10bd05143;  */

long * FUN_10bd05108(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined1 **ppuVar7;
  long **pplVar8;
  long in_x5;
  long in_x6;
  long in_x7;
  ulong extraout_x8;
  ulong extraout_x9;
  undefined1 *extraout_x10;
  ulong extraout_x10_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 **ppuStack_310;
  long **pplStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  long lStack_2f0;
  long lStack_2c0;
  long alStack_200 [3];
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *apuStack_1b8 [6];
  long *plStack_188;
  undefined8 uStack_180;
  
  FUN_10bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  func_0x00010bd0ad18();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar4 = alStack_200;
    func_0x00010bd0a10c();
    func_0x00010bd0a3e4();
    func_0x00010bd0b558();
    func_0x00010bd09fc4();
    plVar3 = (long *)&UNK_10f833413;
    func_0x000107c284bc();
    plStack_188 = plVar3;
    uStack_180 = param_2;
    if (**(long **)(unaff_x20 + 8) == 0) {
      func_0x00010bd0b998();
    }
    else {
      param_2 = *(undefined8 *)(**(long **)(unaff_x20 + 8) + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      plVar3 = plVar4;
    }
    func_0x00010bd0a58c();
    apuStack_1b8[0] = extraout_x10;
    if (in_NG == in_OV) {
      apuStack_1b8[0] = (undefined1 *)alStack_200;
    }
    func_0x00010bd0a524();
    plStack_1e8 = plVar3;
    uStack_1e0 = param_2;
    func_0x00010bd0b33c();
    ppuVar7 = apuStack_1b8;
    pplVar8 = &plStack_1e8;
    func_0x00010bd0b1a4();
    func_0x00010bd0aaa4();
    func_0x00010bd09ff8();
    if ((bool)in_ZR) {
      return plVar3;
    }
    ___stack_chk_fail();
    func_0x00010bd0a974();
    FUN_10bd09f38();
    func_0x00010bd0aac0();
    func_0x00010bd09fc4();
    param_1 = (long *)&UNK_10f833456;
    func_0x000107c284bc();
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar6 = FUN_10bd05240;
      func_0x00010bd0bbbc();
      func_0x00010bd0afbc();
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        func_0x00010bd0b808();
        FUN_10bd05418();
        lVar10 = uVar1 + 0x58;
      }
      else {
        lVar10 = uVar1 - *plVar3;
        if (0x2e8ba2e8ba2e8ba < lVar10 / 0x58 + 1U) {
          FUN_10bd05468();
LAB_10bd0537c:
          func_0x000104bd35f4();
          plVar3 = param_1;
          ppuStack_310 = ppuVar7;
          pplStack_308 = pplVar8;
          uStack_300 = param_2;
          pcStack_2f8 = pcVar6;
          lStack_2f0 = lVar10;
          func_0x000107c27958();
          func_0x000107c27958(plVar3 + 3,&ppuStack_310);
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          func_0x000107c27fd4(param_1 + 6,in_x5,in_x5 + in_x6 * 4,(in_x6 << 2) >> 2);
          param_1[9] = in_x7;
          param_1[10] = lStack_2c0;
          return param_1;
        }
        func_0x00010bd0c6cc();
        uVar1 = extraout_x10_00;
        if (0x1745d1745d1745c < extraout_x9) {
          uVar1 = extraout_x8;
        }
        if (uVar1 == 0) {
          lVar5 = 0;
        }
        else {
          if (extraout_x8 < uVar1) goto LAB_10bd0537c;
          lVar5 = uVar1 * 0x58;
          __Znwm();
        }
        lVar10 = lVar5 + lVar10;
        FUN_10bd05418(lVar10);
        lVar9 = *plVar3;
        lVar2 = plVar3[1];
        lVar13 = lVar10 + ((lVar2 - lVar9) / -0x58) * 0x58;
        lVar11 = lVar13;
        for (lVar12 = lVar9; lVar12 != lVar2; lVar12 = lVar12 + 0x58) {
          FUN_10bd05418(lVar11,lVar12);
          lVar11 = lVar11 + 0x58;
        }
        for (; lVar9 != lVar2; lVar9 = lVar9 + 0x58) {
          FUN_10bd0011c(lVar9);
        }
        lVar10 = lVar10 + 0x58;
        param_1 = (long *)*plVar3;
        *plVar3 = lVar13;
        plVar3[1] = lVar10;
        plVar3[2] = lVar5 + uVar1 * 0x58;
        if (param_1 != (long *)0x0) {
          __ZdlPv();
        }
      }
      plVar3[1] = lVar10;
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10bd05144; end: 10bd051f7;  */

long * FUN_10bd05144(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 **ppuVar7;
  long **pplVar8;
  long in_x5;
  long in_x6;
  long in_x7;
  ulong extraout_x8;
  ulong extraout_x9;
  undefined1 *extraout_x10;
  ulong extraout_x10_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 **ppuStack_250;
  long **pplStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  long lStack_230;
  long lStack_200;
  long alStack_140 [3];
  long *plStack_128;
  undefined8 uStack_120;
  undefined1 *apuStack_f8 [6];
  long *plStack_c8;
  undefined8 uStack_c0;
  
  plVar5 = alStack_140;
  func_0x00010bd0a10c();
  func_0x00010bd0a3e4();
  func_0x00010bd0b558();
  func_0x00010bd09fc4();
  plVar3 = (long *)&UNK_10f833413;
  func_0x000107c284bc();
  plStack_c8 = plVar3;
  uStack_c0 = param_2;
  if (**(long **)(unaff_x20 + 8) == 0) {
    func_0x00010bd0b998();
  }
  else {
    param_2 = *(undefined8 *)(**(long **)(unaff_x20 + 8) + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    plVar3 = plVar5;
  }
  func_0x00010bd0a58c();
  apuStack_f8[0] = extraout_x10;
  if (in_NG == in_OV) {
    apuStack_f8[0] = (undefined1 *)alStack_140;
  }
  func_0x00010bd0a524();
  plStack_128 = plVar3;
  uStack_120 = param_2;
  func_0x00010bd0b33c();
  ppuVar7 = apuStack_f8;
  pplVar8 = &plStack_128;
  func_0x00010bd0b1a4();
  func_0x00010bd0aaa4();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010bd0a974();
  func_0x00010bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  plVar5 = (long *)&UNK_10f833456;
  func_0x000107c284bc();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  pcVar6 = FUN_10bd05240;
  func_0x00010bd0bbbc();
  func_0x00010bd0afbc();
  uVar1 = plVar5[1];
  if (uVar1 < (ulong)plVar5[2]) {
    func_0x00010bd0b808();
    FUN_10bd05418();
    lVar10 = uVar1 + 0x58;
  }
  else {
    lVar10 = uVar1 - *plVar3;
    if (0x2e8ba2e8ba2e8ba < lVar10 / 0x58 + 1U) {
      FUN_10bd05468();
LAB_10bd0537c:
      func_0x000104bd35f4();
      plVar3 = plVar5;
      ppuStack_250 = ppuVar7;
      pplStack_248 = pplVar8;
      uStack_240 = param_2;
      pcStack_238 = pcVar6;
      lStack_230 = lVar10;
      func_0x000107c27958();
      func_0x000107c27958(plVar3 + 3,&ppuStack_250);
      plVar5[6] = 0;
      plVar5[7] = 0;
      plVar5[8] = 0;
      func_0x000107c27fd4(plVar5 + 6,in_x5,in_x5 + in_x6 * 4,(in_x6 << 2) >> 2);
      plVar5[9] = in_x7;
      plVar5[10] = lStack_200;
      return plVar5;
    }
    func_0x00010bd0c6cc();
    uVar1 = extraout_x10_00;
    if (0x1745d1745d1745c < extraout_x9) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      if (extraout_x8 < uVar1) goto LAB_10bd0537c;
      lVar4 = uVar1 * 0x58;
      __Znwm();
    }
    lVar10 = lVar4 + lVar10;
    FUN_10bd05418(lVar10);
    lVar9 = *plVar3;
    lVar2 = plVar3[1];
    lVar13 = lVar10 + ((lVar2 - lVar9) / -0x58) * 0x58;
    lVar11 = lVar13;
    for (lVar12 = lVar9; lVar12 != lVar2; lVar12 = lVar12 + 0x58) {
      FUN_10bd05418(lVar11,lVar12);
      lVar11 = lVar11 + 0x58;
    }
    for (; lVar9 != lVar2; lVar9 = lVar9 + 0x58) {
      FUN_10bd0011c(lVar9);
    }
    lVar10 = lVar10 + 0x58;
    plVar5 = (long *)*plVar3;
    *plVar3 = lVar13;
    plVar3[1] = lVar10;
    plVar3[2] = lVar4 + uVar1 * 0x58;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar3[1] = lVar10;
  return plVar5;
}



/* Entry: 10bd051f8; end: 10bd0523f;  */

undefined *
FUN_10bd051f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long *unaff_x19;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  long lStack_f0;
  undefined8 uStack_c0;
  
  FUN_10bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  puVar4 = &UNK_10f833456;
  func_0x000107c284bc();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcVar6 = FUN_10bd05240;
  func_0x00010bd0bbbc();
  func_0x00010bd0afbc();
  uVar1 = *(ulong *)(puVar4 + 8);
  if (uVar1 < *(ulong *)(puVar4 + 0x10)) {
    func_0x00010bd0b808();
    FUN_10bd05418();
    lVar8 = uVar1 + 0x58;
  }
  else {
    lVar8 = uVar1 - *unaff_x19;
    if (0x2e8ba2e8ba2e8ba < lVar8 / 0x58 + 1U) {
      FUN_10bd05468();
LAB_10bd0537c:
      func_0x000104bd35f4();
      puVar5 = puVar4;
      uStack_110 = param_4;
      uStack_108 = param_5;
      uStack_100 = param_2;
      pcStack_f8 = pcVar6;
      lStack_f0 = lVar8;
      func_0x000107c27958();
      func_0x000107c27958(puVar5 + 0x18,&uStack_110);
      *(undefined8 *)(puVar4 + 0x30) = 0;
      *(undefined8 *)(puVar4 + 0x38) = 0;
      *(undefined8 *)(puVar4 + 0x40) = 0;
      func_0x000107c27fd4(puVar4 + 0x30,param_6,param_6 + param_7 * 4,(param_7 << 2) >> 2);
      *(undefined8 *)(puVar4 + 0x48) = param_8;
      *(undefined8 *)(puVar4 + 0x50) = uStack_c0;
      return puVar4;
    }
    func_0x00010bd0c6cc();
    uVar1 = extraout_x10;
    if (0x1745d1745d1745c < extraout_x9) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      if (extraout_x8 < uVar1) goto LAB_10bd0537c;
      lVar3 = uVar1 * 0x58;
      __Znwm();
    }
    lVar8 = lVar3 + lVar8;
    FUN_10bd05418(lVar8);
    lVar7 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar11 = lVar8 + ((lVar2 - lVar7) / -0x58) * 0x58;
    lVar9 = lVar11;
    for (lVar10 = lVar7; lVar10 != lVar2; lVar10 = lVar10 + 0x58) {
      FUN_10bd05418(lVar9,lVar10);
      lVar9 = lVar9 + 0x58;
    }
    for (; lVar7 != lVar2; lVar7 = lVar7 + 0x58) {
      FUN_10bd0011c(lVar7);
    }
    lVar8 = lVar8 + 0x58;
    puVar4 = (undefined *)*unaff_x19;
    *unaff_x19 = lVar11;
    unaff_x19[1] = lVar8;
    unaff_x19[2] = lVar3 + uVar1 * 0x58;
    if (puVar4 != (undefined *)0x0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = lVar8;
  return puVar4;
}



/* Entry: 10bd05240; end: 10bd0537f;  */

long FUN_10bd05240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long *unaff_x19;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  
  func_0x00010bd0bbbc();
  func_0x00010bd0afbc();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010bd0b808();
    FUN_10bd05418();
    lVar5 = uVar1 + 0x58;
  }
  else {
    lVar5 = uVar1 - *unaff_x19;
    if (0x2e8ba2e8ba2e8ba < lVar5 / 0x58 + 1U) {
      FUN_10bd05468();
LAB_10bd0537c:
      func_0x000104bd35f4();
      lVar3 = param_1;
      uStack_50 = param_4;
      uStack_48 = param_5;
      uStack_40 = param_2;
      lStack_30 = lVar5;
      func_0x000107c27958();
      func_0x000107c27958(lVar3 + 0x18,&uStack_50);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      func_0x000107c27fd4((undefined8 *)(param_1 + 0x30),param_6,param_6 + param_7 * 4,
                          (param_7 << 2) >> 2);
      *(undefined8 *)(param_1 + 0x48) = param_8;
      *(undefined8 *)(param_1 + 0x50) = param_9;
      return param_1;
    }
    func_0x00010bd0c6cc();
    uVar1 = extraout_x10;
    if (0x1745d1745d1745c < extraout_x9) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      if (extraout_x8 < uVar1) goto LAB_10bd0537c;
      lVar3 = uVar1 * 0x58;
      __Znwm();
    }
    lVar5 = lVar3 + lVar5;
    FUN_10bd05418(lVar5);
    lVar4 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar8 = lVar5 + ((lVar2 - lVar4) / -0x58) * 0x58;
    lVar6 = lVar8;
    for (lVar7 = lVar4; lVar7 != lVar2; lVar7 = lVar7 + 0x58) {
      FUN_10bd05418(lVar6,lVar7);
      lVar6 = lVar6 + 0x58;
    }
    for (; lVar4 != lVar2; lVar4 = lVar4 + 0x58) {
      FUN_10bd0011c(lVar4);
    }
    lVar5 = lVar5 + 0x58;
    param_1 = *unaff_x19;
    *unaff_x19 = lVar8;
    unaff_x19[1] = lVar5;
    unaff_x19[2] = lVar3 + uVar1 * 0x58;
    if (param_1 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = lVar5;
  return param_1;
}



/* Entry: 10bd05380; end: 10bd05417;  */

long FUN_10bd05380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000107c27958(param_1,&uStack_40);
  func_0x000107c27958(lVar1 + 0x18,&uStack_50);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  func_0x000107c27fd4((undefined8 *)(param_1 + 0x30),param_6,param_6 + param_7 * 4,
                      (param_7 << 2) >> 2);
  *(undefined8 *)(param_1 + 0x48) = param_8;
  *(undefined8 *)(param_1 + 0x50) = param_9;
  return param_1;
}



/* Entry: 10bd05418; end: 10bd05467;  */

void FUN_10bd05418(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c3a6cc();
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



/* Entry: 10bd05468; end: 10bd05473;  */

void FUN_10bd05468(void)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bd0a5f0();
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9bfd0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  func_0x00010b4c043c();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 10bd05474; end: 10bd0547f;  */

void FUN_10bd05474(undefined8 param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bd14e08(param_1,0,param_2);
  func_0x00010bd15248(&PTR_FUN_110d9bfd0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  func_0x00010b4c043c();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 10bd05480; end: 10bd0549f;  */

void FUN_10bd05480(void)

{
  func_0x00010bd0a5fc();
  func_0x00010bd0a32c();
  return;
}



/* Entry: 10bd054a0; end: 10bd054b7;  */

void FUN_10bd054a0(long *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*param_1 == 0) {
    return;
  }
  func_0x00010ae77c74();
  func_0x00010bd0c350();
  if (unaff_x20 == 0) {
    FUN_10bd12650(unaff_x19 + 8);
  }
  return;
}



/* Entry: 10bd054b8; end: 10bd054df;  */

void FUN_10bd054b8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd0c350();
  if (unaff_x20 == 0) {
    FUN_10bd12650(unaff_x19 + 8);
  }
  return;
}



/* Entry: 10bd054e0; end: 10bd05587;  */

void FUN_10bd054e0(long param_1)

{
  undefined8 extraout_x8;
  long *plVar1;
  undefined8 *unaff_x20;
  long lVar2;
  ulong uVar3;
  
  func_0x000107c3a6d8();
  func_0x00010bd0ade8();
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c278b8(extraout_x8,&UNK_10f8334e8);
  for (uVar3 = (ulong)*(int *)*unaff_x20; plVar1 = *(long **)(lVar2 + 8),
      uVar3 < (ulong)((plVar1[1] - *plVar1) / 0x18); uVar3 = uVar3 + 1) {
    func_0x000107c27fc4();
    func_0x00010bd0ac5c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  }
  func_0x000107c27fc4();
  return;
}



/* Entry: 10bd05588; end: 10bd0579b;  */

void FUN_10bd05588(undefined8 param_1,undefined8 param_2)

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
  
  func_0x00010bd09f5c();
  func_0x00010bd0b388();
  uVar5 = *(ulong *)(*unaff_x19 + 0x18);
  uVar1 = (uVar5 & 1) == 0;
  puVar4 = (ulong *)(*unaff_x19 + 0x18);
  if (!(bool)uVar1) {
    puVar4 = (ulong *)(uVar5 + (long)*(int *)unaff_x19[1] * 8 + 7);
  }
  func_0x00010bd09fc4(*puVar4);
  puVar2 = (undefined8 *)&UNK_10f833513;
  func_0x000107c284bc();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010bd0ade8();
    func_0x00010bd0a0d0();
    func_0x00010bd0b0c8(*puVar2);
    if (extraout_x8 == 0) {
      func_0x00010bd0b388();
      puVar4 = (ulong *)(*(long *)(unaff_x20 + 8) + 0x18);
      uVar5 = *puVar4;
      uVar1 = (uVar5 & 1) == 0;
      if (!(bool)uVar1) {
        puVar4 = (ulong *)(uVar5 + (long)**(int **)(unaff_x20 + 0x10) * 8 + 7);
      }
      puStack_118 = puVar2;
      uStack_110 = param_2;
      func_0x00010bd09fc4(*puVar4);
      puStack_178 = &UNK_10f833527;
    }
    else {
      func_0x00010bd0b388();
      puVar4 = (ulong *)(*(long *)(unaff_x20 + 8) + 0x18);
      uVar5 = *puVar4;
      uVar1 = (uVar5 & 1) == 0;
      if (!(bool)uVar1) {
        puVar4 = (ulong *)(uVar5 + (long)**(int **)(unaff_x20 + 0x10) * 8 + 7);
      }
      puStack_118 = puVar2;
      uStack_110 = param_2;
      func_0x00010bd09fc4(*puVar4);
      puStack_178 = &UNK_10f83353e;
    }
    func_0x000107c284bc();
    ppuVar3 = &puStack_118;
    uStack_170 = param_2;
    func_0x000107c2ba44(ppuVar3,auStack_148,&puStack_178);
    func_0x000107c3a63c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x000107c3a6ac();
      *unaff_x19 = 0;
      if (ppuVar3 != (undefined8 **)0x0) {
        __ZdlPv();
      }
      return;
    }
  }
  return;
}



/* Entry: 10bd0579c; end: 10bd058a7;  */

void FUN_10bd0579c(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong *extraout_x8_03;
  ulong extraout_x9;
  ulong extraout_x11;
  ulong extraout_x12;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 unaff_x30;
  
  func_0x000107c3a6a4();
  uVar9 = param_3;
  func_0x00010bd0a9fc();
  Hint_Prefetch(*param_2,0,2,0);
  cVar3 = *(char *)(uVar9 + 0x17) < '\0';
  cVar2 = '\0';
  func_0x000107c284ac();
  lVar7 = 0;
  uVar8 = unaff_x20[2];
  func_0x00010bd0bc04();
  func_0x00010bd0adb8();
  uVar9 = extraout_x8;
  while( true ) {
    uVar9 = uVar9 & uVar8;
    func_0x00010bd0addc();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      func_0x00010bd0c77c();
      plVar6 = (long *)(uVar9 + (extraout_x8_01 >> 3) & uVar8);
      puVar1 = (undefined8 *)(unaff_x20[1] + (long)plVar6 * 0x10);
      uVar4 = param_3;
      FUN_10bd058a8(param_3,*puVar1,puVar1[1]);
      if ((uVar4 & 1) != 0) {
        uVar5 = 0;
        goto LAB_10bd05850;
      }
      func_0x00010bd0c758();
    }
    func_0x00010bd0a514();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar9 = lVar7 + uVar9;
  }
  plVar6 = unaff_x20;
  func_0x00010bd00228();
  func_0x00010bd0c458(unaff_x20[1] + (long)plVar6 * 0x10);
  uVar9 = extraout_x12;
  uVar8 = extraout_x11;
  if (cVar3 == cVar2) {
    uVar9 = extraout_x9;
    uVar8 = param_3;
  }
  *extraout_x8_03 = uVar8;
  extraout_x8_03[1] = uVar9;
  uVar5 = 1;
LAB_10bd05850:
  lVar7 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + (long)plVar6;
  unaff_x19[1] = lVar7 + (long)plVar6 * 0x10;
  *(undefined1 *)(unaff_x19 + 2) = uVar5;
  func_0x00010bd0ae04(unaff_x30);
  return;
}



/* Entry: 10bd058a8; end: 10bd058c7;  */

bool FUN_10bd058a8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_20;
  long lStack_18;
  
  lVar3 = (long)*(char *)((long)param_1 + 0x17);
  puVar4 = param_1;
  if (lVar3 < 0) {
    puVar4 = (undefined8 *)*param_1;
    lVar3 = param_1[1];
  }
  iVar1 = (int)&uStack_20;
  if (param_3 == lVar3) {
    uStack_20 = param_2;
    lStack_18 = param_3;
    func_0x000100067218(&uStack_20,puVar4,lVar3);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10bd058c8; end: 10bd05deb;  */

void FUN_10bd058c8(undefined8 *param_1,undefined **param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  code *pcVar13;
  undefined *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *extraout_x8_03;
  long extraout_x8_04;
  long *extraout_x9;
  undefined8 *extraout_x9_00;
  long extraout_x10;
  long *extraout_x10_00;
  long extraout_x10_01;
  long *extraout_x11;
  long extraout_x11_00;
  undefined8 *extraout_x11_01;
  undefined1 *extraout_x12;
  long *extraout_x12_00;
  undefined **ppuVar14;
  undefined *unaff_x21;
  undefined8 *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined **ppuVar20;
  undefined8 *unaff_x25;
  undefined **unaff_x26;
  undefined8 unaff_x30;
  long alStack_348 [10];
  undefined1 auStack_2f8 [40];
  uint uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
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
  undefined8 *puStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *apuStack_f8 [9];
  undefined1 auStack_b0 [160];
  
  func_0x00010bd0c7e4();
  puVar15 = (undefined8 *)*param_1;
  ppuVar6 = (undefined **)param_2[4];
  uVar2 = *(uint *)(param_2[2] + 0x20);
  ppuVar14 = (undefined **)(ulong)uVar2;
  puVar5 = (undefined8 *)(param_2[2] + 0x90);
  if (param_2[3] != (undefined *)0x0) {
    puVar5 = (undefined8 *)(param_2[3] + 0x30);
  }
  puVar17 = (undefined *)*puVar5;
  puStack_130 = param_3;
  func_0x00010bd0ac34();
  param_2[5] = extraout_x8;
  param_2[6] = extraout_x8;
  ppuVar11 = param_2;
  if ((*(byte *)(puVar15 + 0xd) & 1) == 0) {
LAB_10bd05d94:
    func_0x00010bd0b8bc();
    func_0x00010bd0a968();
    func_0x00010bd0c0c4();
    ppuVar6 = &puStack_100;
    func_0x00010ae6c700();
    func_0x00010bd0b1e0();
    func_0x00010bd0b1d8();
    func_0x00010bd0a974();
    pcVar13 = FUN_10bd05dec;
    func_0x00010bd0c7e4();
    puStack_140 = &stack0xfffffffffffffff0;
    pcStack_138 = pcVar13;
    ppuVar16 = (undefined **)*ppuVar6;
    ppuVar20 = (undefined **)ppuVar11[4];
    iVar3 = *(int *)(ppuVar11[2] + 0x20);
    puVar5 = (undefined8 *)(ppuVar11[2] + 0x90);
    if (ppuVar11[3] != (undefined *)0x0) {
      puVar5 = (undefined8 *)(ppuVar11[3] + 0x30);
    }
    puVar17 = (undefined *)*puVar5;
    ppuStack_250 = ppuVar6;
    func_0x00010bd0ac34();
    ppuVar11[5] = extraout_x8_03;
    ppuVar11[6] = extraout_x8_03;
    ppuVar12 = ppuVar11;
    if (((ulong)ppuVar16[0xd] & 1) == 0) {
LAB_10bd06078:
      func_0x00010bd0b8bc();
      func_0x00010bd0a968();
      func_0x00010bd0c0c4();
      plVar7 = &lStack_230;
      func_0x00010ae6c700();
      plVar8 = plVar7;
      func_0x00010bd0b1e0();
      func_0x00010bd0b1d8();
      func_0x00010bd0a974();
      pcStack_268 = FUN_10bd060c0;
      ppuStack_2b0 = unaff_x26;
      puStack_2a8 = unaff_x25;
      ppuStack_2a0 = ppuVar20;
      puStack_298 = puVar17;
      ppuStack_290 = ppuVar16;
      puStack_288 = unaff_x21;
      ppuStack_280 = ppuVar14;
      plStack_278 = plVar7;
      ppuStack_270 = &puStack_140;
      func_0x00010bd0c5d4();
      puVar17 = ppuVar12[7];
      iVar3 = *(int *)(ppuVar12[2] + 0x20);
      if (((*(byte *)((long)ppuVar12 + 1) >> 4 & 1) == 0) || (plVar7[5] == 0)) {
        if ((*(byte *)((long)ppuVar12 + 1) >> 3 & 1) == 0) {
          plVar9 = (long *)(plVar7[4] + 0x30);
        }
        else {
          plVar9 = plVar8;
          func_0x00010bd0b708();
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)(plVar7[2] + 0x90);
          }
          else {
            func_0x00010bd0b708();
            plVar9 = plVar9 + 6;
          }
        }
      }
      else {
        plVar9 = (long *)(plVar7[5] + 0x28);
      }
      lVar18 = *plVar9;
      func_0x00010bd0ac34();
      plVar7[8] = extraout_x8_04;
      plVar7[9] = extraout_x8_04;
      if ((*(byte *)(plVar8 + 0xd) & 1) != 0) {
        ppuVar6 = &PTR_PTR_113405ec0;
        if ((puVar17[0x28] & 1) != 0) {
          ppuVar6 = (undefined **)plVar8[1];
          puVar10 = puVar17;
          func_0x00010bd047c0(puVar17,&PTR_PTR_113405ec0);
          FUN_10bced744(ppuVar6,puVar10);
          plVar7[8] = (long)ppuVar6;
          if (*(long *)(puVar17 + 0x70) != 0) {
            FUN_10bd0e0c0(*(long *)(puVar17 + 0x70),ppuVar6);
            ppuVar6 = (undefined **)plVar7[8];
          }
          *(uint *)(puVar17 + 0x28) = *(uint *)(puVar17 + 0x28) & 0xfffffffe;
        }
        FUN_10bd05474(auStack_2f8,ppuVar6);
        if (iVar3 < 1000) {
          if ((undefined **)plVar7[8] != &PTR_PTR_113405ec0) {
            func_0x00010bd0b48c();
            func_0x00010bd0aadc(plVar8);
          }
          if (*(int *)((long)ppuVar14 + 0x54) == 2) {
            uStack_2d0 = uStack_2d0 | 1;
            uStack_2c8 = 3;
          }
          if (*(int *)(ppuVar14 + 0xb) == 10) {
            uStack_2d0 = uStack_2d0 | 0x10;
            uStack_2b8 = 2;
          }
          if (puVar17[0x88] == 1) {
            uStack_2d0 = uStack_2d0 | 4;
            uStack_2c0 = 1;
          }
          if (((iVar3 == 999) && (((byte)puVar17[0x28] >> 4 & 1) != 0)) &&
             ((puVar17[0x88] & 1) == 0)) {
            uStack_2d0 = uStack_2d0 | 4;
            uStack_2c0 = 2;
          }
        }
        puVar19 = auStack_2f8;
        FUN_10bd12878();
        if (puVar19 == (undefined1 *)0x0) {
          plVar7[9] = lVar18;
        }
        else {
          FUN_10bd1ae94(alStack_348,plVar8 + 4,lVar18,auStack_2f8);
          if (alStack_348[0] == 0) {
            plVar8 = alStack_348;
            FUN_10bd054a0();
            func_0x00010bd0ba58();
            plVar7[9] = (long)plVar8;
          }
          else {
            func_0x00010bd0b148(plVar8,plVar7[1],ppuVar14);
          }
          FUN_10bd054b8(alStack_348);
        }
        FUN_10bd12650(auStack_2f8);
        return;
      }
      func_0x0001088914a0(auStack_2f8,&UNK_10f8334a2);
      func_0x00010bd0a968();
      FUN_10bdb2a88(alStack_348);
      func_0x00010bd0c1c4();
      func_0x00010bd0ac68();
      FUN_10bd054b8();
      FUN_10bd12650(auStack_2f8);
      func_0x00010bd0a974();
      func_0x00010bd0a5fc();
      func_0x00010bd0a32c();
      return;
    }
    ppuVar12 = &PTR_PTR_113405ec0;
    if (((ulong)ppuVar20[5] & 1) != 0) {
      ppuVar14 = ppuVar20;
      func_0x00010bd04824(ppuVar20,&PTR_PTR_113405ec0);
      func_0x00010bd0bf40();
      ppuVar11[5] = (undefined *)ppuVar14;
      ppuVar6 = (undefined **)ppuVar20[9];
      if (ppuVar6 != (undefined **)0x0) {
        FUN_10bd0e0c0(ppuVar6,ppuVar14);
      }
      *(uint *)(ppuVar20 + 5) = *(uint *)(ppuVar20 + 5) & 0xfffffffe;
    }
    func_0x00010bd0b618();
    if (iVar3 < 1000 && (undefined **)ppuVar11[5] != &PTR_PTR_113405ec0) {
      func_0x00010bd0b48c();
      ppuVar6 = ppuVar16;
      func_0x00010bd0aadc();
    }
    func_0x00010bd0b620();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar11[6] = puVar17;
      ppuVar6 = (undefined **)0x0;
    }
    else {
      func_0x00010bd0b77c();
      if (lStack_230 == 0) {
        ppuVar16 = (undefined **)ppuVar16[1];
        func_0x00010bd0b630();
        ppuVar6 = ppuVar16;
        FUN_10bced744(ppuVar16,auStack_228);
        ppuVar11[6] = (undefined *)ppuVar6;
      }
      else {
        plStack_238 = &lStack_230;
        ppuVar6 = ppuVar16;
        func_0x00010bd0b148(ppuVar16,ppuVar11[1],param_3);
      }
      func_0x00010bd0b1e0();
    }
    func_0x00010bd0b1d8();
    lVar18 = 0;
    puStack_258 = (undefined8 *)(param_3 + 0x18);
    ppuStack_260 = ppuVar11;
    for (lStack_240 = 0; bVar4 = lStack_240 == *(int *)((long)ppuVar11 + 4),
        lStack_240 < *(int *)((long)ppuVar11 + 4); lStack_240 = lStack_240 + 1) {
      ppuVar14 = (undefined **)ppuVar11[7];
      func_0x00010bd0ae30(*puStack_258);
      puVar5 = extraout_x11_01;
      if (!bVar4) {
        puVar5 = extraout_x9_00;
      }
      puVar17 = (undefined *)*puVar5;
      ppuVar20 = (undefined **)*ppuStack_250;
      lVar1 = *(long *)((long)ppuVar14 + lVar18 + 0x10);
      unaff_x26 = *(undefined ***)((long)ppuVar14 + lVar18 + 0x18);
      uVar2 = *(uint *)(*(long *)(lVar1 + 0x10) + 0x20);
      unaff_x21 = (undefined *)(ulong)uVar2;
      unaff_x25 = *(undefined8 **)(lVar1 + 0x30);
      *(undefined ***)((long)ppuVar14 + lVar18 + 0x20) = &PTR_PTR_113405ec0;
      *(undefined ***)((long)ppuVar14 + lVar18 + 0x28) = &PTR_PTR_113405ec0;
      if (((ulong)ppuVar20[0xd] & 1) == 0) goto LAB_10bd06078;
      lStack_240 = extraout_x10_01;
      if (((ulong)unaff_x26[5] & 1) != 0) {
        ppuVar11 = unaff_x26;
        func_0x00010bd04854();
        func_0x00010bd0bf34();
        *(undefined ***)((long)ppuVar14 + lVar18 + 0x20) = ppuVar11;
        ppuVar6 = (undefined **)unaff_x26[9];
        if (ppuVar6 != (undefined **)0x0) {
          FUN_10bd0e0c0(ppuVar6,ppuVar11);
        }
        *(uint *)(unaff_x26 + 5) = *(uint *)(unaff_x26 + 5) & 0xfffffffe;
        ppuVar11 = ppuStack_260;
      }
      func_0x00010bd0b618();
      if (((int)uVar2 < 1000) &&
         (*(undefined ***)((long)ppuVar14 + lVar18 + 0x20) != &PTR_PTR_113405ec0)) {
        func_0x00010bd0a6e8(ppuVar20,*(undefined8 *)((long)ppuVar14 + lVar18 + 8),puVar17);
        ppuVar6 = ppuVar20;
      }
      func_0x00010bd0b620();
      if (ppuVar6 == (undefined **)0x0) {
        *(undefined8 **)((long)ppuVar14 + lVar18 + 0x28) = unaff_x25;
      }
      else {
        func_0x00010bd0b768();
        if (lStack_230 == 0) {
          func_0x00010bd0b630();
          func_0x00010bd0bb74();
          *(undefined ***)((long)ppuVar14 + lVar18 + 0x28) = ppuVar6;
        }
        else {
          func_0x00010bd0bc94((undefined *)((long)ppuVar14 + lVar18));
          func_0x00010bd0aaf4();
          FUN_10bcf56d0();
        }
        func_0x00010bd0b1e0();
      }
      func_0x00010bd0b1d8();
      lVar18 = lVar18 + 0x30;
      ppuVar16 = ppuVar12;
    }
    func_0x00010bd0c7fc(pcStack_138);
  }
  else {
    ppuVar11 = &PTR_PTR_113405ec0;
    puVar5 = param_1;
    if (((ulong)ppuVar6[5] & 1) != 0) {
      ppuVar11 = ppuVar6;
      func_0x00010bd04790();
      func_0x00010bd0bf40();
      param_2[5] = (undefined *)ppuVar11;
      puVar5 = (undefined8 *)ppuVar6[9];
      if (puVar5 != (undefined8 *)0x0) {
        FUN_10bd0e0c0();
        ppuVar11 = (undefined **)param_2[5];
      }
      *(uint *)(ppuVar6 + 5) = *(uint *)(ppuVar6 + 5) & 0xfffffffe;
    }
    func_0x00010bd0b618();
    if ((int)uVar2 < 1000 && (undefined **)param_2[5] != &PTR_PTR_113405ec0) {
      ppuVar11 = (undefined **)param_2[1];
      func_0x00010bd0b48c();
      puVar5 = puVar15;
      param_3 = puStack_130;
      func_0x00010bd0aadc();
    }
    func_0x00010bd0b620();
    if (puVar5 == (undefined8 *)0x0) {
      param_2[6] = puVar17;
      puVar15 = (undefined8 *)0x0;
    }
    else {
      func_0x00010bd0b77c();
      if (puStack_100 == (undefined *)0x0) {
        puVar15 = (undefined8 *)puVar15[1];
        ppuVar14 = &puStack_100;
        func_0x00010bd0b630();
        ppuVar11 = apuStack_f8;
        FUN_10bced744();
        param_2[6] = (undefined *)puVar15;
      }
      else {
        ppuVar11 = (undefined **)param_2[1];
        ppuStack_108 = &puStack_100;
        param_3 = puStack_130;
        func_0x00010bd0b148();
      }
      func_0x00010bd0b1e0();
    }
    func_0x00010bd0b1d8();
    func_0x00010bd0b0d4();
    while ((long)unaff_x21 < (long)*(int *)((long)param_2 + 0x84)) {
      func_0x00010bd0a260(param_2[10]);
      ppuVar11 = (undefined **)(extraout_x8_00 + (long)ppuVar14);
      puVar15 = param_1;
      FUN_10bd05dec();
      func_0x00010bd0ab40();
    }
    lVar18 = 0;
    lStack_110 = 0;
    puStack_128 = (undefined8 *)(puStack_130 + 0x90);
    puStack_120 = param_1;
    while( true ) {
      bVar4 = lStack_110 == *(int *)(param_2 + 0xf);
      if (*(int *)(param_2 + 0xf) <= lStack_110) break;
      puVar17 = param_2[8];
      func_0x00010bd0ae30(*puStack_128);
      plVar7 = extraout_x11;
      if (!bVar4) {
        plVar7 = extraout_x9;
      }
      puVar19 = (undefined1 *)*plVar7;
      unaff_x25 = (undefined8 *)*param_1;
      unaff_x21 = puVar17 + lVar18;
      ppuVar6 = *(undefined ***)(unaff_x21 + 0x18);
      uVar2 = *(uint *)(*(long *)(*(long *)(unaff_x21 + 0x10) + 0x10) + 0x20);
      ppuVar14 = (undefined **)(ulong)uVar2;
      unaff_x26 = *(undefined ***)(*(long *)(unaff_x21 + 0x10) + 0x30);
      *(undefined ***)(unaff_x21 + 0x20) = &PTR_PTR_113405ec0;
      *(undefined ***)(unaff_x21 + 0x28) = &PTR_PTR_113405ec0;
      if ((*(byte *)(unaff_x25 + 0xd) & 1) == 0) goto LAB_10bd05d94;
      ppuVar11 = &PTR_PTR_113405ec0;
      puStack_118 = extraout_x12;
      lStack_110 = extraout_x10;
      if (((ulong)ppuVar6[5] & 1) != 0) {
        ppuVar11 = ppuVar6;
        func_0x00010bd047f4();
        func_0x00010bd0c318();
        *(undefined ***)(unaff_x21 + 0x20) = ppuVar11;
        puVar15 = (undefined8 *)ppuVar6[9];
        if (puVar15 != (undefined8 *)0x0) {
          FUN_10bd0e0c0();
          ppuVar11 = *(undefined ***)(unaff_x21 + 0x20);
        }
        *(uint *)(ppuVar6 + 5) = *(uint *)(ppuVar6 + 5) & 0xfffffffe;
      }
      func_0x00010bd0b618();
      if (((int)uVar2 < 1000) && (*(undefined ***)(unaff_x21 + 0x20) != &PTR_PTR_113405ec0)) {
        ppuVar11 = *(undefined ***)(puVar17 + lVar18 + 8);
        puVar15 = unaff_x25;
        param_3 = puVar19;
        func_0x00010bd0a6e8();
      }
      func_0x00010bd0b620();
      param_1 = puStack_120;
      if (puVar15 == (undefined8 *)0x0) {
        *(undefined ***)(unaff_x21 + 0x28) = unaff_x26;
        unaff_x25 = (undefined8 *)0x0;
      }
      else {
        param_3 = auStack_b0;
        FUN_10bd1ae94(&puStack_100,unaff_x25 + 4);
        if (puStack_100 == (undefined *)0x0) {
          unaff_x25 = (undefined8 *)unaff_x25[1];
          func_0x00010bd0b630();
          ppuVar11 = apuStack_f8;
          FUN_10bced744();
          *(undefined8 **)(unaff_x21 + 0x28) = unaff_x25;
        }
        else {
          func_0x00010bd0bc94(puVar17 + lVar18);
          FUN_10bcf56d0();
          ppuVar11 = unaff_x26;
          param_3 = puVar19;
        }
        func_0x00010bd0b1e0();
      }
      func_0x00010bd0b1d8();
      lStack_110 = lStack_110 + 1;
      lVar18 = lVar18 + 0x38;
      puVar15 = unaff_x25;
    }
    func_0x00010bd0b0d4();
    while ((long)unaff_x21 < (long)*(int *)((long)param_2 + 4)) {
      func_0x00010bd0a260(param_2[7]);
      func_0x00010bd0bf4c();
      func_0x00010bd0ab40();
    }
    func_0x00010bd0b0d4();
    for (; (long)unaff_x21 < (long)*(int *)(param_2 + 0x10); unaff_x21 = unaff_x21 + 1) {
      func_0x00010bd0a260(param_2[9]);
      ppuVar11 = (undefined **)(extraout_x8_01 + (long)ppuVar14);
      puVar15 = param_1;
      FUN_10bd058c8();
      ppuVar14 = ppuVar14 + 0x13;
    }
    func_0x00010bd0b0d4();
    while ((long)unaff_x21 < (long)*(int *)((long)param_2 + 0x8c)) {
      func_0x00010bd0a260(param_2[0xc]);
      func_0x00010bd0bf4c();
      func_0x00010bd0ab40();
    }
    puStack_118 = puStack_130 + 0x60;
    ppuVar14 = (undefined **)0x8;
    for (lVar18 = 0; bVar4 = lVar18 == *(int *)(param_2 + 0x11), lVar18 < *(int *)(param_2 + 0x11);
        lVar18 = lVar18 + 1) {
      func_0x00010bd0aa7c(param_2[0xb]);
      plVar7 = extraout_x12_00;
      if (!bVar4) {
        plVar7 = extraout_x10_00;
      }
      puVar19 = (undefined1 *)*plVar7;
      puVar5 = (undefined8 *)*param_1;
      unaff_x21 = (undefined *)(extraout_x8_02 + extraout_x11_00);
      unaff_x26 = *(undefined ***)(unaff_x21 + 8);
      iVar3 = *(int *)(*(long *)(*(long *)(unaff_x21 + 0x10) + 0x10) + 0x20);
      unaff_x25 = *(undefined8 **)(*(long *)(unaff_x21 + 0x10) + 0x30);
      func_0x00010bd0c67c();
      *(undefined ***)(unaff_x21 + 0x18) = ppuVar11;
      *(undefined ***)(unaff_x21 + 0x20) = ppuVar11;
      if ((*(byte *)(puVar5 + 0xd) & 1) == 0) goto LAB_10bd05d94;
      if (((ulong)unaff_x26[5] & 1) != 0) {
        ppuVar11 = unaff_x26;
        FUN_10bd04658();
        func_0x00010bd0bf34();
        *(undefined ***)(unaff_x21 + 0x18) = ppuVar11;
        puVar15 = (undefined8 *)unaff_x26[0xc];
        if (puVar15 != (undefined8 *)0x0) {
          FUN_10bd0e0c0();
          ppuVar11 = *(undefined ***)(unaff_x21 + 0x18);
        }
        *(uint *)(unaff_x26 + 5) = *(uint *)(unaff_x26 + 5) & 0xfffffffe;
        param_1 = puStack_120;
      }
      func_0x00010bd0b618();
      bVar4 = iVar3 == 999;
      if ((iVar3 < 1000) && (func_0x00010bd0af58(*(undefined8 *)(unaff_x21 + 0x18)), !bVar4)) {
        ppuVar11 = *(undefined ***)(*(long *)(unaff_x21 + 0x10) + 8);
        func_0x00010bd0a6e8();
        puVar15 = puVar5;
        param_3 = puVar19;
      }
      func_0x00010bd0b620();
      if (puVar15 == (undefined8 *)0x0) {
        *(undefined8 **)(unaff_x21 + 0x20) = unaff_x25;
      }
      else {
        func_0x00010bd0b768();
        if (puStack_100 == (undefined *)0x0) {
          func_0x00010bd0b630();
          func_0x00010bd0bb74();
          *(undefined8 **)(unaff_x21 + 0x20) = puVar15;
        }
        else {
          func_0x00010bd0bc94(*(undefined8 *)(unaff_x21 + 0x10));
          func_0x00010bd0aaf4();
          FUN_10bcf56d0();
        }
        func_0x00010bd0b1e0();
      }
      func_0x00010bd0b1d8();
      ppuVar14 = ppuVar14 + 1;
    }
    func_0x00010bd0c7fc(unaff_x30);
  }
  return;
}



/* Entry: 10bd05dec; end: 10bd060bf;  */

void FUN_10bd05dec(undefined **param_1,undefined **param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined *extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 *extraout_x11;
  undefined *unaff_x20;
  ulong unaff_x21;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 unaff_x25;
  long unaff_x26;
  long lVar16;
  undefined8 unaff_x30;
  long alStack_218 [10];
  undefined1 auStack_1c8 [40];
  uint uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
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
  
  func_0x00010bd0c7e4();
  ppuVar13 = (undefined **)*param_1;
  ppuVar15 = (undefined **)param_2[4];
  iVar2 = *(int *)(param_2[2] + 0x20);
  puVar1 = (undefined8 *)(param_2[2] + 0x90);
  if (param_2[3] != (undefined *)0x0) {
    puVar1 = (undefined8 *)(param_2[3] + 0x30);
  }
  puVar14 = (undefined *)*puVar1;
  ppuStack_120 = param_1;
  func_0x00010bd0ac34();
  param_2[5] = extraout_x8;
  param_2[6] = extraout_x8;
  ppuVar12 = param_2;
  if (((ulong)ppuVar13[0xd] & 1) != 0) {
    ppuVar12 = &PTR_PTR_113405ec0;
    if (((ulong)ppuVar15[5] & 1) != 0) {
      ppuVar6 = ppuVar15;
      func_0x00010bd04824(ppuVar15,&PTR_PTR_113405ec0);
      func_0x00010bd0bf40();
      param_2[5] = (undefined *)ppuVar6;
      param_1 = (undefined **)ppuVar15[9];
      if (param_1 != (undefined **)0x0) {
        FUN_10bd0e0c0(param_1,ppuVar6);
      }
      *(uint *)(ppuVar15 + 5) = *(uint *)(ppuVar15 + 5) & 0xfffffffe;
    }
    func_0x00010bd0b618();
    if (iVar2 < 1000 && (undefined **)param_2[5] != &PTR_PTR_113405ec0) {
      func_0x00010bd0b48c();
      param_1 = ppuVar13;
      func_0x00010bd0aadc();
    }
    func_0x00010bd0b620();
    if (param_1 == (undefined **)0x0) {
      param_2[6] = puVar14;
      ppuVar6 = (undefined **)0x0;
    }
    else {
      func_0x00010bd0b77c();
      if (lStack_100 == 0) {
        ppuVar13 = (undefined **)ppuVar13[1];
        func_0x00010bd0b630();
        ppuVar6 = ppuVar13;
        FUN_10bced744(ppuVar13,auStack_f8);
        param_2[6] = (undefined *)ppuVar6;
      }
      else {
        plStack_108 = &lStack_100;
        ppuVar6 = ppuVar13;
        func_0x00010bd0b148(ppuVar13,param_2[1],param_3);
      }
      func_0x00010bd0b1e0();
    }
    func_0x00010bd0b1d8();
    lVar16 = 0;
    lStack_110 = 0;
    puStack_128 = (undefined8 *)(param_3 + 0x18);
    ppuStack_130 = param_2;
    while( true ) {
      bVar4 = lStack_110 == *(int *)((long)param_2 + 4);
      if (*(int *)((long)param_2 + 4) <= lStack_110) {
        func_0x00010bd0c7fc(unaff_x30);
        return;
      }
      unaff_x20 = param_2[7];
      func_0x00010bd0ae30(*puStack_128);
      puVar1 = extraout_x11;
      if (!bVar4) {
        puVar1 = extraout_x9;
      }
      puVar14 = (undefined *)*puVar1;
      ppuVar15 = (undefined **)*ppuStack_120;
      unaff_x26 = *(long *)(unaff_x20 + lVar16 + 0x18);
      uVar3 = *(uint *)(*(long *)(*(long *)(unaff_x20 + lVar16 + 0x10) + 0x10) + 0x20);
      unaff_x21 = (ulong)uVar3;
      unaff_x25 = *(undefined8 *)(*(long *)(unaff_x20 + lVar16 + 0x10) + 0x30);
      *(undefined ***)(unaff_x20 + lVar16 + 0x20) = &PTR_PTR_113405ec0;
      *(undefined ***)(unaff_x20 + lVar16 + 0x28) = &PTR_PTR_113405ec0;
      if (((ulong)ppuVar15[0xd] & 1) == 0) break;
      lStack_110 = extraout_x10;
      if ((*(byte *)(unaff_x26 + 0x28) & 1) != 0) {
        lVar5 = unaff_x26;
        func_0x00010bd04854();
        func_0x00010bd0bf34();
        *(long *)(unaff_x20 + lVar16 + 0x20) = lVar5;
        ppuVar6 = *(undefined ***)(unaff_x26 + 0x48);
        if (ppuVar6 != (undefined **)0x0) {
          FUN_10bd0e0c0(ppuVar6,lVar5);
        }
        *(uint *)(unaff_x26 + 0x28) = *(uint *)(unaff_x26 + 0x28) & 0xfffffffe;
        param_2 = ppuStack_130;
      }
      func_0x00010bd0b618();
      if (((int)uVar3 < 1000) && (*(undefined ***)(unaff_x20 + lVar16 + 0x20) != &PTR_PTR_113405ec0)
         ) {
        func_0x00010bd0a6e8(ppuVar15,*(undefined8 *)(unaff_x20 + lVar16 + 8),puVar14);
        ppuVar6 = ppuVar15;
      }
      func_0x00010bd0b620();
      if (ppuVar6 == (undefined **)0x0) {
        *(undefined8 *)(unaff_x20 + lVar16 + 0x28) = unaff_x25;
      }
      else {
        func_0x00010bd0b768();
        if (lStack_100 == 0) {
          func_0x00010bd0b630();
          func_0x00010bd0bb74();
          *(undefined ***)(unaff_x20 + lVar16 + 0x28) = ppuVar6;
        }
        else {
          func_0x00010bd0bc94(unaff_x20 + lVar16);
          func_0x00010bd0aaf4();
          FUN_10bcf56d0();
        }
        func_0x00010bd0b1e0();
      }
      func_0x00010bd0b1d8();
      lStack_110 = lStack_110 + 1;
      lVar16 = lVar16 + 0x30;
      ppuVar13 = ppuVar12;
    }
  }
  func_0x00010bd0b8bc();
  func_0x00010bd0a968();
  func_0x00010bd0c0c4();
  plVar7 = &lStack_100;
  func_0x00010ae6c700();
  plVar8 = plVar7;
  func_0x00010bd0b1e0();
  func_0x00010bd0b1d8();
  func_0x00010bd0a974();
  pcStack_138 = FUN_10bd060c0;
  lStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  ppuStack_170 = ppuVar15;
  puStack_168 = puVar14;
  ppuStack_160 = ppuVar13;
  uStack_158 = unaff_x21;
  puStack_150 = unaff_x20;
  plStack_148 = plVar7;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bd0c5d4();
  puVar14 = ppuVar12[7];
  iVar2 = *(int *)(ppuVar12[2] + 0x20);
  if (((*(byte *)((long)ppuVar12 + 1) >> 4 & 1) == 0) || (plVar7[5] == 0)) {
    if ((*(byte *)((long)ppuVar12 + 1) >> 3 & 1) == 0) {
      plVar9 = (long *)(plVar7[4] + 0x30);
    }
    else {
      plVar9 = plVar8;
      func_0x00010bd0b708();
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(plVar7[2] + 0x90);
      }
      else {
        func_0x00010bd0b708();
        plVar9 = plVar9 + 6;
      }
    }
  }
  else {
    plVar9 = (long *)(plVar7[5] + 0x28);
  }
  lVar16 = *plVar9;
  func_0x00010bd0ac34();
  plVar7[8] = extraout_x8_00;
  plVar7[9] = extraout_x8_00;
  if ((*(byte *)(plVar8 + 0xd) & 1) != 0) {
    ppuVar15 = &PTR_PTR_113405ec0;
    if ((puVar14[0x28] & 1) != 0) {
      ppuVar15 = (undefined **)plVar8[1];
      puVar10 = puVar14;
      func_0x00010bd047c0(puVar14,&PTR_PTR_113405ec0);
      FUN_10bced744(ppuVar15,puVar10);
      plVar7[8] = (long)ppuVar15;
      if (*(long *)(puVar14 + 0x70) != 0) {
        FUN_10bd0e0c0(*(long *)(puVar14 + 0x70),ppuVar15);
        ppuVar15 = (undefined **)plVar7[8];
      }
      *(uint *)(puVar14 + 0x28) = *(uint *)(puVar14 + 0x28) & 0xfffffffe;
    }
    FUN_10bd05474(auStack_1c8,ppuVar15);
    if (iVar2 < 1000) {
      if ((undefined **)plVar7[8] != &PTR_PTR_113405ec0) {
        func_0x00010bd0b48c();
        func_0x00010bd0aadc(plVar8);
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
    puVar11 = auStack_1c8;
    FUN_10bd12878();
    if (puVar11 == (undefined1 *)0x0) {
      plVar7[9] = lVar16;
    }
    else {
      FUN_10bd1ae94(alStack_218,plVar8 + 4,lVar16,auStack_1c8);
      if (alStack_218[0] == 0) {
        plVar8 = alStack_218;
        FUN_10bd054a0();
        func_0x00010bd0ba58();
        plVar7[9] = (long)plVar8;
      }
      else {
        func_0x00010bd0b148(plVar8,plVar7[1],unaff_x20);
      }
      FUN_10bd054b8(alStack_218);
    }
    FUN_10bd12650(auStack_1c8);
    return;
  }
  func_0x0001088914a0(auStack_1c8,&UNK_10f8334a2);
  func_0x00010bd0a968();
  FUN_10bdb2a88(alStack_218);
  func_0x00010bd0c1c4();
  func_0x00010bd0ac68();
  FUN_10bd054b8();
  FUN_10bd12650(auStack_1c8);
  func_0x00010bd0a974();
  func_0x00010bd0a5fc();
  func_0x00010bd0a32c();
  return;
}



/* Entry: 10bd060c0; end: 10bd06337;  */

void FUN_10bd060c0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long alStack_e8 [10];
  undefined1 auStack_98 [40];
  uint uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  
  func_0x00010bd0c5d4();
  lVar6 = *(long *)(param_2 + 0x38);
  iVar1 = *(int *)(*(long *)(param_2 + 0x10) + 0x20);
  if (((*(byte *)(param_2 + 1) >> 4 & 1) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) {
    if ((*(byte *)(param_2 + 1) >> 3 & 1) == 0) {
      puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x30);
    }
    else {
      lVar2 = param_1;
      func_0x00010bd0b708();
      if (lVar2 == 0) {
        puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x90);
      }
      else {
        func_0x00010bd0b708();
        puVar5 = (undefined8 *)(lVar2 + 0x30);
      }
    }
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x28);
  }
  uVar7 = *puVar5;
  func_0x00010bd0ac34();
  *(undefined8 *)(unaff_x19 + 0x40) = extraout_x8;
  *(undefined8 *)(unaff_x19 + 0x48) = extraout_x8;
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    ppuVar8 = &PTR_PTR_113405ec0;
    if ((*(byte *)(lVar6 + 0x28) & 1) != 0) {
      ppuVar8 = *(undefined ***)(param_1 + 8);
      lVar2 = lVar6;
      func_0x00010bd047c0(lVar6,&PTR_PTR_113405ec0);
      FUN_10bced744(ppuVar8,lVar2);
      *(undefined ***)(unaff_x19 + 0x40) = ppuVar8;
      if (*(long *)(lVar6 + 0x70) != 0) {
        FUN_10bd0e0c0(*(long *)(lVar6 + 0x70),ppuVar8);
        ppuVar8 = *(undefined ***)(unaff_x19 + 0x40);
      }
      *(uint *)(lVar6 + 0x28) = *(uint *)(lVar6 + 0x28) & 0xfffffffe;
    }
    FUN_10bd05474(auStack_98,ppuVar8);
    if (iVar1 < 1000) {
      if (*(undefined ***)(unaff_x19 + 0x40) != &PTR_PTR_113405ec0) {
        func_0x00010bd0b48c();
        func_0x00010bd0aadc(param_1);
      }
      if (*(int *)(unaff_x20 + 0x54) == 2) {
        uStack_70 = uStack_70 | 1;
        uStack_68 = 3;
      }
      if (*(int *)(unaff_x20 + 0x58) == 10) {
        uStack_70 = uStack_70 | 0x10;
        uStack_58 = 2;
      }
      if (*(byte *)(lVar6 + 0x88) == 1) {
        uStack_70 = uStack_70 | 4;
        uStack_60 = 1;
      }
      if (((iVar1 == 999) && ((*(byte *)(lVar6 + 0x28) >> 4 & 1) != 0)) &&
         ((*(byte *)(lVar6 + 0x88) & 1) == 0)) {
        uStack_70 = uStack_70 | 4;
        uStack_60 = 2;
      }
    }
    puVar3 = auStack_98;
    FUN_10bd12878();
    if (puVar3 == (undefined1 *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x48) = uVar7;
    }
    else {
      FUN_10bd1ae94(alStack_e8,param_1 + 0x20,uVar7,auStack_98);
      if (alStack_e8[0] == 0) {
        plVar4 = alStack_e8;
        FUN_10bd054a0();
        func_0x00010bd0ba58();
        *(long **)(unaff_x19 + 0x48) = plVar4;
      }
      else {
        func_0x00010bd0b148(param_1,*(undefined8 *)(unaff_x19 + 8));
      }
      FUN_10bd054b8(alStack_e8);
    }
    FUN_10bd12650(auStack_98);
    return;
  }
  func_0x0001088914a0(auStack_98,&UNK_10f8334a2);
  func_0x00010bd0a968();
  FUN_10bdb2a88(alStack_e8);
  func_0x00010bd0c1c4();
  func_0x00010bd0ac68();
  FUN_10bd054b8();
  FUN_10bd12650(auStack_98);
  func_0x00010bd0a974();
  func_0x00010bd0a5fc();
  func_0x00010bd0a32c();
  return;
}



/* Entry: 10bd06338; end: 10bd06437;  */

void FUN_10bd06338(void)

{
  func_0x00010bd0a5fc();
  func_0x00010bd0a32c();
  return;
}



/* Entry: 10bd06438; end: 10bd06503;  */

void FUN_10bd06438(void)

{
  long unaff_x19;
  long unaff_x23;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a9cc();
  func_0x00010bd0b174();
  while (unaff_x23 < *(int *)(unaff_x19 + 4)) {
    func_0x00010bd0a1f8(*(undefined8 *)(unaff_x19 + 0x38));
    FUN_10bd06504();
    func_0x00010bd0b4f0();
  }
  func_0x00010bd0b174();
  while (unaff_x23 < *(int *)(unaff_x19 + 0x80)) {
    func_0x00010bd0a1f8(*(undefined8 *)(unaff_x19 + 0x48));
    FUN_10bd06438();
    func_0x00010bd0bca4();
  }
  func_0x00010bd0b174();
  for (; unaff_x23 < *(int *)(unaff_x19 + 0x8c); unaff_x23 = unaff_x23 + 1) {
    func_0x00010bd0aa7c(*(undefined8 *)(unaff_x19 + 0x60));
    FUN_10bd06504();
  }
  return;
}



/* Entry: 10bd06504; end: 10bd0650b;  */

void FUN_10bd06504(long *param_1,long param_2,long param_3)

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
    func_0x00010bd0ba10(*(undefined8 *)(param_3 + 0x28));
    FUN_10bcf6020();
    func_0x00010bd0adc4();
    if ((!(bool)uVar1) || ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x53) & 1) == 0)) {
      *(undefined1 *)(param_2 + 2) = 10;
    }
  }
  return;
}



/* Entry: 10bd0650c; end: 10bd06a7f;  */

void FUN_10bd0650c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
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
  long lVar12;
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
  
  func_0x00010bd0aa10();
  plVar11 = (long *)*param_1;
  func_0x00010bd0b6e4(*(undefined8 *)(param_2 + 8),&plStack_88);
  if (((*(byte *)(*plVar11 + 0x36) & 1) == 0) &&
     ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x54) & 1) == 0)) {
    func_0x00010bd0c3b0();
    FUN_10bcf96b0();
    func_0x00010bd0c3b0();
    FUN_10bcf96b0();
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
  puStack_f0 = &UNK_10e52b660;
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
    FUN_10bd002a4(&puStack_f0,uVar8);
  }
  lVar7 = 0;
  puVar10 = unaff_x20;
  do {
    if (*(int *)(unaff_x19 + 0x88) <= lVar7) {
LAB_10bd06900:
      func_0x00010bd00148(&puStack_f0);
      func_0x00010bd0b0d4();
      while (lVar7 < *(int *)(unaff_x19 + 0x84)) {
        func_0x00010bd0a260(*(undefined8 *)(unaff_x19 + 0x50));
        FUN_10bcfc6a4(*unaff_x20,extraout_x8_01 + (long)puVar10);
        func_0x00010bd0ab40();
      }
      func_0x00010bd0b0d4();
      while (lVar7 < *(int *)(unaff_x19 + 4)) {
        func_0x00010bd0a260(*(undefined8 *)(unaff_x19 + 0x38));
        func_0x00010bd0c364();
        func_0x00010bd0ab40();
      }
      func_0x00010bd0b0d4();
      for (; lVar7 < *(int *)(unaff_x19 + 0x80); lVar7 = lVar7 + 1) {
        func_0x00010bd0a260(*(undefined8 *)(unaff_x19 + 0x48));
        FUN_10bd0650c(unaff_x20,extraout_x8_02 + (long)puVar10);
        puVar10 = puVar10 + 0x13;
      }
      func_0x00010bd0b0d4();
      while (lVar7 < *(int *)(unaff_x19 + 0x8c)) {
        func_0x00010bd0a260(*(undefined8 *)(unaff_x19 + 0x60));
        func_0x00010bd0c364();
        func_0x00010bd0ab40();
      }
      return;
    }
    puVar10 = (undefined8 *)(*(long *)(unaff_x19 + 0x58) + lVar7 * 0x28);
    if (lStack_d0 + 1 < (long)*(int *)((long)puVar10 + 4)) {
      plStack_88 = &lStack_d0;
      FUN_10bcf56d0(plVar11,*(long *)(unaff_x19 + 8) + 0x18,param_3,1,&plStack_88,FUN_10bd08c6c);
    }
    lVar9 = puVar10[1];
    if (*(int *)(lVar9 + 0x38) != 0) {
      if (((*(byte *)(lVar9 + 0x28) >> 1 & 1) != 0) && (*(int *)(lVar9 + 0x68) == 1)) {
        func_0x00010bd0a414(*(undefined8 *)(unaff_x19 + 8));
        FUN_10bcf56d0(plVar11,extraout_x8_00 + 0x18);
        goto LAB_10bd06900;
      }
      lVar9 = *(long *)(unaff_x19 + 8);
      uVar8 = *(ulong *)(param_3 + 0x60);
      bVar4 = (uVar8 & 1) == 0;
      puVar2 = (ulong *)(param_3 + 0x60);
      if (!bVar4) {
        puVar2 = (ulong *)(uVar8 + lVar7 * 8 + 7);
      }
      uVar8 = *puVar2;
      plStack_88 = (long *)&UNK_10e52b660;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      func_0x00010bd0c480();
      plVar1 = extraout_x9;
      if (!bVar4) {
        plVar1 = extraout_x11;
      }
      for (puVar10 = (undefined8 *)(extraout_x8 << 3); puVar10 != (undefined8 *)0x0;
          puVar10 = puVar10 + -1) {
        lVar12 = *plVar1;
        iVar6 = *(int *)(lVar12 + 0x28);
        if (iVar6 < *(int *)(uVar8 + 0x20) || *(int *)(uVar8 + 0x24) <= iVar6) {
          alStack_a8[0] = lVar12;
          func_0x00010bd0b4a4();
          FUN_10bcf56d0();
          iVar6 = *(int *)(lVar12 + 0x28);
        }
        aiStack_c8[0] = iVar6;
        FUN_10bcdc448(alStack_a8,&plStack_88,aiStack_c8);
        if ((bStack_98 & 1) == 0) {
          alStack_a8[0] = lVar12;
          func_0x00010bd0b4a4();
          FUN_10bcf56d0();
        }
        uVar3 = *(uint *)(lVar12 + 0x10);
        if (((uVar3 ^ 0xffffffff) & 3) == 0) {
          FUN_10bd0579c(alStack_a8);
          if ((bStack_98 & 1) == 0) {
            alStack_a8[0] = lVar12;
            func_0x00010bd0b180(plVar11,*(ulong *)(lVar12 + 0x18) & 0xfffffffffffffffc);
            FUN_10bcf56d0();
            break;
          }
          func_0x00010bd0b7fc(*(undefined8 *)(lVar12 + 0x18));
          FUN_10bcfcbec(alStack_a8);
          if (cStack_90 == '\x01') {
            func_0x00010bd0bed8();
            func_0x00010bd0b180(plVar11,lVar9 + 0x18);
            FUN_10bcf56d0();
            func_0x00010bd0b880();
          }
          puVar5 = (undefined8 *)(*(ulong *)(lVar12 + 0x20) & 0xfffffffffffffffc);
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            puVar5 = (undefined8 *)*puVar5;
          }
          FUN_10bcfb170();
          if (((ulong)puVar5 & 1) == 0) {
            func_0x00010bd0b7fc(*(undefined8 *)(lVar12 + 0x20));
            FUN_10bcfcbec(aiStack_c8);
            func_0x000107c27c54(alStack_a8,aiStack_c8);
            func_0x00010bd0b880();
            if (cStack_90 == '\x01') {
              func_0x00010bd0bed8();
              func_0x00010bd0b180(plVar11,lVar9 + 0x18);
              FUN_10bcf56d0();
              func_0x00010bd0b880();
            }
          }
          func_0x000107c279a4(alStack_a8);
        }
        else if ((((uVar3 ^ (uVar3 & 2) >> 1) & 1) != 0) || ((*(byte *)(lVar12 + 0x2c) & 1) == 0)) {
          alStack_a8[0] = lVar12;
          func_0x00010bd0b4a4();
          FUN_10bcf56d0();
        }
        plVar1 = plVar1 + 1;
      }
      func_0x00010bcdb384(&plStack_88);
    }
    lVar7 = lVar7 + 1;
  } while( true );
}



/* Entry: 10bd06a80; end: 10bd06d6b;  */

void FUN_10bd06a80(void)

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
  
  func_0x00010bd0c370();
  func_0x00010bd0a9cc();
  func_0x00010bd0c4ac();
  if (!(bool)in_ZR) {
    func_0x00010bd0bcd0();
    func_0x00010bd0a658();
    func_0x00010bd0a93c();
  }
  func_0x00010bd0b588();
  while (unaff_x24 < *(int *)(unaff_x19 + 0x84)) {
    func_0x00010bd0a480(*(undefined8 *)(unaff_x19 + 0x50));
    func_0x00010bd06ca0();
    func_0x00010bd0bc34();
  }
  func_0x00010bd0b588();
  for (; unaff_x24 < *(int *)(unaff_x19 + 0x78); unaff_x24 = unaff_x24 + 1) {
    if (*(long *)(*(long *)(unaff_x19 + 0x40) + unaff_x23 + 0x20) != unaff_x22) {
      func_0x00010bd0b7b0();
      func_0x00010bd0a658();
      func_0x00010bd0a93c();
    }
    unaff_x23 = unaff_x23 + 0x38;
  }
  func_0x00010bd0b588();
  while (unaff_x24 < *(int *)(unaff_x19 + 4)) {
    func_0x00010bd0a480(*(undefined8 *)(unaff_x19 + 0x38));
    func_0x00010bd0c32c();
    func_0x00010bd0bc34();
  }
  func_0x00010bd0b588();
  for (; unaff_x24 < *(int *)(unaff_x19 + 0x80); unaff_x24 = unaff_x24 + 1) {
    func_0x00010bd0a480(*(undefined8 *)(unaff_x19 + 0x48));
    FUN_10bd06a80();
    unaff_x23 = unaff_x23 + 0x98;
  }
  func_0x00010bd0b588();
  while (unaff_x24 < *(int *)(unaff_x19 + 0x8c)) {
    func_0x00010bd0a480(*(undefined8 *)(unaff_x19 + 0x60));
    func_0x00010bd0c32c();
    func_0x00010bd0bc34();
  }
  func_0x00010bd0b588();
  for (; unaff_x24 < *(int *)(unaff_x19 + 0x88); unaff_x24 = unaff_x24 + 1) {
    if (*(long *)(*(long *)(unaff_x19 + 0x58) + unaff_x23 + 0x18) != unaff_x22) {
      func_0x00010bd0bc54();
      lVar1 = *(long *)(*(long *)(extraout_x9 + 0x10) + 8);
      lVar2 = (long)*(char *)(lVar1 + 0x2f);
      if (lVar2 < 0) {
        lVar2 = *(long *)(lVar1 + 0x20);
      }
      func_0x00010bd0a658(lVar2,*(undefined8 *)(*unaff_x20 + 0x10),
                          *(undefined8 *)(*(long *)(extraout_x9 + 0x10) + 0x10));
      func_0x00010bd0a93c();
    }
    unaff_x23 = unaff_x23 + 0x28;
  }
  return;
}



/* Entry: 10bd06d6c; end: 10bd06de3;  */

void FUN_10bd06d6c(long *param_1,long param_2)

{
  if (*(undefined ***)(param_2 + 0x40) != &PTR_PTR_113405ec0) {
    func_0x00010bd0b244(*(undefined8 *)(param_1[1] + 0xb0),*(undefined8 *)(*param_1 + 0x10),
                        *(undefined8 *)(param_2 + 0x10));
    func_0x00010bd0a93c();
  }
  return;
}



/* Entry: 10bd06de4; end: 10bd06f7f;  */

void FUN_10bd06de4(long param_1,undefined8 param_2)

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
  
  func_0x00010bd0af48();
  puVar12 = (undefined8 *)(param_1 + 0xa0);
  Hint_Prefetch(*puVar12,0,2,0);
  FUN_10bcfe660(*puVar12,param_2);
  func_0x00010bd0aba8(0);
  do {
    func_0x00010bd0bcf4();
    for (uVar8 = extraout_x12; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar9 = *(long *)(unaff_x20 + 0xa8);
      puVar5 = (undefined8 *)
               (extraout_x11 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x10);
      if (*(long *)(lVar9 + (long)puVar5 * 0x20) == unaff_x21) goto LAB_10bd06e90;
    }
    func_0x00010bd0b32c();
  } while ((extraout_x12_00 & 1) == 0);
  FUN_10bd06f80();
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xa8) + (long)puVar12 * 0x20);
  *plVar1 = unaff_x21;
  plVar1[1] = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  lVar9 = *(long *)(unaff_x20 + 0xa8);
  puVar5 = puVar12;
LAB_10bd06e90:
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
      FUN_10bd07058();
LAB_10bd06f7c:
      func_0x000104bd35f4();
      pcStack_48 = FUN_10bd06f80;
      pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
      func_0x000107c3a644();
      func_0x000107c3a698();
      if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)uVar4)) {
        func_0x000107c3a694();
        if (((bool)uVar3) && (func_0x000107c3a654(), (bool)uVar3)) {
          func_0x00010bd0a56c();
        }
        else {
          func_0x000107c3a664();
          FUN_10bd06ff0();
        }
        func_0x000107c3a660();
      }
      func_0x000107c3a634();
      func_0x000107c3a63c();
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      pcVar7 = FUN_10bd06ff0;
      func_0x000107c3a6d8();
      pppuStack_50 = &pppuStack_50;
      pcStack_48 = pcVar7;
      func_0x000107c3a658();
      func_0x000107c3a6a0();
      while (unaff_x23 != unaff_x24) {
        if (-1 < *(char *)(lVar9 + unaff_x24)) {
          func_0x00010bcfe658(lVar10);
          func_0x000107c3a65c();
          func_0x000107c3a638((uint)lVar11 & 0x7f);
          func_0x000107c3a6d0();
          FUN_10bcfe684();
        }
        func_0x000107c3a6c8();
      }
      if (unaff_x23 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar9 + -8);
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
      if (0x555555555555555 < unaff_x23) goto LAB_10bd06f7c;
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
    func_0x000107c3a68c();
    _memcpy();
    *(undefined8 **)(lVar9 + 8) = puVar5 + (lVar11 / -0x30) * 6;
    *(undefined8 **)(lVar9 + 0x10) = puVar12;
    *(ulong *)(lVar9 + 0x18) = lVar6 + unaff_x23 * 0x30;
    if (lVar10 != 0) {
      func_0x00010bd0b404();
    }
  }
  *(undefined8 **)(lVar9 + 0x10) = puVar12;
  return;
}



/* Entry: 10bd06f80; end: 10bd06fef;  */

void FUN_10bd06f80(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a644();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a56c();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd06ff0();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010bcfe658();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      func_0x000107c3a6d0();
      FUN_10bcfe684();
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd06ff0; end: 10bd07057;  */

void FUN_10bd06ff0(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010bcfe658();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      func_0x000107c3a6d0();
      FUN_10bcfe684();
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd07058; end: 10bd07063;  */

void FUN_10bd07058(void)

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
  long *unaff_x19;
  undefined8 uStack_110;
  
  func_0x00010bd0a5f0();
  func_0x00010bd09f90();
  func_0x00010bd0b064();
  func_0x00010bd0c1b0();
  func_0x00010bd0b37c(*(undefined4 *)(*unaff_x19 + 0x1c));
  func_0x00010bd0b5b8();
  func_0x00010bd0b204();
  func_0x00010bd0a758();
  func_0x00010bd0b740();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd0a2e8(uStack_110);
  func_0x000107c3a6e8();
  func_0x00010ae8cb8c();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0a688();
    func_0x00010bd0ac48();
    func_0x00010bd0b088();
    uVar1 = extraout_x13;
    uVar2 = extraout_x12;
    if (in_NG == in_OV) {
      uVar1 = extraout_x10;
      uVar2 = extraout_x9;
    }
    func_0x000107c3a6e8(extraout_x8,&UNK_10f8335ed,0x2b,uVar2,uVar1);
    FUN_10bcefbcc();
    return;
  }
  return;
}



/* Entry: 10bd07064; end: 10bd070c7;  */

void FUN_10bd07064(void)

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
  long *unaff_x19;
  undefined8 uStack_100;
  
  func_0x00010bd09f90();
  func_0x00010bd0b064();
  func_0x00010bd0c1b0();
  func_0x00010bd0b37c(*(undefined4 *)(*unaff_x19 + 0x1c));
  func_0x00010bd0b5b8();
  func_0x00010bd0b204();
  func_0x00010bd0a758();
  func_0x00010bd0b740();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd0a2e8(uStack_100);
  func_0x000107c3a6e8();
  func_0x00010ae8cb8c();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0a688();
    func_0x00010bd0ac48();
    func_0x00010bd0b088();
    uVar1 = extraout_x13;
    uVar2 = extraout_x12;
    if (in_NG == in_OV) {
      uVar1 = extraout_x10;
      uVar2 = extraout_x9;
    }
    func_0x000107c3a6e8(extraout_x8,&UNK_10f8335ed,0x2b,uVar2,uVar1);
    FUN_10bcefbcc();
    return;
  }
  return;
}



/* Entry: 10bd070c8; end: 10bd0712f;  */

void FUN_10bd070c8(void)

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
  
  func_0x00010bd0a2e8(in_stack_00000010);
  func_0x000107c3a6e8();
  func_0x00010ae8cb8c();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0a688();
    func_0x00010bd0ac48();
    func_0x00010bd0b088();
    uVar1 = extraout_x13;
    uVar2 = extraout_x12;
    if (in_NG == in_OV) {
      uVar1 = extraout_x10;
      uVar2 = extraout_x9;
    }
    func_0x000107c3a6e8(extraout_x8,&UNK_10f8335ed,0x2b,uVar2,uVar1);
    FUN_10bcefbcc();
    return;
  }
  return;
}



/* Entry: 10bd07130; end: 10bd07153;  */

void FUN_10bd07130(void)

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
  
  func_0x00010bd0b088();
  uVar1 = extraout_x13;
  uVar2 = extraout_x12;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    uVar2 = extraout_x9;
  }
  func_0x000107c3a6e8(extraout_x8,&UNK_10f8335ed,0x2b,uVar2,uVar1);
  FUN_10bcefbcc();
  return;
}



/* Entry: 10bd07154; end: 10bd0717b;  */

void FUN_10bd07154(void)

{
  func_0x000107c3a6e8();
  FUN_10bcefbcc();
  return;
}



/* Entry: 10bd0717c; end: 10bd071eb;  */

void FUN_10bd0717c(long param_1)

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
  
  func_0x000107c3a644();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a56c();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd071ec();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107c3a68c();
      FUN_10bd044a0();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      puVar1 = (undefined8 *)(unaff_x25 + param_1 * 0x20);
      uVar2 = *unaff_x20;
      uVar4 = unaff_x20[3];
      uVar3 = unaff_x20[2];
      puVar1[1] = unaff_x20[1];
      *puVar1 = uVar2;
      puVar1[3] = uVar4;
      puVar1[2] = uVar3;
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd071ec; end: 10bd07257;  */

void FUN_10bd071ec(long param_1)

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
  
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107c3a68c();
      FUN_10bd044a0();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      puVar1 = (undefined8 *)(unaff_x25 + param_1 * 0x20);
      uVar2 = *unaff_x20;
      uVar4 = unaff_x20[3];
      uVar3 = unaff_x20[2];
      puVar1[1] = unaff_x20[1];
      *puVar1 = uVar2;
      puVar1[3] = uVar4;
      puVar1[2] = uVar3;
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd07258; end: 10bd0725f;  */

void FUN_10bd07258(void)

{
  func_0x00010bd0b8a4();
  return;
}



/* Entry: 10bd07260; end: 10bd0733b;  */

void FUN_10bd07260(void)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 extraout_x9;
  undefined8 extraout_x12;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010bd09f90();
  func_0x00010bd0a85c();
  func_0x00010bd0add0();
  func_0x00010bd0b5b8();
  func_0x00010bd0ab7c(*(undefined8 *)(unaff_x19 + 8));
  uVar1 = extraout_x12;
  if (in_NG == in_OV) {
    uVar1 = extraout_x9;
  }
  func_0x00010bd0b204();
  FUN_10bd070c8();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd0a180();
  func_0x00010bd0ab7c(*unaff_x20);
  func_0x00010bd0a72c();
  func_0x00010bd0b420(uVar1,&UNK_10f83364c,0x23);
  func_0x00010bd09ff8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c3a6e8();
    FUN_10bcf1384();
    return;
  }
  return;
}



/* Entry: 10bd0733c; end: 10bd07363;  */

void FUN_10bd0733c(void)

{
  func_0x000107c3a6e8();
  FUN_10bcf1384();
  return;
}



/* Entry: 10bd07364; end: 10bd0738f;  */

void FUN_10bd07364(void)

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
  
  func_0x00010bd0b088();
  uVar1 = extraout_x13;
  uVar2 = extraout_x12;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    uVar2 = extraout_x9;
  }
  func_0x000107c3a6e8(extraout_x8,&UNK_10f833670,0x1c,uVar2,uVar1);
  FUN_10bcefbcc();
  return;
}



/* Entry: 10bd07390; end: 10bd0746f;  */

void FUN_10bd07390(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong uStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  
  func_0x00010bd09f90();
  func_0x00010bd0a85c();
  func_0x00010bd0add0();
  func_0x00010bd0b37c(*(undefined4 *)(extraout_x8 + 4));
  func_0x00010bd0b948();
  func_0x00010bd0b5b8();
  func_0x00010bd0b948();
  func_0x00010bd0b204();
  func_0x00010bd0a758();
  FUN_10bd070c8();
  func_0x00010bd09ff8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_118 = 0x10bd07400;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x00010bd09f90();
    func_0x00010bd0a85c();
    func_0x00010bd0add0();
    func_0x00010bd0b37c(*(undefined4 *)(extraout_x8_00 + 4));
    func_0x00010bd0b948();
    func_0x00010bd0b5b8();
    func_0x00010bd0b948();
    func_0x00010bd0b204();
    func_0x00010bd0a758();
    plVar1 = unaff_x20;
    FUN_10bd070c8();
    func_0x00010bd09ff8();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar3 = &UNK_10f833714;
      uVar4 = *(ulong *)(*plVar1 + 0x18) & 0xfffffffffffffffc;
      lVar5 = plVar1[1] + 8;
      pcStack_228 = FUN_10bd07470;
      uVar2 = extraout_x8_01;
      ppuStack_230 = &puStack_120;
      func_0x00010bd0a30c(extraout_x8_01,&UNK_10f833714,0x69);
      puStack_250 = &UNK_100746d14;
      puStack_240 = &UNK_100746d14;
      uStack_258 = uVar4;
      lStack_248 = lVar5;
      uStack_238 = extraout_x8_02;
      func_0x000107c2b99c(uVar2,puVar3,extraout_x9,&uStack_258,2);
      func_0x000107c3a64c(uStack_238);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000107c3a644();
      func_0x000107c3a698();
      if ((extraout_x9_00 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
        func_0x000107c3a694();
        if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
          func_0x00010bd0a56c();
        }
        else {
          func_0x000107c3a664();
          FUN_10bd07564();
        }
        func_0x000107c3a660();
      }
      func_0x000107c3a634();
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107c3a6d8();
        func_0x00010bd0a33c();
        func_0x000107367a70();
        func_0x000107c3a6a0();
        for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
          if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
            func_0x000107c3a68c();
            FUN_10bd075d8();
            func_0x000107c3a65c();
            func_0x000107c3a638(unaff_w21 & 0x7f);
            puVar3 = (undefined *)(unaff_x25 + (long)puVar3 * 0x40);
            func_0x00010bd075f0(puVar3,unaff_x20);
          }
          unaff_x20 = unaff_x20 + 8;
        }
        if (unaff_x23 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10bd07470; end: 10bd07493;  */

void FUN_10bd07470(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong uStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puVar1 = &UNK_10f833714;
  uVar2 = *(ulong *)(*param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = param_2[1] + 8;
  func_0x00010bd0a30c(param_1,&UNK_10f833714,0x69);
  puStack_30 = &UNK_100746d14;
  puStack_20 = &UNK_100746d14;
  uStack_38 = uVar2;
  lStack_28 = lVar3;
  uStack_18 = extraout_x8;
  func_0x000107c2b99c(param_1,puVar1,extraout_x9,&uStack_38,2);
  func_0x000107c3a64c(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a644();
  func_0x000107c3a698();
  if ((extraout_x9_00 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a56c();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd07564();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x00010bd0a33c();
  func_0x000107367a70();
  func_0x000107c3a6a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107c3a68c();
      FUN_10bd075d8();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      puVar1 = (undefined *)(unaff_x25 + (long)puVar1 * 0x40);
      func_0x00010bd075f0(puVar1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd07494; end: 10bd074eb;  */

void FUN_10bd07494(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  func_0x00010bd0a30c();
  puStack_30 = &UNK_100746d14;
  puStack_20 = &UNK_100746d14;
  uStack_38 = param_4;
  uStack_28 = param_5;
  uStack_18 = extraout_x8;
  func_0x000107c2b99c(param_1,param_2,extraout_x9,&uStack_38,2);
  func_0x000107c3a64c(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a644();
  func_0x000107c3a698();
  if ((extraout_x9_00 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a56c();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd07564();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x00010bd0a33c();
  func_0x000107367a70();
  func_0x000107c3a6a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107c3a68c();
      FUN_10bd075d8();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      param_2 = unaff_x25 + param_2 * 0x40;
      func_0x00010bd075f0(param_2,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd074ec; end: 10bd07563;  */

void FUN_10bd074ec(long param_1)

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
  
  func_0x000107c3a644();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a56c();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd07564();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x00010bd0a33c();
  func_0x000107367a70();
  func_0x000107c3a6a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107c3a68c();
      FUN_10bd075d8();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      param_1 = unaff_x25 + param_1 * 0x40;
      func_0x00010bd075f0(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd07564; end: 10bd075d7;  */

void FUN_10bd07564(long param_1)

{
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a33c();
  func_0x000107367a70();
  func_0x000107c3a6a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107c3a68c();
      FUN_10bd075d8();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      param_1 = unaff_x25 + param_1 * 0x40;
      func_0x00010bd075f0(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd075d8; end: 10bd0763b;  */

void FUN_10bd075d8(undefined8 param_1,undefined8 param_2)

{
  char in_NG;
  char in_OV;
  undefined8 extraout_x10;
  undefined8 auStack_20 [2];
  
  func_0x000107c3a6b0();
  auStack_20[0] = extraout_x10;
  if (in_NG == in_OV) {
    auStack_20[0] = param_2;
  }
  func_0x000100062cf8(auStack_20);
  return;
}



/* Entry: 10bd0763c; end: 10bd077bf;  */

undefined * FUN_10bd0763c(long *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  char **ppcVar4;
  long *unaff_x19;
  long *unaff_x20;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  char *pcStack_118;
  undefined8 uStack_110;
  char *pcStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 auStack_c8 [48];
  char **ppcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  char **ppcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  undefined1 *puStack_48;
  undefined *puStack_40;
  
  func_0x00010bd0a10c();
  bVar1 = *(char *)(*param_1 + 0x20) == '\0';
  pcStack_108 = "custom";
  if (bVar1) {
    pcStack_108 = "default";
  }
  uStack_100 = 6;
  if (bVar1) {
    uStack_100 = 7;
  }
  param_1 = param_1 + 1;
  uVar2 = *(char *)(*param_1 + 0x20) == '\0';
  pcStack_118 = "custom";
  if ((bool)uVar2) {
    pcStack_118 = "default";
  }
  uStack_110 = 6;
  if ((bool)uVar2) {
    uStack_110 = 7;
  }
  func_0x00010bd0b5a0();
  func_0x00010bd0b974();
  uVar3 = *unaff_x20 + 8;
  lVar6 = *param_1 + 8;
  func_0x000107c278d0();
  if ((uVar3 & 1) == 0) {
    ppcVar4 = (char **)&UNK_10f83377e;
    func_0x000107c284bc();
    ppcStack_98 = ppcVar4;
    puStack_90 = (undefined *)lVar6;
    func_0x00010bd0a06c();
    puVar5 = &UNK_10f5af6d9;
    func_0x000107c284bc();
    puStack_f8 = puVar5;
    lStack_f0 = lVar6;
    func_0x000107c2ba44(auStack_148,&ppcStack_98,auStack_c8,&puStack_f8);
    func_0x000107c27b9c(auStack_130,auStack_148);
    func_0x00010bd0aab8();
  }
  uStack_88 = *(ulong *)(unaff_x20[2] + 0x18) & 0xfffffffffffffffc;
  uStack_58 = *(ulong *)(*(long *)unaff_x20[1] + 0x18) & 0xfffffffffffffffc;
  lStack_78 = *unaff_x20 + 8;
  ppcStack_98 = &pcStack_108;
  puStack_90 = &UNK_1004d504c;
  puStack_80 = &UNK_100746d14;
  puStack_70 = &UNK_100746d14;
  ppcStack_68 = &pcStack_118;
  puStack_60 = &UNK_1004d504c;
  puStack_50 = &UNK_100746d14;
  puStack_48 = auStack_130;
  puStack_40 = &UNK_100746d14;
  puVar5 = &UNK_10f833782;
  func_0x000107c2b99c(&UNK_10f833782,0x56,&ppcStack_98,6);
  func_0x00010bd0aad4();
  func_0x00010bd09ff8();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010bd0aa70();
    func_0x00010bd0a974();
    func_0x00010bd0afbc();
    lVar6 = 0;
    puVar5 = (undefined *)0x0;
    do {
      if ((undefined *)((unaff_x19[1] - *unaff_x19) / 0x18) <= puVar5) {
        func_0x00010bd0ac5c();
        func_0x000107c27940();
        return (undefined *)((unaff_x19[1] - *unaff_x19) / 0x18 + -1);
      }
      if (puVar5 != (undefined *)0x1) {
        uVar3 = *unaff_x19 + lVar6;
        func_0x000107c278d0(uVar3,param_1);
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



/* Entry: 10bd077c0; end: 10bd07843;  */

ulong FUN_10bd077c0(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong uVar2;
  
  func_0x00010bd0afbc();
  uVar2 = 0;
  while( true ) {
    uVar1 = *unaff_x19;
    if ((ulong)((long)(unaff_x19[1] - uVar1) / 0x18) <= uVar2) {
      func_0x00010bd0ac5c();
      func_0x000107c27940();
      return (long)(unaff_x19[1] - *unaff_x19) / 0x18 - 1;
    }
    if ((uVar2 != 1) && (func_0x000107c278d0(), (uVar1 & 1) != 0)) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* Entry: 10bd07844; end: 10bd07a57;  */

void FUN_10bd07844(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined *puVar2;
  code *pcVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  undefined8 extraout_x11;
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
  
  func_0x00010bd09f5c();
  puVar2 = &UNK_10f8337d9;
  func_0x000107c284bc();
  puStack_58 = puVar2;
  uStack_50 = param_2;
  func_0x00010bd0add0();
  func_0x00010bd09fa8(*(undefined8 *)(extraout_x8 + 8));
  func_0x00010bd0aa1c();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_98 = 0x10bd07890;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010bd09f5c();
  func_0x000107c284bc(&UNK_10f833821);
  func_0x00010bd0a37c();
  func_0x00010bd09fa8();
  func_0x000107c284bc(&UNK_10f833830);
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_158 = 0x10bd078e4;
    ppuStack_160 = &puStack_a0;
    func_0x00010bd09f5c();
    func_0x000107c284bc(&UNK_10f833845);
    func_0x00010bd0aac0();
    func_0x00010bd0a0f8(*(ulong *)(extraout_x8_00 + 0x30) & 0xfffffffffffffffc);
    uVar1 = extraout_x11;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_01;
    }
    func_0x00010bd0a360(uVar1);
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_218 = 0x10bd07938;
      pppuStack_220 = &ppuStack_160;
      func_0x00010bd0a0d0();
      func_0x00010bcff8a4(&uStack_268,0x1fffffff);
      FUN_10bd07154(extraout_x8_02,&UNK_10f833864,0x28,uStack_268,uStack_260);
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uStack_278 = 0x10bd07988;
        ppppuStack_280 = &pppuStack_220;
        func_0x00010bd09f5c();
        func_0x00010bd0adfc();
        func_0x00010bd0b0c8(*(undefined8 *)(extraout_x8_02 + 8));
        func_0x00010bd0a0f8();
        FUN_10bd0733c();
        func_0x000107c3a63c();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          pcStack_2d8 = (code *)0x10bd079e8;
          ppppuStack_2e0 = &ppppuStack_280;
          func_0x000107c3a644();
          func_0x000107c3a698();
          if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
            func_0x000107c3a694();
            if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
              func_0x00010bd0a56c();
            }
            else {
              func_0x000107c3a664();
              FUN_10bd07a58();
            }
            func_0x000107c3a660();
          }
          func_0x000107c3a634();
          func_0x000107c3a63c();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            pcVar3 = FUN_10bd07a58;
            func_0x000107c3a6d8();
            ppppuStack_2e0 = &ppppuStack_2e0;
            pcStack_2d8 = pcVar3;
            func_0x000107c3a658();
            func_0x000107c3a6a0();
            while (unaff_x23 != unaff_x24) {
              if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
                func_0x000107c3a68c();
                FUN_10bd07ac0();
                func_0x000107c3a65c();
                func_0x000107c3a638(unaff_w21 & 0x7f);
                func_0x000107c3a6d0();
                func_0x00010bd07ad8();
              }
              func_0x000107c3a6c8();
            }
            if (unaff_x23 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
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



/* Entry: 10bd07a58; end: 10bd07abf;  */

void FUN_10bd07a58(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107c3a68c();
      FUN_10bd07ac0();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      func_0x000107c3a6d0();
      func_0x00010bd07ad8();
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd07ac0; end: 10bd07b17;  */

void FUN_10bd07ac0(undefined8 param_1,undefined8 param_2)

{
  char in_NG;
  char in_OV;
  undefined8 extraout_x10;
  undefined8 auStack_20 [2];
  
  func_0x000107c3a6b0();
  auStack_20[0] = extraout_x10;
  if (in_NG == in_OV) {
    auStack_20[0] = param_2;
  }
  func_0x000100062cf8(auStack_20);
  return;
}



/* Entry: 10bd07b18; end: 10bd07b7b;  */

void FUN_10bd07b18(void)

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
  long *unaff_x19;
  undefined1 auStack_98 [104];
  
  func_0x00010bd09f90();
  func_0x00010bd0b064();
  func_0x00010bd0c1b0();
  func_0x00010bcff8a4(auStack_98,*(undefined4 *)(*unaff_x19 + 0x1c));
  func_0x00010bd0b5b8();
  func_0x00010bd0b204();
  func_0x00010bd0a758();
  func_0x00010bd0b740();
  func_0x00010bd09ff8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0b088();
    uVar1 = extraout_x13;
    uVar2 = extraout_x12;
    if (in_NG == in_OV) {
      uVar1 = extraout_x10;
      uVar2 = extraout_x9;
    }
    func_0x000107c3a6e8(extraout_x8,&UNK_10f83398c,0x2b,uVar2,uVar1);
    FUN_10bcefbcc();
    return;
  }
  return;
}



/* Entry: 10bd07b7c; end: 10bd07b9f;  */

void FUN_10bd07b7c(void)

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
  
  func_0x00010bd0b088();
  uVar1 = extraout_x13;
  uVar2 = extraout_x12;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    uVar2 = extraout_x9;
  }
  func_0x000107c3a6e8(extraout_x8,&UNK_10f83398c,0x2b,uVar2,uVar1);
  FUN_10bcefbcc();
  return;
}



/* Entry: 10bd07ba0; end: 10bd07bf7;  */

void FUN_10bd07ba0(undefined8 *param_1)

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
  
  func_0x00010bd0a180();
  func_0x00010bd0ab7c(*param_1);
  func_0x00010bd0a72c();
  func_0x00010bd0b420();
  func_0x00010bd09ff8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0b088();
    uVar1 = extraout_x13;
    uVar2 = extraout_x12;
    if (in_NG == in_OV) {
      uVar1 = extraout_x10;
      uVar2 = extraout_x9;
    }
    func_0x000107c3a6e8(extraout_x8,&UNK_10f8339e1,0x1c,uVar2,uVar1);
    FUN_10bcefbcc();
    return;
  }
  return;
}



/* Entry: 10bd07bf8; end: 10bd07c23;  */

void FUN_10bd07bf8(void)

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
  
  func_0x00010bd0b088();
  uVar1 = extraout_x13;
  uVar2 = extraout_x12;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    uVar2 = extraout_x9;
  }
  func_0x000107c3a6e8(extraout_x8,&UNK_10f8339e1,0x1c,uVar2,uVar1);
  FUN_10bcefbcc();
  return;
}



/* Entry: 10bd07c24; end: 10bd07cbb;  */

void FUN_10bd07c24(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  
  func_0x00010bd0a10c();
  func_0x000107c284bc();
  func_0x00010bd0a99c();
  func_0x00010bd09fc4();
  func_0x000107c284bc(&UNK_10f833a82);
  func_0x00010bd0bd3c();
  func_0x00010bd09fc4();
  puVar3 = (undefined8 *)&UNK_10f833a9b;
  func_0x000107c284bc();
  puVar5 = *(undefined8 **)(**(long **)(unaff_x20 + 0x10) + 8);
  puVar4 = &UNK_10f830b29;
  func_0x00010bd0a628();
  FUN_10bd07cbc();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd0a0d0();
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
  func_0x000107c284bc();
  puStack_170 = puVar4;
  puStack_168 = param_2;
  func_0x00010ae8c7e0(extraout_x8,&uStack_1d0,7);
  func_0x000107c3a63c();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010bd0b088();
    func_0x00010bd0b088();
    func_0x000107c3a6e8(extraout_x8_00,&UNK_10f833aaf,0x82);
    FUN_10bcf1384();
    return;
  }
  return;
}



/* Entry: 10bd07cbc; end: 10bd07d3f;  */

void FUN_10bd07cbc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
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
  undefined8 *puStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  func_0x00010bd0a0d0();
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_68 = param_5[1];
  uStack_70 = *param_5;
  uStack_58 = param_6[1];
  uStack_60 = *param_6;
  bVar1 = *(byte *)((long)param_7 + 0x17);
  uVar2 = bVar1 == 0;
  uStack_48 = param_7[1];
  puStack_50 = (undefined8 *)*param_7;
  if (-1 < (char)bVar1) {
    uStack_48 = (ulong)bVar1;
    puStack_50 = param_7;
  }
  func_0x000107c284bc();
  uStack_40 = param_8;
  puStack_38 = param_3;
  func_0x00010ae8c7e0(param_1,&uStack_a0,7);
  func_0x000107c3a63c();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010bd0b088();
    func_0x00010bd0b088();
    func_0x000107c3a6e8(extraout_x8,&UNK_10f833aaf,0x82);
    FUN_10bcf1384();
    return;
  }
  return;
}



/* Entry: 10bd07d40; end: 10bd07da3;  */

void FUN_10bd07d40(void)

{
  undefined8 extraout_x8;
  
  func_0x00010bd0b088();
  func_0x00010bd0b088();
  func_0x000107c3a6e8(extraout_x8,&UNK_10f833aaf,0x82);
  FUN_10bcf1384();
  return;
}



/* Entry: 10bd07da4; end: 10bd07f43;  */

void FUN_10bd07da4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 extraout_x10;
  undefined8 extraout_x13;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd0a10c();
  func_0x00010bd0a43c();
  func_0x00010bd0b204();
  func_0x00010bd0aaac(*(undefined8 *)(unaff_x20 + 8));
  func_0x00010bd0c52c();
  uVar1 = extraout_x13;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
  }
  func_0x00010bd0af98(uVar1);
  func_0x00010bd0c22c();
  func_0x00010bd09ff8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd09f90();
    func_0x00010bd0b064();
    func_0x00010bd0a43c();
    func_0x00010bd0b204();
    func_0x00010bd0af98(*(undefined8 *)(*(long *)(unaff_x19 + 8) + 8));
    puVar4 = &UNK_10f833b71;
    func_0x00010bd0c22c();
    func_0x00010bd09ff8();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd09f90();
      func_0x00010bd0b064();
      func_0x00010bd0a43c();
      func_0x00010bd0a72c();
      uVar3 = **(char **)(unaff_x19 + 8) == '\0';
      puVar2 = &DAT_10f52a065;
      if ((bool)uVar3) {
        puVar2 = &DAT_10f2f6a0f;
      }
      func_0x000107c284bc(puVar2);
      func_0x00010bd0c220();
      func_0x00010bd09ff8();
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        func_0x000107c3a6e8(puVar4);
        FUN_10bcf1514();
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10bd07f44; end: 10bd07f77;  */

void FUN_10bd07f44(void)

{
  undefined8 in_stack_00000000;
  
  func_0x000107c3a6e8(in_stack_00000000);
  FUN_10bcf1514();
  return;
}



/* Entry: 10bd07f78; end: 10bd07fbf;  */

void FUN_10bd07f78(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  long *extraout_x9;
  undefined8 *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x10;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 extraout_x11_03;
  long unaff_x19;
  int *piVar14;
  undefined1 auStack_8e8 [16];
  undefined1 auStack_8d8 [8];
  undefined1 auStack_8d0 [256];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [56];
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  
  FUN_10bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd0a0f8(*(ulong *)(extraout_x8 + 0x20) & 0xfffffffffffffffc);
  uVar2 = extraout_x11;
  if (in_NG == in_OV) {
    uVar2 = extraout_x8_00;
  }
  func_0x00010bd0a884(uVar2);
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0a180();
    func_0x00010bd0b0f0();
    func_0x00010bd0a43c();
    plVar11 = extraout_x10;
    if (in_NG == in_OV) {
      plVar11 = extraout_x9;
    }
    func_0x00010bd0a72c();
    func_0x00010bd0b420();
    func_0x00010bd09ff8();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    FUN_10bd09f38();
    func_0x00010bd0aac0();
    func_0x00010bd0a0f8(*(ulong *)(extraout_x8_01 + 0x28) & 0xfffffffffffffffc);
    func_0x000107c284bc(&UNK_10f833c30);
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      FUN_10bd09f38();
      func_0x00010bd0aac0();
      func_0x00010bd0a0f8(*(ulong *)(extraout_x8_02 + 0x28) & 0xfffffffffffffffc);
      uVar2 = extraout_x11_00;
      if (in_NG == in_OV) {
        uVar2 = extraout_x8_03;
      }
      func_0x00010bd0a884(uVar2);
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        FUN_10bd09f38();
        func_0x00010bd0aac0();
        func_0x00010bd0a0f8(*(ulong *)(extraout_x8_04 + 0x28) & 0xfffffffffffffffc);
        puVar10 = &UNK_10f833c41;
        func_0x000107c284bc();
        func_0x00010bd09f78();
        func_0x000107c3a63c();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010bd0a10c();
          func_0x00010bd0ad34();
          func_0x00010bd0ac98();
          func_0x00010bd09fa8(*(undefined8 *)(puVar10 + 8));
          func_0x00010bd0b44c();
          func_0x00010bd0bd3c();
          func_0x00010bd0a0f8(*(ulong *)(extraout_x8_05 + 0x30) & 0xfffffffffffffffc);
          uVar2 = extraout_x11_01;
          if (in_NG == in_OV) {
            uVar2 = extraout_x8_06;
          }
          func_0x00010bd0a360(uVar2);
          func_0x00010bd0a628();
          func_0x00010bd0b1a4();
          func_0x00010bd09ff8();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010bd09f5c();
          func_0x00010bd0b0f0();
          func_0x00010bd0a72c();
          func_0x00010bd0aaac(*(undefined8 *)(unaff_x19 + 8));
          func_0x00010bd0c52c();
          func_0x00010bd09fdc(*extraout_x9_00);
          FUN_10bd07f44(plVar11,&UNK_10f833c7b,0x44,uStack_4f8,uStack_4f0);
          func_0x000107c3a63c();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010bd09f5c();
            func_0x00010bd0b0f0();
            func_0x00010bd0a72c();
            func_0x00010bd0aaac(*(undefined8 *)(unaff_x19 + 8));
            func_0x00010bd0c52c();
            func_0x00010bd0a0f8(*(undefined8 *)(*extraout_x9_01 + 8));
            FUN_10bd07f44(plVar11,&UNK_10f833cc0,0x3c,uStack_558,uStack_550);
            func_0x000107c3a63c();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              plVar12 = plVar11;
              func_0x00010bd0a180();
              lVar13 = *(long *)(*plVar12 + 8);
              FUN_10bcee050(lVar13,*(undefined8 *)(*(long *)plVar12[1] + 0x20),
                            *(undefined4 *)(*(long *)plVar12[1] + 4));
              if (*(long *)(*(long *)plVar11[1] + 0x20) == 0) {
                func_0x00010bd0b974();
              }
              else {
                func_0x00010bd0b6e4(*(undefined8 *)(*(long *)(*(long *)plVar11[1] + 0x20) + 8),
                                    auStack_5e0);
              }
              func_0x00010bcff8a4(auStack_5c8,*(undefined4 *)(*(long *)plVar11[1] + 4));
              func_0x00010bd0abbc();
              bVar6 = *(byte *)(*(long *)(lVar13 + 8) + 0x2f);
              cVar8 = (char)bVar6 < '\0';
              uVar9 = bVar6 == 0;
              cVar7 = '\0';
              uVar1 = *(ulong *)(*(long *)(lVar13 + 8) + 0x20);
              if (!(bool)cVar8) {
                uVar1 = (ulong)bVar6;
              }
              func_0x00010bd0af98(uVar1);
              FUN_10bd070c8();
              func_0x00010bd0aad4();
              func_0x00010bd09ff8();
              if ((bool)uVar9) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010bd0aa70();
              func_0x00010bd0a974();
              FUN_10bd09f38();
              func_0x00010bd0aac0();
              func_0x00010bd0a0f8(*(ulong *)(extraout_x8_07 + 0x20) & 0xfffffffffffffffc);
              uVar2 = extraout_x11_02;
              if (cVar8 == cVar7) {
                uVar2 = extraout_x8_08;
              }
              func_0x00010bd0a884(uVar2);
              func_0x00010bd09f78();
              func_0x000107c3a63c();
              if ((bool)uVar9) {
                return;
              }
              ___stack_chk_fail();
              FUN_10bd09f38();
              func_0x00010bd0aac0();
              func_0x00010bd0a0f8(*(ulong *)(extraout_x8_09 + 0x28) & 0xfffffffffffffffc);
              uVar2 = extraout_x11_03;
              if (cVar8 == cVar7) {
                uVar2 = extraout_x8_10;
              }
              func_0x00010bd0a884(uVar2);
              func_0x00010bd09f78();
              func_0x000107c3a63c();
              if ((bool)uVar9) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010bd0ade8();
              func_0x000105680760(auStack_8e8);
              func_0x00010549023c(auStack_8d8,&UNK_10f833d50);
              func_0x00010bd0a99c();
              func_0x000107c28084();
              func_0x00010549023c();
              piVar14 = (int *)**(undefined8 **)(lVar13 + 8);
              piVar3 = (int *)(*(undefined8 **)(lVar13 + 8))[1];
              func_0x00010bd0b5a0();
              for (; piVar14 != piVar3; piVar14 = piVar14 + 2) {
                iVar4 = **(int **)(lVar13 + 0x18);
                while( true ) {
                  iVar5 = **(int **)(lVar13 + 0x10);
                  if (*piVar14 <= iVar5 || iVar4 < 1) break;
                  func_0x00010549023c(auStack_8d8);
                  **(int **)(lVar13 + 0x10) = **(int **)(lVar13 + 0x10) + 1;
                  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                  iVar4 = **(int **)(lVar13 + 0x18) + -1;
                  **(int **)(lVar13 + 0x18) = iVar4;
                }
                if (iVar4 == 0) break;
                if (iVar5 <= piVar14[1]) {
                  iVar5 = piVar14[1];
                }
                **(int **)(lVar13 + 0x10) = iVar5;
              }
              func_0x000105491b64(auStack_8d0);
              func_0x000105673d7c(auStack_8e8);
              return;
            }
          }
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10bd07fc0; end: 10bd0801f;  */

void FUN_10bd07fc0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  long *extraout_x9;
  undefined8 *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x10;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  long unaff_x19;
  int *piVar14;
  undefined1 auStack_828 [16];
  undefined1 auStack_818 [8];
  undefined1 auStack_810 [256];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [56];
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_438;
  undefined8 uStack_430;
  
  func_0x00010bd0a180();
  func_0x00010bd0b0f0();
  func_0x00010bd0a43c();
  plVar11 = extraout_x10;
  if (in_NG == in_OV) {
    plVar11 = extraout_x9;
  }
  func_0x00010bd0a72c();
  func_0x00010bd0b420();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd0a0f8(*(ulong *)(extraout_x8 + 0x28) & 0xfffffffffffffffc);
  func_0x000107c284bc(&UNK_10f833c30);
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd09f38();
    func_0x00010bd0aac0();
    func_0x00010bd0a0f8(*(ulong *)(extraout_x8_00 + 0x28) & 0xfffffffffffffffc);
    uVar2 = extraout_x11;
    if (in_NG == in_OV) {
      uVar2 = extraout_x8_01;
    }
    func_0x00010bd0a884(uVar2);
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd09f38();
      func_0x00010bd0aac0();
      func_0x00010bd0a0f8(*(ulong *)(extraout_x8_02 + 0x28) & 0xfffffffffffffffc);
      puVar10 = &UNK_10f833c41;
      func_0x000107c284bc();
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010bd0a10c();
        func_0x00010bd0ad34();
        func_0x00010bd0ac98();
        func_0x00010bd09fa8(*(undefined8 *)(puVar10 + 8));
        func_0x00010bd0b44c();
        func_0x00010bd0bd3c();
        func_0x00010bd0a0f8(*(ulong *)(extraout_x8_03 + 0x30) & 0xfffffffffffffffc);
        uVar2 = extraout_x11_00;
        if (in_NG == in_OV) {
          uVar2 = extraout_x8_04;
        }
        func_0x00010bd0a360(uVar2);
        func_0x00010bd0a628();
        func_0x00010bd0b1a4();
        func_0x00010bd09ff8();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010bd09f5c();
        func_0x00010bd0b0f0();
        func_0x00010bd0a72c();
        func_0x00010bd0aaac(*(undefined8 *)(unaff_x19 + 8));
        func_0x00010bd0c52c();
        func_0x00010bd09fdc(*extraout_x9_00);
        FUN_10bd07f44(plVar11,&UNK_10f833c7b,0x44,uStack_438,uStack_430);
        func_0x000107c3a63c();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010bd09f5c();
          func_0x00010bd0b0f0();
          func_0x00010bd0a72c();
          func_0x00010bd0aaac(*(undefined8 *)(unaff_x19 + 8));
          func_0x00010bd0c52c();
          func_0x00010bd0a0f8(*(undefined8 *)(*extraout_x9_01 + 8));
          FUN_10bd07f44(plVar11,&UNK_10f833cc0,0x3c,uStack_498,uStack_490);
          func_0x000107c3a63c();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            plVar12 = plVar11;
            func_0x00010bd0a180();
            lVar13 = *(long *)(*plVar12 + 8);
            FUN_10bcee050(lVar13,*(undefined8 *)(*(long *)plVar12[1] + 0x20),
                          *(undefined4 *)(*(long *)plVar12[1] + 4));
            if (*(long *)(*(long *)plVar11[1] + 0x20) == 0) {
              func_0x00010bd0b974();
            }
            else {
              func_0x00010bd0b6e4(*(undefined8 *)(*(long *)(*(long *)plVar11[1] + 0x20) + 8),
                                  auStack_520);
            }
            func_0x00010bcff8a4(auStack_508,*(undefined4 *)(*(long *)plVar11[1] + 4));
            func_0x00010bd0abbc();
            bVar6 = *(byte *)(*(long *)(lVar13 + 8) + 0x2f);
            cVar8 = (char)bVar6 < '\0';
            uVar9 = bVar6 == 0;
            cVar7 = '\0';
            uVar1 = *(ulong *)(*(long *)(lVar13 + 8) + 0x20);
            if (!(bool)cVar8) {
              uVar1 = (ulong)bVar6;
            }
            func_0x00010bd0af98(uVar1);
            FUN_10bd070c8();
            func_0x00010bd0aad4();
            func_0x00010bd09ff8();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010bd0aa70();
            func_0x00010bd0a974();
            func_0x00010bd09f38();
            func_0x00010bd0aac0();
            func_0x00010bd0a0f8(*(ulong *)(extraout_x8_05 + 0x20) & 0xfffffffffffffffc);
            uVar2 = extraout_x11_01;
            if (cVar8 == cVar7) {
              uVar2 = extraout_x8_06;
            }
            func_0x00010bd0a884(uVar2);
            func_0x00010bd09f78();
            func_0x000107c3a63c();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010bd09f38();
            func_0x00010bd0aac0();
            func_0x00010bd0a0f8(*(ulong *)(extraout_x8_07 + 0x28) & 0xfffffffffffffffc);
            uVar2 = extraout_x11_02;
            if (cVar8 == cVar7) {
              uVar2 = extraout_x8_08;
            }
            func_0x00010bd0a884(uVar2);
            func_0x00010bd09f78();
            func_0x000107c3a63c();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010bd0ade8();
            func_0x000105680760(auStack_828);
            func_0x00010549023c(auStack_818,&UNK_10f833d50);
            func_0x00010bd0a99c();
            func_0x000107c28084();
            func_0x00010549023c();
            piVar14 = (int *)**(undefined8 **)(lVar13 + 8);
            piVar3 = (int *)(*(undefined8 **)(lVar13 + 8))[1];
            func_0x00010bd0b5a0();
            for (; piVar14 != piVar3; piVar14 = piVar14 + 2) {
              iVar4 = **(int **)(lVar13 + 0x18);
              while( true ) {
                iVar5 = **(int **)(lVar13 + 0x10);
                if (*piVar14 <= iVar5 || iVar4 < 1) break;
                func_0x00010549023c(auStack_818);
                **(int **)(lVar13 + 0x10) = **(int **)(lVar13 + 0x10) + 1;
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                iVar4 = **(int **)(lVar13 + 0x18) + -1;
                **(int **)(lVar13 + 0x18) = iVar4;
              }
              if (iVar4 == 0) break;
              if (iVar5 <= piVar14[1]) {
                iVar5 = piVar14[1];
              }
              **(int **)(lVar13 + 0x10) = iVar5;
            }
            func_0x000105491b64(auStack_810);
            func_0x000105673d7c(auStack_828);
            return;
          }
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 10bd08020; end: 10bd0810f;  */

void FUN_10bd08020(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 *extraout_x9;
  long *extraout_x9_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  long unaff_x19;
  long *unaff_x20;
  int *piVar13;
  undefined1 auStack_7b8 [16];
  undefined1 auStack_7a8 [8];
  undefined1 auStack_7a0 [256];
  undefined1 auStack_4b0 [24];
  undefined1 auStack_498 [56];
  
  FUN_10bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd0a0f8(*(ulong *)(extraout_x8 + 0x28) & 0xfffffffffffffffc);
  func_0x000107c284bc(&UNK_10f833c30);
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10bd09f38();
    func_0x00010bd0aac0();
    func_0x00010bd0a0f8(*(ulong *)(extraout_x8_00 + 0x28) & 0xfffffffffffffffc);
    uVar2 = extraout_x11;
    if (in_NG == in_OV) {
      uVar2 = extraout_x8_01;
    }
    func_0x00010bd0a884(uVar2);
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      FUN_10bd09f38();
      func_0x00010bd0aac0();
      func_0x00010bd0a0f8(*(ulong *)(extraout_x8_02 + 0x28) & 0xfffffffffffffffc);
      puVar10 = &UNK_10f833c41;
      func_0x000107c284bc();
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010bd0a10c();
        func_0x00010bd0ad34();
        func_0x00010bd0ac98();
        func_0x00010bd09fa8(*(undefined8 *)(puVar10 + 8));
        func_0x00010bd0b44c();
        func_0x00010bd0bd3c();
        func_0x00010bd0a0f8(*(ulong *)(extraout_x8_03 + 0x30) & 0xfffffffffffffffc);
        uVar2 = extraout_x11_00;
        if (in_NG == in_OV) {
          uVar2 = extraout_x8_04;
        }
        func_0x00010bd0a360(uVar2);
        func_0x00010bd0a628();
        func_0x00010bd0b1a4();
        func_0x00010bd09ff8();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010bd09f5c();
        func_0x00010bd0b0f0();
        func_0x00010bd0a72c();
        func_0x00010bd0aaac(*(undefined8 *)(unaff_x19 + 8));
        func_0x00010bd0c52c();
        func_0x00010bd09fdc(*extraout_x9);
        FUN_10bd07f44();
        func_0x000107c3a63c();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010bd09f5c();
          func_0x00010bd0b0f0();
          func_0x00010bd0a72c();
          func_0x00010bd0aaac(*(undefined8 *)(unaff_x19 + 8));
          func_0x00010bd0c52c();
          func_0x00010bd0a0f8(*(undefined8 *)(*extraout_x9_00 + 8));
          FUN_10bd07f44();
          func_0x000107c3a63c();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            plVar11 = unaff_x20;
            func_0x00010bd0a180();
            lVar12 = *(long *)(*plVar11 + 8);
            FUN_10bcee050(lVar12,*(undefined8 *)(*(long *)plVar11[1] + 0x20),
                          *(undefined4 *)(*(long *)plVar11[1] + 4));
            if (*(long *)(*(long *)unaff_x20[1] + 0x20) == 0) {
              func_0x00010bd0b974();
            }
            else {
              func_0x00010bd0b6e4(*(undefined8 *)(*(long *)(*(long *)unaff_x20[1] + 0x20) + 8),
                                  auStack_4b0);
            }
            func_0x00010bcff8a4(auStack_498,*(undefined4 *)(*(long *)unaff_x20[1] + 4));
            func_0x00010bd0abbc();
            bVar6 = *(byte *)(*(long *)(lVar12 + 8) + 0x2f);
            cVar8 = (char)bVar6 < '\0';
            uVar9 = bVar6 == 0;
            cVar7 = '\0';
            uVar1 = *(ulong *)(*(long *)(lVar12 + 8) + 0x20);
            if (!(bool)cVar8) {
              uVar1 = (ulong)bVar6;
            }
            func_0x00010bd0af98(uVar1);
            FUN_10bd070c8();
            func_0x00010bd0aad4();
            func_0x00010bd09ff8();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010bd0aa70();
            func_0x00010bd0a974();
            FUN_10bd09f38();
            func_0x00010bd0aac0();
            func_0x00010bd0a0f8(*(ulong *)(extraout_x8_05 + 0x20) & 0xfffffffffffffffc);
            uVar2 = extraout_x11_01;
            if (cVar8 == cVar7) {
              uVar2 = extraout_x8_06;
            }
            func_0x00010bd0a884(uVar2);
            func_0x00010bd09f78();
            func_0x000107c3a63c();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            FUN_10bd09f38();
            func_0x00010bd0aac0();
            func_0x00010bd0a0f8(*(ulong *)(extraout_x8_07 + 0x28) & 0xfffffffffffffffc);
            uVar2 = extraout_x11_02;
            if (cVar8 == cVar7) {
              uVar2 = extraout_x8_08;
            }
            func_0x00010bd0a884(uVar2);
            func_0x00010bd09f78();
            func_0x000107c3a63c();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010bd0ade8();
            func_0x000105680760(auStack_7b8);
            func_0x00010549023c(auStack_7a8,&UNK_10f833d50);
            func_0x00010bd0a99c();
            func_0x000107c28084();
            func_0x00010549023c();
            piVar13 = (int *)**(undefined8 **)(lVar12 + 8);
            piVar3 = (int *)(*(undefined8 **)(lVar12 + 8))[1];
            func_0x00010bd0b5a0();
            for (; piVar13 != piVar3; piVar13 = piVar13 + 2) {
              iVar4 = **(int **)(lVar12 + 0x18);
              while( true ) {
                iVar5 = **(int **)(lVar12 + 0x10);
                if (*piVar13 <= iVar5 || iVar4 < 1) break;
                func_0x00010549023c(auStack_7a8);
                **(int **)(lVar12 + 0x10) = **(int **)(lVar12 + 0x10) + 1;
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                iVar4 = **(int **)(lVar12 + 0x18) + -1;
                **(int **)(lVar12 + 0x18) = iVar4;
              }
              if (iVar4 == 0) break;
              if (iVar5 <= piVar13[1]) {
                iVar5 = piVar13[1];
              }
              **(int **)(lVar12 + 0x10) = iVar5;
            }
            func_0x000105491b64(auStack_7a0);
            func_0x000105673d7c(auStack_7b8);
            return;
          }
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 10bd08110; end: 10bd0817f;  */

void FUN_10bd08110(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  long *plVar10;
  long lVar11;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 *extraout_x9;
  long *extraout_x9_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  long unaff_x19;
  long *unaff_x20;
  int *piVar12;
  undefined1 auStack_578 [16];
  undefined1 auStack_568 [8];
  undefined1 auStack_560 [256];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [56];
  
  func_0x00010bd0a10c();
  func_0x00010bd0ad34();
  func_0x00010bd0ac98();
  func_0x00010bd09fa8(*(undefined8 *)(param_1 + 8));
  func_0x00010bd0b44c();
  func_0x00010bd0bd3c();
  func_0x00010bd0a0f8(*(ulong *)(extraout_x8 + 0x30) & 0xfffffffffffffffc);
  uVar2 = extraout_x11;
  if (in_NG == in_OV) {
    uVar2 = extraout_x8_00;
  }
  func_0x00010bd0a360(uVar2);
  func_0x00010bd0a628();
  func_0x00010bd0b1a4();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd09f5c();
  func_0x00010bd0b0f0();
  func_0x00010bd0a72c();
  func_0x00010bd0aaac(*(undefined8 *)(unaff_x19 + 8));
  func_0x00010bd0c52c();
  func_0x00010bd09fdc(*extraout_x9);
  FUN_10bd07f44();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x00010bd0b0f0();
    func_0x00010bd0a72c();
    func_0x00010bd0aaac(*(undefined8 *)(unaff_x19 + 8));
    func_0x00010bd0c52c();
    func_0x00010bd0a0f8(*(undefined8 *)(*extraout_x9_00 + 8));
    FUN_10bd07f44();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      plVar10 = unaff_x20;
      func_0x00010bd0a180();
      lVar11 = *(long *)(*plVar10 + 8);
      FUN_10bcee050(lVar11,*(undefined8 *)(*(long *)plVar10[1] + 0x20),
                    *(undefined4 *)(*(long *)plVar10[1] + 4));
      if (*(long *)(*(long *)unaff_x20[1] + 0x20) == 0) {
        func_0x00010bd0b974();
      }
      else {
        func_0x00010bd0b6e4(*(undefined8 *)(*(long *)(*(long *)unaff_x20[1] + 0x20) + 8),auStack_270
                           );
      }
      func_0x00010bcff8a4(auStack_258,*(undefined4 *)(*(long *)unaff_x20[1] + 4));
      func_0x00010bd0abbc();
      bVar6 = *(byte *)(*(long *)(lVar11 + 8) + 0x2f);
      cVar8 = (char)bVar6 < '\0';
      uVar9 = bVar6 == 0;
      cVar7 = '\0';
      uVar1 = *(ulong *)(*(long *)(lVar11 + 8) + 0x20);
      if (!(bool)cVar8) {
        uVar1 = (ulong)bVar6;
      }
      func_0x00010bd0af98(uVar1);
      FUN_10bd070c8();
      func_0x00010bd0aad4();
      func_0x00010bd09ff8();
      if ((bool)uVar9) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bd0aa70();
      func_0x00010bd0a974();
      func_0x00010bd09f38();
      func_0x00010bd0aac0();
      func_0x00010bd0a0f8(*(ulong *)(extraout_x8_01 + 0x20) & 0xfffffffffffffffc);
      uVar2 = extraout_x11_00;
      if (cVar8 == cVar7) {
        uVar2 = extraout_x8_02;
      }
      func_0x00010bd0a884(uVar2);
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)uVar9) {
        ___stack_chk_fail();
        func_0x00010bd09f38();
        func_0x00010bd0aac0();
        func_0x00010bd0a0f8(*(ulong *)(extraout_x8_03 + 0x28) & 0xfffffffffffffffc);
        uVar2 = extraout_x11_01;
        if (cVar8 == cVar7) {
          uVar2 = extraout_x8_04;
        }
        func_0x00010bd0a884(uVar2);
        func_0x00010bd09f78();
        func_0x000107c3a63c();
        if (!(bool)uVar9) {
          ___stack_chk_fail();
          func_0x00010bd0ade8();
          func_0x000105680760(auStack_578);
          func_0x00010549023c(auStack_568,&UNK_10f833d50);
          func_0x00010bd0a99c();
          func_0x000107c28084();
          func_0x00010549023c();
          piVar12 = (int *)**(undefined8 **)(lVar11 + 8);
          piVar3 = (int *)(*(undefined8 **)(lVar11 + 8))[1];
          func_0x00010bd0b5a0();
          for (; piVar12 != piVar3; piVar12 = piVar12 + 2) {
            iVar4 = **(int **)(lVar11 + 0x18);
            while( true ) {
              iVar5 = **(int **)(lVar11 + 0x10);
              if (*piVar12 <= iVar5 || iVar4 < 1) break;
              func_0x00010549023c(auStack_568);
              **(int **)(lVar11 + 0x10) = **(int **)(lVar11 + 0x10) + 1;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              iVar4 = **(int **)(lVar11 + 0x18) + -1;
              **(int **)(lVar11 + 0x18) = iVar4;
            }
            if (iVar4 == 0) break;
            if (iVar5 <= piVar12[1]) {
              iVar5 = piVar12[1];
            }
            **(int **)(lVar11 + 0x10) = iVar5;
          }
          func_0x000105491b64(auStack_560);
          func_0x000105673d7c(auStack_578);
          return;
        }
      }
      return;
    }
  }
  return;
}



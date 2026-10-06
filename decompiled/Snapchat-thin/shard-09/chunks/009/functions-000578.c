/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107297b88; end: 107297bdb;  */

void FUN_107297b88(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar4 = 8;
  }
  else {
    lVar4 = (long)(param_2 - 1) / 7 + param_2;
  }
  uVar5 = 0xffffffffffffffff >> (LZCOUNT(lVar4) & 0x3fU);
  if (lVar4 == 0) {
    uVar5 = 1;
  }
  func_0x00010729f100();
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = uVar5;
  FUN_10726210c();
  lVar8 = param_1[1];
  for (lVar4 = 0; lVar7 != lVar4; lVar4 = lVar4 + 1) {
    if (-1 < *(char *)(lVar1 + lVar4)) {
      lVar2 = lVar6;
      func_0x00010727e7fc(lVar6);
      lVar3 = lVar2;
      func_0x00010729ec28();
      func_0x000100061de0();
      func_0x00010729eb80((uint)lVar2 & 0x7f);
      FUN_1072621bc(param_1,lVar8 + lVar3 * 0x38,lVar6);
    }
    lVar6 = lVar6 + 0x38;
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
  return;
}



/* Entry: 107297bdc; end: 107297bf7;  */

void FUN_107297bdc(void)

{
  func_0x00010729ea1c();
  FUN_107297c9c();
  return;
}



/* Entry: 107297bf8; end: 107297c9b;  */

void FUN_107297bf8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010729f100();
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  param_1[2] = param_2;
  FUN_10726210c();
  lVar7 = param_1[1];
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      lVar2 = lVar4;
      func_0x00010727e7fc(lVar4);
      lVar3 = lVar2;
      func_0x00010729ec28();
      func_0x000100061de0();
      func_0x00010729eb80((uint)lVar2 & 0x7f);
      FUN_1072621bc(param_1,lVar7 + lVar3 * 0x38,lVar4);
    }
    lVar4 = lVar4 + 0x38;
  }
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 107297c9c; end: 107297ca3;  */

void FUN_107297c9c(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_2;
  uVar3 = param_3;
  FUN_107297d0c();
  if ((uVar3 & 1) != 0) {
    FUN_107297e10(*param_2,lVar2,param_3);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x38;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 107297ca4; end: 107297d0b;  */

void FUN_107297ca4(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_107297d0c();
  if ((param_3 & 1) != 0) {
    FUN_107297e10(*param_2,lVar2,param_4);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x38;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 107297d0c; end: 107297e0f;  */

undefined1  [16] FUN_107297d0c(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  uint6 uVar9;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined8 uVar10;
  byte bVar16;
  undefined1 auVar17 [16];
  
  func_0x00010729e618();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x00010727e7fc(*param_1);
  lVar4 = 0;
  uVar5 = *unaff_x19;
  uVar6 = unaff_x19[2];
  uVar3 = uVar5 >> 0xc ^ param_2 >> 7;
  bVar1 = (byte)param_2;
  uVar9 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
          0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar6;
    uVar10 = *(undefined8 *)(uVar5 + uVar3);
    cVar11 = (char)((ulong)uVar10 >> 8);
    cVar12 = (char)((ulong)uVar10 >> 0x10);
    cVar13 = (char)((ulong)uVar10 >> 0x18);
    cVar14 = (char)((ulong)uVar10 >> 0x20);
    cVar15 = (char)((ulong)uVar10 >> 0x28);
    bVar8 = (byte)((ulong)uVar10 >> 0x30);
    bVar16 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar16 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar8 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar15 == (char)(uVar9 >> 0x28)),
                                            CONCAT14(-(cVar14 == (char)(uVar9 >> 0x20)),
                                                     CONCAT13(-(cVar13 == (char)(uVar9 >> 0x18)),
                                                              CONCAT12(-(cVar12 ==
                                                                        (char)(uVar9 >> 0x10)),
                                                                       CONCAT11(-(cVar11 ==
                                                                                 (char)(uVar9 >> 8))
                                                                                ,-((char)uVar10 ==
                                                                                  (char)uVar9)))))))
                         ) & 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      param_2 = uVar3 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar6;
      uVar2 = unaff_x19[1] + param_2 * 0x38;
      func_0x000104c32db4();
      if ((uVar2 & 1) != 0) {
        uVar10 = 0;
        goto LAB_107297dd4;
      }
      param_2 = uVar2;
    }
    bVar8 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                CONCAT16(-(bVar8 == 0x80),
                                         CONCAT15(-(cVar15 == -0x80),
                                                  CONCAT14(-(cVar14 == -0x80),
                                                           CONCAT13(-(cVar13 == -0x80),
                                                                    CONCAT12(-(cVar12 == -0x80),
                                                                             CONCAT11(-(cVar11 ==
                                                                                       -0x80),-((
                                                  char)uVar10 == -0x80)))))))),1);
    if ((bVar8 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar3 = lVar4 + uVar3;
  }
  func_0x00010729ec28();
  FUN_107297e24();
  uVar10 = 1;
LAB_107297dd4:
  auVar17._8_8_ = uVar10;
  auVar17._0_8_ = param_2;
  return auVar17;
}



/* Entry: 107297e10; end: 107297e23;  */

void FUN_107297e10(long param_1,long param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(*(long *)(param_1 + 8) + param_2 * 0x38,param_3);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 107297e24; end: 107297eb3;  */

void FUN_107297e24(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x00010729e618();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + (long)param_1) != -2)) {
    param_1 = unaff_x19;
    FUN_107297eb4();
    func_0x00010729eb1c();
    func_0x000100061de0();
    lVar1 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  *(ulong *)(lVar1 + -8) =
       *(long *)(lVar1 + -8) - (ulong)(*(char *)(lVar1 + (long)param_1) == -0x80);
  uVar2 = unaff_x19[2];
  *(byte *)(lVar1 + (long)param_1) = unaff_w20 & 0x7f;
  *(byte *)(lVar1 + (uVar2 & (long)param_1 - 7U) + (uVar2 & 7)) = unaff_w20 & 0x7f;
  return;
}



/* Entry: 107297eb4; end: 107297ee3;  */

/* WARNING: Possible PIC construction at 0x000107297c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107297c44) */

long * FUN_107297eb4(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  ulong extraout_x8;
  ulong uVar8;
  undefined8 extraout_x8_00;
  ulong extraout_x10;
  long *unaff_x19;
  undefined *unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 unaff_x29;
  code *pcVar12;
  undefined8 in_stack_00000040;
  undefined1 auStack_50 [56];
  undefined8 uStack_18;
  
  uVar8 = param_1[2];
  if ((uVar8 < 9) ||
     (uVar3 = uVar8 * 0x19 + param_1[3] * -0x20 == 0, uVar8 * 0x19 < (ulong)(param_1[3] * 0x20))) {
    uVar8 = uVar8 << 1 | 1;
    func_0x00010729f100();
    puVar11 = &stack0x00000040;
    lVar1 = *param_1;
    puVar5 = (undefined *)param_1[1];
    lVar9 = param_1[2];
    param_1[2] = uVar8;
    plVar6 = param_1;
    in_stack_00000040 = unaff_x29;
    FUN_10726210c();
    lVar10 = 0;
    while( true ) {
      if (lVar9 == lVar10) {
        if (lVar9 != 0) {
          plVar6 = (long *)(lVar1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar6);
          return plVar6;
        }
        return plVar6;
      }
      if (-1 < *(char *)(lVar1 + lVar10)) break;
      lVar10 = lVar10 + 1;
      puVar5 = puVar5 + 0x38;
    }
    pcVar12 = (code *)0x107297c44;
    puVar2 = (undefined1 *)register0x00000008;
    unaff_x19 = param_1;
    unaff_x20 = puVar5;
  }
  else {
    puVar2 = auStack_50;
    puVar11 = (undefined8 *)&stack0xfffffffffffffff0;
    func_0x00010729e310();
    puVar5 = &UNK_110998be8;
    uStack_18 = extraout_x8_00;
    func_0x00010ae6c914();
    func_0x00010729e1e0(uStack_18);
    if ((bool)uVar3) {
      return param_1;
    }
    pcVar12 = FUN_107297f24;
    ___stack_chk_fail();
  }
  ppuVar4 = &PTR_LOOP_110c8acd8;
  *(undefined **)(puVar2 + -0x20) = unaff_x20;
  *(long **)(puVar2 + -0x18) = unaff_x19;
  *(undefined8 **)(puVar2 + -0x10) = puVar11;
  *(code **)(puVar2 + -8) = pcVar12;
  puVar7 = puVar5;
  func_0x000107264c5c(puVar5);
  *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
  *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  func_0x000100062d4c(&PTR_LOOP_110c8acd8,puVar5);
  func_0x000100061c28((undefined *)((long)ppuVar4 + (long)puVar7));
  return (long *)(extraout_x8 ^ extraout_x10);
}



/* Entry: 107297ee4; end: 107297f23;  */

ulong FUN_107297ee4(ulong param_1)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x10;
  
  func_0x00010729e310();
  puVar2 = &UNK_110998be8;
  func_0x00010ae6c914();
  func_0x00010729e1e0(extraout_x8_00);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR_LOOP_110c8acd8;
  puVar3 = puVar2;
  func_0x000107264c5c(puVar2);
  func_0x000100062d4c(&PTR_LOOP_110c8acd8,puVar2);
  func_0x000100061c28((undefined *)((long)ppuVar1 + (long)puVar3));
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 107297f24; end: 107297f2f;  */

ulong FUN_107297f24(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  ulong extraout_x8;
  ulong extraout_x10;
  
  ppuVar1 = &PTR_LOOP_110c8acd8;
  lVar2 = param_2;
  func_0x000107264c5c(param_2);
  func_0x000100062d4c(&PTR_LOOP_110c8acd8,param_2);
  func_0x000100061c28((long)ppuVar1 + lVar2);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 107297f30; end: 107297f6b;  */

long * FUN_107297f30(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_107297f6c(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 107297f6c; end: 107297fab;  */

void FUN_107297f6c(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_1;
  for (lVar1 = param_1[2]; lVar1 != 0; lVar1 = lVar1 + -1) {
    if (-1 < *pcVar2) {
      func_0x00010729ebe0();
    }
    pcVar2 = pcVar2 + 1;
  }
  return;
}



/* Entry: 107297fac; end: 107297fc7;  */

void FUN_107297fac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998a58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107297fc8; end: 10729802f;  */

long FUN_107297fc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_107298030();
  func_0x000104c2f64c(lVar1 + 0x70);
  func_0x000104c2f64c(param_1 + 0xa8);
  FUN_107269c1c(param_1 + 0xe0);
  return param_1;
}



/* Entry: 107298030; end: 10729807b;  */

undefined8 * FUN_107298030(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)param_1 = 7;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_107269c1c();
  *(undefined4 *)(param_1 + 6) = 4;
  return param_1;
}



/* Entry: 10729807c; end: 107298097;  */

void FUN_10729807c(long param_1)

{
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 107298098; end: 1072980e7;  */

void FUN_107298098(void)

{
  func_0x00010729e564();
  func_0x000107293c90();
  return;
}



/* Entry: 1072980e8; end: 1072980fb;  */

void FUN_1072980e8(void)

{
  func_0x0001072980bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072980fc; end: 107298113;  */

void FUN_1072980fc(long param_1)

{
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010729810c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    return;
  }
  return;
}



/* Entry: 107298114; end: 10729816b;  */

void FUN_107298114(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010729ee98();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010729eac0(uVar1);
  return;
}



/* Entry: 10729816c; end: 1072981af;  */

void FUN_10729816c(long param_1)

{
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    func_0x00010729ea68((&PTR_FUN_1109984a8)[*(uint *)(param_1 + 0x28)]);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1072981b0; end: 1072981bb;  */

undefined8 FUN_1072981b0(undefined8 param_1,long param_2)

{
  undefined8 unaff_x19;
  
  func_0x0001072981e4(param_2,*(undefined8 *)(param_2 + 0x10));
  func_0x000100168718(param_2);
  FUN_10726eae4();
  return unaff_x19;
}



/* Entry: 1072981bc; end: 1072982eb;  */

undefined8 FUN_1072981bc(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001072981e4(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000100168718(param_1);
  FUN_10726eae4();
  return unaff_x19;
}



/* Entry: 1072982ec; end: 10729836f;  */

void FUN_1072982ec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = (long *)*param_1;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      FUN_107293168();
    }
    param_1[1] = lVar2;
    func_0x00010729ec54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107298370; end: 1072983a3;  */

void FUN_107298370(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 1) {
    FUN_10729816c();
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return;
}



/* Entry: 1072983a4; end: 1072983d3;  */

void FUN_1072983a4(void)

{
  func_0x0001072983bc();
  return;
}



/* Entry: 1072983d4; end: 10729842f;  */

undefined1  [16] FUN_1072983d4(void)

{
  undefined8 unaff_x19;
  undefined1 auVar1 [16];
  ulong uStack_38;
  
  func_0x00010729efb4();
  FUN_107298430();
  FUN_10729848c();
  func_0x00010729eb14();
  auVar1._8_8_ = uStack_38 & 0xff;
  auVar1._0_8_ = unaff_x19;
  return auVar1;
}



/* Entry: 107298430; end: 10729848b;  */

void FUN_107298430(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 unaff_x22;
  
  func_0x00010729eb28();
  *param_1 = param_2;
  param_1[1] = unaff_x22;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_107262e9c(param_2 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  puVar1 = param_2 + 2;
  func_0x000104c2fe38();
  param_2[1] = puVar1;
  return;
}



/* Entry: 10729848c; end: 1072984d3;  */

undefined1  [16] FUN_10729848c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long unaff_x19;
  undefined1 auVar2 [16];
  
  func_0x00010729e5f0();
  param_2 = param_2 + 0x10;
  func_0x000104c2fe38();
  func_0x00010729e6c4();
  FUN_1072984d4();
  bVar1 = param_2 == 0;
  if (bVar1) {
    func_0x00010729ea48();
    FUN_1072985c8();
    param_2 = unaff_x19;
  }
  auVar2[8] = bVar1;
  auVar2._0_8_ = param_2;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1072984d4; end: 1072985c7;  */

long FUN_1072984d4(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 in_NG;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x00010729f100();
  uVar5 = param_3[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      lVar1 = 0;
      uVar7 = uVar6 & param_4;
    }
    else {
      lVar1 = param_4 - uVar5;
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = param_4 / uVar5;
      }
      uVar7 = param_4;
      if (uVar5 <= param_4) {
        uVar7 = param_4 - uVar3 * uVar5;
      }
    }
    in_NG = lVar1 < 0;
    plVar4 = *(long **)(*param_3 + uVar7 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10729857c;
          uVar3 = plVar4[1];
          in_NG = (long)(uVar3 - param_4) < 0;
          if (uVar3 != param_4) break;
          uVar3 = (ulong)(plVar4 + 2);
          func_0x000104c32db4(uVar3,param_5);
          if ((uVar3 & 1) != 0) {
            return (long)plVar4;
          }
        }
        if ((uVar5 & uVar6) == 0) {
          uVar3 = uVar3 & uVar6;
        }
        else if (uVar5 <= uVar3) {
          uVar2 = 0;
          if (uVar5 != 0) {
            uVar2 = uVar3 / uVar5;
          }
          uVar3 = uVar3 - uVar2 * uVar5;
        }
        in_NG = (long)(uVar3 - uVar7) < 0;
      } while (uVar3 == uVar7);
    }
  }
LAB_10729857c:
  func_0x00010729ea54();
  if ((uVar5 == 0) || (func_0x00010729edac(param_1,param_2,(float)uVar5), (bool)in_NG)) {
    func_0x00010729e34c(uVar5 << 1);
    FUN_107298658(param_3);
  }
  return 0;
}



/* Entry: 1072985c8; end: 107298657;  */

void FUN_1072985c8(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar2 = param_1[1];
  uVar5 = param_2[1];
  uVar3 = uVar2 - 1;
  if ((uVar2 & uVar3) == 0) {
    uVar5 = uVar3 & uVar5;
  }
  else if (uVar2 <= uVar5) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar5 / uVar2;
    }
    uVar5 = uVar5 - uVar1 * uVar2;
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + uVar5 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    *(long **)(lVar4 + uVar5 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar5 = *(ulong *)(*param_2 + 8);
      if ((uVar2 & uVar3) == 0) {
        uVar5 = uVar5 & uVar3;
      }
      else if (uVar2 <= uVar5) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        uVar5 = uVar5 - uVar3 * uVar2;
      }
      *(long **)(lVar4 + uVar5 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 107298658; end: 1072986d3;  */

void FUN_107298658(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  ulong uVar3;
  ulong extraout_x9;
  long *extraout_x9_00;
  long *plVar4;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  func_0x00010729ef90();
  if ((!(bool)in_ZR) && (func_0x00010729eef4(), !(bool)in_ZR)) {
    func_0x00010729ebe8();
  }
  func_0x00010729eed0();
  if ((bool)in_CY && !(bool)in_ZR) {
LAB_107298690:
    func_0x00010729eb1c();
    if (param_2 == 0) {
      func_0x00010729f0b8();
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      FUN_107270d08(param_1 + 8);
      func_0x00010729f0b8();
      uVar3 = 0;
      *(ulong *)(param_1 + 8) = param_2;
      while (param_2 != uVar3) {
        func_0x00010729eeb8();
        uVar3 = extraout_x9;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x00010729f134();
        func_0x00010729f114();
        lVar2 = extraout_x8_00;
        plVar6 = extraout_x9_00;
        uVar3 = extraout_x10;
        uVar5 = extraout_x11;
        while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
          uVar7 = plVar6[1];
          if ((param_2 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          if (uVar7 != uVar5) {
            if (*(long *)(lVar2 + uVar7 * 8) == 0) {
              *(long **)(lVar2 + uVar7 * 8) = plVar4;
              uVar5 = uVar7;
            }
            else {
              func_0x00010729ec8c();
              lVar2 = extraout_x8_01;
              plVar6 = extraout_x9_01;
              uVar3 = extraout_x10_00;
              uVar5 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x00010729e330();
    if (((bool)in_CY) && (func_0x00010729eec4(), extraout_x8 == 0)) {
      func_0x00010729e2b0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010729e884();
    if (!(bool)in_CY) goto LAB_107298690;
  }
  return;
}



/* Entry: 1072986d4; end: 107298793;  */

void FUN_1072986d4(long param_1,ulong param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong uVar3;
  ulong extraout_x9;
  long *extraout_x9_00;
  long *plVar4;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    func_0x00010729f0b8();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_107270d08(param_1 + 8);
    func_0x00010729f0b8();
    uVar3 = 0;
    *(ulong *)(param_1 + 8) = param_2;
    while (param_2 != uVar3) {
      func_0x00010729eeb8();
      uVar3 = extraout_x9;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010729f134();
      func_0x00010729f114();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_00;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x00010729ec8c();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_01;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107298794; end: 1072987cf;  */

undefined8 * FUN_107298794(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x00010729833c();
  return param_1;
}



/* Entry: 1072987d0; end: 10729881b;  */

undefined8 * FUN_1072987d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_10729881c(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10729881c; end: 107298867;  */

void FUN_10729881c(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  long extraout_x11;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010729e964();
  if (extraout_x10 != 0) {
    uVar2 = *(ulong *)(extraout_x11 + 8);
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar2 = uVar3 - 1 & uVar2;
    }
    else if (uVar3 <= uVar2) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar2 / uVar3;
      }
      uVar2 = uVar2 - uVar1 * uVar3;
    }
    *(long *)(extraout_x8 + uVar2 * 8) = param_1 + 0x10;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 107298868; end: 107298873;  */

void FUN_107298868(ulong param_1)

{
  long lVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long lVar2;
  
  func_0x00010729e410();
  func_0x00010729ee28(0xe38f);
  if (param_1 < extraout_x8) {
    __Znwm(param_1 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010729eba4();
  if ((extraout_x8_00 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x48;
      func_0x00010729829c();
    }
  }
  return;
}



/* Entry: 107298874; end: 1072988ef;  */

void FUN_107298874(ulong param_1)

{
  long lVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long lVar2;
  
  func_0x00010729ee28(0xe38f);
  if (param_1 < extraout_x8) {
    __Znwm(param_1 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010729eba4();
  if ((extraout_x8_00 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x48;
      func_0x00010729829c();
    }
  }
  return;
}



/* Entry: 1072988f0; end: 1072988fb;  */

void FUN_1072988f0(ulong param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long lVar2;
  
  func_0x00010729e410();
  if (param_1 >> 0x3c == 0) {
    __Znwm(param_1 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010729eba4();
  if ((extraout_x8 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      FUN_107293168();
    }
  }
  return;
}



/* Entry: 1072988fc; end: 107298993;  */

void FUN_1072988fc(ulong param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long lVar2;
  
  if (param_1 >> 0x3c == 0) {
    __Znwm(param_1 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010729eba4();
  if ((extraout_x8 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      FUN_107293168();
    }
  }
  return;
}



/* Entry: 107298994; end: 1072989cf;  */

void FUN_107298994(void)

{
  func_0x000100600fcc();
  FUN_107298658();
  FUN_1072989d0();
  return;
}



/* Entry: 1072989d0; end: 107298a07;  */

void FUN_1072989d0(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000100601028();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    FUN_107298a08();
  }
  return;
}



/* Entry: 107298a08; end: 107298a3b;  */

void FUN_107298a08(void)

{
  func_0x000107298a20();
  return;
}



/* Entry: 107298a3c; end: 107298be3;  */

undefined1  [16] FUN_107298a3c(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  long *unaff_x21;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x25;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 auStack_68 [3];
  
  uVar4 = param_4;
  func_0x000104c2fe38();
  uVar6 = param_3[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x25 = uVar7 & uVar4;
      in_NG = 0;
    }
    else {
      in_NG = (long)(uVar4 - uVar6) < 0;
      unaff_x25 = uVar4;
      if (uVar6 <= uVar4) {
        func_0x00010729f1dc();
      }
    }
    plVar5 = *(long **)(*param_3 + unaff_x25 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar5;
          if (unaff_x21 == (long *)0x0) goto LAB_107298afc;
          uVar3 = unaff_x21[1];
          in_NG = (long)(uVar3 - uVar4) < 0;
          plVar5 = unaff_x21;
          if (uVar3 != uVar4) break;
          uVar3 = (ulong)(unaff_x21 + 2);
          func_0x000104c32db4(uVar3,param_4);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0;
            goto LAB_107298bcc;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar3 = uVar3 & uVar7;
        }
        else if (uVar6 <= uVar3) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar3 / uVar6;
          }
          uVar3 = uVar3 - uVar1 * uVar6;
        }
        in_NG = (long)(uVar3 - unaff_x25) < 0;
      } while (uVar3 == unaff_x25);
    }
  }
LAB_107298afc:
  func_0x00010729eb1c(auStack_68);
  FUN_107298be4();
  func_0x00010729ea54();
  if ((uVar6 == 0) ||
     (func_0x00010729edac(param_1,param_2,(float)uVar6), uVar7 = unaff_x25, (bool)in_NG)) {
    func_0x00010729ef60();
    func_0x00010729e34c();
    FUN_107298658(param_3);
    uVar6 = param_3[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar7 = uVar6 - 1 & uVar4;
    }
    else {
      uVar7 = uVar4;
      if (uVar6 <= uVar4) {
        func_0x00010729f1dc();
        uVar7 = unaff_x25;
      }
    }
  }
  if (*(long *)(*param_3 + uVar7 * 8) == 0) {
    func_0x00010729ec34();
    if (extraout_x9 != 0) {
      uVar4 = *(ulong *)(extraout_x9 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar4 & uVar6 - 1;
      }
      else if (uVar6 <= uVar4) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar7 * uVar6;
      }
      *(long **)(extraout_x8 + uVar4 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00010729f1c8();
  }
  auStack_68[0] = 0;
  param_3[3] = param_3[3] + 1;
  func_0x00010729eb14();
  uVar2 = 1;
LAB_107298bcc:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 107298be4; end: 107298d13;  */

long FUN_107298be4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  
  func_0x00010729eb28();
  *param_1 = param_2;
  param_1[1] = unaff_x22;
  param_1[2] = 1;
  *param_2 = 0;
  param_2[1] = param_3;
  func_0x0001000d03a8(param_2 + 2,param_4);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 107298d14; end: 107298d1b;  */

void FUN_107298d14(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x28) != 1) {
    FUN_10729816c();
    *(undefined4 *)(lVar1 + 0x28) = 1;
  }
  return;
}



/* Entry: 107298d1c; end: 107298dcb;  */

void FUN_107298d1c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_58;
  long alStack_50 [2];
  
  func_0x00010729f128();
  FUN_10724bb70(alStack_50,param_1 + 1);
  if (alStack_50[0] != 0) {
    FUN_107298de4(&lStack_58,*param_1,param_2);
    func_0x00010729ec1c();
    func_0x0001073ae140();
    lVar1 = lStack_58;
    lStack_58 = 0;
    if (lVar1 != 0) {
      func_0x00010729e708();
    }
  }
  func_0x00010724bcd8(alStack_50);
  return;
}



/* Entry: 107298dcc; end: 107298de3;  */

long * FUN_107298dcc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long alStack_d8 [4];
  undefined8 uStack_b8;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010729f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  func_0x00010729e2fc();
  lStack_68 = param_2;
  uStack_60 = param_3;
  func_0x00010729916c(auStack_58,param_4);
  plVar3 = &lStack_68;
  puVar4 = auStack_58;
  FUN_107298e5c(&uStack_70);
  *extraout_x8 = uStack_70;
  func_0x00010729ed70();
  func_0x00010729e1e0(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x00010729ed70();
  func_0x00010729e514();
  func_0x00010729e310();
  uVar2 = 0x40;
  uStack_b8 = extraout_x8_01;
  __Znwm();
  lVar5 = *plVar3;
  lVar6 = plVar3[1];
  plVar1 = alStack_d8;
  func_0x00010729916c();
  plVar3 = alStack_d8;
  func_0x00010729ec28();
  FUN_107298f04();
  *extraout_x8_00 = uVar2;
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_b8);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x00010729e91c();
  func_0x00010729e93c();
  func_0x00010729e51c();
  *plVar1 = (long)&PTR_FUN_110998c18;
  plVar1[1] = (long)puVar4;
  plVar1[2] = lVar5;
  plVar1[3] = lVar6;
  func_0x00010729916c(plVar1 + 4,plVar3);
  return plVar1;
}



/* Entry: 107298de4; end: 107298e5b;  */

undefined8 *
FUN_107298de4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 auStack_c8 [4];
  undefined8 uStack_a8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010729e2fc();
  uStack_58 = param_3;
  uStack_50 = param_4;
  func_0x00010729916c(auStack_48,param_5);
  puVar2 = &uStack_58;
  puVar3 = auStack_48;
  FUN_107298e5c(&uStack_60);
  *param_1 = uStack_60;
  func_0x00010729ed70();
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010729ed70();
  func_0x00010729e514();
  func_0x00010729e310();
  uVar1 = 0x40;
  uStack_a8 = extraout_x8_00;
  __Znwm();
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  puVar2 = auStack_c8;
  func_0x00010729916c();
  puVar6 = auStack_c8;
  func_0x00010729ec28();
  FUN_107298f04();
  *extraout_x8 = uVar1;
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_a8);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010729e91c();
  func_0x00010729e93c();
  func_0x00010729e51c();
  *puVar2 = &PTR_FUN_110998c18;
  puVar2[1] = puVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  func_0x00010729916c(puVar2 + 4,puVar6);
  return puVar2;
}



/* Entry: 107298e5c; end: 107298f03;  */

undefined8 *
FUN_107298e5c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 auStack_68 [4];
  undefined8 uStack_48;
  
  func_0x00010729e310();
  uVar1 = 0x40;
  uStack_48 = extraout_x8;
  __Znwm();
  uVar3 = *param_3;
  uVar4 = param_3[1];
  puVar2 = auStack_68;
  func_0x00010729916c();
  puVar5 = auStack_68;
  func_0x00010729ec28();
  FUN_107298f04();
  *param_1 = uVar1;
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010729e91c();
  func_0x00010729e93c();
  func_0x00010729e51c();
  *puVar2 = &PTR_FUN_110998c18;
  puVar2[1] = param_4;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  func_0x00010729916c(puVar2 + 4,puVar5);
  return puVar2;
}



/* Entry: 107298f04; end: 107298f3b;  */

undefined8 *
FUN_107298f04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = &PTR_FUN_110998c18;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  func_0x00010729916c(param_1 + 4,param_5);
  return param_1;
}



/* Entry: 107298f3c; end: 107298f3f;  */

undefined8 * FUN_107298f3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998c18;
  func_0x000107283e00(param_1 + 4);
  return param_1;
}



/* Entry: 107298f40; end: 107298f53;  */

void FUN_107298f40(void)

{
  FUN_107298f58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107298f54; end: 107298f57;  */

undefined1 * FUN_107298f54(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined8 extraout_x9;
  code *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010729f148();
  pcVar4 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar4 = *(code **)(*plVar1 + ((ulong)pcVar4 & 0xffffffff));
  }
  uStack_28 = extraout_x9;
  func_0x00010729916c(auStack_68,extraout_x8 + 0x20);
  FUN_107299020(auStack_48,auStack_68);
  (*pcVar4)(plVar1,auStack_48);
  puVar2 = auStack_48;
  func_0x000107283e00();
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  func_0x000107283e00();
  func_0x00010729e91c();
  func_0x00010729e514();
  func_0x00010729eacc();
  *(undefined8 *)(puVar3 + 0x18) = 0;
  func_0x00010729f03c();
  FUN_107299060();
  *(undefined1 **)(puVar2 + 0x18) = puVar3;
  return puVar2;
}



/* Entry: 107298f58; end: 107298f83;  */

undefined8 * FUN_107298f58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998c18;
  func_0x000107283e00(param_1 + 4);
  return param_1;
}



/* Entry: 107298f84; end: 10729901f;  */

undefined1 * FUN_107298f84(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined8 extraout_x9;
  code *pcVar4;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010729f148();
  pcVar4 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar4 = *(code **)(*plVar1 + ((ulong)pcVar4 & 0xffffffff));
  }
  uStack_28 = extraout_x9;
  func_0x00010729916c(auStack_68,extraout_x8 + 0x20);
  FUN_107299020(auStack_48,auStack_68);
  (*pcVar4)(plVar1,auStack_48);
  puVar2 = auStack_48;
  func_0x000107283e00();
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  func_0x000107283e00();
  func_0x00010729e91c();
  func_0x00010729e514();
  func_0x00010729eacc();
  *(undefined8 *)(puVar3 + 0x18) = 0;
  func_0x00010729f03c();
  FUN_107299060();
  *(undefined1 **)(puVar2 + 0x18) = puVar3;
  return puVar2;
}



/* Entry: 107299020; end: 10729905f;  */

void FUN_107299020(long param_1)

{
  long unaff_x19;
  
  func_0x00010729eacc();
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x00010729f03c();
  FUN_107299060();
  *(long *)(unaff_x19 + 0x18) = param_1;
  return;
}



/* Entry: 107299060; end: 10729907f;  */

void FUN_107299060(void)

{
  func_0x00010729eb64();
  func_0x00010729916c();
  return;
}



/* Entry: 107299080; end: 107299083;  */

void FUN_107299080(void)

{
  func_0x00010729eb64();
  func_0x000107283e00();
  return;
}



/* Entry: 107299084; end: 107299097;  */

void FUN_107299084(void)

{
  FUN_10729912c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107299098; end: 1072990cb;  */

undefined8 FUN_107299098(undefined8 param_1)

{
  func_0x00010729f03c();
  func_0x00010729914c();
  return param_1;
}



/* Entry: 1072990cc; end: 1072990f7;  */

void FUN_1072990cc(long param_1,undefined8 param_2)

{
  func_0x00010729eb64(param_2,param_1 + 8);
  func_0x00010729916c();
  return;
}



/* Entry: 1072990f8; end: 10729911f;  */

void FUN_1072990f8(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_110998cb8);
  func_0x00010729e3dc();
  return;
}



/* Entry: 107299120; end: 10729912b;  */

undefined ** FUN_107299120(void)

{
  return &PTR_DAT_110998cb8;
}



/* Entry: 10729912c; end: 1072991af;  */

void FUN_10729912c(void)

{
  func_0x00010729eb64();
  func_0x000107283e00();
  return;
}



/* Entry: 1072991b0; end: 107299203;  */

void FUN_1072991b0(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x10) != -1 || *(int *)(param_2 + 0x10) != -1) {
    if (*(int *)(param_2 + 0x10) == -1) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        func_0x00010729ea68((&PTR_FUN_1109984c8)[*(uint *)(param_1 + 0x10)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    func_0x00010729f01c();
  }
  return;
}



/* Entry: 107299204; end: 107299247;  */

void FUN_107299204(long param_1)

{
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    func_0x00010729ea68((&PTR_FUN_1109984c8)[*(uint *)(param_1 + 0x10)]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 107299248; end: 10729926b;  */

void FUN_107299248(void)

{
  return;
}



/* Entry: 10729926c; end: 107299293;  */

void FUN_10729926c(long param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00010729e9a0();
    FUN_107299294();
  }
  return;
}



/* Entry: 107299294; end: 1072992af;  */

void FUN_107299294(void)

{
  long unaff_x19;
  
  func_0x00010729f058();
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  return;
}



/* Entry: 1072992b0; end: 1072992b7;  */

void FUN_1072992b0(long *param_1)

{
  if (*(int *)(*param_1 + 0x10) != 1) {
    func_0x00010729e9a0();
    FUN_1072992e4();
  }
  return;
}



/* Entry: 1072992b8; end: 1072992e3;  */

void FUN_1072992b8(long param_1)

{
  if (*(int *)(param_1 + 0x10) != 1) {
    func_0x00010729e9a0();
    FUN_1072992e4();
  }
  return;
}



/* Entry: 1072992e4; end: 107299303;  */

void FUN_1072992e4(void)

{
  long unaff_x19;
  
  func_0x00010729f058();
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return;
}



/* Entry: 107299304; end: 10729930b;  */

void FUN_107299304(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (*(int *)(*param_1 + 0x10) != 2) {
    func_0x00010729e9a0();
    FUN_107299340();
    return;
  }
  if (param_2 != param_3) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    FUN_107299438();
    FUN_107283230(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 10729930c; end: 10729933f;  */

void FUN_10729930c(long param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (*(int *)(param_1 + 0x10) != 2) {
    func_0x00010729e9a0();
    FUN_107299340();
    return;
  }
  if (param_2 != param_3) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    FUN_107299438();
    FUN_107283230(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107299340; end: 10729937f;  */

void FUN_107299340(long param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x000107299490(auStack_30,*(undefined8 *)(param_1 + 8));
  func_0x00010729ea8c();
  func_0x00010729945c();
  FUN_107283194(auStack_30);
  return;
}



/* Entry: 107299380; end: 1072993f3;  */

void FUN_107299380(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (param_1 != param_2) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    FUN_107299438();
    FUN_107283230(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 1072993f4; end: 107299437;  */

void FUN_1072993f4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    do {
      func_0x00010729e504(unaff_x30);
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 107299438; end: 1072994b3;  */

void FUN_107299438(void)

{
  func_0x00010729ec60();
  FUN_107283230();
  return;
}



/* Entry: 1072994b4; end: 107299537;  */

void FUN_1072994b4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e618();
  FUN_10726fdbc();
  FUN_107299538(param_1 + 0x20,unaff_x20 + 0x20);
  *(undefined1 *)(unaff_x19 + 0x88) = *(undefined1 *)(unaff_x20 + 0x88);
  FUN_10729969c(unaff_x19 + 0x90,unaff_x20 + 0x90);
  *(undefined1 *)(unaff_x19 + 0xa8) = *(undefined1 *)(unaff_x20 + 0xa8);
  FUN_107299728(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  return;
}



/* Entry: 107299538; end: 107299567;  */

void FUN_107299538(long param_1)

{
  func_0x00010729eb48();
  *(undefined1 *)(param_1 + 0x60) = 0;
  FUN_107299568();
  return;
}



/* Entry: 107299568; end: 10729957b;  */

void FUN_107299568(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_107299598();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  return;
}



/* Entry: 10729957c; end: 107299597;  */

void FUN_10729957c(long param_1)

{
  FUN_107299598();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 107299598; end: 1072995cf;  */

void FUN_107299598(long param_1)

{
  long unaff_x20;
  
  func_0x00010729e618();
  FUN_1072995d0();
  FUN_10729963c(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 1072995d0; end: 1072995ff;  */

void FUN_1072995d0(long param_1)

{
  func_0x00010729eb48();
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_107299600();
  return;
}



/* Entry: 107299600; end: 10729963b;  */

void FUN_107299600(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 2) == '\x01') {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10729963c; end: 10729966b;  */

void FUN_10729963c(long param_1)

{
  func_0x00010729eb48();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_10729966c();
  return;
}



/* Entry: 10729966c; end: 10729967f;  */

void FUN_10729966c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_107268350();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 107299680; end: 10729969b;  */

void FUN_107299680(long param_1)

{
  FUN_107268350();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10729969c; end: 1072996cf;  */

void FUN_10729969c(long param_1)

{
  func_0x00010729eb48();
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_1072996d0();
  return;
}



/* Entry: 1072996d0; end: 107299713;  */

void FUN_1072996d0(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e618();
  FUN_107299204();
  iVar1 = *(int *)(unaff_x20 + 0x10);
  if (iVar1 != -1) {
    func_0x00010729e6f8(&PTR_FUN_1109984f8);
    *(int *)(unaff_x19 + 0x10) = iVar1;
  }
  return;
}



/* Entry: 107299714; end: 107299727;  */

void FUN_107299714(void)

{
  return;
}



/* Entry: 107299728; end: 107299757;  */

void FUN_107299728(long param_1)

{
  func_0x00010729eb48();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_107299758();
  return;
}



/* Entry: 107299758; end: 10729976b;  */

void FUN_107299758(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_107298994();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10729976c; end: 1072997a7;  */

void FUN_10729976c(long param_1)

{
  FUN_107298994();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1072997a8; end: 107299837;  */

void FUN_1072997a8(long param_1)

{
  func_0x000107299788(param_1 + 0xb0);
  FUN_107299204(param_1 + 0x90);
  FUN_107284d6c(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10726e078();
  }
  return;
}



/* Entry: 107299838; end: 107299847;  */

void FUN_107299838(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar2;
  ulong unaff_x21;
  long *unaff_x22;
  
  uVar1 = (param_3 - param_2) / 0x38;
  func_0x00010729e524();
  if ((ulong)(extraout_x8 / 0x38) < uVar1) {
    unaff_x22 = unaff_x19;
    FUN_107299900();
    func_0x00010729ec28();
    FUN_107299934();
    func_0x00010729ebf0();
    FUN_10726de5c();
    func_0x00010729e9ac();
  }
  else {
    if (unaff_x21 <= (ulong)((unaff_x19[1] - param_3) / 0x38)) {
      func_0x00010729ed90();
      func_0x00010729998c();
      plVar2 = unaff_x19;
      func_0x0001072747d8();
      plVar2 = (long *)plVar2[1];
      while (plVar2 != unaff_x19) {
        plVar2 = plVar2 + -7;
        func_0x000104c2f714(plVar2);
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x00010729998c();
    func_0x00010729e8bc(unaff_x19[1] - *unaff_x19);
  }
  func_0x000107274d4c();
  func_0x000107274cd8();
  FUN_10726feb4();
  unaff_x19[1] = (long)unaff_x22;
  return;
}



/* Entry: 107299848; end: 1072998ff;  */

void FUN_107299848(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar1;
  ulong unaff_x21;
  long *unaff_x22;
  
  func_0x00010729e524();
  if ((ulong)(extraout_x8 / 0x38) < param_4) {
    unaff_x22 = unaff_x19;
    FUN_107299900();
    func_0x00010729ec28();
    FUN_107299934();
    func_0x00010729ebf0();
    FUN_10726de5c();
    func_0x00010729e9ac();
  }
  else {
    if (unaff_x21 <= (ulong)((unaff_x19[1] - param_3) / 0x38)) {
      func_0x00010729ed90();
      func_0x00010729998c();
      plVar1 = unaff_x19;
      func_0x0001072747d8();
      plVar1 = (long *)plVar1[1];
      while (plVar1 != unaff_x19) {
        plVar1 = plVar1 + -7;
        func_0x000104c2f714(plVar1);
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x00010729998c();
    func_0x00010729e8bc(unaff_x19[1] - *unaff_x19);
  }
  func_0x000107274d4c();
  func_0x000107274cd8();
  FUN_10726feb4();
  unaff_x19[1] = (long)unaff_x22;
  return;
}



/* Entry: 107299900; end: 107299933;  */

void FUN_107299900(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10726e034();
    func_0x00010729ecc4();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



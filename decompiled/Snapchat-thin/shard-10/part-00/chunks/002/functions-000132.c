/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107529014; end: 10752903b;  */

undefined1  [16] FUN_107529014(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10752ab84(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10752903c; end: 1075290bb;  */

void FUN_10752903c(long param_1,long param_2)

{
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = param_2;
  func_0x000107529860(alStack_40,param_1 + 0x50,&lStack_28);
  alStack_40[0] = param_1;
  func_0x000107529848(lStack_28 + 0x70,alStack_40);
  return;
}



/* Entry: 1075290bc; end: 10752910f;  */

void FUN_1075290bc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x400) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109b9a18)[*(uint *)(param_1 + 0x400)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  return;
}



/* Entry: 107529110; end: 10752911f;  */

void FUN_107529110(undefined8 param_1,long param_2)

{
  FUN_1073b0514(param_2 + 0x3d8);
  func_0x000107266948(param_2 + 0x2f8);
  func_0x00010028ad98(param_2 + 0x2d0);
  FUN_1075291c8(param_2 + 0x2b0);
  FUN_1075293a4(param_2 + 0x298);
  func_0x0001072bb8ec(param_2 + 0x238);
  func_0x0001072bc324(param_2 + 0x1d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x1c0);
  func_0x00010793f34c(param_2 + 400);
  FUN_107410b3c(param_2 + 0x180);
  func_0x000107410da4(param_2 + 0x168);
  func_0x000107410dc8(param_2 + 0xb0);
  func_0x00010752942c(param_2 + 0x88);
  FUN_1074751a0(param_2 + 0x60);
  FUN_1075294ec(param_2 + 0x48);
  func_0x000107529598(param_2 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 107529120; end: 1075291c7;  */

void FUN_107529120(long param_1)

{
  FUN_1073b0514(param_1 + 0x3d8);
  func_0x000107266948(param_1 + 0x2f8);
  func_0x00010028ad98(param_1 + 0x2d0);
  FUN_1075291c8(param_1 + 0x2b0);
  FUN_1075293a4(param_1 + 0x298);
  func_0x0001072bb8ec(param_1 + 0x238);
  func_0x0001072bc324(param_1 + 0x1d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c0);
  func_0x00010793f34c(param_1 + 400);
  FUN_107410b3c(param_1 + 0x180);
  func_0x000107410da4(param_1 + 0x168);
  func_0x000107410dc8(param_1 + 0xb0);
  func_0x00010752942c(param_1 + 0x88);
  FUN_1074751a0(param_1 + 0x60);
  FUN_1075294ec(param_1 + 0x48);
  func_0x000107529598(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1075291c8; end: 1075291f7;  */

void FUN_1075291c8(void)

{
  long extraout_x8;
  
  func_0x00010752adac();
  if (extraout_x8 != 0) {
    FUN_1075291f8();
    func_0x00010752ac18();
  }
  return;
}



/* Entry: 1075291f8; end: 107529333;  */

void FUN_1075291f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x000107529234(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x60;
  }
  return;
}



/* Entry: 107529334; end: 10752933b;  */

void FUN_107529334(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010752ac34(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -1;
    func_0x00010733ea58();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10752933c; end: 10752938b;  */

void FUN_10752933c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010752ac34();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -8;
    func_0x00010733ea58();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10752938c; end: 1075293a3;  */

void FUN_10752938c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1075293a4; end: 1075293f3;  */

void FUN_1075293a4(void)

{
  func_0x00010752ac44();
  func_0x0001075293c8();
  return;
}



/* Entry: 1075293f4; end: 1075293fb;  */

void FUN_1075293f4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010752ac34(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -3;
    func_0x00010726b264();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1075293fc; end: 1075294d3;  */

void FUN_1075293fc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010752ac34();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x00010726b264();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1075294d4; end: 1075294eb;  */

void FUN_1075294d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1075294ec; end: 10752953b;  */

void FUN_1075294ec(void)

{
  func_0x00010752ac44();
  func_0x000107529510();
  return;
}



/* Entry: 10752953c; end: 107529543;  */

void FUN_10752953c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010752ac34(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -1;
    func_0x000107529574();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107529544; end: 1075295e7;  */

void FUN_107529544(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010752ac34();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -8;
    func_0x000107529574();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1075295e8; end: 1075295ef;  */

void FUN_1075295e8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010752ac34(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -1;
    func_0x000107529620();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1075295f0; end: 1075296ff;  */

void FUN_1075295f0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010752ac34();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -8;
    func_0x000107529620();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107529700; end: 10752972f;  */

void FUN_107529700(void)

{
  long extraout_x8;
  
  func_0x00010752adac();
  if (extraout_x8 != 0) {
    FUN_107529730();
    func_0x00010752ac18();
  }
  return;
}



/* Entry: 107529730; end: 10752976f;  */

void FUN_107529730(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_1;
  for (lVar1 = param_1[2]; lVar1 != 0; lVar1 = lVar1 + -1) {
    if (-1 < *pcVar2) {
      func_0x00010752acd0();
    }
    pcVar2 = pcVar2 + 1;
  }
  return;
}



/* Entry: 107529770; end: 10752979f;  */

void FUN_107529770(void)

{
  long extraout_x8;
  
  func_0x00010752adac();
  if (extraout_x8 != 0) {
    FUN_1075297a0();
    func_0x00010752ac18();
  }
  return;
}



/* Entry: 1075297a0; end: 107529847;  */

void FUN_1075297a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x0001075297dc(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x48;
  }
  return;
}



/* Entry: 107529848; end: 107529883;  */

void FUN_107529848(void)

{
  FUN_107529bf8();
  return;
}



/* Entry: 107529884; end: 10752988b;  */

void FUN_107529884(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)param_3;
  lVar1 = *param_2;
  FUN_1075298e0();
  param_2 = (long *)*param_2;
  lVar3 = param_2[1];
  if ((uVar2 & 1) != 0) {
    *(undefined8 *)(lVar3 + lVar1 * 8) = *param_3;
  }
  *param_1 = *param_2 + lVar1;
  param_1[1] = lVar3 + lVar1 * 8;
  *(char *)(param_1 + 2) = (char)uVar2;
  return;
}



/* Entry: 10752988c; end: 1075298df;  */

void FUN_10752988c(long *param_1,long *param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  FUN_1075298e0();
  param_2 = (long *)*param_2;
  lVar2 = param_2[1];
  if ((param_3 & 1) != 0) {
    *(undefined8 *)(lVar2 + lVar1 * 8) = *param_4;
  }
  *param_1 = *param_2 + lVar1;
  param_1[1] = lVar2 + lVar1 * 8;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 1075298e0; end: 1075299a7;  */

void FUN_1075298e0(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar8;
  byte bVar14;
  
  Hint_Prefetch(*param_1,0,2,0);
  puVar2 = param_1;
  FUN_1075299a8(*param_1);
  lVar3 = 0;
  uVar5 = *param_1 >> 0xc ^ (ulong)puVar2 >> 7;
  bVar4 = (byte)puVar2 & 0x7f;
  while( true ) {
    uVar5 = uVar5 & param_1[2];
    uVar8 = *(undefined8 *)(*param_1 + uVar5);
    bVar7 = (byte)((ulong)uVar8 >> 8);
    bVar9 = (byte)((ulong)uVar8 >> 0x10);
    bVar10 = (byte)((ulong)uVar8 >> 0x18);
    bVar11 = (byte)((ulong)uVar8 >> 0x20);
    bVar12 = (byte)((ulong)uVar8 >> 0x28);
    bVar13 = (byte)((ulong)uVar8 >> 0x30);
    bVar14 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar6 = CONCAT17(-(bVar14 == bVar4),
                          CONCAT16(-(bVar13 == bVar4),
                                   CONCAT15(-(bVar12 == bVar4),
                                            CONCAT14(-(bVar11 == bVar4),
                                                     CONCAT13(-(bVar10 == bVar4),
                                                              CONCAT12(-(bVar9 == bVar4),
                                                                       CONCAT11(-(bVar7 == bVar4),
                                                                                -((byte)uVar8 ==
                                                                                 bVar4)))))))) &
                 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      if (*(long *)(param_1[1] +
                   (uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]) * 8)
          == *param_2) {
        return;
      }
    }
    bVar7 = NEON_umaxv(CONCAT17(-(bVar14 == 0x80),
                                CONCAT16(-(bVar13 == 0x80),
                                         CONCAT15(-(bVar12 == 0x80),
                                                  CONCAT14(-(bVar11 == 0x80),
                                                           CONCAT13(-(bVar10 == 0x80),
                                                                    CONCAT12(-(bVar9 == 0x80),
                                                                             CONCAT11(-(bVar7 == 
                                                  0x80),-((byte)uVar8 == 0x80)))))))),1);
    if ((bVar7 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar5 = lVar3 + uVar5;
  }
  FUN_1075299d0(param_1);
  return;
}



/* Entry: 1075299a8; end: 1075299cf;  */

void FUN_1075299a8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  FUN_107529a68(&uStack_18);
  return;
}



/* Entry: 1075299d0; end: 107529a67;  */

void FUN_1075299d0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  plVar2 = param_1;
  func_0x000100061de0();
  lVar3 = *param_1;
  if ((*(long *)(lVar3 + -8) == 0) && (*(char *)(lVar3 + (long)plVar2) != -2)) {
    FUN_107529b7c(param_1);
    plVar2 = param_1;
    func_0x000100061de0(param_1,param_2);
    lVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) - (ulong)(*(char *)(lVar3 + (long)plVar2) == -0x80)
  ;
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(lVar3 + (long)plVar2) = bVar1;
  *(byte *)(lVar3 + (uVar4 & (long)plVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 107529a68; end: 107529a7f;  */

void FUN_107529a68(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  func_0x000100061c44(&PTR_LOOP_110c8acd8,&uStack_18,&uStack_18);
  return;
}



/* Entry: 107529a80; end: 107529aa7;  */

void FUN_107529a80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x000100061c44(param_1,&uStack_18,&uStack_18);
  return;
}



/* Entry: 107529aa8; end: 107529b7b;  */

void FUN_107529aa8(long *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  pcVar2 = (char *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  lVar9 = param_1[2];
  param_1[2] = param_2;
  func_0x000100068914();
  lVar10 = param_1[1];
  pcVar1 = pcVar2;
  for (lVar11 = lVar9; lVar11 != 0; lVar11 = lVar11 + -1) {
    if (-1 < *pcVar1) {
      plVar5 = param_1;
      FUN_1075299a8(param_1,puVar3);
      plVar6 = param_1;
      func_0x000100061de0(param_1,plVar5);
      bVar4 = (byte)plVar5 & 0x7f;
      uVar7 = param_1[2];
      lVar8 = *param_1;
      *(byte *)(lVar8 + (long)plVar6) = bVar4;
      *(byte *)(lVar8 + ((long)plVar6 - 7U & uVar7) + (uVar7 & 7)) = bVar4;
      *(undefined8 *)(lVar10 + (long)plVar6 * 8) = *puVar3;
    }
    pcVar1 = pcVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pcVar2 + -8);
  return;
}



/* Entry: 107529b7c; end: 107529bab;  */

void FUN_107529b7c(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar8 = param_1[2];
  if ((8 < uVar8) &&
     (uVar5 = uVar8 * 0x19 + param_1[3] * -0x20 == 0, (ulong)(param_1[3] * 0x20) <= uVar8 * 0x19)) {
    uVar9 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010ae6c914(param_1,&UNK_1109b9a28,&stack0xffffffffffffffe0);
    func_0x00010752ad8c(uVar9);
    if (!(bool)uVar5) {
      ___stack_chk_fail();
      FUN_107529a68(&stack0xffffffffffffffc8);
      return;
    }
    return;
  }
  pcVar2 = (char *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  lVar11 = param_1[2];
  param_1[2] = uVar8 << 1 | 1;
  func_0x000100068914();
  lVar12 = param_1[1];
  pcVar1 = pcVar2;
  for (lVar13 = lVar11; lVar13 != 0; lVar13 = lVar13 + -1) {
    if (-1 < *pcVar1) {
      plVar6 = param_1;
      FUN_1075299a8(param_1,puVar3);
      plVar7 = param_1;
      func_0x000100061de0(param_1,plVar6);
      bVar4 = (byte)plVar6 & 0x7f;
      uVar8 = param_1[2];
      lVar10 = *param_1;
      *(byte *)(lVar10 + (long)plVar7) = bVar4;
      *(byte *)(lVar10 + ((long)plVar7 - 7U & uVar8) + (uVar8 & 7)) = bVar4;
      *(undefined8 *)(lVar12 + (long)plVar7 * 8) = *puVar3;
    }
    pcVar1 = pcVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pcVar2 + -8);
  return;
}



/* Entry: 107529bac; end: 107529bf3;  */

void FUN_107529bac(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)&UNK_1109b9a28;
  func_0x00010ae6c914(param_1,&UNK_1109b9a28,auStack_20);
  func_0x00010752ad8c(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_28 = FUN_107529bf4;
  uStack_38 = *puVar1;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_107529a68(&uStack_38);
  return;
}



/* Entry: 107529bf4; end: 107529bf7;  */

void FUN_107529bf4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  FUN_107529a68(&uStack_18);
  return;
}



/* Entry: 107529bf8; end: 107529c2b;  */

void FUN_107529bf8(void)

{
  func_0x000107529c10();
  return;
}



/* Entry: 107529c2c; end: 107529ccb;  */

undefined1  [16] FUN_107529c2c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_107529ccc(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x28;
    __Znwm();
    uStack_50 = 1;
    *(undefined8 *)(lVar3 + 0x20) = *param_3;
    plStack_58 = param_1 + 1;
    FUN_107529d50(param_1,uStack_48,plVar2,lVar3);
    uStack_60 = 0;
    func_0x000107529d9c(&uStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 107529ccc; end: 107529d4f;  */

long * FUN_107529ccc(long param_1,long *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar6 = *param_3;
    uVar1 = *(uint *)(uVar6 + 0x40);
    plVar7 = (long *)*plVar4;
    do {
      while( true ) {
        uVar9 = plVar7[4];
        uVar2 = *(uint *)(uVar9 + 0x40);
        bVar3 = uVar6 < uVar9;
        if (uVar1 != uVar2) {
          bVar3 = uVar2 < uVar1;
        }
        plVar5 = plVar7;
        if (!bVar3) break;
        plVar8 = (long *)*plVar7;
        plVar4 = plVar7;
        plVar7 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_107529d48;
      }
      bVar3 = uVar9 < uVar6;
      if (uVar1 != uVar2) {
        bVar3 = uVar1 < uVar2;
      }
      if (!bVar3) break;
      plVar4 = plVar7 + 1;
      plVar7 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_107529d48:
  *param_2 = (long)plVar5;
  return plVar4;
}



/* Entry: 107529d50; end: 107529dbb;  */

void FUN_107529d50(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 107529dbc; end: 107529dd3;  */

void FUN_107529dbc(long *param_1,long param_2)

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



/* Entry: 107529dd4; end: 107529de7;  */

undefined1  [16] FUN_107529dd4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((ulong)plVar1 >> 0x3d == 0) {
    lVar2 = (long)plVar1 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = plVar1;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104bd35f4();
  lVar2 = plVar1[1];
  while (lVar2 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -8;
    func_0x000107529e64();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 107529de8; end: 107529e83;  */

undefined1  [16] FUN_107529de8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x000107529e64();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107529e84; end: 107529e9b;  */

void FUN_107529e84(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107529eb8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107529e9c; end: 107529eb7;  */

void FUN_107529e9c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107529eb8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107529eb8; end: 107529f9b;  */

long FUN_107529eb8(long param_1)

{
  func_0x000107529ef8(param_1 + 0x70);
  func_0x000107529f54(param_1 + 0x50);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x48);
  func_0x000107529f78(param_1 + 0x38);
  func_0x00010752acd0();
  return param_1;
}



/* Entry: 107529f9c; end: 10752a65f;  */

void FUN_107529f9c(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long extraout_x8;
  long *plVar12;
  long *extraout_x8_00;
  long *extraout_x8_01;
  uint extraout_w9;
  uint extraout_w9_00;
  long lVar13;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long extraout_x9_02;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_70;
  long lStack_68;
  
  do {
    plVar12 = param_2 + -1;
    plVar8 = param_1;
LAB_107529fe0:
    param_1 = plVar8;
    uVar19 = (long)param_2 - (long)param_1 >> 3;
    bVar2 = 4 < uVar19;
    bVar4 = uVar19 == 5;
    switch(uVar19) {
    case 0:
    case 1:
      goto LAB_10752a640;
    case 2:
      func_0x00010752aca8(param_2[-1]);
      if (!bVar2 || bVar4) {
        return;
      }
      *param_1 = extraout_x8;
      param_2[-1] = extraout_x9_02;
      return;
    case 3:
      func_0x00010752acfc(param_1,param_1 + 1);
      return;
    case 4:
      FUN_10752a6e8(param_1,param_1 + 1,param_1 + 2,plVar12);
      return;
    case 5:
      FUN_10752a748(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar12);
      goto LAB_10752a640;
    }
    if ((long)uVar19 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        while (plVar8 = param_1, param_1 = plVar8 + 1, param_1 != param_2) {
          lStack_68 = plVar8[1];
          if (*(uint *)(*plVar8 + 0x40) < *(uint *)(lStack_68 + 0x40)) {
            *param_1 = 0;
            do {
              plVar12 = plVar8;
              func_0x00010752ad38();
              plVar8 = plVar12 + -1;
            } while (*(uint *)(*plVar8 + 0x40) < *(uint *)(lStack_68 + 0x40));
            lStack_68 = 0;
            FUN_107529e84(plVar12);
            func_0x00010752ac88();
          }
        }
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      lVar10 = 0;
      plVar8 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar16 = uVar19 - 2 >> 1;
      uVar18 = uVar16;
      goto LAB_10752a3bc;
    }
    plVar8 = param_1 + (uVar19 >> 1);
    if (uVar19 < 0x81) {
      func_0x00010752acfc(plVar8,param_1);
    }
    else {
      func_0x00010752acfc(param_1,plVar8);
      FUN_10752a660(param_1 + 1,plVar8 + -1,param_2 + -2);
      FUN_10752a660(param_1 + 2,plVar8 + 1,param_2 + -3);
      FUN_10752a660(plVar8 + -1,plVar8,plVar8 + 1);
      lVar10 = *param_1;
      *param_1 = *plVar8;
      *plVar8 = lVar10;
    }
    param_3 = param_3 + -1;
    lVar10 = *param_1;
    lStack_68 = lVar10;
    if ((param_4 & 1) == 0) {
      uVar9 = *(uint *)(lVar10 + 0x40);
      if (*(uint *)(param_1[-1] + 0x40) <= uVar9) {
        *param_1 = 0;
        plVar8 = param_1;
        if (*(uint *)(*plVar12 + 0x40) < uVar9) {
          do {
            plVar8 = plVar8 + 1;
          } while (uVar9 <= *(uint *)(*plVar8 + 0x40));
        }
        else {
          plVar6 = param_1 + 1;
          do {
            plVar8 = plVar6;
            bVar2 = param_2 <= plVar8;
            bVar4 = plVar8 == param_2;
            if (bVar2) break;
            func_0x00010752ad80();
            plVar6 = extraout_x9;
          } while (!bVar2 || bVar4);
        }
        uVar3 = param_2 <= plVar8;
        uVar5 = plVar8 == param_2;
        plVar6 = param_2;
        if (!(bool)uVar3) {
          do {
            func_0x00010752ad80();
            plVar6 = extraout_x9_00;
          } while ((bool)uVar3 && !(bool)uVar5);
        }
        while (lVar14 = lStack_68, uVar5 = plVar8 == plVar6, plVar8 < plVar6) {
          lVar10 = *plVar8;
          *plVar8 = *plVar6;
          *plVar6 = lVar10;
          uVar3 = 0;
          do {
            plVar8 = plVar8 + 1;
            func_0x00010752ad80();
          } while (!(bool)uVar3 || (bool)uVar5);
          do {
            func_0x00010752ad80();
            plVar6 = extraout_x9_01;
            lVar10 = lVar14;
          } while ((bool)uVar3 && !(bool)uVar5);
        }
        plVar6 = plVar8 + -1;
        if (param_1 != plVar6) {
          FUN_10752a974(param_1,plVar6);
        }
        lStack_68 = 0;
        FUN_107529e84(plVar6,lVar10);
        func_0x00010752ac88();
        param_4 = 0;
        goto LAB_107529fe0;
      }
    }
    else {
      uVar9 = *(uint *)(lVar10 + 0x40);
    }
    lVar14 = 0;
    *param_1 = 0;
    do {
      lVar13 = *(long *)((long)param_1 + lVar14 + 8);
      lVar14 = lVar14 + 8;
    } while (uVar9 < *(uint *)(lVar13 + 0x40));
    plVar6 = (long *)((long)param_1 + lVar14);
    plVar11 = param_2;
    plVar8 = plVar6;
    if (lVar14 == 8) {
      do {
        plVar7 = plVar11;
        if (plVar11 <= plVar6) break;
        plVar11 = plVar11 + -1;
        plVar7 = plVar11;
      } while (*(uint *)(*plVar11 + 0x40) <= uVar9);
    }
    else {
      do {
        plVar11 = plVar11 + -1;
        plVar7 = plVar11;
      } while (*(uint *)(*plVar11 + 0x40) <= uVar9);
    }
    while (plVar8 < plVar11) {
      *plVar8 = *plVar11;
      *plVar11 = lVar13;
      do {
        plVar8 = plVar8 + 1;
        lVar13 = *plVar8;
      } while (*(uint *)(lVar10 + 0x40) < *(uint *)(lVar13 + 0x40));
      do {
        plVar11 = plVar11 + -1;
      } while (*(uint *)(*plVar11 + 0x40) <= *(uint *)(lVar10 + 0x40));
    }
    plVar11 = plVar8 + -1;
    if (param_1 != plVar11) {
      FUN_10752a974(param_1,plVar11);
    }
    lStack_68 = 0;
    FUN_107529e84(plVar11,lVar10);
    func_0x00010752ac88();
    if (plVar6 < plVar7) goto LAB_10752a19c;
    plVar6 = param_1;
    FUN_10752a7dc(param_1,plVar11);
    plVar7 = plVar8;
    FUN_10752a7dc(plVar8,param_2);
    if ((int)plVar7 == 0) goto code_r0x00010752a198;
    param_2 = plVar11;
    if (((ulong)plVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10752a328:
  plVar12 = plVar8 + 1;
  if (plVar12 == param_2) {
    return;
  }
  lStack_68 = plVar8[1];
  if (*(uint *)(*plVar8 + 0x40) < *(uint *)(lStack_68 + 0x40)) {
    *plVar12 = 0;
    lVar14 = lVar10;
    do {
      lVar13 = lVar14;
      func_0x00010752ad38();
      plVar8 = param_1;
      if (lVar13 == 0) goto LAB_10752a38c;
      lVar14 = lVar13 + -8;
    } while (*(uint *)(*(long *)((long)param_1 + lVar13 + -8) + 0x40) < *(uint *)(lStack_68 + 0x40))
    ;
    plVar8 = (long *)((long)param_1 + lVar13);
LAB_10752a38c:
    lStack_68 = 0;
    FUN_107529e84(plVar8);
    func_0x00010752ac88();
  }
  lVar10 = lVar10 + 8;
  plVar8 = plVar12;
  goto LAB_10752a328;
LAB_10752a3bc:
  do {
    if ((long)uVar18 <= (long)uVar16) {
      uVar1 = (uVar18 & 0x3fffffffffffffff) << 1 | 1;
      plVar8 = param_1 + uVar1;
      uVar15 = uVar18 * 2 + 2;
      if ((long)uVar15 < (long)uVar19) {
        lVar10 = plVar8[1];
        plVar12 = plVar8 + 1;
        if (*(uint *)(*plVar8 + 0x40) <= *(uint *)(lVar10 + 0x40)) {
          plVar12 = plVar8;
          lVar10 = *plVar8;
          uVar15 = uVar1;
        }
      }
      else {
        plVar12 = plVar8;
        lVar10 = *plVar8;
        uVar15 = uVar1;
      }
      plVar8 = param_1 + uVar18;
      lVar14 = *plVar8;
      if (*(uint *)(lVar10 + 0x40) <= *(uint *)(lVar14 + 0x40)) {
        *plVar8 = 0;
        do {
          plVar6 = plVar12;
          FUN_10752a974(plVar8,plVar6);
          if ((long)uVar16 < (long)uVar15) break;
          uVar1 = uVar15 << 1 | 1;
          plVar8 = param_1 + uVar1;
          uVar15 = uVar15 * 2 + 2;
          if ((long)uVar15 < (long)uVar19) {
            lVar10 = plVar8[1];
            plVar12 = plVar8 + 1;
            if (*(uint *)(*plVar8 + 0x40) <= *(uint *)(lVar10 + 0x40)) {
              plVar12 = plVar8;
              lVar10 = *plVar8;
              uVar15 = uVar1;
            }
          }
          else {
            plVar12 = plVar8;
            lVar10 = *plVar8;
            uVar15 = uVar1;
          }
          plVar8 = plVar6;
        } while (*(uint *)(lVar10 + 0x40) <= *(uint *)(lVar14 + 0x40));
        lStack_68 = 0;
        FUN_107529e84(plVar6,lVar14);
        func_0x00010752ac88();
      }
    }
    uVar18 = uVar18 - 1;
  } while (-1 < (long)uVar18);
  do {
    if ((long)uVar19 < 2) {
LAB_10752a640:
      return;
    }
    lStack_70 = *param_1;
    *param_1 = 0;
    uVar16 = uVar19 - 2 >> 1;
    plVar8 = param_1;
    uVar18 = 0;
    do {
      uVar1 = uVar18 << 1 | 1;
      uVar15 = uVar18 * 2 + 2;
      plVar12 = plVar8 + uVar18 + 1;
      uVar17 = uVar1;
      if (((long)uVar15 < (long)uVar19) &&
         (plVar12 = plVar8 + uVar18 + 2, uVar17 = uVar15,
         *(uint *)(plVar8[uVar18 + 1] + 0x40) <= *(uint *)(plVar8[uVar18 + 2] + 0x40))) {
        plVar12 = plVar8 + uVar18 + 1;
        uVar17 = uVar1;
      }
      FUN_10752a974(plVar8,plVar12);
      plVar8 = plVar12;
      uVar18 = uVar17;
    } while ((long)uVar17 <= (long)uVar16);
    param_2 = param_2 + -1;
    if (plVar12 == param_2) {
      lStack_70 = 0;
      func_0x00010752ad44(plVar12);
    }
    else {
      FUN_10752a974(plVar12,param_2);
      lStack_70 = 0;
      func_0x00010752ad44(param_2);
      lVar10 = (long)plVar12 + (8 - (long)param_1) >> 3;
      if (1 < lVar10) {
        func_0x00010752ad6c(lVar10 + -2);
        lVar10 = *plVar12;
        if (*(uint *)(lVar10 + 0x40) < extraout_w9) {
          *plVar12 = 0;
          plVar8 = extraout_x8_00;
          do {
            plVar6 = plVar8;
            FUN_10752a974(plVar12,plVar6);
            if (uVar16 == 0) break;
            func_0x00010752ad6c(uVar16 - 1);
            plVar8 = extraout_x8_01;
            plVar12 = plVar6;
          } while (*(uint *)(lVar10 + 0x40) < extraout_w9_00);
          lStack_68 = 0;
          func_0x00010752ad44(plVar6);
          func_0x00010752ac88();
        }
      }
    }
    func_0x000107529e64(&lStack_70);
    uVar19 = uVar19 - 1;
  } while( true );
code_r0x00010752a198:
  if (((ulong)plVar6 & 1) == 0) {
LAB_10752a19c:
    FUN_107529f9c(param_1,plVar11,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_107529fe0;
}



/* Entry: 10752a660; end: 10752a6e7;  */

void FUN_10752a660(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_2;
  uVar1 = *(uint *)(lVar4 + 0x40);
  lVar3 = *param_1;
  uVar2 = *(uint *)(lVar3 + 0x40);
  lVar5 = *param_3;
  if (uVar2 < uVar1) {
    if (uVar1 < *(uint *)(lVar5 + 0x40)) {
      *param_1 = lVar5;
    }
    else {
      *param_1 = lVar4;
      *param_2 = lVar3;
      if (*(uint *)(*param_3 + 0x40) <= uVar2) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = lVar3;
  }
  else if (uVar1 < *(uint *)(lVar5 + 0x40)) {
    *param_2 = lVar5;
    *param_3 = lVar4;
    lVar3 = *param_1;
    if (*(uint *)(lVar3 + 0x40) < *(uint *)(*param_2 + 0x40)) {
      *param_1 = *param_2;
      *param_2 = lVar3;
      return;
    }
  }
  return;
}



/* Entry: 10752a6e8; end: 10752a747;  */

void FUN_10752a6e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010752ac7c();
  FUN_10752a660();
  func_0x00010752ad14();
  if ((bool)in_CY && !(bool)in_ZR) {
    *param_3 = extraout_x8;
    *param_4 = extraout_x9;
    func_0x00010752acbc(*param_3);
    if ((bool)in_CY && !(bool)in_ZR) {
      *unaff_x19 = extraout_x8_00;
      *param_3 = extraout_x9_00;
      func_0x00010752aca8(*unaff_x19);
      if ((bool)in_CY && !(bool)in_ZR) {
        *unaff_x20 = extraout_x8_01;
        *unaff_x19 = extraout_x9_01;
      }
    }
  }
  return;
}



/* Entry: 10752a748; end: 10752a7db;  */

void FUN_10752a748(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                  long *param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar5;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010752ac7c();
  FUN_10752a6e8();
  uVar1 = *(uint *)(*param_5 + 0x40);
  lVar5 = *param_4;
  uVar2 = *(uint *)(lVar5 + 0x40);
  bVar3 = uVar2 <= uVar1;
  bVar4 = uVar1 == uVar2;
  if (bVar3 && !bVar4) {
    *param_4 = *param_5;
    *param_5 = lVar5;
    func_0x00010752ad14();
    if (bVar3 && !bVar4) {
      *param_3 = extraout_x8;
      *param_4 = extraout_x9;
      func_0x00010752acbc(*param_3);
      if (bVar3 && !bVar4) {
        *unaff_x19 = extraout_x8_00;
        *param_3 = extraout_x9_00;
        func_0x00010752aca8(*unaff_x19);
        if (bVar3 && !bVar4) {
          *unaff_x20 = extraout_x8_01;
          *unaff_x19 = extraout_x9_01;
        }
      }
    }
  }
  return;
}



/* Entry: 10752a7dc; end: 10752a973;  */

void FUN_10752a7dc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long *plVar7;
  long extraout_x9;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lStack_58;
  
  uVar6 = (long)param_2 - (long)param_1 >> 3;
  bVar3 = 4 < uVar6;
  bVar4 = uVar6 == 5;
  switch(uVar6) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010752acbc(param_2[-1],1);
    if (bVar3 && !bVar4) {
      *param_1 = extraout_x8;
      param_2[-1] = extraout_x9;
    }
    break;
  case 3:
    FUN_10752a660(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_10752a6e8(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_10752a748(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    func_0x00010752acfc(param_1,param_1 + 1);
    lVar10 = 0;
    iVar11 = 0;
    plVar1 = param_1 + 3;
    plVar8 = param_1 + 2;
    while (plVar7 = plVar1, plVar7 != param_2) {
      lStack_58 = *plVar7;
      if (*(uint *)(*plVar8 + 0x40) < *(uint *)(lStack_58 + 0x40)) {
        *plVar7 = 0;
        lVar2 = lVar10;
        do {
          lVar9 = lVar2;
          FUN_10752a974((long)param_1 + lVar9 + 0x18,(long)param_1 + lVar9 + 0x10);
          puVar5 = param_1;
          if (lVar9 == -0x10) goto LAB_10752a904;
          lVar2 = lVar9 + -8;
        } while (*(uint *)(*(long *)((long)param_1 + lVar9 + 8) + 0x40) <
                 *(uint *)(lStack_58 + 0x40));
        puVar5 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_10752a904:
        lStack_58 = 0;
        FUN_107529e84(puVar5);
        iVar11 = iVar11 + 1;
        func_0x000107529e64(&lStack_58);
        if (iVar11 == 8) {
          return;
        }
      }
      lVar10 = lVar10 + 8;
      plVar8 = plVar7;
      plVar1 = plVar7 + 1;
    }
  }
  return;
}



/* Entry: 10752a974; end: 10752a9ef;  */

undefined8 FUN_10752a974(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_107529e84(param_1,uVar1);
  return param_1;
}



/* Entry: 10752a9f0; end: 10752a9f7;  */

void FUN_10752a9f0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010752ac34(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -1;
    func_0x000107529e64();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10752a9f8; end: 10752aa27;  */

void FUN_10752a9f8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010752ac34();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -8;
    func_0x000107529e64();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10752aa28; end: 10752aa77;  */

undefined8 * FUN_10752aa28(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        FUN_10752aa78(lVar2);
      }
      lVar2 = lVar2 + 0x40;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010752ac18();
  }
  return param_1;
}



/* Entry: 10752aa78; end: 10752ab47;  */

long FUN_10752aa78(long param_1)

{
  func_0x000107529e64(param_1 + 0x38);
  func_0x00010752acd0();
  return param_1;
}



/* Entry: 10752ab48; end: 10752ab83;  */

void FUN_10752ab48(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010752ab58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined4 *)(plVar1 + 0x80) = 1;
  return;
}



/* Entry: 10752ab84; end: 10752abd7;  */

void FUN_10752ab84(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x40;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10752abd8; end: 10752abff;  */

long FUN_10752abd8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10752ac00; end: 10752adb7;  */

void FUN_10752ac00(void)

{
  return;
}



/* Entry: 10752adb8; end: 10752b027;  */

void FUN_10752adb8(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long *plVar8;
  long lVar9;
  undefined1 auStack_308 [24];
  undefined1 uStack_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [144];
  undefined1 auStack_1f8 [152];
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [24];
  undefined8 *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  puVar7 = param_4;
  func_0x00010752ca3c();
  lStack_158 = 0;
  lStack_150 = 0;
  uStack_148 = 0;
  plVar4 = param_2;
  uStack_48 = extraout_x8;
  func_0x000107327090(param_2,&UNK_10f41629e);
  if ((int)plVar4 != 0) {
    plVar8 = param_2;
    FUN_107327234(param_2,&UNK_10f41629e);
    plVar4 = &lStack_158;
    func_0x0001077d5480(plVar4,plVar8);
  }
  uVar3 = lStack_158 == lStack_150;
  if ((bool)uVar3) {
    func_0x00010785f1f4();
    plVar8 = param_2 + 0x9e;
    func_0x0001072ba99c(plVar8);
    func_0x0001078657a4(plVar4,plVar8);
    lStack_160 = 0;
    FUN_10752b028(auStack_1f8,*(undefined1 *)(param_1 + 0x48),param_2);
    plVar4 = &lStack_160;
    puVar6 = auStack_1f8;
    FUN_10752b994(param_4,plVar4,puVar6);
    FUN_10752b5b8(auStack_1f8);
    __ZNSt13exception_ptrD1Ev(&lStack_160);
  }
  else {
    lVar9 = param_2[0xa0];
    lStack_d0 = param_1;
    plStack_c8 = param_2;
    puStack_c0 = param_3;
    FUN_10752b934(auStack_b8,param_4);
    FUN_10752b5d8(auStack_98,lVar9);
    FUN_10752b640(auStack_80,&lStack_d0);
    func_0x00010752b6a4(auStack_b8);
    plVar8 = (long *)param_2[0xe];
    FUN_10752b114(&uStack_140,auStack_98);
    puStack_d8 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)0x58;
    __Znwm();
    *puVar5 = &PTR_FUN_1109b9af0;
    puVar5[3] = uStack_130;
    puVar5[2] = uStack_138;
    puVar5[1] = uStack_140;
    uStack_140 = 0;
    uStack_138 = 0;
    puVar5[5] = uStack_120;
    puVar5[4] = uStack_128;
    puVar5[6] = uStack_118;
    FUN_10752b934(puVar5 + 7,auStack_110);
    plVar4 = &lStack_158;
    puVar6 = auStack_f0;
    puStack_d8 = puVar5;
    (**(code **)(*plVar8 + 0x10))(plVar8,plVar4,puVar6);
    func_0x0001072bcf98(auStack_f0);
    FUN_10752b150(&uStack_140);
    FUN_10752b150(auStack_98);
    param_3 = puVar7;
  }
  func_0x00010731ef68();
  func_0x00010752ca28(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  FUN_10752b5b8(auStack_1f8);
  __ZNSt13exception_ptrD1Ev(&lStack_160);
  plVar8 = &lStack_158;
  func_0x00010731ef68();
  func_0x00010752ca54();
  if (((ulong)plVar4 & 1) == 0) {
    *(undefined1 *)plVar8 = 0;
    *(undefined1 *)(plVar8 + 0x12) = 0;
  }
  else {
    uStack_2c8 = param_3[1];
    uStack_2d0 = *param_3;
    if (param_3[1] != 0) {
      plVar4 = (long *)(param_3[1] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000107277f30(auStack_2e8,puVar6 + 0x4f0);
    uStack_2d8 = 1;
    auStack_308[0] = 0;
    uStack_2f0 = 0;
    FUN_1075375e8(auStack_2c0,&uStack_2d0,param_3 + 2,auStack_2e8,auStack_308);
    FUN_10752b4a4(plVar8,auStack_2c0);
    func_0x000107324968(auStack_2c0);
    func_0x0001001148fc(auStack_308);
    func_0x000107323f70(auStack_2e8);
    FUN_107323f90(&uStack_2d0);
  }
  return;
}



/* Entry: 10752b028; end: 10752b113;  */

void FUN_10752b028(undefined1 *param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_108 [24];
  undefined1 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [144];
  
  if ((param_2 & 1) == 0) {
    *param_1 = 0;
    param_1[0x90] = 0;
  }
  else {
    uStack_c8 = param_4[1];
    uStack_d0 = *param_4;
    if (param_4[1] != 0) {
      plVar1 = (long *)(param_4[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000107277f30(auStack_e8,param_3 + 0x4f0);
    uStack_d8 = 1;
    auStack_108[0] = 0;
    uStack_f0 = 0;
    FUN_1075375e8(auStack_c0,&uStack_d0,param_4 + 2,auStack_e8,auStack_108);
    FUN_10752b4a4(param_1,auStack_c0);
    func_0x000107324968(auStack_c0);
    func_0x0001001148fc(auStack_108);
    func_0x000107323f70(auStack_e8);
    FUN_107323f90(&uStack_d0);
  }
  return;
}



/* Entry: 10752b114; end: 10752b14f;  */

void FUN_10752b114(long param_1)

{
  long unaff_x20;
  
  func_0x00010752ca8c();
  FUN_10752b6e8();
  FUN_10752b640(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 10752b150; end: 10752b16f;  */

long FUN_10752b150(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010752cb20();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10752b170; end: 10752b283;  */

undefined1 * FUN_10752b170(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  long lStack_118;
  undefined1 auStack_110 [56];
  undefined8 uStack_d8;
  long alStack_90 [3];
  undefined1 *puStack_78;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  long alStack_68 [7];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  uStack_6c = param_2;
  uStack_6d = param_3;
  func_0x00010752ca3c();
  uStack_28 = extraout_x8;
  func_0x000100060964(alStack_68,&UNK_10f4162a7);
  FUN_10752b354(alStack_90,&uStack_6d);
  puVar7 = &uStack_6c;
  FUN_10752b284(&puStack_78,alStack_68,alStack_90);
  lVar1 = alStack_90[0];
  alStack_90[0] = 0;
  if (lVar1 != 0) {
    func_0x00010752ca5c();
  }
  func_0x000104c2f714(alStack_68);
  puVar4 = puStack_78;
  func_0x000104c2fe00(alStack_68,puStack_78);
  puStack_30 = puStack_78;
  puStack_78 = (undefined1 *)0x0;
  plVar6 = alStack_68;
  FUN_10752c598(alStack_90,param_1);
  FUN_10752aa78(alStack_68);
  func_0x000107529e64();
  func_0x00010752ca28(uStack_28);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  FUN_10752aa78(alStack_68);
  ppuVar2 = &puStack_78;
  func_0x000107529e64(ppuVar2);
  func_0x00010752ca54();
  func_0x00010752ca3c();
  uVar3 = 0x88;
  uStack_d8 = extraout_x8_01;
  __Znwm();
  func_0x000104c318bc(auStack_110,ppuVar2);
  lStack_118 = *plVar6;
  *plVar6 = 0;
  FUN_10752c548(uVar3,auStack_110,&lStack_118,*puVar7);
  lVar1 = lStack_118;
  *extraout_x8_00 = uVar3;
  lStack_118 = 0;
  if (lVar1 != 0) {
    func_0x00010752ca5c();
  }
  puVar4 = auStack_110;
  func_0x000104c2f714();
  func_0x00010752ca28(uStack_d8);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  lVar1 = lStack_118;
  lStack_118 = 0;
  if (lVar1 != 0) {
    func_0x00010752ca5c();
  }
  func_0x000104c2f714();
  func_0x00010752cae8();
  func_0x00010752ca68();
  puVar5 = (undefined1 *)0x50;
  __Znwm();
  puVar4 = puVar5;
  FUN_10752c46c();
  *extraout_x8_02 = puVar5;
  return puVar4;
}



/* Entry: 10752b284; end: 10752b353;  */

void FUN_10752b284(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lStack_88;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x00010752ca3c();
  uVar2 = 0x88;
  uStack_48 = extraout_x8;
  __Znwm();
  func_0x000104c318bc(auStack_80,param_2);
  lStack_88 = *param_3;
  *param_3 = 0;
  FUN_10752c548(uVar2,auStack_80,&lStack_88,*param_4);
  lVar1 = lStack_88;
  *param_1 = uVar2;
  lStack_88 = 0;
  if (lVar1 != 0) {
    func_0x00010752ca5c();
  }
  func_0x000104c2f714();
  func_0x00010752ca28(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lStack_88;
  lStack_88 = 0;
  if (lVar1 != 0) {
    func_0x00010752ca5c();
  }
  func_0x000104c2f714();
  func_0x00010752cae8();
  func_0x00010752ca68();
  uVar2 = 0x50;
  __Znwm();
  FUN_10752c46c();
  *extraout_x8_00 = uVar2;
  return;
}



/* Entry: 10752b354; end: 10752b397;  */

void FUN_10752b354(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  __Znwm();
  FUN_10752c46c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10752b398; end: 10752b39b;  */

void FUN_10752b398(void)

{
  func_0x00010752cac0();
  func_0x000104c2f714();
  return;
}



/* Entry: 10752b39c; end: 10752b3af;  */

void FUN_10752b39c(void)

{
  FUN_10752b718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752b3b0; end: 10752b4a3;  */

void FUN_10752b3b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_2c8 [112];
  undefined1 auStack_258 [264];
  undefined1 auStack_150 [264];
  undefined8 uStack_48;
  
  plVar1 = param_1;
  func_0x00010752ca3c();
  uStack_48 = extraout_x8;
  FUN_10752b740(auStack_2c8,0x14,0,&UNK_10f4162b7,plVar1 + 1);
  FUN_10743cc34(auStack_258,auStack_2c8,7);
  FUN_10743d7bc(auStack_150,auStack_258);
  func_0x000107288cd8(auStack_258);
  func_0x000107262330(auStack_2c8);
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_4);
  FUN_10752b7ac(param_1);
  FUN_10743d7e4(auStack_150);
  func_0x00010752ca28(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = auStack_2c8;
  func_0x000107262330();
  func_0x00010752ca54();
  FUN_10752b4c0();
  puVar2[0x90] = 1;
  return;
}



/* Entry: 10752b4a4; end: 10752b4bf;  */

void FUN_10752b4a4(long param_1)

{
  FUN_10752b4c0();
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



/* Entry: 10752b4c0; end: 10752b567;  */

void FUN_10752b4c0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010752ca8c();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10752b568(param_1 + 2,param_2 + 2);
  func_0x00010752b590(unaff_x19 + 0x28,unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  *(undefined1 *)(unaff_x19 + 0x70) = 0;
  if (*(char *)(unaff_x20 + 0x70) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined1 *)(unaff_x19 + 0x70) = 1;
  }
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  return;
}



/* Entry: 10752b568; end: 10752b5b7;  */

void FUN_10752b568(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10752b5b8; end: 10752b5d7;  */

void FUN_10752b5b8(long param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    func_0x000107324968();
  }
  return;
}



/* Entry: 10752b5d8; end: 10752b63f;  */

void FUN_10752b5d8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010752b664(param_1,&uStack_30,param_2[2]);
  func_0x00010752cae0();
  return;
}



/* Entry: 10752b640; end: 10752b6e7;  */

undefined8 FUN_10752b640(undefined8 param_1)

{
  func_0x00010752caa8();
  FUN_10752b934();
  return param_1;
}



/* Entry: 10752b6e8; end: 10752b717;  */

void FUN_10752b6e8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10752b718; end: 10752b737;  */

void FUN_10752b718(void)

{
  func_0x00010752cac0();
  func_0x000104c2f714();
  return;
}



/* Entry: 10752b738; end: 10752b73f;  */

void FUN_10752b738(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10752b73c);
  (*pcVar1)();
}



/* Entry: 10752b740; end: 10752b7ab;  */

void FUN_10752b740(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *param_1 = param_2;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined ***)(param_1 + 8) = &PTR_DAT_110996720;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0x10] = param_2;
  param_1[0x12] = param_3;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  FUN_10752b8c8(param_1,param_4,param_5);
  return;
}



/* Entry: 10752b7ac; end: 10752b8c7;  */

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_10752b7ac(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined4 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  long alStack_e0 [3];
  undefined4 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x00010752ca3c();
  uStack_38 = extraout_x8;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  alStack_e0[0]._0_4_ = 0x15;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  ppuStack_c0 = &PTR_DAT_110996720;
  uStack_b8 = 0;
  uStack_a0 = 0x15;
  uStack_98 = 0;
  uStack_94 = 1;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  func_0x000104c2fe00(auStack_70,param_1 + 8);
  plVar3 = alStack_e0;
  FUN_107371bc4(plVar3,&UNK_10f4162b7,auStack_70);
  puVar1 = (undefined8 *)(lVar2 + 8);
  plVar6 = plVar3;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_e8 = ((long)plVar6 - *(long *)(param_1 + 0x40)) / 1000;
  uStack_f8 = *puVar1;
  uStack_f0 = 3;
  plVar6 = &lStack_e8;
  FUN_10743f9dc(puVar1,plVar3,plVar6,&uStack_f8,7);
  func_0x000104c2f714(auStack_70);
  puVar4 = (undefined4 *)alStack_e0;
  func_0x000107262330();
  func_0x00010752ca28(uStack_38);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_70);
  puVar5 = (undefined4 *)alStack_e0;
  func_0x000107262330();
  func_0x00010752ca54();
  pcStack_108 = FUN_10752b8c8;
  puStack_120 = puVar1;
  puStack_118 = puVar4;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x00010752ca3c();
  uStack_128 = extraout_x8_00;
  func_0x000104c2fe00(auStack_160,plVar6);
  FUN_107371bc4(puVar5,plVar3,auStack_160);
  func_0x00010752ca98();
  func_0x00010752ca28(uStack_128);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010752ca98();
    func_0x00010752ca54();
    plVar6 = (long *)plVar3[3];
    if (plVar6 == (long *)0x0) {
      *(undefined8 *)(puVar5 + 6) = 0;
    }
    else if (plVar6 == plVar3) {
      *(undefined4 **)(puVar5 + 6) = puVar5;
      (**(code **)(*(long *)plVar3[3] + 0x18))((long *)plVar3[3],puVar5);
    }
    else {
      (**(code **)(*plVar6 + 0x10))();
      *(long **)(puVar5 + 6) = plVar6;
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 10752b8c8; end: 10752b933;  */

long FUN_10752b8c8(long param_1,long *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010752ca3c();
  uStack_28 = extraout_x8;
  func_0x000104c2fe00(auStack_60,param_3);
  FUN_107371bc4(param_1,param_2,auStack_60);
  func_0x00010752ca98();
  func_0x00010752ca28(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010752ca98();
  func_0x00010752ca54();
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10752b934; end: 10752b993;  */

long FUN_10752b934(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10752b994; end: 10752b9b3;  */

void FUN_10752b994(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010752b9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x00010752cb2c();
  FUN_10752b150();
  return;
}



/* Entry: 10752b9b4; end: 10752b9d3;  */

void FUN_10752b9b4(void)

{
  func_0x00010752cb2c();
  FUN_10752b150();
  return;
}



/* Entry: 10752b9d4; end: 10752b9e7;  */

void FUN_10752b9d4(void)

{
  FUN_10752b9b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752b9e8; end: 10752ba23;  */

undefined8 FUN_10752b9e8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm(0x58);
  FUN_10752bc64();
  return uVar1;
}



/* Entry: 10752ba24; end: 10752ba47;  */

void FUN_10752ba24(long param_1,undefined8 param_2)

{
  func_0x00010752cb2c(param_2,param_1 + 8);
  FUN_10752b114();
  return;
}



/* Entry: 10752ba48; end: 10752bc1f;  */

undefined8 * FUN_10752ba48(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [32];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar4 = param_2;
  func_0x00010752ca3c();
  uStack_48 = extraout_x8;
  func_0x00010752cafc();
  puVar3 = (undefined8 *)(param_1 + 8);
  FUN_10752bd04();
  if ((int)puVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    plVar2 = (long *)(*(long *)(param_1 + 0x28) + 0x518);
    func_0x00010728433c();
    uStack_110 = *(undefined8 *)(param_1 + 0x30);
    lStack_118 = *(long *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(lStack_118 + 0x500);
    uStack_120 = uVar1;
    func_0x000107277f0c(auStack_108,param_2);
    FUN_10752b934(auStack_f0,param_1 + 0x38);
    FUN_10752b5d8(&uStack_d0,uVar5);
    FUN_10752bdb8(&uStack_b8,&uStack_120);
    puStack_50 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)0x70;
    __Znwm();
    *puVar3 = &PTR_FUN_1109b9b60;
    puVar3[2] = uStack_c8;
    puVar3[1] = uStack_d0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puVar3[3] = uStack_c0;
    puVar3[5] = uStack_b0;
    puVar3[4] = uStack_b8;
    puVar3[6] = uStack_a8;
    func_0x000107277f0c(puVar3 + 7,auStack_a0);
    FUN_10752b934(puVar3 + 10,auStack_88);
    puVar4 = auStack_68;
    puStack_50 = puVar3;
    (**(code **)(*plVar2 + 0x10))(plVar2);
    func_0x0001006393ec(auStack_68);
    func_0x00010752bd6c(&uStack_d0);
    puVar3 = &uStack_120;
    func_0x00010752bd94();
  }
  func_0x00010752caa0();
  func_0x00010752ca28(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_68);
  func_0x00010752bd6c(&uStack_d0);
  puVar3 = &uStack_120;
  func_0x00010752bd94(puVar3);
  func_0x00010752caa0();
  func_0x00010752ca54();
  func_0x0001004a5364(puVar4,&PTR_DAT_1109b9bd0);
  puVar3 = puVar3 + 1;
  if ((int)puVar4 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}



/* Entry: 10752bc20; end: 10752bc57;  */

long FUN_10752bc20(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b9bd0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10752bc58; end: 10752bc63;  */

undefined ** FUN_10752bc58(void)

{
  return &PTR_DAT_1109b9bd0;
}



/* Entry: 10752bc64; end: 10752bd03;  */

void FUN_10752bc64(void)

{
  func_0x00010752cb2c();
  FUN_10752b114();
  return;
}



/* Entry: 10752bd04; end: 10752bd1b;  */

uint FUN_10752bd04(uint param_1)

{
  FUN_10752bd1c();
  return param_1 ^ 1;
}



/* Entry: 10752bd1c; end: 10752bdb7;  */

bool FUN_10752bd1c(void)

{
  bool bVar1;
  long *aplStack_30 [2];
  
  func_0x00010726fc00(aplStack_30);
  if (aplStack_30[0] == (long *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *aplStack_30[0] == -1;
  }
  func_0x0001072508cc(aplStack_30);
  return bVar1;
}



/* Entry: 10752bdb8; end: 10752bdf7;  */

void FUN_10752bdb8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010752ca8c();
  func_0x00010752caa8();
  func_0x000107277f0c();
  FUN_10752b934(unaff_x19 + 0x30,unaff_x20 + 0x30);
  return;
}



/* Entry: 10752bdf8; end: 10752be23;  */

undefined8 * FUN_10752bdf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b9b60;
  func_0x00010752bd6c(param_1 + 1);
  return param_1;
}



/* Entry: 10752be24; end: 10752be37;  */

void FUN_10752be24(void)

{
  FUN_10752bdf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752be38; end: 10752be73;  */

undefined8 FUN_10752be38(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_10752c0ec();
  return uVar1;
}



/* Entry: 10752be74; end: 10752be97;  */

void FUN_10752be74(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x00010752ca8c(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109b9b60;
  FUN_10752b6e8(param_2 + 1);
  FUN_10752bdb8(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 10752be98; end: 10752c0a7;  */

undefined8 * FUN_10752be98(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  ulong unaff_x21;
  long lVar6;
  long unaff_x23;
  undefined8 auStack_f0 [2];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  long lStack_d0;
  undefined8 uStack_48;
  
  func_0x00010752ca3c();
  uStack_48 = extraout_x8;
  func_0x00010752cafc();
  puVar2 = (undefined8 *)(param_1 + 8);
  FUN_10752bd04();
  if ((int)puVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x000107277f30(auStack_f0,param_1 + 0x38);
    FUN_1074fd134(auStack_d8,auStack_f0);
    puVar3 = auStack_e0;
    FUN_107328480(puVar3);
    func_0x000107295f10(*(long *)(param_1 + 0x28) + 0x4f0,puVar3);
    func_0x00010726af18(auStack_d8);
    puVar2 = auStack_f0;
    func_0x00010726b264(puVar2);
    func_0x00010785f1f4();
    lVar5 = *(long *)(param_1 + 0x28) + 0x4f0;
    func_0x0001072ba99c(lVar5);
    func_0x0001078657a4(puVar2,lVar5);
    unaff_x23 = *(long *)(param_1 + 0x28);
    unaff_x21 = *(ulong *)(unaff_x23 + 0x338);
    in_ZR = unaff_x21 == *(ulong *)(unaff_x23 + 0x340);
    if (unaff_x21 < *(ulong *)(unaff_x23 + 0x340)) {
      func_0x000107277f0c(unaff_x21,param_1 + 0x38);
      lVar5 = unaff_x21 + 0x18;
      *(long *)(unaff_x23 + 0x338) = lVar5;
    }
    else {
      plVar1 = (long *)(unaff_x23 + 0x330);
      plVar4 = plVar1;
      FUN_10752c148(plVar1,(long)(unaff_x21 - *plVar1) / 0x18 + 1);
      FUN_10752c230(auStack_e0,plVar4,
                    (*(long *)(unaff_x23 + 0x338) - *(long *)(unaff_x23 + 0x330)) / 0x18,
                    unaff_x23 + 0x340);
      func_0x000107277f0c(lStack_d0,param_1 + 0x38);
      lStack_d0 = lStack_d0 + 0x18;
      FUN_10752c198(plVar1,auStack_e0);
      lVar5 = *(long *)(unaff_x23 + 0x338);
      func_0x00010752c400(auStack_e0);
    }
    *(long *)(unaff_x23 + 0x338) = lVar5;
    auStack_f0[0] = 0;
    FUN_10752b028(auStack_e0,*(undefined1 *)(lVar6 + 0x48),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30));
    param_2 = auStack_f0;
    FUN_10752b994(param_1 + 0x50,param_2,auStack_e0);
    FUN_10752b5b8(auStack_e0);
    puVar2 = auStack_f0;
    __ZNSt13exception_ptrD1Ev();
  }
  func_0x00010752caa0();
  func_0x00010752ca28(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *(ulong *)(unaff_x23 + 0x338) = unaff_x21;
    func_0x00010752caa0();
    func_0x00010752ca54();
    func_0x0001004a5364(param_2,&PTR_DAT_1109b9bc0);
    puVar2 = puVar2 + 1;
    if ((int)param_2 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10752c0a8; end: 10752c0df;  */

long FUN_10752c0a8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b9bc0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



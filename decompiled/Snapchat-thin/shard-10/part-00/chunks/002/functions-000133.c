/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10752c0e0; end: 10752c0eb;  */

undefined ** FUN_10752c0e0(void)

{
  return &PTR_DAT_1109b9bc0;
}



/* Entry: 10752c0ec; end: 10752c147;  */

void FUN_10752c0ec(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010752ca8c();
  *param_1 = &PTR_FUN_1109b9b60;
  FUN_10752b6e8(param_1 + 1);
  FUN_10752bdb8(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 10752c148; end: 10752c197;  */

long * FUN_10752c148(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar2 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar2;
  }
  FUN_10752c21c();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_10752c2cc(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
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
  return plVar2;
}



/* Entry: 10752c198; end: 10752c21b;  */

void FUN_10752c198(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_10752c2cc(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10752c21c; end: 10752c22f;  */

long * FUN_10752c21c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f4162b0;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010752c27c();
  }
  lVar2 = param_4 + param_3 * 0x18;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x18;
  return plVar1;
}



/* Entry: 10752c230; end: 10752c29f;  */

long * FUN_10752c230(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010752c27c();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10752c2a0; end: 10752c2cb;  */

void FUN_10752c2a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    uVar1 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    puStack_38[2] = param_2[2];
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_10752c350();
  FUN_10752c380(&uStack_60);
  return;
}



/* Entry: 10752c2cc; end: 10752c34f;  */

void FUN_10752c2cc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    puStack_28[2] = param_2[2];
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_10752c350();
  FUN_10752c380(&uStack_50);
  return;
}



/* Entry: 10752c350; end: 10752c37f;  */

void FUN_10752c350(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x00010726b264();
  }
  return;
}



/* Entry: 10752c380; end: 10752c3af;  */

long FUN_10752c380(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10752c3b0(param_1);
  }
  return param_1;
}



/* Entry: 10752c3b0; end: 10752c3cf;  */

void FUN_10752c3b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x00010726b264();
  }
  return;
}



/* Entry: 10752c3d0; end: 10752c42b;  */

void FUN_10752c3d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x00010726b264();
  }
  return;
}



/* Entry: 10752c42c; end: 10752c433;  */

void FUN_10752c42c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x00010726b264();
  }
  return;
}



/* Entry: 10752c434; end: 10752c46b;  */

void FUN_10752c434(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x00010726b264();
  }
  return;
}



/* Entry: 10752c46c; end: 10752c4f3;  */

undefined8 * FUN_10752c46c(undefined8 *param_1,undefined1 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010752ca3c();
  uStack_28 = extraout_x8;
  func_0x000100060964(auStack_60,&UNK_10f4162bb);
  puVar1 = param_1;
  FUN_10752c4f4(param_1,auStack_60);
  func_0x00010752ca98();
  *param_1 = &PTR_FUN_1109b9a58;
  *(undefined1 *)(param_1 + 9) = param_2;
  func_0x00010752ca28(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010752ca98();
  func_0x00010752ca54();
  FUN_10752c518();
  *puVar1 = &PTR_FUN_1109b9bf0;
  return puVar1;
}



/* Entry: 10752c4f4; end: 10752c517;  */

void FUN_10752c4f4(undefined8 *param_1)

{
  FUN_10752c518();
  *param_1 = &PTR_FUN_1109b9bf0;
  return;
}



/* Entry: 10752c518; end: 10752c53f;  */

void FUN_10752c518(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010752cac0();
  func_0x000104c2fe00();
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 *)(unaff_x19 + 0x40) = param_1;
  return;
}



/* Entry: 10752c540; end: 10752c547;  */

void FUN_10752c540(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10752c544);
  (*pcVar1)();
}



/* Entry: 10752c548; end: 10752c597;  */

void FUN_10752c548(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  uVar1 = *param_3;
  *param_3 = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x50) = &UNK_10e52b660;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 **)(param_1 + 0x70) = (undefined8 *)(param_1 + 0x78);
  return;
}



/* Entry: 10752c598; end: 10752c5bb;  */

void FUN_10752c598(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10752c5bc(&uStack_18);
  return;
}



/* Entry: 10752c5bc; end: 10752c5c3;  */

void FUN_10752c5bc(undefined8 param_1,long param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = param_2 + 0x38;
  lStack_20 = param_2;
  FUN_10752c5f8(param_1,param_2,&UNK_10dd5b8f9,&lStack_20,&lStack_18);
  return;
}



/* Entry: 10752c5c4; end: 10752c5f7;  */

void FUN_10752c5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_10752c5f8(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 10752c5f8; end: 10752c673;  */

void FUN_10752c5f8(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_10752c674();
  if ((param_3 & 1) != 0) {
    func_0x00010752c9c4(*(long *)(*param_2 + 8) + lVar2 * 0x40,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x40;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 10752c674; end: 10752c783;  */

undefined1  [16] FUN_10752c674(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint6 uVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  
  func_0x00010752ca8c();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  lVar5 = 0;
  uVar6 = *unaff_x19;
  uVar7 = unaff_x19[2];
  uVar3 = uVar6 >> 0xc ^ param_2 >> 7;
  bVar1 = (byte)param_2;
  uVar10 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar7;
    uVar11 = *(undefined8 *)(uVar6 + uVar3);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar16 == (char)(uVar10 >> 0x28)),
                                            CONCAT14(-(cVar15 == (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-(cVar14 == (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-(cVar12 ==
                                                                                 (char)(uVar10 >> 8)
                                                                                 ),-((char)uVar11 ==
                                                                                    (char)uVar10))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar4 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar7);
      uVar2 = 0;
      FUN_10752c818(&stack0xffffffffffffff70,unaff_x19[1] + (long)puVar4 * 0x40);
      if ((uVar2 & 1) != 0) {
        uVar11 = 0;
        goto LAB_10752c740;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                CONCAT16(-(bVar9 == 0x80),
                                         CONCAT15(-(cVar16 == -0x80),
                                                  CONCAT14(-(cVar15 == -0x80),
                                                           CONCAT13(-(cVar14 == -0x80),
                                                                    CONCAT12(-(cVar13 == -0x80),
                                                                             CONCAT11(-(cVar12 ==
                                                                                       -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar3 = lVar5 + uVar3;
  }
  FUN_10752c784();
  uVar11 = 1;
  puVar4 = unaff_x19;
LAB_10752c740:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = puVar4;
  return auVar18;
}



/* Entry: 10752c784; end: 10752c817;  */

void FUN_10752c784(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x00010752ca8c();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + (long)param_1) != -2)) {
    FUN_10752c8f4();
    param_1 = unaff_x19;
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



/* Entry: 10752c818; end: 10752c82f;  */

bool FUN_10752c818(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 10752c830; end: 10752c8f3;  */

void FUN_10752c830(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  FUN_107367a70();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      FUN_10752c924(param_1,lVar9 + (long)plVar3 * 0x40,lVar6);
    }
    lVar6 = lVar6 + 0x40;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10752c8f4; end: 10752c923;  */

/* WARNING: Possible PIC construction at 0x00010752c878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010752c87c) */

long * FUN_10752c8f4(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  long *plVar5;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_60 [16];
  
  uVar4 = param_1[2];
  if ((uVar4 < 9) ||
     (uVar2 = uVar4 * 0x19 + param_1[3] * -0x20 == 0, uVar4 * 0x19 < (ulong)(param_1[3] * 0x20))) {
    puVar1 = &stack0xffffffffffffffb0;
    unaff_x22 = *param_1;
    plVar3 = (long *)param_1[1];
    lVar6 = param_1[2];
    param_1[2] = uVar4 << 1 | 1;
    plVar5 = param_1;
    FUN_107367a70();
    lVar7 = 0;
    while( true ) {
      if (lVar6 == lVar7) {
        if (lVar6 != 0) {
          plVar3 = (long *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar3);
          return plVar3;
        }
        return plVar5;
      }
      if (-1 < *(char *)(unaff_x22 + lVar7)) break;
      lVar7 = lVar7 + 1;
      plVar3 = plVar3 + 8;
    }
    pcVar8 = (code *)0x10752c87c;
    unaff_x19 = param_1;
    unaff_x20 = plVar3;
  }
  else {
    puVar1 = auStack_60;
    func_0x00010752ca3c();
    plVar3 = (long *)&UNK_1109b9c10;
    func_0x00010ae6c914();
    func_0x00010752ca28(extraout_x8);
    if ((bool)uVar2) {
      return param_1;
    }
    pcVar8 = FUN_10752c9b8;
    ___stack_chk_fail();
  }
  *(long *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(long **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = pcVar8;
  plVar5 = (long *)plVar3[6];
  if (plVar5 == (long *)0xffffffffffffffff) {
    plVar5 = plVar3;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(plVar3);
    func_0x0001001030f4(plVar5,(undefined *)((long)plVar5 + (long)plVar3));
    *(undefined8 *)(puVar1 + -0x38) = 0xffffffffffffffff;
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return plVar5;
}



/* Entry: 10752c924; end: 10752c977;  */

long FUN_10752c924(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010752c950(param_2,param_3);
  func_0x000107529e64(param_3 + 0x38);
  func_0x00010752acd0();
  return param_3;
}



/* Entry: 10752c978; end: 10752c9b7;  */

undefined * FUN_10752c978(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x00010752ca3c();
  puVar1 = &UNK_1109b9c10;
  func_0x00010ae6c914();
  func_0x00010752ca28(extraout_x8);
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



/* Entry: 10752c9b8; end: 10752c9cf;  */

long FUN_10752c9b8(undefined8 param_1,long param_2)

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



/* Entry: 10752c9d0; end: 10752c9f7;  */

void FUN_10752c9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_10752c9f8(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10752c9f8; end: 10752ca27;  */

void FUN_10752c9f8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x000104c318bc(param_1,*param_2);
  uVar1 = *(undefined8 *)*param_3;
  *(undefined8 *)*param_3 = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 10752ca28; end: 10752cb3f;  */

void FUN_10752ca28(void)

{
  return;
}



/* Entry: 10752cb40; end: 10752cc03;  */

void FUN_10752cb40(long param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x0001077cbb80(auStack_30,param_1 + 0x48,*(undefined8 *)(param_1 + 0x60));
  func_0x00010752cb80(param_1 + 0x68,auStack_30);
  func_0x000107473948(auStack_30);
  return;
}



/* Entry: 10752cc04; end: 10752cc37;  */

long FUN_10752cc04(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10752d92c(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10752cc38; end: 10752cec3;  */

void FUN_10752cc38(uint *param_1,undefined8 param_2,long **param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined1 in_ZR;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined *puVar8;
  long lVar9;
  long **pplVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *unaff_x22;
  long *unaff_x23;
  long lVar11;
  undefined1 **ppuStack_190;
  long **pplStack_188;
  undefined1 **ppuStack_180;
  long **pplStack_178;
  uint *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  uint *puStack_158;
  undefined8 uStack_150;
  uint *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined1 auStack_120 [56];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [56];
  uint auStack_a8 [14];
  undefined8 uStack_70;
  
  puVar4 = param_1;
  pplVar10 = param_3;
  func_0x00010752e094();
  puVar8 = &UNK_10f4162c4;
  uStack_70 = extraout_x8;
  func_0x000107327090();
  if ((int)puVar4 != 0) {
    puVar8 = &UNK_10f4162c4;
    puVar4 = param_1;
    FUN_107327234();
    in_ZR = *(short *)((long)puVar4 + 0x16) == 3;
    if ((bool)in_ZR) {
      lVar1 = *(long *)(puVar4 + 2) + 0x18;
      param_1 = (uint *)&UNK_10f4162f1;
      lVar11 = (ulong)*puVar4 * 0x30;
      unaff_x22 = &UNK_10f4162d5;
      lVar9 = (ulong)*puVar4 * 3;
      while (lVar9 != 0) {
        if ((*(ushort *)(lVar1 + -2) >> 0xc & 1) == 0) {
          lVar9 = *(long *)(lVar1 + -0x10);
          iVar2 = *(int *)(lVar1 + -0x18);
        }
        else {
          lVar9 = lVar1 + -0x18;
          iVar2 = 0x15 - (uint)*(byte *)(lVar1 + -3);
        }
        func_0x000104c302a4(auStack_a8,lVar9,iVar2);
        unaff_x23 = (long *)0x78;
        __Znwm();
        func_0x000100060964(auStack_120,&UNK_10f4162f1);
        FUN_10752de54(unaff_x23,auStack_120);
        func_0x00010752e0cc();
        *unaff_x23 = (long)&PTR_FUN_1109b9c40;
        func_0x0001072d6da0(unaff_x23 + 9,auStack_a8);
        unaff_x23[0xd] = 0;
        unaff_x23[0xe] = 0;
        unaff_x23[0xc] = lVar1;
        FUN_10752cec4(auStack_e0,&UNK_10f4162d5,0x13,auStack_a8);
        uVar5 = 0x88;
        __Znwm();
        func_0x000104c318bc(auStack_120,auStack_e0);
        pplVar10 = &plStack_128;
        plStack_128 = unaff_x23;
        FUN_10752c548(uVar5,auStack_120,pplVar10,param_3);
        plVar3 = plStack_128;
        plStack_128 = (long *)0x0;
        uStack_130 = uVar5;
        if (plVar3 != (long *)0x0) {
          func_0x00010752e11c();
        }
        func_0x00010752e0cc();
        func_0x000104c2f714(auStack_e0);
        func_0x000104c2fe00(auStack_120,uStack_130);
        uStack_e8 = uStack_130;
        uStack_130 = 0;
        puVar8 = auStack_120;
        FUN_10752c598(auStack_e0,param_2);
        FUN_10752aa78(auStack_120);
        func_0x000107529e64(&uStack_130);
        puVar4 = auStack_a8;
        func_0x000104c2f714();
        lVar1 = lVar1 + 0x30;
        lVar11 = lVar11 + -0x30;
        lVar9 = lVar11;
      }
    }
  }
  func_0x00010752e05c(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (**(code **)(*unaff_x23 + 8))(unaff_x23);
    puVar6 = auStack_a8;
    func_0x000104c2f714();
    func_0x00010752e07c();
    pcStack_138 = FUN_10752cec4;
    puVar7 = puVar6;
    puStack_170 = puVar6;
    puStack_168 = puVar8;
    puStack_160 = unaff_x22;
    puStack_158 = param_1;
    uStack_150 = param_2;
    puStack_148 = puVar4;
    puStack_140 = &stack0xfffffffffffffff0;
    FUN_1074fabf4();
    ppuStack_190 = (undefined1 **)&puStack_170;
    pplStack_188 = pplVar10;
    ppuStack_180 = ppuStack_190;
    pplStack_178 = pplVar10;
    FUN_10752de80(extraout_x8_00,puVar6,puVar8,puVar7,&ppuStack_180,&ppuStack_190);
    return;
  }
  return;
}



/* Entry: 10752cec4; end: 10752cf1f;  */

void FUN_10752cec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_1074fabf4();
  puStack_60 = &uStack_40;
  uStack_58 = param_4;
  puStack_50 = puStack_60;
  uStack_48 = param_4;
  FUN_10752de80(param_1,param_2,param_3,uVar1,&puStack_50,&puStack_60);
  return;
}



/* Entry: 10752cf20; end: 10752cf23;  */

undefined8 FUN_10752cf20(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109b9c40;
  func_0x000107473948(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 10752cf24; end: 10752cf37;  */

void FUN_10752cf24(void)

{
  FUN_10752d0b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752cf38; end: 10752d0ab;  */

void FUN_10752cf38(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_278 [32];
  undefined1 uStack_258;
  undefined1 uStack_240;
  undefined1 uStack_238;
  undefined1 uStack_220;
  undefined1 uStack_218;
  undefined1 uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1d4;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined1 auStack_1b8 [32];
  undefined1 auStack_198 [80];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [208];
  undefined8 uStack_58;
  
  plVar1 = param_1;
  func_0x00010752e094();
  uStack_58 = extraout_x8;
  (**(code **)(*plVar1 + 0x18))();
  plVar1 = *(long **)(param_2 + 0x508);
  uVar2 = *(undefined8 *)(param_2 + 0x500);
  plStack_1d0 = param_1;
  uStack_1c8 = param_3;
  lStack_1c0 = param_2;
  FUN_10752b934(auStack_1b8,param_4);
  FUN_10752d0f0(auStack_198,uVar2,&plStack_1d0);
  FUN_10752d13c(auStack_148,auStack_198);
  func_0x000105c3d6c0(auStack_278,&UNK_10f4162e9);
  uStack_258 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  func_0x000107273dcc(auStack_128,auStack_148,auStack_278);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_128);
  func_0x000107273efc(auStack_128);
  func_0x000107273f24(auStack_278);
  func_0x0001006393ec(auStack_148);
  func_0x00010752d90c(auStack_198);
  func_0x00010752b6a4(auStack_1b8);
  func_0x00010752e05c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107273efc(auStack_128);
  func_0x000107273f24(auStack_278);
  func_0x0001006393ec(auStack_148);
  func_0x00010752d90c(auStack_198);
  func_0x00010752b6a4(auStack_1b8);
  func_0x00010752e07c();
  return;
}



/* Entry: 10752d0ac; end: 10752d0af;  */

void FUN_10752d0ac(void)

{
  return;
}



/* Entry: 10752d0b0; end: 10752d0ef;  */

undefined8 FUN_10752d0b0(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1109b9c40;
  func_0x000107473948(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 9);
  func_0x00010752cac0(param_1);
  func_0x000104c2f714();
  return unaff_x19;
}



/* Entry: 10752d0f0; end: 10752d11b;  */

void FUN_10752d0f0(void)

{
  long unaff_x19;
  
  func_0x00010752e14c();
  FUN_10752d11c(unaff_x19 + 0x18);
  return;
}



/* Entry: 10752d11c; end: 10752d13b;  */

void FUN_10752d11c(void)

{
  FUN_10752e02c();
  FUN_10752b934();
  return;
}



/* Entry: 10752d13c; end: 10752d18f;  */

long FUN_10752d13c(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar1 = param_1;
  func_0x00010752e0d4();
  FUN_10752d190();
  *(long *)(param_1 + 0x18) = lVar1;
  return param_1;
}



/* Entry: 10752d190; end: 10752d1af;  */

void FUN_10752d190(void)

{
  func_0x00010752e0a4();
  FUN_10752d26c();
  return;
}



/* Entry: 10752d1b0; end: 10752d1b3;  */

void FUN_10752d1b0(void)

{
  func_0x00010752e0a4();
  func_0x00010752d90c();
  return;
}



/* Entry: 10752d1b4; end: 10752d1c7;  */

void FUN_10752d1b4(void)

{
  func_0x00010752d2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752d1c8; end: 10752d1fb;  */

undefined8 FUN_10752d1c8(undefined8 param_1)

{
  func_0x00010752e0d4();
  func_0x00010752d2dc();
  return param_1;
}



/* Entry: 10752d1fc; end: 10752d227;  */

void FUN_10752d1fc(long param_1,undefined8 param_2)

{
  func_0x00010752e0a4(param_2,param_1 + 8);
  FUN_10752d2fc();
  return;
}



/* Entry: 10752d228; end: 10752d25f;  */

long FUN_10752d228(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b9d90);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10752d260; end: 10752d26b;  */

undefined ** FUN_10752d260(void)

{
  return &PTR_DAT_1109b9d90;
}



/* Entry: 10752d26c; end: 10752d29b;  */

void FUN_10752d26c(long param_1,long param_2)

{
  func_0x00010752e0f4();
  FUN_10752d29c(param_1 + 0x18,param_2 + 0x18);
  return;
}



/* Entry: 10752d29c; end: 10752d2fb;  */

void FUN_10752d29c(void)

{
  FUN_10752e02c();
  FUN_10752b934();
  return;
}



/* Entry: 10752d2fc; end: 10752d32b;  */

void FUN_10752d2fc(long param_1)

{
  long unaff_x20;
  
  func_0x00010752e140();
  FUN_10752d11c(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 10752d32c; end: 10752d36b;  */

void FUN_10752d32c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010752e158();
  lVar1 = unaff_x19;
  FUN_10752bd04();
  if ((int)lVar1 != 0) {
    FUN_10752d36c(unaff_x19 + 0x18);
  }
  func_0x00010752e0dc();
  return;
}



/* Entry: 10752d36c; end: 10752d5a3;  */

void FUN_10752d36c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long ****pppplVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long ****pppplVar7;
  undefined8 uVar8;
  long **pplStack_1b0;
  undefined4 uStack_1a8;
  long lStack_1a0;
  undefined4 auStack_198 [6];
  undefined4 uStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long ***ppplStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [80];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  puVar1 = param_1;
  func_0x00010752e094();
  pppplVar7 = (long ****)*puVar1;
  uStack_48 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  (*(code *)(*pppplVar7)[4])(pppplVar7,param_1[2],param_1[1]);
  pppplVar2 = pppplVar7;
  FUN_10752b7ac();
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  auStack_198[0] = 0x14;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  ppuStack_178 = &PTR_DAT_110996720;
  uStack_170 = 0;
  uStack_158 = 0x14;
  uStack_150 = 0;
  uStack_14c = 1;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_148 = 0;
  func_0x000104c2fe00(auStack_80,pppplVar7 + 1);
  puVar3 = auStack_198;
  FUN_107371bc4(puVar3,&UNK_10f4162b7,auStack_80);
  puVar4 = puVar3;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_1a0 = ((long)puVar4 - (long)puVar1) / 1000;
  pplStack_1b0 = (long **)pppplVar2[1];
  uStack_1a8 = 3;
  FUN_10743f9dc(pppplVar2 + 1,puVar3,&lStack_1a0,&pplStack_1b0,7);
  func_0x000104c2f714(auStack_80);
  func_0x000107262330(auStack_198);
  func_0x000107284284(auStack_198,param_1[2] + 0x518);
  uVar5 = param_1[2] + 0x518;
  func_0x0001072842e4();
  pppplVar2 = pppplVar7;
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)(param_1[2] + 0x518);
    func_0x00010728433c();
    uStack_118 = param_1[1];
    lStack_120 = param_1[2];
    uVar8 = *(undefined8 *)(lStack_120 + 0x500);
    pppplVar2 = &ppplStack_128;
    ppplStack_128 = (long ***)pppplVar7;
    FUN_10752b934(auStack_110,param_1 + 3);
    FUN_10752d5a4(auStack_f0,uVar8,&ppplStack_128);
    func_0x00010752d5f0(auStack_a0,auStack_f0);
    (**(code **)(*plVar6 + 0x10))(plVar6,auStack_a0);
    func_0x0001006393ec(auStack_a0);
    FUN_10752d8ec(auStack_f0);
    func_0x00010752b6a4(auStack_110);
  }
  puVar3 = auStack_198;
  func_0x000107270b00();
  func_0x00010752e05c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001006393ec(auStack_a0);
    FUN_10752d8ec(auStack_f0);
    func_0x00010752b6a4(pppplVar2 + 3);
    func_0x000107270b00(auStack_198);
    func_0x00010752e07c();
    func_0x00010752e14c();
    func_0x00010752d5d0(puVar3 + 6,pppplVar2);
    return;
  }
  return;
}



/* Entry: 10752d5a4; end: 10752d5cf;  */

void FUN_10752d5a4(void)

{
  long unaff_x19;
  
  func_0x00010752e14c();
  FUN_10752d5d0(unaff_x19 + 0x18);
  return;
}



/* Entry: 10752d5d0; end: 10752d643;  */

void FUN_10752d5d0(void)

{
  FUN_10752e02c();
  FUN_10752b934();
  return;
}



/* Entry: 10752d644; end: 10752d647;  */

void FUN_10752d644(void)

{
  func_0x00010752e0b8();
  FUN_10752d8ec();
  return;
}



/* Entry: 10752d648; end: 10752d65b;  */

void FUN_10752d648(void)

{
  FUN_10752d7a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752d65c; end: 10752d68f;  */

undefined8 FUN_10752d65c(undefined8 param_1)

{
  func_0x00010752e0d4();
  func_0x00010752d7c4();
  return param_1;
}



/* Entry: 10752d690; end: 10752d6bb;  */

void FUN_10752d690(long param_1,undefined8 param_2)

{
  func_0x00010752e0b8(param_2,param_1 + 8);
  FUN_10752d7e4();
  return;
}



/* Entry: 10752d6bc; end: 10752d6f3;  */

long FUN_10752d6bc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b9d80);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10752d6f4; end: 10752d6ff;  */

undefined ** FUN_10752d6f4(void)

{
  return &PTR_DAT_1109b9d80;
}



/* Entry: 10752d700; end: 10752d747;  */

void FUN_10752d700(long param_1,long param_2)

{
  func_0x00010752e0f4();
  func_0x00010752d728(param_1 + 0x18,param_2 + 0x18);
  return;
}



/* Entry: 10752d748; end: 10752d7a3;  */

long FUN_10752d748(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10752d7a4; end: 10752d7e3;  */

void FUN_10752d7a4(void)

{
  func_0x00010752e0b8();
  FUN_10752d8ec();
  return;
}



/* Entry: 10752d7e4; end: 10752d813;  */

void FUN_10752d7e4(long param_1)

{
  long unaff_x20;
  
  func_0x00010752e140();
  FUN_10752d5d0(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 10752d814; end: 10752d853;  */

void FUN_10752d814(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010752e158();
  lVar1 = unaff_x19;
  FUN_10752bd04();
  if ((int)lVar1 != 0) {
    FUN_10752d854(unaff_x19 + 0x18);
  }
  func_0x00010752e0dc();
  return;
}



/* Entry: 10752d854; end: 10752d8eb;  */

void FUN_10752d854(undefined8 *param_1)

{
  undefined1 auStack_c8 [144];
  undefined1 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  (**(code **)(*(long *)*param_1 + 0x28))(auStack_28,(long *)*param_1,param_1[1],param_1[2]);
  __ZNSt13exception_ptrC1ERKS_(auStack_30,auStack_28);
  auStack_c8[0] = 0;
  uStack_38 = 0;
  FUN_10752b994(param_1 + 3,auStack_30,auStack_c8);
  FUN_10752b5b8(auStack_c8);
  __ZNSt13exception_ptrD1Ev(auStack_30);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  return;
}



/* Entry: 10752d8ec; end: 10752d92b;  */

long FUN_10752d8ec(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010752e164();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10752d92c; end: 10752db67;  */

undefined1  [16]
FUN_10752d92c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x27;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  plVar5 = param_1 + 3;
  func_0x000100102e7c();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x27 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar7 <= plVar5) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar4 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10752d9fc;
          plVar2 = (long *)plVar6[1];
          if (plVar2 != plVar5) break;
          plVar2 = plVar6 + 2;
          func_0x0001000e107c(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10752db34;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar2 = (long *)((ulong)plVar2 & uVar8);
        }
        else if (plVar7 <= plVar2) {
          uVar4 = 0;
          if (plVar7 != (long *)0x0) {
            uVar4 = (ulong)plVar2 / (ulong)plVar7;
          }
          plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar7);
        }
      } while (plVar2 == unaff_x27);
    }
  }
LAB_10752d9fc:
  FUN_10752db68(aplStack_78,param_1,plVar5,param_3,param_4,param_5);
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    FUN_10752dbdc(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  plVar6 = aplStack_78[0];
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
    *(long **)(lVar3 + (long)unaff_x27 * 8) = plVar5;
    if (*aplStack_78[0] != 0) {
      plVar5 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar3 + (long)plVar5 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10752ddd4(aplStack_78);
  uVar1 = 1;
LAB_10752db34:
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 10752db68; end: 10752dbc3;  */

void FUN_10752db68(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10752dbc4(puVar1 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10752dbc4; end: 10752dbdb;  */

void FUN_10752dbc4(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10752dbdc; end: 10752dca3;  */

void FUN_10752dbdc(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_10752dc24;
    }
    return;
  }
LAB_10752dc24:
  if (param_2 == 0) {
    FUN_10752dda0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_10752ddb8(plVar2);
    FUN_10752dda0(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10752dca4; end: 10752dd9f;  */

void FUN_10752dca4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10752dda0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10752ddb8(plVar3);
    FUN_10752dda0(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10752dda0; end: 10752ddb7;  */

void FUN_10752dda0(long *param_1,long param_2)

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



/* Entry: 10752ddb8; end: 10752ddd3;  */

long FUN_10752ddb8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10752ddf8();
  return param_1;
}



/* Entry: 10752ddd4; end: 10752ddf7;  */

undefined8 FUN_10752ddd4(undefined8 param_1)

{
  FUN_10752ddf8(param_1,0);
  return param_1;
}



/* Entry: 10752ddf8; end: 10752de0f;  */

void FUN_10752ddf8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001074751f4(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10752de10; end: 10752de53;  */

void FUN_10752de10(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001074751f4(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10752de54; end: 10752de77;  */

void FUN_10752de54(undefined8 *param_1)

{
  FUN_10752c518();
  *param_1 = &PTR_FUN_1109b9db0;
  return;
}



/* Entry: 10752de78; end: 10752de7f;  */

void FUN_10752de78(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10752de7c);
  (*pcVar1)();
}



/* Entry: 10752de80; end: 10752dfbf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10752de80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined2 *)&uStack_60;
  puVar5 = &uStack_60;
  uVar7 = param_4;
  func_0x00010752e094();
  uVar4 = uVar7 == 0x25;
  uStack_38 = extraout_x8;
  if (uVar7 < 0x26) {
    uStack_60._2_1_ = 0;
    puVar6 = (undefined2 *)((long)&uStack_60 + 2);
    *(undefined1 *)((long)puVar6 + param_4) = 0;
    uVar7 = 0x26;
    uStack_60._0_2_ = (short)param_4;
    FUN_10752dfc0();
    param_1[1] = lStack_58;
    *param_1 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[4] = uStack_40;
    *(undefined4 *)(param_1 + 5) = 1;
    param_1[6] = 0xffffffffffffffff;
  }
  else {
    uVar4 = param_4 == 0x51;
    if (param_4 < 0x52) {
      func_0x000104c302d8(&uStack_60,0,0);
      puVar6 = (undefined2 *)
               CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      *puVar6 = (short)param_4;
      *(undefined1 *)((long)puVar6 + param_4 + 2) = 0;
      puVar6 = (undefined2 *)
               (CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60)) + 2);
      uVar7 = 0x52;
      FUN_10752dfc0(param_5);
      param_1[1] = lStack_58;
      *param_1 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      if (lStack_58 != 0) {
        plVar1 = (long *)(lStack_58 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined4 *)(param_1 + 5) = 2;
      param_1[6] = 0xffffffffffffffff;
      func_0x000104c2f784();
    }
    else {
      func_0x00010752dff0(&uStack_60,param_6);
      func_0x0001072625b4(param_1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  func_0x00010752e05c(uStack_38);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f784();
  func_0x00010752e07c();
  FUN_1073b3850(puVar6,uVar7,*puVar5,puVar5[1]);
  *(undefined1 *)((long)puVar6 + uVar7) = 0;
  return;
}



/* Entry: 10752dfc0; end: 10752e02b;  */

void FUN_10752dfc0(undefined8 *param_1,long param_2,long param_3)

{
  FUN_1073b3850(param_2,param_3,*param_1,param_1[1]);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 10752e02c; end: 10752e16f;  */

undefined1  [16] FUN_10752e02c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  auVar3._0_8_ = param_1 + 3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  auVar3._8_8_ = param_2 + 3;
  return auVar3;
}



/* Entry: 10752e170; end: 10752e1e3;  */

undefined8 * FUN_10752e170(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x618;
  __Znwm();
  FUN_10752e1e4();
  *param_1 = uVar1;
  puVar2 = param_1;
  func_0x00010752f32c();
  *puVar2 = &PTR_FUN_1109b9df0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uVar1;
  param_1[1] = puVar2;
  FUN_10752ebb4(param_1,uVar1,uVar1);
  func_0x00010752ed4c(&stack0xffffffffffffffd8);
  return param_1;
}



/* Entry: 10752e1e4; end: 10752e2ab;  */

undefined8 *
FUN_10752e1e4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar2 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar2;
  param_1[4] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_10752e430(param_1 + 5,param_3);
  FUN_10752b4c0(param_1 + 0xab,param_4);
  puVar1 = param_1 + 0xbd;
  FUN_10752ed88(puVar1,param_5);
  param_1[0xc1] = 0;
  FUN_1073af260();
  param_1[0xc2] = puVar1;
  return param_1;
}



/* Entry: 10752e2ac; end: 10752e303;  */

void FUN_10752e2ac(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x608) = (long)plVar1 - (long)plVar2 >> 3;
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*(int *)(*plVar2 + 0x44) == 0) {
      FUN_10752e304(param_1);
    }
  }
  return;
}



/* Entry: 10752e304; end: 10752e42f;  */

undefined8 * FUN_10752e304(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_2[0xd] == 0) {
    puVar1 = &uStack_80;
    func_0x00010752ee2c(puVar1,param_1);
    *(undefined4 *)((long)param_2 + 0x44) = 2;
    plVar6 = (long *)param_2[7];
    uStack_98 = uStack_80;
    lStack_90 = lStack_78;
    puStack_70 = param_2;
    if (lStack_78 != 0) {
      do {
        func_0x00010752f334();
      } while (extraout_w10 != 0);
    }
    puVar2 = puStack_70;
    puStack_50 = (undefined8 *)0x0;
    puStack_88 = puStack_70;
    func_0x00010752f32c();
    *puVar1 = &PTR_SUB_1109b9e68;
    puVar1[1] = uStack_80;
    uStack_98 = 0;
    lStack_90 = 0;
    puVar1[2] = lStack_78;
    puVar1[3] = puVar2;
    param_2 = param_1 + 5;
    puStack_50 = puVar1;
    (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_1 + 0xab,auStack_68);
    func_0x00010752b6a4(auStack_68);
    FUN_10752abd8(&uStack_98);
    param_1 = &uStack_80;
    FUN_10752abd8();
  }
  else {
    *(undefined4 *)((long)param_2 + 0x44) = 1;
  }
  func_0x00010752f344(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010752b6a4(auStack_68);
    FUN_10752abd8(&uStack_98);
    puVar1 = &uStack_80;
    FUN_10752abd8();
    func_0x00010752f300();
    puVar2 = puVar1;
    func_0x000107529644();
    uVar7 = param_2[0xd];
    puVar2[0xe] = param_2[0xe];
    puVar2[0xd] = uVar7;
    puVar3 = (undefined8 *)param_2[0x12];
    if (puVar3 == (undefined8 *)0x0) {
      puVar1[0x12] = 0;
    }
    else if (puVar3 == param_2 + 0xf) {
      puVar1[0x12] = puVar2 + 0xf;
      (**(code **)(*(long *)param_2[0x12] + 0x18))((long *)param_2[0x12],puVar2 + 0xf);
    }
    else {
      puVar1[0x12] = puVar3;
      param_2[0x12] = 0;
    }
    FUN_10752e568(puVar1 + 0x13,param_2 + 0x13);
    FUN_10752eb38(puVar1 + 0x93,param_2 + 0x93);
    func_0x00010752eb40(puVar1 + 0x97,param_2 + 0x97);
    puVar1[0x9b] = param_2[0x9b];
    lVar4 = param_2[0x9c];
    puVar1[0x9c] = lVar4;
    lVar5 = param_2[0x9d];
    puVar1[0x9d] = lVar5;
    if (lVar5 == 0) {
      puVar1[0x9b] = puVar1 + 0x9c;
    }
    else {
      *(undefined8 **)(lVar4 + 0x10) = puVar1 + 0x9c;
      param_2[0x9b] = param_2 + 0x9c;
      param_2[0x9c] = 0;
      param_2[0x9d] = 0;
    }
    uVar7 = param_2[0x9e];
    puVar1[0x9f] = param_2[0x9f];
    puVar1[0x9e] = uVar7;
    param_2[0x9f] = 0;
    param_2[0x9e] = 0;
    uVar7 = param_2[0xa0];
    puVar1[0xa1] = param_2[0xa1];
    puVar1[0xa0] = uVar7;
    puVar1[0xa2] = param_2[0xa2];
    param_2[0xa2] = 0;
    param_2[0xa1] = 0;
    puVar1[0xa3] = param_2[0xa3];
    puVar1[0xa4] = param_2[0xa4];
    param_2[0xa4] = 0;
    param_2[0xa3] = 0;
    puVar1[0xa5] = param_2[0xa5];
    return puVar1;
  }
  return param_1;
}



/* Entry: 10752e430; end: 10752e567;  */

long FUN_10752e430(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  func_0x000107529644();
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(lVar2 + 0x68) = uVar3;
  lVar1 = *(long *)(param_2 + 0x90);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else if (lVar1 == param_2 + 0x78) {
    *(long *)(param_1 + 0x90) = lVar2 + 0x78;
    (**(code **)(**(long **)(param_2 + 0x90) + 0x18))(*(long **)(param_2 + 0x90),lVar2 + 0x78);
  }
  else {
    *(long *)(param_1 + 0x90) = lVar1;
    *(undefined8 *)(param_2 + 0x90) = 0;
  }
  FUN_10752e568(param_1 + 0x98,param_2 + 0x98);
  FUN_10752eb38(param_1 + 0x498,param_2 + 0x498);
  func_0x00010752eb40(param_1 + 0x4b8,param_2 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
  lVar2 = *(long *)(param_2 + 0x4e0);
  *(long *)(param_1 + 0x4e0) = lVar2;
  lVar1 = *(long *)(param_2 + 0x4e8);
  *(long *)(param_1 + 0x4e8) = lVar1;
  if (lVar1 == 0) {
    *(long *)(param_1 + 0x4d8) = param_1 + 0x4e0;
  }
  else {
    *(long *)(lVar2 + 0x10) = param_1 + 0x4e0;
    *(undefined8 **)(param_2 + 0x4d8) = (undefined8 *)(param_2 + 0x4e0);
    *(undefined8 *)(param_2 + 0x4e0) = 0;
    *(undefined8 *)(param_2 + 0x4e8) = 0;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_2 + 0x4f8);
  *(undefined8 *)(param_1 + 0x4f0) = uVar3;
  *(undefined8 *)(param_2 + 0x4f8) = 0;
  *(undefined8 *)(param_2 + 0x4f0) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x500);
  *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_2 + 0x508);
  *(undefined8 *)(param_1 + 0x500) = uVar3;
  *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(param_2 + 0x510);
  *(undefined8 *)(param_2 + 0x510) = 0;
  *(undefined8 *)(param_2 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(param_2 + 0x518);
  *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_2 + 0x520);
  *(undefined8 *)(param_2 + 0x520) = 0;
  *(undefined8 *)(param_2 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_2 + 0x528);
  return param_1;
}



/* Entry: 10752e568; end: 10752e96b;  */

undefined8 * FUN_10752e568(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  int extraout_w10;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[1];
  uVar7 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar8;
  *param_1 = uVar7;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar8 = param_2[4];
  uVar7 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  param_1[3] = uVar7;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar3 = param_2[0xe];
  uVar7 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar7;
  lVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_1[0xc] = lVar2;
  uVar7 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar7;
  param_2[0xd] = 0;
  lVar5 = param_2[0xf];
  param_1[0xf] = lVar5;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (lVar5 != 0) {
    uVar4 = *(ulong *)(lVar3 + 8);
    uVar6 = param_1[0xd];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & uVar4;
    }
    else if (uVar6 <= uVar4) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar1 * uVar6;
    }
    *(undefined8 **)(lVar2 + uVar4 * 8) = param_1 + 0xe;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  lVar5 = param_2[0x13];
  lVar2 = param_2[0x11];
  param_2[0x11] = 0;
  param_1[0x11] = lVar2;
  uVar7 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar7;
  param_2[0x12] = 0;
  lVar3 = param_2[0x14];
  param_1[0x14] = lVar3;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar5 + 8);
    uVar6 = param_1[0x12];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & uVar4;
    }
    else if (uVar6 <= uVar4) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar1 * uVar6;
    }
    *(undefined8 **)(lVar2 + uVar4 * 8) = param_1 + 0x13;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
  }
  FUN_10752e978(param_1 + 0x16,param_2 + 0x16);
  uVar8 = param_2[0x28];
  uVar7 = param_2[0x27];
  uVar10 = param_2[0x2a];
  uVar9 = param_2[0x29];
  uVar11 = *(undefined8 *)((long)param_2 + 0x151);
  *(undefined8 *)((long)param_1 + 0x159) = *(undefined8 *)((long)param_2 + 0x159);
  *(undefined8 *)((long)param_1 + 0x151) = uVar11;
  param_1[0x28] = uVar8;
  param_1[0x27] = uVar7;
  param_1[0x2a] = uVar10;
  param_1[0x29] = uVar9;
  FUN_10752e9b8(param_1 + 0x2d,param_2 + 0x2d);
  lVar2 = param_2[0x31];
  uVar7 = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x30] = uVar7;
  if (lVar2 != 0) {
    do {
      func_0x00010752f334();
    } while (extraout_w10 != 0);
  }
  FUN_10752e96c(param_1 + 0x32,param_2 + 0x32);
  uVar8 = param_2[0x39];
  uVar7 = param_2[0x38];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x39] = uVar8;
  param_1[0x38] = uVar7;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    uVar8 = param_2[0x3c];
    uVar7 = param_2[0x3b];
    param_1[0x3d] = param_2[0x3d];
    param_1[0x3c] = uVar8;
    param_1[0x3b] = uVar7;
    param_2[0x3c] = 0;
    param_2[0x3d] = 0;
    param_2[0x3b] = 0;
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  if (*(char *)(param_2 + 0x42) == '\x01') {
    uVar8 = param_2[0x40];
    uVar7 = param_2[0x3f];
    param_1[0x41] = param_2[0x41];
    param_1[0x40] = uVar8;
    param_1[0x3f] = uVar7;
    param_2[0x41] = 0;
    param_2[0x3f] = 0;
    param_2[0x40] = 0;
    *(undefined1 *)(param_1 + 0x42) = 1;
  }
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  if (*(char *)(param_2 + 0x46) == '\x01') {
    uVar8 = param_2[0x44];
    uVar7 = param_2[0x43];
    param_1[0x45] = param_2[0x45];
    param_1[0x44] = uVar8;
    param_1[0x43] = uVar7;
    param_2[0x45] = 0;
    param_2[0x44] = 0;
    param_2[0x43] = 0;
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    uVar8 = param_2[0x48];
    uVar7 = param_2[0x47];
    param_1[0x49] = param_2[0x49];
    param_1[0x48] = uVar8;
    param_1[0x47] = uVar7;
    param_2[0x49] = 0;
    param_2[0x48] = 0;
    param_2[0x47] = 0;
    uVar8 = param_2[0x4b];
    uVar7 = param_2[0x4a];
    param_1[0x4c] = param_2[0x4c];
    param_1[0x4b] = uVar8;
    param_1[0x4a] = uVar7;
    param_2[0x4c] = 0;
    param_2[0x4b] = 0;
    param_2[0x4a] = 0;
    *(undefined1 *)(param_1 + 0x4d) = 1;
  }
  uVar8 = param_2[0x4f];
  uVar7 = param_2[0x4e];
  uVar10 = param_2[0x51];
  uVar9 = param_2[0x50];
  param_1[0x52] = param_2[0x52];
  param_1[0x4f] = uVar8;
  param_1[0x4e] = uVar7;
  param_1[0x51] = uVar10;
  param_1[0x50] = uVar9;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = param_2[0x53];
  uVar7 = param_2[0x54];
  param_1[0x55] = param_2[0x55];
  param_1[0x54] = uVar7;
  param_2[0x55] = 0;
  param_2[0x54] = 0;
  param_2[0x53] = 0;
  FUN_10752ea88(param_1 + 0x56,param_2 + 0x56);
  func_0x00010028acf0(param_1 + 0x5a,param_2 + 0x5a);
  FUN_10752ea8c(param_1 + 0x5f,param_2 + 0x5f);
  FUN_10752eadc(param_1 + 0x7b,param_2 + 0x7b);
  return param_1;
}



/* Entry: 10752e96c; end: 10752e977;  */

undefined8 * FUN_10752e96c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109ed050;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  FUN_10752ea24(param_1,param_2);
  return param_1;
}



/* Entry: 10752e978; end: 10752e9b7;  */

long FUN_10752e978(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107310b20();
  func_0x000107310b20(lVar1 + 0x38,param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  return param_1;
}



/* Entry: 10752e9b8; end: 10752e9e7;  */

void FUN_10752e9b8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010752f334();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10752e9e8; end: 10752ea23;  */

undefined8 * FUN_10752e9e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109ed050;
  param_1[1] = param_2;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  FUN_10752ea24(param_1,param_3);
  return param_1;
}



/* Entry: 10752ea24; end: 10752ea87;  */

long FUN_10752ea24(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010793f5d4(param_1);
    }
    else {
      func_0x00010793f5a4(param_1);
    }
  }
  return param_1;
}



/* Entry: 10752ea88; end: 10752ea8b;  */

void FUN_10752ea88(undefined8 *param_1,undefined8 *param_2)

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



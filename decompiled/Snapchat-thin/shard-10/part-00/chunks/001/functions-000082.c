/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10744435c; end: 1074443ef;  */

void FUN_10744435c(int param_1)

{
  long unaff_x20;
  
  func_0x00010744c168();
  if (param_1 == 0) {
    func_0x00010744ca28();
  }
  else if (*(int *)(unaff_x20 + 0x40) == 0) {
    func_0x00010744cbd4();
  }
  func_0x00010744c1cc();
  return;
}



/* Entry: 1074443f0; end: 1074443fb;  */

void FUN_1074443f0(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar1;
  undefined1 auStack_48 [40];
  
  uVar1 = 0;
  func_0x00010744c38c(param_1 + 0xc0);
  if ((bool)in_CY && !(bool)in_ZR) {
    if (uVar1 >> 0x3d != 0) {
      FUN_107444720();
      func_0x00010744c408();
      FUN_107444784();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c94c();
    FUN_10744474c();
    func_0x00010744c514();
    func_0x00010744c4f4();
    FUN_10744472c();
    FUN_107444784(auStack_48);
  }
  return;
}



/* Entry: 1074443fc; end: 10744441f;  */

void FUN_1074443fc(void)

{
  func_0x00010744c220();
  FUN_107444420();
  return;
}



/* Entry: 107444420; end: 107444433;  */

void FUN_107444420(undefined8 *param_1)

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



/* Entry: 107444434; end: 107444493;  */

void FUN_107444434(void)

{
  long unaff_x19;
  
  func_0x00010744cfc0();
  FUN_1074444a8(unaff_x19 + 0x110);
  func_0x00010730b13c(unaff_x19 + 0xd8);
  FUN_1074443fc(unaff_x19 + 0xc0);
  func_0x00010744ccf8();
  func_0x00010744cb44();
  return;
}



/* Entry: 107444494; end: 1074444a7;  */

void FUN_107444494(undefined8 *param_1)

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



/* Entry: 1074444a8; end: 1074444e3;  */

long * FUN_1074444a8(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_1074444e4(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1074444e4; end: 107444547;  */

void FUN_1074444e4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x000107444520(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x50;
  }
  return;
}



/* Entry: 107444548; end: 10744458f;  */

float FUN_107444548(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  func_0x00010744cea8(0x437f0000,*param_1,param_1[1]);
  func_0x00010744cea8(param_1[2],param_1[3]);
  return (float)uVar1;
}



/* Entry: 107444590; end: 1074445e3;  */

void FUN_107444590(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
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
  lVar1 = *param_1;
  lVar7 = param_1[1];
  lVar8 = param_1[2];
  param_1[2] = uVar5;
  func_0x00010726d624();
  lVar9 = param_1[1];
  for (lVar4 = 0; lVar8 != lVar4; lVar4 = lVar4 + 1) {
    if (-1 < *(char *)(lVar1 + lVar4)) {
      lVar6 = lVar7;
      func_0x000104c2fe38();
      lVar3 = lVar6;
      func_0x00010744c7d0();
      func_0x000100061de0();
      bVar2 = (byte)lVar6 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + lVar3) = bVar2;
      *(byte *)(lVar6 + (lVar3 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      FUN_107444960(param_1,lVar9 + lVar3 * 0x50,lVar7);
    }
    lVar7 = lVar7 + 0x50;
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
  return;
}



/* Entry: 1074445e4; end: 10744464b;  */

undefined1 * FUN_1074445e4(undefined1 *param_1,ulong param_2)

{
  bool bVar1;
  long extraout_x9;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [40];
  
  func_0x00010744c258();
  bVar1 = (ulong)(extraout_x9 / 0x18) <= param_2;
  if ((ulong)(extraout_x9 / 0x18) < param_2) {
    func_0x00010744d038();
    if (bVar1) {
      FUN_1074449c8();
      func_0x00010744c408();
      FUN_107444a84();
      func_0x00010744c3c8();
      pcStack_58 = FUN_10744464c;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_107444ad4(auStack_78);
      return (undefined1 *)(lStack_70 + 0x38);
    }
    func_0x00010744c4c8();
    FUN_107444a08(auStack_48);
    func_0x00010744c4f4();
    FUN_1074449d4();
    param_1 = auStack_48;
    FUN_107444a84(param_1);
  }
  return param_1;
}



/* Entry: 10744464c; end: 107444673;  */

long FUN_10744464c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_107444ad4(auStack_28);
  return lStack_20 + 0x38;
}



/* Entry: 107444674; end: 1074446b7;  */

undefined8 * FUN_107444674(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010744c4d8();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_107444d88();
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    extraout_x8[2] = param_2[2];
    extraout_x8[1] = uVar3;
    *extraout_x8 = uVar2;
    puVar1 = extraout_x8 + 3;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -3;
}



/* Entry: 1074446b8; end: 1074446cb;  */

uint FUN_1074446b8(float param_1,float param_2)

{
  return (int)param_2 + (int)param_1 * 0x100 & 0xffff;
}



/* Entry: 1074446cc; end: 10744471f;  */

void FUN_1074446cc(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x00010744c38c();
  if ((bool)in_CY && !(bool)in_ZR) {
    if (param_2 >> 0x3d != 0) {
      FUN_107444720();
      func_0x00010744c408();
      FUN_107444784();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c94c();
    FUN_10744474c();
    func_0x00010744c514();
    func_0x00010744c4f4();
    FUN_10744472c();
    FUN_107444784(auStack_48);
  }
  return;
}



/* Entry: 107444720; end: 10744472b;  */

void FUN_107444720(void)

{
  func_0x00010744c184();
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 10744472c; end: 10744474b;  */

void FUN_10744472c(void)

{
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 10744474c; end: 10744476b;  */

void FUN_10744474c(void)

{
  FUN_10744476c();
  return;
}



/* Entry: 10744476c; end: 107444783;  */

long * FUN_10744476c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1074447b0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107444784; end: 1074447af;  */

long * FUN_107444784(long *param_1)

{
  FUN_1074447b0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074447b0; end: 1074447d3;  */

void FUN_1074447b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1074447d4; end: 107444803;  */

void FUN_1074447d4(void)

{
  undefined1 in_CY;
  
  func_0x00010744c0d4();
  if ((bool)in_CY) {
    FUN_107444804();
  }
  else {
    func_0x00010744cb58();
  }
  func_0x00010744cba4();
  return;
}



/* Entry: 107444804; end: 107444863;  */

void FUN_107444804(undefined8 param_1,long param_2)

{
  func_0x00010744c010();
  func_0x00010744cd74();
  FUN_107444864();
  func_0x00010744c0bc();
  if (param_2 != 0) {
    FUN_10744474c();
  }
  func_0x00010744c1ac();
  func_0x00010744c4f4();
  FUN_10744472c();
  func_0x00010744c6f4();
  FUN_107444784();
  return;
}



/* Entry: 107444864; end: 10744488b;  */

long * FUN_107444864(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 in_CY;
  long lVar3;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x9;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010744c4a0();
    plVar4 = extraout_x9;
    if ((bool)in_CY) {
      plVar4 = extraout_x8;
    }
    return plVar4;
  }
  FUN_107444720();
  lVar1 = *param_1;
  lVar7 = param_1[1];
  lVar8 = param_1[2];
  param_1[2] = param_2;
  plVar4 = param_1;
  func_0x00010726d624();
  lVar10 = param_1[1];
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      lVar6 = lVar7;
      func_0x000104c2fe38();
      lVar3 = lVar6;
      func_0x00010744c7d0();
      func_0x000100061de0();
      bVar2 = (byte)lVar6 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + lVar3) = bVar2;
      *(byte *)(lVar6 + (lVar3 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      plVar4 = param_1;
      FUN_107444960(param_1,lVar10 + lVar3 * 0x50,lVar7);
    }
    lVar7 = lVar7 + 0x50;
  }
  if (lVar8 != 0) {
    plVar4 = (long *)(lVar1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return plVar4;
  }
  return plVar4;
}



/* Entry: 10744488c; end: 10744495f;  */

void FUN_10744488c(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
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
  func_0x00010726d624();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      lVar3 = lVar5;
      func_0x00010744c7d0();
      func_0x000100061de0();
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + lVar3) = bVar2;
      *(byte *)(lVar5 + (lVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      FUN_107444960(param_1,lVar9 + lVar3 * 0x50,lVar6);
    }
    lVar6 = lVar6 + 0x50;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 107444960; end: 1074449c7;  */

long FUN_107444960(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010744498c(param_2,param_3);
  func_0x000107444470(param_3 + 0x38);
  func_0x00010744cb8c();
  return param_3;
}



/* Entry: 1074449c8; end: 1074449d3;  */

void FUN_1074449c8(void)

{
  func_0x00010744c184();
  func_0x00010744bfc8();
  func_0x00010744c540();
  func_0x00010744bea0();
  return;
}



/* Entry: 1074449d4; end: 107444a07;  */

void FUN_1074449d4(void)

{
  func_0x00010744bfc8();
  func_0x00010744c540();
  func_0x00010744bea0();
  return;
}



/* Entry: 107444a08; end: 107444a5b;  */

void FUN_107444a08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010744c480();
  if (param_2 != 0) {
    func_0x000107444a3c(param_4);
  }
  func_0x00010744c6dc(0x18);
  return;
}



/* Entry: 107444a5c; end: 107444a83;  */

long * FUN_107444a5c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107444ab0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107444a84; end: 107444aaf;  */

long * FUN_107444a84(long *param_1)

{
  FUN_107444ab0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107444ab0; end: 107444ad3;  */

void FUN_107444ab0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x18;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107444ad4; end: 107444b37;  */

void FUN_107444ad4(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_2;
  uVar3 = param_3;
  FUN_107444b38();
  if ((uVar3 & 1) != 0) {
    FUN_107444d6c(param_2[1] + (long)plVar2 * 0x50,param_3);
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0x50;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 107444b38; end: 107444c47;  */

undefined1  [16] FUN_107444b38(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
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
  
  func_0x00010744c4e8();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  lVar5 = 0;
  uVar6 = *unaff_x19;
  uVar7 = unaff_x19[2];
  uVar4 = uVar6 >> 0xc ^ (ulong)param_2 >> 7;
  bVar2 = (byte)param_2;
  uVar10 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar7;
    uVar11 = *(undefined8 *)(uVar6 + uVar4);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar2 & 0x7f)),
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
      uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      param_2 = (undefined1 *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar7)
      ;
      puVar3 = &stack0xffffffffffffff70;
      FUN_107444cd8(&stack0xffffffffffffff70,unaff_x19[1] + (long)param_2 * 0x50);
      if (((ulong)puVar3 & 1) != 0) {
        uVar11 = 0;
        goto LAB_107444c08;
      }
      param_2 = puVar3;
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
    uVar4 = lVar5 + uVar4;
  }
  func_0x00010744c7d0();
  FUN_107444c48();
  uVar11 = 1;
LAB_107444c08:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = param_2;
  return auVar18;
}



/* Entry: 107444c48; end: 107444cd7;  */

void FUN_107444c48(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x00010744c4e8();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + (long)param_1) != -2)) {
    param_1 = unaff_x19;
    func_0x000107444cf0();
    func_0x00010744c81c();
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



/* Entry: 107444cd8; end: 107444d1f;  */

bool FUN_107444cd8(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 107444d20; end: 107444d5f;  */

undefined * FUN_107444d20(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x00010744c078();
  puVar1 = &UNK_1109b14c8;
  func_0x00010ae6c914();
  func_0x00010744bf64(extraout_x8);
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



/* Entry: 107444d60; end: 107444d6b;  */

long FUN_107444d60(undefined8 param_1,long param_2)

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



/* Entry: 107444d6c; end: 107444d87;  */

void FUN_107444d6c(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 107444d88; end: 107444e07;  */

void FUN_107444d88(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puStack_48;
  
  func_0x00010744c010();
  FUN_107444e08();
  func_0x00010744c324();
  func_0x00010744ca40();
  FUN_107444a08();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  func_0x00010744c4f4();
  FUN_1074449d4();
  func_0x00010744c6f4();
  FUN_107444a84();
  return;
}



/* Entry: 107444e08; end: 107444e47;  */

long * FUN_107444e08(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x19;
  
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
  FUN_1074449c8();
  plVar2 = (long *)param_1[3];
  if (plVar2 == (long *)0x0) {
    func_0x000104bfeb48();
    func_0x00010744c220();
    func_0x000107444e6c();
    return unaff_x19;
  }
                    /* WARNING: Could not recover jumptable at 0x000107444e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return plVar2;
}



/* Entry: 107444e48; end: 107444ea3;  */

void FUN_107444e48(void)

{
  func_0x00010744c220();
  func_0x000107444e6c();
  return;
}



/* Entry: 107444ea4; end: 107444eab;  */

void FUN_107444ea4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010744c454(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x00010724b3d8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107444eac; end: 107444edf;  */

void FUN_107444eac(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010744c454();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x00010724b3d8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107444ee0; end: 107444f23;  */

/* WARNING: Possible PIC construction at 0x000107444efc: Changing call to branch */

long * FUN_107444ee0(long *param_1,ulong param_2)

{
  long *plVar1;
  long *unaff_x19;
  
  if (param_2 < (ulong)(param_1[1] - *param_1 >> 3)) {
    return (long *)(*param_1 + param_2 * 8);
  }
  func_0x00010744c340();
  plVar1 = (long *)param_1[3];
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010744cf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  func_0x00010744c9ec();
  FUN_107444f44();
  return unaff_x19;
}



/* Entry: 107444f24; end: 107444f43;  */

void FUN_107444f24(void)

{
  func_0x00010744c9ec();
  FUN_107444f44();
  return;
}



/* Entry: 107444f44; end: 107444f5b;  */

void FUN_107444f44(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107444434(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107444f5c; end: 107444f77;  */

void FUN_107444f5c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107444434(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107444f78; end: 10744500b;  */

long FUN_107444f78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  float fVar1;
  undefined8 unaff_x20;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  
  fVar1 = (float)CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  func_0x00010744c1f0(&UNK_1109b14e8);
  FUN_107432e00();
  *(undefined4 *)(param_5 + 0xb0) = param_1;
  *(undefined4 *)(param_5 + 0xb4) = param_2;
  *(undefined4 *)(param_5 + 0xb8) = param_3;
  *(undefined4 *)(param_5 + 0xbc) = param_4;
  *(float *)(param_5 + 0xc0) = fVar1;
  *(float *)(param_5 + 0xc4) = fVar1 + 1.0;
  *(undefined1 *)(param_5 + 0x110) = 0;
  *(undefined8 *)(param_5 + 0xd0) = 0;
  *(undefined8 *)(param_5 + 0xd8) = 0;
  *(undefined8 *)(param_5 + 200) = 0;
  *(undefined1 *)(param_5 + 0xe0) = 0;
  *(undefined8 *)(param_5 + 0x118) = unaff_x20;
  *(undefined8 *)(param_5 + 0x128) = 0;
  *(undefined8 *)(param_5 + 0x120) = 0;
  *(undefined8 *)(param_5 + 0x138) = 0;
  *(undefined8 *)(param_5 + 0x130) = 0;
  *(undefined8 *)(param_5 + 0x148) = 0;
  *(undefined8 *)(param_5 + 0x140) = 0;
  *(undefined1 *)(param_5 + 0x150) = 0;
  return param_5;
}



/* Entry: 10744500c; end: 10744500f;  */

long FUN_10744500c(long param_1)

{
  func_0x000107444470(param_1 + 0x138);
  FUN_1074444a8(param_1 + 0x118);
  func_0x00010730b13c(param_1 + 0xe0);
  FUN_1074458d0(param_1 + 200);
  func_0x00010744ccf8();
  func_0x00010744cb44();
  return param_1;
}



/* Entry: 107445010; end: 107445023;  */

void FUN_107445010(void)

{
  FUN_107445908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107445024; end: 107445313;  */

undefined4 * FUN_107445024(long param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  code *extraout_x8_00;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined1 auStack_5b0 [16];
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined1 auStack_590 [56];
  undefined1 uStack_558;
  long lStack_550;
  undefined1 auStack_548 [112];
  undefined1 auStack_4d8 [120];
  undefined4 uStack_460;
  undefined4 uStack_45c;
  ulong uStack_458;
  undefined1 auStack_2d0 [56];
  undefined1 uStack_298;
  long lStack_290;
  undefined1 auStack_288 [112];
  undefined1 auStack_218 [120];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  byte bStack_168;
  
  FUN_10744c750();
  func_0x00010744bf78();
  func_0x0001077512dc(*(undefined4 *)(param_1 + 0xc0),&uStack_1a0);
  func_0x00010744cc24();
  func_0x00010744c530(auStack_288);
  func_0x00010744c1e4();
  func_0x0001073c4f74(auStack_218,auStack_288);
  func_0x00010744c648(&uStack_1a0);
  auStack_2d0[0] = 0;
  uStack_298 = 0;
  lStack_290 = unaff_x19 + 0x10;
  FUN_1074388a0(*(undefined4 *)(unaff_x19 + 0xb0),*(undefined4 *)(unaff_x19 + 0xb4),
                *(undefined4 *)(unaff_x19 + 0xb8),*(undefined4 *)(unaff_x19 + 0xbc),unaff_x19 + 0x70
                ,&uStack_1a0,auStack_2d0);
  func_0x00010744c0e8();
  func_0x0001077512dc(*(undefined4 *)(unaff_x19 + 0xc4),&uStack_460);
  func_0x00010744c538(auStack_548);
  func_0x00010744c1e4();
  func_0x0001073c4f74(auStack_4d8,auStack_548);
  func_0x00010744c648(&uStack_460);
  auStack_590[0] = 0;
  uStack_558 = 0;
  uVar7 = *(undefined4 *)(unaff_x19 + 0xb0);
  uVar8 = *(undefined4 *)(unaff_x19 + 0xb4);
  uVar9 = *(undefined4 *)(unaff_x19 + 0xb8);
  uVar10 = *(undefined4 *)(unaff_x19 + 0xbc);
  lStack_550 = unaff_x19 + 0x10;
  FUN_1074388a0(unaff_x19 + 0x70,&uStack_460,auStack_590);
  uStack_5a0 = uVar7;
  uStack_59c = uVar8;
  uStack_598 = uVar9;
  uStack_594 = uVar10;
  func_0x00010724b3d8(auStack_590);
  func_0x000107267e8c(auStack_4d8);
  func_0x000107267eac(auStack_548);
  func_0x000107267da8(&uStack_460);
  func_0x00010724b3d8(auStack_2d0);
  func_0x000107267e8c(auStack_218);
  func_0x000107267eac(auStack_288);
  func_0x000107267da8(&uStack_1a0);
  FUN_107444548(auStack_5b0);
  uStack_1a0 = uVar7;
  uStack_19c = uVar8;
  FUN_107444548(&uStack_5a0);
  _uStack_460 = CONCAT44(uVar8,uVar7);
  FUN_10744594c(&uStack_1a0,&uStack_460);
  func_0x00010744c0e8();
  plVar4 = (long *)(unaff_x19 + 200);
  lVar3 = *plVar4;
  if ((ulong)(*(long *)(unaff_x19 + 0xd8) - lVar3 >> 4) < unaff_x20) {
    func_0x00010744cfe4();
    FUN_10744598c(plVar4);
    lVar3 = *plVar4;
  }
  uVar5 = *(long *)(unaff_x19 + 0xd0) - lVar3 >> 4;
  for (uVar6 = uVar5; uVar1 = uVar6 == unaff_x20, uVar6 < unaff_x20; uVar6 = uVar6 + 1) {
    uStack_1a0 = unaff_s8;
    uStack_19c = unaff_s9;
    FUN_107445ad0(plVar4,&uStack_1a0);
  }
  func_0x00010744c92c(unaff_x19 + 0x118);
  func_0x00010744c924(unaff_x19 + 0x138);
  func_0x00010744c470();
  (*extraout_x8_00)();
  func_0x00010726236c(&uStack_1a0);
  uStack_458 = uVar5;
  if ((bStack_168 & 1) == 0) {
    FUN_107444674(unaff_x19 + 0x138,&uStack_460);
  }
  else {
    FUN_10744464c(unaff_x19 + 0x118,&uStack_1a0);
    FUN_107444674();
  }
  *(undefined1 *)(unaff_x19 + 0x150) = 1;
  puVar2 = &uStack_1a0;
  func_0x00010724b3d8(puVar2);
  func_0x00010744bf64(extraout_x8);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_1a0;
  func_0x00010724b3d8();
  func_0x00010744c3c8();
  return (undefined4 *)
         (((*(long *)(puVar2 + 0x32) - *(long *)(puVar2 + 0x34) ^ 0xffffffffffffffffU) &
          0xfffffffffffffff0) + 0x10);
}



/* Entry: 107445314; end: 10744531b;  */

long FUN_107445314(long param_1)

{
  return ((*(long *)(param_1 + 200) - *(long *)(param_1 + 0xd0) ^ 0xffffffffffffffffU) &
         0xfffffffffffffff0) + 0x10;
}



/* Entry: 10744531c; end: 107445373;  */

char FUN_10744531c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x150);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x150) = 0;
    func_0x00010744c158(*(undefined8 *)(param_1 + 200));
  }
  return cVar1;
}



/* Entry: 107445374; end: 10744547b;  */

void FUN_107445374(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  int extraout_w10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long in_stack_00000040;
  
  func_0x00010744ce4c();
  func_0x00010744c19c();
  func_0x00010744c8d0();
  func_0x00010744c880();
  func_0x00010744cbe0();
  if ((bool)in_ZR) {
    func_0x00010744cbc8();
  }
  else {
    func_0x00010744c460();
    func_0x00010744c318();
    func_0x00010744cbbc();
    for (; uVar1 = unaff_x23 == unaff_x24, !(bool)uVar1; unaff_x23 = unaff_x23 + 0x58) {
      func_0x00010744c244();
      func_0x00010744c9cc();
      if (in_stack_00000040 != 0) {
        func_0x00010744cbb0();
        if ((bool)uVar1) {
          func_0x00010744c93c();
          func_0x00010744c30c();
        }
        else {
          func_0x00010786967c();
          func_0x00010744c8a4();
        }
        func_0x00010744c230();
        if (extraout_x8 != 0) {
          do {
            func_0x00010744c2cc();
          } while (extraout_w10 != 0);
        }
        func_0x00010744c038();
        FUN_10744547c();
        func_0x00010744c664();
        *(undefined1 *)(unaff_x22 + 0x150) = unaff_w25;
        func_0x00010744c640();
      }
      func_0x00010744c65c();
    }
    func_0x00010744c300();
  }
  func_0x00010744c620();
  return;
}



/* Entry: 10744547c; end: 10744566f;  */

void FUN_10744547c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  long in_stack_00000080;
  undefined1 auStack_5b0 [16];
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined1 uStack_590;
  undefined1 uStack_558;
  long lStack_550;
  undefined1 auStack_548 [56];
  undefined1 auStack_510 [176];
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_2d0 [56];
  undefined1 uStack_298;
  long lStack_290;
  undefined1 auStack_288 [112];
  undefined1 auStack_218 [120];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_10;
  
  FUN_10744c750();
  func_0x00010744bfa0();
  uStack_10 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)(param_1 + 0xc0),&uStack_1a0);
  func_0x00010744c708(auStack_288);
  func_0x00010744c2f4();
  func_0x0001073c4f74(auStack_218,auStack_288);
  func_0x00010744c718(&uStack_1a0);
  auStack_2d0[0] = 0;
  uStack_298 = 0;
  lStack_290 = unaff_x22 + 0x10;
  uStack_c0 = in_x7;
  uStack_b8 = in_x6;
  FUN_1074388a0(*(undefined4 *)(unaff_x22 + 0xb0),*(undefined4 *)(unaff_x22 + 0xb4),
                *(undefined4 *)(unaff_x22 + 0xb8),*(undefined4 *)(unaff_x22 + 0xbc),unaff_x22 + 0x70
                ,&uStack_1a0,auStack_2d0);
  func_0x00010744c0e8();
  func_0x0001077512dc(*(undefined4 *)(unaff_x22 + 0xc4),&uStack_460);
  func_0x00010744c708(auStack_548);
  func_0x00010744c528(auStack_510);
  func_0x00010744ceb4();
  func_0x00010744c718(&uStack_460);
  uStack_590 = 0;
  uStack_558 = 0;
  uVar5 = *(undefined4 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined4 *)(unaff_x22 + 0xb4);
  uVar7 = *(undefined4 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined4 *)(unaff_x22 + 0xbc);
  lStack_550 = unaff_x22 + 0x10;
  uStack_380 = in_x7;
  uStack_378 = in_x6;
  func_0x00010744ce9c(unaff_x22 + 0x70);
  uStack_5a0 = uVar5;
  uStack_59c = uVar6;
  uStack_598 = uVar7;
  uStack_594 = uVar8;
  func_0x00010744cb84();
  func_0x00010744cb74();
  func_0x00010744cc1c();
  func_0x00010744cb7c();
  func_0x00010724b3d8(auStack_2d0);
  func_0x000107267e8c(auStack_218);
  func_0x000107267eac(auStack_288);
  func_0x000107267da8(&uStack_1a0);
  FUN_107444548(auStack_5b0);
  uStack_1a0 = uVar5;
  uStack_19c = uVar6;
  FUN_107444548(&uStack_5a0);
  uStack_460 = uVar5;
  uStack_45c = uVar6;
  FUN_10744594c(&uStack_1a0,&uStack_460);
  func_0x00010744c0e8();
  while (uVar1 = unaff_x21 == unaff_x20, unaff_x21 < unaff_x20) {
    lVar2 = unaff_x22 + 200;
    func_0x000107445b90();
    func_0x00010744ce28();
    *(undefined4 *)(lVar2 + 8) = unaff_s10;
    *(undefined4 *)(lVar2 + 0xc) = unaff_s11;
  }
  if ((*(byte *)(in_stack_00000080 + 0x20) & 1) != 0) {
    func_0x00010744c944();
  }
  func_0x00010744bf64(uStack_10);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010744cb84();
  func_0x00010744cb74();
  func_0x00010744cc1c();
  func_0x00010744cb7c();
  func_0x00010724b3d8(auStack_2d0);
  func_0x000107267e8c(auStack_218);
  func_0x000107267eac(auStack_288);
  puVar3 = &uStack_1a0;
  func_0x000107267da8();
  func_0x00010744c3c8();
  puVar4 = puVar3;
  func_0x00010744c078();
  func_0x00010744c868(puVar4[0x30]);
  func_0x00010744c2e8();
  func_0x00010744c2dc();
  func_0x00010744c178();
  func_0x00010744c148();
  func_0x00010744c2ac();
  func_0x00010744c444(puVar3[0x2c],puVar3[0x2d],puVar3[0x2e],puVar3[0x2f]);
  FUN_1074388a0();
  func_0x00010744c0e8();
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c868(puVar3[0x31]);
  func_0x00010744c2e8();
  func_0x00010744c2dc();
  func_0x00010744c178();
  func_0x00010744c148();
  func_0x00010744c2ac();
  uVar5 = puVar3[0x2c];
  uVar6 = puVar3[0x2d];
  uVar7 = puVar3[0x2e];
  uVar8 = puVar3[0x2f];
  func_0x00010744c444();
  FUN_1074388a0();
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  *extraout_x8_00 = unaff_s8;
  extraout_x8_00[1] = unaff_s9;
  extraout_x8_00[2] = unaff_s10;
  extraout_x8_00[3] = unaff_s11;
  extraout_x8_00[4] = uVar5;
  extraout_x8_00[5] = uVar6;
  extraout_x8_00[6] = uVar7;
  extraout_x8_00[7] = uVar8;
  *(undefined1 *)(extraout_x8_00 + 8) = 1;
  func_0x00010744bf64(extraout_x8_01);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  return;
}



/* Entry: 107445670; end: 1074457df;  */

void FUN_107445670(undefined4 *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  lVar1 = param_2;
  func_0x00010744c078();
  func_0x00010744c868(*(undefined4 *)(lVar1 + 0xc0));
  func_0x00010744c2e8();
  func_0x00010744c2dc();
  func_0x00010744c178();
  func_0x00010744c148();
  func_0x00010744c2ac();
  func_0x00010744c444(*(undefined4 *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb4),
                      *(undefined4 *)(param_2 + 0xb8),*(undefined4 *)(param_2 + 0xbc));
  FUN_1074388a0();
  func_0x00010744c0e8();
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c868(*(undefined4 *)(param_2 + 0xc4));
  func_0x00010744c2e8();
  func_0x00010744c2dc();
  func_0x00010744c178();
  func_0x00010744c148();
  func_0x00010744c2ac();
  uVar2 = *(undefined4 *)(param_2 + 0xb0);
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  uVar4 = *(undefined4 *)(param_2 + 0xb8);
  uVar5 = *(undefined4 *)(param_2 + 0xbc);
  func_0x00010744c444();
  FUN_1074388a0();
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  *param_1 = unaff_s8;
  param_1[1] = unaff_s9;
  param_1[2] = unaff_s10;
  param_1[3] = unaff_s11;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  *(undefined1 *)(param_1 + 8) = 1;
  func_0x00010744bf64(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  return;
}



/* Entry: 1074457e0; end: 107445803;  */

void FUN_1074457e0(void)

{
  return;
}



/* Entry: 107445804; end: 1074458a3;  */

void FUN_107445804(int param_1)

{
  long unaff_x20;
  
  func_0x00010744c168();
  if (param_1 == 0) {
    func_0x00010744ca28();
  }
  else if (*(int *)(unaff_x20 + 0x40) == 0) {
    func_0x00010744cbd4();
  }
  else {
    func_0x00010744cdb0();
  }
  func_0x00010744c1cc();
  return;
}



/* Entry: 1074458a4; end: 1074458cf;  */

void FUN_1074458a4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x9;
  ulong uVar4;
  undefined1 auStack_48 [40];
  
  lVar2 = *(long *)(param_1 + 0xd8) - *(long *)(param_1 + 200);
  uVar3 = lVar2 >> 4;
  uVar4 = lVar2 >> 3;
  uVar1 = param_2;
  if (param_2 <= uVar4) {
    uVar1 = uVar4;
  }
  if (param_2 <= uVar3) {
    uVar1 = uVar3;
  }
  uVar1 = uVar1 & 0xffffffff;
  func_0x00010744c258();
  if ((ulong)(extraout_x9 >> 4) < uVar1) {
    if (uVar1 >> 0x3c != 0) {
      FUN_1074459e8();
      func_0x00010744c408();
      FUN_107445a80();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c4c8();
    FUN_107445a14(auStack_48);
    func_0x00010744c4f4();
    FUN_1074459f4();
    FUN_107445a80(auStack_48);
  }
  return;
}



/* Entry: 1074458d0; end: 1074458f3;  */

void FUN_1074458d0(void)

{
  func_0x00010744c220();
  FUN_1074458f4();
  return;
}



/* Entry: 1074458f4; end: 107445907;  */

void FUN_1074458f4(undefined8 *param_1)

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



/* Entry: 107445908; end: 10744594b;  */

long FUN_107445908(long param_1)

{
  func_0x000107444470(param_1 + 0x138);
  FUN_1074444a8(param_1 + 0x118);
  func_0x00010730b13c(param_1 + 0xe0);
  FUN_1074458d0(param_1 + 200);
  func_0x00010744ccf8();
  func_0x00010744cb44();
  return param_1;
}



/* Entry: 10744594c; end: 10744598b;  */

undefined4 FUN_10744594c(long param_1,long param_2)

{
  long lVar1;
  undefined4 auStack_10 [4];
  
  for (lVar1 = 0; lVar1 != 8; lVar1 = lVar1 + 4) {
    *(undefined4 *)((long)auStack_10 + lVar1) = *(undefined4 *)(param_1 + lVar1);
    *(undefined4 *)((long)auStack_10 + lVar1 + 8) = *(undefined4 *)(param_2 + lVar1);
  }
  return auStack_10[0];
}



/* Entry: 10744598c; end: 1074459e7;  */

void FUN_10744598c(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x00010744c258();
  if ((ulong)(extraout_x9 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_1074459e8();
      func_0x00010744c408();
      FUN_107445a80();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c4c8();
    FUN_107445a14(auStack_48);
    func_0x00010744c4f4();
    FUN_1074459f4();
    FUN_107445a80(auStack_48);
  }
  return;
}



/* Entry: 1074459e8; end: 1074459f3;  */

void FUN_1074459e8(void)

{
  func_0x00010744c184();
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 1074459f4; end: 107445a13;  */

void FUN_1074459f4(void)

{
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 107445a14; end: 107445a63;  */

void FUN_107445a14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010744c480();
  if (param_2 != 0) {
    func_0x000107445a44(param_4);
  }
  func_0x00010744ce10();
  return;
}



/* Entry: 107445a64; end: 107445a7f;  */

long * FUN_107445a64(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107445aac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107445a80; end: 107445aab;  */

long * FUN_107445a80(long *param_1)

{
  FUN_107445aac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107445aac; end: 107445acf;  */

void FUN_107445aac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107445ad0; end: 107445b0b;  */

undefined8 * FUN_107445ad0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x00010744c4d8();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_107445b0c();
  }
  else {
    uVar2 = *param_2;
    extraout_x8[1] = param_2[1];
    *extraout_x8 = uVar2;
    puVar1 = extraout_x8 + 2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 107445b0c; end: 107445b67;  */

void FUN_107445b0c(void)

{
  func_0x00010744c010();
  FUN_107445b68();
  func_0x00010744c324();
  func_0x00010744ca40();
  FUN_107445a14();
  func_0x00010744cbec();
  func_0x00010744c4f4();
  FUN_1074459f4();
  func_0x00010744c6f4();
  FUN_107445a80();
  return;
}



/* Entry: 107445b68; end: 107445bbf;  */

/* WARNING: Possible PIC construction at 0x000107445bb0: Changing call to branch */

long FUN_107445b68(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x00010744d09c();
    lVar1 = extraout_x9;
    if ((bool)in_CY) {
      lVar1 = extraout_x8;
    }
    return lVar1;
  }
  FUN_1074459e8();
  if (param_2 < (ulong)(param_1[1] - *param_1 >> 4)) {
    return *param_1 + param_2 * 0x10;
  }
  func_0x00010744c340();
  func_0x00010744c9ec();
  FUN_107445be0();
  return unaff_x19;
}



/* Entry: 107445bc0; end: 107445bdf;  */

void FUN_107445bc0(void)

{
  func_0x00010744c9ec();
  FUN_107445be0();
  return;
}



/* Entry: 107445be0; end: 107445bf7;  */

void FUN_107445be0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107445908(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107445bf8; end: 107445c63;  */

void FUN_107445bf8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107445908(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107445c64; end: 107445c83;  */

void FUN_107445c64(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x00010744cdf0(param_2,param_1);
    if ((extraout_x8 & 1) == 0) {
      func_0x00010744caf8();
      FUN_107445e60();
      func_0x00010744c490();
      FUN_10744716c();
    }
    else {
      func_0x00010744caf8();
      FUN_107445e08();
      func_0x00010744c490();
      FUN_1074466c8();
    }
    *unaff_x19 = unaff_x20;
    return;
  }
  func_0x00010744d06c(param_1);
  lVar1 = 0x18;
  __Znwm();
  func_0x00010744c9d4(&UNK_1109b1588);
  *(undefined8 *)(lVar1 + 0xc) = *unaff_x19;
  *unaff_x20 = lVar1;
  return;
}



/* Entry: 107445c84; end: 107445cbb;  */

void FUN_107445c84(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x00010744d06c();
  lVar1 = 0x18;
  __Znwm();
  func_0x00010744c9d4(&UNK_1109b1588);
  *(undefined8 *)(lVar1 + 0xc) = *unaff_x19;
  *unaff_x20 = lVar1;
  return;
}



/* Entry: 107445cbc; end: 107445cfb;  */

void FUN_107445cbc(void)

{
  return;
}



/* Entry: 107445cfc; end: 107445d47;  */

void FUN_107445cfc(int param_1)

{
  func_0x00010744c9a8();
  if (param_1 == 0) {
    func_0x00010744ce88();
  }
  else {
    func_0x00010744cdd0();
  }
  func_0x00010744c36c();
  return;
}



/* Entry: 107445d48; end: 107445d87;  */

void FUN_107445d48(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x20;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  func_0x00010744cac0();
  func_0x00010744ce34();
  FUN_107445d88();
  uStack_38 = param_1;
  uStack_34 = param_2;
  func_0x00010744cf30(*(undefined8 *)(*unaff_x20 + 0x120),param_3,param_4,&uStack_38);
  func_0x00010744c094();
  return;
}



/* Entry: 107445d88; end: 107445db7;  */

void FUN_107445d88(void)

{
  return;
}



/* Entry: 107445db8; end: 107445e07;  */

void FUN_107445db8(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010744cdf0();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010744caf8();
    FUN_107445e60();
    func_0x00010744c490();
    FUN_10744716c();
  }
  else {
    func_0x00010744caf8();
    FUN_107445e08();
    func_0x00010744c490();
    FUN_1074466c8();
  }
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 107445e08; end: 107445e5f;  */

void FUN_107445e08(void)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined4 *unaff_x21;
  
  func_0x00010744ce00();
  __Znwm(0x140);
  func_0x00010744c408();
  FUN_107339958();
  func_0x00010744c4f4(*unaff_x21,unaff_x21[1]);
  FUN_107445ebc();
  *unaff_x20 = unaff_x19;
  func_0x00010744cd28();
  return;
}



/* Entry: 107445e60; end: 107445ebb;  */

void FUN_107445e60(void)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined4 *unaff_x21;
  undefined4 *unaff_x22;
  
  func_0x00010744c500();
  func_0x00010744cef4();
  func_0x00010744c408();
  FUN_107339958();
  func_0x00010744c4f4(*unaff_x22,*unaff_x21,unaff_x21[1]);
  FUN_10744671c();
  *unaff_x20 = unaff_x19;
  func_0x00010744cd28();
  return;
}



/* Entry: 107445ebc; end: 107445f1f;  */

long FUN_107445ebc(undefined4 param_1,long param_2)

{
  undefined8 unaff_x20;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  
  func_0x00010744c1f0(&UNK_1109b1638);
  FUN_107339130();
  *(uint *)(param_2 + 0xa8) =
       CONCAT13(in_register_00005003,
                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  *(undefined4 *)(param_2 + 0xac) = param_1;
  *(undefined1 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined1 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0x100) = unaff_x20;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined1 *)(param_2 + 0x138) = 0;
  return param_2;
}



/* Entry: 107445f20; end: 107445f23;  */

long FUN_107445f20(long param_1)

{
  func_0x000107444470(param_1 + 0x120);
  FUN_1074444a8(param_1 + 0x100);
  func_0x00010730b13c(param_1 + 200);
  FUN_107446460(param_1 + 0xb0);
  func_0x00010744ccf8();
  func_0x00010744cb44();
  return param_1;
}



/* Entry: 107445f24; end: 107445f37;  */

void FUN_107445f24(void)

{
  FUN_107446498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107445f38; end: 107446087;  */

long FUN_107445f38(void)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar4;
  ulong uVar5;
  undefined1 auStack_1a0 [56];
  byte bStack_168;
  undefined8 uStack_10;
  
  func_0x00010744c720();
  func_0x00010744bf78();
  uStack_10 = extraout_x8;
  func_0x000107751284(auStack_1a0);
  func_0x00010744cc24();
  func_0x00010744d060();
  func_0x00010744c530();
  func_0x00010744c1e4();
  func_0x00010744c694();
  func_0x00010744c3b0();
  func_0x00010744c278();
  func_0x00010744ccd8(*(undefined4 *)(unaff_x19 + 0xa8),*(undefined4 *)(unaff_x19 + 0xac));
  func_0x00010744c6b8();
  func_0x00010744c7b8();
  func_0x00010744c7c0();
  func_0x00010744c780();
  func_0x00010744c7c8();
  plVar4 = (long *)(unaff_x19 + 0xb0);
  lVar3 = *plVar4;
  lVar1 = *(long *)(unaff_x19 + 0xb8);
  FUN_1074464dc(plVar4,unaff_x20 & 0xffffffff);
  for (uVar5 = lVar1 - lVar3 >> 3; uVar2 = uVar5 == unaff_x20, uVar5 < unaff_x20; uVar5 = uVar5 + 1)
  {
    FUN_1074465e4(plVar4,auStack_1a0);
  }
  func_0x00010744c92c(unaff_x19 + 0x100);
  func_0x00010744c924(unaff_x19 + 0x120);
  func_0x00010744c470();
  (*extraout_x8_00)();
  func_0x00010726236c(auStack_1a0);
  if ((bStack_168 & 1) == 0) {
    func_0x00010744c914();
    lVar3 = unaff_x19 + 0x120;
    func_0x00010744cd30();
  }
  else {
    lVar3 = unaff_x19 + 0x100;
    FUN_10744464c(lVar3,auStack_1a0);
    func_0x00010744c914();
    func_0x00010744cd30();
  }
  *(undefined1 *)(unaff_x19 + 0x138) = 1;
  func_0x00010744cd80();
  func_0x00010744bf64(uStack_10);
  if ((bool)uVar2) {
    return lVar3;
  }
  ___stack_chk_fail();
  func_0x00010744cd80();
  func_0x00010744c3c8();
  return ((*(long *)(lVar3 + 0xb0) - *(long *)(lVar3 + 0xb8) ^ 0xffffffffffffffffU) &
         0xfffffffffffffff0) + 0x10;
}



/* Entry: 107446088; end: 10744608f;  */

long FUN_107446088(long param_1)

{
  return ((*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xb8) ^ 0xffffffffffffffffU) &
         0xfffffffffffffff0) + 0x10;
}



/* Entry: 107446090; end: 1074460eb;  */

char FUN_107446090(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x138);
  if (cVar1 == '\x01') {
    func_0x00010744c158(*(undefined8 *)(param_1 + 0xb0));
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  return cVar1;
}



/* Entry: 1074460ec; end: 1074461f3;  */

void FUN_1074460ec(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  int extraout_w10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long in_stack_00000040;
  
  func_0x00010744ce4c();
  func_0x00010744c19c();
  func_0x00010744c8d0();
  func_0x00010744c880();
  func_0x00010744cbe0();
  if ((bool)in_ZR) {
    func_0x00010744cbc8();
  }
  else {
    func_0x00010744c460();
    func_0x00010744c318();
    func_0x00010744cbbc();
    for (; uVar1 = unaff_x23 == unaff_x24, !(bool)uVar1; unaff_x23 = unaff_x23 + 0x58) {
      func_0x00010744c244();
      func_0x00010744c9cc();
      if (in_stack_00000040 != 0) {
        func_0x00010744cbb0();
        if ((bool)uVar1) {
          func_0x00010744c93c();
          func_0x00010744c30c();
        }
        else {
          func_0x00010786967c();
          func_0x00010744c8a4();
        }
        func_0x00010744c230();
        if (extraout_x8 != 0) {
          do {
            func_0x00010744c2cc();
          } while (extraout_w10 != 0);
        }
        func_0x00010744c038();
        FUN_1074461f4();
        func_0x00010744c664();
        *(undefined1 *)(unaff_x22 + 0x138) = unaff_w25;
        func_0x00010744c640();
      }
      func_0x00010744c65c();
    }
    func_0x00010744c300();
  }
  func_0x00010744c620();
  return;
}



/* Entry: 1074461f4; end: 1074462db;  */

void FUN_1074461f4(void)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined8 in_stack_00000060;
  long in_stack_00000070;
  undefined1 auStack_2c8 [64];
  long lStack_288;
  undefined1 auStack_280 [16];
  undefined8 *puStack_270;
  code *pcStack_268;
  undefined1 auStack_198 [400];
  undefined8 uStack_8;
  
  func_0x00010744c720();
  func_0x00010744bfa0();
  uStack_8 = extraout_x8;
  func_0x00010744ca60();
  func_0x00010744c708(auStack_280);
  func_0x00010744c2f4();
  func_0x00010744c178();
  func_0x00010744c718(auStack_198);
  func_0x00010744d04c();
  lStack_288 = unaff_x22 + 0x10;
  lVar2 = unaff_x22 + 0x70;
  FUN_107339498(*(undefined4 *)(unaff_x22 + 0xa8),*(undefined4 *)(unaff_x22 + 0xac),lVar2,
                auStack_198,auStack_2c8);
  func_0x00010744c6b8();
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  while (uVar1 = unaff_x21 == unaff_x20, unaff_x21 < unaff_x20) {
    lVar2 = unaff_x22 + 0xb0;
    func_0x00010744669c();
    func_0x00010744ce28();
  }
  if ((*(byte *)(in_stack_00000070 + 0x20) & 1) != 0) {
    func_0x00010744c944();
  }
  func_0x00010744bf64(uStack_8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010744c294();
    func_0x00010744c424();
    func_0x00010744c42c();
    func_0x00010744c434();
    func_0x00010744c3c8();
    pcVar3 = FUN_1074462dc;
    func_0x00010744c720();
    puStack_270 = &stack0x00000060;
    pcStack_268 = pcVar3;
    func_0x00010744c078();
    func_0x00010744ca60();
    func_0x00010744c2e8();
    func_0x00010744c2dc();
    func_0x00010744c178();
    func_0x00010744c148();
    func_0x00010744c2ac();
    func_0x00010744c444(*(undefined4 *)(lVar2 + 0xa8),*(undefined4 *)(lVar2 + 0xac));
    FUN_107339498();
    func_0x00010744c6b8();
    func_0x00010744c43c();
    func_0x00010744c424();
    func_0x00010744c42c();
    func_0x00010744c434();
    *extraout_x8_00 = unaff_s8;
    extraout_x8_00[1] = unaff_s9;
    extraout_x8_00[2] = unaff_s8;
    extraout_x8_00[3] = unaff_s9;
    *(undefined1 *)(extraout_x8_00 + 4) = 1;
    func_0x00010744bf64(extraout_x8_01);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010744c294();
      func_0x00010744c424();
      func_0x00010744c42c();
      func_0x00010744c434();
      func_0x00010744c3c8();
      return;
    }
  }
  return;
}



/* Entry: 1074462dc; end: 1074463a3;  */

void FUN_1074462dc(long param_1)

{
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  func_0x00010744c720();
  func_0x00010744c078();
  func_0x00010744ca60();
  func_0x00010744c2e8();
  func_0x00010744c2dc();
  func_0x00010744c178();
  func_0x00010744c148();
  func_0x00010744c2ac();
  func_0x00010744c444(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  FUN_107339498();
  func_0x00010744c6b8();
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  *extraout_x8 = unaff_s8;
  extraout_x8[1] = unaff_s9;
  extraout_x8[2] = unaff_s8;
  extraout_x8[3] = unaff_s9;
  *(undefined1 *)(extraout_x8 + 4) = 1;
  func_0x00010744bf64(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  return;
}



/* Entry: 1074463a4; end: 1074463c3;  */

void FUN_1074463a4(void)

{
  return;
}



/* Entry: 1074463c4; end: 107446453;  */

void FUN_1074463c4(int param_1)

{
  long unaff_x20;
  
  func_0x00010744c168();
  if (param_1 == 0) {
    func_0x00010744ca28();
  }
  else if (*(int *)(unaff_x20 + 0x38) == 0) {
    func_0x00010744cbd4();
  }
  func_0x00010744c1cc();
  return;
}



/* Entry: 107446454; end: 10744645f;  */

void FUN_107446454(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar1;
  undefined1 auStack_48 [40];
  
  uVar1 = 0;
  func_0x00010744c38c(param_1 + 0xb0);
  if ((bool)in_CY && !(bool)in_ZR) {
    if (uVar1 >> 0x3d != 0) {
      FUN_107446530();
      func_0x00010744c408();
      FUN_107446594();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c94c();
    FUN_10744655c();
    func_0x00010744c514();
    func_0x00010744c4f4();
    FUN_10744653c();
    FUN_107446594(auStack_48);
  }
  return;
}



/* Entry: 107446460; end: 107446483;  */

void FUN_107446460(void)

{
  func_0x00010744c220();
  FUN_107446484();
  return;
}



/* Entry: 107446484; end: 107446497;  */

void FUN_107446484(undefined8 *param_1)

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



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10751648c; end: 1075164a3;  */

void FUN_10751648c(long *param_1,long param_2)

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



/* Entry: 1075164a4; end: 1075164bf;  */

void FUN_1075164a4(long param_1)

{
  FUN_1074f7478();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 1075164c0; end: 107516597;  */

void FUN_1075164c0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107518048();
    FUN_1075164c0();
    FUN_1075164c0();
    func_0x0001075181e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107516598; end: 10751663b;  */

long FUN_107516598(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001075181a8();
  FUN_107516660();
  FUN_10751674c(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x58,unaff_x19 + 2);
  FUN_10751663c(lStack_48);
  lStack_48 = lStack_48 + 0x58;
  FUN_1075166c0();
  lVar1 = unaff_x19[1];
  func_0x0001075168bc(auStack_58);
  return lVar1;
}



/* Entry: 10751663c; end: 10751665f;  */

void FUN_10751663c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001073ebf24();
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



/* Entry: 107516660; end: 1075166bf;  */

long * FUN_107516660(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x2e8ba2e8ba2e8bb) {
    uVar1 = (param_1[2] - *param_1) / 0x58;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x1745d1745d1745c < uVar1) {
      plVar3 = (long *)0x2e8ba2e8ba2e8ba;
    }
    return plVar3;
  }
  FUN_107516740();
  func_0x000107518048();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58;
  FUN_1075167ec(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 1075166c0; end: 10751673f;  */

void FUN_1075166c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107518048();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x58) * 0x58;
  FUN_1075167ec(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 107516740; end: 10751674b;  */

long * FUN_107516740(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001075181f4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107516798();
  }
  lVar1 = param_4 + param_3 * 0x58;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x58;
  return param_1;
}



/* Entry: 10751674c; end: 1075167bb;  */

long * FUN_10751674c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107516798();
  }
  lVar1 = param_4 + param_3 * 0x58;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x58;
  return param_1;
}



/* Entry: 1075167bc; end: 1075167eb;  */

void FUN_1075167bc(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x58) {
    FUN_10751663c(param_4,uVar1);
    param_4 = lStack_48 + 0x58;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x0001073ebef4(param_2);
  }
  FUN_107516878(&uStack_70);
  return;
}



/* Entry: 1075167ec; end: 107516877;  */

void FUN_1075167ec(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x58) {
    FUN_10751663c(param_4,lVar1);
    param_4 = lStack_38 + 0x58;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x0001073ebef4(param_2);
  }
  FUN_107516878(&uStack_60);
  return;
}



/* Entry: 107516878; end: 1075168e7;  */

long FUN_107516878(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x58;
      func_0x0001073ebef4();
    }
  }
  return param_1;
}



/* Entry: 1075168e8; end: 1075168ef;  */

void FUN_1075168e8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107518048(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x58;
    func_0x0001073ebef4();
  }
  return;
}



/* Entry: 1075168f0; end: 10751698b;  */

void FUN_1075168f0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107518048();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x58;
    func_0x0001073ebef4();
  }
  return;
}



/* Entry: 10751698c; end: 107516993;  */

void FUN_10751698c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107518048(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001073ebef4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107516994; end: 1075169c7;  */

void FUN_107516994(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107518048();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001073ebef4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1075169c8; end: 107516a97;  */

undefined1  [16] FUN_1075169c8(ulong *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar10;
  byte bVar16;
  undefined1 auVar17 [16];
  
  Hint_Prefetch(*param_1,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
  lVar4 = 0;
  uVar5 = *param_1;
  uVar7 = uVar5 >> 0xc ^ uVar3 >> 7;
  bVar6 = (byte)uVar3 & 0x7f;
  while( true ) {
    uVar7 = uVar7 & param_1[2];
    uVar10 = *(undefined8 *)(uVar5 + uVar7);
    bVar9 = (byte)((ulong)uVar10 >> 8);
    bVar11 = (byte)((ulong)uVar10 >> 0x10);
    bVar12 = (byte)((ulong)uVar10 >> 0x18);
    bVar13 = (byte)((ulong)uVar10 >> 0x20);
    bVar14 = (byte)((ulong)uVar10 >> 0x28);
    bVar15 = (byte)((ulong)uVar10 >> 0x30);
    bVar16 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar3 = CONCAT17(-(bVar16 == bVar6),
                          CONCAT16(-(bVar15 == bVar6),
                                   CONCAT15(-(bVar14 == bVar6),
                                            CONCAT14(-(bVar13 == bVar6),
                                                     CONCAT13(-(bVar12 == bVar6),
                                                              CONCAT12(-(bVar11 == bVar6),
                                                                       CONCAT11(-(bVar9 == bVar6),
                                                                                -((byte)uVar10 ==
                                                                                 bVar6)))))))) &
                 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar8 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & param_1[2];
      if (*(uint *)(param_1[1] + uVar8 * 8) == *param_2) {
        auVar17._8_8_ = param_1[1] + uVar8 * 8;
        auVar17._0_8_ = uVar5 + uVar8;
        return auVar17;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                CONCAT16(-(bVar15 == 0x80),
                                         CONCAT15(-(bVar14 == 0x80),
                                                  CONCAT14(-(bVar13 == 0x80),
                                                           CONCAT13(-(bVar12 == 0x80),
                                                                    CONCAT12(-(bVar11 == 0x80),
                                                                             CONCAT11(-(bVar9 == 
                                                  0x80),-((byte)uVar10 == 0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar7 = lVar4 + uVar7;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 107516a98; end: 107516ae3;  */

void FUN_107516a98(long *param_1,long *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  
  uVar3 = (uint)param_3;
  plVar2 = param_2;
  FUN_107516ae4();
  puVar1 = (undefined4 *)(param_2[1] + (long)plVar2 * 8);
  if ((uVar3 & 1) != 0) {
    *puVar1 = *param_3;
    puVar1[1] = 0;
  }
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = (long)puVar1;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 107516ae4; end: 107516bbf;  */

undefined1  [16] FUN_107516ae4(ulong *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar10;
  byte bVar16;
  undefined1 auVar17 [16];
  
  lVar6 = 0;
  uVar7 = *param_1;
  Hint_Prefetch(uVar7,0,2,0);
  uVar3 = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  uVar3 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar3 * -0x622015f714c7d297;
  bVar4 = (byte)uVar3 & 0x7f;
  uVar3 = uVar3 >> 7 ^ uVar7 >> 0xc;
  while( true ) {
    uVar3 = uVar3 & param_1[2];
    uVar10 = *(undefined8 *)(uVar7 + uVar3);
    bVar9 = (byte)((ulong)uVar10 >> 8);
    bVar11 = (byte)((ulong)uVar10 >> 0x10);
    bVar12 = (byte)((ulong)uVar10 >> 0x18);
    bVar13 = (byte)((ulong)uVar10 >> 0x20);
    bVar14 = (byte)((ulong)uVar10 >> 0x28);
    bVar15 = (byte)((ulong)uVar10 >> 0x30);
    bVar16 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar16 == bVar4),
                          CONCAT16(-(bVar15 == bVar4),
                                   CONCAT15(-(bVar14 == bVar4),
                                            CONCAT14(-(bVar13 == bVar4),
                                                     CONCAT13(-(bVar12 == bVar4),
                                                              CONCAT12(-(bVar11 == bVar4),
                                                                       CONCAT11(-(bVar9 == bVar4),
                                                                                -((byte)uVar10 ==
                                                                                 bVar4)))))))) &
                 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      puVar5 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]);
      if (*(uint *)(param_1[1] + (long)puVar5 * 8) == *param_2) {
        uVar10 = 0;
        goto LAB_107516ba4;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                CONCAT16(-(bVar15 == 0x80),
                                         CONCAT15(-(bVar14 == 0x80),
                                                  CONCAT14(-(bVar13 == 0x80),
                                                           CONCAT13(-(bVar12 == 0x80),
                                                                    CONCAT12(-(bVar11 == 0x80),
                                                                             CONCAT11(-(bVar9 == 
                                                  0x80),-((byte)uVar10 == 0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  FUN_107516bc0();
  uVar10 = 1;
  puVar5 = param_1;
LAB_107516ba4:
  auVar17._8_8_ = uVar10;
  auVar17._0_8_ = puVar5;
  return auVar17;
}



/* Entry: 107516bc0; end: 107516c4b;  */

void FUN_107516bc0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x0001075181a8();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + (long)param_1) != -2)) {
    param_1 = unaff_x19;
    FUN_107516d3c();
    func_0x000107518240();
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



/* Entry: 107516c4c; end: 107516d3b;  */

void FUN_107516c4c(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = *param_1;
  puVar8 = (uint *)param_1[1];
  lVar9 = param_1[2];
  param_1[2] = param_2;
  plVar5 = param_1;
  FUN_107516d6c();
  lVar11 = param_1[1];
  for (lVar10 = 0; lVar9 != lVar10; lVar10 = lVar10 + 1) {
    if (-1 < *(char *)(lVar1 + lVar10)) {
      uVar2 = *puVar8;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar2;
      func_0x000107518240();
      bVar3 = (SUB161(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (char)((long)&PTR_LOOP_110c8acd8 + (ulong)uVar2) * 'i') & 0x7f;
      uVar6 = param_1[2];
      lVar7 = *param_1;
      *(byte *)(lVar7 + (long)plVar5) = bVar3;
      *(byte *)(lVar7 + ((long)plVar5 - 7U & uVar6) + (uVar6 & 7)) = bVar3;
      *(undefined8 *)(lVar11 + (long)plVar5 * 8) = *(undefined8 *)puVar8;
    }
    puVar8 = puVar8 + 2;
  }
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 107516d3c; end: 107516d6b;  */

long * FUN_107516d3c(long *param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 uVar6;
  long *plVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar9 = param_1[2];
  if ((8 < uVar9) &&
     (uVar6 = uVar9 * 0x19 + param_1[3] * -0x20 == 0, (ulong)(param_1[3] * 0x20) <= uVar9 * 0x19)) {
    func_0x000107517f5c();
    puVar8 = (uint *)&UNK_1109b90a8;
    func_0x00010ae6c914();
    func_0x000107517f18(extraout_x8);
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*puVar8;
    return (long *)(SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                   ((long)&PTR_LOOP_110c8acd8 + (ulong)*puVar8) * -0x622015f714c7d297);
  }
  lVar1 = *param_1;
  puVar8 = (uint *)param_1[1];
  lVar11 = param_1[2];
  param_1[2] = uVar9 << 1 | 1;
  plVar7 = param_1;
  FUN_107516d6c();
  lVar13 = param_1[1];
  for (lVar12 = 0; lVar11 != lVar12; lVar12 = lVar12 + 1) {
    if (-1 < *(char *)(lVar1 + lVar12)) {
      uVar2 = *puVar8;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar2;
      func_0x000107518240();
      bVar3 = (SUB161(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (char)((long)&PTR_LOOP_110c8acd8 + (ulong)uVar2) * 'i') & 0x7f;
      uVar9 = param_1[2];
      lVar10 = *param_1;
      *(byte *)(lVar10 + (long)plVar7) = bVar3;
      *(byte *)(lVar10 + ((long)plVar7 - 7U & uVar9) + (uVar9 & 7)) = bVar3;
      *(undefined8 *)(lVar13 + (long)plVar7 * 8) = *(undefined8 *)puVar8;
    }
    puVar8 = puVar8 + 2;
  }
  if (lVar11 != 0) {
    plVar7 = (long *)(lVar1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar7);
    return plVar7;
  }
  return plVar7;
}



/* Entry: 107516d6c; end: 107516dbf;  */

void FUN_107516d6c(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  uVar2 = param_1[2] + 0x13U & 0xfffffffffffffffc;
  puVar1 = &uStack_21;
  func_0x000100063148(puVar1,uVar2 + param_1[2] * 8);
  *param_1 = (long)(puVar1 + 8);
  param_1[1] = (long)(puVar1 + uVar2);
  func_0x0001000631d0(param_1,8);
  return;
}



/* Entry: 107516dc0; end: 107516dff;  */

ulong FUN_107516dc0(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_ZR;
  uint *puVar2;
  undefined8 extraout_x8;
  
  func_0x000107517f5c();
  puVar2 = (uint *)&UNK_1109b90a8;
  func_0x00010ae6c914();
  func_0x000107517f18(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*puVar2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + (ulong)*puVar2) * -0x622015f714c7d297;
}



/* Entry: 107516e00; end: 107516e8f;  */

ulong FUN_107516e00(undefined8 param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
}



/* Entry: 107516e90; end: 107516ee3;  */

long * FUN_107516e90(long *param_1)

{
  if (param_1[2] != 0) {
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 107516ee4; end: 107516f03;  */

void FUN_107516ee4(void)

{
  undefined1 uStack_11;
  
  FUN_107516f04(&uStack_11);
  return;
}



/* Entry: 107516f04; end: 107516f7f;  */

undefined1 * FUN_107516f04(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x000107517f5c();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_107516f80(auStack_40);
  puVar1 = puStack_30;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1109b90d8;
  *(undefined4 *)(puStack_30 + 3) = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x000107516ff4();
  func_0x000107517f18(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_107516fa8();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 107516f80; end: 107516fa7;  */

long FUN_107516f80(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107516fa8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107516fa8; end: 107516fc3;  */

void FUN_107516fa8(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109b90d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107516fc4; end: 107516fc7;  */

void FUN_107516fc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b90d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107516fc8; end: 107516fdb;  */

void FUN_107516fc8(void)

{
  func_0x000107516fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107516fdc; end: 107517003;  */

void FUN_107516fdc(void)

{
  return;
}



/* Entry: 107517004; end: 107517027;  */

long FUN_107517004(long param_1)

{
  func_0x0001075164fc(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 107517028; end: 10751714f;  */

long FUN_107517028(long param_1)

{
  long unaff_x19;
  uint unaff_w20;
  
  func_0x0001075181a8();
  func_0x000107517074();
  if ((unaff_x19 + 8 == param_1) || (FUN_1075153a0(), (unaff_w20 >> 7 & 1) != 0)) {
    param_1 = unaff_x19 + 8;
  }
  return param_1;
}



/* Entry: 107517150; end: 107517233;  */

void FUN_107517150(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001075181b4();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x000107517f0c();
  }
  return;
}



/* Entry: 107517234; end: 107517283;  */

void FUN_107517234(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107517254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  func_0x000104bfeb48();
  FUN_107517284();
  return;
}



/* Entry: 107517284; end: 10751731f;  */

undefined1  [16]
FUN_107517284(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_107517320(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x000107517394(alStack_60,param_1,param_3,param_4);
    FUN_1075173e0(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x000107517408(alStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 107517320; end: 1075173df;  */

long * FUN_107517320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar4;
  long *plVar5;
  
  func_0x000107518048();
  plVar4 = (long *)(unaff_x20 + 8);
  plVar3 = (long *)*plVar4;
  plVar5 = plVar4;
  while (plVar3 != (long *)0x0) {
    while (plVar5 = plVar3, uVar2 = param_3, FUN_1075153a0(param_3,plVar5 + 4),
          ((uint)uVar2 >> 7 & 1) != 0) {
      plVar3 = (long *)*plVar5;
      plVar4 = plVar5;
      if ((long *)*plVar5 == (long *)0x0) goto LAB_107517384;
    }
    uVar1 = (int)plVar5 + 0x20;
    func_0x00010751821c();
    if ((uVar1 >> 7 & 1) == 0) break;
    plVar4 = plVar5 + 1;
    plVar3 = (long *)*plVar4;
  }
LAB_107517384:
  *unaff_x19 = plVar5;
  return plVar4;
}



/* Entry: 1075173e0; end: 107517427;  */

void FUN_1075173e0(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107517f80();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107518070();
  func_0x00010751817c();
  return;
}



/* Entry: 107517428; end: 10751743f;  */

void FUN_107517428(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001075181e0();
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107517440; end: 10751747b;  */

void FUN_107517440(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001075181e0();
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10751747c; end: 10751752f;  */

void FUN_10751747c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar1 = param_1 + 1;
  puVar4 = puVar1;
  puVar5 = puVar1;
  while (puVar6 = (undefined8 *)*puVar4, puVar6 != (undefined8 *)0x0) {
    cVar3 = (char)puVar6 + ' ';
    func_0x000107518224();
    lVar2 = 8;
    if (-1 < cVar3) {
      lVar2 = 0;
    }
    puVar4 = (undefined8 *)((long)puVar6 + lVar2);
    if (-1 < cVar3) {
      puVar5 = puVar6;
    }
  }
  if ((puVar1 != puVar5) && (FUN_1074d0418(param_2,puVar5 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
    func_0x00010751812c();
    if ((undefined8 *)*param_1 == puVar5) {
      *param_1 = param_2;
    }
    param_1[2] = param_1[2] + -1;
    func_0x00010530d618(param_1[1],puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  return;
}



/* Entry: 107517530; end: 10751755f;  */

undefined8 FUN_107517530(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107518084();
  if (unaff_x19 + 0x58 == param_1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  return uVar1;
}



/* Entry: 107517560; end: 1075176a3;  */

undefined8 FUN_107517560(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x000107518048();
  lVar5 = *param_1;
  lVar4 = param_1[1];
  if ((*(char *)(lVar5 + 0x14) == '\x01') &&
     (func_0x00010726bc68(lVar5,unaff_x19 + 4), (int)lVar5 == 0)) {
LAB_10751765c:
    uVar6 = 0;
  }
  else {
    func_0x00010784ae48(&plStack_38,lVar4 + 0x68);
    if (plStack_38 == (long *)0x0) {
      lVar5 = *(long *)(unaff_x20 + 0x10);
      uStack_48 = *(undefined8 *)(lVar4 + 0x48);
      uStack_50 = *(undefined8 *)(lVar4 + 0x40);
      if (*(long *)(lVar4 + 0x48) != 0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x48) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_107517234(&plStack_40,*(undefined8 *)(lVar5 + 0x18));
      plVar1 = plStack_38;
      plStack_38 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        func_0x000107517f0c();
        plVar1 = plStack_40;
        plStack_40 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          func_0x000107517f0c();
        }
      }
      func_0x00010750bd38(&uStack_50);
      if (plStack_38 == (long *)0x0) goto LAB_10751765c;
      plStack_38[0x12] = *(long *)(lVar4 + 200);
      (**(code **)(*plStack_38 + 0x40))(plStack_38,*(undefined8 *)(unaff_x20 + 0x18));
    }
    lVar4 = lVar4 + 0x50;
    FUN_107515340();
    plVar1 = plStack_38;
    uVar6 = *(undefined8 *)(lVar4 + 0x30);
    plStack_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      func_0x000107517f0c();
    }
  }
  return uVar6;
}



/* Entry: 1075176a4; end: 107517703;  */

undefined1  [16] FUN_1075176a4(long param_1,uint param_2)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  byte *pbVar3;
  uint uVar4;
  undefined1 uStack_2f;
  
  pbVar3 = (byte *)(param_1 + 4);
  uVar1 = *(undefined2 *)(param_1 + 2);
  if (param_2 < *pbVar3) {
    uVar4 = param_2;
    FUN_107355868();
  }
  else {
    pbVar3 = *(byte **)(param_1 + 4);
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  auVar2[1] = uStack_2f;
  auVar2[0] = (char)param_2;
  auVar2._2_2_ = uVar1;
  auVar2._4_8_ = pbVar3;
  auVar2._12_4_ = uVar4;
  return auVar2;
}



/* Entry: 107517704; end: 107517707;  */

void FUN_107517704(void)

{
  func_0x0001075177f4();
  return;
}



/* Entry: 107517708; end: 1075177db;  */

long FUN_107517708(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010784b2bc();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001073bc1c0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1075177dc; end: 10751780f;  */

void FUN_1075177dc(void)

{
  func_0x0001075177f4();
  return;
}



/* Entry: 107517810; end: 107517a3b;  */

undefined1  [16] FUN_107517810(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar5 = param_1 + 3;
  func_0x00010784b2bc();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x25 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1075178d4;
          plVar2 = (long *)plVar6[1];
          if (plVar2 != plVar5) break;
          plVar2 = plVar6 + 2;
          func_0x0001073bc1c0(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_107517a0c;
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
      } while (plVar2 == unaff_x25);
    }
  }
LAB_1075178d4:
  plVar2 = param_1 + 2;
  plVar6 = (long *)0x20;
  __Znwm();
  uStack_58 = 1;
  *plVar6 = 0;
  plVar6[1] = (long)plVar5;
  lVar3 = *param_3;
  plVar6[3] = param_3[1];
  plVar6[2] = lVar3;
  plStack_68 = plVar6;
  plStack_60 = plVar2;
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
    FUN_107517a3c(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  plVar6 = plStack_68;
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    *plStack_68 = *plVar2;
    *plVar2 = (long)plStack_68;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar2;
    if (*plStack_68 != 0) {
      plVar5 = *(long **)(*plStack_68 + 8);
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
      *(long **)(lVar3 + (long)plVar5 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar5;
    *plVar5 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_107517c34(&plStack_68);
  uVar1 = 1;
LAB_107517a0c:
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 107517a3c; end: 107517b03;  */

void FUN_107517a3c(long *param_1,ulong param_2)

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
      if (param_2 < uVar7) goto LAB_107517a84;
    }
    return;
  }
LAB_107517a84:
  if (param_2 == 0) {
    FUN_107517c00(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_107517c18(plVar2);
    FUN_107517c00(param_1,plVar2);
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



/* Entry: 107517b04; end: 107517bff;  */

void FUN_107517b04(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_107517c00(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_107517c18(plVar3);
    FUN_107517c00(param_1,plVar3);
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



/* Entry: 107517c00; end: 107517c17;  */

void FUN_107517c00(long *param_1,long param_2)

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



/* Entry: 107517c18; end: 107517c33;  */

void FUN_107517c18(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107518298();
  FUN_107517c54();
  return;
}



/* Entry: 107517c34; end: 107517c53;  */

void FUN_107517c34(void)

{
  func_0x000107518298();
  FUN_107517c54();
  return;
}



/* Entry: 107517c54; end: 107517c6b;  */

void FUN_107517c54(long *param_1,long param_2)

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



/* Entry: 107517c6c; end: 107517cdf;  */

undefined8 FUN_107517c6c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107517c94(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107518298(param_1);
  FUN_107517ce0();
  return unaff_x19;
}



/* Entry: 107517ce0; end: 107517cf7;  */

void FUN_107517ce0(long *param_1)

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



/* Entry: 107517cf8; end: 107517d43;  */

void FUN_107517cf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x19;
  
  func_0x00010751818c();
  FUN_107515b50(param_1 + 0xb0,param_3,param_4);
  FUN_10751747c();
                    /* WARNING: Could not recover jumptable at 0x000107517d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x80))();
  return;
}



/* Entry: 107517d44; end: 107517d73;  */

undefined8 FUN_107517d44(undefined8 param_1,undefined8 param_2)

{
  FUN_107517d74();
  func_0x0001075181e0();
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 107517d74; end: 107517e3b;  */

long FUN_107517d74(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010002c7d4();
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  func_0x00010530d618(param_1[1],param_2);
  return lVar1;
}



/* Entry: 107517e3c; end: 107517e8b;  */

void FUN_107517e3c(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107517f80();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107518070();
  func_0x00010751817c();
  return;
}



/* Entry: 107517e8c; end: 107517edb;  */

uint FUN_107517e8c(long param_1,long param_2)

{
  long *plVar1;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_30 = param_1 + 4;
  lStack_28 = param_1 + 0xc;
  lStack_18 = param_1 + 8;
  lStack_50 = param_2 + 4;
  lStack_48 = param_2 + 0xc;
  lStack_38 = param_2 + 8;
  plVar1 = &lStack_30;
  lStack_40 = param_2;
  lStack_20 = param_1;
  FUN_1074f7f3c(plVar1,&lStack_50);
  return (uint)plVar1 >> 7 & 1;
}



/* Entry: 107517edc; end: 107517f0b;  */

void FUN_107517edc(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x0001075181b4();
    FUN_107517edc();
    FUN_107517edc(*(undefined8 *)(unaff_x19 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107517f0c; end: 1075182a3;  */

void FUN_107517f0c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107517f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1075182a4; end: 10751830f;  */

undefined8 *
FUN_1075182a4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_1 = &PTR_DAT_1109b9158;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001075185a8(param_1 + 3,param_3);
  func_0x0001075185f4(param_1 + 8,param_4);
  func_0x000107518640(param_1 + 0xd,param_5);
  return param_1;
}



/* Entry: 107518310; end: 10751835b;  */

undefined8 * FUN_107518310(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b9158;
  FUN_107518510(param_1 + 0xd);
  FUN_107518478(param_1 + 8);
  func_0x0001075183b4(param_1 + 3);
  func_0x00010751838c(param_1 + 1);
  return param_1;
}



/* Entry: 10751835c; end: 10751838b;  */

void FUN_10751835c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10751838c; end: 10751845f;  */

long FUN_10751838c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107518460; end: 107518477;  */

void FUN_107518460(long *param_1)

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



/* Entry: 107518478; end: 1075184f7;  */

long FUN_107518478(long param_1)

{
  func_0x0001075184a0(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_1075184f8(param_1,0);
  return param_1;
}



/* Entry: 1075184f8; end: 10751850f;  */

void FUN_1075184f8(long *param_1)

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



/* Entry: 107518510; end: 10751858f;  */

long FUN_107518510(long param_1)

{
  func_0x000107518538(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_107518590(param_1,0);
  return param_1;
}



/* Entry: 107518590; end: 1075186df;  */

void FUN_107518590(long *param_1)

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



/* Entry: 1075186e0; end: 107518abb;  */

undefined8
FUN_1075186e0(ulong *param_1,ulong param_2,long param_3,int param_4,int param_5,ulong param_6,
             ulong param_7)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong extraout_x8;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong *puVar16;
  ulong uVar17;
  long *plVar18;
  uint6 uVar19;
  undefined8 uVar20;
  long lStack_a0;
  
  puVar4 = param_1 + 8;
  uVar8 = param_2;
  func_0x0001072ab574();
  uVar9 = param_1[4];
  Hint_Prefetch(uVar9,0,2,0);
  func_0x000107519568(uVar9);
  func_0x000107519520();
  if (puVar4 == (ulong *)0x0) {
    func_0x0001075193a8();
    uVar9 = puVar4[1];
    if (uVar9 != 0) {
      puVar3 = (undefined8 *)*puVar4;
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      uVar8 = puVar4[2];
      puVar4[2] = 0;
      puVar4[3] = 0;
      func_0x0001074f9d34();
    }
  }
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000107519568(*param_1);
  lStack_a0 = 0;
  uVar14 = param_1[1];
  uVar1 = param_1[2];
  uVar17 = *param_1;
  uVar9 = uVar17 >> 0xc ^ (ulong)puVar4 >> 7;
  bVar2 = (byte)puVar4;
  uVar19 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar9 = uVar9 & uVar1;
    uVar20 = *(undefined8 *)(uVar17 + uVar9);
    for (uVar12 = CONCAT17(-((byte)((ulong)uVar20 >> 0x38) == (bVar2 & 0x7f)),
                           CONCAT16(-((byte)((ulong)uVar20 >> 0x30) == (bVar2 & 0x7f)),
                                    CONCAT15(-((char)((ulong)uVar20 >> 0x28) ==
                                              (char)(uVar19 >> 0x28)),
                                             CONCAT14(-((char)((ulong)uVar20 >> 0x20) ==
                                                       (char)(uVar19 >> 0x20)),
                                                      CONCAT13(-((char)((ulong)uVar20 >> 0x18) ==
                                                                (char)(uVar19 >> 0x18)),
                                                               CONCAT12(-((char)((ulong)uVar20 >>
                                                                                0x10) ==
                                                                         (char)(uVar19 >> 0x10)),
                                                                        CONCAT11(-((char)((ulong)
                                                  uVar20 >> 8) == (char)(uVar19 >> 8)),
                                                  -((char)uVar20 == (char)uVar19)))))))) &
                  0x8080808080808080; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar8 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      puVar4 = (ulong *)(uVar14 + (uVar9 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) &
                                  uVar1) * 0x48);
      uVar8 = param_6;
      func_0x000104c32db4();
      if (((ulong)puVar4 & 1) != 0) goto LAB_107518800;
    }
    func_0x0001075194c0();
    if ((extraout_x8 & 1) != 0) break;
    lStack_a0 = lStack_a0 + 8;
    uVar9 = lStack_a0 + uVar9;
  }
  func_0x00010751939c();
  *puVar4 = 0;
  puVar4[1] = 0;
LAB_107518800:
  func_0x0001075193a8();
  puVar13 = (ulong *)puVar4[1];
  puVar6 = puVar4;
  if ((puVar13 != (ulong *)0x0) && (puVar5 = puVar4 + 3, puVar6 = puVar5, *puVar5 != 0)) {
    uVar8 = param_7;
    func_0x00010784b2bc();
    uVar9 = (long)puVar13 - 1;
    if (((ulong)puVar13 & uVar9) == 0) {
      puVar16 = (ulong *)((ulong)puVar5 & uVar9);
    }
    else {
      puVar16 = puVar5;
      if (puVar13 <= puVar5) {
        uVar14 = 0;
        if (puVar13 != (ulong *)0x0) {
          uVar14 = (ulong)puVar5 / (ulong)puVar13;
        }
        puVar16 = (ulong *)((long)puVar5 - uVar14 * (long)puVar13);
      }
    }
    plVar18 = *(long **)(*puVar4 + (long)puVar16 * 8);
    puVar6 = puVar5;
    if (plVar18 != (long *)0x0) {
      do {
        while( true ) {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_1075188ac;
          puVar4 = (ulong *)plVar18[1];
          if (puVar5 != puVar4) break;
          puVar6 = (ulong *)(plVar18 + 2);
          uVar8 = param_7;
          func_0x0001073bc1c0();
          if (((ulong)puVar6 & 1) != 0) goto LAB_1075188c0;
        }
        if (((ulong)puVar13 & uVar9) == 0) {
          puVar4 = (ulong *)((ulong)puVar4 & uVar9);
        }
        else if (puVar13 <= puVar4) {
          uVar14 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar14 = (ulong)puVar4 / (ulong)puVar13;
          }
          puVar4 = (ulong *)((long)puVar4 - uVar14 * (long)puVar13);
        }
      } while (puVar4 == puVar16);
    }
  }
LAB_1075188ac:
  func_0x00010751939c();
  uVar9 = puVar6[1];
  func_0x0001075193a8();
  func_0x000107519570();
  *puVar6 = uVar9;
LAB_1075188c0:
  if ((param_4 != 0) && (uVar9 = *(ulong *)(param_2 + 0x10), func_0x00010751939c(), *puVar6 < uVar9)
     ) {
    uVar9 = *(ulong *)(param_2 + 0x10);
    func_0x00010751939c();
    uVar14 = puVar6[1];
    func_0x00010751939c();
    *puVar6 = uVar9;
    puVar6[1] = uVar14 + 1;
  }
  if ((param_5 != 0) && (uVar9 = *(ulong *)(param_3 + 0x10), func_0x00010751939c(), *puVar6 < uVar9)
     ) {
    uVar9 = *(ulong *)(param_3 + 0x10);
    func_0x00010751939c();
    uVar14 = puVar6[1];
    func_0x00010751939c();
    *puVar6 = uVar9;
    puVar6[1] = uVar14 + 1;
  }
  func_0x00010751939c();
  if ((*puVar6 <= *(ulong *)(param_2 + 0x10)) ||
     (func_0x00010751939c(), *puVar6 <= *(ulong *)(param_3 + 0x10))) {
    func_0x0001075193a8();
    func_0x000107519570();
    uVar9 = *puVar6;
    func_0x00010751939c();
    if (uVar9 < puVar6[1]) {
      func_0x00010751939c();
      uVar9 = puVar6[1];
      func_0x0001075193a8();
      func_0x000107519570();
      *puVar6 = uVar9;
    }
  }
  uVar9 = param_1[4];
  Hint_Prefetch(uVar9,0,2,0);
  func_0x000107519568(uVar9);
  func_0x000107519520();
  if (((puVar6 != (ulong *)0x0) && (plVar18 = *(long **)(uVar8 + 0x40), plVar18 != (long *)0x0)) &&
     (plVar7 = (long *)(uVar8 + 0x50), *plVar7 != 0)) {
    func_0x00010784b2bc(plVar7,param_7);
    uVar9 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar9) == 0) {
      plVar15 = (long *)((ulong)plVar7 & uVar9);
    }
    else {
      plVar15 = plVar7;
      if (plVar18 <= plVar7) {
        uVar14 = 0;
        if (plVar18 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar18;
        }
        plVar15 = (long *)((long)plVar7 - uVar14 * (long)plVar18);
      }
    }
    plVar11 = *(long **)(*(long *)(uVar8 + 0x38) + (long)plVar15 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_107518a54;
          plVar10 = (long *)plVar11[1];
          if (plVar10 != plVar7) break;
          uVar8 = (ulong)(plVar11 + 2);
          func_0x0001073bc1c0(uVar8,param_7);
          if ((uVar8 & 1) != 0) {
            uVar20 = plVar11[4];
            goto LAB_107518a58;
          }
        }
        if (((ulong)plVar18 & uVar9) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar9);
        }
        else if (plVar18 <= plVar10) {
          uVar8 = 0;
          if (plVar18 != (long *)0x0) {
            uVar8 = (ulong)plVar10 / (ulong)plVar18;
          }
          plVar10 = (long *)((long)plVar10 - uVar8 * (long)plVar18);
        }
      } while (plVar10 == plVar15);
    }
  }
LAB_107518a54:
  uVar20 = 0;
LAB_107518a58:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  return uVar20;
}



/* Entry: 107518abc; end: 107518bd3;  */

long FUN_107518abc(ulong param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  ulong unaff_x22;
  ulong unaff_x28;
  
  func_0x000107519548();
  func_0x0001075194a8();
  func_0x0001075194d0();
  do {
    func_0x000107519530();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      func_0x00010751941c();
      if ((param_1 & 1) != 0) goto LAB_107518b28;
    }
    func_0x0001075194c0();
  } while ((extraout_x8 & 1) == 0);
  func_0x000107519410();
  FUN_107519250();
  uVar1 = param_1;
  func_0x000107519584(*(undefined8 *)(unaff_x19 + 8));
  *(undefined8 *)(uVar1 + 0x38) = 0;
  *(undefined8 *)(uVar1 + 0x40) = 0;
  unaff_x22 = param_1;
LAB_107518b28:
  return *(long *)(unaff_x19 + 8) + unaff_x22 * 0x48 + 0x38;
}



/* Entry: 107518bd4; end: 107518f83;  */

long * FUN_107518bd4(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar6 = param_1 + 3;
  func_0x00010784b2bc();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar12 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar12) == 0) {
      unaff_x25 = (long *)(uVar12 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar13 <= plVar6) {
        uVar5 = 0;
        if (plVar13 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar13);
      }
    }
    plVar11 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_107518c94;
          plVar3 = (long *)plVar11[1];
          if (plVar3 != plVar6) break;
          plVar3 = plVar11 + 2;
          func_0x0001073bc1c0(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) goto LAB_107518f48;
        }
        if (((ulong)plVar13 & uVar12) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar12);
        }
        else if (plVar13 <= plVar3) {
          uVar5 = 0;
          if (plVar13 != (long *)0x0) {
            uVar5 = (ulong)plVar3 / (ulong)plVar13;
          }
          plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar13);
        }
      } while (plVar3 == unaff_x25);
    }
  }
LAB_107518c94:
  plVar3 = param_1 + 2;
  plVar11 = (long *)0x28;
  __Znwm();
  uStack_58 = 1;
  *plVar11 = 0;
  plVar11[1] = (long)plVar6;
  lVar2 = *param_2;
  plVar11[3] = param_2[1];
  plVar11[2] = lVar2;
  plVar11[4] = 0;
  plStack_60 = plVar3;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_107518ed0;
  uVar12 = 1;
  if ((long *)0x2 < plVar13) {
    uVar12 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar4 = (long *)(uVar12 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar4 <= plVar13) {
    plVar4 = plVar13;
  }
  plStack_68 = plVar11;
  if ((long)plVar4 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else if (((ulong)plVar4 & (long)plVar4 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar4) {
LAB_107518d44:
    if ((ulong)plVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x107518f70);
      (*pcVar1)();
    }
    lVar2 = (long)plVar4 << 3;
    __Znwm(lVar2);
    FUN_107519058(param_1,lVar2);
    param_1[1] = (long)plVar4;
    lVar2 = *param_1;
    for (plVar13 = (long *)0x0; plVar4 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar13 * 8) = 0;
    }
    plVar7 = (long *)*plVar3;
    plVar13 = plVar4;
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)plVar7[1];
      uVar5 = (long)plVar4 - 1;
      uVar12 = 0;
      if (plVar4 != (long *)0x0) {
        uVar12 = (ulong)plVar8 / (ulong)plVar4;
      }
      plVar9 = plVar8;
      if (plVar4 <= plVar8) {
        plVar9 = (long *)((long)plVar8 - uVar12 * (long)plVar4);
      }
      if (((ulong)plVar4 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar8 & uVar5);
      }
      *(long **)(lVar2 + (long)plVar9 * 8) = plVar3;
      while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
        plVar10 = (long *)plVar7[1];
        if (((ulong)plVar4 & uVar5) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar5);
        }
        else if (plVar4 <= plVar10) {
          uVar12 = 0;
          if (plVar4 != (long *)0x0) {
            uVar12 = (ulong)plVar10 / (ulong)plVar4;
          }
          plVar10 = (long *)((long)plVar10 - uVar12 * (long)plVar4);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar8;
            plVar9 = plVar10;
          }
          else {
            *plVar8 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
            **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar7;
            plVar7 = plVar8;
          }
        }
      }
    }
  }
  else if (plVar4 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 - 1) & 0x3fU));
    }
    if (plVar4 <= plVar7) {
      plVar4 = plVar7;
    }
    if (plVar4 < plVar13) {
      if (plVar4 != (long *)0x0) goto LAB_107518d44;
      FUN_107519058(param_1,0);
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar6);
  }
  else {
    unaff_x25 = plVar6;
    if (plVar13 <= plVar6) {
      uVar12 = 0;
      if (plVar13 != (long *)0x0) {
        uVar12 = (ulong)plVar6 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar6 - uVar12 * (long)plVar13);
    }
  }
LAB_107518ed0:
  lVar2 = *param_1;
  plVar6 = *(long **)(lVar2 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar11 = *plVar3;
    *plVar3 = (long)plVar11;
    *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar3;
    if (*plVar11 != 0) {
      plVar6 = *(long **)(*plVar11 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar6) {
        uVar12 = 0;
        if (plVar13 != (long *)0x0) {
          uVar12 = (ulong)plVar6 / (ulong)plVar13;
        }
        plVar6 = (long *)((long)plVar6 - uVar12 * (long)plVar13);
      }
      *(long **)(lVar2 + (long)plVar6 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar6;
    *plVar6 = (long)plVar11;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_107519070(&plStack_68);
LAB_107518f48:
  return plVar11 + 4;
}



/* Entry: 107518f84; end: 107519057;  */

long FUN_107518f84(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint6 uVar12;
  undefined8 uVar13;
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (undefined4)param_3;
  func_0x000107519548();
  lVar8 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar9 = *param_1;
  uVar7 = uVar9 >> 0xc ^ CONCAT44(uVar6,uVar5) >> 7;
  bVar3 = (byte)uVar5;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    uVar13 = *(undefined8 *)(uVar9 + uVar7);
    for (uVar10 = CONCAT17(-((byte)((ulong)uVar13 >> 0x38) == (bVar3 & 0x7f)),
                           CONCAT16(-((byte)((ulong)uVar13 >> 0x30) == (bVar3 & 0x7f)),
                                    CONCAT15(-((char)((ulong)uVar13 >> 0x28) ==
                                              (char)(uVar12 >> 0x28)),
                                             CONCAT14(-((char)((ulong)uVar13 >> 0x20) ==
                                                       (char)(uVar12 >> 0x20)),
                                                      CONCAT13(-((char)((ulong)uVar13 >> 0x18) ==
                                                                (char)(uVar12 >> 0x18)),
                                                               CONCAT12(-((char)((ulong)uVar13 >>
                                                                                0x10) ==
                                                                         (char)(uVar12 >> 0x10)),
                                                                        CONCAT11(-((char)((ulong)
                                                  uVar13 >> 8) == (char)(uVar12 >> 8)),
                                                  -((char)uVar13 == (char)uVar12)))))))) &
                  0x8080808080808080; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar7 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar2;
      lVar4 = uVar1 + uVar11 * 0x60;
      func_0x000104c32db4(lVar4,param_2);
      if ((int)lVar4 != 0) {
        return *param_1 + uVar11;
      }
    }
    func_0x0001075194c0();
    if ((extraout_x8 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar7 = lVar8 + uVar7;
  }
  return 0;
}



/* Entry: 107519058; end: 10751906f;  */

void FUN_107519058(long *param_1,long param_2)

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



/* Entry: 107519070; end: 10751912f;  */

long * FUN_107519070(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107519130; end: 1075191ab;  */

void FUN_107519130(void)

{
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x000107519590();
  FUN_107450e80();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x000104c2fe38(unaff_x20);
      func_0x000107519410();
      func_0x000100061de0();
      func_0x00010751945c();
      FUN_1075191ac();
    }
    unaff_x20 = unaff_x20 + 0x60;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1075191ac; end: 10751923b;  */

undefined8 FUN_1075191ac(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 unaff_x19;
  undefined8 uVar7;
  
  func_0x000104c318bc();
  lVar4 = *(long *)(param_2 + 0x48);
  lVar2 = *(long *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(long *)(param_1 + 0x38) = lVar2;
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_2 + 0x40) = 0;
  lVar3 = *(long *)(param_2 + 0x50);
  *(long *)(param_1 + 0x50) = lVar3;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x40);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x48;
    *(long *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  func_0x0001074febf0(param_2);
  func_0x0001074f9d0c();
  func_0x0001074fea00();
  return unaff_x19;
}



/* Entry: 10751923c; end: 10751924f;  */

long FUN_10751923c(undefined8 param_1,long param_2)

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



/* Entry: 107519250; end: 1075192df;  */

void FUN_107519250(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  
  func_0x00010751948c();
  lVar2 = *unaff_x19;
  if ((*(long *)(lVar2 + -8) == 0) && (in_ZR = *(char *)(lVar2 + param_1) == -2, !(bool)in_ZR)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    in_ZR = unaff_x19[2] == 9;
    if ((bVar1) && (func_0x0001075195a4(), bVar1)) {
      func_0x00010ae6c914();
    }
    else {
      FUN_1075192e0();
    }
    func_0x000107519578();
    lVar2 = *unaff_x19;
  }
  func_0x0001075193b4(lVar2);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107519590();
  FUN_107324d80();
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      func_0x000104c2fe38(unaff_x20);
      func_0x000107519410();
      func_0x000100061de0();
      func_0x00010751945c();
      FUN_10751935c();
    }
    unaff_x20 = unaff_x20 + 0x48;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1075192e0; end: 10751935b;  */

void FUN_1075192e0(void)

{
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x000107519590();
  FUN_107324d80();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x000104c2fe38(unaff_x20);
      func_0x000107519410();
      func_0x000100061de0();
      func_0x00010751945c();
      FUN_10751935c();
    }
    unaff_x20 = unaff_x20 + 0x48;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10751935c; end: 107519387;  */

void FUN_10751935c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  func_0x000104c318bc();
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 107519388; end: 107519613;  */

long FUN_107519388(undefined8 param_1,long param_2)

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



/* Entry: 107519614; end: 107519a33;  */

void FUN_107519614(long param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  byte bVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 extraout_x8;
  ulong uVar16;
  ulong extraout_x8_00;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint6 uVar26;
  undefined8 uVar27;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined *puStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_98;
  undefined8 uStack_90;
  
  puVar15 = param_3;
  func_0x000107520138();
  puStack_130 = &UNK_10e52b660;
  lStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uVar16 = param_2;
  uStack_90 = extraout_x8;
  FUN_1074f1818();
  uStack_150 = param_2;
  uStack_148 = uVar16;
  while (uStack_150 != 0) {
    lVar19 = *(long *)(uStack_148 + 0x38);
    func_0x000104c2fe00(&puStack_110);
    lStack_d8 = lVar19;
    func_0x000104c318bc(&uStack_d0,&puStack_110);
    lStack_98 = lStack_d8;
    Hint_Prefetch(puStack_130,0,2,0);
    puVar8 = &uStack_d0;
    func_0x000104c2fe38(puStack_130);
    uVar17 = uStack_120;
    puVar14 = puStack_130;
    lVar19 = 0;
    uVar16 = (ulong)puStack_130 >> 0xc ^ (ulong)puVar8 >> 7;
    bVar4 = (byte)puVar8;
    uVar26 = CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar16 = uVar16 & uVar17;
      uVar27 = *(undefined8 *)(puVar14 + uVar16);
      for (uVar20 = CONCAT17(-((byte)((ulong)uVar27 >> 0x38) == (bVar4 & 0x7f)),
                             CONCAT16(-((byte)((ulong)uVar27 >> 0x30) == (bVar4 & 0x7f)),
                                      CONCAT15(-((char)((ulong)uVar27 >> 0x28) ==
                                                (char)(uVar26 >> 0x28)),
                                               CONCAT14(-((char)((ulong)uVar27 >> 0x20) ==
                                                         (char)(uVar26 >> 0x20)),
                                                        CONCAT13(-((char)((ulong)uVar27 >> 0x18) ==
                                                                  (char)(uVar26 >> 0x18)),
                                                                 CONCAT12(-((char)((ulong)uVar27 >>
                                                                                  0x10) ==
                                                                           (char)(uVar26 >> 0x10)),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar27 >> 8) == (char)(uVar26 >> 8)),
                                                  -((char)uVar27 == (char)uVar26)))))))) &
                    0x8080808080808080; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
        uVar9 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = lStack_128 +
                (uVar16 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar17) * 0x40;
        func_0x000104c32db4(uVar9,&uStack_d0);
        if ((uVar9 & 1) != 0) goto LAB_10751974c;
      }
      func_0x0001075205bc();
      if ((extraout_x8_00 & 1) != 0) break;
      lVar19 = lVar19 + 8;
      uVar16 = lVar19 + uVar16;
    }
    ppuVar10 = &puStack_130;
    func_0x00010751c8b0(ppuVar10,puVar8);
    lVar19 = lStack_128 + (long)ppuVar10 * 0x40;
    func_0x000104c2fe00(lVar19,&uStack_d0);
    *(long *)(lVar19 + 0x38) = lStack_98;
LAB_10751974c:
    func_0x0001075205e8();
    func_0x000104c2f714(&puStack_110);
    FUN_1074f1838(&uStack_150);
  }
  uStack_150 = 0;
  puStack_110 = &UNK_10e52b660;
  lStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  plVar21 = (long *)*param_3;
  plVar3 = (long *)param_3[1];
  do {
    if (plVar21 == plVar3) {
      plVar21 = (long *)(param_1 + 0x30);
      lVar22 = *(long *)(param_1 + 0x38);
      for (lVar19 = *plVar21; uVar7 = lVar19 == lVar22, !(bool)uVar7; lVar19 = lVar19 + 0x40) {
        ppuVar10 = &puStack_110;
        FUN_1073c13d4(ppuVar10,lVar19);
        if (ppuVar10 == (undefined **)0x0) {
          lVar11 = param_1 + 0x88;
          lVar13 = lVar19;
          FUN_10751c1e4(lVar11,lVar19);
          if (lVar11 != 0) {
            FUN_1074f99e8(lVar13);
            puVar15 = (undefined8 *)0x78;
            func_0x00010ae6cb48(param_1 + 0x88,lVar11);
          }
        }
      }
      FUN_10751ca78(&uStack_d0,&puStack_130);
      uVar25 = *(undefined8 *)(param_1 + 0x18);
      uVar24 = *(undefined8 *)(param_1 + 0x10);
      uVar23 = *(undefined8 *)(param_1 + 0x28);
      uVar27 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = uStack_c8;
      *(undefined8 *)(param_1 + 0x10) = uStack_d0;
      *(undefined8 *)(param_1 + 0x28) = uStack_b8;
      *(undefined8 *)(param_1 + 0x20) = uStack_c0;
      uStack_d0 = uVar24;
      uStack_c8 = uVar25;
      uStack_c0 = uVar27;
      uStack_b8 = uVar23;
      FUN_1074f9bc0(&uStack_d0);
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_1074f9b80(plVar21);
        __ZdlPv(*plVar21);
        *plVar21 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      *(ulong *)(param_1 + 0x38) = uStack_148;
      *(ulong *)(param_1 + 0x30) = uStack_150;
      *(ulong *)(param_1 + 0x40) = uStack_140;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_150 = 0;
      FUN_1074f9b30(&uStack_150);
      FUN_1074f7554(&puStack_110);
      ppuVar10 = &puStack_130;
      FUN_1074f9bc0();
      func_0x000107520114(uStack_90);
      if (!(bool)uVar7) {
        ___stack_chk_fail();
        ppuVar12 = &puStack_130;
        FUN_1074f9bc0(ppuVar12);
        func_0x000107520208();
        FUN_10751ca98(ppuVar12 + 9);
        func_0x0001075202d0(ppuVar12 + 0xc,puVar15);
        func_0x00010751fab4();
        puVar14 = *ppuVar10;
        *ppuVar10 = (undefined *)0x0;
        func_0x0001072cdd38(plVar21,puVar14);
        puVar14 = ppuVar10[2];
        puVar18 = ppuVar10[1];
        *(undefined8 *)(param_1 + 0x40) = puVar14;
        *(undefined **)(param_1 + 0x38) = puVar18;
        ppuVar10[1] = (undefined *)0x0;
        puVar18 = ppuVar10[3];
        *(undefined **)(param_1 + 0x48) = puVar18;
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(ppuVar10 + 4);
        if (puVar18 != (undefined *)0x0) {
          uVar16 = *(ulong *)(puVar14 + 8);
          uVar17 = *(ulong *)(param_1 + 0x38);
          if ((uVar17 & uVar17 - 1) == 0) {
            uVar16 = uVar17 - 1 & uVar16;
          }
          else if (uVar17 <= uVar16) {
            uVar20 = 0;
            if (uVar17 != 0) {
              uVar20 = uVar16 / uVar17;
            }
            uVar16 = uVar16 - uVar20 * uVar17;
          }
          *(undefined8 **)(*plVar21 + uVar16 * 8) = (undefined8 *)(param_1 + 0x40);
          ppuVar10[2] = (undefined *)0x0;
          ppuVar10[3] = (undefined *)0x0;
        }
        return;
      }
      return;
    }
    lVar19 = *plVar21;
    lVar22 = *(long *)(lVar19 + 0x18);
    ppuVar10 = &puStack_110;
    uVar16 = lVar22 + 8;
    FUN_1074fbeac();
    if ((uVar16 & 1) != 0) {
      lVar11 = lStack_108 + (long)ppuVar10 * 0x40;
      func_0x000104c2fe00(lVar11,lVar22 + 8);
      *(undefined8 *)(lVar11 + 0x38) = 0;
    }
    *(long *)(lStack_108 + (long)ppuVar10 * 0x40 + 0x38) = lVar19;
    func_0x000104c2fe00(&uStack_d0,*(long *)(lVar19 + 0x18) + 8);
    lStack_98 = lVar19;
    if (uStack_148 < uStack_140) {
      FUN_10751ca4c(uStack_148,&uStack_d0);
      uVar16 = uStack_148 + 0x40;
    }
    else {
      lVar19 = uStack_148 - uStack_150;
      uVar16 = (lVar19 >> 6) + 1;
      if (uVar16 >> 0x3a != 0) {
        FUN_10751ca6c();
LAB_1075199d4:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1075199d8);
        (*pcVar6)();
      }
      uVar17 = (long)(uStack_140 - uStack_150) >> 5;
      if (uVar17 <= uVar16) {
        uVar17 = uVar16;
      }
      if (0x7fffffffffffffbf < uStack_140 - uStack_150) {
        uVar17 = 0x3ffffffffffffff;
      }
      if (uVar17 == 0) {
        lVar22 = 0;
      }
      else {
        if (uVar17 >> 0x3a != 0) {
          func_0x000104bd35f4();
          goto LAB_1075199d4;
        }
        lVar22 = uVar17 << 6;
        __Znwm();
      }
      lVar19 = lVar22 + lVar19;
      FUN_10751ca4c(lVar19,&uStack_d0);
      uVar5 = uStack_148;
      uVar9 = uStack_150;
      uVar1 = lVar19 + (uStack_150 - uStack_148);
      uVar20 = uVar1;
      for (uVar16 = uStack_150; uVar16 != uVar5; uVar16 = uVar16 + 0x40) {
        FUN_10751ca4c(uVar20,uVar16);
        uVar20 = uVar20 + 0x40;
      }
      for (; uVar9 != uVar5; uVar9 = uVar9 + 0x40) {
        func_0x000104c2f714(uVar9);
      }
      uVar16 = lVar19 + 0x40;
      uStack_140 = lVar22 + uVar17 * 0x40;
      bVar2 = uStack_150 != 0;
      uStack_150 = uVar1;
      if (bVar2) {
        uStack_148 = uVar16;
        __ZdlPv();
      }
    }
    uStack_148 = uVar16;
    func_0x0001075205e8();
    plVar21 = plVar21 + 1;
  } while( true );
}



/* Entry: 107519a34; end: 107519a63;  */

void FUN_107519a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  FUN_10751ca98(param_1 + 0x48);
  func_0x0001075202d0(param_1 + 0x60,param_3);
  func_0x00010751fab4();
  uVar2 = *unaff_x19;
  *unaff_x19 = 0;
  func_0x0001072cdd38(unaff_x20,uVar2);
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
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar1 * uVar6;
    }
    *(long **)(*unaff_x20 + uVar4 * 8) = unaff_x20 + 2;
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 107519a64; end: 10751a16f;  */

undefined1  [16] FUN_107519a64(ulong ******param_1,ulong ******param_2,undefined8 param_3)

{
  ulong *****pppppuVar1;
  ulong ***pppuVar2;
  ulong *****pppppuVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  ulong ******ppppppuVar10;
  ulong ******ppppppuVar11;
  ulong ****ppppuVar12;
  ulong *****pppppuVar13;
  ulong ******ppppppuVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 extraout_x8;
  ulong ******ppppppuVar17;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  char extraout_w9;
  ulong *****pppppuVar18;
  ulong ***pppuVar19;
  ulong uVar20;
  ulong uVar21;
  ulong ****ppppuVar22;
  ulong uVar23;
  long lVar24;
  ulong *****pppppuVar25;
  ulong ******ppppppuVar26;
  ulong uVar27;
  ulong uVar28;
  ulong ******ppppppuVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  ulong *****pppppuStack_360;
  ulong *****pppppuStack_358;
  undefined1 *puStack_350;
  code *pcStack_348;
  undefined **ppuStack_340;
  undefined8 uStack_338;
  ulong *****pppppuStack_330;
  ulong uStack_328;
  long lStack_320;
  long lStack_318;
  ulong *****pppppuStack_310;
  ulong *****pppppuStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  char cStack_2e8;
  ulong ****appppuStack_2e0 [4];
  undefined **ppuStack_2c0;
  ulong *****pppppuStack_2b8;
  undefined ***pppuStack_2a8;
  ulong ****ppppuStack_2a0;
  ulong *****pppppuStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined4 uStack_258;
  undefined1 uStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong ****appppuStack_178 [7];
  ulong ****appppuStack_140 [7];
  ulong *****apppppuStack_108 [7];
  ulong ****ppppuStack_d0;
  ulong *****pppppuStack_c8;
  undefined8 uStack_90;
  
  ppppppuVar10 = param_1;
  uStack_338 = param_3;
  func_0x000107520138();
  pppppuVar18 = *param_2;
  ppppppuVar14 = (ulong ******)param_2[1];
  pppppuStack_308 = (ulong *****)param_2;
  uStack_90 = extraout_x8;
  FUN_10751a170();
  pppppuStack_298 = (ulong *****)ppppppuVar14;
  while ((ppppuStack_2a0 = (ulong ****)pppppuVar18, pppppuVar18 != (ulong *****)0x0 &&
         (*(float *)(pppppuStack_298 + 0x1a) <= 0.0))) {
    FUN_10751a198(&ppppuStack_2a0);
    pppppuVar18 = (ulong *****)ppppuStack_2a0;
  }
  ppppppuVar26 = param_1 + 0x20017;
  FUN_10751cb04();
  pppppuStack_310 = (ulong *****)param_1;
  if (pppppuVar18 != (ulong *****)0x0) {
    ppppppuVar10[0x20016] = (ulong *****)(param_1 + 0x16);
    uVar16 = 0x19;
    if ((ulong *****)pppppuStack_308[4] != (ulong *****)0x0) {
      uVar16 = SUB84(pppppuStack_308[4],0);
    }
    func_0x00010002b838(&ppppuStack_d0,&UNK_10f416181);
    ppppppuVar26 = (ulong ******)pppppuStack_310;
    ppuStack_2c0 = &PTR_FUN_1109b92f0;
    pppppuStack_2b8 = pppppuStack_310;
    pppuStack_2a8 = &ppuStack_2c0;
    uVar31 = NEON_ucvtf(*(undefined4 *)((long)pppppuStack_310 + 0xc));
    uVar30 = NEON_ucvtf(*(undefined4 *)(pppppuStack_310 + 1));
    apppppuStack_108[0] = (ulong *****)(param_1 + 0x16);
    FUN_1074e9898(uVar30,uVar31,&ppppuStack_2a0,&ppppuStack_d0,uVar16,apppppuStack_108,0x200,
                  &ppuStack_2c0);
    FUN_10751cb04(ppppppuVar26 + 0x20017);
    FUN_1074e9d24(ppppppuVar26 + 0x20017,&ppppuStack_2a0);
    *(undefined1 *)(ppppppuVar10 + 0x2003b) = 1;
    FUN_1074e9e00(&ppppuStack_2a0);
    FUN_1074f8f90(&ppuStack_2c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_d0);
    pppppuStack_298 = (ulong *****)0x0;
    ppppuStack_2a0 = (ulong ****)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    ppuStack_280 = (undefined **)CONCAT44(ppuStack_280._4_4_,0x3f800000);
    pppppuVar18 = (ulong *****)*pppppuStack_308;
    ppppppuVar14 = (ulong ******)pppppuStack_308[1];
    FUN_10751a170();
    ppppuStack_d0 = (ulong ****)pppppuVar18;
    pppppuStack_c8 = (ulong *****)ppppppuVar14;
    while ((ulong *****)ppppuStack_d0 != (ulong *****)0x0) {
      ppppppuVar14 = (ulong ******)pppppuStack_c8[0x17];
      func_0x000107270b94(&ppppuStack_2a0,ppppppuVar14,0);
      FUN_10751a198(&ppppuStack_d0);
    }
    ppppuStack_d0 = (ulong ****)0x0;
    for (uVar23 = 0; uVar23 < (ulong)(((long)ppppppuVar26[10] - (long)ppppppuVar26[9]) / 0x48);
        uVar23 = uVar23 + 1) {
      ppppppuVar10 = (ulong ******)(ppppppuVar26[9] + uVar23 * 9);
      uVar28 = 0;
      ppppppuVar14 = ppppppuVar10;
      func_0x0001072ee150();
      if ((uVar28 & 1) == 0) {
        pppppuVar18 = ppppppuVar10[7] + 2;
        do {
          pppppuVar18 = (ulong *****)*pppppuVar18;
          if (pppppuVar18 == (ulong *****)0x0) goto LAB_107519ce4;
          uVar28 = 0;
          ppppppuVar14 = (ulong ******)(pppppuVar18 + 2);
          func_0x0001072ee150();
        } while ((uVar28 & 1) == 0);
      }
      pppppuVar18 = pppppuStack_310;
      ppppppuVar26 = (ulong ******)pppppuStack_310[0xd];
      if ((ppppppuVar26 != (ulong ******)0x0) &&
         ((ulong *****)pppppuStack_310[0xf] != (ulong *****)0x0)) {
        ppppppuVar11 = (ulong ******)(pppppuStack_310 + 0xf);
        ppppppuVar14 = ppppppuVar10;
        func_0x00010726364c();
        uVar28 = (long)ppppppuVar26 - 1;
        if (((ulong)ppppppuVar26 & uVar28) == 0) {
          ppppppuVar29 = (ulong ******)((ulong)ppppppuVar11 & uVar28);
        }
        else {
          ppppppuVar29 = ppppppuVar11;
          if (ppppppuVar26 <= ppppppuVar11) {
            uVar20 = 0;
            if (ppppppuVar26 != (ulong ******)0x0) {
              uVar20 = (ulong)ppppppuVar11 / (ulong)ppppppuVar26;
            }
            ppppppuVar29 = (ulong ******)((long)ppppppuVar11 - uVar20 * (long)ppppppuVar26);
          }
        }
        ppppuVar22 = (ulong ****)pppppuVar18[0xc][(long)ppppppuVar29];
        if (ppppuVar22 != (ulong ****)0x0) {
LAB_107519c94:
          while (ppppuVar22 = (ulong ****)*ppppuVar22, ppppuVar22 != (ulong ****)0x0) {
            ppppppuVar17 = (ulong ******)ppppuVar22[1];
            if (ppppppuVar17 != ppppppuVar11) goto LAB_107519cbc;
            ppppuVar12 = ppppuVar22 + 2;
            ppppppuVar14 = ppppppuVar10;
            func_0x000104c32db4();
            if (((ulong)ppppuVar12 & 1) != 0) {
              pppppuVar18 = (ulong *****)pppppuStack_310[6];
              pppppuVar1 = (ulong *****)pppppuStack_310[7];
              pppuVar2 = ppppuVar22[10];
              for (pppuVar19 = ppppuVar22[9]; pppuVar19 != pppuVar2; pppuVar19 = pppuVar19 + 4) {
                pppppuStack_c8 =
                     (ulong *****)CONCAT44((float)(double)pppuVar19[3],(float)(double)pppuVar19[2]);
                ppppuStack_d0 =
                     (ulong ****)CONCAT44((float)(double)pppuVar19[1],(float)(double)*pppuVar19);
                ppppppuVar14 = apppppuStack_108;
                apppppuStack_108[0] =
                     (ulong *****)(uVar23 + ((long)pppppuVar1 - (long)pppppuVar18 >> 6));
                FUN_1074e9e78(pppppuStack_310 + 0x20017,ppppppuVar14,&ppppuStack_d0);
              }
              break;
            }
          }
        }
      }
LAB_107519ce4:
      ppppppuVar26 = (ulong ******)pppppuStack_310;
    }
    ppppppuVar26 = (ulong ******)&ppppuStack_2a0;
    func_0x00010726ea70();
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  lVar15 = 0;
  uVar23 = 0;
  lVar24 = 0;
  ppuStack_340 = &PTR_DAT_110996720;
  ppppppuVar10 = (ulong ******)pppppuStack_310;
  pppppuStack_330 = (ulong *****)ppppppuVar26;
  do {
    pppppuVar18 = pppppuStack_330;
    uVar28 = (long)ppppppuVar10[7] - (long)ppppppuVar10[6] >> 6;
    uVar8 = uVar23 == uVar28;
    if (uVar28 <= uVar23) {
      if (lVar15 != 0) {
        func_0x0001075202f0(0x139);
        ppppppuVar26 = (ulong ******)(pppppuVar18 + 1);
        ppppppuVar14 = (ulong ******)&ppppuStack_2a0;
        FUN_10751cb28();
        func_0x000107520360();
      }
      if (lVar24 != 0) {
        func_0x0001075202f0(0x13d);
        ppppppuVar26 = (ulong ******)(pppppuVar18 + 1);
        ppppppuVar14 = (ulong ******)&ppppuStack_2a0;
        FUN_10751cb28(ppppppuVar26,ppppppuVar14,lVar24);
        func_0x000107520360();
      }
      func_0x000107520114(uStack_90);
      if ((bool)uVar8) {
        auVar33._8_8_ = ppppppuVar14;
        auVar33._0_8_ = ppppppuVar26;
        return auVar33;
      }
      ___stack_chk_fail();
      func_0x000107520360();
      func_0x000107520208();
      pcStack_348 = FUN_10751a170;
      pppppuStack_360 = (ulong *****)ppppppuVar26;
      pppppuStack_358 = (ulong *****)ppppppuVar14;
      puStack_350 = &stack0xfffffffffffffff0;
      func_0x00010751fc64(&pppppuStack_360);
      auVar4._8_8_ = pppppuStack_358;
      auVar4._0_8_ = pppppuStack_360;
      return auVar4;
    }
    ppppuVar22 = ppppppuVar10[6][(uVar28 + ~uVar23) * 8 + 7];
    pppppuVar18 = (ulong *****)(ppppuVar22[3] + 1);
    Hint_Prefetch(*pppppuStack_308,0,2,0);
    uStack_328 = uVar23;
    lStack_320 = lVar15;
    lStack_318 = lVar24;
    func_0x000104c2fe38(*pppppuStack_308,pppppuVar18);
    lVar15 = 0;
    pppppuVar1 = (ulong *****)pppppuStack_308[1];
    pppppuVar3 = (ulong *****)pppppuStack_308[2];
    pppppuVar25 = (ulong *****)*pppppuStack_308;
    func_0x0001075209ec((ulong)pppppuVar25 >> 0xc);
    uVar20 = extraout_x8_00;
    while( true ) {
      uVar20 = uVar20 & (ulong)pppppuVar3;
      uVar32 = *(undefined8 *)((long)pppppuVar25 + uVar20);
      for (uVar27 = CONCAT17(-((char)((ulong)uVar32 >> 0x38) == extraout_w9),
                             CONCAT16(-((char)((ulong)uVar32 >> 0x30) == extraout_w9),
                                      CONCAT15(-((char)((ulong)uVar32 >> 0x28) == extraout_w9),
                                               CONCAT14(-((char)((ulong)uVar32 >> 0x20) ==
                                                         extraout_w9),
                                                        CONCAT13(-((char)((ulong)uVar32 >> 0x18) ==
                                                                  extraout_w9),
                                                                 CONCAT12(-((char)((ulong)uVar32 >>
                                                                                  0x10) ==
                                                                           extraout_w9),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar32 >> 8) == extraout_w9),
                                                  -((char)uVar32 == extraout_w9)))))))) &
                    0x8080808080808080; uVar27 != 0; uVar27 = uVar27 - 1 & uVar27) {
        uVar21 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar20 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & (ulong)pppppuVar3
        ;
        pppppuVar13 = &ppppuStack_2a0;
        ppppuStack_2a0 = (ulong ****)pppppuVar18;
        pppppuStack_298 = pppppuStack_308;
        FUN_1074fb0a8(pppppuVar13,pppppuVar1 + uVar21 * 0x1b);
        if (((ulong)pppppuVar13 & 1) != 0) {
          pppppuVar18 = (ulong *****)(pppppuStack_308[1] + uVar21 * 0x1b + 7);
          goto LAB_107519e58;
        }
      }
      func_0x0001075205bc();
      if ((extraout_x8_01 & 1) != 0) break;
      lVar15 = lVar15 + 8;
      uVar20 = lVar15 + uVar20;
    }
    pppppuVar18 = (ulong *****)0x1136cb9d0;
    if ((bRam00000001136cb968 & 1) == 0) {
      iVar9 = 0x136cb968;
      ___cxa_guard_acquire();
      if (iVar9 != 0) {
        uRam00000001136cb9d8 = 0;
        uRam00000001136cb9e0 = 0;
        pppppuVar18 = (ulong *****)0x1136cb9d0;
        uRam00000001136cb9d0 = 0;
        puRam00000001136cb9e8 = &UNK_10e52b660;
        uRam00000001136cb9f8 = 0;
        uRam00000001136cb9f0 = 0;
        uRam00000001136cba08 = 0;
        uRam00000001136cba00 = 0;
        uRam00000001136cba18 = 0;
        uRam00000001136cba10 = 0;
        uRam00000001136cba28 = 0;
        uRam00000001136cba20 = 0;
        uRam00000001136cba38 = 0;
        uRam00000001136cba30 = 0;
        uRam00000001136cba48 = 0;
        uRam00000001136cba40 = 0;
        uRam00000001136cba58 = 0;
        uRam00000001136cba50 = 0;
        uRam00000001136cba60 = 0x3f800000;
        uRam00000001136cba68 = 0;
        ___cxa_guard_release();
      }
    }
LAB_107519e58:
    FUN_10751fcbc(appppuStack_2e0,uStack_338);
    ppppppuVar10 = (ulong ******)pppppuStack_310;
    ppppppuVar14 = (ulong ******)pppppuStack_310;
    FUN_10751a1cc(&lStack_300,pppppuStack_310,ppppuVar22,uVar28 + ~uVar23,pppppuVar18,
                  appppuStack_2e0);
    ppppppuVar26 = (ulong ******)appppuStack_2e0;
    FUN_1074fb2f0();
    cVar7 = cStack_2e8;
    lVar6 = lStack_2f0;
    lVar5 = lStack_2f8;
    lVar15 = lStack_300;
    pppppuVar18 = pppppuStack_330;
    lVar24 = lStack_318;
    if (lStack_300 != 0) {
      lVar24 = lStack_318 + 1;
      func_0x000107520160();
      func_0x000107520530(&ppppuStack_d0);
      ppppppuVar14 = (ulong ******)&ppppuStack_2a0;
      func_0x000107520210();
      FUN_10751cb28(pppppuVar18 + 1,ppppppuVar14,lVar15);
      ppppppuVar26 = (ulong ******)&ppppuStack_d0;
      func_0x000104c2f714();
      func_0x000107520360();
    }
    if (lVar5 != 0) {
      func_0x000107520160();
      func_0x000107520530(apppppuStack_108);
      ppppppuVar14 = (ulong ******)&ppppuStack_2a0;
      func_0x000107520210();
      FUN_10751cb28(pppppuVar18 + 1,ppppppuVar14,lVar5);
      ppppppuVar26 = apppppuStack_108;
      func_0x000104c2f714();
      func_0x000107520360();
    }
    if (lVar6 != 0) {
      func_0x000107520160();
      func_0x000107520530(appppuStack_140);
      ppppppuVar14 = (ulong ******)&ppppuStack_2a0;
      func_0x000107520210();
      FUN_10751cb28(pppppuVar18 + 1,ppppppuVar14,lVar6);
      ppppppuVar26 = (ulong ******)appppuStack_140;
      func_0x000104c2f714();
      func_0x000107520360();
    }
    if (cVar7 != '\0') {
      ppppuStack_2a0 = (ulong ****)CONCAT44(ppppuStack_2a0._4_4_,0x13c);
      uStack_288 = uStack_288 & 0xffffffff00000000;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_278 = 0;
      ppuStack_280 = ppuStack_340;
      uStack_260 = 0x13c;
      uStack_258 = 1;
      uStack_254 = 1;
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_250 = 0;
      func_0x000107520530(appppuStack_178);
      ppppppuVar14 = (ulong ******)&ppppuStack_2a0;
      func_0x000107520210();
      FUN_10751cb28(pppppuVar18 + 1,ppppppuVar14,1);
      ppppppuVar26 = (ulong ******)appppuStack_178;
      func_0x000104c2f714();
      func_0x000107520360();
    }
    lVar15 = lVar15 + lStack_320;
    uVar23 = uStack_328 + 1;
  } while( true );
LAB_107519cbc:
  if (((ulong)ppppppuVar26 & uVar28) == 0) {
    ppppppuVar17 = (ulong ******)((ulong)ppppppuVar17 & uVar28);
  }
  else if (ppppppuVar26 <= ppppppuVar17) {
    uVar20 = 0;
    if (ppppppuVar26 != (ulong ******)0x0) {
      uVar20 = (ulong)ppppppuVar17 / (ulong)ppppppuVar26;
    }
    ppppppuVar17 = (ulong ******)((long)ppppppuVar17 - uVar20 * (long)ppppppuVar26);
  }
  if (ppppppuVar17 != ppppppuVar29) goto LAB_107519ce4;
  goto LAB_107519c94;
}



/* Entry: 10751a170; end: 10751a197;  */

undefined1  [16] FUN_10751a170(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010751fc64(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10751a198; end: 10751a1cb;  */

long * FUN_10751a198(long *param_1)

{
  param_1[1] = param_1[1] + 0xd8;
  *param_1 = *param_1 + 1;
  func_0x00010751fc64();
  return param_1;
}



/* Entry: 10751a1cc; end: 10751c1e3;  */

ulong * FUN_10751a1cc(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                     long *param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  undefined1 in_ZR;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long **pplVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  float *pfVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  ulong *puVar19;
  ulong *extraout_x8_04;
  long extraout_x8_05;
  ulong *puVar20;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  long *plVar21;
  long extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  code *extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  code *extraout_x8_21;
  code *extraout_x8_22;
  code *extraout_x8_23;
  code *extraout_x8_24;
  long extraout_x8_25;
  undefined8 extraout_x8_26;
  ulong extraout_x8_27;
  ulong extraout_x8_28;
  char extraout_w9;
  char extraout_w9_00;
  char extraout_w9_01;
  ulong *extraout_x9;
  ulong extraout_x9_00;
  ulong *puVar22;
  int extraout_w10;
  int extraout_w10_00;
  long *extraout_x10;
  ulong *extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long *plVar23;
  ulong extraout_x12;
  ulong extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x14;
  long lVar24;
  long *plVar25;
  long *plVar26;
  ulong *puVar27;
  undefined1 uVar28;
  long *plVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  undefined8 *puVar33;
  long lVar34;
  ulong uVar35;
  undefined8 *puVar36;
  float *pfVar37;
  ulong uVar38;
  long *plVar39;
  undefined8 *puVar40;
  ulong uVar41;
  uint uVar42;
  long lVar43;
  undefined8 **ppuVar44;
  float *pfVar45;
  ulong uVar46;
  float fVar47;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined1 auVar48 [16];
  undefined8 extraout_var_02;
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  uint6 uVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  long lStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  char cStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  char cStack_3c8;
  byte bStack_3c7;
  undefined8 **ppuStack_3c0;
  long *plStack_3b8;
  undefined8 *puStack_3b0;
  long *plStack_3a8;
  ulong **ppuStack_3a0;
  undefined8 *puStack_398;
  undefined8 auStack_390 [4];
  undefined4 uStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  long lStack_350;
  ulong *puStack_348;
  long *plStack_340;
  ulong uStack_338;
  float fStack_330;
  undefined8 *puStack_328;
  long lStack_320;
  undefined8 uStack_318;
  ulong *puStack_310;
  long lStack_308;
  long *plStack_300;
  long *plStack_2f8;
  ulong uStack_2f0;
  long lStack_2e8;
  uint uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *apuStack_2c0 [4];
  undefined8 *puStack_2a0;
  ulong auStack_288 [7];
  ulong uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  ulong uStack_238;
  long lStack_230;
  uint uStack_228;
  long *plStack_210;
  long *plStack_208;
  char cStack_200;
  undefined4 uStack_1ff;
  undefined3 uStack_1fb;
  long lStack_1f8;
  undefined1 auStack_1d8 [8];
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  ulong *puStack_1a8;
  byte bStack_1a0;
  undefined1 uStack_19f;
  uint uStack_198;
  long lStack_170;
  double dStack_168;
  double adStack_160 [6];
  undefined1 uStack_130;
  undefined8 uStack_120;
  long **pplStack_118;
  undefined8 *puStack_110;
  ulong *puStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  
  puVar16 = param_2;
  lVar24 = param_3;
  func_0x000107520138();
  lVar43 = *(long *)(lVar24 + 0x18);
  Hint_Prefetch(puVar16[2],0,2,0);
  puVar22 = (ulong *)(lVar43 + 0x40);
  puVar33 = puVar16;
  lStack_308 = lVar24;
  uStack_a8 = extraout_x8;
  func_0x000104c2fe38(puVar16[2]);
  lVar24 = 0;
  puVar27 = (ulong *)param_2[2];
  lVar15 = param_2[3];
  puVar40 = (undefined8 *)param_2[4];
  func_0x0001075209ec((ulong)puVar27 >> 0xc);
  uVar32 = extraout_x8_00;
  while( true ) {
    uVar32 = uVar32 & (ulong)puVar40;
    uVar53 = *(undefined8 *)((long)puVar27 + uVar32);
    for (uVar35 = CONCAT17(-((char)((ulong)uVar53 >> 0x38) == extraout_w9),
                           CONCAT16(-((char)((ulong)uVar53 >> 0x30) == extraout_w9),
                                    CONCAT15(-((char)((ulong)uVar53 >> 0x28) == extraout_w9),
                                             CONCAT14(-((char)((ulong)uVar53 >> 0x20) == extraout_w9
                                                       ),CONCAT13(-((char)((ulong)uVar53 >> 0x18) ==
                                                                   extraout_w9),
                                                                  CONCAT12(-((char)((ulong)uVar53 >>
                                                                                   0x10) ==
                                                                            extraout_w9),
                                                                           CONCAT11(-((char)((ulong)
                                                  uVar53 >> 8) == extraout_w9),
                                                  -((char)uVar53 == extraout_w9)))))))) &
                  0x8080808080808080; uVar35 != 0; uVar35 = uVar35 - 1 & uVar35) {
      uVar38 = (uVar35 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar35 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
      uVar38 = uVar32 + ((ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3) & (ulong)puVar40;
      puVar22 = (ulong *)(lVar15 + uVar38 * 0x40);
      puVar33 = (undefined8 *)(lVar43 + 0x40);
      func_0x000104c32db4(puVar22,puVar33);
      if (((ulong)puVar22 & 1) != 0) {
        lVar24 = param_2[3];
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_318 = *(undefined8 *)(lVar24 + uVar38 * 0x40 + 0x38);
        puStack_310 = puVar22;
        func_0x000104c2fe00(auStack_288,*(long *)(param_3 + 0x18) + 0x78);
        puVar33 = param_2 + 0x11;
        lVar24 = lVar43 + 8;
        FUN_10751c1e4();
        puStack_328 = puVar33;
        lStack_320 = lVar24;
        if (puVar33 != (undefined8 *)0x0) goto LAB_10751a438;
        uStack_120 = (long *)((ulong)uStack_120 & 0xffffffffffffff00);
        puStack_110 = (undefined8 *)((ulong)puStack_110 & 0xffffffffffffff00);
        uStack_100 = 0;
        puStack_108 = (ulong *)0x0;
        uStack_f0 = 0;
        uStack_f8 = 0;
        uStack_e8 = 0x3f800000;
        func_0x000104c2fe00(&plStack_210,lVar43 + 8);
        FUN_10751cb98(auStack_1d8,&uStack_120);
        Hint_Prefetch(param_2[0x11],0,2,0);
        pplVar9 = &plStack_210;
        func_0x000104c2fe38(param_2[0x11]);
        lVar24 = 0;
        puVar27 = (ulong *)param_2[0x11];
        uVar35 = param_2[0x13];
        uVar32 = (ulong)puVar27 >> 0xc ^ (ulong)pplVar9 >> 7;
        bVar4 = (byte)pplVar9;
        uVar52 = CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4)))
                                        )) & 0x7f7f7f7f7f7f;
        goto LAB_10751a370;
      }
    }
    func_0x0001075205bc();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar24 = lVar24 + 8;
    uVar32 = lVar24 + uVar32;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  goto LAB_10751be38;
LAB_10751a370:
  uVar32 = uVar32 & uVar35;
  uVar53 = *(undefined8 *)((long)puVar27 + uVar32);
  for (uVar38 = CONCAT17(-((byte)((ulong)uVar53 >> 0x38) == (bVar4 & 0x7f)),
                         CONCAT16(-((byte)((ulong)uVar53 >> 0x30) == (bVar4 & 0x7f)),
                                  CONCAT15(-((char)((ulong)uVar53 >> 0x28) == (char)(uVar52 >> 0x28)
                                            ),CONCAT14(-((char)((ulong)uVar53 >> 0x20) ==
                                                        (char)(uVar52 >> 0x20)),
                                                       CONCAT13(-((char)((ulong)uVar53 >> 0x18) ==
                                                                 (char)(uVar52 >> 0x18)),
                                                                CONCAT12(-((char)((ulong)uVar53 >>
                                                                                 0x10) ==
                                                                          (char)(uVar52 >> 0x10)),
                                                                         CONCAT11(-((char)((ulong)
                                                  uVar53 >> 8) == (char)(uVar52 >> 8)),
                                                  -((char)uVar53 == (char)uVar52)))))))) &
                0x8080808080808080; uVar38 != 0; uVar38 = uVar38 - 1 & uVar38) {
    uVar30 = (uVar38 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar38 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
    puVar33 = (undefined8 *)
              (uVar32 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3) & uVar35);
    uVar30 = param_2[0x12] + (long)puVar33 * 0x78;
    func_0x000104c32db4(uVar30,&plStack_210);
    if ((uVar30 & 1) != 0) goto LAB_10751a410;
  }
  func_0x0001075205bc();
  if ((extraout_x8_02 & 1) != 0) goto LAB_10751a3e4;
  lVar24 = lVar24 + 8;
  uVar32 = lVar24 + uVar32;
  goto LAB_10751a370;
LAB_10751abc4:
  if (((ulong)plVar39 & uVar32) == 0) {
    plVar21 = (long *)((ulong)plVar21 & uVar32);
  }
  else if (plVar39 <= plVar21) {
    uVar35 = 0;
    if (plVar39 != (long *)0x0) {
      uVar35 = (ulong)plVar21 / (ulong)plVar39;
    }
    plVar21 = (long *)((long)plVar21 - uVar35 * (long)plVar39);
  }
  if (plVar21 != plVar29) goto LAB_10751ad1c;
  goto LAB_10751ab9c;
LAB_10751a3e4:
  puVar33 = param_2 + 0x11;
  func_0x00010751fd1c(puVar33,pplVar9);
  func_0x000104c318bc(param_2[0x12] + (long)puVar33 * 0x78,&plStack_210);
  func_0x000107520768();
LAB_10751a410:
  puStack_328 = (undefined8 *)(param_2[0x11] + (long)puVar33);
  lStack_320 = param_2[0x12] + (long)puVar33 * 0x78;
  FUN_1074f99e8(&plStack_210);
  func_0x0001074f9a0c(&uStack_120);
LAB_10751a438:
  uVar53 = func_0x000107520a44();
  *(undefined8 *)(extraout_x8_03 + 0x48) = extraout_var;
  *(undefined8 *)(extraout_x8_03 + 0x40) = uVar53;
  *(undefined8 *)(extraout_x8_03 + 0x58) = extraout_var;
  *(undefined8 *)(extraout_x8_03 + 0x50) = uVar53;
  fStack_330 = 1.0;
  lVar15 = param_5[1];
  for (lVar24 = *param_5; puVar22 = puStack_310, lVar24 != lVar15; lVar24 = lVar24 + 0x98) {
    func_0x000104c2fe00(&plStack_210,lVar24 + 0x58);
    FUN_1074c3374(auStack_1d8,lVar24);
    puVar22 = &uStack_338;
    func_0x00010726364c(puVar22,&plStack_210);
    puVar10 = puStack_348;
    if (puStack_348 != (ulong *)0x0) {
      uVar32 = (long)puStack_348 - 1;
      if (((ulong)puStack_348 & uVar32) == 0) {
        puVar27 = (ulong *)(uVar32 & (ulong)puVar22);
      }
      else {
        puVar27 = puVar22;
        if (puStack_348 <= puVar22) {
          uVar35 = 0;
          if (puStack_348 != (ulong *)0x0) {
            uVar35 = (ulong)puVar22 / (ulong)puStack_348;
          }
          puVar27 = (ulong *)((long)puVar22 - uVar35 * (long)puStack_348);
        }
      }
      plVar39 = *(long **)(lStack_350 + (long)puVar27 * 8);
      if (plVar39 != (long *)0x0) {
        do {
          while( true ) {
            plVar39 = (long *)*plVar39;
            if (plVar39 == (long *)0x0) goto LAB_10751a51c;
            puVar19 = (ulong *)plVar39[1];
            if (puVar19 != puVar22) break;
            uVar35 = (ulong)(plVar39 + 2);
            func_0x000104c32db4(uVar35,&plStack_210);
            if ((uVar35 & 1) != 0) goto LAB_10751a79c;
          }
          if (((ulong)puVar10 & uVar32) == 0) {
            puVar19 = (ulong *)((ulong)puVar19 & uVar32);
          }
          else if (puVar10 <= puVar19) {
            uVar35 = 0;
            if (puVar10 != (ulong *)0x0) {
              uVar35 = (ulong)puVar19 / (ulong)puVar10;
            }
            puVar19 = (ulong *)((long)puVar19 - uVar35 * (long)puVar10);
          }
        } while (puVar19 == puVar27);
      }
    }
LAB_10751a51c:
    plVar39 = (long *)0xe0;
    __Znwm();
    puStack_110 = (undefined8 *)0x1;
    *plVar39 = 0;
    plVar39[1] = (long)puVar22;
    uStack_120 = plVar39;
    pplStack_118 = &plStack_340;
    func_0x000104c2fe00(plVar39 + 2,&plStack_210);
    FUN_10748babc(plVar39 + 9,auStack_1d8);
    if ((puVar10 == (ulong *)0x0) || (fStack_330 * (float)puVar10 < (float)(uStack_338 + 1))) {
      bVar6 = (ulong *)0x2 < puVar10;
      bVar7 = puVar10 == (ulong *)0x3;
      func_0x000107520a30((long)puVar10 << 1);
      puVar27 = extraout_x8_04;
      if (!bVar6 || bVar7) {
        puVar27 = extraout_x9;
      }
      if ((long)puVar27 - 1U == 0) {
        puVar27 = (ulong *)0x2;
      }
      else if (((ulong)puVar27 & (long)puVar27 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      puVar19 = puStack_348;
      puVar10 = puVar27;
      if (puStack_348 < puVar27) {
LAB_10751a5c8:
        if ((ulong)puVar10 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_10751be84;
        }
        lVar43 = (long)puVar10 << 3;
        __Znwm(lVar43);
        func_0x00010751cc28(&lStack_350,lVar43);
        for (puVar27 = (ulong *)0x0; puVar10 != puVar27; puVar27 = (ulong *)((long)puVar27 + 1)) {
          *(undefined8 *)(lStack_350 + (long)puVar27 * 8) = 0;
        }
        puStack_348 = puVar10;
        if (plStack_340 != (long *)0x0) {
          puVar27 = (ulong *)plStack_340[1];
          uVar35 = (long)puVar10 - 1;
          uVar32 = 0;
          if (puVar10 != (ulong *)0x0) {
            uVar32 = (ulong)puVar27 / (ulong)puVar10;
          }
          puVar19 = puVar27;
          if (puVar10 <= puVar27) {
            puVar19 = (ulong *)((long)puVar27 - uVar32 * (long)puVar10);
          }
          if (((ulong)puVar10 & uVar35) == 0) {
            puVar19 = (ulong *)((ulong)puVar27 & uVar35);
          }
          *(long ***)(lStack_350 + (long)puVar19 * 8) = &plStack_340;
          lVar43 = lStack_350;
          plVar23 = plStack_340;
          while (plVar25 = plVar23, plVar23 = (long *)*plVar25, plVar23 != (long *)0x0) {
            puVar27 = (ulong *)plVar23[1];
            if (((ulong)puVar10 & uVar35) == 0) {
              puVar27 = (ulong *)((ulong)puVar27 & uVar35);
            }
            else if (puVar10 <= puVar27) {
              uVar32 = 0;
              if (puVar10 != (ulong *)0x0) {
                uVar32 = (ulong)puVar27 / (ulong)puVar10;
              }
              puVar27 = (ulong *)((long)puVar27 - uVar32 * (long)puVar10);
            }
            if (puVar27 != puVar19) {
              if (*(long *)(lVar43 + (long)puVar27 * 8) == 0) {
                *(long **)(lVar43 + (long)puVar27 * 8) = plVar25;
                puVar19 = puVar27;
              }
              else {
                func_0x0001075204f4();
                lVar43 = extraout_x8_05;
                uVar35 = extraout_x9_00;
                plVar23 = extraout_x10;
                puVar19 = extraout_x11;
              }
            }
          }
        }
      }
      else {
        puVar10 = puStack_348;
        if (puVar27 < puStack_348) {
          puVar10 = (ulong *)(long)((float)uStack_338 / fStack_330);
          if ((puStack_348 < (ulong *)0x3) || (((ulong)puStack_348 & (long)puStack_348 - 1U) != 0))
          {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x0001075204b4();
          }
          if (puVar27 <= puVar10) {
            puVar27 = puVar10;
          }
          puVar10 = puStack_348;
          if (puVar27 < puVar19) {
            puVar10 = puVar27;
            if (puVar27 != (ulong *)0x0) goto LAB_10751a5c8;
            func_0x00010751cc28(&lStack_350,0);
            puStack_348 = (ulong *)0x0;
            puVar10 = (ulong *)0x0;
          }
        }
      }
      if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
        puVar27 = (ulong *)((long)puVar10 - 1U & (ulong)puVar22);
      }
      else {
        puVar27 = puVar22;
        if (puVar10 <= puVar22) {
          uVar32 = 0;
          if (puVar10 != (ulong *)0x0) {
            uVar32 = (ulong)puVar22 / (ulong)puVar10;
          }
          puVar27 = (ulong *)((long)puVar22 - uVar32 * (long)puVar10);
        }
      }
    }
    plVar23 = *(long **)(lStack_350 + (long)puVar27 * 8);
    if (plVar23 == (long *)0x0) {
      *plVar39 = (long)plStack_340;
      *(long ***)(lStack_350 + (long)puVar27 * 8) = &plStack_340;
      plStack_340 = plVar39;
      if (*plVar39 != 0) {
        puVar22 = *(ulong **)(*plVar39 + 8);
        if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
          puVar22 = (ulong *)((ulong)puVar22 & (long)puVar10 - 1U);
        }
        else if (puVar10 <= puVar22) {
          uVar32 = 0;
          if (puVar10 != (ulong *)0x0) {
            uVar32 = (ulong)puVar22 / (ulong)puVar10;
          }
          puVar22 = (ulong *)((long)puVar22 - uVar32 * (long)puVar10);
        }
        *(long **)(lStack_350 + (long)puVar22 * 8) = plVar39;
      }
    }
    else {
      *plVar39 = *plVar23;
      *plVar23 = (long)plVar39;
    }
    uStack_120 = (long *)0x0;
    uStack_338 = uStack_338 + 1;
    func_0x00010751cc40(&uStack_120);
LAB_10751a79c:
    func_0x00010751cc7c(&plStack_210);
  }
  puStack_360 = (undefined8 *)0x0;
  uStack_358 = 0;
  puStack_368 = (undefined8 *)0x0;
  plVar39 = (long *)(lStack_320 + 0x60);
LAB_10751a7d0:
  puVar27 = puStack_348;
  puVar14 = puStack_360;
  plVar39 = (long *)*plVar39;
  puVar40 = puStack_368;
  if (plVar39 != (long *)0x0) {
    plVar23 = plVar39 + 2;
    if ((puStack_348 != (ulong *)0x0) && (uStack_338 != 0)) {
      puVar10 = &uStack_338;
      func_0x00010726364c(puVar10,plVar23);
      uVar32 = (long)puVar27 - 1;
      if (((ulong)puVar27 & uVar32) == 0) {
        puVar19 = (ulong *)((ulong)puVar10 & uVar32);
      }
      else {
        puVar19 = puVar10;
        if (puVar27 <= puVar10) {
          uVar35 = 0;
          if (puVar27 != (ulong *)0x0) {
            uVar35 = (ulong)puVar10 / (ulong)puVar27;
          }
          puVar19 = (ulong *)((long)puVar10 - uVar35 * (long)puVar27);
        }
      }
      plVar25 = *(long **)(lStack_350 + (long)puVar19 * 8);
      if (plVar25 != (long *)0x0) {
        do {
          while( true ) {
            plVar25 = (long *)*plVar25;
            if (plVar25 == (long *)0x0) goto LAB_10751a884;
            puVar20 = (ulong *)plVar25[1];
            if (puVar10 != puVar20) break;
            uVar35 = (ulong)(plVar25 + 2);
            func_0x000104c32db4(uVar35,plVar23);
            if ((uVar35 & 1) != 0) {
              if (*(char *)(plVar25 + 0x10) == '\x01') {
                cVar3 = *(char *)(plVar39 + 0x17);
                plVar23 = (long *)plVar25[0x11];
                func_0x0001075208b0(plVar23,plVar25[0x12]);
                FUN_10751ce3c();
                uStack_120 = plVar23;
                if (((~(uint)plVar23 & 0x1010101) != 0) && (cVar3 != '\0')) {
                  lVar24 = plVar39[0x16];
                  func_0x0001075207f0();
                  plStack_1d0 = (long *)plVar39[0x11];
                  uStack_1c8 = plVar39[0x12];
                  uStack_1c0 = *(undefined1 *)(plVar39 + 0x13);
                  uStack_1b8 = 0;
                  lStack_1b0 = 0;
                  func_0x000107269c1c(&uStack_1b8);
                  func_0x000107520788(&puStack_1a8);
                  lStack_170 = (long)(plVar25 + 9);
                  dStack_168 = (double)(((long)puVar22 - lVar24) / 1000000);
                  FUN_10751cfd0(adStack_160,&uStack_120);
                  func_0x0001075203c4();
                  func_0x00010752033c();
                }
              }
              goto LAB_10751a7d0;
            }
          }
          if (((ulong)puVar27 & uVar32) == 0) {
            puVar20 = (ulong *)((ulong)puVar20 & uVar32);
          }
          else if (puVar27 <= puVar20) {
            uVar35 = 0;
            if (puVar27 != (ulong *)0x0) {
              uVar35 = (ulong)puVar20 / (ulong)puVar27;
            }
            puVar20 = (ulong *)((long)puVar20 - uVar35 * (long)puVar27);
          }
        } while (puVar20 == puVar19);
      }
    }
LAB_10751a884:
    if (*(char *)(plVar39 + 0x17) == '\x01') {
      lVar24 = param_5[3];
      Hint_Prefetch(lVar24,0,2,0);
      func_0x000104c2fe38(lVar24,plVar23);
      lVar24 = 0;
      func_0x0001075209ec((ulong)param_5[3] >> 0xc);
      uVar32 = extraout_x8_06;
      lVar15 = extraout_x11_00;
      uVar35 = extraout_x12;
      lVar43 = extraout_x13;
      while( true ) {
        uVar53 = *(undefined8 *)(lVar43 + (uVar32 & uVar35));
        for (uVar38 = CONCAT17(-((char)((ulong)uVar53 >> 0x38) == extraout_w9_00),
                               CONCAT16(-((char)((ulong)uVar53 >> 0x30) == extraout_w9_00),
                                        CONCAT15(-((char)((ulong)uVar53 >> 0x28) == extraout_w9_00),
                                                 CONCAT14(-((char)((ulong)uVar53 >> 0x20) ==
                                                           extraout_w9_00),
                                                          CONCAT13(-((char)((ulong)uVar53 >> 0x18)
                                                                    == extraout_w9_00),
                                                                   CONCAT12(-((char)((ulong)uVar53
                                                                                    >> 0x10) ==
                                                                             extraout_w9_00),
                                                                            CONCAT11(-((char)((ulong
                                                  )uVar53 >> 8) == extraout_w9_00),
                                                  -((char)uVar53 == extraout_w9_00)))))))) &
                      0x8080808080808080; uVar38 != 0; uVar38 = uVar38 - 1 & uVar38) {
          uVar30 = (uVar38 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar38 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
          uVar30 = (uVar32 & uVar35) + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3) &
                   uVar35;
          pplVar9 = &plStack_210;
          plStack_210 = plVar23;
          plStack_208 = param_5 + 3;
          FUN_10751d0dc(pplVar9,lVar15 + uVar30 * 0x40);
          if (((ulong)pplVar9 & 1) != 0) {
            uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
            iVar8 = *(int *)(param_5[4] + uVar30 * 0x40 + 0x38);
            func_0x000107520754();
            uVar17 = 5;
            if (iVar8 != 9) {
              uVar17 = 0;
            }
            uVar18 = 2;
            if (iVar8 != 8) {
              uVar18 = uVar17;
            }
            goto LAB_10751a984;
          }
        }
        func_0x0001075205bc();
        if ((extraout_x8_07 & 1) != 0) break;
        lVar24 = lVar24 + 8;
        uVar32 = lVar24 + extraout_x14;
        lVar15 = extraout_x11_01;
        uVar35 = extraout_x12_00;
        lVar43 = extraout_x13_00;
      }
      uVar18 = 1;
LAB_10751a984:
      uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar18);
      func_0x0001075207f0();
      plStack_1d0 = (long *)plVar39[0x11];
      uStack_1c8 = plVar39[0x12];
      uStack_1c0 = *(undefined1 *)(plVar39 + 0x13);
      func_0x000107268400(&uStack_1b8,plVar39 + 0x14);
      func_0x000107520788(&puStack_1a8);
      lStack_170 = 0;
      dStack_168 = 0.0;
      FUN_10751d1dc(adStack_160,&uStack_120);
      uStack_130 = 1;
      func_0x0001075203c4();
      func_0x00010752033c();
      func_0x000107520754();
    }
    goto LAB_10751a7d0;
  }
  for (; puVar22 = puStack_348, puVar40 != puVar14; puVar40 = puVar40 + 0x1d) {
    if ((puStack_348 != (ulong *)0x0) && (uStack_338 != 0)) {
      puVar27 = &uStack_338;
      func_0x00010726364c(puVar27,puVar40 + 0xd);
      uVar32 = (long)puVar22 - 1;
      if (((ulong)puVar22 & uVar32) == 0) {
        puVar10 = (ulong *)((ulong)puVar27 & uVar32);
      }
      else {
        puVar10 = puVar27;
        if (puVar22 <= puVar27) {
          uVar35 = 0;
          if (puVar22 != (ulong *)0x0) {
            uVar35 = (ulong)puVar27 / (ulong)puVar22;
          }
          puVar10 = (ulong *)((long)puVar27 - uVar35 * (long)puVar22);
        }
      }
      plVar39 = *(long **)(lStack_350 + (long)puVar10 * 8);
      if (plVar39 != (long *)0x0) {
        do {
          while( true ) {
            plVar39 = (long *)*plVar39;
            if (plVar39 == (long *)0x0) goto LAB_10751ab40;
            puVar19 = (ulong *)plVar39[1];
            if (puVar19 != puVar27) break;
            uVar35 = (ulong)(plVar39 + 2);
            func_0x000104c32db4(uVar35,puVar40 + 0xd);
            if ((uVar35 & 1) != 0) goto LAB_10751ad1c;
          }
          if (((ulong)puVar22 & uVar32) == 0) {
            puVar19 = (ulong *)((ulong)puVar19 & uVar32);
          }
          else if (puVar22 <= puVar19) {
            uVar35 = 0;
            if (puVar22 != (ulong *)0x0) {
              uVar35 = (ulong)puVar19 / (ulong)puVar22;
            }
            puVar19 = (ulong *)((long)puVar19 - uVar35 * (long)puVar22);
          }
        } while (puVar19 == puVar10);
      }
    }
LAB_10751ab40:
    lVar24 = lStack_320;
    plVar39 = *(long **)(lStack_320 + 0x58);
    if ((plVar39 != (long *)0x0) && (plVar23 = (long *)(lStack_320 + 0x68), *plVar23 != 0)) {
      plVar25 = plVar23;
      func_0x00010726364c(plVar23,puVar40 + 0xd);
      uVar32 = (long)plVar39 - 1;
      if (((ulong)plVar39 & uVar32) == 0) {
        plVar29 = (long *)((ulong)plVar25 & uVar32);
      }
      else {
        plVar29 = plVar25;
        if (plVar39 <= plVar25) {
          uVar35 = 0;
          if (plVar39 != (long *)0x0) {
            uVar35 = (ulong)plVar25 / (ulong)plVar39;
          }
          plVar29 = (long *)((long)plVar25 - uVar35 * (long)plVar39);
        }
      }
      plVar26 = *(long **)(*(long *)(lVar24 + 0x50) + (long)plVar29 * 8);
      if (plVar26 != (long *)0x0) {
LAB_10751ab9c:
        while (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0) {
          plVar21 = (long *)plVar26[1];
          if (plVar21 != plVar25) goto LAB_10751abc4;
          plVar21 = plVar26 + 2;
          func_0x000104c32db4(plVar21,puVar40 + 0xd);
          if ((int)plVar21 != 0) {
            uVar35 = *(ulong *)(lVar24 + 0x58);
            uVar32 = plVar26[1];
            uVar38 = uVar35 - 1;
            if ((uVar35 & uVar38) == 0) {
              uVar32 = uVar38 & uVar32;
            }
            else if (uVar35 <= uVar32) {
              uVar30 = 0;
              if (uVar35 != 0) {
                uVar30 = uVar32 / uVar35;
              }
              uVar32 = uVar32 - uVar30 * uVar35;
            }
            lVar15 = *plVar26;
            lVar43 = *(long *)(lVar24 + 0x50);
            plVar39 = *(long **)(lVar43 + uVar32 * 8);
            do {
              plVar25 = plVar39;
              plVar39 = (long *)*plVar25;
            } while ((long *)*plVar25 != plVar26);
            plStack_208 = (long *)(lVar24 + 0x60);
            if (plVar25 == plStack_208) {
LAB_10751ac70:
              if (lVar15 == 0) {
LAB_10751aca4:
                *(undefined8 *)(lVar43 + uVar32 * 8) = 0;
                lVar15 = *plVar26;
                goto LAB_10751acac;
              }
              uVar30 = *(ulong *)(lVar15 + 8);
              if ((uVar35 & uVar38) == 0) {
                uVar41 = uVar30 & uVar38;
              }
              else {
                uVar41 = uVar30;
                if (uVar35 <= uVar30) {
                  uVar41 = 0;
                  if (uVar35 != 0) {
                    uVar41 = uVar30 / uVar35;
                  }
                  uVar41 = uVar30 - uVar41 * uVar35;
                }
              }
              if (uVar41 != uVar32) goto LAB_10751aca4;
LAB_10751acb4:
              if ((uVar35 & uVar38) == 0) {
                uVar30 = uVar30 & uVar38;
              }
              else if (uVar35 <= uVar30) {
                uVar38 = 0;
                if (uVar35 != 0) {
                  uVar38 = uVar30 / uVar35;
                }
                uVar30 = uVar30 - uVar38 * uVar35;
              }
              if (uVar30 != uVar32) {
                *(long **)(lVar43 + uVar30 * 8) = plVar25;
                lVar15 = *plVar26;
              }
            }
            else {
              uVar30 = plVar25[1];
              if ((uVar35 & uVar38) == 0) {
                uVar30 = uVar30 & uVar38;
              }
              else if (uVar35 <= uVar30) {
                uVar41 = 0;
                if (uVar35 != 0) {
                  uVar41 = uVar30 / uVar35;
                }
                uVar30 = uVar30 - uVar41 * uVar35;
              }
              if (uVar30 != uVar32) goto LAB_10751ac70;
LAB_10751acac:
              if (lVar15 != 0) {
                uVar30 = *(ulong *)(lVar15 + 8);
                goto LAB_10751acb4;
              }
            }
            *plVar25 = lVar15;
            *plVar26 = 0;
            *plVar23 = *plVar23 + -1;
            cStack_200 = '\x01';
            uStack_1ff = 0;
            uStack_1fb = 0;
            plStack_210 = plVar26;
            FUN_10751d35c(&plStack_210);
            break;
          }
        }
      }
    }
LAB_10751ad1c:
  }
  auStack_390[0] = func_0x000107520a44();
  puVar33 = puStack_368;
  *(undefined8 *)(extraout_x8_08 + 0x18) = extraout_var_00;
  *(undefined8 *)(extraout_x8_08 + 0x10) = auStack_390[0];
  uStack_370 = 0x3f800000;
  FUN_107372aa4(auStack_390,((long)puVar14 - (long)puStack_368) / 0xe8);
  for (; puVar33 != puVar14; puVar33 = puVar33 + 0x1d) {
    func_0x0001072e89a4(auStack_390,puVar33 + 0xd);
  }
  ppuStack_3c0 = &puStack_328;
  puStack_3b0 = auStack_390;
  plStack_3a8 = &lStack_308;
  ppuStack_3a0 = &puStack_310;
  in_ZR = *param_5 == param_5[1];
  plStack_3b8 = param_5;
  puStack_398 = param_2;
  if ((bool)in_ZR) {
    puVar33 = puStack_368;
    FUN_10751c2d4(*param_2,puStack_368,puVar14,lStack_308,param_2 + 6,param_2 + 9,puStack_310);
    iVar8 = (int)&ppuStack_3c0;
    FUN_10751c438();
    func_0x00010785f1f4();
    plStack_210 = (long *)((ulong)plStack_210 & 0xffffffffffffff00);
    func_0x0001075203f8();
    lVar24 = lStack_320;
    if (iVar8 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
    }
    else {
      in_ZR = *(char *)(lStack_320 + 0x48) == '\x01';
      if ((bool)in_ZR) {
        uVar28 = 0;
        if (*(long *)(lStack_320 + 0x38) != 0) {
          lVar15 = *(long *)(lStack_308 + 0x18);
          func_0x00010752046c(&uStack_120);
          puVar33 = puStack_110;
          puStack_110[1] = 0;
          puStack_110[2] = 0;
          *puStack_110 = &PTR_DAT_110998a58;
          func_0x00010729807c(&plStack_210,lVar15 + 8);
          uStack_250 = uStack_250 & 0xffffffffffffff00;
          plStack_240 = (long *)((ulong)plStack_240 & 0xffffffffffffff00);
          FUN_107374ae4(puVar33 + 3,lVar24 + 0x38,lVar15 + 0x40,lVar15 + 0x78,&plStack_210,
                        &uStack_250);
          func_0x0001075203e8();
          puVar40 = puStack_110;
          puStack_110 = (undefined8 *)0x0;
          puStack_3e8 = puVar40;
          puStack_3f0 = puVar40 + 3;
          func_0x000107297fb8(&uStack_120);
          puVar33 = (undefined8 *)0x1136cb988;
          FUN_10751c730(*param_2,0x1136cb988,puVar40 + 3,puVar40);
          FUN_10751e18c(lVar24 + 0x38);
          func_0x0001072792b8(&puStack_3f0);
          uVar28 = 1;
        }
      }
      else {
        uVar28 = 0;
      }
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = uVar28;
    }
  }
  else {
    func_0x000107520404();
    func_0x0001075209d8();
    FUN_10751e1b0();
    puVar22 = (ulong *)*param_5;
    func_0x0001075204a8();
    lVar24 = lStack_320;
    if ((bool)in_ZR) {
      fVar47 = *(float *)(puVar22 + 5);
      if (fVar47 == 0.0) {
        bVar7 = true;
      }
      else {
        bVar7 = *(float *)(puVar22 + 3) < fVar47 * fVar47;
      }
    }
    else {
      bVar7 = false;
    }
    cStack_3c8 = bVar7;
    if ((*(char *)(lStack_320 + 0x48) == '\x01') && (*(long *)(lStack_320 + 0x38) != 0)) {
      func_0x0001075202e4();
      (*extraout_x8_09)();
      uVar32 = *puVar22;
      func_0x0001075202e4();
      (*extraout_x8_10)();
      func_0x000107520804();
      if ((uVar32 & 1) != 0) {
        cStack_3c8 = false;
      }
    }
    if ((*(byte *)(lVar24 + 0x48) & 1) == 0) {
      bStack_3c7 = 0;
      puStack_3f0 = (undefined8 *)((ulong)puStack_3f0 & 0xffffffffffffff00);
      cStack_3e0 = '\0';
    }
    else {
      puStack_3f0 = *(undefined8 **)(lVar24 + 0x38);
      puStack_3e8 = *(undefined8 **)(lVar24 + 0x40);
      bStack_3c7 = 0;
      if (puStack_3f0 != (undefined8 *)0x0) {
        bStack_3c7 = bVar7 ^ 1;
      }
      if (puStack_3e8 != (undefined8 *)0x0) {
        plVar39 = puStack_3e8 + 1;
        do {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar39,0x10);
          if (bVar7) {
            *plVar39 = *plVar39 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      cStack_3e0 = '\x01';
    }
    plStack_3d8 = (long *)*puVar22;
    plStack_3d0 = (long *)puVar22[1];
    if (puVar22[1] != 0) {
      plVar39 = (long *)(puVar22[1] + 8);
      do {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar7) {
          *plVar39 = *plVar39 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x000107520488();
    func_0x000107520588();
    puVar33 = apuStack_2c0[3];
    uVar42 = 0;
    lVar43 = param_5[1];
    lVar15 = -0x100000000;
    for (lVar24 = *param_5; lVar24 != lVar43; lVar24 = lVar24 + 0x98) {
      func_0x0001075202e4(*(undefined8 *)(lVar24 + 0x10));
      (*extraout_x8_11)();
      func_0x00010726236c(&uStack_120);
      if ((char)uStack_e8 == '\x01') {
        func_0x0001078696e8(&plStack_d0);
        if (*(char *)(lVar24 + 0x2c) == '\x01') {
          func_0x0001075201b0();
          FUN_1073b35b0(&UNK_10f416076,0x21);
          func_0x00010752064c((double)*(float *)(lVar24 + 0x18));
          func_0x000107520128();
          func_0x000107520200();
          func_0x000107520334();
          func_0x0001075201b0();
          FUN_1073b35b0(&UNK_10f416098,0x2b);
          func_0x00010752064c((double)uVar42);
          func_0x000107520128();
          func_0x000107520200();
          func_0x000107520334();
          func_0x0001075201b0();
          FUN_1073b35b0(&UNK_10f4160c4,0x2c);
          func_0x0001075202a8();
          func_0x00010752064c((double)(ulong)(extraout_x8_12 + (lVar15 >> 0x20)));
          func_0x000107520128();
          func_0x000107520200();
          func_0x000107520334();
        }
        if (cStack_3c8 == '\x01') {
          func_0x0001075202e4(plStack_3d8);
          (*extraout_x8_13)();
          uVar28 = (undefined1)*(undefined8 *)(lVar24 + 0x10);
          func_0x0001075202e4();
          (*extraout_x8_14)();
LAB_10751b0f8:
          func_0x000107520804();
        }
        else {
          if ((cStack_3e0 == '\x01') && (puStack_3f0 != (undefined8 *)0x0)) {
            func_0x0001075202e4();
            (*extraout_x8_15)();
            uVar28 = (undefined1)*(undefined8 *)(lVar24 + 0x10);
            func_0x0001075202e4();
            (*extraout_x8_16)();
            goto LAB_10751b0f8;
          }
          uVar28 = 0;
        }
        func_0x0001075201b0();
        FUN_1073b35b0(&UNK_10f416166,0x1a);
        plStack_208 = (long *)CONCAT71(plStack_208._1_7_,uVar28);
        puStack_1a8 = (ulong *)CONCAT44(puStack_1a8._4_4_,1);
        func_0x000107520128();
        func_0x000107520200();
        func_0x000107520334();
        func_0x0001075207e4();
        FUN_10751ec44(puVar33,&plStack_210,&plStack_d0);
        func_0x00010752043c();
        func_0x000107520860();
      }
      func_0x00010752074c();
      lVar15 = lVar15 + -0x100000000;
      uVar42 = uVar42 + 1;
    }
    func_0x0001075207a0();
    puVar33 = (undefined8 *)*param_5;
    if (puVar33 != (undefined8 *)param_5[1]) {
      func_0x000107520404();
      func_0x0001075209d8();
      FUN_10751ec60();
    }
    func_0x000107520488();
    func_0x000107520588();
    puVar40 = apuStack_2c0[3];
    uVar42 = 0;
    lVar43 = param_5[1];
    lVar15 = -0x100000000;
    for (lVar24 = *param_5; lVar24 != lVar43; lVar24 = lVar24 + 0x98) {
      puVar33 = *(undefined8 **)(lVar24 + 0x10);
      func_0x0001075202e4();
      (*extraout_x8_17)();
      func_0x00010726236c(&uStack_120);
      if (((char)uStack_e8 == '\x01') && ((*(byte *)(lVar24 + 0x2c) & 1) != 0)) {
        func_0x0001078696e8(&plStack_d0);
        func_0x0001075201b0();
        FUN_1073b35b0(&UNK_10f4160f1,0x1f);
        plStack_208 = (long *)(double)*(float *)(lVar24 + 0x1c);
        puStack_1a8._0_4_ = 2;
        func_0x000107520128();
        func_0x000107520200();
        func_0x000107520334();
        func_0x0001075201b0();
        FUN_1073b35b0(&UNK_10f416111,0x29);
        plStack_208 = (long *)(double)uVar42;
        puStack_1a8._0_4_ = 2;
        func_0x000107520128();
        func_0x000107520200();
        func_0x000107520334();
        func_0x0001075201b0();
        FUN_1073b35b0(&UNK_10f41613b,0x2a);
        func_0x0001075202a8();
        plStack_208 = (long *)(double)(ulong)(extraout_x8_18 + (lVar15 >> 0x20));
        puStack_1a8 = (ulong *)CONCAT44(puStack_1a8._4_4_,2);
        func_0x000107520128();
        func_0x000107520200();
        func_0x000107520334();
        func_0x0001075207e4();
        puVar33 = puVar40;
        FUN_10751ec44(puVar40,&plStack_210,&plStack_d0);
        func_0x00010752043c();
        func_0x000107520860();
      }
      func_0x00010752074c();
      lVar15 = lVar15 + -0x100000000;
      uVar42 = uVar42 + 1;
    }
    func_0x0001075207a0();
    lVar24 = lStack_320;
    uVar53 = func_0x000107520a44();
    *(undefined8 *)(extraout_x8_19 + 0xd8) = extraout_var_01;
    *(undefined8 *)(extraout_x8_19 + 0xd0) = uVar53;
    *(undefined8 *)(extraout_x8_19 + 0xe8) = extraout_var_01;
    *(undefined8 *)(extraout_x8_19 + 0xe0) = uVar53;
    *(undefined8 *)(extraout_x8_19 + 0xf8) = extraout_var_01;
    *(undefined8 *)(extraout_x8_19 + 0xf0) = uVar53;
    puVar14 = (undefined8 *)param_5[1];
    for (puVar40 = (undefined8 *)*param_5; puVar40 != puVar14; puVar40 = puVar40 + 0x13) {
      func_0x000107520880(lVar24);
      if (puVar33 == (undefined8 *)0x0) {
        uVar28 = 0;
      }
      else {
        uVar28 = *(undefined1 *)((long)puVar33 + 0xb9);
      }
      puVar11 = puVar40;
      FUN_10751f698(puVar40,uVar28,puVar33 != (undefined8 *)0x0);
      if (puVar33 == (undefined8 *)0x0) {
        if (((ulong)puVar11 & 1) != 0) {
          ppuVar44 = apuStack_2c0;
          goto LAB_10751b32c;
        }
      }
      else if ((uint)*(byte *)((long)puVar33 + 0xb9) != (uint)puVar11) {
        lVar15 = 0;
        if ((uint)puVar11 == 0) {
          lVar15 = 0x18;
        }
        ppuVar44 = (undefined8 **)((long)apuStack_2c0 + lVar15);
LAB_10751b32c:
        uVar53 = *puVar40;
        lVar15 = puVar40[1];
        puVar33 = ppuVar44[1];
        if (puVar33 < ppuVar44[2]) {
          *puVar33 = uVar53;
          puVar33[1] = lVar15;
          if (lVar15 != 0) {
            plVar39 = (long *)(lVar15 + 8);
            do {
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar7) {
                *plVar39 = *plVar39 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          puVar33 = puVar33 + 2;
        }
        else {
          puVar31 = *ppuVar44;
          lVar34 = (long)puVar33 - (long)puVar31;
          lVar43 = lVar34 >> 4;
          uVar32 = lVar43 + 1;
          if (uVar32 >> 0x3c != 0) {
            FUN_10751f6d0();
LAB_10751be84:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10751be88);
            (*pcVar5)();
          }
          uVar38 = (long)ppuVar44[2] - (long)puVar31;
          uVar35 = (long)uVar38 >> 3;
          if (uVar35 <= uVar32) {
            uVar35 = uVar32;
          }
          if (0x7fffffffffffffef < uVar38) {
            uVar35 = 0xfffffffffffffff;
          }
          if (uVar35 >> 0x3c != 0) {
            func_0x000104bd35f4();
            goto LAB_10751be84;
          }
          lVar12 = uVar35 << 4;
          __Znwm();
          puVar36 = (undefined8 *)(lVar12 + lVar34);
          *puVar36 = uVar53;
          puVar36[1] = lVar15;
          if (lVar15 != 0) {
            plVar39 = (long *)(lVar15 + 8);
            do {
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar7) {
                *plVar39 = *plVar39 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            lVar34 = (long)ppuVar44[1] - (long)puVar31;
            lVar43 = lVar34 >> 4;
          }
          puVar33 = puVar36 + 2;
          puVar36 = puVar36 + lVar43 * -2;
          puVar11 = puVar36;
          _memcpy(puVar36,puVar31,lVar34);
          *ppuVar44 = puVar36;
          ppuVar44[1] = puVar33;
          ppuVar44[2] = (undefined8 *)(lVar12 + uVar35 * 0x10);
          if (puVar31 != (undefined8 *)0x0) {
            __ZdlPv();
            puVar11 = puVar31;
          }
        }
        ppuVar44[1] = puVar33;
      }
      puVar33 = puVar11;
    }
    lStack_408 = 0;
    lStack_400 = 0;
    uStack_3f8 = 0;
    lVar24 = *param_5;
    lVar15 = param_5[1];
    auVar48 = NEON_fmov(0x3f800000,4);
    for (; lVar43 = lStack_308, puVar22 = puStack_310, lVar24 != lVar15; lVar24 = lVar24 + 0x98) {
      fVar47 = *(float *)(param_5 + 0x13);
      func_0x000107520880(lStack_320);
      if (puVar33 == (undefined8 *)0x0) {
        uVar28 = 0;
        bVar4 = 0;
      }
      else {
        uVar28 = *(undefined1 *)((long)puVar33 + 0xb9);
        bVar4 = *(byte *)(puVar33 + 0x17);
      }
      pfVar45 = *(float **)(lVar24 + 0x40);
      func_0x0001075208b0();
      pfVar13 = pfVar45;
      FUN_10751ce3c();
      if (puVar33 == (undefined8 *)0x0) {
        puVar40 = (undefined8 *)0x0;
      }
      else {
        puVar40 = (undefined8 *)(((long)puVar22 - puVar33[0x16]) / 1000000);
      }
      plVar39 = (long *)func_0x000107520a44();
      *(undefined8 *)(extraout_x8_20 + 0x98) = extraout_var_02;
      *(long **)(extraout_x8_20 + 0x90) = plVar39;
      *(undefined8 *)(extraout_x8_20 + 0xa8) = extraout_var_02;
      *(long **)(extraout_x8_20 + 0xa0) = plVar39;
      uStack_2e0 = 0x3f800000;
      if (*(char *)(puVar16 + 0x2003b) == '\x01') {
        uStack_b0 = 0x3f800000;
        pfVar37 = *(float **)(lVar24 + 0x48);
        fVar54 = 0.0;
        fVar55 = 0.0;
        plStack_d0 = plVar39;
        uStack_c8 = extraout_var_02;
        plStack_c0 = plVar39;
        for (; pfVar45 != pfVar37; pfVar45 = pfVar45 + 4) {
          puVar14 = puVar16 + 0x20017;
          (**(code **)(puVar16[0x20017] + 0x18))();
          auVar49._8_8_ = puVar14;
          auVar49._0_8_ = puVar14;
          auVar49 = NEON_ucvtf(auVar49,4);
          auVar51._0_4_ = auVar48._0_4_ - *pfVar45;
          auVar51._4_4_ = auVar48._4_4_ - pfVar45[1];
          auVar51._8_4_ = auVar48._8_4_ - pfVar45[2];
          auVar51._12_4_ = auVar48._12_4_ - pfVar45[3];
          auVar51 = NEON_ext(auVar51,auVar51,0xc,1);
          uStack_2c8 = CONCAT44(auVar51._8_4_ * auVar49._12_4_ * 0.5,
                                (pfVar45[2] + auVar48._8_4_) * auVar49._8_4_ * 0.5);
          uStack_2d0 = CONCAT44(auVar51._0_4_ * auVar49._4_4_ * 0.5,
                                (*pfVar45 + auVar48._0_4_) * auVar49._0_4_ * 0.5);
          FUN_1074ea50c(&plStack_210,puVar16 + 0x20017,&uStack_2d0);
          uStack_2d8 = param_4;
          FUN_1074e9e78(puVar16 + 0x20017,&uStack_2d8,&uStack_2d0);
          fVar55 = fVar55 + (float)(lStack_1f8 + (ulong)uStack_198);
          fVar54 = fVar54 + (float)plStack_1d0;
          for (plVar39 = (long *)lStack_1b0; plVar39 != (long *)0x0; plVar39 = (long *)*plVar39) {
            func_0x0001072a1b80(&plStack_d0,puVar16[0x20025] + plVar39[2] * 0x28);
          }
          FUN_1074f4d24(&plStack_210);
        }
        fVar50 = fVar55 / (fVar54 + fVar55);
        if (fVar54 + fVar55 <= 0.0) {
          fVar50 = 0.0;
        }
        uStack_250 = CONCAT44(uStack_250._4_4_,fVar50);
        func_0x0001072a8164(&uStack_248,&plStack_d0);
        func_0x0001072a8888(&plStack_d0);
        bVar7 = 1.0 - fVar47 < (float)uStack_250;
        if (1.0 - fVar47 < (float)uStack_250) {
          FUN_10751f7f8(&plStack_300);
          uVar53 = uStack_248;
          uStack_248 = 0;
          func_0x0001072a86a0(&plStack_300,uVar53);
          plStack_2f8 = plStack_240;
          plStack_240 = (long *)0x0;
          uStack_2f0 = uStack_238;
          lStack_2e8 = lStack_230;
          uStack_2e0 = uStack_228;
          if (lStack_230 != 0) {
            plVar39 = *(long **)(uStack_238 + 8);
            if (((ulong)plStack_2f8 & (long)plStack_2f8 - 1U) == 0) {
              plVar39 = (long *)((ulong)plVar39 & (long)plStack_2f8 - 1U);
            }
            else {
              uVar32 = 0;
              if (plStack_2f8 != (long *)0x0) {
                uVar32 = (ulong)plVar39 / (ulong)plStack_2f8;
              }
              if (plStack_2f8 <= plVar39) {
                plVar39 = (long *)((long)plVar39 - uVar32 * (long)plStack_2f8);
              }
            }
            plStack_300[(long)plVar39] = (long)&uStack_2f0;
            uStack_238 = 0;
            lStack_230 = 0;
          }
        }
        func_0x0001072a8888(&uStack_248);
      }
      else {
        bVar7 = false;
      }
      bVar2 = 0;
      if ((~(uint)pfVar13 & 0x1010101) == 0) {
        bVar2 = bVar7 ^ 1;
      }
      bVar1 = puVar33 == (undefined8 *)0x0 | (bVar4 ^ bVar2) & 1;
      uStack_120 = (long *)CONCAT71(uStack_120._1_7_,bVar7);
      uVar17 = 2;
      if ((bVar1 & (bVar2 ^ 1)) == 0) {
        uVar17 = 0;
      }
      if ((bVar1 & bVar2) != 0) {
        uVar17 = 1;
      }
      uStack_120 = (long *)CONCAT44(uVar17,(undefined4)uStack_120);
      lVar43 = lVar24;
      FUN_10751f698(lVar24,uVar28,puVar33 != (undefined8 *)0x0);
      pplStack_118 = (long **)CONCAT71(pplStack_118._1_7_,(char)lVar43);
      puStack_110 = puVar40;
      if (puVar33 != (undefined8 *)0x0 && ((bVar4 ^ bVar2) & 1) == 0) {
        puVar22 = (ulong *)puVar33[0x16];
      }
      puStack_108 = puVar22;
      func_0x0001072a8164(&uStack_100,&plStack_300);
      uStack_d8 = pfVar13;
      func_0x0001072a8888(&plStack_300);
      uVar53 = *(undefined8 *)(lVar24 + 0x10);
      func_0x0001075202e4(uVar53);
      (*extraout_x8_21)();
      func_0x000107269bac(&plStack_210,uVar53);
      (**(code **)(**(long **)(lVar24 + 0x10) + 0x40))(&plStack_1d0);
      plVar39 = *(long **)(lVar24 + 0x10);
      (**(code **)(*plVar39 + 0x20))();
      func_0x000107268400(&uStack_1b8,plVar39);
      puStack_1a8 = puStack_108;
      bStack_1a0 = (byte)uStack_d8 & uStack_d8._1_1_ & uStack_d8._2_1_ & uStack_d8._3_1_ &
                   ((byte)uStack_120 ^ 1);
      uStack_19f = pplStack_118._0_1_;
      FUN_10751dc74(lStack_320 + 0x50,lVar24 + 0x58);
      FUN_10751e034();
      func_0x0001074f9ab0(&plStack_210);
      if (uStack_120._4_4_ == 1) {
        func_0x0001075205a4();
        FUN_10751cca4(&lStack_408,&plStack_210);
LAB_10751b820:
        func_0x00010752033c();
      }
      else if (uStack_120._4_4_ == 2) {
        func_0x0001075205a4();
        func_0x0001075203c4();
        goto LAB_10751b820;
      }
      puVar33 = &uStack_100;
      func_0x0001072a8888();
    }
    uStack_250 = uStack_250 & 0xffffffffffffff00;
    plStack_240 = (long *)((ulong)plStack_240 & 0xffffffffffffff00);
    uStack_238 = uStack_238 & 0xffffffffffffff00;
    uStack_228 = uStack_228 & 0xffffff00;
    if (cStack_3c8 == '\x01') {
      func_0x0001075201c8(*(undefined8 *)(lStack_308 + 0x18),&plStack_210,&plStack_3d8);
      FUN_10751f8ec();
      puVar22 = &uStack_250;
      func_0x00010751f84c(puVar22,&plStack_210);
      iVar8 = (int)puVar22;
      func_0x0001075207fc();
      func_0x00010785f1f4();
      plStack_210 = (long *)((ulong)plStack_210 & 0xffffffffffffff00);
      func_0x0001075203f8();
      if (iVar8 == 0) {
        lVar15 = param_5[1];
        for (lVar24 = *param_5; lVar34 = lVar15, lVar24 != lVar15; lVar24 = lVar24 + 0x98) {
          if (cStack_3e0 == '\x01' && puStack_3f0 != (undefined8 *)0x0) {
            func_0x0001075202e4(*(undefined8 *)(lVar24 + 0x10));
            (*extraout_x8_22)();
            puVar33 = puStack_3f0;
            func_0x0001075202e4();
            (*extraout_x8_23)();
            func_0x000107520804();
            lVar34 = lVar24;
            if (((ulong)puVar33 & 1) != 0) break;
          }
        }
        if (lVar34 != param_5[1]) {
          func_0x0001075201c8(*(undefined8 *)(lVar43 + 0x18),&plStack_210);
          FUN_10751f8ec();
          goto LAB_10751ba28;
        }
      }
      else if ((cStack_3e0 == '\x01') && (puStack_3f0 != (undefined8 *)0x0)) {
        func_0x0001075201c8(*(undefined8 *)(lVar43 + 0x18),&plStack_210,&puStack_3f0);
        FUN_10751f8ec();
LAB_10751ba28:
        func_0x00010751f84c(&uStack_238,&plStack_210);
        pplVar9 = &plStack_210;
        goto LAB_10751ba38;
      }
LAB_10751ba3c:
      func_0x00010751f894(&uStack_120,&uStack_250);
    }
    else {
      if (bStack_3c7 == 1) {
        func_0x00010785f1f4();
        iVar8 = (int)puVar33;
        plStack_210 = (long *)((ulong)plStack_210 & 0xffffffffffffff00);
        func_0x0001075203f8();
        if (iVar8 != 0) {
          func_0x0001075201c8(*(undefined8 *)(lVar43 + 0x18),&plStack_210,&puStack_3f0);
          FUN_10751f8ec();
          goto LAB_10751ba28;
        }
        puVar33 = puStack_3f0;
        func_0x0001075202e4(puStack_3f0);
        (*extraout_x8_24)();
        lVar24 = *(long *)(lVar43 + 0x18);
        func_0x00010752046c(&plStack_d0);
        plVar39 = plStack_c0;
        plStack_c0[2] = 0;
        func_0x00010752065c();
        *plVar39 = extraout_x8_25;
        plVar39[1] = 0;
        func_0x00010729807c(&plStack_210,lVar24 + 8);
        FUN_1074fbd30(plVar39 + 3,puVar33,lVar24 + 0x40,lVar24 + 0x78,&plStack_210);
        func_0x0001075203e8();
        plStack_2f8 = plStack_c0;
        plStack_c0 = (long *)0x0;
        plStack_300 = plStack_2f8 + 3;
        func_0x000107297fb8(&plStack_d0);
        func_0x00010751f84c(&uStack_238,&plStack_300);
        pplVar9 = &plStack_300;
LAB_10751ba38:
        func_0x0001072792b8(pplVar9);
        goto LAB_10751ba3c;
      }
      uStack_120 = (long *)((ulong)uStack_120 & 0xffffffffffffff00);
      uStack_f0 = uStack_f0 & 0xffffffffffffff00;
    }
    func_0x00010751f8c8(&uStack_250);
    if ((char)uStack_f0 == '\x01') {
      if (cStack_3c8 == '\x01') {
        plStack_208 = plStack_3d0;
        plStack_210 = plStack_3d8;
        if (plStack_3d0 != (long *)0x0) {
          do {
            func_0x0001075202c0();
          } while (extraout_w10 != 0);
        }
        cStack_200 = '\x01';
      }
      else {
        cStack_200 = '\0';
        plStack_210 = (long *)((ulong)plStack_210 & 0xffffffffffffff00);
      }
      cVar3 = *(char *)(lStack_320 + 0x48);
      if (cVar3 == cStack_200) {
        if (cVar3 != '\0') {
          func_0x0001074d30b4(lStack_320 + 0x38,&plStack_210);
        }
      }
      else if (cVar3 == '\0') {
        *(long **)(lStack_320 + 0x40) = plStack_208;
        *(long **)(lStack_320 + 0x38) = plStack_210;
        plStack_208 = (long *)0x0;
        plStack_210 = (long *)0x0;
        *(undefined1 *)(lStack_320 + 0x48) = 1;
      }
      else {
        FUN_10751e18c(lStack_320 + 0x38);
      }
      FUN_1074f9b10(&plStack_210);
    }
    puVar33 = puStack_368;
    FUN_10751c2d4(*param_2,puStack_368,puStack_360,lStack_308,param_2 + 6,param_2 + 9,puStack_310);
    FUN_10751c438(&ppuStack_3c0);
    lVar34 = lStack_308;
    lVar43 = lStack_400;
    plVar39 = (long *)*param_2;
    lVar15 = (long)puStack_310 / 1000000;
    for (lVar24 = lStack_408; lVar24 != lVar43; lVar24 = lVar24 + 0xe8) {
      uVar53 = *(undefined8 *)(lVar24 + 0xa0);
      lVar12 = *(long *)(lVar34 + 0x18);
      func_0x00010752046c(&uStack_250);
      plVar23 = plStack_240;
      plStack_240[1] = 0;
      plStack_240[2] = 0;
      *plStack_240 = (long)&PTR_DAT_110998a58;
      func_0x00010729807c(&plStack_210,lVar12 + 8);
      FUN_107374ae4(plVar23 + 3,uVar53,lVar12 + 0x40,lVar12 + 0x78,&plStack_210,lVar24 + 0x40);
      func_0x0001075203e8();
      plStack_2f8 = plStack_240;
      plStack_240 = (long *)0x0;
      plStack_300 = plStack_2f8 + 3;
      func_0x000107297fb8(&uStack_250);
      uStack_248 = 0;
      uStack_250 = 0;
      plStack_240 = (long *)0x0;
      func_0x000107520780(&plStack_210);
      FUN_1074b01dc(&uStack_250,plStack_210[3]);
      func_0x000107283194(&plStack_210);
      func_0x000107520780(&plStack_d0);
      plVar23 = plStack_d0 + 2;
      while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
        func_0x000104c2fe00(&plStack_210,plVar23 + 2);
        FUN_1073f24b0(&uStack_250,&plStack_210);
        func_0x00010752043c();
      }
      func_0x000107283194(&plStack_d0);
      func_0x000104c2fe00(&plStack_210,lVar24 + 0x68);
      func_0x000107277aa4(&plStack_d0,&uStack_250);
      uStack_1c8 = uStack_c8;
      plStack_1d0 = plStack_d0;
      plStack_d0 = (long *)0x0;
      uStack_c8 = 0;
      lStack_170 = CONCAT44(lStack_170._4_4_,8);
      dStack_168 = (double)*(long *)(lVar24 + 0xa8);
      adStack_160[0] = (double)lVar15;
      func_0x00010726b188();
      func_0x000107277d70(&uStack_250);
      func_0x000107746810(&uStack_2d0,&plStack_210);
      FUN_10751f9c0(&plStack_210);
      plStack_208 = plStack_2f8;
      plStack_210 = plStack_300;
      if (plStack_2f8 != (long *)0x0) {
        do {
          func_0x0001075202c0();
        } while (extraout_w10_00 != 0);
      }
      cStack_200 = '\x01';
      uStack_248 = uStack_2c8;
      uStack_250 = uStack_2d0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      puVar33 = (undefined8 *)0x1131ad8c8;
      (**(code **)(*plVar39 + 0x28))(&plStack_d0,plVar39,0x1131ad8c8,&plStack_210,&uStack_250);
      func_0x00010726b264(&uStack_250);
      func_0x000107279298(&plStack_210);
      func_0x00010726b264(&uStack_2d0);
      func_0x0001072792b8(&plStack_300);
    }
    uVar32 = uStack_f0 & 0xff;
    if (((char)uStack_f0 == '\x01') && (((ulong)puStack_110 & 1) != 0)) {
      puVar33 = (undefined8 *)0x1136cb970;
      FUN_10751c730(plVar39,0x1136cb970,uStack_120,pplStack_118);
      uVar32 = uStack_f0 & 0xff;
    }
    puVar40 = apuStack_2c0[0];
    if (((uVar32 & 1) != 0) && ((uStack_f8 & 1) != 0)) {
      puVar33 = (undefined8 *)0x1136cb988;
      FUN_10751c730(plVar39,0x1136cb988,puStack_108,uStack_100);
      puVar40 = apuStack_2c0[0];
    }
    for (; puVar16 = apuStack_2c0[3], puVar40 != apuStack_2c0[1]; puVar40 = puVar40 + 2) {
      func_0x0001075201c8(*(undefined8 *)(lVar34 + 0x18),&plStack_210);
      puVar33 = puVar40;
      FUN_10751f8ec();
      func_0x0001075207b4();
      func_0x0001075207fc();
    }
    for (; in_ZR = puVar16 == puStack_2a0, !(bool)in_ZR; puVar16 = puVar16 + 2) {
      func_0x0001075201c8(*(undefined8 *)(lVar34 + 0x18),&plStack_210);
      puVar33 = puVar16;
      FUN_10751f8ec();
      func_0x0001075207b4();
      func_0x0001075207fc();
    }
    func_0x0001075202a8();
    *param_1 = extraout_x8_26;
    param_1[1] = (long)apuStack_2c0[1] - (long)apuStack_2c0[0] >> 4;
    param_1[2] = (long)puStack_2a0 - (long)apuStack_2c0[3] >> 4;
    *(char *)(param_1 + 3) = cStack_3c8;
    FUN_10751c80c(&uStack_120);
    FUN_10751c82c(&lStack_408);
    func_0x00010751c868(apuStack_2c0);
    func_0x00010751c88c(&puStack_3f0);
    puVar40 = apuStack_2c0[1];
  }
  func_0x00010726ea70(auStack_390);
  FUN_10751c82c(&puStack_368);
  FUN_10751feb8(&lStack_350);
  puVar22 = auStack_288;
  func_0x000104c2f714();
LAB_10751be38:
  func_0x000107520114(uStack_a8);
  if ((bool)in_ZR) {
    return puVar22;
  }
  ___stack_chk_fail();
  func_0x0001072792b8(&puStack_3f0);
  func_0x00010726ea70(auStack_390);
  FUN_10751c82c(&puStack_368);
  FUN_10751feb8(&lStack_350);
  puVar27 = auStack_288;
  func_0x000104c2f714();
  func_0x000107520208();
  func_0x000107520328();
  Hint_Prefetch(*puVar27,0,2,0);
  func_0x000104c2fe38(*puVar27,puVar33);
  lVar24 = 0;
  uVar35 = puVar22[1];
  uVar38 = puVar22[2];
  uVar30 = *puVar22;
  func_0x0001075209ec(uVar30 >> 0xc);
  uVar32 = extraout_x8_27;
  while( true ) {
    uVar32 = uVar32 & uVar38;
    uVar53 = *(undefined8 *)(uVar30 + uVar32);
    for (uVar41 = CONCAT17(-((char)((ulong)uVar53 >> 0x38) == extraout_w9_01),
                           CONCAT16(-((char)((ulong)uVar53 >> 0x30) == extraout_w9_01),
                                    CONCAT15(-((char)((ulong)uVar53 >> 0x28) == extraout_w9_01),
                                             CONCAT14(-((char)((ulong)uVar53 >> 0x20) ==
                                                       extraout_w9_01),
                                                      CONCAT13(-((char)((ulong)uVar53 >> 0x18) ==
                                                                extraout_w9_01),
                                                               CONCAT12(-((char)((ulong)uVar53 >>
                                                                                0x10) ==
                                                                         extraout_w9_01),
                                                                        CONCAT11(-((char)((ulong)
                                                  uVar53 >> 8) == extraout_w9_01),
                                                  -((char)uVar53 == extraout_w9_01)))))))) &
                  0x8080808080808080; uVar41 != 0; uVar41 = uVar41 - 1 & uVar41) {
      uVar46 = (uVar41 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar41 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar46 = (uVar46 & 0xffff0000ffff0000) >> 0x10 | (uVar46 & 0xffff0000ffff) << 0x10;
      uVar46 = uVar32 + ((ulong)LZCOUNT(uVar46 >> 0x20 | uVar46 << 0x20) >> 3) & uVar38;
      lVar15 = uVar35 + uVar46 * 0x78;
      func_0x000104c32db4(lVar15,puVar40);
      if ((int)lVar15 != 0) {
        return (ulong *)(*puVar22 + uVar46);
      }
    }
    func_0x0001075205bc();
    if ((extraout_x8_28 & 1) != 0) break;
    lVar24 = lVar24 + 8;
    uVar32 = lVar24 + uVar32;
  }
  return (ulong *)0x0;
}



/* Entry: 10751c1e4; end: 10751c2d3;  */

long FUN_10751c1e4(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  char extraout_w9;
  ulong *unaff_x19;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  func_0x000107520328();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1,param_2);
  lVar4 = 0;
  uVar1 = unaff_x19[1];
  uVar2 = unaff_x19[2];
  uVar5 = *unaff_x19;
  func_0x0001075209ec(uVar5 >> 0xc);
  uVar6 = extraout_x8;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar9 = *(undefined8 *)(uVar5 + uVar6);
    for (uVar7 = CONCAT17(-((char)((ulong)uVar9 >> 0x38) == extraout_w9),
                          CONCAT16(-((char)((ulong)uVar9 >> 0x30) == extraout_w9),
                                   CONCAT15(-((char)((ulong)uVar9 >> 0x28) == extraout_w9),
                                            CONCAT14(-((char)((ulong)uVar9 >> 0x20) == extraout_w9),
                                                     CONCAT13(-((char)((ulong)uVar9 >> 0x18) ==
                                                               extraout_w9),
                                                              CONCAT12(-((char)((ulong)uVar9 >> 0x10
                                                                               ) == extraout_w9),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar9 >> 8) == extraout_w9),
                                                  -((char)uVar9 == extraout_w9)))))))) &
                 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar8 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar6 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      iVar3 = (int)uVar1 + (int)uVar8 * 0x78;
      func_0x000104c32db4();
      if (iVar3 != 0) {
        return *unaff_x19 + uVar8;
      }
    }
    func_0x0001075205bc();
    if ((extraout_x8_00 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar6 = lVar4 + uVar6;
  }
  return 0;
}



/* Entry: 10751c2d4; end: 10751c437;  */

void FUN_10751c2d4(undefined1 **param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined8 extraout_x8_00;
  long lVar11;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 in_stack_00000050;
  undefined1 auStack_bb0 [8];
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 *puStack_b98;
  undefined1 *puStack_b90;
  undefined1 uStack_b88;
  undefined1 *puStack_b80;
  undefined1 **ppuStack_b78;
  undefined8 **ppuStack_b70;
  code *pcStack_b68;
  undefined1 auStack_b58 [8];
  undefined1 auStack_b50 [16];
  undefined8 uStack_b40;
  long lStack_b38;
  undefined1 uStack_b30;
  undefined8 uStack_b20;
  long lStack_b18;
  undefined1 *apuStack_8a8 [8];
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined1 uStack_858;
  undefined1 auStack_850 [16];
  undefined8 uStack_840;
  undefined2 uStack_838;
  undefined1 auStack_648 [64];
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 uStack_5f8;
  undefined1 auStack_5f0 [16];
  undefined1 auStack_5e0 [56];
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 auStack_598 [40];
  uint uStack_570;
  undefined1 uStack_568;
  undefined1 auStack_560 [40];
  uint uStack_538;
  undefined8 uStack_530;
  undefined1 auStack_518 [8];
  undefined1 auStack_510 [16];
  undefined8 uStack_500;
  long lStack_4f8;
  undefined1 uStack_4f0;
  undefined8 uStack_4e0;
  long lStack_4d8;
  undefined8 *puStack_4d0;
  code *pcStack_4c8;
  undefined1 auStack_268 [608];
  undefined8 uStack_8;
  
  func_0x000107520a9c();
  ppuVar4 = param_1;
  puVar8 = param_3;
  puVar9 = param_4;
  func_0x000107520138();
  uStack_8 = extraout_x8;
  for (; bVar3 = param_2 == param_3, !bVar3; param_2 = param_2 + 0x1d) {
    lVar10 = *(long *)(param_4 + 0x18);
    FUN_10751d89c(&uStack_4e0,param_2,param_2 + 0xb,lVar10 + 0x40,lVar10 + 0x78,lVar10 + 8,
                  param_2 + 8);
    FUN_10751d398(auStack_268,param_2,param_4,param_7);
    if (*(char *)(param_2 + 0x1c) == '\x01') {
      FUN_10751d504(param_2 + 0x16,param_5,param_6,auStack_268);
    }
    lStack_4f8 = lStack_4d8;
    uStack_500 = uStack_4e0;
    if (lStack_4d8 != 0) {
      do {
        func_0x0001075202c0();
      } while (extraout_w10 != 0);
    }
    uStack_4f0 = 1;
    func_0x000107520874();
    func_0x000107520868();
    puVar8 = &uStack_500;
    puVar9 = auStack_510;
    ppuVar4 = param_1;
    (**(code **)(*param_1 + 0x28))(auStack_518,param_1,0x1131ad8e0);
    func_0x0001075205b4();
    func_0x00010752062c();
    func_0x000107520608();
    func_0x000107520634();
    func_0x000107520580();
  }
  func_0x000107520114(uStack_8);
  if (!bVar3) {
    ___stack_chk_fail();
    func_0x000107520634();
    func_0x000107520580();
    func_0x000107520208();
    pcVar7 = FUN_10751c438;
    func_0x000107520a9c();
    ppuVar5 = ppuVar4;
    puStack_4d0 = &stack0x00000050;
    pcStack_4c8 = pcVar7;
    func_0x000107520138();
    puVar13 = (undefined8 *)ppuVar5[5];
    lVar14 = *(long *)(*ppuVar5 + 8);
    lVar1 = *(long *)(ppuVar5[1] + 0x40);
    uStack_530 = extraout_x8_00;
    for (lVar10 = *(long *)(ppuVar5[1] + 0x38); bVar3 = lVar10 == lVar1, !bVar3;
        lVar10 = lVar10 + 0x120) {
      ppuVar5 = (undefined1 **)(lVar14 + 0x50);
      FUN_10751e080(ppuVar5,lVar10 + 0x40);
      if (ppuVar5 == (undefined1 **)0x0) {
        puVar6 = ppuVar4[2];
        func_0x0001072ef280(puVar6,lVar10 + 0x40);
        if (puVar6 == (undefined1 *)0x0) {
          uStack_538 = 5;
          if (*(int *)(lVar10 + 0xf0) != 9) {
            uStack_538 = 2;
          }
          lVar11 = *(long *)(*(long *)ppuVar4[3] + 0x18);
          FUN_10751d89c(&uStack_b20,lVar10,lVar10 + 0xf8,lVar11 + 0x40,lVar11 + 0x78,lVar11 + 8,
                        (undefined8 *)(lVar10 + 0x108));
          func_0x000107269bac(auStack_648,lVar10);
          uStack_600 = *(undefined8 *)(lVar10 + 0x110);
          uStack_608 = *(undefined8 *)(lVar10 + 0x108);
          uStack_5f8 = *(undefined1 *)(lVar10 + 0x118);
          func_0x000107268400(auStack_5f0,lVar10 + 0xf8);
          func_0x000104c2fe00(auStack_5e0,lVar10 + 0x40);
          uStack_5a8 = 0;
          uStack_5a0 = 0;
          auStack_598[0] = 0;
          uStack_570 = 0xffffffff;
          FUN_10751d0f4(auStack_598);
          uVar2 = uStack_538;
          if (uStack_538 != 0xffffffff) {
            apuStack_8a8[0] = auStack_598;
            (*(code *)(&PTR_FUN_1109b92b0)[uStack_538])(apuStack_8a8,auStack_560);
            uStack_570 = uVar2;
          }
          uStack_568 = 1;
          FUN_10751d398(apuStack_8a8,auStack_648,*(undefined8 *)ppuVar4[3],*(undefined8 *)ppuVar4[4]
                       );
          FUN_10751d504(auStack_560,puVar13 + 6,puVar13 + 9,apuStack_8a8);
          plVar12 = (long *)*puVar13;
          lStack_b38 = lStack_b18;
          uStack_b40 = uStack_b20;
          if (lStack_b18 != 0) {
            do {
              func_0x0001075202c0();
            } while (extraout_w10_00 != 0);
          }
          uStack_b30 = 1;
          func_0x000107520874();
          func_0x000107520868();
          puVar8 = &uStack_b40;
          puVar9 = auStack_b50;
          (**(code **)(*plVar12 + 0x28))(auStack_b58,plVar12,0x1131ad8e0);
          func_0x0001075205b4();
          func_0x00010752062c();
          func_0x000107520608();
          func_0x000107520634();
          FUN_10751cdf8(auStack_648);
          func_0x000107520580();
          FUN_10751d0f4(auStack_560);
        }
        func_0x000107269bac(apuStack_8a8,lVar10);
        uStack_858 = *(undefined1 *)(lVar10 + 0x118);
        uStack_860 = *(undefined8 *)(lVar10 + 0x110);
        uStack_868 = *(undefined8 *)(lVar10 + 0x108);
        func_0x000107268400(auStack_850,lVar10 + 0xf8);
        uStack_840 = *(undefined8 *)ppuVar4[4];
        uStack_838 = 0;
        FUN_10751dc74(lVar14 + 0x50,lVar10 + 0x40);
        FUN_10751e034();
        ppuVar5 = apuStack_8a8;
        func_0x0001074f9ab0();
      }
    }
    func_0x000107520114(uStack_530);
    if (!bVar3) {
      ___stack_chk_fail();
      FUN_10751d0f4(auStack_598);
      func_0x000104c2f714(auStack_5e0);
      func_0x000104c335c0(auStack_5f0);
      func_0x000104c319e0(auStack_648);
      func_0x000107520580();
      FUN_10751d0f4(auStack_560);
      func_0x000107520208();
      pcStack_b68 = FUN_10751c730;
      puStack_b80 = auStack_598;
      ppuStack_b78 = ppuVar5;
      ppuStack_b70 = &puStack_4d0;
      func_0x0001075202d0();
      puStack_b98 = puVar8;
      puStack_b90 = puVar9;
      if (puVar9 != (undefined1 *)0x0) {
        do {
          func_0x0001075202c0();
        } while (extraout_w10_01 != 0);
      }
      uStack_b88 = 1;
      uStack_ba8 = 0;
      uStack_ba0 = 0;
      func_0x00010726acf0(&uStack_ba8);
      func_0x000107520564(auStack_bb0);
      (*extraout_x9)();
      func_0x00010726b264(&uStack_ba8);
      func_0x000107279298(&puStack_b98);
      return;
    }
  }
  return;
}



/* Entry: 10751c438; end: 10751c72f;  */

void FUN_10751c438(undefined1 **param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 in_stack_00000050;
  undefined1 auStack_690 [8];
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 *puStack_678;
  undefined1 *puStack_670;
  undefined1 uStack_668;
  undefined1 *puStack_660;
  undefined1 **ppuStack_658;
  undefined8 *puStack_650;
  code *pcStack_648;
  undefined1 auStack_638 [8];
  undefined1 auStack_630 [16];
  undefined8 uStack_620;
  long lStack_618;
  undefined1 uStack_610;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined1 *apuStack_388 [8];
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined1 auStack_330 [16];
  undefined8 uStack_320;
  undefined2 uStack_318;
  undefined1 auStack_128 [64];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [56];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  uint uStack_50;
  undefined1 uStack_48;
  undefined1 auStack_40 [40];
  uint uStack_18;
  undefined8 uStack_10;
  
  func_0x000107520a9c();
  ppuVar4 = param_1;
  func_0x000107520138();
  puVar9 = (undefined8 *)ppuVar4[5];
  lVar10 = *(long *)(*ppuVar4 + 8);
  lVar1 = *(long *)(ppuVar4[1] + 0x40);
  uStack_10 = extraout_x8;
  for (lVar7 = *(long *)(ppuVar4[1] + 0x38); bVar3 = lVar7 == lVar1, !bVar3; lVar7 = lVar7 + 0x120)
  {
    ppuVar4 = (undefined1 **)(lVar10 + 0x50);
    FUN_10751e080(ppuVar4,lVar7 + 0x40);
    if (ppuVar4 == (undefined1 **)0x0) {
      puVar5 = param_1[2];
      func_0x0001072ef280(puVar5,lVar7 + 0x40);
      if (puVar5 == (undefined1 *)0x0) {
        uStack_18 = 5;
        if (*(int *)(lVar7 + 0xf0) != 9) {
          uStack_18 = 2;
        }
        lVar6 = *(long *)(*(long *)param_1[3] + 0x18);
        FUN_10751d89c(&uStack_600,lVar7,lVar7 + 0xf8,lVar6 + 0x40,lVar6 + 0x78,lVar6 + 8,
                      (undefined8 *)(lVar7 + 0x108));
        func_0x000107269bac(auStack_128,lVar7);
        uStack_e0 = *(undefined8 *)(lVar7 + 0x110);
        uStack_e8 = *(undefined8 *)(lVar7 + 0x108);
        uStack_d8 = *(undefined1 *)(lVar7 + 0x118);
        func_0x000107268400(auStack_d0,lVar7 + 0xf8);
        func_0x000104c2fe00(auStack_c0,lVar7 + 0x40);
        uStack_88 = 0;
        uStack_80 = 0;
        auStack_78[0] = 0;
        uStack_50 = 0xffffffff;
        FUN_10751d0f4(auStack_78);
        uVar2 = uStack_18;
        if (uStack_18 != 0xffffffff) {
          apuStack_388[0] = auStack_78;
          (*(code *)(&PTR_FUN_1109b92b0)[uStack_18])(apuStack_388,auStack_40);
          uStack_50 = uVar2;
        }
        uStack_48 = 1;
        FUN_10751d398(apuStack_388,auStack_128,*(undefined8 *)param_1[3],*(undefined8 *)param_1[4]);
        FUN_10751d504(auStack_40,puVar9 + 6,puVar9 + 9,apuStack_388);
        plVar8 = (long *)*puVar9;
        lStack_618 = lStack_5f8;
        uStack_620 = uStack_600;
        if (lStack_5f8 != 0) {
          do {
            func_0x0001075202c0();
          } while (extraout_w10 != 0);
        }
        uStack_610 = 1;
        func_0x000107520874();
        func_0x000107520868();
        param_3 = &uStack_620;
        param_4 = auStack_630;
        (**(code **)(*plVar8 + 0x28))(auStack_638,plVar8,0x1131ad8e0);
        func_0x0001075205b4();
        func_0x00010752062c();
        func_0x000107520608();
        func_0x000107520634();
        FUN_10751cdf8(auStack_128);
        func_0x000107520580();
        FUN_10751d0f4(auStack_40);
      }
      func_0x000107269bac(apuStack_388,lVar7);
      uStack_338 = *(undefined1 *)(lVar7 + 0x118);
      uStack_340 = *(undefined8 *)(lVar7 + 0x110);
      uStack_348 = *(undefined8 *)(lVar7 + 0x108);
      func_0x000107268400(auStack_330,lVar7 + 0xf8);
      uStack_320 = *(undefined8 *)param_1[4];
      uStack_318 = 0;
      FUN_10751dc74(lVar10 + 0x50,lVar7 + 0x40);
      FUN_10751e034();
      ppuVar4 = apuStack_388;
      func_0x0001074f9ab0();
    }
  }
  func_0x000107520114(uStack_10);
  if (!bVar3) {
    ___stack_chk_fail();
    FUN_10751d0f4(auStack_78);
    func_0x000104c2f714(auStack_c0);
    func_0x000104c335c0(auStack_d0);
    func_0x000104c319e0(auStack_128);
    func_0x000107520580();
    FUN_10751d0f4(auStack_40);
    func_0x000107520208();
    pcStack_648 = FUN_10751c730;
    puStack_660 = auStack_78;
    ppuStack_658 = ppuVar4;
    puStack_650 = &stack0x00000050;
    func_0x0001075202d0();
    puStack_678 = param_3;
    puStack_670 = param_4;
    if (param_4 != (undefined1 *)0x0) {
      do {
        func_0x0001075202c0();
      } while (extraout_w10_00 != 0);
    }
    uStack_668 = 1;
    uStack_688 = 0;
    uStack_680 = 0;
    func_0x00010726acf0(&uStack_688);
    func_0x000107520564(auStack_690);
    (*extraout_x9)();
    func_0x00010726b264(&uStack_688);
    func_0x000107279298(&puStack_678);
    return;
  }
  return;
}



/* Entry: 10751c730; end: 10751c7c7;  */

void FUN_10751c730(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *extraout_x9;
  int extraout_w10;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  func_0x0001075202d0();
  uStack_38 = param_3;
  lStack_30 = param_4;
  if (param_4 != 0) {
    do {
      func_0x0001075202c0();
    } while (extraout_w10 != 0);
  }
  uStack_28 = 1;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010726acf0(&uStack_48);
  func_0x000107520564(auStack_50);
  (*extraout_x9)();
  func_0x00010726b264(&uStack_48);
  func_0x000107279298(&uStack_38);
  return;
}



/* Entry: 10751c7c8; end: 10751c80b;  */

void FUN_10751c7c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001075202d0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b93a0;
  uVar2 = *unaff_x19;
  uVar4 = unaff_x19[3];
  uVar3 = unaff_x19[2];
  puVar1[2] = unaff_x19[1];
  puVar1[1] = uVar2;
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  *(undefined8 **)(unaff_x20 + 0x18) = puVar1;
  return;
}



/* Entry: 10751c80c; end: 10751c82b;  */

void FUN_10751c80c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010751f8c8();
  }
  return;
}



/* Entry: 10751c82c; end: 10751c997;  */

void FUN_10751c82c(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107520a68();
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -0xe8;
      FUN_10751cdf8();
    }
    func_0x0001075207cc();
  }
  return;
}



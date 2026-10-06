/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1d0a94; end: 10a1d0bf3;  */

void FUN_10a1d0a94(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar14 = param_1[2];
  param_1[2] = param_2;
  func_0x00010732f6dc();
  if (uVar14 != 0) {
    uVar15 = 0;
    uVar16 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar15)) {
        plVar6 = (long *)(uVar2 + uVar15 * 0x58);
        lVar7 = *plVar6;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar7;
        uVar8 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
                ((long)&PTR_LOOP_110c8acd8 + lVar7) * -0x622015f714c7d297) + lVar7;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar8;
        uVar11 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297;
        uVar8 = *param_1;
        uVar9 = param_1[2];
        uVar12 = (uVar11 >> 7 ^ uVar8 >> 0xc) & uVar9;
        uVar17 = *(undefined8 *)(uVar8 + uVar12);
        uVar18 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar17 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar17 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar17 >> 8) < -1),-((char)uVar17 < -1))))))));
        if (uVar18 == 0) {
          lVar13 = 8;
          do {
            uVar12 = uVar12 + lVar13 & uVar9;
            uVar17 = *(undefined8 *)(uVar8 + uVar12);
            uVar18 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
            lVar13 = lVar13 + 8;
          } while (uVar18 == 0);
        }
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar9;
        bVar3 = (byte)uVar11 & 0x7f;
        *(byte *)(uVar8 + uVar12) = bVar3;
        *(byte *)(uVar8 + (uVar12 - 7 & uVar9) + (uVar9 & 7)) = bVar3;
        lVar13 = plVar6[1];
        plVar10 = (long *)(uVar16 + uVar12 * 0x58);
        *plVar10 = lVar7;
        plVar10[1] = lVar13;
        FUN_10a1d07cc(plVar10 + 2,plVar6 + 2);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a1d0bf4; end: 10a1d0c93;  */

ulong * FUN_10a1d0bf4(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 auStack_70 [16];
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_1[2];
  if ((uVar11 < 9) || (uVar11 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar18 = param_1[2];
      param_1[2] = uVar11 << 1 | 1;
      puVar8 = param_1;
      func_0x00010732f6dc();
      if (uVar18 != 0) {
        uVar11 = 0;
        uVar19 = param_1[1];
        do {
          if (-1 < *(char *)(uVar1 + uVar11)) {
            plVar9 = (long *)(uVar2 + uVar11 * 0x58);
            lVar10 = *plVar9;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar10;
            uVar12 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
                     ((long)&PTR_LOOP_110c8acd8 + lVar10) * -0x622015f714c7d297) + lVar10;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar12;
            uVar15 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297;
            uVar12 = *param_1;
            uVar13 = param_1[2];
            uVar16 = (uVar15 >> 7 ^ uVar12 >> 0xc) & uVar13;
            uVar20 = *(undefined8 *)(uVar12 + uVar16);
            uVar21 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar20 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
            if (uVar21 == 0) {
              lVar17 = 8;
              do {
                uVar16 = uVar16 + lVar17 & uVar13;
                uVar20 = *(undefined8 *)(uVar12 + uVar16);
                uVar21 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar20 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
                lVar17 = lVar17 + 8;
              } while (uVar21 == 0);
            }
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar16 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar13;
            bVar3 = (byte)uVar15 & 0x7f;
            *(byte *)(uVar12 + uVar16) = bVar3;
            *(byte *)(uVar12 + (uVar16 - 7 & uVar13) + (uVar13 & 7)) = bVar3;
            lVar17 = plVar9[1];
            plVar14 = (long *)(uVar19 + uVar16 * 0x58);
            *plVar14 = lVar10;
            plVar14[1] = lVar17;
            FUN_10a1d07cc(plVar14 + 2,plVar9 + 2);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar18);
        puVar8 = (ulong *)(uVar1 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar8);
        return puVar8;
      }
      return puVar8;
    }
  }
  else {
    param_2 = (long *)&UNK_110bad6e0;
    FUN_10ae6c914(param_1,&UNK_110bad6e0,auStack_70);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uVar11 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar11;
  uVar11 = (SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar11 * -0x622015f714c7d297) +
           *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar11;
  return (ulong *)(SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar11 * -0x622015f714c7d297);
}



/* Entry: 10a1d0c94; end: 10a1d0ce7;  */

ulong FUN_10a1d0c94(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a1d0ce8; end: 10a1d0dcb;  */

undefined1  [16] FUN_10a1d0ce8(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  byte bVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  undefined1 auVar19 [16];
  
  lVar7 = 0;
  uVar8 = *param_1;
  Hint_Prefetch(uVar8,0,2,0);
  lVar9 = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar9;
  uVar4 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + lVar9) * -0x622015f714c7d297) + lVar9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4;
  uVar4 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar4 * -0x622015f714c7d297;
  bVar5 = (byte)uVar4 & 0x7f;
  uVar4 = uVar4 >> 7 ^ uVar8 >> 0xc;
  while( true ) {
    uVar4 = uVar4 & param_1[2];
    uVar11 = *(undefined8 *)(uVar8 + uVar4);
    bVar12 = (byte)((ulong)uVar11 >> 8);
    bVar13 = (byte)((ulong)uVar11 >> 0x10);
    bVar14 = (byte)((ulong)uVar11 >> 0x18);
    bVar15 = (byte)((ulong)uVar11 >> 0x20);
    bVar16 = (byte)((ulong)uVar11 >> 0x28);
    bVar17 = (byte)((ulong)uVar11 >> 0x30);
    bVar18 = (byte)((ulong)uVar11 >> 0x38);
    uVar10 = CONCAT17(-(bVar18 == bVar5),
                      CONCAT16(-(bVar17 == bVar5),
                               CONCAT15(-(bVar16 == bVar5),
                                        CONCAT14(-(bVar15 == bVar5),
                                                 CONCAT13(-(bVar14 == bVar5),
                                                          CONCAT12(-(bVar13 == bVar5),
                                                                   CONCAT11(-(bVar12 == bVar5),
                                                                            -((byte)uVar11 == bVar5)
                                                                           ))))))) &
             0x8080808080808080;
    if (uVar10 != 0) {
      do {
        uVar1 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar6 = (ulong *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]
                          );
        if (*(long *)(param_1[1] + (long)puVar6 * 8) == lVar9) {
          uVar11 = 0;
          goto LAB_10a1d0dc0;
        }
        uVar10 = uVar10 - 1 & uVar10;
      } while (uVar10 != 0);
    }
    if (CONCAT17(-(bVar18 == 0x80),
                 CONCAT16(-(bVar17 == 0x80),
                          CONCAT15(-(bVar16 == 0x80),
                                   CONCAT14(-(bVar15 == 0x80),
                                            CONCAT13(-(bVar14 == 0x80),
                                                     CONCAT12(-(bVar13 == 0x80),
                                                              CONCAT11(-(bVar12 == 0x80),
                                                                       -((byte)uVar11 == 0x80)))))))
                ) != 0) break;
    lVar7 = lVar7 + 8;
    uVar4 = lVar7 + uVar4;
  }
  FUN_10a1d0dcc();
  uVar11 = 1;
  puVar6 = param_1;
LAB_10a1d0dc0:
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar6;
  return auVar19;
}



/* Entry: 10a1d0dcc; end: 10a1d0ebb;  */

void FUN_10a1d0dcc(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a1d0fdc(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a1d0ebc; end: 10a1d0fdb;  */

void FUN_10a1d0ebc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar14 = param_1[2];
  param_1[2] = param_2;
  func_0x000107c28444();
  if (uVar14 != 0) {
    uVar6 = 0;
    uVar7 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar6)) {
        lVar8 = *(long *)(uVar2 + uVar6 * 8);
        uVar9 = (long)&PTR_LOOP_110c8acd8 + lVar8;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar9;
        uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297) +
                lVar8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar9;
        uVar11 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
        uVar9 = *param_1;
        uVar10 = param_1[2];
        uVar12 = (uVar11 >> 7 ^ uVar9 >> 0xc) & uVar10;
        uVar15 = *(undefined8 *)(uVar9 + uVar12);
        uVar13 = CONCAT17(-((char)((ulong)uVar15 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar15 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar15 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar15 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar15 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar15 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar15 >> 8) < -1),-((char)uVar15 < -1))))))));
        if (uVar13 == 0) {
          lVar8 = 8;
          do {
            uVar12 = uVar12 + lVar8 & uVar10;
            uVar15 = *(undefined8 *)(uVar9 + uVar12);
            uVar13 = CONCAT17(-((char)((ulong)uVar15 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar15 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar15 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar15 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar15 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar15 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar15 >> 8) < -1),
                                                           -((char)uVar15 < -1))))))));
            lVar8 = lVar8 + 8;
          } while (uVar13 == 0);
        }
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar10;
        bVar3 = (byte)uVar11 & 0x7f;
        *(byte *)(uVar9 + uVar12) = bVar3;
        *(byte *)(uVar9 + (uVar12 - 7 & uVar10) + (uVar10 & 7)) = bVar3;
        *(undefined8 *)(uVar7 + uVar12 * 8) = *(undefined8 *)(uVar2 + uVar6 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a1d0fdc; end: 10a1d107b;  */

ulong * FUN_10a1d0fdc(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_1[2];
  if ((uVar10 < 9) || (uVar10 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar17 = param_1[2];
      param_1[2] = uVar10 << 1 | 1;
      puVar8 = param_1;
      func_0x000107c28444();
      if (uVar17 != 0) {
        uVar10 = 0;
        uVar11 = param_1[1];
        do {
          if (-1 < *(char *)(uVar1 + uVar10)) {
            lVar9 = *(long *)(uVar2 + uVar10 * 8);
            uVar12 = (long)&PTR_LOOP_110c8acd8 + lVar9;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar12;
            uVar12 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297)
                     + lVar9;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar12;
            uVar14 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297;
            uVar12 = *param_1;
            uVar13 = param_1[2];
            uVar15 = (uVar14 >> 7 ^ uVar12 >> 0xc) & uVar13;
            uVar18 = *(undefined8 *)(uVar12 + uVar15);
            uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar18 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
            if (uVar16 == 0) {
              lVar9 = 8;
              do {
                uVar15 = uVar15 + lVar9 & uVar13;
                uVar18 = *(undefined8 *)(uVar12 + uVar15);
                uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar18 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
                lVar9 = lVar9 + 8;
              } while (uVar16 == 0);
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar15 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar13;
            bVar3 = (byte)uVar14 & 0x7f;
            *(byte *)(uVar12 + uVar15) = bVar3;
            *(byte *)(uVar12 + (uVar15 - 7 & uVar13) + (uVar13 & 7)) = bVar3;
            *(undefined8 *)(uVar11 + uVar15 * 8) = *(undefined8 *)(uVar2 + uVar10 * 8);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar17);
        puVar8 = (ulong *)(uVar1 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar8);
        return puVar8;
      }
      return puVar8;
    }
  }
  else {
    param_2 = (long *)&UNK_110bad700;
    FUN_10ae6c914(param_1,&UNK_110bad700,&stack0xffffffffffffffe0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uVar10 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar10;
  uVar10 = (SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297) +
           *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar10;
  return (ulong *)(SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297);
}



/* Entry: 10a1d107c; end: 10a1d10bb;  */

ulong FUN_10a1d107c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a1d10bc; end: 10a1d120b;  */

void FUN_10a1d10bc(long *param_1,ulong *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar14;
  byte bVar21;
  
  lVar8 = 0;
  lVar9 = *param_3;
  uVar5 = *param_2;
  Hint_Prefetch(uVar5,0,2,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar9;
  uVar11 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
           ((long)&PTR_LOOP_110c8acd8 + lVar9) * -0x622015f714c7d297) + lVar9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar11;
  uVar4 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar11 * -0x622015f714c7d297;
  uVar11 = uVar4 >> 7 ^ uVar5 >> 0xc;
  bVar10 = (byte)uVar4 & 0x7f;
  while( true ) {
    uVar11 = uVar11 & param_2[2];
    uVar14 = *(undefined8 *)(uVar5 + uVar11);
    bVar15 = (byte)((ulong)uVar14 >> 8);
    bVar16 = (byte)((ulong)uVar14 >> 0x10);
    bVar17 = (byte)((ulong)uVar14 >> 0x18);
    bVar18 = (byte)((ulong)uVar14 >> 0x20);
    bVar19 = (byte)((ulong)uVar14 >> 0x28);
    bVar20 = (byte)((ulong)uVar14 >> 0x30);
    bVar21 = (byte)((ulong)uVar14 >> 0x38);
    uVar4 = CONCAT17(-(bVar21 == bVar10),
                     CONCAT16(-(bVar20 == bVar10),
                              CONCAT15(-(bVar19 == bVar10),
                                       CONCAT14(-(bVar18 == bVar10),
                                                CONCAT13(-(bVar17 == bVar10),
                                                         CONCAT12(-(bVar16 == bVar10),
                                                                  CONCAT11(-(bVar15 == bVar10),
                                                                           -((byte)uVar14 == bVar10)
                                                                          ))))))) &
            0x8080808080808080;
    if (uVar4 != 0) {
      uVar12 = param_2[1];
      do {
        uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar13 = (ulong *)(uVar11 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                           param_2[2]);
        if (*(long *)(uVar12 + (long)puVar13 * 0x58) == lVar9) {
          uVar7 = 0;
          goto LAB_10a1d11e4;
        }
        uVar4 = uVar4 - 1 & uVar4;
      } while (uVar4 != 0);
    }
    if (CONCAT17(-(bVar21 == 0x80),
                 CONCAT16(-(bVar20 == 0x80),
                          CONCAT15(-(bVar19 == 0x80),
                                   CONCAT14(-(bVar18 == 0x80),
                                            CONCAT13(-(bVar17 == 0x80),
                                                     CONCAT12(-(bVar16 == 0x80),
                                                              CONCAT11(-(bVar15 == 0x80),
                                                                       -((byte)uVar14 == 0x80)))))))
                ) != 0) break;
    lVar8 = lVar8 + 8;
    uVar11 = lVar8 + uVar11;
  }
  puVar13 = param_2;
  FUN_10a1d120c();
  plVar6 = (long *)(param_2[1] + (long)puVar13 * 0x58);
  lVar8 = *param_4;
  *plVar6 = *param_3;
  plVar6[1] = lVar8;
  FUN_10a1d07cc(plVar6 + 2,param_4 + 1);
  uVar5 = *param_2;
  uVar12 = param_2[1];
  uVar7 = 1;
LAB_10a1d11e4:
  *param_1 = uVar5 + (long)puVar13;
  param_1[1] = uVar12 + (long)puVar13 * 0x58;
  *(undefined1 *)(param_1 + 2) = uVar7;
  return;
}



/* Entry: 10a1d120c; end: 10a1d12fb;  */

void FUN_10a1d120c(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a1d145c(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a1d12fc; end: 10a1d145b;  */

void FUN_10a1d12fc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar14 = param_1[2];
  param_1[2] = param_2;
  func_0x00010732f6dc();
  if (uVar14 != 0) {
    uVar15 = 0;
    uVar16 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar15)) {
        plVar6 = (long *)(uVar2 + uVar15 * 0x58);
        lVar7 = *plVar6;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar7;
        uVar8 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
                ((long)&PTR_LOOP_110c8acd8 + lVar7) * -0x622015f714c7d297) + lVar7;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar8;
        uVar11 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297;
        uVar8 = *param_1;
        uVar9 = param_1[2];
        uVar12 = (uVar11 >> 7 ^ uVar8 >> 0xc) & uVar9;
        uVar17 = *(undefined8 *)(uVar8 + uVar12);
        uVar18 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar17 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar17 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar17 >> 8) < -1),-((char)uVar17 < -1))))))));
        if (uVar18 == 0) {
          lVar13 = 8;
          do {
            uVar12 = uVar12 + lVar13 & uVar9;
            uVar17 = *(undefined8 *)(uVar8 + uVar12);
            uVar18 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
            lVar13 = lVar13 + 8;
          } while (uVar18 == 0);
        }
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar9;
        bVar3 = (byte)uVar11 & 0x7f;
        *(byte *)(uVar8 + uVar12) = bVar3;
        *(byte *)(uVar8 + (uVar12 - 7 & uVar9) + (uVar9 & 7)) = bVar3;
        lVar13 = plVar6[1];
        plVar10 = (long *)(uVar16 + uVar12 * 0x58);
        *plVar10 = lVar7;
        plVar10[1] = lVar13;
        FUN_10a1d07cc(plVar10 + 2,plVar6 + 2);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a1d145c; end: 10a1d14fb;  */

ulong * FUN_10a1d145c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 auStack_70 [16];
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_1[2];
  if ((uVar11 < 9) || (uVar11 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar18 = param_1[2];
      param_1[2] = uVar11 << 1 | 1;
      puVar8 = param_1;
      func_0x00010732f6dc();
      if (uVar18 != 0) {
        uVar11 = 0;
        uVar19 = param_1[1];
        do {
          if (-1 < *(char *)(uVar1 + uVar11)) {
            plVar9 = (long *)(uVar2 + uVar11 * 0x58);
            lVar10 = *plVar9;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar10;
            uVar12 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
                     ((long)&PTR_LOOP_110c8acd8 + lVar10) * -0x622015f714c7d297) + lVar10;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar12;
            uVar15 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297;
            uVar12 = *param_1;
            uVar13 = param_1[2];
            uVar16 = (uVar15 >> 7 ^ uVar12 >> 0xc) & uVar13;
            uVar20 = *(undefined8 *)(uVar12 + uVar16);
            uVar21 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar20 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
            if (uVar21 == 0) {
              lVar17 = 8;
              do {
                uVar16 = uVar16 + lVar17 & uVar13;
                uVar20 = *(undefined8 *)(uVar12 + uVar16);
                uVar21 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar20 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
                lVar17 = lVar17 + 8;
              } while (uVar21 == 0);
            }
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar16 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar13;
            bVar3 = (byte)uVar15 & 0x7f;
            *(byte *)(uVar12 + uVar16) = bVar3;
            *(byte *)(uVar12 + (uVar16 - 7 & uVar13) + (uVar13 & 7)) = bVar3;
            lVar17 = plVar9[1];
            plVar14 = (long *)(uVar19 + uVar16 * 0x58);
            *plVar14 = lVar10;
            plVar14[1] = lVar17;
            FUN_10a1d07cc(plVar14 + 2,plVar9 + 2);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar18);
        puVar8 = (ulong *)(uVar1 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar8);
        return puVar8;
      }
      return puVar8;
    }
  }
  else {
    param_2 = (long *)&UNK_110bad720;
    FUN_10ae6c914(param_1,&UNK_110bad720,auStack_70);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uVar11 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar11;
  uVar11 = (SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar11 * -0x622015f714c7d297) +
           *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar11;
  return (ulong *)(SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar11 * -0x622015f714c7d297);
}



/* Entry: 10a1d14fc; end: 10a1d154f;  */

ulong FUN_10a1d14fc(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a1d1550; end: 10a1d1633;  */

undefined1  [16] FUN_10a1d1550(ulong *param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  undefined1 auVar19 [16];
  
  lVar8 = 0;
  uVar9 = *param_1;
  Hint_Prefetch(uVar9,0,2,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + param_2;
  uVar6 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + param_2) * -0x622015f714c7d297) + param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  uVar4 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar6 * -0x622015f714c7d297;
  bVar5 = (byte)uVar4 & 0x7f;
  uVar6 = uVar9 >> 0xc ^ uVar4 >> 7;
  while( true ) {
    uVar6 = uVar6 & param_1[2];
    uVar11 = *(undefined8 *)(uVar9 + uVar6);
    bVar12 = (byte)((ulong)uVar11 >> 8);
    bVar13 = (byte)((ulong)uVar11 >> 0x10);
    bVar14 = (byte)((ulong)uVar11 >> 0x18);
    bVar15 = (byte)((ulong)uVar11 >> 0x20);
    bVar16 = (byte)((ulong)uVar11 >> 0x28);
    bVar17 = (byte)((ulong)uVar11 >> 0x30);
    bVar18 = (byte)((ulong)uVar11 >> 0x38);
    uVar10 = CONCAT17(-(bVar18 == bVar5),
                      CONCAT16(-(bVar17 == bVar5),
                               CONCAT15(-(bVar16 == bVar5),
                                        CONCAT14(-(bVar15 == bVar5),
                                                 CONCAT13(-(bVar14 == bVar5),
                                                          CONCAT12(-(bVar13 == bVar5),
                                                                   CONCAT11(-(bVar12 == bVar5),
                                                                            -((byte)uVar11 == bVar5)
                                                                           ))))))) &
             0x8080808080808080;
    if (uVar10 != 0) {
      do {
        uVar1 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar7 = (ulong *)(uVar6 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]
                          );
        if (*(long *)(param_1[1] + (long)puVar7 * 8) == param_2) {
          uVar11 = 0;
          goto LAB_10a1d1628;
        }
        uVar10 = uVar10 - 1 & uVar10;
      } while (uVar10 != 0);
    }
    if (CONCAT17(-(bVar18 == 0x80),
                 CONCAT16(-(bVar17 == 0x80),
                          CONCAT15(-(bVar16 == 0x80),
                                   CONCAT14(-(bVar15 == 0x80),
                                            CONCAT13(-(bVar14 == 0x80),
                                                     CONCAT12(-(bVar13 == 0x80),
                                                              CONCAT11(-(bVar12 == 0x80),
                                                                       -((byte)uVar11 == 0x80)))))))
                ) != 0) break;
    lVar8 = lVar8 + 8;
    uVar6 = lVar8 + uVar6;
  }
  FUN_10a1d1634(param_1,uVar4);
  uVar11 = 1;
  puVar7 = param_1;
LAB_10a1d1628:
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar7;
  return auVar19;
}



/* Entry: 10a1d1634; end: 10a1d1723;  */

void FUN_10a1d1634(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a1d1844(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a1d1724; end: 10a1d1843;  */

void FUN_10a1d1724(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar14 = param_1[2];
  param_1[2] = param_2;
  func_0x000107c28444();
  if (uVar14 != 0) {
    uVar6 = 0;
    uVar7 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar6)) {
        lVar8 = *(long *)(uVar2 + uVar6 * 8);
        uVar9 = (long)&PTR_LOOP_110c8acd8 + lVar8;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar9;
        uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297) +
                lVar8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar9;
        uVar11 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
        uVar9 = *param_1;
        uVar10 = param_1[2];
        uVar12 = (uVar11 >> 7 ^ uVar9 >> 0xc) & uVar10;
        uVar15 = *(undefined8 *)(uVar9 + uVar12);
        uVar13 = CONCAT17(-((char)((ulong)uVar15 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar15 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar15 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar15 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar15 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar15 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar15 >> 8) < -1),-((char)uVar15 < -1))))))));
        if (uVar13 == 0) {
          lVar8 = 8;
          do {
            uVar12 = uVar12 + lVar8 & uVar10;
            uVar15 = *(undefined8 *)(uVar9 + uVar12);
            uVar13 = CONCAT17(-((char)((ulong)uVar15 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar15 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar15 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar15 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar15 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar15 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar15 >> 8) < -1),
                                                           -((char)uVar15 < -1))))))));
            lVar8 = lVar8 + 8;
          } while (uVar13 == 0);
        }
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar10;
        bVar3 = (byte)uVar11 & 0x7f;
        *(byte *)(uVar9 + uVar12) = bVar3;
        *(byte *)(uVar9 + (uVar12 - 7 & uVar10) + (uVar10 & 7)) = bVar3;
        *(undefined8 *)(uVar7 + uVar12 * 8) = *(undefined8 *)(uVar2 + uVar6 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a1d1844; end: 10a1d18e3;  */

ulong * FUN_10a1d1844(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_1[2];
  if ((uVar10 < 9) || (uVar10 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar17 = param_1[2];
      param_1[2] = uVar10 << 1 | 1;
      puVar8 = param_1;
      func_0x000107c28444();
      if (uVar17 != 0) {
        uVar10 = 0;
        uVar11 = param_1[1];
        do {
          if (-1 < *(char *)(uVar1 + uVar10)) {
            lVar9 = *(long *)(uVar2 + uVar10 * 8);
            uVar12 = (long)&PTR_LOOP_110c8acd8 + lVar9;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar12;
            uVar12 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297)
                     + lVar9;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar12;
            uVar14 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297;
            uVar12 = *param_1;
            uVar13 = param_1[2];
            uVar15 = (uVar14 >> 7 ^ uVar12 >> 0xc) & uVar13;
            uVar18 = *(undefined8 *)(uVar12 + uVar15);
            uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar18 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
            if (uVar16 == 0) {
              lVar9 = 8;
              do {
                uVar15 = uVar15 + lVar9 & uVar13;
                uVar18 = *(undefined8 *)(uVar12 + uVar15);
                uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar18 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
                lVar9 = lVar9 + 8;
              } while (uVar16 == 0);
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar15 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar13;
            bVar3 = (byte)uVar14 & 0x7f;
            *(byte *)(uVar12 + uVar15) = bVar3;
            *(byte *)(uVar12 + (uVar15 - 7 & uVar13) + (uVar13 & 7)) = bVar3;
            *(undefined8 *)(uVar11 + uVar15 * 8) = *(undefined8 *)(uVar2 + uVar10 * 8);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar17);
        puVar8 = (ulong *)(uVar1 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar8);
        return puVar8;
      }
      return puVar8;
    }
  }
  else {
    param_2 = (long *)&UNK_110bad740;
    FUN_10ae6c914(param_1,&UNK_110bad740,&stack0xffffffffffffffe0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uVar10 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar10;
  uVar10 = (SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297) +
           *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar10;
  return (ulong *)(SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297);
}



/* Entry: 10a1d18e4; end: 10a1d1adb;  */

ulong FUN_10a1d18e4(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a1d1adc; end: 10a1d1bcb;  */

void FUN_10a1d1adc(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a1d1cec(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a1d1bcc; end: 10a1d1ceb;  */

void FUN_10a1d1bcc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar14 = param_1[2];
  param_1[2] = param_2;
  func_0x000107c28444();
  if (uVar14 != 0) {
    uVar6 = 0;
    uVar7 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar6)) {
        lVar8 = *(long *)(uVar2 + uVar6 * 8);
        uVar9 = (long)&PTR_LOOP_110c8acd8 + lVar8;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar9;
        uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297) +
                lVar8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar9;
        uVar11 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
        uVar9 = *param_1;
        uVar10 = param_1[2];
        uVar12 = (uVar11 >> 7 ^ uVar9 >> 0xc) & uVar10;
        uVar15 = *(undefined8 *)(uVar9 + uVar12);
        uVar13 = CONCAT17(-((char)((ulong)uVar15 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar15 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar15 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar15 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar15 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar15 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar15 >> 8) < -1),-((char)uVar15 < -1))))))));
        if (uVar13 == 0) {
          lVar8 = 8;
          do {
            uVar12 = uVar12 + lVar8 & uVar10;
            uVar15 = *(undefined8 *)(uVar9 + uVar12);
            uVar13 = CONCAT17(-((char)((ulong)uVar15 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar15 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar15 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar15 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar15 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar15 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar15 >> 8) < -1),
                                                           -((char)uVar15 < -1))))))));
            lVar8 = lVar8 + 8;
          } while (uVar13 == 0);
        }
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar10;
        bVar3 = (byte)uVar11 & 0x7f;
        *(byte *)(uVar9 + uVar12) = bVar3;
        *(byte *)(uVar9 + (uVar12 - 7 & uVar10) + (uVar10 & 7)) = bVar3;
        *(undefined8 *)(uVar7 + uVar12 * 8) = *(undefined8 *)(uVar2 + uVar6 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a1d1cec; end: 10a1d1d8b;  */

ulong * FUN_10a1d1cec(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_1[2];
  if ((uVar10 < 9) || (uVar10 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar17 = param_1[2];
      param_1[2] = uVar10 << 1 | 1;
      puVar8 = param_1;
      func_0x000107c28444();
      if (uVar17 != 0) {
        uVar10 = 0;
        uVar11 = param_1[1];
        do {
          if (-1 < *(char *)(uVar1 + uVar10)) {
            lVar9 = *(long *)(uVar2 + uVar10 * 8);
            uVar12 = (long)&PTR_LOOP_110c8acd8 + lVar9;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar12;
            uVar12 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297)
                     + lVar9;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar12;
            uVar14 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297;
            uVar12 = *param_1;
            uVar13 = param_1[2];
            uVar15 = (uVar14 >> 7 ^ uVar12 >> 0xc) & uVar13;
            uVar18 = *(undefined8 *)(uVar12 + uVar15);
            uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar18 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
            if (uVar16 == 0) {
              lVar9 = 8;
              do {
                uVar15 = uVar15 + lVar9 & uVar13;
                uVar18 = *(undefined8 *)(uVar12 + uVar15);
                uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar18 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
                lVar9 = lVar9 + 8;
              } while (uVar16 == 0);
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar15 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar13;
            bVar3 = (byte)uVar14 & 0x7f;
            *(byte *)(uVar12 + uVar15) = bVar3;
            *(byte *)(uVar12 + (uVar15 - 7 & uVar13) + (uVar13 & 7)) = bVar3;
            *(undefined8 *)(uVar11 + uVar15 * 8) = *(undefined8 *)(uVar2 + uVar10 * 8);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar17);
        puVar8 = (ulong *)(uVar1 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar8);
        return puVar8;
      }
      return puVar8;
    }
  }
  else {
    param_2 = (long *)&UNK_110bad760;
    FUN_10ae6c914(param_1,&UNK_110bad760,&stack0xffffffffffffffe0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uVar10 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar10;
  uVar10 = (SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297) +
           *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar10;
  return (ulong *)(SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297);
}



/* Entry: 10a1d1d8c; end: 10a1d1dcb;  */

ulong FUN_10a1d1d8c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a1d1dcc; end: 10a1d1eaf;  */

undefined1  [16] FUN_10a1d1dcc(ulong *param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  undefined1 auVar19 [16];
  
  lVar8 = 0;
  uVar9 = *param_1;
  Hint_Prefetch(uVar9,0,2,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + param_2;
  uVar6 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + param_2) * -0x622015f714c7d297) + param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  uVar4 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar6 * -0x622015f714c7d297;
  bVar5 = (byte)uVar4 & 0x7f;
  uVar6 = uVar9 >> 0xc ^ uVar4 >> 7;
  while( true ) {
    uVar6 = uVar6 & param_1[2];
    uVar11 = *(undefined8 *)(uVar9 + uVar6);
    bVar12 = (byte)((ulong)uVar11 >> 8);
    bVar13 = (byte)((ulong)uVar11 >> 0x10);
    bVar14 = (byte)((ulong)uVar11 >> 0x18);
    bVar15 = (byte)((ulong)uVar11 >> 0x20);
    bVar16 = (byte)((ulong)uVar11 >> 0x28);
    bVar17 = (byte)((ulong)uVar11 >> 0x30);
    bVar18 = (byte)((ulong)uVar11 >> 0x38);
    uVar10 = CONCAT17(-(bVar18 == bVar5),
                      CONCAT16(-(bVar17 == bVar5),
                               CONCAT15(-(bVar16 == bVar5),
                                        CONCAT14(-(bVar15 == bVar5),
                                                 CONCAT13(-(bVar14 == bVar5),
                                                          CONCAT12(-(bVar13 == bVar5),
                                                                   CONCAT11(-(bVar12 == bVar5),
                                                                            -((byte)uVar11 == bVar5)
                                                                           ))))))) &
             0x8080808080808080;
    if (uVar10 != 0) {
      do {
        uVar1 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar7 = (ulong *)(uVar6 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]
                          );
        if (*(long *)(param_1[1] + (long)puVar7 * 8) == param_2) {
          uVar11 = 0;
          goto LAB_10a1d1ea4;
        }
        uVar10 = uVar10 - 1 & uVar10;
      } while (uVar10 != 0);
    }
    if (CONCAT17(-(bVar18 == 0x80),
                 CONCAT16(-(bVar17 == 0x80),
                          CONCAT15(-(bVar16 == 0x80),
                                   CONCAT14(-(bVar15 == 0x80),
                                            CONCAT13(-(bVar14 == 0x80),
                                                     CONCAT12(-(bVar13 == 0x80),
                                                              CONCAT11(-(bVar12 == 0x80),
                                                                       -((byte)uVar11 == 0x80)))))))
                ) != 0) break;
    lVar8 = lVar8 + 8;
    uVar6 = lVar8 + uVar6;
  }
  FUN_10a1d1adc(param_1,uVar4);
  uVar11 = 1;
  puVar7 = param_1;
LAB_10a1d1ea4:
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar7;
  return auVar19;
}



/* Entry: 10a1d1eb0; end: 10a1d1efb;  */

ulong FUN_10a1d1eb0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a1d1efc; end: 10a1d1f4b;  */

void FUN_10a1d1efc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10a1d1f4c(param_1 + 1,param_2 + 1);
  func_0x00010a1d1f68(param_1 + 5,param_2 + 5);
  if (param_2[7] != 0) {
    __ZdlPv(param_2[5] + -8);
  }
  if (param_2[3] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2[1] + -8);
    return;
  }
  return;
}



/* Entry: 10a1d1f4c; end: 10a1d221b;  */

void FUN_10a1d1f4c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a1d221c; end: 10a1d23b3;  */

void FUN_10a1d221c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10a1d1f4c(param_1 + 1,param_2 + 1);
  func_0x00010a1d1f68(param_1 + 5,param_2 + 5);
  if (param_2[7] != 0) {
    __ZdlPv(param_2[5] + -8);
  }
  if (param_2[3] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2[1] + -8);
    return;
  }
  return;
}



/* Entry: 10a1d23b4; end: 10a1d24a3;  */

void FUN_10a1d23b4(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a1d25f4(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a1d24a4; end: 10a1d25f3;  */

void FUN_10a1d24a4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar11 = param_1[2];
  param_1[2] = param_2;
  func_0x000107324d80();
  if (uVar11 != 0) {
    uVar12 = 0;
    uVar13 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar12)) {
        lVar6 = *(long *)(uVar2 + uVar12 * 0x48);
        uVar7 = (long)&PTR_LOOP_110c8acd8 + lVar6;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar7;
        uVar7 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar7 * -0x622015f714c7d297) +
                lVar6;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar7;
        uVar9 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar7 * -0x622015f714c7d297;
        uVar7 = *param_1;
        uVar8 = param_1[2];
        uVar10 = (uVar9 >> 7 ^ uVar7 >> 0xc) & uVar8;
        uVar14 = *(undefined8 *)(uVar7 + uVar10);
        uVar15 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar14 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar14 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar14 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar14 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar14 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar14 >> 8) < -1),-((char)uVar14 < -1))))))));
        if (uVar15 == 0) {
          lVar6 = 8;
          do {
            uVar10 = uVar10 + lVar6 & uVar8;
            uVar14 = *(undefined8 *)(uVar7 + uVar10);
            uVar15 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar14 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar14 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar14 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar14 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) < -1),
                                                           -((char)uVar14 < -1))))))));
            lVar6 = lVar6 + 8;
          } while (uVar15 == 0);
        }
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar8;
        bVar3 = (byte)uVar9 & 0x7f;
        *(byte *)(uVar7 + uVar10) = bVar3;
        *(byte *)(uVar7 + (uVar10 - 7 & uVar8) + (uVar8 & 7)) = bVar3;
        FUN_10a1d221c(uVar13 + uVar10 * 0x48);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a1d25f4; end: 10a1d277b;  */

undefined1  [16] FUN_10a1d25f4(ulong *param_1,long *param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint6 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  byte bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_1[2];
  if ((uVar9 < 9) || (uVar9 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      plVar6 = (long *)(uVar9 << 1 | 1);
      uVar9 = *param_1;
      uVar13 = param_1[1];
      uVar16 = param_1[2];
      param_1[2] = (ulong)plVar6;
      puVar10 = param_1;
      func_0x000107324d80();
      if (uVar16 != 0) {
        uVar17 = 0;
        uVar18 = param_1[1];
        do {
          if (-1 < *(char *)(uVar9 + uVar17)) {
            plVar6 = (long *)(uVar13 + uVar17 * 0x48);
            uVar7 = (long)&PTR_LOOP_110c8acd8 + *plVar6;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar7;
            uVar7 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar7 * -0x622015f714c7d297) +
                    *plVar6;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar7;
            uVar12 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar7 * -0x622015f714c7d297;
            uVar7 = *param_1;
            uVar11 = param_1[2];
            uVar14 = (uVar12 >> 7 ^ uVar7 >> 0xc) & uVar11;
            uVar20 = *(undefined8 *)(uVar7 + uVar14);
            uVar21 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar20 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
            if (uVar21 == 0) {
              lVar8 = 8;
              do {
                uVar14 = uVar14 + lVar8 & uVar11;
                uVar20 = *(undefined8 *)(uVar7 + uVar14);
                uVar21 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar20 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
                lVar8 = lVar8 + 8;
              } while (uVar21 == 0);
            }
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar11;
            bVar1 = (byte)uVar12 & 0x7f;
            *(byte *)(uVar7 + uVar14) = bVar1;
            *(byte *)(uVar7 + (uVar14 - 7 & uVar11) + (uVar11 & 7)) = bVar1;
            FUN_10a1d221c(uVar18 + uVar14 * 0x48);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar16);
        lVar8 = uVar9 - 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar8);
        auVar32._8_8_ = plVar6;
        auVar32._0_8_ = lVar8;
        return auVar32;
      }
      auVar29._8_8_ = plVar6;
      auVar29._0_8_ = puVar10;
      return auVar29;
    }
  }
  else {
    param_2 = (long *)&UNK_110bad7a0;
    FUN_10ae6c914(param_1,&UNK_110bad7a0,&stack0xffffffffffffffa0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      auVar30._8_8_ = param_2;
      auVar30._0_8_ = param_1;
      return auVar30;
    }
  }
  ___stack_chk_fail();
  lVar8 = 0;
  uVar13 = *param_1;
  Hint_Prefetch(uVar13,0,2,0);
  lVar15 = *param_2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar15;
  uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + lVar15) * -0x622015f714c7d297) + lVar15;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar9;
  uVar9 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
  bVar1 = (byte)uVar9;
  uVar19 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  uVar9 = uVar9 >> 7 ^ uVar13 >> 0xc;
  while( true ) {
    uVar9 = uVar9 & param_1[2];
    uVar20 = *(undefined8 *)(uVar13 + uVar9);
    cVar22 = (char)((ulong)uVar20 >> 8);
    cVar23 = (char)((ulong)uVar20 >> 0x10);
    cVar24 = (char)((ulong)uVar20 >> 0x18);
    cVar25 = (char)((ulong)uVar20 >> 0x20);
    cVar26 = (char)((ulong)uVar20 >> 0x28);
    bVar27 = (byte)((ulong)uVar20 >> 0x30);
    bVar28 = (byte)((ulong)uVar20 >> 0x38);
    uVar16 = CONCAT17(-(bVar28 == (bVar1 & 0x7f)),
                      CONCAT16(-(bVar27 == (bVar1 & 0x7f)),
                               CONCAT15(-(cVar26 == (char)(uVar19 >> 0x28)),
                                        CONCAT14(-(cVar25 == (char)(uVar19 >> 0x20)),
                                                 CONCAT13(-(cVar24 == (char)(uVar19 >> 0x18)),
                                                          CONCAT12(-(cVar23 ==
                                                                    (char)(uVar19 >> 0x10)),
                                                                   CONCAT11(-(cVar22 ==
                                                                             (char)(uVar19 >> 8)),
                                                                            -((char)uVar20 ==
                                                                             (char)uVar19)))))))) &
             0x8080808080808080;
    if (uVar16 != 0) {
      do {
        uVar17 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        puVar10 = (ulong *)(uVar9 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) &
                           param_1[2]);
        if (*(long *)(param_1[1] + (long)puVar10 * 0x10) == lVar15) {
          uVar20 = 0;
          goto LAB_10a1d2770;
        }
        uVar16 = uVar16 - 1 & uVar16;
      } while (uVar16 != 0);
    }
    if (CONCAT17(-(bVar28 == 0x80),
                 CONCAT16(-(bVar27 == 0x80),
                          CONCAT15(-(cVar26 == -0x80),
                                   CONCAT14(-(cVar25 == -0x80),
                                            CONCAT13(-(cVar24 == -0x80),
                                                     CONCAT12(-(cVar23 == -0x80),
                                                              CONCAT11(-(cVar22 == -0x80),
                                                                       -((char)uVar20 == -0x80))))))
                         )) != 0) break;
    lVar8 = lVar8 + 8;
    uVar9 = lVar8 + uVar9;
  }
  FUN_10a1d277c();
  uVar20 = 1;
  puVar10 = param_1;
LAB_10a1d2770:
  auVar31._8_8_ = uVar20;
  auVar31._0_8_ = puVar10;
  return auVar31;
}



/* Entry: 10a1d277c; end: 10a1d286b;  */

void FUN_10a1d277c(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a1d2990(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a1d286c; end: 10a1d298f;  */

void FUN_10a1d286c(ulong *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar16 = param_1[2];
  param_1[2] = param_2;
  func_0x000104ab30b8();
  if (uVar16 != 0) {
    uVar8 = 0;
    uVar9 = param_1[1];
    do {
      if (-1 < *(char *)(uVar2 + uVar8)) {
        plVar1 = (long *)(uVar3 + uVar8 * 0x10);
        uVar14 = (long)&PTR_LOOP_110c8acd8 + *plVar1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        uVar14 = (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297) +
                 *plVar1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        uVar12 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297;
        uVar10 = *param_1;
        uVar11 = param_1[2];
        uVar13 = (uVar12 >> 7 ^ uVar10 >> 0xc) & uVar11;
        uVar17 = *(undefined8 *)(uVar10 + uVar13);
        uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar17 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar17 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar17 >> 8) < -1),-((char)uVar17 < -1))))))));
        if (uVar14 == 0) {
          lVar15 = 8;
          do {
            uVar13 = uVar13 + lVar15 & uVar11;
            uVar17 = *(undefined8 *)(uVar10 + uVar13);
            uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
            lVar15 = lVar15 + 8;
          } while (uVar14 == 0);
        }
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar13 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar11;
        bVar4 = (byte)uVar12 & 0x7f;
        *(byte *)(uVar10 + uVar14) = bVar4;
        *(byte *)(uVar10 + (uVar14 - 7 & uVar11) + (uVar11 & 7)) = bVar4;
        lVar15 = *plVar1;
        plVar7 = (long *)(uVar9 + uVar14 * 0x10);
        plVar7[1] = plVar1[1];
        *plVar7 = lVar15;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar2 - 8);
    return;
  }
  return;
}



/* Entry: 10a1d2990; end: 10a1d2a2f;  */

ulong * FUN_10a1d2990(ulong *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_1[2];
  if ((uVar12 < 9) || (uVar12 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar19 = param_1[2];
      param_1[2] = uVar12 << 1 | 1;
      puVar10 = param_1;
      func_0x000104ab30b8();
      if (uVar19 != 0) {
        uVar12 = 0;
        uVar13 = param_1[1];
        do {
          if (-1 < *(char *)(uVar2 + uVar12)) {
            plVar1 = (long *)(uVar3 + uVar12 * 0x10);
            uVar18 = (long)&PTR_LOOP_110c8acd8 + *plVar1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar18;
            uVar18 = (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar18 * -0x622015f714c7d297)
                     + *plVar1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar18;
            uVar16 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar18 * -0x622015f714c7d297;
            uVar14 = *param_1;
            uVar15 = param_1[2];
            uVar17 = (uVar16 >> 7 ^ uVar14 >> 0xc) & uVar15;
            uVar20 = *(undefined8 *)(uVar14 + uVar17);
            uVar18 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar20 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
            if (uVar18 == 0) {
              lVar11 = 8;
              do {
                uVar17 = uVar17 + lVar11 & uVar15;
                uVar20 = *(undefined8 *)(uVar14 + uVar17);
                uVar18 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar20 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
                lVar11 = lVar11 + 8;
              } while (uVar18 == 0);
            }
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = uVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar15;
            bVar4 = (byte)uVar16 & 0x7f;
            *(byte *)(uVar14 + uVar18) = bVar4;
            *(byte *)(uVar14 + (uVar18 - 7 & uVar15) + (uVar15 & 7)) = bVar4;
            lVar11 = *plVar1;
            plVar9 = (long *)(uVar13 + uVar18 * 0x10);
            plVar9[1] = plVar1[1];
            *plVar9 = lVar11;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar19);
        puVar10 = (ulong *)(uVar2 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar10);
        return puVar10;
      }
      return puVar10;
    }
  }
  else {
    param_2 = (long *)&UNK_110bad7c0;
    FUN_10ae6c914(param_1,&UNK_110bad7c0,&stack0xffffffffffffffd8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uVar12 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar12;
  uVar12 = (SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297) +
           *param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar12;
  return (ulong *)(SUB168(auVar8 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297);
}



/* Entry: 10a1d2a30; end: 10a1d2a7b;  */

ulong FUN_10a1d2a30(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a1d2a7c; end: 10a1d2b63;  */

undefined1  [16] FUN_10a1d2a7c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  byte bVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  undefined1 auVar19 [16];
  
  lVar7 = 0;
  uVar8 = *param_1;
  Hint_Prefetch(uVar8,0,2,0);
  lVar9 = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar9;
  uVar4 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + lVar9) * -0x622015f714c7d297) + lVar9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4;
  uVar4 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar4 * -0x622015f714c7d297;
  bVar5 = (byte)uVar4 & 0x7f;
  uVar4 = uVar4 >> 7 ^ uVar8 >> 0xc;
  while( true ) {
    uVar4 = uVar4 & param_1[2];
    uVar11 = *(undefined8 *)(uVar8 + uVar4);
    bVar12 = (byte)((ulong)uVar11 >> 8);
    bVar13 = (byte)((ulong)uVar11 >> 0x10);
    bVar14 = (byte)((ulong)uVar11 >> 0x18);
    bVar15 = (byte)((ulong)uVar11 >> 0x20);
    bVar16 = (byte)((ulong)uVar11 >> 0x28);
    bVar17 = (byte)((ulong)uVar11 >> 0x30);
    bVar18 = (byte)((ulong)uVar11 >> 0x38);
    uVar10 = CONCAT17(-(bVar18 == bVar5),
                      CONCAT16(-(bVar17 == bVar5),
                               CONCAT15(-(bVar16 == bVar5),
                                        CONCAT14(-(bVar15 == bVar5),
                                                 CONCAT13(-(bVar14 == bVar5),
                                                          CONCAT12(-(bVar13 == bVar5),
                                                                   CONCAT11(-(bVar12 == bVar5),
                                                                            -((byte)uVar11 == bVar5)
                                                                           ))))))) &
             0x8080808080808080;
    if (uVar10 != 0) {
      do {
        uVar1 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar6 = (ulong *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]
                          );
        if (*(long *)(param_1[1] + (long)puVar6 * 0x10) == lVar9) {
          uVar11 = 0;
          goto LAB_10a1d2b58;
        }
        uVar10 = uVar10 - 1 & uVar10;
      } while (uVar10 != 0);
    }
    if (CONCAT17(-(bVar18 == 0x80),
                 CONCAT16(-(bVar17 == 0x80),
                          CONCAT15(-(bVar16 == 0x80),
                                   CONCAT14(-(bVar15 == 0x80),
                                            CONCAT13(-(bVar14 == 0x80),
                                                     CONCAT12(-(bVar13 == 0x80),
                                                              CONCAT11(-(bVar12 == 0x80),
                                                                       -((byte)uVar11 == 0x80)))))))
                ) != 0) break;
    lVar7 = lVar7 + 8;
    uVar4 = lVar7 + uVar4;
  }
  FUN_10a1d2b64();
  uVar11 = 1;
  puVar6 = param_1;
LAB_10a1d2b58:
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar6;
  return auVar19;
}



/* Entry: 10a1d2b64; end: 10a1d2c53;  */

void FUN_10a1d2b64(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a1d2d78(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a1d2c54; end: 10a1d2d77;  */

void FUN_10a1d2c54(ulong *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar16 = param_1[2];
  param_1[2] = param_2;
  func_0x000104ab30b8();
  if (uVar16 != 0) {
    uVar8 = 0;
    uVar9 = param_1[1];
    do {
      if (-1 < *(char *)(uVar2 + uVar8)) {
        plVar1 = (long *)(uVar3 + uVar8 * 0x10);
        uVar14 = (long)&PTR_LOOP_110c8acd8 + *plVar1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        uVar14 = (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297) +
                 *plVar1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        uVar12 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297;
        uVar10 = *param_1;
        uVar11 = param_1[2];
        uVar13 = (uVar12 >> 7 ^ uVar10 >> 0xc) & uVar11;
        uVar17 = *(undefined8 *)(uVar10 + uVar13);
        uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar17 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar17 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar17 >> 8) < -1),-((char)uVar17 < -1))))))));
        if (uVar14 == 0) {
          lVar15 = 8;
          do {
            uVar13 = uVar13 + lVar15 & uVar11;
            uVar17 = *(undefined8 *)(uVar10 + uVar13);
            uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
            lVar15 = lVar15 + 8;
          } while (uVar14 == 0);
        }
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar13 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar11;
        bVar4 = (byte)uVar12 & 0x7f;
        *(byte *)(uVar10 + uVar14) = bVar4;
        *(byte *)(uVar10 + (uVar14 - 7 & uVar11) + (uVar11 & 7)) = bVar4;
        lVar15 = *plVar1;
        plVar7 = (long *)(uVar9 + uVar14 * 0x10);
        plVar7[1] = plVar1[1];
        *plVar7 = lVar15;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar2 - 8);
    return;
  }
  return;
}



/* Entry: 10a1d2d78; end: 10a1d2e17;  */

ulong * FUN_10a1d2d78(ulong *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_1[2];
  if ((uVar12 < 9) || (uVar12 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar19 = param_1[2];
      param_1[2] = uVar12 << 1 | 1;
      puVar10 = param_1;
      func_0x000104ab30b8();
      if (uVar19 != 0) {
        uVar12 = 0;
        uVar13 = param_1[1];
        do {
          if (-1 < *(char *)(uVar2 + uVar12)) {
            plVar1 = (long *)(uVar3 + uVar12 * 0x10);
            uVar18 = (long)&PTR_LOOP_110c8acd8 + *plVar1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar18;
            uVar18 = (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar18 * -0x622015f714c7d297)
                     + *plVar1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar18;
            uVar16 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar18 * -0x622015f714c7d297;
            uVar14 = *param_1;
            uVar15 = param_1[2];
            uVar17 = (uVar16 >> 7 ^ uVar14 >> 0xc) & uVar15;
            uVar20 = *(undefined8 *)(uVar14 + uVar17);
            uVar18 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar20 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
            if (uVar18 == 0) {
              lVar11 = 8;
              do {
                uVar17 = uVar17 + lVar11 & uVar15;
                uVar20 = *(undefined8 *)(uVar14 + uVar17);
                uVar18 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar20 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar20 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar20 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar20 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar20 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar20 >> 8) < -1),
                                                           -((char)uVar20 < -1))))))));
                lVar11 = lVar11 + 8;
              } while (uVar18 == 0);
            }
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = uVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar15;
            bVar4 = (byte)uVar16 & 0x7f;
            *(byte *)(uVar14 + uVar18) = bVar4;
            *(byte *)(uVar14 + (uVar18 - 7 & uVar15) + (uVar15 & 7)) = bVar4;
            lVar11 = *plVar1;
            plVar9 = (long *)(uVar13 + uVar18 * 0x10);
            plVar9[1] = plVar1[1];
            *plVar9 = lVar11;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar19);
        puVar10 = (ulong *)(uVar2 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar10);
        return puVar10;
      }
      return puVar10;
    }
  }
  else {
    param_2 = (long *)&UNK_110bad7e0;
    FUN_10ae6c914(param_1,&UNK_110bad7e0,&stack0xffffffffffffffd8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uVar12 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar12;
  uVar12 = (SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297) +
           *param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar12;
  return (ulong *)(SUB168(auVar8 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297);
}



/* Entry: 10a1d2e18; end: 10a1d2ef7;  */

ulong FUN_10a1d2e18(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a1d2ef8; end: 10a1d303f;  */

void FUN_10a1d2ef8(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar14;
  byte bVar21;
  
  lVar9 = 0;
  lVar10 = *param_3;
  uVar6 = *param_2;
  Hint_Prefetch(uVar6,0,2,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar10;
  uVar12 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
           ((long)&PTR_LOOP_110c8acd8 + lVar10) * -0x622015f714c7d297) + lVar10;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar12;
  uVar5 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297;
  uVar12 = uVar5 >> 7 ^ uVar6 >> 0xc;
  bVar11 = (byte)uVar5 & 0x7f;
  while( true ) {
    uVar12 = uVar12 & param_2[2];
    uVar14 = *(undefined8 *)(uVar6 + uVar12);
    bVar15 = (byte)((ulong)uVar14 >> 8);
    bVar16 = (byte)((ulong)uVar14 >> 0x10);
    bVar17 = (byte)((ulong)uVar14 >> 0x18);
    bVar18 = (byte)((ulong)uVar14 >> 0x20);
    bVar19 = (byte)((ulong)uVar14 >> 0x28);
    bVar20 = (byte)((ulong)uVar14 >> 0x30);
    bVar21 = (byte)((ulong)uVar14 >> 0x38);
    uVar5 = CONCAT17(-(bVar21 == bVar11),
                     CONCAT16(-(bVar20 == bVar11),
                              CONCAT15(-(bVar19 == bVar11),
                                       CONCAT14(-(bVar18 == bVar11),
                                                CONCAT13(-(bVar17 == bVar11),
                                                         CONCAT12(-(bVar16 == bVar11),
                                                                  CONCAT11(-(bVar15 == bVar11),
                                                                           -((byte)uVar14 == bVar11)
                                                                          ))))))) &
            0x8080808080808080;
    if (uVar5 != 0) {
      uVar13 = param_2[1];
      do {
        uVar1 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar4 = (ulong *)(uVar12 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                          param_2[2]);
        if (*(long *)(uVar13 + (long)puVar4 * 0x48) == lVar10) {
          uVar8 = 0;
          goto LAB_10a1d301c;
        }
        uVar5 = uVar5 - 1 & uVar5;
      } while (uVar5 != 0);
    }
    if (CONCAT17(-(bVar21 == 0x80),
                 CONCAT16(-(bVar20 == 0x80),
                          CONCAT15(-(bVar19 == 0x80),
                                   CONCAT14(-(bVar18 == 0x80),
                                            CONCAT13(-(bVar17 == 0x80),
                                                     CONCAT12(-(bVar16 == 0x80),
                                                              CONCAT11(-(bVar15 == 0x80),
                                                                       -((byte)uVar14 == 0x80)))))))
                ) != 0) break;
    lVar9 = lVar9 + 8;
    uVar12 = lVar9 + uVar12;
  }
  puVar4 = param_2;
  FUN_10a1d3040();
  plVar7 = (long *)(param_2[1] + (long)puVar4 * 0x48);
  *plVar7 = *param_3;
  plVar7[1] = (long)&UNK_10e52b660;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = (long)&UNK_10e52b660;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[6] = 0;
  uVar6 = *param_2;
  uVar13 = param_2[1];
  uVar8 = 1;
LAB_10a1d301c:
  *param_1 = uVar6 + (long)puVar4;
  param_1[1] = uVar13 + (long)puVar4 * 0x48;
  *(undefined1 *)(param_1 + 2) = uVar8;
  return;
}



/* Entry: 10a1d3040; end: 10a1d312f;  */

void FUN_10a1d3040(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a1d3280(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a1d3130; end: 10a1d327f;  */

void FUN_10a1d3130(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar11 = param_1[2];
  param_1[2] = param_2;
  func_0x000107324d80();
  if (uVar11 != 0) {
    uVar12 = 0;
    uVar13 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar12)) {
        lVar6 = *(long *)(uVar2 + uVar12 * 0x48);
        uVar7 = (long)&PTR_LOOP_110c8acd8 + lVar6;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar7;
        uVar7 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar7 * -0x622015f714c7d297) +
                lVar6;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar7;
        uVar9 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar7 * -0x622015f714c7d297;
        uVar7 = *param_1;
        uVar8 = param_1[2];
        uVar10 = (uVar9 >> 7 ^ uVar7 >> 0xc) & uVar8;
        uVar14 = *(undefined8 *)(uVar7 + uVar10);
        uVar15 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar14 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar14 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar14 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar14 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar14 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar14 >> 8) < -1),-((char)uVar14 < -1))))))));
        if (uVar15 == 0) {
          lVar6 = 8;
          do {
            uVar10 = uVar10 + lVar6 & uVar8;
            uVar14 = *(undefined8 *)(uVar7 + uVar10);
            uVar15 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar14 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar14 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar14 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar14 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) < -1),
                                                           -((char)uVar14 < -1))))))));
            lVar6 = lVar6 + 8;
          } while (uVar15 == 0);
        }
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar8;
        bVar3 = (byte)uVar9 & 0x7f;
        *(byte *)(uVar7 + uVar10) = bVar3;
        *(byte *)(uVar7 + (uVar10 - 7 & uVar8) + (uVar8 & 7)) = bVar3;
        FUN_10a1d1efc(uVar13 + uVar10 * 0x48);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a1d3280; end: 10a1d331f;  */

undefined1  [16] FUN_10a1d3280(ulong *param_1,long *param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint6 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  byte bVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  puVar7 = &stack0xffffffffffffffa0;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_1[2];
  if ((uVar10 < 9) || (uVar10 * 0x19 < param_1[3] << 5)) {
    puVar7 = param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      plVar6 = (long *)(uVar10 << 1 | 1);
      uVar10 = *param_1;
      uVar12 = param_1[1];
      uVar15 = param_1[2];
      param_1[2] = (ulong)plVar6;
      puVar5 = param_1;
      func_0x000107324d80();
      if (uVar15 == 0) {
        auVar28._8_8_ = plVar6;
        auVar28._0_8_ = puVar5;
        return auVar28;
      }
      uVar16 = 0;
      uVar17 = param_1[1];
      do {
        if (-1 < *(char *)(uVar10 + uVar16)) {
          plVar6 = (long *)(uVar12 + uVar16 * 0x48);
          uVar8 = (long)&PTR_LOOP_110c8acd8 + *plVar6;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar8;
          uVar8 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297) +
                  *plVar6;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar8;
          uVar13 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297;
          uVar8 = *param_1;
          uVar11 = param_1[2];
          uVar14 = (uVar13 >> 7 ^ uVar8 >> 0xc) & uVar11;
          uVar19 = *(undefined8 *)(uVar8 + uVar14);
          uVar20 = CONCAT17(-((char)((ulong)uVar19 >> 0x38) < -1),
                            CONCAT16(-((char)((ulong)uVar19 >> 0x30) < -1),
                                     CONCAT15(-((char)((ulong)uVar19 >> 0x28) < -1),
                                              CONCAT14(-((char)((ulong)uVar19 >> 0x20) < -1),
                                                       CONCAT13(-((char)((ulong)uVar19 >> 0x18) < -1
                                                                 ),CONCAT12(-((char)((ulong)uVar19
                                                                                    >> 0x10) < -1),
                                                                            CONCAT11(-((char)((ulong
                                                  )uVar19 >> 8) < -1),-((char)uVar19 < -1))))))));
          if (uVar20 == 0) {
            lVar9 = 8;
            do {
              uVar14 = uVar14 + lVar9 & uVar11;
              uVar19 = *(undefined8 *)(uVar8 + uVar14);
              uVar20 = CONCAT17(-((char)((ulong)uVar19 >> 0x38) < -1),
                                CONCAT16(-((char)((ulong)uVar19 >> 0x30) < -1),
                                         CONCAT15(-((char)((ulong)uVar19 >> 0x28) < -1),
                                                  CONCAT14(-((char)((ulong)uVar19 >> 0x20) < -1),
                                                           CONCAT13(-((char)((ulong)uVar19 >> 0x18)
                                                                     < -1),CONCAT12(-((char)((ulong)
                                                  uVar19 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar19 >> 8) < -1),
                                                           -((char)uVar19 < -1))))))));
              lVar9 = lVar9 + 8;
            } while (uVar20 == 0);
          }
          uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar14 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) & uVar11;
          bVar1 = (byte)uVar13 & 0x7f;
          *(byte *)(uVar8 + uVar14) = bVar1;
          *(byte *)(uVar8 + (uVar14 - 7 & uVar11) + (uVar11 & 7)) = bVar1;
          FUN_10a1d1efc(uVar17 + uVar14 * 0x48);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar15);
      lVar9 = uVar10 - 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar9);
      auVar31._8_8_ = plVar6;
      auVar31._0_8_ = lVar9;
      return auVar31;
    }
  }
  else {
    param_2 = (long *)&UNK_110bad780;
    FUN_10ae6c914();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      auVar29._8_8_ = param_2;
      auVar29._0_8_ = param_1;
      return auVar29;
    }
  }
  ___stack_chk_fail();
  lVar9 = 0;
  uVar12 = *param_1;
  uVar10 = uVar12 >> 0xc ^ (ulong)puVar7 >> 7;
  bVar1 = (byte)puVar7;
  uVar18 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar10 = uVar10 & param_1[2];
    uVar19 = *(undefined8 *)(uVar12 + uVar10);
    cVar21 = (char)((ulong)uVar19 >> 8);
    cVar22 = (char)((ulong)uVar19 >> 0x10);
    cVar23 = (char)((ulong)uVar19 >> 0x18);
    cVar24 = (char)((ulong)uVar19 >> 0x20);
    cVar25 = (char)((ulong)uVar19 >> 0x28);
    bVar26 = (byte)((ulong)uVar19 >> 0x30);
    bVar27 = (byte)((ulong)uVar19 >> 0x38);
    for (uVar15 = CONCAT17(-(bVar27 == (bVar1 & 0x7f)),
                           CONCAT16(-(bVar26 == (bVar1 & 0x7f)),
                                    CONCAT15(-(cVar25 == (char)(uVar18 >> 0x28)),
                                             CONCAT14(-(cVar24 == (char)(uVar18 >> 0x20)),
                                                      CONCAT13(-(cVar23 == (char)(uVar18 >> 0x18)),
                                                               CONCAT12(-(cVar22 ==
                                                                         (char)(uVar18 >> 0x10)),
                                                                        CONCAT11(-(cVar21 ==
                                                                                  (char)(uVar18 >> 8
                                                                                        )),
                                                                                 -((char)uVar19 ==
                                                                                  (char)uVar18))))))
                                   )) & 0x8080808080808080; uVar15 != 0;
        uVar15 = uVar15 - 1 & uVar15) {
      uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar10 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & param_1[2];
      if (*(long *)(param_1[1] + uVar16 * 0x10) == *param_2) {
        auVar30._8_8_ = param_1[1] + uVar16 * 0x10;
        auVar30._0_8_ = uVar12 + uVar16;
        return auVar30;
      }
    }
    if (CONCAT17(-(bVar27 == 0x80),
                 CONCAT16(-(bVar26 == 0x80),
                          CONCAT15(-(cVar25 == -0x80),
                                   CONCAT14(-(cVar24 == -0x80),
                                            CONCAT13(-(cVar23 == -0x80),
                                                     CONCAT12(-(cVar22 == -0x80),
                                                              CONCAT11(-(cVar21 == -0x80),
                                                                       -((char)uVar19 == -0x80))))))
                         )) != 0) break;
    lVar9 = lVar9 + 8;
    uVar10 = lVar9 + uVar10;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  return auVar4 << 0x40;
}



/* Entry: 10a1d3320; end: 10a1d33b3;  */

undefined1  [16] FUN_10a1d3320(ulong *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar8;
  byte bVar15;
  undefined1 auVar16 [16];
  
  lVar3 = 0;
  uVar4 = *param_1;
  uVar6 = uVar4 >> 0xc ^ param_3 >> 7;
  bVar5 = (byte)param_3 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & param_1[2];
    uVar8 = *(undefined8 *)(uVar4 + uVar6);
    bVar9 = (byte)((ulong)uVar8 >> 8);
    bVar10 = (byte)((ulong)uVar8 >> 0x10);
    bVar11 = (byte)((ulong)uVar8 >> 0x18);
    bVar12 = (byte)((ulong)uVar8 >> 0x20);
    bVar13 = (byte)((ulong)uVar8 >> 0x28);
    bVar14 = (byte)((ulong)uVar8 >> 0x30);
    bVar15 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar1 = CONCAT17(-(bVar15 == bVar5),
                          CONCAT16(-(bVar14 == bVar5),
                                   CONCAT15(-(bVar13 == bVar5),
                                            CONCAT14(-(bVar12 == bVar5),
                                                     CONCAT13(-(bVar11 == bVar5),
                                                              CONCAT12(-(bVar10 == bVar5),
                                                                       CONCAT11(-(bVar9 == bVar5),
                                                                                -((byte)uVar8 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
      uVar7 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      if (*(long *)(param_1[1] + uVar7 * 0x10) == *param_2) {
        auVar16._8_8_ = param_1[1] + uVar7 * 0x10;
        auVar16._0_8_ = uVar4 + uVar7;
        return auVar16;
      }
    }
    if (CONCAT17(-(bVar15 == 0x80),
                 CONCAT16(-(bVar14 == 0x80),
                          CONCAT15(-(bVar13 == 0x80),
                                   CONCAT14(-(bVar12 == 0x80),
                                            CONCAT13(-(bVar11 == 0x80),
                                                     CONCAT12(-(bVar10 == 0x80),
                                                              CONCAT11(-(bVar9 == 0x80),
                                                                       -((byte)uVar8 == 0x80))))))))
        != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 10a1d33b4; end: 10a1d355b;  */

char * FUN_10a1d33b4(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined1 uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar14 = &PTR___tlv_bootstrap_11340d750;
    ppuVar10 = ppuVar14;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar11 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar10 & 1) == 0) {
      ppuVar10 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar10,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar14 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    lVar8 = lRam00000001137ea8e0;
    puVar17 = (undefined8 *)ppuVar11[2];
    if (puVar17 != (undefined8 *)0x0) {
      lVar16 = puVar17[1];
      bVar6 = *(byte *)(lVar16 + 0x42) | *(byte *)(lVar16 + 0x43);
      if (((bVar6 & 1) != 0) || (*(char *)(lVar16 + 0x3f) == '\x01')) {
        uVar5 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar18 = cntvct_el0;
        if (uVar5 != 1000000000) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar18 / uVar5;
          }
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = ((uVar18 - uVar3 * uVar5) * 1000000000) / uVar5;
          }
          uVar18 = uVar4 + uVar3 * 1000000000;
        }
        if ((bVar6 & 1) != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x10);
          uVar2 = *(undefined2 *)(param_1 + 2);
          uVar19 = *(undefined8 *)(param_1 + 8);
          puVar12 = puVar17;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            uVar15 = 6;
            if (lRam00000001137ea8e0 != lVar8) {
              uVar15 = 8;
            }
            lVar16 = 0;
            if (lRam00000001137ea8e0 != lVar8) {
              lVar16 = lVar8;
            }
            *puVar12 = uVar19;
            puVar12[1] = lVar16;
            puVar12[2] = uVar18;
            *(undefined4 *)(puVar12 + 3) = uVar1;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar2;
            *(undefined1 *)((long)puVar12 + 0x1e) = uVar15;
            if ((*(byte *)(puVar17 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10a1d3558);
              (*pcVar9)();
            }
            puVar17[0x18] = puVar17[0x18] + 1;
          }
        }
      }
      if (((*(char *)(puVar17[1] + 0x41) == '\x01') && (param_1[0x28] == '\x01')) &&
         (plVar13 = (long *)puVar17[0xb], plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
  return param_1;
}



/* Entry: 10a1d355c; end: 10a1d362b;  */

void FUN_10a1d355c(long param_1)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [72];
  
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x18))();
  if ((int)plVar2 != 0) {
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x10) + 0x30);
    *(ushort *)(*(long *)(param_1 + 0x10) + 0x30) = uVar1 & 0xff80 | uVar1 - 1 & 0x7f;
    if ((uVar1 & 0x7f) == 1) {
      uVar1 = *(ushort *)(*(long *)(param_1 + 0x10) + 0x30);
      if ((uVar1 >> 7 & 1) != 0) {
        *(ushort *)(*(long *)(param_1 + 0x10) + 0x30) = uVar1 & 0xff7f;
        uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
        FUN_10a1d07cc(auStack_68,*(long *)(param_1 + 0x10) + 0x48);
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        lVar3 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar3 + 0x40) = 0;
        FUN_10a1cc408(lVar3 + 0x48,(ulong)&uStack_c0 | 8);
        if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),&uStack_70);
        }
      }
    }
  }
  return;
}



/* Entry: 10a1d362c; end: 10a1d3647;  */

void FUN_10a1d362c(void)

{
  return;
}



/* Entry: 10a1d3648; end: 10a1d37af;  */

void FUN_10a1d3648(long param_1)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [72];
  
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x18))();
  lVar3 = *(long *)(param_1 + 0x10);
  if ((int)plVar2 != 0) {
    uVar1 = *(ushort *)(lVar3 + 0x30);
    *(ushort *)(lVar3 + 0x30) = uVar1 & 0xff80 | uVar1 - 1 & 0x7f;
    lVar3 = *(long *)(param_1 + 0x10);
    if (((uVar1 & 0x7f) == 1) && ((*(ushort *)(lVar3 + 0x30) >> 7 & 1) != 0)) {
      *(ushort *)(lVar3 + 0x30) = *(ushort *)(lVar3 + 0x30) & 0xff7f;
      uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
      FUN_10a1d07cc(auStack_68,*(long *)(param_1 + 0x10) + 0x48);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      lVar3 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar3 + 0x40) = 0;
      FUN_10a1cc408(lVar3 + 0x48,(ulong)&uStack_c0 | 8);
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),&uStack_70);
      }
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
  uVar1 = *(ushort *)(lVar3 + 0xe9);
  if (((uVar1 & 0x7f) != 0) &&
     (*(ushort *)(lVar3 + 0xe9) = uVar1 & 0xff80 | uVar1 - 1 & 0x7f, (uVar1 & 0x7f) == 1)) {
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x10) + 0xe9);
    if ((uVar1 >> 7 & 1) != 0) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 0xe9) = uVar1 & 0xff7f;
      uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf8);
      FUN_10a1d07cc(auStack_68,*(long *)(param_1 + 0x10) + 0x100);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      lVar3 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar3 + 0xf8) = 0;
      FUN_10a1cc408(lVar3 + 0x100,(ulong)&uStack_c0 | 8);
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        FUN_10a1c054c(*(long *)(param_1 + 0x10) + 0x90,&uStack_70);
      }
    }
  }
  return;
}



/* Entry: 10a1d37b0; end: 10a1d37cb;  */

void FUN_10a1d37b0(void)

{
  return;
}



/* Entry: 10a1d37cc; end: 10a1d392b;  */

long FUN_10a1d37cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1d392c; end: 10a1d3987;  */

long * FUN_10a1d392c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a1d3988(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d3988; end: 10a1d39e3;  */

void FUN_10a1d3988(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a1d3a40();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a1d39e4; end: 10a1d3a3f;  */

long * FUN_10a1d39e4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a1d3a40(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d3a40; end: 10a1d3a97;  */

long FUN_10a1d3a40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1d3a98; end: 10a1d3aa7;  */

void FUN_10a1d3a98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1d3aa8; end: 10a1d3ac7;  */

void FUN_10a1d3aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad840;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1d3ac8; end: 10a1d3ad3;  */

long * FUN_10a1d3ac8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x18);
  func_0x00010a1d3b0c(plVar1,*(undefined8 *)(param_1 + 0x28));
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a1d3ad4; end: 10a1d3b47;  */

long * FUN_10a1d3ad4(long *param_1)

{
  long lVar1;
  
  func_0x00010a1d3b0c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d3b48; end: 10a1d3d6b;  */

undefined1  [16] FUN_10a1d3b48(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_10a1d3d30;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x28;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)*param_4;
  plVar8[3] = 0;
  plVar8[4] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a1cce8c(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a1d3d20;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10a1d3d20:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a1d3d30:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a1d3d6c; end: 10a1d3db3;  */

void FUN_10a1d3d6c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a1d3a40(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1d3db4; end: 10a1d417b;  */

long * FUN_10a1d3db4(long *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  
  uVar13 = (ulong)param_2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        unaff_x25 = uVar13 - uVar8 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar13) {
          if (*(int *)(plVar7 + 2) == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar14 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar14 <= uVar8) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar8 / uVar14;
            }
            uVar8 = uVar8 - uVar6 * uVar14;
          }
          if (uVar8 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)0x30;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar13;
  *(undefined4 *)(plVar7 + 2) = *param_3;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  if ((uVar14 == 0) || (*(float *)(param_1 + 4) * (float)uVar14 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar14) {
      uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar5 = uVar5 | uVar14 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar5) {
LAB_10a1d3f14:
      if (uVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1d4160);
        (*pcVar2)();
      }
      lVar3 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar14 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
      plVar9 = (long *)param_1[2];
      uVar14 = uVar5;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar5 <= uVar8) {
          uVar12 = 0;
          if (uVar5 != 0) {
            uVar12 = uVar8 / uVar5;
          }
          uVar8 = uVar8 - uVar12 * uVar5;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar5 & uVar6) == 0) {
            uVar12 = uVar12 & uVar6;
          }
          else if (uVar5 <= uVar12) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar1 * uVar5;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar8) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar9;
              uVar8 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar5 < uVar14) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (uVar5 < uVar14) {
        if (uVar5 != 0) goto LAB_10a1d3f14;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x25 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        unaff_x25 = uVar13 - uVar5 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_10a1d40f4;
    uVar13 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar13 = uVar13 & uVar14 - 1;
    }
    else if (uVar14 <= uVar13) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar13 / uVar14;
      }
      uVar13 = uVar13 - uVar5 * uVar14;
    }
    plVar9 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_10a1d40f4:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 10a1d417c; end: 10a1d4287;  */

long * FUN_10a1d417c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_58;
  
  uStack_58 = 0;
  func_0x000107c2b0f0(&UNK_10e4998d0,param_1,&uStack_58);
  uVar3 = uStack_58;
  uVar2 = uRam00000001137ea8f0;
  if (uRam00000001137ea8f0 != 0) {
    uVar6 = uRam00000001137ea8f0 - 1;
    if ((uRam00000001137ea8f0 & uVar6) == 0) {
      uVar7 = uVar6 & uStack_58;
    }
    else {
      uVar7 = uStack_58;
      if (uRam00000001137ea8f0 <= uStack_58) {
        uVar7 = 0;
        if (uRam00000001137ea8f0 != 0) {
          uVar7 = uStack_58 / uRam00000001137ea8f0;
        }
        uVar7 = uStack_58 - uVar7 * uRam00000001137ea8f0;
      }
    }
    plVar4 = *(long **)(lRam00000001137ea8e8 + uVar7 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      do {
        uVar5 = plVar4[1];
        if (uVar3 == uVar5) {
          uVar5 = 0;
          FUN_10a15aadc(0x1137ea8e8,plVar4 + 2,param_1);
          if ((uVar5 & 1) != 0) {
            return plVar4;
          }
        }
        else {
          if ((uVar2 & uVar6) == 0) {
            uVar5 = uVar5 & uVar6;
          }
          else if (uVar2 <= uVar5) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar5 / uVar2;
            }
            uVar5 = uVar5 - uVar1 * uVar2;
          }
          if (uVar5 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a1d4288; end: 10a1d4297;  */

void FUN_10a1d4288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad890;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1d4298; end: 10a1d42b7;  */

void FUN_10a1d4298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad890;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1d42b8; end: 10a1d42d7;  */

void FUN_10a1d42b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d42c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1d42d8; end: 10a1d42f7;  */

void FUN_10a1d42d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bad8e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1d42f8; end: 10a1d431f;  */

void FUN_10a1d42f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d4300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1d4320; end: 10a1d433f;  */

void FUN_10a1d4320(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bad950;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1d4340; end: 10a1d4357;  */

void FUN_10a1d4340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d4348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1d4358; end: 10a1d443b;  */

void FUN_10a1d4358(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 uStack_48;
  
  puVar5 = (undefined8 *)0x40;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = &PTR_FUN_110bada10;
  *puVar5 = &PTR_FUN_110bad9c0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = *(undefined4 *)((long)param_3 + 0x13);
  uStack_48._0_3_ = (undefined3)*(undefined4 *)(param_3 + 2);
  uStack_48._3_1_ = (undefined1)uVar3;
  cVar4 = *(char *)((long)param_3 + 0x17);
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  *(undefined4 *)(puVar5 + 4) = param_2;
  if (cVar4 < '\0') {
    func_0x000107c3192c(puVar5 + 5,uVar1);
    __ZdlPv(uVar1);
  }
  else {
    puVar5[5] = uVar1;
    puVar5[6] = uVar2;
    *(undefined4 *)(puVar5 + 7) = uStack_48;
    *(undefined4 *)((long)puVar5 + 0x3b) = uVar3;
    *(char *)((long)puVar5 + 0x3f) = cVar4;
  }
  *param_1 = puVar5 + 3;
  param_1[1] = puVar5;
  return;
}



/* Entry: 10a1d443c; end: 10a1d444b;  */

void FUN_10a1d443c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad9c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1d444c; end: 10a1d446b;  */

void FUN_10a1d444c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad9c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1d446c; end: 10a1d447b;  */

void FUN_10a1d446c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d4474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1d447c; end: 10a1d44f3;  */

undefined8 * FUN_10a1d447c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bada10;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 10a1d44f4; end: 10a1d4647;  */

void FUN_10a1d44f4(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1d4634);
    (*pcVar1)();
  }
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110bada30;
  puVar4[3] = &PTR_FUN_110bad0b0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0x382d667475;
  puVar4[8] = 0x500000000000000;
  plVar13 = (long *)plVar3[4];
  if (plVar13 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar13 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar13;
  *plVar13 = (long)&PTR_DAT_110b17478;
  plVar13[1] = (long)(puVar4 + 3);
  plVar13[2] = (long)puVar4;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar13,plVar5,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar13 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar13[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar13;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar13;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar13 = lVar10;
          plVar3[0x4c] = lVar11 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar15 * 0x10);
    plVar3[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a1d4648; end: 10a1d4657;  */

void FUN_10a1d4648(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bada30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1d4658; end: 10a1d4677;  */

void FUN_10a1d4658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bada30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1d4678; end: 10a1d4687;  */

void FUN_10a1d4678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d4680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1d4688; end: 10a1d47df;  */

void FUN_10a1d4688(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a1d47e0(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a1c3d04(&plStack_68,plVar6,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a1d47e0; end: 10a1d4847;  */

void FUN_10a1d47e0(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  long in_stack_ffffffffffffff98;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bad0f8;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10a1d47e0(plVar6,param_2);
  FUN_10a1d49a0(param_4);
  func_0x000109898570(&stack0xffffffffffffff88,plVar6,param_3);
  FUN_10a13a07c(&plStack_88,plVar6,param_3 + 2);
  FUN_10a1c3e44(plVar8,&stack0xffffffffffffff88,&plStack_88);
  if (in_stack_ffffffffffffff80 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffff80 + 1;
    do {
      lVar11 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffff80 + 0x10))(in_stack_ffffffffffffff80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff80);
    }
  }
  if (in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(in_stack_ffffffffffffff88);
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_a8 = lVar11;
          lStack_a0 = lVar11;
          lStack_98 = lVar11;
          lStack_90 = lVar15;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a1d4848; end: 10a1d499f;  */

void FUN_10a1d4848(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a1d47e0(param_2,param_3);
  FUN_10a1d49a0(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a13a07c(&plStack_68,param_2,param_4 + 0x10);
  FUN_10a1c3e44(plVar6,&stack0xffffffffffffffa8,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a1d49a0; end: 10a1d49c3;  */

void FUN_10a1d49a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *in_stack_ffffffffffffff90;
  ulong in_stack_ffffffffffffff98;
  ulong in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  uVar7 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a1d47e0(plVar4,uVar7);
  FUN_10a052e3c(param_4);
  if (*(char *)((long)plVar6 + 0x2f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffff90,plVar6[3],plVar6[4]);
  }
  else {
    in_stack_ffffffffffffff98 = plVar6[4];
    in_stack_ffffffffffffff90 = (undefined1 *)plVar6[3];
    in_stack_ffffffffffffffa0 = plVar6[5];
  }
  puVar1 = in_stack_ffffffffffffff90;
  if (-1 < (long)in_stack_ffffffffffffffa0) {
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffffa0 >> 0x38;
    puVar1 = &stack0xffffffffffffff90;
  }
  (**(code **)(*plVar4 + 0x128))(&stack0xffffffffffffffa8,plVar4,puVar1,in_stack_ffffffffffffff98);
  *extraout_x8 = 6;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffffa8;
  if ((long)in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(in_stack_ffffffffffffff90);
  }
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar14;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a1d49c4; end: 10a1d4b03;  */

void FUN_10a1d49c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a1d47e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x2f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[3],plVar5[4]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[4];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[3];
    in_stack_ffffffffffffffb0 = plVar5[5];
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a1d4b04; end: 10a1d4e1f;  */

void FUN_10a1d4b04(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  bool bVar1;
  uint *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  long *plVar8;
  long *plVar9;
  undefined8 ***pppuVar10;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  ulong uStack_a8;
  byte bStack_99;
  char cStack_98;
  uint auStack_90 [2];
  undefined8 *puStack_88;
  undefined8 **ppuStack_80;
  long lStack_78;
  ulong uStack_70;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  if ((*(byte *)(plVar5 + 0x3c) & 1) != 0) {
    auStack_90[0] = 0;
    puVar2 = auStack_90;
    if (param_5 != 0) {
      puVar2 = param_4;
    }
    bVar1 = 1 < *puVar2;
    if (bVar1) {
      func_0x000109898570(&uStack_b0,param_2);
    }
    else {
      uStack_b0 = 0;
    }
    puVar6 = (undefined8 *)0x48;
    cStack_98 = bVar1;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_110bada80;
    puVar6[3] = &PTR_FUN_110bacfd0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0x382d667475;
    puVar6[8] = 0x500000000000000;
    lStack_78 = 0;
    ppuStack_80 = (undefined8 ***)0x382d667475;
    uStack_70 = 0x500000000000000;
    if (bVar1) {
      if (-1 < (char)bStack_99) {
        uStack_a8 = (ulong)bStack_99;
      }
      if (uStack_a8 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&ppuStack_80,&uStack_b0);
        pppuVar10 = (undefined8 ***)ppuStack_80;
        pppuVar7 = (undefined8 ***)((long)ppuStack_80 + lStack_78);
        if (-1 < (long)uStack_70) {
          pppuVar10 = &ppuStack_80;
          pppuVar7 = (undefined8 ***)((long)&ppuStack_80 + (uStack_70 >> 0x38));
        }
        for (; pppuVar10 != pppuVar7; pppuVar10 = (undefined8 ***)((long)pppuVar10 + 1)) {
          uVar4 = *(undefined1 *)pppuVar10;
          ___tolower();
          *(undefined1 *)pppuVar10 = uVar4;
        }
      }
    }
    pppuVar7 = &ppuStack_80;
    FUN_10a1d5394();
    if (pppuVar7 != (undefined8 ***)0x0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (puVar6 + 6,&ppuStack_80);
      if ((long)uStack_70 < 0) {
        __ZdlPv(ppuStack_80);
      }
      plVar9 = (long *)plVar5[4];
      if (plVar9 == (long *)0x0) {
        func_0x000109899fd8(plVar5);
        plVar9 = (long *)plVar5[4];
      }
      plVar5[4] = *plVar9;
      *plVar9 = (long)&PTR_DAT_110b17478;
      plVar9[1] = (long)(puVar6 + 3);
      plVar9[2] = (long)puVar6;
      if ((cStack_98 == '\x01') && ((char)bStack_99 < '\0')) {
        __ZdlPv(CONCAT71(uStack_af,uStack_b0));
      }
      if ((3 < (int)auStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
        (**(code **)*puStack_88)();
      }
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))(param_2);
      (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar9,plVar8,&UNK_10989ba24,param_3);
      *param_1 = 7;
      func_0x00010988c170(plVar5 + 0x4b);
      return;
    }
    FUN_10a00946c(&UNK_10f643768);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1d4d80);
  (*pcVar3)();
}



/* Entry: 10a1d4e20; end: 10a1d4e2f;  */

void FUN_10a1d4e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bada80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1d4e30; end: 10a1d4e4f;  */

void FUN_10a1d4e30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bada80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1d4e50; end: 10a1d4e5f;  */

void FUN_10a1d4e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d4e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1d4e60; end: 10a1d4fe3;  */

void FUN_10a1d4e60(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long ***ppplVar2;
  char cVar3;
  bool bVar4;
  long ****pppplVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long ***ppplVar10;
  ulong uVar11;
  long ***ppplVar12;
  long lVar13;
  long lVar14;
  long ***ppplVar15;
  long **pplStack_88;
  long **pplStack_80;
  long **pplStack_78;
  long lStack_70;
  long ***ppplStack_68;
  ulong in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  undefined8 in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a1d4fe4(param_2,param_3);
  FUN_10a1ceb0c(param_5);
  FUN_10a13a07c(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a1c4374(&ppplStack_68,plVar9,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar9 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar13 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  pppplVar5 = (long ****)ppplStack_68;
  if (-1 < (long)in_stack_ffffffffffffffa8) {
    in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa8 >> 0x38;
    pppplVar5 = &ppplStack_68;
  }
  (**(code **)(*param_2 + 0x128))
            (&stack0xffffffffffffffb0,param_2,pppplVar5,in_stack_ffffffffffffffa0);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb0;
  if ((long)in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(ppplStack_68);
  }
  pppplVar5 = (long ****)(plVar8 + 0x4b);
  lVar13 = plVar8[0x59];
  uVar11 = lVar13 - 1;
  plVar8[0x59] = uVar11;
  if (uVar11 < 8) {
    ppplVar10 = pppplVar5[lVar13 + 2];
    if ((long ***)plVar8[0x5a] == ppplVar10) {
      return;
    }
  }
  else {
    ppplVar10 = *(long ****)(plVar8[0x57] + -8);
    plVar8[0x57] = (long)(plVar8[0x57] + -8);
    if ((long ***)plVar8[0x5a] == ppplVar10) {
      return;
    }
  }
  ppplVar2 = *pppplVar5;
  ppplVar12 = (long ***)plVar8[0x4c];
  lVar13 = (long)ppplVar12 - (long)ppplVar2;
  ppplVar15 = (long ***)(lVar13 >> 4);
  if (ppplVar15 < ppplVar10) {
    uVar11 = (long)ppplVar10 - (long)ppplVar15;
    lVar14 = plVar8[0x4d];
    if ((ulong)(lVar14 - (long)ppplVar12 >> 4) < uVar11) {
      if ((ulong)ppplVar10 >> 0x3c == 0) {
        ppplVar12 = (long ***)(lVar14 - (long)ppplVar2 >> 3);
        if (ppplVar12 <= ppplVar10) {
          ppplVar12 = ppplVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)ppplVar2)) {
          ppplVar12 = (long ***)0xfffffffffffffff;
        }
        ppplStack_68 = (long ***)pppplVar5;
        if ((ulong)ppplVar12 >> 0x3c == 0) {
          lVar7 = (long)ppplVar12 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar13;
          _bzero(lVar1,uVar11 * 0x10);
          ppplVar15 = (long ***)(lVar1 + (long)ppplVar15 * -0x10);
          _memcpy(ppplVar15,ppplVar2,lVar13);
          *pppplVar5 = ppplVar15;
          plVar8[0x4c] = lVar1 + uVar11 * 0x10;
          plVar8[0x4d] = lVar7 + (long)ppplVar12 * 0x10;
          pplStack_88 = (long **)ppplVar2;
          pplStack_80 = (long **)ppplVar2;
          pplStack_78 = (long **)ppplVar2;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&pplStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(ppplVar12,uVar11 * 0x10);
    plVar8[0x4c] = (long)(ppplVar12 + uVar11 * 2);
  }
  else if (ppplVar10 < ppplVar15) {
    while (ppplVar12 != ppplVar2 + (long)ppplVar10 * 2) {
      ppplVar12 = ppplVar12 + -2;
      func_0x00010988c204(ppplVar12);
    }
    plVar8[0x4c] = (long)(ppplVar2 + (long)ppplVar10 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = (long)ppplVar10;
  return;
}



/* Entry: 10a1d4fe4; end: 10a1d504b;  */

void FUN_10a1d4fe4(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *in_stack_ffffffffffffff80;
  ulong in_stack_ffffffffffffff88;
  ulong in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a1d4fe4(plVar5,param_2);
  FUN_10a052e3c(param_4);
  if (*(char *)((long)plVar7 + 0x2f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffff80,plVar7[3],plVar7[4]);
  }
  else {
    in_stack_ffffffffffffff88 = plVar7[4];
    in_stack_ffffffffffffff80 = (undefined1 *)plVar7[3];
    in_stack_ffffffffffffff90 = plVar7[5];
  }
  puVar1 = in_stack_ffffffffffffff80;
  if (-1 < (long)in_stack_ffffffffffffff90) {
    in_stack_ffffffffffffff88 = in_stack_ffffffffffffff90 >> 0x38;
    puVar1 = &stack0xffffffffffffff80;
  }
  (**(code **)(*plVar5 + 0x128))(&stack0xffffffffffffff98,plVar5,puVar1,in_stack_ffffffffffffff88);
  *extraout_x8 = 6;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffff98;
  if ((long)in_stack_ffffffffffffff90 < 0) {
    __ZdlPv(in_stack_ffffffffffffff80);
  }
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a1d504c; end: 10a1d518b;  */

void FUN_10a1d504c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a1d4fe4(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x2f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[3],plVar5[4]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[4];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[3];
    in_stack_ffffffffffffffb0 = plVar5[5];
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a1d518c; end: 10a1d5233;  */

void FUN_10a1d518c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a1d51d4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1d5234; end: 10a1d528f;  */

long * FUN_10a1d5234(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a1d51d4(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d5290; end: 10a1d5337;  */

void FUN_10a1d5290(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a1d52d8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1d5338; end: 10a1d5393;  */

long * FUN_10a1d5338(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a1d52d8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d5394; end: 10a1d548f;  */

long * FUN_10a1d5394(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = 0x1137ea960;
  func_0x000107c2b05c(0x1137ea960,param_1);
  uVar2 = uRam00000001137ea968;
  if (uRam00000001137ea968 != 0) {
    uVar6 = uRam00000001137ea968 - 1;
    if ((uRam00000001137ea968 & uVar6) == 0) {
      uVar7 = uVar6 & uVar3;
    }
    else {
      uVar7 = uVar3;
      if (uRam00000001137ea968 <= uVar3) {
        uVar7 = 0;
        if (uRam00000001137ea968 != 0) {
          uVar7 = uVar3 / uRam00000001137ea968;
        }
        uVar7 = uVar3 - uVar7 * uRam00000001137ea968;
      }
    }
    plVar4 = *(long **)(lRam00000001137ea960 + uVar7 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      do {
        uVar5 = plVar4[1];
        if (uVar3 == uVar5) {
          uVar5 = 0;
          func_0x000107c2b068(0x1137ea960,plVar4 + 2,param_1);
          if ((uVar5 & 1) != 0) {
            return plVar4;
          }
        }
        else {
          if ((uVar2 & uVar6) == 0) {
            uVar5 = uVar5 & uVar6;
          }
          else if (uVar2 <= uVar5) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar5 / uVar2;
            }
            uVar5 = uVar5 - uVar1 * uVar2;
          }
          if (uVar5 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a1d5490; end: 10a1d572b;  */

undefined1  [16] FUN_10a1d5490(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  plVar6 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a1d56cc;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  plVar7 = (long *)0x40;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar7 + 2,*param_3,param_3[1]);
  }
  else {
    lVar4 = *param_3;
    plVar7[3] = param_3[1];
    plVar7[2] = lVar4;
    plVar7[4] = param_3[2];
  }
  func_0x000107c2b054(plVar7 + 5,param_4);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    func_0x000104c4f9b8(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_10a1d56cc:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a1d572c; end: 10a1d58c7;  */

void FUN_10a1d572c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined1 **ppuVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 *puStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  long *plStack_28;
  
  puVar11 = *(undefined8 **)(param_2 + 0x10);
  uStack_48 = param_1[1];
  puStack_50 = (undefined1 *)*param_1;
  uStack_40 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar8 = (long *)puVar11[4];
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_28 = plVar8;
    if (plVar8 != (long *)0x0) {
      lVar9 = puVar11[3];
      lStack_30 = lVar9;
      if ((lVar9 != 0) && (FUN_109ce5028(lVar9,puVar11), lVar9 != 0)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar9 + 0x28,&puStack_50);
      }
      plVar1 = plVar8 + 1;
      do {
        lVar9 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  uVar12 = (uint)(char)uStack_40._7_1_;
  uVar2 = uStack_48;
  if (-1 < (int)uVar12) {
    uVar2 = (ulong)uStack_40._7_1_;
  }
  bVar5 = *(byte *)((long)puVar11 + 0x17);
  uVar3 = puVar11[1];
  if (-1 < (char)bVar5) {
    uVar3 = (ulong)bVar5;
  }
  if (uVar2 == uVar3) {
    ppuVar10 = (undefined1 **)puStack_50;
    if (-1 < (int)uVar12) {
      ppuVar10 = &puStack_50;
    }
    puVar4 = (undefined8 *)*puVar11;
    if (-1 < (char)bVar5) {
      puVar4 = puVar11;
    }
    _memcmp(ppuVar10,puVar4);
    if ((int)ppuVar10 == 0) goto LAB_10a1d5878;
  }
  plVar8 = (long *)puVar11[6];
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_28 = plVar8;
    if (plVar8 != (long *)0x0) {
      lStack_30 = puVar11[5];
      if (lStack_30 != 0) {
        func_0x00010596ff64(lStack_30,puVar11);
      }
      plVar1 = plVar8 + 1;
      do {
        lVar9 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  uVar12 = (uint)uStack_40._7_1_;
LAB_10a1d5878:
  if ((uVar12 >> 7 & 1) != 0) {
    __ZdlPv(puStack_50);
  }
  return;
}



/* Entry: 10a1d58c8; end: 10a1d59cf;  */

long FUN_10a1d58c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1d59d0; end: 10a1d59e7;  */

void FUN_10a1d59d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a1d59e8; end: 10a1d5aaf;  */

void FUN_10a1d59e8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_DAT_110badac0;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    func_0x000107c3192c(puVar4,*puVar6,puVar6[1]);
  }
  else {
    uVar8 = puVar6[1];
    uVar7 = *puVar6;
    puVar4[2] = puVar6[2];
    puVar4[1] = uVar8;
    *puVar4 = uVar7;
  }
  lVar5 = puVar6[4];
  uVar7 = puVar6[3];
  puVar4[4] = puVar6[4];
  puVar4[3] = uVar7;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = puVar6[6];
  uVar7 = puVar6[5];
  puVar4[6] = puVar6[6];
  puVar4[5] = uVar7;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = puVar4;
  return;
}



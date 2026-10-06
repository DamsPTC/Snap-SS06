/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ab27e0; end: 104ab28f7;  */

void FUN_104ab27e0(void)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x83,2,"assertion failed: %s");
  _abort();
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x87,2,"assertion failed: %s");
  _abort();
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x8b,2,"assertion failed: %s");
  _abort();
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x92,2,"assertion failed: %s");
  _abort();
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
  ;
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x9b,2,"assertion failed: %s");
  _abort();
  plVar3 = (long *)(pcVar1 + 8);
  plVar2 = *(long **)(pcVar1 + 0x20);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_104ab2938;
    lVar4 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_104ab2938:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pcVar1);
  return;
}



/* Entry: 104ab28f8; end: 104ab2947;  */

void FUN_104ab28f8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_104ab2938;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_104ab2938:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104ab2948; end: 104ab29f3;  */

long FUN_104ab2948(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar12;
  byte bVar19;
  
  lVar7 = *(long *)(param_1 + 0x68) + 0x1d8;
  func_0x000100460448(lVar7);
  plVar5 = (long *)(param_1 + 0x70);
  FUN_104ab23b4(*(long *)(param_1 + 0x68) + 0x218);
  func_0x000100466b80(lVar7);
  puVar3 = *(ulong **)(param_1 + 0x20);
  if (puVar3 == (ulong *)0x0) {
    FUN_104a71f98();
    FUN_104bd46a0();
    func_0x000100466b80(lVar7);
    __Unwind_Resume();
    FUN_104bd46a0();
    Hint_Prefetch(*puVar3,0,2,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar5;
    uVar10 = plVar5[1] +
             (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
             ((long)&PTR_LOOP_110c8acd8 + *plVar5) * -0x622015f714c7d297);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    uVar6 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297;
    lVar7 = 0;
    uVar8 = *puVar3;
    uVar10 = uVar8 >> 0xc ^ uVar6 >> 7;
    bVar9 = (byte)uVar6 & 0x7f;
    while( true ) {
      uVar10 = uVar10 & puVar3[2];
      uVar12 = *(undefined8 *)(uVar8 + uVar10);
      bVar13 = (byte)((ulong)uVar12 >> 8);
      bVar14 = (byte)((ulong)uVar12 >> 0x10);
      bVar15 = (byte)((ulong)uVar12 >> 0x18);
      bVar16 = (byte)((ulong)uVar12 >> 0x20);
      bVar17 = (byte)((ulong)uVar12 >> 0x28);
      bVar18 = (byte)((ulong)uVar12 >> 0x30);
      bVar19 = (byte)((ulong)uVar12 >> 0x38);
      for (uVar6 = CONCAT17(-(bVar19 == bVar9),
                            CONCAT16(-(bVar18 == bVar9),
                                     CONCAT15(-(bVar17 == bVar9),
                                              CONCAT14(-(bVar16 == bVar9),
                                                       CONCAT13(-(bVar15 == bVar9),
                                                                CONCAT12(-(bVar14 == bVar9),
                                                                         CONCAT11(-(bVar13 == bVar9)
                                                                                  ,-((byte)uVar12 ==
                                                                                    bVar9)))))))) &
                   0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
        uVar11 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar10 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & puVar3[2];
        plVar4 = (long *)(puVar3[1] + uVar11 * 0x10);
        if (*plVar4 == *plVar5 && plVar4[1] == plVar5[1]) {
          return uVar8 + uVar11;
        }
      }
      if (CONCAT17(-(bVar19 == 0x80),
                   CONCAT16(-(bVar18 == 0x80),
                            CONCAT15(-(bVar17 == 0x80),
                                     CONCAT14(-(bVar16 == 0x80),
                                              CONCAT13(-(bVar15 == 0x80),
                                                       CONCAT12(-(bVar14 == 0x80),
                                                                CONCAT11(-(bVar13 == 0x80),
                                                                         -((byte)uVar12 == 0x80)))))
                                    ))) != 0) break;
      lVar7 = lVar7 + 8;
      uVar10 = lVar7 + uVar10;
    }
    return 0;
  }
  plVar5 = (long *)(param_1 + 8);
  (**(code **)(*puVar3 + 0x30))();
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 == plVar5) {
    lVar7 = 4;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_104ab29c4;
    lVar7 = 5;
    plVar5 = plVar4;
  }
  (**(code **)(*plVar5 + lVar7 * 8))();
LAB_104ab29c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return param_1;
}



/* Entry: 104ab29f4; end: 104ab2b27;  */

long FUN_104ab29f4(ulong *param_1,long *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar10;
  byte bVar17;
  
  Hint_Prefetch(*param_1,0,2,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  uVar8 = param_2[1] +
          (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar8;
  uVar4 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297;
  lVar5 = 0;
  uVar6 = *param_1;
  uVar8 = uVar6 >> 0xc ^ uVar4 >> 7;
  bVar7 = (byte)uVar4 & 0x7f;
  while( true ) {
    uVar8 = uVar8 & param_1[2];
    uVar10 = *(undefined8 *)(uVar6 + uVar8);
    bVar11 = (byte)((ulong)uVar10 >> 8);
    bVar12 = (byte)((ulong)uVar10 >> 0x10);
    bVar13 = (byte)((ulong)uVar10 >> 0x18);
    bVar14 = (byte)((ulong)uVar10 >> 0x20);
    bVar15 = (byte)((ulong)uVar10 >> 0x28);
    bVar16 = (byte)((ulong)uVar10 >> 0x30);
    bVar17 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar4 = CONCAT17(-(bVar17 == bVar7),
                          CONCAT16(-(bVar16 == bVar7),
                                   CONCAT15(-(bVar15 == bVar7),
                                            CONCAT14(-(bVar14 == bVar7),
                                                     CONCAT13(-(bVar13 == bVar7),
                                                              CONCAT12(-(bVar12 == bVar7),
                                                                       CONCAT11(-(bVar11 == bVar7),
                                                                                -((byte)uVar10 ==
                                                                                 bVar7)))))))) &
                 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar9 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar8 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & param_1[2];
      plVar1 = (long *)(param_1[1] + uVar9 * 0x10);
      if (*plVar1 == *param_2 && plVar1[1] == param_2[1]) {
        return uVar6 + uVar9;
      }
    }
    if (CONCAT17(-(bVar17 == 0x80),
                 CONCAT16(-(bVar16 == 0x80),
                          CONCAT15(-(bVar15 == 0x80),
                                   CONCAT14(-(bVar14 == 0x80),
                                            CONCAT13(-(bVar13 == 0x80),
                                                     CONCAT12(-(bVar12 == 0x80),
                                                              CONCAT11(-(bVar11 == 0x80),
                                                                       -((byte)uVar10 == 0x80)))))))
                ) != 0) break;
    lVar5 = lVar5 + 8;
    uVar8 = lVar5 + uVar8;
  }
  return 0;
}



/* Entry: 104ab2b28; end: 104ab2b5b;  */

void FUN_104ab2b28(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1107c51c8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104ab2b5c; end: 104ab2b87;  */

void FUN_104ab2b5c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c51c8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104ab2b88; end: 104ab2bc3;  */

long FUN_104ab2b88(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c5228);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ab2bc4; end: 104ab2bd7;  */

undefined ** FUN_104ab2bc4(void)

{
  return &PTR_DAT_1107c5228;
}



/* Entry: 104ab2bd8; end: 104ab2c0b;  */

void FUN_104ab2bd8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1107c5248;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104ab2c0c; end: 104ab2c37;  */

void FUN_104ab2c0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c5248;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104ab2c38; end: 104ab2c73;  */

long FUN_104ab2c38(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c52a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ab2c74; end: 104ab2c7f;  */

undefined ** FUN_104ab2c74(void)

{
  return &PTR_DAT_1107c52a8;
}



/* Entry: 104ab2c80; end: 104ab2d0f;  */

long * FUN_104ab2c80(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 4;
    plVar1 = param_1;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_104ab2cc4;
    lVar2 = 5;
  }
  (**(code **)(*plVar1 + lVar2 * 8))();
LAB_104ab2cc4:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[3] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[3] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    param_1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 104ab2d10; end: 104ab2dff;  */

undefined1  [16] FUN_104ab2d10(ulong *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  byte bVar6;
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
  uVar5 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar5 = param_2[1] +
          (SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar5 * -0x622015f714c7d297);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar5;
  uVar5 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar5 * -0x622015f714c7d297;
  bVar6 = (byte)uVar5 & 0x7f;
  uVar5 = uVar5 >> 7 ^ uVar9 >> 0xc;
  while( true ) {
    uVar5 = uVar5 & param_1[2];
    uVar11 = *(undefined8 *)(uVar9 + uVar5);
    bVar12 = (byte)((ulong)uVar11 >> 8);
    bVar13 = (byte)((ulong)uVar11 >> 0x10);
    bVar14 = (byte)((ulong)uVar11 >> 0x18);
    bVar15 = (byte)((ulong)uVar11 >> 0x20);
    bVar16 = (byte)((ulong)uVar11 >> 0x28);
    bVar17 = (byte)((ulong)uVar11 >> 0x30);
    bVar18 = (byte)((ulong)uVar11 >> 0x38);
    uVar10 = CONCAT17(-(bVar18 == bVar6),
                      CONCAT16(-(bVar17 == bVar6),
                               CONCAT15(-(bVar16 == bVar6),
                                        CONCAT14(-(bVar15 == bVar6),
                                                 CONCAT13(-(bVar14 == bVar6),
                                                          CONCAT12(-(bVar13 == bVar6),
                                                                   CONCAT11(-(bVar12 == bVar6),
                                                                            -((byte)uVar11 == bVar6)
                                                                           ))))))) &
             0x8080808080808080;
    if (uVar10 != 0) {
      do {
        uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        puVar7 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & param_1[2]
                          );
        plVar1 = (long *)(param_1[1] + (long)puVar7 * 0x10);
        if (*plVar1 == *param_2 && plVar1[1] == param_2[1]) {
          uVar11 = 0;
          goto LAB_104ab2df4;
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
    uVar5 = lVar8 + uVar5;
  }
  FUN_104ab2e00();
  uVar11 = 1;
  puVar7 = param_1;
LAB_104ab2df4:
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar7;
  return auVar19;
}



/* Entry: 104ab2e00; end: 104ab2eef;  */

void FUN_104ab2e00(ulong *param_1,ulong param_2)

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
    FUN_104ab3018(param_1);
    puVar2 = param_1;
    func_0x000100061de0(param_1,param_2);
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



/* Entry: 104ab2ef0; end: 104ab3017;  */

void FUN_104ab2ef0(ulong *param_1,ulong param_2)

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
  FUN_104ab30b8();
  if (uVar16 != 0) {
    uVar8 = 0;
    uVar9 = param_1[1];
    do {
      if (-1 < *(char *)(uVar2 + uVar8)) {
        plVar1 = (long *)(uVar3 + uVar8 * 0x10);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar1;
        uVar14 = plVar1[1] +
                 (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                 ((long)&PTR_LOOP_110c8acd8 + *plVar1) * -0x622015f714c7d297);
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



/* Entry: 104ab3018; end: 104ab30b7;  */

void FUN_104ab3018(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_1[2];
  if ((uVar9 < 9) || (uVar9 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar16 = param_1[2];
      param_1[2] = uVar9 << 1 | 1;
      FUN_104ab30b8();
      if (uVar16 != 0) {
        uVar9 = 0;
        uVar10 = param_1[1];
        do {
          if (-1 < *(char *)(uVar2 + uVar9)) {
            plVar1 = (long *)(uVar3 + uVar9 * 0x10);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar1;
            uVar15 = plVar1[1] +
                     (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                     ((long)&PTR_LOOP_110c8acd8 + *plVar1) * -0x622015f714c7d297);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar15;
            uVar13 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar15 * -0x622015f714c7d297;
            uVar11 = *param_1;
            uVar12 = param_1[2];
            uVar14 = (uVar13 >> 7 ^ uVar11 >> 0xc) & uVar12;
            uVar17 = *(undefined8 *)(uVar11 + uVar14);
            uVar15 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
            if (uVar15 == 0) {
              lVar8 = 8;
              do {
                uVar14 = uVar14 + lVar8 & uVar12;
                uVar17 = *(undefined8 *)(uVar11 + uVar14);
                uVar15 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar17 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
                lVar8 = lVar8 + 8;
              } while (uVar15 == 0);
            }
            uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
            uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
            uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar14 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar12;
            bVar4 = (byte)uVar13 & 0x7f;
            *(byte *)(uVar11 + uVar15) = bVar4;
            *(byte *)(uVar11 + (uVar15 - 7 & uVar12) + (uVar12 & 7)) = bVar4;
            lVar8 = *plVar1;
            plVar7 = (long *)(uVar10 + uVar15 * 0x10);
            plVar7[1] = plVar1[1];
            *plVar7 = lVar8;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar2 - 8);
        return;
      }
      return;
    }
  }
  else {
    func_0x00010ae6c914(param_1,&UNK_1107c52b8,&stack0xffffffffffffffd8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
  }
  ___stack_chk_fail();
  uVar9 = param_1[2];
  plVar7 = (long *)(uVar9 + 0x17 + uVar9 * 0x10 & 0xfffffffffffffff8);
  __Znwm();
  plVar1 = plVar7 + 1;
  *param_1 = (ulong)plVar1;
  param_1[1] = (long)plVar7 + (uVar9 + 0x17 & 0xfffffffffffffff8);
  _memset(plVar1,0x80,uVar9 + 8);
  *(undefined1 *)((long)plVar1 + uVar9) = 0xff;
  lVar8 = 6;
  if (uVar9 != 7) {
    lVar8 = uVar9 - (uVar9 >> 3);
  }
  *plVar7 = lVar8 - param_1[3];
  return;
}



/* Entry: 104ab30b8; end: 104ab313f;  */

void FUN_104ab30b8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar4 = param_1[2];
  plVar3 = (long *)(uVar4 + 0x17 + uVar4 * 0x10 & 0xfffffffffffffff8);
  __Znwm();
  plVar1 = plVar3 + 1;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar3 + (uVar4 + 0x17 & 0xfffffffffffffff8);
  _memset(plVar1,0x80,uVar4 + 8);
  *(undefined1 *)((long)plVar1 + uVar4) = 0xff;
  lVar2 = 6;
  if (uVar4 != 7) {
    lVar2 = uVar4 - (uVar4 >> 3);
  }
  *plVar3 = lVar2 - param_1[3];
  return;
}



/* Entry: 104ab3140; end: 104ab3183;  */

ulong FUN_104ab3140(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  uVar1 = param_2[1] +
          (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 104ab3184; end: 104ab31fb;  */

undefined8 * FUN_104ab3184(undefined8 *param_1,undefined8 param_2)

{
  undefined2 auStack_30 [4];
  undefined8 uStack_28;
  
  *param_1 = param_2;
  auStack_30[0] = 0x101;
  uStack_28 = 0;
  func_0x000100462a0c(param_1 + 1,"iomgr_eventengine_pool",FUN_104ab38e0,param_1,0,auStack_30);
  func_0x000100463850();
  return param_1;
}



/* Entry: 104ab31fc; end: 104ab3233;  */

long FUN_104ab31fc(long param_1)

{
  FUN_104ab3234(param_1 + 8);
  func_0x0001004629b0(param_1 + 8);
  return param_1;
}



/* Entry: 104ab3234; end: 104ab3297;  */

void FUN_104ab3234(int *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  
  plVar5 = *(long **)(param_1 + 2);
  if (plVar5 == (long *)0x0) {
    if (*param_1 != 4) {
      func_0x00010bdabe90();
      FUN_104ab33e4(*plVar5);
      lVar10 = *plVar5;
      func_0x000100460448(lVar10);
      lVar11 = *plVar5;
      *(int *)(lVar11 + 0xdc) = *(int *)(lVar11 + 0xdc) + -1;
      plVar12 = *(long **)(lVar11 + 0xf0);
      puVar6 = (undefined8 *)(lVar11 + 0xf8);
      if (plVar12 < (long *)*puVar6) {
        plVar14 = plVar12 + 1;
        *plVar12 = (long)plVar5;
      }
      else {
        plVar1 = (long *)(lVar11 + 0xe8);
        lVar13 = (long)plVar12 - *plVar1 >> 3;
        uVar2 = lVar13 + 1;
        if (uVar2 >> 0x3d != 0) {
          FUN_104ab3a64(plVar1);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104ab33c4);
          (*pcVar4)();
        }
        uVar8 = (long)*puVar6 - *plVar1;
        uVar9 = (long)uVar8 >> 2;
        if (uVar9 <= uVar2) {
          uVar9 = uVar2;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          FUN_104ab3a78();
        }
        plVar12 = puVar6 + lVar13;
        plVar14 = plVar12 + 1;
        *plVar12 = (long)plVar5;
        plVar3 = *(long **)(lVar11 + 0xe8);
        plVar7 = *(long **)(lVar11 + 0xf0);
        if (plVar7 != plVar3) {
          do {
            plVar7 = plVar7 + -1;
            plVar12 = plVar12 + -1;
            *plVar12 = *plVar7;
          } while (plVar7 != plVar3);
          plVar7 = (long *)*plVar1;
        }
        *(long **)(lVar11 + 0xe8) = plVar12;
        *(long **)(lVar11 + 0xf0) = plVar14;
        *(undefined8 **)(lVar11 + 0xf8) = puVar6 + uVar9;
        if (plVar7 != (long *)0x0) {
          __ZdlPv();
        }
      }
      *(long **)(lVar11 + 0xf0) = plVar14;
      lVar11 = *plVar5;
      if ((*(char *)(lVar11 + 0xa0) != '\0') && (*(int *)(lVar11 + 0xdc) == 0)) {
        func_0x000100466b64(lVar11 + 0x70);
      }
      func_0x000100466b80(lVar10);
      return;
    }
  }
  else {
    (**(code **)(*plVar5 + 0x18))();
    if (*(long **)(param_1 + 2) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 2) + 8))();
    }
    *param_1 = 3;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 104ab3298; end: 104ab33e3;  */

void FUN_104ab3298(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  
  FUN_104ab33e4(*param_1);
  lVar9 = *param_1;
  func_0x000100460448(lVar9);
  lVar10 = *param_1;
  *(int *)(lVar10 + 0xdc) = *(int *)(lVar10 + 0xdc) + -1;
  puVar11 = *(undefined8 **)(lVar10 + 0xf0);
  puVar5 = (undefined8 *)(lVar10 + 0xf8);
  if (puVar11 < (undefined8 *)*puVar5) {
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
  }
  else {
    plVar1 = (long *)(lVar10 + 0xe8);
    lVar12 = (long)puVar11 - *plVar1 >> 3;
    uVar2 = lVar12 + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_104ab3a64(plVar1);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104ab33c4);
      (*pcVar4)();
    }
    uVar7 = (long)*puVar5 - *plVar1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_104ab3a78();
    }
    puVar11 = puVar5 + lVar12;
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
    puVar3 = *(undefined8 **)(lVar10 + 0xe8);
    puVar6 = *(undefined8 **)(lVar10 + 0xf0);
    if (puVar6 != puVar3) {
      do {
        puVar6 = puVar6 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar6;
      } while (puVar6 != puVar3);
      puVar6 = (undefined8 *)*plVar1;
    }
    *(undefined8 **)(lVar10 + 0xe8) = puVar11;
    *(undefined8 **)(lVar10 + 0xf0) = puVar13;
    *(undefined8 **)(lVar10 + 0xf8) = puVar5 + uVar8;
    if (puVar6 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  *(undefined8 **)(lVar10 + 0xf0) = puVar13;
  lVar10 = *param_1;
  if ((*(char *)(lVar10 + 0xa0) != '\0') && (*(int *)(lVar10 + 0xdc) == 0)) {
    func_0x000100466b64(lVar10 + 0x70);
  }
  func_0x000100466b80(lVar9);
  return;
}



/* Entry: 104ab33e4; end: 104ab35b7;  */

long * FUN_104ab33e4(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lStack_68;
  undefined1 uStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    uStack_60 = 0;
    lStack_68 = param_1;
    func_0x000100460448(param_1);
    iVar6 = (int)param_2;
    if (*(char *)(param_1 + 0xa0) == '\0') {
      if (*(long *)(param_1 + 0xd0) == 0) {
        if (*(int *)(param_1 + 0xd8) <= *(int *)(param_1 + 0xe0)) {
LAB_104ab351c:
          plVar3 = &lStack_68;
          FUN_104ab38e4();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
            ___stack_chk_fail();
            FUN_104ab38e4(&lStack_68);
            __Unwind_Resume();
            func_0x000100460318();
            func_0x000100460338(plVar3 + 8);
            func_0x000100460338(plVar3 + 0xe);
            plVar3[0x16] = 0;
            plVar3[0x15] = 0;
            *(undefined1 *)(plVar3 + 0x14) = 0;
            plVar3[0x18] = 0;
            plVar3[0x17] = 0;
            plVar3[0x1a] = 0;
            plVar3[0x19] = 0;
            *(undefined4 *)((long)plVar3 + 0xdc) = 0;
            *(undefined4 *)(plVar3 + 0x1c) = 0;
            *(int *)(plVar3 + 0x1b) = iVar6;
            plVar3[0x1d] = 0;
            plVar3[0x1e] = 0;
            plVar3[0x1f] = 0;
            if (0 < iVar6) {
              iVar6 = 0;
              do {
                func_0x000100460448(plVar3);
                *(int *)((long)plVar3 + 0xdc) = *(int *)((long)plVar3 + 0xdc) + 1;
                __Znwm(0x28);
                FUN_104ab3184();
                func_0x000100466b80(plVar3);
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)plVar3[0x1b]);
            }
            return plVar3;
          }
          return plVar3;
        }
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
        uVar2 = 0x7fffffffffffffff;
        uVar4 = 0xffffffff;
        func_0x000100466ec8(0x7fffffffffffffff,0xffffffff);
        param_2 = param_1;
        func_0x000100466590(param_1 + 0x40,param_1,uVar2,uVar4);
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
        if (*(long *)(param_1 + 0xd0) == 0) goto LAB_104ab3438;
      }
LAB_104ab3494:
      param_2 = *(long *)(*(long *)(param_1 + 0xb0) +
                         (*(ulong *)(param_1 + 200) >> 4 & 0xffffffffffffff8)) +
                (*(ulong *)(param_1 + 200) & 0x7f) * 0x20;
      func_0x000104ab3aac(alStack_58);
      func_0x00010834f69c(param_1 + 0xa8);
      uStack_60 = 1;
      func_0x000100466b80(lStack_68);
      if (plStack_40 == (long *)0x0) {
        FUN_104a71f98();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104ab3558);
        (*pcVar1)();
      }
      (**(code **)(*plStack_40 + 0x30))();
      if (plStack_40 == alStack_58) {
        plVar3 = alStack_58;
        lVar5 = 4;
      }
      else {
        if (plStack_40 == (long *)0x0) goto LAB_104ab3510;
        lVar5 = 5;
        plVar3 = plStack_40;
      }
      (**(code **)(*plVar3 + lVar5 * 8))();
    }
    else {
      if (*(long *)(param_1 + 0xd0) != 0) goto LAB_104ab3494;
LAB_104ab3438:
      iVar6 = (int)param_2;
      if (*(char *)(param_1 + 0xa0) != '\0') goto LAB_104ab351c;
    }
LAB_104ab3510:
    FUN_104ab38e4(&lStack_68);
  } while( true );
}



/* Entry: 104ab35b8; end: 104ab3707;  */

long FUN_104ab35b8(long param_1,int param_2)

{
  int iVar1;
  
  func_0x000100460318();
  func_0x000100460338(param_1 + 0x40);
  func_0x000100460338(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(int *)(param_1 + 0xd8) = param_2;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (0 < param_2) {
    iVar1 = 0;
    do {
      func_0x000100460448(param_1);
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      __Znwm(0x28);
      FUN_104ab3184();
      func_0x000100466b80(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xd8));
  }
  return param_1;
}



/* Entry: 104ab3708; end: 104ab370b;  */

long FUN_104ab3708(long param_1,int param_2)

{
  int iVar1;
  
  func_0x000100460318();
  func_0x000100460338(param_1 + 0x40);
  func_0x000100460338(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(int *)(param_1 + 0xd8) = param_2;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (0 < param_2) {
    iVar1 = 0;
    do {
      func_0x000100460448(param_1);
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      __Znwm(0x28);
      FUN_104ab3184();
      func_0x000100466b80(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xd8));
  }
  return param_1;
}



/* Entry: 104ab370c; end: 104ab375f;  */

void FUN_104ab370c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 != 0) {
        FUN_104ab31fc();
        __ZdlPv();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = (long *)*param_1;
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 104ab3760; end: 104ab382b;  */

long FUN_104ab3760(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000100460448();
  *(undefined1 *)(param_1 + 0xa0) = 1;
  func_0x000104a6f52c(param_1 + 0x40);
  while (*(int *)(param_1 + 0xdc) != 0) {
    uVar1 = 0x7fffffffffffffff;
    uVar3 = 0xffffffff;
    func_0x000100466ec8(0x7fffffffffffffff,0xffffffff);
    func_0x000100466590(param_1 + 0x70,param_1,uVar1,uVar3);
  }
  FUN_104ab370c((long *)(param_1 + 0xe8));
  func_0x000100466b80(param_1);
  lVar2 = *(long *)(param_1 + 0xe8);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0xf0) = lVar2;
    __ZdlPv();
  }
  FUN_104ab3918(param_1 + 0xa8);
  func_0x000100832c44(param_1 + 0x70);
  func_0x000100832c44(param_1 + 0x40);
  func_0x0001005a5f48(param_1);
  return param_1;
}



/* Entry: 104ab382c; end: 104ab382f;  */

long FUN_104ab382c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000100460448();
  *(undefined1 *)(param_1 + 0xa0) = 1;
  func_0x000104a6f52c(param_1 + 0x40);
  while (*(int *)(param_1 + 0xdc) != 0) {
    uVar1 = 0x7fffffffffffffff;
    uVar3 = 0xffffffff;
    func_0x000100466ec8(0x7fffffffffffffff,0xffffffff);
    func_0x000100466590(param_1 + 0x70,param_1,uVar1,uVar3);
  }
  FUN_104ab370c((long *)(param_1 + 0xe8));
  func_0x000100466b80(param_1);
  lVar2 = *(long *)(param_1 + 0xe8);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0xf0) = lVar2;
    __ZdlPv();
  }
  FUN_104ab3918(param_1 + 0xa8);
  func_0x000100832c44(param_1 + 0x70);
  func_0x000100832c44(param_1 + 0x40);
  func_0x0001005a5f48(param_1);
  return param_1;
}



/* Entry: 104ab3830; end: 104ab38df;  */

void FUN_104ab3830(long param_1,undefined8 param_2)

{
  func_0x000100460448();
  func_0x000104ab3b10(param_1 + 0xa8,param_2);
  if (*(int *)(param_1 + 0xe0) == 0) {
    *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
    __Znwm(0x28);
    FUN_104ab3184();
  }
  else {
    func_0x000100466b64(param_1 + 0x40);
  }
  if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0)) {
    FUN_104ab370c();
  }
  func_0x000100466b80(param_1);
  return;
}



/* Entry: 104ab38e0; end: 104ab38e3;  */

void FUN_104ab38e0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  
  FUN_104ab33e4(*param_1);
  lVar9 = *param_1;
  func_0x000100460448(lVar9);
  lVar10 = *param_1;
  *(int *)(lVar10 + 0xdc) = *(int *)(lVar10 + 0xdc) + -1;
  puVar11 = *(undefined8 **)(lVar10 + 0xf0);
  puVar5 = (undefined8 *)(lVar10 + 0xf8);
  if (puVar11 < (undefined8 *)*puVar5) {
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
  }
  else {
    plVar1 = (long *)(lVar10 + 0xe8);
    lVar12 = (long)puVar11 - *plVar1 >> 3;
    uVar2 = lVar12 + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_104ab3a64(plVar1);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104ab33c4);
      (*pcVar4)();
    }
    uVar7 = (long)*puVar5 - *plVar1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_104ab3a78();
    }
    puVar11 = puVar5 + lVar12;
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
    puVar3 = *(undefined8 **)(lVar10 + 0xe8);
    puVar6 = *(undefined8 **)(lVar10 + 0xf0);
    if (puVar6 != puVar3) {
      do {
        puVar6 = puVar6 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar6;
      } while (puVar6 != puVar3);
      puVar6 = (undefined8 *)*plVar1;
    }
    *(undefined8 **)(lVar10 + 0xe8) = puVar11;
    *(undefined8 **)(lVar10 + 0xf0) = puVar13;
    *(undefined8 **)(lVar10 + 0xf8) = puVar5 + uVar8;
    if (puVar6 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  *(undefined8 **)(lVar10 + 0xf0) = puVar13;
  lVar10 = *param_1;
  if ((*(char *)(lVar10 + 0xa0) != '\0') && (*(int *)(lVar10 + 0xdc) == 0)) {
    func_0x000100466b64(lVar10 + 0x70);
  }
  func_0x000100466b80(lVar9);
  return;
}



/* Entry: 104ab38e4; end: 104ab3917;  */

undefined8 * FUN_104ab38e4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    func_0x000100466b80(*param_1);
  }
  return param_1;
}



/* Entry: 104ab3918; end: 104ab3a63;  */

long * FUN_104ab3918(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar7 = puVar6;
  if ((undefined8 *)param_1[2] != puVar6) {
    uVar5 = param_1[4];
    plVar8 = puVar6 + (uVar5 >> 7);
    plVar3 = (long *)*plVar8;
    plVar9 = plVar3 + (uVar5 & 0x7f) * 4;
    plVar1 = (long *)(*(long *)((long)puVar6 + (param_1[5] + uVar5 >> 4 & 0xffffffffffffff8)) +
                     (param_1[5] + uVar5 & 0x7f) * 0x20);
    puVar7 = (undefined8 *)param_1[2];
    if (plVar9 != plVar1) {
      do {
        plVar2 = (long *)plVar9[3];
        if (plVar2 == plVar9) {
          lVar4 = 4;
          plVar2 = plVar9;
LAB_104ab39a0:
          (**(code **)(*plVar2 + lVar4 * 8))();
          plVar3 = (long *)*plVar8;
        }
        else if (plVar2 != (long *)0x0) {
          lVar4 = 5;
          goto LAB_104ab39a0;
        }
        plVar9 = plVar9 + 4;
        if ((long)plVar9 - (long)plVar3 == 0x1000) {
          plVar8 = plVar8 + 1;
          plVar3 = (long *)*plVar8;
          plVar9 = plVar3;
        }
      } while (plVar9 != plVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  uVar5 = (long)puVar7 - (long)puVar6;
  while (0x10 < uVar5) {
    __ZdlPv(*puVar6);
    puVar7 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar6;
    uVar5 = (long)puVar7 - (long)puVar6;
  }
  if (uVar5 >> 3 == 1) {
    lVar4 = 0x40;
  }
  else {
    if (uVar5 >> 3 != 2) goto LAB_104ab3a40;
    lVar4 = 0x80;
  }
  param_1[4] = lVar4;
LAB_104ab3a40:
  for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
    __ZdlPv(*puVar6);
  }
  func_0x00010834f89c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104ab3a64; end: 104ab3a77;  */

undefined1  [16] FUN_104ab3a64(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_104a7757c();
  plVar3 = (long *)param_2[3];
  if (plVar3 == (long *)0x0) {
    plVar1[3] = 0;
  }
  else if (plVar3 == param_2) {
    plVar1[3] = (long)plVar1;
    plVar3 = param_2 + 3;
    param_2 = plVar1;
    (**(code **)(*(long *)*plVar3 + 0x18))((long *)*plVar3,plVar1);
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    plVar1[3] = (long)plVar3;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 104ab3a78; end: 104ab3ba3;  */

undefined1  [16] FUN_104ab3a78(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_104a7757c();
  plVar2 = (long *)param_2[3];
  if (plVar2 == (long *)0x0) {
    param_1[3] = 0;
  }
  else if (plVar2 == param_2) {
    param_1[3] = (long)param_1;
    plVar2 = param_2 + 3;
    param_2 = param_1;
    (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,param_1);
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[3] = (long)plVar2;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 104ab3ba4; end: 104ab3c37;  */

undefined1  [16]
FUN_104ab3ba4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ab3c38; end: 104ab3c93;  */

long FUN_104ab3c38(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(param_1 + 0x90);
  plVar2 = plVar3;
  func_0x000104ab4bac();
  if ((int)plVar2 == 0) {
    func_0x000104ab4bbc();
    lVar4 = *plVar3;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x78);
    lVar1 = lVar5;
    if (lVar5 != 0x7fffffffffffffff) {
      lVar1 = lVar5 + 1;
    }
    lVar4 = -0x8000000000000000;
    if (lVar5 != -0x8000000000000000) {
      lVar4 = lVar1;
    }
  }
  return lVar4;
}



/* Entry: 104ab3c94; end: 104ab3cf7;  */

long FUN_104ab3c94(long param_1)

{
  func_0x000100460318();
  func_0x000104ab3bac(0x40083e0f83e0f83e,0x3fb999999999999a,0x3fe0000000000000,param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return param_1;
}



/* Entry: 104ab3cf8; end: 104ab3ef3;  */

undefined8 * FUN_104ab3cf8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  *param_1 = param_2;
  puVar5 = param_1;
  func_0x0001004605e0();
  uVar3 = (int)puVar5 << 1;
  uVar2 = uVar3;
  if (0x1f < uVar3) {
    uVar2 = 0x20;
  }
  if (uVar3 == 0) {
    uVar2 = 1;
  }
  param_1[1] = (ulong)uVar2;
  func_0x000100460318(param_1 + 2);
  puVar5 = (undefined8 *)*param_1;
  (**(code **)*puVar5)();
  param_1[10] = puVar5;
  func_0x000100460318(param_1 + 0xb);
  uVar7 = param_1[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7;
  puVar5 = (undefined8 *)(uVar7 * 0xe8 + 0x10);
  if (0xffffffffffffffef < uVar7 * 0xe8 || SUB168(auVar4 * ZEXT816(0xe8),8) != 0) {
    puVar5 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar5 = 0xe8;
  puVar5[1] = uVar7;
  if (uVar7 == 0) {
    lVar8 = 0;
    param_1[0x13] = puVar5 + 2;
    uVar7 = 0;
  }
  else {
    lVar8 = 0;
    do {
      FUN_104ab3c94((long)puVar5 + lVar8 + 0x10);
      lVar8 = lVar8 + 0xe8;
    } while (uVar7 * 0xe8 - lVar8 != 0);
    uVar7 = param_1[1];
    param_1[0x13] = puVar5 + 2;
    lVar8 = uVar7 << 3;
    if (uVar7 >> 0x3d != 0) {
      lVar8 = -1;
    }
  }
  __Znam();
  param_1[0x14] = lVar8;
  if (uVar7 != 0) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar1 = param_1[0x13] + lVar8;
      *(undefined8 *)(lVar1 + 0x78) = param_1[10];
      *(int *)(lVar1 + 0x88) = (int)uVar7;
      *(long *)(lVar1 + 200) = lVar1 + 0xa8;
      *(long *)(lVar1 + 0xc0) = lVar1 + 0xa8;
      lVar6 = lVar1;
      FUN_104ab3c38();
      *(long *)(lVar1 + 0x80) = lVar6;
      *(long *)(param_1[0x14] + uVar7 * 8) = lVar1;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xe8;
    } while (uVar7 < (ulong)param_1[1]);
  }
  return param_1;
}



/* Entry: 104ab3ef4; end: 104ab3f2f;  */

long FUN_104ab3ef4(long param_1)

{
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  func_0x0001005a5f48(param_1);
  return param_1;
}



/* Entry: 104ab3f30; end: 104ab3feb;  */

undefined8 * FUN_104ab3f30(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  *param_1 = param_2;
  puVar5 = param_1;
  func_0x0001004605e0();
  uVar3 = (int)puVar5 << 1;
  uVar2 = uVar3;
  if (0x1f < uVar3) {
    uVar2 = 0x20;
  }
  if (uVar3 == 0) {
    uVar2 = 1;
  }
  param_1[1] = (ulong)uVar2;
  func_0x000100460318(param_1 + 2);
  puVar5 = (undefined8 *)*param_1;
  (**(code **)*puVar5)();
  param_1[10] = puVar5;
  func_0x000100460318(param_1 + 0xb);
  uVar7 = param_1[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7;
  puVar5 = (undefined8 *)(uVar7 * 0xe8 + 0x10);
  if (0xffffffffffffffef < uVar7 * 0xe8 || SUB168(auVar4 * ZEXT816(0xe8),8) != 0) {
    puVar5 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar5 = 0xe8;
  puVar5[1] = uVar7;
  if (uVar7 == 0) {
    lVar8 = 0;
    param_1[0x13] = puVar5 + 2;
    uVar7 = 0;
  }
  else {
    lVar8 = 0;
    do {
      FUN_104ab3c94((long)puVar5 + lVar8 + 0x10);
      lVar8 = lVar8 + 0xe8;
    } while (uVar7 * 0xe8 - lVar8 != 0);
    uVar7 = param_1[1];
    param_1[0x13] = puVar5 + 2;
    lVar8 = uVar7 << 3;
    if (uVar7 >> 0x3d != 0) {
      lVar8 = -1;
    }
  }
  __Znam();
  param_1[0x14] = lVar8;
  if (uVar7 != 0) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar1 = param_1[0x13] + lVar8;
      *(undefined8 *)(lVar1 + 0x78) = param_1[10];
      *(int *)(lVar1 + 0x88) = (int)uVar7;
      *(long *)(lVar1 + 200) = lVar1 + 0xa8;
      *(long *)(lVar1 + 0xc0) = lVar1 + 0xa8;
      lVar6 = lVar1;
      FUN_104ab3c38();
      *(long *)(lVar1 + 0x80) = lVar6;
      *(long *)(param_1[0x14] + uVar7 * 8) = lVar1;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xe8;
    } while (uVar7 < (ulong)param_1[1]);
  }
  return param_1;
}



/* Entry: 104ab3fec; end: 104ab421b;  */

void FUN_104ab3fec(ulong *param_1,ulong *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  double dVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar3 = param_1[1];
  uVar6 = (ulong)param_2 >> 4 ^ (ulong)param_2 >> 9 ^ (ulong)param_2 >> 0xe;
  uVar9 = 0;
  if (uVar3 != 0) {
    uVar9 = uVar6 / uVar3;
  }
  lVar8 = uVar6 - uVar9 * uVar3;
  uVar9 = param_1[0x13];
  lVar7 = uVar9 + lVar8 * 0xe8;
  param_2[5] = param_4;
  *param_2 = (ulong)param_3;
  func_0x000100460448(lVar7);
  *(undefined1 *)(param_2 + 2) = 1;
  puVar2 = (undefined8 *)*param_1;
  (**(code **)*puVar2)();
  puVar1 = puVar2;
  if ((long)puVar2 <= (long)param_3) {
    puVar1 = param_3;
  }
  if (puVar2 == (undefined8 *)0x8000000000000001 || puVar1 == (undefined8 *)0x7fffffffffffffff) {
LAB_104ab4078:
    dVar4 = 9.223372036854776e+18;
    goto LAB_104ab4098;
  }
  if (puVar2 == (undefined8 *)0x8000000000000000 || puVar1 == (undefined8 *)0x8000000000000000) {
LAB_104ab4090:
    dVar4 = -9.223372036854776e+18;
  }
  else {
    if ((long)puVar1 < 1) {
      if (-(long)puVar2 < -0x8000000000000000 - (long)puVar1) goto LAB_104ab4090;
    }
    else if ((long)((ulong)puVar1 ^ 0x7fffffffffffffff) < -(long)puVar2) goto LAB_104ab4078;
    dVar4 = (double)((long)puVar1 - (long)puVar2);
  }
LAB_104ab4098:
  func_0x000104ab3bc4(dVar4 / 1000.0,uVar9 + lVar8 * 0xe8 + 0x40);
  if ((long)puVar1 < *(long *)(uVar9 + lVar8 * 0xe8 + 0x78)) {
    lVar10 = uVar9 + lVar8 * 0xe8 + 0x90;
    FUN_104ab4a28(lVar10,param_2);
    func_0x000100466b80(lVar7);
    if ((int)lVar10 != 0) {
      func_0x000100460448(param_1 + 2);
      puVar5 = (ulong *)(uVar9 + lVar8 * 0xe8 + 0x80);
      if ((long)puVar1 < (long)*puVar5) {
        lVar10 = *(long *)(*(long *)param_1[0x14] + 0x80);
        *puVar5 = (ulong)puVar1;
        FUN_104ab3f30(param_1,lVar7);
        if (*(int *)(uVar9 + lVar8 * 0xe8 + 0x88) == 0 && (long)puVar1 < lVar10) {
          param_1[10] = (ulong)puVar1;
          (**(code **)(*(long *)*param_1 + 8))();
        }
      }
      func_0x000100466b80(param_1 + 2);
    }
  }
  else {
    param_2[1] = 0xffffffffffffffff;
    lVar8 = uVar9 + lVar8 * 0xe8;
    uVar9 = *(ulong *)(lVar8 + 200);
    param_2[3] = lVar8 + 0xa8;
    param_2[4] = uVar9;
    *(ulong **)(uVar9 + 0x18) = param_2;
    *(ulong **)(param_2[3] + 0x20) = param_2;
    func_0x000100466b80(lVar7);
  }
  return;
}



/* Entry: 104ab421c; end: 104ab42df;  */

bool FUN_104ab421c(long param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar4 = param_2 >> 4 ^ param_2 >> 9 ^ param_2 >> 0xe;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar4 / uVar3;
  }
  lVar6 = uVar4 - uVar2 * uVar3;
  lVar7 = *(long *)(param_1 + 0x98);
  lVar5 = lVar7 + lVar6 * 0xe8;
  func_0x000100460448(lVar5);
  cVar1 = *(char *)(param_2 + 0x10);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 0x10) = 0;
    if (*(long *)(param_2 + 8) == -1) {
      lVar6 = *(long *)(param_2 + 0x18);
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(long *)(*(long *)(param_2 + 0x20) + 0x18) = lVar6;
    }
    else {
      FUN_104ab4b60(lVar7 + lVar6 * 0xe8 + 0x90,param_2);
    }
  }
  func_0x000100466b80(lVar5);
  return cVar1 != '\0';
}



/* Entry: 104ab42e0; end: 104ab44af;  */

uint FUN_104ab42e0(double param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  double dVar6;
  double dVar7;
  
  func_0x000104ab3bdc(param_2 + 0x40);
  param_1 = param_1 * 0.33;
  dVar7 = 1000.0;
  if (param_1 <= 1.0) {
    dVar7 = param_1 * 1000.0;
  }
  uVar1 = *(ulong *)(param_2 + 0x78);
  if ((long)*(ulong *)(param_2 + 0x78) <= (long)param_3) {
    uVar1 = param_3;
  }
  dVar6 = 10.0;
  if (0.01 <= param_1) {
    dVar6 = dVar7;
  }
  lVar3 = 0x7fffffffffffffff;
  if (dVar6 < 9.223372036854776e+18) {
    dVar7 = -9.223372036854776e+18;
    if (-9.223372036854776e+18 < dVar6) {
      dVar7 = dVar6;
    }
    if ((((uVar1 != 0x7fffffffffffffff) && (lVar4 = (long)dVar7, lVar4 != 0x7fffffffffffffff)) &&
        (lVar3 = -0x8000000000000000, uVar1 != 0x8000000000000000)) &&
       (lVar4 != -0x8000000000000000)) {
      if ((long)uVar1 < 1) {
        if (lVar4 < (long)(-0x8000000000000000 - uVar1)) goto LAB_104ab43c0;
      }
      else if ((long)(uVar1 ^ 0x7fffffffffffffff) < lVar4) {
        lVar3 = 0x7fffffffffffffff;
        goto LAB_104ab43c0;
      }
      lVar3 = uVar1 + lVar4;
    }
  }
LAB_104ab43c0:
  *(long *)(param_2 + 0x78) = lVar3;
  if (*(long **)(param_2 + 0xc0) != (long *)(param_2 + 0xa8)) {
    plVar2 = *(long **)(param_2 + 0xc0);
    do {
      plVar5 = (long *)plVar2[3];
      if (*plVar2 < *(long *)(param_2 + 0x78)) {
        plVar5[4] = plVar2[4];
        *(long **)(plVar2[4] + 0x18) = plVar5;
        FUN_104ab4a28(param_2 + 0x90);
      }
      plVar2 = plVar5;
    } while (plVar5 != (long *)(param_2 + 0xa8));
  }
  param_2 = param_2 + 0x90;
  func_0x000104ab4bac(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 104ab44b0; end: 104ab460b;  */

void FUN_104ab44b0(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  func_0x000100460448();
  do {
    lVar4 = param_1;
    func_0x000104ab442c(param_1,param_2);
    if (lVar4 == 0) {
      lVar4 = param_1;
      FUN_104ab3c38();
      *param_3 = lVar4;
      func_0x000100466b80(param_1);
      return;
    }
    puVar2 = (undefined8 *)param_4[1];
    if (puVar2 < (undefined8 *)param_4[2]) {
      plVar11 = puVar2 + 1;
      *puVar2 = *(undefined8 *)(lVar4 + 0x28);
    }
    else {
      lVar10 = (long)puVar2 - *param_4 >> 3;
      uVar1 = lVar10 + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_104ab48b4(param_4);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104ab45e8);
        (*pcVar3)();
      }
      uVar6 = param_4[2] - *param_4;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = param_4 + 2;
        FUN_104ab48c8();
      }
      plVar9 = plVar5 + lVar10;
      plVar11 = plVar9 + 1;
      *plVar9 = *(undefined8 *)(lVar4 + 0x28);
      puVar2 = (undefined8 *)*param_4;
      puVar7 = (undefined8 *)param_4[1];
      if (puVar7 != puVar2) {
        do {
          puVar7 = puVar7 + -1;
          plVar9 = plVar9 + -1;
          *plVar9 = *puVar7;
        } while (puVar7 != puVar2);
        puVar7 = (undefined8 *)*param_4;
      }
      *param_4 = (long)plVar9;
      param_4[1] = (long)plVar11;
      param_4[2] = (long)(plVar5 + uVar8);
      if (puVar7 != (undefined8 *)0x0) {
        __ZdlPv(puVar7);
      }
    }
    param_4[1] = (long)plVar11;
  } while( true );
}



/* Entry: 104ab460c; end: 104ab4753;  */

void FUN_104ab460c(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_2 + 0x50);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 < lVar2) {
    if (param_4 != (long *)0x0) {
      if (*param_4 <= lVar2) {
        lVar2 = *param_4;
      }
      *param_4 = lVar2;
    }
  }
  else {
    func_0x000100460448(param_2 + 0x10);
    lVar1 = **(long **)(param_2 + 0xa0);
    plVar3 = (long *)(lVar1 + 0x80);
    lVar2 = *plVar3;
    if (lVar2 < param_3 || lVar2 == param_3 && param_3 != 0x7fffffffffffffff) {
      do {
        do {
          uStack_58 = 0;
          FUN_104ab44b0(lVar1,param_3,&uStack_58,param_1);
          *(undefined8 *)(**(long **)(param_2 + 0xa0) + 0x80) = uStack_58;
          FUN_104ab3f30(param_2);
          lVar1 = **(long **)(param_2 + 0xa0);
          lVar2 = *(long *)(lVar1 + 0x80);
        } while (lVar2 < param_3);
      } while (lVar2 == param_3 && param_3 != 0x7fffffffffffffff);
      plVar3 = (long *)(lVar1 + 0x80);
    }
    if (param_4 != (long *)0x0) {
      if (*param_4 <= lVar2) {
        lVar2 = *param_4;
      }
      *param_4 = lVar2;
      lVar2 = *plVar3;
    }
    *(long *)(param_2 + 0x50) = lVar2;
    func_0x000100466b80(param_2 + 0x10);
  }
  return;
}



/* Entry: 104ab4754; end: 104ab483f;  */

void FUN_104ab4754(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = (undefined8 *)*param_2;
  (**(code **)*puVar1)();
  lVar3 = param_2[10];
  if ((long)puVar1 < lVar3) {
    if (param_3 != (long *)0x0) {
      if (*param_3 <= lVar3) {
        lVar3 = *param_3;
      }
      *param_3 = lVar3;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    plVar2 = param_2 + 0xb;
    FUN_104a6f500();
    if ((int)plVar2 == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    }
    FUN_104ab460c(&uStack_60,param_2,puVar1,param_3);
    func_0x000100466b80(param_2 + 0xb);
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[2] = uStack_50;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104ab4840; end: 104ab48b3;  */

void FUN_104ab4840(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + -8) != 0) {
      lVar2 = *(long *)(param_2 + -8) * 0xe8;
      do {
        lVar1 = param_2 + lVar2;
        if (*(long *)(lVar1 + -0x58) != 0) {
          *(long *)(lVar1 + -0x50) = *(long *)(lVar1 + -0x58);
          __ZdlPv();
        }
        func_0x0001005a5f48(lVar1 + -0xe8);
        lVar2 = lVar2 + -0xe8;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 104ab48b4; end: 104ab48c7;  */

void FUN_104ab48b4(undefined8 param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_104a7757c();
  uVar5 = param_2 << 1 | 1;
  lVar3 = *plVar2;
  uVar9 = plVar2[1] - lVar3 >> 3;
  if (uVar5 < uVar9) {
    lVar4 = *param_3;
    do {
      uVar1 = param_2 * 2 + 2;
      plVar7 = *(long **)(lVar3 + uVar5 * 8);
      lVar10 = *plVar7;
      uVar6 = uVar5;
      if (uVar1 < uVar9) {
        plVar8 = *(long **)(lVar3 + uVar1 * 8);
        lVar11 = *plVar8;
        if (lVar11 < lVar10) {
          uVar6 = uVar1;
          plVar7 = plVar8;
          lVar10 = lVar11;
        }
      }
      if (lVar4 <= lVar10) break;
      *(long **)(lVar3 + param_2 * 8) = plVar7;
      lVar3 = *plVar2;
      lVar10 = plVar2[1];
      *(ulong *)(*(long *)(lVar3 + param_2 * 8) + 8) = param_2;
      uVar5 = uVar6 << 1 | 1;
      uVar9 = lVar10 - lVar3 >> 3;
      param_2 = uVar6;
    } while (uVar5 < uVar9);
  }
  *(long **)(lVar3 + param_2 * 8) = param_3;
  param_3[1] = param_2;
  return;
}



/* Entry: 104ab48c8; end: 104ab48fb;  */

void FUN_104ab48c8(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_104a7757c();
  uVar4 = param_2 << 1 | 1;
  lVar2 = *param_1;
  uVar8 = param_1[1] - lVar2 >> 3;
  if (uVar4 < uVar8) {
    lVar3 = *param_3;
    do {
      uVar1 = param_2 * 2 + 2;
      plVar6 = *(long **)(lVar2 + uVar4 * 8);
      lVar9 = *plVar6;
      uVar5 = uVar4;
      if (uVar1 < uVar8) {
        plVar7 = *(long **)(lVar2 + uVar1 * 8);
        lVar10 = *plVar7;
        if (lVar10 < lVar9) {
          uVar5 = uVar1;
          plVar6 = plVar7;
          lVar9 = lVar10;
        }
      }
      if (lVar3 <= lVar9) break;
      *(long **)(lVar2 + param_2 * 8) = plVar6;
      lVar2 = *param_1;
      lVar9 = param_1[1];
      *(ulong *)(*(long *)(lVar2 + param_2 * 8) + 8) = param_2;
      uVar4 = uVar5 << 1 | 1;
      uVar8 = lVar9 - lVar2 >> 3;
      param_2 = uVar5;
    } while (uVar4 < uVar8);
  }
  *(long **)(lVar2 + param_2 * 8) = param_3;
  param_3[1] = param_2;
  return;
}



/* Entry: 104ab48fc; end: 104ab4a27;  */

void FUN_104ab48fc(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar4 = param_2 << 1 | 1;
  lVar2 = *param_1;
  uVar8 = param_1[1] - lVar2 >> 3;
  if (uVar4 < uVar8) {
    lVar3 = *param_3;
    do {
      uVar1 = param_2 * 2 + 2;
      plVar6 = *(long **)(lVar2 + uVar4 * 8);
      lVar9 = *plVar6;
      uVar5 = uVar4;
      if (uVar1 < uVar8) {
        plVar7 = *(long **)(lVar2 + uVar1 * 8);
        lVar10 = *plVar7;
        if (lVar10 < lVar9) {
          uVar5 = uVar1;
          plVar6 = plVar7;
          lVar9 = lVar10;
        }
      }
      if (lVar3 <= lVar9) break;
      *(long **)(lVar2 + param_2 * 8) = plVar6;
      lVar2 = *param_1;
      lVar9 = param_1[1];
      *(ulong *)(*(long *)(lVar2 + param_2 * 8) + 8) = param_2;
      uVar4 = uVar5 << 1 | 1;
      uVar8 = lVar9 - lVar2 >> 3;
      param_2 = uVar5;
    } while (uVar4 < uVar8);
  }
  *(long **)(lVar2 + param_2 * 8) = param_3;
  param_3[1] = param_2;
  return;
}



/* Entry: 104ab4a28; end: 104ab4b5f;  */

long * FUN_104ab4a28(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar7 = *param_1;
  plVar13 = (long *)param_1[1];
  lVar16 = (long)plVar13 - lVar7 >> 3;
  param_2[1] = lVar16;
  plVar4 = param_1 + 2;
  if (plVar13 < (long *)*plVar4) {
    plVar12 = plVar13 + 1;
    *plVar13 = (long)param_2;
  }
  else {
    uVar8 = lVar16 + 1;
    if (uVar8 >> 0x3d != 0) {
      FUN_104ab4bd4();
      uVar8 = (ulong)*(uint *)(param_2 + 1);
      lVar7 = *param_1;
      uVar9 = (param_1[1] - lVar7 >> 3) - 1;
      if (uVar8 == uVar9) {
        param_1[1] = param_1[1] + -8;
        return param_1;
      }
      *(undefined8 *)(lVar7 + uVar8 * 8) = *(undefined8 *)(lVar7 + uVar9 * 8);
      lVar7 = *param_1;
      lVar16 = param_1[1];
      *(ulong *)(*(long *)(lVar7 + uVar8 * 8) + 8) = uVar8;
      param_1[1] = lVar16 + -8;
      plVar13 = *(long **)(lVar7 + uVar8 * 8);
      lVar7 = *plVar13;
      uVar8 = plVar13[1] & 0xffffffff;
      iVar6 = (int)plVar13[1];
      iVar3 = iVar6 + -1;
      if (-1 < iVar3) {
        iVar6 = iVar3;
      }
      lVar16 = *param_1;
      if (**(long **)(lVar16 + (ulong)(uint)(iVar6 >> 1) * 8) <= lVar7) {
        uVar11 = uVar8 << 1 | 1;
        lVar7 = *param_1;
        uVar9 = param_1[1] - lVar7 >> 3;
        if (uVar11 < uVar9) {
          lVar16 = *plVar13;
          do {
            uVar1 = uVar8 * 2 + 2;
            plVar4 = *(long **)(lVar7 + uVar11 * 8);
            lVar14 = *plVar4;
            uVar10 = uVar11;
            if (uVar1 < uVar9) {
              plVar12 = *(long **)(lVar7 + uVar1 * 8);
              lVar15 = *plVar12;
              if (lVar15 < lVar14) {
                uVar10 = uVar1;
                plVar4 = plVar12;
                lVar14 = lVar15;
              }
            }
            if (lVar16 <= lVar14) break;
            *(long **)(lVar7 + uVar8 * 8) = plVar4;
            lVar7 = *param_1;
            lVar14 = param_1[1];
            *(ulong *)(*(long *)(lVar7 + uVar8 * 8) + 8) = uVar8;
            uVar11 = uVar10 << 1 | 1;
            uVar9 = lVar14 - lVar7 >> 3;
            uVar8 = uVar10;
          } while (uVar11 < uVar9);
        }
        *(long **)(lVar7 + uVar8 * 8) = plVar13;
        plVar13[1] = uVar8;
        return param_1;
      }
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        do {
          uVar11 = uVar8 - 1;
          uVar9 = uVar11 >> 1;
          plVar4 = *(long **)(lVar16 + uVar9 * 8);
          if (*plVar4 <= lVar7) break;
          *(long **)(lVar16 + uVar8 * 8) = plVar4;
          lVar16 = *param_1;
          *(ulong *)(*(long *)(lVar16 + uVar8 * 8) + 8) = uVar8;
          uVar8 = uVar9;
        } while (1 < uVar11);
      }
      *(long **)(lVar16 + uVar8 * 8) = plVar13;
      plVar13[1] = uVar8;
      return param_1;
    }
    uVar11 = *plVar4 - lVar7;
    uVar9 = (long)uVar11 >> 2;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      FUN_104ab4be8();
    }
    plVar13 = plVar4 + lVar16;
    plVar12 = plVar13 + 1;
    *plVar13 = (long)param_2;
    puVar2 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 != puVar2) {
      do {
        puVar5 = puVar5 + -1;
        plVar13 = plVar13 + -1;
        *plVar13 = *puVar5;
      } while (puVar5 != puVar2);
      puVar5 = (undefined8 *)*param_1;
    }
    *param_1 = (long)plVar13;
    param_1[1] = (long)plVar12;
    param_1[2] = (long)(plVar4 + uVar9);
    if (puVar5 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar12;
  lVar7 = *param_1;
  if (param_2[1] == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = *param_2;
    uVar8 = param_2[1];
    do {
      uVar11 = uVar8 - 1;
      uVar9 = uVar11 >> 1;
      plVar13 = *(long **)(lVar7 + uVar9 * 8);
      if (*plVar13 <= lVar16) break;
      *(long **)(lVar7 + uVar8 * 8) = plVar13;
      lVar7 = *param_1;
      *(ulong *)(*(long *)(lVar7 + uVar8 * 8) + 8) = uVar8;
      uVar8 = uVar9;
    } while (1 < uVar11);
  }
  *(long **)(lVar7 + uVar8 * 8) = param_2;
  param_2[1] = uVar8;
  return (long *)(ulong)(uVar8 == 0);
}



/* Entry: 104ab4b60; end: 104ab4bd3;  */

void FUN_104ab4b60(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  uVar7 = (ulong)*(uint *)(param_2 + 8);
  lVar5 = *param_1;
  uVar10 = (param_1[1] - lVar5 >> 3) - 1;
  if (uVar7 == uVar10) {
    param_1[1] = param_1[1] + -8;
    return;
  }
  *(undefined8 *)(lVar5 + uVar7 * 8) = *(undefined8 *)(lVar5 + uVar10 * 8);
  lVar5 = *param_1;
  lVar6 = param_1[1];
  *(ulong *)(*(long *)(lVar5 + uVar7 * 8) + 8) = uVar7;
  param_1[1] = lVar6 + -8;
  plVar3 = *(long **)(lVar5 + uVar7 * 8);
  lVar5 = *plVar3;
  uVar7 = plVar3[1] & 0xffffffff;
  iVar4 = (int)plVar3[1];
  iVar2 = iVar4 + -1;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  lVar6 = *param_1;
  if (**(long **)(lVar6 + (ulong)(uint)(iVar4 >> 1) * 8) <= lVar5) {
    uVar9 = uVar7 << 1 | 1;
    lVar5 = *param_1;
    uVar10 = param_1[1] - lVar5 >> 3;
    if (uVar9 < uVar10) {
      lVar6 = *plVar3;
      do {
        uVar1 = uVar7 * 2 + 2;
        plVar11 = *(long **)(lVar5 + uVar9 * 8);
        lVar13 = *plVar11;
        uVar8 = uVar9;
        if (uVar1 < uVar10) {
          plVar12 = *(long **)(lVar5 + uVar1 * 8);
          lVar14 = *plVar12;
          if (lVar14 < lVar13) {
            uVar8 = uVar1;
            plVar11 = plVar12;
            lVar13 = lVar14;
          }
        }
        if (lVar6 <= lVar13) break;
        *(long **)(lVar5 + uVar7 * 8) = plVar11;
        lVar5 = *param_1;
        lVar13 = param_1[1];
        *(ulong *)(*(long *)(lVar5 + uVar7 * 8) + 8) = uVar7;
        uVar9 = uVar8 << 1 | 1;
        uVar10 = lVar13 - lVar5 >> 3;
        uVar7 = uVar8;
      } while (uVar9 < uVar10);
    }
    *(long **)(lVar5 + uVar7 * 8) = plVar3;
    plVar3[1] = uVar7;
    return;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    do {
      uVar9 = uVar7 - 1;
      uVar10 = uVar9 >> 1;
      plVar11 = *(long **)(lVar6 + uVar10 * 8);
      if (*plVar11 <= lVar5) break;
      *(long **)(lVar6 + uVar7 * 8) = plVar11;
      lVar6 = *param_1;
      *(ulong *)(*(long *)(lVar6 + uVar7 * 8) + 8) = uVar7;
      uVar7 = uVar10;
    } while (1 < uVar9);
  }
  *(long **)(lVar6 + uVar7 * 8) = plVar3;
  plVar3[1] = uVar7;
  return;
}



/* Entry: 104ab4bd4; end: 104ab4be7;  */

void FUN_104ab4bd4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined2 auStack_90 [4];
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_104a7757c();
  *(long *)(puVar1 + 0x88) = *(long *)(puVar1 + 0x88) + 1;
  *(long *)(puVar1 + 0x80) = *(long *)(puVar1 + 0x80) + 1;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined2 *)(puVar2 + 3) = 0x101;
  puVar2[4] = 0;
  *puVar2 = puVar1;
  auStack_90[0] = 0x101;
  uStack_88 = 0;
  func_0x000100462a0c(auStack_80,"timer_manager",FUN_104ab4cec,puVar2,0,auStack_90);
  *(undefined4 *)(puVar2 + 1) = auStack_80[0];
  puVar2[2] = uStack_78;
  puVar2[4] = uStack_68;
  puVar2[3] = CONCAT62(uStack_6e,uStack_70);
  auStack_80[0] = 5;
  uStack_78 = 0;
  uStack_70 = 0x101;
  uStack_68 = 0;
  func_0x0001004629b0(auStack_80);
  func_0x000100463850(puVar2 + 1);
  return;
}



/* Entry: 104ab4be8; end: 104ab4c1b;  */

void FUN_104ab4be8(long param_1,ulong param_2)

{
  long *plVar1;
  undefined2 auStack_80 [4];
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  long lStack_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  long lStack_58;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_104a7757c();
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  plVar1 = (long *)0x28;
  __Znwm();
  plVar1[1] = 0;
  *plVar1 = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  *(undefined2 *)(plVar1 + 3) = 0x101;
  plVar1[4] = 0;
  *plVar1 = param_1;
  auStack_80[0] = 0x101;
  uStack_78 = 0;
  func_0x000100462a0c(auStack_70,"timer_manager",FUN_104ab4cec,plVar1,0,auStack_80);
  *(undefined4 *)(plVar1 + 1) = auStack_70[0];
  plVar1[2] = lStack_68;
  plVar1[4] = lStack_58;
  plVar1[3] = CONCAT62(uStack_5e,uStack_60);
  auStack_70[0] = 5;
  lStack_68 = 0;
  uStack_60 = 0x101;
  lStack_58 = 0;
  func_0x0001004629b0(auStack_70);
  func_0x000100463850(plVar1 + 1);
  return;
}



/* Entry: 104ab4c1c; end: 104ab4ceb;  */

void FUN_104ab4c1c(long param_1)

{
  long *plVar1;
  undefined2 auStack_60 [4];
  undefined8 uStack_58;
  undefined4 auStack_50 [2];
  long lStack_48;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  long lStack_38;
  
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  plVar1 = (long *)0x28;
  __Znwm();
  plVar1[1] = 0;
  *plVar1 = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  *(undefined2 *)(plVar1 + 3) = 0x101;
  plVar1[4] = 0;
  *plVar1 = param_1;
  auStack_60[0] = 0x101;
  uStack_58 = 0;
  func_0x000100462a0c(auStack_50,"timer_manager",FUN_104ab4cec,plVar1,0,auStack_60);
  *(undefined4 *)(plVar1 + 1) = auStack_50[0];
  plVar1[2] = lStack_48;
  plVar1[4] = lStack_38;
  plVar1[3] = CONCAT62(uStack_3e,uStack_40);
  auStack_50[0] = 5;
  lStack_48 = 0;
  uStack_40 = 0x101;
  lStack_38 = 0;
  func_0x0001004629b0(auStack_50);
  func_0x000100463850(plVar1 + 1);
  return;
}



/* Entry: 104ab4cec; end: 104ab4de3;  */

void FUN_104ab4cec(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_104ab5184(*param_1);
  lVar2 = *param_1;
  func_0x000100460448(lVar2);
  lVar3 = *param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar1 = *(undefined4 **)(lVar3 + 0x98);
  if (puVar1 < *(undefined4 **)(lVar3 + 0xa0)) {
    *puVar1 = (int)param_1[1];
    *(long *)(puVar1 + 2) = param_1[2];
    lVar4 = param_1[3];
    *(long *)(puVar1 + 6) = param_1[4];
    *(long *)(puVar1 + 4) = lVar4;
    *(undefined4 *)(param_1 + 1) = 5;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 0x101;
    param_1[4] = 0;
    puVar1 = puVar1 + 8;
  }
  else {
    puVar1 = (undefined4 *)(lVar3 + 0x90);
    FUN_104ab5634(puVar1,param_1 + 1);
  }
  *(undefined4 **)(lVar3 + 0x98) = puVar1;
  func_0x000100466b80(lVar2);
  func_0x000100466b64(*param_1 + 0x40);
  func_0x0001004629b0(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104ab4de4; end: 104ab4f27;  */

void FUN_104ab4de4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x000100460448();
  lVar2 = *(long *)(param_1 + 0x88) + -1;
  *(long *)(param_1 + 0x88) = lVar2;
  if (lVar2 == 0) {
    FUN_104ab4c1c(param_1);
  }
  else if (*(char *)(param_1 + 0xa8) == '\0') {
    func_0x000100466b64(param_1 + 0x40);
  }
  func_0x000100466b80(param_1);
  puVar1 = (undefined8 *)param_2[1];
  for (param_2 = (undefined8 *)*param_2; param_2 != puVar1; param_2 = param_2 + 1) {
    (**(code **)(*(long *)*param_2 + 0x10))();
  }
  func_0x000100460448(param_1);
  uStack_68 = *(undefined8 *)(param_1 + 0x98);
  uStack_70 = *(undefined8 *)(param_1 + 0x90);
  uStack_60 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_104ab4f28(&uStack_50,&uStack_70);
  puStack_38 = (undefined1 *)&uStack_70;
  FUN_104ab55c4(&puStack_38);
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  func_0x000100466b80(param_1);
  FUN_104ab4f74(&uStack_50);
  return;
}



/* Entry: 104ab4f28; end: 104ab4f73;  */

long * FUN_104ab4f28(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  
  if (*param_1 == param_1[1]) {
    plVar2 = param_1;
    FUN_104ab5568();
    lVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return plVar2;
  }
  func_0x00010bdabedc();
  lVar1 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
    FUN_104ab3234(lVar3);
  }
  plStack_58 = param_1;
  FUN_104ab55c4(&plStack_58);
  return param_1;
}



/* Entry: 104ab4f74; end: 104ab4fcf;  */

long * FUN_104ab4f74(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plStack_38;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_104ab3234(lVar2);
  }
  plStack_38 = param_1;
  FUN_104ab55c4(&plStack_38);
  return param_1;
}



/* Entry: 104ab4fd0; end: 104ab516b;  */

bool FUN_104ab4fd0(long param_1,ulong param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x000100460448();
  cVar1 = *(char *)(param_1 + 0xa9);
  if (cVar1 != '\0') goto LAB_104ab5130;
  if (*(char *)(param_1 + 0xaa) == '\0') {
    lVar6 = *(long *)(param_1 + 0xb8) + -1;
    if ((param_2 == 0x7fffffffffffffff) ||
       ((*(char *)(param_1 + 0xa8) != '\0' && (*(long *)(param_1 + 0xb0) <= (long)param_2)))) {
      param_2 = 0x7fffffffffffffff;
    }
    else {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar6 = *(long *)(param_1 + 0xb8) + 1;
      *(ulong *)(param_1 + 0xb0) = param_2;
      *(long *)(param_1 + 0xb8) = lVar6;
    }
    lVar2 = 0;
    func_0x000100467380();
    func_0x0001004674d8();
    lVar4 = 0x7fffffffffffffff;
    if ((((param_2 != 0x7fffffffffffffff) && (lVar2 != -0x7fffffffffffffff)) &&
        (lVar4 = -0x8000000000000000, param_2 != 0x8000000000000000)) &&
       (lVar2 != -0x8000000000000000)) {
      if ((long)param_2 < 1) {
        if ((long)(-0x8000000000000000 - param_2) <= -lVar2) goto LAB_104ab50a0;
      }
      else if ((long)(param_2 ^ 0x7fffffffffffffff) < -lVar2) {
        lVar4 = 0x7fffffffffffffff;
      }
      else {
LAB_104ab50a0:
        lVar4 = param_2 - lVar2;
      }
    }
    uVar5 = (lVar4 % 1000) * 4000000;
    lVar2 = lVar4 / 1000 + ((long)uVar5 >> 0x3f);
    uVar3 = (ulong)((int)uVar5 + 4000000000);
    if (-1 < lVar4 % 1000) {
      uVar3 = uVar5;
    }
    uVar3 = uVar3 & 0xffffff00;
    FUN_104a6fb40(lVar2,uVar3);
    func_0x000100466590(param_1 + 0x40,param_1,lVar2,uVar3);
    if (lVar6 == *(long *)(param_1 + 0xb8)) {
      *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
      *(undefined1 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0x7fffffffffffffff;
    }
  }
  *(undefined1 *)(param_1 + 0xaa) = 0;
LAB_104ab5130:
  func_0x000100466b80(param_1);
  return cVar1 == '\0';
}



/* Entry: 104ab516c; end: 104ab5183;  */

undefined8 *
FUN_104ab516c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  
  puVar2 = (undefined8 *)0x0;
  func_0x000100467380();
  func_0x0001004673f0();
  puVar1 = puRam00000001136a1f48;
  if (puRam00000001136a1f48 == (undefined8 *)0x0) {
    puVar1 = puVar2;
    func_0x000100467528();
  }
  func_0x00010046778c(puVar2,param_5,puVar1,0);
  if (param_5 >> 0x20 == 3) {
    dVar3 = (double)(int)param_5 / 1000000.0 + (double)(long)puVar2 * 1000.0;
    if (dVar3 <= -9.223372036854776e+18) {
      puVar1 = (undefined8 *)0x8000000000000000;
    }
    else if (9.223372036854776e+18 <= dVar3) {
      puVar1 = (undefined8 *)0x7fffffffffffffff;
    }
    else {
      puVar1 = (undefined8 *)(long)dVar3;
    }
    return puVar1;
  }
  func_0x000107c2c33c();
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[3] = 0;
  puVar2[6] = param_1;
  return puVar2;
}



/* Entry: 104ab5184; end: 104ab5283;  */

void FUN_104ab5184(long param_1)

{
  long lVar1;
  uint uVar2;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  char cStack_40;
  undefined8 uStack_38;
  
  do {
    uStack_38 = 0x7fffffffffffffff;
    FUN_104ab4754(&lStack_58,*(undefined8 *)(param_1 + 200),&uStack_38);
    lVar1 = lStack_58;
    if (cStack_40 == '\0') {
      uStack_38 = 0x7fffffffffffffff;
LAB_104ab520c:
      lVar1 = param_1;
      FUN_104ab4fd0(param_1,uStack_38);
      uVar2 = (uint)lVar1 ^ 1;
    }
    else {
      if (lStack_58 == lStack_50) goto LAB_104ab520c;
      lStack_70 = lStack_58;
      lStack_68 = lStack_50;
      uStack_60 = uStack_48;
      lStack_58 = 0;
      lStack_50 = 0;
      uStack_48 = 0;
      FUN_104ab4de4(param_1,&lStack_70);
      if (lVar1 != 0) {
        lStack_68 = lVar1;
        __ZdlPv(lVar1);
      }
      uVar2 = 3;
    }
    if ((cStack_40 != '\0') && (lStack_58 != 0)) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
    if (uVar2 == 1) {
      return;
    }
  } while( true );
}



/* Entry: 104ab5284; end: 104ab53bb;  */

long FUN_104ab5284(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  func_0x000100460318();
  func_0x000100460338(param_1 + 0x40);
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_1107c52e8;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(long *)(param_1 + 0x78) = param_1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  plVar1 = (long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xa3) = 0;
  *(undefined8 *)(param_1 + 0x9b) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  lVar2 = 0xa8;
  __Znwm();
  FUN_104ab3f30();
  lVar3 = *plVar1;
  *plVar1 = lVar2;
  if (lVar3 != 0) {
    FUN_104ab5868(plVar1);
  }
  func_0x000100460448(param_1);
  FUN_104ab4c1c(param_1);
  func_0x000100466b80(param_1);
  return param_1;
}



/* Entry: 104ab53bc; end: 104ab53cf;  */

long FUN_104ab53bc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  func_0x000100460318();
  func_0x000100460338(param_1 + 0x40);
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_1107c52e8;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(long *)(param_1 + 0x78) = param_1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  plVar1 = (long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xa3) = 0;
  *(undefined8 *)(param_1 + 0x9b) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  lVar2 = 0xa8;
  __Znwm();
  FUN_104ab3f30();
  lVar3 = *plVar1;
  *plVar1 = lVar2;
  if (lVar3 != 0) {
    FUN_104ab5868(plVar1);
  }
  func_0x000100460448(param_1);
  FUN_104ab4c1c(param_1);
  func_0x000100466b80(param_1);
  return param_1;
}



/* Entry: 104ab53d0; end: 104ab54f3;  */

long FUN_104ab53d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  func_0x000100460448();
  *(undefined1 *)(param_1 + 0xa9) = 1;
  lVar1 = param_1 + 0x40;
  func_0x000104a6f52c(lVar1);
  func_0x000100466b80(param_1);
  do {
    puStack_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x000100460448(param_1);
    uStack_78 = *(undefined8 *)(param_1 + 0x98);
    uStack_80 = *(undefined8 *)(param_1 + 0x90);
    uStack_70 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    FUN_104ab4f28(&puStack_60,&uStack_80);
    puStack_48 = (undefined1 *)&uStack_80;
    FUN_104ab55c4(&puStack_48);
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 != 0) {
      uVar2 = 0x7fffffffffffffff;
      uVar3 = 0xffffffff;
      func_0x000100466ec8(0x7fffffffffffffff,0xffffffff);
      func_0x000100466590(lVar1,param_1,uVar2,uVar3);
    }
    func_0x000100466b80(param_1);
    FUN_104ab4f74(&puStack_60);
  } while (lVar4 != 0);
  lVar4 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = 0;
  if (lVar4 != 0) {
    FUN_104ab5868();
  }
  puStack_60 = (undefined8 *)(param_1 + 0x90);
  FUN_104ab55c4(&puStack_60);
  func_0x000100832c44(lVar1);
  func_0x0001005a5f48(param_1);
  return param_1;
}



/* Entry: 104ab54f4; end: 104ab54ff;  */

long FUN_104ab54f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  func_0x000100460448();
  *(undefined1 *)(param_1 + 0xa9) = 1;
  lVar1 = param_1 + 0x40;
  func_0x000104a6f52c(lVar1);
  func_0x000100466b80(param_1);
  do {
    puStack_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x000100460448(param_1);
    uStack_78 = *(undefined8 *)(param_1 + 0x98);
    uStack_80 = *(undefined8 *)(param_1 + 0x90);
    uStack_70 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    FUN_104ab4f28(&puStack_60,&uStack_80);
    puStack_48 = (undefined1 *)&uStack_80;
    FUN_104ab55c4(&puStack_48);
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 != 0) {
      uVar2 = 0x7fffffffffffffff;
      uVar3 = 0xffffffff;
      func_0x000100466ec8(0x7fffffffffffffff,0xffffffff);
      func_0x000100466590(lVar1,param_1,uVar2,uVar3);
    }
    func_0x000100466b80(param_1);
    FUN_104ab4f74(&puStack_60);
  } while (lVar4 != 0);
  lVar4 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = 0;
  if (lVar4 != 0) {
    FUN_104ab5868();
  }
  puStack_60 = (undefined8 *)(param_1 + 0x90);
  FUN_104ab55c4(&puStack_60);
  func_0x000100832c44(lVar1);
  func_0x0001005a5f48(param_1);
  return param_1;
}



/* Entry: 104ab5500; end: 104ab5567;  */

void FUN_104ab5500(long param_1)

{
  func_0x000100460448();
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0x7fffffffffffffff;
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  *(undefined1 *)(param_1 + 0xaa) = 1;
  func_0x000100466b64(param_1 + 0x40);
  func_0x000100466b80(param_1);
  return;
}



/* Entry: 104ab5568; end: 104ab55c3;  */

void FUN_104ab5568(long *param_1)

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
        lVar1 = lVar1 + -0x20;
        func_0x0001004629b0();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 104ab55c4; end: 104ab5633;  */

void FUN_104ab55c4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x20;
        func_0x0001004629b0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 104ab5634; end: 104ab5737;  */

long * FUN_104ab5634(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3b == 0) {
    plVar9 = param_1 + 2;
    uVar5 = *plVar9 - *param_1;
    uVar7 = (long)uVar5 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar7 = 0x7ffffffffffffff;
    }
    plStack_38 = plVar9;
    if (uVar7 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_104ab57e8();
      plStack_58 = plVar9;
    }
    plStack_50 = plStack_58 + lVar10 * 4;
    plStack_40 = plStack_58 + uVar7 * 4;
    *(undefined4 *)plStack_50 = *(undefined4 *)param_2;
    plStack_50[1] = param_2[1];
    lVar10 = param_2[2];
    plStack_50[3] = param_2[3];
    plStack_50[2] = lVar10;
    *(undefined4 *)param_2 = 5;
    param_2[1] = 0;
    *(undefined2 *)(param_2 + 2) = 0x101;
    param_2[3] = 0;
    plStack_48 = plStack_50 + 4;
    FUN_104ab5738(param_1,&plStack_58);
    plVar9 = (long *)param_1[1];
    func_0x000104ab581c(&plStack_58);
    return plVar9;
  }
  FUN_104ab57d4();
  func_0x000104ab581c(&plStack_58);
  __Unwind_Resume();
  lVar6 = *param_1;
  lVar4 = param_1[1];
  lVar10 = param_2[1];
  if (lVar4 != lVar6) {
    lVar8 = 0;
    do {
      lVar2 = lVar10 + lVar8;
      lVar3 = lVar4 + lVar8;
      *(undefined4 *)(lVar2 + -0x20) = *(undefined4 *)(lVar3 + -0x20);
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
      uVar11 = *(undefined8 *)(lVar3 + -0x10);
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar3 + -8);
      *(undefined8 *)(lVar2 + -0x10) = uVar11;
      *(undefined4 *)(lVar3 + -0x20) = 5;
      *(undefined8 *)(lVar3 + -0x18) = 0;
      *(undefined2 *)(lVar3 + -0x10) = 0x101;
      *(undefined8 *)(lVar3 + -8) = 0;
      lVar8 = lVar8 + -0x20;
    } while (lVar4 + lVar8 != lVar6);
    lVar10 = lVar10 + lVar8;
  }
  param_2[1] = lVar10;
  lVar6 = *param_1;
  *param_1 = lVar10;
  param_2[1] = lVar6;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return param_1;
}



/* Entry: 104ab5738; end: 104ab57d3;  */

void FUN_104ab5738(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = *param_1;
  lVar3 = param_1[1];
  lVar4 = param_2[1];
  if (lVar3 != lVar5) {
    lVar6 = 0;
    do {
      lVar1 = lVar4 + lVar6;
      lVar2 = lVar3 + lVar6;
      *(undefined4 *)(lVar1 + -0x20) = *(undefined4 *)(lVar2 + -0x20);
      *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
      uVar7 = *(undefined8 *)(lVar2 + -0x10);
      *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(lVar1 + -0x10) = uVar7;
      *(undefined4 *)(lVar2 + -0x20) = 5;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined2 *)(lVar2 + -0x10) = 0x101;
      *(undefined8 *)(lVar2 + -8) = 0;
      lVar6 = lVar6 + -0x20;
    } while (lVar3 + lVar6 != lVar5);
    lVar4 = lVar4 + lVar6;
  }
  param_2[1] = lVar4;
  lVar5 = *param_1;
  *param_1 = lVar4;
  param_2[1] = lVar5;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 104ab57d4; end: 104ab57e7;  */

undefined1  [16] FUN_104ab57d4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 >> 0x3b == 0) {
    lVar2 = param_2 << 5;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x20;
    func_0x0001004629b0();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 104ab57e8; end: 104ab5867;  */

undefined1  [16] FUN_104ab57e8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_104a7757c();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    func_0x0001004629b0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 104ab5868; end: 104ab58d3;  */

void FUN_104ab5868(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    if (lVar1 != 0) {
      __ZdaPv();
    }
    lVar1 = *(long *)(param_2 + 0x98);
    *(long *)(param_2 + 0x98) = 0;
    if (lVar1 != 0) {
      FUN_104ab4840();
    }
    func_0x0001005a5f48(param_2 + 0x58);
    func_0x0001005a5f48(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 104ab58d4; end: 104ab58db;  */

undefined1  [16]
FUN_104ab58d4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ab58dc; end: 104ab591f;  */

void FUN_104ab58dc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 0x20));
  func_0x000100487c2c((undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104ab5920; end: 104ab59f3;  */

void FUN_104ab5920(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong *puVar6;
  ulong uStack_38;
  
  uVar4 = param_1;
  func_0x00010047ad8c(param_1,param_2,param_3,param_4);
  func_0x00010ae866ac();
  FUN_104ab59f4(param_1,0,uVar4,param_2 & 0xffffffff);
  puVar1 = (ulong *)param_6[1];
  for (puVar6 = (ulong *)*param_6; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    uStack_38 = *puVar6;
    if (uStack_38 != 0) {
      if ((uStack_38 & 1) != 0) {
        piVar5 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_104ab5af0(param_1,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  return;
}



/* Entry: 104ab59f4; end: 104ab5aef;  */

void FUN_104ab59f4(undefined8 param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_68 [16];
  undefined8 auStack_58 [2];
  char cStack_41;
  
  puVar2 = &UNK_10e52c95b;
  _strlen(&UNK_10e52c95b);
  puVar3 = puVar2;
  func_0x00010ae86064();
  func_0x00010ae86fc4(auStack_58,&UNK_10e52c95b,puVar2,param_3,param_4,puVar3);
  if (param_2 == 0) {
    func_0x00010084cd08(auStack_68,auStack_58);
    func_0x00010084ced4(param_1,"type.googleapis.com/grpc.status.time.created_time",0x31,auStack_68)
    ;
    func_0x00010084d204(auStack_68);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    return;
  }
  FUN_104a6e964("return \"unknown\"",
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc"
                ,0x83);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104ab5ac4);
  (*pcVar1)();
}



/* Entry: 104ab5af0; end: 104ab5c83;  */

void FUN_104ab5af0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  char cStack_40;
  undefined8 uStack_38;
  
  lVar1 = 0;
  func_0x00010b28ba8c(0,0,&PTR_DAT_11336f028);
  FUN_104ab5c84(param_2,lVar1);
  uStack_38 = 0;
  func_0x00010b289158();
  func_0x0001004daa1c(&bStack_50,param_1,"type.googleapis.com/grpc.status.children",0x28);
  uStack_60 = 0;
  uStack_58 = 0;
  if (cStack_40 != '\0') {
    if ((bStack_50 & 1) == 0) {
      uStack_60 = CONCAT71(uStack_4f,bStack_50);
      uStack_58 = uStack_48;
    }
    else {
      func_0x00010ae705f0(&uStack_60,&bStack_50);
    }
  }
  uStack_64 = (undefined4)uStack_38;
  func_0x00010ae70b00(&uStack_60,&uStack_64,4,4);
  func_0x00010ae70b00(&uStack_60,param_2,uStack_38,4);
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010084ced4(param_1,"type.googleapis.com/grpc.status.children",0x28,&uStack_80);
  func_0x00010084d204(&uStack_80);
  func_0x00010084d204(&uStack_60);
  if (cStack_40 != '\0') {
    func_0x00010084d204(&bStack_50);
  }
  if (lVar1 != 0) {
    func_0x00010b28bb80(lVar1);
  }
  return;
}



/* Entry: 104ab5c84; end: 104ab5ea3;  */

undefined ** FUN_104ab5c84(ulong *param_1,undefined *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *extraout_x8;
  undefined *puStack_e0;
  long lStack_d8;
  byte bStack_c8;
  undefined7 uStack_c7;
  long lStack_c0;
  char cStack_b8;
  undefined *puStack_b0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined ***pppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long *plStack_68;
  ulong uStack_60;
  undefined *puStack_58;
  undefined **ppuStack_48;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined7 *puStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = &PTR_PTR_110ccfc18;
  puStack_70 = param_2;
  func_0x00010b28a954();
  puVar5 = param_1;
  ppuStack_78 = ppuVar4;
  func_0x00010ae770f8();
  *(int *)ppuVar4 = (int)puVar5;
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    puStack_58 = &UNK_10e52c0f3;
    bVar3 = (uVar8 & 3) != 2;
    if (bVar3) {
      puStack_58 = (undefined *)0x0;
    }
    uStack_60 = 0x1b;
    if (bVar3) {
      uStack_60 = 0;
    }
  }
  else if ((char)*(byte *)(uVar8 + 0x1e) < '\0') {
    puStack_58 = *(undefined **)(uVar8 + 7);
    uStack_60 = *(ulong *)(uVar8 + 0xf);
  }
  else {
    puStack_58 = (undefined *)(uVar8 + 7);
    uStack_60 = (ulong)*(byte *)(uVar8 + 0x1e);
  }
  plStack_68 = (long *)0x1;
  FUN_104ad737c(&ppuStack_48,&plStack_68,1);
  if ((long *)0x1 < plStack_68) {
    do {
      lVar9 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  uVar8 = (ulong)bStack_40;
  if (ppuStack_48 != (undefined **)0x0) {
    uVar8 = CONCAT71(uStack_3f,bStack_40);
  }
  uVar8 = uVar8 + 0xf & 0xfffffffffffffff0;
  puVar6 = *(undefined **)(puStack_70 + 8);
  if ((ulong)(*(long *)(puStack_70 + 0x10) - (long)puVar6) < uVar8) {
    puVar6 = puStack_70;
    func_0x00010b28b7d8();
    if (ppuStack_48 != (undefined **)0x0) goto LAB_104ab5d8c;
LAB_104ab5db8:
    if (bStack_40 != 0) {
      puStack_38 = &uStack_3f;
      goto LAB_104ab5dc8;
    }
  }
  else {
    *(undefined **)(puStack_70 + 8) = puVar6 + uVar8;
    if (ppuStack_48 == (undefined **)0x0) goto LAB_104ab5db8;
LAB_104ab5d8c:
    if (CONCAT71(uStack_3f,bStack_40) == 0) {
      puVar10 = (undefined *)0x0;
      goto LAB_104ab5dec;
    }
LAB_104ab5dc8:
    _memcpy(puVar6,puStack_38);
    if (ppuStack_48 != (undefined **)0x0) {
      puVar10 = (undefined *)CONCAT71(uStack_3f,bStack_40);
      goto LAB_104ab5dec;
    }
  }
  puVar10 = (undefined *)(ulong)bStack_40;
LAB_104ab5dec:
  ppuStack_78[1] = puVar6;
  ppuStack_78[2] = puVar10;
  pppuStack_88 = &ppuStack_78;
  ppuStack_80 = &puStack_70;
  func_0x00010ae77004(param_1,&pppuStack_88,FUN_104ab7890);
  ppuVar7 = ppuStack_78;
  ppuVar4 = ppuStack_48;
  if ((undefined **)0x1 < ppuStack_48) {
    do {
      puVar10 = *ppuStack_48;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuStack_48,0x10);
      if (bVar3) {
        *ppuStack_48 = puVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar10 + -1 == (undefined *)0x0) {
      (*(code *)ppuStack_48[1])();
      ppuVar4 = ppuStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x0001004b6d90(&ppuStack_48);
    __Unwind_Resume(ppuVar4);
    ppuVar7 = &puStack_e0;
    pcStack_98 = FUN_104ab5ea4;
    puStack_b0 = puVar6;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x0001004daa1c(&bStack_c8);
    if (cStack_b8 == '\0') {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
    }
    else {
      if (((bStack_c8 & 1) == 0) || (lStack_c0 == 0)) {
        puStack_e0 = (undefined *)CONCAT71(uStack_c7,bStack_c8);
        lStack_d8 = lStack_c0;
      }
      else {
        piVar1 = (int *)(lStack_c0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puStack_e0 = (undefined *)0x1;
        lStack_d8 = lStack_c0;
        if (1 < CONCAT71(uStack_c7,bStack_c8)) {
          func_0x00010ae6ff78(&puStack_e0,&bStack_c8,8);
        }
      }
      FUN_104ab5f94(extraout_x8,&puStack_e0);
      func_0x00010084d204(&puStack_e0);
      ppuVar4 = ppuVar7;
      if (cStack_b8 != '\0') {
        ppuVar4 = (undefined **)&bStack_c8;
        func_0x00010084d204(ppuVar4);
      }
    }
    return ppuVar4;
  }
  return ppuVar7;
}



/* Entry: 104ab5ea4; end: 104ab5f93;  */

void FUN_104ab5ea4(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_50;
  long lStack_48;
  byte bStack_38;
  undefined7 uStack_37;
  long lStack_30;
  char cStack_28;
  
  func_0x0001004daa1c(&bStack_38,param_2,"type.googleapis.com/grpc.status.children",0x28);
  if (cStack_28 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if (((bStack_38 & 1) == 0) || (lStack_30 == 0)) {
      uStack_50 = CONCAT71(uStack_37,bStack_38);
      lStack_48 = lStack_30;
    }
    else {
      piVar1 = (int *)(lStack_30 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uStack_50 = 1;
      lStack_48 = lStack_30;
      if (1 < CONCAT71(uStack_37,bStack_38)) {
        func_0x00010ae6ff78(&uStack_50,&bStack_38,8);
      }
    }
    FUN_104ab5f94(param_1,&uStack_50);
    func_0x00010084d204(&uStack_50);
    if (cStack_28 != '\0') {
      func_0x00010084d204(&bStack_38);
    }
  }
  return;
}



/* Entry: 104ab5f94; end: 104ab622f;  */

void FUN_104ab5f94(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long *plVar8;
  long **pplVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long **pplVar14;
  ulong uVar15;
  long lVar16;
  long *plStack_90;
  long **pplStack_88;
  long **pplStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = 0;
  func_0x00010b28ba8c(0,0,&PTR_DAT_11336f028);
  if (((long)(char)*param_2 & 1U) == 0) {
    plVar13 = (long *)((long)param_2 + 1);
    pplVar14 = (long **)((ulong)(long)(char)*param_2 >> 1);
  }
  else {
    lVar10 = param_2[1];
    if (lVar10 == 0) goto LAB_104ab6160;
    plStack_90 = (long *)0x0;
    pplStack_88 = (long **)0x0;
    pplVar9 = &plStack_90;
    func_0x00010ae72600();
    plVar13 = plStack_90;
    pplVar14 = pplStack_88;
    if ((int)lVar10 == 0) {
      func_0x00010ae726cc();
      plVar13 = param_2;
      pplVar14 = pplVar9;
    }
  }
  if ((long **)0x3 < pplVar14) {
    lVar10 = 0;
    plVar1 = param_1 + 2;
    do {
      uVar15 = (ulong)*(uint *)((long)plVar13 + lVar10);
      lVar10 = lVar10 + 4;
      if ((ulong)((long)pplVar14 - lVar10) < uVar15) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc"
                            ,0x9d,2,"assertion failed: %s");
        _abort();
LAB_104ab61c4:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104ab61c8);
        (*pcVar4)();
      }
      ppuVar7 = &PTR_PTR_110ccfc18;
      func_0x00010b28a954(&PTR_PTR_110ccfc18,lVar5);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar7 = (undefined **)0x0;
      }
      else {
        pcVar6 = (char *)((long)plVar13 + lVar10);
        func_0x00010b28893c(pcVar6,uVar15,ppuVar7,&PTR_PTR_110ccfc18,0,0,lVar5);
        if ((int)pcVar6 != 0) {
          ppuVar7 = (undefined **)0x0;
        }
      }
      FUN_104ab6978(&plStack_68,ppuVar7);
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 < (undefined8 *)param_1[2]) {
        *puVar3 = plStack_68;
        param_1[1] = (long)(puVar3 + 1);
      }
      else {
        lVar16 = (long)puVar3 - *param_1 >> 3;
        uVar2 = lVar16 + 1;
        if (uVar2 >> 0x3d != 0) {
          FUN_104a83ee4(param_1);
          goto LAB_104ab61c4;
        }
        uVar11 = param_1[2] - *param_1;
        uVar12 = (long)uVar11 >> 2;
        if (uVar12 <= uVar2) {
          uVar12 = uVar2;
        }
        if (0x7ffffffffffffff7 < uVar11) {
          uVar12 = 0x1fffffffffffffff;
        }
        plStack_70 = plVar1;
        if (uVar12 == 0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = plVar1;
          FUN_104a83ef8();
        }
        pplStack_88 = (long **)(plVar8 + lVar16);
        plStack_78 = plVar8 + uVar12;
        pplStack_80 = pplStack_88 + 1;
        *pplStack_88 = plStack_68;
        plStack_68 = (long *)0x36;
        plStack_90 = plVar8;
        FUN_104a83e70(param_1,&plStack_90);
        lVar16 = param_1[1];
        FUN_104a84040(&plStack_90);
        param_1[1] = lVar16;
        if (((ulong)plStack_68 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      lVar10 = lVar10 + uVar15;
    } while (3 < (ulong)((long)pplVar14 - lVar10));
  }
LAB_104ab6160:
  if (lVar5 != 0) {
    func_0x00010b28bb80(lVar5);
  }
  return;
}



/* Entry: 104ab6230; end: 104ab6977;  */

/* WARNING: Removing unreachable block (ram,0x000104ab62b8) */
/* WARNING: Removing unreachable block (ram,0x000104ab6558) */

ulong *** FUN_104ab6230(ulong ***param_1,ulong *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 **ppuVar6;
  code *pcVar7;
  char *pcVar8;
  ulong ***pppuVar9;
  ulong ***pppuVar10;
  long lVar11;
  ulong uVar12;
  ulong **ppuVar13;
  long lVar14;
  ulong uVar15;
  undefined8 ***pppuVar16;
  undefined8 **ppuStack_1e8;
  ulong *puStack_1e0;
  byte bStack_1d1;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  ulong uStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  byte bStack_171;
  byte bStack_170;
  undefined7 uStack_16f;
  long lStack_168;
  char cStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  ulong **ppuStack_140;
  ulong **ppuStack_138;
  ulong *puStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 **ppuStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong **ppuStack_98;
  ulong **ppuStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  ulong **ppuStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      pcVar8 = "OK";
      func_0x000107c613d0();
      if ((ulong **)0x7ffffffffffffff7 < pcVar8) {
        func_0x000104a6fa5c(param_1);
        lStack_68 = 1;
        pppuVar9 = (ulong ***)0x2947bdebdbc7a448;
        func_0x00010002b140(0x2947bdebdbc7a448,&stack0xffffffffffffffa4,&stack0xffffffffffffffa8);
        return pppuVar9;
      }
      if (pcVar8 < (ulong **)0x17) {
        *(char *)((long)param_1 + 0x17) = (char)pcVar8;
        pppuVar9 = param_1;
        if ((ulong **)pcVar8 == (ulong **)0x0) goto code_r0x00010002b0b0;
      }
      else {
        uVar12 = ((ulong)pcVar8 & 0xfffffffffffffff8) + 8;
        if (((ulong)pcVar8 | 7) != 0x17) {
          uVar12 = (ulong)pcVar8 | 7;
        }
        pppuVar9 = (ulong ***)(uVar12 + 1);
        func_0x000107c60e20();
        param_1[1] = (ulong **)pcVar8;
        param_1[2] = (ulong **)(uVar12 + 1 | 0x8000000000000000);
        *param_1 = (ulong **)pppuVar9;
      }
      func_0x000107c610b8(pppuVar9,"OK",pcVar8);
code_r0x00010002b0b0:
      *(char *)((long)pppuVar9 + (long)pcVar8) = '\0';
      return param_1;
    }
  }
  else {
    ppuStack_140 = (ulong **)0x0;
    ppuStack_138 = (ulong **)0x0;
    puStack_130 = (ulong *)0x0;
    func_0x00010ae770f8();
    func_0x00010ae76fa0(&ppuStack_c8);
    ppuStack_90 = (ulong **)puStack_c0;
    ppuStack_98 = ppuStack_c8;
    if (-1 < (long)puStack_b8) {
      ppuStack_90 = (ulong **)((ulong)puStack_b8 >> 0x38);
      ppuStack_98 = (ulong **)&ppuStack_c8;
    }
    func_0x0001004da258(&ppuStack_140,&ppuStack_98);
    uVar12 = *param_2;
    if ((uVar12 & 1) == 0) {
      if ((uVar12 & 3) == 2) {
        ppuStack_c8 = (undefined8 **)&UNK_10e52c0f3;
        ppuVar13 = (ulong **)0x1b;
        goto LAB_104ab6380;
      }
    }
    else {
      bVar2 = *(byte *)(uVar12 + 0x1e);
      if ((char)bVar2 < '\0') {
        if (*(long *)(uVar12 + 0xf) != 0) {
          ppuStack_c8 = *(undefined8 ***)(uVar12 + 7);
          ppuVar13 = *(ulong ***)(uVar12 + 0xf);
          goto LAB_104ab6380;
        }
      }
      else {
        ppuVar13 = (ulong **)(ulong)bVar2;
        if (bVar2 != 0) {
          ppuStack_c8 = (undefined8 **)(uVar12 + 7);
LAB_104ab6380:
          ppuStack_90 = (ulong **)0x1;
          ppuStack_98 = (ulong **)0x10f20818c;
          puStack_c0 = (ulong *)ppuVar13;
          func_0x00010ae8c94c(&ppuStack_140,&ppuStack_98,&ppuStack_c8);
        }
      }
    }
    puStack_158 = (ulong *)0x0;
    puStack_150 = (ulong *)0x0;
    puStack_148 = (ulong *)0x0;
    bStack_170 = 0;
    cStack_160 = '\0';
    ppuStack_98 = (ulong **)&bStack_170;
    ppuStack_90 = &puStack_158;
    func_0x00010ae77004(param_2,&ppuStack_98,FUN_104ab6bd8);
    if (cStack_160 != '\0') {
      if (((bStack_170 & 1) == 0) || (lStack_168 == 0)) {
        uStack_1a0 = CONCAT71(uStack_16f,bStack_170);
        lStack_198 = lStack_168;
      }
      else {
        piVar1 = (int *)(lStack_168 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_1a0 = 1;
        lStack_198 = lStack_168;
        if (1 < CONCAT71(uStack_16f,bStack_170)) {
          func_0x00010ae6ff78(&uStack_1a0,&bStack_170,8);
        }
      }
      FUN_104ab5f94(&ppuStack_188,&uStack_1a0);
      func_0x00010084d204(&uStack_1a0);
      uStack_1b8 = 0;
      puStack_1b0 = (ulong *)0x0;
      puStack_1a8 = (ulong *)0x0;
      func_0x0001000fc044(&uStack_1b8,(long)ppuStack_180 - (long)ppuStack_188 >> 3);
      ppuVar6 = ppuStack_180;
      if (ppuStack_188 != ppuStack_180) {
        pppuVar16 = (undefined8 ***)ppuStack_188;
        do {
          FUN_104ab6230(&ppuStack_c8,pppuVar16);
          if (puStack_1b0 < puStack_1a8) {
            puStack_1b0[2] = (ulong)puStack_b8;
            puStack_1b0[1] = (ulong)puStack_c0;
            *puStack_1b0 = (ulong)ppuStack_c8;
            puStack_1b0 = puStack_1b0 + 3;
          }
          else {
            lVar14 = (long)((long)puStack_1b0 - uStack_1b8) >> 3;
            uVar12 = lVar14 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar12) {
              FUN_104a9439c(&uStack_1b8);
              goto LAB_104ab6848;
            }
            lVar11 = (long)((long)puStack_1a8 - uStack_1b8) >> 3;
            uVar15 = lVar11 * 0x5555555555555556;
            if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
              uVar15 = uVar12;
            }
            if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
              uVar15 = 0xaaaaaaaaaaaaaaa;
            }
            ppuStack_78 = &puStack_1a8;
            if (uVar15 == 0) {
              pppuVar9 = (ulong ***)0x0;
            }
            else {
              pppuVar9 = (ulong ***)&puStack_1a8;
              func_0x0001004d69d4();
            }
            pppuVar10 = pppuVar9 + lVar14;
            ppuStack_80 = (ulong **)(pppuVar9 + uVar15 * 3);
            ppuStack_98 = (ulong **)pppuVar9;
            ppuStack_90 = (ulong **)pppuVar10;
            pppuVar10[2] = (ulong **)puStack_b8;
            pppuVar10[1] = (ulong **)puStack_c0;
            *pppuVar10 = ppuStack_c8;
            puStack_c0 = (ulong *)0x0;
            puStack_b8 = (ulong *)0x0;
            ppuStack_c8 = (undefined8 ***)0x0;
            ppuStack_88 = (ulong **)(pppuVar10 + 3);
            func_0x00010004824c(&uStack_1b8,&ppuStack_98);
            puVar5 = puStack_1b0;
            func_0x0001000482e8(&ppuStack_98);
            puStack_1b0 = puVar5;
          }
          pppuVar16 = pppuVar16 + 1;
        } while (pppuVar16 != (undefined8 ***)ppuVar6);
      }
      ppuStack_98 = (ulong **)0x10f237d8a;
      ppuStack_90 = (ulong **)0xa;
      func_0x0001004d6a18(&ppuStack_1e8,uStack_1b8,puStack_1b0,&DAT_10f68f19e,2);
      puStack_c0 = puStack_1e0;
      ppuStack_c8 = ppuStack_1e8;
      if (-1 < (char)bStack_1d1) {
        puStack_c0 = (ulong *)(ulong)bStack_1d1;
        ppuStack_c8 = &ppuStack_1e8;
      }
      ppuStack_f8 = (undefined8 **)&DAT_10f62a9ea;
      ppuStack_f0 = (undefined8 ***)0x1;
      func_0x000100066c24(&puStack_1d0,&ppuStack_98,&ppuStack_c8,&ppuStack_f8);
      if (puStack_150 < puStack_148) {
        puStack_150[2] = (ulong)puStack_1c0;
        puStack_150[1] = (ulong)puStack_1c8;
        *puStack_150 = (ulong)puStack_1d0;
        puStack_1c8 = (ulong *)0x0;
        puStack_1c0 = (ulong *)0x0;
        puStack_1d0 = (ulong *)0x0;
        puStack_150 = puStack_150 + 3;
      }
      else {
        lVar14 = (long)puStack_150 - (long)puStack_158 >> 3;
        uVar12 = lVar14 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_104ab6840;
        ppuVar13 = &puStack_148;
        lVar11 = (long)puStack_148 - (long)puStack_158 >> 3;
        uVar15 = lVar11 * 0x5555555555555556;
        if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
          uVar15 = uVar12;
        }
        if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar15 = 0xaaaaaaaaaaaaaaa;
        }
        ppuStack_108 = ppuVar13;
        if (uVar15 == 0) {
          ppuStack_128 = (ulong **)0x0;
        }
        else {
          func_0x0001004d69d4();
          ppuStack_128 = ppuVar13;
        }
        ppuVar13 = ppuStack_128 + lVar14;
        ppuStack_110 = ppuStack_128 + uVar15 * 3;
        ppuStack_120 = ppuVar13;
        ppuVar13[2] = puStack_1c0;
        ppuVar13[1] = puStack_1c8;
        *ppuVar13 = puStack_1d0;
        puStack_1c8 = (ulong *)0x0;
        puStack_1c0 = (ulong *)0x0;
        puStack_1d0 = (ulong *)0x0;
        ppuStack_118 = ppuVar13 + 3;
        func_0x00010004824c(&puStack_158,&ppuStack_128);
        puVar5 = puStack_150;
        func_0x0001000482e8(&ppuStack_128);
        puStack_150 = puVar5;
        if ((long)puStack_1c0 < 0) {
          __ZdlPv(puStack_1d0);
        }
      }
      if ((char)bStack_1d1 < '\0') {
        __ZdlPv(ppuStack_1e8);
      }
      ppuStack_98 = (ulong **)&uStack_1b8;
      func_0x0001004d6bcc(&ppuStack_98);
      ppuStack_98 = (ulong **)&ppuStack_188;
      func_0x000100482b64(&ppuStack_98);
    }
    if (puStack_158 == puStack_150) {
      if ((long)puStack_130 < 0) {
        func_0x000100033dac(param_1,ppuStack_140,ppuStack_138);
      }
      else {
        param_1[1] = ppuStack_138;
        *param_1 = ppuStack_140;
        param_1[2] = (ulong **)puStack_130;
      }
    }
    else {
      ppuStack_90 = ppuStack_138;
      ppuStack_98 = ppuStack_140;
      if (-1 < (long)puStack_130) {
        ppuStack_90 = (ulong **)((ulong)puStack_130 >> 0x38);
        ppuStack_98 = (ulong **)&ppuStack_140;
      }
      ppuStack_c8 = (undefined8 **)&UNK_10f48d5df;
      puStack_c0 = (ulong *)0x2;
      func_0x0001004d6a18(&ppuStack_188,puStack_158,puStack_150,&DAT_10f68f19e,2);
      ppuStack_f0 = ppuStack_180;
      ppuStack_f8 = ppuStack_188;
      if (-1 < (char)bStack_171) {
        ppuStack_f0 = (undefined8 ***)(ulong)bStack_171;
        ppuStack_f8 = &ppuStack_188;
      }
      ppuStack_128 = (undefined8 **)&DAT_10f2da10d;
      ppuStack_120 = (ulong **)0x1;
      func_0x00010ae8c6d8(param_1,&ppuStack_98,&ppuStack_c8,&ppuStack_f8,&ppuStack_128);
      if ((char)bStack_171 < '\0') {
        __ZdlPv(ppuStack_188);
      }
    }
    if (cStack_160 != '\0') {
      func_0x00010084d204(&bStack_170);
    }
    ppuStack_98 = &puStack_158;
    pppuVar9 = &ppuStack_98;
    func_0x0001004d6bcc(pppuVar9);
    if ((long)puStack_130 < 0) {
      pppuVar9 = (ulong ***)ppuStack_140;
      __ZdlPv(ppuStack_140);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return pppuVar9;
    }
  }
  ___stack_chk_fail();
LAB_104ab6840:
  FUN_104a9439c(&puStack_158);
LAB_104ab6848:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x104ab684c);
  (*pcVar7)();
}



/* Entry: 104ab6978; end: 104ab6b67;  */

void FUN_104ab6978(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar4 = *param_2;
  uStack_a0 = *(undefined8 *)(param_2 + 2);
  uStack_a8 = *(undefined8 *)(param_2 + 4);
  plStack_b0 = (long *)0x1;
  uStack_68 = 0;
  puStack_70 = (ulong *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  func_0x00010084c888(&plStack_90,&plStack_b0);
  if ((long *)0x1 < plStack_b0) {
    do {
      lVar6 = *plStack_b0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
      if (bVar3) {
        *plStack_b0 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_b0[1])();
    }
  }
  uVar9 = uStack_88 & 0xff;
  lVar6 = (long)&uStack_88 + 1;
  if (plStack_90 != (long *)0x0) {
    uVar9 = uStack_88;
    lVar6 = lStack_80;
  }
  func_0x00010047ad8c(param_1,iVar4,lVar6,uVar9);
  puVar7 = *(ulong **)(param_2 + 6);
  if ((puVar7 != (ulong *)0x0) && (uVar9 = puVar7[1], uVar9 != 0)) {
    puVar10 = (undefined8 *)(*puVar7 & 0xfffffffffffffff8);
    do {
      puVar8 = (undefined8 *)*puVar10;
      uVar5 = *puVar8;
      uVar1 = puVar8[1];
      func_0x00010084d308(auStack_c0,puVar8[2],puVar8[3],9);
      func_0x00010084ced4(param_1,uVar5,uVar1,auStack_c0);
      iVar4 = (int)uVar5;
      func_0x00010084d204(auStack_c0);
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if ((long *)0x1 < plStack_90) {
    do {
      lVar6 = *plStack_90;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar3) {
        *plStack_90 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  puVar7 = puStack_70;
  if ((ulong *)0x1 < puStack_70) {
    do {
      uVar9 = *puStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_70,0x10);
      if (bVar3) {
        *puStack_70 = uVar9 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar9 - 1 == 0) {
      (*(code *)puStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (iVar4 != 0) {
      FUN_104bd46a0();
      func_0x0001004b6d90(&plStack_90);
      func_0x0001004b6d90(&puStack_70);
    }
    __Unwind_Resume();
    if (puVar7 == (ulong *)0x0) {
      return;
    }
    if ((*puVar7 & 1) != 0) {
      func_0x00010084dad0();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar7);
    return;
  }
  return;
}



/* Entry: 104ab6b68; end: 104ab6ba7;  */

void FUN_104ab6b68(ulong *param_1)

{
  if (param_1 != (ulong *)0x0) {
    if ((*param_1 & 1) != 0) {
      func_0x00010084dad0();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 104ab6ba8; end: 104ab6bd7;  */

void FUN_104ab6ba8(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  
  if (param_2 != (ulong *)0x0) {
    uVar4 = *param_2;
    *param_1 = uVar4;
    if ((uVar4 & 1) != 0) {
      piVar3 = (int *)(uVar4 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 104ab6bd8; end: 104ab77b7;  */

/* WARNING: Type propagation algorithm not settling */

byte *******
FUN_104ab6bd8(long *param_1,byte *******param_2,byte *******param_3,byte *******param_4)

{
  ulong uVar1;
  code *pcVar2;
  byte *******pppppppbVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte *******pppppppbVar6;
  byte bVar7;
  long lVar8;
  byte ******ppppppbVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  byte *******pppppppbVar13;
  byte *******unaff_x23;
  byte *******pppppppbVar14;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  byte *******pppppppbStack_190;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  byte *******pppppppbStack_178;
  byte *******pppppppbStack_170;
  byte ******ppppppbStack_168;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_158;
  ulong uStack_150;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_108;
  byte *******pppppppbStack_100;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_e8;
  byte *******pppppppbStack_e0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  ulong uStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppbVar3 = param_3 + -4;
  if ((param_3 < (byte *******)0x20) ||
     (((*param_2 != (byte ******)0x6f6f672e65707974 || param_2[1] != (byte ******)0x2e73697061656c67
       ) || param_2[2] != (byte ******)0x637072672f6d6f63) ||
      param_2[3] != (byte ******)0x2e7375746174732e)) {
    if (((long)(char)*(byte *)param_4 & 1U) == 0) {
      pppppppbVar3 = (byte *******)((long)param_4 + 1);
      pppppppbVar6 = (byte *******)((ulong)(long)(char)*(byte *)param_4 >> 1);
LAB_104ab6d14:
      bVar12 = true;
    }
    else {
      ppppppbVar9 = param_4[1];
      pppppppbVar3 = (byte *******)0x0;
      pppppppbVar6 = param_2;
      if (ppppppbVar9 == (byte ******)0x0) goto LAB_104ab6d14;
      pppppppbStack_88 = (byte *******)0x0;
      pppppppbStack_80 = (byte *******)0x0;
      func_0x00010ae72600(ppppppbVar9,&pppppppbStack_88);
      pppppppbVar3 = pppppppbStack_88;
      pppppppbVar6 = pppppppbStack_80;
      if ((int)ppppppbVar9 != 0) goto LAB_104ab6d14;
      func_0x00010084de48(&pppppppbStack_178,param_4);
      bVar12 = false;
      pppppppbVar3 = pppppppbStack_178;
      pppppppbVar6 = pppppppbStack_170;
      if (-1 < (long)ppppppbStack_168) {
        pppppppbVar3 = (byte *******)&pppppppbStack_178;
        pppppppbVar6 = (byte *******)((ulong)ppppppbStack_168 >> 0x38);
      }
    }
    func_0x00010ae8998c(&pppppppbStack_160,pppppppbVar3,pppppppbVar6);
    if ((!bVar12) && ((long)ppppppbStack_168 < 0)) {
      __ZdlPv(pppppppbStack_178);
    }
    param_1 = (long *)param_1[1];
    pcStack_b8 = ":\"";
    uStack_b0 = 2;
    pppppppbStack_e0 = pppppppbStack_158;
    pppppppbStack_e8 = pppppppbStack_160;
    if (-1 < (long)uStack_150) {
      pppppppbStack_e0 = (byte *******)(uStack_150 >> 0x38);
      pppppppbStack_e8 = (byte *******)&pppppppbStack_160;
    }
    pppppppbStack_118 = (byte *******)&DAT_10f3b3c06;
    pppppppbStack_110 = (byte *******)0x1;
    pppppppbStack_88 = param_2;
    pppppppbStack_80 = param_3;
    func_0x00010ae8c6d8(&pppppppbStack_190,&pppppppbStack_88,&pcStack_b8,&pppppppbStack_e8,
                        &pppppppbStack_118);
    pppppppbVar3 = (byte *******)(param_1 + 2);
    ppppppbVar9 = (byte ******)param_1[1];
    pppppppbVar6 = pppppppbStack_180;
    pppppppbVar13 = pppppppbStack_190;
    pppppppbVar14 = pppppppbStack_188;
    if (ppppppbVar9 < *pppppppbVar3) goto LAB_104ab6db0;
    lVar10 = (long)ppppppbVar9 - *param_1 >> 3;
    uVar1 = lVar10 * -0x5555555555555555 + 1;
    if (uVar1 < 0xaaaaaaaaaaaaaab) {
      lVar8 = (long)*pppppppbVar3 - *param_1 >> 3;
      uVar11 = lVar8 * 0x5555555555555556;
      if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
        uVar11 = uVar1;
      }
      if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar11 = 0xaaaaaaaaaaaaaaa;
      }
      pppppppbStack_120 = pppppppbVar3;
      if (uVar11 == 0) {
        pppppppbStack_140 = (byte *******)0x0;
      }
      else {
        func_0x0001004d69d4();
        pppppppbStack_140 = pppppppbVar3;
      }
      pppppppbStack_138 = pppppppbStack_140 + lVar10;
      pppppppbStack_128 = pppppppbStack_140 + uVar11 * 3;
      pppppppbStack_138[2] = (byte ******)pppppppbStack_180;
      pppppppbStack_138[1] = (byte ******)pppppppbStack_188;
      *pppppppbStack_138 = (byte ******)pppppppbStack_190;
      pppppppbStack_188 = (byte *******)0x0;
      pppppppbStack_180 = (byte *******)0x0;
      pppppppbStack_190 = (byte *******)0x0;
      pppppppbStack_130 = pppppppbStack_138 + 3;
      func_0x00010004824c(param_1,&pppppppbStack_140);
      lVar10 = param_1[1];
      pppppppbVar3 = (byte *******)&pppppppbStack_140;
      func_0x0001000482e8(pppppppbVar3);
      param_1[1] = lVar10;
      pppppppbVar6 = pppppppbStack_190;
      pppppppbVar13 = pppppppbStack_180;
joined_r0x000104ab72b0:
      if ((long)pppppppbVar13 < 0) {
        __ZdlPv(pppppppbVar6);
        pppppppbVar3 = pppppppbVar6;
      }
      goto LAB_104ab72bc;
    }
  }
  else {
    pppppppbVar6 = param_2 + 4;
    if ((pppppppbVar3 == (byte *******)0x8) && (*pppppppbVar6 == (byte ******)0x6e6572646c696863)) {
      pppppppbVar3 = (byte *******)*param_1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        if (*(byte *)(pppppppbVar3 + 2) == 0) {
          func_0x000104ab7820(pppppppbVar3);
          *(byte *)(pppppppbVar3 + 2) = 1;
        }
        else if (pppppppbVar3 != param_4) {
          if ((((ulong)*pppppppbVar3 & 1) == 0) && (((ulong)*param_4 & 1) == 0)) {
            ppppppbVar9 = *param_4;
            pppppppbVar3[1] = param_4[1];
            *pppppppbVar3 = ppppppbVar9;
          }
          else {
            func_0x00010ae705f0(pppppppbVar3);
          }
        }
        return pppppppbVar3;
      }
    }
    else {
      pppppppbStack_160 = (byte *******)0x0;
      pppppppbStack_158 = (byte *******)0x0;
      uStack_150 = 0;
      bVar7 = *(byte *)param_4;
      if (((bVar7 & 1) == 0) || (ppppppbVar9 = param_4[1], ppppppbVar9 == (byte ******)0x0)) {
LAB_104ab6d00:
        if ((bVar7 & 1) == 0) {
          pppppppbVar13 = (byte *******)((long)param_4 + 1);
          unaff_x23 = (byte *******)((ulong)(long)(char)bVar7 >> 1);
        }
        else {
          ppppppbVar9 = param_4[1];
          if (ppppppbVar9 == (byte ******)0x0) {
            pppppppbVar13 = (byte *******)0x0;
          }
          else {
            pppppppbStack_88 = (byte *******)0x0;
            pppppppbStack_80 = (byte *******)0x0;
            func_0x00010ae72600(ppppppbVar9,&pppppppbStack_88);
            pppppppbVar13 = pppppppbStack_88;
            unaff_x23 = pppppppbStack_80;
            if ((int)ppppppbVar9 == 0) {
              FUN_104a783bc();
              goto LAB_104ab76bc;
            }
          }
        }
      }
      else {
        pppppppbStack_88 = (byte *******)0x0;
        pppppppbStack_80 = (byte *******)0x0;
        func_0x00010ae72600(ppppppbVar9,&pppppppbStack_88);
        if ((int)ppppppbVar9 != 0) {
          bVar7 = *(byte *)param_4;
          goto LAB_104ab6d00;
        }
        func_0x00010084de48(&pppppppbStack_88,param_4);
        if ((long)uStack_150 < 0) {
          __ZdlPv(pppppppbStack_160);
        }
        uStack_150 = uStack_78;
        pppppppbStack_158 = pppppppbStack_80;
        pppppppbStack_160 = pppppppbStack_88;
        pppppppbVar13 = pppppppbStack_88;
        unaff_x23 = pppppppbStack_80;
        if (-1 < (long)uStack_78) {
          pppppppbVar13 = (byte *******)&pppppppbStack_160;
          unaff_x23 = (byte *******)(uStack_78 >> 0x38);
        }
      }
      if (pppppppbVar3 < (byte *******)0x4) {
LAB_104ab6f6c:
        param_1 = (long *)param_1[1];
        pcStack_b8 = ":\"";
        uStack_b0 = 2;
        pppppppbStack_88 = pppppppbVar6;
        pppppppbStack_80 = pppppppbVar3;
        func_0x00010ae8998c(&pppppppbStack_190,pppppppbVar13,unaff_x23);
        pppppppbStack_e0 = pppppppbStack_188;
        pppppppbStack_e8 = pppppppbStack_190;
        if (-1 < (long)pppppppbStack_180) {
          pppppppbStack_e0 = (byte *******)((ulong)pppppppbStack_180 >> 0x38);
          pppppppbStack_e8 = (byte *******)&pppppppbStack_190;
        }
        pppppppbStack_118 = (byte *******)&DAT_10f3b3c06;
        pppppppbStack_110 = (byte *******)0x1;
        func_0x00010ae8c6d8(&pppppppbStack_178,&pppppppbStack_88,&pcStack_b8,&pppppppbStack_e8,
                            &pppppppbStack_118);
        pppppppbVar3 = (byte *******)(param_1 + 2);
        ppppppbVar9 = (byte ******)param_1[1];
        if (ppppppbVar9 < *pppppppbVar3) goto LAB_104ab6ff0;
        lVar10 = (long)ppppppbVar9 - *param_1 >> 3;
        uVar1 = lVar10 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar1) {
          FUN_104a9439c(param_1);
          goto LAB_104ab76bc;
        }
        lVar8 = (long)*pppppppbVar3 - *param_1 >> 3;
        uVar11 = lVar8 * 0x5555555555555556;
        if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
          uVar11 = uVar1;
        }
        if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
          uVar11 = 0xaaaaaaaaaaaaaaa;
        }
        pppppppbStack_120 = pppppppbVar3;
        if (uVar11 == 0) {
          pppppppbStack_140 = (byte *******)0x0;
        }
        else {
          func_0x0001004d69d4();
          pppppppbStack_140 = pppppppbVar3;
        }
        pppppppbStack_138 = pppppppbStack_140 + lVar10;
        pppppppbStack_128 = pppppppbStack_140 + uVar11 * 3;
        pppppppbStack_138[2] = ppppppbStack_168;
        pppppppbStack_138[1] = (byte ******)pppppppbStack_170;
        *pppppppbStack_138 = (byte ******)pppppppbStack_178;
        pppppppbStack_170 = (byte *******)0x0;
        ppppppbStack_168 = (byte ******)0x0;
        pppppppbStack_178 = (byte *******)0x0;
        pppppppbStack_130 = pppppppbStack_138 + 3;
        func_0x00010004824c(param_1,&pppppppbStack_140);
        goto LAB_104ab728c;
      }
      if (*(int *)pppppppbVar6 != 0x2e746e69) {
        if (*(int *)pppppppbVar6 == 0x2e727473) {
          pppppppbStack_88 = (byte *******)((long)param_2 + 0x24);
          pppppppbStack_80 = (byte *******)((long)param_3 + -0x24);
          param_1 = (long *)param_1[1];
          pcStack_b8 = ":\"";
          uStack_b0 = 2;
          func_0x00010ae8998c(&pppppppbStack_190,pppppppbVar13,unaff_x23);
          pppppppbStack_e0 = pppppppbStack_188;
          pppppppbStack_e8 = pppppppbStack_190;
          if (-1 < (long)pppppppbStack_180) {
            pppppppbStack_e0 = (byte *******)((ulong)pppppppbStack_180 >> 0x38);
            pppppppbStack_e8 = (byte *******)&pppppppbStack_190;
          }
          pppppppbStack_118 = (byte *******)&DAT_10f3b3c06;
          pppppppbStack_110 = (byte *******)0x1;
          func_0x00010ae8c6d8(&pppppppbStack_178,&pppppppbStack_88,&pcStack_b8,&pppppppbStack_e8,
                              &pppppppbStack_118);
          pppppppbVar3 = (byte *******)(param_1 + 2);
          ppppppbVar9 = (byte ******)param_1[1];
          if (ppppppbVar9 < *pppppppbVar3) goto LAB_104ab6ff0;
          lVar10 = (long)ppppppbVar9 - *param_1 >> 3;
          uVar1 = lVar10 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar1) {
            FUN_104a9439c(param_1);
            goto LAB_104ab76bc;
          }
          lVar8 = (long)*pppppppbVar3 - *param_1 >> 3;
          uVar11 = lVar8 * 0x5555555555555556;
          if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
            uVar11 = uVar1;
          }
          if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
            uVar11 = 0xaaaaaaaaaaaaaaa;
          }
          pppppppbStack_120 = pppppppbVar3;
          if (uVar11 == 0) {
            pppppppbStack_140 = (byte *******)0x0;
          }
          else {
            func_0x0001004d69d4();
            pppppppbStack_140 = pppppppbVar3;
          }
          pppppppbStack_138 = pppppppbStack_140 + lVar10;
          pppppppbStack_128 = pppppppbStack_140 + uVar11 * 3;
          pppppppbStack_138[2] = ppppppbStack_168;
          pppppppbStack_138[1] = (byte ******)pppppppbStack_170;
          *pppppppbStack_138 = (byte ******)pppppppbStack_178;
          pppppppbStack_170 = (byte *******)0x0;
          ppppppbStack_168 = (byte ******)0x0;
          pppppppbStack_178 = (byte *******)0x0;
          pppppppbStack_130 = pppppppbStack_138 + 3;
          func_0x00010004824c(param_1,&pppppppbStack_140);
          goto LAB_104ab728c;
        }
        if ((pppppppbVar3 < (byte *******)0x5) ||
           (*(int *)pppppppbVar6 != 0x656d6974 || *(byte *)((long)param_2 + 0x24) != 0x2e))
        goto LAB_104ab6f6c;
        uStack_1a0 = 0;
        uStack_198 = 0;
        puVar5 = &UNK_10e52c95b;
        puVar4 = puVar5;
        _strlen(&UNK_10e52c95b);
        func_0x00010ae871ac(&UNK_10e52c95b,puVar4,pppppppbVar13,unaff_x23,&uStack_1a0,0);
        pppppppbStack_80 = (byte *******)((long)param_3 + -0x25);
        pppppppbStack_88 = (byte *******)((long)param_2 + 0x25);
        param_1 = (long *)param_1[1];
        if ((int)puVar5 == 0) {
          pcStack_b8 = ":\"";
          uStack_b0 = 2;
          func_0x00010ae8998c(&pppppppbStack_190,pppppppbVar13,unaff_x23);
          pppppppbStack_e0 = pppppppbStack_188;
          pppppppbStack_e8 = pppppppbStack_190;
          if (-1 < (long)pppppppbStack_180) {
            pppppppbStack_e0 = (byte *******)((ulong)pppppppbStack_180 >> 0x38);
            pppppppbStack_e8 = (byte *******)&pppppppbStack_190;
          }
          pppppppbStack_118 = (byte *******)&DAT_10f3b3c06;
          pppppppbStack_110 = (byte *******)0x1;
          func_0x00010ae8c6d8(&pppppppbStack_178,&pppppppbStack_88,&pcStack_b8,&pppppppbStack_e8,
                              &pppppppbStack_118);
          pppppppbVar3 = (byte *******)(param_1 + 2);
          ppppppbVar9 = (byte ******)param_1[1];
          if (*pppppppbVar3 <= ppppppbVar9) {
            lVar10 = (long)ppppppbVar9 - *param_1 >> 3;
            uVar1 = lVar10 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar1) {
              FUN_104a9439c(param_1);
              goto LAB_104ab76bc;
            }
            lVar8 = (long)*pppppppbVar3 - *param_1 >> 3;
            uVar11 = lVar8 * 0x5555555555555556;
            if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
              uVar11 = uVar1;
            }
            if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
              uVar11 = 0xaaaaaaaaaaaaaaa;
            }
            pppppppbStack_120 = pppppppbVar3;
            if (uVar11 == 0) {
              pppppppbStack_140 = (byte *******)0x0;
            }
            else {
              func_0x0001004d69d4();
              pppppppbStack_140 = pppppppbVar3;
            }
            pppppppbStack_138 = pppppppbStack_140 + lVar10;
            pppppppbStack_128 = pppppppbStack_140 + uVar11 * 3;
            pppppppbStack_138[2] = ppppppbStack_168;
            pppppppbStack_138[1] = (byte ******)pppppppbStack_170;
            *pppppppbStack_138 = (byte ******)pppppppbStack_178;
            pppppppbStack_170 = (byte *******)0x0;
            ppppppbStack_168 = (byte ******)0x0;
            pppppppbStack_178 = (byte *******)0x0;
            pppppppbStack_130 = pppppppbStack_138 + 3;
            func_0x00010004824c(param_1,&pppppppbStack_140);
            goto LAB_104ab728c;
          }
LAB_104ab6ff0:
          ppppppbVar9[2] = (byte *****)ppppppbStack_168;
          ppppppbVar9[1] = (byte *****)pppppppbStack_170;
          *ppppppbVar9 = (byte *****)pppppppbStack_178;
          pppppppbStack_170 = (byte *******)0x0;
          ppppppbStack_168 = (byte ******)0x0;
          pppppppbStack_178 = (byte *******)0x0;
          ppppppbVar9 = ppppppbVar9 + 3;
          param_1[1] = (long)ppppppbVar9;
        }
        else {
          pcStack_b8 = ":\"";
          uStack_b0 = 2;
          func_0x00010ae87160(&pppppppbStack_190,uStack_1a0,uStack_198);
          pppppppbStack_e0 = pppppppbStack_188;
          pppppppbStack_e8 = pppppppbStack_190;
          if (-1 < (long)pppppppbStack_180) {
            pppppppbStack_e0 = (byte *******)((ulong)pppppppbStack_180 >> 0x38);
            pppppppbStack_e8 = (byte *******)&pppppppbStack_190;
          }
          pppppppbStack_118 = (byte *******)&DAT_10f3b3c06;
          pppppppbStack_110 = (byte *******)0x1;
          func_0x00010ae8c6d8(&pppppppbStack_178,&pppppppbStack_88,&pcStack_b8,&pppppppbStack_e8,
                              &pppppppbStack_118);
          pppppppbVar3 = (byte *******)(param_1 + 2);
          ppppppbVar9 = (byte ******)param_1[1];
          if (ppppppbVar9 < *pppppppbVar3) goto LAB_104ab6ff0;
          lVar10 = (long)ppppppbVar9 - *param_1 >> 3;
          uVar1 = lVar10 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar1) {
            FUN_104a9439c(param_1);
            goto LAB_104ab76bc;
          }
          lVar8 = (long)*pppppppbVar3 - *param_1 >> 3;
          uVar11 = lVar8 * 0x5555555555555556;
          if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
            uVar11 = uVar1;
          }
          if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
            uVar11 = 0xaaaaaaaaaaaaaaa;
          }
          pppppppbStack_120 = pppppppbVar3;
          if (uVar11 == 0) {
            pppppppbStack_140 = (byte *******)0x0;
          }
          else {
            func_0x0001004d69d4();
            pppppppbStack_140 = pppppppbVar3;
          }
          pppppppbStack_138 = pppppppbStack_140 + lVar10;
          pppppppbStack_128 = pppppppbStack_140 + uVar11 * 3;
          pppppppbStack_138[2] = ppppppbStack_168;
          pppppppbStack_138[1] = (byte ******)pppppppbStack_170;
          *pppppppbStack_138 = (byte ******)pppppppbStack_178;
          pppppppbStack_170 = (byte *******)0x0;
          ppppppbStack_168 = (byte ******)0x0;
          pppppppbStack_178 = (byte *******)0x0;
          pppppppbStack_130 = pppppppbStack_138 + 3;
          func_0x00010004824c(param_1,&pppppppbStack_140);
LAB_104ab728c:
          ppppppbVar9 = (byte ******)param_1[1];
          pppppppbVar3 = (byte *******)&pppppppbStack_140;
          func_0x0001000482e8(pppppppbVar3);
        }
        param_1[1] = (long)ppppppbVar9;
        pppppppbVar6 = pppppppbStack_190;
        pppppppbVar13 = pppppppbStack_180;
        if ((long)ppppppbStack_168 < 0) {
          pppppppbVar3 = pppppppbStack_178;
          __ZdlPv(pppppppbStack_178);
          pppppppbVar6 = pppppppbStack_190;
          pppppppbVar13 = pppppppbStack_180;
        }
        goto joined_r0x000104ab72b0;
      }
      pppppppbStack_88 = (byte *******)((long)param_2 + 0x24);
      param_1 = (long *)param_1[1];
      pppppppbStack_80 = (byte *******)((long)param_3 + -0x24);
      pcStack_b8 = ":";
      uStack_b0 = 1;
      pppppppbStack_e8 = pppppppbVar13;
      pppppppbStack_e0 = unaff_x23;
      func_0x000100066c24(&pppppppbStack_140,&pppppppbStack_88,&pcStack_b8,&pppppppbStack_e8);
      pppppppbVar3 = (byte *******)(param_1 + 2);
      ppppppbVar9 = (byte ******)param_1[1];
      pppppppbVar6 = pppppppbStack_130;
      pppppppbVar13 = pppppppbStack_140;
      pppppppbVar14 = pppppppbStack_138;
      if (*pppppppbVar3 <= ppppppbVar9) {
        lVar10 = (long)ppppppbVar9 - *param_1 >> 3;
        uVar1 = lVar10 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar1) {
          FUN_104a9439c(param_1);
          goto LAB_104ab76bc;
        }
        lVar8 = (long)*pppppppbVar3 - *param_1 >> 3;
        uVar11 = lVar8 * 0x5555555555555556;
        if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
          uVar11 = uVar1;
        }
        if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
          uVar11 = 0xaaaaaaaaaaaaaaa;
        }
        pppppppbStack_f8 = pppppppbVar3;
        if (uVar11 == 0) {
          pppppppbStack_118 = (byte *******)0x0;
        }
        else {
          func_0x0001004d69d4();
          pppppppbStack_118 = pppppppbVar3;
        }
        pppppppbStack_110 = pppppppbStack_118 + lVar10;
        pppppppbStack_100 = pppppppbStack_118 + uVar11 * 3;
        pppppppbStack_110[2] = (byte ******)pppppppbStack_130;
        pppppppbStack_110[1] = (byte ******)pppppppbStack_138;
        *pppppppbStack_110 = (byte ******)pppppppbStack_140;
        pppppppbStack_138 = (byte *******)0x0;
        pppppppbStack_130 = (byte *******)0x0;
        pppppppbStack_140 = (byte *******)0x0;
        pppppppbStack_108 = pppppppbStack_110 + 3;
        func_0x00010004824c(param_1,&pppppppbStack_118);
        lVar10 = param_1[1];
        pppppppbVar3 = (byte *******)&pppppppbStack_118;
        func_0x0001000482e8(pppppppbVar3);
        param_1[1] = lVar10;
        pppppppbVar6 = pppppppbStack_140;
        pppppppbVar13 = pppppppbStack_130;
        goto joined_r0x000104ab72b0;
      }
LAB_104ab6db0:
      ppppppbVar9[2] = (byte *****)pppppppbVar6;
      ppppppbVar9[1] = (byte *****)pppppppbVar14;
      *ppppppbVar9 = (byte *****)pppppppbVar13;
      param_1[1] = (long)(ppppppbVar9 + 3);
LAB_104ab72bc:
      if ((long)uStack_150 < 0) {
        pppppppbVar3 = pppppppbStack_160;
        __ZdlPv(pppppppbStack_160);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return pppppppbVar3;
      }
    }
    ___stack_chk_fail();
  }
  FUN_104a9439c(param_1);
LAB_104ab76bc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104ab76c0);
  (*pcVar2)();
}



/* Entry: 104ab77b8; end: 104ab788f;  */

byte * FUN_104ab77b8(byte *param_1,byte *param_2)

{
  undefined8 uVar1;
  
  if (param_1[0x10] == 0) {
    func_0x000104ab7820(param_1);
    param_1[0x10] = 1;
  }
  else if (param_1 != param_2) {
    if (((*param_1 & 1) == 0) && ((*param_2 & 1) == 0)) {
      uVar1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar1;
    }
    else {
      func_0x00010ae705f0(param_1);
    }
  }
  return param_1;
}



/* Entry: 104ab7890; end: 104ab7bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104ab7890(undefined8 param_1,undefined8 *param_2,long *param_3,long param_4,long *param_5
                    )

{
  bool bVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long **pplVar19;
  ulong uVar20;
  long **pplVar21;
  ulong *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  double dVar32;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [8];
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  long alStack_180 [4];
  long *plStack_f0;
  ulong uStack_e8;
  ulong uStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  byte bStack_c4;
  byte abStack_c3 [11];
  long alStack_b8 [12];
  long lStack_58;
  
  pplVar21 = &plStack_f0;
  pplVar19 = &plStack_f0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = *(long *)*param_2;
  uVar27 = *(undefined8 *)param_2[1];
  plVar5 = (long *)&DAT_110ccfbf8;
  func_0x00010b28a954(&DAT_110ccfbf8,uVar27);
  plVar30 = (long *)(lVar29 + 0x18);
  puVar22 = (ulong *)*plVar30;
  plStack_f0 = plVar5;
  if ((puVar22 == (ulong *)0x0) || (puVar22[1] == puVar22[2])) {
    func_0x00010b28ac54(plVar30,&plStack_f0,3,uVar27);
    plVar5 = plStack_f0;
    if ((int)plVar30 == 0) {
      plVar5 = (long *)0x0;
    }
  }
  else {
    *(long **)((*puVar22 & 0xfffffffffffffff8) + puVar22[1] * 8) = plVar5;
    puVar22[1] = puVar22[1] + 1;
  }
  plVar18 = *(long **)param_2[1];
  uVar20 = param_4 + 0xfU & 0xfffffffffffffff0;
  plVar30 = (long *)plVar18[1];
  if ((ulong)(plVar18[2] - (long)plVar30) < uVar20) {
    func_0x00010b28b7d8();
  }
  else {
    plVar18[1] = (long)((long)plVar30 + uVar20);
    plVar18 = plVar30;
  }
  plVar30 = plVar18;
  _memcpy(plVar18,param_3,param_4);
  *plVar5 = (long)plVar18;
  plVar5[1] = param_4;
  uVar20 = (ulong)(char)*param_5;
  if ((uVar20 & 1) == 0) {
    plVar18 = (long *)((long)param_5 + 1);
  }
  else {
    plVar30 = (long *)param_5[1];
    if (plVar30 == (long *)0x0) {
      pplVar21 = (long **)param_3;
      plVar18 = (long *)0x0;
      goto LAB_104ab7b80;
    }
    plStack_f0 = (long *)0x0;
    uStack_e8 = 0;
    func_0x00010ae72600();
    uVar20 = uStack_e8;
    plVar18 = plStack_f0;
    if ((int)plVar30 != 0) goto LAB_104ab7b80;
    plVar18 = *(long **)param_2[1];
    if (((long)(char)*param_5 & 1U) == 0) {
      uVar20 = (ulong)(long)(char)*param_5 >> 1;
    }
    else {
      uVar20 = *(ulong *)param_5[1];
    }
    uVar20 = uVar20 + 0xf & 0xfffffffffffffff0;
    plVar30 = (long *)plVar18[1];
    if ((ulong)(plVar18[2] - (long)plVar30) < uVar20) {
      func_0x00010b28b7d8();
    }
    else {
      plVar18[1] = (long)((long)plVar30 + uVar20);
      plVar18 = plVar30;
    }
    param_3 = param_5;
    func_0x00010b4d538c();
    plVar30 = (long *)pplVar19;
    plVar2 = plVar18;
    plVar28 = plStack_f0;
    uVar20 = uStack_e8;
    uVar31 = uStack_d8;
    while (uVar31 != 0) {
      plVar30 = plVar2;
      param_3 = plVar28;
      uStack_d8 = uVar31;
      _memcpy(plVar2,plVar28,uVar20);
      uStack_d8 = uVar31 - uVar20;
      if (uStack_d8 != 0) {
        if (((int)uStack_c8 < 0) || (alStack_b8[uStack_c8] == 0)) {
          uVar31 = 0;
          plVar28 = (long *)0x0;
          plStack_f0 = (long *)0x0;
          uStack_e8 = 0;
        }
        else if (lStack_d0 == 0) {
          plVar28 = (long *)0x0;
          uVar31 = 0;
          plStack_f0 = plVar28;
          uStack_e8 = uVar31;
        }
        else {
          if ((ulong)*(byte *)(alStack_b8[0] + 0xf) - 1 == (ulong)bStack_c4) {
            uVar31 = 0;
            do {
              uVar24 = uVar31;
              if (uStack_c8 == uVar24) {
                puVar22 = (ulong *)0x0;
                goto LAB_104ab7b18;
              }
              lVar29 = alStack_b8[uVar24 + 1];
              uVar25 = (ulong)abStack_c3[uVar24] + 1;
              uVar31 = uVar24 + 1;
            } while (uVar25 == *(byte *)(lVar29 + 0xf));
            abStack_c3[uVar24] = (byte)uVar25;
            lVar23 = (long)(int)(uVar24 + 1);
            do {
              lVar29 = *(long *)(lVar29 + uVar25 * 8 + 0x10);
              lVar4 = lVar23 + -1;
              alStack_b8[lVar4] = lVar29;
              uVar25 = (ulong)*(byte *)(lVar29 + 0xe);
              *(byte *)((long)&uStack_c8 + lVar23 + 3) = *(byte *)(lVar29 + 0xe);
              bVar1 = 0 < lVar23;
              lVar23 = lVar4;
            } while (lVar4 != 0 && bVar1);
            lVar29 = lVar29 + uVar25 * 8;
          }
          else {
            bStack_c4 = bStack_c4 + 1;
            lVar29 = alStack_b8[0] + (ulong)bStack_c4 * 8;
          }
          puVar22 = *(ulong **)(lVar29 + 0x10);
LAB_104ab7b18:
          uVar31 = *puVar22;
          lStack_d0 = lStack_d0 - uVar31;
          bVar3 = *(byte *)((long)puVar22 + 0xc);
          if (bVar3 == 1) {
            uVar24 = puVar22[2];
            puVar22 = (ulong *)puVar22[3];
            bVar3 = *(byte *)((long)puVar22 + 0xc);
          }
          else {
            uVar24 = 0;
          }
          if (bVar3 < 6) {
            uVar25 = puVar22[2];
          }
          else {
            uVar25 = (long)puVar22 + 0xd;
          }
          plVar28 = (long *)(uVar25 + uVar24);
          plStack_f0 = plVar28;
          uStack_e8 = uVar31;
        }
      }
      plVar2 = (long *)((long)plVar2 + uVar20);
      uVar20 = uVar31;
      uVar31 = uStack_d8;
    }
    uVar20 = (ulong)(char)*param_5;
    uStack_d8 = 0;
    if ((uVar20 & 1) != 0) {
      pplVar21 = (long **)param_3;
      uVar20 = *(ulong *)param_5[1];
      goto LAB_104ab7b80;
    }
  }
  pplVar21 = (long **)param_3;
  uVar20 = uVar20 >> 1;
LAB_104ab7b80:
  plVar5[2] = (long)plVar18;
  plVar5[3] = uVar20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar30;
  }
  ___stack_chk_fail();
  plVar5 = plRam00000001136a1f50;
  if ((double)plRam00000001136a1f50 == 0.0) {
    func_0x000100467528();
    plVar5 = (long *)pplVar21;
  }
  func_0x000100836f04(param_1,plVar5);
  if ((ulong)pplVar21 >> 0x20 == 3) {
    dVar32 = (double)(int)pplVar21 / 1000000.0 + (double)(long)plVar30 * 1000.0 + 0.999999999;
    if (dVar32 <= -9.223372036854776e+18) {
      plVar5 = (long *)0x8000000000000000;
    }
    else if (9.223372036854776e+18 <= dVar32) {
      plVar5 = (long *)0x7fffffffffffffff;
    }
    else {
      plVar5 = (long *)(long)dVar32;
    }
    return plVar5;
  }
  func_0x000107c2c338();
  puVar6 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar27 = *(undefined8 *)((long)plVar30 + (long)_DAT_11274ae44);
  *(undefined **)((long)plVar30 + (long)_DAT_11274ae44) = puVar6;
  func_0x000107c61170(uVar27);
  puVar6 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar27 = *(undefined8 *)((long)plVar30 + (long)_DAT_11274ae48);
  *(undefined **)((long)plVar30 + (long)_DAT_11274ae48) = puVar6;
  func_0x000107c61170(uVar27);
  puVar6 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar27 = *(undefined8 *)((long)plVar30 + (long)_DAT_11274ae4c);
  *(undefined **)((long)plVar30 + (long)_DAT_11274ae4c) = puVar6;
  func_0x000107c61170(uVar27);
  puVar6 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  uVar27 = *(undefined8 *)((long)plVar30 + (long)_DAT_11274ae50);
  *(undefined **)((long)plVar30 + (long)_DAT_11274ae50) = puVar6;
  func_0x000107c61170(uVar27);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar27 = *(undefined8 *)((long)plVar30 + (long)_DAT_11274ae54);
  *(undefined **)((long)plVar30 + (long)_DAT_11274ae54) = puVar6;
  func_0x000107c61170(uVar27);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar27 = *(undefined8 *)((long)plVar30 + (long)_DAT_11274ae58);
  *(undefined **)((long)plVar30 + (long)_DAT_11274ae58) = puVar6;
  func_0x000107c61170(uVar27);
  plVar5 = plVar30;
  func_0x000107c3b034();
  func_0x000107c61180();
  lVar29 = (long)_DAT_11274ae5c;
  uVar27 = *(undefined8 *)((long)plVar30 + lVar29);
  *(long **)((long)plVar30 + lVar29) = plVar5;
  func_0x000107c61170(uVar27);
  func_0x000107c61144(alStack_180,plVar30);
  puVar7 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  puStack_198 = &UNK_1065a2a28;
  puStack_190 = &UNK_11092d188;
  func_0x000107c6111c(auStack_188,alStack_180);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_1d0 = puVar6;
  uStack_1c8 = 0xc2000000;
  puStack_1c0 = &UNK_1065a2a68;
  puStack_1b8 = &UNK_11092d1b8;
  func_0x000107c6111c(auStack_1b0,alStack_180);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_1f8 = puVar6;
  uStack_1f0 = 0xc2000000;
  puStack_1e8 = &UNK_1065a2aa8;
  puStack_1e0 = &UNK_11092d1e8;
  func_0x000107c6111c(auStack_1d8,alStack_180);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  puStack_220 = puVar6;
  uStack_218 = 0xc2000000;
  puStack_210 = &UNK_1065a2b70;
  puStack_208 = &UNK_11092d218;
  func_0x000107c6111c(auStack_200,alStack_180);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  puStack_248 = puVar6;
  uStack_240 = 0xc2000000;
  puStack_238 = &UNK_1065a2bb0;
  puStack_230 = &UNK_11092d248;
  func_0x000107c6111c(auStack_228,alStack_180);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_270 = puVar6;
  uStack_268 = 0xc2000000;
  puStack_260 = &UNK_1065a2bf0;
  puStack_258 = &UNK_11092d278;
  func_0x000107c6111c(auStack_250,alStack_180);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_278,alStack_180);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126cbaf0;
  func_0x000107c610f4();
  uVar27 = *(undefined8 *)((long)plVar30 + lVar29);
  func_0x000107c4c9fc();
  func_0x000107c61180();
  func_0x000107c461b4();
  func_0x000107c61170(uVar27);
  func_0x000107c42c20(*(undefined8 *)((long)plVar30 + (long)_DAT_11274ae64));
  uVar26 = *(undefined8 *)((long)plVar30 + (long)_DAT_11274ae68);
  puVar14 = PTR_PTR_1126cbaf8;
  func_0x000107c610f4(PTR_PTR_1126cbaf8);
  uVar27 = *(undefined8 *)((long)plVar30 + lVar29);
  func_0x000107c498a0();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)((long)plVar30 + lVar29);
  func_0x000107c3dcec(uVar15);
  func_0x000107c61180();
  uVar16 = *(undefined8 *)((long)plVar30 + lVar29);
  func_0x000107c4ca44(uVar16);
  func_0x000107c61180();
  uVar17 = *(undefined8 *)((long)plVar30 + lVar29);
  func_0x000107c406f0(uVar17);
  func_0x000107c61180();
  func_0x000107c46ef4(puVar14);
  func_0x000107c42c20(uVar26);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_278);
  func_0x000107c61170(puVar12);
  func_0x000107c61120(auStack_250);
  func_0x000107c61170(puVar11);
  func_0x000107c61120(auStack_228);
  func_0x000107c61170(puVar10);
  func_0x000107c61120(auStack_200);
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_1d8);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_1b0);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_188);
  plVar5 = alStack_180;
  func_0x000107c61120(plVar5);
  return plVar5;
}



/* Entry: 104ab7bd4; end: 104ab7c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104ab7bd4(undefined8 param_1,long param_2,double param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  double dVar18;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  
  dVar18 = dRam00000001136a1f50;
  if (dRam00000001136a1f50 == 0.0) {
    func_0x000100467528();
    dVar18 = param_3;
  }
  func_0x000100836f04(param_1,dVar18);
  if ((ulong)param_3 >> 0x20 == 3) {
    dVar18 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0 + 0.999999999;
    if (dVar18 <= -9.223372036854776e+18) {
      puVar1 = (undefined1 *)0x8000000000000000;
    }
    else if (9.223372036854776e+18 <= dVar18) {
      puVar1 = (undefined1 *)0x7fffffffffffffff;
    }
    else {
      puVar1 = (undefined1 *)(long)dVar18;
    }
    return puVar1;
  }
  func_0x000107c2c338();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_2 + _DAT_11274ae44);
  *(undefined **)(param_2 + _DAT_11274ae44) = puVar2;
  func_0x000107c61170(uVar15);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_2 + _DAT_11274ae48);
  *(undefined **)(param_2 + _DAT_11274ae48) = puVar2;
  func_0x000107c61170(uVar15);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_2 + _DAT_11274ae4c);
  *(undefined **)(param_2 + _DAT_11274ae4c) = puVar2;
  func_0x000107c61170(uVar15);
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_2 + _DAT_11274ae50);
  *(undefined **)(param_2 + _DAT_11274ae50) = puVar2;
  func_0x000107c61170(uVar15);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_2 + _DAT_11274ae54);
  *(undefined **)(param_2 + _DAT_11274ae54) = puVar2;
  func_0x000107c61170(uVar15);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_2 + _DAT_11274ae58);
  *(undefined **)(param_2 + _DAT_11274ae58) = puVar2;
  func_0x000107c61170(uVar15);
  lVar3 = param_2;
  func_0x000107c3b034();
  func_0x000107c61180();
  lVar17 = (long)_DAT_11274ae5c;
  uVar15 = *(undefined8 *)(param_2 + lVar17);
  *(long *)(param_2 + lVar17) = lVar3;
  func_0x000107c61170(uVar15);
  func_0x000107c61144(auStack_90,param_2);
  puVar4 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_1065a2a28;
  puStack_a0 = &UNK_11092d188;
  func_0x000107c6111c(auStack_98,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_e0 = puVar2;
  uStack_d8 = 0xc2000000;
  puStack_d0 = &UNK_1065a2a68;
  puStack_c8 = &UNK_11092d1b8;
  func_0x000107c6111c(auStack_c0,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_108 = puVar2;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_1065a2aa8;
  puStack_f0 = &UNK_11092d1e8;
  func_0x000107c6111c(auStack_e8,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_130 = puVar2;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_1065a2b70;
  puStack_118 = &UNK_11092d218;
  func_0x000107c6111c(auStack_110,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_158 = puVar2;
  uStack_150 = 0xc2000000;
  puStack_148 = &UNK_1065a2bb0;
  puStack_140 = &UNK_11092d248;
  func_0x000107c6111c(auStack_138,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_180 = puVar2;
  uStack_178 = 0xc2000000;
  puStack_170 = &UNK_1065a2bf0;
  puStack_168 = &UNK_11092d278;
  func_0x000107c6111c(auStack_160,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_188,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126cbaf0;
  func_0x000107c610f4();
  uVar15 = *(undefined8 *)(param_2 + lVar17);
  func_0x000107c4c9fc();
  func_0x000107c61180();
  func_0x000107c461b4();
  func_0x000107c61170(uVar15);
  func_0x000107c42c20(*(undefined8 *)(param_2 + _DAT_11274ae64));
  uVar16 = *(undefined8 *)(param_2 + _DAT_11274ae68);
  puVar14 = PTR_PTR_1126cbaf8;
  func_0x000107c610f4();
  uVar15 = *(undefined8 *)(param_2 + lVar17);
  func_0x000107c498a0();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_2 + lVar17);
  func_0x000107c3dcec();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_2 + lVar17);
  func_0x000107c4ca44();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(param_2 + lVar17);
  func_0x000107c406f0(uVar13);
  func_0x000107c61180();
  func_0x000107c46ef4();
  func_0x000107c42c20(uVar16);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_188);
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_160);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_138);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_110);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_98);
  puVar1 = auStack_90;
  func_0x000107c61120(puVar1);
  return puVar1;
}



/* Entry: 104ab7c14; end: 104ab7cd7;  */

ulong * FUN_104ab7c14(ulong *param_1,long *param_2)

{
  char *pcVar1;
  ulong *puVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  undefined *puStack_48;
  ulong *in_stack_ffffffffffffffc8;
  long in_stack_ffffffffffffffd8;
  
  if (*param_2 == -0x8000000000000000) {
    pcVar3 = s___10f238325;
  }
  else {
    if (*param_2 != 0x7fffffffffffffff) {
      __ZNSt3__19to_stringEx(&stack0xffffffffffffffc8);
      puVar2 = (ulong *)&stack0xffffffffffffffc8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (puVar2,&DAT_10f46635e);
      uVar5 = puVar2[1];
      uVar4 = *puVar2;
      param_1[2] = puVar2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      if (in_stack_ffffffffffffffd8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffc8);
        puVar2 = in_stack_ffffffffffffffc8;
      }
      return puVar2;
    }
    pcVar3 = s__10f238321;
  }
  pcVar1 = pcVar3;
  func_0x000107c613d0();
  if ((char *)0x7ffffffffffffff7 < pcVar1) {
    func_0x000104a6fa5c(param_1);
    puStack_48 = &UNK_10002b0d4;
    puVar2 = (ulong *)0x2947bdebdbc7a448;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010002b140(0x2947bdebdbc7a448,auStack_5c,auStack_58);
    return puVar2;
  }
  if (pcVar1 < (char *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)pcVar1;
    puVar2 = param_1;
    if (pcVar1 == (char *)0x0) goto code_r0x00010002b0b0;
  }
  else {
    uVar4 = ((ulong)pcVar1 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar1 | 7) != 0x17) {
      uVar4 = (ulong)pcVar1 | 7;
    }
    puVar2 = (ulong *)(uVar4 + 1);
    func_0x000107c60e20();
    param_1[1] = (ulong)pcVar1;
    param_1[2] = uVar4 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  func_0x000107c610b8(puVar2,pcVar3,pcVar1);
code_r0x00010002b0b0:
  *(char *)((long)puVar2 + (long)pcVar1) = '\0';
  return param_1;
}



/* Entry: 104ab7cd8; end: 104ab7d6f;  */

char * FUN_104ab7cd8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_2;
  uVar4 = 3;
  func_0x00010047e574();
  puStack_40 = &UNK_10ae73f94;
  uStack_38 = uVar4 & 0xffffffff;
  puStack_30 = &UNK_1004d50a8;
  pcVar3 = "%d.%09ds";
  uStack_48 = uVar2;
  func_0x0001004d4da0(param_1,"%d.%09ds",8,&uStack_48,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pcVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar1 = *(long *)pcVar3;
  if (0x8637bd05af5 < *(long *)pcVar3) {
    lVar1 = 0x8637bd05af6;
  }
  if (lVar1 < -0x8637bd05af5) {
    lVar1 = -0x8637bd05af6;
  }
  return (char *)(lVar1 * 1000000);
}



/* Entry: 104ab7d70; end: 104ab7dab;  */

long FUN_104ab7d70(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (0x8637bd05af5 < *param_1) {
    lVar1 = 0x8637bd05af6;
  }
  if (lVar1 < -0x8637bd05af5) {
    lVar1 = -0x8637bd05af6;
  }
  return lVar1 * 1000000;
}



/* Entry: 104ab7dac; end: 104ab89ef;  */

void FUN_104ab7dac(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long *param_5)

{
  code *pcVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  uVar8 = 0xaaaaaaaaaaaaaaa;
  func_0x00010002b024(&uStack_a0,param_3);
  puVar7 = (ulong *)(param_5 + 2);
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)*puVar7) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_104a9439c(param_5);
      goto LAB_104ab8960;
    }
    lVar4 = (long)*puVar7 - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      func_0x0001004d69d4();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    func_0x00010004824c(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x0001000482e8(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  func_0x00010002b024(&uStack_a0," HTTP/1.1\r\n");
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)param_5[2]) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_104a9439c(param_5);
      goto LAB_104ab8960;
    }
    lVar4 = param_5[2] - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      func_0x0001004d69d4();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    func_0x00010004824c(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x0001000482e8(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  func_0x00010002b024(&uStack_a0,"Host: ");
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)param_5[2]) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_104a9439c(param_5);
      goto LAB_104ab8960;
    }
    lVar4 = param_5[2] - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      func_0x0001004d69d4();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    func_0x00010004824c(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x0001000482e8(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  func_0x00010002b024(&uStack_a0,param_2);
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)param_5[2]) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_104a9439c(param_5);
      goto LAB_104ab8960;
    }
    lVar4 = param_5[2] - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      func_0x0001004d69d4();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    func_0x00010004824c(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x0001000482e8(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  func_0x00010002b024(&uStack_a0,&DAT_10f3dfd0a);
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)param_5[2]) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_104a9439c(param_5);
      goto LAB_104ab8960;
    }
    lVar4 = param_5[2] - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      func_0x0001004d69d4();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    func_0x00010004824c(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x0001000482e8(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  if (param_4 != 0) {
    func_0x00010002b024(&uStack_a0,"Connection: close\r\n");
    puVar3 = (ulong *)param_5[1];
    if (puVar3 < (ulong *)param_5[2]) {
      puVar3[2] = uStack_90;
      puVar3[1] = uStack_98;
      *puVar3 = uStack_a0;
      param_5[1] = (long)(puVar3 + 3);
    }
    else {
      lVar9 = (long)puVar3 - *param_5 >> 3;
      uVar10 = lVar9 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar10) {
        FUN_104a9439c(param_5);
        goto LAB_104ab8960;
      }
      lVar4 = param_5[2] - *param_5 >> 3;
      uVar5 = lVar4 * 0x5555555555555556;
      if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
        uVar5 = uVar10;
      }
      if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        puVar3 = (ulong *)0x0;
        puStack_68 = puVar7;
      }
      else {
        puVar3 = puVar7;
        puStack_68 = puVar7;
        func_0x0001004d69d4();
      }
      puStack_80 = puVar3 + lVar9;
      puStack_70 = puVar3 + uVar5 * 3;
      puStack_80[2] = uStack_90;
      puStack_80[1] = uStack_98;
      *puStack_80 = uStack_a0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a0 = 0;
      puStack_78 = puStack_80 + 3;
      puStack_88 = puVar3;
      func_0x00010004824c(param_5,&puStack_88);
      lVar9 = param_5[1];
      func_0x0001000482e8(&puStack_88);
      param_5[1] = lVar9;
      if ((long)uStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
    }
  }
  func_0x00010002b024(&uStack_a0,"User-Agent: grpc-httpcli/0.0\r\n");
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)param_5[2]) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_104a9439c(param_5);
LAB_104ab8960:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104ab8964);
      (*pcVar1)();
    }
    lVar4 = param_5[2] - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      func_0x0001004d69d4();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    func_0x00010004824c(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x0001000482e8(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      func_0x00010002b024(&uStack_a0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
      puVar3 = (ulong *)param_5[1];
      if (puVar3 < (ulong *)param_5[2]) {
        puVar3[2] = uStack_90;
        puVar3[1] = uStack_98;
        *puVar3 = uStack_a0;
        param_5[1] = (long)(puVar3 + 3);
      }
      else {
        lVar4 = (long)puVar3 - *param_5 >> 3;
        uVar5 = lVar4 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar5) {
          FUN_104a9439c(param_5);
          goto LAB_104ab8960;
        }
        lVar2 = param_5[2] - *param_5 >> 3;
        uVar6 = lVar2 * 0x5555555555555556;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
          uVar6 = uVar5;
        }
        if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
          uVar6 = uVar8;
        }
        if (uVar6 == 0) {
          puVar3 = (ulong *)0x0;
          puStack_68 = puVar7;
        }
        else {
          puVar3 = puVar7;
          puStack_68 = puVar7;
          func_0x0001004d69d4();
        }
        puStack_80 = puVar3 + lVar4;
        puStack_70 = puVar3 + uVar6 * 3;
        puStack_80[2] = uStack_90;
        puStack_78 = puStack_80 + 3;
        puStack_80[1] = uStack_98;
        *puStack_80 = uStack_a0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        puStack_88 = puVar3;
        func_0x00010004824c(param_5,&puStack_88);
        lVar4 = param_5[1];
        func_0x0001000482e8(&puStack_88);
        param_5[1] = lVar4;
        if ((long)uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
      }
      func_0x00010002b024(&uStack_a0,": ");
      puVar3 = (ulong *)param_5[1];
      if (puVar3 < (ulong *)param_5[2]) {
        puVar3[2] = uStack_90;
        puVar3[1] = uStack_98;
        *puVar3 = uStack_a0;
        param_5[1] = (long)(puVar3 + 3);
      }
      else {
        lVar4 = (long)puVar3 - *param_5 >> 3;
        uVar5 = lVar4 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar5) {
          FUN_104a9439c(param_5);
          goto LAB_104ab8960;
        }
        lVar2 = param_5[2] - *param_5 >> 3;
        uVar6 = lVar2 * 0x5555555555555556;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
          uVar6 = uVar5;
        }
        if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
          uVar6 = uVar8;
        }
        if (uVar6 == 0) {
          puVar3 = (ulong *)0x0;
          puStack_68 = puVar7;
        }
        else {
          puVar3 = puVar7;
          puStack_68 = puVar7;
          func_0x0001004d69d4();
        }
        puStack_80 = puVar3 + lVar4;
        puStack_70 = puVar3 + uVar6 * 3;
        puStack_80[2] = uStack_90;
        puStack_78 = puStack_80 + 3;
        puStack_80[1] = uStack_98;
        *puStack_80 = uStack_a0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        puStack_88 = puVar3;
        func_0x00010004824c(param_5,&puStack_88);
        lVar4 = param_5[1];
        func_0x0001000482e8(&puStack_88);
        param_5[1] = lVar4;
        if ((long)uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
      }
      func_0x00010002b024(&uStack_a0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9 + 8));
      puVar3 = (ulong *)param_5[1];
      if (puVar3 < (ulong *)param_5[2]) {
        puVar3[2] = uStack_90;
        puVar3[1] = uStack_98;
        *puVar3 = uStack_a0;
        param_5[1] = (long)(puVar3 + 3);
      }
      else {
        lVar4 = (long)puVar3 - *param_5 >> 3;
        uVar5 = lVar4 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar5) {
          FUN_104a9439c(param_5);
          goto LAB_104ab8960;
        }
        lVar2 = param_5[2] - *param_5 >> 3;
        uVar6 = lVar2 * 0x5555555555555556;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
          uVar6 = uVar5;
        }
        if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
          uVar6 = uVar8;
        }
        if (uVar6 == 0) {
          puVar3 = (ulong *)0x0;
          puStack_68 = puVar7;
        }
        else {
          puVar3 = puVar7;
          puStack_68 = puVar7;
          func_0x0001004d69d4();
        }
        puStack_80 = puVar3 + lVar4;
        puStack_70 = puVar3 + uVar6 * 3;
        puStack_80[2] = uStack_90;
        puStack_78 = puStack_80 + 3;
        puStack_80[1] = uStack_98;
        *puStack_80 = uStack_a0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        puStack_88 = puVar3;
        func_0x00010004824c(param_5,&puStack_88);
        lVar4 = param_5[1];
        func_0x0001000482e8(&puStack_88);
        param_5[1] = lVar4;
        if ((long)uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
      }
      func_0x00010002b024(&uStack_a0,&DAT_10f3dfd0a);
      puVar3 = (ulong *)param_5[1];
      if (puVar3 < (ulong *)param_5[2]) {
        puVar3[2] = uStack_90;
        puVar3[1] = uStack_98;
        *puVar3 = uStack_a0;
        param_5[1] = (long)(puVar3 + 3);
      }
      else {
        lVar4 = (long)puVar3 - *param_5 >> 3;
        uVar5 = lVar4 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar5) {
          FUN_104a9439c(param_5);
          goto LAB_104ab8960;
        }
        lVar2 = param_5[2] - *param_5 >> 3;
        uVar6 = lVar2 * 0x5555555555555556;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
          uVar6 = uVar5;
        }
        if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
          uVar6 = uVar8;
        }
        if (uVar6 == 0) {
          puVar3 = (ulong *)0x0;
          puStack_68 = puVar7;
        }
        else {
          puVar3 = puVar7;
          puStack_68 = puVar7;
          func_0x0001004d69d4();
        }
        puStack_80 = puVar3 + lVar4;
        puStack_70 = puVar3 + uVar6 * 3;
        puStack_80[2] = uStack_90;
        puStack_78 = puStack_80 + 3;
        puStack_80[1] = uStack_98;
        *puStack_80 = uStack_a0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        puStack_88 = puVar3;
        func_0x00010004824c(param_5,&puStack_88);
        lVar4 = param_5[1];
        func_0x0001000482e8(&puStack_88);
        param_5[1] = lVar4;
        if ((long)uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while (uVar10 < *(ulong *)(param_1 + 0x18));
  }
  return;
}



/* Entry: 104ab89f0; end: 104ab8d47;  */

void FUN_104ab89f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  
  lStack_80 = 0;
  puStack_78 = (undefined8 **)0x0;
  puStack_70 = (undefined8 **)0x0;
  func_0x00010002b024(&puStack_98,"CONNECT ");
  pppuVar5 = (undefined8 ***)&puStack_70;
  if (puStack_78 < puStack_70) {
    puStack_78[2] = puStack_88;
    puStack_78[1] = puStack_90;
    *puStack_78 = puStack_98;
    puStack_78 = puStack_78 + 3;
  }
  else {
    lVar8 = (long)puStack_78 - lStack_80 >> 3;
    uVar1 = lVar8 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      FUN_104a9439c(&lStack_80);
      goto LAB_104ab8cd8;
    }
    lVar7 = (long)puStack_70 - lStack_80 >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 == 0) {
      pppuVar4 = (undefined8 ***)0x0;
      ppuStack_48 = pppuVar5;
    }
    else {
      pppuVar4 = pppuVar5;
      ppuStack_48 = pppuVar5;
      func_0x0001004d69d4();
    }
    pppuVar6 = pppuVar4 + lVar8;
    ppuStack_50 = pppuVar4 + uVar9 * 3;
    ppuStack_60 = pppuVar6;
    pppuVar6[2] = (undefined8 **)puStack_88;
    ppuStack_68 = pppuVar4;
    pppuVar6[1] = (undefined8 **)puStack_90;
    *pppuVar6 = (undefined8 **)puStack_98;
    puStack_90 = (undefined8 **)0x0;
    puStack_88 = (undefined8 **)0x0;
    puStack_98 = (undefined8 **)0x0;
    ppuStack_58 = pppuVar6 + 3;
    func_0x00010004824c(&lStack_80,&ppuStack_68);
    puVar2 = puStack_78;
    func_0x0001000482e8(&ppuStack_68);
    puStack_78 = puVar2;
    if ((long)puStack_88 < 0) {
      __ZdlPv(puStack_98);
    }
  }
  FUN_104ab7dac(param_2,param_3,param_4,0,&lStack_80);
  func_0x00010002b024(&puStack_98,&DAT_10f3dfd0a);
  if (puStack_78 < puStack_70) {
    puStack_78[2] = puStack_88;
    puStack_78[1] = puStack_90;
    *puStack_78 = puStack_98;
    puStack_78 = puStack_78 + 3;
  }
  else {
    lVar8 = (long)puStack_78 - lStack_80 >> 3;
    uVar1 = lVar8 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      FUN_104a9439c(&lStack_80);
LAB_104ab8cd8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104ab8cdc);
      (*pcVar3)();
    }
    lVar7 = (long)puStack_70 - lStack_80 >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 == 0) {
      ppuStack_68 = (undefined8 ***)0x0;
      ppuStack_48 = pppuVar5;
    }
    else {
      ppuStack_48 = pppuVar5;
      func_0x0001004d69d4();
      ppuStack_68 = pppuVar5;
    }
    pppuVar5 = (undefined8 ***)(ppuStack_68 + lVar8);
    ppuStack_50 = ppuStack_68 + uVar9 * 3;
    ppuStack_60 = pppuVar5;
    pppuVar5[2] = (undefined8 **)puStack_88;
    pppuVar5[1] = (undefined8 **)puStack_90;
    *pppuVar5 = (undefined8 **)puStack_98;
    puStack_90 = (undefined8 **)0x0;
    puStack_88 = (undefined8 **)0x0;
    puStack_98 = (undefined8 **)0x0;
    ppuStack_58 = pppuVar5 + 3;
    func_0x00010004824c(&lStack_80,&ppuStack_68);
    puVar2 = puStack_78;
    func_0x0001000482e8(&ppuStack_68);
    puStack_78 = puVar2;
    if ((long)puStack_88 < 0) {
      __ZdlPv(puStack_98);
    }
  }
  func_0x0001004d6a18(&ppuStack_68,lStack_80,puStack_78,"",0);
  pppuVar5 = (undefined8 ***)ppuStack_60;
  pppuVar4 = (undefined8 ***)ppuStack_68;
  if (-1 < (long)ppuStack_58) {
    pppuVar5 = (undefined8 ***)((ulong)ppuStack_58 >> 0x38);
    pppuVar4 = &ppuStack_68;
  }
  func_0x0001004b6808(param_1,pppuVar4,pppuVar5);
  if ((long)ppuStack_58 < 0) {
    __ZdlPv(ppuStack_68);
  }
  ppuStack_68 = (undefined8 **)&lStack_80;
  func_0x0001004d6bcc(&ppuStack_68);
  return;
}



/* Entry: 104ab8d48; end: 104ab8dcb;  */

undefined8 * FUN_104ab8d48(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  puStack_28 = param_1 + 0xc;
  func_0x00010047c710(&puStack_28);
  func_0x00010047c794(param_1 + 9,param_1[10]);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 104ab8dcc; end: 104ab8e23;  */

undefined8 FUN_104ab8dcc(void)

{
  int iVar1;
  
  if ((bRam00000001130a6038 & 1) == 0) {
    iVar1 = 0x130a6038;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam00000001130a6030 = &PTR_FUN_1107c5430;
      ___cxa_guard_release(0x1130a6038);
    }
  }
  return 0x1130a6030;
}



/* Entry: 104ab8e24; end: 104ab8e37;  */

void FUN_104ab8e24(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 104ab8e38; end: 104ab8f07;  */

undefined8 * FUN_104ab8e38(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  puVar3 = (ulong *)0x18;
  __Znwm();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104a6fa5c(puVar3);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104ab8ef4);
    (*pcVar2)();
  }
  if (param_3 < 0x17) {
    *(char *)((long)puVar3 + 0x17) = (char)param_3;
    puVar4 = puVar3;
    if (param_3 == 0) goto LAB_104ab8ec8;
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    puVar4 = (ulong *)(uVar1 + 1);
    __Znwm();
    puVar3[1] = param_3;
    puVar3[2] = uVar1 + 1 | 0x8000000000000000;
    *puVar3 = (ulong)puVar4;
  }
  _memmove(puVar4,param_2,param_3);
LAB_104ab8ec8:
  *(undefined1 *)((long)puVar4 + param_3) = 0;
  *param_1 = puVar3;
  return param_1;
}



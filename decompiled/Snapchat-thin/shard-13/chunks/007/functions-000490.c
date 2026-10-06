/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10abd92c4; end: 10abd92e3;  */

void FUN_10abd92c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53268;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd92e4; end: 10abd931f;  */

void FUN_10abd92e4(long param_1)

{
  FUN_10abd91e8(param_1 + 0xb8);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110c4f540;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c50768;
  return;
}



/* Entry: 10abd9320; end: 10abd9323;  */

void FUN_10abd9320(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd9324; end: 10abd93e7;  */

void FUN_10abd9324(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  puVar1 = (undefined1 *)0x1d0;
  __Znwm();
  *puVar1 = 0;
  puVar1[0x60] = 0;
  FUN_10a08e6b4(puVar1 + 0x68,0);
  plVar3 = (long *)(lVar2 + 8);
  lVar2 = *plVar3;
  *plVar3 = (long)puVar1;
  if (lVar2 != 0) {
    FUN_10a31ed38(plVar3);
    puVar1 = (undefined1 *)*plVar3;
  }
  FUN_10a3231fc(puVar1);
  if ((bRam000000011330a9e8 >> 2 & 1) == 0) {
    return;
  }
  FUN_10ae06f30(1,4,&UNK_10f69665e,&UNK_10f699a8b,0x32,&UNK_10f699ad2,&stack0x00000000);
  return;
}



/* Entry: 10abd93e8; end: 10abd9403;  */

void FUN_10abd93e8(void)

{
  return;
}



/* Entry: 10abd9404; end: 10abd945b;  */

void FUN_10abd9404(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    FUN_10a31ed38();
  }
  if ((bRam000000011330a9e8 >> 2 & 1) == 0) {
    return;
  }
  FUN_10ae06f30(1,4,&UNK_10f69665e,&UNK_10f699a8b,0x37,&UNK_10f699aff,&stack0x00000000);
  return;
}



/* Entry: 10abd945c; end: 10abd9477;  */

void FUN_10abd945c(void)

{
  return;
}



/* Entry: 10abd9478; end: 10abd94b7;  */

long * FUN_10abd9478(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(*(long *)(param_1 + 0x10) + 8);
  plVar1 = (long *)*plVar3;
  FUN_10a31ecd8(plVar1);
  plVar2 = (long *)*plVar3;
  *plVar3 = 0;
  if (plVar2 == (long *)0x0) {
    return plVar1;
  }
  if (plVar2 != (long *)0x0) {
    FUN_10a08ef58(plVar2 + 0xd);
    if ((char)plVar2[0xc] == '\x01') {
      func_0x00010a09a9f4(plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return plVar2;
  }
  return plVar3;
}



/* Entry: 10abd94b8; end: 10abd94d3;  */

void FUN_10abd94b8(void)

{
  return;
}



/* Entry: 10abd94d4; end: 10abd9503;  */

void FUN_10abd94d4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x58);
  FUN_10abd9504();
                    /* WARNING: Could not recover jumptable at 0x00010abd9500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10abd9504; end: 10abd953f;  */

void FUN_10abd9504(long param_1)

{
  FUN_10abd08e8();
  (**(code **)(param_1 + 0x50))(param_1);
  return;
}



/* Entry: 10abd9540; end: 10abd9667;  */

void FUN_10abd9540(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10abd9668; end: 10abd96d7;  */

void FUN_10abd9668(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110baa4d8;
  FUN_10a1b2c04(puVar2,param_2,param_3);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10abd96d8; end: 10abd96db;  */

void FUN_10abd96d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10abd96dc; end: 10abd96ef;  */

void FUN_10abd96dc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd96f0; end: 10abd9707;  */

void FUN_10abd96f0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010abd9700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10abd9708; end: 10abd973f;  */

undefined8 FUN_10abd9708(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53350);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abd9740; end: 10abd977f;  */

void FUN_10abd9740(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd9780; end: 10abd979f;  */

void FUN_10abd9780(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c53398;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd97a0; end: 10abd97af;  */

void FUN_10abd97a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010abd97a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10abd97b0; end: 10abd9807;  */

long FUN_10abd97b0(long param_1)

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



/* Entry: 10abd9808; end: 10abd980b;  */

undefined8 * FUN_10abd9808(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4fd98;
  FUN_10a1977f4(param_1 + 0x109,0);
  FUN_10abd0b1c(param_1 + 4);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10abd980c; end: 10abd981f;  */

void FUN_10abd980c(void)

{
  FUN_10aba1cb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd9820; end: 10abd98cb;  */

void FUN_10abd9820(void)

{
  return;
}



/* Entry: 10abd98cc; end: 10abd99ff;  */

void FUN_10abd98cc(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10abd98cc(*param_1);
    FUN_10abd98cc(param_1[1]);
    func_0x00010abd990c(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10abd9a00; end: 10abd9a0f;  */

void FUN_10abd9a00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53558;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10abd9a10; end: 10abd9a2f;  */

void FUN_10abd9a10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53558;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd9a30; end: 10abd9a57;  */

void FUN_10abd9a30(long param_1)

{
  undefined8 *puVar1;
  
  func_0x00010a0616d0(param_1 + 0x30);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10abd9a5c(*puVar1);
    FUN_10abd9a5c(puVar1[1]);
    if (*(char *)((long)puVar1 + 0x37) < '\0') {
      __ZdlPv(puVar1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10abd9a58; end: 10abd9a5b;  */

void FUN_10abd9a58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd9a5c; end: 10abd9aa3;  */

void FUN_10abd9a5c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10abd9a5c(*param_1);
    FUN_10abd9a5c(param_1[1]);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10abd9aa4; end: 10abd9ab3;  */

void FUN_10abd9aa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c535a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10abd9ab4; end: 10abd9ad3;  */

void FUN_10abd9ab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c535a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd9ad4; end: 10abd9adf;  */

undefined8 * FUN_10abd9ad4(long param_1)

{
  long *plVar1;
  long lStack_28;
  
  *(undefined8 *)(param_1 + 0x30) = &PTR_FUN_110c49f98;
  plVar1 = *(long **)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined ***)(param_1 + 400) = &PTR_DAT_110c4a7c8;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1a8);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x128;
  func_0x00010a190844(&lStack_28);
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0xd0;
  FUN_10ab550c4(&lStack_28);
  lStack_28 = param_1 + 0xb8;
  func_0x00010ab55134(&lStack_28);
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x88;
  FUN_10a0d89d4(&lStack_28);
  lStack_28 = param_1 + 0x70;
  func_0x00010ab551a4(&lStack_28);
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  return (undefined8 *)(param_1 + 0x30);
}



/* Entry: 10abd9ae0; end: 10abd9b27;  */

void FUN_10abd9ae0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010abd990c(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10abd9b28; end: 10abd9c0b;  */

undefined1  [16] FUN_10abd9b28(ulong *param_1,long param_2)

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
          goto LAB_10abd9c00;
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
  FUN_10abd9c0c(param_1,uVar4);
  uVar11 = 1;
  puVar7 = param_1;
LAB_10abd9c00:
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar7;
  return auVar19;
}



/* Entry: 10abd9c0c; end: 10abd9cfb;  */

void FUN_10abd9c0c(ulong *param_1,ulong param_2)

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
    FUN_10abd9e1c(param_1);
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



/* Entry: 10abd9cfc; end: 10abd9e1b;  */

void FUN_10abd9cfc(ulong *param_1,ulong param_2)

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



/* Entry: 10abd9e1c; end: 10abd9ebb;  */

ulong * FUN_10abd9e1c(ulong *param_1,long *param_2)

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
    param_2 = (long *)&UNK_110c535e8;
    FUN_10ae6c914(param_1,&UNK_110c535e8,&stack0xffffffffffffffe0);
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



/* Entry: 10abd9ebc; end: 10abd9efb;  */

ulong FUN_10abd9ebc(undefined8 param_1,long *param_2)

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



/* Entry: 10abd9efc; end: 10abd9fdf;  */

undefined1  [16] FUN_10abd9efc(ulong *param_1,long param_2)

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
          goto LAB_10abd9fd4;
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
  FUN_10abd9fe0(param_1,uVar4);
  uVar11 = 1;
  puVar7 = param_1;
LAB_10abd9fd4:
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar7;
  return auVar19;
}



/* Entry: 10abd9fe0; end: 10abda0cf;  */

void FUN_10abd9fe0(ulong *param_1,ulong param_2)

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
    FUN_10abda1f0(param_1);
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



/* Entry: 10abda0d0; end: 10abda1ef;  */

void FUN_10abda0d0(ulong *param_1,ulong param_2)

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



/* Entry: 10abda1f0; end: 10abda28f;  */

ulong * FUN_10abda1f0(ulong *param_1,long *param_2)

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
    param_2 = (long *)&UNK_110c53608;
    FUN_10ae6c914(param_1,&UNK_110c53608,&stack0xffffffffffffffe0);
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



/* Entry: 10abda290; end: 10abda2cf;  */

ulong FUN_10abda290(undefined8 param_1,long *param_2)

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



/* Entry: 10abda2d0; end: 10abda3ff;  */

long * FUN_10abda2d0(long *param_1)

{
  long lVar1;
  
  func_0x00010abda308(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abda400; end: 10abda40f;  */

void FUN_10abda400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53638;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10abda410; end: 10abda42f;  */

void FUN_10abda410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53638;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abda430; end: 10abda50b;  */

void FUN_10abda430(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x428) != 0) {
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x428) + 0x10) >> 1 & 1) == 0) {
      FUN_109d1a244((long *)(param_1 + 0x428));
    }
    plVar4 = *(long **)(param_1 + 0x428);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  FUN_10a1902ec(param_1 + 0x408,0);
  func_0x00010a19032c(param_1 + 0x400,0);
  FUN_10a19036c(param_1 + 0x148);
  func_0x00010a0eb82c(param_1 + 0x60);
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10abda50c; end: 10abda50f;  */

void FUN_10abda50c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abda510; end: 10abda73b;  */

undefined4 * FUN_10abda510(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(undefined8 *)(param_1 + 2) = uVar6;
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  lVar5 = *(long *)(param_2 + 0xc);
  uVar9 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar9;
  *(undefined8 *)(param_1 + 8) = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = param_2[0xe];
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0xe] = uVar2;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    puVar7 = param_2 + 0x10;
    lVar5 = *(long *)(param_2 + 0x18) << 2;
    do {
      func_0x00010928bcfc(param_1 + 0x10,puVar7);
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = uVar6;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  if (*(long *)(param_2 + 0x24) != 0) {
    puVar7 = param_2 + 0x1c;
    lVar5 = *(long *)(param_2 + 0x24) << 2;
    do {
      func_0x000109261ecc(param_1 + 0x1c,puVar7);
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x26) = uVar6;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    puVar7 = param_2 + 0x28;
    lVar5 = *(long *)(param_2 + 0x30) << 2;
    do {
      func_0x000109261ecc(param_1 + 0x28,puVar7);
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  uVar9 = *(undefined8 *)(param_2 + 0x36);
  uVar6 = *(undefined8 *)(param_2 + 0x34);
  uVar11 = *(undefined8 *)(param_2 + 0x3a);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  param_1[0x3c] = param_2[0x3c];
  *(undefined8 *)(param_1 + 0x36) = uVar9;
  *(undefined8 *)(param_1 + 0x34) = uVar6;
  *(undefined8 *)(param_1 + 0x3a) = uVar11;
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  lVar5 = *(long *)(param_2 + 0x3e);
  *(long *)(param_1 + 0x3e) = lVar5;
  if (lVar5 != 0) {
    puVar7 = param_2 + 0x40;
    puVar8 = param_1 + 0x40;
    do {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      lVar5 = lVar5 + -1;
      puVar7 = (undefined4 *)((long)puVar7 + 1);
      puVar8 = (undefined4 *)((long)puVar8 + 1);
    } while (lVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_2 + 0x42);
  FUN_10a203af0(param_1 + 0x44,param_2 + 0x44);
  uVar9 = *(undefined8 *)(param_2 + 0xe8);
  uVar6 = *(undefined8 *)(param_2 + 0xe6);
  uVar11 = *(undefined8 *)(param_2 + 0xec);
  uVar10 = *(undefined8 *)(param_2 + 0xea);
  uVar12 = *(undefined8 *)((long)param_2 + 0x3b1);
  *(undefined8 *)((long)param_1 + 0x3b9) = *(undefined8 *)((long)param_2 + 0x3b9);
  *(undefined8 *)((long)param_1 + 0x3b1) = uVar12;
  *(undefined8 *)(param_1 + 0xe8) = uVar9;
  *(undefined8 *)(param_1 + 0xe6) = uVar6;
  *(undefined8 *)(param_1 + 0xec) = uVar11;
  *(undefined8 *)(param_1 + 0xea) = uVar10;
  uVar6 = *(undefined8 *)(param_2 + 0xf2);
  uVar9 = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_2 + 0xf4) = 0;
  *(undefined8 *)(param_2 + 0xf2) = 0;
  *(undefined8 *)(param_1 + 0xf2) = uVar6;
  *(undefined8 *)(param_1 + 0xf4) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xf8);
  uVar6 = *(undefined8 *)(param_2 + 0xf6);
  *(undefined8 *)(param_1 + 0xfa) = *(undefined8 *)(param_2 + 0xfa);
  *(undefined8 *)(param_1 + 0xf8) = uVar9;
  *(undefined8 *)(param_1 + 0xf6) = uVar6;
  return param_1;
}



/* Entry: 10abda73c; end: 10abda783;  */

void FUN_10abda73c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010abda344(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10abda784; end: 10abda8ef;  */

long * FUN_10abda784(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long alStack_40 [3];
  long lStack_28;
  
  plVar4 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  if (param_2 != param_1) {
    plVar3 = (long *)param_1[3];
    plVar6 = (long *)param_2[3];
    if (plVar3 == param_1) {
      if (plVar6 == param_2) {
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar3 + 0x18))();
        plVar4 = (long *)param_1[3];
        (**(code **)(*plVar4 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar4;
    }
    else if (plVar6 == param_2) {
      plVar8 = param_1;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar4 = (long *)param_2[3];
      (**(code **)(*plVar4 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar4;
    }
    else {
      param_1[3] = (long)plVar6;
      param_2[3] = (long)plVar3;
      param_1 = plVar3;
    }
  }
  iVar5 = (int)plVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    plVar4 = plVar8 + 1;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return param_1;
}



/* Entry: 10abda8f0; end: 10abdaa03;  */

long FUN_10abda8f0(long param_1)

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



/* Entry: 10abdaa04; end: 10abdaa0b;  */

void FUN_10abdaa04(void)

{
  return;
}



/* Entry: 10abdaa0c; end: 10abdaa2f;  */

void FUN_10abdaa0c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110c53688;
  return;
}



/* Entry: 10abdaa30; end: 10abdaa47;  */

void FUN_10abdaa30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c53688;
  return;
}



/* Entry: 10abdaa48; end: 10abdab83;  */

long FUN_10abdaa48(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 auStack_60 [2];
  char cStack_49;
  long alStack_48 [2];
  char cStack_31;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(alStack_48,&UNK_10f699b2d);
  func_0x000107c2b054(auStack_60,&UNK_10f699b3f);
  FUN_10ab108b4(param_1,alStack_48,auStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(alStack_48[0]);
  }
  func_0x000107c2b074(alStack_48,&PTR_DAT_110c51ad8);
  lVar1 = param_1 + 0x48;
  plVar2 = alStack_48;
  FUN_10ab14240(lVar1,plVar2,&lStack_28,1);
  if (cStack_31 < '\0') {
    lVar1 = alStack_48[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar1;
  }
  ___stack_chk_fail();
  if (cStack_31 < '\0') {
    __ZdlPv(alStack_48[0]);
  }
  FUN_10ab11bb0(param_1);
  __Unwind_Resume(lVar1);
  FUN_10a042ab0(plVar2,&PTR_DAT_110c536f8);
  lVar1 = lVar1 + 8;
  if ((int)plVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10abdab84; end: 10abdabbf;  */

long FUN_10abdab84(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c536f8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdabc0; end: 10abdabd3;  */

undefined ** FUN_10abdabc0(void)

{
  return &PTR_DAT_110c536f8;
}



/* Entry: 10abdabd4; end: 10abdabf7;  */

void FUN_10abdabd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110c53718;
  return;
}



/* Entry: 10abdabf8; end: 10abdac0f;  */

void FUN_10abdabf8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c53718;
  return;
}



/* Entry: 10abdac10; end: 10abdae4b;  */

/* WARNING: Removing unreachable block (ram,0x00010abdac64) */
/* WARNING: Removing unreachable block (ram,0x00010abdad74) */

void FUN_10abdac10(long param_1)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 **ppuStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_89;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c2b054(&uStack_a0,&UNK_10f699b58);
  func_0x000107c2b054(&uStack_60,&UNK_10f699b66);
  FUN_10ab108b4(param_1,&uStack_a0,&uStack_60);
  if ((char)bStack_89 < '\0') {
    __ZdlPv(uStack_a0);
  }
  uVar7 = 0;
  bVar3 = true;
  do {
    bVar6 = bVar3;
    func_0x000107c2b074(&uStack_a0,&PTR_DAT_110c51b78);
    if ((char)bStack_89 < '\0') {
      func_0x000107c3192c(&uStack_80,uStack_a0,uStack_98);
    }
    else {
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_70 = (ulong)bStack_89 << 0x38;
    }
    __ZNSt3__19to_stringEi(&ppuStack_b8,uVar7);
    uVar1 = uStack_b0;
    pppuVar2 = (undefined8 ***)ppuStack_b8;
    if (-1 < (char)bStack_a1) {
      uVar1 = (ulong)bStack_a1;
      pppuVar2 = &ppuStack_b8;
    }
    puVar4 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,pppuVar2,uVar1);
    uStack_58 = puVar4[1];
    uStack_60 = *puVar4;
    uStack_50 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if ((char)bStack_a1 < '\0') {
      __ZdlPv(ppuStack_b8);
    }
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    if ((char)bStack_89 < '\0') {
      __ZdlPv(uStack_a0);
    }
    uVar1 = *(ulong *)(param_1 + 0x50);
    if (uVar1 < *(ulong *)(param_1 + 0x58)) {
      FUN_10a0d09b4(uVar1,&uStack_60);
      lVar5 = uVar1 + 0x20;
    }
    else {
      lVar5 = param_1 + 0x48;
      FUN_10abdae94(lVar5,&uStack_60);
    }
    *(long *)(param_1 + 0x50) = lVar5;
    uVar7 = 1;
    bVar3 = false;
  } while (bVar6);
  return;
}



/* Entry: 10abdae4c; end: 10abdae87;  */

long FUN_10abdae4c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53778);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdae88; end: 10abdae93;  */

undefined ** FUN_10abdae88(void)

{
  return &PTR_DAT_110c53778;
}



/* Entry: 10abdae94; end: 10abdaf9b;  */

long * FUN_10abdae94(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar2 = param_1[2] - *param_1;
    uVar4 = (long)uVar2 >> 4;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar2) {
      uVar4 = 0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a36f358();
    }
    lVar5 = (long)plVar3 + lVar5;
    plStack_40 = plVar3 + uVar4 * 4;
    plStack_58 = plVar3;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_10a0d09b4(lVar5,param_2);
    plStack_48 = (long *)(lVar5 + 0x20);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    func_0x00010a36f38c(param_1,*param_1,param_1[1],lVar5);
    plVar3 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    func_0x00010a36f4bc(&plStack_58);
    return plVar3;
  }
  FUN_10a36f344();
  func_0x00010a36f4bc(&plStack_58);
  __Unwind_Resume(param_1);
  return param_1;
}



/* Entry: 10abdaf9c; end: 10abdafa3;  */

void FUN_10abdaf9c(void)

{
  return;
}



/* Entry: 10abdafa4; end: 10abdafc7;  */

void FUN_10abdafa4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110c53798;
  return;
}



/* Entry: 10abdafc8; end: 10abdafef;  */

void FUN_10abdafc8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c53798;
  return;
}



/* Entry: 10abdaff0; end: 10abdb02b;  */

long FUN_10abdaff0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53808);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdb02c; end: 10abdb03f;  */

undefined ** FUN_10abdb02c(void)

{
  return &PTR_DAT_110c53808;
}



/* Entry: 10abdb040; end: 10abdb063;  */

void FUN_10abdb040(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110c53828;
  return;
}



/* Entry: 10abdb064; end: 10abdb08b;  */

void FUN_10abdb064(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c53828;
  return;
}



/* Entry: 10abdb08c; end: 10abdb0c7;  */

long FUN_10abdb08c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53888);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdb0c8; end: 10abdb0d3;  */

undefined ** FUN_10abdb0c8(void)

{
  return &PTR_DAT_110c53888;
}



/* Entry: 10abdb0d4; end: 10abdb28f;  */

void FUN_10abdb0d4(undefined8 *param_1,long param_2,long param_3,uint param_4,uint param_5,
                  int param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar6 = (param_3 - param_2 >> 4) * -0x5555555555555555;
  if (param_4 <= uVar6 && uVar6 - param_4 != 0) {
    plVar7 = (long *)(param_2 + (ulong)param_4 * 0x30);
    if ((ulong)param_5 < (ulong)(plVar7[1] - *plVar7 >> 3)) {
      uVar6 = (ulong)(uint)(*(int *)(*plVar7 + (ulong)param_5 * 8 + 4) + param_6);
      if (uVar6 < (ulong)(plVar7[4] - plVar7[3] >> 4)) {
        puVar4 = (undefined8 *)(plVar7[3] + uVar6 * 0x10);
        plVar7 = (long *)puVar4[1];
        uVar9 = *puVar4;
        if (plVar7 == (long *)0x0) {
          *param_1 = uVar9;
          param_1[1] = 0;
        }
        else {
          plVar1 = plVar7 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          param_1[1] = plVar7;
          *param_1 = uVar9;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10abdb1b8);
  (*pcVar5)();
}



/* Entry: 10abdb290; end: 10abdb297;  */

void FUN_10abdb290(void)

{
  return;
}



/* Entry: 10abdb298; end: 10abdb2cf;  */

void FUN_10abdb298(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110c538a8;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}



/* Entry: 10abdb2d0; end: 10abdb2ef;  */

void FUN_10abdb2d0(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c538a8;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}



/* Entry: 10abdb2f0; end: 10abdb36f;  */

void FUN_10abdb2f0(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = 6;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = 10;
  }
  puVar1 = (undefined8 *)(ulong)uVar2;
  FUN_10aaebdec();
  uVar6 = puVar1[3];
  uVar5 = puVar1[2];
  uVar4 = puVar1[5];
  uVar3 = puVar1[4];
  uVar7 = *puVar1;
  *(undefined8 *)(param_2 + 0x28) = puVar1[1];
  *(undefined8 *)(param_2 + 0x20) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = uVar6;
  *(undefined8 *)(param_2 + 0x30) = uVar5;
  *(undefined8 *)(param_2 + 0x48) = uVar4;
  *(undefined8 *)(param_2 + 0x40) = uVar3;
  return;
}



/* Entry: 10abdb370; end: 10abdb37b;  */

undefined ** FUN_10abdb370(void)

{
  return &PTR_DAT_110c53908;
}



/* Entry: 10abdb37c; end: 10abdb58b;  */

long * FUN_10abdb37c(long *param_1)

{
  long lVar1;
  
  func_0x00010abdb3b4(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abdb58c; end: 10abdb59b;  */

void FUN_10abdb58c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53968;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10abdb59c; end: 10abdb5bb;  */

void FUN_10abdb59c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53968;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abdb5bc; end: 10abdb5cb;  */

void FUN_10abdb5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010abdb5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10abdb5cc; end: 10abdb757;  */

undefined8 * FUN_10abdb5cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c539b8;
  func_0x00010a05248c(param_1 + 5);
  FUN_10a3f90e8(param_1 + 3);
  func_0x00010a216360(param_1 + 1);
  return param_1;
}



/* Entry: 10abdb758; end: 10abdb767;  */

void FUN_10abdb758(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c539e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10abdb768; end: 10abdb787;  */

void FUN_10abdb768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c539e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abdb788; end: 10abdb797;  */

void FUN_10abdb788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010abdb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10abdb798; end: 10abdb923;  */

undefined8 * FUN_10abdb798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53a30;
  func_0x00010a05248c(param_1 + 5);
  FUN_10a3f9020(param_1 + 3);
  func_0x00010a271cc8(param_1 + 1);
  return param_1;
}



/* Entry: 10abdb924; end: 10abdb92b;  */

void FUN_10abdb924(void)

{
  return;
}



/* Entry: 10abdb92c; end: 10abdb94f;  */

void FUN_10abdb92c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110c53a58;
  return;
}



/* Entry: 10abdb950; end: 10abdb967;  */

void FUN_10abdb950(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c53a58;
  return;
}



/* Entry: 10abdb968; end: 10abdbb33;  */

long FUN_10abdb968(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined1 auStack_78 [32];
  long alStack_58 [2];
  char acStack_41 [9];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(auStack_98,&UNK_10f699b81);
  func_0x000107c2b054(auStack_b0,&UNK_10f699b8d);
  FUN_10ab108b4(param_1,auStack_98,auStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  func_0x000107c2b07c(auStack_98,&DAT_10f64420f);
  func_0x000107c2b07c(auStack_78,&UNK_10f699b9e);
  func_0x000107c2b07c(alStack_58,&UNK_10f699bac);
  param_1 = param_1 + 0x48;
  puVar1 = auStack_98;
  FUN_10ab14240(param_1,puVar1,&lStack_38,3);
  lVar2 = 0;
  do {
    if (acStack_41[lVar2] < '\0') {
      param_1 = *(long *)((long)alStack_58 + lVar2);
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != -0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar2 = -0x60;
  pcVar3 = acStack_41;
  do {
    if (*pcVar3 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar3 + -0x17));
    }
    lVar2 = lVar2 + 0x20;
    pcVar3 = pcVar3 + -0x20;
  } while (lVar2 != 0);
  FUN_10ab11bb0(0xffffffffffffffa0);
  __Unwind_Resume(param_1);
  FUN_10a042ab0(puVar1,&PTR_DAT_110c53ab8);
  param_1 = param_1 + 8;
  if ((int)puVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdbb34; end: 10abdbb6f;  */

long FUN_10abdbb34(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53ab8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdbb70; end: 10abdbb7b;  */

undefined ** FUN_10abdbb70(void)

{
  return &PTR_DAT_110c53ab8;
}



/* Entry: 10abdbb7c; end: 10abdbc5b;  */

void FUN_10abdbb7c(undefined8 *param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar6 = (param_3 - param_2 >> 4) * -0x5555555555555555;
  if (param_4 <= uVar6 && uVar6 - param_4 != 0) {
    plVar7 = (long *)(param_2 + (ulong)param_4 * 0x30);
    if ((ulong)param_5 < (ulong)(plVar7[1] - *plVar7 >> 3)) {
      uVar6 = (ulong)*(uint *)(*plVar7 + (ulong)param_5 * 8 + 4);
      if (uVar6 < (ulong)(plVar7[4] - plVar7[3] >> 4)) {
        puVar4 = (undefined8 *)(plVar7[3] + uVar6 * 0x10);
        plVar7 = (long *)puVar4[1];
        uVar9 = *puVar4;
        if (plVar7 == (long *)0x0) {
          *param_1 = uVar9;
          param_1[1] = 0;
        }
        else {
          plVar1 = plVar7 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          param_1[1] = plVar7;
          *param_1 = uVar9;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10abdbc5c);
  (*pcVar5)();
}



/* Entry: 10abdbc5c; end: 10abdbc63;  */

void FUN_10abdbc5c(void)

{
  return;
}



/* Entry: 10abdbc64; end: 10abdbc97;  */

void FUN_10abdbc64(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c53ad8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10abdbc98; end: 10abdbcc7;  */

void FUN_10abdbc98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c53ad8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10abdbcc8; end: 10abdbd03;  */

long FUN_10abdbcc8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53b38);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



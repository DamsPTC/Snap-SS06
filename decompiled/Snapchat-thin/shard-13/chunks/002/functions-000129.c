/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1bae88; end: 10a1bae97;  */

void FUN_10a1bae88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac8f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1bae98; end: 10a1baeb7;  */

void FUN_10a1bae98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac8f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1baeb8; end: 10a1baec7;  */

void FUN_10a1baeb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1baec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1baec8; end: 10a1baf1f;  */

long FUN_10a1baec8(long param_1)

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



/* Entry: 10a1baf20; end: 10a1baf2f;  */

void FUN_10a1baf20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1baf30; end: 10a1baf4f;  */

void FUN_10a1baf30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac948;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1baf50; end: 10a1baf5f;  */

void FUN_10a1baf50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1baf58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1baf60; end: 10a1bafb7;  */

long FUN_10a1baf60(long param_1)

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



/* Entry: 10a1bafb8; end: 10a1bafc7;  */

void FUN_10a1bafb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac998;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1bafc8; end: 10a1bafe7;  */

void FUN_10a1bafc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac998;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1bafe8; end: 10a1baff7;  */

void FUN_10a1bafe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1baff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1baff8; end: 10a1bb04f;  */

long FUN_10a1baff8(long param_1)

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



/* Entry: 10a1bb050; end: 10a1bb05f;  */

void FUN_10a1bb050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac9e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1bb060; end: 10a1bb07f;  */

void FUN_10a1bb060(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bac9e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1bb080; end: 10a1bb08f;  */

void FUN_10a1bb080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1bb088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a1bb090; end: 10a1bb13f;  */

long FUN_10a1bb090(long param_1)

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



/* Entry: 10a1bb140; end: 10a1bb14f;  */

void FUN_10a1bb140(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baca38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1bb150; end: 10a1bb16f;  */

void FUN_10a1bb150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baca38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1bb170; end: 10a1bb1db;  */

void FUN_10a1bb170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1bb178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1bb1dc; end: 10a1bb2c7;  */

void FUN_10a1bb1dc(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 auStack_80 [7];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_10 = param_4;
  uStack_8 = param_5;
  if (*param_3 != 0) {
    uVar4 = 0;
    do {
      uVar7 = param_3[1];
      lVar5 = param_3[3] + param_3[2] * uVar4;
      lVar6 = param_2 + uVar4 * param_1;
      uVar2 = uVar7 & 0xfffffffffffffff0;
      if (uVar2 != 0) {
        uVar8 = 0;
        do {
          lVar9 = 0;
          puVar1 = (undefined1 *)(lVar5 + uVar8 * 4);
          uStack_48 = CONCAT17(puVar1[0x3c],
                               CONCAT16(puVar1[0x38],
                                        CONCAT15(puVar1[0x34],
                                                 CONCAT14(puVar1[0x30],
                                                          CONCAT13(puVar1[0x2c],
                                                                   CONCAT12(puVar1[0x28],
                                                                            CONCAT11(puVar1[0x24],
                                                                                     puVar1[0x20])))
                                                         ))));
          auStack_80[6] =
               CONCAT17(puVar1[0x1c],
                        CONCAT16(puVar1[0x18],
                                 CONCAT15(puVar1[0x14],
                                          CONCAT14(puVar1[0x10],
                                                   CONCAT13(puVar1[0xc],
                                                            CONCAT12(puVar1[8],
                                                                     CONCAT11(puVar1[4],*puVar1)))))
                                ));
          uStack_38 = CONCAT17(puVar1[0x3d],
                               CONCAT16(puVar1[0x39],
                                        CONCAT15(puVar1[0x35],
                                                 CONCAT14(puVar1[0x31],
                                                          CONCAT13(puVar1[0x2d],
                                                                   CONCAT12(puVar1[0x29],
                                                                            CONCAT11(puVar1[0x25],
                                                                                     puVar1[0x21])))
                                                         ))));
          uStack_40 = CONCAT17(puVar1[0x1d],
                               CONCAT16(puVar1[0x19],
                                        CONCAT15(puVar1[0x15],
                                                 CONCAT14(puVar1[0x11],
                                                          CONCAT13(puVar1[0xd],
                                                                   CONCAT12(puVar1[9],
                                                                            CONCAT11(puVar1[5],
                                                                                     puVar1[1]))))))
                              );
          uStack_28 = CONCAT17(puVar1[0x3e],
                               CONCAT16(puVar1[0x3a],
                                        CONCAT15(puVar1[0x36],
                                                 CONCAT14(puVar1[0x32],
                                                          CONCAT13(puVar1[0x2e],
                                                                   CONCAT12(puVar1[0x2a],
                                                                            CONCAT11(puVar1[0x26],
                                                                                     puVar1[0x22])))
                                                         ))));
          uStack_30 = CONCAT17(puVar1[0x1e],
                               CONCAT16(puVar1[0x1a],
                                        CONCAT15(puVar1[0x16],
                                                 CONCAT14(puVar1[0x12],
                                                          CONCAT13(puVar1[0xe],
                                                                   CONCAT12(puVar1[10],
                                                                            CONCAT11(puVar1[6],
                                                                                     puVar1[2]))))))
                              );
          uStack_18 = CONCAT17(puVar1[0x3f],
                               CONCAT16(puVar1[0x3b],
                                        CONCAT15(puVar1[0x37],
                                                 CONCAT14(puVar1[0x33],
                                                          CONCAT13(puVar1[0x2f],
                                                                   CONCAT12(puVar1[0x2b],
                                                                            CONCAT11(puVar1[0x27],
                                                                                     puVar1[0x23])))
                                                         ))));
          uStack_20 = CONCAT17(puVar1[0x1f],
                               CONCAT16(puVar1[0x1b],
                                        CONCAT15(puVar1[0x17],
                                                 CONCAT14(puVar1[0x13],
                                                          CONCAT13(puVar1[0xf],
                                                                   CONCAT12(puVar1[0xb],
                                                                            CONCAT11(puVar1[7],
                                                                                     puVar1[3]))))))
                              );
          do {
            lVar3 = (long)*(int *)((long)&uStack_10 + lVar9 * 4);
            uVar10 = auStack_80[lVar3 * 2 + 6];
            auStack_80[lVar9 * 2 + 1] = auStack_80[lVar3 * 2 + 7];
            auStack_80[lVar9 * 2] = uVar10;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
          puVar1 = (undefined1 *)(lVar6 + uVar8 * 3);
          *puVar1 = (char)auStack_80[0];
          puVar1[1] = (char)auStack_80[2];
          puVar1[2] = (char)auStack_80[4];
          puVar1[3] = (char)((ulong)auStack_80[0] >> 8);
          puVar1[4] = (char)((ulong)auStack_80[2] >> 8);
          puVar1[5] = (char)((ulong)auStack_80[4] >> 8);
          puVar1[6] = (char)((ulong)auStack_80[0] >> 0x10);
          puVar1[7] = (char)((ulong)auStack_80[2] >> 0x10);
          puVar1[8] = (char)((ulong)auStack_80[4] >> 0x10);
          puVar1[9] = (char)((ulong)auStack_80[0] >> 0x18);
          puVar1[10] = (char)((ulong)auStack_80[2] >> 0x18);
          puVar1[0xb] = (char)((ulong)auStack_80[4] >> 0x18);
          puVar1[0xc] = (char)((ulong)auStack_80[0] >> 0x20);
          puVar1[0xd] = (char)((ulong)auStack_80[2] >> 0x20);
          puVar1[0xe] = (char)((ulong)auStack_80[4] >> 0x20);
          puVar1[0xf] = (char)((ulong)auStack_80[0] >> 0x28);
          puVar1[0x10] = (char)((ulong)auStack_80[2] >> 0x28);
          puVar1[0x11] = (char)((ulong)auStack_80[4] >> 0x28);
          puVar1[0x12] = (char)((ulong)auStack_80[0] >> 0x30);
          puVar1[0x13] = (char)((ulong)auStack_80[2] >> 0x30);
          puVar1[0x14] = (char)((ulong)auStack_80[4] >> 0x30);
          puVar1[0x15] = (char)((ulong)auStack_80[0] >> 0x38);
          puVar1[0x16] = (char)((ulong)auStack_80[2] >> 0x38);
          puVar1[0x17] = (char)((ulong)auStack_80[4] >> 0x38);
          puVar1[0x18] = (char)auStack_80[1];
          puVar1[0x19] = (char)auStack_80[3];
          puVar1[0x1a] = (char)auStack_80[5];
          puVar1[0x1b] = (char)((ulong)auStack_80[1] >> 8);
          puVar1[0x1c] = (char)((ulong)auStack_80[3] >> 8);
          puVar1[0x1d] = (char)((ulong)auStack_80[5] >> 8);
          puVar1[0x1e] = (char)((ulong)auStack_80[1] >> 0x10);
          puVar1[0x1f] = (char)((ulong)auStack_80[3] >> 0x10);
          puVar1[0x20] = (char)((ulong)auStack_80[5] >> 0x10);
          puVar1[0x21] = (char)((ulong)auStack_80[1] >> 0x18);
          puVar1[0x22] = (char)((ulong)auStack_80[3] >> 0x18);
          puVar1[0x23] = (char)((ulong)auStack_80[5] >> 0x18);
          puVar1[0x24] = (char)((ulong)auStack_80[1] >> 0x20);
          puVar1[0x25] = (char)((ulong)auStack_80[3] >> 0x20);
          puVar1[0x26] = (char)((ulong)auStack_80[5] >> 0x20);
          puVar1[0x27] = (char)((ulong)auStack_80[1] >> 0x28);
          puVar1[0x28] = (char)((ulong)auStack_80[3] >> 0x28);
          puVar1[0x29] = (char)((ulong)auStack_80[5] >> 0x28);
          puVar1[0x2a] = (char)((ulong)auStack_80[1] >> 0x30);
          puVar1[0x2b] = (char)((ulong)auStack_80[3] >> 0x30);
          puVar1[0x2c] = (char)((ulong)auStack_80[5] >> 0x30);
          puVar1[0x2d] = (char)((ulong)auStack_80[1] >> 0x38);
          puVar1[0x2e] = (char)((ulong)auStack_80[3] >> 0x38);
          puVar1[0x2f] = (char)((ulong)auStack_80[5] >> 0x38);
          uVar8 = uVar8 + 0x10;
        } while (uVar8 < uVar2);
      }
      uVar7 = uVar7 & 0xf;
      if (uVar7 != 0) {
        uVar8 = 0;
        lVar6 = lVar6 + uVar2 * 3;
        do {
          lVar9 = 0;
          do {
            *(undefined1 *)(lVar6 + lVar9) =
                 *(undefined1 *)
                  (lVar5 + (uVar8 + uVar2) * 4 + (ulong)*(uint *)((long)&uStack_10 + lVar9 * 4));
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
          lVar6 = lVar6 + 3;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_3);
  }
  return;
}



/* Entry: 10a1bb2c8; end: 10a1bb3bf;  */

void FUN_10a1bb2c8(long param_1,long param_2,ulong *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 auStack_70 [7];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  uint auStack_10 [4];
  
  auStack_10[0] = 2;
  auStack_10[1] = 1;
  auStack_10[2] = 0;
  if (*param_3 != 0) {
    uVar4 = 0;
    do {
      uVar7 = param_3[1];
      lVar5 = param_3[3] + param_3[2] * uVar4;
      lVar6 = param_2 + uVar4 * param_1;
      uVar2 = uVar7 & 0xfffffffffffffff0;
      if (uVar2 != 0) {
        uVar8 = 0;
        do {
          lVar3 = 0;
          puVar1 = (undefined1 *)(lVar5 + uVar8 * 3);
          uStack_38 = CONCAT17(puVar1[0x2d],
                               CONCAT16(puVar1[0x2a],
                                        CONCAT15(puVar1[0x27],
                                                 CONCAT14(puVar1[0x24],
                                                          CONCAT13(puVar1[0x21],
                                                                   CONCAT12(puVar1[0x1e],
                                                                            CONCAT11(puVar1[0x1b],
                                                                                     puVar1[0x18])))
                                                         ))));
          auStack_70[6] =
               CONCAT17(puVar1[0x15],
                        CONCAT16(puVar1[0x12],
                                 CONCAT15(puVar1[0xf],
                                          CONCAT14(puVar1[0xc],
                                                   CONCAT13(puVar1[9],
                                                            CONCAT12(puVar1[6],
                                                                     CONCAT11(puVar1[3],*puVar1)))))
                                ));
          uStack_28 = CONCAT17(puVar1[0x2e],
                               CONCAT16(puVar1[0x2b],
                                        CONCAT15(puVar1[0x28],
                                                 CONCAT14(puVar1[0x25],
                                                          CONCAT13(puVar1[0x22],
                                                                   CONCAT12(puVar1[0x1f],
                                                                            CONCAT11(puVar1[0x1c],
                                                                                     puVar1[0x19])))
                                                         ))));
          uStack_30 = CONCAT17(puVar1[0x16],
                               CONCAT16(puVar1[0x13],
                                        CONCAT15(puVar1[0x10],
                                                 CONCAT14(puVar1[0xd],
                                                          CONCAT13(puVar1[10],
                                                                   CONCAT12(puVar1[7],
                                                                            CONCAT11(puVar1[4],
                                                                                     puVar1[1]))))))
                              );
          uStack_18 = CONCAT17(puVar1[0x2f],
                               CONCAT16(puVar1[0x2c],
                                        CONCAT15(puVar1[0x29],
                                                 CONCAT14(puVar1[0x26],
                                                          CONCAT13(puVar1[0x23],
                                                                   CONCAT12(puVar1[0x20],
                                                                            CONCAT11(puVar1[0x1d],
                                                                                     puVar1[0x1a])))
                                                         ))));
          uStack_20 = CONCAT17(puVar1[0x17],
                               CONCAT16(puVar1[0x14],
                                        CONCAT15(puVar1[0x11],
                                                 CONCAT14(puVar1[0xe],
                                                          CONCAT13(puVar1[0xb],
                                                                   CONCAT12(puVar1[8],
                                                                            CONCAT11(puVar1[5],
                                                                                     puVar1[2]))))))
                              );
          do {
            uVar9 = auStack_70[(long)(int)auStack_10[lVar3] * 2 + 6];
            auStack_70[lVar3 * 2 + 1] = auStack_70[(long)(int)auStack_10[lVar3] * 2 + 7];
            auStack_70[lVar3 * 2] = uVar9;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 3);
          puVar1 = (undefined1 *)(lVar6 + uVar8 * 3);
          *puVar1 = (char)auStack_70[0];
          puVar1[1] = (char)auStack_70[2];
          puVar1[2] = (char)auStack_70[4];
          puVar1[3] = (char)((ulong)auStack_70[0] >> 8);
          puVar1[4] = (char)((ulong)auStack_70[2] >> 8);
          puVar1[5] = (char)((ulong)auStack_70[4] >> 8);
          puVar1[6] = (char)((ulong)auStack_70[0] >> 0x10);
          puVar1[7] = (char)((ulong)auStack_70[2] >> 0x10);
          puVar1[8] = (char)((ulong)auStack_70[4] >> 0x10);
          puVar1[9] = (char)((ulong)auStack_70[0] >> 0x18);
          puVar1[10] = (char)((ulong)auStack_70[2] >> 0x18);
          puVar1[0xb] = (char)((ulong)auStack_70[4] >> 0x18);
          puVar1[0xc] = (char)((ulong)auStack_70[0] >> 0x20);
          puVar1[0xd] = (char)((ulong)auStack_70[2] >> 0x20);
          puVar1[0xe] = (char)((ulong)auStack_70[4] >> 0x20);
          puVar1[0xf] = (char)((ulong)auStack_70[0] >> 0x28);
          puVar1[0x10] = (char)((ulong)auStack_70[2] >> 0x28);
          puVar1[0x11] = (char)((ulong)auStack_70[4] >> 0x28);
          puVar1[0x12] = (char)((ulong)auStack_70[0] >> 0x30);
          puVar1[0x13] = (char)((ulong)auStack_70[2] >> 0x30);
          puVar1[0x14] = (char)((ulong)auStack_70[4] >> 0x30);
          puVar1[0x15] = (char)((ulong)auStack_70[0] >> 0x38);
          puVar1[0x16] = (char)((ulong)auStack_70[2] >> 0x38);
          puVar1[0x17] = (char)((ulong)auStack_70[4] >> 0x38);
          puVar1[0x18] = (char)auStack_70[1];
          puVar1[0x19] = (char)auStack_70[3];
          puVar1[0x1a] = (char)auStack_70[5];
          puVar1[0x1b] = (char)((ulong)auStack_70[1] >> 8);
          puVar1[0x1c] = (char)((ulong)auStack_70[3] >> 8);
          puVar1[0x1d] = (char)((ulong)auStack_70[5] >> 8);
          puVar1[0x1e] = (char)((ulong)auStack_70[1] >> 0x10);
          puVar1[0x1f] = (char)((ulong)auStack_70[3] >> 0x10);
          puVar1[0x20] = (char)((ulong)auStack_70[5] >> 0x10);
          puVar1[0x21] = (char)((ulong)auStack_70[1] >> 0x18);
          puVar1[0x22] = (char)((ulong)auStack_70[3] >> 0x18);
          puVar1[0x23] = (char)((ulong)auStack_70[5] >> 0x18);
          puVar1[0x24] = (char)((ulong)auStack_70[1] >> 0x20);
          puVar1[0x25] = (char)((ulong)auStack_70[3] >> 0x20);
          puVar1[0x26] = (char)((ulong)auStack_70[5] >> 0x20);
          puVar1[0x27] = (char)((ulong)auStack_70[1] >> 0x28);
          puVar1[0x28] = (char)((ulong)auStack_70[3] >> 0x28);
          puVar1[0x29] = (char)((ulong)auStack_70[5] >> 0x28);
          puVar1[0x2a] = (char)((ulong)auStack_70[1] >> 0x30);
          puVar1[0x2b] = (char)((ulong)auStack_70[3] >> 0x30);
          puVar1[0x2c] = (char)((ulong)auStack_70[5] >> 0x30);
          puVar1[0x2d] = (char)((ulong)auStack_70[1] >> 0x38);
          puVar1[0x2e] = (char)((ulong)auStack_70[3] >> 0x38);
          puVar1[0x2f] = (char)((ulong)auStack_70[5] >> 0x38);
          uVar8 = uVar8 + 0x10;
        } while (uVar8 < uVar2);
      }
      uVar7 = uVar7 & 0xf;
      if (uVar7 != 0) {
        uVar8 = 0;
        lVar6 = lVar6 + uVar2 * 3;
        do {
          lVar3 = 0;
          do {
            *(undefined1 *)(lVar6 + lVar3) =
                 *(undefined1 *)(lVar5 + (uVar8 + uVar2) * 3 + (ulong)auStack_10[lVar3]);
            lVar3 = lVar3 + 1;
          } while (lVar3 != 3);
          lVar6 = lVar6 + 3;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_3);
  }
  return;
}



/* Entry: 10a1bb540; end: 10a1bb59b;  */

void FUN_10a1bb540(void)

{
  return;
}



/* Entry: 10a1bb59c; end: 10a1bb8b3;  */

void FUN_10a1bb59c(undefined **param_1)

{
  undefined ***pppuVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  code **ppcVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *extraout_x8;
  ulong uVar19;
  long *plVar20;
  undefined *puVar21;
  long *plVar22;
  undefined ***pppuVar23;
  long *plVar24;
  undefined **ppuVar25;
  undefined **ppuStack_288;
  undefined1 uStack_280;
  long lStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined **ppuStack_230;
  long *plStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  code *pcStack_210;
  code *pcStack_208;
  undefined **ppuStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long alStack_1e8 [23];
  long lStack_130;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pcStack_a0 = (code *)&UNK_10f642caa;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f642cb1;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_10f642cb1;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a004eb4(param_1,&pcStack_a0);
  ppuVar25 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppuVar25 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a1bb8a8;
    FUN_10a054dac(param_1,&UNK_10f642cb2,FUN_10a1ce950,1,param_1[3] + -8);
  }
  ppuVar25 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppuVar25 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a1bb8a8;
    FUN_10a054dac(param_1,&UNK_10f642cbe,FUN_10a1ceb30,1,param_1[3] + -8);
  }
  ppuVar25 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if ((*ppuVar25 == (undefined *)0x0) || (0x172 < *(int *)(*(long *)(*ppuVar25 + 0xa20) + 0x18))) {
    uVar13 = 0x100;
  }
  else {
    uVar13 = 1;
  }
  ppuVar25 = param_1;
  FUN_10a0051e8(param_1,100,uVar13,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppuVar25 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a1bb8a8;
    FUN_10a054dac(param_1,&UNK_10f642ccb,FUN_10a1cec98,5,param_1[3] + -8);
  }
  ppuVar25 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppuVar25 & 1) == 0) {
    pcStack_a0 = FUN_10a1cf2f4;
    ppuStack_98 = &PTR_FUN_110bad5a8;
    pcStack_90 = FUN_10a1bb8b4;
    if (param_1[2] == param_1[3]) goto LAB_10a1bb8a8;
    FUN_10a0544d8(param_1,&UNK_10f642cde,&pcStack_a0,3,param_1[3] + -8);
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
  puStack_a8 = &UNK_10f642cf1;
  pcStack_a0 = (code *)&UNK_10f642cf7;
  ppuStack_98 = &puStack_a8;
  pcStack_90 = (code *)0x1;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f642cb1;
  puStack_68 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  pcStack_b0 = FUN_10a1bc980;
  FUN_10a1bc928(param_1,&pcStack_a0,&pcStack_b0);
  puVar12 = (undefined8 *)0x19;
  ppcVar14 = (code **)0x1;
  puVar15 = (undefined8 *)0xffffffff;
  ppuVar25 = param_1;
  FUN_10a0051e8();
  if (((ulong)ppuVar25 & 1) == 0) {
    pcStack_a0 = FUN_10a1cf7c8;
    ppuStack_98 = &PTR_FUN_110bad628;
    pcStack_90 = FUN_10a1bca08;
    if (param_1[2] == param_1[3]) {
LAB_10a1bb8a8:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1bb8ac);
      (*pcVar7)();
    }
    puVar12 = (undefined8 *)&UNK_10f642cfe;
    ppcVar14 = &pcStack_a0;
    puVar15 = (undefined8 *)0x3;
    FUN_10a0544d8(param_1);
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)*(char *)((long)puVar12 + 0x17);
  if (lVar17 < 0) {
    lVar17 = puVar12[1];
  }
  if (lVar17 == 0) {
    FUN_10a0ee900(alStack_1e8,&UNK_10f642eaa,0x3c);
    FUN_10a0029c0(alStack_1e8);
    goto LAB_10a1bc5e8;
  }
  iVar3 = *(int *)(param_1[0x144] + 0x18);
  puVar18 = param_1[0x10e];
  plVar20 = *(long **)(puVar18 + 0x38);
  if (plVar20 == (long *)0x0) {
    plVar20 = *(long **)(puVar18 + 0x28);
    plVar24 = *(long **)(puVar18 + 0x30);
  }
  else {
    plVar24 = *(long **)(puVar18 + 0x40);
  }
  if (plVar24 != (long *)0x0) {
    plVar22 = plVar24 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *plVar22 = *plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar17 = *plVar22;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *plVar22 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  if ((((ulong)param_1[0x35] & 1) == 0) || (((ulong)param_1[0x3f] & 1) == 0)) goto LAB_10a1bc5e8;
  plVar22 = (long *)param_1[0x2c];
  plVar24 = (long *)param_1[0x36];
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_258 = 0;
  puStack_260 = (undefined8 *)0x0;
  ppuStack_270 = (undefined **)&UNK_1053a6a3c;
  ppuStack_268 = &PTR_DAT_110ae9180;
  ppuStack_230 = &PTR_PTR_1132fed50;
  plStack_228 = (long *)&UNK_1053a6a3c;
  ppuStack_220 = &PTR_DAT_110ae9180;
  func_0x000109d18e28(alStack_1e8,&UNK_10f642ee7,0x15,&ppuStack_230,param_1[0x20] + 0x1a8);
  func_0x0001092ba41c(&ppuStack_230);
  (*(code *)*ppuStack_268)(&ppuStack_268);
  if (iVar3 < 0x161) {
    plVar24 = alStack_1e8;
    plVar22 = alStack_1e8;
    plVar20 = alStack_1e8;
  }
  plVar8 = plVar20;
  (**(code **)(*plVar20 + 0x18))();
  plVar9 = plVar22;
  (**(code **)(*plVar22 + 0x18))();
  plVar10 = plVar24;
  (**(code **)(*plVar24 + 0x18))();
  ppuStack_288 = (undefined **)((ulong)ppuStack_288 & 0xffffffffffffff00);
  uStack_280 = 0;
  if (plVar8 == (long *)0x0) {
    uVar16 = 0;
    ppuStack_230 = (undefined **)((ulong)ppuStack_230 & 0xffffffffffffff00);
  }
  else {
    ppuStack_230 = (undefined **)plVar8[7];
    if (ppuStack_230 != (undefined **)0x0) {
      ppuVar25 = ppuStack_230 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar25,0x10);
        if (bVar5) {
          *ppuVar25 = *ppuVar25 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar16 = 1;
  }
  plStack_228 = (long *)CONCAT71(plStack_228._1_7_,uVar16);
  if (plVar9 == (long *)0x0) {
    uVar16 = 0;
    ppuStack_220 = (undefined **)((ulong)ppuStack_220 & 0xffffffffffffff00);
  }
  else {
    ppuStack_220 = (undefined **)plVar9[7];
    if (ppuStack_220 != (undefined **)0x0) {
      plVar8 = (long *)((long)ppuStack_220 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar16 = 1;
  }
  puStack_218 = (undefined *)CONCAT71(puStack_218._1_7_,uVar16);
  if (plVar10 == (long *)0x0) {
    uVar16 = 0;
    pcStack_210 = (code *)((ulong)pcStack_210 & 0xffffffffffffff00);
  }
  else {
    pcStack_210 = (code *)plVar10[7];
    if (pcStack_210 != (code *)0x0) {
      plVar8 = (long *)((long)pcStack_210 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar16 = 1;
  }
  bVar5 = false;
  lVar17 = 0;
  pcStack_208 = (code *)CONCAT71(pcStack_208._1_7_,uVar16);
  do {
    if (*(char *)((long)&plStack_228 + lVar17) == '\x01') {
      if (bVar5) {
        FUN_109d16cc4(&ppuStack_270,&ppuStack_288);
        ppuVar25 = ppuStack_288;
        if (ppuStack_288 != (undefined **)0x0) {
          ppuVar11 = ppuStack_288 + 1;
          do {
            puVar18 = *ppuVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar5) {
              *ppuVar11 = puVar18 + -4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (((ulong)puVar18 & 0x1fffffffc) == 4) {
            (**(code **)(*ppuStack_288 + 0x10))(ppuStack_288);
            do {
              puVar18 = *ppuVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar5) {
                *ppuVar11 = puVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar18 + -1 == (undefined *)0x0) {
              (**(code **)(*ppuVar25 + 8))(ppuVar25);
            }
          }
        }
      }
      else {
        ppuStack_270 = *(undefined ***)((long)&ppuStack_230 + lVar17);
        if (ppuStack_270 != (undefined **)0x0) {
          ppuVar25 = ppuStack_270 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar25,0x10);
            if (bVar5) {
              *ppuVar25 = *ppuVar25 + 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_280 = 1;
      }
      bVar5 = true;
      ppuStack_288 = ppuStack_270;
    }
    lVar17 = lVar17 + 0x10;
  } while (lVar17 != 0x30);
  pppuVar23 = &ppuStack_200;
  do {
    pppuVar1 = pppuVar23 + -1;
    pppuVar23 = pppuVar23 + -2;
    if ((*(char *)pppuVar1 == '\x01') && (ppuVar25 = *pppuVar23, ppuVar25 != (undefined **)0x0)) {
      ppuVar11 = ppuVar25 + 1;
      do {
        puVar18 = *ppuVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar6) {
          *ppuVar11 = puVar18 + -4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)puVar18 & 0x1fffffffc) == 4) {
        (**(code **)(*ppuVar25 + 0x10))(ppuVar25);
        do {
          puVar18 = *ppuVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar18 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar25 + 8))(ppuVar25);
        }
      }
    }
  } while (pppuVar23 != &ppuStack_230);
  ppuStack_230 = (undefined **)((ulong)ppuStack_230 & 0xffffffffffffff00);
  uVar19 = (ulong)plStack_228 >> 8;
  plStack_228 = (long *)((ulong)plStack_228 & 0xffffffffffffff00);
  if (bVar5) {
    ppuStack_230 = ppuStack_288;
    if (ppuStack_288 != (undefined **)0x0) {
      ppuVar25 = ppuStack_288 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar25,0x10);
        if (bVar6) {
          *ppuVar25 = *ppuVar25 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_228 = (long *)CONCAT71((int7)uVar19,1);
  }
  puStack_218 = (undefined *)puVar12[1];
  ppuStack_220 = (undefined **)*puVar12;
  pcStack_210 = (code *)puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  ppuVar25 = (undefined **)0x90;
  __Znwm();
  *ppuVar25 = FUN_10a1d7fe8;
  ppuVar25[1] = FUN_10a1d82d0;
  FUN_10a1c9ef4(ppuVar25 + 2);
  pcVar7 = pcStack_210;
  puVar18 = ppuVar25[7];
  if (puVar18 == (undefined *)0x0) {
    *(undefined1 *)(ppuVar25 + 10) = 0;
    *(undefined1 *)(ppuVar25 + 9) = 0;
    if (bVar5) goto LAB_10a1bbce8;
  }
  else {
    plVar8 = (long *)(puVar18 + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined1 *)(ppuVar25 + 10) = 0;
    *(undefined1 *)(ppuVar25 + 9) = 0;
    if (((ulong)plStack_228 & 1) != 0) {
LAB_10a1bbce8:
      ppuVar25[9] = (undefined *)ppuStack_230;
      ppuStack_230 = (undefined **)0x0;
      *(undefined1 *)(ppuVar25 + 10) = 1;
    }
  }
  ppuVar25[0xc] = puStack_218;
  ppuVar25[0xb] = (undefined *)ppuStack_220;
  puStack_218 = (undefined *)0x0;
  pcStack_210 = (code *)0x0;
  ppuStack_220 = (undefined **)0x0;
  ppuVar25[0xd] = pcVar7;
  ppuVar25[0xe] = (undefined *)plVar22;
  *(undefined1 *)(ppuVar25 + 0xf) = 0;
  *(undefined1 *)(ppuVar25 + 0x11) = 0;
  lStack_278 = 0;
  FUN_109d18960(ppuVar25 + 2,plVar22,&lStack_278);
  if (lStack_278 != 0) {
    func_0x0001092af97c(&lStack_278);
    goto LAB_10a1bc5e8;
  }
  if (((ulong)ppuVar25[0xf] & 1) == 0) {
    puStack_260 = (undefined8 *)ppuVar25[0xe];
    ppuStack_270 = (undefined **)0x0;
    ppuStack_268 = ppuVar25;
    (**(code **)*puStack_260)(puStack_260,&ppuStack_270);
    __ZNSt13exception_ptrD1Ev(&lStack_278);
LAB_10a1bbf6c:
    if ((long)pcStack_210 < 0) {
      __ZdlPv(ppuStack_220);
    }
    ppuVar25 = ppuStack_230;
    if (((char)plStack_228 == '\x01') && (ppuStack_230 != (undefined **)0x0)) {
      ppuVar11 = ppuStack_230 + 1;
      do {
        puVar21 = *ppuVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar6) {
          *ppuVar11 = puVar21 + -4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)puVar21 & 0x1fffffffc) == 4) {
        (**(code **)(*ppuStack_230 + 0x10))(ppuStack_230);
        do {
          puVar21 = *ppuVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar21 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar25 + 8))(ppuVar25);
        }
      }
    }
    ppuStack_220 = (undefined **)((ulong)ppuStack_220 & 0xffffffffffffff00);
    uVar19 = (ulong)puStack_218 >> 8;
    puStack_218 = (undefined *)((ulong)puStack_218 & 0xffffffffffffff00);
    if (bVar5) {
      ppuStack_220 = ppuStack_288;
      if (ppuStack_288 != (undefined **)0x0) {
        ppuVar25 = ppuStack_288 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar25,0x10);
          if (bVar6) {
            *ppuVar25 = *ppuVar25 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puStack_218 = (undefined *)CONCAT71((int7)uVar19,1);
    }
    pcStack_208 = ppcVar14[1];
    pcStack_210 = *ppcVar14;
    *ppcVar14 = (code *)0x0;
    ppcVar14[1] = (code *)0x0;
    plStack_1f8 = (long *)puVar15[1];
    ppuStack_200 = (undefined **)*puVar15;
    if (puVar15[1] != 0) {
      plVar22 = (long *)(puVar15[1] + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar6) {
          *plVar22 = *plVar22 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppuVar25 = (undefined **)0xb0;
    ppuStack_230 = param_1;
    plStack_228 = plVar20;
    plStack_1f0 = (long *)puVar18;
    __Znwm();
    *ppuVar25 = FUN_10a1d9584;
    ppuVar25[1] = FUN_10a1d9904;
    func_0x0001092ba17c(ppuVar25 + 2);
    plVar20 = plStack_1f0;
    plVar22 = (long *)ppuVar25[7];
    if (plVar22 == (long *)0x0) {
      ppuVar25[10] = (undefined *)plStack_228;
      ppuVar25[9] = (undefined *)ppuStack_230;
      *(undefined1 *)(ppuVar25 + 0xb) = 0;
      *(undefined1 *)(ppuVar25 + 0xc) = 0;
      if (bVar5) goto LAB_10a1bc0b8;
    }
    else {
      plVar8 = plVar22 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuVar25[10] = (undefined *)plStack_228;
      ppuVar25[9] = (undefined *)ppuStack_230;
      *(undefined1 *)(ppuVar25 + 0xb) = 0;
      *(undefined1 *)(ppuVar25 + 0xc) = 0;
      if (((ulong)puStack_218 & 1) != 0) {
LAB_10a1bc0b8:
        ppuVar25[0xb] = (undefined *)ppuStack_220;
        ppuStack_220 = (undefined **)0x0;
        *(undefined1 *)(ppuVar25 + 0xc) = 1;
      }
    }
    ppuVar25[0xe] = pcStack_208;
    ppuVar25[0xd] = pcStack_210;
    pcStack_210 = (code *)0x0;
    pcStack_208 = (code *)0x0;
    ppuVar25[0x10] = (undefined *)plStack_1f8;
    ppuVar25[0xf] = (undefined *)ppuStack_200;
    ppuStack_200 = (undefined **)0x0;
    plStack_1f8 = (long *)0x0;
    plStack_1f0 = (long *)0x0;
    ppuVar25[0x11] = (undefined *)plVar20;
    ppuVar25[0x12] = (undefined *)plVar24;
    *(undefined1 *)(ppuVar25 + 0x13) = 0;
    *(undefined1 *)(ppuVar25 + 0x15) = 0;
    ppuVar11 = ppuVar25 + 0x12;
    func_0x0001092ba064(ppuVar11,ppuVar25);
    if (((ulong)ppuVar11 & 1) == 0) {
      FUN_10a1c9f94(ppuVar25 + 0x14,ppuVar25 + 9);
      ppuVar25[0x12] = ppuVar25[0x14];
      plVar20 = (long *)(ppuVar25[0x14] + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = *plVar20 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uint)*(undefined8 *)(ppuVar25[0x12] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(ppuVar25 + 0x15) = 1;
        puVar18 = ppuVar25[0x12];
        plVar20 = (long *)(puVar18 + 0x10);
        puVar12 = (undefined8 *)ppuVar25[3];
        do {
          lVar17 = *plVar20;
          if (lVar17 == 0) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar6) {
              *plVar20 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              ppuStack_270 = (undefined **)0x0;
              ppuStack_268 = ppuVar25;
              puStack_260 = puVar12;
              func_0x000109d1b588(puVar18 + 0x18,&ppuStack_270);
              *(undefined8 *)(puVar18 + 0x10) = 0;
              goto joined_r0x00010a1bc3e0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar17 >> 1 & 1) == 0);
      }
      plVar20 = (long *)ppuVar25[0x12];
      if (((uint)*(undefined8 *)(ppuVar25[0x12] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar20 + 0x12);
        goto LAB_10a1bc5e8;
      }
      if (plVar20 != (long *)0x0) {
        puVar2 = (ulong *)(plVar20 + 1);
        do {
          uVar19 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar19 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar20 + 8))();
          }
        }
      }
      plVar20 = (long *)ppuVar25[0x14];
      if (plVar20 != (long *)0x0) {
        puVar2 = (ulong *)(plVar20 + 1);
        do {
          uVar19 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar19 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar20 + 8))();
          }
        }
      }
      func_0x0001092ba100(ppuVar25 + 2);
      plVar20 = (long *)ppuVar25[0x11];
      if (plVar20 != (long *)0x0) {
        puVar2 = (ulong *)(plVar20 + 1);
        do {
          uVar19 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar19 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar20 + 8))();
          }
        }
      }
      plVar20 = (long *)ppuVar25[0x10];
      if (plVar20 != (long *)0x0) {
        plVar24 = plVar20 + 1;
        do {
          lVar17 = *plVar24;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
      plVar20 = (long *)ppuVar25[0xe];
      if (plVar20 != (long *)0x0) {
        plVar24 = plVar20 + 1;
        do {
          lVar17 = *plVar24;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
      if ((*(char *)(ppuVar25 + 0xc) == '\x01') &&
         (plVar20 = (long *)ppuVar25[0xb], plVar20 != (long *)0x0)) {
        puVar2 = (ulong *)(plVar20 + 1);
        do {
          uVar19 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          do {
            uVar19 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar19 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar20 + 8))(plVar20);
          }
        }
      }
      func_0x000109d1a1d0(ppuVar25 + 2);
      __ZdlPv(ppuVar25);
    }
joined_r0x00010a1bc3e0:
    if (plVar22 != (long *)0x0) {
      puVar2 = (ulong *)(plVar22 + 1);
      do {
        uVar19 = *puVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar19 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar19 & 0x1fffffffc) == 4) {
        do {
          uVar19 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar19 - 1 == 0) {
          (**(code **)(*plVar22 + 8))(plVar22);
        }
      }
    }
    if (plStack_1f0 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_1f0 + 1);
      do {
        uVar19 = *puVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar19 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar19 & 0x1fffffffc) == 4) {
        do {
          uVar19 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar19 - 1 == 0) {
          (**(code **)(*plStack_1f0 + 8))();
        }
      }
    }
    plVar20 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      plVar24 = plStack_1f8 + 1;
      do {
        lVar17 = *plVar24;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *plVar24 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    pcVar7 = pcStack_208;
    if (pcStack_208 != (code *)0x0) {
      plVar20 = (long *)((long)pcStack_208 + 8);
      do {
        lVar17 = *plVar20;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*(long *)pcStack_208 + 0x10))(pcStack_208);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar7);
      }
    }
    ppuVar25 = ppuStack_220;
    if (((char)puStack_218 == '\x01') && (ppuStack_220 != (undefined **)0x0)) {
      ppuVar11 = ppuStack_220 + 1;
      do {
        puVar18 = *ppuVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar6) {
          *ppuVar11 = puVar18 + -4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)puVar18 & 0x1fffffffc) == 4) {
        (**(code **)(*ppuStack_220 + 0x10))(ppuStack_220);
        do {
          puVar18 = *ppuVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar18 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar25 + 8))(ppuVar25);
        }
      }
    }
    ppuVar25 = ppuStack_288;
    if ((bVar5) && (ppuStack_288 != (undefined **)0x0)) {
      ppuVar11 = ppuStack_288 + 1;
      do {
        puVar18 = *ppuVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar5) {
          *ppuVar11 = puVar18 + -4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)puVar18 & 0x1fffffffc) == 4) {
        (**(code **)(*ppuStack_288 + 0x10))(ppuStack_288);
        do {
          puVar18 = *ppuVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar5) {
            *ppuVar11 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar18 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar25 + 8))(ppuVar25);
        }
      }
    }
    func_0x000109d18f34(alStack_1e8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
      return;
    }
    ___stack_chk_fail();
    puVar21 = extraout_x8;
  }
  else {
    __ZNSt13exception_ptrD1Ev(&lStack_278);
    FUN_10a1c9e04(ppuVar25 + 0x10,ppuVar25 + 9);
    ppuVar25[0xe] = ppuVar25[0x10];
    plVar22 = (long *)(ppuVar25[0x10] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = *plVar22 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(ppuVar25[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(ppuVar25 + 0x11) = 1;
      puVar21 = ppuVar25[0xe];
      plVar22 = (long *)(puVar21 + 0x10);
      puVar12 = (undefined8 *)ppuVar25[3];
      do {
        lVar17 = *plVar22;
        if (lVar17 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *plVar22 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            ppuStack_270 = (undefined **)0x0;
            ppuStack_268 = ppuVar25;
            puStack_260 = puVar12;
            func_0x000109d1b588(puVar21 + 0x18,&ppuStack_270);
            *(undefined8 *)(puVar21 + 0x10) = 0;
            goto LAB_10a1bbf6c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar17 >> 1 & 1) == 0);
    }
    puVar21 = ppuVar25[0xe];
    if (((uint)*(undefined8 *)(ppuVar25[0xe] + 0x10) >> 5 & 1) == 0) {
      if ((puVar21[0xb0] & 1) == 0) goto LAB_10a1bc5e8;
      func_0x00010a1c9dc4(ppuVar25 + 2,puVar21 + 0x98);
      plVar22 = (long *)ppuVar25[0xe];
      if (plVar22 != (long *)0x0) {
        puVar2 = (ulong *)(plVar22 + 1);
        do {
          uVar19 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar19 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar22 + 8))();
          }
        }
      }
      plVar22 = (long *)ppuVar25[0x10];
      if (plVar22 != (long *)0x0) {
        puVar2 = (ulong *)(plVar22 + 1);
        do {
          uVar19 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar19 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar22 + 8))();
          }
        }
      }
      if (*(char *)((long)ppuVar25 + 0x6f) < '\0') {
        __ZdlPv(ppuVar25[0xb]);
      }
      if ((*(char *)(ppuVar25 + 10) == '\x01') &&
         (plVar22 = (long *)ppuVar25[9], plVar22 != (long *)0x0)) {
        puVar2 = (ulong *)(plVar22 + 1);
        do {
          uVar19 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar19 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          do {
            uVar19 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar19 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar22 + 8))(plVar22);
          }
        }
      }
      func_0x000109d1a1d0(ppuVar25 + 2);
      __ZdlPv(ppuVar25);
      goto LAB_10a1bbf6c;
    }
  }
  func_0x0001092af97c(puVar21 + 0x90);
LAB_10a1bc5e8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1bc5ec);
  (*pcVar7)();
}



/* Entry: 10a1bb8b4; end: 10a1bc927;  */

void FUN_10a1bb8b4(undefined **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined ***pppuVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined1 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *extraout_x8;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined ***pppuVar19;
  long *plVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **ppuStack_1c8;
  undefined1 uStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  long *plStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long *plStack_148;
  undefined **ppuStack_140;
  long *plStack_138;
  long *plStack_130;
  long alStack_128 [23];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar13 < 0) {
    lVar13 = param_2[1];
  }
  if (lVar13 == 0) {
    FUN_10a0ee900(alStack_128,&UNK_10f642eaa,0x3c);
    FUN_10a0029c0(alStack_128);
    goto LAB_10a1bc5e8;
  }
  iVar3 = *(int *)(param_1[0x144] + 0x18);
  puVar14 = param_1[0x10e];
  plVar17 = *(long **)(puVar14 + 0x38);
  if (plVar17 == (long *)0x0) {
    plVar17 = *(long **)(puVar14 + 0x28);
    plVar20 = *(long **)(puVar14 + 0x30);
  }
  else {
    plVar20 = *(long **)(puVar14 + 0x40);
  }
  if (plVar20 != (long *)0x0) {
    plVar18 = plVar20 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar13 = *plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  if ((((ulong)param_1[0x35] & 1) == 0) || (((ulong)param_1[0x3f] & 1) == 0)) goto LAB_10a1bc5e8;
  plVar18 = (long *)param_1[0x2c];
  plVar20 = (long *)param_1[0x36];
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  ppuStack_1b0 = (undefined **)&UNK_1053a6a3c;
  ppuStack_1a8 = &PTR_DAT_110ae9180;
  ppuStack_170 = &PTR_PTR_1132fed50;
  plStack_168 = (long *)&UNK_1053a6a3c;
  ppuStack_160 = &PTR_DAT_110ae9180;
  func_0x000109d18e28(alStack_128,&UNK_10f642ee7,0x15,&ppuStack_170,param_1[0x20] + 0x1a8);
  func_0x0001092ba41c(&ppuStack_170);
  (*(code *)*ppuStack_1a8)(&ppuStack_1a8);
  if (iVar3 < 0x161) {
    plVar20 = alStack_128;
    plVar18 = alStack_128;
    plVar17 = alStack_128;
  }
  plVar8 = plVar17;
  (**(code **)(*plVar17 + 0x18))();
  plVar9 = plVar18;
  (**(code **)(*plVar18 + 0x18))();
  plVar10 = plVar20;
  (**(code **)(*plVar20 + 0x18))();
  ppuStack_1c8 = (undefined **)((ulong)ppuStack_1c8 & 0xffffffffffffff00);
  uStack_1c0 = 0;
  if (plVar8 == (long *)0x0) {
    uVar12 = 0;
    ppuStack_170 = (undefined **)((ulong)ppuStack_170 & 0xffffffffffffff00);
  }
  else {
    ppuStack_170 = (undefined **)plVar8[7];
    if (ppuStack_170 != (undefined **)0x0) {
      ppuVar21 = ppuStack_170 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
        if (bVar5) {
          *ppuVar21 = *ppuVar21 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar12 = 1;
  }
  plStack_168 = (long *)CONCAT71(plStack_168._1_7_,uVar12);
  if (plVar9 == (long *)0x0) {
    uVar12 = 0;
    ppuStack_160 = (undefined **)((ulong)ppuStack_160 & 0xffffffffffffff00);
  }
  else {
    ppuStack_160 = (undefined **)plVar9[7];
    if (ppuStack_160 != (undefined **)0x0) {
      plVar8 = (long *)((long)ppuStack_160 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar12 = 1;
  }
  puStack_158 = (undefined *)CONCAT71(puStack_158._1_7_,uVar12);
  if (plVar10 == (long *)0x0) {
    uVar12 = 0;
    puStack_150 = (undefined *)((ulong)puStack_150 & 0xffffffffffffff00);
  }
  else {
    puStack_150 = (undefined *)plVar10[7];
    if (puStack_150 != (undefined *)0x0) {
      plVar8 = (long *)((long)puStack_150 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar12 = 1;
  }
  bVar5 = false;
  lVar13 = 0;
  plStack_148 = (long *)CONCAT71(plStack_148._1_7_,uVar12);
  do {
    if (*(char *)((long)&plStack_168 + lVar13) == '\x01') {
      if (bVar5) {
        FUN_109d16cc4(&ppuStack_1b0,&ppuStack_1c8);
        ppuVar21 = ppuStack_1c8;
        if (ppuStack_1c8 != (undefined **)0x0) {
          ppuVar11 = ppuStack_1c8 + 1;
          do {
            puVar14 = *ppuVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar5) {
              *ppuVar11 = puVar14 + -4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (((ulong)puVar14 & 0x1fffffffc) == 4) {
            (**(code **)(*ppuStack_1c8 + 0x10))(ppuStack_1c8);
            do {
              puVar14 = *ppuVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar5) {
                *ppuVar11 = puVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar14 + -1 == (undefined *)0x0) {
              (**(code **)(*ppuVar21 + 8))(ppuVar21);
            }
          }
        }
      }
      else {
        ppuStack_1b0 = *(undefined ***)((long)&ppuStack_170 + lVar13);
        if (ppuStack_1b0 != (undefined **)0x0) {
          ppuVar21 = ppuStack_1b0 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
            if (bVar5) {
              *ppuVar21 = *ppuVar21 + 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_1c0 = 1;
      }
      bVar5 = true;
      ppuStack_1c8 = ppuStack_1b0;
    }
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x30);
  pppuVar19 = &ppuStack_140;
  do {
    pppuVar1 = pppuVar19 + -1;
    pppuVar19 = pppuVar19 + -2;
    if ((*(char *)pppuVar1 == '\x01') && (ppuVar21 = *pppuVar19, ppuVar21 != (undefined **)0x0)) {
      ppuVar11 = ppuVar21 + 1;
      do {
        puVar14 = *ppuVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar6) {
          *ppuVar11 = puVar14 + -4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)puVar14 & 0x1fffffffc) == 4) {
        (**(code **)(*ppuVar21 + 0x10))(ppuVar21);
        do {
          puVar14 = *ppuVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar14 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar21 + 8))(ppuVar21);
        }
      }
    }
  } while (pppuVar19 != &ppuStack_170);
  ppuStack_170 = (undefined **)((ulong)ppuStack_170 & 0xffffffffffffff00);
  uVar16 = (ulong)plStack_168 >> 8;
  plStack_168 = (long *)((ulong)plStack_168 & 0xffffffffffffff00);
  if (bVar5) {
    ppuStack_170 = ppuStack_1c8;
    if (ppuStack_1c8 != (undefined **)0x0) {
      ppuVar21 = ppuStack_1c8 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
        if (bVar6) {
          *ppuVar21 = *ppuVar21 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_168 = (long *)CONCAT71((int7)uVar16,1);
  }
  puStack_158 = (undefined *)param_2[1];
  ppuStack_160 = (undefined **)*param_2;
  puStack_150 = (undefined *)param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  ppuVar21 = (undefined **)0x90;
  __Znwm();
  *ppuVar21 = FUN_10a1d7fe8;
  ppuVar21[1] = FUN_10a1d82d0;
  FUN_10a1c9ef4(ppuVar21 + 2);
  puVar14 = puStack_150;
  puVar22 = ppuVar21[7];
  if (puVar22 == (undefined *)0x0) {
    *(undefined1 *)(ppuVar21 + 10) = 0;
    *(undefined1 *)(ppuVar21 + 9) = 0;
    if (bVar5) goto LAB_10a1bbce8;
  }
  else {
    plVar8 = (long *)(puVar22 + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined1 *)(ppuVar21 + 10) = 0;
    *(undefined1 *)(ppuVar21 + 9) = 0;
    if (((ulong)plStack_168 & 1) != 0) {
LAB_10a1bbce8:
      ppuVar21[9] = (undefined *)ppuStack_170;
      ppuStack_170 = (undefined **)0x0;
      *(undefined1 *)(ppuVar21 + 10) = 1;
    }
  }
  ppuVar21[0xc] = puStack_158;
  ppuVar21[0xb] = (undefined *)ppuStack_160;
  puStack_158 = (undefined *)0x0;
  puStack_150 = (undefined *)0x0;
  ppuStack_160 = (undefined **)0x0;
  ppuVar21[0xd] = puVar14;
  ppuVar21[0xe] = (undefined *)plVar18;
  *(undefined1 *)(ppuVar21 + 0xf) = 0;
  *(undefined1 *)(ppuVar21 + 0x11) = 0;
  lStack_1b8 = 0;
  FUN_109d18960(ppuVar21 + 2,plVar18,&lStack_1b8);
  if (lStack_1b8 != 0) {
    func_0x0001092af97c(&lStack_1b8);
    goto LAB_10a1bc5e8;
  }
  if (((ulong)ppuVar21[0xf] & 1) == 0) {
    puStack_1a0 = (undefined8 *)ppuVar21[0xe];
    ppuStack_1b0 = (undefined **)0x0;
    ppuStack_1a8 = ppuVar21;
    (**(code **)*puStack_1a0)(puStack_1a0,&ppuStack_1b0);
    __ZNSt13exception_ptrD1Ev(&lStack_1b8);
LAB_10a1bbf6c:
    if ((long)puStack_150 < 0) {
      __ZdlPv(ppuStack_160);
    }
    ppuVar21 = ppuStack_170;
    if (((char)plStack_168 == '\x01') && (ppuStack_170 != (undefined **)0x0)) {
      ppuVar11 = ppuStack_170 + 1;
      do {
        puVar14 = *ppuVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar6) {
          *ppuVar11 = puVar14 + -4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)puVar14 & 0x1fffffffc) == 4) {
        (**(code **)(*ppuStack_170 + 0x10))(ppuStack_170);
        do {
          puVar14 = *ppuVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar14 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar21 + 8))(ppuVar21);
        }
      }
    }
    ppuStack_160 = (undefined **)((ulong)ppuStack_160 & 0xffffffffffffff00);
    uVar16 = (ulong)puStack_158 >> 8;
    puStack_158 = (undefined *)((ulong)puStack_158 & 0xffffffffffffff00);
    if (bVar5) {
      ppuStack_160 = ppuStack_1c8;
      if (ppuStack_1c8 != (undefined **)0x0) {
        ppuVar21 = ppuStack_1c8 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar6) {
            *ppuVar21 = *ppuVar21 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puStack_158 = (undefined *)CONCAT71((int7)uVar16,1);
    }
    plStack_148 = (long *)param_3[1];
    puStack_150 = (undefined *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
    plStack_138 = (long *)param_4[1];
    ppuStack_140 = (undefined **)*param_4;
    if (param_4[1] != 0) {
      plVar18 = (long *)(param_4[1] + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppuVar21 = (undefined **)0xb0;
    ppuStack_170 = param_1;
    plStack_168 = plVar17;
    plStack_130 = (long *)puVar22;
    __Znwm();
    *ppuVar21 = FUN_10a1d9584;
    ppuVar21[1] = FUN_10a1d9904;
    func_0x0001092ba17c(ppuVar21 + 2);
    plVar17 = plStack_130;
    plVar18 = (long *)ppuVar21[7];
    if (plVar18 == (long *)0x0) {
      ppuVar21[10] = (undefined *)plStack_168;
      ppuVar21[9] = (undefined *)ppuStack_170;
      *(undefined1 *)(ppuVar21 + 0xb) = 0;
      *(undefined1 *)(ppuVar21 + 0xc) = 0;
      if (bVar5) goto LAB_10a1bc0b8;
    }
    else {
      plVar8 = plVar18 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuVar21[10] = (undefined *)plStack_168;
      ppuVar21[9] = (undefined *)ppuStack_170;
      *(undefined1 *)(ppuVar21 + 0xb) = 0;
      *(undefined1 *)(ppuVar21 + 0xc) = 0;
      if (((ulong)puStack_158 & 1) != 0) {
LAB_10a1bc0b8:
        ppuVar21[0xb] = (undefined *)ppuStack_160;
        ppuStack_160 = (undefined **)0x0;
        *(undefined1 *)(ppuVar21 + 0xc) = 1;
      }
    }
    ppuVar21[0xe] = (undefined *)plStack_148;
    ppuVar21[0xd] = puStack_150;
    puStack_150 = (undefined *)0x0;
    plStack_148 = (long *)0x0;
    ppuVar21[0x10] = (undefined *)plStack_138;
    ppuVar21[0xf] = (undefined *)ppuStack_140;
    ppuStack_140 = (undefined **)0x0;
    plStack_138 = (long *)0x0;
    plStack_130 = (long *)0x0;
    ppuVar21[0x11] = (undefined *)plVar17;
    ppuVar21[0x12] = (undefined *)plVar20;
    *(undefined1 *)(ppuVar21 + 0x13) = 0;
    *(undefined1 *)(ppuVar21 + 0x15) = 0;
    ppuVar11 = ppuVar21 + 0x12;
    func_0x0001092ba064(ppuVar11,ppuVar21);
    if (((ulong)ppuVar11 & 1) == 0) {
      FUN_10a1c9f94(ppuVar21 + 0x14,ppuVar21 + 9);
      ppuVar21[0x12] = ppuVar21[0x14];
      plVar17 = (long *)(ppuVar21[0x14] + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = *plVar17 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uint)*(undefined8 *)(ppuVar21[0x12] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(ppuVar21 + 0x15) = 1;
        puVar14 = ppuVar21[0x12];
        plVar17 = (long *)(puVar14 + 0x10);
        puVar15 = (undefined8 *)ppuVar21[3];
        do {
          lVar13 = *plVar17;
          if (lVar13 == 0) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              ppuStack_1b0 = (undefined **)0x0;
              ppuStack_1a8 = ppuVar21;
              puStack_1a0 = puVar15;
              func_0x000109d1b588(puVar14 + 0x18,&ppuStack_1b0);
              *(undefined8 *)(puVar14 + 0x10) = 0;
              goto joined_r0x00010a1bc3e0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar13 >> 1 & 1) == 0);
      }
      plVar17 = (long *)ppuVar21[0x12];
      if (((uint)*(undefined8 *)(ppuVar21[0x12] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar17 + 0x12);
        goto LAB_10a1bc5e8;
      }
      if (plVar17 != (long *)0x0) {
        puVar2 = (ulong *)(plVar17 + 1);
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar16 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      plVar17 = (long *)ppuVar21[0x14];
      if (plVar17 != (long *)0x0) {
        puVar2 = (ulong *)(plVar17 + 1);
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar16 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      func_0x0001092ba100(ppuVar21 + 2);
      plVar17 = (long *)ppuVar21[0x11];
      if (plVar17 != (long *)0x0) {
        puVar2 = (ulong *)(plVar17 + 1);
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar16 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      plVar17 = (long *)ppuVar21[0x10];
      if (plVar17 != (long *)0x0) {
        plVar20 = plVar17 + 1;
        do {
          lVar13 = *plVar20;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *plVar20 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar17 = (long *)ppuVar21[0xe];
      if (plVar17 != (long *)0x0) {
        plVar20 = plVar17 + 1;
        do {
          lVar13 = *plVar20;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *plVar20 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      if ((*(char *)(ppuVar21 + 0xc) == '\x01') &&
         (plVar17 = (long *)ppuVar21[0xb], plVar17 != (long *)0x0)) {
        puVar2 = (ulong *)(plVar17 + 1);
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar16 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar17 + 8))(plVar17);
          }
        }
      }
      func_0x000109d1a1d0(ppuVar21 + 2);
      __ZdlPv(ppuVar21);
    }
joined_r0x00010a1bc3e0:
    if (plVar18 != (long *)0x0) {
      puVar2 = (ulong *)(plVar18 + 1);
      do {
        uVar16 = *puVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar16 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar18 + 8))(plVar18);
        }
      }
    }
    if (plStack_130 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_130 + 1);
      do {
        uVar16 = *puVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar16 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plStack_130 + 8))();
        }
      }
    }
    plVar17 = plStack_138;
    if (plStack_138 != (long *)0x0) {
      plVar20 = plStack_138 + 1;
      do {
        lVar13 = *plVar20;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    plVar17 = plStack_148;
    if (plStack_148 != (long *)0x0) {
      plVar20 = plStack_148 + 1;
      do {
        lVar13 = *plVar20;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_148 + 0x10))(plStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    ppuVar21 = ppuStack_160;
    if (((char)puStack_158 == '\x01') && (ppuStack_160 != (undefined **)0x0)) {
      ppuVar11 = ppuStack_160 + 1;
      do {
        puVar14 = *ppuVar11;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar6) {
          *ppuVar11 = puVar14 + -4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)puVar14 & 0x1fffffffc) == 4) {
        (**(code **)(*ppuStack_160 + 0x10))(ppuStack_160);
        do {
          puVar14 = *ppuVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar14 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar21 + 8))(ppuVar21);
        }
      }
    }
    ppuVar21 = ppuStack_1c8;
    if ((bVar5) && (ppuStack_1c8 != (undefined **)0x0)) {
      ppuVar11 = ppuStack_1c8 + 1;
      do {
        puVar14 = *ppuVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar5) {
          *ppuVar11 = puVar14 + -4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)puVar14 & 0x1fffffffc) == 4) {
        (**(code **)(*ppuStack_1c8 + 0x10))(ppuStack_1c8);
        do {
          puVar14 = *ppuVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar5) {
            *ppuVar11 = puVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar14 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar21 + 8))(ppuVar21);
        }
      }
    }
    func_0x000109d18f34(alStack_128);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    puVar14 = extraout_x8;
  }
  else {
    __ZNSt13exception_ptrD1Ev(&lStack_1b8);
    FUN_10a1c9e04(ppuVar21 + 0x10,ppuVar21 + 9);
    ppuVar21[0xe] = ppuVar21[0x10];
    plVar18 = (long *)(ppuVar21[0x10] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = *plVar18 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(ppuVar21[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(ppuVar21 + 0x11) = 1;
      puVar14 = ppuVar21[0xe];
      plVar18 = (long *)(puVar14 + 0x10);
      puVar15 = (undefined8 *)ppuVar21[3];
      do {
        lVar13 = *plVar18;
        if (lVar13 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            ppuStack_1b0 = (undefined **)0x0;
            ppuStack_1a8 = ppuVar21;
            puStack_1a0 = puVar15;
            func_0x000109d1b588(puVar14 + 0x18,&ppuStack_1b0);
            *(undefined8 *)(puVar14 + 0x10) = 0;
            goto LAB_10a1bbf6c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    puVar14 = ppuVar21[0xe];
    if (((uint)*(undefined8 *)(ppuVar21[0xe] + 0x10) >> 5 & 1) == 0) {
      if ((puVar14[0xb0] & 1) == 0) goto LAB_10a1bc5e8;
      func_0x00010a1c9dc4(ppuVar21 + 2,puVar14 + 0x98);
      plVar18 = (long *)ppuVar21[0xe];
      if (plVar18 != (long *)0x0) {
        puVar2 = (ulong *)(plVar18 + 1);
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar16 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar18 + 8))();
          }
        }
      }
      plVar18 = (long *)ppuVar21[0x10];
      if (plVar18 != (long *)0x0) {
        puVar2 = (ulong *)(plVar18 + 1);
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar16 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar18 + 8))();
          }
        }
      }
      if (*(char *)((long)ppuVar21 + 0x6f) < '\0') {
        __ZdlPv(ppuVar21[0xb]);
      }
      if ((*(char *)(ppuVar21 + 10) == '\x01') &&
         (plVar18 = (long *)ppuVar21[9], plVar18 != (long *)0x0)) {
        puVar2 = (ulong *)(plVar18 + 1);
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar16 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar18 + 8))(plVar18);
          }
        }
      }
      func_0x000109d1a1d0(ppuVar21 + 2);
      __ZdlPv(ppuVar21);
      goto LAB_10a1bbf6c;
    }
  }
  func_0x0001092af97c(puVar14 + 0x90);
LAB_10a1bc5e8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1bc5ec);
  (*pcVar7)();
}



/* Entry: 10a1bc928; end: 10a1bc97f;  */

ulong FUN_10a1bc928(ulong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a1cf5b4(param_1,*param_2,param_3);
  }
  return param_1;
}



/* Entry: 10a1bc980; end: 10a1bca07;  */

void FUN_10a1bc980(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lStack_38;
  long lStack_30;
  
  uVar3 = *(undefined8 *)(param_2 + 0x870);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  FUN_10a0f14fc(&lStack_38,puVar2,uVar1,0);
  FUN_10a12c178(param_1,uVar3,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1bca08; end: 10a1bcbdf;  */

void FUN_10a1bca08(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  
  lVar5 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar5 < 0) {
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      param_2 = (long *)*param_2;
      goto LAB_10a1bca44;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) != '\0') {
LAB_10a1bca44:
    FUN_10a0f14fc(&lStack_48,param_2,lVar5,0);
    FUN_10ab2751c(auStack_58,param_1,&lStack_48);
    func_0x00010a1bcda0(*param_3,auStack_58);
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
    return;
  }
  FUN_10a0ee900(&lStack_48,&UNK_10f642fec,0x39);
  FUN_10a0029c0(&lStack_48);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1bcaf0);
  (*pcVar4)();
}



/* Entry: 10a1bcbe0; end: 10a1bcc07;  */

void FUN_10a1bcbe0(long *param_1,code **param_2)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 *apuStack_70 [6];
  code *pcStack_40;
  code *pcStack_38;
  code *in_stack_ffffffffffffffd0;
  
  if ((param_1 == (long *)0x0) || ((char)param_1[8] != '\x02')) {
    if ((param_1 != (long *)0x0) && ((char)param_1[8] == '\x01')) {
      pcVar11 = (code *)*param_1;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&pcStack_40,*param_2,param_2[1]);
      }
      else {
        pcStack_38 = param_2[1];
        pcStack_40 = *param_2;
        in_stack_ffffffffffffffd0 = param_2[2];
      }
      (*pcVar11)(&pcStack_40,param_1);
      if ((long)in_stack_ffffffffffffffd0 < 0) {
        __ZdlPv(pcStack_40);
      }
      return;
    }
    return;
  }
  pcStack_38 = *(code **)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    ppcVar9 = (code **)0x0;
    ppuVar6 = (undefined8 **)0x0;
    if (ppcVar8 != (code **)0x0) {
      ppuStack_98 = (undefined8 **)param_1[1];
      lStack_a0 = *param_1;
      if (param_1[1] != 0) {
        plVar5 = (long *)(param_1[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_90,*param_2,param_2[1]);
      }
      else {
        pcStack_88 = param_2[1];
        ppuStack_90 = (undefined8 **)*param_2;
        pcStack_80 = param_2[2];
      }
      pcStack_78 = FUN_10a05aec4;
      param_2 = &pcStack_78;
      FUN_10a05af2c(apuStack_70,&PTR_FUN_110b9f388,&lStack_a0);
      ppcVar9 = &pcStack_78;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      ppuVar6 = apuStack_70;
      (*(code *)*apuStack_70[0])();
      if ((long)pcStack_80 < 0) {
        ppuVar6 = ppuStack_90;
        __ZdlPv();
      }
      ppuVar7 = ppuStack_98;
      if (ppuStack_98 != (undefined8 **)0x0) {
        ppuVar1 = ppuStack_98 + 1;
        do {
          puVar10 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = (undefined8 *)((long)puVar10 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar10 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_98)[2])(ppuStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar7;
        }
      }
    }
  }
  else {
    *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
    ppuVar6 = (undefined8 **)*param_1;
    ppcVar9 = param_2;
    FUN_10a05aca4(ppuVar6,param_2);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a004dac(&lStack_a0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a05aca4;
  ppcStack_c0 = param_2;
  ppuStack_b8 = ppuVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,ppuVar7 + 1,*ppuVar7);
  func_0x000109884820(&puStack_c8,&puStack_d0,*ppuVar7);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**ppuVar7 + 0x30))(&puStack_d0);
  FUN_10a05adc0(*ppuVar7,&puStack_d0,&puStack_c8,ppcVar9);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a1bcc08; end: 10a1bcd8f;  */

undefined8 * FUN_10a1bcc08(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  if ((*(char *)(param_1 + 1) == '\x01') && (plVar5 = (long *)*param_1, plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 10a1bcd90; end: 10a1bcdc7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0f1390) */
/* WARNING: Removing unreachable block (ram,0x00010a0f13a0) */
/* WARNING: Removing unreachable block (ram,0x00010a0f1134) */
/* WARNING: Removing unreachable block (ram,0x00010a0f1498) */
/* WARNING: Removing unreachable block (ram,0x00010a0f14a8) */

void FUN_10a1bcd90(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  int iVar8;
  code *pcVar9;
  ushort uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar5 = *(long *)*param_2;
  uVar6 = ((long *)*param_2)[1];
  FUN_10a00280c(param_1,(long)((float)uVar6 / 3.0) << 2,0);
  if (uVar6 < 3) {
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    uVar12 = 0;
    uVar14 = 0;
    do {
      uVar1 = uVar14 + 4;
      bVar7 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar7) {
        uVar2 = (ulong)bVar7;
      }
      uVar13 = uVar12;
      if (uVar2 < uVar1) break;
      pbVar3 = (byte *)(lVar5 + uVar12);
      uVar11 = (uint)*pbVar3;
      FUN_10a105774(*pbVar3,pbVar3[1],pbVar3[2],&UNK_10f636fe2,0x40);
      if (uVar2 < uVar14) goto LAB_10a0f14d8;
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar7) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar14) = (char)uVar11;
      bVar7 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar7) {
        uVar2 = (ulong)bVar7;
      }
      if (uVar2 <= uVar14) goto LAB_10a0f14d8;
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar7) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar14 + 1) = (char)(uVar11 >> 8);
      bVar7 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar7) {
        uVar2 = (ulong)bVar7;
      }
      if (uVar2 < uVar14 + 2) goto LAB_10a0f14d8;
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar7) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar14 + 2) = (char)(uVar11 >> 0x10);
      bVar7 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar7) {
        uVar2 = (ulong)bVar7;
      }
      if (uVar2 < uVar14 + 3) goto LAB_10a0f14d8;
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar7) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar14 + 3) = (char)(uVar11 >> 0x18);
      uVar13 = uVar12 + 3;
      uVar2 = uVar12 + 6;
      uVar14 = uVar1;
      uVar12 = uVar13;
    } while (uVar2 <= uVar6);
  }
  if (uVar6 <= uVar13) {
    return;
  }
  iVar8 = (int)uVar6 - (int)uVar13;
  if (iVar8 == 1) {
    uVar10 = (ushort)*(byte *)(lVar5 + uVar13);
    FUN_10a105774(*(byte *)(lVar5 + uVar13),0,0,&UNK_10f636fe2,0x40);
    bVar7 = *(byte *)((long)param_1 + 0x17);
    uVar6 = param_1[1];
    if (-1 < (char)bVar7) {
      uVar6 = (ulong)bVar7;
    }
    if (uVar14 <= uVar6) {
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar7) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar14) = (char)uVar10;
      bVar7 = *(byte *)((long)param_1 + 0x17);
      uVar6 = param_1[1];
      if (-1 < (char)bVar7) {
        uVar6 = (ulong)bVar7;
      }
      if (uVar14 < uVar6) {
        plVar4 = (long *)*param_1;
        if (-1 < (char)bVar7) {
          plVar4 = param_1;
        }
        *(char *)((long)plVar4 + uVar14 + 1) = (char)(uVar10 >> 8);
        bVar7 = *(byte *)((long)param_1 + 0x17);
        uVar6 = param_1[1];
        if (-1 < (char)bVar7) {
          uVar6 = (ulong)bVar7;
        }
        if ((uVar14 | 2) <= uVar6) {
          plVar4 = (long *)*param_1;
          if (-1 < (char)bVar7) {
            plVar4 = param_1;
          }
          *(undefined1 *)((long)plVar4 + (uVar14 | 2)) = 0x3d;
          bVar7 = *(byte *)((long)param_1 + 0x17);
          uVar6 = param_1[1];
          if (-1 < (char)bVar7) {
            uVar6 = (ulong)bVar7;
          }
          if ((uVar14 | 3) <= uVar6) {
            plVar4 = (long *)*param_1;
            if (-1 < (char)bVar7) {
              plVar4 = param_1;
            }
            *(undefined1 *)((long)plVar4 + (uVar14 | 3)) = 0x3d;
            return;
          }
        }
      }
    }
  }
  else {
    if (iVar8 != 2) {
      return;
    }
    uVar12 = (ulong)*(byte *)(lVar5 + uVar13);
    FUN_10a105774(uVar12,((byte *)(lVar5 + uVar13))[1],0,&UNK_10f636fe2,0x40);
    bVar7 = *(byte *)((long)param_1 + 0x17);
    uVar6 = param_1[1];
    if (-1 < (char)bVar7) {
      uVar6 = (ulong)bVar7;
    }
    if (uVar14 <= uVar6) {
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar7) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar14) = (char)uVar12;
      bVar7 = *(byte *)((long)param_1 + 0x17);
      uVar6 = param_1[1];
      if (-1 < (char)bVar7) {
        uVar6 = (ulong)bVar7;
      }
      if (uVar14 < uVar6) {
        plVar4 = (long *)*param_1;
        if (-1 < (char)bVar7) {
          plVar4 = param_1;
        }
        *(char *)((long)plVar4 + uVar14 + 1) = (char)(uVar12 >> 8);
        bVar7 = *(byte *)((long)param_1 + 0x17);
        uVar6 = param_1[1];
        if (-1 < (char)bVar7) {
          uVar6 = (ulong)bVar7;
        }
        if ((uVar14 | 2) <= uVar6) {
          plVar4 = (long *)*param_1;
          if (-1 < (char)bVar7) {
            plVar4 = param_1;
          }
          *(char *)((long)plVar4 + (uVar14 | 2)) = (char)(uVar12 >> 0x10);
          bVar7 = *(byte *)((long)param_1 + 0x17);
          uVar6 = param_1[1];
          if (-1 < (char)bVar7) {
            uVar6 = (ulong)bVar7;
          }
          if ((uVar14 | 3) <= uVar6) {
            plVar4 = (long *)*param_1;
            if (-1 < (char)bVar7) {
              plVar4 = param_1;
            }
            *(undefined1 *)((long)plVar4 + (uVar14 | 3)) = 0x3d;
            return;
          }
        }
      }
    }
  }
LAB_10a0f14d8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a0f14dc);
  (*pcVar9)();
}



/* Entry: 10a1bcdc8; end: 10a1bce0f;  */

long * FUN_10a1bcdc8(long *param_1)

{
  if (param_1[6] != 0) {
    __ZdlPv(param_1[4] + -8);
  }
  if (param_1[2] != 0) {
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10a1bce10; end: 10a1bd023;  */

void FUN_10a1bce10(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar3 = param_1;
  __ZNSt3__15mutex4lockEv();
  pcVar4 = *(char **)(param_1 + 0xe0);
  plVar1 = *(long **)(param_1 + 0xe8);
  cVar2 = *pcVar4;
  while (cVar2 < -1) {
    uVar6 = *(undefined8 *)pcVar4;
    uVar5 = CONCAT17(-(-2 < (char)((ulong)uVar6 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar6 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar6 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar6 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar6 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar6 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar6 >> 8)),-(-2 < (char)uVar6))))))));
    uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
    pcVar4 = pcVar4 + (uVar5 >> 3);
    plVar1 = (long *)((long)plVar1 + (uVar5 & 0xfffffffffffffff8));
    cVar2 = *pcVar4;
  }
  while (cVar2 != -1) {
    if (*(long *)(*plVar1 + 8) == param_1) {
      *(undefined8 *)(*plVar1 + 8) = 0;
    }
    pcVar4 = pcVar4 + 1;
    plVar1 = plVar1 + 1;
    cVar2 = *pcVar4;
    while (cVar2 < -1) {
      uVar6 = *(undefined8 *)pcVar4;
      uVar5 = CONCAT17(-(-2 < (char)((ulong)uVar6 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar6 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar6 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar6 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar6 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar6 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar6 >> 8)),-(-2 < (char)uVar6))))))));
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
      pcVar4 = pcVar4 + (uVar5 >> 3);
      plVar1 = (long *)((long)plVar1 + (uVar5 & 0xfffffffffffffff8));
      cVar2 = *pcVar4;
    }
  }
  pcVar4 = *(char **)(param_1 + 0x100);
  plVar1 = *(long **)(param_1 + 0x108);
  cVar2 = *pcVar4;
  while (cVar2 < -1) {
    uVar6 = *(undefined8 *)pcVar4;
    uVar5 = CONCAT17(-(-2 < (char)((ulong)uVar6 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar6 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar6 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar6 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar6 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar6 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar6 >> 8)),-(-2 < (char)uVar6))))))));
    uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
    pcVar4 = pcVar4 + (uVar5 >> 3);
    plVar1 = (long *)((long)plVar1 + (uVar5 & 0xfffffffffffffff8));
    cVar2 = *pcVar4;
  }
  while (cVar2 != -1) {
    if (*(long *)(*plVar1 + 8) == param_1) {
      *(undefined8 *)(*plVar1 + 8) = 0;
    }
    pcVar4 = pcVar4 + 1;
    plVar1 = plVar1 + 1;
    cVar2 = *pcVar4;
    while (cVar2 < -1) {
      uVar6 = *(undefined8 *)pcVar4;
      uVar5 = CONCAT17(-(-2 < (char)((ulong)uVar6 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar6 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar6 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar6 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar6 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar6 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar6 >> 8)),-(-2 < (char)uVar6))))))));
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
      pcVar4 = pcVar4 + (uVar5 >> 3);
      plVar1 = (long *)((long)plVar1 + (uVar5 & 0xfffffffffffffff8));
      cVar2 = *pcVar4;
    }
  }
  FUN_10a1bd024();
  if (*(long *)(lVar3 + 0x40) == param_1) {
    FUN_10a1bd024();
    *(undefined8 *)(lVar3 + 0x40) = 0;
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  if (*(long *)(param_1 + 0x110) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x100) + -8);
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    __ZdlPv(*(long *)(param_1 + 0xe0) + -8);
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    __ZdlPv(*(long *)(param_1 + 0xc0) + -8);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    __ZdlPv(*(long *)(param_1 + 0xa0) + -8);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x80) + -8);
  }
  FUN_10a1cbf48(param_1 + 0x60);
  FUN_10a1cbff0(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10a1bd024; end: 10a1bd203;  */

void FUN_10a1bd024(void)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  code *extraout_x9;
  undefined1 *extraout_x15;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340ded0;
  (*(code *)PTR___tlv_bootstrap_11340ded0)();
  ppuVar3 = &PTR___tlv_bootstrap_11340de88;
  if (*(char *)ppuVar1 == '\0') {
    puVar2 = extraout_x15;
    (*extraout_x9)();
    *puVar2 = 1;
    (*(code *)PTR___tlv_bootstrap_11340de88)();
    *ppuVar3 = &UNK_10e52b660;
    ppuVar3[1] = (undefined *)0x0;
    ppuVar3[2] = (undefined *)0x0;
    ppuVar3[3] = (undefined *)0x0;
    ppuVar3[4] = &UNK_10e52b660;
    ppuVar3[6] = (undefined *)0x0;
    ppuVar3[5] = (undefined *)0x0;
    ppuVar3[8] = (undefined *)0x0;
    ppuVar3[7] = (undefined *)0x0;
    __tlv_atexit(FUN_10a1bcdc8,ppuVar3,0x100000000);
  }
  (*(code *)PTR___tlv_bootstrap_11340de88)(&PTR___tlv_bootstrap_11340de88);
  return;
}



/* Entry: 10a1bd204; end: 10a1bd397;  */

void FUN_10a1bd204(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  byte bStack_50;
  long lStack_48;
  
  if (param_2 != 0) {
    *(long *)(param_2 + 8) = param_1;
    lVar3 = param_1;
    lStack_48 = param_2;
    FUN_10a1bd024();
    if (*(long *)(lVar3 + 0x40) == param_1) {
      FUN_10a1bd024();
      uStack_b0 = *param_3;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      if (param_3[9] != 0) {
        lVar4 = param_3[9] << 3;
        puVar2 = param_3;
        do {
          puVar2 = puVar2 + 1;
          FUN_10a1cc098(&uStack_a8,*puVar2);
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      FUN_10a1d0854(auStack_60,lVar3,&lStack_48,&uStack_b0);
      if ((bStack_50 & 1) == 0) {
        FUN_10a1bd398(lStack_58 + 8,param_3);
      }
    }
    else {
      __ZNSt3__15mutex4lockEv(param_1);
      lVar3 = param_1 + 0xe0;
      uVar1 = 0;
      FUN_10a1d0ce8();
      if ((uVar1 & 1) != 0) {
        *(long *)(*(long *)(param_1 + 0xe8) + lVar3 * 8) = lStack_48;
      }
      uStack_b0 = *param_3;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      if (param_3[9] != 0) {
        lVar3 = param_3[9] << 3;
        puVar2 = param_3;
        do {
          puVar2 = puVar2 + 1;
          FUN_10a1cc098(&uStack_a8,*puVar2);
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
      FUN_10a1d0854(auStack_60,param_1 + 0x80,&lStack_48,&uStack_b0);
      if ((bStack_50 & 1) == 0) {
        FUN_10a1bd398(lStack_58 + 8,param_3);
      }
      __ZNSt3__15mutex6unlockEv(param_1);
    }
  }
  return;
}



/* Entry: 10a1bd398; end: 10a1bd42b;  */

void FUN_10a1bd398(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  
  if (param_2[9] != 0) {
    plVar1 = param_2 + param_2[9];
    do {
      param_2 = param_2 + 1;
      lStack_38 = *param_2;
      uVar2 = *(ulong *)(param_1 + 0x48);
      if (uVar2 == 0) {
LAB_10a1bd404:
        FUN_10a0dad0c((long *)(param_1 + 8),&lStack_38);
      }
      else {
        lVar3 = uVar2 << 3;
        plVar4 = (long *)(param_1 + 8);
        do {
          if (*plVar4 == lStack_38) goto LAB_10a1bd410;
          plVar4 = plVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
        if (uVar2 < 8) goto LAB_10a1bd404;
      }
LAB_10a1bd410:
    } while (param_2 != plVar1);
  }
  return;
}



/* Entry: 10a1bd42c; end: 10a1bd5df;  */

void FUN_10a1bd42c(long param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  byte bStack_50;
  ulong uStack_48;
  
  if (param_2 != 0) {
    *(long *)(param_2 + 8) = param_1;
    lVar3 = param_1;
    uStack_48 = param_2;
    FUN_10a1bd024();
    if (*(long *)(lVar3 + 0x40) == param_1) {
      FUN_10a1bd024();
      uStack_b0 = *param_3;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      if (param_3[9] != 0) {
        lVar4 = param_3[9] << 3;
        puVar2 = param_3;
        do {
          puVar2 = puVar2 + 1;
          FUN_10a1cc098(&uStack_a8,*puVar2);
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      FUN_10a1d10bc(auStack_60,lVar3 + 0x20,&uStack_48,&uStack_b0);
      if ((bStack_50 & 1) == 0) {
        FUN_10a1bd398(lStack_58 + 8,param_3);
      }
      else {
        *(ushort *)(param_2 + 0x30) = *(ushort *)(param_2 + 0x30) | 0x100;
      }
    }
    else {
      __ZNSt3__15mutex4lockEv(param_1);
      lVar3 = param_1 + 0x100;
      uVar1 = param_2;
      FUN_10a1d1550();
      if ((uVar1 & 1) != 0) {
        *(ulong *)(*(long *)(param_1 + 0x108) + lVar3 * 8) = param_2;
      }
      uStack_b0 = *param_3;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      if (param_3[9] != 0) {
        lVar3 = param_3[9] << 3;
        puVar2 = param_3;
        do {
          puVar2 = puVar2 + 1;
          FUN_10a1cc098(&uStack_a8,*puVar2);
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
      FUN_10a1d10bc(auStack_60,param_1 + 0xa0,&uStack_48,&uStack_b0);
      if ((bStack_50 & 1) == 0) {
        FUN_10a1bd398(lStack_58 + 8,param_3);
      }
      else {
        *(ushort *)(param_2 + 0x30) = *(ushort *)(param_2 + 0x30) | 0x100;
      }
      __ZNSt3__15mutex6unlockEv(param_1);
    }
  }
  return;
}



/* Entry: 10a1bd5e0; end: 10a1bd647;  */

undefined8 FUN_10a1bd5e0(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *extraout_x8;
  undefined *puVar4;
  
  FUN_10a1bd024();
  if (*(long *)(param_1 + 0x40) == 0) {
    ppuVar2 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    ppuVar3 = &PTR___tlv_bootstrap_11340deb8;
    (*(code *)PTR___tlv_bootstrap_11340deb8)(*ppuVar2);
    puVar4 = *ppuVar3;
    if (extraout_x8 != (undefined *)0x0) {
      puVar4 = extraout_x8;
    }
    if (puVar4 == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(puVar4 + 0xbd0);
    }
  }
  else {
    FUN_10a1bd024();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
  }
  return uVar1;
}



/* Entry: 10a1bd648; end: 10a1bd7d7;  */

void FUN_10a1bd648(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  plVar5 = &lStack_40;
  puVar3 = param_1;
  lStack_40 = param_2;
  FUN_10a1bd024();
  if ((undefined8 *)puVar3[8] == param_1) {
    FUN_10a1bd024();
    Hint_Prefetch(*puVar3,0,2,0);
    func_0x00010a1d1924();
    FUN_10a1bd024(puVar3);
    if (extraout_x8 != 0) {
      uVar6 = *(ulong *)((long)plVar5 + 0x50);
      if (uVar6 != 0) {
        lVar7 = uVar6 << 3;
        plVar4 = (long *)((long)plVar5 + 0x10);
        do {
          if (param_3 == *plVar4) {
            return;
          }
          plVar4 = plVar4 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
        if (7 < uVar6) {
          return;
        }
      }
      lStack_38 = param_3;
      FUN_10a0dad0c((undefined1 *)((long)plVar5 + 0x10),&lStack_38);
      return;
    }
  }
  __ZNSt3__15mutex4lockEv(param_1);
  puVar3 = param_1 + 0x10;
  Hint_Prefetch(*puVar3,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + lStack_40;
  uVar6 = (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + lStack_40) * -0x622015f714c7d297) + lStack_40;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  func_0x00010a1d1924(puVar3,&lStack_40,
                      SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar6 * -0x622015f714c7d297);
  if (puVar3 != (undefined8 *)0x0) {
    uVar6 = *(ulong *)((long)plVar4 + 0x50);
    if (uVar6 != 0) {
      lVar7 = uVar6 << 3;
      plVar5 = (long *)((long)plVar4 + 0x10);
      do {
        if (param_3 == *plVar5) goto LAB_10a1bd794;
        plVar5 = plVar5 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
      lStack_38 = param_3;
      if (7 < uVar6) goto LAB_10a1bd794;
    }
    lStack_38 = param_3;
    FUN_10a0dad0c((undefined1 *)((long)plVar4 + 0x10),&lStack_38);
  }
LAB_10a1bd794:
  __ZNSt3__15mutex6unlockEv(param_1);
  return;
}



/* Entry: 10a1bd7d8; end: 10a1bd967;  */

void FUN_10a1bd7d8(long param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long extraout_x8;
  long lVar9;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_40;
  plVar7 = &lStack_40;
  lVar9 = param_1;
  lStack_40 = param_2;
  FUN_10a1bd024();
  if (*(long *)(lVar9 + 0x40) == param_1) {
    FUN_10a1bd024();
    puVar5 = (undefined8 *)(lVar9 + 0x20);
    Hint_Prefetch(*puVar5,0,2,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + param_2;
    uVar8 = (SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
            ((long)&PTR_LOOP_110c8acd8 + param_2) * -0x622015f714c7d297) + param_2;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar8;
    func_0x00010a1d19b8(puVar5,&lStack_40,
                        SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297
                       );
    FUN_10a1bd024(puVar5);
    if (extraout_x8 != 0) {
      uVar8 = *(ulong *)((long)plVar7 + 0x50);
      if (uVar8 != 0) {
        lVar9 = uVar8 << 3;
        plVar6 = (long *)((long)plVar7 + 0x10);
        do {
          if (param_3 == *plVar6) {
            return;
          }
          plVar6 = plVar6 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
        if (7 < uVar8) {
          return;
        }
      }
      lStack_38 = param_3;
      FUN_10a0dad0c((undefined1 *)((long)plVar7 + 0x10),&lStack_38);
      return;
    }
  }
  __ZNSt3__15mutex4lockEv(param_1);
  puVar5 = (undefined8 *)(param_1 + 0xa0);
  Hint_Prefetch(*puVar5,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + lStack_40;
  uVar8 = (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + lStack_40) * -0x622015f714c7d297) + lStack_40;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  func_0x00010a1d19b8(puVar5,&lStack_40,
                      SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297);
  if (puVar5 != (undefined8 *)0x0) {
    uVar8 = *(ulong *)((long)plVar6 + 0x50);
    if (uVar8 != 0) {
      lVar9 = uVar8 << 3;
      plVar7 = (long *)((long)plVar6 + 0x10);
      do {
        if (param_3 == *plVar7) goto LAB_10a1bd924;
        plVar7 = plVar7 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
      lStack_38 = param_3;
      if (7 < uVar8) goto LAB_10a1bd924;
    }
    lStack_38 = param_3;
    FUN_10a0dad0c((undefined1 *)((long)plVar6 + 0x10),&lStack_38);
  }
LAB_10a1bd924:
  __ZNSt3__15mutex6unlockEv(param_1);
  return;
}



/* Entry: 10a1bd968; end: 10a1bda63;  */

void FUN_10a1bd968(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  Hint_Prefetch(*param_1,0,2,0);
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  plVar5 = param_1;
  func_0x00010a1d1924(param_1,param_2,
                      SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297);
  if (plVar5 != (long *)0x0) {
    uVar1 = param_1[2];
    param_1[3] = param_1[3] + -1;
    lVar6 = *param_1;
    lVar9 = *plVar5;
    uVar7 = CONCAT17(-((char)((ulong)lVar9 >> 0x38) == -0x80),
                     CONCAT16(-((char)((ulong)lVar9 >> 0x30) == -0x80),
                              CONCAT15(-((char)((ulong)lVar9 >> 0x28) == -0x80),
                                       CONCAT14(-((char)((ulong)lVar9 >> 0x20) == -0x80),
                                                CONCAT13(-((char)((ulong)lVar9 >> 0x18) == -0x80),
                                                         CONCAT12(-((char)((ulong)lVar9 >> 0x10) ==
                                                                   -0x80),CONCAT11(-((char)((ulong)
                                                  lVar9 >> 8) == -0x80),-((char)lVar9 == -0x80))))))
                             ));
    uVar10 = *(undefined8 *)(lVar6 + ((long)plVar5 + (-8 - lVar6) & uVar1));
    lVar9 = CONCAT17(-((char)((ulong)uVar10 >> 0x38) == -0x80),
                     CONCAT16(-((char)((ulong)uVar10 >> 0x30) == -0x80),
                              CONCAT15(-((char)((ulong)uVar10 >> 0x28) == -0x80),
                                       CONCAT14(-((char)((ulong)uVar10 >> 0x20) == -0x80),
                                                CONCAT13(-((char)((ulong)uVar10 >> 0x18) == -0x80),
                                                         CONCAT12(-((char)((ulong)uVar10 >> 0x10) ==
                                                                   -0x80),CONCAT11(-((char)((ulong)
                                                  uVar10 >> 8) == -0x80),-((char)uVar10 == -0x80))))
                                               ))));
    if (lVar9 == 0 || uVar7 == 0) {
      uVar7 = 0;
      uVar8 = 0xfe;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      bVar4 = ((ulong)LZCOUNT(lVar9) >> 3) + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) <
              8;
      uVar7 = (ulong)bVar4;
      uVar8 = 0x80;
      if (!bVar4) {
        uVar8 = 0xfe;
      }
    }
    *(undefined1 *)plVar5 = uVar8;
    *(undefined1 *)(lVar6 + ((long)plVar5 + (-7 - lVar6) & uVar1) + (uVar1 & 7)) = uVar8;
    *(ulong *)(lVar6 + -8) = *(long *)(lVar6 + -8) + uVar7;
    return;
  }
  return;
}



/* Entry: 10a1bda64; end: 10a1bdd93;  */

void FUN_10a1bda64(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  uint6 uVar12;
  undefined8 uVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  byte bVar19;
  byte bVar20;
  ulong uStack_48;
  
  if (param_2 != 0) {
    lVar10 = param_1;
    uStack_48 = param_2;
    FUN_10a1bd024();
    if (*(long *)(lVar10 + 0x40) == param_1) {
      FUN_10a1bd024();
      FUN_10a1bdd94(lVar10 + 0x20,&uStack_48);
    }
    __ZNSt3__15mutex4lockEv(param_1);
    FUN_10a1bdd94(param_1 + 0xa0,&uStack_48);
    pcVar9 = *(char **)(param_1 + 0x40);
    lVar10 = *(long *)(param_1 + 0x48);
    cVar14 = *pcVar9;
    while (cVar14 < -1) {
      uVar13 = *(undefined8 *)pcVar9;
      uVar5 = CONCAT17(-(-2 < (char)((ulong)uVar13 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar13 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar13 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar13 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar13 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar13 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar13 >> 8)),-(-2 < (char)uVar13))))))));
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
      pcVar9 = pcVar9 + (uVar5 >> 3);
      lVar10 = lVar10 + (uVar5 >> 3) * 0x48;
      cVar14 = *pcVar9;
    }
    while (cVar14 != -1) {
      func_0x00010a1bde14(lVar10 + 8,&uStack_48);
      pcVar9 = pcVar9 + 1;
      lVar10 = lVar10 + 0x48;
      cVar14 = *pcVar9;
      while (cVar14 < -1) {
        uVar13 = *(undefined8 *)pcVar9;
        uVar5 = CONCAT17(-(-2 < (char)((ulong)uVar13 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar13 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar13 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar13 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar13 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar13 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar13 >> 8)),-(-2 < (char)uVar13))))))));
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
        pcVar9 = pcVar9 + (uVar5 >> 3);
        lVar10 = lVar10 + (uVar5 >> 3) * 0x48;
        cVar14 = *pcVar9;
      }
    }
    pcVar9 = *(char **)(param_1 + 0x60);
    puVar11 = *(undefined8 **)(param_1 + 0x68);
    cVar14 = *pcVar9;
    while (cVar14 < -1) {
      uVar13 = *(undefined8 *)pcVar9;
      uVar5 = CONCAT17(-(-2 < (char)((ulong)uVar13 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar13 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar13 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar13 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar13 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar13 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar13 >> 8)),-(-2 < (char)uVar13))))))));
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
      pcVar9 = pcVar9 + (uVar5 >> 3);
      puVar11 = puVar11 + (uVar5 >> 3) * 9;
      cVar14 = *pcVar9;
    }
    while (cVar14 != -1) {
      puVar4 = puVar11 + 1;
      func_0x00010a1bde14(puVar4,&uStack_48);
      if (puVar4 != (undefined8 *)0x0) {
        func_0x00010a1bde90(*puVar11,uStack_48);
      }
      pcVar9 = pcVar9 + 1;
      puVar11 = puVar11 + 9;
      cVar14 = *pcVar9;
      while (cVar14 < -1) {
        uVar13 = *(undefined8 *)pcVar9;
        uVar5 = CONCAT17(-(-2 < (char)((ulong)uVar13 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar13 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar13 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar13 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar13 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar13 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar13 >> 8)),-(-2 < (char)uVar13))))))));
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
        pcVar9 = pcVar9 + (uVar5 >> 3);
        puVar11 = puVar11 + (uVar5 >> 3) * 9;
        cVar14 = *pcVar9;
      }
    }
    lVar10 = 0;
    uVar6 = *(ulong *)(param_1 + 0x100);
    Hint_Prefetch(uVar6,0,2,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + uStack_48;
    uVar5 = (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
            ((long)&PTR_LOOP_110c8acd8 + uStack_48) * -0x622015f714c7d297) + uStack_48;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5;
    uVar7 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar5 * -0x622015f714c7d297;
    uVar5 = uVar7 >> 7 ^ uVar6 >> 0xc;
    bVar3 = (byte)uVar7;
    uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar5 = uVar5 & *(ulong *)(param_1 + 0x110);
      uVar13 = *(undefined8 *)(uVar6 + uVar5);
      cVar14 = (char)((ulong)uVar13 >> 8);
      cVar15 = (char)((ulong)uVar13 >> 0x10);
      cVar16 = (char)((ulong)uVar13 >> 0x18);
      cVar17 = (char)((ulong)uVar13 >> 0x20);
      cVar18 = (char)((ulong)uVar13 >> 0x28);
      bVar19 = (byte)((ulong)uVar13 >> 0x30);
      bVar20 = (byte)((ulong)uVar13 >> 0x38);
      for (uVar7 = CONCAT17(-(bVar20 == (bVar3 & 0x7f)),
                            CONCAT16(-(bVar19 == (bVar3 & 0x7f)),
                                     CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                              CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                       CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                                CONCAT12(-(cVar15 ==
                                                                          (char)(uVar12 >> 0x10)),
                                                                         CONCAT11(-(cVar14 ==
                                                                                   (char)(uVar12 >>
                                                                                         8)),
                                                                                  -((char)uVar13 ==
                                                                                   (char)uVar12)))))
                                             ))) & 0x8080808080808080; uVar7 != 0;
          uVar7 = uVar7 - 1 & uVar7) {
        uVar8 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar5 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) &
                *(ulong *)(param_1 + 0x110);
        if (*(ulong *)(*(long *)(param_1 + 0x108) + uVar8 * 8) == uStack_48) {
          if (uVar6 != 0) {
            FUN_10ae6cb48(param_1 + 0x100,uVar6 + uVar8,8);
          }
          goto LAB_10a1bdd04;
        }
      }
      if (CONCAT17(-(bVar20 == 0x80),
                   CONCAT16(-(bVar19 == 0x80),
                            CONCAT15(-(cVar18 == -0x80),
                                     CONCAT14(-(cVar17 == -0x80),
                                              CONCAT13(-(cVar16 == -0x80),
                                                       CONCAT12(-(cVar15 == -0x80),
                                                                CONCAT11(-(cVar14 == -0x80),
                                                                         -((char)uVar13 == -0x80))))
                                             )))) != 0) break;
      lVar10 = lVar10 + 8;
      uVar5 = lVar10 + uVar5;
    }
LAB_10a1bdd04:
    if (*(long *)(uStack_48 + 8) == param_1) {
      *(undefined8 *)(uStack_48 + 8) = 0;
    }
    if ((((*(byte *)(param_1 + 0x120) & 1) != 0) || ((*(byte *)(param_1 + 0x121) & 1) != 0)) ||
       ((*(byte *)(param_1 + 0x122) & 1) != 0)) {
      lVar10 = param_1 + 0xc0;
      uVar5 = uStack_48;
      FUN_10a1d1dcc();
      if ((uVar5 & 1) != 0) {
        *(ulong *)(*(long *)(param_1 + 200) + lVar10 * 8) = uStack_48;
      }
    }
    __ZNSt3__15mutex6unlockEv(param_1);
  }
  return;
}



/* Entry: 10a1bdd94; end: 10a1bdedb;  */

void FUN_10a1bdd94(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  Hint_Prefetch(*param_1,0,2,0);
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  plVar5 = param_1;
  func_0x00010a1d19b8(param_1,param_2,
                      SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297);
  if (plVar5 != (long *)0x0) {
    uVar1 = param_1[2];
    param_1[3] = param_1[3] + -1;
    lVar6 = *param_1;
    lVar9 = *plVar5;
    uVar7 = CONCAT17(-((char)((ulong)lVar9 >> 0x38) == -0x80),
                     CONCAT16(-((char)((ulong)lVar9 >> 0x30) == -0x80),
                              CONCAT15(-((char)((ulong)lVar9 >> 0x28) == -0x80),
                                       CONCAT14(-((char)((ulong)lVar9 >> 0x20) == -0x80),
                                                CONCAT13(-((char)((ulong)lVar9 >> 0x18) == -0x80),
                                                         CONCAT12(-((char)((ulong)lVar9 >> 0x10) ==
                                                                   -0x80),CONCAT11(-((char)((ulong)
                                                  lVar9 >> 8) == -0x80),-((char)lVar9 == -0x80))))))
                             ));
    uVar10 = *(undefined8 *)(lVar6 + ((long)plVar5 + (-8 - lVar6) & uVar1));
    lVar9 = CONCAT17(-((char)((ulong)uVar10 >> 0x38) == -0x80),
                     CONCAT16(-((char)((ulong)uVar10 >> 0x30) == -0x80),
                              CONCAT15(-((char)((ulong)uVar10 >> 0x28) == -0x80),
                                       CONCAT14(-((char)((ulong)uVar10 >> 0x20) == -0x80),
                                                CONCAT13(-((char)((ulong)uVar10 >> 0x18) == -0x80),
                                                         CONCAT12(-((char)((ulong)uVar10 >> 0x10) ==
                                                                   -0x80),CONCAT11(-((char)((ulong)
                                                  uVar10 >> 8) == -0x80),-((char)uVar10 == -0x80))))
                                               ))));
    if (lVar9 == 0 || uVar7 == 0) {
      uVar7 = 0;
      uVar8 = 0xfe;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      bVar4 = ((ulong)LZCOUNT(lVar9) >> 3) + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) <
              8;
      uVar7 = (ulong)bVar4;
      uVar8 = 0x80;
      if (!bVar4) {
        uVar8 = 0xfe;
      }
    }
    *(undefined1 *)plVar5 = uVar8;
    *(undefined1 *)(lVar6 + ((long)plVar5 + (-7 - lVar6) & uVar1) + (uVar1 & 7)) = uVar8;
    *(ulong *)(lVar6 + -8) = *(long *)(lVar6 + -8) + uVar7;
    return;
  }
  return;
}



/* Entry: 10a1bdedc; end: 10a1be1cb;  */

void FUN_10a1bdedc(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  uint6 uVar12;
  undefined8 uVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  byte bVar19;
  byte bVar20;
  ulong uStack_48;
  
  if (param_2 != 0) {
    uStack_48 = param_2;
    __ZNSt3__15mutex4lockEv();
    pcVar9 = *(char **)(param_1 + 0x40);
    lVar10 = *(long *)(param_1 + 0x48);
    cVar14 = *pcVar9;
    while (cVar14 < -1) {
      uVar13 = *(undefined8 *)pcVar9;
      uVar6 = CONCAT17(-(-2 < (char)((ulong)uVar13 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar13 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar13 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar13 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar13 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar13 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar13 >> 8)),-(-2 < (char)uVar13))))))));
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
      pcVar9 = pcVar9 + (uVar6 >> 3);
      lVar10 = lVar10 + (uVar6 >> 3) * 0x48;
      cVar14 = *pcVar9;
    }
    while (cVar14 != -1) {
      FUN_10a1be1cc(lVar10 + 0x28,&uStack_48);
      pcVar9 = pcVar9 + 1;
      lVar10 = lVar10 + 0x48;
      cVar14 = *pcVar9;
      while (cVar14 < -1) {
        uVar13 = *(undefined8 *)pcVar9;
        uVar6 = CONCAT17(-(-2 < (char)((ulong)uVar13 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar13 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar13 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar13 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar13 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar13 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar13 >> 8)),-(-2 < (char)uVar13))))))));
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
        pcVar9 = pcVar9 + (uVar6 >> 3);
        lVar10 = lVar10 + (uVar6 >> 3) * 0x48;
        cVar14 = *pcVar9;
      }
    }
    pcVar9 = *(char **)(param_1 + 0x60);
    puVar11 = *(undefined8 **)(param_1 + 0x68);
    cVar14 = *pcVar9;
    while (uVar6 = uStack_48, cVar14 < -1) {
      uVar13 = *(undefined8 *)pcVar9;
      uVar6 = CONCAT17(-(-2 < (char)((ulong)uVar13 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar13 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar13 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar13 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar13 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar13 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar13 >> 8)),-(-2 < (char)uVar13))))))));
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
      pcVar9 = pcVar9 + (uVar6 >> 3);
      puVar11 = puVar11 + (uVar6 >> 3) * 9;
      cVar14 = *pcVar9;
    }
    while (uStack_48 = uVar6, cVar14 != -1) {
      puVar5 = puVar11 + 5;
      FUN_10a1be1cc(puVar5,&uStack_48);
      if (puVar5 != (undefined8 *)0x0) {
        func_0x00010a1be248(*puVar11,uStack_48);
      }
      pcVar9 = pcVar9 + 1;
      puVar11 = puVar11 + 9;
      cVar14 = *pcVar9;
      while (uVar6 = uStack_48, cVar14 < -1) {
        uVar13 = *(undefined8 *)pcVar9;
        uVar6 = CONCAT17(-(-2 < (char)((ulong)uVar13 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar13 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar13 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar13 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar13 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar13 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar13 >> 8)),-(-2 < (char)uVar13))))))));
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
        pcVar9 = pcVar9 + (uVar6 >> 3);
        puVar11 = puVar11 + (uVar6 >> 3) * 9;
        cVar14 = *pcVar9;
      }
    }
    if ((((*(byte *)(param_1 + 0x120) & 1) != 0) || ((*(byte *)(param_1 + 0x121) & 1) != 0)) ||
       ((*(byte *)(param_1 + 0x122) & 1) != 0)) {
      lVar10 = param_1 + 0xc0;
      uVar7 = uVar6;
      FUN_10a1d1dcc();
      if ((uVar7 & 1) != 0) {
        *(ulong *)(*(long *)(param_1 + 200) + lVar10 * 8) = uVar6;
      }
      lVar10 = 0;
      uVar7 = *(ulong *)(param_1 + 0xc0);
      Hint_Prefetch(uVar7,0,2,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + uStack_48;
      uVar6 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)&PTR_LOOP_110c8acd8 + uStack_48) * -0x622015f714c7d297) + uStack_48;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      uVar6 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar6 * -0x622015f714c7d297;
      bVar4 = (byte)uVar6;
      uVar12 = CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4)))))
               & 0x7f7f7f7f7f7f;
      uVar6 = uVar6 >> 7 ^ uVar7 >> 0xc;
      while( true ) {
        uVar6 = uVar6 & *(ulong *)(param_1 + 0xd0);
        uVar13 = *(undefined8 *)(uVar7 + uVar6);
        cVar14 = (char)((ulong)uVar13 >> 8);
        cVar15 = (char)((ulong)uVar13 >> 0x10);
        cVar16 = (char)((ulong)uVar13 >> 0x18);
        cVar17 = (char)((ulong)uVar13 >> 0x20);
        cVar18 = (char)((ulong)uVar13 >> 0x28);
        bVar19 = (byte)((ulong)uVar13 >> 0x30);
        bVar20 = (byte)((ulong)uVar13 >> 0x38);
        uVar8 = CONCAT17(-(bVar20 == (bVar4 & 0x7f)),
                         CONCAT16(-(bVar19 == (bVar4 & 0x7f)),
                                  CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                           CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                    CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                             CONCAT12(-(cVar15 ==
                                                                       (char)(uVar12 >> 0x10)),
                                                                      CONCAT11(-(cVar14 ==
                                                                                (char)(uVar12 >> 8))
                                                                               ,-((char)uVar13 ==
                                                                                 (char)uVar12)))))))
                        ) & 0x8080808080808080;
        if (uVar8 != 0) {
          do {
            uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
            if (*(ulong *)(*(long *)(param_1 + 200) +
                          (uVar6 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                          *(ulong *)(param_1 + 0xd0)) * 8) == uStack_48) goto LAB_10a1be18c;
            uVar8 = uVar8 - 1 & uVar8;
          } while (uVar8 != 0);
        }
        if (CONCAT17(-(bVar20 == 0x80),
                     CONCAT16(-(bVar19 == 0x80),
                              CONCAT15(-(cVar18 == -0x80),
                                       CONCAT14(-(cVar17 == -0x80),
                                                CONCAT13(-(cVar16 == -0x80),
                                                         CONCAT12(-(cVar15 == -0x80),
                                                                  CONCAT11(-(cVar14 == -0x80),
                                                                           -((char)uVar13 == -0x80))
                                                                 )))))) != 0) break;
        lVar10 = lVar10 + 8;
        uVar6 = lVar10 + uVar6;
      }
      lVar10 = param_1 + 0xc0;
      FUN_10a1d1adc();
      *(ulong *)(*(long *)(param_1 + 200) + lVar10 * 8) = uStack_48;
    }
LAB_10a1be18c:
    __ZNSt3__15mutex6unlockEv(param_1);
  }
  return;
}



/* Entry: 10a1be1cc; end: 10a1be2af;  */

void FUN_10a1be1cc(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  
  Hint_Prefetch(*param_1,0,2,0);
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  puVar4 = param_1;
  FUN_10a1d3320(param_1,param_2,
                SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_10ae6cb48(param_1,puVar4,0x10);
  }
  return;
}



/* Entry: 10a1be2b0; end: 10a1bf07f;  */

void FUN_10a1be2b0(char **param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  char **ppcVar4;
  char cVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  char *pcVar15;
  undefined8 uVar16;
  char *pcStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  char **ppcStack_a8;
  char *pcStack_a0;
  char cStack_91;
  char *pcStack_90;
  long *plStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  ppcVar4 = param_1;
  FUN_10a1bd024();
  cStack_91 = (char **)ppcVar4[8] == param_1;
  if ((bool)cStack_91) {
    FUN_10a1bd024();
    if ((ppcVar4[3] != (char *)0x0) || (FUN_10a1bd024(), ppcVar4[7] != (char *)0x0)) {
      ppcVar4 = param_1;
      __ZNSt3__15mutex4lockEv();
      FUN_10a1bd024();
      pcVar10 = *ppcVar4;
      pcVar11 = ppcVar4[1];
      cVar5 = *pcVar10;
      while (cVar5 < -1) {
        uVar16 = *(undefined8 *)pcVar10;
        uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        pcVar10 = pcVar10 + (uVar7 >> 3);
        pcVar11 = pcVar11 + (uVar7 >> 3) * 0x58;
        cVar5 = *pcVar10;
      }
      while (cVar5 != -1) {
        ppcVar4 = param_1 + 0x1c;
        pcVar15 = pcVar11;
        FUN_10a1d0ce8();
        if (((ulong)pcVar15 & 1) != 0) {
          *(undefined8 *)(param_1[0x1d] + (long)ppcVar4 * 8) = *(undefined8 *)pcVar11;
        }
        ppcVar4 = &pcStack_90;
        FUN_10a1d0854(ppcVar4,param_1 + 0x10,pcVar11,pcVar11 + 8);
        if ((uStack_80 & 1) == 0) {
          ppcVar4 = (char **)(plStack_88 + 1);
          FUN_10a1bd398(ppcVar4,pcVar11 + 8);
        }
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 0x58;
        cVar5 = *pcVar10;
        while (cVar5 < -1) {
          uVar16 = *(undefined8 *)pcVar10;
          uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18))
                                                               ,CONCAT12(-(-2 < (char)((ulong)uVar16
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-2 < (char)((
                                                  ulong)uVar16 >> 8)),-(-2 < (char)uVar16))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
          pcVar10 = pcVar10 + (uVar7 >> 3);
          pcVar11 = pcVar11 + (uVar7 >> 3) * 0x58;
          cVar5 = *pcVar10;
        }
      }
      FUN_10a1bd024();
      if (ppcVar4[2] != (char *)0x0) {
        FUN_10ae6cbe8();
      }
      FUN_10a1bd024();
      pcVar11 = ppcVar4[4];
      puVar9 = (ulong *)ppcVar4[5];
      cVar5 = *pcVar11;
      while (cVar5 < -1) {
        uVar16 = *(undefined8 *)pcVar11;
        uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        pcVar11 = pcVar11 + (uVar7 >> 3);
        puVar9 = puVar9 + (uVar7 >> 3) * 0xb;
        cVar5 = *pcVar11;
      }
      while (cVar5 != -1) {
        uVar7 = *puVar9;
        ppcVar4 = param_1 + 0x20;
        FUN_10a1d1550();
        if ((uVar7 & 1) != 0) {
          *(ulong *)(param_1[0x21] + (long)ppcVar4 * 8) = *puVar9;
        }
        ppcVar4 = &pcStack_90;
        FUN_10a1d10bc(ppcVar4,param_1 + 0x14,puVar9,puVar9 + 1);
        if ((uStack_80 & 1) == 0) {
          ppcVar4 = (char **)(plStack_88 + 1);
          FUN_10a1bd398(ppcVar4,puVar9 + 1);
        }
        pcVar11 = pcVar11 + 1;
        puVar9 = puVar9 + 0xb;
        cVar5 = *pcVar11;
        while (cVar5 < -1) {
          uVar16 = *(undefined8 *)pcVar11;
          uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18))
                                                               ,CONCAT12(-(-2 < (char)((ulong)uVar16
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-2 < (char)((
                                                  ulong)uVar16 >> 8)),-(-2 < (char)uVar16))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
          pcVar11 = pcVar11 + (uVar7 >> 3);
          puVar9 = puVar9 + (uVar7 >> 3) * 0xb;
          cVar5 = *pcVar11;
        }
      }
      FUN_10a1bd024();
      if (ppcVar4[6] != (char *)0x0) {
        FUN_10ae6cbe8(ppcVar4 + 4,&UNK_110bad720,ppcVar4[6] < (char *)0x80);
      }
      ppcVar4 = param_1;
      __ZNSt3__15mutex6unlockEv();
      if (cStack_91 != '\x01') goto LAB_10a1be55c;
    }
    FUN_10a1bd024();
    ppcVar4[8] = (char *)0x0;
    bVar3 = true;
  }
  else {
LAB_10a1be55c:
    bVar3 = false;
  }
  ppcVar4 = param_1;
  __ZNSt3__15mutex4lockEv();
  if ((((param_1[0xf] == (char *)0x0) && (param_1[0xb] == (char *)0x0)) &&
      (param_1[0x13] == (char *)0x0)) && (param_1[0x17] == (char *)0x0)) {
    if (bVar3) {
      FUN_10a1bd024();
      ppcVar4[8] = (char *)param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
    return;
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  pcStack_a0 = &cStack_91;
  ppcStack_a8 = param_1;
  if (param_1[0x1a] != (char *)0x0) {
    FUN_10ae6cbe8(param_1 + 0x18,&UNK_110bad760,param_1[0x1a] < (char *)0x80);
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  pcStack_d0 = &UNK_10e52b660;
  plStack_c8 = (long *)0x0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  __ZNSt3__15mutex4lockEv(param_1);
  FUN_10a1cc10c(&pcStack_90,param_1 + 0xc);
  plStack_c8 = plStack_88;
  pcStack_d0 = pcStack_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  pcStack_90 = &UNK_10e52b660;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10a1cbf48(&pcStack_90);
  pcVar11 = param_1[0xe];
  if (pcVar11 != (char *)0x0) {
    pcVar10 = (char *)0x0;
    pcVar1 = param_1[0xc];
    pcVar15 = param_1[0xd];
    do {
      if (-1 < pcVar1[(long)pcVar10]) {
        FUN_10a1cbfa4(pcVar15);
      }
      pcVar10 = pcVar10 + 1;
      pcVar15 = pcVar15 + 0x48;
    } while (pcVar11 != pcVar10);
    FUN_10ae6cbe8(param_1 + 0xc,&UNK_110bad780,pcVar11 < (char *)0x80);
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  cVar5 = *pcStack_d0;
  pcVar11 = pcStack_d0;
  plVar12 = plStack_c8;
  while (cVar5 < -1) {
    uVar16 = *(undefined8 *)pcVar11;
    uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
    uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
    pcVar11 = pcVar11 + (uVar7 >> 3);
    plVar12 = plVar12 + (uVar7 >> 3) * 9;
    cVar5 = *pcVar11;
  }
  while (cVar5 != -1) {
    ppcVar4 = param_1 + 0x18;
    func_0x00010a1d1f84(ppcVar4,*plVar12);
    if (ppcVar4 == (char **)0x0) {
      pcVar10 = (char *)plVar12[1];
      puVar13 = (undefined8 *)plVar12[2];
      cVar5 = *pcVar10;
      while (cVar5 < -1) {
        uVar16 = *(undefined8 *)pcVar10;
        uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        pcVar10 = pcVar10 + (uVar7 >> 3);
        puVar13 = puVar13 + (uVar7 >> 3) * 2;
        cVar5 = *pcVar10;
      }
      while (cVar5 != -1) {
        ppcVar4 = param_1 + 0x18;
        func_0x00010a1d2048(ppcVar4,*puVar13);
        if ((ppcVar4 == (char **)0x0) && (*(char *)(puVar13 + 1) != '\0')) {
          uVar14 = 0;
          do {
            func_0x00010a1bf080(*plVar12,*puVar13);
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(byte *)(puVar13 + 1));
        }
        pcVar10 = pcVar10 + 1;
        puVar13 = puVar13 + 2;
        cVar5 = *pcVar10;
        while (cVar5 < -1) {
          uVar16 = *(undefined8 *)pcVar10;
          uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18))
                                                               ,CONCAT12(-(-2 < (char)((ulong)uVar16
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-2 < (char)((
                                                  ulong)uVar16 >> 8)),-(-2 < (char)uVar16))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
          pcVar10 = pcVar10 + (uVar7 >> 3);
          puVar13 = puVar13 + (uVar7 >> 3) * 2;
          cVar5 = *pcVar10;
        }
      }
      pcVar10 = (char *)plVar12[5];
      puVar13 = (undefined8 *)plVar12[6];
      cVar5 = *pcVar10;
      while (cVar5 < -1) {
        uVar16 = *(undefined8 *)pcVar10;
        uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        pcVar10 = pcVar10 + (uVar7 >> 3);
        puVar13 = puVar13 + (uVar7 >> 3) * 2;
        cVar5 = *pcVar10;
      }
      while (cVar5 != -1) {
        ppcVar4 = param_1 + 0x18;
        func_0x00010a1d210c(ppcVar4,*puVar13);
        if ((ppcVar4 == (char **)0x0) && (*(char *)(puVar13 + 1) != '\0')) {
          uVar14 = 0;
          do {
            func_0x00010a1bf190(*plVar12,*puVar13);
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(byte *)(puVar13 + 1));
        }
        pcVar10 = pcVar10 + 1;
        puVar13 = puVar13 + 2;
        cVar5 = *pcVar10;
        while (cVar5 < -1) {
          uVar16 = *(undefined8 *)pcVar10;
          uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18))
                                                               ,CONCAT12(-(-2 < (char)((ulong)uVar16
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-2 < (char)((
                                                  ulong)uVar16 >> 8)),-(-2 < (char)uVar16))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
          pcVar10 = pcVar10 + (uVar7 >> 3);
          puVar13 = puVar13 + (uVar7 >> 3) * 2;
          cVar5 = *pcVar10;
        }
      }
    }
    pcVar11 = pcVar11 + 1;
    plVar12 = plVar12 + 9;
    cVar5 = *pcVar11;
    while (cVar5 < -1) {
      uVar16 = *(undefined8 *)pcVar11;
      uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
      pcVar11 = pcVar11 + (uVar7 >> 3);
      plVar12 = plVar12 + (uVar7 >> 3) * 9;
      cVar5 = *pcVar11;
    }
  }
  FUN_10a1cbf48(&pcStack_d0);
  pcStack_d0 = &UNK_10e52b660;
  plStack_c8 = (long *)0x0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  __ZNSt3__15mutex4lockEv(param_1);
  func_0x00010a1cc12c(&pcStack_90,param_1 + 8);
  plStack_c8 = plStack_88;
  pcStack_d0 = pcStack_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  pcStack_90 = &UNK_10e52b660;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10a1cbff0(&pcStack_90);
  pcVar11 = param_1[10];
  if (pcVar11 != (char *)0x0) {
    pcVar10 = (char *)0x0;
    pcVar1 = param_1[8];
    pcVar15 = param_1[9];
    do {
      if (-1 < pcVar1[(long)pcVar10]) {
        FUN_10a1cc04c(pcVar15);
      }
      pcVar10 = pcVar10 + 1;
      pcVar15 = pcVar15 + 0x48;
    } while (pcVar11 != pcVar10);
    FUN_10ae6cbe8(param_1 + 8,&UNK_110bad7a0,pcVar11 < (char *)0x80);
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  cVar5 = *pcStack_d0;
  pcVar11 = pcStack_d0;
  plVar12 = plStack_c8;
  while (cVar5 < -1) {
    uVar16 = *(undefined8 *)pcVar11;
    uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
    uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
    pcVar11 = pcVar11 + (uVar7 >> 3);
    plVar12 = plVar12 + (uVar7 >> 3) * 9;
    cVar5 = *pcVar11;
  }
  while (cVar5 != -1) {
    ppcVar4 = param_1 + 0x18;
    func_0x00010a1d1f84(ppcVar4,*plVar12);
    if (ppcVar4 == (char **)0x0) {
      *(ushort *)(*plVar12 + 0x59) = *(ushort *)(*plVar12 + 0x59) & 0xfdff;
      pcVar10 = (char *)plVar12[1];
      puVar13 = (undefined8 *)plVar12[2];
      cVar5 = *pcVar10;
      while (cVar5 < -1) {
        uVar16 = *(undefined8 *)pcVar10;
        uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        pcVar10 = pcVar10 + (uVar7 >> 3);
        puVar13 = puVar13 + (uVar7 >> 3) * 2;
        cVar5 = *pcVar10;
      }
      while (cVar5 != -1) {
        ppcVar4 = param_1 + 0x18;
        func_0x00010a1d2048(ppcVar4,*puVar13);
        if ((ppcVar4 == (char **)0x0) && (*(char *)(puVar13 + 1) != '\0')) {
          uVar14 = 0;
          do {
            func_0x00010a1bf2a0(*plVar12,*puVar13);
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(byte *)(puVar13 + 1));
        }
        pcVar10 = pcVar10 + 1;
        puVar13 = puVar13 + 2;
        cVar5 = *pcVar10;
        while (cVar5 < -1) {
          uVar16 = *(undefined8 *)pcVar10;
          uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18))
                                                               ,CONCAT12(-(-2 < (char)((ulong)uVar16
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-2 < (char)((
                                                  ulong)uVar16 >> 8)),-(-2 < (char)uVar16))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
          pcVar10 = pcVar10 + (uVar7 >> 3);
          puVar13 = puVar13 + (uVar7 >> 3) * 2;
          cVar5 = *pcVar10;
        }
      }
      pcVar10 = (char *)plVar12[5];
      puVar13 = (undefined8 *)plVar12[6];
      cVar5 = *pcVar10;
      while (cVar5 < -1) {
        uVar16 = *(undefined8 *)pcVar10;
        uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        pcVar10 = pcVar10 + (uVar7 >> 3);
        puVar13 = puVar13 + (uVar7 >> 3) * 2;
        cVar5 = *pcVar10;
      }
      while (cVar5 != -1) {
        ppcVar4 = param_1 + 0x18;
        func_0x00010a1d210c(ppcVar4,*puVar13);
        if ((ppcVar4 == (char **)0x0) && (*(char *)(puVar13 + 1) != '\0')) {
          uVar14 = 0;
          do {
            func_0x00010a1bf34c(*plVar12,*puVar13);
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(byte *)(puVar13 + 1));
        }
        pcVar10 = pcVar10 + 1;
        puVar13 = puVar13 + 2;
        cVar5 = *pcVar10;
        while (cVar5 < -1) {
          uVar16 = *(undefined8 *)pcVar10;
          uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18))
                                                               ,CONCAT12(-(-2 < (char)((ulong)uVar16
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-2 < (char)((
                                                  ulong)uVar16 >> 8)),-(-2 < (char)uVar16))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
          pcVar10 = pcVar10 + (uVar7 >> 3);
          puVar13 = puVar13 + (uVar7 >> 3) * 2;
          cVar5 = *pcVar10;
        }
      }
    }
    pcVar11 = pcVar11 + 1;
    plVar12 = plVar12 + 9;
    cVar5 = *pcVar11;
    while (cVar5 < -1) {
      uVar16 = *(undefined8 *)pcVar11;
      uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
      pcVar11 = pcVar11 + (uVar7 >> 3);
      plVar12 = plVar12 + (uVar7 >> 3) * 9;
      cVar5 = *pcVar11;
    }
  }
  FUN_10a1cbff0(&pcStack_d0);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x121) = 1;
  pcVar11 = param_1[0x13];
  while (pcVar11 != (char *)0x0) {
    __ZNSt3__15mutex4lockEv(param_1);
    func_0x00010a1cc14c(&pcStack_90,param_1 + 0x10);
    uVar7 = uStack_80;
    plVar12 = plStack_88;
    pcVar11 = pcStack_90;
    if (param_1[0x12] != (char *)0x0) {
      FUN_10ae6cbe8(param_1 + 0x10,&UNK_110bad6e0,param_1[0x12] < (char *)0x80);
    }
    __ZNSt3__15mutex6unlockEv(param_1);
    cVar5 = *pcVar11;
    cVar2 = cVar5;
    pcVar10 = pcVar11;
    plVar6 = plVar12;
    while (cVar2 < -1) {
      uVar16 = *(undefined8 *)pcVar10;
      uVar8 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
      pcVar10 = pcVar10 + (uVar8 >> 3);
      plVar6 = plVar6 + (uVar8 >> 3) * 0xb;
      cVar2 = *pcVar10;
    }
    pcVar15 = pcVar11;
    if (cVar2 != -1) {
      do {
        *(ushort *)(*plVar6 + 0x59) = *(ushort *)(*plVar6 + 0x59) & 0xfeff;
        *(undefined8 *)(*plVar6 + 0x60) = 0;
        pcVar10 = pcVar10 + 1;
        cVar5 = *pcVar10;
        plVar6 = plVar6 + 0xb;
        while (cVar5 < -1) {
          uVar16 = *(undefined8 *)pcVar10;
          uVar8 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18))
                                                               ,CONCAT12(-(-2 < (char)((ulong)uVar16
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-2 < (char)((
                                                  ulong)uVar16 >> 8)),-(-2 < (char)uVar16))))))));
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
          pcVar10 = pcVar10 + (uVar8 >> 3);
          plVar6 = plVar6 + (uVar8 >> 3) * 0xb;
          cVar5 = *pcVar10;
        }
      } while (cVar5 != -1);
      cVar5 = *pcVar11;
    }
    while (cVar5 < -1) {
      uVar16 = *(undefined8 *)pcVar15;
      uVar8 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
      plVar12 = plVar12 + (uVar8 >> 3) * 0xb;
      cVar5 = pcVar15[uVar8 >> 3];
      pcVar15 = pcVar15 + (uVar8 >> 3);
    }
    while (cVar5 != -1) {
      ppcVar4 = param_1 + 0x18;
      func_0x00010a1d1f84(ppcVar4,*plVar12);
      if (ppcVar4 == (char **)0x0) {
        FUN_10a1bf3f8(*plVar12,param_1,plVar12 + 1);
      }
      pcVar15 = pcVar15 + 1;
      plVar12 = plVar12 + 0xb;
      cVar5 = *pcVar15;
      while (cVar5 < -1) {
        uVar16 = *(undefined8 *)pcVar15;
        uVar8 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        pcVar15 = pcVar15 + (uVar8 >> 3);
        plVar12 = plVar12 + (uVar8 >> 3) * 0xb;
        cVar5 = *pcVar15;
      }
    }
    if (uVar7 != 0) {
      __ZdlPv(pcVar11 + -8);
    }
    pcVar11 = param_1[0x13];
  }
  *(undefined1 *)((long)param_1 + 0x121) = 0;
  *(undefined1 *)((long)param_1 + 0x122) = 1;
  pcVar11 = param_1[0x17];
  while (pcVar11 != (char *)0x0) {
    __ZNSt3__15mutex4lockEv(param_1);
    func_0x00010a1cc16c(&pcStack_90,param_1 + 0x14);
    uVar7 = uStack_80;
    plVar12 = plStack_88;
    pcVar11 = pcStack_90;
    if (param_1[0x16] != (char *)0x0) {
      FUN_10ae6cbe8(param_1 + 0x14,&UNK_110bad720,param_1[0x16] < (char *)0x80);
    }
    __ZNSt3__15mutex6unlockEv(param_1);
    cVar5 = *pcVar11;
    cVar2 = cVar5;
    pcVar10 = pcVar11;
    plVar6 = plVar12;
    while (cVar2 < -1) {
      uVar16 = *(undefined8 *)pcVar10;
      uVar8 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
      pcVar10 = pcVar10 + (uVar8 >> 3);
      plVar6 = plVar6 + (uVar8 >> 3) * 0xb;
      cVar2 = *pcVar10;
    }
    pcVar15 = pcVar11;
    if (cVar2 != -1) {
      do {
        *(ushort *)(*plVar6 + 0x30) = *(ushort *)(*plVar6 + 0x30) & 0xfeff;
        *(undefined8 *)(*plVar6 + 0x38) = 0;
        pcVar10 = pcVar10 + 1;
        cVar5 = *pcVar10;
        plVar6 = plVar6 + 0xb;
        while (cVar5 < -1) {
          uVar16 = *(undefined8 *)pcVar10;
          uVar8 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18))
                                                               ,CONCAT12(-(-2 < (char)((ulong)uVar16
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-2 < (char)((
                                                  ulong)uVar16 >> 8)),-(-2 < (char)uVar16))))))));
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
          pcVar10 = pcVar10 + (uVar8 >> 3);
          plVar6 = plVar6 + (uVar8 >> 3) * 0xb;
          cVar5 = *pcVar10;
        }
      } while (cVar5 != -1);
      cVar5 = *pcVar11;
    }
    while (cVar5 < -1) {
      uVar16 = *(undefined8 *)pcVar15;
      uVar8 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
      plVar12 = plVar12 + (uVar8 >> 3) * 0xb;
      cVar5 = pcVar15[uVar8 >> 3];
      pcVar15 = pcVar15 + (uVar8 >> 3);
    }
    while (cVar5 != -1) {
      ppcVar4 = param_1 + 0x18;
      func_0x00010a1d2048(ppcVar4,*plVar12);
      if (ppcVar4 == (char **)0x0) {
        (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,plVar12 + 1);
      }
      pcVar15 = pcVar15 + 1;
      plVar12 = plVar12 + 0xb;
      cVar5 = *pcVar15;
      while (cVar5 < -1) {
        uVar16 = *(undefined8 *)pcVar15;
        uVar8 = CONCAT17(-(-2 < (char)((ulong)uVar16 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar16 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar16 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar16 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar16 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar16 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar16 >> 8)),-(-2 < (char)uVar16))))))));
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        pcVar15 = pcVar15 + (uVar8 >> 3);
        plVar12 = plVar12 + (uVar8 >> 3) * 0xb;
        cVar5 = *pcVar15;
      }
    }
    if (uVar7 != 0) {
      __ZdlPv(pcVar11 + -8);
    }
    pcVar11 = param_1[0x17];
  }
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  FUN_10a1bf5e0(&ppcStack_a8);
  return;
}



/* Entry: 10a1bf080; end: 10a1bf29f;  */

void FUN_10a1bf080(ulong param_1,ulong param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uStack_38;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340dea0;
  (*(code *)PTR___tlv_bootstrap_11340dea0)();
  if (*ppuVar4 == (undefined *)0x0) {
    ppuVar4 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    if (((*ppuVar4 == (undefined *)0x0) || (((*ppuVar4)[0xd72] & 1) == 0)) &&
       (uVar5 = param_1, FUN_10a1bf958(param_1,param_2), (uVar5 & 1) == 0)) {
      puVar8 = (undefined8 *)(param_1 + 0x18);
      Hint_Prefetch(*puVar8,0,2,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + param_2;
      uVar5 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)&PTR_LOOP_110c8acd8 + param_2) * -0x622015f714c7d297) + param_2;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar5;
      puVar7 = &uStack_38;
      puVar6 = puVar8;
      uStack_38 = param_2;
      func_0x00010a1d2e64(puVar8,puVar7,
                          SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          uVar5 * -0x622015f714c7d297);
      if ((puVar6 != (undefined8 *)0x0) &&
         ((cVar1 = (char)puVar7[1], cVar1 == '\0' ||
          (*(char *)(puVar7 + 1) = cVar1 + -1, cVar1 == '\x01')))) {
        FUN_10ae6cb48(puVar8,puVar6,0x10);
        uStack_38 = param_1;
        func_0x00010a1bd9e8(param_2 + 0x10,&uStack_38);
      }
    }
  }
  return;
}



/* Entry: 10a1bf2a0; end: 10a1bf3f7;  */

void FUN_10a1bf2a0(ulong param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = 0;
  func_0x00010a1bd170();
  if (((uVar3 & 1) == 0) && (uVar3 = param_1, FUN_10a1bf654(param_1,param_2), (uVar3 & 1) == 0)) {
    lVar4 = param_1 + 0x18;
    uVar3 = 0;
    func_0x00010a1d2694();
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + lVar4 * 0x10);
    if ((uVar3 & 1) == 0) {
      cVar2 = (char)plVar1[1];
      if (cVar2 != -1) {
        *(char *)(plVar1 + 1) = cVar2 + '\x01';
      }
    }
    else {
      *plVar1 = param_2;
      *(undefined1 *)(plVar1 + 1) = 1;
      lVar4 = param_2 + 0x10;
      uVar3 = 0;
      FUN_10a1d0ce8();
      if ((uVar3 & 1) != 0) {
        *(ulong *)(*(long *)(param_2 + 0x18) + lVar4 * 8) = param_1;
      }
    }
  }
  return;
}



/* Entry: 10a1bf3f8; end: 10a1bf5df;  */

void FUN_10a1bf3f8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lStack_a0 = *param_3;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  if (param_3[9] != 0) {
    lVar8 = param_3[9] << 3;
    do {
      param_3 = param_3 + 1;
      FUN_10a1cc098(&uStack_98,*param_3);
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  pcVar6 = *(char **)(param_1 + 0x18);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  cVar3 = *pcVar6;
  while (lStack_a0 = param_1, cVar3 < -1) {
    uVar9 = *(undefined8 *)pcVar6;
    uVar4 = CONCAT17(-(-2 < (char)((ulong)uVar9 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar9 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar9 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar9 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar9 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar9 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar9 >> 8)),-(-2 < (char)uVar9))))))));
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
    pcVar6 = pcVar6 + (uVar4 >> 3);
    puVar1 = puVar1 + (uVar4 >> 3) * 2;
    cVar3 = *pcVar6;
  }
  while (cVar3 != -1) {
    puVar7 = puVar1 + 2;
    FUN_10a1bd42c(param_2,*puVar1,&lStack_a0);
    pcVar6 = pcVar6 + 1;
    cVar3 = *pcVar6;
    while (puVar1 = puVar7, cVar3 < -1) {
      uVar9 = *(undefined8 *)pcVar6;
      uVar4 = CONCAT17(-(-2 < (char)((ulong)uVar9 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar9 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar9 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar9 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar9 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar9 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar9 >> 8)),-(-2 < (char)uVar9))))))));
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
      pcVar6 = pcVar6 + (uVar4 >> 3);
      puVar7 = puVar7 + (uVar4 >> 3) * 2;
      cVar3 = *pcVar6;
    }
  }
  pcVar6 = *(char **)(param_1 + 0x38);
  plVar2 = *(long **)(param_1 + 0x40);
  cVar3 = *pcVar6;
  while (cVar3 < -1) {
    uVar9 = *(undefined8 *)pcVar6;
    uVar4 = CONCAT17(-(-2 < (char)((ulong)uVar9 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar9 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar9 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar9 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar9 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar9 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar9 >> 8)),-(-2 < (char)uVar9))))))));
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
    pcVar6 = pcVar6 + (uVar4 >> 3);
    plVar2 = plVar2 + (uVar4 >> 3) * 2;
    cVar3 = *pcVar6;
  }
  while (cVar3 != -1) {
    FUN_10a1bd42c(param_2,*plVar2,&lStack_a0);
    plVar5 = plVar2 + 2;
    FUN_10a1c054c(*plVar2 + 0x90,&lStack_a0);
    pcVar6 = pcVar6 + 1;
    cVar3 = *pcVar6;
    while (plVar2 = plVar5, cVar3 < -1) {
      uVar9 = *(undefined8 *)pcVar6;
      uVar4 = CONCAT17(-(-2 < (char)((ulong)uVar9 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar9 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar9 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar9 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar9 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar9 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar9 >> 8)),-(-2 < (char)uVar9))))))));
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
      pcVar6 = pcVar6 + (uVar4 >> 3);
      plVar5 = plVar5 + (uVar4 >> 3) * 2;
      cVar3 = *pcVar6;
    }
  }
  return;
}



/* Entry: 10a1bf5e0; end: 10a1bf653;  */

long * FUN_10a1bf5e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined1 *)(lVar2 + 0x120) = 0;
  *(undefined1 *)(lVar2 + 0x121) = 0;
  *(undefined1 *)(lVar2 + 0x122) = 0;
  plVar1 = param_1;
  if (*(ulong *)(lVar2 + 0xd0) != 0) {
    plVar1 = (long *)(lVar2 + 0xc0);
    FUN_10ae6cbe8(plVar1,&UNK_110bad760,*(ulong *)(lVar2 + 0xd0) < 0x80);
  }
  if (*(char *)param_1[1] == '\x01') {
    FUN_10a1bd024();
    plVar1[8] = lVar2;
  }
  return param_1;
}



/* Entry: 10a1bf654; end: 10a1bf7bf;  */

undefined8 FUN_10a1bf654(long param_1,ulong param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  undefined *extraout_x8;
  char cVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_40;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340df48;
  lStack_40 = param_1;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  ppuVar3 = &PTR___tlv_bootstrap_11340deb8;
  (*(code *)PTR___tlv_bootstrap_11340deb8)(*ppuVar2);
  puVar8 = *ppuVar3;
  if (extraout_x8 != (undefined *)0x0) {
    puVar8 = extraout_x8;
  }
  if ((puVar8 == (undefined *)0x0) || (lVar9 = *(long *)(puVar8 + 0xbd0), lVar9 == 0)) {
    return 0;
  }
  if ((*(byte *)(lVar9 + 0x121) & 1) == 0) {
    bVar6 = *(byte *)(lVar9 + 0x122) ^ 1;
  }
  else {
    bVar6 = 0;
  }
  if ((bVar6 & 1) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  __ZNSt3__15mutex4lockEv(lVar9);
  *(long *)(lStack_40 + 8) = lVar9;
  *(long *)(param_2 + 8) = lVar9;
  lVar4 = lVar9 + 0xe0;
  uVar5 = 0;
  FUN_10a1d0ce8();
  if ((uVar5 & 1) != 0) {
    *(long *)(*(long *)(lVar9 + 0xe8) + lVar4 * 8) = lStack_40;
  }
  lVar4 = lVar9 + 0x100;
  uVar5 = param_2;
  FUN_10a1d1550();
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(lVar9 + 0x108) + lVar4 * 8) = param_2;
  }
  func_0x00010a1d226c(auStack_38,lVar9 + 0x40,&lStack_40);
  lVar4 = lStack_30 + 8;
  uVar5 = 0;
  func_0x00010a1d2694();
  puVar1 = (ulong *)(*(long *)(lStack_30 + 0x10) + lVar4 * 0x10);
  if ((uVar5 & 1) == 0) {
    cVar7 = (char)puVar1[1];
    if (cVar7 == -1) goto LAB_10a1bf778;
  }
  else {
    cVar7 = '\0';
    *puVar1 = param_2;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  *(char *)(puVar1 + 1) = cVar7 + '\x01';
LAB_10a1bf778:
  *(ushort *)(lStack_40 + 0x59) = *(ushort *)(lStack_40 + 0x59) | 0x200;
  __ZNSt3__15mutex6unlockEv(lVar9);
  return 1;
}



/* Entry: 10a1bf7c0; end: 10a1bf957;  */

undefined8 FUN_10a1bf7c0(long param_1,ulong param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  undefined *extraout_x8;
  char cVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340df48;
  lStack_40 = param_1;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  ppuVar3 = &PTR___tlv_bootstrap_11340deb8;
  (*(code *)PTR___tlv_bootstrap_11340deb8)(*ppuVar2);
  puVar8 = *ppuVar3;
  if (extraout_x8 != (undefined *)0x0) {
    puVar8 = extraout_x8;
  }
  if ((puVar8 == (undefined *)0x0) || (lVar9 = *(long *)(puVar8 + 0xbd0), lVar9 == 0)) {
    return 0;
  }
  if ((*(byte *)(lVar9 + 0x121) & 1) == 0) {
    bVar6 = *(byte *)(lVar9 + 0x122) ^ 1;
  }
  else {
    bVar6 = 0;
  }
  if ((bVar6 & 1) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  __ZNSt3__15mutex4lockEv(lVar9);
  *(long *)(lStack_40 + 8) = lVar9;
  lVar4 = lVar9 + 0xe0;
  uVar5 = 0;
  FUN_10a1d0ce8();
  if ((uVar5 & 1) != 0) {
    *(long *)(*(long *)(lVar9 + 0xe8) + lVar4 * 8) = lStack_40;
  }
  *(long *)(param_2 + 0x98) = lVar9;
  *(long *)(param_2 + 8) = lVar9;
  lStack_38 = param_2 + 0x90;
  lVar4 = lVar9 + 0xe0;
  uVar5 = 0;
  FUN_10a1d0ce8();
  if ((uVar5 & 1) != 0) {
    *(long *)(*(long *)(lVar9 + 0xe8) + lVar4 * 8) = lStack_38;
  }
  lVar4 = lVar9 + 0x100;
  uVar5 = param_2;
  FUN_10a1d1550();
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(lVar9 + 0x108) + lVar4 * 8) = param_2;
  }
  func_0x00010a1d226c(&lStack_38,lVar9 + 0x40,&lStack_40);
  lVar4 = lStack_30 + 0x28;
  uVar5 = 0;
  FUN_10a1d2a7c();
  puVar1 = (ulong *)(*(long *)(lStack_30 + 0x30) + lVar4 * 0x10);
  if ((uVar5 & 1) == 0) {
    cVar7 = (char)puVar1[1];
    if (cVar7 == -1) goto LAB_10a1bf90c;
  }
  else {
    cVar7 = '\0';
    *puVar1 = param_2;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  *(char *)(puVar1 + 1) = cVar7 + '\x01';
LAB_10a1bf90c:
  *(ushort *)(lStack_40 + 0x59) = *(ushort *)(lStack_40 + 0x59) | 0x200;
  __ZNSt3__15mutex6unlockEv(lVar9);
  return 1;
}



/* Entry: 10a1bf958; end: 10a1bfb77;  */

undefined8 FUN_10a1bf958(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  byte bVar11;
  undefined *extraout_x8;
  char cVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  long lStack_40;
  
  ppuVar3 = &PTR___tlv_bootstrap_11340df48;
  uStack_58 = param_2;
  lStack_50 = param_1;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  ppuVar4 = &PTR___tlv_bootstrap_11340deb8;
  (*(code *)PTR___tlv_bootstrap_11340deb8)(*ppuVar3);
  uVar10 = uStack_58;
  puVar13 = *ppuVar4;
  if (extraout_x8 != (undefined *)0x0) {
    puVar13 = extraout_x8;
  }
  if ((puVar13 == (undefined *)0x0) || (lVar14 = *(long *)(puVar13 + 0xbd0), lVar14 == 0)) {
    return 0;
  }
  if ((*(byte *)(lVar14 + 0x121) & 1) == 0) {
    bVar11 = *(byte *)(lVar14 + 0x122) ^ 1;
  }
  else {
    bVar11 = 0;
  }
  if ((bVar11 & 1) != 0) {
    return 0;
  }
  if (uStack_58 == 0) {
    return 0;
  }
  __ZNSt3__15mutex4lockEv(lVar14);
  *(long *)(lStack_50 + 8) = lVar14;
  *(long *)(uVar10 + 8) = lVar14;
  lVar5 = lVar14 + 0xe0;
  uVar7 = 0;
  FUN_10a1d0ce8();
  if ((uVar7 & 1) != 0) {
    *(long *)(*(long *)(lVar14 + 0xe8) + lVar5 * 8) = lStack_50;
  }
  lVar5 = lVar14 + 0x100;
  uVar7 = uVar10;
  FUN_10a1d1550();
  if ((uVar7 & 1) != 0) {
    *(ulong *)(*(long *)(lVar14 + 0x108) + lVar5 * 8) = uVar10;
  }
  lVar5 = lVar14 + 0x40;
  lVar8 = lStack_50;
  FUN_10a1bfb78();
  if (lVar5 != 0) {
    puVar15 = (undefined8 *)(lVar8 + 8);
    Hint_Prefetch(*puVar15,0,2,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + uVar10;
    uVar10 = (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
             ((long)&PTR_LOOP_110c8acd8 + uVar10) * -0x622015f714c7d297) + uVar10;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    puVar9 = &uStack_58;
    puVar6 = puVar15;
    func_0x00010a1d2e64(puVar15,puVar9,
                        SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                        uVar10 * -0x622015f714c7d297);
    if (puVar6 != (undefined8 *)0x0) {
      cVar12 = (char)puVar9[1];
      if ((cVar12 == '\0') || (*(char *)(puVar9 + 1) = cVar12 + -1, cVar12 == '\x01')) {
        FUN_10ae6cb48(puVar15,puVar6,0x10);
      }
      if ((*(long *)(lVar8 + 0x20) == 0) && (*(long *)(lVar8 + 0x40) == 0)) {
        *(ushort *)(lStack_50 + 0x59) = *(ushort *)(lStack_50 + 0x59) & 0xfdff;
      }
      goto LAB_10a1bfb38;
    }
  }
  FUN_10a1d2ef8(auStack_48,lVar14 + 0x60,&lStack_50);
  lVar5 = lStack_40 + 8;
  uVar10 = 0;
  func_0x00010a1d2694();
  puVar9 = (ulong *)(*(long *)(lStack_40 + 0x10) + lVar5 * 0x10);
  if ((uVar10 & 1) == 0) {
    cVar12 = (char)puVar9[1];
    if (cVar12 == -1) goto LAB_10a1bfb38;
  }
  else {
    cVar12 = '\0';
    *puVar9 = uStack_58;
    *(undefined1 *)(puVar9 + 1) = 0;
  }
  *(char *)(puVar9 + 1) = cVar12 + '\x01';
LAB_10a1bfb38:
  __ZNSt3__15mutex6unlockEv(lVar14);
  return 1;
}



/* Entry: 10a1bfb78; end: 10a1bfc47;  */

undefined1  [16] FUN_10a1bfb78(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
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
  undefined1 auVar18 [16];
  
  lVar6 = 0;
  uVar5 = *param_1;
  Hint_Prefetch(uVar5,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + param_2;
  uVar3 = (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + param_2) * -0x622015f714c7d297) + param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  uVar8 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar3 * -0x622015f714c7d297;
  uVar3 = uVar5 >> 0xc ^ uVar8 >> 7;
  bVar7 = (byte)uVar8 & 0x7f;
  while( true ) {
    uVar3 = uVar3 & param_1[2];
    uVar10 = *(undefined8 *)(uVar5 + uVar3);
    bVar11 = (byte)((ulong)uVar10 >> 8);
    bVar12 = (byte)((ulong)uVar10 >> 0x10);
    bVar13 = (byte)((ulong)uVar10 >> 0x18);
    bVar14 = (byte)((ulong)uVar10 >> 0x20);
    bVar15 = (byte)((ulong)uVar10 >> 0x28);
    bVar16 = (byte)((ulong)uVar10 >> 0x30);
    bVar17 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == bVar7),
                          CONCAT16(-(bVar16 == bVar7),
                                   CONCAT15(-(bVar15 == bVar7),
                                            CONCAT14(-(bVar14 == bVar7),
                                                     CONCAT13(-(bVar13 == bVar7),
                                                              CONCAT12(-(bVar12 == bVar7),
                                                                       CONCAT11(-(bVar11 == bVar7),
                                                                                -((byte)uVar10 ==
                                                                                 bVar7)))))))) &
                 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar3 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & param_1[2];
      plVar4 = (long *)(param_1[1] + uVar9 * 0x48);
      if (*plVar4 == param_2) {
        lVar6 = uVar5 + uVar9;
        goto LAB_10a1bfc40;
      }
    }
    plVar4 = (long *)CONCAT17(-(bVar17 == 0x80),
                              CONCAT16(-(bVar16 == 0x80),
                                       CONCAT15(-(bVar15 == 0x80),
                                                CONCAT14(-(bVar14 == 0x80),
                                                         CONCAT13(-(bVar13 == 0x80),
                                                                  CONCAT12(-(bVar12 == 0x80),
                                                                           CONCAT11(-(bVar11 == 0x80
                                                                                     ),-((byte)
                                                  uVar10 == 0x80))))))));
    if (plVar4 != (long *)0x0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  lVar6 = 0;
LAB_10a1bfc40:
  auVar18._8_8_ = plVar4;
  auVar18._0_8_ = lVar6;
  return auVar18;
}



/* Entry: 10a1bfc48; end: 10a1bfe93;  */

undefined8 FUN_10a1bfc48(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  byte bVar11;
  undefined *extraout_x8;
  char cVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  ppuVar3 = &PTR___tlv_bootstrap_11340df48;
  uStack_58 = param_2;
  lStack_50 = param_1;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  ppuVar4 = &PTR___tlv_bootstrap_11340deb8;
  (*(code *)PTR___tlv_bootstrap_11340deb8)(*ppuVar3);
  uVar10 = uStack_58;
  puVar13 = *ppuVar4;
  if (extraout_x8 != (undefined *)0x0) {
    puVar13 = extraout_x8;
  }
  if ((puVar13 == (undefined *)0x0) || (lVar14 = *(long *)(puVar13 + 0xbd0), lVar14 == 0)) {
    return 0;
  }
  if ((*(byte *)(lVar14 + 0x121) & 1) == 0) {
    bVar11 = *(byte *)(lVar14 + 0x122) ^ 1;
  }
  else {
    bVar11 = 0;
  }
  if ((bVar11 & 1) != 0) {
    return 0;
  }
  if (uStack_58 == 0) {
    return 0;
  }
  __ZNSt3__15mutex4lockEv(lVar14);
  *(long *)(lStack_50 + 8) = lVar14;
  lVar5 = lVar14 + 0xe0;
  uVar7 = 0;
  FUN_10a1d0ce8();
  if ((uVar7 & 1) != 0) {
    *(long *)(*(long *)(lVar14 + 0xe8) + lVar5 * 8) = lStack_50;
  }
  *(long *)(uVar10 + 0x98) = lVar14;
  *(long *)(uVar10 + 8) = lVar14;
  lStack_48 = uVar10 + 0x90;
  lVar5 = lVar14 + 0xe0;
  uVar7 = 0;
  FUN_10a1d0ce8();
  if ((uVar7 & 1) != 0) {
    *(long *)(*(long *)(lVar14 + 0xe8) + lVar5 * 8) = lStack_48;
  }
  lVar5 = lVar14 + 0x100;
  uVar7 = uVar10;
  FUN_10a1d1550();
  if ((uVar7 & 1) != 0) {
    *(ulong *)(*(long *)(lVar14 + 0x108) + lVar5 * 8) = uVar10;
  }
  lVar5 = lVar14 + 0x40;
  lVar8 = lStack_50;
  FUN_10a1bfb78();
  if (lVar5 != 0) {
    puVar15 = (undefined8 *)(lVar8 + 0x28);
    Hint_Prefetch(*puVar15,0,2,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + uVar10;
    uVar10 = (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
             ((long)&PTR_LOOP_110c8acd8 + uVar10) * -0x622015f714c7d297) + uVar10;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    puVar9 = &uStack_58;
    puVar6 = puVar15;
    FUN_10a1d3320(puVar15,puVar9,
                  SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297);
    if (puVar6 != (undefined8 *)0x0) {
      cVar12 = (char)puVar9[1];
      if ((cVar12 == '\0') || (*(char *)(puVar9 + 1) = cVar12 + -1, cVar12 == '\x01')) {
        FUN_10ae6cb48(puVar15,puVar6,0x10);
      }
      if ((*(long *)(lVar8 + 0x20) == 0) && (*(long *)(lVar8 + 0x40) == 0)) {
        *(ushort *)(lStack_50 + 0x59) = *(ushort *)(lStack_50 + 0x59) & 0xfdff;
      }
      goto LAB_10a1bfe50;
    }
  }
  FUN_10a1d2ef8(&lStack_48,lVar14 + 0x60,&lStack_50);
  lVar5 = lStack_40 + 0x28;
  uVar10 = 0;
  FUN_10a1d2a7c();
  puVar9 = (ulong *)(*(long *)(lStack_40 + 0x30) + lVar5 * 0x10);
  if ((uVar10 & 1) == 0) {
    cVar12 = (char)puVar9[1];
    if (cVar12 == -1) goto LAB_10a1bfe50;
  }
  else {
    cVar12 = '\0';
    *puVar9 = uStack_58;
    *(undefined1 *)(puVar9 + 1) = 0;
  }
  *(char *)(puVar9 + 1) = cVar12 + '\x01';
LAB_10a1bfe50:
  __ZNSt3__15mutex6unlockEv(lVar14);
  return 1;
}



/* Entry: 10a1bfe94; end: 10a1bff03;  */

undefined8 FUN_10a1bfe94(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *extraout_x8;
  undefined *puVar3;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)(&PTR___tlv_bootstrap_11340df48,param_1,param_2);
  ppuVar2 = &PTR___tlv_bootstrap_11340deb8;
  (*(code *)PTR___tlv_bootstrap_11340deb8)(*ppuVar1);
  puVar3 = *ppuVar2;
  if (extraout_x8 != (undefined *)0x0) {
    puVar3 = extraout_x8;
  }
  if (puVar3 != (undefined *)0x0) {
    if (*(long *)(puVar3 + 0xbd0) == 0) {
      return 0;
    }
    if ((*(byte *)(*(long *)(puVar3 + 0xbd0) + 0x122) & 1) == 0) {
      FUN_10a1bd42c();
      return 1;
    }
  }
  return 0;
}



/* Entry: 10a1bff04; end: 10a1bffb7;  */

void FUN_10a1bff04(void)

{
  FUN_10a1bffb8();
  return;
}



/* Entry: 10a1bffb8; end: 10a1c003b;  */

void FUN_10a1bffb8(long *param_1)

{
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined1 auStack_50 [48];
  
  puVar1 = auStack_50;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    *param_1 = 0;
    FUN_10a1cc18c(auStack_50,&UNK_10f643126);
    FUN_10a1be2b0(lVar2);
    FUN_10a1d33b4();
    FUN_10a1bd024(param_1[1]);
    *(undefined8 *)(puVar1 + 0x40) = extraout_x8;
  }
  return;
}



/* Entry: 10a1c003c; end: 10a1c00f3;  */

undefined8 * FUN_10a1c003c(undefined8 *param_1,undefined *param_2)

{
  undefined **ppuVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_2 != (undefined *)0x0) {
    ppuVar1 = &PTR___tlv_bootstrap_11340deb8;
    (*(code *)PTR___tlv_bootstrap_11340deb8)();
    *param_1 = *ppuVar1;
    *ppuVar1 = param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    puVar2 = *(undefined **)(param_2 + 0xbd0);
    if (puVar2 != (undefined *)0x0) {
      FUN_10a1bd024();
      puVar3 = ppuVar1[8];
      puStack_38 = puVar3;
      FUN_10a1bd024();
      ppuVar1[8] = puVar2;
      if (*(char *)(param_1 + 4) == '\x01') {
        FUN_10a1bff04(extraout_x8);
      }
      else {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      param_1[2] = puVar2;
      param_1[3] = puVar3;
      uStack_40 = 0;
      FUN_10a1bff04(&uStack_40);
    }
  }
  return param_1;
}



/* Entry: 10a1c00f4; end: 10a1c0533;  */

undefined8 * FUN_10a1c00f4(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint6 uVar17;
  undefined8 uVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  byte bVar24;
  byte bVar25;
  undefined8 *puStack_68;
  
  *param_1 = &PTR_FUN_110bacbc0;
  pcVar12 = (char *)param_1[3];
  plVar1 = (long *)param_1[4];
  cVar19 = *pcVar12;
  while (puVar7 = param_1, cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  pcVar12 = (char *)param_1[7];
  plVar1 = (long *)param_1[8];
  cVar19 = *pcVar12;
  while (cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  lVar13 = param_1[1];
  if (lVar13 != 0) {
    puStack_68 = param_1;
    FUN_10a1bd024();
    if (puVar7[8] == lVar13) {
      FUN_10a1bd024();
      func_0x00010a1bd968();
    }
    __ZNSt3__15mutex4lockEv(lVar13);
    func_0x00010a1bd968(lVar13 + 0x80,&puStack_68);
    lVar10 = lVar13 + 0x40;
    puVar7 = puStack_68;
    FUN_10a1bfb78(lVar10,puStack_68);
    if (lVar10 != 0) {
      FUN_10a1cc04c(puVar7);
      FUN_10ae6cb48(lVar13 + 0x40,lVar10,0x48);
    }
    lVar10 = 0;
    uVar15 = *(ulong *)(lVar13 + 0x60);
    Hint_Prefetch(uVar15,0,2,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = puStack_68 + 0x2219159b;
    uVar9 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
            (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar9;
    uVar11 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
    uVar9 = uVar11 >> 7 ^ uVar15 >> 0xc;
    bVar6 = (byte)uVar11;
    uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar9 = uVar9 & *(ulong *)(lVar13 + 0x70);
      uVar18 = *(undefined8 *)(uVar15 + uVar9);
      cVar19 = (char)((ulong)uVar18 >> 8);
      cVar20 = (char)((ulong)uVar18 >> 0x10);
      cVar21 = (char)((ulong)uVar18 >> 0x18);
      cVar22 = (char)((ulong)uVar18 >> 0x20);
      cVar23 = (char)((ulong)uVar18 >> 0x28);
      bVar24 = (byte)((ulong)uVar18 >> 0x30);
      bVar25 = (byte)((ulong)uVar18 >> 0x38);
      for (uVar11 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                               CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                        CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18))
                                                                 ,CONCAT12(-(cVar20 ==
                                                                            (char)(uVar17 >> 0x10)),
                                                                           CONCAT11(-(cVar19 ==
                                                                                     (char)(uVar17 
                                                  >> 8)),-((char)uVar18 == (char)uVar17)))))))) &
                    0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
        uVar16 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0x70);
        if (*(undefined8 **)(*(long *)(lVar13 + 0x68) + uVar16 * 0x48) == puStack_68) {
          if (uVar15 != 0) {
            FUN_10a1cbfa4();
            FUN_10ae6cb48((ulong *)(lVar13 + 0x60),uVar15 + uVar16,0x48);
          }
          goto LAB_10a1c03bc;
        }
      }
      if (CONCAT17(-(bVar25 == 0x80),
                   CONCAT16(-(bVar24 == 0x80),
                            CONCAT15(-(cVar23 == -0x80),
                                     CONCAT14(-(cVar22 == -0x80),
                                              CONCAT13(-(cVar21 == -0x80),
                                                       CONCAT12(-(cVar20 == -0x80),
                                                                CONCAT11(-(cVar19 == -0x80),
                                                                         -((char)uVar18 == -0x80))))
                                             )))) != 0) break;
      lVar10 = lVar10 + 8;
      uVar9 = lVar10 + uVar9;
    }
LAB_10a1c03bc:
    func_0x00010a1bd9e8(lVar13 + 0xe0,&puStack_68);
    if (puStack_68[1] == lVar13) {
      puStack_68[1] = 0;
    }
    if ((((*(byte *)(lVar13 + 0x120) & 1) != 0) || ((*(byte *)(lVar13 + 0x121) & 1) != 0)) ||
       ((*(byte *)(lVar13 + 0x122) & 1) != 0)) {
      lVar10 = 0;
      puVar8 = (ulong *)(lVar13 + 0xc0);
      uVar11 = *puVar8;
      Hint_Prefetch(uVar11,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puStack_68 + 0x2219159b;
      uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar9;
      uVar9 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
      bVar6 = (byte)uVar9;
      uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      uVar9 = uVar9 >> 7 ^ uVar11 >> 0xc;
      while( true ) {
        uVar9 = uVar9 & *(ulong *)(lVar13 + 0xd0);
        uVar18 = *(undefined8 *)(uVar11 + uVar9);
        cVar19 = (char)((ulong)uVar18 >> 8);
        cVar20 = (char)((ulong)uVar18 >> 0x10);
        cVar21 = (char)((ulong)uVar18 >> 0x18);
        cVar22 = (char)((ulong)uVar18 >> 0x20);
        cVar23 = (char)((ulong)uVar18 >> 0x28);
        bVar24 = (byte)((ulong)uVar18 >> 0x30);
        bVar25 = (byte)((ulong)uVar18 >> 0x38);
        uVar15 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                          CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                   CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                            CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                     CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18)),
                                                              CONCAT12(-(cVar20 ==
                                                                        (char)(uVar17 >> 0x10)),
                                                                       CONCAT11(-(cVar19 ==
                                                                                 (char)(uVar17 >> 8)
                                                                                 ),-((char)uVar18 ==
                                                                                    (char)uVar17))))
                                                    )))) & 0x8080808080808080;
        if (uVar15 != 0) {
          do {
            uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            if (*(undefined8 **)
                 (*(long *)(lVar13 + 200) +
                 (uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0xd0)) * 8) == puStack_68) goto LAB_10a1c04b8;
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        if (CONCAT17(-(bVar25 == 0x80),
                     CONCAT16(-(bVar24 == 0x80),
                              CONCAT15(-(cVar23 == -0x80),
                                       CONCAT14(-(cVar22 == -0x80),
                                                CONCAT13(-(cVar21 == -0x80),
                                                         CONCAT12(-(cVar20 == -0x80),
                                                                  CONCAT11(-(cVar19 == -0x80),
                                                                           -((char)uVar18 == -0x80))
                                                                 )))))) != 0) break;
        lVar10 = lVar10 + 8;
        uVar9 = lVar10 + uVar9;
      }
      FUN_10a1d1adc();
      *(undefined8 **)(*(long *)(lVar13 + 200) + (long)puVar8 * 8) = puStack_68;
    }
LAB_10a1c04b8:
    __ZNSt3__15mutex6unlockEv(lVar13);
  }
  if (param_1[9] != 0) {
    __ZdlPv(param_1[7] + -8);
  }
  if (param_1[5] != 0) {
    __ZdlPv(param_1[3] + -8);
  }
  return param_1;
}



/* Entry: 10a1c0534; end: 10a1c0537;  */

undefined8 * FUN_10a1c0534(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint6 uVar17;
  undefined8 uVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  byte bVar24;
  byte bVar25;
  undefined8 *puStack_68;
  
  *param_1 = &PTR_FUN_110bacbc0;
  pcVar12 = (char *)param_1[3];
  plVar1 = (long *)param_1[4];
  cVar19 = *pcVar12;
  while (puVar7 = param_1, cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  pcVar12 = (char *)param_1[7];
  plVar1 = (long *)param_1[8];
  cVar19 = *pcVar12;
  while (cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  lVar13 = param_1[1];
  if (lVar13 != 0) {
    puStack_68 = param_1;
    FUN_10a1bd024();
    if (puVar7[8] == lVar13) {
      FUN_10a1bd024();
      func_0x00010a1bd968();
    }
    __ZNSt3__15mutex4lockEv(lVar13);
    func_0x00010a1bd968(lVar13 + 0x80,&puStack_68);
    lVar10 = lVar13 + 0x40;
    puVar7 = puStack_68;
    FUN_10a1bfb78(lVar10,puStack_68);
    if (lVar10 != 0) {
      FUN_10a1cc04c(puVar7);
      FUN_10ae6cb48(lVar13 + 0x40,lVar10,0x48);
    }
    lVar10 = 0;
    uVar15 = *(ulong *)(lVar13 + 0x60);
    Hint_Prefetch(uVar15,0,2,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = puStack_68 + 0x2219159b;
    uVar9 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
            (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar9;
    uVar11 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
    uVar9 = uVar11 >> 7 ^ uVar15 >> 0xc;
    bVar6 = (byte)uVar11;
    uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar9 = uVar9 & *(ulong *)(lVar13 + 0x70);
      uVar18 = *(undefined8 *)(uVar15 + uVar9);
      cVar19 = (char)((ulong)uVar18 >> 8);
      cVar20 = (char)((ulong)uVar18 >> 0x10);
      cVar21 = (char)((ulong)uVar18 >> 0x18);
      cVar22 = (char)((ulong)uVar18 >> 0x20);
      cVar23 = (char)((ulong)uVar18 >> 0x28);
      bVar24 = (byte)((ulong)uVar18 >> 0x30);
      bVar25 = (byte)((ulong)uVar18 >> 0x38);
      for (uVar11 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                               CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                        CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18))
                                                                 ,CONCAT12(-(cVar20 ==
                                                                            (char)(uVar17 >> 0x10)),
                                                                           CONCAT11(-(cVar19 ==
                                                                                     (char)(uVar17 
                                                  >> 8)),-((char)uVar18 == (char)uVar17)))))))) &
                    0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
        uVar16 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0x70);
        if (*(undefined8 **)(*(long *)(lVar13 + 0x68) + uVar16 * 0x48) == puStack_68) {
          if (uVar15 != 0) {
            FUN_10a1cbfa4();
            FUN_10ae6cb48((ulong *)(lVar13 + 0x60),uVar15 + uVar16,0x48);
          }
          goto LAB_10a1c03bc;
        }
      }
      if (CONCAT17(-(bVar25 == 0x80),
                   CONCAT16(-(bVar24 == 0x80),
                            CONCAT15(-(cVar23 == -0x80),
                                     CONCAT14(-(cVar22 == -0x80),
                                              CONCAT13(-(cVar21 == -0x80),
                                                       CONCAT12(-(cVar20 == -0x80),
                                                                CONCAT11(-(cVar19 == -0x80),
                                                                         -((char)uVar18 == -0x80))))
                                             )))) != 0) break;
      lVar10 = lVar10 + 8;
      uVar9 = lVar10 + uVar9;
    }
LAB_10a1c03bc:
    func_0x00010a1bd9e8(lVar13 + 0xe0,&puStack_68);
    if (puStack_68[1] == lVar13) {
      puStack_68[1] = 0;
    }
    if ((((*(byte *)(lVar13 + 0x120) & 1) != 0) || ((*(byte *)(lVar13 + 0x121) & 1) != 0)) ||
       ((*(byte *)(lVar13 + 0x122) & 1) != 0)) {
      lVar10 = 0;
      puVar8 = (ulong *)(lVar13 + 0xc0);
      uVar11 = *puVar8;
      Hint_Prefetch(uVar11,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puStack_68 + 0x2219159b;
      uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar9;
      uVar9 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
      bVar6 = (byte)uVar9;
      uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      uVar9 = uVar9 >> 7 ^ uVar11 >> 0xc;
      while( true ) {
        uVar9 = uVar9 & *(ulong *)(lVar13 + 0xd0);
        uVar18 = *(undefined8 *)(uVar11 + uVar9);
        cVar19 = (char)((ulong)uVar18 >> 8);
        cVar20 = (char)((ulong)uVar18 >> 0x10);
        cVar21 = (char)((ulong)uVar18 >> 0x18);
        cVar22 = (char)((ulong)uVar18 >> 0x20);
        cVar23 = (char)((ulong)uVar18 >> 0x28);
        bVar24 = (byte)((ulong)uVar18 >> 0x30);
        bVar25 = (byte)((ulong)uVar18 >> 0x38);
        uVar15 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                          CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                   CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                            CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                     CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18)),
                                                              CONCAT12(-(cVar20 ==
                                                                        (char)(uVar17 >> 0x10)),
                                                                       CONCAT11(-(cVar19 ==
                                                                                 (char)(uVar17 >> 8)
                                                                                 ),-((char)uVar18 ==
                                                                                    (char)uVar17))))
                                                    )))) & 0x8080808080808080;
        if (uVar15 != 0) {
          do {
            uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            if (*(undefined8 **)
                 (*(long *)(lVar13 + 200) +
                 (uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0xd0)) * 8) == puStack_68) goto LAB_10a1c04b8;
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        if (CONCAT17(-(bVar25 == 0x80),
                     CONCAT16(-(bVar24 == 0x80),
                              CONCAT15(-(cVar23 == -0x80),
                                       CONCAT14(-(cVar22 == -0x80),
                                                CONCAT13(-(cVar21 == -0x80),
                                                         CONCAT12(-(cVar20 == -0x80),
                                                                  CONCAT11(-(cVar19 == -0x80),
                                                                           -((char)uVar18 == -0x80))
                                                                 )))))) != 0) break;
        lVar10 = lVar10 + 8;
        uVar9 = lVar10 + uVar9;
      }
      FUN_10a1d1adc();
      *(undefined8 **)(*(long *)(lVar13 + 200) + (long)puVar8 * 8) = puStack_68;
    }
LAB_10a1c04b8:
    __ZNSt3__15mutex6unlockEv(lVar13);
  }
  if (param_1[9] != 0) {
    __ZdlPv(param_1[7] + -8);
  }
  if (param_1[5] != 0) {
    __ZdlPv(param_1[3] + -8);
  }
  return param_1;
}



/* Entry: 10a1c0538; end: 10a1c054b;  */

void FUN_10a1c0538(void)

{
  FUN_10a1c00f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1c054c; end: 10a1c067f;  */

void FUN_10a1c054c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  byte in_stack_ffffffffffffffb0;
  long in_stack_ffffffffffffffd8;
  
  uVar9 = 0;
  func_0x00010a1bd170();
  if ((uVar9 & 1) == 0) {
    uVar4 = *(ushort *)(param_1 + 0x59);
    if ((uVar4 & 0x7f) == 0) {
      if (in_stack_ffffffffffffffd8 != 0) {
        lVar7 = *(long *)(in_stack_ffffffffffffffd8 + 0xbd0);
        if (((*(byte *)(lVar7 + 0x121) & 1) == 0) && ((*(byte *)(lVar7 + 0x122) & 1) == 0)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
          if (*(long *)(param_1 + 0x30) == 0) {
            uVar8 = (uint)*(ushort *)(param_1 + 0x59);
            if ((*(long *)(param_1 + 0x50) == 0) && ((*(ushort *)(param_1 + 0x59) >> 9 & 1) == 0)) {
              return;
            }
          }
          else {
            uVar8 = (uint)*(ushort *)(param_1 + 0x59);
          }
          if ((uVar8 >> 8 & 1) != 0) {
            return;
          }
          *(ushort *)(param_1 + 0x59) = (ushort)uVar8 | 0x100;
          if (param_1 != 0) {
            *(long *)(param_1 + 8) = lVar7;
            lVar16 = lVar7;
            func_0x00010a1bd024();
            if (*(long *)(lVar16 + 0x40) == lVar7) {
              func_0x00010a1bd024();
              puStack_b0 = (undefined1 *)*param_2;
              lStack_a0 = 0;
              pcStack_a8 = (code *)0x0;
              uStack_90 = 0;
              uStack_98 = 0;
              uStack_80 = 0;
              uStack_88 = 0;
              uStack_70 = 0;
              uStack_78 = 0;
              uStack_68 = 0;
              if (param_2[9] != 0) {
                lVar7 = param_2[9] << 3;
                plVar14 = param_2;
                do {
                  plVar14 = plVar14 + 1;
                  FUN_10a1cc098(&pcStack_a8,*plVar14);
                  lVar7 = lVar7 + -8;
                } while (lVar7 != 0);
              }
              FUN_10a1d0854(&uStack_60,lVar16,&stack0xffffffffffffffb8,&puStack_b0);
              if ((in_stack_ffffffffffffffb0 & 1) == 0) {
                FUN_10a1bd398(lStack_58 + 8,param_2);
              }
            }
            else {
              __ZNSt3__15mutex4lockEv(lVar7);
              lVar16 = lVar7 + 0xe0;
              uVar9 = 0;
              FUN_10a1d0ce8();
              if ((uVar9 & 1) != 0) {
                *(long *)(*(long *)(lVar7 + 0xe8) + lVar16 * 8) = param_1;
              }
              puStack_b0 = (undefined1 *)*param_2;
              lStack_a0 = 0;
              pcStack_a8 = (code *)0x0;
              uStack_90 = 0;
              uStack_98 = 0;
              uStack_80 = 0;
              uStack_88 = 0;
              uStack_70 = 0;
              uStack_78 = 0;
              uStack_68 = 0;
              if (param_2[9] != 0) {
                lVar16 = param_2[9] << 3;
                plVar14 = param_2;
                do {
                  plVar14 = plVar14 + 1;
                  FUN_10a1cc098(&pcStack_a8,*plVar14);
                  lVar16 = lVar16 + -8;
                } while (lVar16 != 0);
              }
              FUN_10a1d0854(&uStack_60,lVar7 + 0x80,&stack0xffffffffffffffb8,&puStack_b0);
              if ((in_stack_ffffffffffffffb0 & 1) == 0) {
                FUN_10a1bd398(lStack_58 + 8,param_2);
              }
              __ZNSt3__15mutex6unlockEv(lVar7);
            }
          }
          return;
        }
        if ((*(byte *)(lVar7 + 0x121) & 1) != 0) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
          lStack_a0 = *param_2;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_80 = 0;
          uStack_88 = 0;
          uStack_70 = 0;
          uStack_78 = 0;
          uStack_60 = 0;
          uStack_68 = 0;
          lStack_58 = 0;
          if (param_2[9] != 0) {
            lVar16 = param_2[9] << 3;
            do {
              param_2 = param_2 + 1;
              FUN_10a1cc098(&uStack_98,*param_2);
              lVar16 = lVar16 + -8;
            } while (lVar16 != 0);
          }
          pcVar13 = *(char **)(param_1 + 0x18);
          puVar1 = *(undefined8 **)(param_1 + 0x20);
          cVar3 = *pcVar13;
          while (lStack_a0 = param_1, cVar3 < -1) {
            uVar17 = *(undefined8 *)pcVar13;
            uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar17 >> 0x38)),
                             CONCAT16(-(-2 < (char)((ulong)uVar17 >> 0x30)),
                                      CONCAT15(-(-2 < (char)((ulong)uVar17 >> 0x28)),
                                               CONCAT14(-(-2 < (char)((ulong)uVar17 >> 0x20)),
                                                        CONCAT13(-(-2 < (char)((ulong)uVar17 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-2 < (char)((ulong)
                                                  uVar17 >> 0x10)),
                                                  CONCAT11(-(-2 < (char)((ulong)uVar17 >> 8)),
                                                           -(-2 < (char)uVar17))))))));
            uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
            pcVar13 = pcVar13 + (uVar9 >> 3);
            puVar1 = puVar1 + (uVar9 >> 3) * 2;
            cVar3 = *pcVar13;
          }
          while (cVar3 != -1) {
            puVar15 = puVar1 + 2;
            FUN_10a1bd42c(lVar7,*puVar1,&lStack_a0);
            pcVar13 = pcVar13 + 1;
            cVar3 = *pcVar13;
            while (puVar1 = puVar15, cVar3 < -1) {
              uVar17 = *(undefined8 *)pcVar13;
              uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar17 >> 0x38)),
                               CONCAT16(-(-2 < (char)((ulong)uVar17 >> 0x30)),
                                        CONCAT15(-(-2 < (char)((ulong)uVar17 >> 0x28)),
                                                 CONCAT14(-(-2 < (char)((ulong)uVar17 >> 0x20)),
                                                          CONCAT13(-(-2 < (char)((ulong)uVar17 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-2 < (char)((ulong)
                                                  uVar17 >> 0x10)),
                                                  CONCAT11(-(-2 < (char)((ulong)uVar17 >> 8)),
                                                           -(-2 < (char)uVar17))))))));
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
              pcVar13 = pcVar13 + (uVar9 >> 3);
              puVar15 = puVar15 + (uVar9 >> 3) * 2;
              cVar3 = *pcVar13;
            }
          }
          pcVar13 = *(char **)(param_1 + 0x38);
          plVar14 = *(long **)(param_1 + 0x40);
          cVar3 = *pcVar13;
          while (cVar3 < -1) {
            uVar17 = *(undefined8 *)pcVar13;
            uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar17 >> 0x38)),
                             CONCAT16(-(-2 < (char)((ulong)uVar17 >> 0x30)),
                                      CONCAT15(-(-2 < (char)((ulong)uVar17 >> 0x28)),
                                               CONCAT14(-(-2 < (char)((ulong)uVar17 >> 0x20)),
                                                        CONCAT13(-(-2 < (char)((ulong)uVar17 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-2 < (char)((ulong)
                                                  uVar17 >> 0x10)),
                                                  CONCAT11(-(-2 < (char)((ulong)uVar17 >> 8)),
                                                           -(-2 < (char)uVar17))))))));
            uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
            pcVar13 = pcVar13 + (uVar9 >> 3);
            plVar14 = plVar14 + (uVar9 >> 3) * 2;
            cVar3 = *pcVar13;
          }
          while (cVar3 != -1) {
            FUN_10a1bd42c(lVar7,*plVar14,&lStack_a0);
            plVar11 = plVar14 + 2;
            FUN_10a1c054c(*plVar14 + 0x90,&lStack_a0);
            pcVar13 = pcVar13 + 1;
            cVar3 = *pcVar13;
            while (plVar14 = plVar11, cVar3 < -1) {
              uVar17 = *(undefined8 *)pcVar13;
              uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar17 >> 0x38)),
                               CONCAT16(-(-2 < (char)((ulong)uVar17 >> 0x30)),
                                        CONCAT15(-(-2 < (char)((ulong)uVar17 >> 0x28)),
                                                 CONCAT14(-(-2 < (char)((ulong)uVar17 >> 0x20)),
                                                          CONCAT13(-(-2 < (char)((ulong)uVar17 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-2 < (char)((ulong)
                                                  uVar17 >> 0x10)),
                                                  CONCAT11(-(-2 < (char)((ulong)uVar17 >> 8)),
                                                           -(-2 < (char)uVar17))))))));
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
              pcVar13 = pcVar13 + (uVar9 >> 3);
              plVar11 = plVar11 + (uVar9 >> 3) * 2;
              cVar3 = *pcVar13;
            }
          }
          return;
        }
      }
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
      uVar9 = 0;
      func_0x00010a1bd170();
      if ((uVar9 & 1) == 0) {
        pcVar13 = (char *)(param_1 + 0x58);
        do {
          if (*pcVar13 != '\0') {
            ClearExclusiveLocal();
            puVar6 = &UNK_10f6432ce;
            FUN_10a00946c();
            *pcVar13 = '\0';
            __Unwind_Resume();
            uVar4 = *(ushort *)(puVar6 + 0x59);
            if ((uVar4 & 0x7f) != 0) {
              pcStack_a8 = FUN_10a1c08dc;
              *(ushort *)(puVar6 + 0x59) = uVar4 & 0xff00 | uVar4 - 1 & 0x7f;
              uStack_c8 = 0;
              uStack_d0 = 0;
              uStack_b8 = 0;
              uStack_c0 = 0;
              uStack_e8 = 0;
              uStack_f0 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              uStack_f8 = 0;
              uStack_100 = 0;
              *(undefined8 *)(puVar6 + 0x68) = 0;
              puStack_b0 = &stack0xfffffffffffffff0;
              FUN_10a1cc408(puVar6 + 0x70,(ulong)&uStack_100 | 8);
            }
            return;
          }
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
          if (bVar5) {
            *pcVar13 = '\x01';
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lStack_a0 = *param_2;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_70 = 0;
        uStack_78 = 0;
        uStack_60 = 0;
        uStack_68 = 0;
        lStack_58 = 0;
        if (param_2[9] != 0) {
          lVar7 = param_2[9] << 3;
          do {
            param_2 = param_2 + 1;
            FUN_10a1cc098(&uStack_98,*param_2);
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
        pcVar12 = *(char **)(param_1 + 0x18);
        puVar2 = *(ulong **)(param_1 + 0x20);
        cVar3 = *pcVar12;
        while (lStack_a0 = param_1, cVar3 < -1) {
          uVar17 = *(undefined8 *)pcVar12;
          uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar17 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar17 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar17 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar17 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar17 >> 0x18))
                                                               ,CONCAT12(-(-2 < (char)((ulong)uVar17
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-2 < (char)((
                                                  ulong)uVar17 >> 8)),-(-2 < (char)uVar17))))))));
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
          pcVar12 = pcVar12 + (uVar9 >> 3);
          puVar2 = puVar2 + (uVar9 >> 3) * 2;
          cVar3 = *pcVar12;
        }
        while (cVar3 != -1) {
          uVar9 = *puVar2;
          FUN_10a1bfe94(uVar9,&lStack_a0);
          if ((uVar9 & 1) == 0) {
            (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,&lStack_a0);
          }
          pcVar12 = pcVar12 + 1;
          puVar2 = puVar2 + 2;
          cVar3 = *pcVar12;
          while (cVar3 < -1) {
            uVar17 = *(undefined8 *)pcVar12;
            uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar17 >> 0x38)),
                             CONCAT16(-(-2 < (char)((ulong)uVar17 >> 0x30)),
                                      CONCAT15(-(-2 < (char)((ulong)uVar17 >> 0x28)),
                                               CONCAT14(-(-2 < (char)((ulong)uVar17 >> 0x20)),
                                                        CONCAT13(-(-2 < (char)((ulong)uVar17 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-2 < (char)((ulong)
                                                  uVar17 >> 0x10)),
                                                  CONCAT11(-(-2 < (char)((ulong)uVar17 >> 8)),
                                                           -(-2 < (char)uVar17))))))));
            uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
            pcVar12 = pcVar12 + (uVar9 >> 3);
            puVar2 = puVar2 + (uVar9 >> 3) * 2;
            cVar3 = *pcVar12;
          }
        }
        pcVar12 = *(char **)(param_1 + 0x38);
        puVar2 = *(ulong **)(param_1 + 0x40);
        cVar3 = *pcVar12;
        while (cVar3 < -1) {
          uVar17 = *(undefined8 *)pcVar12;
          uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar17 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar17 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar17 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar17 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar17 >> 0x18))
                                                               ,CONCAT12(-(-2 < (char)((ulong)uVar17
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-2 < (char)((
                                                  ulong)uVar17 >> 8)),-(-2 < (char)uVar17))))))));
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
          pcVar12 = pcVar12 + (uVar9 >> 3);
          puVar2 = puVar2 + (uVar9 >> 3) * 2;
          cVar3 = *pcVar12;
        }
        while (cVar3 != -1) {
          uVar9 = *puVar2;
          FUN_10a1bfe94(uVar9,&lStack_a0);
          if ((uVar9 & 1) == 0) {
            (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,&lStack_a0);
          }
          puVar10 = puVar2 + 2;
          FUN_10a1c054c(*puVar2 + 0x90,&lStack_a0);
          pcVar12 = pcVar12 + 1;
          cVar3 = *pcVar12;
          while (puVar2 = puVar10, cVar3 < -1) {
            uVar17 = *(undefined8 *)pcVar12;
            uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar17 >> 0x38)),
                             CONCAT16(-(-2 < (char)((ulong)uVar17 >> 0x30)),
                                      CONCAT15(-(-2 < (char)((ulong)uVar17 >> 0x28)),
                                               CONCAT14(-(-2 < (char)((ulong)uVar17 >> 0x20)),
                                                        CONCAT13(-(-2 < (char)((ulong)uVar17 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-2 < (char)((ulong)
                                                  uVar17 >> 0x10)),
                                                  CONCAT11(-(-2 < (char)((ulong)uVar17 >> 8)),
                                                           -(-2 < (char)uVar17))))))));
            uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
            pcVar12 = pcVar12 + (uVar9 >> 3);
            puVar10 = puVar10 + (uVar9 >> 3) * 2;
            cVar3 = *pcVar12;
          }
        }
        *pcVar13 = '\0';
      }
      return;
    }
    if ((uVar4 >> 7 & 1) == 0) {
      *(long *)(param_1 + 0x68) = *param_2;
      *(ushort *)(param_1 + 0x59) = uVar4 | 0x80;
    }
    FUN_10a1bd398(param_1 + 0x68,param_2);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  return;
}



/* Entry: 10a1c0680; end: 10a1c08db;  */

void FUN_10a1c0680(long param_1,long *param_2)

{
  char *pcVar1;
  ulong *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar7 = 0;
  func_0x00010a1bd170();
  if ((uVar7 & 1) == 0) {
    pcVar1 = (char *)(param_1 + 0x58);
    do {
      if (*pcVar1 != '\0') {
        ClearExclusiveLocal();
        puVar6 = &UNK_10f6432ce;
        FUN_10a00946c();
        *pcVar1 = '\0';
        __Unwind_Resume();
        uVar3 = *(ushort *)(puVar6 + 0x59);
        if ((uVar3 & 0x7f) != 0) {
          pcStack_a8 = FUN_10a1c08dc;
          *(ushort *)(puVar6 + 0x59) = uVar3 & 0xff00 | uVar3 - 1 & 0x7f;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          *(undefined8 *)(puVar6 + 0x68) = 0;
          puStack_b0 = &stack0xfffffffffffffff0;
          FUN_10a1cc408(puVar6 + 0x70,(ulong)&uStack_100 | 8);
        }
        return;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lStack_a0 = *param_2;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    if (param_2[9] != 0) {
      lVar10 = param_2[9] << 3;
      do {
        param_2 = param_2 + 1;
        FUN_10a1cc098(&uStack_98,*param_2);
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    pcVar9 = *(char **)(param_1 + 0x18);
    puVar2 = *(ulong **)(param_1 + 0x20);
    cVar4 = *pcVar9;
    while (lStack_a0 = param_1, cVar4 < -1) {
      uVar11 = *(undefined8 *)pcVar9;
      uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar11 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar11 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar11 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar11 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar11 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar11 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar11 >> 8)),-(-2 < (char)uVar11))))))));
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
      pcVar9 = pcVar9 + (uVar7 >> 3);
      puVar2 = puVar2 + (uVar7 >> 3) * 2;
      cVar4 = *pcVar9;
    }
    while (cVar4 != -1) {
      uVar7 = *puVar2;
      FUN_10a1bfe94(uVar7,&lStack_a0);
      if ((uVar7 & 1) == 0) {
        (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,&lStack_a0);
      }
      pcVar9 = pcVar9 + 1;
      puVar2 = puVar2 + 2;
      cVar4 = *pcVar9;
      while (cVar4 < -1) {
        uVar11 = *(undefined8 *)pcVar9;
        uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar11 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar11 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar11 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar11 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar11 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar11 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar11 >> 8)),-(-2 < (char)uVar11))))))));
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        pcVar9 = pcVar9 + (uVar7 >> 3);
        puVar2 = puVar2 + (uVar7 >> 3) * 2;
        cVar4 = *pcVar9;
      }
    }
    pcVar9 = *(char **)(param_1 + 0x38);
    puVar2 = *(ulong **)(param_1 + 0x40);
    cVar4 = *pcVar9;
    while (cVar4 < -1) {
      uVar11 = *(undefined8 *)pcVar9;
      uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar11 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar11 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar11 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar11 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar11 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar11 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar11 >> 8)),-(-2 < (char)uVar11))))))));
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
      pcVar9 = pcVar9 + (uVar7 >> 3);
      puVar2 = puVar2 + (uVar7 >> 3) * 2;
      cVar4 = *pcVar9;
    }
    while (cVar4 != -1) {
      uVar7 = *puVar2;
      FUN_10a1bfe94(uVar7,&lStack_a0);
      if ((uVar7 & 1) == 0) {
        (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,&lStack_a0);
      }
      puVar8 = puVar2 + 2;
      FUN_10a1c054c(*puVar2 + 0x90,&lStack_a0);
      pcVar9 = pcVar9 + 1;
      cVar4 = *pcVar9;
      while (puVar2 = puVar8, cVar4 < -1) {
        uVar11 = *(undefined8 *)pcVar9;
        uVar7 = CONCAT17(-(-2 < (char)((ulong)uVar11 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar11 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar11 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar11 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar11 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar11 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar11 >> 8)),-(-2 < (char)uVar11))))))));
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        pcVar9 = pcVar9 + (uVar7 >> 3);
        puVar8 = puVar8 + (uVar7 >> 3) * 2;
        cVar4 = *pcVar9;
      }
    }
    *pcVar1 = '\0';
  }
  return;
}



/* Entry: 10a1c08dc; end: 10a1c0933;  */

void FUN_10a1c08dc(long param_1)

{
  ushort uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(ushort *)(param_1 + 0x59);
  if ((uVar1 & 0x7f) != 0) {
    *(ushort *)(param_1 + 0x59) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    FUN_10a1cc408(param_1 + 0x70,(ulong)&uStack_60 | 8);
  }
  return;
}



/* Entry: 10a1c0934; end: 10a1c0a8b;  */

undefined8 * FUN_10a1c0934(undefined8 *param_1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  *param_1 = &PTR_DAT_110bacbe0;
  if (param_1[5] != 0) {
    FUN_10a1cc4f0(&pcStack_60,param_1 + 2);
    if (param_1[4] != 0) {
      FUN_10ae6cbe8(param_1 + 2,&UNK_110bad700,(ulong)param_1[4] < 0x80);
    }
    cVar1 = *pcStack_60;
    pcVar3 = pcStack_60;
    while (cVar1 < -1) {
      uVar5 = *(undefined8 *)pcVar3;
      uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar5 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar5 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar5 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar5 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar5 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar5 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar5 >> 8)),-(-2 < (char)uVar5))))))));
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
      pcVar3 = pcVar3 + (uVar2 >> 3);
      puStack_58 = (undefined8 *)((long)puStack_58 + (uVar2 & 0xfffffffffffffff8));
      cVar1 = *pcVar3;
    }
    while (cVar1 != -1) {
      puVar4 = puStack_58 + 1;
      func_0x00010a1bde90(*puStack_58,param_1);
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      while (puStack_58 = puVar4, cVar1 < -1) {
        uVar5 = *(undefined8 *)pcVar3;
        uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar5 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar5 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar5 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar5 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar5 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar5 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar5 >> 8)),-(-2 < (char)uVar5))))))));
        uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
        pcVar3 = pcVar3 + (uVar2 >> 3);
        puVar4 = (undefined8 *)((long)puVar4 + (uVar2 & 0xfffffffffffffff8));
        cVar1 = *pcVar3;
      }
    }
    if (lStack_50 != 0) {
      __ZdlPv(pcStack_60 + -8);
    }
  }
  if (param_1[1] != 0) {
    FUN_10a1bda64(param_1[1],param_1);
  }
  if (param_1[4] != 0) {
    __ZdlPv(param_1[2] + -8);
  }
  return param_1;
}



/* Entry: 10a1c0a8c; end: 10a1c0a9b;  */

bool FUN_10a1c0a8c(long param_1)

{
  return (*(ushort *)(param_1 + 0x30) & 0x7f) != 0;
}



/* Entry: 10a1c0a9c; end: 10a1c0bf7;  */

void FUN_10a1c0a9c(undefined8 *param_1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  *param_1 = &PTR_DAT_110bacc10;
  param_1[0x12] = &PTR_DAT_110bacc40;
  if (param_1[5] != 0) {
    FUN_10a1cc4f0(&pcStack_60,param_1 + 2);
    if (param_1[4] != 0) {
      FUN_10ae6cbe8(param_1 + 2,&UNK_110bad700,(ulong)param_1[4] < 0x80);
    }
    cVar1 = *pcStack_60;
    pcVar3 = pcStack_60;
    while (cVar1 < -1) {
      uVar5 = *(undefined8 *)pcVar3;
      uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar5 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar5 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar5 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar5 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar5 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar5 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar5 >> 8)),-(-2 < (char)uVar5))))))));
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
      pcVar3 = pcVar3 + (uVar2 >> 3);
      puStack_58 = (undefined8 *)((long)puStack_58 + (uVar2 & 0xfffffffffffffff8));
      cVar1 = *pcVar3;
    }
    while (cVar1 != -1) {
      puVar4 = puStack_58 + 1;
      func_0x00010a1be248(*puStack_58,param_1);
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      while (puStack_58 = puVar4, cVar1 < -1) {
        uVar5 = *(undefined8 *)pcVar3;
        uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar5 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar5 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar5 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar5 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar5 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar5 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar5 >> 8)),-(-2 < (char)uVar5))))))));
        uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
        pcVar3 = pcVar3 + (uVar2 >> 3);
        puVar4 = (undefined8 *)((long)puVar4 + (uVar2 & 0xfffffffffffffff8));
        cVar1 = *pcVar3;
      }
    }
    if (lStack_50 != 0) {
      __ZdlPv(pcStack_60 + -8);
    }
  }
  if (param_1[0x13] != 0) {
    FUN_10a1bdedc(param_1[0x13],param_1);
  }
  FUN_10a1c00f4(param_1 + 0x12);
  FUN_10a1c0934(param_1);
  return;
}



/* Entry: 10a1c0bf8; end: 10a1c2cab;  */

/* WARNING: Removing unreachable block (ram,0x00010a1c1f3c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c2898) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a1c0bf8(long *****param_1,undefined8 param_2,float param_3,float param_4,
                  long *****param_5,long *****param_6,int param_7)

{
  undefined8 *puVar1;
  long ****pppplVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  long ***ppplVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  long **pplVar13;
  code *pcVar14;
  bool bVar15;
  uint uVar16;
  long *******ppppppplVar17;
  long lVar18;
  long lVar19;
  long ******pppppplVar20;
  float *pfVar21;
  float *pfVar22;
  long *******ppppppplVar23;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar24;
  char *pcVar25;
  long *plVar26;
  long ******pppppplVar27;
  long *******ppppppplVar28;
  ulong uVar29;
  long *****ppppplVar30;
  ulong uVar31;
  long *plVar32;
  long *******ppppppplVar33;
  long *plVar34;
  long *******ppppppplVar35;
  long *plVar36;
  undefined8 *puVar37;
  long **pplVar38;
  long *****ppppplVar39;
  long *******ppppppplVar40;
  long *******ppppppplVar41;
  long **pplVar42;
  long lVar43;
  int iVar44;
  long lVar45;
  long *******ppppppplVar46;
  float fVar47;
  long *******ppppppplVar48;
  int iStack_20c;
  long *******ppppppplStack_200;
  long ******pppppplStack_1f8;
  long ***ppplStack_1e8;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  byte bStack_1d1;
  long *******ppppppplStack_1d0;
  ulong uStack_1c8;
  long ******pppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  ulong uStack_1a8;
  float fStack_1a0;
  long lStack_190;
  long *plStack_188;
  long *plStack_180;
  long lStack_178;
  undefined4 uStack_170;
  long *******ppppppplStack_160;
  ulong uStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  undefined8 uStack_140;
  float fStack_134;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  undefined8 uStack_120;
  long ******pppppplStack_118;
  long *****ppppplStack_110;
  undefined2 uStack_108;
  long *******ppppppplStack_f8;
  undefined8 uStack_f0;
  long *******ppppppplStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined2 uStack_b8;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar48 = (long *******)0x0;
  plStack_188 = (long *)0x0;
  lStack_190 = 0;
  lStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_170 = 0x3f800000;
  ppppppplStack_1b8 = (long *******)0x0;
  pppppplStack_1c0 = (long ******)0x0;
  uStack_1a8 = 0;
  ppppppplStack_1b0 = (long *******)0x0;
  fStack_1a0 = 1.0;
  ppppppplStack_1d0 = (long *******)0x0;
  uStack_1c8 = 0;
  ppplStack_1e8 = (long ***)0x0;
  uStack_1e0 = 0;
  uStack_1d9 = 0;
  uStack_1d8 = 0;
  bStack_1d1 = 0;
  param_1[1] = (long ****)0x0;
  param_1[2] = (long ****)0x0;
  *param_1 = (long ****)0x0;
  if (param_7 != 0) {
    if (param_6 == (long *****)0x0) goto LAB_10a1c28a0;
    bVar15 = false;
    iStack_20c = 0;
    ppppplVar39 = (long *****)0x0;
LAB_10a1c0ca4:
    uVar31 = uStack_1c8;
    ppppppplVar23 = ppppppplStack_1d0;
    cVar6 = *(char *)((long)param_5 + (long)ppppplVar39);
    if (!bVar15) {
      if (cVar6 == '<') {
        ppppppplStack_1d0 = (long *******)((char *)((long)param_5 + (long)ppppplVar39) + 1);
        uStack_1c8 = 0;
        uVar31 = uStack_1c8;
        goto LAB_10a1c0d74;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&ppplStack_1e8);
LAB_10a1c1b5c:
      bVar15 = false;
LAB_10a1c1b60:
      uVar31 = uStack_1c8;
      ppppppplVar23 = ppppppplStack_1d0;
      ppppplVar39 = (long *****)((long)ppppplVar39 + 1);
      if (ppppplVar39 == param_6) goto LAB_10a1c27bc;
      goto LAB_10a1c0ca4;
    }
    if (cVar6 != '>') {
      uVar31 = uStack_1c8 + 1;
      if ((long)(uStack_1c8 + 1) < 0) goto LAB_10a1c2ad0;
LAB_10a1c0d74:
      uStack_1c8 = uVar31;
      bVar15 = true;
      goto LAB_10a1c1b60;
    }
    if (uStack_1c8 == 0) goto LAB_10a1c0eb0;
    ppppppplVar17 = ppppppplStack_1d0;
    _memchr(ppppppplStack_1d0,0x2f,uStack_1c8);
    if ((ppppppplVar17 == (long *******)0x0) ||
       (uVar24 = (long)ppppppplVar17 - (long)ppppppplVar23, uVar24 == 0xffffffffffffffff)) {
      ppppppplVar17 = ppppppplVar23;
      _memchr(ppppppplVar23,0x3d,uVar31);
      if ((ppppppplVar17 == (long *******)0x0) ||
         (uVar24 = (long)ppppppplVar17 - (long)ppppppplVar23, uVar24 == 0xffffffffffffffff)) {
        ppppppplVar17 = (long *******)&ppppppplStack_1d0;
        FUN_10a1d417c();
        if (ppppppplVar17 != (long *******)0x0) {
          if (*(char *)((long)ppppppplVar17 + 0x24) == '\x01') {
            func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f6433a3,in_x6
                                ,in_x7,uStack_1c8,ppppppplStack_1d0,uStack_1c8,ppppppplStack_1d0);
            goto LAB_10a1c0eb0;
          }
          bVar5 = *(byte *)((long)ppppppplVar17 + 0x25);
          pppppplStack_1f8 = (long ******)0x28;
          __Znwm();
          iVar44 = (uint)bVar5 << 1;
          pppppplStack_1f8[1] = (long *****)0x0;
          pppppplStack_1f8[2] = (long *****)0x0;
          *pppppplStack_1f8 = (long *****)&PTR_FUN_110bad890;
          ppppppplStack_200 = (long *******)(pppppplStack_1f8 + 3);
          *ppppppplStack_200 = (long ******)&PTR_FUN_110bad380;
          *(undefined4 *)(pppppplStack_1f8 + 4) = *(undefined4 *)(ppppppplVar17 + 4);
          goto LAB_10a1c0f64;
        }
        func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f643354,in_x6,
                            in_x7,uStack_1c8,ppppppplStack_1d0);
LAB_10a1c0eb0:
        pppppplStack_1f8 = (long ******)0x0;
        goto LAB_10a1c1b20;
      }
      uStack_158 = uVar31;
      if (uVar24 <= uVar31) {
        uStack_158 = uVar24;
      }
      ppppppplStack_160 = ppppppplVar23;
      ppppppplVar17 = (long *******)&ppppppplStack_160;
      FUN_10a1d417c();
      ppppppplVar40 = ppppppplStack_1d0;
      if (ppppppplVar17 == (long *******)0x0) {
        func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f643354,in_x6,
                            in_x7,uStack_158,ppppppplStack_160);
LAB_10a1c0f54:
        ppppppplStack_200 = (long *******)0x0;
        pppppplStack_1f8 = (long ******)0x0;
        iVar44 = 3;
      }
      else {
        if ((*(byte *)((long)ppppppplVar17 + 0x24) & 1) == 0) {
          func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f643376,in_x6,
                              in_x7,uStack_158,ppppppplStack_160);
          goto LAB_10a1c0f54;
        }
        if (uStack_1c8 <= uVar24) goto LAB_10a1c2a84;
        iVar44 = (uint)*(byte *)((long)ppppppplVar17 + 0x25) << 1;
        ppppppplVar46 = (long *******)(uStack_1c8 - (uVar24 + 1));
        if (ppppppplVar46 == (long *******)0x0) {
          ppppppplStack_200 = (long *******)0x0;
          pppppplStack_1f8 = (long ******)0x0;
          goto LAB_10a1c0f60;
        }
        if ((long *******)0x7ffffffffffffff7 < ppppppplVar46) {
          func_0x000109ffde50();
          goto LAB_10a1c2ad0;
        }
        if (ppppppplVar46 < (long *******)0x17) {
          uStack_140 = CONCAT17((char)ppppppplVar46,(undefined7)uStack_140);
          ppppppplVar28 = (long *******)&ppppppplStack_150;
        }
        else {
          ppppppplVar23 = (long *******)0x19;
          if (((ulong)ppppppplVar46 | 7) != 0x17) {
            ppppppplVar23 = (long *******)(((ulong)ppppppplVar46 | 7) + 1);
          }
          ppppppplVar28 = ppppppplVar23;
          __Znwm();
          uStack_140 = (ulong)ppppppplVar23 | 0x8000000000000000;
          ppppppplStack_150 = ppppppplVar28;
          ppppppplStack_148 = ppppppplVar46;
        }
        _memcpy(ppppppplVar28,(char *)((long)ppppppplVar40 + uVar24 + 1),ppppppplVar46);
        *(char *)((long)ppppppplVar28 + (long)ppppppplVar46) = '\0';
        ppppppplVar23 = ppppppplStack_148;
        ppppppplVar40 = ppppppplStack_150;
        if (-1 < (long)uStack_140) {
          ppppppplVar23 = (long *******)(uStack_140 >> 0x38);
          ppppppplVar40 = (long *******)&ppppppplStack_150;
        }
        ppppppplVar46 = (long *******)((long)ppppppplVar40 + (long)ppppppplVar23);
        for (; ppppppplVar23 != (long *******)0x0;
            ppppppplVar23 = (long *******)((long)ppppppplVar23 + -1)) {
          cVar6 = *(char *)ppppppplVar40;
          lVar18 = (long)cVar6;
          if (cVar6 < 0) {
            ___maskrune(lVar18,0x4000);
            uVar16 = (uint)lVar18;
          }
          else {
            uVar16 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                              (ulong)(uint)(int)cVar6 * 4 + 0x3c) & 0x4000;
          }
          if (uVar16 != 0) {
            ppppppplVar46 = ppppppplVar40;
            if ((ppppppplVar23 != (long *******)0x0) && (ppppppplVar23 != (long *******)0x1)) {
              ppppppplVar28 = (long *******)0x1;
              ppppppplVar41 = ppppppplVar40;
              do {
                cVar6 = *(char *)((long)ppppppplVar40 + (long)ppppppplVar28);
                lVar18 = (long)cVar6;
                if (cVar6 < 0) {
                  ___maskrune(lVar18,0x4000);
                  uVar16 = (uint)lVar18;
                }
                else {
                  uVar16 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                    (ulong)(uint)(int)cVar6 * 4 + 0x3c) & 0x4000;
                }
                ppppppplVar46 = ppppppplVar41;
                if (uVar16 == 0) {
                  ppppppplVar46 = (long *******)((long)ppppppplVar41 + 1);
                  *(char *)ppppppplVar41 = *(char *)((long)ppppppplVar40 + (long)ppppppplVar28);
                }
                ppppppplVar28 = (long *******)((long)ppppppplVar28 + 1);
                ppppppplVar41 = ppppppplVar46;
              } while (ppppppplVar23 != ppppppplVar28);
            }
            break;
          }
          ppppppplVar40 = (long *******)((long)ppppppplVar40 + 1);
        }
        ppppppplVar23 = ppppppplStack_150;
        ppppppplVar28 = ppppppplStack_148;
        if (-1 < (long)(char)uStack_140._7_1_) {
          ppppppplVar23 = (long *******)&ppppppplStack_150;
          ppppppplVar28 = (long *******)(long)(char)uStack_140._7_1_;
        }
        if ((long *******)((long)ppppppplVar23 + (long)ppppppplVar28) < ppppppplVar46)
        goto LAB_10a1c2ad0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
                  (&ppppppplStack_150,(long)ppppppplVar46 - (long)ppppppplVar23,
                   ((long)ppppppplVar23 + (long)ppppppplVar28) - (long)ppppppplVar46);
        iVar3 = *(int *)(ppppppplVar17 + 4);
        ppppppplVar23 = ppppppplVar40;
        if (iVar3 < 7) {
          if (iVar3 != 1) {
            if (iVar3 == 3) {
              __ZNSt3__14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm
                        (&ppppppplStack_150,&fStack_e0);
              if ((long)(char)uStack_140._7_1_ < 0) {
                ppppppplVar46 = ppppppplStack_150;
                if ((long *******)CONCAT44(fStack_dc,fStack_e0) == ppppppplStack_148)
                goto LAB_10a1c1d90;
              }
              else {
                if ((long *******)CONCAT44(fStack_dc,fStack_e0) ==
                    (long *******)(long)(char)uStack_140._7_1_) {
LAB_10a1c1d90:
                  fVar47 = SUB84(ppppppplVar48,0);
                  if ((2.0 <= fVar47) && (ppppppplVar48 = (long *******)0x44480000, fVar47 <= 800.0)
                     ) {
                    pppppplStack_1f8 = (long ******)0x28;
                    __Znwm();
                    pppppplStack_1f8[1] = (long *****)0x0;
                    pppppplStack_1f8[2] = (long *****)0x0;
                    *pppppplStack_1f8 = (long *****)&PTR_DAT_110bad950;
                    pppppplStack_1f8[3] = (long *****)&PTR_DAT_110bad9a0;
                    *(undefined4 *)(pppppplStack_1f8 + 4) = *(undefined4 *)(ppppppplVar17 + 4);
                    *(float *)((long)pppppplStack_1f8 + 0x24) = fVar47;
                    ppppppplStack_130 = (long *******)0x0;
                    ppppppplStack_128 = (long *******)0x0;
                    func_0x00010a1d3824(&ppppppplStack_130);
                    ppppppplStack_200 = (long *******)(pppppplStack_1f8 + 3);
                    goto LAB_10a1c26cc;
                  }
                  ppppppplVar48 = (long *******)(double)fVar47;
                  func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f64349f
                                      ,in_x6,in_x7,ppppppplVar48,0x4000000000000000,
                                      0x4089000000000000);
                  goto LAB_10a1c26c4;
                }
                ppppppplVar46 = (long *******)&ppppppplStack_150;
              }
              func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f64344a,
                                  in_x6,in_x7,ppppppplVar46,0x4000000000000000,0x4089000000000000);
              goto LAB_10a1c26c4;
            }
            if (iVar3 == 6) {
              ppppppplVar17 = ppppppplStack_148;
              ppppppplVar46 = ppppppplStack_150;
              if (-1 < (long)uStack_140) {
                ppppppplVar17 = (long *******)(ulong)uStack_140._7_1_;
                ppppppplVar46 = (long *******)&ppppppplStack_150;
              }
              ppppppplVar23 = ppppppplVar46;
              FUN_10a1c34d0();
              if (ppppppplVar17 == (long *******)0x0) {
                func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f6434e2,
                                    in_x6,in_x7,ppppppplVar46);
                goto LAB_10a1c26c4;
              }
              if (ppppppplVar17 < (long *******)0x7ffffffffffffff8) {
                if (ppppppplVar17 < (long *******)0x17) {
                  uStack_120 = (long *******)CONCAT17((char)ppppppplVar17,(undefined7)uStack_120);
                  ppppppplVar40 = (long *******)&ppppppplStack_130;
                }
                else {
                  ppppppplVar48 = (long *******)0x19;
                  if (((ulong)ppppppplVar17 | 7) != 0x17) {
                    ppppppplVar48 = (long *******)(((ulong)ppppppplVar17 | 7) + 1);
                  }
                  ppppppplVar40 = ppppppplVar48;
                  __Znwm();
                  uStack_120 = (long *******)((ulong)ppppppplVar48 | 0x8000000000000000);
                  ppppppplStack_130 = ppppppplVar40;
                  ppppppplStack_128 = ppppppplVar17;
                }
                _memmove(ppppppplVar40,ppppppplVar23,ppppppplVar17);
                *(char *)((long)ppppppplVar40 + (long)ppppppplVar17) = '\0';
                FUN_10a1d4358(&fStack_e0,6,&ppppppplStack_130);
                goto LAB_10a1c1f94;
              }
              func_0x000109ffde50();
              goto LAB_10a1c2ad0;
            }
            goto LAB_10a1c26c4;
          }
          ppppppplVar23 = ppppppplStack_148;
          ppppppplVar40 = ppppppplStack_150;
          if (-1 < (long)uStack_140) {
            ppppppplVar23 = (long *******)(ulong)uStack_140._7_1_;
            ppppppplVar40 = (long *******)&ppppppplStack_150;
          }
          FUN_10a1c34d0(ppppppplVar40);
          fStack_e0 = 0.0;
          fStack_dc = 0.0;
          if ((long *******)0x7ffffffffffffff7 < ppppppplVar23) {
            func_0x000109ffde50();
            goto LAB_10a1c2ad0;
          }
          if (ppppppplVar23 < (long *******)0x17) {
            uStack_120 = (long *******)CONCAT17((char)ppppppplVar23,(undefined7)uStack_120);
            ppppppplVar28 = (long *******)&ppppppplStack_130;
            if (ppppppplVar23 != (long *******)0x0) goto LAB_10a1c1c48;
          }
          else {
            ppppppplVar46 = (long *******)0x19;
            if (((ulong)ppppppplVar23 | 7) != 0x17) {
              ppppppplVar46 = (long *******)(((ulong)ppppppplVar23 | 7) + 1);
            }
            ppppppplVar28 = ppppppplVar46;
            __Znwm();
            uStack_120 = (long *******)((ulong)ppppppplVar46 | 0x8000000000000000);
            ppppppplStack_130 = ppppppplVar28;
            ppppppplStack_128 = ppppppplVar23;
LAB_10a1c1c48:
            _memmove(ppppppplVar28,ppppppplVar40,ppppppplVar23);
          }
          *(char *)((long)ppppppplVar28 + (long)ppppppplVar23) = '\0';
          ppppppplVar40 = (long *******)&ppppppplStack_130;
          __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                    (ppppppplVar40,&fStack_e0,10);
          if ((long)uStack_120 < 0) {
            __ZdlPv(ppppppplStack_130);
          }
          if (((long *******)CONCAT44(fStack_dc,fStack_e0) != ppppppplVar23) ||
             ((int)ppppppplVar40 - 0x3e9U < 0xfffffc18)) {
            ppppppplVar23 = ppppppplStack_150;
            if (-1 < (long)uStack_140) {
              ppppppplVar23 = (long *******)&ppppppplStack_150;
            }
            func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f6433dd,in_x6
                                ,in_x7,ppppppplVar23);
            goto LAB_10a1c26c4;
          }
          pppppplStack_1f8 = (long ******)0x28;
          __Znwm();
          pppppplStack_1f8[1] = (long *****)0x0;
          pppppplStack_1f8[2] = (long *****)0x0;
          ppppppplStack_200 = (long *******)(pppppplStack_1f8 + 3);
          *ppppppplStack_200 = (long ******)&PTR_DAT_110bad930;
          *pppppplStack_1f8 = (long *****)&PTR_DAT_110bad8e0;
          *(undefined4 *)(pppppplStack_1f8 + 4) = *(undefined4 *)(ppppppplVar17 + 4);
          *(int *)((long)pppppplStack_1f8 + 0x24) = (int)ppppppplVar40;
          ppppppplVar23 = ppppppplVar40;
        }
        else if (iVar3 < 0xc) {
          if (iVar3 == 7) {
            ppppppplVar17 = ppppppplStack_148;
            ppppppplVar46 = ppppppplStack_150;
            if (-1 < (long)uStack_140) {
              ppppppplVar17 = (long *******)(ulong)uStack_140._7_1_;
              ppppppplVar46 = (long *******)&ppppppplStack_150;
            }
            ppppppplVar23 = ppppppplVar46;
            FUN_10a1c34d0();
            if (ppppppplVar17 != (long *******)0x0) {
              if (ppppppplVar17 < (long *******)0x7ffffffffffffff8) {
                if (ppppppplVar17 < (long *******)0x17) {
                  uStack_120 = (long *******)CONCAT17((char)ppppppplVar17,(undefined7)uStack_120);
                  ppppppplVar40 = (long *******)&ppppppplStack_130;
                }
                else {
                  ppppppplVar48 = (long *******)0x19;
                  if (((ulong)ppppppplVar17 | 7) != 0x17) {
                    ppppppplVar48 = (long *******)(((ulong)ppppppplVar17 | 7) + 1);
                  }
                  ppppppplVar40 = ppppppplVar48;
                  __Znwm();
                  uStack_120 = (long *******)((ulong)ppppppplVar48 | 0x8000000000000000);
                  ppppppplStack_130 = ppppppplVar40;
                  ppppppplStack_128 = ppppppplVar17;
                }
                _memmove(ppppppplVar40,ppppppplVar23,ppppppplVar17);
                *(char *)((long)ppppppplVar40 + (long)ppppppplVar17) = '\0';
                FUN_10a1d4358(&fStack_e0,7,&ppppppplStack_130);
LAB_10a1c1f94:
                pppppplStack_1f8 = (long ******)CONCAT44(fStack_d4,fStack_d8);
                ppppppplVar48 = (long *******)CONCAT44(fStack_dc,fStack_e0);
                ppppppplStack_200 = ppppppplVar48;
                if ((long)uStack_120 < 0) {
                  __ZdlPv(ppppppplStack_130);
                }
                goto LAB_10a1c26cc;
              }
              func_0x000109ffde50();
              goto LAB_10a1c2ad0;
            }
            func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f643548,in_x6
                                ,in_x7,ppppppplVar46);
          }
          else if (iVar3 == 8) {
            ppppppplVar17 = ppppppplStack_148;
            ppppppplVar46 = ppppppplStack_150;
            if (-1 < (long)uStack_140) {
              ppppppplVar17 = (long *******)(ulong)uStack_140._7_1_;
              ppppppplVar46 = (long *******)&ppppppplStack_150;
            }
            ppppppplVar23 = ppppppplVar46;
            FUN_10a1c34d0();
            if (ppppppplVar17 != (long *******)0x0) {
              uStack_c0 = uStack_c0 & 0xffffff00;
              uStack_bc = uStack_bc & 0xffffff00;
              uStack_b8 = 0;
              if (ppppppplVar17 < (long *******)0x7ffffffffffffff8) {
                if (ppppppplVar17 < (long *******)0x17) {
                  uStack_120 = (long *******)CONCAT17((char)ppppppplVar17,(undefined7)uStack_120);
                  ppppppplVar40 = (long *******)&ppppppplStack_130;
                }
                else {
                  ppppppplVar48 = (long *******)0x19;
                  if (((ulong)ppppppplVar17 | 7) != 0x17) {
                    ppppppplVar48 = (long *******)(((ulong)ppppppplVar17 | 7) + 1);
                  }
                  ppppppplVar40 = ppppppplVar48;
                  __Znwm();
                  uStack_120 = (long *******)((ulong)ppppppplVar48 | 0x8000000000000000);
                  ppppppplStack_130 = ppppppplVar40;
                  ppppppplStack_128 = ppppppplVar17;
                }
                _memmove(ppppppplVar40,ppppppplVar23,ppppppplVar17);
                *(char *)((long)ppppppplVar40 + (long)ppppppplVar17) = '\0';
                fStack_d8 = SUB84(ppppppplStack_128,0);
                fStack_d4 = (float)((ulong)ppppppplStack_128 >> 0x20);
                fStack_e0 = SUB84(ppppppplStack_130,0);
                fStack_dc = (float)((ulong)ppppppplStack_130 >> 0x20);
                uStack_d0 = uStack_120;
                uStack_c8 = 1;
                pppppplStack_1f8 = (long ******)0x58;
                ppppppplVar48 = ppppppplStack_130;
                __Znwm();
                pppppplStack_1f8[1] = (long *****)0x0;
                pppppplStack_1f8[2] = (long *****)0x0;
                *pppppplStack_1f8 = (long *****)&PTR_FUN_110bad310;
                FUN_10a1ccb30(&ppppppplStack_130,&fStack_e0);
                ppppppplStack_200 = (long *******)(pppppplStack_1f8 + 3);
                *ppppppplStack_200 = (long ******)&PTR_DAT_110bad360;
                ppppplStack_110 = (long *****)CONCAT44(uStack_bc,uStack_c0);
                uStack_108 = uStack_b8;
                *(undefined4 *)(pppppplStack_1f8 + 4) = 8;
                FUN_10a1ccb30(pppppplStack_1f8 + 5,&ppppppplStack_130);
                pppppplStack_1f8[9] = ppppplStack_110;
                *(undefined2 *)(pppppplStack_1f8 + 10) = uStack_108;
                if (((char)pppppplStack_118 == '\x01') && ((long)uStack_120 < 0)) {
                  __ZdlPv(ppppppplStack_130);
                }
                goto LAB_10a1c26cc;
              }
              func_0x000109ffde50();
              goto LAB_10a1c2ad0;
            }
            func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f6435b5,in_x6
                                ,in_x7,ppppppplVar46);
          }
LAB_10a1c26c4:
          ppppppplStack_200 = (long *******)0x0;
          pppppplStack_1f8 = (long ******)0x0;
          ppppppplVar23 = ppppppplVar40;
        }
        else {
          if (iVar3 != 0xc) {
            if (iVar3 != 0xd) goto LAB_10a1c26c4;
            ppppppplVar46 = ppppppplStack_148;
            ppppppplVar28 = ppppppplStack_150;
            if (-1 < (long)uStack_140) {
              ppppppplVar46 = (long *******)(ulong)uStack_140._7_1_;
              ppppppplVar28 = (long *******)&ppppppplStack_150;
            }
            if ((ppppppplVar46 == (long *******)0x3) && (*(char *)ppppppplVar28 == '#')) {
              ppppppplStack_130 = (long *******)((ulong)ppppppplStack_130 & 0xffffffff00000000);
              func_0x00010a1cd7ec(ppppppplVar28,3,1,&ppppppplStack_130);
              if ((int)ppppppplVar28 != 0) {
                ppppppplVar48 = (long *******)(ulong)(uint)(float)(int)ppppppplStack_130;
                param_3 = 255.0;
                fVar47 = (float)(int)ppppppplStack_130 / 255.0;
LAB_10a1c1bcc:
                pppppplStack_1f8 = (long ******)0x28;
                __Znwm();
                pppppplStack_1f8[1] = (long *****)0x0;
                pppppplStack_1f8[2] = (long *****)0x0;
                ppppppplStack_200 = (long *******)(pppppplStack_1f8 + 3);
                *ppppppplStack_200 = (long ******)&PTR_DAT_110bad9a0;
                *pppppplStack_1f8 = (long *****)&PTR_DAT_110bad950;
                *(undefined4 *)(pppppplStack_1f8 + 4) = *(undefined4 *)(ppppppplVar17 + 4);
                *(float *)((long)pppppplStack_1f8 + 0x24) = fVar47;
                goto LAB_10a1c26cc;
              }
            }
            else {
              __ZNSt3__14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm
                        (&ppppppplStack_150,0);
              fVar47 = SUB84(ppppppplVar48,0);
              if ((0.0 <= fVar47) && (fVar47 <= 1.0)) goto LAB_10a1c1bcc;
            }
            ppppppplVar23 = ppppppplStack_150;
            if (-1 < (long)uStack_140) {
              ppppppplVar23 = (long *******)&ppppppplStack_150;
            }
            func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f64369d,in_x6
                                ,in_x7,ppppppplVar23);
            goto LAB_10a1c26c4;
          }
          ppppppplVar46 = ppppppplStack_148;
          ppppppplVar23 = ppppppplStack_150;
          if (-1 < (long)uStack_140) {
            ppppppplVar46 = (long *******)(ulong)uStack_140._7_1_;
            ppppppplVar23 = (long *******)&ppppppplStack_150;
          }
          FUN_10a1c34d0();
          fStack_e0 = 0.0;
          fStack_dc = 0.0;
          fStack_d8 = 0.0;
          fStack_d4 = 0.0;
          ppppppplStack_f8 = (long *******)0x0;
          ppppppplStack_e8 = (long *******)&ppppppplStack_f8;
          ppppppplStack_130 = ppppppplVar23;
          ppppppplStack_128 = ppppppplVar46;
          ppppppplVar28 = ppppppplStack_f8;
          ppppppplVar40 = ppppppplRam00000001137ea918;
          for (; ppppppplRam00000001137ea918 = ppppppplVar40, ppppppplStack_f8 = ppppppplVar28,
              ppppppplVar46 != (long *******)0x0;
              ppppppplVar46 = (long *******)((long)ppppppplVar46 + -1)) {
            func_0x000107c2b0f4(&ppppppplStack_e8,ppppppplVar23);
            ppppppplVar23 = (long *******)((long)ppppppplVar23 + 1);
            ppppppplVar28 = ppppppplStack_f8;
            ppppppplVar40 = ppppppplRam00000001137ea918;
          }
          if (ppppppplVar40 != (long *******)0x0) {
            pcVar25 = (char *)((long)ppppppplVar40 + -1);
            if (((ulong)ppppppplVar40 & (ulong)pcVar25) == 0) {
              ppppppplVar23 = (long *******)((ulong)pcVar25 & (ulong)ppppppplVar28);
            }
            else {
              ppppppplVar23 = ppppppplVar28;
              if (ppppppplVar40 <= ppppppplVar28) {
                uVar31 = 0;
                if (ppppppplVar40 != (long *******)0x0) {
                  uVar31 = (ulong)ppppppplVar28 / (ulong)ppppppplVar40;
                }
                ppppppplVar23 = (long *******)((long)ppppppplVar28 - uVar31 * (long)ppppppplVar40);
              }
            }
            plVar26 = *(long **)(lRam00000001137ea910 + (long)ppppppplVar23 * 8);
            if (plVar26 != (long *)0x0) {
              for (plVar26 = (long *)*plVar26; plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
                ppppppplVar46 = (long *******)plVar26[1];
                if (ppppppplVar28 == ppppppplVar46) {
                  uVar31 = 0;
                  FUN_10a15aadc(0x1137ea910,plVar26 + 2,&ppppppplStack_130);
                  if ((uVar31 & 1) != 0) {
                    ppppppplVar48 = (long *******)plVar26[4];
                    fStack_d8 = (float)plVar26[5];
                    fStack_d4 = (float)((ulong)plVar26[5] >> 0x20);
                    fStack_e0 = SUB84(ppppppplVar48,0);
                    fStack_dc = (float)((ulong)ppppppplVar48 >> 0x20);
                    goto LAB_10a1c2558;
                  }
                }
                else {
                  if (((ulong)ppppppplVar40 & (ulong)pcVar25) == 0) {
                    ppppppplVar46 = (long *******)((ulong)ppppppplVar46 & (ulong)pcVar25);
                  }
                  else if (ppppppplVar40 <= ppppppplVar46) {
                    uVar31 = 0;
                    if (ppppppplVar40 != (long *******)0x0) {
                      uVar31 = (ulong)ppppppplVar46 / (ulong)ppppppplVar40;
                    }
                    ppppppplVar46 =
                         (long *******)((long)ppppppplVar46 - uVar31 * (long)ppppppplVar40);
                  }
                  if (ppppppplVar46 != ppppppplVar23) break;
                }
              }
            }
          }
          ppppppplVar23 = ppppppplStack_148;
          ppppppplVar40 = ppppppplStack_150;
          if (-1 < (long)uStack_140) {
            ppppppplVar23 = (long *******)(uStack_140 >> 0x38);
            ppppppplVar40 = (long *******)&ppppppplStack_150;
          }
          ppppppplStack_e8 = (long *******)0x0;
          ppppppplVar46 = ppppppplVar40;
          func_0x00010a1cd300(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8,&UNK_10f434344,4);
          if ((((((ulong)ppppppplVar46 & 1) == 0) &&
               (ppppppplVar28 = ppppppplVar40,
               func_0x00010a1cd300(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8,"rgb",3),
               (int)ppppppplVar28 == 0)) || (ppppppplVar23 <= ppppppplStack_e8)) ||
             (*(char *)((long)ppppppplVar40 + (long)ppppppplStack_e8) != '(')) {
LAB_10a1c23cc:
            ppppppplVar23 = ppppppplStack_148;
            ppppppplVar40 = ppppppplStack_150;
            if (-1 < (long)uStack_140) {
              ppppppplVar23 = (long *******)(uStack_140 >> 0x38);
              ppppppplVar40 = (long *******)&ppppppplStack_150;
            }
            ppppppplStack_e8 = (long *******)0x0;
            ppppppplVar46 = ppppppplVar40;
            func_0x00010a1cd300(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8,&UNK_10f643d1a,3);
            if ((((int)ppppppplVar46 != 0) && (ppppppplStack_e8 < ppppppplVar23)) &&
               (*(char *)((long)ppppppplVar40 + (long)ppppppplStack_e8) == '(')) {
              ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
              uStack_f0 = 0;
              ppppppplStack_f8 = (long *******)((ulong)ppppppplStack_f8 & 0xffffffff00000000);
              ppppppplVar46 = ppppppplVar40;
              FUN_10a1cd60c(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8,&ppppppplStack_f8);
              if ((((int)ppppppplVar46 != 0) &&
                  (func_0x00010a1cd424(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8),
                  ppppppplStack_e8 < ppppppplVar23)) &&
                 (*(char *)((long)ppppppplVar40 + (long)ppppppplStack_e8) == ',')) {
                ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
                ppppppplVar46 = ppppppplVar40;
                FUN_10a1cd60c(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8,(long)&uStack_f0 + 4);
                if ((((int)ppppppplVar46 != 0) &&
                    (func_0x00010a1cd424(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8),
                    ppppppplStack_e8 < ppppppplVar23)) &&
                   (*(char *)((long)ppppppplVar40 + (long)ppppppplStack_e8) == ',')) {
                  ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
                  ppppppplVar46 = ppppppplVar40;
                  FUN_10a1cd60c(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8,&uStack_f0);
                  if ((((int)ppppppplVar46 != 0) &&
                      (func_0x00010a1cd424(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8),
                      ppppppplStack_e8 < ppppppplVar23)) &&
                     ((*(char *)((long)ppppppplVar40 + (long)ppppppplStack_e8) == ')' &&
                      (((((long *******)((long)ppppppplStack_e8 + 1) == ppppppplVar23 &&
                         ((int)ppppppplStack_f8 < 0x169)) && (uStack_f0._4_4_ < 0x65)) &&
                       ((int)uStack_f0 < 0x65)))))) {
                    func_0x00010a1cd6b4();
                    fStack_e0 = SUB84(ppppppplVar48,0);
                    fStack_d4 = 1.0;
                    fStack_dc = param_3;
                    fStack_d8 = param_4;
                    goto LAB_10a1c2558;
                  }
                }
              }
            }
            ppppppplVar23 = (long *******)&ppppppplStack_150;
            FUN_10a1c3524(ppppppplVar23,&fStack_e0);
            if (((ulong)ppppppplVar23 & 1) == 0) {
              ppppppplVar23 = ppppppplStack_150;
              if (-1 < (long)uStack_140) {
                ppppppplVar23 = (long *******)&ppppppplStack_150;
              }
              func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f64362f,
                                  in_x6,in_x7,ppppppplVar23);
              goto LAB_10a1c26c4;
            }
          }
          else {
            ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
            uStack_f0 = 0;
            ppppppplStack_f8 = (long *******)((ulong)ppppppplStack_f8 & 0xffffffff00000000);
            ppppppplVar28 = ppppppplVar40;
            func_0x00010a1cd370(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8,&ppppppplStack_f8);
            if ((((int)ppppppplVar28 == 0) ||
                (func_0x00010a1cd424(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8),
                ppppppplVar23 <= ppppppplStack_e8)) ||
               (*(char *)((long)ppppppplVar40 + (long)ppppppplStack_e8) != ',')) goto LAB_10a1c23cc;
            ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
            ppppppplVar28 = ppppppplVar40;
            func_0x00010a1cd370(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8,(long)&uStack_f0 + 4);
            if ((((int)ppppppplVar28 == 0) ||
                (func_0x00010a1cd424(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8),
                ppppppplVar23 <= ppppppplStack_e8)) ||
               (*(char *)((long)ppppppplVar40 + (long)ppppppplStack_e8) != ',')) goto LAB_10a1c23cc;
            ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
            ppppppplVar28 = ppppppplVar40;
            func_0x00010a1cd370(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8,&uStack_f0);
            if ((int)ppppppplVar28 == 0) goto LAB_10a1c23cc;
            fStack_134 = 1.0;
            func_0x00010a1cd424(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8);
            if ((ppppppplVar23 <= ppppppplStack_e8) ||
               (*(char *)((long)ppppppplVar40 + (long)ppppppplStack_e8) != ',')) {
              fVar47 = 1.0;
              if (((ulong)ppppppplVar46 & 1) == 0) goto LAB_10a1c2348;
              goto LAB_10a1c23cc;
            }
            ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
            ppppppplVar46 = ppppppplVar40;
            FUN_10a1cd4a4(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8,&fStack_134);
            bVar15 = true;
            if ((fStack_134 <= 1.0) && (bVar15 = false, !NAN(fStack_134))) {
              bVar15 = fStack_134 < 0.0;
            }
            fVar47 = fStack_134;
            if (((uint)ppppppplVar46 & (uint)!bVar15) == 0) goto LAB_10a1c23cc;
LAB_10a1c2348:
            iVar3 = (int)ppppppplStack_f8;
            if ((((0xff < (int)ppppppplStack_f8) ||
                 (iVar11 = uStack_f0._4_4_, 0xff < uStack_f0._4_4_)) ||
                (iVar10 = (int)uStack_f0, 0xff < (int)uStack_f0)) ||
               (((func_0x00010a1cd424(ppppppplVar40,ppppppplVar23,&ppppppplStack_e8),
                 ppppppplVar23 <= ppppppplStack_e8 ||
                 (*(char *)((long)ppppppplVar40 + (long)ppppppplStack_e8) != ')')) ||
                ((long *******)((long)ppppppplStack_e8 + 1) != ppppppplVar23)))) goto LAB_10a1c23cc;
            param_3 = 255.0;
            fStack_e0 = (float)iVar3 / 255.0;
            param_4 = (float)iVar11 / 255.0;
            fStack_d8 = (float)iVar10 / 255.0;
            ppppppplVar48 = (long *******)(ulong)(uint)fStack_d8;
            fStack_dc = param_4;
            fStack_d4 = fVar47;
          }
LAB_10a1c2558:
          fVar12 = fStack_d4;
          fVar47 = fStack_d8;
          uVar7 = CONCAT44(fStack_dc,fStack_e0);
          pppppplStack_1f8 = (long ******)0x40;
          __Znwm();
          pppppplStack_1f8[1] = (long *****)0x0;
          pppppplStack_1f8[2] = (long *****)0x0;
          *pppppplStack_1f8 = (long *****)&PTR_FUN_110bad3b8;
          ppppppplStack_200 = (long *******)(pppppplStack_1f8 + 3);
          *ppppppplStack_200 = (long ******)&PTR_DAT_110bad408;
          uVar4 = *(undefined4 *)(ppppppplVar17 + 4);
          *(undefined8 *)((long)pppppplStack_1f8 + 0x24) = uVar7;
          *(float *)((long)pppppplStack_1f8 + 0x2c) = fVar47;
          *(undefined1 *)(pppppplStack_1f8 + 6) = 1;
          *(float *)((long)pppppplStack_1f8 + 0x34) = fVar12;
          *(undefined1 *)(pppppplStack_1f8 + 7) = 1;
          *(undefined4 *)(pppppplStack_1f8 + 4) = uVar4;
          ppppppplVar23 = ppppppplVar40;
        }
LAB_10a1c26cc:
        if ((long)uStack_140 < 0) {
          __ZdlPv(ppppppplStack_150);
        }
      }
    }
    else {
      if (uVar31 <= uVar24) goto LAB_10a1c2a84;
      ppppppplStack_130 = (long *******)((long)ppppppplVar23 + uVar24 + 1);
      ppppppplStack_128 = (long *******)(uVar31 - (uVar24 + 1));
      ppppppplVar17 = (long *******)&ppppppplStack_130;
      FUN_10a1d417c();
      if (ppppppplVar17 == (long *******)0x0) {
        func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f643327,in_x6,
                            in_x7,ppppppplStack_128,ppppppplStack_130);
LAB_10a1c0e74:
        ppppppplStack_200 = (long *******)0x0;
        pppppplStack_1f8 = (long ******)0x0;
      }
      else {
        if (*(char *)((long)ppppppplVar17 + 0x25) == '\x01') goto LAB_10a1c0e74;
        pppppplStack_1f8 = (long ******)0x28;
        __Znwm();
        pppppplStack_1f8[1] = (long *****)0x0;
        pppppplStack_1f8[2] = (long *****)0x0;
        *pppppplStack_1f8 = (long *****)&PTR_FUN_110bad890;
        ppppppplStack_200 = (long *******)(pppppplStack_1f8 + 3);
        *ppppppplStack_200 = (long ******)&PTR_FUN_110bad380;
        *(undefined4 *)(pppppplStack_1f8 + 4) = *(undefined4 *)(ppppppplVar17 + 4);
      }
      iVar44 = 1;
    }
LAB_10a1c0f60:
    if (ppppppplStack_200 != (long *******)0x0) {
LAB_10a1c0f64:
      if (iVar44 == 2) {
        if (*(int *)(ppppppplStack_200 + 1) - 9U < 3) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppplStack_1e8,(&PTR_s_<_110badfb0)[*(int *)(ppppppplStack_200 + 1) - 9U],1);
        }
      }
      else if (iVar44 == 1) {
        if (plStack_188 != (long *)0x0) {
          plVar26 = (long *)(long)*(int *)(ppppppplStack_200 + 1);
          uVar31 = (long)plStack_188 - 1;
          if (((ulong)plStack_188 & uVar31) == 0) {
            plVar32 = (long *)(uVar31 & (ulong)plVar26);
          }
          else {
            plVar32 = plVar26;
            if (plStack_188 <= plVar26) {
              uVar24 = 0;
              if (plStack_188 != (long *)0x0) {
                uVar24 = (ulong)plVar26 / (ulong)plStack_188;
              }
              plVar32 = (long *)((long)plVar26 - uVar24 * (long)plStack_188);
            }
          }
          plVar34 = *(long **)(lStack_190 + (long)plVar32 * 8);
          if (plVar34 != (long *)0x0) {
            do {
              while( true ) {
                plVar34 = (long *)*plVar34;
                if (plVar34 == (long *)0x0) goto LAB_10a1c102c;
                plVar36 = (long *)plVar34[1];
                if (plVar36 != plVar26) break;
                if (*(int *)(plVar34 + 2) == *(int *)(ppppppplStack_200 + 1)) goto LAB_10a1c105c;
              }
              if (((ulong)plStack_188 & uVar31) == 0) {
                plVar36 = (long *)((ulong)plVar36 & uVar31);
              }
              else if (plStack_188 <= plVar36) {
                uVar24 = 0;
                if (plStack_188 != (long *)0x0) {
                  uVar24 = (ulong)plVar36 / (ulong)plStack_188;
                }
                plVar36 = (long *)((long)plVar36 - uVar24 * (long)plStack_188);
              }
            } while (plVar36 == plVar32);
          }
        }
LAB_10a1c102c:
        func_0x00010ae06f08(1,0x12,&UNK_10f642cb1,&UNK_10f642cb1,0xffffffff,&UNK_10f6432ec,in_x6,
                            in_x7,uStack_1c8,ppppppplStack_1d0);
      }
      else {
LAB_10a1c105c:
        uVar31 = CONCAT17(uStack_1d9,uStack_1e0);
        if (-1 < (char)bStack_1d1) {
          uVar31 = (ulong)bStack_1d1;
        }
        if (uVar31 != 0) {
          ppppppplVar17 = (long *******)0x40;
          __Znwm();
          ppppppplVar17[1] = (long ******)0x0;
          ppppppplVar17[2] = (long ******)0x0;
          *ppppppplVar17 = (long ******)&PTR_FUN_110bad840;
          ppppppplVar48 = (long *******)0x0;
          ppppppplVar17[6] = (long ******)0x0;
          ppppppplVar17[5] = (long ******)0x0;
          ppppppplVar17[4] = (long ******)0x0;
          ppppppplVar17[3] = (long ******)0x0;
          *(undefined4 *)(ppppppplVar17 + 7) = 0x3f800000;
          ppppppplVar23 = ppppppplVar17 + 3;
          ppppppplStack_128 = ppppppplVar17;
          for (plVar26 = plStack_180; ppppppplStack_130 = ppppppplVar23, plVar26 != (long *)0x0;
              plVar26 = (long *)*plVar26) {
            lVar18 = plVar26[4];
            if (plVar26[3] == lVar18) goto LAB_10a1c2ad0;
            ppppppplStack_150 = (long *******)(plVar26 + 2);
            FUN_10a1d3b48(ppppppplVar23,ppppppplStack_150,&UNK_10dd5b8f9,&ppppppplStack_150,
                          &ppppppplStack_160);
            FUN_10a1c2cac(ppppppplVar23 + 3,lVar18 + -0x10);
            ppppppplVar23 = ppppppplStack_130;
          }
          FUN_10a1c2d28(&ppppppplStack_130,&pppppplStack_1c0);
          ppppppplVar23 = ppppppplStack_130;
          bVar5 = bStack_1d1;
          uVar9 = uStack_1d9;
          ppplVar8 = ppplStack_1e8;
          pppplVar2 = param_1[1];
          if (pppplVar2 < param_1[2]) {
            fStack_d8 = (float)uStack_1d8;
            fStack_d4._0_3_ = (undefined3)((uint7)uStack_1d8 >> 0x20);
            fStack_e0 = (float)uStack_1e0;
            fStack_dc = (float)(CONCAT17(uStack_1d9,uStack_1e0) >> 0x20);
            uStack_1e0 = 0;
            uStack_1d9 = 0;
            uStack_1d8 = 0;
            bStack_1d1 = 0;
            ppplStack_1e8 = (long ***)0x0;
            ppppppplStack_130 = (long *******)0x0;
            ppppppplStack_128 = (long *******)0x0;
            *pppplVar2 = ppplVar8;
            *(ulong *)((long)pppplVar2 + 0xf) = CONCAT35(fStack_d4._0_3_,CONCAT41(fStack_d8,uVar9));
            pppplVar2[1] = (long ***)CONCAT44(fStack_dc,fStack_e0);
            *(byte *)((long)pppplVar2 + 0x17) = bVar5;
            *(undefined4 *)(pppplVar2 + 3) = 0;
            ppppplVar30 = (long *****)(pppplVar2 + 6);
            pppplVar2[4] = (long ***)ppppppplVar23;
            pppplVar2[5] = (long ***)ppppppplVar17;
          }
          else {
            ppppplVar30 = param_1;
            FUN_10a1cd0e0(param_1,&ppplStack_1e8,&ppppppplStack_130);
          }
          ppppppplVar17 = ppppppplStack_128;
          param_1[1] = (long ****)ppppplVar30;
          if ((char)bStack_1d1 < '\0') {
            *(undefined1 *)ppplStack_1e8 = 0;
            uStack_1e0 = 0;
            uStack_1d9 = 0;
          }
          else {
            ppplStack_1e8 = (long ***)((ulong)ppplStack_1e8 & 0xffffffffffffff00);
            bStack_1d1 = 0;
          }
          ppppppplVar23 = (long *******)0x0;
          if (ppppppplStack_128 != (long *******)0x0) {
            ppppppplVar40 = ppppppplStack_128 + 1;
            do {
              pppppplVar27 = *ppppppplVar40;
              cVar6 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(ppppppplVar40,0x10);
              if (bVar15) {
                *ppppppplVar40 = (long ******)((long)pppppplVar27 + -1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (pppppplVar27 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_128)[2])(ppppppplStack_128);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar17);
            }
          }
        }
        ppppppplVar17 = ppppppplStack_1b8;
        if (iVar44 == 0) {
          uVar31 = ((ulong)(uint)((int)ppppppplStack_200 << 3) + 8 ^
                   (ulong)ppppppplStack_200 >> 0x20) * -0x622015f714c7d297;
          uVar31 = ((ulong)ppppppplStack_200 >> 0x20 ^ uVar31 >> 0x2f ^ uVar31) *
                   -0x622015f714c7d297;
          ppppppplVar40 = (long *******)((uVar31 ^ uVar31 >> 0x2f) * -0x622015f714c7d297);
          if (ppppppplStack_1b8 != (long *******)0x0) {
            pcVar25 = (char *)((long)ppppppplStack_1b8 + -1);
            if (((ulong)ppppppplStack_1b8 & (ulong)pcVar25) == 0) {
              ppppppplVar23 = (long *******)((ulong)ppppppplVar40 & (ulong)pcVar25);
            }
            else {
              ppppppplVar23 = ppppppplVar40;
              if (ppppppplStack_1b8 <= ppppppplVar40) {
                uVar31 = 0;
                if (ppppppplStack_1b8 != (long *******)0x0) {
                  uVar31 = (ulong)ppppppplVar40 / (ulong)ppppppplStack_1b8;
                }
                ppppppplVar23 =
                     (long *******)((long)ppppppplVar40 - uVar31 * (long)ppppppplStack_1b8);
              }
            }
            if (pppppplStack_1c0[(long)ppppppplVar23] != (long *****)0x0) {
              for (ppppppplVar46 = (long *******)*pppppplStack_1c0[(long)ppppppplVar23];
                  ppppppplVar46 != (long *******)0x0; ppppppplVar46 = (long *******)*ppppppplVar46)
              {
                ppppppplVar28 = (long *******)ppppppplVar46[1];
                if (ppppppplVar28 == ppppppplVar40) {
                  if ((long *******)ppppppplVar46[2] == ppppppplStack_200) goto LAB_10a1c1a1c;
                }
                else {
                  if (((ulong)ppppppplStack_1b8 & (ulong)pcVar25) == 0) {
                    ppppppplVar28 = (long *******)((ulong)ppppppplVar28 & (ulong)pcVar25);
                  }
                  else if (ppppppplStack_1b8 <= ppppppplVar28) {
                    uVar31 = 0;
                    if (ppppppplStack_1b8 != (long *******)0x0) {
                      uVar31 = (ulong)ppppppplVar28 / (ulong)ppppppplStack_1b8;
                    }
                    ppppppplVar28 =
                         (long *******)((long)ppppppplVar28 - uVar31 * (long)ppppppplStack_1b8);
                  }
                  if (ppppppplVar28 != ppppppplVar23) break;
                }
              }
            }
          }
          ppppppplVar46 = (long *******)0x28;
          __Znwm();
          ppppppplStack_128 = &pppppplStack_1c0;
          uStack_120 = (long *******)0x1;
          *ppppppplVar46 = (long ******)0x0;
          ppppppplVar46[1] = (long ******)ppppppplVar40;
          ppppppplVar46[2] = (long ******)ppppppplStack_200;
          ppppppplVar46[3] = pppppplStack_1f8;
          if (pppppplStack_1f8 != (long ******)0x0) {
            pppppplVar27 = pppppplStack_1f8 + 1;
            do {
              cVar6 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pppppplVar27,0x10);
              if (bVar15) {
                *pppppplVar27 = (long *****)((long)*pppppplVar27 + 1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          *(undefined4 *)(ppppppplVar46 + 4) = 0;
          fVar47 = (float)(uStack_1a8 + 1);
          ppppppplVar48 = (long *******)(ulong)(uint)fVar47;
          param_3 = fStack_1a0;
          ppppppplStack_130 = ppppppplVar46;
          if ((ppppppplVar17 == (long *******)0x0) ||
             (param_4 = fStack_1a0 * (float)ppppppplVar17, param_4 < fVar47)) {
            uVar31 = 1;
            if ((long *******)0x2 < ppppppplVar17) {
              uVar31 = (ulong)(((ulong)ppppppplVar17 & (ulong)((long)ppppppplVar17 + -1)) != 0);
            }
            ppppppplVar23 = (long *******)(uVar31 | (long)ppppppplVar17 << 1);
            ppppppplVar48 = (long *******)(ulong)(uint)(fVar47 / fStack_1a0);
            ppppppplVar17 = (long *******)(long)(fVar47 / fStack_1a0);
            if (ppppppplVar23 <= ppppppplVar17) {
              ppppppplVar23 = ppppppplVar17;
            }
            if ((char *)((long)ppppppplVar23 + -1) == (char *)0x0) {
              ppppppplVar23 = (long *******)0x2;
            }
            else if (((ulong)ppppppplVar23 & (ulong)((long)ppppppplVar23 + -1)) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            ppppppplVar17 = ppppppplStack_1b8;
            if (ppppppplStack_1b8 < ppppppplVar23) {
LAB_10a1c14ac:
              if ((ulong)ppppppplVar23 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10a1c2ad0;
              }
              pppppplVar27 = (long ******)((long)ppppppplVar23 << 3);
              __Znwm();
              bVar15 = pppppplStack_1c0 != (long ******)0x0;
              pppppplStack_1c0 = pppppplVar27;
              if (bVar15) {
                __ZdlPv();
              }
              ppppppplVar17 = (long *******)0x0;
              do {
                pppppplStack_1c0[(long)ppppppplVar17] = (long *****)0x0;
                ppppppplVar17 = (long *******)((long)ppppppplVar17 + 1);
              } while (ppppppplVar23 != ppppppplVar17);
              ppppppplStack_1b8 = ppppppplVar23;
              if (ppppppplStack_1b0 != (long *******)0x0) {
                ppppppplVar17 = (long *******)ppppppplStack_1b0[1];
                pcVar25 = (char *)((long)ppppppplVar23 + -1);
                if (((ulong)ppppppplVar23 & (ulong)pcVar25) == 0) {
                  ppppppplVar17 = (long *******)((ulong)ppppppplVar17 & (ulong)pcVar25);
                }
                else if (ppppppplVar23 <= ppppppplVar17) {
                  uVar31 = 0;
                  if (ppppppplVar23 != (long *******)0x0) {
                    uVar31 = (ulong)ppppppplVar17 / (ulong)ppppppplVar23;
                  }
                  ppppppplVar17 = (long *******)((long)ppppppplVar17 - uVar31 * (long)ppppppplVar23)
                  ;
                }
                pppppplStack_1c0[(long)ppppppplVar17] = (long *****)&ppppppplStack_1b0;
                ppppppplVar28 = (long *******)*ppppppplStack_1b0;
                ppppppplVar41 = ppppppplStack_1b0;
                while (ppppppplVar28 != (long *******)0x0) {
                  ppppppplVar35 = (long *******)ppppppplVar28[1];
                  if (((ulong)ppppppplVar23 & (ulong)pcVar25) == 0) {
                    ppppppplVar35 = (long *******)((ulong)ppppppplVar35 & (ulong)pcVar25);
                  }
                  else if (ppppppplVar23 <= ppppppplVar35) {
                    uVar31 = 0;
                    if (ppppppplVar23 != (long *******)0x0) {
                      uVar31 = (ulong)ppppppplVar35 / (ulong)ppppppplVar23;
                    }
                    ppppppplVar35 =
                         (long *******)((long)ppppppplVar35 - uVar31 * (long)ppppppplVar23);
                  }
                  ppppppplVar33 = ppppppplVar28;
                  if (ppppppplVar35 != ppppppplVar17) {
                    if (pppppplStack_1c0[(long)ppppppplVar35] == (long *****)0x0) {
                      pppppplStack_1c0[(long)ppppppplVar35] = (long *****)ppppppplVar41;
                      ppppppplVar17 = ppppppplVar35;
                    }
                    else {
                      *ppppppplVar41 = *ppppppplVar28;
                      *ppppppplVar28 = (long ******)*pppppplStack_1c0[(long)ppppppplVar35];
                      *pppppplStack_1c0[(long)ppppppplVar35] = (long ****)ppppppplVar28;
                      ppppppplVar33 = ppppppplVar41;
                    }
                  }
                  ppppppplVar41 = ppppppplVar33;
                  ppppppplVar28 = (long *******)*ppppppplVar33;
                }
              }
            }
            else if (ppppppplVar23 < ppppppplStack_1b8) {
              ppppppplVar48 = (long *******)(ulong)(uint)((float)uStack_1a8 / fStack_1a0);
              ppppppplVar28 = (long *******)(long)((float)uStack_1a8 / fStack_1a0);
              param_3 = fStack_1a0;
              if ((ppppppplStack_1b8 < (long *******)0x3) ||
                 (((ulong)ppppppplStack_1b8 & (ulong)((long)ppppppplStack_1b8 + -1)) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *******)0x1 < ppppppplVar28) {
                ppppppplVar28 =
                     (long *******)(1L << (-LZCOUNT((char *)((long)ppppppplVar28 + -1)) & 0x3fU));
              }
              pppppplVar27 = pppppplStack_1c0;
              if (ppppppplVar23 <= ppppppplVar28) {
                ppppppplVar23 = ppppppplVar28;
              }
              if (ppppppplVar23 < ppppppplVar17) {
                if (ppppppplVar23 != (long *******)0x0) goto LAB_10a1c14ac;
                pppppplStack_1c0 = (long ******)0x0;
                if (pppppplVar27 != (long ******)0x0) {
                  __ZdlPv();
                }
                ppppppplStack_1b8 = (long *******)0x0;
              }
            }
            ppppppplVar17 = ppppppplStack_1b8;
            if (((ulong)ppppppplStack_1b8 & (ulong)((long)ppppppplStack_1b8 + -1)) == 0) {
              ppppppplVar23 =
                   (long *******)((ulong)((long)ppppppplStack_1b8 + -1) & (ulong)ppppppplVar40);
            }
            else {
              ppppppplVar23 = ppppppplVar40;
              if (ppppppplStack_1b8 <= ppppppplVar40) {
                uVar31 = 0;
                if (ppppppplStack_1b8 != (long *******)0x0) {
                  uVar31 = (ulong)ppppppplVar40 / (ulong)ppppppplStack_1b8;
                }
                ppppppplVar23 =
                     (long *******)((long)ppppppplVar40 - uVar31 * (long)ppppppplStack_1b8);
              }
            }
          }
          pppppplVar27 = (long ******)pppppplStack_1c0[(long)ppppppplVar23];
          if (pppppplVar27 == (long ******)0x0) {
            *ppppppplVar46 = (long ******)ppppppplStack_1b0;
            pppppplStack_1c0[(long)ppppppplVar23] = (long *****)&ppppppplStack_1b0;
            ppppppplStack_1b0 = ppppppplVar46;
            if (*ppppppplVar46 != (long ******)0x0) {
              ppppppplVar23 = (long *******)(*ppppppplVar46)[1];
              if (((ulong)ppppppplVar17 & (ulong)((long)ppppppplVar17 + -1)) == 0) {
                ppppppplVar23 =
                     (long *******)((ulong)ppppppplVar23 & (ulong)((long)ppppppplVar17 + -1));
              }
              else if (ppppppplVar17 <= ppppppplVar23) {
                uVar31 = 0;
                if (ppppppplVar17 != (long *******)0x0) {
                  uVar31 = (ulong)ppppppplVar23 / (ulong)ppppppplVar17;
                }
                ppppppplVar23 = (long *******)((long)ppppppplVar23 - uVar31 * (long)ppppppplVar17);
              }
              pppppplVar27 = pppppplStack_1c0 + (long)ppppppplVar23;
              goto LAB_10a1c1a0c;
            }
          }
          else {
            *ppppppplVar46 = (long ******)*pppppplVar27;
LAB_10a1c1a0c:
            *pppppplVar27 = (long *****)ppppppplVar46;
          }
          uStack_1a8 = uStack_1a8 + 1;
LAB_10a1c1a1c:
          *(int *)(ppppppplVar46 + 4) = iStack_20c;
          plVar26 = &lStack_190;
          FUN_10a1d3db4(plVar26,*(undefined4 *)(ppppppplStack_200 + 1),ppppppplStack_200 + 1);
          puVar37 = (undefined8 *)plVar26[4];
          if (puVar37 < (undefined8 *)plVar26[5]) {
            *puVar37 = ppppppplStack_200;
            puVar37[1] = pppppplStack_1f8;
            if (pppppplStack_1f8 != (long ******)0x0) {
              pppppplVar27 = pppppplStack_1f8 + 1;
              do {
                cVar6 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppplVar27,0x10);
                if (bVar15) {
                  *pppppplVar27 = (long *****)((long)*pppppplVar27 + 1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            puVar37 = puVar37 + 2;
          }
          else {
            lVar18 = plVar26[3];
            lVar43 = (long)puVar37 - lVar18;
            lVar45 = lVar43 >> 4;
            uVar31 = lVar45 + 1;
            if (uVar31 >> 0x3c != 0) {
              FUN_10a1cd254();
              goto LAB_10a1c2ad0;
            }
            uVar29 = plVar26[5] - lVar18;
            uVar24 = (long)uVar29 >> 3;
            if (uVar24 <= uVar31) {
              uVar24 = uVar31;
            }
            if (0x7fffffffffffffef < uVar29) {
              uVar24 = 0xfffffffffffffff;
            }
            if (uVar24 >> 0x3c != 0) {
              func_0x000109ffded8();
              goto LAB_10a1c2ad0;
            }
            lVar19 = uVar24 << 4;
            __Znwm();
            puVar1 = (undefined8 *)(lVar19 + lVar43);
            *puVar1 = ppppppplStack_200;
            puVar1[1] = pppppplStack_1f8;
            if (pppppplStack_1f8 != (long ******)0x0) {
              pppppplVar27 = pppppplStack_1f8 + 1;
              do {
                cVar6 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppplVar27,0x10);
                if (bVar15) {
                  *pppppplVar27 = (long *****)((long)*pppppplVar27 + 1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              lVar18 = plVar26[3];
              lVar43 = plVar26[4] - lVar18;
              lVar45 = lVar43 >> 4;
            }
            puVar37 = puVar1 + 2;
            _memcpy(puVar1 + lVar45 * -2,lVar18,lVar43);
            plVar26[3] = (long)(puVar1 + lVar45 * -2);
            plVar26[4] = (long)puVar37;
            plVar26[5] = lVar19 + uVar24 * 0x10;
            if (lVar18 != 0) {
              __ZdlPv(lVar18);
            }
          }
          iStack_20c = iStack_20c + 1;
          plVar26[4] = (long)puVar37;
        }
        else {
          ppppppplStack_200 = ppppppplStack_200 + 1;
          plVar26 = &lStack_190;
          FUN_10a1d3db4(plVar26,*(int *)ppppppplStack_200,ppppppplStack_200);
          if (plVar26[3] == plVar26[4]) goto LAB_10a1c2ad0;
          lVar18 = plVar26[4] + -0x10;
          FUN_10a1d3a40();
          plVar26[4] = lVar18;
          plVar26 = &lStack_190;
          FUN_10a1d3db4(plVar26,*(int *)ppppppplStack_200,ppppppplStack_200);
          if ((plVar26[3] == plVar26[4]) && (plStack_188 != (long *)0x0)) {
            plVar26 = (long *)(long)*(int *)ppppppplStack_200;
            uVar31 = (long)plStack_188 - 1;
            if (((ulong)plStack_188 & uVar31) == 0) {
              plVar32 = (long *)(uVar31 & (ulong)plVar26);
            }
            else {
              plVar32 = plVar26;
              if (plStack_188 <= plVar26) {
                uVar24 = 0;
                if (plStack_188 != (long *)0x0) {
                  uVar24 = (ulong)plVar26 / (ulong)plStack_188;
                }
                plVar32 = (long *)((long)plVar26 - uVar24 * (long)plStack_188);
              }
            }
            puVar37 = *(undefined8 **)(lStack_190 + (long)plVar32 * 8);
            if ((puVar37 != (undefined8 *)0x0) &&
               (pplVar42 = (long **)*puVar37, pplVar42 != (long **)0x0)) {
LAB_10a1c15d4:
              plVar34 = pplVar42[1];
              if (plVar34 == plVar26) {
                if (*(int *)(pplVar42 + 2) != *(int *)ppppppplStack_200) goto LAB_10a1c1618;
                if (((ulong)plStack_188 & uVar31) == 0) {
                  plVar26 = (long *)(uVar31 & (ulong)plVar26);
                }
                else if (plStack_188 <= plVar26) {
                  uVar24 = 0;
                  if (plStack_188 != (long *)0x0) {
                    uVar24 = (ulong)plVar26 / (ulong)plStack_188;
                  }
                  plVar26 = (long *)((long)plVar26 - uVar24 * (long)plStack_188);
                }
                plVar32 = *pplVar42;
                pplVar13 = *(long ***)(lStack_190 + (long)plVar26 * 8);
                do {
                  pplVar38 = pplVar13;
                  pplVar13 = (long **)*pplVar38;
                } while ((long **)*pplVar38 != pplVar42);
                if (pplVar38 == &plStack_180) {
LAB_10a1c2294:
                  if (plVar32 == (long *)0x0) {
LAB_10a1c22c8:
                    *(undefined8 *)(lStack_190 + (long)plVar26 * 8) = 0;
                    plVar32 = *pplVar42;
                    goto LAB_10a1c22d0;
                  }
                  plVar34 = (long *)plVar32[1];
                  if (((ulong)plStack_188 & uVar31) == 0) {
                    plVar36 = (long *)((ulong)plVar34 & uVar31);
                  }
                  else {
                    plVar36 = plVar34;
                    if (plStack_188 <= plVar34) {
                      uVar24 = 0;
                      if (plStack_188 != (long *)0x0) {
                        uVar24 = (ulong)plVar34 / (ulong)plStack_188;
                      }
                      plVar36 = (long *)((long)plVar34 - uVar24 * (long)plStack_188);
                    }
                  }
                  if (plVar36 != plVar26) goto LAB_10a1c22c8;
LAB_10a1c22d8:
                  if (((ulong)plStack_188 & uVar31) == 0) {
                    plVar34 = (long *)((ulong)plVar34 & uVar31);
                  }
                  else if (plStack_188 <= plVar34) {
                    uVar31 = 0;
                    if (plStack_188 != (long *)0x0) {
                      uVar31 = (ulong)plVar34 / (ulong)plStack_188;
                    }
                    plVar34 = (long *)((long)plVar34 - uVar31 * (long)plStack_188);
                  }
                  if (plVar34 != plVar26) {
                    *(long ***)(lStack_190 + (long)plVar34 * 8) = pplVar38;
                    plVar32 = *pplVar42;
                  }
                }
                else {
                  plVar34 = pplVar38[1];
                  if (((ulong)plStack_188 & uVar31) == 0) {
                    plVar34 = (long *)((ulong)plVar34 & uVar31);
                  }
                  else if (plStack_188 <= plVar34) {
                    uVar24 = 0;
                    if (plStack_188 != (long *)0x0) {
                      uVar24 = (ulong)plVar34 / (ulong)plStack_188;
                    }
                    plVar34 = (long *)((long)plVar34 - uVar24 * (long)plStack_188);
                  }
                  if (plVar34 != plVar26) goto LAB_10a1c2294;
LAB_10a1c22d0:
                  if (plVar32 != (long *)0x0) {
                    plVar34 = (long *)plVar32[1];
                    goto LAB_10a1c22d8;
                  }
                }
                *pplVar38 = plVar32;
                *pplVar42 = (long *)0x0;
                lStack_178 = lStack_178 + -1;
                FUN_10a1d3988(pplVar42 + 3);
                __ZdlPv(pplVar42);
              }
              else {
                if (((ulong)plStack_188 & uVar31) == 0) {
                  plVar34 = (long *)((ulong)plVar34 & uVar31);
                }
                else if (plStack_188 <= plVar34) {
                  uVar24 = 0;
                  if (plStack_188 != (long *)0x0) {
                    uVar24 = (ulong)plVar34 / (ulong)plStack_188;
                  }
                  plVar34 = (long *)((long)plVar34 - uVar24 * (long)plStack_188);
                }
                if (plVar34 == plVar32) goto LAB_10a1c1618;
              }
            }
          }
        }
      }
    }
LAB_10a1c1b20:
    ppppppplStack_1d0 = (long *******)0x0;
    uStack_1c8 = 0;
    if (pppppplStack_1f8 != (long ******)0x0) {
      pppppplVar27 = pppppplStack_1f8 + 1;
      do {
        ppppplVar30 = *pppppplVar27;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(pppppplVar27,0x10);
        if (bVar15) {
          *pppppplVar27 = (long *****)((long)ppppplVar30 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppppplVar30 == (long *****)0x0) {
        (*(code *)(*pppppplStack_1f8)[2])(pppppplStack_1f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_1f8);
      }
    }
    goto LAB_10a1c1b5c;
  }
  pppppplVar20 = (long ******)0x1;
  ppppplVar39 = param_6;
  ppppplStack_110 = param_1;
  FUN_10a1cc520();
  *pppppplVar20 = param_5;
  pppppplVar20[1] = param_6;
  *(undefined4 *)(pppppplVar20 + 3) = 1;
  pppppplVar20[4] = (long *****)0x0;
  pppppplVar20[5] = (long *****)0x0;
  pppppplVar27 = pppppplVar20 + 6;
  pppplVar2 = (long ****)((long)pppppplVar20 + ((long)*param_1 - (long)param_1[1]));
  ppppppplStack_130 = (long *******)pppppplVar20;
  ppppppplStack_128 = (long *******)pppppplVar20;
  uStack_120 = (long *******)pppppplVar27;
  pppppplStack_118 = pppppplVar20 + (long)ppppplVar39 * 6;
  FUN_10a1cc564(*param_1,param_1[1],pppplVar2);
  ppppppplStack_130 = (long *******)*param_1;
  *param_1 = pppplVar2;
  param_1[1] = (long ****)pppppplVar27;
  pppppplStack_118 = (long ******)param_1[2];
  param_1[2] = (long ****)(pppppplVar20 + (long)ppppplVar39 * 6);
  ppppppplStack_128 = ppppppplStack_130;
  uStack_120 = ppppppplStack_130;
  FUN_10a1cc6cc(&ppppppplStack_130);
  param_1[1] = (long ****)pppppplVar27;
  goto LAB_10a1c2a1c;
LAB_10a1c1618:
  pplVar42 = (long **)*pplVar42;
  if (pplVar42 == (long **)0x0) goto LAB_10a1c1b20;
  goto LAB_10a1c15d4;
LAB_10a1c27bc:
  if (bVar15) {
    if (0x7ffffffffffffff7 < uStack_1c8) {
      func_0x000109ffde50();
      goto LAB_10a1c2ad0;
    }
    if (uStack_1c8 < 0x17) {
      uStack_d0 = (long *******)CONCAT17((char)uStack_1c8,(undefined7)uStack_d0);
      pfVar21 = &fStack_e0;
      if (uStack_1c8 != 0) goto LAB_10a1c2818;
    }
    else {
      pfVar22 = (float *)0x19;
      if ((uStack_1c8 | 7) != 0x17) {
        pfVar22 = (float *)((uStack_1c8 | 7) + 1);
      }
      pfVar21 = pfVar22;
      __Znwm();
      uStack_d0 = (long *******)((ulong)pfVar22 | 0x8000000000000000);
      fStack_d8 = (float)uVar31;
      fStack_d4 = (float)(uVar31 >> 0x20);
      fStack_e0 = SUB84(pfVar21,0);
      fStack_dc = (float)((ulong)pfVar21 >> 0x20);
LAB_10a1c2818:
      _memmove(pfVar21,ppppppplVar23,uVar31);
    }
    *(undefined1 *)((long)pfVar21 + uVar31) = 0;
    pfVar22 = &fStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(pfVar22,0,"<",1);
    ppppppplStack_128 = *(long ********)(pfVar22 + 2);
    ppppppplStack_130 = *(long ********)pfVar22;
    uStack_120 = *(long ********)(pfVar22 + 4);
    pfVar22[2] = 0.0;
    pfVar22[3] = 0.0;
    pfVar22[4] = 0.0;
    pfVar22[5] = 0.0;
    pfVar22[0] = 0.0;
    pfVar22[1] = 0.0;
    ppppppplVar48 = ppppppplStack_128;
    ppppppplVar23 = ppppppplStack_130;
    if (-1 < (long)uStack_120) {
      ppppppplVar48 = (long *******)((ulong)uStack_120 >> 0x38);
      ppppppplVar23 = (long *******)&ppppppplStack_130;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppplStack_1e8,ppppppplVar23,ppppppplVar48);
    if ((long)uStack_120 < 0) {
      __ZdlPv(ppppppplStack_130);
    }
  }
LAB_10a1c28a0:
  uVar31 = CONCAT17(uStack_1d9,uStack_1e0);
  if (-1 < (char)bStack_1d1) {
    uVar31 = (ulong)bStack_1d1;
  }
  if (uVar31 != 0) {
    ppppppplVar23 = (long *******)0x40;
    __Znwm();
    ppppppplVar23[1] = (long ******)0x0;
    ppppppplVar23[2] = (long ******)0x0;
    *ppppppplVar23 = (long ******)&PTR_FUN_110bad840;
    ppppppplVar23[4] = (long ******)0x0;
    ppppppplVar23[3] = (long ******)0x0;
    ppppppplVar23[6] = (long ******)0x0;
    ppppppplVar23[5] = (long ******)0x0;
    *(undefined4 *)(ppppppplVar23 + 7) = 0x3f800000;
    ppppppplVar48 = ppppppplVar23 + 3;
    ppppppplStack_128 = ppppppplVar23;
    for (plVar26 = plStack_180; ppppppplStack_130 = ppppppplVar48, plVar26 != (long *)0x0;
        plVar26 = (long *)*plVar26) {
      lVar18 = plVar26[4];
      if (plVar26[3] == lVar18) goto LAB_10a1c2ad0;
      ppppppplStack_150 = (long *******)(plVar26 + 2);
      FUN_10a1d3b48(ppppppplVar48,ppppppplStack_150,&UNK_10dd5b8f9,&ppppppplStack_150,
                    &ppppppplStack_160);
      FUN_10a1c2cac(ppppppplVar48 + 3,lVar18 + -0x10);
      ppppppplVar48 = ppppppplStack_130;
    }
    FUN_10a1c2d28(&ppppppplStack_130,&pppppplStack_1c0);
    ppppppplVar48 = ppppppplStack_130;
    bVar5 = bStack_1d1;
    uVar9 = uStack_1d9;
    ppplVar8 = ppplStack_1e8;
    pppplVar2 = param_1[1];
    if (pppplVar2 < param_1[2]) {
      fStack_d8 = (float)uStack_1d8;
      fStack_d4._0_3_ = (undefined3)((uint7)uStack_1d8 >> 0x20);
      fStack_e0 = (float)uStack_1e0;
      fStack_dc = (float)(CONCAT17(uStack_1d9,uStack_1e0) >> 0x20);
      uStack_1e0 = 0;
      uStack_1d9 = 0;
      uStack_1d8 = 0;
      bStack_1d1 = 0;
      ppplStack_1e8 = (long ***)0x0;
      ppppppplStack_130 = (long *******)0x0;
      ppppppplStack_128 = (long *******)0x0;
      *pppplVar2 = ppplVar8;
      *(ulong *)((long)pppplVar2 + 0xf) = CONCAT35(fStack_d4._0_3_,CONCAT41(fStack_d8,uVar9));
      pppplVar2[1] = (long ***)CONCAT44(fStack_dc,fStack_e0);
      *(byte *)((long)pppplVar2 + 0x17) = bVar5;
      *(undefined4 *)(pppplVar2 + 3) = 0;
      pppplVar2[4] = (long ***)ppppppplVar48;
      pppplVar2[5] = (long ***)ppppppplVar23;
      ppppplVar39 = (long *****)(pppplVar2 + 6);
    }
    else {
      ppppplVar39 = param_1;
      FUN_10a1cd0e0(param_1,&ppplStack_1e8,&ppppppplStack_130);
    }
    ppppppplVar48 = ppppppplStack_128;
    param_1[1] = (long ****)ppppplVar39;
    if ((char)bStack_1d1 < '\0') {
      *(undefined1 *)ppplStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d9 = 0;
    }
    else {
      ppplStack_1e8 = (long ***)((ulong)ppplStack_1e8 & 0xffffffffffffff00);
      bStack_1d1 = 0;
    }
    if (ppppppplStack_128 != (long *******)0x0) {
      ppppppplVar23 = ppppppplStack_128 + 1;
      do {
        pppppplVar27 = *ppppppplVar23;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
        if (bVar15) {
          *ppppppplVar23 = (long ******)((long)pppppplVar27 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppppplVar27 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_128)[2])(ppppppplStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar48);
      }
    }
  }
LAB_10a1c2a1c:
  if ((char)bStack_1d1 < '\0') {
    __ZdlPv(ppplStack_1e8);
  }
  FUN_10a1d39e4(&pppppplStack_1c0);
  FUN_10a1d392c(&lStack_190);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
LAB_10a1c2a84:
  FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10a1c2ad0:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10a1c2ad4);
  (*pcVar14)();
}



/* Entry: 10a1c2cac; end: 10a1c2d27;  */

undefined8 * FUN_10a1c2cac(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a1c2d28; end: 10a1c34cf;  */

void FUN_10a1c2d28(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  undefined8 *puVar14;
  undefined1 uVar15;
  int iVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined8 *puStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  long *plStack_c0;
  char cStack_b1;
  char cStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined1 uStack_98;
  undefined6 uStack_97;
  undefined4 uStack_91;
  char cStack_81;
  char cStack_80;
  uint uStack_78;
  uint uStack_74;
  undefined2 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *param_1;
  FUN_10a1cc72c(lVar5,param_2,6);
  lVar6 = *param_1;
  FUN_10a1cc72c(lVar6,param_2,7);
  if ((-1 < (int)(uint)lVar5) && (-1 < (int)(uint)lVar6)) {
    uVar18 = 6;
    if ((uint)lVar6 <= (uint)lVar5) {
      uVar18 = 7;
    }
    puStack_c8 = (undefined8 *)CONCAT44(puStack_c8._4_4_,uVar18);
    FUN_10a1cc8d0(*param_1,&puStack_c8);
  }
  lVar5 = *param_1;
  FUN_10a1cc72c(lVar5,param_2,8);
  lVar6 = *param_1;
  FUN_10a1cc72c(lVar6,param_2,0);
  lVar7 = *param_1;
  FUN_10a1cc72c(lVar7,param_2,1);
  lVar8 = *param_1;
  FUN_10a1cc72c(lVar8,param_2,2);
  iVar11 = (int)lVar5;
  iVar12 = (int)lVar6;
  iVar16 = (int)lVar7;
  if ((((iVar11 < 0) && (iVar12 < 0)) && (iVar16 < 0)) && ((int)lVar8 < 0)) {
LAB_10a1c3100:
    lVar5 = *param_1;
    FUN_10a1cc72c(lVar5,param_2,0xc);
    lVar6 = *param_1;
    FUN_10a1cc72c(lVar6,param_2,0xd);
    iVar12 = (int)lVar5;
    iVar11 = (int)lVar6;
    if ((-1 < iVar12) || (-1 < iVar11)) {
      uVar18 = 0;
      if (iVar12 < 0) {
        uVar13 = 0;
        uVar15 = 0;
LAB_10a1c3210:
        bVar10 = 0;
LAB_10a1c3218:
        if (-1 < iVar11) {
          lVar5 = *param_1;
          puStack_c8 = (undefined8 *)CONCAT44(puStack_c8._4_4_,0xd);
          FUN_10a1cc830(lVar5,&puStack_c8);
          if (lVar5 == 0) {
            FUN_109ffdddc(&UNK_10f639994);
            goto LAB_10a1c3424;
          }
          lVar6 = *(long *)(lVar5 + 0x18);
          ___dynamic_cast(lVar6,&PTR_DAT_110baded8,&PTR_DAT_110bad390,0);
          plVar17 = *(long **)(lVar5 + 0x20);
          if (plVar17 == (long *)0x0) {
            uVar18 = *(undefined4 *)(lVar6 + 0xc);
          }
          else {
            plVar1 = plVar17 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            uVar18 = *(undefined4 *)(lVar6 + 0xc);
            do {
              lVar5 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar5 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          bVar10 = 1;
        }
      }
      else {
        lVar5 = *param_1;
        puStack_c8 = (undefined8 *)CONCAT44(puStack_c8._4_4_,0xc);
        FUN_10a1cc830(lVar5,&puStack_c8);
        if (lVar5 == 0) {
          FUN_109ffdddc(&UNK_10f639994);
          goto LAB_10a1c3424;
        }
        lVar6 = *(long *)(lVar5 + 0x18);
        if (lVar6 == 0) {
          lVar6 = 0;
LAB_10a1c31dc:
          lVar5 = lVar6 + 0xc;
        }
        else {
          ___dynamic_cast(lVar6,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
          if ((lVar6 == 0) || (plVar17 = *(long **)(lVar5 + 0x20), plVar17 == (long *)0x0))
          goto LAB_10a1c31dc;
          plVar1 = plVar17 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar5 = lVar6 + 0xc;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        uVar13 = *(undefined1 *)(lVar6 + 0xc);
        uStack_91 = *(undefined4 *)(lVar5 + 8);
        uStack_98 = (undefined1)*(undefined8 *)(lVar5 + 1);
        uStack_97 = (undefined6)((ulong)*(undefined8 *)(lVar5 + 1) >> 8);
        uVar15 = *(undefined1 *)(lVar5 + 0xc);
        if (iVar12 <= iVar11) goto LAB_10a1c3210;
        uVar18 = *(undefined4 *)(lVar6 + 0x1c);
        bVar10 = *(byte *)(lVar6 + 0x20);
        if ((bVar10 & 1) == 0) goto LAB_10a1c3218;
      }
      puStack_c8 = (undefined8 *)CONCAT44(puStack_c8._4_4_,0xd);
      FUN_10a1cc8d0(*param_1,&puStack_c8);
      puVar9 = (undefined8 *)0x40;
      __Znwm();
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_110bad3b8;
      puVar14 = puVar9 + 3;
      *puVar14 = &PTR_DAT_110bad408;
      *(undefined1 *)((long)puVar9 + 0x24) = uVar13;
      *(ulong *)((long)puVar9 + 0x25) =
           CONCAT17((undefined1)uStack_91,CONCAT61(uStack_97,uStack_98));
      *(undefined4 *)((long)puVar9 + 0x2c) = uStack_91;
      *(undefined1 *)(puVar9 + 6) = uVar15;
      *(undefined4 *)((long)puVar9 + 0x34) = uVar18;
      *(byte *)(puVar9 + 7) = bVar10;
      *(undefined4 *)(puVar9 + 4) = 0xc;
      lVar5 = *param_1;
      puStack_d8 = (undefined8 *)CONCAT44(puStack_d8._4_4_,0xc);
      puStack_c8 = puVar14;
      plStack_c0 = puVar9;
      FUN_10a1ccc78(lVar5,0xc,&puStack_d8);
      puStack_c8 = (undefined8 *)0x0;
      plStack_c0 = (long *)0x0;
      plVar17 = *(long **)(lVar5 + 0x20);
      *(undefined8 **)(lVar5 + 0x18) = puVar14;
      *(undefined8 **)(lVar5 + 0x20) = puVar9;
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar17 = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar1 = plStack_c0 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uStack_98 = 0;
    cStack_80 = '\0';
    uStack_78 = uStack_78 & 0xffffff00;
    uStack_74 = uStack_74 & 0xffffff00;
    uStack_70 = 0;
    if (iVar11 < 0) {
LAB_10a1c2ebc:
      if ((iVar11 < iVar12) && (iVar16 < iVar12)) {
        uStack_78 = 700;
LAB_10a1c2ed0:
        uStack_74 = CONCAT31(uStack_74._1_3_,1);
      }
      else if (iVar11 < iVar16) {
        lVar5 = *param_1;
        puStack_c8 = (undefined8 *)CONCAT44(puStack_c8._4_4_,1);
        FUN_10a1cc830(lVar5,&puStack_c8);
        if (lVar5 == 0) {
          FUN_109ffdddc(&UNK_10f639994);
          goto LAB_10a1c3424;
        }
        lVar6 = *(long *)(lVar5 + 0x18);
        ___dynamic_cast(lVar6,&PTR_DAT_110baded8,&PTR_DAT_110bad2e8,0);
        plVar17 = *(long **)(lVar5 + 0x20);
        if (plVar17 == (long *)0x0) {
          uStack_78 = *(uint *)(lVar6 + 0xc);
          goto LAB_10a1c2ed0;
        }
        plVar1 = plVar17 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uStack_78 = *(uint *)(lVar6 + 0xc);
        uStack_74 = CONCAT31(uStack_74._1_3_,1);
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      if (iVar11 < (int)lVar8) {
        uStack_70 = 0x101;
      }
      puStack_c8 = (undefined8 *)((ulong)puStack_c8 & 0xffffffff00000000);
      FUN_10a1cc8d0(*param_1,&puStack_c8);
      puStack_c8._0_4_ = 1;
      FUN_10a1cc8d0(*param_1,&puStack_c8);
      puStack_c8 = (undefined8 *)CONCAT44(puStack_c8._4_4_,2);
      FUN_10a1cc8d0(*param_1,&puStack_c8);
      puVar9 = (undefined8 *)0x58;
      __Znwm();
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_110bad310;
      FUN_10a1ccb30(&puStack_c8,&uStack_98);
      puVar14 = puVar9 + 3;
      *puVar14 = &PTR_DAT_110bad360;
      uStack_a8 = CONCAT44(uStack_74,uStack_78);
      uStack_a0 = uStack_70;
      *(undefined4 *)(puVar9 + 4) = 8;
      FUN_10a1ccb30(puVar9 + 5,&puStack_c8);
      puVar9[9] = uStack_a8;
      *(undefined2 *)(puVar9 + 10) = uStack_a0;
      if ((cStack_b0 == '\x01') && (cStack_b1 < '\0')) {
        __ZdlPv(puStack_c8);
      }
      lVar5 = *param_1;
      puStack_c8 = (undefined8 *)CONCAT44(puStack_c8._4_4_,8);
      puStack_d8 = puVar14;
      plStack_d0 = puVar9;
      FUN_10a1ccc78(lVar5,8,&puStack_c8);
      puStack_d8 = (undefined8 *)0x0;
      plStack_d0 = (long *)0x0;
      plVar17 = *(long **)(lVar5 + 0x20);
      *(undefined8 **)(lVar5 + 0x18) = puVar14;
      *(undefined8 **)(lVar5 + 0x20) = puVar9;
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar17 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        plVar1 = plStack_d0 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      if ((cStack_80 == '\x01') && (cStack_81 < '\0')) {
        __ZdlPv(CONCAT17((undefined1)uStack_91,CONCAT61(uStack_97,uStack_98)));
      }
      goto LAB_10a1c3100;
    }
    lVar5 = *param_1;
    puStack_d8 = (undefined8 *)CONCAT44(puStack_d8._4_4_,8);
    FUN_10a1cc830(lVar5,&puStack_d8);
    if (lVar5 != 0) {
      puVar9 = *(undefined8 **)(lVar5 + 0x18);
      ___dynamic_cast(puVar9,&PTR_DAT_110baded8,&PTR_DAT_110badf00,0);
      plVar17 = *(long **)(lVar5 + 0x20);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puStack_c8 = puVar9;
      plStack_c0 = plVar17;
      func_0x00010a1cca60(&uStack_98,puVar9 + 2);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      goto LAB_10a1c2ebc;
    }
  }
  FUN_109ffdddc(&UNK_10f639994);
LAB_10a1c3424:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c3428);
  (*pcVar4)();
}



/* Entry: 10a1c34d0; end: 10a1c3523;  */

undefined1  [16] FUN_10a1c34d0(char *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  if (1 < param_2) {
    if (*param_1 == '\'') {
      if (param_1[param_2 - 1] != '\'') goto LAB_10a1c3518;
    }
    else if ((*param_1 != '\"') || (param_1[param_2 - 1] != '\"')) goto LAB_10a1c3518;
    auVar1._8_8_ = param_2 - 2;
    auVar1._0_8_ = param_1 + 1;
    return auVar1;
  }
LAB_10a1c3518:
  return ZEXT816(0);
}



/* Entry: 10a1c3524; end: 10a1c3643;  */

void FUN_10a1c3524(char *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  float fVar4;
  int iStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  
  uVar1 = *(ulong *)(param_1 + 8);
  pcVar3 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar1 = (ulong)(byte)param_1[0x17];
    pcVar3 = param_1;
  }
  if ((uVar1 == 9 || uVar1 == 7) && (*pcVar3 == '#')) {
    uStack_38 = 0;
    iStack_3c = 0;
    pcVar2 = pcVar3;
    func_0x00010a1cd7ec(pcVar3,uVar1,1,(long)&uStack_38 + 4);
    if (((int)pcVar2 != 0) &&
       ((pcVar2 = pcVar3, func_0x00010a1cd7ec(pcVar3,uVar1,3,&uStack_38), (int)pcVar2 != 0 &&
        (pcVar2 = pcVar3, func_0x00010a1cd7ec(pcVar3,uVar1,5,&iStack_3c), (int)pcVar2 != 0)))) {
      iStack_40 = 0xff;
      fVar4 = 255.0;
      if (uVar1 == 9) {
        func_0x00010a1cd7ec(pcVar3,9,7,&iStack_40);
        if ((int)pcVar3 == 0) {
          return;
        }
        fVar4 = (float)iStack_40;
      }
      param_2[1] = CONCAT44(fVar4 / 255.0,(float)iStack_3c / 255.0);
      *param_2 = CONCAT44((float)(int)uStack_38 / 255.0,(float)uStack_38._4_4_ / 255.0);
    }
  }
  return;
}



/* Entry: 10a1c3644; end: 10a1c374b;  */

undefined1  [16] FUN_10a1c3644(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f643d1e;
  return auVar1;
}



/* Entry: 10a1c374c; end: 10a1c3a1f;  */

void FUN_10a1c374c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f643d1e,0xb);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bad0f8;
  pppuVar2 = (undefined8 ***)&UNK_10f642cb1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x131;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bad0f8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a1d44f4,0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1c3a00;
    FUN_10a054dac(param_1,&UNK_10f642cb2,FUN_10a1d4688,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1c3a00;
    FUN_10a054dac(param_1,&UNK_10f6436f2,FUN_10a1d4848,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f4178bf,FUN_10a1d49c4,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f643d1e,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a1c3a00:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1c3a04);
  (*pcVar6)();
}



/* Entry: 10a1c3a20; end: 10a1c3ca3;  */

void FUN_10a1c3a20(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f643d2a,0xb);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bad110;
  pppuVar2 = (undefined8 ***)&UNK_10f642cb1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bad110;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a1d4b04,1,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1c3c84;
    FUN_10a054dac(param_1,&UNK_10f642cf7,FUN_10a1d4e60,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f4178bf,FUN_10a1d504c,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f643d2a,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a1c3c84:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1c3c88);
  (*pcVar6)();
}



/* Entry: 10a1c3ca4; end: 10a1c3cff;  */

undefined8 * FUN_10a1c3ca4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10a1c3ce0;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10a1c3ce0:
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a1c3d00; end: 10a1c3d03;  */

long * FUN_10a1c3d00(long *param_1)

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



/* Entry: 10a1c3d04; end: 10a1c3d87;  */

void FUN_10a1c3d04(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340df48;
  lVar3 = param_3;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar1 = *(ulong *)(lVar3 + 8);
  if (-1 < (char)*(byte *)(lVar3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(lVar3 + 0x17);
  }
  FUN_10a1c3d88(param_1,*(undefined8 *)(*ppuVar2 + 0x870),uVar1);
  FUN_10a1c3e44(param_2,param_3,param_1);
  return;
}



/* Entry: 10a1c3d88; end: 10a1c3e43;  */

void FUN_10a1c3d88(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_2 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x70);
  lVar3 = *(long *)(lVar3 + 0xb8);
  if ((*(byte *)(lVar3 + 0x1e0) & 1) != 0) {
    func_0x00010989a560(&uStack_50,*(undefined8 *)(lVar3 + 0x50),param_3);
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_DAT_110ba7910;
    puVar2[4] = uStack_48;
    puVar2[3] = uStack_50;
    puVar2[6] = uStack_38;
    puVar2[5] = uStack_40;
    *param_1 = (long)(puVar2 + 3);
    param_1[1] = (long)puVar2;
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x70);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1c3e1c);
  (*pcVar1)();
}



/* Entry: 10a1c3e44; end: 10a1c4313;  */

long * FUN_10a1c3e44(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong unaff_x24;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x28;
  undefined1 auStack_f0 [8];
  long *plStack_e8;
  undefined8 ***pppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined8 auStack_98 [2];
  char cStack_81;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  
  uVar8 = 0x1137ea938;
  func_0x000107c2b05c(0x1137ea938,param_1 + 0x18);
  uVar13 = uRam00000001137ea940;
  if (uRam00000001137ea940 != 0) {
    uVar11 = uRam00000001137ea940 - 1;
    if ((uRam00000001137ea940 & uVar11) == 0) {
      uVar12 = uVar11 & uVar8;
    }
    else {
      uVar12 = uVar8;
      if (uRam00000001137ea940 <= uVar8) {
        uVar12 = 0;
        if (uRam00000001137ea940 != 0) {
          uVar12 = uVar8 / uRam00000001137ea940;
        }
        uVar12 = uVar8 - uVar12 * uRam00000001137ea940;
      }
    }
    plVar5 = *(long **)(lRam00000001137ea938 + uVar12 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      unaff_x24 = 0x1137ea938;
      do {
        uVar6 = plVar5[1];
        if (uVar8 == uVar6) {
          uVar6 = unaff_x24;
          func_0x000107c2b068(0x1137ea938,plVar5 + 2,param_1 + 0x18);
          if ((uVar6 & 1) != 0) goto LAB_10a1c3f38;
        }
        else {
          if ((uVar13 & uVar11) == 0) {
            uVar6 = uVar6 & uVar11;
          }
          else if (uVar13 <= uVar6) {
            uVar3 = 0;
            if (uVar13 != 0) {
              uVar3 = uVar6 / uVar13;
            }
            uVar6 = uVar6 - uVar3 * uVar13;
          }
          if (uVar6 != uVar12) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  FUN_10a00946c(&UNK_10f6436fd);
LAB_10a1c3f38:
  uVar8 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar8 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (*(ulong *)(*param_3 + 8) < uVar8) {
    __ZNSt3__19to_stringEm(auStack_c8);
    FUN_109feb280(auStack_b0,&UNK_10f643718,auStack_c8);
    FUN_10a012db0(auStack_98,auStack_b0,&UNK_10f643742);
    uVar8 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar8 = (ulong)*(byte *)(param_2 + 0x17);
    }
    __ZNSt3__19to_stringEm(&pppuStack_e0,uVar8);
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      pppuStack_e0 = &pppuStack_e0;
    }
    puVar7 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,pppuStack_e0,uStack_d8);
    uStack_78 = puVar7[1];
    plStack_80 = (long *)*puVar7;
    lStack_70 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_10a0029c0(&plStack_80);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c4280);
    (*pcVar4)();
  }
  uVar8 = unaff_x24;
  func_0x000107c2b05c(unaff_x24,param_1 + 0x18);
  uVar13 = *(ulong *)(unaff_x24 + 8);
  if (uVar13 != 0) {
    uVar11 = uVar13 - 1;
    if ((uVar13 & uVar11) == 0) {
      unaff_x28 = uVar11 & uVar8;
    }
    else {
      unaff_x28 = uVar8;
      if (uVar13 <= uVar8) {
        uVar12 = 0;
        if (uVar13 != 0) {
          uVar12 = uVar8 / uVar13;
        }
        unaff_x28 = uVar8 - uVar12 * uVar13;
      }
    }
    puVar7 = *(undefined8 **)(lRam00000001137ea938 + unaff_x28 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar7, plVar5 != (long *)0x0)) {
      do {
        uVar12 = plVar5[1];
        if (uVar12 == uVar8) {
          uVar12 = 0;
          func_0x000107c2b068(0x1137ea938,plVar5 + 2,param_1 + 0x18);
          if ((uVar12 & 1) != 0) goto LAB_10a1c4174;
        }
        else {
          if ((uVar13 & uVar11) == 0) {
            uVar12 = uVar12 & uVar11;
          }
          else if (uVar13 <= uVar12) {
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar12 / uVar13;
            }
            uVar12 = uVar12 - uVar6 * uVar13;
          }
          if (uVar12 != unaff_x28) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  plVar5 = (long *)0x48;
  __Znwm();
  lStack_70 = 0;
  *plVar5 = 0;
  plVar5[1] = uVar8;
  plStack_80 = plVar5;
  uStack_78 = unaff_x24;
  if (*(char *)(param_1 + 0x2f) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar10 = *(long *)(param_1 + 0x18);
    plVar5[3] = *(long *)(param_1 + 0x20);
    plVar5[2] = lVar10;
    plVar5[4] = *(long *)(param_1 + 0x28);
  }
  plVar5[8] = 0;
  lStack_70 = CONCAT71(lStack_70._1_7_,1);
  if ((uVar13 == 0) || (fRam00000001137ea958 * (float)uVar13 < (float)(lRam00000001137ea950 + 1))) {
    uVar11 = 1;
    if (2 < uVar13) {
      uVar11 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar11 = uVar11 | uVar13 << 1;
    uVar13 = (ulong)((float)(lRam00000001137ea950 + 1) / fRam00000001137ea958);
    if (uVar11 <= uVar13) {
      uVar11 = uVar13;
    }
    func_0x000107c2b10c(uVar11);
    uVar13 = uRam00000001137ea940;
    if ((uRam00000001137ea940 & uRam00000001137ea940 - 1) == 0) {
      unaff_x28 = uRam00000001137ea940 - 1 & uVar8;
    }
    else {
      unaff_x28 = uVar8;
      if (uRam00000001137ea940 <= uVar8) {
        uVar11 = 0;
        if (uRam00000001137ea940 != 0) {
          uVar11 = uVar8 / uRam00000001137ea940;
        }
        unaff_x28 = uVar8 - uVar11 * uRam00000001137ea940;
      }
    }
  }
  lVar10 = lRam00000001137ea938;
  plVar9 = *(long **)(lRam00000001137ea938 + unaff_x28 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar5 = (long)plRam00000001137ea948;
    plRam00000001137ea948 = plVar5;
    *(undefined8 *)(lVar10 + unaff_x28 * 8) = 0x1137ea948;
    if (*plVar5 != 0) {
      uVar8 = *(ulong *)(*plVar5 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar8 = uVar8 & uVar13 - 1;
      }
      else if (uVar13 <= uVar8) {
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = uVar8 / uVar13;
        }
        uVar8 = uVar8 - uVar11 * uVar13;
      }
      *(long **)(lRam00000001137ea938 + uVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar9;
    *plVar9 = (long)plVar5;
  }
  lRam00000001137ea950 = lRam00000001137ea950 + 1;
LAB_10a1c4174:
  plVar5 = (long *)plVar5[8];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x30))(auStack_f0,plVar5,param_2,param_3);
    if (plStack_e8 != (long *)0x0) {
      plVar9 = plStack_e8 + 1;
      do {
        lVar10 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
        plVar5 = plStack_e8;
      }
    }
    return plVar5;
  }
  FUN_10a06186c();
  if (lStack_70 < 0) {
    __ZdlPv(plStack_80);
  }
  if ((char)bStack_c9 < '\0') {
    __ZdlPv(pppuStack_e0);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  __Unwind_Resume();
  plVar9 = (long *)plVar5[6];
  if (plVar9 == plVar5 + 3) {
    lVar10 = 0x20;
  }
  else {
    if (plVar9 == (long *)0x0) goto LAB_10a1c4350;
    lVar10 = 0x28;
  }
  (**(code **)(*plVar9 + lVar10))();
LAB_10a1c4350:
  if (*(char *)((long)plVar5 + 0x17) < '\0') {
    __ZdlPv(*plVar5);
  }
  return plVar5;
}



/* Entry: 10a1c4314; end: 10a1c436f;  */

undefined8 * FUN_10a1c4314(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10a1c4350;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10a1c4350:
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a1c4370; end: 10a1c4373;  */

long * FUN_10a1c4370(long *param_1)

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



/* Entry: 10a1c4374; end: 10a1c462b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a1c44ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4cb0) */
/* WARNING: Removing unreachable block (ram,0x00010a1c47c0) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4860) */
/* WARNING: Removing unreachable block (ram,0x00010a1c477c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4a94) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c482c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4820) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a1c4374(undefined8 param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  code *pcVar8;
  char cVar9;
  long *plVar10;
  long *plVar11;
  char *pcVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *extraout_x8;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  long *unaff_x21;
  long lVar23;
  undefined8 ******ppppppuVar24;
  ulong unaff_x22;
  long lVar25;
  ulong unaff_x24;
  uint uVar26;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  uint uVar27;
  ulong unaff_x28;
  undefined1 *puVar28;
  undefined *puVar29;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined5 uStack_1ad;
  char cStack_199;
  undefined8 uStack_198;
  char cStack_181;
  undefined8 *******pppppppuStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 *******pppppppuStack_160;
  undefined8 ******ppppppuStack_158;
  undefined8 uStack_150;
  undefined8 *******pppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 *******pppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined8 uStack_110;
  char acStack_100 [23];
  byte bStack_e9;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar28 = &stack0xfffffffffffffff0;
  lVar18 = param_2 + 0x18;
  plVar10 = param_3;
  FUN_10a1d5394();
  uStack_a0 = param_1;
  if (lVar18 == 0) {
    plVar20 = (long *)&UNK_10f643768;
    FUN_10a00946c();
  }
  else {
    unaff_x24 = 0x1137ea960;
    plVar10 = (long *)(param_2 + 0x18);
    unaff_x22 = unaff_x24;
    func_0x000107c2b05c();
    unaff_x27 = uRam00000001137ea968;
    if (uRam00000001137ea968 != 0) {
      unaff_x26 = uRam00000001137ea968 - 1;
      if ((uRam00000001137ea968 & unaff_x26) == 0) {
        unaff_x28 = unaff_x26 & unaff_x22;
      }
      else {
        unaff_x28 = unaff_x22;
        if (uRam00000001137ea968 <= unaff_x22) {
          uVar17 = 0;
          if (uRam00000001137ea968 != 0) {
            uVar17 = unaff_x22 / uRam00000001137ea968;
          }
          unaff_x28 = unaff_x22 - uVar17 * uRam00000001137ea968;
        }
      }
      puVar16 = *(undefined8 **)(lRam00000001137ea960 + unaff_x28 * 8);
      if ((puVar16 != (undefined8 *)0x0) && (unaff_x21 = (long *)*puVar16, unaff_x21 != (long *)0x0)
         ) {
        unaff_x25 = 0x1137ea960;
        do {
          uVar17 = unaff_x21[1];
          if (uVar17 == unaff_x22) {
            plVar10 = unaff_x21 + 2;
            uVar17 = unaff_x25;
            func_0x000107c2b068(0x1137ea960,plVar10,param_2 + 0x18);
            if ((uVar17 & 1) != 0) goto LAB_10a1c45cc;
          }
          else {
            if ((unaff_x27 & unaff_x26) == 0) {
              uVar17 = uVar17 & unaff_x26;
            }
            else if (unaff_x27 <= uVar17) {
              uVar19 = 0;
              if (unaff_x27 != 0) {
                uVar19 = uVar17 / unaff_x27;
              }
              uVar17 = uVar17 - uVar19 * unaff_x27;
            }
            if (uVar17 != unaff_x28) break;
          }
          unaff_x21 = (long *)*unaff_x21;
        } while (unaff_x21 != (long *)0x0);
      }
    }
    unaff_x25 = 0x1137ea000;
    unaff_x21 = (long *)0x48;
    __Znwm();
    uStack_70 = 0x1137ea960;
    uStack_68 = 0;
    *unaff_x21 = 0;
    unaff_x21[1] = unaff_x22;
    plStack_78 = unaff_x21;
    if (*(char *)(param_2 + 0x2f) < '\0') {
      lVar18 = *(long *)(param_2 + 0x18);
      uVar17 = *(ulong *)(param_2 + 0x20);
      plVar10 = unaff_x21 + 2;
      pcStack_88 = (code *)0x10a1c44b0;
      plStack_98 = param_3;
      goto code_r0x000100033dac;
    }
    lVar18 = *(long *)(param_2 + 0x18);
    unaff_x21[3] = *(long *)(param_2 + 0x20);
    unaff_x21[2] = lVar18;
    unaff_x21[4] = *(long *)(param_2 + 0x28);
    unaff_x21[8] = 0;
    uStack_68 = 1;
    if ((unaff_x27 == 0) ||
       (fRam00000001137ea980 * (float)unaff_x27 < (float)(lRam00000001137ea978 + 1))) {
      uVar17 = 1;
      if (2 < unaff_x27) {
        uVar17 = (ulong)((unaff_x27 & unaff_x27 - 1) != 0);
      }
      uVar17 = uVar17 | unaff_x27 << 1;
      uVar19 = (ulong)((float)(lRam00000001137ea978 + 1) / fRam00000001137ea980);
      if (uVar17 <= uVar19) {
        uVar17 = uVar19;
      }
      func_0x000107c2b118(uVar17);
      unaff_x27 = uRam00000001137ea968;
      if ((uRam00000001137ea968 & uRam00000001137ea968 - 1) == 0) {
        unaff_x28 = uRam00000001137ea968 - 1 & unaff_x22;
      }
      else {
        unaff_x28 = unaff_x22;
        if (uRam00000001137ea968 <= unaff_x22) {
          uVar17 = 0;
          if (uRam00000001137ea968 != 0) {
            uVar17 = unaff_x22 / uRam00000001137ea968;
          }
          unaff_x28 = unaff_x22 - uVar17 * uRam00000001137ea968;
        }
      }
    }
    lVar18 = lRam00000001137ea960;
    plVar20 = *(long **)(lRam00000001137ea960 + unaff_x28 * 8);
    if (plVar20 == (long *)0x0) {
      *unaff_x21 = (long)plRam00000001137ea970;
      plRam00000001137ea970 = unaff_x21;
      *(undefined8 *)(lVar18 + unaff_x28 * 8) = 0x1137ea970;
      if (*unaff_x21 != 0) {
        uVar17 = *(ulong *)(*unaff_x21 + 8);
        if ((unaff_x27 & unaff_x27 - 1) == 0) {
          uVar17 = uVar17 & unaff_x27 - 1;
        }
        else if (unaff_x27 <= uVar17) {
          uVar19 = 0;
          if (unaff_x27 != 0) {
            uVar19 = uVar17 / unaff_x27;
          }
          uVar17 = uVar17 - uVar19 * unaff_x27;
        }
        *(long **)(lRam00000001137ea960 + uVar17 * 8) = unaff_x21;
      }
    }
    else {
      *unaff_x21 = *plVar20;
      *plVar20 = (long)unaff_x21;
    }
    lRam00000001137ea978 = lRam00000001137ea978 + 1;
LAB_10a1c45cc:
    plVar11 = (long *)unaff_x21[8];
    plVar20 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1c4600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x30))(param_1,plVar11,param_3);
      return;
    }
  }
  FUN_10a06186c();
  FUN_10a1d5290(&plStack_78);
  plVar11 = plVar20;
  __Unwind_Resume();
  pcStack_88 = FUN_10a1c462c;
  lVar23 = *(long *)(plVar11[2] + 0x18);
  lVar25 = *(long *)(*plVar11 + 0x900);
  lVar18 = *(long *)(lVar25 + 0xa0);
  uStack_e0 = unaff_x28;
  uStack_d8 = unaff_x27;
  uStack_d0 = unaff_x26;
  uStack_c8 = unaff_x25;
  ppuStack_c0 = (undefined1 **)unaff_x24;
  puStack_b8 = (undefined *)param_2;
  uStack_b0 = unaff_x22;
  plStack_a8 = unaff_x21;
  plStack_98 = plVar20;
  puStack_90 = puVar28;
  if ((lVar23 == 0) && ((char)plVar11[0xe] == '\x01')) {
    bVar5 = *(byte *)((long)plVar11 + 0x47);
    uVar17 = plVar11[7];
    if (-1 < (char)bVar5) {
      uVar17 = (ulong)bVar5;
    }
    bVar6 = *(byte *)((long)plVar10 + 0x17);
    uVar19 = plVar10[1];
    if (-1 < (char)bVar6) {
      uVar19 = (ulong)bVar6;
    }
    if (uVar17 == uVar19) {
      plVar20 = (long *)plVar11[6];
      if (-1 < (char)bVar5) {
        plVar20 = plVar11 + 6;
      }
      plVar2 = (long *)*plVar10;
      if (-1 < (char)bVar6) {
        plVar2 = plVar10;
      }
      _memcmp(plVar20,plVar2);
      if ((((int)plVar20 == 0) && ((char)plVar11[0xc] == (char)plVar11[1])) &&
         (plVar11[0xd] == lVar18)) {
        if (-1 < *(char *)((long)plVar11 + 0x5f)) {
          lVar18 = plVar11[9];
          extraout_x8[1] = plVar11[10];
          *extraout_x8 = lVar18;
          extraout_x8[2] = plVar11[0xb];
          return;
        }
        lVar18 = plVar11[9];
        uVar17 = plVar11[10];
        plVar10 = extraout_x8;
        unaff_x21 = plStack_a8;
        unaff_x22 = uStack_b0;
        puVar28 = puStack_90;
code_r0x000100033dac:
        uStack_b0 = unaff_x22;
        plStack_a8 = unaff_x21;
        puStack_90 = puVar28;
        if (uVar17 < 0x17) {
          *(char *)((long)plVar10 + 0x17) = (char)uVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(plVar10,lVar18,uVar17 + 1);
          return;
        }
        if (uVar17 < 0x7ffffffffffffff7) {
          lVar23 = 0x19;
          if ((uVar17 | 7) != 0x17) {
            lVar23 = (uVar17 | 7) + 1;
          }
          puVar29 = &UNK_100033e00;
        }
        else {
          puVar29 = &UNK_100033e30;
          lVar23 = lVar18;
          func_0x000104bd47d4();
        }
        uStack_d0 = uVar17;
        uStack_c8 = lVar18;
        ppuStack_c0 = &puStack_90;
        puStack_b8 = puVar29;
        func_0x000107c60e20(lVar23);
        return;
      }
    }
  }
  FUN_10a597328(acStack_100,lVar25,plVar10);
  func_0x000107c2b054(&pppppppuStack_120,&UNK_10f642cb1);
  uVar27 = 0;
  uVar26 = 0xffffffff;
  while( true ) {
    uVar17 = (ulong)(int)uVar27;
    uVar19 = (ulong)(int)(uint)bStack_e9;
    if (bStack_e9 <= uVar27) break;
    if (uVar19 < uVar17) goto LAB_10a1c4d70;
    if ((acStack_100[uVar17] == '\\') && (uVar1 = uVar17 + 1, (uint)uVar1 < (uint)bStack_e9)) {
      if (uVar19 < uVar1) goto LAB_10a1c4d70;
      if (acStack_100[uVar17 + 1] != '{') {
        if (uVar19 < uVar1) goto LAB_10a1c4d70;
        if (acStack_100[uVar17 + 1] != '}') goto joined_r0x00010a1c4834;
      }
      if (uVar19 < uVar1) goto LAB_10a1c4d70;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&pppppppuStack_120,(long)acStack_100[uVar17 + 1]);
      iVar15 = 2;
LAB_10a1c4928:
      uVar27 = uVar27 + iVar15;
    }
    else {
joined_r0x00010a1c4834:
      if ((int)uVar26 < 0) {
        if (uVar19 < uVar17) goto LAB_10a1c4d6c;
        uVar22 = uVar19 - uVar17;
        uVar1 = uVar22;
        if (1 < uVar22) {
          uVar1 = 2;
        }
        pcVar12 = acStack_100 + uVar17;
        _memcmp(pcVar12,&UNK_10f643d36,uVar1);
        if ((uVar22 < 2) || ((int)pcVar12 != 0)) {
          if (uVar17 <= uVar19) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (&pppppppuStack_120,(long)acStack_100[uVar17]);
            iVar15 = 1;
            goto LAB_10a1c4928;
          }
          goto LAB_10a1c4d70;
        }
        uVar27 = uVar27 + 2;
        uVar26 = uVar27;
      }
      else {
        if (uVar19 < uVar17) {
LAB_10a1c4d6c:
          FUN_109ffddc8();
          goto LAB_10a1c4d70;
        }
        uVar19 = uVar19 - uVar17;
        uVar1 = uVar19;
        if (1 < uVar19) {
          uVar1 = 2;
        }
        pcVar12 = acStack_100 + uVar17;
        _memcmp(pcVar12,&UNK_10f643d39,uVar1);
        iVar15 = 1;
        if ((uVar19 < 2) || ((int)pcVar12 != 0)) goto LAB_10a1c4928;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&pppppppuStack_140,acStack_100,uVar26,(long)(int)(uVar27 - uVar26),
                   &pppppppuStack_160);
        lVar25 = plVar11[2];
        FUN_109ce5028(lVar25,&pppppppuStack_140);
        if (lVar25 == 0) {
          cStack_181 = '\x02';
          uStack_198._0_2_ = 0x7b7b;
          uStack_198._2_1_ = 0;
          ppppppuVar3 = ppppppuStack_138;
          pppppppuVar13 = pppppppuStack_140;
          if (-1 < (long)ppppppuStack_130) {
            ppppppuVar3 = (undefined8 ******)((ulong)ppppppuStack_130 >> 0x38);
            pppppppuVar13 = &pppppppuStack_140;
          }
          plVar20 = &uStack_198;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar20,pppppppuVar13,ppppppuVar3);
          uStack_178 = plVar20[1];
          pppppppuStack_180 = (undefined8 *******)*plVar20;
          uStack_170 = plVar20[2];
          plVar20[1] = 0;
          plVar20[2] = 0;
          *plVar20 = 0;
          cStack_199 = '\x02';
          uStack_1b0 = 0x7d7d;
          uStack_1ae = 0;
          pppppppuVar13 = &pppppppuStack_180;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar13,&uStack_1b0,2);
          ppppppuStack_158 = pppppppuVar13[1];
          pppppppuStack_160 = (undefined8 *******)*pppppppuVar13;
          uStack_150 = pppppppuVar13[2];
          pppppppuVar13[1] = (undefined8 ******)0x0;
          pppppppuVar13[2] = (undefined8 ******)0x0;
          *pppppppuVar13 = (undefined8 ******)0x0;
          ppppppuVar3 = ppppppuStack_158;
          pppppppuVar13 = pppppppuStack_160;
          if (-1 < (long)uStack_150) {
            ppppppuVar3 = (undefined8 ******)((ulong)uStack_150 >> 0x38);
            pppppppuVar13 = &pppppppuStack_160;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_120,pppppppuVar13,ppppppuVar3);
          if ((long)uStack_150 < 0) {
            __ZdlPv(pppppppuStack_160);
          }
          if (cStack_199 < '\0') {
            __ZdlPv(CONCAT53(uStack_1ad,CONCAT12(uStack_1ae,uStack_1b0)));
          }
          if ((long)uStack_170 < 0) {
            __ZdlPv(pppppppuStack_180);
          }
          if (cStack_181 < '\0') {
            __ZdlPv(CONCAT53(uStack_198._3_5_,CONCAT12(uStack_198._2_1_,(undefined2)uStack_198)));
          }
LAB_10a1c4a4c:
          uVar27 = uVar27 + 2;
          uVar26 = 0xffffffff;
          bVar7 = true;
        }
        else {
          cVar9 = *(char *)(lVar25 + 0x3f);
          if ((long)cVar9 < 0) {
            lVar21 = *(long *)(lVar25 + 0x30);
            if (lVar21 != 0) goto LAB_10a1c4a30;
          }
          else if (cVar9 != '\0') {
            lVar21 = *(long *)(lVar25 + 0x30);
LAB_10a1c4a30:
            plVar20 = (long *)*(long *)(lVar25 + 0x28);
            if (-1 < cVar9) {
              lVar21 = (long)cVar9;
              plVar20 = (long *)(lVar25 + 0x28);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&pppppppuStack_120,plVar20,lVar21);
            goto LAB_10a1c4a4c;
          }
          func_0x000107c2b054(extraout_x8,&UNK_10f642cb1);
          bVar7 = false;
        }
        if ((long)ppppppuStack_130 < 0) {
          __ZdlPv(pppppppuStack_140);
          if (!bVar7) {
            return;
          }
        }
        else if (!bVar7) {
          return;
        }
      }
    }
  }
  if (-1 < (int)uVar26) {
    uStack_150 = (undefined8 ******)CONCAT17(2,(undefined7)uStack_150);
    pppppppuStack_160 = (undefined8 *******)CONCAT53(pppppppuStack_160._3_5_,0x7b7b);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&pppppppuStack_180,acStack_100,uVar26,0xffffffffffffffff,&uStack_198);
    uVar17 = uStack_178;
    pppppppuVar13 = pppppppuStack_180;
    if (-1 < (long)uStack_170) {
      uVar17 = uStack_170 >> 0x38;
      pppppppuVar13 = &pppppppuStack_180;
    }
    pppppppuVar14 = &pppppppuStack_160;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar14,pppppppuVar13,uVar17);
    ppppppuStack_138 = pppppppuVar14[1];
    pppppppuStack_140 = (undefined8 *******)*pppppppuVar14;
    ppppppuStack_130 = pppppppuVar14[2];
    pppppppuVar14[1] = (undefined8 ******)0x0;
    pppppppuVar14[2] = (undefined8 ******)0x0;
    *pppppppuVar14 = (undefined8 ******)0x0;
    ppppppuVar3 = ppppppuStack_138;
    pppppppuVar13 = pppppppuStack_140;
    if (-1 < (long)ppppppuStack_130) {
      ppppppuVar3 = (undefined8 ******)((ulong)ppppppuStack_130 >> 0x38);
      pppppppuVar13 = &pppppppuStack_140;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_120,pppppppuVar13,ppppppuVar3);
    if ((long)ppppppuStack_130 < 0) {
      __ZdlPv(pppppppuStack_140);
    }
    if ((long)uStack_170 < 0) {
      __ZdlPv(pppppppuStack_180);
    }
    if ((long)uStack_150 < 0) {
      __ZdlPv(pppppppuStack_160);
    }
  }
  if ((char)plVar11[1] == '\x01') {
    ppppppuVar3 = ppppppuStack_118;
    pppppppuVar13 = pppppppuStack_120;
    if (-1 < (long)uStack_110) {
      ppppppuVar3 = (undefined8 ******)(ulong)uStack_110._7_1_;
      pppppppuVar13 = &pppppppuStack_120;
    }
    ppppppuStack_138 = (undefined8 ******)0x0;
    ppppppuStack_130 = (undefined8 ******)0x0;
    pppppppuStack_140 = (undefined8 *******)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&pppppppuStack_140,ppppppuVar3,0);
    puVar29 = PTR___DefaultRuneLocale_11034bcf8;
    if (ppppppuVar3 != (undefined8 ******)0x0) {
      ppppppuVar24 = (undefined8 ******)0x0;
      do {
        cVar9 = *(char *)((long)pppppppuVar13 + (long)ppppppuVar24);
        lVar25 = (long)cVar9;
        if ((-1 < lVar25) && ((*(uint *)(puVar29 + lVar25 * 4 + 0x3c) >> 0xf & 1) != 0)) {
          ___tolower();
          cVar9 = (char)lVar25;
        }
        ppppppuVar4 = ppppppuStack_138;
        if (-1 < (long)ppppppuStack_130) {
          ppppppuVar4 = (undefined8 ******)((ulong)ppppppuStack_130 >> 0x38);
        }
        if (ppppppuVar4 < ppppppuVar24) goto LAB_10a1c4d70;
        pppppppuVar14 = pppppppuStack_140;
        if (-1 < (long)ppppppuStack_130) {
          pppppppuVar14 = &pppppppuStack_140;
        }
        *(char *)((long)pppppppuVar14 + (long)ppppppuVar24) = cVar9;
        ppppppuVar24 = (undefined8 ******)((long)ppppppuVar24 + 1);
      } while (ppppppuVar3 != ppppppuVar24);
    }
  }
  else {
    if ((char)plVar11[1] != '\x02') goto LAB_10a1c4cc8;
    ppppppuVar3 = ppppppuStack_118;
    pppppppuVar13 = pppppppuStack_120;
    if (-1 < (long)uStack_110) {
      ppppppuVar3 = (undefined8 ******)(ulong)uStack_110._7_1_;
      pppppppuVar13 = &pppppppuStack_120;
    }
    ppppppuStack_138 = (undefined8 ******)0x0;
    ppppppuStack_130 = (undefined8 ******)0x0;
    pppppppuStack_140 = (undefined8 *******)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&pppppppuStack_140,ppppppuVar3,0);
    if (ppppppuVar3 != (undefined8 ******)0x0) {
      ppppppuVar24 = (undefined8 ******)0x0;
      do {
        cVar9 = *(char *)((long)pppppppuVar13 + (long)ppppppuVar24);
        if (-1 < cVar9) {
          ___toupper();
        }
        ppppppuVar4 = ppppppuStack_138;
        if (-1 < (long)ppppppuStack_130) {
          ppppppuVar4 = (undefined8 ******)((ulong)ppppppuStack_130 >> 0x38);
        }
        if (ppppppuVar4 < ppppppuVar24) {
LAB_10a1c4d70:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1c4d74);
          (*pcVar8)();
        }
        pppppppuVar14 = pppppppuStack_140;
        if (-1 < (long)ppppppuStack_130) {
          pppppppuVar14 = &pppppppuStack_140;
        }
        *(char *)((long)pppppppuVar14 + (long)ppppppuVar24) = cVar9;
        ppppppuVar24 = (undefined8 ******)((long)ppppppuVar24 + 1);
      } while (ppppppuVar3 != ppppppuVar24);
    }
  }
  ppppppuStack_118 = ppppppuStack_138;
  pppppppuStack_120 = pppppppuStack_140;
  uStack_110 = ppppppuStack_130;
LAB_10a1c4cc8:
  if (lVar23 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar11 + 6,plVar10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar11 + 9,&pppppppuStack_120);
    *(char *)(plVar11 + 0xc) = (char)plVar11[1];
    plVar11[0xd] = lVar18;
    *(undefined1 *)(plVar11 + 0xe) = 1;
  }
  extraout_x8[1] = (long)ppppppuStack_118;
  *extraout_x8 = (long)pppppppuStack_120;
  extraout_x8[2] = (long)uStack_110;
  return;
}



/* Entry: 10a1c462c; end: 10a1c4e77;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4cb0) */
/* WARNING: Removing unreachable block (ram,0x00010a1c47c0) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4860) */
/* WARNING: Removing unreachable block (ram,0x00010a1c477c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4a94) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c482c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4820) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a1c462c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  undefined *puVar8;
  code *pcVar9;
  char cVar10;
  long *plVar11;
  char *pcVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 ******ppppppuVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  undefined2 uStack_130;
  undefined1 uStack_12e;
  undefined5 uStack_12d;
  char cStack_119;
  undefined8 uStack_118;
  char cStack_101;
  undefined8 *******pppppppuStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 *******pppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 *******pppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 *******pppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 uStack_90;
  char acStack_80 [23];
  byte bStack_69;
  
  lVar20 = *(long *)(param_2[2] + 0x18);
  lVar23 = *(long *)(*param_2 + 0x900);
  lVar16 = *(long *)(lVar23 + 0xa0);
  if ((lVar20 == 0) && ((char)param_2[0xe] == '\x01')) {
    bVar5 = *(byte *)((long)param_2 + 0x47);
    uVar18 = param_2[7];
    if (-1 < (char)bVar5) {
      uVar18 = (ulong)bVar5;
    }
    bVar6 = *(byte *)((long)param_3 + 0x17);
    uVar21 = param_3[1];
    if (-1 < (char)bVar6) {
      uVar21 = (ulong)bVar6;
    }
    if (uVar18 == uVar21) {
      plVar11 = (long *)param_2[6];
      if (-1 < (char)bVar5) {
        plVar11 = param_2 + 6;
      }
      plVar2 = (long *)*param_3;
      if (-1 < (char)bVar6) {
        plVar2 = param_3;
      }
      _memcmp(plVar11,plVar2);
      if ((((int)plVar11 == 0) && ((char)param_2[0xc] == (char)param_2[1])) &&
         (param_2[0xd] == lVar16)) {
        if (-1 < *(char *)((long)param_2 + 0x5f)) {
          lVar16 = param_2[9];
          param_1[1] = param_2[10];
          *param_1 = lVar16;
          param_1[2] = param_2[0xb];
          return;
        }
        lVar16 = param_2[9];
        uVar18 = param_2[10];
        if (uVar18 < 0x17) {
          *(char *)((long)param_1 + 0x17) = (char)uVar18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(param_1,lVar16,uVar18 + 1);
          return;
        }
        if (uVar18 < 0x7ffffffffffffff7) {
          lVar16 = 0x19;
          if ((uVar18 | 7) != 0x17) {
            lVar16 = (uVar18 | 7) + 1;
          }
        }
        else {
          func_0x000104bd47d4();
        }
        func_0x000107c60e20(lVar16);
        return;
      }
    }
  }
  FUN_10a597328(acStack_80,lVar23,param_3);
  func_0x000107c2b054(&pppppppuStack_a0,&UNK_10f642cb1);
  uVar25 = 0;
  uVar24 = 0xffffffff;
  while( true ) {
    uVar18 = (ulong)(int)uVar25;
    uVar21 = (ulong)(int)(uint)bStack_69;
    if (bStack_69 <= uVar25) break;
    if (uVar21 < uVar18) goto LAB_10a1c4d70;
    if ((acStack_80[uVar18] == '\\') && (uVar1 = uVar18 + 1, (uint)uVar1 < (uint)bStack_69)) {
      if (uVar21 < uVar1) goto LAB_10a1c4d70;
      if (acStack_80[uVar18 + 1] != '{') {
        if (uVar21 < uVar1) goto LAB_10a1c4d70;
        if (acStack_80[uVar18 + 1] != '}') goto joined_r0x00010a1c4834;
      }
      if (uVar21 < uVar1) goto LAB_10a1c4d70;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&pppppppuStack_a0,(long)acStack_80[uVar18 + 1]);
      iVar15 = 2;
LAB_10a1c4928:
      uVar25 = uVar25 + iVar15;
    }
    else {
joined_r0x00010a1c4834:
      if ((int)uVar24 < 0) {
        if (uVar21 < uVar18) goto LAB_10a1c4d6c;
        uVar19 = uVar21 - uVar18;
        uVar1 = uVar19;
        if (1 < uVar19) {
          uVar1 = 2;
        }
        pcVar12 = acStack_80 + uVar18;
        _memcmp(pcVar12,&UNK_10f643d36,uVar1);
        if ((uVar19 < 2) || ((int)pcVar12 != 0)) {
          if (uVar18 <= uVar21) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (&pppppppuStack_a0,(long)acStack_80[uVar18]);
            iVar15 = 1;
            goto LAB_10a1c4928;
          }
          goto LAB_10a1c4d70;
        }
        uVar25 = uVar25 + 2;
        uVar24 = uVar25;
      }
      else {
        if (uVar21 < uVar18) {
LAB_10a1c4d6c:
          FUN_109ffddc8();
          goto LAB_10a1c4d70;
        }
        uVar21 = uVar21 - uVar18;
        uVar1 = uVar21;
        if (1 < uVar21) {
          uVar1 = 2;
        }
        pcVar12 = acStack_80 + uVar18;
        _memcmp(pcVar12,&UNK_10f643d39,uVar1);
        iVar15 = 1;
        if ((uVar21 < 2) || ((int)pcVar12 != 0)) goto LAB_10a1c4928;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&pppppppuStack_c0,acStack_80,uVar24,(long)(int)(uVar25 - uVar24),
                   &pppppppuStack_e0);
        lVar23 = param_2[2];
        FUN_109ce5028(lVar23,&pppppppuStack_c0);
        if (lVar23 == 0) {
          cStack_101 = '\x02';
          uStack_118._0_2_ = 0x7b7b;
          uStack_118._2_1_ = 0;
          ppppppuVar3 = ppppppuStack_b8;
          pppppppuVar13 = pppppppuStack_c0;
          if (-1 < (long)ppppppuStack_b0) {
            ppppppuVar3 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
            pppppppuVar13 = &pppppppuStack_c0;
          }
          plVar11 = &uStack_118;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar11,pppppppuVar13,ppppppuVar3);
          uStack_f8 = plVar11[1];
          pppppppuStack_100 = (undefined8 *******)*plVar11;
          uStack_f0 = plVar11[2];
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = 0;
          cStack_119 = '\x02';
          uStack_130 = 0x7d7d;
          uStack_12e = 0;
          pppppppuVar13 = &pppppppuStack_100;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar13,&uStack_130,2);
          ppppppuStack_d8 = pppppppuVar13[1];
          pppppppuStack_e0 = (undefined8 *******)*pppppppuVar13;
          uStack_d0 = pppppppuVar13[2];
          pppppppuVar13[1] = (undefined8 ******)0x0;
          pppppppuVar13[2] = (undefined8 ******)0x0;
          *pppppppuVar13 = (undefined8 ******)0x0;
          ppppppuVar3 = ppppppuStack_d8;
          pppppppuVar13 = pppppppuStack_e0;
          if (-1 < (long)uStack_d0) {
            ppppppuVar3 = (undefined8 ******)((ulong)uStack_d0 >> 0x38);
            pppppppuVar13 = &pppppppuStack_e0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_a0,pppppppuVar13,ppppppuVar3);
          if ((long)uStack_d0 < 0) {
            __ZdlPv(pppppppuStack_e0);
          }
          if (cStack_119 < '\0') {
            __ZdlPv(CONCAT53(uStack_12d,CONCAT12(uStack_12e,uStack_130)));
          }
          if ((long)uStack_f0 < 0) {
            __ZdlPv(pppppppuStack_100);
          }
          if (cStack_101 < '\0') {
            __ZdlPv(CONCAT53(uStack_118._3_5_,CONCAT12(uStack_118._2_1_,(undefined2)uStack_118)));
          }
LAB_10a1c4a4c:
          uVar25 = uVar25 + 2;
          uVar24 = 0xffffffff;
          bVar7 = true;
        }
        else {
          cVar10 = *(char *)(lVar23 + 0x3f);
          if ((long)cVar10 < 0) {
            lVar17 = *(long *)(lVar23 + 0x30);
            if (lVar17 != 0) goto LAB_10a1c4a30;
          }
          else if (cVar10 != '\0') {
            lVar17 = *(long *)(lVar23 + 0x30);
LAB_10a1c4a30:
            plVar11 = (long *)*(long *)(lVar23 + 0x28);
            if (-1 < cVar10) {
              lVar17 = (long)cVar10;
              plVar11 = (long *)(lVar23 + 0x28);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&pppppppuStack_a0,plVar11,lVar17);
            goto LAB_10a1c4a4c;
          }
          func_0x000107c2b054(param_1,&UNK_10f642cb1);
          bVar7 = false;
        }
        if ((long)ppppppuStack_b0 < 0) {
          __ZdlPv(pppppppuStack_c0);
          if (!bVar7) {
            return;
          }
        }
        else if (!bVar7) {
          return;
        }
      }
    }
  }
  if (-1 < (int)uVar24) {
    uStack_d0 = (undefined8 ******)CONCAT17(2,(undefined7)uStack_d0);
    pppppppuStack_e0 = (undefined8 *******)CONCAT53(pppppppuStack_e0._3_5_,0x7b7b);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&pppppppuStack_100,acStack_80,uVar24,0xffffffffffffffff,&uStack_118);
    uVar18 = uStack_f8;
    pppppppuVar13 = pppppppuStack_100;
    if (-1 < (long)uStack_f0) {
      uVar18 = uStack_f0 >> 0x38;
      pppppppuVar13 = &pppppppuStack_100;
    }
    pppppppuVar14 = &pppppppuStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar14,pppppppuVar13,uVar18);
    ppppppuStack_b8 = pppppppuVar14[1];
    pppppppuStack_c0 = (undefined8 *******)*pppppppuVar14;
    ppppppuStack_b0 = pppppppuVar14[2];
    pppppppuVar14[1] = (undefined8 ******)0x0;
    pppppppuVar14[2] = (undefined8 ******)0x0;
    *pppppppuVar14 = (undefined8 ******)0x0;
    ppppppuVar3 = ppppppuStack_b8;
    pppppppuVar13 = pppppppuStack_c0;
    if (-1 < (long)ppppppuStack_b0) {
      ppppppuVar3 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
      pppppppuVar13 = &pppppppuStack_c0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_a0,pppppppuVar13,ppppppuVar3);
    if ((long)ppppppuStack_b0 < 0) {
      __ZdlPv(pppppppuStack_c0);
    }
    if ((long)uStack_f0 < 0) {
      __ZdlPv(pppppppuStack_100);
    }
    if ((long)uStack_d0 < 0) {
      __ZdlPv(pppppppuStack_e0);
    }
  }
  if ((char)param_2[1] == '\x01') {
    ppppppuVar3 = ppppppuStack_98;
    pppppppuVar13 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      ppppppuVar3 = (undefined8 ******)(ulong)uStack_90._7_1_;
      pppppppuVar13 = &pppppppuStack_a0;
    }
    ppppppuStack_b8 = (undefined8 ******)0x0;
    ppppppuStack_b0 = (undefined8 ******)0x0;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&pppppppuStack_c0,ppppppuVar3,0);
    puVar8 = PTR___DefaultRuneLocale_11034bcf8;
    if (ppppppuVar3 != (undefined8 ******)0x0) {
      ppppppuVar22 = (undefined8 ******)0x0;
      do {
        cVar10 = *(char *)((long)pppppppuVar13 + (long)ppppppuVar22);
        lVar23 = (long)cVar10;
        if ((-1 < lVar23) && ((*(uint *)(puVar8 + lVar23 * 4 + 0x3c) >> 0xf & 1) != 0)) {
          ___tolower();
          cVar10 = (char)lVar23;
        }
        ppppppuVar4 = ppppppuStack_b8;
        if (-1 < (long)ppppppuStack_b0) {
          ppppppuVar4 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
        }
        if (ppppppuVar4 < ppppppuVar22) goto LAB_10a1c4d70;
        pppppppuVar14 = pppppppuStack_c0;
        if (-1 < (long)ppppppuStack_b0) {
          pppppppuVar14 = &pppppppuStack_c0;
        }
        *(char *)((long)pppppppuVar14 + (long)ppppppuVar22) = cVar10;
        ppppppuVar22 = (undefined8 ******)((long)ppppppuVar22 + 1);
      } while (ppppppuVar3 != ppppppuVar22);
    }
  }
  else {
    if ((char)param_2[1] != '\x02') goto LAB_10a1c4cc8;
    ppppppuVar3 = ppppppuStack_98;
    pppppppuVar13 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      ppppppuVar3 = (undefined8 ******)(ulong)uStack_90._7_1_;
      pppppppuVar13 = &pppppppuStack_a0;
    }
    ppppppuStack_b8 = (undefined8 ******)0x0;
    ppppppuStack_b0 = (undefined8 ******)0x0;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&pppppppuStack_c0,ppppppuVar3,0);
    if (ppppppuVar3 != (undefined8 ******)0x0) {
      ppppppuVar22 = (undefined8 ******)0x0;
      do {
        cVar10 = *(char *)((long)pppppppuVar13 + (long)ppppppuVar22);
        if (-1 < cVar10) {
          ___toupper();
        }
        ppppppuVar4 = ppppppuStack_b8;
        if (-1 < (long)ppppppuStack_b0) {
          ppppppuVar4 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
        }
        if (ppppppuVar4 < ppppppuVar22) {
LAB_10a1c4d70:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10a1c4d74);
          (*pcVar9)();
        }
        pppppppuVar14 = pppppppuStack_c0;
        if (-1 < (long)ppppppuStack_b0) {
          pppppppuVar14 = &pppppppuStack_c0;
        }
        *(char *)((long)pppppppuVar14 + (long)ppppppuVar22) = cVar10;
        ppppppuVar22 = (undefined8 ******)((long)ppppppuVar22 + 1);
      } while (ppppppuVar3 != ppppppuVar22);
    }
  }
  ppppppuStack_98 = ppppppuStack_b8;
  pppppppuStack_a0 = pppppppuStack_c0;
  uStack_90 = ppppppuStack_b0;
LAB_10a1c4cc8:
  if (lVar20 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2 + 6,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 9,&pppppppuStack_a0);
    *(char *)(param_2 + 0xc) = (char)param_2[1];
    param_2[0xd] = lVar16;
    *(undefined1 *)(param_2 + 0xe) = 1;
  }
  param_1[1] = (long)ppppppuStack_98;
  *param_1 = (long)pppppppuStack_a0;
  param_1[2] = (long)uStack_90;
  return;
}



/* Entry: 10a1c4e78; end: 10a1c5097;  */

void FUN_10a1c4e78(undefined8 *param_1,long *param_2)

{
  undefined8 ******ppppppuVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  ulong uVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined8 ******ppppppuVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined1 uStack_61;
  
  FUN_10a597328(&pppppuStack_80,*(undefined8 *)(*param_2 + 0x900));
  uVar8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar12 = 0xffffffff;
LAB_10a1c4ec8:
  bVar5 = bStack_69;
  uVar4 = uStack_78;
  pppppuVar3 = pppppuStack_80;
  uVar14 = (ulong)bStack_69;
  ppppppuVar1 = (undefined8 ******)pppppuStack_80;
  if (-1 < (char)bStack_69) {
    ppppppuVar1 = &pppppuStack_80;
  }
  do {
    uVar13 = (ulong)(int)uVar8;
    if ((char)bVar5 < '\0') {
      uVar11 = uVar4;
      if (uVar4 <= uVar13) {
        __ZdlPv(pppppuStack_80);
        return;
      }
    }
    else {
      uVar11 = uVar14;
      if (bVar5 <= uVar8) {
        return;
      }
    }
    if (uVar11 < uVar13) goto LAB_10a1c5050;
    if (*(char *)((long)ppppppuVar1 + uVar13) == '\\') {
      iVar9 = 2;
    }
    else {
      if (-1 < (int)uVar12) {
        if ((char)bVar5 < '\0') {
          ppppppuVar10 = (undefined8 ******)pppppuVar3;
          uVar11 = uVar4;
          if (uVar13 <= uVar4) goto LAB_10a1c4f64;
        }
        else if (uVar13 <= uVar14) {
          ppppppuVar10 = &pppppuStack_80;
          uVar11 = uVar14;
LAB_10a1c4f64:
          uVar11 = uVar11 - uVar13;
          uVar2 = uVar11;
          if (1 < uVar11) {
            uVar2 = 2;
          }
          lVar7 = (long)ppppppuVar10 + uVar13;
          _memcmp(lVar7,&UNK_10f643d39,uVar2);
          iVar9 = 1;
          if ((uVar11 < 2) || ((int)lVar7 != 0)) goto LAB_10a1c4fcc;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                    (auStack_98,&pppppuStack_80,uVar12,(long)(int)(uVar8 - uVar12),&uStack_61);
          FUN_10a059fa0(param_1,auStack_98);
          if (cStack_81 < '\0') {
            __ZdlPv(auStack_98[0]);
          }
          uVar8 = uVar8 + 2;
          uVar12 = 0xffffffff;
          goto LAB_10a1c4ec8;
        }
LAB_10a1c504c:
        FUN_109ffddc8();
LAB_10a1c5050:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1c5054);
        (*pcVar6)();
      }
      if ((char)bVar5 < '\0') {
        ppppppuVar10 = (undefined8 ******)pppppuVar3;
        uVar11 = uVar4;
        if (uVar4 < uVar13) goto LAB_10a1c504c;
      }
      else {
        if (uVar14 < uVar13) goto LAB_10a1c504c;
        ppppppuVar10 = &pppppuStack_80;
        uVar11 = uVar14;
      }
      uVar11 = uVar11 - uVar13;
      uVar2 = uVar11;
      if (1 < uVar11) {
        uVar2 = 2;
      }
      lVar7 = (long)ppppppuVar10 + uVar13;
      _memcmp(lVar7,&UNK_10f643d36,uVar2);
      iVar9 = 1;
      if ((1 < uVar11) && ((int)lVar7 == 0)) break;
    }
LAB_10a1c4fcc:
    uVar8 = uVar8 + iVar9;
  } while( true );
  uVar8 = uVar8 + 2;
  uVar12 = uVar8;
  goto LAB_10a1c4ec8;
}



/* Entry: 10a1c5098; end: 10a1c5557;  */

void FUN_10a1c5098(long *param_1,long ***param_2)

{
  ulong uVar1;
  long **pplVar2;
  long ***ppplVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long ***ppplVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long **pplStack_100;
  long *plStack_f8;
  long **pplStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long **pplStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long **pplStack_b8;
  long **pplStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_1[4];
  func_0x00010596ff94();
  if (lVar7 == 0) {
    func_0x000107c2827c(param_1[4],param_2,param_2);
    lVar7 = param_1[3];
    lStack_120 = param_1[3];
    lStack_128 = param_1[2];
    if (lVar7 != 0) {
      plVar16 = (long *)(lVar7 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar13 = param_1[5];
    lVar17 = param_1[5];
    lVar15 = param_1[4];
    if (lVar13 != 0) {
      plVar16 = (long *)(lVar13 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar16 = *(long **)(*param_1 + 0xaa0);
    plStack_f8 = (long *)(long)*(char *)((long)param_2 + 0x17);
    if ((long)plStack_f8 < 0) {
      pplStack_100 = *param_2;
      plStack_f8 = (long *)param_2[1];
      func_0x000107c3192c(&plStack_140);
    }
    else {
      plStack_138 = (long *)param_2[1];
      plStack_140 = (long *)*param_2;
      plStack_130 = (long *)param_2[2];
      pplStack_100 = (long **)param_2;
    }
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lVar13 != 0) {
      plVar8 = (long *)(lVar13 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_a8 = FUN_10a1d572c;
    ppuStack_a0 = &PTR_DAT_110badac0;
    plVar8 = (long *)0x38;
    lStack_118 = lVar15;
    lStack_110 = lVar17;
    __Znwm();
    if ((long)plStack_130 < 0) {
      func_0x000107c3192c(plVar8,plStack_140,plStack_138);
    }
    else {
      plVar8[1] = (long)plStack_138;
      *plVar8 = (long)plStack_140;
      plVar8[2] = (long)plStack_130;
    }
    plVar8[4] = lStack_120;
    plVar8[3] = lStack_128;
    lStack_128 = 0;
    lStack_120 = 0;
    plVar8[6] = lStack_110;
    plVar8[5] = lStack_118;
    lStack_118 = 0;
    lStack_110 = 0;
    plVar9 = plVar16 + 9;
    plStack_98 = plVar8;
    FUN_10a1cda24(plVar9,&pplStack_100);
    plVar8 = plStack_f8;
    pplVar2 = pplStack_100;
    if (plVar9 != (long *)0x0) {
      plStack_c8 = plStack_f8;
      pplStack_d0 = pplStack_100;
      FUN_10a2677b4(plVar16[0x11],&pplStack_d0);
      if (*(char *)(ppuStack_a0 + 1) == '\x01') {
        plVar8 = (long *)plVar9[4];
        puVar14 = (undefined8 *)plVar8[2];
        if (puVar14 < (undefined8 *)plVar8[3]) {
          *puVar14 = pcStack_a8;
          (*(code *)ppuStack_a0[3])(puVar14 + 1,&ppuStack_a0);
          puVar14 = puVar14 + 8;
          plVar8[2] = (long)puVar14;
        }
        else {
          ppplVar3 = (long ***)(plVar8 + 1);
          lVar15 = (long)puVar14 - (long)*ppplVar3;
          uVar1 = (lVar15 >> 6) + 1;
          if (uVar1 >> 0x3a != 0) {
            FUN_10a1cdc04();
            goto LAB_10a1c549c;
          }
          uVar11 = plVar8[3] - (long)*ppplVar3;
          uVar12 = (long)uVar11 >> 5;
          if (uVar12 <= uVar1) {
            uVar12 = uVar1;
          }
          if (0x7fffffffffffffbf < uVar11) {
            uVar12 = 0x3ffffffffffffff;
          }
          pplStack_b0 = (long **)ppplVar3;
          if (uVar12 == 0) {
            ppplVar10 = (long ***)0x0;
          }
          else {
            ppplVar10 = ppplVar3;
            FUN_10a1cdc18();
          }
          pplVar2 = (long **)((long)ppplVar10 + lVar15);
          pplStack_b8 = (long **)(ppplVar10 + uVar12 * 8);
          *pplVar2 = (long *)pcStack_a8;
          pplStack_d0 = (long **)ppplVar10;
          plStack_c8 = (long *)pplVar2;
          plStack_c0 = (long *)pplVar2;
          (*(code *)ppuStack_a0[3])(pplVar2 + 1,&ppuStack_a0);
          plStack_c0 = (long *)(pplVar2 + 8);
          func_0x00010a1cdb20(ppplVar3,&pplStack_d0);
          puVar14 = (undefined8 *)plVar8[2];
          func_0x00010a1cdc4c(&pplStack_d0);
        }
        plVar8[2] = (long)puVar14;
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      plVar8 = (long *)plVar9[4];
      (**(code **)(*plVar8 + 0x18))();
      if ((int)plVar8 != 0) {
        (**(code **)(*(long *)((long)plVar16 + *(long *)(*plVar16 + -0x18)) + 0x28))
                  ((long)plVar16 + *(long *)(*plVar16 + -0x18));
      }
LAB_10a1c5404:
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      if (lStack_110 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_120 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if ((long)plStack_130 < 0) {
        __ZdlPv(plStack_140);
      }
      if (lVar13 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar13);
      }
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
      }
      goto LAB_10a1c5454;
    }
    if (plStack_f8 < (long **)0x7ffffffffffffff8) {
      if (plStack_f8 < (long **)0x17) {
        uStack_d8 = (long **)CONCAT17((char)plStack_f8,(undefined7)uStack_d8);
        ppplVar10 = &pplStack_e8;
        if ((long **)plStack_f8 != (long **)0x0) goto LAB_10a1c52d8;
      }
      else {
        ppplVar3 = (long ***)0x19;
        if (((ulong)plStack_f8 | 7) != 0x17) {
          ppplVar3 = (long ***)(((ulong)plStack_f8 | 7) + 1);
        }
        ppplVar10 = ppplVar3;
        __Znwm();
        uStack_d8 = (long **)((ulong)ppplVar3 | 0x8000000000000000);
        plStack_e0 = plVar8;
        pplStack_e8 = (long **)ppplVar10;
LAB_10a1c52d8:
        _memmove(ppplVar10,pplVar2,plVar8);
      }
      *(undefined1 *)((long)ppplVar10 + (long)plVar8) = 0;
      plStack_c8 = plStack_e0;
      pplStack_d0 = pplStack_e8;
      plStack_c0 = (long *)uStack_d8;
      (*pcStack_a8)(&pplStack_d0,&pcStack_a8);
      if ((long)plStack_c0 < 0) {
        __ZdlPv(pplStack_d0);
      }
      goto LAB_10a1c5404;
    }
  }
  else {
LAB_10a1c5454:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000109ffde50();
LAB_10a1c549c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1c54a0);
  (*pcVar6)();
}



/* Entry: 10a1c5558; end: 10a1c5613;  */

void FUN_10a1c5558(long param_1,undefined8 param_2)

{
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_48;
  
  func_0x0001094f981c(*(undefined8 *)(param_1 + 0x10));
  FUN_10a1c4e78(&lStack_60,param_1,param_2);
  for (; lStack_60 != lStack_58; lStack_60 = lStack_60 + 0x18) {
    FUN_10a1d5490(*(undefined8 *)(param_1 + 0x10),lStack_60,lStack_60,&UNK_10f642cb1);
    FUN_10a1c5098(param_1,lStack_60);
  }
  puStack_48 = (undefined1 *)&lStack_60;
  FUN_10a0426d8(&puStack_48);
  return;
}



/* Entry: 10a1c5614; end: 10a1c565b;  */

undefined8 * FUN_10a1c5614(undefined8 *param_1)

{
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a1c565c; end: 10a1c577f;  */

void FUN_10a1c565c(undefined8 param_1)

{
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f643783;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f642cb1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f642cb1;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a004eb4(param_1,&puStack_a8);
  puStack_b0 = &UNK_10f642cf1;
  puStack_a8 = &UNK_10f642cb2;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f642cb1;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  pcStack_b8 = FUN_10a1c5780;
  ppuStack_a0 = &puStack_b0;
  FUN_10a1bc928(param_1,&puStack_a8,&pcStack_b8);
  puStack_b0 = &UNK_10f642cb9;
  puStack_a8 = &UNK_10f642cf7;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f642cb1;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b0;
  FUN_10a1c5810(param_1,&puStack_a8);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a1c5780; end: 10a1c580f;  */

void FUN_10a1c5780(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(param_2 + 0x870);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  lStack_30 = 0;
  uStack_28 = 0;
  lStack_38 = 0;
  FUN_10a1cdca0(&lStack_38,puVar2,(long)puVar2 + uVar1);
  FUN_10a12c178(param_1,uVar3,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1c5810; end: 10a1c5877;  */

ulong FUN_10a1c5810(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1c5878);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a1d5ab0,1,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a1c5878; end: 10a1c5887;  */

undefined8 * FUN_10a1c5878(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)*param_2;
  uVar2 = ((long *)*param_2)[1];
  if (0x7ffffffffffffff7 < uVar2) {
    func_0x000109ffde50();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (lVar4 != 0) {
      FUN_109ffe174(param_1);
      lVar5 = param_1[1];
      _bzero(lVar5,lVar4 << 2);
      param_1[1] = lVar5 + lVar4 * 4;
    }
    return param_1;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar3 = param_1;
    if (uVar2 == 0) goto LAB_109ffe0e0;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if ((uVar2 | 7) != 0x17) {
      puVar1 = (undefined8 *)((uVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    __Znwm();
    param_1[1] = uVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = puVar3;
  }
  _memmove(puVar3,lVar4,uVar2);
LAB_109ffe0e0:
  *(undefined1 *)((long)puVar3 + uVar2) = 0;
  return param_1;
}



/* Entry: 10a1c5888; end: 10a1c5967;  */

long FUN_10a1c5888(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x90);
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010a1095b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10a1c5968; end: 10a1c59e3;  */

byte FUN_10a1c5968(void)

{
  int iVar1;
  
  if ((bRam0000000113834e78 & 1) == 0) {
    iVar1 = 0x13834e78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10a1c59e4(0x113834e70);
      ___cxa_guard_release(0x113834e78);
    }
  }
  return bRam0000000113834e70 & 1;
}



/* Entry: 10a1c59e4; end: 10a1c5b8f;  */

undefined1 * FUN_10a1c59e4(undefined1 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  long lVar10;
  long *plStack_b0;
  long *plStack_a8;
  undefined ***apppuStack_a0 [2];
  char cStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  func_0x000107c2b054(apppuStack_a0,&UNK_10f64378f);
  pcStack_78 = FUN_10a1d5b80;
  ppuStack_70 = &PTR_DAT_110badae0;
  ppuVar7 = &PTR___tlv_bootstrap_11340de28;
  puStack_68 = param_1;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar9 = *ppuVar7;
  puStack_88 = &UNK_10f63b699;
  uStack_80 = 0x28;
  if (puVar9 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_88);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1c5b40);
    (*pcVar5)();
  }
  plStack_b0 = *(long **)(puVar9 + 0x10);
  plVar2 = *(long **)(puVar9 + 0x18);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_a8 = plVar2;
  if (plStack_b0 == (long *)0x0) {
    *puStack_68 = 0;
  }
  else {
    (**(code **)(*plStack_b0 + 0x20))(plStack_b0,apppuStack_a0,0,&pcStack_78);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  pppuVar8 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (cStack_89 < '\0') {
    pppuVar8 = apppuStack_a0[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a09e870(&plStack_b0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (cStack_89 < '\0') {
    __ZdlPv(apppuStack_a0[0]);
  }
  __Unwind_Resume(pppuVar8);
  if ((bRam0000000113834e88 & 1) == 0) {
    iVar6 = 0x13834e88;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_10a1c5c0c(0x113834e80);
      ___cxa_guard_release(0x113834e88);
    }
  }
  return (undefined1 *)(ulong)(bRam0000000113834e80 & 1);
}



/* Entry: 10a1c5b90; end: 10a1c5c0b;  */

byte FUN_10a1c5b90(void)

{
  int iVar1;
  
  if ((bRam0000000113834e88 & 1) == 0) {
    iVar1 = 0x13834e88;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10a1c5c0c(0x113834e80);
      ___cxa_guard_release(0x113834e88);
    }
  }
  return bRam0000000113834e80 & 1;
}



/* Entry: 10a1c5c0c; end: 10a1c5db7;  */

undefined1 * FUN_10a1c5c0c(undefined1 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_9c8;
  undefined8 uStack_9c0;
  undefined1 uStack_9b8;
  undefined *puStack_9b0;
  undefined8 uStack_9a8;
  undefined1 uStack_9a0;
  undefined **ppuStack_998;
  undefined *puStack_990;
  undefined *puStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  undefined4 uStack_968;
  undefined **ppuStack_960;
  undefined *puStack_958;
  undefined8 uStack_950;
  undefined1 uStack_948;
  undefined *puStack_940;
  undefined8 uStack_938;
  undefined1 uStack_930;
  int iStack_928;
  undefined1 auStack_920 [1024];
  undefined1 auStack_520 [1024];
  long lStack_120;
  long *plStack_b0;
  long *plStack_a8;
  undefined ***apppuStack_a0 [2];
  char cStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  func_0x000107c2b054(apppuStack_a0,&UNK_10f6437af);
  uStack_78 = 0x10a1d5ba8;
  ppuStack_70 = &PTR_DAT_110badaf8;
  ppuVar7 = &PTR___tlv_bootstrap_11340de28;
  puStack_68 = param_1;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar13 = *ppuVar7;
  puStack_88 = &UNK_10f63b699;
  uStack_80 = 0x28;
  if (puVar13 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_88);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1c5d68);
    (*pcVar5)();
  }
  plStack_b0 = *(long **)(puVar13 + 0x10);
  plVar2 = *(long **)(puVar13 + 0x18);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_a8 = plVar2;
  if (plStack_b0 == (long *)0x0) {
    *puStack_68 = 0;
  }
  else {
    (**(code **)(*plStack_b0 + 0x20))(plStack_b0,apppuStack_a0,0,&uStack_78);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar14 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  pppuVar6 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (cStack_89 < '\0') {
    pppuVar6 = apppuStack_a0[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_10a09e870(&plStack_b0);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (cStack_89 < '\0') {
      __ZdlPv(apppuStack_a0[0]);
    }
    __Unwind_Resume();
    ppuVar7 = *pppuVar6;
    if (ppuVar7 == (undefined **)0x0) {
      FUN_10a09f0cc(0x113834e90,0);
    }
    else {
      (**(code **)(*ppuVar7 + 0x80))(ppuVar7,0x113834e90);
    }
    puVar8 = (undefined1 *)0x113834e90;
    FUN_10a08f69c();
    func_0x00010ae02ecc(0,*puVar8);
    ppuVar7 = &PTR_PTR_113300798;
    ppuVar12 = ppuVar7;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar13 = (undefined *)0x0;
    if (ppuVar12 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_958,auStack_520,0x400,auStack_920,0x400,ppuVar12[0x13],ppuVar12[0xf],
                    ppuVar12 + 0x14,0x400);
      puStack_9c8 = puStack_940;
      uStack_9c0 = uStack_938;
      puStack_9b0 = puStack_958;
      uStack_9a8 = uStack_950;
      uStack_9b8 = uStack_930;
      if (iStack_928 != 0) {
        puStack_9c8 = &UNK_10f6c352e;
        uStack_9c0 = 0x10;
        puStack_9b0 = &UNK_10f6c352e;
        uStack_9a8 = 0x10;
        uStack_9b8 = 0;
        uStack_948 = 0;
      }
      puVar16 = ppuVar12[0x12];
      puVar15 = ppuVar12[0xb];
      uVar9 = 0;
      _clock_gettime_nsec_np();
      uVar10 = uVar9;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_998 = ppuVar12 + 1;
      uStack_968 = *(undefined4 *)(ppuVar12 + 0xe);
      uStack_970 = uVar10 & 0xffffffff;
      ppuStack_960 = ppuVar12 + 0x10;
      puVar13 = *ppuVar12;
      ppuVar7 = (undefined **)&ppuStack_998;
      uStack_9a0 = uStack_948;
      puStack_990 = puVar15;
      puStack_988 = puVar16;
      uStack_980 = (ulong)(puVar16 != (undefined *)0x0);
      uStack_978 = uVar9;
      FUN_10ae0784c(puVar13,ppuVar7,&puStack_9b0,&puStack_9c8);
    }
    iVar11 = (int)ppuVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
      return puVar13;
    }
    ___stack_chk_fail();
    if (iVar11 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar13);
    return puVar13;
  }
  return param_1;
}



/* Entry: 10a1c5db8; end: 10a1c5e47;  */

undefined * FUN_10a1c5db8(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    FUN_10a09f0cc(0x113834e90,0);
  }
  else {
    (**(code **)(*param_1 + 0x80))(param_1,0x113834e90);
  }
  puVar1 = (undefined1 *)0x113834e90;
  FUN_10a08f69c();
  func_0x00010ae02ecc(0,*puVar1);
  ppuVar7 = &PTR_PTR_113300798;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10a1c5e48; end: 10a1c5e97;  */

/* WARNING: Removing unreachable block (ram,0x00010a1c5e80) */

long FUN_10a1c5e48(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x98))();
  (*(code *)**(undefined8 **)(param_1 + 0x58))((undefined8 *)(param_1 + 0x58));
  return param_1;
}



/* Entry: 10a1c5e98; end: 10a1c5f27;  */

byte * FUN_10a1c5e98(byte *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  code *pcVar5;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((param_1[0x10] & 1) == 0) {
    pcVar5 = *(code **)(param_1 + 0x90);
    pbVar4 = param_1 + 0x18;
    FUN_10a1d5c08();
    (*pcVar5)();
    *(byte **)(param_1 + 8) = pbVar4;
    param_1[0x10] = 1;
  }
  *param_1 = 0;
  return param_1 + 8;
}



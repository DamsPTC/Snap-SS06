/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a03e190; end: 10a03e253;  */

undefined8 * FUN_10a03e190(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x11) = 0x100;
  puVar1 = param_1;
  FUN_10a03e114();
  FUN_10a03c0d0(puVar1 + 4);
  FUN_10a0040d0(param_1 + 8,&PTR_PTR_110b9c1e0);
  *param_1 = &PTR_FUN_110b9c0b0;
  param_1[4] = &PTR_DAT_110b9c0f8;
  param_1[8] = &PTR_DAT_110b9c128;
  param_1[0xd] = 0;
  param_1[0xe] = &PTR_DAT_110b9c1a0;
  return param_1;
}



/* Entry: 10a03e254; end: 10a03e3e7;  */

undefined8 * FUN_10a03e254(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_110b9c0b0;
  param_1[4] = &PTR_DAT_110b9c0f8;
  param_1[8] = &PTR_DAT_110b9c128;
  param_1[0xe] = &PTR_DAT_110b9c1a0;
  FUN_10a5ae930(param_1[0xb]);
  lVar4 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar4 != 0) {
    plVar1 = (long *)*(long *)(lVar4 + 0xa0);
    while (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      if (*(char *)((long)plVar1 + 0x27) < '\0') {
        __ZdlPv(plVar1[2]);
      }
      __ZdlPv(plVar1);
      plVar1 = (long *)lVar5;
    }
    lVar5 = *(long *)(lVar4 + 0x90);
    *(undefined8 *)(lVar4 + 0x90) = 0;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar1 = (long *)*(long *)(lVar4 + 0x78);
    while (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      if (*(char *)((long)plVar1 + 0x27) < '\0') {
        __ZdlPv(plVar1[2]);
      }
      __ZdlPv(plVar1);
      plVar1 = (long *)lVar5;
    }
    lVar5 = *(long *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 0x68) = 0;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    FUN_10a087438(lVar4 + 0x58);
    lVar5 = *(long *)(lVar4 + 0x40);
    if (lVar5 != 0) {
      lVar2 = *(long *)(lVar4 + 0x48);
      lVar3 = lVar5;
      if (lVar2 != lVar5) {
        do {
          lVar2 = lVar2 + -0x10;
          FUN_10a0886ec();
        } while (lVar2 != lVar5);
        lVar3 = *(long *)(lVar4 + 0x40);
      }
      *(long *)(lVar4 + 0x48) = lVar5;
      __ZdlPv(lVar3);
    }
    __ZdlPv(lVar4);
  }
  param_1[8] = &PTR_DAT_110b9cee8;
  param_1[0xe] = &PTR_FUN_110b9cf60;
  func_0x00010a004e5c(param_1 + 0xb);
  func_0x00010a004e04(param_1 + 9);
  param_1[4] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[7] = 0;
  }
  func_0x00010a004e5c(param_1 + 5);
  *param_1 = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a03e3e8; end: 10a03e40b;  */

undefined8 * FUN_10a03e3e8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_110b9c0b0;
  param_1[4] = &PTR_DAT_110b9c0f8;
  param_1[8] = &PTR_DAT_110b9c128;
  param_1[0xe] = &PTR_DAT_110b9c1a0;
  FUN_10a5ae930(param_1[0xb]);
  lVar4 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar4 != 0) {
    plVar1 = (long *)*(long *)(lVar4 + 0xa0);
    while (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      if (*(char *)((long)plVar1 + 0x27) < '\0') {
        __ZdlPv(plVar1[2]);
      }
      __ZdlPv(plVar1);
      plVar1 = (long *)lVar5;
    }
    lVar5 = *(long *)(lVar4 + 0x90);
    *(undefined8 *)(lVar4 + 0x90) = 0;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar1 = (long *)*(long *)(lVar4 + 0x78);
    while (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      if (*(char *)((long)plVar1 + 0x27) < '\0') {
        __ZdlPv(plVar1[2]);
      }
      __ZdlPv(plVar1);
      plVar1 = (long *)lVar5;
    }
    lVar5 = *(long *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 0x68) = 0;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    FUN_10a087438(lVar4 + 0x58);
    lVar5 = *(long *)(lVar4 + 0x40);
    if (lVar5 != 0) {
      lVar2 = *(long *)(lVar4 + 0x48);
      lVar3 = lVar5;
      if (lVar2 != lVar5) {
        do {
          lVar2 = lVar2 + -0x10;
          FUN_10a0886ec();
        } while (lVar2 != lVar5);
        lVar3 = *(long *)(lVar4 + 0x40);
      }
      *(long *)(lVar4 + 0x48) = lVar5;
      __ZdlPv(lVar3);
    }
    __ZdlPv(lVar4);
  }
  param_1[8] = &PTR_DAT_110b9cee8;
  param_1[0xe] = &PTR_FUN_110b9cf60;
  func_0x00010a004e5c(param_1 + 0xb);
  func_0x00010a004e04(param_1 + 9);
  param_1[4] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[7] = 0;
  }
  func_0x00010a004e5c(param_1 + 5);
  *param_1 = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a03e40c; end: 10a03e44f;  */

void FUN_10a03e40c(void)

{
  FUN_10a03e254();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a03e450; end: 10a03e47f;  */

void FUN_10a03e450(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a03e254((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a03e480; end: 10a03e4ff;  */

void FUN_10a03e480(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 != 0) {
    plVar2 = *(long **)(lVar4 + 0x58);
    if (plVar2 != (long *)0x0) {
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_38);
      FUN_10a0517ac(&uStack_38);
    }
    lVar1 = *(long *)(lVar4 + 0x40);
    lVar3 = *(long *)(lVar4 + 0x48);
    while (lVar3 != lVar1) {
      lVar3 = lVar3 + -0x10;
      FUN_10a0886ec();
    }
    *(long *)(lVar4 + 0x48) = lVar1;
  }
  return;
}



/* Entry: 10a03e500; end: 10a03e50f;  */

void FUN_10a03e500(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  bool bVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar28;
  long *unaff_x23;
  long *plVar29;
  long *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar30 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  plVar11 = *(long **)(param_1 + 0x68);
  puVar9 = (undefined1 *)register0x00000008;
  if (plVar11 == (long *)0x0) {
    return;
  }
  do {
    *(undefined8 *)(puVar9 + -0x70) = unaff_d9;
    *(undefined8 *)(puVar9 + -0x68) = unaff_d8;
    *(undefined8 **)(puVar9 + -0x60) = unaff_x28;
    *(undefined8 **)(puVar9 + -0x58) = unaff_x27;
    *(long **)(puVar9 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
    *(long **)(puVar9 + -0x40) = unaff_x24;
    *(long **)(puVar9 + -0x38) = unaff_x23;
    *(long **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = unaff_x21;
    *(long **)(puVar9 + -0x20) = unaff_x20;
    *(long **)(puVar9 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar9 + -0x10) = unaff_x29;
    *(code **)(puVar9 + -8) = unaff_x30;
    unaff_x29 = puVar9 + -0x10;
    *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = (long *)plVar11[0xb];
    unaff_x19 = plVar11;
    if (unaff_x20 != (long *)0x0 && plVar11[8] != plVar11[9]) {
      lVar28 = *(long *)(plVar11[0x17] + 0x850);
      unaff_x21 = plVar11;
      __ZNSt3__16chrono12steady_clock3nowEv();
      unaff_x22 = *(long **)(lVar28 + 0x20);
      FUN_10a05181c(puVar9 + -0xf0,plVar11);
      *(double *)(puVar9 + -0xb8) = (double)(float)((ulong)*(undefined8 *)(puVar9 + -0xf0) >> 0x20);
      *(double *)(puVar9 + -0xc0) = (double)(float)*(undefined8 *)(puVar9 + -0xf0);
      *(double *)(puVar9 + -0xa8) = (double)(float)((ulong)*(undefined8 *)(puVar9 + -0xe8) >> 0x20);
      *(double *)(puVar9 + -0xb0) = (double)(float)*(undefined8 *)(puVar9 + -0xe8);
      *(double *)(puVar9 + -0x98) = (double)(float)((ulong)*(undefined8 *)(puVar9 + -0xe0) >> 0x20);
      *(double *)(puVar9 + -0xa0) = (double)(float)*(undefined8 *)(puVar9 + -0xe0);
      *(double *)(puVar9 + -0x90) = (double)*(float *)(puVar9 + -0xd8);
      (**(code **)(*unaff_x20 + 0x18))
                (puVar9 + -0x164,unaff_x20,(long)unaff_x21 - (long)unaff_x22,puVar9 + -0xc0);
      unaff_x19 = (long *)plVar11[0xb];
      (**(code **)(*unaff_x19 + 0x20))(puVar9 + -0x1a0);
      unaff_x27 = (undefined8 *)plVar11[8];
      unaff_x28 = (undefined8 *)plVar11[9];
      if (unaff_x27 != unaff_x28) {
        unaff_x25 = 0x9ddfea08eb382d69;
        *(undefined1 **)(puVar9 + -0x1e8) = puVar9 + -0xe0;
        *(undefined1 **)(puVar9 + -0x1c8) = puVar9 + -0x110;
        unaff_d8 = 0x100000001;
        *(undefined8 **)(puVar9 + -0x210) = unaff_x28;
        do {
          unaff_x26 = (long *)*unaff_x27;
          lVar28 = unaff_x27[1];
          *(long **)(puVar9 + -0x1b0) = unaff_x26;
          *(long *)(puVar9 + -0x1a8) = lVar28;
          if (lVar28 != 0) {
            plVar11 = (long *)(lVar28 + 8);
            do {
              cVar3 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar10) {
                *plVar11 = *plVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (puVar9[-0x138] == '\x01') {
            cVar3 = puVar9[-0x164];
            puVar9[-0xc0] = cVar3;
            if ((char)unaff_x26[3] != cVar3) {
              *(char *)(unaff_x26 + 3) = cVar3;
              unaff_x19 = (long *)unaff_x26[9];
              FUN_10a03dff0(unaff_x19,puVar9 + -0xc0);
            }
            if ((cVar3 != '\0') && (*(int *)(unaff_x26[7] + 0x30) != 0)) {
              if ((puVar9[-0x138] & 1) == 0) goto LAB_10a03fd54;
              if (puVar9[-0x13c] == '\x01') {
                iVar1 = *(int *)(puVar9 + -0x140);
                *(int *)(puVar9 + -0x130) = iVar1;
                if ((int)unaff_x26[6] != iVar1) {
                  *(int *)(unaff_x26 + 6) = iVar1;
                  *(long **)(puVar9 + -0x1e0) = unaff_x26;
                  lVar28 = unaff_x26[0xb];
                  *(undefined8 *)(puVar9 + -0xe8) = 0;
                  *(undefined8 *)(puVar9 + -0xf0) = 0;
                  *(undefined8 *)(puVar9 + -0xd8) = 0;
                  *(undefined8 *)(puVar9 + -0xe0) = 0;
                  *(undefined4 *)(puVar9 + -0xd0) = *(undefined4 *)(lVar28 + 0x38);
                  puVar12 = *(undefined1 **)(lVar28 + 0x20);
                  FUN_10a086718(puVar9 + -0xf0);
                  for (plVar11 = *(long **)(lVar28 + 0x28); plVar11 != (long *)0x0;
                      plVar11 = (long *)*plVar11) {
                    uVar15 = plVar11[2];
                    uVar19 = ((ulong)(uint)((int)uVar15 << 3) + 8 ^ uVar15 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar19 = (uVar15 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
                    unaff_x24 = (long *)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
                    plVar29 = *(long **)(puVar9 + -0xe8);
                    if (plVar29 != (long *)0x0) {
                      uVar19 = (long)plVar29 - 1;
                      if (((ulong)plVar29 & uVar19) == 0) {
                        unaff_x26 = (long *)((ulong)unaff_x24 & uVar19);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar29 <= unaff_x24) {
                          uVar23 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar23 = (ulong)unaff_x24 / (ulong)plVar29;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar23 * (long)plVar29);
                        }
                      }
                      plVar20 = *(long **)(*(long *)(puVar9 + -0xf0) + (long)unaff_x26 * 8);
                      if (plVar20 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar20 = (long *)*plVar20;
                            if (plVar20 == (long *)0x0) goto LAB_10a03e77c;
                            plVar22 = (long *)plVar20[1];
                            if (plVar22 != unaff_x24) break;
                            if (plVar20[2] == uVar15) goto LAB_10a03e8e4;
                          }
                          if (((ulong)plVar29 & uVar19) == 0) {
                            plVar22 = (long *)((ulong)plVar22 & uVar19);
                          }
                          else if (plVar29 <= plVar22) {
                            uVar23 = 0;
                            if (plVar29 != (long *)0x0) {
                              uVar23 = (ulong)plVar22 / (ulong)plVar29;
                            }
                            plVar22 = (long *)((long)plVar22 - uVar23 * (long)plVar29);
                          }
                        } while (plVar22 == unaff_x26);
                      }
                    }
LAB_10a03e77c:
                    unaff_x20 = (long *)0x68;
                    __Znwm();
                    *unaff_x20 = 0;
                    unaff_x20[1] = (long)unaff_x24;
                    lVar16 = plVar11[3];
                    lVar17 = plVar11[2];
                    unaff_x20[3] = plVar11[3];
                    unaff_x20[2] = lVar17;
                    if (lVar16 != 0) {
                      plVar20 = (long *)(lVar16 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar10) {
                          *plVar20 = *plVar20 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = 3;
                    *(long **)(puVar9 + -0xc0) = unaff_x20 + 4;
                    if (*(char *)(plVar11 + 0xc) == '\0') {
                      uVar14 = 0;
                    }
                    else {
                      puVar12 = (undefined1 *)(plVar11 + 4);
                      FUN_10a005398(puVar9 + -0xc0);
                      uVar14 = *(undefined1 *)(plVar11 + 0xc);
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = uVar14;
                    if ((plVar29 == (long *)0x0) ||
                       (*(float *)(puVar9 + -0xd0) * (float)plVar29 <
                        (float)(*(long *)(puVar9 + -0xd8) + 1))) {
                      uVar15 = 1;
                      if ((long *)0x2 < plVar29) {
                        uVar15 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
                      }
                      puVar12 = (undefined1 *)(uVar15 | (long)plVar29 << 1);
                      puVar13 = (undefined1 *)
                                (long)((float)(*(long *)(puVar9 + -0xd8) + 1) /
                                      *(float *)(puVar9 + -0xd0));
                      if (puVar12 <= puVar13) {
                        puVar12 = puVar13;
                      }
                      FUN_10a086718(puVar9 + -0xf0);
                      plVar29 = *(long **)(puVar9 + -0xe8);
                      if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                        unaff_x26 = (long *)((long)plVar29 - 1U & (ulong)unaff_x24);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar29 <= unaff_x24) {
                          uVar15 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar15 = (ulong)unaff_x24 / (ulong)plVar29;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar15 * (long)plVar29);
                        }
                      }
                    }
                    lVar17 = *(long *)(puVar9 + -0xf0);
                    plVar20 = *(long **)(lVar17 + (long)unaff_x26 * 8);
                    if (plVar20 == (long *)0x0) {
                      *unaff_x20 = *(long *)(puVar9 + -0xe0);
                      *(long **)(puVar9 + -0xe0) = unaff_x20;
                      *(undefined8 *)(lVar17 + (long)unaff_x26 * 8) =
                           *(undefined8 *)(puVar9 + -0x1e8);
                      if (*unaff_x20 != 0) {
                        plVar20 = *(long **)(*unaff_x20 + 8);
                        if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                          plVar20 = (long *)((ulong)plVar20 & (long)plVar29 - 1U);
                        }
                        else if (plVar29 <= plVar20) {
                          uVar15 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar15 = (ulong)plVar20 / (ulong)plVar29;
                          }
                          plVar20 = (long *)((long)plVar20 - uVar15 * (long)plVar29);
                        }
                        *(long **)(*(long *)(puVar9 + -0xf0) + (long)plVar20 * 8) = unaff_x20;
                      }
                    }
                    else {
                      *unaff_x20 = *plVar20;
                      *plVar20 = (long)unaff_x20;
                    }
                    *(long *)(puVar9 + -0xd8) = *(long *)(puVar9 + -0xd8) + 1;
LAB_10a03e8e4:
                  }
                  unaff_x23 = (long *)(puVar9 + -0xc0);
                  unaff_x26 = *(long **)(puVar9 + -0x1e0);
                  for (plVar11 = *(long **)(puVar9 + -0xe0); plVar11 != (long *)0x0;
                      plVar11 = (long *)*plVar11) {
                    uVar15 = *(ulong *)(lVar28 + 0x20);
                    puVar13 = puVar12;
                    if (uVar15 != 0) {
                      uVar19 = plVar11[2];
                      uVar23 = ((ulong)(uint)((int)uVar19 << 3) + 8 ^ uVar19 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar23 = (uVar19 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
                      uVar23 = (uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297;
                      uVar24 = uVar15 - 1;
                      if ((uVar15 & uVar24) == 0) {
                        uVar26 = uVar23 & uVar24;
                      }
                      else {
                        uVar26 = uVar23;
                        if (uVar15 <= uVar23) {
                          uVar26 = 0;
                          if (uVar15 != 0) {
                            uVar26 = uVar23 / uVar15;
                          }
                          uVar26 = uVar23 - uVar26 * uVar15;
                        }
                      }
                      plVar29 = *(long **)(*(long *)(lVar28 + 0x18) + uVar26 * 8);
                      if (plVar29 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar29 = (long *)*plVar29;
                            if (plVar29 == (long *)0x0) goto LAB_10a03ea18;
                            uVar27 = plVar29[1];
                            if (uVar27 != uVar23) break;
                            if (plVar29[2] == uVar19) {
                              if (*(char *)(plVar11 + 0xc) == '\x01') {
                                puVar13 = (undefined1 *)(plVar11 + 4);
                                (*(code *)plVar11[4])(iVar1);
                              }
                              else if (*(char *)(plVar11 + 0xc) == '\x02') {
                                unaff_x20 = plVar11 + 4;
                                FUN_10a688b40();
                                if (unaff_x20 == (long *)0x0) {
                                  puVar13 = (undefined1 *)0x0;
                                  if (puVar12 != (undefined1 *)0x0) {
                                    uVar6 = plVar11[4];
                                    uVar7 = plVar11[5];
                                    if (plVar11[5] != 0) {
                                      plVar29 = (long *)(plVar11[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                                        if (bVar10) {
                                          *plVar29 = *plVar29 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    *(int *)(puVar9 + -0x110) = iVar1;
                                    *(code **)(puVar9 + -0xc0) = FUN_10a087624;
                                    *(undefined ***)(puVar9 + -0xb8) = &PTR_DAT_110b9ea88;
                                    *(undefined8 *)(puVar9 + -0xa8) = uVar7;
                                    *(undefined8 *)(puVar9 + -0xb0) = uVar6;
                                    *(undefined8 *)(puVar9 + -0x120) = 0;
                                    *(undefined8 *)(puVar9 + -0x118) = 0;
                                    *(int *)(puVar9 + -0xa0) = iVar1;
                                    puVar13 = puVar9 + -0xc0;
                                    FUN_10a4634ec(puVar12);
                                    (*(code *)**(undefined8 **)(puVar9 + -0xb8))(puVar9 + -0xb8);
                                  }
                                }
                                else {
                                  *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                        (int)*unaff_x20 + 1);
                                  puVar13 = puVar9 + -0x130;
                                  FUN_10a087490(plVar11[4]);
                                  iVar4 = *(int *)((long)unaff_x20 + 4) + -1;
                                  *(int *)((long)unaff_x20 + 4) = iVar4;
                                  if (iVar4 == 0) {
                                    *(undefined4 *)unaff_x20 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03ea18;
                            }
                          }
                          if ((uVar15 & uVar24) == 0) {
                            uVar27 = uVar27 & uVar24;
                          }
                          else if (uVar15 <= uVar27) {
                            uVar5 = 0;
                            if (uVar15 != 0) {
                              uVar5 = uVar27 / uVar15;
                            }
                            uVar27 = uVar27 - uVar5 * uVar15;
                          }
                        } while (uVar27 == uVar26);
                      }
                    }
LAB_10a03ea18:
                    puVar12 = puVar13;
                  }
                  unaff_x22 = (long *)0x0;
                  unaff_x19 = (long *)(puVar9 + -0xf0);
                  FUN_10a0871b8();
                  if ((puVar9[-0x13c] & 1) == 0) goto LAB_10a03fd54;
                }
                if (((((*(float *)((long)unaff_x26 + 0xbc) != *(float *)(puVar9 + -0x160)) ||
                      (*(float *)(unaff_x26 + 0x18) != *(float *)(puVar9 + -0x15c))) ||
                     (*(float *)((long)unaff_x26 + 0xc4) != *(float *)(puVar9 + -0x158))) ||
                    ((*(float *)(unaff_x26 + 0x19) != *(float *)(puVar9 + -0x154) ||
                     (*(float *)((long)unaff_x26 + 0xcc) != *(float *)(puVar9 + -0x150))))) ||
                   ((*(float *)(unaff_x26 + 0x1a) != *(float *)(puVar9 + -0x14c) ||
                    (*(float *)((long)unaff_x26 + 0xd4) != *(float *)(puVar9 + -0x148))))) {
                  *(undefined8 *)((long)unaff_x26 + 0xbc) = *(undefined8 *)(puVar9 + -0x160);
                  *(undefined4 *)((long)unaff_x26 + 0xc4) = *(undefined4 *)(puVar9 + -0x158);
                  lVar28 = *(long *)(puVar9 + -0x154);
                  unaff_x26[0x1a] = *(long *)(puVar9 + -0x14c);
                  unaff_x26[0x19] = lVar28;
                  lVar28 = unaff_x26[0x13];
                  *(undefined8 *)(puVar9 + -0x118) = 0;
                  *(undefined8 *)(puVar9 + -0x120) = 0;
                  *(undefined8 *)(puVar9 + -0x108) = 0;
                  *(undefined8 *)(puVar9 + -0x110) = 0;
                  *(undefined4 *)(puVar9 + -0x100) = *(undefined4 *)(lVar28 + 0x38);
                  puVar12 = *(undefined1 **)(lVar28 + 0x20);
                  FUN_10a086f98(puVar9 + -0x120);
                  for (plVar11 = *(long **)(lVar28 + 0x28); plVar11 != (long *)0x0;
                      plVar11 = (long *)*plVar11) {
                    uVar15 = plVar11[2];
                    uVar19 = ((ulong)(uint)((int)uVar15 << 3) + 8 ^ uVar15 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar19 = (uVar15 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
                    unaff_x23 = (long *)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
                    plVar29 = *(long **)(puVar9 + -0x118);
                    if (plVar29 != (long *)0x0) {
                      uVar19 = (long)plVar29 - 1;
                      if (((ulong)plVar29 & uVar19) == 0) {
                        unaff_x24 = (long *)((ulong)unaff_x23 & uVar19);
                      }
                      else {
                        unaff_x24 = unaff_x23;
                        if (plVar29 <= unaff_x23) {
                          uVar23 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar23 = (ulong)unaff_x23 / (ulong)plVar29;
                          }
                          unaff_x24 = (long *)((long)unaff_x23 - uVar23 * (long)plVar29);
                        }
                      }
                      plVar20 = *(long **)(*(long *)(puVar9 + -0x120) + (long)unaff_x24 * 8);
                      if (plVar20 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar20 = (long *)*plVar20;
                            if (plVar20 == (long *)0x0) goto LAB_10a03ec08;
                            plVar22 = (long *)plVar20[1];
                            if (plVar22 != unaff_x23) break;
                            if (plVar20[2] == uVar15) goto LAB_10a03ed70;
                          }
                          if (((ulong)plVar29 & uVar19) == 0) {
                            plVar22 = (long *)((ulong)plVar22 & uVar19);
                          }
                          else if (plVar29 <= plVar22) {
                            uVar23 = 0;
                            if (plVar29 != (long *)0x0) {
                              uVar23 = (ulong)plVar22 / (ulong)plVar29;
                            }
                            plVar22 = (long *)((long)plVar22 - uVar23 * (long)plVar29);
                          }
                        } while (plVar22 == unaff_x24);
                      }
                    }
LAB_10a03ec08:
                    unaff_x20 = (long *)0x68;
                    __Znwm();
                    *unaff_x20 = 0;
                    unaff_x20[1] = (long)unaff_x23;
                    lVar16 = plVar11[3];
                    lVar17 = plVar11[2];
                    unaff_x20[3] = plVar11[3];
                    unaff_x20[2] = lVar17;
                    if (lVar16 != 0) {
                      plVar20 = (long *)(lVar16 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar10) {
                          *plVar20 = *plVar20 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = 3;
                    *(long **)(puVar9 + -0xc0) = unaff_x20 + 4;
                    if (*(char *)(plVar11 + 0xc) == '\0') {
                      uVar14 = 0;
                    }
                    else {
                      puVar12 = (undefined1 *)(plVar11 + 4);
                      FUN_10a005398(puVar9 + -0xc0);
                      uVar14 = *(undefined1 *)(plVar11 + 0xc);
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = uVar14;
                    if ((plVar29 == (long *)0x0) ||
                       (*(float *)(puVar9 + -0x100) * (float)plVar29 <
                        (float)(*(long *)(puVar9 + -0x108) + 1))) {
                      uVar15 = 1;
                      if ((long *)0x2 < plVar29) {
                        uVar15 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
                      }
                      puVar12 = (undefined1 *)(uVar15 | (long)plVar29 << 1);
                      puVar13 = (undefined1 *)
                                (long)((float)(*(long *)(puVar9 + -0x108) + 1) /
                                      *(float *)(puVar9 + -0x100));
                      if (puVar12 <= puVar13) {
                        puVar12 = puVar13;
                      }
                      FUN_10a086f98(puVar9 + -0x120);
                      plVar29 = *(long **)(puVar9 + -0x118);
                      if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                        unaff_x24 = (long *)((long)plVar29 - 1U & (ulong)unaff_x23);
                      }
                      else {
                        unaff_x24 = unaff_x23;
                        if (plVar29 <= unaff_x23) {
                          uVar15 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar15 = (ulong)unaff_x23 / (ulong)plVar29;
                          }
                          unaff_x24 = (long *)((long)unaff_x23 - uVar15 * (long)plVar29);
                        }
                      }
                    }
                    lVar17 = *(long *)(puVar9 + -0x120);
                    plVar20 = *(long **)(lVar17 + (long)unaff_x24 * 8);
                    if (plVar20 == (long *)0x0) {
                      *unaff_x20 = *(long *)(puVar9 + -0x110);
                      *(long **)(puVar9 + -0x110) = unaff_x20;
                      *(undefined8 *)(lVar17 + (long)unaff_x24 * 8) =
                           *(undefined8 *)(puVar9 + -0x1c8);
                      if (*unaff_x20 != 0) {
                        plVar20 = *(long **)(*unaff_x20 + 8);
                        if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                          plVar20 = (long *)((ulong)plVar20 & (long)plVar29 - 1U);
                        }
                        else if (plVar29 <= plVar20) {
                          uVar15 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar15 = (ulong)plVar20 / (ulong)plVar29;
                          }
                          plVar20 = (long *)((long)plVar20 - uVar15 * (long)plVar29);
                        }
                        *(long **)(*(long *)(puVar9 + -0x120) + (long)plVar20 * 8) = unaff_x20;
                      }
                    }
                    else {
                      *unaff_x20 = *plVar20;
                      *plVar20 = (long)unaff_x20;
                    }
                    *(long *)(puVar9 + -0x108) = *(long *)(puVar9 + -0x108) + 1;
LAB_10a03ed70:
                  }
                  unaff_x22 = (long *)(puVar9 + -0xc0);
                  for (plVar11 = *(long **)(puVar9 + -0x110); plVar11 != (long *)0x0;
                      plVar11 = (long *)*plVar11) {
                    uVar15 = *(ulong *)(lVar28 + 0x20);
                    puVar13 = puVar12;
                    if (uVar15 != 0) {
                      uVar19 = plVar11[2];
                      uVar23 = ((ulong)(uint)((int)uVar19 << 3) + 8 ^ uVar19 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar23 = (uVar19 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
                      uVar23 = (uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297;
                      uVar24 = uVar15 - 1;
                      if ((uVar15 & uVar24) == 0) {
                        uVar26 = uVar23 & uVar24;
                      }
                      else {
                        uVar26 = uVar23;
                        if (uVar15 <= uVar23) {
                          uVar26 = 0;
                          if (uVar15 != 0) {
                            uVar26 = uVar23 / uVar15;
                          }
                          uVar26 = uVar23 - uVar26 * uVar15;
                        }
                      }
                      plVar29 = *(long **)(*(long *)(lVar28 + 0x18) + uVar26 * 8);
                      if (plVar29 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar29 = (long *)*plVar29;
                            if (plVar29 == (long *)0x0) goto LAB_10a03eeb4;
                            uVar27 = plVar29[1];
                            if (uVar27 != uVar23) break;
                            if (plVar29[2] == uVar19) {
                              if (*(char *)(plVar11 + 0xc) == '\x01') {
                                (*(code *)plVar11[4])
                                          (*(undefined4 *)(puVar9 + -0x160),
                                           *(undefined4 *)(puVar9 + -0x15c),
                                           *(undefined4 *)(puVar9 + -0x158),
                                           *(undefined4 *)(puVar9 + -0x154),
                                           *(undefined4 *)(puVar9 + -0x150),
                                           *(undefined4 *)(puVar9 + -0x14c),
                                           *(undefined4 *)(puVar9 + -0x148),plVar11 + 4);
                                puVar13 = puVar12;
                              }
                              else if (*(char *)(plVar11 + 0xc) == '\x02') {
                                unaff_x20 = plVar11 + 4;
                                FUN_10a688b40();
                                if (unaff_x20 == (long *)0x0) {
                                  puVar13 = (undefined1 *)0x0;
                                  if (puVar12 != (undefined1 *)0x0) {
                                    uVar6 = plVar11[4];
                                    uVar7 = plVar11[5];
                                    if (plVar11[5] != 0) {
                                      plVar29 = (long *)(plVar11[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                                        if (bVar10) {
                                          *plVar29 = *plVar29 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    puVar18 = *(undefined8 **)(puVar9 + -0x1e8);
                                    *puVar18 = *(undefined8 *)(puVar9 + -0x160);
                                    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar9 + -0x158);
                                    *(undefined8 *)(puVar9 + -0xcc) =
                                         *(undefined8 *)(puVar9 + -0x14c);
                                    *(undefined8 *)(puVar9 + -0xd4) =
                                         *(undefined8 *)(puVar9 + -0x154);
                                    *(code **)(puVar9 + -0xc0) = FUN_10a088278;
                                    *(undefined ***)(puVar9 + -0xb8) = &PTR_DAT_110b9eab8;
                                    *(undefined8 *)(puVar9 + -0xa8) = uVar7;
                                    *(undefined8 *)(puVar9 + -0xb0) = uVar6;
                                    *(undefined8 *)(puVar9 + -0xf0) = 0;
                                    *(undefined8 *)(puVar9 + -0xe8) = 0;
                                    uVar6 = *puVar18;
                                    *(undefined8 *)(puVar9 + -0x98) = puVar18[1];
                                    *(undefined8 *)(puVar9 + -0xa0) = uVar6;
                                    uVar6 = *(undefined8 *)((long)puVar18 + 0xc);
                                    *(undefined8 *)(puVar9 + -0x8c) =
                                         *(undefined8 *)((long)puVar18 + 0x14);
                                    *(undefined8 *)(puVar9 + -0x94) = uVar6;
                                    puVar13 = puVar9 + -0xc0;
                                    FUN_10a4634ec(puVar12);
                                    (*(code *)**(undefined8 **)(puVar9 + -0xb8))(puVar9 + -0xb8);
                                  }
                                }
                                else {
                                  *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                        (int)*unaff_x20 + 1);
                                  puVar13 = puVar9 + -0x160;
                                  FUN_10a087fe0(plVar11[4],puVar13,puVar9 + -0x154);
                                  iVar1 = *(int *)((long)unaff_x20 + 4) + -1;
                                  *(int *)((long)unaff_x20 + 4) = iVar1;
                                  if (iVar1 == 0) {
                                    *(undefined4 *)unaff_x20 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03eeb4;
                            }
                          }
                          if ((uVar15 & uVar24) == 0) {
                            uVar27 = uVar27 & uVar24;
                          }
                          else if (uVar15 <= uVar27) {
                            uVar5 = 0;
                            if (uVar15 != 0) {
                              uVar5 = uVar27 / uVar15;
                            }
                            uVar27 = uVar27 - uVar5 * uVar15;
                          }
                        } while (uVar27 == uVar26);
                      }
                    }
LAB_10a03eeb4:
                    puVar12 = puVar13;
                  }
                  unaff_x19 = (long *)(puVar9 + -0x120);
                  func_0x00010a0873b8();
                  if ((puVar9[-0x13c] & 1) == 0) goto LAB_10a03fd54;
                }
                uVar2 = *(uint *)(puVar9 + -0x144);
                unaff_x21 = (long *)(ulong)uVar2;
                *(uint *)(puVar9 + -0x130) = uVar2;
                if (*(uint *)(unaff_x26 + 0x17) != uVar2) {
                  *(uint *)(unaff_x26 + 0x17) = uVar2;
                  lVar28 = unaff_x26[0x11];
                  *(undefined8 *)(puVar9 + -0xe8) = 0;
                  *(undefined8 *)(puVar9 + -0xf0) = 0;
                  *(undefined8 *)(puVar9 + -0xd8) = 0;
                  *(undefined8 *)(puVar9 + -0xe0) = 0;
                  *(undefined4 *)(puVar9 + -0xd0) = *(undefined4 *)(lVar28 + 0x38);
                  puVar12 = *(undefined1 **)(lVar28 + 0x20);
                  FUN_10a086d78(puVar9 + -0xf0);
                  for (plVar11 = *(long **)(lVar28 + 0x28); plVar11 != (long *)0x0;
                      plVar11 = (long *)*plVar11) {
                    uVar15 = plVar11[2];
                    uVar19 = ((ulong)(uint)((int)uVar15 << 3) + 8 ^ uVar15 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar19 = (uVar15 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
                    unaff_x24 = (long *)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
                    plVar29 = *(long **)(puVar9 + -0xe8);
                    if (plVar29 != (long *)0x0) {
                      uVar19 = (long)plVar29 - 1;
                      if (((ulong)plVar29 & uVar19) == 0) {
                        unaff_x26 = (long *)((ulong)unaff_x24 & uVar19);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar29 <= unaff_x24) {
                          uVar23 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar23 = (ulong)unaff_x24 / (ulong)plVar29;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar23 * (long)plVar29);
                        }
                      }
                      plVar20 = *(long **)(*(long *)(puVar9 + -0xf0) + (long)unaff_x26 * 8);
                      if (plVar20 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar20 = (long *)*plVar20;
                            if (plVar20 == (long *)0x0) goto LAB_10a03f058;
                            plVar22 = (long *)plVar20[1];
                            if (plVar22 != unaff_x24) break;
                            if (plVar20[2] == uVar15) goto LAB_10a03f1c0;
                          }
                          if (((ulong)plVar29 & uVar19) == 0) {
                            plVar22 = (long *)((ulong)plVar22 & uVar19);
                          }
                          else if (plVar29 <= plVar22) {
                            uVar23 = 0;
                            if (plVar29 != (long *)0x0) {
                              uVar23 = (ulong)plVar22 / (ulong)plVar29;
                            }
                            plVar22 = (long *)((long)plVar22 - uVar23 * (long)plVar29);
                          }
                        } while (plVar22 == unaff_x26);
                      }
                    }
LAB_10a03f058:
                    unaff_x20 = (long *)0x68;
                    __Znwm();
                    *unaff_x20 = 0;
                    unaff_x20[1] = (long)unaff_x24;
                    lVar16 = plVar11[3];
                    lVar17 = plVar11[2];
                    unaff_x20[3] = plVar11[3];
                    unaff_x20[2] = lVar17;
                    if (lVar16 != 0) {
                      plVar20 = (long *)(lVar16 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar10) {
                          *plVar20 = *plVar20 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = 3;
                    *(long **)(puVar9 + -0xc0) = unaff_x20 + 4;
                    if (*(char *)(plVar11 + 0xc) == '\0') {
                      uVar14 = 0;
                    }
                    else {
                      puVar12 = (undefined1 *)(plVar11 + 4);
                      FUN_10a005398(puVar9 + -0xc0);
                      uVar14 = *(undefined1 *)(plVar11 + 0xc);
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = uVar14;
                    if ((plVar29 == (long *)0x0) ||
                       (*(float *)(puVar9 + -0xd0) * (float)plVar29 <
                        (float)(*(long *)(puVar9 + -0xd8) + 1))) {
                      uVar15 = 1;
                      if ((long *)0x2 < plVar29) {
                        uVar15 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
                      }
                      puVar12 = (undefined1 *)(uVar15 | (long)plVar29 << 1);
                      puVar13 = (undefined1 *)
                                (long)((float)(*(long *)(puVar9 + -0xd8) + 1) /
                                      *(float *)(puVar9 + -0xd0));
                      if (puVar12 <= puVar13) {
                        puVar12 = puVar13;
                      }
                      FUN_10a086d78(puVar9 + -0xf0);
                      plVar29 = *(long **)(puVar9 + -0xe8);
                      if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                        unaff_x26 = (long *)((long)plVar29 - 1U & (ulong)unaff_x24);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar29 <= unaff_x24) {
                          uVar15 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar15 = (ulong)unaff_x24 / (ulong)plVar29;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar15 * (long)plVar29);
                        }
                      }
                    }
                    lVar17 = *(long *)(puVar9 + -0xf0);
                    plVar20 = *(long **)(lVar17 + (long)unaff_x26 * 8);
                    if (plVar20 == (long *)0x0) {
                      *unaff_x20 = *(long *)(puVar9 + -0xe0);
                      *(long **)(puVar9 + -0xe0) = unaff_x20;
                      *(undefined8 *)(lVar17 + (long)unaff_x26 * 8) =
                           *(undefined8 *)(puVar9 + -0x1e8);
                      if (*unaff_x20 != 0) {
                        plVar20 = *(long **)(*unaff_x20 + 8);
                        if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                          plVar20 = (long *)((ulong)plVar20 & (long)plVar29 - 1U);
                        }
                        else if (plVar29 <= plVar20) {
                          uVar15 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar15 = (ulong)plVar20 / (ulong)plVar29;
                          }
                          plVar20 = (long *)((long)plVar20 - uVar15 * (long)plVar29);
                        }
                        *(long **)(*(long *)(puVar9 + -0xf0) + (long)plVar20 * 8) = unaff_x20;
                      }
                    }
                    else {
                      *unaff_x20 = *plVar20;
                      *plVar20 = (long)unaff_x20;
                    }
                    *(long *)(puVar9 + -0xd8) = *(long *)(puVar9 + -0xd8) + 1;
LAB_10a03f1c0:
                  }
                  unaff_x23 = (long *)(puVar9 + -0xc0);
                  for (plVar11 = *(long **)(puVar9 + -0xe0); plVar11 != (long *)0x0;
                      plVar11 = (long *)*plVar11) {
                    uVar15 = *(ulong *)(lVar28 + 0x20);
                    puVar13 = puVar12;
                    if (uVar15 != 0) {
                      uVar19 = plVar11[2];
                      uVar23 = ((ulong)(uint)((int)uVar19 << 3) + 8 ^ uVar19 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar23 = (uVar19 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
                      uVar23 = (uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297;
                      uVar24 = uVar15 - 1;
                      if ((uVar15 & uVar24) == 0) {
                        uVar26 = uVar23 & uVar24;
                      }
                      else {
                        uVar26 = uVar23;
                        if (uVar15 <= uVar23) {
                          uVar26 = 0;
                          if (uVar15 != 0) {
                            uVar26 = uVar23 / uVar15;
                          }
                          uVar26 = uVar23 - uVar26 * uVar15;
                        }
                      }
                      plVar29 = *(long **)(*(long *)(lVar28 + 0x18) + uVar26 * 8);
                      if (plVar29 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar29 = (long *)*plVar29;
                            if (plVar29 == (long *)0x0) goto LAB_10a03f2f0;
                            uVar27 = plVar29[1];
                            if (uVar27 != uVar23) break;
                            if (plVar29[2] == uVar19) {
                              if (*(char *)(plVar11 + 0xc) == '\x01') {
                                puVar13 = (undefined1 *)(plVar11 + 4);
                                (*(code *)plVar11[4])(unaff_x21);
                              }
                              else if (*(char *)(plVar11 + 0xc) == '\x02') {
                                unaff_x20 = plVar11 + 4;
                                FUN_10a688b40();
                                if (unaff_x20 == (long *)0x0) {
                                  puVar13 = (undefined1 *)0x0;
                                  if (puVar12 != (undefined1 *)0x0) {
                                    uVar6 = plVar11[4];
                                    uVar7 = plVar11[5];
                                    if (plVar11[5] != 0) {
                                      plVar29 = (long *)(plVar11[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                                        if (bVar10) {
                                          *plVar29 = *plVar29 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    *(uint *)(puVar9 + -0x110) = uVar2;
                                    *(code **)(puVar9 + -0xc0) = FUN_10a088454;
                                    *(undefined ***)(puVar9 + -0xb8) = &PTR_DAT_110b9ead0;
                                    *(undefined8 *)(puVar9 + -0xa8) = uVar7;
                                    *(undefined8 *)(puVar9 + -0xb0) = uVar6;
                                    *(undefined8 *)(puVar9 + -0x120) = 0;
                                    *(undefined8 *)(puVar9 + -0x118) = 0;
                                    *(uint *)(puVar9 + -0xa0) = uVar2;
                                    puVar13 = puVar9 + -0xc0;
                                    FUN_10a4634ec(puVar12);
                                    (*(code *)**(undefined8 **)(puVar9 + -0xb8))(puVar9 + -0xb8);
                                  }
                                }
                                else {
                                  *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                        (int)*unaff_x20 + 1);
                                  puVar13 = puVar9 + -0x130;
                                  FUN_10a0882c0(plVar11[4]);
                                  iVar1 = *(int *)((long)unaff_x20 + 4) + -1;
                                  *(int *)((long)unaff_x20 + 4) = iVar1;
                                  if (iVar1 == 0) {
                                    *(undefined4 *)unaff_x20 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03f2f0;
                            }
                          }
                          if ((uVar15 & uVar24) == 0) {
                            uVar27 = uVar27 & uVar24;
                          }
                          else if (uVar15 <= uVar27) {
                            uVar5 = 0;
                            if (uVar15 != 0) {
                              uVar5 = uVar27 / uVar15;
                            }
                            uVar27 = uVar27 - uVar5 * uVar15;
                          }
                        } while (uVar27 == uVar26);
                      }
                    }
LAB_10a03f2f0:
                    puVar12 = puVar13;
                  }
                  unaff_x22 = (long *)0x0;
                  unaff_x19 = (long *)(puVar9 + -0xf0);
                  func_0x00010a087338();
                }
                unaff_x26 = *(long **)(puVar9 + -0x1b0);
              }
            }
          }
          if (((char)unaff_x26[3] == '\x01') && ((puVar9[-0x178] & 1) != 0)) {
            lVar28 = *(long *)(puVar9 + -0x1a8);
            *(long **)(puVar9 + -0x1c0) = unaff_x26;
            *(long *)(puVar9 + -0x1b8) = lVar28;
            if (lVar28 != 0) {
              plVar11 = (long *)(lVar28 + 8);
              do {
                cVar3 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar10) {
                  *plVar11 = *plVar11 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((puVar9[-0x178] & 1) == 0) {
LAB_10a03fd54:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10a03fd58);
                (*pcVar8)();
              }
            }
            *(long *)(puVar9 + -0x200) = lVar28;
            bVar10 = false;
            if ((*(float *)(unaff_x26 + 0x16) == *(float *)(puVar9 + -0x1a0)) &&
               (bVar10 = false,
               !NAN(*(float *)((long)unaff_x26 + 0xb4)) && !NAN(*(float *)(puVar9 + -0x19c)))) {
              bVar10 = *(float *)((long)unaff_x26 + 0xb4) == *(float *)(puVar9 + -0x19c);
            }
            if (bVar10) {
              bVar10 = false;
              if ((*(float *)(unaff_x26 + 0x15) == *(float *)(puVar9 + -0x198)) &&
                 (bVar10 = false,
                 !NAN(*(float *)((long)unaff_x26 + 0xac)) && !NAN(*(float *)(puVar9 + -0x194)))) {
                bVar10 = *(float *)((long)unaff_x26 + 0xac) == *(float *)(puVar9 + -0x194);
              }
              if (!bVar10) goto LAB_10a03f3d8;
            }
            else {
LAB_10a03f3d8:
              auVar30 = NEON_ext(*(undefined1 (*) [16])(puVar9 + -0x1a0),
                                 *(undefined1 (*) [16])(puVar9 + -0x1a0),8,1);
              unaff_x26[0x16] = auVar30._8_8_;
              unaff_x26[0x15] = auVar30._0_8_;
              lVar28 = unaff_x26[0xf];
              *(undefined8 *)(puVar9 + -0xe8) = 0;
              *(undefined8 *)(puVar9 + -0xf0) = 0;
              *(undefined8 *)(puVar9 + -0xd8) = 0;
              *(undefined8 *)(puVar9 + -0xe0) = 0;
              *(undefined4 *)(puVar9 + -0xd0) = *(undefined4 *)(lVar28 + 0x38);
              puVar12 = *(undefined1 **)(lVar28 + 0x20);
              FUN_10a086b58(puVar9 + -0xf0);
              for (plVar11 = *(long **)(lVar28 + 0x28); plVar11 != (long *)0x0;
                  plVar11 = (long *)*plVar11) {
                uVar15 = plVar11[2];
                uVar19 = ((ulong)(uint)((int)uVar15 << 3) + 8 ^ uVar15 >> 0x20) *
                         -0x622015f714c7d297;
                uVar19 = (uVar15 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
                unaff_x23 = (long *)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
                plVar29 = *(long **)(puVar9 + -0xe8);
                if (plVar29 != (long *)0x0) {
                  uVar19 = (long)plVar29 - 1;
                  if (((ulong)plVar29 & uVar19) == 0) {
                    unaff_x24 = (long *)((ulong)unaff_x23 & uVar19);
                  }
                  else {
                    unaff_x24 = unaff_x23;
                    if (plVar29 <= unaff_x23) {
                      uVar23 = 0;
                      if (plVar29 != (long *)0x0) {
                        uVar23 = (ulong)unaff_x23 / (ulong)plVar29;
                      }
                      unaff_x24 = (long *)((long)unaff_x23 - uVar23 * (long)plVar29);
                    }
                  }
                  plVar20 = *(long **)(*(long *)(puVar9 + -0xf0) + (long)unaff_x24 * 8);
                  if (plVar20 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar20 = (long *)*plVar20;
                        if (plVar20 == (long *)0x0) goto LAB_10a03f4c0;
                        plVar22 = (long *)plVar20[1];
                        if (plVar22 != unaff_x23) break;
                        if (plVar20[2] == uVar15) goto LAB_10a03f628;
                      }
                      if (((ulong)plVar29 & uVar19) == 0) {
                        plVar22 = (long *)((ulong)plVar22 & uVar19);
                      }
                      else if (plVar29 <= plVar22) {
                        uVar23 = 0;
                        if (plVar29 != (long *)0x0) {
                          uVar23 = (ulong)plVar22 / (ulong)plVar29;
                        }
                        plVar22 = (long *)((long)plVar22 - uVar23 * (long)plVar29);
                      }
                    } while (plVar22 == unaff_x24);
                  }
                }
LAB_10a03f4c0:
                unaff_x20 = (long *)0x68;
                __Znwm();
                *unaff_x20 = 0;
                unaff_x20[1] = (long)unaff_x23;
                lVar16 = plVar11[3];
                lVar17 = plVar11[2];
                unaff_x20[3] = plVar11[3];
                unaff_x20[2] = lVar17;
                if (lVar16 != 0) {
                  plVar20 = (long *)(lVar16 + 8);
                  do {
                    cVar3 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                    if (bVar10) {
                      *plVar20 = *plVar20 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                *(undefined1 *)(unaff_x20 + 0xc) = 3;
                *(long **)(puVar9 + -0xc0) = unaff_x20 + 4;
                if (*(char *)(plVar11 + 0xc) == '\0') {
                  uVar14 = 0;
                }
                else {
                  puVar12 = (undefined1 *)(plVar11 + 4);
                  FUN_10a005398(puVar9 + -0xc0);
                  uVar14 = *(undefined1 *)(plVar11 + 0xc);
                }
                *(undefined1 *)(unaff_x20 + 0xc) = uVar14;
                if ((plVar29 == (long *)0x0) ||
                   (*(float *)(puVar9 + -0xd0) * (float)plVar29 <
                    (float)(*(long *)(puVar9 + -0xd8) + 1))) {
                  uVar15 = 1;
                  if ((long *)0x2 < plVar29) {
                    uVar15 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
                  }
                  puVar12 = (undefined1 *)(uVar15 | (long)plVar29 << 1);
                  puVar13 = (undefined1 *)
                            (long)((float)(*(long *)(puVar9 + -0xd8) + 1) /
                                  *(float *)(puVar9 + -0xd0));
                  if (puVar12 <= puVar13) {
                    puVar12 = puVar13;
                  }
                  FUN_10a086b58(puVar9 + -0xf0);
                  plVar29 = *(long **)(puVar9 + -0xe8);
                  if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                    unaff_x24 = (long *)((long)plVar29 - 1U & (ulong)unaff_x23);
                  }
                  else {
                    unaff_x24 = unaff_x23;
                    if (plVar29 <= unaff_x23) {
                      uVar15 = 0;
                      if (plVar29 != (long *)0x0) {
                        uVar15 = (ulong)unaff_x23 / (ulong)plVar29;
                      }
                      unaff_x24 = (long *)((long)unaff_x23 - uVar15 * (long)plVar29);
                    }
                  }
                }
                lVar17 = *(long *)(puVar9 + -0xf0);
                plVar20 = *(long **)(lVar17 + (long)unaff_x24 * 8);
                if (plVar20 == (long *)0x0) {
                  *unaff_x20 = *(long *)(puVar9 + -0xe0);
                  *(long **)(puVar9 + -0xe0) = unaff_x20;
                  *(undefined8 *)(lVar17 + (long)unaff_x24 * 8) = *(undefined8 *)(puVar9 + -0x1e8);
                  if (*unaff_x20 != 0) {
                    plVar20 = *(long **)(*unaff_x20 + 8);
                    if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                      plVar20 = (long *)((ulong)plVar20 & (long)plVar29 - 1U);
                    }
                    else if (plVar29 <= plVar20) {
                      uVar15 = 0;
                      if (plVar29 != (long *)0x0) {
                        uVar15 = (ulong)plVar20 / (ulong)plVar29;
                      }
                      plVar20 = (long *)((long)plVar20 - uVar15 * (long)plVar29);
                    }
                    *(long **)(*(long *)(puVar9 + -0xf0) + (long)plVar20 * 8) = unaff_x20;
                  }
                }
                else {
                  *unaff_x20 = *plVar20;
                  *plVar20 = (long)unaff_x20;
                }
                *(long *)(puVar9 + -0xd8) = *(long *)(puVar9 + -0xd8) + 1;
LAB_10a03f628:
              }
              unaff_x22 = (long *)(puVar9 + -0xc0);
              for (plVar11 = *(long **)(puVar9 + -0xe0); plVar11 != (long *)0x0;
                  plVar11 = (long *)*plVar11) {
                uVar15 = *(ulong *)(lVar28 + 0x20);
                puVar13 = puVar12;
                if (uVar15 != 0) {
                  uVar19 = plVar11[2];
                  uVar23 = ((ulong)(uint)((int)uVar19 << 3) + 8 ^ uVar19 >> 0x20) *
                           -0x622015f714c7d297;
                  uVar23 = (uVar19 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
                  uVar23 = (uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297;
                  uVar24 = uVar15 - 1;
                  if ((uVar15 & uVar24) == 0) {
                    uVar26 = uVar23 & uVar24;
                  }
                  else {
                    uVar26 = uVar23;
                    if (uVar15 <= uVar23) {
                      uVar26 = 0;
                      if (uVar15 != 0) {
                        uVar26 = uVar23 / uVar15;
                      }
                      uVar26 = uVar23 - uVar26 * uVar15;
                    }
                  }
                  plVar29 = *(long **)(*(long *)(lVar28 + 0x18) + uVar26 * 8);
                  if (plVar29 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar29 = (long *)*plVar29;
                        if (plVar29 == (long *)0x0) goto LAB_10a03f764;
                        uVar27 = plVar29[1];
                        if (uVar27 != uVar23) break;
                        if (plVar29[2] == uVar19) {
                          if (*(char *)(plVar11 + 0xc) == '\x01') {
                            (*(code *)plVar11[4])
                                      (*(undefined4 *)(puVar9 + -0x1a0),
                                       *(undefined4 *)(puVar9 + -0x19c),
                                       *(undefined4 *)(puVar9 + -0x198),
                                       *(undefined4 *)(puVar9 + -0x194),plVar11 + 4);
                            puVar13 = puVar12;
                          }
                          else if (*(char *)(plVar11 + 0xc) == '\x02') {
                            unaff_x20 = plVar11 + 4;
                            FUN_10a688b40();
                            if (unaff_x20 == (long *)0x0) {
                              puVar13 = (undefined1 *)0x0;
                              if (puVar12 != (undefined1 *)0x0) {
                                uVar6 = plVar11[4];
                                uVar7 = plVar11[5];
                                if (plVar11[5] != 0) {
                                  plVar29 = (long *)(plVar11[5] + 8);
                                  do {
                                    cVar3 = '\x01';
                                    bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                                    if (bVar10) {
                                      *plVar29 = *plVar29 + 1;
                                      cVar3 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar3 != '\0');
                                }
                                *(undefined8 *)(puVar9 + -0x108) = *(undefined8 *)(puVar9 + -0x198);
                                *(undefined8 *)(puVar9 + -0x110) = *(undefined8 *)(puVar9 + -0x1a0);
                                *(code **)(puVar9 + -0xc0) = FUN_10a087fa0;
                                *(undefined ***)(puVar9 + -0xb8) = &PTR_DAT_110b9eaa0;
                                *(undefined8 *)(puVar9 + -0xa8) = uVar7;
                                *(undefined8 *)(puVar9 + -0xb0) = uVar6;
                                *(undefined8 *)(puVar9 + -0x120) = 0;
                                *(undefined8 *)(puVar9 + -0x118) = 0;
                                uVar6 = **(undefined8 **)(puVar9 + -0x1c8);
                                *(undefined8 *)(puVar9 + -0x98) =
                                     (*(undefined8 **)(puVar9 + -0x1c8))[1];
                                *(undefined8 *)(puVar9 + -0xa0) = uVar6;
                                puVar13 = puVar9 + -0xc0;
                                FUN_10a4634ec(puVar12);
                                (*(code *)**(undefined8 **)(puVar9 + -0xb8))(puVar9 + -0xb8);
                              }
                            }
                            else {
                              *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                    (int)*unaff_x20 + 1);
                              puVar13 = puVar9 + -0x1a0;
                              FUN_10a087dc8(plVar11[4],puVar13,(ulong)(puVar9 + -0x1a0) | 8);
                              iVar1 = *(int *)((long)unaff_x20 + 4) + -1;
                              *(int *)((long)unaff_x20 + 4) = iVar1;
                              if (iVar1 == 0) {
                                *(undefined4 *)unaff_x20 = 0;
                              }
                            }
                          }
                          goto LAB_10a03f764;
                        }
                      }
                      if ((uVar15 & uVar24) == 0) {
                        uVar27 = uVar27 & uVar24;
                      }
                      else if (uVar15 <= uVar27) {
                        uVar5 = 0;
                        if (uVar15 != 0) {
                          uVar5 = uVar27 / uVar15;
                        }
                        uVar27 = uVar27 - uVar5 * uVar15;
                      }
                    } while (uVar27 == uVar26);
                  }
                }
LAB_10a03f764:
                puVar12 = puVar13;
              }
              unaff_x21 = (long *)0x0;
              unaff_x19 = (long *)(puVar9 + -0xf0);
              func_0x00010a0872b8();
            }
            *(undefined8 **)(puVar9 + -0x208) = unaff_x27;
            puVar18 = *(undefined8 **)(puVar9 + -400);
            *(undefined8 **)(puVar9 + -0x1f8) = *(undefined8 **)(puVar9 + -0x188);
            if (puVar18 != *(undefined8 **)(puVar9 + -0x188)) {
              *(long **)(puVar9 + -0x1e0) = unaff_x26;
              do {
                *(undefined8 **)(puVar9 + -0x1f0) = puVar18;
                unaff_x20 = (long *)*puVar18;
                plVar11 = (long *)puVar18[1];
                *(long **)(puVar9 + -0x1d8) = plVar11;
                for (; unaff_x20 != plVar11; unaff_x20 = unaff_x20 + 4) {
                  lVar28 = unaff_x20[1];
                  unaff_x22 = (long *)unaff_x20[2];
                  uVar2 = *(uint *)(unaff_x20 + 3);
                  unaff_x23 = (long *)(ulong)uVar2;
                  *(int *)(puVar9 + -0x1cc) = (int)lVar28;
                  *(int *)(puVar9 + -0x124) = (int)lVar28;
                  *(long **)(puVar9 + -0x130) = unaff_x22;
                  *(uint *)(puVar9 + -0x134) = uVar2;
                  lVar28 = unaff_x26[0xd];
                  *(undefined8 *)(puVar9 + -0x118) = 0;
                  *(undefined8 *)(puVar9 + -0x120) = 0;
                  *(undefined8 *)(puVar9 + -0x108) = 0;
                  *(undefined8 *)(puVar9 + -0x110) = 0;
                  *(undefined4 *)(puVar9 + -0x100) = *(undefined4 *)(lVar28 + 0x38);
                  plVar11 = *(long **)(lVar28 + 0x20);
                  FUN_10a086938(puVar9 + -0x120);
                  for (plVar29 = *(long **)(lVar28 + 0x28); plVar29 != (long *)0x0;
                      plVar29 = (long *)*plVar29) {
                    uVar15 = plVar29[2];
                    uVar19 = ((ulong)(uint)((int)uVar15 << 3) + 8 ^ uVar15 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar19 = (uVar15 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
                    plVar20 = (long *)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
                    plVar22 = *(long **)(puVar9 + -0x118);
                    if (plVar22 != (long *)0x0) {
                      puVar12 = (undefined1 *)((long)plVar22 + -1);
                      if (((ulong)plVar22 & (ulong)puVar12) == 0) {
                        unaff_x21 = (long *)((ulong)plVar20 & (ulong)puVar12);
                      }
                      else {
                        unaff_x21 = plVar20;
                        if (plVar22 <= plVar20) {
                          uVar19 = 0;
                          if (plVar22 != (long *)0x0) {
                            uVar19 = (ulong)plVar20 / (ulong)plVar22;
                          }
                          unaff_x21 = (long *)((long)plVar20 - uVar19 * (long)plVar22);
                        }
                      }
                      plVar21 = *(long **)(*(long *)(puVar9 + -0x120) + (long)unaff_x21 * 8);
                      if (plVar21 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar21 = (long *)*plVar21;
                            if (plVar21 == (long *)0x0) goto LAB_10a03f910;
                            plVar25 = (long *)plVar21[1];
                            if (plVar25 != plVar20) break;
                            if (plVar21[2] == uVar15) goto LAB_10a03fa78;
                          }
                          if (((ulong)plVar22 & (ulong)puVar12) == 0) {
                            plVar25 = (long *)((ulong)plVar25 & (ulong)puVar12);
                          }
                          else if (plVar22 <= plVar25) {
                            uVar19 = 0;
                            if (plVar22 != (long *)0x0) {
                              uVar19 = (ulong)plVar25 / (ulong)plVar22;
                            }
                            plVar25 = (long *)((long)plVar25 - uVar19 * (long)plVar22);
                          }
                        } while (plVar25 == unaff_x21);
                      }
                    }
LAB_10a03f910:
                    unaff_x24 = (long *)0x68;
                    __Znwm();
                    *unaff_x24 = 0;
                    unaff_x24[1] = (long)plVar20;
                    lVar16 = plVar29[3];
                    lVar17 = plVar29[2];
                    unaff_x24[3] = plVar29[3];
                    unaff_x24[2] = lVar17;
                    if (lVar16 != 0) {
                      plVar21 = (long *)(lVar16 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar10) {
                          *plVar21 = *plVar21 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x24 + 0xc) = 3;
                    *(long **)(puVar9 + -0xc0) = unaff_x24 + 4;
                    if (*(char *)(plVar29 + 0xc) == '\0') {
                      uVar14 = 0;
                    }
                    else {
                      plVar11 = plVar29 + 4;
                      FUN_10a005398(puVar9 + -0xc0);
                      uVar14 = *(undefined1 *)(plVar29 + 0xc);
                    }
                    *(undefined1 *)(unaff_x24 + 0xc) = uVar14;
                    if ((plVar22 == (long *)0x0) ||
                       (*(float *)(puVar9 + -0x100) * (float)plVar22 <
                        (float)(*(long *)(puVar9 + -0x108) + 1))) {
                      uVar15 = 1;
                      if ((long *)0x2 < plVar22) {
                        uVar15 = (ulong)(((ulong)plVar22 & (ulong)((long)plVar22 + -1)) != 0);
                      }
                      plVar11 = (long *)(uVar15 | (long)plVar22 << 1);
                      plVar22 = (long *)(long)((float)(*(long *)(puVar9 + -0x108) + 1) /
                                              *(float *)(puVar9 + -0x100));
                      if (plVar11 <= plVar22) {
                        plVar11 = plVar22;
                      }
                      FUN_10a086938(puVar9 + -0x120);
                      plVar22 = *(long **)(puVar9 + -0x118);
                      if (((ulong)plVar22 & (ulong)((long)plVar22 + -1)) == 0) {
                        unaff_x21 = (long *)((ulong)((long)plVar22 + -1) & (ulong)plVar20);
                      }
                      else {
                        unaff_x21 = plVar20;
                        if (plVar22 <= plVar20) {
                          uVar15 = 0;
                          if (plVar22 != (long *)0x0) {
                            uVar15 = (ulong)plVar20 / (ulong)plVar22;
                          }
                          unaff_x21 = (long *)((long)plVar20 - uVar15 * (long)plVar22);
                        }
                      }
                    }
                    lVar17 = *(long *)(puVar9 + -0x120);
                    plVar20 = *(long **)(lVar17 + (long)unaff_x21 * 8);
                    if (plVar20 == (long *)0x0) {
                      *unaff_x24 = *(long *)(puVar9 + -0x110);
                      *(long **)(puVar9 + -0x110) = unaff_x24;
                      *(undefined8 *)(lVar17 + (long)unaff_x21 * 8) =
                           *(undefined8 *)(puVar9 + -0x1c8);
                      if (*unaff_x24 != 0) {
                        plVar20 = *(long **)(*unaff_x24 + 8);
                        if (((ulong)plVar22 & (ulong)((long)plVar22 + -1)) == 0) {
                          plVar20 = (long *)((ulong)plVar20 & (ulong)((long)plVar22 + -1));
                        }
                        else if (plVar22 <= plVar20) {
                          uVar15 = 0;
                          if (plVar22 != (long *)0x0) {
                            uVar15 = (ulong)plVar20 / (ulong)plVar22;
                          }
                          plVar20 = (long *)((long)plVar20 - uVar15 * (long)plVar22);
                        }
                        *(long **)(*(long *)(puVar9 + -0x120) + (long)plVar20 * 8) = unaff_x24;
                      }
                    }
                    else {
                      *unaff_x24 = *plVar20;
                      *plVar20 = (long)unaff_x24;
                    }
                    *(long *)(puVar9 + -0x108) = *(long *)(puVar9 + -0x108) + 1;
LAB_10a03fa78:
                  }
                  unaff_x26 = *(long **)(puVar9 + -0x1e0);
                  for (plVar29 = *(long **)(puVar9 + -0x110); plVar29 != (long *)0x0;
                      plVar29 = (long *)*plVar29) {
                    uVar15 = *(ulong *)(lVar28 + 0x20);
                    plVar20 = plVar11;
                    if (uVar15 != 0) {
                      uVar19 = plVar29[2];
                      uVar23 = ((ulong)(uint)((int)uVar19 << 3) + 8 ^ uVar19 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar23 = (uVar19 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
                      uVar23 = (uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297;
                      uVar24 = uVar15 - 1;
                      if ((uVar15 & uVar24) == 0) {
                        uVar26 = uVar23 & uVar24;
                      }
                      else {
                        uVar26 = uVar23;
                        if (uVar15 <= uVar23) {
                          uVar26 = 0;
                          if (uVar15 != 0) {
                            uVar26 = uVar23 / uVar15;
                          }
                          uVar26 = uVar23 - uVar26 * uVar15;
                        }
                      }
                      plVar22 = *(long **)(*(long *)(lVar28 + 0x18) + uVar26 * 8);
                      if (plVar22 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar22 = (long *)*plVar22;
                            if (plVar22 == (long *)0x0) goto LAB_10a03fbc0;
                            uVar27 = plVar22[1];
                            if (uVar27 != uVar23) break;
                            if (plVar22[2] == uVar19) {
                              if (*(char *)(plVar29 + 0xc) == '\x01') {
                                plVar20 = unaff_x22;
                                (*(code *)plVar29[4])
                                          ((int)*unaff_x20,*(undefined4 *)((long)unaff_x20 + 4),
                                           *(undefined4 *)(puVar9 + -0x1cc),unaff_x22,unaff_x23,
                                           plVar29 + 4);
                              }
                              else if (*(char *)(plVar29 + 0xc) == '\x02') {
                                unaff_x24 = plVar29 + 4;
                                FUN_10a688b40();
                                if (unaff_x24 == (long *)0x0) {
                                  plVar20 = (long *)0x0;
                                  if (plVar11 != (long *)0x0) {
                                    uVar6 = plVar29[4];
                                    uVar7 = plVar29[5];
                                    if (plVar29[5] != 0) {
                                      plVar20 = (long *)(plVar29[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                                        if (bVar10) {
                                          *plVar20 = *plVar20 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    lVar17 = *unaff_x20;
                                    *(undefined8 *)(puVar9 + -0xe8) = 0;
                                    *(long *)(puVar9 + -0xe0) = lVar17;
                                    *(undefined4 *)(puVar9 + -0xd8) =
                                         *(undefined4 *)(puVar9 + -0x1cc);
                                    *(long **)(puVar9 + -0xd0) = unaff_x22;
                                    *(uint *)(puVar9 + -200) = uVar2;
                                    *(code **)(puVar9 + -0xc0) = FUN_10a08869c;
                                    *(undefined ***)(puVar9 + -0xb8) = &PTR_DAT_110b9eae8;
                                    *(undefined8 *)(puVar9 + -0xa8) = uVar7;
                                    *(undefined8 *)(puVar9 + -0xb0) = uVar6;
                                    *(undefined8 *)(puVar9 + -0xf0) = 0;
                                    puVar18 = *(undefined8 **)(puVar9 + -0x1e8);
                                    uVar6 = *puVar18;
                                    unaff_x21 = (long *)(puVar9 + -0xc0);
                                    *(undefined8 *)(puVar9 + -0x98) = puVar18[1];
                                    *(undefined8 *)(puVar9 + -0xa0) = uVar6;
                                    uVar6 = *(undefined8 *)((long)puVar18 + 0xc);
                                    *(undefined8 *)(puVar9 + -0x8c) =
                                         *(undefined8 *)((long)puVar18 + 0x14);
                                    *(undefined8 *)(puVar9 + -0x94) = uVar6;
                                    plVar20 = (long *)(puVar9 + -0xc0);
                                    FUN_10a4634ec(plVar11);
                                    (*(code *)**(undefined8 **)(puVar9 + -0xb8))(puVar9 + -0xb8);
                                  }
                                }
                                else {
                                  *unaff_x24 = CONCAT44((int)((ulong)*unaff_x24 >> 0x20) + 1,
                                                        (int)*unaff_x24 + 1);
                                  plVar20 = unaff_x20;
                                  FUN_10a088490(plVar29[4],unaff_x20,puVar9 + -0x124,puVar9 + -0x130
                                                ,puVar9 + -0x134);
                                  iVar1 = *(int *)((long)unaff_x24 + 4) + -1;
                                  *(int *)((long)unaff_x24 + 4) = iVar1;
                                  if (iVar1 == 0) {
                                    *(undefined4 *)unaff_x24 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03fbc0;
                            }
                          }
                          if ((uVar15 & uVar24) == 0) {
                            uVar27 = uVar27 & uVar24;
                          }
                          else if (uVar15 <= uVar27) {
                            uVar5 = 0;
                            if (uVar15 != 0) {
                              uVar5 = uVar27 / uVar15;
                            }
                            uVar27 = uVar27 - uVar5 * uVar15;
                          }
                        } while (uVar27 == uVar26);
                      }
                    }
LAB_10a03fbc0:
                    plVar11 = plVar20;
                  }
                  unaff_x19 = (long *)(puVar9 + -0x120);
                  func_0x00010a087238();
                  plVar11 = *(long **)(puVar9 + -0x1d8);
                }
                puVar18 = (undefined8 *)(*(long *)(puVar9 + -0x1f0) + 0x18);
              } while (puVar18 != *(undefined8 **)(puVar9 + -0x1f8));
            }
            unaff_x28 = *(undefined8 **)(puVar9 + -0x210);
            unaff_x27 = *(undefined8 **)(puVar9 + -0x208);
            plVar11 = *(long **)(puVar9 + -0x200);
            if (plVar11 != (long *)0x0) {
              plVar29 = plVar11 + 1;
              do {
                lVar28 = *plVar29;
                cVar3 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar10) {
                  *plVar29 = lVar28 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar28 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                unaff_x19 = plVar11;
              }
            }
          }
          plVar11 = *(long **)(puVar9 + -0x1a8);
          if (plVar11 != (long *)0x0) {
            plVar29 = plVar11 + 1;
            do {
              lVar28 = *plVar29;
              cVar3 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar10) {
                *plVar29 = lVar28 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar28 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              unaff_x19 = plVar11;
            }
          }
          unaff_x27 = unaff_x27 + 2;
        } while (unaff_x27 != unaff_x28);
      }
      if (puVar9[-0x178] == '\x01') {
        unaff_x19 = (long *)(puVar9 + -400);
        FUN_10a051924();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x80)) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)(puVar9 + -0xb8))(unaff_x23 + 1);
    func_0x00010a004dac(puVar9 + -0x120);
    FUN_10a0871b8(puVar9 + -0xf0);
    FUN_10a0886ec(puVar9 + -0x1b0);
    if (puVar9[-0x178] == '\x01') {
      FUN_10a051924(puVar9 + -400);
    }
    unaff_x30 = FUN_10a040018;
    plVar11 = unaff_x19;
    __Unwind_Resume();
    plVar11 = (long *)plVar11[9];
    puVar9 = puVar9 + -0x210;
    if (plVar11 == (long *)0x0) {
      return;
    }
  } while( true );
}



/* Entry: 10a03e510; end: 10a040017;  */

void FUN_10a03e510(long *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar27;
  long *plVar28;
  long *unaff_x23;
  long *plVar29;
  long *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar30 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  puVar9 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar9 + -0x70) = unaff_d9;
    *(undefined8 *)(puVar9 + -0x68) = unaff_d8;
    *(undefined8 **)(puVar9 + -0x60) = unaff_x28;
    *(undefined8 **)(puVar9 + -0x58) = unaff_x27;
    *(long **)(puVar9 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
    *(long **)(puVar9 + -0x40) = unaff_x24;
    *(long **)(puVar9 + -0x38) = unaff_x23;
    *(long **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = unaff_x21;
    *(long **)(puVar9 + -0x20) = unaff_x20;
    *(long **)(puVar9 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar9 + -0x10) = unaff_x29;
    *(code **)(puVar9 + -8) = unaff_x30;
    unaff_x29 = puVar9 + -0x10;
    *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = (long *)param_1[0xb];
    unaff_x19 = param_1;
    if (unaff_x20 != (long *)0x0 && param_1[8] != param_1[9]) {
      lVar27 = *(long *)(param_1[0x17] + 0x850);
      unaff_x21 = param_1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      unaff_x22 = *(long **)(lVar27 + 0x20);
      FUN_10a05181c(puVar9 + -0xf0,param_1);
      *(double *)(puVar9 + -0xb8) = (double)(float)((ulong)*(undefined8 *)(puVar9 + -0xf0) >> 0x20);
      *(double *)(puVar9 + -0xc0) = (double)(float)*(undefined8 *)(puVar9 + -0xf0);
      *(double *)(puVar9 + -0xa8) = (double)(float)((ulong)*(undefined8 *)(puVar9 + -0xe8) >> 0x20);
      *(double *)(puVar9 + -0xb0) = (double)(float)*(undefined8 *)(puVar9 + -0xe8);
      *(double *)(puVar9 + -0x98) = (double)(float)((ulong)*(undefined8 *)(puVar9 + -0xe0) >> 0x20);
      *(double *)(puVar9 + -0xa0) = (double)(float)*(undefined8 *)(puVar9 + -0xe0);
      *(double *)(puVar9 + -0x90) = (double)*(float *)(puVar9 + -0xd8);
      (**(code **)(*unaff_x20 + 0x18))
                (puVar9 + -0x164,unaff_x20,(long)unaff_x21 - (long)unaff_x22,puVar9 + -0xc0);
      unaff_x19 = (long *)param_1[0xb];
      (**(code **)(*unaff_x19 + 0x20))(puVar9 + -0x1a0);
      unaff_x27 = (undefined8 *)param_1[8];
      unaff_x28 = (undefined8 *)param_1[9];
      if (unaff_x27 != unaff_x28) {
        unaff_x25 = 0x9ddfea08eb382d69;
        *(undefined1 **)(puVar9 + -0x1e8) = puVar9 + -0xe0;
        *(undefined1 **)(puVar9 + -0x1c8) = puVar9 + -0x110;
        unaff_d8 = 0x100000001;
        *(undefined8 **)(puVar9 + -0x210) = unaff_x28;
        do {
          unaff_x26 = (long *)*unaff_x27;
          lVar27 = unaff_x27[1];
          *(long **)(puVar9 + -0x1b0) = unaff_x26;
          *(long *)(puVar9 + -0x1a8) = lVar27;
          if (lVar27 != 0) {
            plVar28 = (long *)(lVar27 + 8);
            do {
              cVar3 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar10) {
                *plVar28 = *plVar28 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (puVar9[-0x138] == '\x01') {
            cVar3 = puVar9[-0x164];
            puVar9[-0xc0] = cVar3;
            if ((char)unaff_x26[3] != cVar3) {
              *(char *)(unaff_x26 + 3) = cVar3;
              unaff_x19 = (long *)unaff_x26[9];
              FUN_10a03dff0(unaff_x19,puVar9 + -0xc0);
            }
            if ((cVar3 != '\0') && (*(int *)(unaff_x26[7] + 0x30) != 0)) {
              if ((puVar9[-0x138] & 1) == 0) goto LAB_10a03fd54;
              if (puVar9[-0x13c] == '\x01') {
                iVar1 = *(int *)(puVar9 + -0x140);
                *(int *)(puVar9 + -0x130) = iVar1;
                if ((int)unaff_x26[6] != iVar1) {
                  *(int *)(unaff_x26 + 6) = iVar1;
                  *(long **)(puVar9 + -0x1e0) = unaff_x26;
                  lVar27 = unaff_x26[0xb];
                  *(undefined8 *)(puVar9 + -0xe8) = 0;
                  *(undefined8 *)(puVar9 + -0xf0) = 0;
                  *(undefined8 *)(puVar9 + -0xd8) = 0;
                  *(undefined8 *)(puVar9 + -0xe0) = 0;
                  *(undefined4 *)(puVar9 + -0xd0) = *(undefined4 *)(lVar27 + 0x38);
                  puVar11 = *(undefined1 **)(lVar27 + 0x20);
                  FUN_10a086718(puVar9 + -0xf0);
                  for (plVar28 = *(long **)(lVar27 + 0x28); plVar28 != (long *)0x0;
                      plVar28 = (long *)*plVar28) {
                    uVar14 = plVar28[2];
                    uVar18 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar18 = (uVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
                    unaff_x24 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
                    plVar29 = *(long **)(puVar9 + -0xe8);
                    if (plVar29 != (long *)0x0) {
                      uVar18 = (long)plVar29 - 1;
                      if (((ulong)plVar29 & uVar18) == 0) {
                        unaff_x26 = (long *)((ulong)unaff_x24 & uVar18);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar29 <= unaff_x24) {
                          uVar22 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar22 = (ulong)unaff_x24 / (ulong)plVar29;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar22 * (long)plVar29);
                        }
                      }
                      plVar19 = *(long **)(*(long *)(puVar9 + -0xf0) + (long)unaff_x26 * 8);
                      if (plVar19 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar19 = (long *)*plVar19;
                            if (plVar19 == (long *)0x0) goto LAB_10a03e77c;
                            plVar21 = (long *)plVar19[1];
                            if (plVar21 != unaff_x24) break;
                            if (plVar19[2] == uVar14) goto LAB_10a03e8e4;
                          }
                          if (((ulong)plVar29 & uVar18) == 0) {
                            plVar21 = (long *)((ulong)plVar21 & uVar18);
                          }
                          else if (plVar29 <= plVar21) {
                            uVar22 = 0;
                            if (plVar29 != (long *)0x0) {
                              uVar22 = (ulong)plVar21 / (ulong)plVar29;
                            }
                            plVar21 = (long *)((long)plVar21 - uVar22 * (long)plVar29);
                          }
                        } while (plVar21 == unaff_x26);
                      }
                    }
LAB_10a03e77c:
                    unaff_x20 = (long *)0x68;
                    __Znwm();
                    *unaff_x20 = 0;
                    unaff_x20[1] = (long)unaff_x24;
                    lVar15 = plVar28[3];
                    lVar16 = plVar28[2];
                    unaff_x20[3] = plVar28[3];
                    unaff_x20[2] = lVar16;
                    if (lVar15 != 0) {
                      plVar19 = (long *)(lVar15 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar10) {
                          *plVar19 = *plVar19 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = 3;
                    *(long **)(puVar9 + -0xc0) = unaff_x20 + 4;
                    if (*(char *)(plVar28 + 0xc) == '\0') {
                      uVar13 = 0;
                    }
                    else {
                      puVar11 = (undefined1 *)(plVar28 + 4);
                      FUN_10a005398(puVar9 + -0xc0);
                      uVar13 = *(undefined1 *)(plVar28 + 0xc);
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = uVar13;
                    if ((plVar29 == (long *)0x0) ||
                       (*(float *)(puVar9 + -0xd0) * (float)plVar29 <
                        (float)(*(long *)(puVar9 + -0xd8) + 1))) {
                      uVar14 = 1;
                      if ((long *)0x2 < plVar29) {
                        uVar14 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
                      }
                      puVar11 = (undefined1 *)(uVar14 | (long)plVar29 << 1);
                      puVar12 = (undefined1 *)
                                (long)((float)(*(long *)(puVar9 + -0xd8) + 1) /
                                      *(float *)(puVar9 + -0xd0));
                      if (puVar11 <= puVar12) {
                        puVar11 = puVar12;
                      }
                      FUN_10a086718(puVar9 + -0xf0);
                      plVar29 = *(long **)(puVar9 + -0xe8);
                      if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                        unaff_x26 = (long *)((long)plVar29 - 1U & (ulong)unaff_x24);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar29 <= unaff_x24) {
                          uVar14 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar14 = (ulong)unaff_x24 / (ulong)plVar29;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar14 * (long)plVar29);
                        }
                      }
                    }
                    lVar16 = *(long *)(puVar9 + -0xf0);
                    plVar19 = *(long **)(lVar16 + (long)unaff_x26 * 8);
                    if (plVar19 == (long *)0x0) {
                      *unaff_x20 = *(long *)(puVar9 + -0xe0);
                      *(long **)(puVar9 + -0xe0) = unaff_x20;
                      *(undefined8 *)(lVar16 + (long)unaff_x26 * 8) =
                           *(undefined8 *)(puVar9 + -0x1e8);
                      if (*unaff_x20 != 0) {
                        plVar19 = *(long **)(*unaff_x20 + 8);
                        if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                          plVar19 = (long *)((ulong)plVar19 & (long)plVar29 - 1U);
                        }
                        else if (plVar29 <= plVar19) {
                          uVar14 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar14 = (ulong)plVar19 / (ulong)plVar29;
                          }
                          plVar19 = (long *)((long)plVar19 - uVar14 * (long)plVar29);
                        }
                        *(long **)(*(long *)(puVar9 + -0xf0) + (long)plVar19 * 8) = unaff_x20;
                      }
                    }
                    else {
                      *unaff_x20 = *plVar19;
                      *plVar19 = (long)unaff_x20;
                    }
                    *(long *)(puVar9 + -0xd8) = *(long *)(puVar9 + -0xd8) + 1;
LAB_10a03e8e4:
                  }
                  unaff_x23 = (long *)(puVar9 + -0xc0);
                  unaff_x26 = *(long **)(puVar9 + -0x1e0);
                  for (plVar28 = *(long **)(puVar9 + -0xe0); plVar28 != (long *)0x0;
                      plVar28 = (long *)*plVar28) {
                    uVar14 = *(ulong *)(lVar27 + 0x20);
                    puVar12 = puVar11;
                    if (uVar14 != 0) {
                      uVar18 = plVar28[2];
                      uVar22 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar22 = (uVar18 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                      uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                      uVar23 = uVar14 - 1;
                      if ((uVar14 & uVar23) == 0) {
                        uVar25 = uVar22 & uVar23;
                      }
                      else {
                        uVar25 = uVar22;
                        if (uVar14 <= uVar22) {
                          uVar25 = 0;
                          if (uVar14 != 0) {
                            uVar25 = uVar22 / uVar14;
                          }
                          uVar25 = uVar22 - uVar25 * uVar14;
                        }
                      }
                      plVar29 = *(long **)(*(long *)(lVar27 + 0x18) + uVar25 * 8);
                      if (plVar29 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar29 = (long *)*plVar29;
                            if (plVar29 == (long *)0x0) goto LAB_10a03ea18;
                            uVar26 = plVar29[1];
                            if (uVar26 != uVar22) break;
                            if (plVar29[2] == uVar18) {
                              if (*(char *)(plVar28 + 0xc) == '\x01') {
                                puVar12 = (undefined1 *)(plVar28 + 4);
                                (*(code *)plVar28[4])(iVar1);
                              }
                              else if (*(char *)(plVar28 + 0xc) == '\x02') {
                                unaff_x20 = plVar28 + 4;
                                FUN_10a688b40();
                                if (unaff_x20 == (long *)0x0) {
                                  puVar12 = (undefined1 *)0x0;
                                  if (puVar11 != (undefined1 *)0x0) {
                                    uVar6 = plVar28[4];
                                    uVar7 = plVar28[5];
                                    if (plVar28[5] != 0) {
                                      plVar29 = (long *)(plVar28[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                                        if (bVar10) {
                                          *plVar29 = *plVar29 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    *(int *)(puVar9 + -0x110) = iVar1;
                                    *(code **)(puVar9 + -0xc0) = FUN_10a087624;
                                    *(undefined ***)(puVar9 + -0xb8) = &PTR_DAT_110b9ea88;
                                    *(undefined8 *)(puVar9 + -0xa8) = uVar7;
                                    *(undefined8 *)(puVar9 + -0xb0) = uVar6;
                                    *(undefined8 *)(puVar9 + -0x120) = 0;
                                    *(undefined8 *)(puVar9 + -0x118) = 0;
                                    *(int *)(puVar9 + -0xa0) = iVar1;
                                    puVar12 = puVar9 + -0xc0;
                                    FUN_10a4634ec(puVar11);
                                    (*(code *)**(undefined8 **)(puVar9 + -0xb8))(puVar9 + -0xb8);
                                  }
                                }
                                else {
                                  *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                        (int)*unaff_x20 + 1);
                                  puVar12 = puVar9 + -0x130;
                                  FUN_10a087490(plVar28[4]);
                                  iVar4 = *(int *)((long)unaff_x20 + 4) + -1;
                                  *(int *)((long)unaff_x20 + 4) = iVar4;
                                  if (iVar4 == 0) {
                                    *(undefined4 *)unaff_x20 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03ea18;
                            }
                          }
                          if ((uVar14 & uVar23) == 0) {
                            uVar26 = uVar26 & uVar23;
                          }
                          else if (uVar14 <= uVar26) {
                            uVar5 = 0;
                            if (uVar14 != 0) {
                              uVar5 = uVar26 / uVar14;
                            }
                            uVar26 = uVar26 - uVar5 * uVar14;
                          }
                        } while (uVar26 == uVar25);
                      }
                    }
LAB_10a03ea18:
                    puVar11 = puVar12;
                  }
                  unaff_x22 = (long *)0x0;
                  unaff_x19 = (long *)(puVar9 + -0xf0);
                  FUN_10a0871b8();
                  if ((puVar9[-0x13c] & 1) == 0) goto LAB_10a03fd54;
                }
                if (((((*(float *)((long)unaff_x26 + 0xbc) != *(float *)(puVar9 + -0x160)) ||
                      (*(float *)(unaff_x26 + 0x18) != *(float *)(puVar9 + -0x15c))) ||
                     (*(float *)((long)unaff_x26 + 0xc4) != *(float *)(puVar9 + -0x158))) ||
                    ((*(float *)(unaff_x26 + 0x19) != *(float *)(puVar9 + -0x154) ||
                     (*(float *)((long)unaff_x26 + 0xcc) != *(float *)(puVar9 + -0x150))))) ||
                   ((*(float *)(unaff_x26 + 0x1a) != *(float *)(puVar9 + -0x14c) ||
                    (*(float *)((long)unaff_x26 + 0xd4) != *(float *)(puVar9 + -0x148))))) {
                  *(undefined8 *)((long)unaff_x26 + 0xbc) = *(undefined8 *)(puVar9 + -0x160);
                  *(undefined4 *)((long)unaff_x26 + 0xc4) = *(undefined4 *)(puVar9 + -0x158);
                  lVar27 = *(long *)(puVar9 + -0x154);
                  unaff_x26[0x1a] = *(long *)(puVar9 + -0x14c);
                  unaff_x26[0x19] = lVar27;
                  lVar27 = unaff_x26[0x13];
                  *(undefined8 *)(puVar9 + -0x118) = 0;
                  *(undefined8 *)(puVar9 + -0x120) = 0;
                  *(undefined8 *)(puVar9 + -0x108) = 0;
                  *(undefined8 *)(puVar9 + -0x110) = 0;
                  *(undefined4 *)(puVar9 + -0x100) = *(undefined4 *)(lVar27 + 0x38);
                  puVar11 = *(undefined1 **)(lVar27 + 0x20);
                  FUN_10a086f98(puVar9 + -0x120);
                  for (plVar28 = *(long **)(lVar27 + 0x28); plVar28 != (long *)0x0;
                      plVar28 = (long *)*plVar28) {
                    uVar14 = plVar28[2];
                    uVar18 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar18 = (uVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
                    unaff_x23 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
                    plVar29 = *(long **)(puVar9 + -0x118);
                    if (plVar29 != (long *)0x0) {
                      uVar18 = (long)plVar29 - 1;
                      if (((ulong)plVar29 & uVar18) == 0) {
                        unaff_x24 = (long *)((ulong)unaff_x23 & uVar18);
                      }
                      else {
                        unaff_x24 = unaff_x23;
                        if (plVar29 <= unaff_x23) {
                          uVar22 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar22 = (ulong)unaff_x23 / (ulong)plVar29;
                          }
                          unaff_x24 = (long *)((long)unaff_x23 - uVar22 * (long)plVar29);
                        }
                      }
                      plVar19 = *(long **)(*(long *)(puVar9 + -0x120) + (long)unaff_x24 * 8);
                      if (plVar19 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar19 = (long *)*plVar19;
                            if (plVar19 == (long *)0x0) goto LAB_10a03ec08;
                            plVar21 = (long *)plVar19[1];
                            if (plVar21 != unaff_x23) break;
                            if (plVar19[2] == uVar14) goto LAB_10a03ed70;
                          }
                          if (((ulong)plVar29 & uVar18) == 0) {
                            plVar21 = (long *)((ulong)plVar21 & uVar18);
                          }
                          else if (plVar29 <= plVar21) {
                            uVar22 = 0;
                            if (plVar29 != (long *)0x0) {
                              uVar22 = (ulong)plVar21 / (ulong)plVar29;
                            }
                            plVar21 = (long *)((long)plVar21 - uVar22 * (long)plVar29);
                          }
                        } while (plVar21 == unaff_x24);
                      }
                    }
LAB_10a03ec08:
                    unaff_x20 = (long *)0x68;
                    __Znwm();
                    *unaff_x20 = 0;
                    unaff_x20[1] = (long)unaff_x23;
                    lVar15 = plVar28[3];
                    lVar16 = plVar28[2];
                    unaff_x20[3] = plVar28[3];
                    unaff_x20[2] = lVar16;
                    if (lVar15 != 0) {
                      plVar19 = (long *)(lVar15 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar10) {
                          *plVar19 = *plVar19 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = 3;
                    *(long **)(puVar9 + -0xc0) = unaff_x20 + 4;
                    if (*(char *)(plVar28 + 0xc) == '\0') {
                      uVar13 = 0;
                    }
                    else {
                      puVar11 = (undefined1 *)(plVar28 + 4);
                      FUN_10a005398(puVar9 + -0xc0);
                      uVar13 = *(undefined1 *)(plVar28 + 0xc);
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = uVar13;
                    if ((plVar29 == (long *)0x0) ||
                       (*(float *)(puVar9 + -0x100) * (float)plVar29 <
                        (float)(*(long *)(puVar9 + -0x108) + 1))) {
                      uVar14 = 1;
                      if ((long *)0x2 < plVar29) {
                        uVar14 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
                      }
                      puVar11 = (undefined1 *)(uVar14 | (long)plVar29 << 1);
                      puVar12 = (undefined1 *)
                                (long)((float)(*(long *)(puVar9 + -0x108) + 1) /
                                      *(float *)(puVar9 + -0x100));
                      if (puVar11 <= puVar12) {
                        puVar11 = puVar12;
                      }
                      FUN_10a086f98(puVar9 + -0x120);
                      plVar29 = *(long **)(puVar9 + -0x118);
                      if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                        unaff_x24 = (long *)((long)plVar29 - 1U & (ulong)unaff_x23);
                      }
                      else {
                        unaff_x24 = unaff_x23;
                        if (plVar29 <= unaff_x23) {
                          uVar14 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar14 = (ulong)unaff_x23 / (ulong)plVar29;
                          }
                          unaff_x24 = (long *)((long)unaff_x23 - uVar14 * (long)plVar29);
                        }
                      }
                    }
                    lVar16 = *(long *)(puVar9 + -0x120);
                    plVar19 = *(long **)(lVar16 + (long)unaff_x24 * 8);
                    if (plVar19 == (long *)0x0) {
                      *unaff_x20 = *(long *)(puVar9 + -0x110);
                      *(long **)(puVar9 + -0x110) = unaff_x20;
                      *(undefined8 *)(lVar16 + (long)unaff_x24 * 8) =
                           *(undefined8 *)(puVar9 + -0x1c8);
                      if (*unaff_x20 != 0) {
                        plVar19 = *(long **)(*unaff_x20 + 8);
                        if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                          plVar19 = (long *)((ulong)plVar19 & (long)plVar29 - 1U);
                        }
                        else if (plVar29 <= plVar19) {
                          uVar14 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar14 = (ulong)plVar19 / (ulong)plVar29;
                          }
                          plVar19 = (long *)((long)plVar19 - uVar14 * (long)plVar29);
                        }
                        *(long **)(*(long *)(puVar9 + -0x120) + (long)plVar19 * 8) = unaff_x20;
                      }
                    }
                    else {
                      *unaff_x20 = *plVar19;
                      *plVar19 = (long)unaff_x20;
                    }
                    *(long *)(puVar9 + -0x108) = *(long *)(puVar9 + -0x108) + 1;
LAB_10a03ed70:
                  }
                  unaff_x22 = (long *)(puVar9 + -0xc0);
                  for (plVar28 = *(long **)(puVar9 + -0x110); plVar28 != (long *)0x0;
                      plVar28 = (long *)*plVar28) {
                    uVar14 = *(ulong *)(lVar27 + 0x20);
                    puVar12 = puVar11;
                    if (uVar14 != 0) {
                      uVar18 = plVar28[2];
                      uVar22 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar22 = (uVar18 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                      uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                      uVar23 = uVar14 - 1;
                      if ((uVar14 & uVar23) == 0) {
                        uVar25 = uVar22 & uVar23;
                      }
                      else {
                        uVar25 = uVar22;
                        if (uVar14 <= uVar22) {
                          uVar25 = 0;
                          if (uVar14 != 0) {
                            uVar25 = uVar22 / uVar14;
                          }
                          uVar25 = uVar22 - uVar25 * uVar14;
                        }
                      }
                      plVar29 = *(long **)(*(long *)(lVar27 + 0x18) + uVar25 * 8);
                      if (plVar29 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar29 = (long *)*plVar29;
                            if (plVar29 == (long *)0x0) goto LAB_10a03eeb4;
                            uVar26 = plVar29[1];
                            if (uVar26 != uVar22) break;
                            if (plVar29[2] == uVar18) {
                              if (*(char *)(plVar28 + 0xc) == '\x01') {
                                (*(code *)plVar28[4])
                                          (*(undefined4 *)(puVar9 + -0x160),
                                           *(undefined4 *)(puVar9 + -0x15c),
                                           *(undefined4 *)(puVar9 + -0x158),
                                           *(undefined4 *)(puVar9 + -0x154),
                                           *(undefined4 *)(puVar9 + -0x150),
                                           *(undefined4 *)(puVar9 + -0x14c),
                                           *(undefined4 *)(puVar9 + -0x148),plVar28 + 4);
                                puVar12 = puVar11;
                              }
                              else if (*(char *)(plVar28 + 0xc) == '\x02') {
                                unaff_x20 = plVar28 + 4;
                                FUN_10a688b40();
                                if (unaff_x20 == (long *)0x0) {
                                  puVar12 = (undefined1 *)0x0;
                                  if (puVar11 != (undefined1 *)0x0) {
                                    uVar6 = plVar28[4];
                                    uVar7 = plVar28[5];
                                    if (plVar28[5] != 0) {
                                      plVar29 = (long *)(plVar28[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                                        if (bVar10) {
                                          *plVar29 = *plVar29 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    puVar17 = *(undefined8 **)(puVar9 + -0x1e8);
                                    *puVar17 = *(undefined8 *)(puVar9 + -0x160);
                                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + -0x158);
                                    *(undefined8 *)(puVar9 + -0xcc) =
                                         *(undefined8 *)(puVar9 + -0x14c);
                                    *(undefined8 *)(puVar9 + -0xd4) =
                                         *(undefined8 *)(puVar9 + -0x154);
                                    *(code **)(puVar9 + -0xc0) = FUN_10a088278;
                                    *(undefined ***)(puVar9 + -0xb8) = &PTR_DAT_110b9eab8;
                                    *(undefined8 *)(puVar9 + -0xa8) = uVar7;
                                    *(undefined8 *)(puVar9 + -0xb0) = uVar6;
                                    *(undefined8 *)(puVar9 + -0xf0) = 0;
                                    *(undefined8 *)(puVar9 + -0xe8) = 0;
                                    uVar6 = *puVar17;
                                    *(undefined8 *)(puVar9 + -0x98) = puVar17[1];
                                    *(undefined8 *)(puVar9 + -0xa0) = uVar6;
                                    uVar6 = *(undefined8 *)((long)puVar17 + 0xc);
                                    *(undefined8 *)(puVar9 + -0x8c) =
                                         *(undefined8 *)((long)puVar17 + 0x14);
                                    *(undefined8 *)(puVar9 + -0x94) = uVar6;
                                    puVar12 = puVar9 + -0xc0;
                                    FUN_10a4634ec(puVar11);
                                    (*(code *)**(undefined8 **)(puVar9 + -0xb8))(puVar9 + -0xb8);
                                  }
                                }
                                else {
                                  *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                        (int)*unaff_x20 + 1);
                                  puVar12 = puVar9 + -0x160;
                                  FUN_10a087fe0(plVar28[4],puVar12,puVar9 + -0x154);
                                  iVar1 = *(int *)((long)unaff_x20 + 4) + -1;
                                  *(int *)((long)unaff_x20 + 4) = iVar1;
                                  if (iVar1 == 0) {
                                    *(undefined4 *)unaff_x20 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03eeb4;
                            }
                          }
                          if ((uVar14 & uVar23) == 0) {
                            uVar26 = uVar26 & uVar23;
                          }
                          else if (uVar14 <= uVar26) {
                            uVar5 = 0;
                            if (uVar14 != 0) {
                              uVar5 = uVar26 / uVar14;
                            }
                            uVar26 = uVar26 - uVar5 * uVar14;
                          }
                        } while (uVar26 == uVar25);
                      }
                    }
LAB_10a03eeb4:
                    puVar11 = puVar12;
                  }
                  unaff_x19 = (long *)(puVar9 + -0x120);
                  func_0x00010a0873b8();
                  if ((puVar9[-0x13c] & 1) == 0) goto LAB_10a03fd54;
                }
                uVar2 = *(uint *)(puVar9 + -0x144);
                unaff_x21 = (long *)(ulong)uVar2;
                *(uint *)(puVar9 + -0x130) = uVar2;
                if (*(uint *)(unaff_x26 + 0x17) != uVar2) {
                  *(uint *)(unaff_x26 + 0x17) = uVar2;
                  lVar27 = unaff_x26[0x11];
                  *(undefined8 *)(puVar9 + -0xe8) = 0;
                  *(undefined8 *)(puVar9 + -0xf0) = 0;
                  *(undefined8 *)(puVar9 + -0xd8) = 0;
                  *(undefined8 *)(puVar9 + -0xe0) = 0;
                  *(undefined4 *)(puVar9 + -0xd0) = *(undefined4 *)(lVar27 + 0x38);
                  puVar11 = *(undefined1 **)(lVar27 + 0x20);
                  FUN_10a086d78(puVar9 + -0xf0);
                  for (plVar28 = *(long **)(lVar27 + 0x28); plVar28 != (long *)0x0;
                      plVar28 = (long *)*plVar28) {
                    uVar14 = plVar28[2];
                    uVar18 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar18 = (uVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
                    unaff_x24 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
                    plVar29 = *(long **)(puVar9 + -0xe8);
                    if (plVar29 != (long *)0x0) {
                      uVar18 = (long)plVar29 - 1;
                      if (((ulong)plVar29 & uVar18) == 0) {
                        unaff_x26 = (long *)((ulong)unaff_x24 & uVar18);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar29 <= unaff_x24) {
                          uVar22 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar22 = (ulong)unaff_x24 / (ulong)plVar29;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar22 * (long)plVar29);
                        }
                      }
                      plVar19 = *(long **)(*(long *)(puVar9 + -0xf0) + (long)unaff_x26 * 8);
                      if (plVar19 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar19 = (long *)*plVar19;
                            if (plVar19 == (long *)0x0) goto LAB_10a03f058;
                            plVar21 = (long *)plVar19[1];
                            if (plVar21 != unaff_x24) break;
                            if (plVar19[2] == uVar14) goto LAB_10a03f1c0;
                          }
                          if (((ulong)plVar29 & uVar18) == 0) {
                            plVar21 = (long *)((ulong)plVar21 & uVar18);
                          }
                          else if (plVar29 <= plVar21) {
                            uVar22 = 0;
                            if (plVar29 != (long *)0x0) {
                              uVar22 = (ulong)plVar21 / (ulong)plVar29;
                            }
                            plVar21 = (long *)((long)plVar21 - uVar22 * (long)plVar29);
                          }
                        } while (plVar21 == unaff_x26);
                      }
                    }
LAB_10a03f058:
                    unaff_x20 = (long *)0x68;
                    __Znwm();
                    *unaff_x20 = 0;
                    unaff_x20[1] = (long)unaff_x24;
                    lVar15 = plVar28[3];
                    lVar16 = plVar28[2];
                    unaff_x20[3] = plVar28[3];
                    unaff_x20[2] = lVar16;
                    if (lVar15 != 0) {
                      plVar19 = (long *)(lVar15 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar10) {
                          *plVar19 = *plVar19 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = 3;
                    *(long **)(puVar9 + -0xc0) = unaff_x20 + 4;
                    if (*(char *)(plVar28 + 0xc) == '\0') {
                      uVar13 = 0;
                    }
                    else {
                      puVar11 = (undefined1 *)(plVar28 + 4);
                      FUN_10a005398(puVar9 + -0xc0);
                      uVar13 = *(undefined1 *)(plVar28 + 0xc);
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = uVar13;
                    if ((plVar29 == (long *)0x0) ||
                       (*(float *)(puVar9 + -0xd0) * (float)plVar29 <
                        (float)(*(long *)(puVar9 + -0xd8) + 1))) {
                      uVar14 = 1;
                      if ((long *)0x2 < plVar29) {
                        uVar14 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
                      }
                      puVar11 = (undefined1 *)(uVar14 | (long)plVar29 << 1);
                      puVar12 = (undefined1 *)
                                (long)((float)(*(long *)(puVar9 + -0xd8) + 1) /
                                      *(float *)(puVar9 + -0xd0));
                      if (puVar11 <= puVar12) {
                        puVar11 = puVar12;
                      }
                      FUN_10a086d78(puVar9 + -0xf0);
                      plVar29 = *(long **)(puVar9 + -0xe8);
                      if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                        unaff_x26 = (long *)((long)plVar29 - 1U & (ulong)unaff_x24);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar29 <= unaff_x24) {
                          uVar14 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar14 = (ulong)unaff_x24 / (ulong)plVar29;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar14 * (long)plVar29);
                        }
                      }
                    }
                    lVar16 = *(long *)(puVar9 + -0xf0);
                    plVar19 = *(long **)(lVar16 + (long)unaff_x26 * 8);
                    if (plVar19 == (long *)0x0) {
                      *unaff_x20 = *(long *)(puVar9 + -0xe0);
                      *(long **)(puVar9 + -0xe0) = unaff_x20;
                      *(undefined8 *)(lVar16 + (long)unaff_x26 * 8) =
                           *(undefined8 *)(puVar9 + -0x1e8);
                      if (*unaff_x20 != 0) {
                        plVar19 = *(long **)(*unaff_x20 + 8);
                        if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                          plVar19 = (long *)((ulong)plVar19 & (long)plVar29 - 1U);
                        }
                        else if (plVar29 <= plVar19) {
                          uVar14 = 0;
                          if (plVar29 != (long *)0x0) {
                            uVar14 = (ulong)plVar19 / (ulong)plVar29;
                          }
                          plVar19 = (long *)((long)plVar19 - uVar14 * (long)plVar29);
                        }
                        *(long **)(*(long *)(puVar9 + -0xf0) + (long)plVar19 * 8) = unaff_x20;
                      }
                    }
                    else {
                      *unaff_x20 = *plVar19;
                      *plVar19 = (long)unaff_x20;
                    }
                    *(long *)(puVar9 + -0xd8) = *(long *)(puVar9 + -0xd8) + 1;
LAB_10a03f1c0:
                  }
                  unaff_x23 = (long *)(puVar9 + -0xc0);
                  for (plVar28 = *(long **)(puVar9 + -0xe0); plVar28 != (long *)0x0;
                      plVar28 = (long *)*plVar28) {
                    uVar14 = *(ulong *)(lVar27 + 0x20);
                    puVar12 = puVar11;
                    if (uVar14 != 0) {
                      uVar18 = plVar28[2];
                      uVar22 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar22 = (uVar18 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                      uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                      uVar23 = uVar14 - 1;
                      if ((uVar14 & uVar23) == 0) {
                        uVar25 = uVar22 & uVar23;
                      }
                      else {
                        uVar25 = uVar22;
                        if (uVar14 <= uVar22) {
                          uVar25 = 0;
                          if (uVar14 != 0) {
                            uVar25 = uVar22 / uVar14;
                          }
                          uVar25 = uVar22 - uVar25 * uVar14;
                        }
                      }
                      plVar29 = *(long **)(*(long *)(lVar27 + 0x18) + uVar25 * 8);
                      if (plVar29 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar29 = (long *)*plVar29;
                            if (plVar29 == (long *)0x0) goto LAB_10a03f2f0;
                            uVar26 = plVar29[1];
                            if (uVar26 != uVar22) break;
                            if (plVar29[2] == uVar18) {
                              if (*(char *)(plVar28 + 0xc) == '\x01') {
                                puVar12 = (undefined1 *)(plVar28 + 4);
                                (*(code *)plVar28[4])(unaff_x21);
                              }
                              else if (*(char *)(plVar28 + 0xc) == '\x02') {
                                unaff_x20 = plVar28 + 4;
                                FUN_10a688b40();
                                if (unaff_x20 == (long *)0x0) {
                                  puVar12 = (undefined1 *)0x0;
                                  if (puVar11 != (undefined1 *)0x0) {
                                    uVar6 = plVar28[4];
                                    uVar7 = plVar28[5];
                                    if (plVar28[5] != 0) {
                                      plVar29 = (long *)(plVar28[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                                        if (bVar10) {
                                          *plVar29 = *plVar29 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    *(uint *)(puVar9 + -0x110) = uVar2;
                                    *(code **)(puVar9 + -0xc0) = FUN_10a088454;
                                    *(undefined ***)(puVar9 + -0xb8) = &PTR_DAT_110b9ead0;
                                    *(undefined8 *)(puVar9 + -0xa8) = uVar7;
                                    *(undefined8 *)(puVar9 + -0xb0) = uVar6;
                                    *(undefined8 *)(puVar9 + -0x120) = 0;
                                    *(undefined8 *)(puVar9 + -0x118) = 0;
                                    *(uint *)(puVar9 + -0xa0) = uVar2;
                                    puVar12 = puVar9 + -0xc0;
                                    FUN_10a4634ec(puVar11);
                                    (*(code *)**(undefined8 **)(puVar9 + -0xb8))(puVar9 + -0xb8);
                                  }
                                }
                                else {
                                  *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                        (int)*unaff_x20 + 1);
                                  puVar12 = puVar9 + -0x130;
                                  FUN_10a0882c0(plVar28[4]);
                                  iVar1 = *(int *)((long)unaff_x20 + 4) + -1;
                                  *(int *)((long)unaff_x20 + 4) = iVar1;
                                  if (iVar1 == 0) {
                                    *(undefined4 *)unaff_x20 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03f2f0;
                            }
                          }
                          if ((uVar14 & uVar23) == 0) {
                            uVar26 = uVar26 & uVar23;
                          }
                          else if (uVar14 <= uVar26) {
                            uVar5 = 0;
                            if (uVar14 != 0) {
                              uVar5 = uVar26 / uVar14;
                            }
                            uVar26 = uVar26 - uVar5 * uVar14;
                          }
                        } while (uVar26 == uVar25);
                      }
                    }
LAB_10a03f2f0:
                    puVar11 = puVar12;
                  }
                  unaff_x22 = (long *)0x0;
                  unaff_x19 = (long *)(puVar9 + -0xf0);
                  func_0x00010a087338();
                }
                unaff_x26 = *(long **)(puVar9 + -0x1b0);
              }
            }
          }
          if (((char)unaff_x26[3] == '\x01') && ((puVar9[-0x178] & 1) != 0)) {
            lVar27 = *(long *)(puVar9 + -0x1a8);
            *(long **)(puVar9 + -0x1c0) = unaff_x26;
            *(long *)(puVar9 + -0x1b8) = lVar27;
            if (lVar27 != 0) {
              plVar28 = (long *)(lVar27 + 8);
              do {
                cVar3 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar10) {
                  *plVar28 = *plVar28 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((puVar9[-0x178] & 1) == 0) {
LAB_10a03fd54:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10a03fd58);
                (*pcVar8)();
              }
            }
            *(long *)(puVar9 + -0x200) = lVar27;
            bVar10 = false;
            if ((*(float *)(unaff_x26 + 0x16) == *(float *)(puVar9 + -0x1a0)) &&
               (bVar10 = false,
               !NAN(*(float *)((long)unaff_x26 + 0xb4)) && !NAN(*(float *)(puVar9 + -0x19c)))) {
              bVar10 = *(float *)((long)unaff_x26 + 0xb4) == *(float *)(puVar9 + -0x19c);
            }
            if (bVar10) {
              bVar10 = false;
              if ((*(float *)(unaff_x26 + 0x15) == *(float *)(puVar9 + -0x198)) &&
                 (bVar10 = false,
                 !NAN(*(float *)((long)unaff_x26 + 0xac)) && !NAN(*(float *)(puVar9 + -0x194)))) {
                bVar10 = *(float *)((long)unaff_x26 + 0xac) == *(float *)(puVar9 + -0x194);
              }
              if (!bVar10) goto LAB_10a03f3d8;
            }
            else {
LAB_10a03f3d8:
              auVar30 = NEON_ext(*(undefined1 (*) [16])(puVar9 + -0x1a0),
                                 *(undefined1 (*) [16])(puVar9 + -0x1a0),8,1);
              unaff_x26[0x16] = auVar30._8_8_;
              unaff_x26[0x15] = auVar30._0_8_;
              lVar27 = unaff_x26[0xf];
              *(undefined8 *)(puVar9 + -0xe8) = 0;
              *(undefined8 *)(puVar9 + -0xf0) = 0;
              *(undefined8 *)(puVar9 + -0xd8) = 0;
              *(undefined8 *)(puVar9 + -0xe0) = 0;
              *(undefined4 *)(puVar9 + -0xd0) = *(undefined4 *)(lVar27 + 0x38);
              puVar11 = *(undefined1 **)(lVar27 + 0x20);
              FUN_10a086b58(puVar9 + -0xf0);
              for (plVar28 = *(long **)(lVar27 + 0x28); plVar28 != (long *)0x0;
                  plVar28 = (long *)*plVar28) {
                uVar14 = plVar28[2];
                uVar18 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) *
                         -0x622015f714c7d297;
                uVar18 = (uVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
                unaff_x23 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
                plVar29 = *(long **)(puVar9 + -0xe8);
                if (plVar29 != (long *)0x0) {
                  uVar18 = (long)plVar29 - 1;
                  if (((ulong)plVar29 & uVar18) == 0) {
                    unaff_x24 = (long *)((ulong)unaff_x23 & uVar18);
                  }
                  else {
                    unaff_x24 = unaff_x23;
                    if (plVar29 <= unaff_x23) {
                      uVar22 = 0;
                      if (plVar29 != (long *)0x0) {
                        uVar22 = (ulong)unaff_x23 / (ulong)plVar29;
                      }
                      unaff_x24 = (long *)((long)unaff_x23 - uVar22 * (long)plVar29);
                    }
                  }
                  plVar19 = *(long **)(*(long *)(puVar9 + -0xf0) + (long)unaff_x24 * 8);
                  if (plVar19 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar19 = (long *)*plVar19;
                        if (plVar19 == (long *)0x0) goto LAB_10a03f4c0;
                        plVar21 = (long *)plVar19[1];
                        if (plVar21 != unaff_x23) break;
                        if (plVar19[2] == uVar14) goto LAB_10a03f628;
                      }
                      if (((ulong)plVar29 & uVar18) == 0) {
                        plVar21 = (long *)((ulong)plVar21 & uVar18);
                      }
                      else if (plVar29 <= plVar21) {
                        uVar22 = 0;
                        if (plVar29 != (long *)0x0) {
                          uVar22 = (ulong)plVar21 / (ulong)plVar29;
                        }
                        plVar21 = (long *)((long)plVar21 - uVar22 * (long)plVar29);
                      }
                    } while (plVar21 == unaff_x24);
                  }
                }
LAB_10a03f4c0:
                unaff_x20 = (long *)0x68;
                __Znwm();
                *unaff_x20 = 0;
                unaff_x20[1] = (long)unaff_x23;
                lVar15 = plVar28[3];
                lVar16 = plVar28[2];
                unaff_x20[3] = plVar28[3];
                unaff_x20[2] = lVar16;
                if (lVar15 != 0) {
                  plVar19 = (long *)(lVar15 + 8);
                  do {
                    cVar3 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar10) {
                      *plVar19 = *plVar19 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                *(undefined1 *)(unaff_x20 + 0xc) = 3;
                *(long **)(puVar9 + -0xc0) = unaff_x20 + 4;
                if (*(char *)(plVar28 + 0xc) == '\0') {
                  uVar13 = 0;
                }
                else {
                  puVar11 = (undefined1 *)(plVar28 + 4);
                  FUN_10a005398(puVar9 + -0xc0);
                  uVar13 = *(undefined1 *)(plVar28 + 0xc);
                }
                *(undefined1 *)(unaff_x20 + 0xc) = uVar13;
                if ((plVar29 == (long *)0x0) ||
                   (*(float *)(puVar9 + -0xd0) * (float)plVar29 <
                    (float)(*(long *)(puVar9 + -0xd8) + 1))) {
                  uVar14 = 1;
                  if ((long *)0x2 < plVar29) {
                    uVar14 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
                  }
                  puVar11 = (undefined1 *)(uVar14 | (long)plVar29 << 1);
                  puVar12 = (undefined1 *)
                            (long)((float)(*(long *)(puVar9 + -0xd8) + 1) /
                                  *(float *)(puVar9 + -0xd0));
                  if (puVar11 <= puVar12) {
                    puVar11 = puVar12;
                  }
                  FUN_10a086b58(puVar9 + -0xf0);
                  plVar29 = *(long **)(puVar9 + -0xe8);
                  if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                    unaff_x24 = (long *)((long)plVar29 - 1U & (ulong)unaff_x23);
                  }
                  else {
                    unaff_x24 = unaff_x23;
                    if (plVar29 <= unaff_x23) {
                      uVar14 = 0;
                      if (plVar29 != (long *)0x0) {
                        uVar14 = (ulong)unaff_x23 / (ulong)plVar29;
                      }
                      unaff_x24 = (long *)((long)unaff_x23 - uVar14 * (long)plVar29);
                    }
                  }
                }
                lVar16 = *(long *)(puVar9 + -0xf0);
                plVar19 = *(long **)(lVar16 + (long)unaff_x24 * 8);
                if (plVar19 == (long *)0x0) {
                  *unaff_x20 = *(long *)(puVar9 + -0xe0);
                  *(long **)(puVar9 + -0xe0) = unaff_x20;
                  *(undefined8 *)(lVar16 + (long)unaff_x24 * 8) = *(undefined8 *)(puVar9 + -0x1e8);
                  if (*unaff_x20 != 0) {
                    plVar19 = *(long **)(*unaff_x20 + 8);
                    if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                      plVar19 = (long *)((ulong)plVar19 & (long)plVar29 - 1U);
                    }
                    else if (plVar29 <= plVar19) {
                      uVar14 = 0;
                      if (plVar29 != (long *)0x0) {
                        uVar14 = (ulong)plVar19 / (ulong)plVar29;
                      }
                      plVar19 = (long *)((long)plVar19 - uVar14 * (long)plVar29);
                    }
                    *(long **)(*(long *)(puVar9 + -0xf0) + (long)plVar19 * 8) = unaff_x20;
                  }
                }
                else {
                  *unaff_x20 = *plVar19;
                  *plVar19 = (long)unaff_x20;
                }
                *(long *)(puVar9 + -0xd8) = *(long *)(puVar9 + -0xd8) + 1;
LAB_10a03f628:
              }
              unaff_x22 = (long *)(puVar9 + -0xc0);
              for (plVar28 = *(long **)(puVar9 + -0xe0); plVar28 != (long *)0x0;
                  plVar28 = (long *)*plVar28) {
                uVar14 = *(ulong *)(lVar27 + 0x20);
                puVar12 = puVar11;
                if (uVar14 != 0) {
                  uVar18 = plVar28[2];
                  uVar22 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) *
                           -0x622015f714c7d297;
                  uVar22 = (uVar18 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                  uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                  uVar23 = uVar14 - 1;
                  if ((uVar14 & uVar23) == 0) {
                    uVar25 = uVar22 & uVar23;
                  }
                  else {
                    uVar25 = uVar22;
                    if (uVar14 <= uVar22) {
                      uVar25 = 0;
                      if (uVar14 != 0) {
                        uVar25 = uVar22 / uVar14;
                      }
                      uVar25 = uVar22 - uVar25 * uVar14;
                    }
                  }
                  plVar29 = *(long **)(*(long *)(lVar27 + 0x18) + uVar25 * 8);
                  if (plVar29 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar29 = (long *)*plVar29;
                        if (plVar29 == (long *)0x0) goto LAB_10a03f764;
                        uVar26 = plVar29[1];
                        if (uVar26 != uVar22) break;
                        if (plVar29[2] == uVar18) {
                          if (*(char *)(plVar28 + 0xc) == '\x01') {
                            (*(code *)plVar28[4])
                                      (*(undefined4 *)(puVar9 + -0x1a0),
                                       *(undefined4 *)(puVar9 + -0x19c),
                                       *(undefined4 *)(puVar9 + -0x198),
                                       *(undefined4 *)(puVar9 + -0x194),plVar28 + 4);
                            puVar12 = puVar11;
                          }
                          else if (*(char *)(plVar28 + 0xc) == '\x02') {
                            unaff_x20 = plVar28 + 4;
                            FUN_10a688b40();
                            if (unaff_x20 == (long *)0x0) {
                              puVar12 = (undefined1 *)0x0;
                              if (puVar11 != (undefined1 *)0x0) {
                                uVar6 = plVar28[4];
                                uVar7 = plVar28[5];
                                if (plVar28[5] != 0) {
                                  plVar29 = (long *)(plVar28[5] + 8);
                                  do {
                                    cVar3 = '\x01';
                                    bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                                    if (bVar10) {
                                      *plVar29 = *plVar29 + 1;
                                      cVar3 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar3 != '\0');
                                }
                                *(undefined8 *)(puVar9 + -0x108) = *(undefined8 *)(puVar9 + -0x198);
                                *(undefined8 *)(puVar9 + -0x110) = *(undefined8 *)(puVar9 + -0x1a0);
                                *(code **)(puVar9 + -0xc0) = FUN_10a087fa0;
                                *(undefined ***)(puVar9 + -0xb8) = &PTR_DAT_110b9eaa0;
                                *(undefined8 *)(puVar9 + -0xa8) = uVar7;
                                *(undefined8 *)(puVar9 + -0xb0) = uVar6;
                                *(undefined8 *)(puVar9 + -0x120) = 0;
                                *(undefined8 *)(puVar9 + -0x118) = 0;
                                uVar6 = **(undefined8 **)(puVar9 + -0x1c8);
                                *(undefined8 *)(puVar9 + -0x98) =
                                     (*(undefined8 **)(puVar9 + -0x1c8))[1];
                                *(undefined8 *)(puVar9 + -0xa0) = uVar6;
                                puVar12 = puVar9 + -0xc0;
                                FUN_10a4634ec(puVar11);
                                (*(code *)**(undefined8 **)(puVar9 + -0xb8))(puVar9 + -0xb8);
                              }
                            }
                            else {
                              *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                    (int)*unaff_x20 + 1);
                              puVar12 = puVar9 + -0x1a0;
                              FUN_10a087dc8(plVar28[4],puVar12,(ulong)(puVar9 + -0x1a0) | 8);
                              iVar1 = *(int *)((long)unaff_x20 + 4) + -1;
                              *(int *)((long)unaff_x20 + 4) = iVar1;
                              if (iVar1 == 0) {
                                *(undefined4 *)unaff_x20 = 0;
                              }
                            }
                          }
                          goto LAB_10a03f764;
                        }
                      }
                      if ((uVar14 & uVar23) == 0) {
                        uVar26 = uVar26 & uVar23;
                      }
                      else if (uVar14 <= uVar26) {
                        uVar5 = 0;
                        if (uVar14 != 0) {
                          uVar5 = uVar26 / uVar14;
                        }
                        uVar26 = uVar26 - uVar5 * uVar14;
                      }
                    } while (uVar26 == uVar25);
                  }
                }
LAB_10a03f764:
                puVar11 = puVar12;
              }
              unaff_x21 = (long *)0x0;
              unaff_x19 = (long *)(puVar9 + -0xf0);
              func_0x00010a0872b8();
            }
            *(undefined8 **)(puVar9 + -0x208) = unaff_x27;
            puVar17 = *(undefined8 **)(puVar9 + -400);
            *(undefined8 **)(puVar9 + -0x1f8) = *(undefined8 **)(puVar9 + -0x188);
            if (puVar17 != *(undefined8 **)(puVar9 + -0x188)) {
              *(long **)(puVar9 + -0x1e0) = unaff_x26;
              do {
                *(undefined8 **)(puVar9 + -0x1f0) = puVar17;
                unaff_x20 = (long *)*puVar17;
                plVar28 = (long *)puVar17[1];
                *(long **)(puVar9 + -0x1d8) = plVar28;
                for (; unaff_x20 != plVar28; unaff_x20 = unaff_x20 + 4) {
                  lVar27 = unaff_x20[1];
                  unaff_x22 = (long *)unaff_x20[2];
                  uVar2 = *(uint *)(unaff_x20 + 3);
                  unaff_x23 = (long *)(ulong)uVar2;
                  *(int *)(puVar9 + -0x1cc) = (int)lVar27;
                  *(int *)(puVar9 + -0x124) = (int)lVar27;
                  *(long **)(puVar9 + -0x130) = unaff_x22;
                  *(uint *)(puVar9 + -0x134) = uVar2;
                  lVar27 = unaff_x26[0xd];
                  *(undefined8 *)(puVar9 + -0x118) = 0;
                  *(undefined8 *)(puVar9 + -0x120) = 0;
                  *(undefined8 *)(puVar9 + -0x108) = 0;
                  *(undefined8 *)(puVar9 + -0x110) = 0;
                  *(undefined4 *)(puVar9 + -0x100) = *(undefined4 *)(lVar27 + 0x38);
                  plVar28 = *(long **)(lVar27 + 0x20);
                  FUN_10a086938(puVar9 + -0x120);
                  for (plVar29 = *(long **)(lVar27 + 0x28); plVar29 != (long *)0x0;
                      plVar29 = (long *)*plVar29) {
                    uVar14 = plVar29[2];
                    uVar18 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar18 = (uVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
                    plVar19 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
                    plVar21 = *(long **)(puVar9 + -0x118);
                    if (plVar21 != (long *)0x0) {
                      puVar11 = (undefined1 *)((long)plVar21 + -1);
                      if (((ulong)plVar21 & (ulong)puVar11) == 0) {
                        unaff_x21 = (long *)((ulong)plVar19 & (ulong)puVar11);
                      }
                      else {
                        unaff_x21 = plVar19;
                        if (plVar21 <= plVar19) {
                          uVar18 = 0;
                          if (plVar21 != (long *)0x0) {
                            uVar18 = (ulong)plVar19 / (ulong)plVar21;
                          }
                          unaff_x21 = (long *)((long)plVar19 - uVar18 * (long)plVar21);
                        }
                      }
                      plVar20 = *(long **)(*(long *)(puVar9 + -0x120) + (long)unaff_x21 * 8);
                      if (plVar20 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar20 = (long *)*plVar20;
                            if (plVar20 == (long *)0x0) goto LAB_10a03f910;
                            plVar24 = (long *)plVar20[1];
                            if (plVar24 != plVar19) break;
                            if (plVar20[2] == uVar14) goto LAB_10a03fa78;
                          }
                          if (((ulong)plVar21 & (ulong)puVar11) == 0) {
                            plVar24 = (long *)((ulong)plVar24 & (ulong)puVar11);
                          }
                          else if (plVar21 <= plVar24) {
                            uVar18 = 0;
                            if (plVar21 != (long *)0x0) {
                              uVar18 = (ulong)plVar24 / (ulong)plVar21;
                            }
                            plVar24 = (long *)((long)plVar24 - uVar18 * (long)plVar21);
                          }
                        } while (plVar24 == unaff_x21);
                      }
                    }
LAB_10a03f910:
                    unaff_x24 = (long *)0x68;
                    __Znwm();
                    *unaff_x24 = 0;
                    unaff_x24[1] = (long)plVar19;
                    lVar15 = plVar29[3];
                    lVar16 = plVar29[2];
                    unaff_x24[3] = plVar29[3];
                    unaff_x24[2] = lVar16;
                    if (lVar15 != 0) {
                      plVar20 = (long *)(lVar15 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar10) {
                          *plVar20 = *plVar20 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x24 + 0xc) = 3;
                    *(long **)(puVar9 + -0xc0) = unaff_x24 + 4;
                    if (*(char *)(plVar29 + 0xc) == '\0') {
                      uVar13 = 0;
                    }
                    else {
                      plVar28 = plVar29 + 4;
                      FUN_10a005398(puVar9 + -0xc0);
                      uVar13 = *(undefined1 *)(plVar29 + 0xc);
                    }
                    *(undefined1 *)(unaff_x24 + 0xc) = uVar13;
                    if ((plVar21 == (long *)0x0) ||
                       (*(float *)(puVar9 + -0x100) * (float)plVar21 <
                        (float)(*(long *)(puVar9 + -0x108) + 1))) {
                      uVar14 = 1;
                      if ((long *)0x2 < plVar21) {
                        uVar14 = (ulong)(((ulong)plVar21 & (ulong)((long)plVar21 + -1)) != 0);
                      }
                      plVar28 = (long *)(uVar14 | (long)plVar21 << 1);
                      plVar21 = (long *)(long)((float)(*(long *)(puVar9 + -0x108) + 1) /
                                              *(float *)(puVar9 + -0x100));
                      if (plVar28 <= plVar21) {
                        plVar28 = plVar21;
                      }
                      FUN_10a086938(puVar9 + -0x120);
                      plVar21 = *(long **)(puVar9 + -0x118);
                      if (((ulong)plVar21 & (ulong)((long)plVar21 + -1)) == 0) {
                        unaff_x21 = (long *)((ulong)((long)plVar21 + -1) & (ulong)plVar19);
                      }
                      else {
                        unaff_x21 = plVar19;
                        if (plVar21 <= plVar19) {
                          uVar14 = 0;
                          if (plVar21 != (long *)0x0) {
                            uVar14 = (ulong)plVar19 / (ulong)plVar21;
                          }
                          unaff_x21 = (long *)((long)plVar19 - uVar14 * (long)plVar21);
                        }
                      }
                    }
                    lVar16 = *(long *)(puVar9 + -0x120);
                    plVar19 = *(long **)(lVar16 + (long)unaff_x21 * 8);
                    if (plVar19 == (long *)0x0) {
                      *unaff_x24 = *(long *)(puVar9 + -0x110);
                      *(long **)(puVar9 + -0x110) = unaff_x24;
                      *(undefined8 *)(lVar16 + (long)unaff_x21 * 8) =
                           *(undefined8 *)(puVar9 + -0x1c8);
                      if (*unaff_x24 != 0) {
                        plVar19 = *(long **)(*unaff_x24 + 8);
                        if (((ulong)plVar21 & (ulong)((long)plVar21 + -1)) == 0) {
                          plVar19 = (long *)((ulong)plVar19 & (ulong)((long)plVar21 + -1));
                        }
                        else if (plVar21 <= plVar19) {
                          uVar14 = 0;
                          if (plVar21 != (long *)0x0) {
                            uVar14 = (ulong)plVar19 / (ulong)plVar21;
                          }
                          plVar19 = (long *)((long)plVar19 - uVar14 * (long)plVar21);
                        }
                        *(long **)(*(long *)(puVar9 + -0x120) + (long)plVar19 * 8) = unaff_x24;
                      }
                    }
                    else {
                      *unaff_x24 = *plVar19;
                      *plVar19 = (long)unaff_x24;
                    }
                    *(long *)(puVar9 + -0x108) = *(long *)(puVar9 + -0x108) + 1;
LAB_10a03fa78:
                  }
                  unaff_x26 = *(long **)(puVar9 + -0x1e0);
                  for (plVar29 = *(long **)(puVar9 + -0x110); plVar29 != (long *)0x0;
                      plVar29 = (long *)*plVar29) {
                    uVar14 = *(ulong *)(lVar27 + 0x20);
                    plVar19 = plVar28;
                    if (uVar14 != 0) {
                      uVar18 = plVar29[2];
                      uVar22 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar22 = (uVar18 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                      uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                      uVar23 = uVar14 - 1;
                      if ((uVar14 & uVar23) == 0) {
                        uVar25 = uVar22 & uVar23;
                      }
                      else {
                        uVar25 = uVar22;
                        if (uVar14 <= uVar22) {
                          uVar25 = 0;
                          if (uVar14 != 0) {
                            uVar25 = uVar22 / uVar14;
                          }
                          uVar25 = uVar22 - uVar25 * uVar14;
                        }
                      }
                      plVar21 = *(long **)(*(long *)(lVar27 + 0x18) + uVar25 * 8);
                      if (plVar21 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar21 = (long *)*plVar21;
                            if (plVar21 == (long *)0x0) goto LAB_10a03fbc0;
                            uVar26 = plVar21[1];
                            if (uVar26 != uVar22) break;
                            if (plVar21[2] == uVar18) {
                              if (*(char *)(plVar29 + 0xc) == '\x01') {
                                plVar19 = unaff_x22;
                                (*(code *)plVar29[4])
                                          ((int)*unaff_x20,*(undefined4 *)((long)unaff_x20 + 4),
                                           *(undefined4 *)(puVar9 + -0x1cc),unaff_x22,unaff_x23,
                                           plVar29 + 4);
                              }
                              else if (*(char *)(plVar29 + 0xc) == '\x02') {
                                unaff_x24 = plVar29 + 4;
                                FUN_10a688b40();
                                if (unaff_x24 == (long *)0x0) {
                                  plVar19 = (long *)0x0;
                                  if (plVar28 != (long *)0x0) {
                                    uVar6 = plVar29[4];
                                    uVar7 = plVar29[5];
                                    if (plVar29[5] != 0) {
                                      plVar19 = (long *)(plVar29[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                                        if (bVar10) {
                                          *plVar19 = *plVar19 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    lVar16 = *unaff_x20;
                                    *(undefined8 *)(puVar9 + -0xe8) = 0;
                                    *(long *)(puVar9 + -0xe0) = lVar16;
                                    *(undefined4 *)(puVar9 + -0xd8) =
                                         *(undefined4 *)(puVar9 + -0x1cc);
                                    *(long **)(puVar9 + -0xd0) = unaff_x22;
                                    *(uint *)(puVar9 + -200) = uVar2;
                                    *(code **)(puVar9 + -0xc0) = FUN_10a08869c;
                                    *(undefined ***)(puVar9 + -0xb8) = &PTR_DAT_110b9eae8;
                                    *(undefined8 *)(puVar9 + -0xa8) = uVar7;
                                    *(undefined8 *)(puVar9 + -0xb0) = uVar6;
                                    *(undefined8 *)(puVar9 + -0xf0) = 0;
                                    puVar17 = *(undefined8 **)(puVar9 + -0x1e8);
                                    uVar6 = *puVar17;
                                    unaff_x21 = (long *)(puVar9 + -0xc0);
                                    *(undefined8 *)(puVar9 + -0x98) = puVar17[1];
                                    *(undefined8 *)(puVar9 + -0xa0) = uVar6;
                                    uVar6 = *(undefined8 *)((long)puVar17 + 0xc);
                                    *(undefined8 *)(puVar9 + -0x8c) =
                                         *(undefined8 *)((long)puVar17 + 0x14);
                                    *(undefined8 *)(puVar9 + -0x94) = uVar6;
                                    plVar19 = (long *)(puVar9 + -0xc0);
                                    FUN_10a4634ec(plVar28);
                                    (*(code *)**(undefined8 **)(puVar9 + -0xb8))(puVar9 + -0xb8);
                                  }
                                }
                                else {
                                  *unaff_x24 = CONCAT44((int)((ulong)*unaff_x24 >> 0x20) + 1,
                                                        (int)*unaff_x24 + 1);
                                  plVar19 = unaff_x20;
                                  FUN_10a088490(plVar29[4],unaff_x20,puVar9 + -0x124,puVar9 + -0x130
                                                ,puVar9 + -0x134);
                                  iVar1 = *(int *)((long)unaff_x24 + 4) + -1;
                                  *(int *)((long)unaff_x24 + 4) = iVar1;
                                  if (iVar1 == 0) {
                                    *(undefined4 *)unaff_x24 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03fbc0;
                            }
                          }
                          if ((uVar14 & uVar23) == 0) {
                            uVar26 = uVar26 & uVar23;
                          }
                          else if (uVar14 <= uVar26) {
                            uVar5 = 0;
                            if (uVar14 != 0) {
                              uVar5 = uVar26 / uVar14;
                            }
                            uVar26 = uVar26 - uVar5 * uVar14;
                          }
                        } while (uVar26 == uVar25);
                      }
                    }
LAB_10a03fbc0:
                    plVar28 = plVar19;
                  }
                  unaff_x19 = (long *)(puVar9 + -0x120);
                  func_0x00010a087238();
                  plVar28 = *(long **)(puVar9 + -0x1d8);
                }
                puVar17 = (undefined8 *)(*(long *)(puVar9 + -0x1f0) + 0x18);
              } while (puVar17 != *(undefined8 **)(puVar9 + -0x1f8));
            }
            unaff_x28 = *(undefined8 **)(puVar9 + -0x210);
            unaff_x27 = *(undefined8 **)(puVar9 + -0x208);
            plVar28 = *(long **)(puVar9 + -0x200);
            if (plVar28 != (long *)0x0) {
              plVar29 = plVar28 + 1;
              do {
                lVar27 = *plVar29;
                cVar3 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar10) {
                  *plVar29 = lVar27 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                unaff_x19 = plVar28;
              }
            }
          }
          plVar28 = *(long **)(puVar9 + -0x1a8);
          if (plVar28 != (long *)0x0) {
            plVar29 = plVar28 + 1;
            do {
              lVar27 = *plVar29;
              cVar3 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar10) {
                *plVar29 = lVar27 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar27 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              unaff_x19 = plVar28;
            }
          }
          unaff_x27 = unaff_x27 + 2;
        } while (unaff_x27 != unaff_x28);
      }
      if (puVar9[-0x178] == '\x01') {
        unaff_x19 = (long *)(puVar9 + -400);
        FUN_10a051924();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x80)) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)(puVar9 + -0xb8))(unaff_x23 + 1);
    func_0x00010a004dac(puVar9 + -0x120);
    FUN_10a0871b8(puVar9 + -0xf0);
    FUN_10a0886ec(puVar9 + -0x1b0);
    if (puVar9[-0x178] == '\x01') {
      FUN_10a051924(puVar9 + -400);
    }
    unaff_x30 = FUN_10a040018;
    plVar28 = unaff_x19;
    __Unwind_Resume();
    param_1 = (long *)plVar28[9];
    puVar9 = puVar9 + -0x210;
    if (param_1 == (long *)0x0) {
      return;
    }
  } while( true );
}



/* Entry: 10a040018; end: 10a04003b;  */

void FUN_10a040018(long *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar27;
  long *unaff_x22;
  long *plVar28;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar29 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    plVar10 = (long *)param_1[9];
    if (plVar10 == (long *)0x0) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = (long *)plVar10[0xb];
    unaff_x19 = plVar10;
    if (unaff_x20 != (long *)0x0 && plVar10[8] != plVar10[9]) {
      lVar27 = *(long *)(plVar10[0x17] + 0x850);
      unaff_x21 = plVar10;
      __ZNSt3__16chrono12steady_clock3nowEv();
      unaff_x22 = *(long **)(lVar27 + 0x20);
      FUN_10a05181c((undefined1 *)((long)register0x00000008 + -0xf0),plVar10);
      *(double *)((long)register0x00000008 + -0xb8) =
           (double)(float)((ulong)*(undefined8 *)((long)register0x00000008 + -0xf0) >> 0x20);
      *(double *)((long)register0x00000008 + -0xc0) =
           (double)(float)*(undefined8 *)((long)register0x00000008 + -0xf0);
      *(double *)((long)register0x00000008 + -0xa8) =
           (double)(float)((ulong)*(undefined8 *)((long)register0x00000008 + -0xe8) >> 0x20);
      *(double *)((long)register0x00000008 + -0xb0) =
           (double)(float)*(undefined8 *)((long)register0x00000008 + -0xe8);
      *(double *)((long)register0x00000008 + -0x98) =
           (double)(float)((ulong)*(undefined8 *)((long)register0x00000008 + -0xe0) >> 0x20);
      *(double *)((long)register0x00000008 + -0xa0) =
           (double)(float)*(undefined8 *)((long)register0x00000008 + -0xe0);
      *(double *)((long)register0x00000008 + -0x90) =
           (double)*(float *)((long)register0x00000008 + -0xd8);
      (**(code **)(*unaff_x20 + 0x18))
                ((undefined1 *)((long)register0x00000008 + -0x164),unaff_x20,
                 (long)unaff_x21 - (long)unaff_x22,(undefined1 *)((long)register0x00000008 + -0xc0))
      ;
      unaff_x19 = (long *)plVar10[0xb];
      (**(code **)(*unaff_x19 + 0x20))((undefined1 *)((long)register0x00000008 + -0x1a0));
      unaff_x27 = (undefined8 *)plVar10[8];
      unaff_x28 = (undefined8 *)plVar10[9];
      if (unaff_x27 != unaff_x28) {
        unaff_x25 = 0x9ddfea08eb382d69;
        *(undefined1 **)((long)register0x00000008 + -0x1e8) =
             (undefined1 *)((long)register0x00000008 + -0xe0);
        *(undefined1 **)((long)register0x00000008 + -0x1c8) =
             (undefined1 *)((long)register0x00000008 + -0x110);
        unaff_d8 = 0x100000001;
        *(undefined8 **)((long)register0x00000008 + -0x210) = unaff_x28;
        do {
          unaff_x26 = (long *)*unaff_x27;
          lVar27 = unaff_x27[1];
          *(long **)((long)register0x00000008 + -0x1b0) = unaff_x26;
          *(long *)((long)register0x00000008 + -0x1a8) = lVar27;
          if (lVar27 != 0) {
            plVar10 = (long *)(lVar27 + 8);
            do {
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar9) {
                *plVar10 = *plVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (*(char *)((long)register0x00000008 + -0x138) == '\x01') {
            cVar3 = *(char *)((long)register0x00000008 + -0x164);
            *(char *)((long)register0x00000008 + -0xc0) = cVar3;
            if ((char)unaff_x26[3] != cVar3) {
              *(char *)(unaff_x26 + 3) = cVar3;
              unaff_x19 = (long *)unaff_x26[9];
              FUN_10a03dff0(unaff_x19,(undefined1 *)((long)register0x00000008 + -0xc0));
            }
            if ((cVar3 != '\0') && (*(int *)(unaff_x26[7] + 0x30) != 0)) {
              if ((*(byte *)((long)register0x00000008 + -0x138) & 1) == 0) goto LAB_10a03fd54;
              if (*(char *)((long)register0x00000008 + -0x13c) == '\x01') {
                iVar1 = *(int *)((long)register0x00000008 + -0x140);
                *(int *)((long)register0x00000008 + -0x130) = iVar1;
                if ((int)unaff_x26[6] != iVar1) {
                  *(int *)(unaff_x26 + 6) = iVar1;
                  *(long **)((long)register0x00000008 + -0x1e0) = unaff_x26;
                  lVar27 = unaff_x26[0xb];
                  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                  *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(lVar27 + 0x38)
                  ;
                  puVar11 = *(undefined1 **)(lVar27 + 0x20);
                  FUN_10a086718((undefined1 *)((long)register0x00000008 + -0xf0));
                  for (plVar10 = *(long **)(lVar27 + 0x28); plVar10 != (long *)0x0;
                      plVar10 = (long *)*plVar10) {
                    uVar14 = plVar10[2];
                    uVar18 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar18 = (uVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
                    unaff_x24 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
                    plVar28 = *(long **)((long)register0x00000008 + -0xe8);
                    if (plVar28 != (long *)0x0) {
                      uVar18 = (long)plVar28 - 1;
                      if (((ulong)plVar28 & uVar18) == 0) {
                        unaff_x26 = (long *)((ulong)unaff_x24 & uVar18);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar28 <= unaff_x24) {
                          uVar22 = 0;
                          if (plVar28 != (long *)0x0) {
                            uVar22 = (ulong)unaff_x24 / (ulong)plVar28;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar22 * (long)plVar28);
                        }
                      }
                      plVar19 = *(long **)(*(long *)((long)register0x00000008 + -0xf0) +
                                          (long)unaff_x26 * 8);
                      if (plVar19 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar19 = (long *)*plVar19;
                            if (plVar19 == (long *)0x0) goto LAB_10a03e77c;
                            plVar21 = (long *)plVar19[1];
                            if (plVar21 != unaff_x24) break;
                            if (plVar19[2] == uVar14) goto LAB_10a03e8e4;
                          }
                          if (((ulong)plVar28 & uVar18) == 0) {
                            plVar21 = (long *)((ulong)plVar21 & uVar18);
                          }
                          else if (plVar28 <= plVar21) {
                            uVar22 = 0;
                            if (plVar28 != (long *)0x0) {
                              uVar22 = (ulong)plVar21 / (ulong)plVar28;
                            }
                            plVar21 = (long *)((long)plVar21 - uVar22 * (long)plVar28);
                          }
                        } while (plVar21 == unaff_x26);
                      }
                    }
LAB_10a03e77c:
                    unaff_x20 = (long *)0x68;
                    __Znwm();
                    *unaff_x20 = 0;
                    unaff_x20[1] = (long)unaff_x24;
                    lVar15 = plVar10[3];
                    lVar16 = plVar10[2];
                    unaff_x20[3] = plVar10[3];
                    unaff_x20[2] = lVar16;
                    if (lVar15 != 0) {
                      plVar19 = (long *)(lVar15 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar9) {
                          *plVar19 = *plVar19 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = 3;
                    *(long **)((long)register0x00000008 + -0xc0) = unaff_x20 + 4;
                    if (*(char *)(plVar10 + 0xc) == '\0') {
                      uVar13 = 0;
                    }
                    else {
                      puVar11 = (undefined1 *)(plVar10 + 4);
                      FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0));
                      uVar13 = *(undefined1 *)(plVar10 + 0xc);
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = uVar13;
                    if ((plVar28 == (long *)0x0) ||
                       (*(float *)((long)register0x00000008 + -0xd0) * (float)plVar28 <
                        (float)(*(long *)((long)register0x00000008 + -0xd8) + 1))) {
                      uVar14 = 1;
                      if ((long *)0x2 < plVar28) {
                        uVar14 = (ulong)(((ulong)plVar28 & (long)plVar28 - 1U) != 0);
                      }
                      puVar11 = (undefined1 *)(uVar14 | (long)plVar28 << 1);
                      puVar12 = (undefined1 *)
                                (long)((float)(*(long *)((long)register0x00000008 + -0xd8) + 1) /
                                      *(float *)((long)register0x00000008 + -0xd0));
                      if (puVar11 <= puVar12) {
                        puVar11 = puVar12;
                      }
                      FUN_10a086718((undefined1 *)((long)register0x00000008 + -0xf0));
                      plVar28 = *(long **)((long)register0x00000008 + -0xe8);
                      if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
                        unaff_x26 = (long *)((long)plVar28 - 1U & (ulong)unaff_x24);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar28 <= unaff_x24) {
                          uVar14 = 0;
                          if (plVar28 != (long *)0x0) {
                            uVar14 = (ulong)unaff_x24 / (ulong)plVar28;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar14 * (long)plVar28);
                        }
                      }
                    }
                    lVar16 = *(long *)((long)register0x00000008 + -0xf0);
                    plVar19 = *(long **)(lVar16 + (long)unaff_x26 * 8);
                    if (plVar19 == (long *)0x0) {
                      *unaff_x20 = *(long *)((long)register0x00000008 + -0xe0);
                      *(long **)((long)register0x00000008 + -0xe0) = unaff_x20;
                      *(undefined8 *)(lVar16 + (long)unaff_x26 * 8) =
                           *(undefined8 *)((long)register0x00000008 + -0x1e8);
                      if (*unaff_x20 != 0) {
                        plVar19 = *(long **)(*unaff_x20 + 8);
                        if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
                          plVar19 = (long *)((ulong)plVar19 & (long)plVar28 - 1U);
                        }
                        else if (plVar28 <= plVar19) {
                          uVar14 = 0;
                          if (plVar28 != (long *)0x0) {
                            uVar14 = (ulong)plVar19 / (ulong)plVar28;
                          }
                          plVar19 = (long *)((long)plVar19 - uVar14 * (long)plVar28);
                        }
                        *(long **)(*(long *)((long)register0x00000008 + -0xf0) + (long)plVar19 * 8)
                             = unaff_x20;
                      }
                    }
                    else {
                      *unaff_x20 = *plVar19;
                      *plVar19 = (long)unaff_x20;
                    }
                    *(long *)((long)register0x00000008 + -0xd8) =
                         *(long *)((long)register0x00000008 + -0xd8) + 1;
LAB_10a03e8e4:
                  }
                  unaff_x23 = (long *)((long)register0x00000008 + -0xc0);
                  unaff_x26 = *(long **)((long)register0x00000008 + -0x1e0);
                  for (plVar10 = *(long **)((long)register0x00000008 + -0xe0);
                      plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
                    uVar14 = *(ulong *)(lVar27 + 0x20);
                    puVar12 = puVar11;
                    if (uVar14 != 0) {
                      uVar18 = plVar10[2];
                      uVar22 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar22 = (uVar18 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                      uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                      uVar23 = uVar14 - 1;
                      if ((uVar14 & uVar23) == 0) {
                        uVar25 = uVar22 & uVar23;
                      }
                      else {
                        uVar25 = uVar22;
                        if (uVar14 <= uVar22) {
                          uVar25 = 0;
                          if (uVar14 != 0) {
                            uVar25 = uVar22 / uVar14;
                          }
                          uVar25 = uVar22 - uVar25 * uVar14;
                        }
                      }
                      plVar28 = *(long **)(*(long *)(lVar27 + 0x18) + uVar25 * 8);
                      if (plVar28 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar28 = (long *)*plVar28;
                            if (plVar28 == (long *)0x0) goto LAB_10a03ea18;
                            uVar26 = plVar28[1];
                            if (uVar26 != uVar22) break;
                            if (plVar28[2] == uVar18) {
                              if (*(char *)(plVar10 + 0xc) == '\x01') {
                                puVar12 = (undefined1 *)(plVar10 + 4);
                                (*(code *)plVar10[4])(iVar1);
                              }
                              else if (*(char *)(plVar10 + 0xc) == '\x02') {
                                unaff_x20 = plVar10 + 4;
                                FUN_10a688b40();
                                if (unaff_x20 == (long *)0x0) {
                                  puVar12 = (undefined1 *)0x0;
                                  if (puVar11 != (undefined1 *)0x0) {
                                    uVar6 = plVar10[4];
                                    uVar7 = plVar10[5];
                                    if (plVar10[5] != 0) {
                                      plVar28 = (long *)(plVar10[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                                        if (bVar9) {
                                          *plVar28 = *plVar28 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    *(int *)((long)register0x00000008 + -0x110) = iVar1;
                                    *(code **)((long)register0x00000008 + -0xc0) = FUN_10a087624;
                                    *(undefined ***)((long)register0x00000008 + -0xb8) =
                                         &PTR_DAT_110b9ea88;
                                    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar7;
                                    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
                                    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
                                    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
                                    *(int *)((long)register0x00000008 + -0xa0) = iVar1;
                                    puVar12 = (undefined1 *)((long)register0x00000008 + -0xc0);
                                    FUN_10a4634ec(puVar11);
                                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                                              ((undefined1 *)((long)register0x00000008 + -0xb8));
                                  }
                                }
                                else {
                                  *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                        (int)*unaff_x20 + 1);
                                  puVar12 = (undefined1 *)((long)register0x00000008 + -0x130);
                                  FUN_10a087490(plVar10[4]);
                                  iVar4 = *(int *)((long)unaff_x20 + 4) + -1;
                                  *(int *)((long)unaff_x20 + 4) = iVar4;
                                  if (iVar4 == 0) {
                                    *(undefined4 *)unaff_x20 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03ea18;
                            }
                          }
                          if ((uVar14 & uVar23) == 0) {
                            uVar26 = uVar26 & uVar23;
                          }
                          else if (uVar14 <= uVar26) {
                            uVar5 = 0;
                            if (uVar14 != 0) {
                              uVar5 = uVar26 / uVar14;
                            }
                            uVar26 = uVar26 - uVar5 * uVar14;
                          }
                        } while (uVar26 == uVar25);
                      }
                    }
LAB_10a03ea18:
                    puVar11 = puVar12;
                  }
                  unaff_x22 = (long *)0x0;
                  unaff_x19 = (long *)((long)register0x00000008 + -0xf0);
                  FUN_10a0871b8();
                  if ((*(byte *)((long)register0x00000008 + -0x13c) & 1) == 0) goto LAB_10a03fd54;
                }
                if (((((*(float *)((long)unaff_x26 + 0xbc) !=
                        *(float *)((long)register0x00000008 + -0x160)) ||
                      (*(float *)(unaff_x26 + 0x18) != *(float *)((long)register0x00000008 + -0x15c)
                      )) || (*(float *)((long)unaff_x26 + 0xc4) !=
                             *(float *)((long)register0x00000008 + -0x158))) ||
                    ((*(float *)(unaff_x26 + 0x19) != *(float *)((long)register0x00000008 + -0x154)
                     || (*(float *)((long)unaff_x26 + 0xcc) !=
                         *(float *)((long)register0x00000008 + -0x150))))) ||
                   ((*(float *)(unaff_x26 + 0x1a) != *(float *)((long)register0x00000008 + -0x14c)
                    || (*(float *)((long)unaff_x26 + 0xd4) !=
                        *(float *)((long)register0x00000008 + -0x148))))) {
                  *(undefined8 *)((long)unaff_x26 + 0xbc) =
                       *(undefined8 *)((long)register0x00000008 + -0x160);
                  *(undefined4 *)((long)unaff_x26 + 0xc4) =
                       *(undefined4 *)((long)register0x00000008 + -0x158);
                  lVar27 = *(long *)((long)register0x00000008 + -0x154);
                  unaff_x26[0x1a] = *(long *)((long)register0x00000008 + -0x14c);
                  unaff_x26[0x19] = lVar27;
                  lVar27 = unaff_x26[0x13];
                  *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
                  *(undefined4 *)((long)register0x00000008 + -0x100) =
                       *(undefined4 *)(lVar27 + 0x38);
                  puVar11 = *(undefined1 **)(lVar27 + 0x20);
                  FUN_10a086f98((undefined1 *)((long)register0x00000008 + -0x120));
                  for (plVar10 = *(long **)(lVar27 + 0x28); plVar10 != (long *)0x0;
                      plVar10 = (long *)*plVar10) {
                    uVar14 = plVar10[2];
                    uVar18 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar18 = (uVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
                    unaff_x23 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
                    plVar28 = *(long **)((long)register0x00000008 + -0x118);
                    if (plVar28 != (long *)0x0) {
                      uVar18 = (long)plVar28 - 1;
                      if (((ulong)plVar28 & uVar18) == 0) {
                        unaff_x24 = (long *)((ulong)unaff_x23 & uVar18);
                      }
                      else {
                        unaff_x24 = unaff_x23;
                        if (plVar28 <= unaff_x23) {
                          uVar22 = 0;
                          if (plVar28 != (long *)0x0) {
                            uVar22 = (ulong)unaff_x23 / (ulong)plVar28;
                          }
                          unaff_x24 = (long *)((long)unaff_x23 - uVar22 * (long)plVar28);
                        }
                      }
                      plVar19 = *(long **)(*(long *)((long)register0x00000008 + -0x120) +
                                          (long)unaff_x24 * 8);
                      if (plVar19 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar19 = (long *)*plVar19;
                            if (plVar19 == (long *)0x0) goto LAB_10a03ec08;
                            plVar21 = (long *)plVar19[1];
                            if (plVar21 != unaff_x23) break;
                            if (plVar19[2] == uVar14) goto LAB_10a03ed70;
                          }
                          if (((ulong)plVar28 & uVar18) == 0) {
                            plVar21 = (long *)((ulong)plVar21 & uVar18);
                          }
                          else if (plVar28 <= plVar21) {
                            uVar22 = 0;
                            if (plVar28 != (long *)0x0) {
                              uVar22 = (ulong)plVar21 / (ulong)plVar28;
                            }
                            plVar21 = (long *)((long)plVar21 - uVar22 * (long)plVar28);
                          }
                        } while (plVar21 == unaff_x24);
                      }
                    }
LAB_10a03ec08:
                    unaff_x20 = (long *)0x68;
                    __Znwm();
                    *unaff_x20 = 0;
                    unaff_x20[1] = (long)unaff_x23;
                    lVar15 = plVar10[3];
                    lVar16 = plVar10[2];
                    unaff_x20[3] = plVar10[3];
                    unaff_x20[2] = lVar16;
                    if (lVar15 != 0) {
                      plVar19 = (long *)(lVar15 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar9) {
                          *plVar19 = *plVar19 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = 3;
                    *(long **)((long)register0x00000008 + -0xc0) = unaff_x20 + 4;
                    if (*(char *)(plVar10 + 0xc) == '\0') {
                      uVar13 = 0;
                    }
                    else {
                      puVar11 = (undefined1 *)(plVar10 + 4);
                      FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0));
                      uVar13 = *(undefined1 *)(plVar10 + 0xc);
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = uVar13;
                    if ((plVar28 == (long *)0x0) ||
                       (*(float *)((long)register0x00000008 + -0x100) * (float)plVar28 <
                        (float)(*(long *)((long)register0x00000008 + -0x108) + 1))) {
                      uVar14 = 1;
                      if ((long *)0x2 < plVar28) {
                        uVar14 = (ulong)(((ulong)plVar28 & (long)plVar28 - 1U) != 0);
                      }
                      puVar11 = (undefined1 *)(uVar14 | (long)plVar28 << 1);
                      puVar12 = (undefined1 *)
                                (long)((float)(*(long *)((long)register0x00000008 + -0x108) + 1) /
                                      *(float *)((long)register0x00000008 + -0x100));
                      if (puVar11 <= puVar12) {
                        puVar11 = puVar12;
                      }
                      FUN_10a086f98((undefined1 *)((long)register0x00000008 + -0x120));
                      plVar28 = *(long **)((long)register0x00000008 + -0x118);
                      if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
                        unaff_x24 = (long *)((long)plVar28 - 1U & (ulong)unaff_x23);
                      }
                      else {
                        unaff_x24 = unaff_x23;
                        if (plVar28 <= unaff_x23) {
                          uVar14 = 0;
                          if (plVar28 != (long *)0x0) {
                            uVar14 = (ulong)unaff_x23 / (ulong)plVar28;
                          }
                          unaff_x24 = (long *)((long)unaff_x23 - uVar14 * (long)plVar28);
                        }
                      }
                    }
                    lVar16 = *(long *)((long)register0x00000008 + -0x120);
                    plVar19 = *(long **)(lVar16 + (long)unaff_x24 * 8);
                    if (plVar19 == (long *)0x0) {
                      *unaff_x20 = *(long *)((long)register0x00000008 + -0x110);
                      *(long **)((long)register0x00000008 + -0x110) = unaff_x20;
                      *(undefined8 *)(lVar16 + (long)unaff_x24 * 8) =
                           *(undefined8 *)((long)register0x00000008 + -0x1c8);
                      if (*unaff_x20 != 0) {
                        plVar19 = *(long **)(*unaff_x20 + 8);
                        if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
                          plVar19 = (long *)((ulong)plVar19 & (long)plVar28 - 1U);
                        }
                        else if (plVar28 <= plVar19) {
                          uVar14 = 0;
                          if (plVar28 != (long *)0x0) {
                            uVar14 = (ulong)plVar19 / (ulong)plVar28;
                          }
                          plVar19 = (long *)((long)plVar19 - uVar14 * (long)plVar28);
                        }
                        *(long **)(*(long *)((long)register0x00000008 + -0x120) + (long)plVar19 * 8)
                             = unaff_x20;
                      }
                    }
                    else {
                      *unaff_x20 = *plVar19;
                      *plVar19 = (long)unaff_x20;
                    }
                    *(long *)((long)register0x00000008 + -0x108) =
                         *(long *)((long)register0x00000008 + -0x108) + 1;
LAB_10a03ed70:
                  }
                  unaff_x22 = (long *)((long)register0x00000008 + -0xc0);
                  for (plVar10 = *(long **)((long)register0x00000008 + -0x110);
                      plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
                    uVar14 = *(ulong *)(lVar27 + 0x20);
                    puVar12 = puVar11;
                    if (uVar14 != 0) {
                      uVar18 = plVar10[2];
                      uVar22 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar22 = (uVar18 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                      uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                      uVar23 = uVar14 - 1;
                      if ((uVar14 & uVar23) == 0) {
                        uVar25 = uVar22 & uVar23;
                      }
                      else {
                        uVar25 = uVar22;
                        if (uVar14 <= uVar22) {
                          uVar25 = 0;
                          if (uVar14 != 0) {
                            uVar25 = uVar22 / uVar14;
                          }
                          uVar25 = uVar22 - uVar25 * uVar14;
                        }
                      }
                      plVar28 = *(long **)(*(long *)(lVar27 + 0x18) + uVar25 * 8);
                      if (plVar28 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar28 = (long *)*plVar28;
                            if (plVar28 == (long *)0x0) goto LAB_10a03eeb4;
                            uVar26 = plVar28[1];
                            if (uVar26 != uVar22) break;
                            if (plVar28[2] == uVar18) {
                              if (*(char *)(plVar10 + 0xc) == '\x01') {
                                (*(code *)plVar10[4])
                                          (*(undefined4 *)((long)register0x00000008 + -0x160),
                                           *(undefined4 *)((long)register0x00000008 + -0x15c),
                                           *(undefined4 *)((long)register0x00000008 + -0x158),
                                           *(undefined4 *)((long)register0x00000008 + -0x154),
                                           *(undefined4 *)((long)register0x00000008 + -0x150),
                                           *(undefined4 *)((long)register0x00000008 + -0x14c),
                                           *(undefined4 *)((long)register0x00000008 + -0x148),
                                           plVar10 + 4);
                                puVar12 = puVar11;
                              }
                              else if (*(char *)(plVar10 + 0xc) == '\x02') {
                                unaff_x20 = plVar10 + 4;
                                FUN_10a688b40();
                                if (unaff_x20 == (long *)0x0) {
                                  puVar12 = (undefined1 *)0x0;
                                  if (puVar11 != (undefined1 *)0x0) {
                                    uVar6 = plVar10[4];
                                    uVar7 = plVar10[5];
                                    if (plVar10[5] != 0) {
                                      plVar28 = (long *)(plVar10[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                                        if (bVar9) {
                                          *plVar28 = *plVar28 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    puVar17 = *(undefined8 **)((long)register0x00000008 + -0x1e8);
                                    *puVar17 = *(undefined8 *)((long)register0x00000008 + -0x160);
                                    *(undefined4 *)(puVar17 + 1) =
                                         *(undefined4 *)((long)register0x00000008 + -0x158);
                                    *(undefined8 *)((long)register0x00000008 + -0xcc) =
                                         *(undefined8 *)((long)register0x00000008 + -0x14c);
                                    *(undefined8 *)((long)register0x00000008 + -0xd4) =
                                         *(undefined8 *)((long)register0x00000008 + -0x154);
                                    *(code **)((long)register0x00000008 + -0xc0) = FUN_10a088278;
                                    *(undefined ***)((long)register0x00000008 + -0xb8) =
                                         &PTR_DAT_110b9eab8;
                                    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar7;
                                    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
                                    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
                                    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
                                    uVar6 = *puVar17;
                                    *(undefined8 *)((long)register0x00000008 + -0x98) = puVar17[1];
                                    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar6;
                                    uVar6 = *(undefined8 *)((long)puVar17 + 0xc);
                                    *(undefined8 *)((long)register0x00000008 + -0x8c) =
                                         *(undefined8 *)((long)puVar17 + 0x14);
                                    *(undefined8 *)((long)register0x00000008 + -0x94) = uVar6;
                                    puVar12 = (undefined1 *)((long)register0x00000008 + -0xc0);
                                    FUN_10a4634ec(puVar11);
                                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                                              ((undefined1 *)((long)register0x00000008 + -0xb8));
                                  }
                                }
                                else {
                                  *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                        (int)*unaff_x20 + 1);
                                  puVar12 = (undefined1 *)((long)register0x00000008 + -0x160);
                                  FUN_10a087fe0(plVar10[4],puVar12,
                                                (undefined1 *)((long)register0x00000008 + -0x154));
                                  iVar1 = *(int *)((long)unaff_x20 + 4) + -1;
                                  *(int *)((long)unaff_x20 + 4) = iVar1;
                                  if (iVar1 == 0) {
                                    *(undefined4 *)unaff_x20 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03eeb4;
                            }
                          }
                          if ((uVar14 & uVar23) == 0) {
                            uVar26 = uVar26 & uVar23;
                          }
                          else if (uVar14 <= uVar26) {
                            uVar5 = 0;
                            if (uVar14 != 0) {
                              uVar5 = uVar26 / uVar14;
                            }
                            uVar26 = uVar26 - uVar5 * uVar14;
                          }
                        } while (uVar26 == uVar25);
                      }
                    }
LAB_10a03eeb4:
                    puVar11 = puVar12;
                  }
                  unaff_x19 = (long *)((long)register0x00000008 + -0x120);
                  func_0x00010a0873b8();
                  if ((*(byte *)((long)register0x00000008 + -0x13c) & 1) == 0) goto LAB_10a03fd54;
                }
                uVar2 = *(uint *)((long)register0x00000008 + -0x144);
                unaff_x21 = (long *)(ulong)uVar2;
                *(uint *)((long)register0x00000008 + -0x130) = uVar2;
                if (*(uint *)(unaff_x26 + 0x17) != uVar2) {
                  *(uint *)(unaff_x26 + 0x17) = uVar2;
                  lVar27 = unaff_x26[0x11];
                  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                  *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(lVar27 + 0x38)
                  ;
                  puVar11 = *(undefined1 **)(lVar27 + 0x20);
                  FUN_10a086d78((undefined1 *)((long)register0x00000008 + -0xf0));
                  for (plVar10 = *(long **)(lVar27 + 0x28); plVar10 != (long *)0x0;
                      plVar10 = (long *)*plVar10) {
                    uVar14 = plVar10[2];
                    uVar18 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar18 = (uVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
                    unaff_x24 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
                    plVar28 = *(long **)((long)register0x00000008 + -0xe8);
                    if (plVar28 != (long *)0x0) {
                      uVar18 = (long)plVar28 - 1;
                      if (((ulong)plVar28 & uVar18) == 0) {
                        unaff_x26 = (long *)((ulong)unaff_x24 & uVar18);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar28 <= unaff_x24) {
                          uVar22 = 0;
                          if (plVar28 != (long *)0x0) {
                            uVar22 = (ulong)unaff_x24 / (ulong)plVar28;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar22 * (long)plVar28);
                        }
                      }
                      plVar19 = *(long **)(*(long *)((long)register0x00000008 + -0xf0) +
                                          (long)unaff_x26 * 8);
                      if (plVar19 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar19 = (long *)*plVar19;
                            if (plVar19 == (long *)0x0) goto LAB_10a03f058;
                            plVar21 = (long *)plVar19[1];
                            if (plVar21 != unaff_x24) break;
                            if (plVar19[2] == uVar14) goto LAB_10a03f1c0;
                          }
                          if (((ulong)plVar28 & uVar18) == 0) {
                            plVar21 = (long *)((ulong)plVar21 & uVar18);
                          }
                          else if (plVar28 <= plVar21) {
                            uVar22 = 0;
                            if (plVar28 != (long *)0x0) {
                              uVar22 = (ulong)plVar21 / (ulong)plVar28;
                            }
                            plVar21 = (long *)((long)plVar21 - uVar22 * (long)plVar28);
                          }
                        } while (plVar21 == unaff_x26);
                      }
                    }
LAB_10a03f058:
                    unaff_x20 = (long *)0x68;
                    __Znwm();
                    *unaff_x20 = 0;
                    unaff_x20[1] = (long)unaff_x24;
                    lVar15 = plVar10[3];
                    lVar16 = plVar10[2];
                    unaff_x20[3] = plVar10[3];
                    unaff_x20[2] = lVar16;
                    if (lVar15 != 0) {
                      plVar19 = (long *)(lVar15 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar9) {
                          *plVar19 = *plVar19 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = 3;
                    *(long **)((long)register0x00000008 + -0xc0) = unaff_x20 + 4;
                    if (*(char *)(plVar10 + 0xc) == '\0') {
                      uVar13 = 0;
                    }
                    else {
                      puVar11 = (undefined1 *)(plVar10 + 4);
                      FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0));
                      uVar13 = *(undefined1 *)(plVar10 + 0xc);
                    }
                    *(undefined1 *)(unaff_x20 + 0xc) = uVar13;
                    if ((plVar28 == (long *)0x0) ||
                       (*(float *)((long)register0x00000008 + -0xd0) * (float)plVar28 <
                        (float)(*(long *)((long)register0x00000008 + -0xd8) + 1))) {
                      uVar14 = 1;
                      if ((long *)0x2 < plVar28) {
                        uVar14 = (ulong)(((ulong)plVar28 & (long)plVar28 - 1U) != 0);
                      }
                      puVar11 = (undefined1 *)(uVar14 | (long)plVar28 << 1);
                      puVar12 = (undefined1 *)
                                (long)((float)(*(long *)((long)register0x00000008 + -0xd8) + 1) /
                                      *(float *)((long)register0x00000008 + -0xd0));
                      if (puVar11 <= puVar12) {
                        puVar11 = puVar12;
                      }
                      FUN_10a086d78((undefined1 *)((long)register0x00000008 + -0xf0));
                      plVar28 = *(long **)((long)register0x00000008 + -0xe8);
                      if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
                        unaff_x26 = (long *)((long)plVar28 - 1U & (ulong)unaff_x24);
                      }
                      else {
                        unaff_x26 = unaff_x24;
                        if (plVar28 <= unaff_x24) {
                          uVar14 = 0;
                          if (plVar28 != (long *)0x0) {
                            uVar14 = (ulong)unaff_x24 / (ulong)plVar28;
                          }
                          unaff_x26 = (long *)((long)unaff_x24 - uVar14 * (long)plVar28);
                        }
                      }
                    }
                    lVar16 = *(long *)((long)register0x00000008 + -0xf0);
                    plVar19 = *(long **)(lVar16 + (long)unaff_x26 * 8);
                    if (plVar19 == (long *)0x0) {
                      *unaff_x20 = *(long *)((long)register0x00000008 + -0xe0);
                      *(long **)((long)register0x00000008 + -0xe0) = unaff_x20;
                      *(undefined8 *)(lVar16 + (long)unaff_x26 * 8) =
                           *(undefined8 *)((long)register0x00000008 + -0x1e8);
                      if (*unaff_x20 != 0) {
                        plVar19 = *(long **)(*unaff_x20 + 8);
                        if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
                          plVar19 = (long *)((ulong)plVar19 & (long)plVar28 - 1U);
                        }
                        else if (plVar28 <= plVar19) {
                          uVar14 = 0;
                          if (plVar28 != (long *)0x0) {
                            uVar14 = (ulong)plVar19 / (ulong)plVar28;
                          }
                          plVar19 = (long *)((long)plVar19 - uVar14 * (long)plVar28);
                        }
                        *(long **)(*(long *)((long)register0x00000008 + -0xf0) + (long)plVar19 * 8)
                             = unaff_x20;
                      }
                    }
                    else {
                      *unaff_x20 = *plVar19;
                      *plVar19 = (long)unaff_x20;
                    }
                    *(long *)((long)register0x00000008 + -0xd8) =
                         *(long *)((long)register0x00000008 + -0xd8) + 1;
LAB_10a03f1c0:
                  }
                  unaff_x23 = (long *)((long)register0x00000008 + -0xc0);
                  for (plVar10 = *(long **)((long)register0x00000008 + -0xe0);
                      plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
                    uVar14 = *(ulong *)(lVar27 + 0x20);
                    puVar12 = puVar11;
                    if (uVar14 != 0) {
                      uVar18 = plVar10[2];
                      uVar22 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar22 = (uVar18 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                      uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                      uVar23 = uVar14 - 1;
                      if ((uVar14 & uVar23) == 0) {
                        uVar25 = uVar22 & uVar23;
                      }
                      else {
                        uVar25 = uVar22;
                        if (uVar14 <= uVar22) {
                          uVar25 = 0;
                          if (uVar14 != 0) {
                            uVar25 = uVar22 / uVar14;
                          }
                          uVar25 = uVar22 - uVar25 * uVar14;
                        }
                      }
                      plVar28 = *(long **)(*(long *)(lVar27 + 0x18) + uVar25 * 8);
                      if (plVar28 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar28 = (long *)*plVar28;
                            if (plVar28 == (long *)0x0) goto LAB_10a03f2f0;
                            uVar26 = plVar28[1];
                            if (uVar26 != uVar22) break;
                            if (plVar28[2] == uVar18) {
                              if (*(char *)(plVar10 + 0xc) == '\x01') {
                                puVar12 = (undefined1 *)(plVar10 + 4);
                                (*(code *)plVar10[4])(unaff_x21);
                              }
                              else if (*(char *)(plVar10 + 0xc) == '\x02') {
                                unaff_x20 = plVar10 + 4;
                                FUN_10a688b40();
                                if (unaff_x20 == (long *)0x0) {
                                  puVar12 = (undefined1 *)0x0;
                                  if (puVar11 != (undefined1 *)0x0) {
                                    uVar6 = plVar10[4];
                                    uVar7 = plVar10[5];
                                    if (plVar10[5] != 0) {
                                      plVar28 = (long *)(plVar10[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                                        if (bVar9) {
                                          *plVar28 = *plVar28 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    *(uint *)((long)register0x00000008 + -0x110) = uVar2;
                                    *(code **)((long)register0x00000008 + -0xc0) = FUN_10a088454;
                                    *(undefined ***)((long)register0x00000008 + -0xb8) =
                                         &PTR_DAT_110b9ead0;
                                    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar7;
                                    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
                                    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
                                    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
                                    *(uint *)((long)register0x00000008 + -0xa0) = uVar2;
                                    puVar12 = (undefined1 *)((long)register0x00000008 + -0xc0);
                                    FUN_10a4634ec(puVar11);
                                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                                              ((undefined1 *)((long)register0x00000008 + -0xb8));
                                  }
                                }
                                else {
                                  *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                        (int)*unaff_x20 + 1);
                                  puVar12 = (undefined1 *)((long)register0x00000008 + -0x130);
                                  FUN_10a0882c0(plVar10[4]);
                                  iVar1 = *(int *)((long)unaff_x20 + 4) + -1;
                                  *(int *)((long)unaff_x20 + 4) = iVar1;
                                  if (iVar1 == 0) {
                                    *(undefined4 *)unaff_x20 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03f2f0;
                            }
                          }
                          if ((uVar14 & uVar23) == 0) {
                            uVar26 = uVar26 & uVar23;
                          }
                          else if (uVar14 <= uVar26) {
                            uVar5 = 0;
                            if (uVar14 != 0) {
                              uVar5 = uVar26 / uVar14;
                            }
                            uVar26 = uVar26 - uVar5 * uVar14;
                          }
                        } while (uVar26 == uVar25);
                      }
                    }
LAB_10a03f2f0:
                    puVar11 = puVar12;
                  }
                  unaff_x22 = (long *)0x0;
                  unaff_x19 = (long *)((long)register0x00000008 + -0xf0);
                  func_0x00010a087338();
                }
                unaff_x26 = *(long **)((long)register0x00000008 + -0x1b0);
              }
            }
          }
          if (((char)unaff_x26[3] == '\x01') &&
             ((*(byte *)((long)register0x00000008 + -0x178) & 1) != 0)) {
            lVar27 = *(long *)((long)register0x00000008 + -0x1a8);
            *(long **)((long)register0x00000008 + -0x1c0) = unaff_x26;
            *(long *)((long)register0x00000008 + -0x1b8) = lVar27;
            if (lVar27 != 0) {
              plVar10 = (long *)(lVar27 + 8);
              do {
                cVar3 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar9) {
                  *plVar10 = *plVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((*(byte *)((long)register0x00000008 + -0x178) & 1) == 0) {
LAB_10a03fd54:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10a03fd58);
                (*pcVar8)();
              }
            }
            *(long *)((long)register0x00000008 + -0x200) = lVar27;
            bVar9 = false;
            if ((*(float *)(unaff_x26 + 0x16) == *(float *)((long)register0x00000008 + -0x1a0)) &&
               (bVar9 = false,
               !NAN(*(float *)((long)unaff_x26 + 0xb4)) &&
               !NAN(*(float *)((long)register0x00000008 + -0x19c)))) {
              bVar9 = *(float *)((long)unaff_x26 + 0xb4) ==
                      *(float *)((long)register0x00000008 + -0x19c);
            }
            if (bVar9) {
              bVar9 = false;
              if ((*(float *)(unaff_x26 + 0x15) == *(float *)((long)register0x00000008 + -0x198)) &&
                 (bVar9 = false,
                 !NAN(*(float *)((long)unaff_x26 + 0xac)) &&
                 !NAN(*(float *)((long)register0x00000008 + -0x194)))) {
                bVar9 = *(float *)((long)unaff_x26 + 0xac) ==
                        *(float *)((long)register0x00000008 + -0x194);
              }
              if (!bVar9) goto LAB_10a03f3d8;
            }
            else {
LAB_10a03f3d8:
              auVar29 = NEON_ext(*(undefined1 (*) [16])((long)register0x00000008 + -0x1a0),
                                 *(undefined1 (*) [16])((long)register0x00000008 + -0x1a0),8,1);
              unaff_x26[0x16] = auVar29._8_8_;
              unaff_x26[0x15] = auVar29._0_8_;
              lVar27 = unaff_x26[0xf];
              *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
              *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(lVar27 + 0x38);
              puVar11 = *(undefined1 **)(lVar27 + 0x20);
              FUN_10a086b58((undefined1 *)((long)register0x00000008 + -0xf0));
              for (plVar10 = *(long **)(lVar27 + 0x28); plVar10 != (long *)0x0;
                  plVar10 = (long *)*plVar10) {
                uVar14 = plVar10[2];
                uVar18 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) *
                         -0x622015f714c7d297;
                uVar18 = (uVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
                unaff_x23 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
                plVar28 = *(long **)((long)register0x00000008 + -0xe8);
                if (plVar28 != (long *)0x0) {
                  uVar18 = (long)plVar28 - 1;
                  if (((ulong)plVar28 & uVar18) == 0) {
                    unaff_x24 = (long *)((ulong)unaff_x23 & uVar18);
                  }
                  else {
                    unaff_x24 = unaff_x23;
                    if (plVar28 <= unaff_x23) {
                      uVar22 = 0;
                      if (plVar28 != (long *)0x0) {
                        uVar22 = (ulong)unaff_x23 / (ulong)plVar28;
                      }
                      unaff_x24 = (long *)((long)unaff_x23 - uVar22 * (long)plVar28);
                    }
                  }
                  plVar19 = *(long **)(*(long *)((long)register0x00000008 + -0xf0) +
                                      (long)unaff_x24 * 8);
                  if (plVar19 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar19 = (long *)*plVar19;
                        if (plVar19 == (long *)0x0) goto LAB_10a03f4c0;
                        plVar21 = (long *)plVar19[1];
                        if (plVar21 != unaff_x23) break;
                        if (plVar19[2] == uVar14) goto LAB_10a03f628;
                      }
                      if (((ulong)plVar28 & uVar18) == 0) {
                        plVar21 = (long *)((ulong)plVar21 & uVar18);
                      }
                      else if (plVar28 <= plVar21) {
                        uVar22 = 0;
                        if (plVar28 != (long *)0x0) {
                          uVar22 = (ulong)plVar21 / (ulong)plVar28;
                        }
                        plVar21 = (long *)((long)plVar21 - uVar22 * (long)plVar28);
                      }
                    } while (plVar21 == unaff_x24);
                  }
                }
LAB_10a03f4c0:
                unaff_x20 = (long *)0x68;
                __Znwm();
                *unaff_x20 = 0;
                unaff_x20[1] = (long)unaff_x23;
                lVar15 = plVar10[3];
                lVar16 = plVar10[2];
                unaff_x20[3] = plVar10[3];
                unaff_x20[2] = lVar16;
                if (lVar15 != 0) {
                  plVar19 = (long *)(lVar15 + 8);
                  do {
                    cVar3 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar9) {
                      *plVar19 = *plVar19 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                *(undefined1 *)(unaff_x20 + 0xc) = 3;
                *(long **)((long)register0x00000008 + -0xc0) = unaff_x20 + 4;
                if (*(char *)(plVar10 + 0xc) == '\0') {
                  uVar13 = 0;
                }
                else {
                  puVar11 = (undefined1 *)(plVar10 + 4);
                  FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0));
                  uVar13 = *(undefined1 *)(plVar10 + 0xc);
                }
                *(undefined1 *)(unaff_x20 + 0xc) = uVar13;
                if ((plVar28 == (long *)0x0) ||
                   (*(float *)((long)register0x00000008 + -0xd0) * (float)plVar28 <
                    (float)(*(long *)((long)register0x00000008 + -0xd8) + 1))) {
                  uVar14 = 1;
                  if ((long *)0x2 < plVar28) {
                    uVar14 = (ulong)(((ulong)plVar28 & (long)plVar28 - 1U) != 0);
                  }
                  puVar11 = (undefined1 *)(uVar14 | (long)plVar28 << 1);
                  puVar12 = (undefined1 *)
                            (long)((float)(*(long *)((long)register0x00000008 + -0xd8) + 1) /
                                  *(float *)((long)register0x00000008 + -0xd0));
                  if (puVar11 <= puVar12) {
                    puVar11 = puVar12;
                  }
                  FUN_10a086b58((undefined1 *)((long)register0x00000008 + -0xf0));
                  plVar28 = *(long **)((long)register0x00000008 + -0xe8);
                  if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
                    unaff_x24 = (long *)((long)plVar28 - 1U & (ulong)unaff_x23);
                  }
                  else {
                    unaff_x24 = unaff_x23;
                    if (plVar28 <= unaff_x23) {
                      uVar14 = 0;
                      if (plVar28 != (long *)0x0) {
                        uVar14 = (ulong)unaff_x23 / (ulong)plVar28;
                      }
                      unaff_x24 = (long *)((long)unaff_x23 - uVar14 * (long)plVar28);
                    }
                  }
                }
                lVar16 = *(long *)((long)register0x00000008 + -0xf0);
                plVar19 = *(long **)(lVar16 + (long)unaff_x24 * 8);
                if (plVar19 == (long *)0x0) {
                  *unaff_x20 = *(long *)((long)register0x00000008 + -0xe0);
                  *(long **)((long)register0x00000008 + -0xe0) = unaff_x20;
                  *(undefined8 *)(lVar16 + (long)unaff_x24 * 8) =
                       *(undefined8 *)((long)register0x00000008 + -0x1e8);
                  if (*unaff_x20 != 0) {
                    plVar19 = *(long **)(*unaff_x20 + 8);
                    if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
                      plVar19 = (long *)((ulong)plVar19 & (long)plVar28 - 1U);
                    }
                    else if (plVar28 <= plVar19) {
                      uVar14 = 0;
                      if (plVar28 != (long *)0x0) {
                        uVar14 = (ulong)plVar19 / (ulong)plVar28;
                      }
                      plVar19 = (long *)((long)plVar19 - uVar14 * (long)plVar28);
                    }
                    *(long **)(*(long *)((long)register0x00000008 + -0xf0) + (long)plVar19 * 8) =
                         unaff_x20;
                  }
                }
                else {
                  *unaff_x20 = *plVar19;
                  *plVar19 = (long)unaff_x20;
                }
                *(long *)((long)register0x00000008 + -0xd8) =
                     *(long *)((long)register0x00000008 + -0xd8) + 1;
LAB_10a03f628:
              }
              unaff_x22 = (long *)((long)register0x00000008 + -0xc0);
              for (plVar10 = *(long **)((long)register0x00000008 + -0xe0); plVar10 != (long *)0x0;
                  plVar10 = (long *)*plVar10) {
                uVar14 = *(ulong *)(lVar27 + 0x20);
                puVar12 = puVar11;
                if (uVar14 != 0) {
                  uVar18 = plVar10[2];
                  uVar22 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) *
                           -0x622015f714c7d297;
                  uVar22 = (uVar18 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                  uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                  uVar23 = uVar14 - 1;
                  if ((uVar14 & uVar23) == 0) {
                    uVar25 = uVar22 & uVar23;
                  }
                  else {
                    uVar25 = uVar22;
                    if (uVar14 <= uVar22) {
                      uVar25 = 0;
                      if (uVar14 != 0) {
                        uVar25 = uVar22 / uVar14;
                      }
                      uVar25 = uVar22 - uVar25 * uVar14;
                    }
                  }
                  plVar28 = *(long **)(*(long *)(lVar27 + 0x18) + uVar25 * 8);
                  if (plVar28 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar28 = (long *)*plVar28;
                        if (plVar28 == (long *)0x0) goto LAB_10a03f764;
                        uVar26 = plVar28[1];
                        if (uVar26 != uVar22) break;
                        if (plVar28[2] == uVar18) {
                          if (*(char *)(plVar10 + 0xc) == '\x01') {
                            (*(code *)plVar10[4])
                                      (*(undefined4 *)((long)register0x00000008 + -0x1a0),
                                       *(undefined4 *)((long)register0x00000008 + -0x19c),
                                       *(undefined4 *)((long)register0x00000008 + -0x198),
                                       *(undefined4 *)((long)register0x00000008 + -0x194),
                                       plVar10 + 4);
                            puVar12 = puVar11;
                          }
                          else if (*(char *)(plVar10 + 0xc) == '\x02') {
                            unaff_x20 = plVar10 + 4;
                            FUN_10a688b40();
                            if (unaff_x20 == (long *)0x0) {
                              puVar12 = (undefined1 *)0x0;
                              if (puVar11 != (undefined1 *)0x0) {
                                uVar6 = plVar10[4];
                                uVar7 = plVar10[5];
                                if (plVar10[5] != 0) {
                                  plVar28 = (long *)(plVar10[5] + 8);
                                  do {
                                    cVar3 = '\x01';
                                    bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                                    if (bVar9) {
                                      *plVar28 = *plVar28 + 1;
                                      cVar3 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar3 != '\0');
                                }
                                *(undefined8 *)((long)register0x00000008 + -0x108) =
                                     *(undefined8 *)((long)register0x00000008 + -0x198);
                                *(undefined8 *)((long)register0x00000008 + -0x110) =
                                     *(undefined8 *)((long)register0x00000008 + -0x1a0);
                                *(code **)((long)register0x00000008 + -0xc0) = FUN_10a087fa0;
                                *(undefined ***)((long)register0x00000008 + -0xb8) =
                                     &PTR_DAT_110b9eaa0;
                                *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar7;
                                *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
                                *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
                                *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
                                uVar6 = **(undefined8 **)((long)register0x00000008 + -0x1c8);
                                *(undefined8 *)((long)register0x00000008 + -0x98) =
                                     (*(undefined8 **)((long)register0x00000008 + -0x1c8))[1];
                                *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar6;
                                puVar12 = (undefined1 *)((long)register0x00000008 + -0xc0);
                                FUN_10a4634ec(puVar11);
                                (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                                          ((undefined1 *)((long)register0x00000008 + -0xb8));
                              }
                            }
                            else {
                              *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                                    (int)*unaff_x20 + 1);
                              puVar12 = (undefined1 *)((long)register0x00000008 + -0x1a0);
                              FUN_10a087dc8(plVar10[4],puVar12,
                                            (ulong)((long)register0x00000008 + -0x1a0) | 8);
                              iVar1 = *(int *)((long)unaff_x20 + 4) + -1;
                              *(int *)((long)unaff_x20 + 4) = iVar1;
                              if (iVar1 == 0) {
                                *(undefined4 *)unaff_x20 = 0;
                              }
                            }
                          }
                          goto LAB_10a03f764;
                        }
                      }
                      if ((uVar14 & uVar23) == 0) {
                        uVar26 = uVar26 & uVar23;
                      }
                      else if (uVar14 <= uVar26) {
                        uVar5 = 0;
                        if (uVar14 != 0) {
                          uVar5 = uVar26 / uVar14;
                        }
                        uVar26 = uVar26 - uVar5 * uVar14;
                      }
                    } while (uVar26 == uVar25);
                  }
                }
LAB_10a03f764:
                puVar11 = puVar12;
              }
              unaff_x21 = (long *)0x0;
              unaff_x19 = (long *)((long)register0x00000008 + -0xf0);
              func_0x00010a0872b8();
            }
            *(undefined8 **)((long)register0x00000008 + -0x208) = unaff_x27;
            puVar17 = *(undefined8 **)((long)register0x00000008 + -400);
            *(undefined8 **)((long)register0x00000008 + -0x1f8) =
                 *(undefined8 **)((long)register0x00000008 + -0x188);
            if (puVar17 != *(undefined8 **)((long)register0x00000008 + -0x188)) {
              *(long **)((long)register0x00000008 + -0x1e0) = unaff_x26;
              do {
                *(undefined8 **)((long)register0x00000008 + -0x1f0) = puVar17;
                unaff_x20 = (long *)*puVar17;
                plVar10 = (long *)puVar17[1];
                *(long **)((long)register0x00000008 + -0x1d8) = plVar10;
                for (; unaff_x20 != plVar10; unaff_x20 = unaff_x20 + 4) {
                  lVar27 = unaff_x20[1];
                  unaff_x22 = (long *)unaff_x20[2];
                  uVar2 = *(uint *)(unaff_x20 + 3);
                  unaff_x23 = (long *)(ulong)uVar2;
                  *(int *)((long)register0x00000008 + -0x1cc) = (int)lVar27;
                  *(int *)((long)register0x00000008 + -0x124) = (int)lVar27;
                  *(long **)((long)register0x00000008 + -0x130) = unaff_x22;
                  *(uint *)((long)register0x00000008 + -0x134) = uVar2;
                  lVar27 = unaff_x26[0xd];
                  *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
                  *(undefined4 *)((long)register0x00000008 + -0x100) =
                       *(undefined4 *)(lVar27 + 0x38);
                  plVar10 = *(long **)(lVar27 + 0x20);
                  FUN_10a086938((undefined1 *)((long)register0x00000008 + -0x120));
                  for (plVar28 = *(long **)(lVar27 + 0x28); plVar28 != (long *)0x0;
                      plVar28 = (long *)*plVar28) {
                    uVar14 = plVar28[2];
                    uVar18 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) *
                             -0x622015f714c7d297;
                    uVar18 = (uVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
                    plVar19 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
                    plVar21 = *(long **)((long)register0x00000008 + -0x118);
                    if (plVar21 != (long *)0x0) {
                      puVar11 = (undefined1 *)((long)plVar21 + -1);
                      if (((ulong)plVar21 & (ulong)puVar11) == 0) {
                        unaff_x21 = (long *)((ulong)plVar19 & (ulong)puVar11);
                      }
                      else {
                        unaff_x21 = plVar19;
                        if (plVar21 <= plVar19) {
                          uVar18 = 0;
                          if (plVar21 != (long *)0x0) {
                            uVar18 = (ulong)plVar19 / (ulong)plVar21;
                          }
                          unaff_x21 = (long *)((long)plVar19 - uVar18 * (long)plVar21);
                        }
                      }
                      plVar20 = *(long **)(*(long *)((long)register0x00000008 + -0x120) +
                                          (long)unaff_x21 * 8);
                      if (plVar20 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar20 = (long *)*plVar20;
                            if (plVar20 == (long *)0x0) goto LAB_10a03f910;
                            plVar24 = (long *)plVar20[1];
                            if (plVar24 != plVar19) break;
                            if (plVar20[2] == uVar14) goto LAB_10a03fa78;
                          }
                          if (((ulong)plVar21 & (ulong)puVar11) == 0) {
                            plVar24 = (long *)((ulong)plVar24 & (ulong)puVar11);
                          }
                          else if (plVar21 <= plVar24) {
                            uVar18 = 0;
                            if (plVar21 != (long *)0x0) {
                              uVar18 = (ulong)plVar24 / (ulong)plVar21;
                            }
                            plVar24 = (long *)((long)plVar24 - uVar18 * (long)plVar21);
                          }
                        } while (plVar24 == unaff_x21);
                      }
                    }
LAB_10a03f910:
                    unaff_x24 = (long *)0x68;
                    __Znwm();
                    *unaff_x24 = 0;
                    unaff_x24[1] = (long)plVar19;
                    lVar15 = plVar28[3];
                    lVar16 = plVar28[2];
                    unaff_x24[3] = plVar28[3];
                    unaff_x24[2] = lVar16;
                    if (lVar15 != 0) {
                      plVar20 = (long *)(lVar15 + 8);
                      do {
                        cVar3 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar9) {
                          *plVar20 = *plVar20 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined1 *)(unaff_x24 + 0xc) = 3;
                    *(long **)((long)register0x00000008 + -0xc0) = unaff_x24 + 4;
                    if (*(char *)(plVar28 + 0xc) == '\0') {
                      uVar13 = 0;
                    }
                    else {
                      plVar10 = plVar28 + 4;
                      FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0));
                      uVar13 = *(undefined1 *)(plVar28 + 0xc);
                    }
                    *(undefined1 *)(unaff_x24 + 0xc) = uVar13;
                    if ((plVar21 == (long *)0x0) ||
                       (*(float *)((long)register0x00000008 + -0x100) * (float)plVar21 <
                        (float)(*(long *)((long)register0x00000008 + -0x108) + 1))) {
                      uVar14 = 1;
                      if ((long *)0x2 < plVar21) {
                        uVar14 = (ulong)(((ulong)plVar21 & (ulong)((long)plVar21 + -1)) != 0);
                      }
                      plVar10 = (long *)(uVar14 | (long)plVar21 << 1);
                      plVar21 = (long *)(long)((float)(*(long *)((long)register0x00000008 + -0x108)
                                                      + 1) /
                                              *(float *)((long)register0x00000008 + -0x100));
                      if (plVar10 <= plVar21) {
                        plVar10 = plVar21;
                      }
                      FUN_10a086938((undefined1 *)((long)register0x00000008 + -0x120));
                      plVar21 = *(long **)((long)register0x00000008 + -0x118);
                      if (((ulong)plVar21 & (ulong)((long)plVar21 + -1)) == 0) {
                        unaff_x21 = (long *)((ulong)((long)plVar21 + -1) & (ulong)plVar19);
                      }
                      else {
                        unaff_x21 = plVar19;
                        if (plVar21 <= plVar19) {
                          uVar14 = 0;
                          if (plVar21 != (long *)0x0) {
                            uVar14 = (ulong)plVar19 / (ulong)plVar21;
                          }
                          unaff_x21 = (long *)((long)plVar19 - uVar14 * (long)plVar21);
                        }
                      }
                    }
                    lVar16 = *(long *)((long)register0x00000008 + -0x120);
                    plVar19 = *(long **)(lVar16 + (long)unaff_x21 * 8);
                    if (plVar19 == (long *)0x0) {
                      *unaff_x24 = *(long *)((long)register0x00000008 + -0x110);
                      *(long **)((long)register0x00000008 + -0x110) = unaff_x24;
                      *(undefined8 *)(lVar16 + (long)unaff_x21 * 8) =
                           *(undefined8 *)((long)register0x00000008 + -0x1c8);
                      if (*unaff_x24 != 0) {
                        plVar19 = *(long **)(*unaff_x24 + 8);
                        if (((ulong)plVar21 & (ulong)((long)plVar21 + -1)) == 0) {
                          plVar19 = (long *)((ulong)plVar19 & (ulong)((long)plVar21 + -1));
                        }
                        else if (plVar21 <= plVar19) {
                          uVar14 = 0;
                          if (plVar21 != (long *)0x0) {
                            uVar14 = (ulong)plVar19 / (ulong)plVar21;
                          }
                          plVar19 = (long *)((long)plVar19 - uVar14 * (long)plVar21);
                        }
                        *(long **)(*(long *)((long)register0x00000008 + -0x120) + (long)plVar19 * 8)
                             = unaff_x24;
                      }
                    }
                    else {
                      *unaff_x24 = *plVar19;
                      *plVar19 = (long)unaff_x24;
                    }
                    *(long *)((long)register0x00000008 + -0x108) =
                         *(long *)((long)register0x00000008 + -0x108) + 1;
LAB_10a03fa78:
                  }
                  unaff_x26 = *(long **)((long)register0x00000008 + -0x1e0);
                  for (plVar28 = *(long **)((long)register0x00000008 + -0x110);
                      plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
                    uVar14 = *(ulong *)(lVar27 + 0x20);
                    plVar19 = plVar10;
                    if (uVar14 != 0) {
                      uVar18 = plVar28[2];
                      uVar22 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar22 = (uVar18 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                      uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                      uVar23 = uVar14 - 1;
                      if ((uVar14 & uVar23) == 0) {
                        uVar25 = uVar22 & uVar23;
                      }
                      else {
                        uVar25 = uVar22;
                        if (uVar14 <= uVar22) {
                          uVar25 = 0;
                          if (uVar14 != 0) {
                            uVar25 = uVar22 / uVar14;
                          }
                          uVar25 = uVar22 - uVar25 * uVar14;
                        }
                      }
                      plVar21 = *(long **)(*(long *)(lVar27 + 0x18) + uVar25 * 8);
                      if (plVar21 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar21 = (long *)*plVar21;
                            if (plVar21 == (long *)0x0) goto LAB_10a03fbc0;
                            uVar26 = plVar21[1];
                            if (uVar26 != uVar22) break;
                            if (plVar21[2] == uVar18) {
                              if (*(char *)(plVar28 + 0xc) == '\x01') {
                                plVar19 = unaff_x22;
                                (*(code *)plVar28[4])
                                          ((int)*unaff_x20,*(undefined4 *)((long)unaff_x20 + 4),
                                           *(undefined4 *)((long)register0x00000008 + -0x1cc),
                                           unaff_x22,unaff_x23,plVar28 + 4);
                              }
                              else if (*(char *)(plVar28 + 0xc) == '\x02') {
                                unaff_x24 = plVar28 + 4;
                                FUN_10a688b40();
                                if (unaff_x24 == (long *)0x0) {
                                  plVar19 = (long *)0x0;
                                  if (plVar10 != (long *)0x0) {
                                    uVar6 = plVar28[4];
                                    uVar7 = plVar28[5];
                                    if (plVar28[5] != 0) {
                                      plVar19 = (long *)(plVar28[5] + 8);
                                      do {
                                        cVar3 = '\x01';
                                        bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                                        if (bVar9) {
                                          *plVar19 = *plVar19 + 1;
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    lVar16 = *unaff_x20;
                                    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
                                    *(long *)((long)register0x00000008 + -0xe0) = lVar16;
                                    *(undefined4 *)((long)register0x00000008 + -0xd8) =
                                         *(undefined4 *)((long)register0x00000008 + -0x1cc);
                                    *(long **)((long)register0x00000008 + -0xd0) = unaff_x22;
                                    *(uint *)((long)register0x00000008 + -200) = uVar2;
                                    *(code **)((long)register0x00000008 + -0xc0) = FUN_10a08869c;
                                    *(undefined ***)((long)register0x00000008 + -0xb8) =
                                         &PTR_DAT_110b9eae8;
                                    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar7;
                                    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
                                    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
                                    puVar17 = *(undefined8 **)((long)register0x00000008 + -0x1e8);
                                    uVar6 = *puVar17;
                                    unaff_x21 = (long *)((long)register0x00000008 + -0xc0);
                                    *(undefined8 *)((long)register0x00000008 + -0x98) = puVar17[1];
                                    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar6;
                                    uVar6 = *(undefined8 *)((long)puVar17 + 0xc);
                                    *(undefined8 *)((long)register0x00000008 + -0x8c) =
                                         *(undefined8 *)((long)puVar17 + 0x14);
                                    *(undefined8 *)((long)register0x00000008 + -0x94) = uVar6;
                                    plVar19 = (long *)((long)register0x00000008 + -0xc0);
                                    FUN_10a4634ec(plVar10);
                                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                                              ((undefined1 *)((long)register0x00000008 + -0xb8));
                                  }
                                }
                                else {
                                  *unaff_x24 = CONCAT44((int)((ulong)*unaff_x24 >> 0x20) + 1,
                                                        (int)*unaff_x24 + 1);
                                  plVar19 = unaff_x20;
                                  FUN_10a088490(plVar28[4],unaff_x20,
                                                (undefined1 *)((long)register0x00000008 + -0x124),
                                                (undefined1 *)((long)register0x00000008 + -0x130),
                                                (undefined1 *)((long)register0x00000008 + -0x134));
                                  iVar1 = *(int *)((long)unaff_x24 + 4) + -1;
                                  *(int *)((long)unaff_x24 + 4) = iVar1;
                                  if (iVar1 == 0) {
                                    *(undefined4 *)unaff_x24 = 0;
                                  }
                                }
                              }
                              goto LAB_10a03fbc0;
                            }
                          }
                          if ((uVar14 & uVar23) == 0) {
                            uVar26 = uVar26 & uVar23;
                          }
                          else if (uVar14 <= uVar26) {
                            uVar5 = 0;
                            if (uVar14 != 0) {
                              uVar5 = uVar26 / uVar14;
                            }
                            uVar26 = uVar26 - uVar5 * uVar14;
                          }
                        } while (uVar26 == uVar25);
                      }
                    }
LAB_10a03fbc0:
                    plVar10 = plVar19;
                  }
                  unaff_x19 = (long *)((long)register0x00000008 + -0x120);
                  func_0x00010a087238();
                  plVar10 = *(long **)((long)register0x00000008 + -0x1d8);
                }
                puVar17 = (undefined8 *)(*(long *)((long)register0x00000008 + -0x1f0) + 0x18);
              } while (puVar17 != *(undefined8 **)((long)register0x00000008 + -0x1f8));
            }
            unaff_x28 = *(undefined8 **)((long)register0x00000008 + -0x210);
            unaff_x27 = *(undefined8 **)((long)register0x00000008 + -0x208);
            plVar10 = *(long **)((long)register0x00000008 + -0x200);
            if (plVar10 != (long *)0x0) {
              plVar28 = plVar10 + 1;
              do {
                lVar27 = *plVar28;
                cVar3 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar9) {
                  *plVar28 = lVar27 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                unaff_x19 = plVar10;
              }
            }
          }
          plVar10 = *(long **)((long)register0x00000008 + -0x1a8);
          if (plVar10 != (long *)0x0) {
            plVar28 = plVar10 + 1;
            do {
              lVar27 = *plVar28;
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar9) {
                *plVar28 = lVar27 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar27 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              unaff_x19 = plVar10;
            }
          }
          unaff_x27 = unaff_x27 + 2;
        } while (unaff_x27 != unaff_x28);
      }
      if (*(char *)((long)register0x00000008 + -0x178) == '\x01') {
        unaff_x19 = (long *)((long)register0x00000008 + -400);
        FUN_10a051924();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))(unaff_x23 + 1);
    func_0x00010a004dac((undefined1 *)((long)register0x00000008 + -0x120));
    FUN_10a0871b8((undefined1 *)((long)register0x00000008 + -0xf0));
    FUN_10a0886ec((undefined1 *)((long)register0x00000008 + -0x1b0));
    if (*(char *)((long)register0x00000008 + -0x178) == '\x01') {
      FUN_10a051924((undefined1 *)((long)register0x00000008 + -400));
    }
    unaff_x30 = FUN_10a040018;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x210);
  } while( true );
}



/* Entry: 10a04003c; end: 10a0400b3;  */

void FUN_10a04003c(long param_1)

{
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  uStack_38 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_40 = 0;
  uStack_34 = 0x1000000;
  uStack_30 = 0;
  uStack_24 = 0;
  FUN_10a051998(param_1 + 0x138,&lStack_58);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a0400b4; end: 10a04017b;  */

void FUN_10a0400b4(long param_1,long param_2)

{
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uStack_38 = 0;
    lStack_50 = 0;
    uStack_48 = 0;
    lStack_58 = 0;
    uStack_40 = 0;
    uStack_34 = 0x1000000;
    uStack_30 = 0;
    uStack_24 = 0;
    FUN_10a051998(param_2 + 0x138,&lStack_58);
    if (lStack_58 != 0) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
    return;
  }
  return;
}



/* Entry: 10a04017c; end: 10a040403;  */

void FUN_10a04017c(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "HapticFeedback";
  uStack_78 = 0xffffffff00000002;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  puStack_60 = &UNK_10f630f1d;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Default";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040404(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Tick";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040404();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Select";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040404();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Success";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040404();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Error";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040404();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "VibrationLow";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040404();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "VibrationMedium";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040404();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "VibrationHigh";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040404();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a040404; end: 10a0404a7;  */

undefined8 * FUN_10a040404(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0404a8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a0404a8; end: 10a040613;  */

void FUN_10a0404a8(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "TrackingQuality";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000110;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Unknown";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000110;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040614(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Normal";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000110;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040614();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Limited";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000110;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040614();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a040614; end: 10a0406b7;  */

undefined8 * FUN_10a040614(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0406b8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a0406b8; end: 10a04085f;  */

void FUN_10a0406b8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f633463;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  puStack_60 = &UNK_10f630f1d;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63346e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040860(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f633474;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040860();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63347a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040860();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f317047;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a040860();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a040860; end: 10a040903;  */

undefined8 * FUN_10a040860(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a040904);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a040904; end: 10a040907;  */

void FUN_10a040904(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b9a228;
  param_1[2] = &PTR_DAT_110b9a2f8;
  param_1[7] = &PTR_FUN_110b9a350;
  func_0x00010a052434(param_1 + 0x2d);
  func_0x00010a051c70(param_1 + 0x28);
  func_0x00010a052434(param_1 + 0x26);
  func_0x00010a0524e4(param_1 + 0x24);
  puStack_28 = param_1 + 0x21;
  FUN_10a042144(&puStack_28);
  func_0x0001086af8b0(param_1 + 0x1c);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a040908; end: 10a04091b;  */

void FUN_10a040908(void)

{
  func_0x00010a051bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04091c; end: 10a040943;  */

void FUN_10a04091c(void)

{
  return;
}



/* Entry: 10a040944; end: 10a04095b;  */

void FUN_10a040944(long param_1)

{
  func_0x00010a051bf0(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04095c; end: 10a040963;  */

void FUN_10a04095c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110b9a228;
  param_1[-5] = &PTR_DAT_110b9a2f8;
  *param_1 = &PTR_FUN_110b9a350;
  func_0x00010a052434(param_1 + 0x26);
  func_0x00010a051c70(param_1 + 0x21);
  func_0x00010a052434(param_1 + 0x1f);
  func_0x00010a0524e4(param_1 + 0x1d);
  puStack_28 = param_1 + 0x1a;
  FUN_10a042144(&puStack_28);
  func_0x0001086af8b0(param_1 + 0x15);
  func_0x00010aa71c88(param_1 + -7);
  return;
}



/* Entry: 10a040964; end: 10a04097b;  */

void FUN_10a040964(long param_1)

{
  func_0x00010a051bf0(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04097c; end: 10a040c93;  */

undefined8 * FUN_10a04097c(undefined8 *param_1)

{
  func_0x00010a05a86c(param_1 + 0x1f);
  if (param_1[0x1e] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a040c94; end: 10a040ca3;  */

void FUN_10a040c94(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a040c98);
  (*pcVar1)();
}



/* Entry: 10a040ca4; end: 10a040d2f;  */

void FUN_10a040ca4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x0;
  FUN_10a088744();
  if (puVar1 == (undefined8 *)0x0) {
    uStack_30 = 0;
  }
  else {
    uStack_30 = *puVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a0888e0(param_1,&uStack_30,&lStack_28,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10a040d30; end: 10a040d33;  */

void FUN_10a040d30(void)

{
  return;
}



/* Entry: 10a040d34; end: 10a040d9b;  */

long * FUN_10a040d34(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1;
  do {
    if (plVar4 == (long *)0x0) {
LAB_10a040d84:
      lVar2 = *(long *)(*param_1 + -0x18);
      lVar3 = *(long *)((long)param_1 + lVar2 + 0x10);
      if (lVar3 == 0) {
        plVar4 = (long *)&UNK_10f689e50;
        FUN_10a00946c();
        func_0x00010a34c8fc(plVar4 + 9);
        if (plVar4[7] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (plVar4[5] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        *plVar4 = (long)&PTR_DAT_110b17898;
        func_0x00010a004dac(plVar4 + 1);
        return plVar4;
      }
      lVar3 = *(long *)(lVar3 + 0x850);
      if (*(int *)((long)param_1 + lVar2 + 8) + 1U < *(uint *)(lVar3 + 0x2c)) {
        return (long *)(ulong)(*(uint *)(lVar3 + 0x30) <= *(int *)((long)param_1 + lVar2 + 0xc) + 1U
                              );
      }
      return (long *)0x1;
    }
    plVar1 = plVar4;
    (**(code **)(*plVar4 + 0x80))();
    if ((int)plVar1 != 2) {
      if ((int)plVar1 == 1) {
        return plVar1;
      }
      goto LAB_10a040d84;
    }
    plVar4 = (long *)plVar4[0x13];
  } while( true );
}



/* Entry: 10a040d9c; end: 10a040df3;  */

undefined4 FUN_10a040d9c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10a040df4; end: 10a040e07;  */

void FUN_10a040df4(void)

{
  func_0x00010a051ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a040e08; end: 10a040e13;  */

long FUN_10a040e08(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a040e14; end: 10a040e4f;  */

void FUN_10a040e14(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -0x10);
  do {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x80))();
    if ((int)plVar1 != 2) {
      return;
    }
    plVar2 = (long *)plVar2[0x13];
  } while (plVar2 != (long *)0x0);
  return;
}



/* Entry: 10a040e50; end: 10a040e57;  */

undefined8 * FUN_10a040e50(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_DAT_110b9a648;
  *param_1 = &PTR_FUN_110b9a780;
  param_1[3] = &PTR_FUN_110b9a7b0;
  param_1[0x61] = &PTR_FUN_110b9a880;
  param_1[0x13] = &PTR_DAT_110b9a808;
  param_1[0x4f] = &PTR_FUN_110b9a828;
  func_0x00010a004e5c(param_1 + 0x5f);
  FUN_10a060888(param_1 + 0x5c);
  FUN_10a060bec(param_1 + 0x5a);
  func_0x00010a0523dc(param_1 + 0x58);
  if (*(char *)((long)param_1 + 0x2bf) < '\0') {
    __ZdlPv(param_1[0x55]);
  }
  FUN_10a00dc2c(param_1 + 0x4f);
  *puVar1 = &PTR_FUN_110b9c248;
  *param_1 = &PTR_FUN_110bb3968;
  param_1[3] = &PTR_DAT_110bb3998;
  param_1[0x61] = &PTR_DAT_110b9c3a8;
  param_1[0x13] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4b);
  func_0x00010a042c64(param_1 + 0x46);
  func_0x00010a0523dc(param_1 + 0x43);
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    func_0x00010a042d30(param_1 + 0x38);
  }
  param_1[0x13] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x13);
  *puVar1 = &PTR_DAT_110b9c3f8;
  *param_1 = &PTR_FUN_110b9f848;
  param_1[3] = &PTR_DAT_110b9f878;
  param_1[0x61] = &PTR_DAT_110b9c4c8;
  FUN_10a042dcc(param_1 + 0x11);
  *puVar1 = &PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 9);
  puVar6 = (undefined8 *)param_1[10];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 8;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar2 = *(long *)(param_1[0x10] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return puVar1;
}



/* Entry: 10a040e58; end: 10a040e6f;  */

void FUN_10a040e58(long param_1)

{
  func_0x00010a051ce4(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a040e70; end: 10a040e77;  */

undefined8 * FUN_10a040e70(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_DAT_110b9a648;
  param_1[-3] = &PTR_FUN_110b9a780;
  *param_1 = &PTR_FUN_110b9a7b0;
  param_1[0x5e] = &PTR_FUN_110b9a880;
  param_1[0x10] = &PTR_DAT_110b9a808;
  param_1[0x4c] = &PTR_FUN_110b9a828;
  func_0x00010a004e5c(param_1 + 0x5c);
  FUN_10a060888(param_1 + 0x59);
  FUN_10a060bec(param_1 + 0x57);
  func_0x00010a0523dc(param_1 + 0x55);
  if (*(char *)((long)param_1 + 0x2a7) < '\0') {
    __ZdlPv(param_1[0x52]);
  }
  FUN_10a00dc2c(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110b9c248;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x5e] = &PTR_DAT_110b9c3a8;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110b9c3f8;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x5e] = &PTR_DAT_110b9c4c8;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a040e78; end: 10a040e8f;  */

void FUN_10a040e78(long param_1)

{
  func_0x00010a051ce4(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a040e90; end: 10a040e9f;  */

/* WARNING: Removing unreachable block (ram,0x00010a1ecea8) */
/* WARNING: Removing unreachable block (ram,0x00010a1ece98) */
/* WARNING: Removing unreachable block (ram,0x00010a1ecf08) */

void FUN_10a040e90(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined1 **ppuVar3;
  long *plVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 **ppuStack_118;
  ulong uStack_110;
  byte bStack_101;
  undefined8 **ppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined8 **appuStack_e8 [2];
  char cStack_d1;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  byte bStack_41;
  
  plVar4 = (long *)(param_2 + -0x28);
  func_0x00010989f98c(auStack_58,param_2);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_e8,uVar1 + 9,&ppuStack_100);
  pppuVar2 = (undefined8 ***)appuStack_e8[0];
  if (-1 < cStack_d1) {
    pppuVar2 = appuStack_e8;
  }
  if (uVar1 != 0) {
    _memmove(pppuVar2,auStack_58,uVar1);
  }
  *(undefined8 *)((long)pppuVar2 + uVar1) = 0x3a68746469772020;
  *(undefined2 *)((undefined8 *)((long)pppuVar2 + uVar1) + 1) = 0x20;
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  __ZNSt3__19to_stringEj(&ppuStack_100);
  pppuVar2 = (undefined8 ***)ppuStack_100;
  if (-1 < (char)bStack_e9) {
    uStack_f8 = (ulong)bStack_e9;
    pppuVar2 = &ppuStack_100;
  }
  pppuVar5 = appuStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,pppuVar2,uStack_f8);
  puStack_c8 = pppuVar5[1];
  puStack_d0 = *pppuVar5;
  puStack_c0 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f644f1b,10);
  uStack_a8 = ppuVar6[1];
  uStack_b0 = *ppuVar6;
  lStack_a0 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  (**(code **)(*plVar4 + 0xb8))(plVar4);
  __ZNSt3__19to_stringEj(&ppuStack_118);
  pppuVar2 = (undefined8 ***)ppuStack_118;
  if (-1 < (char)bStack_101) {
    uStack_110 = (ulong)bStack_101;
    pppuVar2 = &ppuStack_118;
  }
  puVar7 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_110);
  uStack_88 = puVar7[1];
  uStack_90 = *puVar7;
  uStack_80 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f644f26,10);
  uStack_68 = puVar7[1];
  uStack_70 = *puVar7;
  uStack_60 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  (**(code **)(*plVar4 + 0xa8))(plVar4);
  __ZNSt3__19to_stringEf(&puStack_130);
  ppuVar3 = (undefined1 **)puStack_130;
  if (-1 < (char)bStack_119) {
    uStack_128 = (ulong)bStack_119;
    ppuVar3 = &puStack_130;
  }
  puVar7 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuVar3,uStack_128);
  uVar8 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar8;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)bStack_119 < '\0') {
    __ZdlPv(puStack_130);
  }
  if ((char)bStack_101 < '\0') {
    __ZdlPv(ppuStack_118);
  }
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  if ((long)puStack_c0 < 0) {
    __ZdlPv(puStack_d0);
  }
  if ((char)bStack_e9 < '\0') {
    __ZdlPv(ppuStack_100);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(appuStack_e8[0]);
  }
  return;
}



/* Entry: 10a040ea0; end: 10a040eb7;  */

void FUN_10a040ea0(long param_1)

{
  func_0x00010a051ce4(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a040eb8; end: 10a040ebf;  */

undefined8 * FUN_10a040eb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_DAT_110b9a648;
  param_1[-0x4f] = &PTR_FUN_110b9a780;
  param_1[-0x4c] = &PTR_FUN_110b9a7b0;
  param_1[0x12] = &PTR_FUN_110b9a880;
  param_1[-0x3c] = &PTR_DAT_110b9a808;
  *param_1 = &PTR_FUN_110b9a828;
  func_0x00010a004e5c(param_1 + 0x10);
  FUN_10a060888(param_1 + 0xd);
  FUN_10a060bec(param_1 + 0xb);
  func_0x00010a0523dc(param_1 + 9);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_10a00dc2c(param_1);
  *puVar1 = &PTR_FUN_110b9c248;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x12] = &PTR_DAT_110b9c3a8;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110b9c3f8;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x12] = &PTR_DAT_110b9c4c8;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x47;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar2 = *(long *)(param_1[-0x3f] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10a040ec0; end: 10a040ed7;  */

void FUN_10a040ec0(long param_1)

{
  func_0x00010a051ce4(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a040ed8; end: 10a040ee7;  */

undefined8 * FUN_10a040ed8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110b9a648;
  puVar1[2] = &PTR_FUN_110b9a780;
  puVar1[5] = &PTR_FUN_110b9a7b0;
  puVar1[99] = &PTR_FUN_110b9a880;
  puVar1[0x15] = &PTR_DAT_110b9a808;
  puVar1[0x51] = &PTR_FUN_110b9a828;
  func_0x00010a004e5c(puVar1 + 0x61);
  FUN_10a060888(puVar1 + 0x5e);
  FUN_10a060bec(puVar1 + 0x5c);
  func_0x00010a0523dc(puVar1 + 0x5a);
  if (*(char *)((long)puVar1 + 0x2cf) < '\0') {
    __ZdlPv(puVar1[0x57]);
  }
  FUN_10a00dc2c(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110b9c248;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[99] = &PTR_DAT_110b9c3a8;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110b9c3f8;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[99] = &PTR_DAT_110b9c4c8;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a040ee8; end: 10a04101b;  */

void FUN_10a040ee8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a051ce4((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a04101c; end: 10a0410b3;  */

void FUN_10a04101c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_110b9a8f8;
  *param_1 = &PTR_DAT_110b9a960;
  FUN_10a0431a4(param_1 + 0x14);
  FUN_10a0617bc(param_1 + 0x12);
  FUN_10a0617bc(param_1 + 0x10);
  func_0x00010a05248c(param_1 + 0xe);
  func_0x00010a05248c(param_1 + 0xc);
  func_0x00010a05248c(param_1 + 10);
  func_0x00010a05248c(param_1 + 8);
  func_0x00010a05248c(param_1 + 6);
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10a0410b4; end: 10a0410e3;  */

void FUN_10a0410b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a0410e4; end: 10a0410f7;  */

long FUN_10a0410e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10a0410f8; end: 10a041407;  */

void FUN_10a0410f8(long param_1)

{
  *(undefined8 *)(param_1 + -0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((undefined8 *)(param_1 + -0x18));
  return;
}



/* Entry: 10a041408; end: 10a04140b;  */

undefined8 * FUN_10a041408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a04140c; end: 10a04141f;  */

void FUN_10a04140c(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041420; end: 10a041427;  */

undefined8 * FUN_10a041420(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a041428; end: 10a04143f;  */

void FUN_10a041428(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041440; end: 10a041447;  */

undefined8 * FUN_10a041440(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a041448; end: 10a04145f;  */

void FUN_10a041448(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041460; end: 10a041463;  */

undefined8 * FUN_10a041460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a041464; end: 10a041477;  */

void FUN_10a041464(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041478; end: 10a04147f;  */

undefined8 * FUN_10a041478(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a041480; end: 10a041497;  */

void FUN_10a041480(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041498; end: 10a04149f;  */

undefined8 * FUN_10a041498(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a0414a0; end: 10a0414b7;  */

void FUN_10a0414a0(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0414b8; end: 10a0414bb;  */

undefined8 * FUN_10a0414b8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b9c660;
  func_0x00010a051ed8(param_1 + 9);
  puStack_28 = param_1 + 6;
  FUN_10a04afa0(&puStack_28);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a0414bc; end: 10a0414cf;  */

void FUN_10a0414bc(void)

{
  func_0x00010a051e6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0414d0; end: 10a04153b;  */

undefined8 * FUN_10a0414d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9b968;
  func_0x00010a06e21c(param_1 + 0x27);
  *param_1 = &PTR_DAT_110ba7810;
  func_0x00010a051fb0(param_1 + 0x1e);
  __ZNSt3__15mutexD1Ev(param_1 + 0x15);
  func_0x00010a051ff4(param_1 + 0x13);
  func_0x00010a06e1a8(param_1 + 0xe);
  FUN_10a06e0c8(param_1 + 9);
  func_0x00010a06e004(param_1 + 7);
  func_0x00010a06e274(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a04153c; end: 10a04153f;  */

undefined8 * FUN_10a04153c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9b9c8;
  func_0x00010a04ef7c(param_1 + 0xe);
  func_0x00010a04ef7c(param_1 + 9);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a041540; end: 10a041553;  */

void FUN_10a041540(void)

{
  func_0x00010a05204c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041554; end: 10a041557;  */

undefined8 * FUN_10a041554(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba7760;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a041558; end: 10a04156b;  */

void FUN_10a041558(void)

{
  func_0x00010a0520b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04156c; end: 10a04166b;  */

undefined8 * FUN_10a04156c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9ba20;
  func_0x00010a052110(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a04166c; end: 10a04168f;  */

long FUN_10a04166c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109d2f478();
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10a041690; end: 10a04169b;  */

void FUN_10a041690(long param_1)

{
  FUN_109d2f478(param_1);
  *(undefined8 *)(param_1 + -0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((undefined8 *)(param_1 + -0x18));
  return;
}



/* Entry: 10a04169c; end: 10a0416af;  */

void FUN_10a04169c(void)

{
  func_0x00010a052168();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0416b0; end: 10a041c6b;  */

undefined8 * FUN_10a0416b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9bb20;
  param_1[3] = &PTR_DAT_110b9bb90;
  param_1[0x27] = &PTR_DAT_110b9bc08;
  FUN_10a04f638(param_1 + 0x20);
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  FUN_10a04f6ac(param_1 + 0x12);
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  FUN_10a079e14(param_1 + 8);
  param_1[3] = &PTR_DAT_110b9c7c0;
  param_1[0x27] = &PTR_FUN_110b9c838;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a041c6c; end: 10a041c97;  */

void FUN_10a041c6c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a041c70);
  (*pcVar1)();
}



/* Entry: 10a041c98; end: 10a041cb3;  */

void FUN_10a041c98(undefined8 param_1)

{
  FUN_10a0521b8(param_1,&PTR_PTR_110b9ef58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041cb4; end: 10a041cd3;  */

long FUN_10a041cb4(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a041cd4; end: 10a041cf3;  */

void FUN_10a041cd4(long param_1)

{
  FUN_10a0521b8(param_1 + -0x10,&PTR_PTR_110b9ef58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041cf4; end: 10a041d03;  */

undefined8 * FUN_10a041cf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110b9c980;
  param_1[-3] = &PTR_FUN_110c679b8;
  *param_1 = &PTR_DAT_110c679e8;
  param_1[0x58] = &PTR_DAT_110b9cb20;
  param_1[0x10] = &PTR_DAT_110c67a40;
  FUN_10a004cfc(param_1 + 0x55);
  FUN_10a004cfc(param_1 + 0x53);
  if (*(char *)((long)param_1 + 0x297) < '\0') {
    __ZdlPv(param_1[0x50]);
  }
  FUN_10a0522e8(param_1 + 0x4e);
  FUN_10a0772f0(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110b9cb70;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x58] = &PTR_DAT_110b9ccd0;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110b9cd20;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x58] = &PTR_DAT_110b9cdf0;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a041d04; end: 10a041d23;  */

void FUN_10a041d04(long param_1)

{
  FUN_10a0521b8(param_1 + -0x28,&PTR_PTR_110b9ef58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041d24; end: 10a041d33;  */

undefined8 * FUN_10a041d24(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110b9c980;
  param_1[-0x13] = &PTR_FUN_110c679b8;
  param_1[-0x10] = &PTR_DAT_110c679e8;
  param_1[0x48] = &PTR_DAT_110b9cb20;
  *param_1 = &PTR_DAT_110c67a40;
  FUN_10a004cfc(param_1 + 0x45);
  FUN_10a004cfc(param_1 + 0x43);
  if (*(char *)((long)param_1 + 0x217) < '\0') {
    __ZdlPv(param_1[0x40]);
  }
  FUN_10a0522e8(param_1 + 0x3e);
  FUN_10a0772f0(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110b9cb70;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x48] = &PTR_DAT_110b9ccd0;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110b9cd20;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x48] = &PTR_DAT_110b9cdf0;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a041d34; end: 10a041d53;  */

void FUN_10a041d34(long param_1)

{
  FUN_10a0521b8(param_1 + -0xa8,&PTR_PTR_110b9ef58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041d54; end: 10a041d6b;  */

undefined8 * FUN_10a041d54(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110b9c980;
  puVar1[2] = &PTR_FUN_110c679b8;
  puVar1[5] = &PTR_DAT_110c679e8;
  puVar1[0x5d] = &PTR_DAT_110b9cb20;
  puVar1[0x15] = &PTR_DAT_110c67a40;
  FUN_10a004cfc(puVar1 + 0x5a);
  FUN_10a004cfc(puVar1 + 0x58);
  if (*(char *)((long)puVar1 + 0x2bf) < '\0') {
    __ZdlPv(puVar1[0x55]);
  }
  FUN_10a0522e8(puVar1 + 0x53);
  FUN_10a0772f0(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110b9cb70;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x5d] = &PTR_DAT_110b9ccd0;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110b9cd20;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x5d] = &PTR_DAT_110b9cdf0;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a041d6c; end: 10a041da3;  */

void FUN_10a041d6c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a0521b8((long)param_1 + lVar1,&PTR_PTR_110b9ef58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a041da4; end: 10a041da7;  */

undefined8 * FUN_10a041da4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a041da8; end: 10a041dbb;  */

void FUN_10a041da8(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041dbc; end: 10a041dc3;  */

undefined8 * FUN_10a041dbc(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a041dc4; end: 10a041ddb;  */

void FUN_10a041dc4(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041ddc; end: 10a041de3;  */

undefined8 * FUN_10a041ddc(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a041de4; end: 10a041dfb;  */

void FUN_10a041de4(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041dfc; end: 10a041dff;  */

undefined8 * FUN_10a041dfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a041e00; end: 10a041e13;  */

void FUN_10a041e00(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041e14; end: 10a041e1b;  */

undefined8 * FUN_10a041e14(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a041e1c; end: 10a041e33;  */

void FUN_10a041e1c(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041e34; end: 10a041e3b;  */

undefined8 * FUN_10a041e34(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a041e3c; end: 10a041e53;  */

void FUN_10a041e3c(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041e54; end: 10a041e57;  */

undefined8 * FUN_10a041e54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a041e58; end: 10a041e6b;  */

void FUN_10a041e58(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041e6c; end: 10a041e73;  */

undefined8 * FUN_10a041e6c(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a041e74; end: 10a041e8b;  */

void FUN_10a041e74(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041e8c; end: 10a041e93;  */

undefined8 * FUN_10a041e8c(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a041e94; end: 10a041eab;  */

void FUN_10a041e94(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a041eac; end: 10a041f2f;  */

void FUN_10a041eac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a041f30(param_1,param_4);
    lVar1 = param_1;
    FUN_10a041fb0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a041f30; end: 10a041f67;  */

undefined1  [16] FUN_10a041f30(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x39 == 0) {
    plVar1 = param_1;
    FUN_10a041f7c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x10);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a041f68();
  FUN_109ffde64(&UNK_10f6334ac);
  if (param_2 >> 0x39 == 0) {
    lVar2 = param_2 << 7;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    uVar3 = param_2;
    FUN_10a042034(param_4,param_2);
    param_4 = param_4 + 0x80;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



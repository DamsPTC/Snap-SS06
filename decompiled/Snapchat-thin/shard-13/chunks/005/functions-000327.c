/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6a735c; end: 10a6a736b;  */

void FUN_10a6a735c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6a7364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6a736c; end: 10a6a73c3;  */

long FUN_10a6a736c(long param_1)

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



/* Entry: 10a6a73c4; end: 10a6a7427;  */

long * FUN_10a6a73c4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[3] != 0) {
      plVar1[4] = plVar1[3];
      __ZdlPv();
    }
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



/* Entry: 10a6a7428; end: 10a6a78e3;  */

void FUN_10a6a7428(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong unaff_x22;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  
  plVar20 = (long *)*param_1;
  do {
    if (plVar20 == param_1 + 1) {
      return;
    }
    if (*(int *)(plVar20 + 4) == 1) {
      plVar21 = *(long **)(param_2 + 0x10);
      uVar1 = *(uint *)((long)plVar20 + 0x1c);
      uVar22 = (ulong)uVar1;
      uVar18 = plVar21[1];
      if (uVar18 != 0) {
        uVar8 = uVar18 - 1;
        uVar17 = (uint)uVar18;
        if ((uVar18 & uVar8) == 0) {
          unaff_x22 = (ulong)(uVar17 - 1 & uVar1);
        }
        else {
          unaff_x22 = uVar22;
          if (uVar18 <= uVar22) {
            uVar2 = 0;
            if (uVar17 != 0) {
              uVar2 = uVar1 / uVar17;
            }
            unaff_x22 = (ulong)(uVar1 - uVar2 * uVar17);
          }
        }
        puVar10 = *(undefined8 **)(*plVar21 + unaff_x22 * 8);
        if (puVar10 != (undefined8 *)0x0) {
          for (plVar16 = (long *)*puVar10; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
            uVar11 = plVar16[1];
            if (uVar11 == uVar22) {
              if (*(uint *)(plVar16 + 2) == uVar1) goto LAB_10a6a7794;
            }
            else {
              if ((uVar18 & uVar8) == 0) {
                uVar11 = uVar11 & uVar8;
              }
              else if (uVar18 <= uVar11) {
                uVar9 = 0;
                if (uVar18 != 0) {
                  uVar9 = uVar11 / uVar18;
                }
                uVar11 = uVar11 - uVar9 * uVar18;
              }
              if (uVar11 != unaff_x22) break;
            }
          }
        }
      }
      plVar16 = (long *)0x30;
      __Znwm();
      *plVar16 = 0;
      plVar16[1] = uVar22;
      *(undefined4 *)(plVar16 + 2) = *(undefined4 *)((long)plVar20 + 0x1c);
      plVar16[4] = 0;
      plVar16[5] = 0;
      plVar16[3] = 0;
      if ((uVar18 == 0) || (*(float *)(plVar21 + 4) * (float)uVar18 < (float)(plVar21[3] + 1))) {
        uVar8 = 1;
        if (2 < uVar18) {
          uVar8 = (ulong)((uVar18 & uVar18 - 1) != 0);
        }
        uVar8 = uVar8 | uVar18 << 1;
        uVar11 = (ulong)((float)(plVar21[3] + 1) / *(float *)(plVar21 + 4));
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 - 1 == 0) {
          uVar8 = 2;
        }
        else if ((uVar8 & uVar8 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar18 = plVar21[1];
        }
        if (uVar18 < uVar8) {
LAB_10a6a75a8:
          if (uVar8 >> 0x3d != 0) goto LAB_10a6a78c0;
          lVar6 = uVar8 << 3;
          __Znwm();
          lVar7 = *plVar21;
          *plVar21 = lVar6;
          if (lVar7 != 0) {
            __ZdlPv();
          }
          uVar18 = 0;
          plVar21[1] = uVar8;
          do {
            *(undefined8 *)(*plVar21 + uVar18 * 8) = 0;
            uVar18 = uVar18 + 1;
          } while (uVar8 != uVar18);
          plVar12 = (long *)plVar21[2];
          uVar18 = uVar8;
          if (plVar12 != (long *)0x0) {
            uVar11 = plVar12[1];
            uVar9 = uVar8 - 1;
            if ((uVar8 & uVar9) == 0) {
              uVar11 = uVar11 & uVar9;
            }
            else if (uVar8 <= uVar11) {
              uVar15 = 0;
              if (uVar8 != 0) {
                uVar15 = uVar11 / uVar8;
              }
              uVar11 = uVar11 - uVar15 * uVar8;
            }
            *(long **)(*plVar21 + uVar11 * 8) = plVar21 + 2;
            plVar13 = (long *)*plVar12;
            while (plVar13 != (long *)0x0) {
              uVar15 = plVar13[1];
              if ((uVar8 & uVar9) == 0) {
                uVar15 = uVar15 & uVar9;
              }
              else if (uVar8 <= uVar15) {
                uVar3 = 0;
                if (uVar8 != 0) {
                  uVar3 = uVar15 / uVar8;
                }
                uVar15 = uVar15 - uVar3 * uVar8;
              }
              plVar14 = plVar13;
              if (uVar15 != uVar11) {
                lVar6 = *plVar21;
                if (*(long *)(lVar6 + uVar15 * 8) == 0) {
                  *(long **)(lVar6 + uVar15 * 8) = plVar12;
                  uVar11 = uVar15;
                }
                else {
                  *plVar12 = *plVar13;
                  *plVar13 = **(undefined8 **)(lVar6 + uVar15 * 8);
                  **(long **)(lVar6 + uVar15 * 8) = (long)plVar13;
                  plVar14 = plVar12;
                }
              }
              plVar12 = plVar14;
              plVar13 = (long *)*plVar14;
            }
          }
        }
        else if (uVar8 < uVar18) {
          uVar11 = (ulong)((float)(ulong)plVar21[3] / *(float *)(plVar21 + 4));
          if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar11) {
            uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
          }
          if (uVar8 <= uVar11) {
            uVar8 = uVar11;
          }
          if (uVar8 < uVar18) {
            if (uVar8 != 0) goto LAB_10a6a75a8;
            lVar6 = *plVar21;
            *plVar21 = 0;
            if (lVar6 != 0) {
              __ZdlPv();
            }
            plVar21[1] = 0;
            uVar18 = 0;
          }
          else {
            uVar18 = plVar21[1];
          }
        }
        if ((uVar18 & uVar18 - 1) == 0) {
          unaff_x22 = (ulong)((int)uVar18 - 1U & uVar1);
        }
        else {
          unaff_x22 = uVar22;
          if (uVar18 <= uVar22) {
            uVar8 = 0;
            if (uVar18 != 0) {
              uVar8 = uVar22 / uVar18;
            }
            unaff_x22 = uVar22 - uVar8 * uVar18;
          }
        }
      }
      lVar6 = *plVar21;
      plVar12 = *(long **)(lVar6 + unaff_x22 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = plVar21 + 2;
        *plVar16 = *plVar12;
        *plVar12 = (long)plVar16;
        *(long **)(lVar6 + unaff_x22 * 8) = plVar12;
        if (*plVar16 != 0) {
          uVar22 = *(ulong *)(*plVar16 + 8);
          if ((uVar18 & uVar18 - 1) == 0) {
            uVar22 = uVar22 & uVar18 - 1;
          }
          else if (uVar18 <= uVar22) {
            uVar8 = 0;
            if (uVar18 != 0) {
              uVar8 = uVar22 / uVar18;
            }
            uVar22 = uVar22 - uVar8 * uVar18;
          }
          plVar12 = (long *)(*plVar21 + uVar22 * 8);
          goto LAB_10a6a7784;
        }
      }
      else {
        *plVar16 = *plVar12;
LAB_10a6a7784:
        *plVar12 = (long)plVar16;
      }
      plVar21[3] = plVar21[3] + 1;
LAB_10a6a7794:
      puVar10 = (undefined8 *)plVar16[4];
      if (puVar10 < (undefined8 *)plVar16[5]) {
        puVar19 = puVar10 + 1;
        *puVar10 = *(undefined8 *)((long)plVar20 + 0x24);
      }
      else {
        lVar6 = (long)puVar10 - plVar16[3];
        uVar18 = (lVar6 >> 3) + 1;
        if (uVar18 >> 0x3d != 0) {
          FUN_10a050828();
LAB_10a6a78c0:
          func_0x000109ffded8();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6a78c8);
          (*pcVar4)();
        }
        uVar8 = plVar16[5] - plVar16[3];
        uVar22 = (long)uVar8 >> 2;
        if (uVar22 <= uVar18) {
          uVar22 = uVar18;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar22 = 0x1fffffffffffffff;
        }
        plVar21 = plVar16 + 3;
        FUN_10a05083c();
        puVar10 = (undefined8 *)((long)plVar21 + lVar6);
        puVar19 = puVar10 + 1;
        *puVar10 = *(undefined8 *)((long)plVar20 + 0x24);
        unaff_x22 = (long)puVar10 - (plVar16[4] - plVar16[3]);
        _memcpy(unaff_x22);
        lVar6 = plVar16[3];
        plVar16[3] = unaff_x22;
        plVar16[4] = (long)puVar19;
        plVar16[5] = (long)(plVar21 + uVar22);
        if (lVar6 != 0) {
          __ZdlPv();
        }
      }
      plVar16[4] = (long)puVar19;
    }
    plVar21 = (long *)plVar20[1];
    plVar16 = plVar20;
    if ((long *)plVar20[1] == (long *)0x0) {
      do {
        plVar20 = (long *)plVar16[2];
        bVar5 = (long *)*plVar20 != plVar16;
        plVar16 = plVar20;
      } while (bVar5);
    }
    else {
      do {
        plVar20 = plVar21;
        plVar21 = (long *)*plVar20;
      } while ((long *)*plVar20 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10a6a78e4; end: 10a6a7917;  */

void FUN_10a6a78e4(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a6a7918; end: 10a6a794b;  */

void FUN_10a6a7918(void)

{
  return;
}



/* Entry: 10a6a794c; end: 10a6a79fb;  */

void FUN_10a6a794c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c61a);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6a79fc; end: 10a6a7a27;  */

void FUN_10a6a79fc(void)

{
  return;
}



/* Entry: 10a6a7a28; end: 10a6a7a47;  */

void FUN_10a6a7a28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d340;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6a7a48; end: 10a6a7a57;  */

void FUN_10a6a7a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6a7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6a7a58; end: 10a6a7aaf;  */

long FUN_10a6a7a58(long param_1)

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



/* Entry: 10a6a7ab0; end: 10a6a7b4f;  */

void FUN_10a6a7ab0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  if (plVar6 != param_1 + 1) {
    lVar5 = *(long *)(param_2 + 0x10);
    do {
      lVar1 = plVar6[4];
      if ((int)lVar1 - 3U < 2) {
        uVar4 = *(undefined8 *)((long)plVar6 + 0x24);
        *(undefined4 *)(lVar5 + 0xb8) = *(undefined4 *)((long)plVar6 + 0x1c);
        *(bool *)(lVar5 + 0xbc) = (int)lVar1 == 4;
        *(undefined8 *)(lVar5 + 0xc0) = uVar4;
        FUN_10a5861f0(lVar5);
      }
      plVar2 = (long *)plVar6[1];
      plVar7 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar3 = (long *)*plVar6 != plVar7;
          plVar7 = plVar6;
        } while (bVar3);
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != param_1 + 1);
  }
  return;
}



/* Entry: 10a6a7b50; end: 10a6a7b83;  */

void FUN_10a6a7b50(void)

{
  return;
}



/* Entry: 10a6a7b84; end: 10a6a7c33;  */

void FUN_10a6a7b84(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c64a);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6a7c34; end: 10a6a7c5f;  */

void FUN_10a6a7c34(void)

{
  return;
}



/* Entry: 10a6a7c60; end: 10a6a7c7f;  */

void FUN_10a6a7c60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d3c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6a7c80; end: 10a6a7c8f;  */

void FUN_10a6a7c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6a7c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6a7c90; end: 10a6a7d27;  */

long FUN_10a6a7c90(long param_1)

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



/* Entry: 10a6a7d28; end: 10a6a7d6b;  */

void FUN_10a6a7d28(void)

{
  return;
}



/* Entry: 10a6a7d6c; end: 10a6a7d8b;  */

void FUN_10a6a7d6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d438;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6a7d8c; end: 10a6a7d9b;  */

void FUN_10a6a7d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6a7d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6a7d9c; end: 10a6a7df3;  */

long FUN_10a6a7d9c(long param_1)

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



/* Entry: 10a6a7df4; end: 10a6a84bf;  */

ulong * FUN_10a6a7df4(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong *puVar27;
  long *plVar28;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong *puStack_70;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar14 = param_2[4];
  uVar9 = uVar14 >> 5 & 0x7fffffffffffff8;
  uVar22 = param_2[1];
  plVar10 = (long *)(uVar22 + uVar9);
  if (param_2[2] == uVar22) {
    puVar25 = (undefined8 *)0x0;
  }
  else {
    puVar25 = (undefined8 *)(*plVar10 + (uVar14 & 0xff) * 0x10);
    uVar15 = param_2[5] + uVar14;
    uVar17 = uVar15 >> 5 & 0x7fffffffffffff8;
    if ((undefined8 *)(*(long *)(uVar22 + uVar17) + (uVar15 & 0xff) * 0x10) != puVar25) {
      uVar22 = (uVar15 & 0xff | (uVar17 - uVar9) * 0x20) - (uVar14 & 0xff);
      puVar27 = param_1 + 5;
      if (uVar22 <= *puVar27) goto LAB_10a6a7ecc;
      plVar3 = plVar10;
      puVar18 = puVar25;
      FUN_10a6a84c0();
      plStack_90 = (long *)(param_1[1] + (param_1[4] >> 8) * 8);
      if (param_1[2] == param_1[1]) {
        plStack_88 = (long *)0x0;
      }
      else {
        plStack_88 = (long *)(*plStack_90 + (param_1[4] & 0xff) * 0x10);
      }
      FUN_10a6a850c(plVar10,puVar25,plVar3,puVar18,&plStack_90);
      uVar9 = param_1[1];
      uVar14 = param_1[2];
      lVar16 = 0;
      if (uVar14 - uVar9 != 0) {
        lVar16 = (uVar14 - uVar9) * 0x20 + -1;
      }
      uVar17 = param_1[4];
      uVar26 = param_1[5];
      uVar22 = uVar22 - uVar26;
      uVar15 = uVar17 + uVar26;
      uVar23 = uVar22 - (lVar16 - uVar15);
      if (uVar22 < lVar16 - uVar15 || uVar23 == 0) goto LAB_10a6a83a4;
      if (uVar14 == uVar9) {
        uVar23 = uVar23 + 1;
      }
      uVar15 = uVar23 >> 8;
      if ((uVar23 & 0xff) != 0) {
        uVar15 = uVar15 + 1;
      }
      uVar26 = uVar15;
      if (uVar17 >> 8 <= uVar15) {
        uVar26 = uVar17 >> 8;
      }
      if (uVar17 >> 8 < uVar15) {
        uVar23 = uVar15 - uVar26;
        lVar16 = (long)(uVar14 - uVar9) >> 3;
        if (uVar23 <= (ulong)(((long)(param_1[3] - *param_1) >> 3) - lVar16)) {
          if (uVar23 != 0) {
LAB_10a6a818c:
            if (param_1[3] != param_1[2]) goto code_r0x00010a6a8198;
            lVar16 = uVar26 - uVar15;
            do {
              uVar5 = 0x1000;
              __Znwm(0x1000);
              FUN_10a6a8900(param_1,uVar5);
              lVar8 = 0xff;
              if (param_1[2] - param_1[1] != 8) {
                lVar8 = 0x100;
              }
              uVar17 = lVar8 + param_1[4];
              param_1[4] = uVar17;
              bVar2 = lVar16 != -1;
              lVar16 = lVar16 + 1;
              uVar26 = uVar15;
            } while (bVar2);
          }
          goto LAB_10a6a8370;
        }
        plVar10 = (long *)((long)(param_1[3] - *param_1) >> 2);
        if (plVar10 <= (long *)(uVar23 + lVar16)) {
          plVar10 = (long *)(uVar23 + lVar16);
        }
        puStack_70 = param_1;
        if (plVar10 == (long *)0x0) {
          puVar25 = (undefined8 *)0x0;
        }
        else {
          FUN_10a6a8c00();
        }
        plStack_88 = plVar10 + (lVar16 - uVar26);
        plStack_78 = plVar10 + (long)puVar25;
        plStack_90 = plVar10;
        plStack_80 = plStack_88;
        do {
          plVar10 = (long *)0x1000;
          __Znwm();
          FUN_10a6a8a00(&plStack_90);
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
        if (0xff < uVar17) {
          plVar28 = (long *)param_1[1];
          uVar9 = uVar26;
          do {
            plVar20 = plStack_80;
            plVar21 = plStack_88;
            plVar24 = plStack_90;
            if (plStack_80 == plStack_78) {
              if (plStack_88 < plStack_90 || (long)plStack_88 - (long)plStack_90 == 0) {
                plVar11 = (long *)((long)plStack_80 - (long)plStack_90 >> 2);
                if ((long)plStack_80 - (long)plStack_90 == 0) {
                  plVar11 = (long *)0x1;
                }
                plVar6 = plVar11;
                FUN_10a6a8c00();
                plStack_88 = plVar6 + ((ulong)plVar11 >> 2);
                lVar16 = (long)plVar20 - (long)plVar21;
                plVar20 = plStack_88;
                if (lVar16 != 0) {
                  plVar20 = (long *)((long)plStack_88 + lVar16);
                  plVar11 = plStack_88;
                  do {
                    *plVar11 = *plVar21;
                    lVar16 = lVar16 + -8;
                    plVar11 = plVar11 + 1;
                    plVar21 = plVar21 + 1;
                  } while (lVar16 != 0);
                }
                plStack_78 = plVar6 + (long)plVar10;
                plStack_90 = plVar6;
                plStack_80 = plVar20;
                if (plVar24 != (long *)0x0) {
                  __ZdlPv(plVar24);
                }
              }
              else {
                lVar16 = ((long)plStack_88 - (long)plStack_90 >> 3) + 1;
                plVar24 = plStack_88 + -((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
                lVar16 = (long)plStack_80 - (long)plStack_88;
                if (lVar16 != 0) {
                  _memmove(plVar24,plStack_88,lVar16);
                  plVar10 = plStack_88;
                }
                plVar20 = (long *)((long)plVar24 + lVar16);
                plStack_88 = plVar24;
                plStack_80 = plVar20;
              }
            }
            *plVar20 = *plVar28;
            plStack_80 = plStack_80 + 1;
            plVar28 = (long *)(param_1[1] + 8);
            param_1[1] = (ulong)plVar28;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        uVar9 = param_1[2];
        while (uVar9 != param_1[1]) {
          uVar9 = uVar9 - 8;
          FUN_10a6a8afc(&plStack_90,uVar9);
        }
        uVar9 = *param_1;
        param_1[1] = (ulong)plStack_88;
        *param_1 = (ulong)plStack_90;
        param_1[3] = (ulong)plStack_78;
        param_1[2] = (ulong)plStack_80;
        param_1[4] = param_1[4] + uVar26 * -0x100;
        if (uVar9 != 0) {
          __ZdlPv();
        }
      }
      else {
        param_1[4] = uVar17 + uVar26 * -0x100;
        if (uVar26 != 0) {
          lVar16 = -uVar26;
          do {
            uVar5 = *(undefined8 *)param_1[1];
            param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
            func_0x00010a6a8708(param_1,uVar5);
            bVar2 = lVar16 != -1;
            lVar16 = lVar16 + 1;
          } while (bVar2);
        }
      }
      goto LAB_10a6a8398;
    }
  }
  uVar22 = 0;
LAB_10a6a7ecc:
  plVar3 = (long *)(param_1[1] + (param_1[4] >> 8) * 8);
  if (param_1[2] == param_1[1]) {
    lVar16 = 0;
  }
  else {
    lVar16 = *plVar3 + (param_1[4] & 0xff) * 0x10;
  }
  plVar28 = plVar10;
  puVar18 = puVar25;
  FUN_10a6a84c0(plVar10,puVar25,uVar22);
  plStack_90 = plVar3;
  plStack_88 = (long *)lVar16;
  FUN_10a6a850c(plVar10,puVar25,plVar28,puVar18,&plStack_90);
  uVar22 = param_1[4];
  uVar14 = param_1[5];
  uVar9 = param_1[1];
  uVar15 = param_1[2];
  plVar10 = (long *)(uVar9 + (uVar22 + uVar14 >> 8) * 8);
  if (uVar15 == uVar9) {
    lVar16 = 0;
  }
  else {
    lVar16 = *plVar10 + (uVar22 + uVar14 & 0xff) * 0x10;
  }
  if ((long *)lVar16 != plStack_88) {
    lVar8 = (long)plStack_88 - *plStack_90 >> 4;
    lVar19 = ((lVar16 - *plVar10 >> 4) + ((long)plVar10 - (long)plStack_90) * 0x20) - lVar8;
    if (0 < lVar19) {
      plVar10 = (long *)(uVar9 + (uVar22 >> 8) * 8);
      if (uVar15 == uVar9) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar10 + (uVar22 & 0xff) * 0x10;
      }
      if (plStack_88 == (long *)lVar4) {
        lVar8 = 0;
      }
      else {
        lVar8 = (lVar8 + ((long)plStack_90 - (long)plVar10) * 0x20) - (lVar4 - *plVar10 >> 4);
      }
      FUN_10a6a86bc(plVar10,lVar4,lVar8);
      if (lVar4 != lVar16) {
        do {
          FUN_10a69cb6c();
          lVar4 = lVar4 + 0x10;
          if (lVar4 - *plVar10 == 0x1000) {
            plVar10 = plVar10 + 1;
            lVar4 = *plVar10;
          }
        } while (lVar4 != lVar16);
        uVar9 = param_1[1];
        uVar15 = param_1[2];
        uVar22 = param_1[4];
        uVar14 = param_1[5];
      }
      lVar16 = 0;
      if (uVar15 != uVar9) {
        lVar16 = (uVar15 - uVar9) * 0x20 + -1;
      }
      uVar14 = uVar14 - lVar19;
      param_1[5] = uVar14;
      uVar22 = lVar16 - (uVar14 + uVar22);
      while (0x1ff < uVar22) {
        __ZdlPv(*(undefined8 *)(uVar15 - 8));
        uVar15 = param_1[2] - 8;
        param_1[2] = uVar15;
        lVar16 = 0;
        if (uVar15 != param_1[1]) {
          lVar16 = (uVar15 - param_1[1]) * 0x20 + -1;
        }
        uVar22 = lVar16 - (param_1[5] + param_1[4]);
      }
    }
  }
  return param_1;
code_r0x00010a6a8198:
  uVar5 = 0x1000;
  __Znwm(0x1000);
  func_0x00010a6a8804(param_1,uVar5);
  uVar15 = uVar15 - 1;
  if (uVar26 == uVar15) goto code_r0x00010a6a81b8;
  goto LAB_10a6a818c;
code_r0x00010a6a81b8:
  uVar17 = param_1[4];
LAB_10a6a8370:
  param_1[4] = uVar17 + uVar26 * -0x100;
  for (; uVar26 != 0; uVar26 = uVar26 - 1) {
    uVar5 = *(undefined8 *)param_1[1];
    param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
    func_0x00010a6a8708(param_1,uVar5);
  }
LAB_10a6a8398:
  uVar26 = param_1[5];
  uVar9 = param_1[1];
  uVar14 = param_1[2];
  uVar15 = param_1[4] + uVar26;
LAB_10a6a83a4:
  plVar10 = (long *)(uVar9 + (uVar15 >> 8) * 8);
  if (uVar14 == uVar9) {
    puVar25 = (undefined8 *)0x0;
  }
  else {
    puVar25 = (undefined8 *)(*plVar10 + (uVar15 & 0xff) * 0x10);
  }
  plVar28 = plVar10;
  puVar7 = puVar25;
  FUN_10a6a86bc(plVar10,puVar25,uVar22);
  while( true ) {
    if (puVar25 == puVar7) {
      return param_1;
    }
    puVar12 = puVar7;
    if (plVar10 != plVar28) {
      puVar12 = (undefined8 *)(*plVar10 + 0x1000);
    }
    puVar13 = puVar25;
    if (puVar25 != puVar12) {
      do {
        lVar16 = puVar18[1];
        uVar5 = *puVar18;
        puVar13[1] = puVar18[1];
        *puVar13 = uVar5;
        if (lVar16 != 0) {
          plVar20 = (long *)(lVar16 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar2) {
              *plVar20 = *plVar20 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar18 = puVar18 + 2;
        if ((long)puVar18 - *plVar3 == 0x1000) {
          plVar3 = plVar3 + 1;
          puVar18 = (undefined8 *)*plVar3;
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar12);
      uVar26 = *puVar27;
      puVar13 = puVar12;
    }
    uVar26 = uVar26 + ((long)puVar13 - (long)puVar25 >> 4);
    *puVar27 = uVar26;
    if (plVar10 == plVar28) break;
    plVar10 = plVar10 + 1;
    puVar25 = (undefined8 *)*plVar10;
  }
  return param_1;
}



/* Entry: 10a6a84c0; end: 10a6a850b;  */

void FUN_10a6a84c0(long *param_1,long param_2,long param_3)

{
  if ((param_3 != 0) && (0 < param_3 + (param_2 - *param_1 >> 4))) {
    return;
  }
  return;
}



/* Entry: 10a6a850c; end: 10a6a859f;  */

void FUN_10a6a850c(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 == param_3) {
    uVar2 = *param_5;
    uVar3 = param_5[1];
  }
  else {
    uVar2 = *param_5;
    uVar3 = param_5[1];
    lVar1 = *param_1;
    while( true ) {
      param_1 = param_1 + 1;
      FUN_10a6a85a0(auStack_48,param_2,lVar1 + 0x1000,uVar2,uVar3);
      *param_5 = uStack_40;
      param_5[1] = uStack_38;
      if (param_1 == param_3) break;
      param_2 = *param_1;
      uVar2 = uStack_40;
      uVar3 = uStack_38;
      lVar1 = param_2;
    }
    param_2 = *param_1;
    uVar2 = uStack_40;
    uVar3 = uStack_38;
  }
  FUN_10a6a85a0(auStack_48,param_2,param_4,uVar2,uVar3);
  param_5[1] = uStack_38;
  *param_5 = uStack_40;
  return;
}



/* Entry: 10a6a85a0; end: 10a6a86bb;  */

void FUN_10a6a85a0(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_2 != param_3) {
    puVar4 = (undefined8 *)*param_4;
    puVar7 = param_2;
    do {
      lVar5 = (long)puVar4 + (0x1000 - (long)param_5) >> 4;
      lVar6 = (long)param_3 - (long)puVar7 >> 4;
      if (lVar5 <= lVar6) {
        lVar6 = lVar5;
      }
      param_2 = puVar7;
      if (lVar6 != 0) {
        param_2 = puVar7 + lVar6 * 2;
        do {
          uVar10 = puVar7[1];
          uVar9 = *puVar7;
          if (puVar7[1] != 0) {
            plVar8 = (long *)(puVar7[1] + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plVar8 = (long *)param_5[1];
          param_5[1] = uVar10;
          *param_5 = uVar9;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
            do {
              lVar6 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          puVar7 = puVar7 + 2;
          param_5 = param_5 + 2;
        } while (puVar7 != param_2);
        if (param_2 == param_3) goto LAB_10a6a8680;
      }
      param_4 = param_4 + 1;
      puVar4 = (undefined8 *)*param_4;
      param_5 = puVar4;
      puVar7 = param_2;
    } while( true );
  }
LAB_10a6a869c:
  *param_1 = (long)param_2;
  param_1[1] = (long)param_4;
  param_1[2] = (long)param_5;
  return;
LAB_10a6a8680:
  if ((undefined8 *)(*param_4 + 0x1000) == param_5) {
    param_4 = param_4 + 1;
    param_5 = (undefined8 *)*param_4;
  }
  goto LAB_10a6a869c;
}



/* Entry: 10a6a86bc; end: 10a6a8707;  */

void FUN_10a6a86bc(long *param_1,long param_2,long param_3)

{
  if ((param_3 != 0) && (0 < param_3 + (param_2 - *param_1 >> 4))) {
    return;
  }
  return;
}



/* Entry: 10a6a8708; end: 10a6a88ff;  */

void FUN_10a6a8708(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10a6a8c00();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a6a8900; end: 10a6a89ff;  */

void FUN_10a6a8900(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_10a6a8c00();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10a6a8a00; end: 10a6a8afb;  */

void FUN_10a6a8a00(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10a6a8c00();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a6a8afc; end: 10a6a8bff;  */

void FUN_10a6a8afc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_10a6a8c00();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10a6a8c00; end: 10a6a8c33;  */

void FUN_10a6a8c00(ulong param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar6 = *(long *)(param_2 + 0x10);
  FUN_10a6a8d14(&uStack_60,param_1);
  plVar5 = plStack_58;
  uVar4 = uStack_60;
  uStack_50 = uStack_60;
  plStack_48 = plStack_58;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  FUN_10a6a8ef4(lVar6 + 0xa8,uVar4,plVar5);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a6a8c34; end: 10a6a8d13;  */

void FUN_10a6a8c34(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar6 = *(long *)(param_2 + 0x10);
  FUN_10a6a8d14(&uStack_40,param_1);
  plVar5 = plStack_38;
  uVar4 = uStack_40;
  uStack_30 = uStack_40;
  plStack_28 = plStack_38;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  FUN_10a6a8ef4(lVar6 + 0xa8,uVar4,plVar5);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a6a8d14; end: 10a6a8d97;  */

void FUN_10a6a8d14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c0d488;
  puVar1[3] = *param_2;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  FUN_10a1d5e30();
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a6a8d98; end: 10a6a8da7;  */

void FUN_10a6a8d98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0d488;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6a8da8; end: 10a6a8dc7;  */

void FUN_10a6a8da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0d488;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6a8dc8; end: 10a6a8de3;  */

void FUN_10a6a8dc8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a6a8de4; end: 10a6a8e3b;  */

long FUN_10a6a8de4(long param_1)

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



/* Entry: 10a6a8e3c; end: 10a6a8e6f;  */

void FUN_10a6a8e3c(void)

{
  return;
}



/* Entry: 10a6a8e70; end: 10a6a8ef3;  */

void FUN_10a6a8e70(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10a69cb6c(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 8) * 8) +
                  (*(ulong *)(param_1 + 0x20) & 0xff) * 0x10);
    uVar2 = *(long *)(param_1 + 0x20) + 1;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    *(ulong *)(param_1 + 0x20) = uVar2;
    if (0x1ff < uVar2) {
      __ZdlPv(**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x100;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6a8ef4);
  (*pcVar1)();
}



/* Entry: 10a6a8ef4; end: 10a6a9097;  */

void FUN_10a6a8ef4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  
  puVar7 = (undefined8 *)param_1[1];
  lVar9 = param_1[2];
  uVar5 = lVar9 - (long)puVar7;
  uVar8 = 0;
  if (uVar5 != 0) {
    uVar8 = (lVar9 - (long)puVar7) * 0x20 - 1;
  }
  uVar2 = param_1[4];
  lVar10 = param_1[5];
  uVar11 = lVar10 + uVar2;
  if (uVar8 != uVar11) goto LAB_10a6a9014;
  if (uVar2 < 0x100) {
    lVar10 = param_1[3];
    uVar8 = lVar10 - *param_1;
    if (uVar5 < uVar8) {
      uVar6 = 0x1000;
      __Znwm(0x1000);
      if (lVar10 == lVar9) {
        FUN_10a6a8900(param_1,uVar6);
        puVar7 = (undefined8 *)param_1[1];
        goto LAB_10a6a8f4c;
      }
      func_0x00010a6a8804();
    }
    else {
      lVar9 = (long)uVar8 >> 2;
      if (lVar10 == *param_1) {
        lVar9 = 1;
      }
      lVar10 = param_2;
      plStack_50 = param_1;
      FUN_10a6a8c00();
      lStack_68 = lVar9 + uVar5;
      lStack_58 = lVar9 + lVar10 * 8;
      uVar6 = 0x1000;
      lStack_70 = lVar9;
      lStack_60 = lStack_68;
      __Znwm(0x1000);
      FUN_10a6a8a00(&lStack_70,uVar6);
      lVar9 = param_1[2];
      while (lVar9 != param_1[1]) {
        lVar9 = lVar9 + -8;
        FUN_10a6a8afc(&lStack_70,lVar9);
      }
      lVar9 = *param_1;
      param_1[1] = lStack_68;
      *param_1 = lStack_70;
      param_1[3] = lStack_58;
      param_1[2] = lStack_60;
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = uVar2 - 0x100;
LAB_10a6a8f4c:
    uVar6 = *puVar7;
    param_1[1] = (long)(puVar7 + 1);
    FUN_10a6a8708(param_1,uVar6);
  }
  puVar7 = (undefined8 *)param_1[1];
  lVar10 = param_1[5];
  uVar11 = lVar10 + param_1[4];
LAB_10a6a9014:
  plVar1 = (long *)(puVar7[uVar11 >> 8] + (uVar11 & 0xff) * 0x10);
  *plVar1 = param_2;
  plVar1[1] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = param_1[5];
  }
  param_1[5] = lVar10 + 1;
  return;
}



/* Entry: 10a6a9098; end: 10a6a90a7;  */

void FUN_10a6a9098(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0d4f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6a90a8; end: 10a6a90c7;  */

void FUN_10a6a90a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0d4f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6a90c8; end: 10a6a90d7;  */

void FUN_10a6a90c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6a90d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6a90d8; end: 10a6a912f;  */

long FUN_10a6a90d8(long param_1)

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



/* Entry: 10a6a9130; end: 10a6a920f;  */

void FUN_10a6a9130(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar6 = *(long *)(param_2 + 0x10);
  FUN_10a6a8d14(&uStack_40,param_1);
  plVar5 = plStack_38;
  uVar4 = uStack_40;
  uStack_30 = uStack_40;
  plStack_28 = plStack_38;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  FUN_10a6a8ef4(lVar6 + 0xa8,uVar4,plVar5);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a6a9210; end: 10a6a9253;  */

void FUN_10a6a9210(void)

{
  return;
}



/* Entry: 10a6a9254; end: 10a6a9273;  */

void FUN_10a6a9254(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d568;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6a9274; end: 10a6a92c7;  */

undefined8 * FUN_10a6a9274(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_110bf6870;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110bf6908;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110bf6960;
  if (*(long *)(param_1 + 0xb8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110bf42e0;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_10a688c1c(param_1 + 0x80);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return puVar1;
}



/* Entry: 10a6a92c8; end: 10a6a9403;  */

void FUN_10a6a92c8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar9 = *(undefined8 **)(param_2 + 0x10);
  uVar3 = *param_1;
  plVar4 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = (long)*(char *)((long)puVar9 + 0x57);
  if (lVar8 < 0) {
    puVar7 = (undefined8 *)puVar9[8];
    lVar8 = puVar9[9];
  }
  else {
    puVar7 = puVar9 + 8;
  }
  FUN_10a6a9404(&uStack_40,uVar3,plVar4,puVar7,lVar8);
  plStack_28 = plStack_38;
  uStack_30 = uStack_40;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  (*(code *)*puVar9)(&uStack_30,puVar9);
  plVar2 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar4 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a6a9404; end: 10a6a94db;  */

void FUN_10a6a9404(long *param_1,long param_2,long param_3,undefined *param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    ___dynamic_cast(param_2,&PTR_DAT_110bf32c0,&PTR_DAT_110bc3440,0);
    if (param_2 != 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      if (param_3 == 0) {
        return;
      }
      plVar1 = (long *)(param_3 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_10a2efe14(param_1);
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar2 = &UNK_10f66b8c1;
      if (param_5 != 0) {
        puVar2 = param_4;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f66c675,0x34,&UNK_10f63498b,param_7,param_8,
                          param_5,puVar2);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a6a94dc; end: 10a6a952b;  */

void FUN_10a6a94dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a6a952c; end: 10a6a9543;  */

void FUN_10a6a952c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a6a9544; end: 10a6a95f3;  */

void FUN_10a6a9544(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c730);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6a95f4; end: 10a6a961f;  */

void FUN_10a6a95f4(void)

{
  return;
}



/* Entry: 10a6a9620; end: 10a6a963f;  */

void FUN_10a6a9620(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d608;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6a9640; end: 10a6a964f;  */

void FUN_10a6a9640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6a9648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6a9650; end: 10a6a96a7;  */

long FUN_10a6a9650(long param_1)

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



/* Entry: 10a6a96a8; end: 10a6a97d3;  */

void FUN_10a6a96a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [7];
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = *param_4;
  (**(code **)(param_4[1] + 0x10))(apuStack_c0,param_4 + 1);
  pcStack_88 = FUN_10a6a97d4;
  ppuStack_80 = &PTR_FUN_110c0d648;
  puVar6 = (undefined8 *)0x40;
  __Znwm();
  *puVar6 = uStack_c8;
  (*(code *)apuStack_c0[0][2])(puVar6 + 1,apuStack_c0);
  lVar9 = param_2;
  puStack_78 = puVar6;
  FUN_10a57259c(param_1,param_2,param_3,&pcStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  ppuVar7 = apuStack_c0;
  (*(code *)*apuStack_c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  (*(code *)*apuStack_c0[0])(apuStack_c0);
  ppuVar8 = ppuVar7;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a6a97d4;
  puVar10 = *(undefined8 **)(lVar9 + 0x10);
  puVar6 = *ppuVar8;
  plVar3 = ppuVar8[1];
  lStack_f0 = param_2;
  ppuStack_e8 = ppuVar7;
  puStack_e0 = &stack0xfffffffffffffff0;
  *ppuVar8 = (undefined8 *)0x0;
  ppuVar8[1] = (undefined8 *)0x0;
  FUN_10a6a9404(&uStack_110,puVar6,plVar3,0,0);
  plStack_f8 = plStack_108;
  uStack_100 = uStack_110;
  uStack_110 = 0;
  plStack_108 = (long *)0x0;
  (*(code *)*puVar10)(&uStack_100,puVar10);
  plVar2 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar1 = plStack_f8 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar1 = plStack_108 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a6a97d4; end: 10a6a9903;  */

void FUN_10a6a97d4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar8 = *(undefined8 **)(param_2 + 0x10);
  uVar3 = *param_1;
  plVar4 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a6a9404(&uStack_40,uVar3,plVar4,0,0);
  plStack_28 = plStack_38;
  uStack_30 = uStack_40;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  (*(code *)*puVar8)(&uStack_30,puVar8);
  plVar2 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar4 + 1;
    do {
      lVar7 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a6a9904; end: 10a6a9943;  */

void FUN_10a6a9904(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a6a9944; end: 10a6a995b;  */

void FUN_10a6a9944(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a6a995c; end: 10a6a99e3;  */

void FUN_10a6a995c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c0d648;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *puVar1 = *puVar2;
  plVar3 = puVar2 + 1;
  (**(code **)(*plVar3 + 0x18))(puVar1 + 1,plVar3);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a6a99e4; end: 10a6a9a6f;  */

void FUN_10a6a99e4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar6 = (long *)param_1[1];
  uVar8 = param_1[1];
  uVar7 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = puVar5[1];
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a6a9a70; end: 10a6a9aa3;  */

void FUN_10a6a9a70(void)

{
  return;
}



/* Entry: 10a6a9aa4; end: 10a6a9b2f;  */

void FUN_10a6a9aa4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar6 = (long *)param_1[1];
  uVar8 = param_1[1];
  uVar7 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = puVar5[1];
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a6a9b30; end: 10a6a9b63;  */

void FUN_10a6a9b30(void)

{
  return;
}



/* Entry: 10a6a9b64; end: 10a6a9c13;  */

void FUN_10a6a9b64(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c766);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6a9c14; end: 10a6a9c3f;  */

void FUN_10a6a9c14(void)

{
  return;
}



/* Entry: 10a6a9c40; end: 10a6a9c5f;  */

void FUN_10a6a9c40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d6d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6a9c60; end: 10a6a9c6f;  */

void FUN_10a6a9c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6a9c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6a9c70; end: 10a6a9cc7;  */

long FUN_10a6a9c70(long param_1)

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



/* Entry: 10a6a9cc8; end: 10a6a9d77;  */

void FUN_10a6a9cc8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c79a);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6a9d78; end: 10a6a9da3;  */

void FUN_10a6a9d78(void)

{
  return;
}



/* Entry: 10a6a9da4; end: 10a6a9dc3;  */

void FUN_10a6a9da4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d738;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6a9dc4; end: 10a6a9dd3;  */

void FUN_10a6a9dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6a9dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6a9dd4; end: 10a6a9e83;  */

long FUN_10a6a9dd4(long param_1)

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



/* Entry: 10a6a9e84; end: 10a6a9eb7;  */

void FUN_10a6a9e84(void)

{
  return;
}



/* Entry: 10a6a9eb8; end: 10a6a9f67;  */

void FUN_10a6a9eb8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c7d0);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6a9f68; end: 10a6a9f93;  */

void FUN_10a6a9f68(void)

{
  return;
}



/* Entry: 10a6a9f94; end: 10a6a9fb3;  */

void FUN_10a6a9f94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d7c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6a9fb4; end: 10a6a9fc3;  */

void FUN_10a6a9fb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6a9fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6a9fc4; end: 10a6aa077;  */

long FUN_10a6a9fc4(long param_1)

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



/* Entry: 10a6aa078; end: 10a6aa0ab;  */

void FUN_10a6aa078(void)

{
  return;
}



/* Entry: 10a6aa0ac; end: 10a6aa15b;  */

void FUN_10a6aa0ac(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c804);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6aa15c; end: 10a6aa187;  */

void FUN_10a6aa15c(void)

{
  return;
}



/* Entry: 10a6aa188; end: 10a6aa1a7;  */

void FUN_10a6aa188(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d848;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6aa1a8; end: 10a6aa1b7;  */

void FUN_10a6aa1a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6aa1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6aa1b8; end: 10a6aa20f;  */

long FUN_10a6aa1b8(long param_1)

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



/* Entry: 10a6aa210; end: 10a6aa367;  */

/* WARNING: Removing unreachable block (ram,0x00010a586308) */

void FUN_10a6aa210(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return;
  }
  lVar12 = *(long *)(param_2 + 0x18);
  lVar9 = **(long **)(param_2 + 0x10);
  if (lVar9 != 0) {
    plStack_68 = *(long **)(param_1 + 0x14);
    FUN_10a601f04(lVar9,&plStack_68);
    if ((int)lVar9 == 0) {
      return;
    }
  }
  puVar14 = (ulong *)(lVar12 + 0xc0);
  *(undefined8 *)(lVar12 + 0xb8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 **)(lVar12 + 200) = (undefined8 *)*puVar14;
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  puVar4 = (undefined8 *)*puVar14;
  do {
    if (puVar5 == puVar6) {
      if ((*(char *)(lVar12 + 0x88) == '\x01') && (*(char *)(lVar12 + 0x90) == '\x01')) {
        uVar17 = *(undefined8 *)(lVar12 + 0x68);
        if (*(long *)(lVar12 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(lVar12 + 0x70) + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(long *)(lVar12 + 0x80) != 0) {
          plVar1 = (long *)(*(long *)(lVar12 + 0x80) + 0x10);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        func_0x00010a58dd14(auStack_70);
        plVar1 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar2 = plStack_68 + 2;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar2 = plStack_68 + 1;
          do {
            lVar12 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        FUN_10a58dda4(uVar17,&stack0xffffffffffffffa0);
        if (plVar1 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10a688c1c(&stack0xffffffffffffffb0);
      }
      return;
    }
    if (puVar4 < *(undefined8 **)(lVar12 + 0xd0)) {
      puVar16 = puVar4 + 1;
      *puVar4 = *puVar5;
    }
    else {
      lVar9 = (long)puVar4 - *puVar14;
      uVar3 = (lVar9 >> 3) + 1;
      if (uVar3 >> 0x3d != 0) {
        FUN_10a050828();
        return;
      }
      uVar11 = (long)*(undefined8 **)(lVar12 + 0xd0) - *puVar14;
      uVar13 = (long)uVar11 >> 2;
      if (uVar13 <= uVar3) {
        uVar13 = uVar3;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar13 = 0x1fffffffffffffff;
      }
      puVar10 = puVar14;
      FUN_10a05083c();
      puVar4 = (undefined8 *)((long)puVar10 + lVar9);
      puVar16 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar15 = (long)puVar4 - (*(long *)(lVar12 + 200) - *(long *)(lVar12 + 0xc0));
      _memcpy(lVar15);
      lVar9 = *(long *)(lVar12 + 0xc0);
      *(long *)(lVar12 + 0xc0) = lVar15;
      *(undefined8 **)(lVar12 + 200) = puVar16;
      *(ulong **)(lVar12 + 0xd0) = puVar10 + uVar13;
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
    *(undefined8 **)(lVar12 + 200) = puVar16;
    puVar5 = puVar5 + 1;
    puVar4 = puVar16;
  } while( true );
}



/* Entry: 10a6aa368; end: 10a6aa39b;  */

void FUN_10a6aa368(void)

{
  return;
}



/* Entry: 10a6aa39c; end: 10a6aa44b;  */

void FUN_10a6aa39c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c83b);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6aa44c; end: 10a6aa477;  */

void FUN_10a6aa44c(void)

{
  return;
}



/* Entry: 10a6aa478; end: 10a6aa497;  */

void FUN_10a6aa478(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d8d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6aa498; end: 10a6aa4a7;  */

void FUN_10a6aa498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6aa4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6aa4a8; end: 10a6aa4ff;  */

long FUN_10a6aa4a8(long param_1)

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



/* Entry: 10a6aa500; end: 10a6aa65b;  */

/* WARNING: Removing unreachable block (ram,0x00010a586308) */

void FUN_10a6aa500(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    return;
  }
  lVar12 = *(long *)(param_2 + 0x18);
  lVar9 = **(long **)(param_2 + 0x10);
  if (lVar9 != 0) {
    plStack_68 = *(long **)(param_1 + 0x14);
    FUN_10a601f04(lVar9,&plStack_68);
    if ((int)lVar9 == 0) {
      return;
    }
  }
  puVar14 = (ulong *)(lVar12 + 0xc0);
  *(undefined8 **)(lVar12 + 200) = (undefined8 *)*puVar14;
  *(undefined8 *)(lVar12 + 0xb8) = *(undefined8 *)(param_1 + 0x38);
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  puVar4 = (undefined8 *)*puVar14;
  do {
    if (puVar5 == puVar6) {
      if ((*(char *)(lVar12 + 0x88) == '\x01') && (*(char *)(lVar12 + 0x90) == '\x01')) {
        uVar17 = *(undefined8 *)(lVar12 + 0x68);
        if (*(long *)(lVar12 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(lVar12 + 0x70) + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(long *)(lVar12 + 0x80) != 0) {
          plVar1 = (long *)(*(long *)(lVar12 + 0x80) + 0x10);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        func_0x00010a58dd14(auStack_70);
        plVar1 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar2 = plStack_68 + 2;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar2 = plStack_68 + 1;
          do {
            lVar12 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        FUN_10a58dda4(uVar17,&stack0xffffffffffffffa0);
        if (plVar1 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10a688c1c(&stack0xffffffffffffffb0);
      }
      return;
    }
    if (puVar4 < *(undefined8 **)(lVar12 + 0xd0)) {
      puVar16 = puVar4 + 1;
      *puVar4 = *puVar5;
    }
    else {
      lVar9 = (long)puVar4 - *puVar14;
      uVar3 = (lVar9 >> 3) + 1;
      if (uVar3 >> 0x3d != 0) {
        FUN_10a050828();
        return;
      }
      uVar11 = (long)*(undefined8 **)(lVar12 + 0xd0) - *puVar14;
      uVar13 = (long)uVar11 >> 2;
      if (uVar13 <= uVar3) {
        uVar13 = uVar3;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar13 = 0x1fffffffffffffff;
      }
      puVar10 = puVar14;
      FUN_10a05083c();
      puVar4 = (undefined8 *)((long)puVar10 + lVar9);
      puVar16 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar15 = (long)puVar4 - (*(long *)(lVar12 + 200) - *(long *)(lVar12 + 0xc0));
      _memcpy(lVar15);
      lVar9 = *(long *)(lVar12 + 0xc0);
      *(long *)(lVar12 + 0xc0) = lVar15;
      *(undefined8 **)(lVar12 + 200) = puVar16;
      *(ulong **)(lVar12 + 0xd0) = puVar10 + uVar13;
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
    *(undefined8 **)(lVar12 + 200) = puVar16;
    puVar5 = puVar5 + 1;
    puVar4 = puVar16;
  } while( true );
}



/* Entry: 10a6aa65c; end: 10a6aa68f;  */

void FUN_10a6aa65c(void)

{
  return;
}



/* Entry: 10a6aa690; end: 10a6aa73f;  */

void FUN_10a6aa690(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c871);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6aa740; end: 10a6aa76b;  */

void FUN_10a6aa740(void)

{
  return;
}



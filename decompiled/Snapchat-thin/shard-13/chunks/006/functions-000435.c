/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa10948; end: 10aa10ddb;  */

undefined1  [16] FUN_10aa10948(long *param_1,ulong param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong unaff_x26;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  
  uVar11 = param_2;
  func_0x00010a9f93c8();
  uVar17 = param_1[1];
  if (uVar17 != 0) {
    uVar18 = uVar17 - 1;
    if ((uVar17 & uVar18) == 0) {
      unaff_x26 = uVar18 & uVar11;
    }
    else {
      unaff_x26 = uVar11;
      if (uVar17 <= uVar11) {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = uVar11 / uVar17;
        }
        unaff_x26 = uVar11 - uVar8 * uVar17;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar7; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        uVar8 = plVar16[1];
        if (uVar8 == uVar11) {
          plVar12 = plVar16 + 2;
          FUN_10a9f94c0(plVar12,param_2);
          if (((ulong)plVar12 & 1) != 0) {
            uVar6 = 0;
            goto LAB_10aa10d54;
          }
        }
        else {
          if ((uVar17 & uVar18) == 0) {
            uVar8 = uVar8 & uVar18;
          }
          else if (uVar17 <= uVar8) {
            uVar10 = 0;
            if (uVar17 != 0) {
              uVar10 = uVar8 / uVar17;
            }
            uVar8 = uVar8 - uVar10 * uVar17;
          }
          if (uVar8 != unaff_x26) break;
        }
      }
    }
  }
  plVar16 = (long *)0xa0;
  __Znwm();
  *plVar16 = 0;
  plVar16[1] = uVar11;
  plVar16[2] = *param_3;
  plVar16[4] = 0;
  plVar16[5] = 0;
  plVar16[3] = 0;
  FUN_10a0ca588();
  lVar9 = param_3[4];
  plVar16[7] = param_3[5];
  plVar16[6] = lVar9;
  uVar6 = *(undefined8 *)((long)param_3 + 0x2a);
  *(undefined8 *)((long)plVar16 + 0x42) = *(undefined8 *)((long)param_3 + 0x32);
  *(undefined8 *)((long)plVar16 + 0x3a) = uVar6;
  lVar9 = param_4[1];
  lVar5 = *param_4;
  plVar16[0xb] = param_4[1];
  plVar16[10] = lVar5;
  if (lVar9 != 0) {
    plVar12 = (long *)(lVar9 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = *plVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar9 = param_4[2];
  lVar19 = param_4[5];
  lVar5 = param_4[4];
  plVar16[0xd] = param_4[3];
  plVar16[0xc] = lVar9;
  plVar16[0xf] = lVar19;
  plVar16[0xe] = lVar5;
  *(char *)(plVar16 + 0x10) = (char)param_4[6];
  *(undefined1 *)(plVar16 + 0x11) = 0;
  *(undefined1 *)(plVar16 + 0x13) = 0;
  if ((char)param_4[9] == '\x01') {
    lVar9 = param_4[8];
    lVar5 = param_4[7];
    plVar16[0x12] = param_4[8];
    plVar16[0x11] = lVar5;
    if (lVar9 != 0) {
      plVar12 = (long *)(lVar9 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = *plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(undefined1 *)(plVar16 + 0x13) = 1;
  }
  if ((uVar17 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar17))
  goto LAB_10aa10cdc;
  uVar18 = 1;
  if (2 < uVar17) {
    uVar18 = (ulong)((uVar17 & uVar17 - 1) != 0);
  }
  uVar18 = uVar18 | uVar17 << 1;
  uVar17 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar18 <= uVar17) {
    uVar18 = uVar17;
  }
  if (uVar18 - 1 == 0) {
    uVar18 = 2;
  }
  else if ((uVar18 & uVar18 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar17 = param_1[1];
  if (uVar17 < uVar18) {
LAB_10aa10b64:
    if (uVar18 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa10dc4);
      (*pcVar4)();
    }
    lVar9 = uVar18 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar9;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    uVar17 = 0;
    param_1[1] = uVar18;
    do {
      *(undefined8 *)(*param_1 + uVar17 * 8) = 0;
      uVar17 = uVar17 + 1;
    } while (uVar18 != uVar17);
    plVar12 = (long *)param_1[2];
    uVar17 = uVar18;
    if (plVar12 != (long *)0x0) {
      uVar8 = plVar12[1];
      uVar10 = uVar18 - 1;
      if ((uVar18 & uVar10) == 0) {
        uVar8 = uVar8 & uVar10;
      }
      else if (uVar18 <= uVar8) {
        uVar15 = 0;
        if (uVar18 != 0) {
          uVar15 = uVar8 / uVar18;
        }
        uVar8 = uVar8 - uVar15 * uVar18;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
      plVar13 = (long *)*plVar12;
      while (plVar13 != (long *)0x0) {
        uVar15 = plVar13[1];
        if ((uVar18 & uVar10) == 0) {
          uVar15 = uVar15 & uVar10;
        }
        else if (uVar18 <= uVar15) {
          uVar3 = 0;
          if (uVar18 != 0) {
            uVar3 = uVar15 / uVar18;
          }
          uVar15 = uVar15 - uVar3 * uVar18;
        }
        plVar14 = plVar13;
        if (uVar15 != uVar8) {
          lVar9 = *param_1;
          if (*(long *)(lVar9 + uVar15 * 8) == 0) {
            *(long **)(lVar9 + uVar15 * 8) = plVar12;
            uVar8 = uVar15;
          }
          else {
            *plVar12 = *plVar13;
            *plVar13 = **(undefined8 **)(lVar9 + uVar15 * 8);
            **(long **)(lVar9 + uVar15 * 8) = (long)plVar13;
            plVar14 = plVar12;
          }
        }
        plVar12 = plVar14;
        plVar13 = (long *)*plVar14;
      }
    }
  }
  else if (uVar18 < uVar17) {
    uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar18 <= uVar8) {
      uVar18 = uVar8;
    }
    if (uVar18 < uVar17) {
      if (uVar18 != 0) goto LAB_10aa10b64;
      lVar9 = *param_1;
      *param_1 = 0;
      if (lVar9 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = param_1[1];
    }
  }
  if ((uVar17 & uVar17 - 1) == 0) {
    unaff_x26 = uVar17 - 1 & uVar11;
  }
  else {
    unaff_x26 = uVar11;
    if (uVar17 <= uVar11) {
      uVar18 = 0;
      if (uVar17 != 0) {
        uVar18 = uVar11 / uVar17;
      }
      unaff_x26 = uVar11 - uVar18 * uVar17;
    }
  }
LAB_10aa10cdc:
  lVar9 = *param_1;
  plVar12 = *(long **)(lVar9 + unaff_x26 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = param_1 + 2;
    *plVar16 = *plVar12;
    *plVar12 = (long)plVar16;
    *(long **)(lVar9 + unaff_x26 * 8) = plVar12;
    if (*plVar16 != 0) {
      uVar11 = *(ulong *)(*plVar16 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar11 = uVar11 & uVar17 - 1;
      }
      else if (uVar17 <= uVar11) {
        uVar18 = 0;
        if (uVar17 != 0) {
          uVar18 = uVar11 / uVar17;
        }
        uVar11 = uVar11 - uVar18 * uVar17;
      }
      *(long **)(*param_1 + uVar11 * 8) = plVar16;
    }
  }
  else {
    *plVar16 = *plVar12;
    *plVar12 = (long)plVar16;
  }
  param_1[3] = param_1[3] + 1;
  uVar6 = 1;
LAB_10aa10d54:
  auVar20._8_8_ = uVar6;
  auVar20._0_8_ = plVar16;
  return auVar20;
}



/* Entry: 10aa10ddc; end: 10aa10ec7;  */

long FUN_10aa10ddc(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_2;
  FUN_10a2063e0();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar2) {
          if (plVar3[6] == *(long *)(param_2 + 0x20)) {
            uVar4 = (ulong)(plVar3 + 2);
            FUN_10a2064c0(uVar4,param_2);
            if ((uVar4 & 1) != 0) {
              return (long)plVar3;
            }
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10aa10ec8; end: 10aa10ef7;  */

long * FUN_10aa10ec8(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa10ef8; end: 10aa10f27;  */

long * FUN_10aa10ef8(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa10f28; end: 10aa10f37;  */

void FUN_10aa10f28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c38168;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa10f38; end: 10aa10f57;  */

void FUN_10aa10f38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c38168;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa10f58; end: 10aa10f67;  */

void FUN_10aa10f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa10f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa10f68; end: 10aa10fbf;  */

long FUN_10aa10f68(long param_1)

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



/* Entry: 10aa10fc0; end: 10aa10fef;  */

long * FUN_10aa10fc0(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa10ff0; end: 10aa1101f;  */

long * FUN_10aa10ff0(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa11020; end: 10aa1104f;  */

long * FUN_10aa11020(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa11050; end: 10aa1114f;  */

long FUN_10aa11050(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uStack_41;
  
  puVar2 = &uStack_41;
  func_0x000107c2b05c();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    puVar2 = puVar2 + 0x9e3779b9;
    uVar6 = (long)*(int *)(param_2 + 0x18) + (long)puVar2 * 0x40 + ((ulong)puVar2 >> 2) + 0x9e3779b9
            ^ (ulong)puVar2;
    uVar7 = uVar5 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar6 & uVar7;
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar6) {
          uVar4 = (ulong)(plVar3 + 2);
          FUN_10aa11150(uVar4,param_2);
          if ((uVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar7) == 0) {
            uVar4 = uVar4 & uVar7;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar8) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10aa11150; end: 10aa11227;  */

bool FUN_10aa11150(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar7 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar7,plVar3);
    if ((int)plVar7 == 0) {
      bVar6 = (int)param_1[3] == (int)param_2[3];
    }
    else {
      bVar6 = false;
    }
    return bVar6;
  }
  return false;
}



/* Entry: 10aa11228; end: 10aa1163f;  */

long * FUN_10aa11228(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long **pplVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  ulong uVar15;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  pplVar3 = &plStack_68;
  func_0x000107c2b05c();
  uVar13 = (long)pplVar3 + 0x9e3779b9;
  uVar13 = (long)*(int *)(param_2 + 0x18) + uVar13 * 0x40 + (uVar13 >> 2) + 0x9e3779b9 ^ uVar13;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - 1;
    if ((uVar14 & uVar15) == 0) {
      unaff_x25 = uVar13 & uVar15;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar14 <= uVar13) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar13 / uVar14;
        }
        unaff_x25 = uVar13 - uVar7 * uVar14;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar7 = plVar6[1];
        if (uVar7 == uVar13) {
          uVar7 = (ulong)(plVar6 + 2);
          FUN_10aa11150(uVar7,param_2);
          if ((uVar7 & 1) != 0) {
            return plVar6;
          }
        }
        else {
          if ((uVar14 & uVar15) == 0) {
            uVar7 = uVar7 & uVar15;
          }
          else if (uVar14 <= uVar7) {
            uVar8 = 0;
            if (uVar14 != 0) {
              uVar8 = uVar7 / uVar14;
            }
            uVar7 = uVar7 - uVar8 * uVar14;
          }
          if (uVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar6 = (long *)0x100;
  __Znwm();
  uStack_58 = 1;
  *plVar6 = 0;
  plVar6[1] = uVar13;
  lVar4 = *param_3;
  plVar6[3] = param_3[1];
  plVar6[2] = lVar4;
  plVar6[4] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(int *)(plVar6 + 5) = (int)param_3[3];
  plStack_68 = plVar6;
  plStack_60 = param_1;
  FUN_10a9fac98(plVar6 + 6,param_3 + 4);
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_10aa11554;
  uVar15 = 1;
  if (2 < uVar14) {
    uVar15 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar15 = uVar15 | uVar14 << 1;
  uVar14 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar15 <= uVar14) {
    uVar15 = uVar14;
  }
  if (uVar15 - 1 == 0) {
    uVar15 = 2;
  }
  else if ((uVar15 & uVar15 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar14 = param_1[1];
  if (uVar14 < uVar15) {
LAB_10aa113dc:
    if (uVar15 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa1162c);
      (*pcVar2)();
    }
    lVar4 = uVar15 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    uVar14 = 0;
    param_1[1] = uVar15;
    do {
      *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
      uVar14 = uVar14 + 1;
    } while (uVar15 != uVar14);
    plVar9 = (long *)param_1[2];
    uVar14 = uVar15;
    if (plVar9 != (long *)0x0) {
      uVar7 = plVar9[1];
      uVar8 = uVar15 - 1;
      if ((uVar15 & uVar8) == 0) {
        uVar7 = uVar7 & uVar8;
      }
      else if (uVar15 <= uVar7) {
        uVar12 = 0;
        if (uVar15 != 0) {
          uVar12 = uVar7 / uVar15;
        }
        uVar7 = uVar7 - uVar12 * uVar15;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        if ((uVar15 & uVar8) == 0) {
          uVar12 = uVar12 & uVar8;
        }
        else if (uVar15 <= uVar12) {
          uVar1 = 0;
          if (uVar15 != 0) {
            uVar1 = uVar12 / uVar15;
          }
          uVar12 = uVar12 - uVar1 * uVar15;
        }
        plVar11 = plVar10;
        if (uVar12 != uVar7) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + uVar12 * 8) == 0) {
            *(long **)(lVar4 + uVar12 * 8) = plVar9;
            uVar7 = uVar12;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar4 + uVar12 * 8);
            **(long **)(lVar4 + uVar12 * 8) = (long)plVar10;
            plVar11 = plVar9;
          }
        }
        plVar9 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar15 < uVar14) {
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar15 <= uVar7) {
      uVar15 = uVar7;
    }
    if (uVar15 < uVar14) {
      if (uVar15 != 0) goto LAB_10aa113dc;
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
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
      uVar15 = 0;
      if (uVar14 != 0) {
        uVar15 = uVar13 / uVar14;
      }
      unaff_x25 = uVar13 - uVar15 * uVar14;
    }
  }
LAB_10aa11554:
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar6 = *plVar9;
    *plVar9 = (long)plVar6;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar9;
    if (*plVar6 != 0) {
      uVar13 = *(ulong *)(*plVar6 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar15 = 0;
        if (uVar14 != 0) {
          uVar15 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar15 * uVar14;
      }
      *(long **)(*param_1 + uVar13 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar9;
    *plVar9 = (long)plVar6;
  }
  param_1[3] = param_1[3] + 1;
  return plVar6;
}



/* Entry: 10aa11640; end: 10aa116cf;  */

void FUN_10aa11640(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a9fa80c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa116d0; end: 10aa116e3;  */

void FUN_10aa116d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  puVar8 = (undefined8 *)*plVar3;
  puVar2 = (undefined8 *)plVar3[1];
  puVar1 = (undefined8 *)((long)puVar8 + (param_2[1] - (long)puVar2));
  puVar4 = puVar8;
  puVar6 = puVar1;
  if (puVar2 != puVar8) {
    do {
      uVar9 = puVar4[1];
      uVar7 = *puVar4;
      puVar6[2] = puVar4[2];
      puVar6[1] = uVar9;
      *puVar6 = uVar7;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      uVar9 = puVar4[4];
      uVar7 = puVar4[3];
      puVar6[5] = puVar4[5];
      puVar6[4] = uVar9;
      puVar6[3] = uVar7;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[3] = 0;
      uVar7 = puVar4[6];
      *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(puVar4 + 7);
      puVar6[6] = uVar7;
      puVar4 = puVar4 + 8;
      puVar6 = puVar6 + 8;
    } while (puVar4 != puVar2);
    do {
      func_0x00010a9faba8(puVar8);
      puVar8 = puVar8 + 8;
    } while (puVar8 != puVar2);
    puVar8 = (undefined8 *)*plVar3;
  }
  param_2[1] = puVar1;
  *plVar3 = (long)puVar1;
  plVar3[1] = (long)puVar8;
  param_2[1] = puVar8;
  lVar5 = plVar3[1];
  plVar3[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = plVar3[2];
  plVar3[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10aa116e4; end: 10aa117cf;  */

void FUN_10aa116e4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar7 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar7 + (param_2[1] - (long)puVar2));
  puVar3 = puVar7;
  puVar5 = puVar1;
  if (puVar2 != puVar7) {
    do {
      uVar8 = puVar3[1];
      uVar6 = *puVar3;
      puVar5[2] = puVar3[2];
      puVar5[1] = uVar8;
      *puVar5 = uVar6;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      uVar8 = puVar3[4];
      uVar6 = puVar3[3];
      puVar5[5] = puVar3[5];
      puVar5[4] = uVar8;
      puVar5[3] = uVar6;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[3] = 0;
      uVar6 = puVar3[6];
      *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(puVar3 + 7);
      puVar5[6] = uVar6;
      puVar3 = puVar3 + 8;
      puVar5 = puVar5 + 8;
    } while (puVar3 != puVar2);
    do {
      func_0x00010a9faba8(puVar7);
      puVar7 = puVar7 + 8;
    } while (puVar7 != puVar2);
    puVar7 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar7;
  param_2[1] = puVar7;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10aa117d0; end: 10aa1184f;  */

undefined1  [16] FUN_10aa117d0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3a == 0) {
    lVar1 = (long)param_1 << 6;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x40;
    func_0x00010a9faba8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10aa11850; end: 10aa11863;  */

void FUN_10aa11850(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x555555555555555 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        param_3[2] = puVar2[2];
        param_3[1] = uVar4;
        *param_3 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        uVar3 = puVar2[3];
        param_3[4] = puVar2[4];
        param_3[3] = uVar3;
        param_3[5] = puVar2[5];
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2 = puVar2 + 6;
        param_3 = param_3 + 6;
      } while (puVar2 != param_2);
      do {
        func_0x00010a9fab24(puVar1);
        puVar1 = puVar1 + 6;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x30);
  return;
}



/* Entry: 10aa11864; end: 10aa1197b;  */

void FUN_10aa11864(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x555555555555555 < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_3[2] = puVar1[2];
        param_3[1] = uVar3;
        *param_3 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        uVar2 = puVar1[3];
        param_3[4] = puVar1[4];
        param_3[3] = uVar2;
        param_3[5] = puVar1[5];
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1 = puVar1 + 6;
        param_3 = param_3 + 6;
      } while (puVar1 != param_2);
      do {
        func_0x00010a9fab24(param_1);
        param_1 = param_1 + 6;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x30);
  return;
}



/* Entry: 10aa1197c; end: 10aa119df;  */

long * FUN_10aa1197c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
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



/* Entry: 10aa119e0; end: 10aa11dff;  */

void FUN_10aa119e0(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  ulong uVar15;
  undefined1 uStack_51;
  
  puVar3 = &uStack_51;
  func_0x000107c2b05c();
  puVar3 = puVar3 + 0x9e3779b9;
  uVar13 = (long)*(int *)(param_2 + 0x18) + (long)puVar3 * 0x40 + ((ulong)puVar3 >> 2) + 0x9e3779b9
           ^ (ulong)puVar3;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - 1;
    if ((uVar14 & uVar15) == 0) {
      unaff_x24 = uVar13 & uVar15;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar7 * uVar14;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar7 = plVar6[1];
        if (uVar7 == uVar13) {
          uVar7 = (ulong)(plVar6 + 2);
          FUN_10aa11150(uVar7,param_2);
          if ((uVar7 & 1) != 0) {
            return;
          }
        }
        else {
          if ((uVar14 & uVar15) == 0) {
            uVar7 = uVar7 & uVar15;
          }
          else if (uVar14 <= uVar7) {
            uVar8 = 0;
            if (uVar14 != 0) {
              uVar8 = uVar7 / uVar14;
            }
            uVar7 = uVar7 - uVar8 * uVar14;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar6 = (long *)0x30;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = uVar13;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar6 + 2,*param_3,param_3[1]);
  }
  else {
    lVar4 = *param_3;
    plVar6[3] = param_3[1];
    plVar6[2] = lVar4;
    plVar6[4] = param_3[2];
  }
  *(int *)(plVar6 + 5) = (int)param_3[3];
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_10aa11d04;
  uVar15 = 1;
  if (2 < uVar14) {
    uVar15 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar15 = uVar15 | uVar14 << 1;
  uVar14 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar15 <= uVar14) {
    uVar15 = uVar14;
  }
  if (uVar15 - 1 == 0) {
    uVar15 = 2;
  }
  else if ((uVar15 & uVar15 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar14 = param_1[1];
  if (uVar14 < uVar15) {
LAB_10aa11b8c:
    if (uVar15 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa11dd8);
      (*pcVar2)();
    }
    lVar4 = uVar15 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    uVar14 = 0;
    param_1[1] = uVar15;
    do {
      *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
      uVar14 = uVar14 + 1;
    } while (uVar15 != uVar14);
    plVar9 = (long *)param_1[2];
    uVar14 = uVar15;
    if (plVar9 != (long *)0x0) {
      uVar7 = plVar9[1];
      uVar8 = uVar15 - 1;
      if ((uVar15 & uVar8) == 0) {
        uVar7 = uVar7 & uVar8;
      }
      else if (uVar15 <= uVar7) {
        uVar12 = 0;
        if (uVar15 != 0) {
          uVar12 = uVar7 / uVar15;
        }
        uVar7 = uVar7 - uVar12 * uVar15;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        if ((uVar15 & uVar8) == 0) {
          uVar12 = uVar12 & uVar8;
        }
        else if (uVar15 <= uVar12) {
          uVar1 = 0;
          if (uVar15 != 0) {
            uVar1 = uVar12 / uVar15;
          }
          uVar12 = uVar12 - uVar1 * uVar15;
        }
        plVar11 = plVar10;
        if (uVar12 != uVar7) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + uVar12 * 8) == 0) {
            *(long **)(lVar4 + uVar12 * 8) = plVar9;
            uVar7 = uVar12;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar4 + uVar12 * 8);
            **(long **)(lVar4 + uVar12 * 8) = (long)plVar10;
            plVar11 = plVar9;
          }
        }
        plVar9 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar15 < uVar14) {
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar15 <= uVar7) {
      uVar15 = uVar7;
    }
    if (uVar15 < uVar14) {
      if (uVar15 != 0) goto LAB_10aa11b8c;
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
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
    unaff_x24 = uVar14 - 1 & uVar13;
  }
  else {
    unaff_x24 = uVar13;
    if (uVar14 <= uVar13) {
      uVar15 = 0;
      if (uVar14 != 0) {
        uVar15 = uVar13 / uVar14;
      }
      unaff_x24 = uVar13 - uVar15 * uVar14;
    }
  }
LAB_10aa11d04:
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar6 = *plVar9;
    *plVar9 = (long)plVar6;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar9;
    if (*plVar6 != 0) {
      uVar13 = *(ulong *)(*plVar6 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar15 = 0;
        if (uVar14 != 0) {
          uVar15 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar15 * uVar14;
      }
      *(long **)(*param_1 + uVar13 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar9;
    *plVar9 = (long)plVar6;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aa11e00; end: 10aa11e33;  */

void FUN_10aa11e00(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10aa11e34; end: 10aa11f33;  */

long FUN_10aa11e34(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uStack_41;
  
  puVar2 = &uStack_41;
  func_0x000107c2b05c();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    puVar2 = puVar2 + 0x9e3779b9;
    uVar6 = (long)*(int *)(param_2 + 0x18) + (long)puVar2 * 0x40 + ((ulong)puVar2 >> 2) + 0x9e3779b9
            ^ (ulong)puVar2;
    uVar7 = uVar5 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar6 & uVar7;
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar6 == uVar4) {
          uVar4 = (ulong)(plVar3 + 2);
          FUN_10aa11150(uVar4,param_2);
          if ((uVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar7) == 0) {
            uVar4 = uVar4 & uVar7;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar8) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10aa11f34; end: 10aa12063;  */

void FUN_10aa11f34(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10aa11fc0:
    if (lVar3 == 0) {
LAB_10aa11ff0:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10aa11ff8;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10aa11ff0;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10aa11fc0;
LAB_10aa11ff8:
    if (lVar3 == 0) goto LAB_10aa12034;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10aa12034:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010a9fa80c(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10aa12064; end: 10aa12093;  */

long * FUN_10aa12064(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa12094; end: 10aa120c3;  */

long * FUN_10aa12094(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa120c4; end: 10aa120f3;  */

long * FUN_10aa120c4(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa120f4; end: 10aa12123;  */

long * FUN_10aa120f4(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa12124; end: 10aa12153;  */

long * FUN_10aa12124(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa12154; end: 10aa12183;  */

long * FUN_10aa12154(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10aa12184; end: 10aa1227f;  */

undefined1  [16] FUN_10aa12184(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c382d8;
  puVar1 = &UNK_10f6891b4;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c382d8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aa12280; end: 10aa122e3;  */

ulong FUN_10aa12280(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa122e4);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10aa122e4,2,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10aa122e4; end: 10aa123f7;  */

void FUN_10aa122e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a053854(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10aa123f8(param_5);
      func_0x000109898518(param_2,param_4);
      FUN_10a9ef810(plVar5,param_2);
      *param_1 = 0;
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa123e4);
  (*pcVar1)();
}



/* Entry: 10aa123f8; end: 10aa1241b;  */

void FUN_10aa123f8(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar3 = 1;
  FUN_10a052ee0(1,0,param_1);
  *(undefined **)(uVar3 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(uVar3 + 0x170);
  if (*(long *)(uVar3 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    uStack_a0 = *(undefined8 *)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uStack_80 = *(undefined8 *)(lVar1 + -0x48);
    uStack_88 = *(undefined8 *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(undefined8 *)(lVar1 + -0x18);
    *(long *)(uVar3 + 0x170) = lVar1 + -0x68;
    uVar4 = uVar3;
    FUN_10a0051e8();
    if ((uVar4 & 1) == 0) {
      func_0x000109894f40(uVar3,0);
      FUN_10a054234(uVar3,&uStack_a0,uVar3 + 0x1b8,&UNK_10f689fac,0x14);
      FUN_10a05431c(uVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa124d8);
  (*pcVar2)();
}



/* Entry: 10aa1241c; end: 10aa1252f;  */

void FUN_10aa1241c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f689fac,0x14);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa124d8);
  (*pcVar4)();
}



/* Entry: 10aa12530; end: 10aa128e7;  */

undefined8 FUN_10aa12530(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plStack_78;
  
  lVar11 = param_1 + 0x150;
  lVar20 = *(long *)(param_1 + 0x158);
  if (lVar20 == lVar11) {
    plStack_78 = (long *)0x0;
  }
  else {
    plStack_78 = (long *)0x0;
    plVar13 = (long *)0x0;
    plVar14 = (long *)0x0;
    do {
      plVar16 = *(long **)(lVar20 + 0x10);
      plVar19 = plVar14;
      plVar15 = plStack_78;
      if (plVar16 != (long *)0x0) {
        plVar17 = plVar16 + 0x16;
        (**(code **)(*plVar17 + 0x18))(plVar17,0x5b791445539073a5);
        if ((plVar17 != (long *)0x0) && ((**(code **)(*plVar16 + 0x60))(), (int)plVar16 != 0)) {
          if (plVar14 < plVar13) {
            plVar19 = plVar14 + 1;
            *plVar14 = (long)plVar17;
          }
          else {
            lVar18 = (long)plVar14 - (long)plStack_78;
            uVar1 = (lVar18 >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
              func_0x00010aa128e8();
              goto LAB_10aa128ac;
            }
            uVar10 = (long)plVar13 - (long)plStack_78 >> 2;
            if (uVar10 <= uVar1) {
              uVar10 = uVar1;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plVar13 - (long)plStack_78)) {
              uVar10 = 0x1fffffffffffffff;
            }
            if (uVar10 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10aa128ac;
            }
            lVar9 = uVar10 << 3;
            __Znwm();
            plVar14 = (long *)(lVar9 + lVar18);
            plVar13 = (long *)(lVar9 + uVar10 * 8);
            plVar15 = plVar14 + -(lVar18 >> 3);
            plVar19 = plVar14 + 1;
            *plVar14 = (long)plVar17;
            _memcpy(plVar15,plStack_78,lVar18);
            if (plStack_78 != (long *)0x0) {
              __ZdlPv(plStack_78);
            }
          }
        }
      }
      plStack_78 = plVar15;
      lVar20 = *(long *)(lVar20 + 8);
      plVar14 = plVar19;
    } while (lVar20 != lVar11);
    if (plStack_78 != plVar19) {
      bVar6 = false;
      plVar13 = plStack_78;
      do {
        lVar20 = *plVar13;
        *(undefined4 *)(lVar20 + 0x1f0) = **(undefined4 **)(param_2 + 0x10);
        *(undefined1 *)(lVar20 + 500) = 1;
        if (*(int *)(*(long *)(*(long *)(param_2 + 0x18) + 0xa20) + 0x18) < 0x151) {
          lVar20 = **(long **)(param_2 + 0x20);
        }
        bVar6 = (bool)(bVar6 | *(int *)(lVar20 + 0x218) == 0);
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar19);
      if (!bVar6) {
        uVar12 = 0;
        goto joined_r0x00010aa12854;
      }
    }
  }
  lVar20 = *(long *)(param_1 + 0x158);
  if (lVar20 == lVar11) {
    uVar12 = 1;
  }
  else {
    plVar13 = (long *)0x0;
    plVar14 = (long *)0x0;
    plVar19 = (long *)0x0;
    do {
      plVar17 = *(long **)(lVar20 + 0x10);
      plVar15 = plVar14;
      plVar16 = plVar19;
      if (plVar17 != (long *)0x0) {
        plVar8 = plVar17 + 0x16;
        (**(code **)(*plVar8 + 0x18))(plVar8,0xbd1555114443a935);
        if ((plVar8 != (long *)0x0) && ((**(code **)(*plVar17 + 0x60))(), (int)plVar17 != 0)) {
          if (plVar19 < plVar13) {
            plVar16 = plVar19 + 1;
            *plVar19 = (long)plVar8;
          }
          else {
            lVar18 = (long)plVar19 - (long)plVar14;
            uVar1 = (lVar18 >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
              func_0x00010aa128fc();
LAB_10aa128ac:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10aa128b0);
              (*pcVar7)();
            }
            uVar10 = (long)plVar13 - (long)plVar14 >> 2;
            if (uVar10 <= uVar1) {
              uVar10 = uVar1;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plVar13 - (long)plVar14)) {
              uVar10 = 0x1fffffffffffffff;
            }
            if (uVar10 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10aa128ac;
            }
            lVar9 = uVar10 << 3;
            __Znwm();
            plVar19 = (long *)(lVar9 + lVar18);
            plVar13 = (long *)(lVar9 + uVar10 * 8);
            plVar15 = plVar19 + -(lVar18 >> 3);
            plVar16 = plVar19 + 1;
            *plVar19 = (long)plVar8;
            _memcpy(plVar15,plVar14,lVar18);
            if (plVar14 != (long *)0x0) {
              __ZdlPv(plVar14);
            }
          }
        }
      }
      lVar20 = *(long *)(lVar20 + 8);
      plVar14 = plVar15;
      plVar19 = plVar16;
    } while (lVar20 != lVar11);
    for (; plVar14 != plVar16; plVar14 = plVar14 + 1) {
      lVar11 = *plVar14;
      uVar2 = **(undefined4 **)(param_2 + 0x10);
      uVar3 = **(undefined4 **)(param_2 + 0x28);
      iVar4 = **(int **)(param_2 + 0x30);
      **(int **)(param_2 + 0x30) = iVar4 + 1;
      uVar12 = **(undefined8 **)(param_2 + 0x38);
      uVar5 = *(undefined4 *)(*(undefined8 **)(param_2 + 0x38) + 1);
      *(undefined4 *)(lVar11 + 0x1f0) = uVar2;
      *(undefined4 *)(lVar11 + 500) = uVar3;
      *(int *)(lVar11 + 0x1f8) = iVar4;
      *(undefined8 *)(lVar11 + 0x1fc) = uVar12;
      *(undefined4 *)(lVar11 + 0x204) = uVar5;
      if ((*(byte *)(lVar11 + 0x208) & 1) == 0) {
        *(undefined1 *)(lVar11 + 0x208) = 1;
      }
    }
    if (plVar15 != (long *)0x0) {
      __ZdlPv(plVar15);
    }
    uVar12 = 1;
  }
joined_r0x00010aa12854:
  if (plStack_78 != (long *)0x0) {
    __ZdlPv();
  }
  return uVar12;
}



/* Entry: 10aa128e8; end: 10aa1290f;  */

void FUN_10aa128e8(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10aa12910; end: 10aa12983;  */

void FUN_10aa12910(void)

{
  return;
}



/* Entry: 10aa12984; end: 10aa12c37;  */

void FUN_10aa12984(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    FUN_10a9f38d4(param_1 + 0x58,param_1 + 0x48,**(undefined8 **)(param_1 + 0x60));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
    func_0x0001092af8bc(*(undefined8 *)(param_1 + 0x60));
    lVar8 = **(long **)(param_1 + 0x60);
    if ((*(byte *)(lVar8 + 0x9c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa12bb4);
      (*pcVar4)();
    }
    FUN_10a07eb0c(*(long **)(param_1 + 0x60) + 1,lVar8 + 0x98);
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa12c38; end: 10aa12da7;  */

void FUN_10aa12c38(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10aa12d8c;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa12d8c;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
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
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10aa12d8c;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa12d8c;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10aa12d8c:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa12da8; end: 10aa1304b;  */

void FUN_10aa12da8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    FUN_10a9f35a4(param_1 + 0x80,param_1 + 0x48);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80);
    plVar5 = (long *)(*(long *)(param_1 + 0x80) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      lVar8 = *(long *)(param_1 + 0x70);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa12f88);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  FUN_10a688c1c(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa1304c; end: 10aa1315f;  */

void FUN_10aa1304c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x70);
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
    plVar4 = *(long **)(param_1 + 0x80);
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
  FUN_10a688c1c(param_1 + 0x50);
  plVar4 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa13160; end: 10aa13413;  */

void FUN_10aa13160(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    FUN_10a9f4724(param_1 + 0x58,param_1 + 0x48,**(undefined8 **)(param_1 + 0x60));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
    func_0x0001092af8bc(*(undefined8 *)(param_1 + 0x60));
    lVar8 = **(long **)(param_1 + 0x60);
    if ((*(byte *)(lVar8 + 0xa0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa13390);
      (*pcVar4)();
    }
    FUN_10a9f5248(*(long **)(param_1 + 0x60) + 1,lVar8 + 0x98);
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa13414; end: 10aa13583;  */

void FUN_10aa13414(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10aa13568;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa13568;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
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
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10aa13568;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa13568;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10aa13568:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa13584; end: 10aa13827;  */

void FUN_10aa13584(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    FUN_10a9f43f4(param_1 + 0x80,param_1 + 0x48);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80);
    plVar5 = (long *)(*(long *)(param_1 + 0x80) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      lVar8 = *(long *)(param_1 + 0x70);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa13764);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  FUN_10a688c1c(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa13828; end: 10aa1393b;  */

void FUN_10aa13828(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x70);
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
    plVar4 = *(long **)(param_1 + 0x80);
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
  FUN_10a688c1c(param_1 + 0x50);
  plVar4 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa1393c; end: 10aa13bef;  */

void FUN_10aa1393c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    FUN_10a9f5890(param_1 + 0x58,param_1 + 0x48,**(undefined8 **)(param_1 + 0x60));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
    func_0x0001092af8bc(*(undefined8 *)(param_1 + 0x60));
    lVar8 = **(long **)(param_1 + 0x60);
    if ((*(byte *)(lVar8 + 0x99) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa13b6c);
      (*pcVar4)();
    }
    FUN_10a087a78(*(long **)(param_1 + 0x60) + 1,lVar8 + 0x98);
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa13bf0; end: 10aa13d5f;  */

void FUN_10aa13bf0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10aa13d44;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa13d44;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
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
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10aa13d44;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa13d44;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10aa13d44:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa13d60; end: 10aa14003;  */

void FUN_10aa13d60(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    FUN_10a9f5560(param_1 + 0x80,param_1 + 0x48);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80);
    plVar5 = (long *)(*(long *)(param_1 + 0x80) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      lVar8 = *(long *)(param_1 + 0x70);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa13f40);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  FUN_10a688c1c(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa14004; end: 10aa14117;  */

void FUN_10aa14004(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x70);
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
    plVar4 = *(long **)(param_1 + 0x80);
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
  FUN_10a688c1c(param_1 + 0x50);
  plVar4 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa14118; end: 10aa143cb;  */

void FUN_10aa14118(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    FUN_10a9f6620(param_1 + 0x58,param_1 + 0x48,**(undefined8 **)(param_1 + 0x60));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
    func_0x0001092af8bc(*(undefined8 *)(param_1 + 0x60));
    lVar8 = **(long **)(param_1 + 0x60);
    if ((*(byte *)(lVar8 + 0x9c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa14348);
      (*pcVar4)();
    }
    FUN_10a202b84(*(long **)(param_1 + 0x60) + 1,lVar8 + 0x98);
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa143cc; end: 10aa1453b;  */

void FUN_10aa143cc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10aa14520;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa14520;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
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
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10aa14520;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa14520;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10aa14520:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa1453c; end: 10aa147df;  */

void FUN_10aa1453c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    FUN_10a9f62f0(param_1 + 0x80,param_1 + 0x48);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80);
    plVar5 = (long *)(*(long *)(param_1 + 0x80) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      lVar8 = *(long *)(param_1 + 0x70);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa1471c);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  FUN_10a688c1c(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa147e0; end: 10aa148f3;  */

void FUN_10aa147e0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x70);
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
    plVar4 = *(long **)(param_1 + 0x80);
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
  FUN_10a688c1c(param_1 + 0x50);
  plVar4 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa148f4; end: 10aa14ba3;  */

void FUN_10aa148f4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    FUN_10a4f3e88(param_1 + 0x58,param_1 + 0x48,*(undefined8 *)(param_1 + 0x60));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
    func_0x0001092af8bc(*(undefined8 *)(param_1 + 0x60));
    lVar8 = **(long **)(param_1 + 0x60);
    if ((*(byte *)(lVar8 + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa14b20);
      (*pcVar4)();
    }
    FUN_10a05aad0(*(long **)(param_1 + 0x60) + 1,lVar8 + 0x98);
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa14ba4; end: 10aa14d13;  */

void FUN_10aa14ba4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10aa14cf8;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa14cf8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
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
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10aa14cf8;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa14cf8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10aa14cf8:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa14d14; end: 10aa14fb7;  */

void FUN_10aa14d14(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    FUN_10a9f7140(param_1 + 0x80,param_1 + 0x48);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80);
    plVar5 = (long *)(*(long *)(param_1 + 0x80) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      lVar8 = *(long *)(param_1 + 0x70);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa14ef4);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  FUN_10a688c1c(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa14fb8; end: 10aa150cb;  */

void FUN_10aa14fb8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x70);
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
    plVar4 = *(long **)(param_1 + 0x80);
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
  FUN_10a688c1c(param_1 + 0x50);
  plVar4 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa150cc; end: 10aa1537f;  */

void FUN_10aa150cc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    FUN_10a9f779c(param_1 + 0x58,param_1 + 0x48,**(undefined8 **)(param_1 + 0x60));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
    func_0x0001092af8bc(*(undefined8 *)(param_1 + 0x60));
    lVar8 = **(long **)(param_1 + 0x60);
    if ((*(byte *)(lVar8 + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa152fc);
      (*pcVar4)();
    }
    FUN_10a9f82e0(*(long **)(param_1 + 0x60) + 1,lVar8 + 0x98);
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa15380; end: 10aa154ef;  */

void FUN_10aa15380(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10aa154d4;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa154d4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
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
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10aa154d4;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10aa154d4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10aa154d4:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa154f0; end: 10aa15793;  */

void FUN_10aa154f0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    FUN_10a9f746c(param_1 + 0x80,param_1 + 0x48);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80);
    plVar5 = (long *)(*(long *)(param_1 + 0x80) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      lVar8 = *(long *)(param_1 + 0x70);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa156d0);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  FUN_10a688c1c(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa15794; end: 10aa158a7;  */

void FUN_10aa15794(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x70);
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
    plVar4 = *(long **)(param_1 + 0x80);
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
  FUN_10a688c1c(param_1 + 0x50);
  plVar4 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa158a8; end: 10aa159db;  */

undefined1  [16] FUN_10aa158a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10f68b8dc;
  return auVar1;
}



/* Entry: 10aa159dc; end: 10aa15f2b;  */

void FUN_10aa159dc(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68b8dc,0x15);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3aa90;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
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
  uStack_58 = 0xa4;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3aa90;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3d528;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa15f0c;
    FUN_10a054dac(param_1,&UNK_10f68a4a2,FUN_10aa4ddb4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa15f0c;
    FUN_10a054dac(param_1,&UNK_10f68a4ab,FUN_10aa4df94,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa15f0c;
    FUN_10a054dac(param_1,&UNK_10f68a4b6,FUN_10aa4e120,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa15f0c;
    FUN_10a054dac(param_1,&UNK_10f68a4c0,FUN_10aa4e1d8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa15f0c;
    FUN_10a054dac(param_1,&UNK_10f68a4d1,FUN_10aa4e290,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa15f0c;
    FUN_10a054dac(param_1,&UNK_10f68a4e4,FUN_10aa4e348,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa15f0c;
    FUN_10a054dac(param_1,&UNK_10f68a4f6,FUN_10aa4e400,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa15f0c;
    FUN_10a054dac(param_1,&UNK_10f68a509,FUN_10aa4e9ec,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f5566f8,FUN_10aa4ec1c,FUN_10aa4ecdc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f4a7777,FUN_10aa4ee54,FUN_10aa4ef48);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"density",FUN_10aa4f0a4,FUN_10aa4f1ac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a51a,FUN_10aa4f264,FUN_10aa4f320);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a522,FUN_10aa4f410,FUN_10aa4f4cc);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68b8dc,0x15);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa15f0c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa15f10);
  (*pcVar6)();
}



/* Entry: 10aa15f2c; end: 10aa1603f;  */

void FUN_10aa15f2c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plStack_28;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  param_1[2] = (long)&PTR_DAT_110c38898;
  param_1[7] = (long)&PTR_DAT_110c388f0;
  param_1[0xd] = (long)&PTR_DAT_110c38910;
  param_1[0x16] = (long)&PTR_DAT_110c38980;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[3];
  param_1[0x17] = (long)&PTR_DAT_110c389b0;
  if (param_1[0x4a] != 0) {
    *(undefined8 *)(param_1[0x4a] + 0x40) = 0;
  }
  func_0x00010a004e5c(param_1 + 0x72);
  func_0x00010aa3cadc(param_1 + 0x6b);
  func_0x00010aa3cadc(param_1 + 0x68);
  func_0x00010aa3cadc(param_1 + 0x65);
  func_0x00010aa3cadc(param_1 + 0x62);
  FUN_10aa2913c(param_1 + 0x57);
  plVar1 = (long *)param_1[0x56];
  param_1[0x56] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010aa5a44c(param_1 + 0x52);
  func_0x00010aa4dcac(param_1 + 0x50);
  func_0x00010aa5a3f4(param_1 + 0x4e);
  func_0x00010aa4dcac(param_1 + 0x4c);
  FUN_10a409540(param_1 + 0x4a);
  func_0x00010aa5a39c(param_1 + 0x48);
  FUN_10aa5a038(param_1 + 0x46);
  FUN_10aa59cd4(param_1 + 0x44);
  FUN_10aa59970(param_1 + 0x42);
  FUN_10aa5960c(param_1 + 0x40);
  FUN_10aa592a8(param_1 + 0x3e);
  lVar2 = param_2[1];
  *param_1 = lVar2;
  param_1[2] = (long)&PTR_DAT_110bcfec8;
  param_1[7] = (long)&PTR_DAT_110bcff20;
  param_1[0xd] = (long)&PTR_DAT_110bcff40;
  param_1[0x16] = (long)&PTR_DAT_110bcffb0;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[2];
  param_1[0x17] = (long)&PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = (long)&PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  plStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&plStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10aa16040; end: 10aa160b3;  */

void FUN_10aa16040(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c3a788;
  param_1[2] = &PTR_DAT_110c38898;
  param_1[7] = &PTR_DAT_110c388f0;
  param_1[0xd] = &PTR_DAT_110c38910;
  param_1[0x16] = &PTR_DAT_110c38980;
  param_1[0x79] = &PTR_DAT_110c3a8d8;
  param_1[0x17] = &PTR_DAT_110c389b0;
  if (param_1[0x4a] != 0) {
    *(undefined8 *)(param_1[0x4a] + 0x40) = 0;
  }
  func_0x00010a004e5c(param_1 + 0x72);
  func_0x00010aa3cadc(param_1 + 0x6b);
  func_0x00010aa3cadc(param_1 + 0x68);
  func_0x00010aa3cadc(param_1 + 0x65);
  func_0x00010aa3cadc(param_1 + 0x62);
  FUN_10aa2913c(param_1 + 0x57);
  plVar1 = (long *)param_1[0x56];
  param_1[0x56] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010aa5a44c(param_1 + 0x52);
  func_0x00010aa4dcac(param_1 + 0x50);
  func_0x00010aa5a3f4(param_1 + 0x4e);
  func_0x00010aa4dcac(param_1 + 0x4c);
  FUN_10a409540(param_1 + 0x4a);
  func_0x00010aa5a39c(param_1 + 0x48);
  FUN_10aa5a038(param_1 + 0x46);
  FUN_10aa59cd4(param_1 + 0x44);
  FUN_10aa59970(param_1 + 0x42);
  FUN_10aa5960c(param_1 + 0x40);
  FUN_10aa592a8(param_1 + 0x3e);
  *param_1 = &PTR_FUN_110c3a928;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x79] = &PTR_DAT_110c3aa58;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10aa160b4; end: 10aa1616f;  */

void FUN_10aa160b4(undefined8 param_1)

{
  FUN_10aa15f2c(param_1,&PTR_PTR_110c38738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa16170; end: 10aa16293;  */

void FUN_10aa16170(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10aa15f2c((long)param_1 + lVar1,&PTR_PTR_110c38738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10aa16294; end: 10aa16823;  */

void FUN_10aa16294(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  long *param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  byte bVar6;
  long lVar7;
  code **unaff_x22;
  undefined4 uVar8;
  long *plVar9;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  plVar4 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c3b500);
  if ((int)plVar4 == 0) {
    (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c3b520);
    FUN_10a4089a8(&plStack_90,param_5);
    if (*(long *)(param_4 + 0x250) != 0) {
      *(undefined8 *)(*(long *)(param_4 + 0x250) + 0x40) = 0;
    }
    FUN_10a91135c(param_4 + 0x250,&plStack_90);
    plVar4 = plStack_88;
    *(long *)(*(long *)(param_4 + 0x250) + 0x40) = param_4;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    (**(code **)(*param_5 + 0x220))(param_5);
    FUN_10aa18650(param_5,&PTR_DAT_110c38a68,param_4 + 0x270);
    FUN_10aa187e0(param_5,&PTR_DAT_110c38a88,param_4 + 0x280);
    plVar4 = (long *)(param_4 + 0x260);
    FUN_10aa187e0(param_5,&PTR_DAT_110c38aa8,plVar4);
    if (*plVar4 == 0) {
      FUN_10aa18970(&plStack_90,*(undefined8 *)(param_4 + 0x170));
      FUN_10aa18a98(plVar4,&plStack_90);
      plVar4 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar9 = plStack_88 + 1;
        do {
          lVar7 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    FUN_10aa18afc(param_5,&PTR_DAT_110c38ac8,param_4 + 0x290);
    iVar1 = *(int *)(*(long *)(*(long *)(param_4 + 0x170) + 0xa20) + 0x18);
    plVar4 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110c3b540,0);
    *(byte *)(param_4 + 0x2a0) = *(byte *)(param_4 + 0x2a0) & 0xfe | (byte)plVar4;
    plVar4 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110c3b560,1);
    bVar6 = 0;
    if ((int)plVar4 == 0) {
      bVar6 = 2;
    }
    *(byte *)(param_4 + 0x2a0) = *(byte *)(param_4 + 0x2a0) & 0xfd | bVar6;
    plVar4 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110c3b580,iVar1 < 0xa7);
    bVar6 = 0x10;
    if ((int)plVar4 == 0) {
      bVar6 = 0;
    }
    *(byte *)(param_4 + 0x2a0) = *(byte *)(param_4 + 0x2a0) & 0xef | bVar6;
    plVar4 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110c3b5a0,0);
    bVar6 = 0x20;
    if ((int)plVar4 == 0) {
      bVar6 = 0;
    }
    *(byte *)(param_4 + 0x2a0) = *(byte *)(param_4 + 0x2a0) & 0xdf | bVar6;
    plVar4 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110c3b5c0,0);
    bVar6 = 4;
    if ((int)plVar4 == 0) {
      bVar6 = 0;
    }
    *(byte *)(param_4 + 0x2a0) = *(byte *)(param_4 + 0x2a0) & 0xfb | bVar6;
    plVar4 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110c3b5e0,0);
    bVar6 = 8;
    if ((int)plVar4 == 0) {
      bVar6 = 0;
    }
    *(byte *)(param_4 + 0x2a0) = *(byte *)(param_4 + 0x2a0) & 0xf7 | bVar6;
    uVar8 = 0x41f00000;
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110c3b600);
    *(undefined4 *)(param_4 + 0x2a4) = uVar8;
    ppuVar5 = &PTR_DAT_110c3b620;
    uVar8 = 0x41f00000;
    (**(code **)(*param_5 + 0x48))(param_5);
    *(undefined4 *)(param_4 + 0x2a8) = uVar8;
  }
  else {
    plVar4 = (long *)0xa8;
    __Znwm();
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110bd3fb0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined1 *)(plVar4 + 7) = 0;
    plVar4[0xb] = 0;
    *(undefined8 *)((long)plVar4 + 0x3c) = 0;
    *(undefined8 *)((long)plVar4 + 0x4c) = 0;
    *(undefined8 *)((long)plVar4 + 0x44) = 0;
    *(undefined2 *)((long)plVar4 + 0x54) = 0x100;
    plStack_a0 = plVar4 + 3;
    *plStack_a0 = (long)&PTR_FUN_110bd37e8;
    plVar4[6] = (long)&PTR_DAT_110bd3890;
    plVar4[0x13] = 0;
    plVar4[0x14] = 0;
    plVar4[0x12] = 0;
    *(undefined8 *)((long)plVar4 + 0x84) = 0;
    *(undefined8 *)((long)plVar4 + 0x7c) = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[0xf] = 0;
    plVar4[0xe] = 0;
    plVar9 = plVar4 + 1;
    *plVar9 = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(long *)(param_4 + 0x250) != 0) {
      *(undefined8 *)(*(long *)(param_4 + 0x250) + 0x40) = 0;
    }
    plStack_98 = plVar4;
    plStack_90 = plStack_a0;
    plStack_88 = plVar4;
    FUN_10a91135c(param_4 + 0x250,&plStack_a0);
    plVar4 = plStack_98;
    *(long *)(*(long *)(param_4 + 0x250) + 0x40) = param_4;
    if (plStack_98 != (long *)0x0) {
      plVar9 = plStack_98 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_78 = FUN_10aa5a4fc;
    ppuStack_70 = &PTR_DAT_110c3c148;
    unaff_x22 = &pcStack_78;
    plStack_60 = plStack_88;
    plStack_68 = plStack_90;
    plStack_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
    ppuVar5 = &PTR_DAT_110c3b500;
    plVar9 = plStack_90;
    FUN_10a406358(param_5,&PTR_DAT_110c3b500,&pcStack_78,0);
    uVar8 = SUB84(plVar9,0);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (plVar4 != (long *)0x0) {
      plVar9 = plVar4 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  FUN_10aa18c8c(param_4);
  lVar7 = *(long *)(param_4 + 0x2b0);
  plVar4 = (long *)0x0;
  if (lVar7 != 0) {
    ppuVar5 = &PTR_DAT_110bd3e38;
    ___dynamic_cast(lVar7,&PTR_DAT_110bd3e38,&PTR_DAT_110c2e730,0);
    plVar4 = (long *)0x0;
    if (lVar7 != 0) {
      (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110c38ae8,&UNK_10e4eb940);
      *(undefined1 *)(lVar7 + 0x100) = 1;
      *(undefined4 *)(lVar7 + 0x110) = uVar8;
      *(undefined4 *)(lVar7 + 0x114) = param_2;
      *(undefined4 *)(lVar7 + 0x118) = param_3;
      ppuVar5 = &PTR_s_scale_110c3b640;
      (**(code **)(*param_5 + 0xf0))(param_5,&PTR_s_scale_110c3b640,&UNK_10e4eb94c);
      *(undefined1 *)(lVar7 + 0x100) = 1;
      *(undefined4 *)(lVar7 + 0x104) = uVar8;
      *(undefined4 *)(lVar7 + 0x108) = param_2;
      *(undefined4 *)(lVar7 + 0x10c) = param_3;
      plVar4 = param_5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x22 + 1);
  FUN_10a40b80c(&plStack_a0);
  FUN_10a40b80c(&plStack_90);
  __Unwind_Resume();
  func_0x00010aa168e0();
  (**(code **)(*ppuVar5 + 0x70))(ppuVar5,&PTR_DAT_110c3b460,(*(byte *)(plVar4 + 0x77) & 1) == 0);
  (**(code **)(*ppuVar5 + 0x70))(ppuVar5,&PTR_DAT_110c3b480,(*(byte *)(plVar4 + 0x77) & 2) == 0);
  (**(code **)(*ppuVar5 + 0x60))(*(undefined4 *)((long)plVar4 + 0x3bc),ppuVar5,&PTR_DAT_110c3b4a0);
  (**(code **)(*ppuVar5 + 0x60))((int)plVar4[0x78],ppuVar5,&PTR_DAT_110c3b4c0);
                    /* WARNING: Could not recover jumptable at 0x00010aa168dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar5 + 0x60))(*(undefined4 *)((long)plVar4 + 0x3c4),ppuVar5,&PTR_DAT_110c3b4e0);
  return;
}



/* Entry: 10aa16824; end: 10aa16a97;  */

void FUN_10aa16824(long param_1,long *param_2)

{
  func_0x00010aa168e0();
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c3b460,(*(byte *)(param_1 + 0x3b8) & 1) == 0);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c3b480,(*(byte *)(param_1 + 0x3b8) & 2) == 0);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x3bc),param_2,&PTR_DAT_110c3b4a0);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x3c0),param_2,&PTR_DAT_110c3b4c0);
                    /* WARNING: Could not recover jumptable at 0x00010aa168dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x3c4),param_2,&PTR_DAT_110c3b4e0);
  return;
}



/* Entry: 10aa16a98; end: 10aa16d0f;  */

void FUN_10aa16a98(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar10 = param_2;
    uVar9 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar9 = *puVar4;
    lVar10 = *plVar7;
  }
  FUN_10a3dd220(*(undefined8 *)(param_2 + 0x170));
  FUN_10aa4f614(lVar10,uVar9);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110c3bbe8;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (*(long *)(lVar10 + 0x30) == 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(long *)(lVar10 + 0x28) = lVar10;
    *(long **)(lVar10 + 0x30) = plVar7;
  }
  else {
    if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10aa16bf0;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(long *)(lVar10 + 0x28) = lVar10;
    *(long **)(lVar10 + 0x30) = plVar7;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar8 = *plVar11;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = lVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10aa16bf0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10aa16d10(lVar10,param_2);
  uVar9 = *(undefined8 *)(param_2 + 0x3b8);
  *(undefined8 *)(lVar10 + 0x3c0) = *(undefined8 *)(param_2 + 0x3c0);
  *(undefined8 *)(lVar10 + 0x3b8) = uVar9;
  *param_1 = lVar10;
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10aa16d10; end: 10aa16e5b;  */

void FUN_10aa16d10(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  (**(code **)(**(long **)(param_2 + 0x250) + 0x50))(auStack_40);
  if (*(long *)(param_1 + 0x250) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x250) + 0x40) = 0;
  }
  FUN_10a91135c(param_1 + 0x250,auStack_40);
  *(long *)(*(long *)(param_1 + 0x250) + 0x40) = param_1;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  func_0x00010aa17eac(param_1 + 0x290,*(undefined8 *)(param_2 + 0x290),
                      *(undefined8 *)(param_2 + 0x298));
  FUN_10aa17db4(param_1 + 0x270,*(undefined8 *)(param_2 + 0x270),*(undefined8 *)(param_2 + 0x278));
  func_0x00010aa17e38(param_1 + 0x280,*(undefined8 *)(param_2 + 0x280),
                      *(undefined8 *)(param_2 + 0x288));
  func_0x00010aa17e38(param_1 + 0x260,*(undefined8 *)(param_2 + 0x260),
                      *(undefined8 *)(param_2 + 0x268));
  uVar4 = *(undefined8 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a0) = uVar4;
  FUN_10aa18c8c(param_1);
  lVar6 = *(long *)(param_2 + 0x2b0);
  if ((lVar6 != 0) && (___dynamic_cast(lVar6,&PTR_DAT_110bd3e38,&PTR_DAT_110c2e730,0), lVar6 != 0))
  {
    lVar5 = *(long *)(param_1 + 0x2b0);
    *(undefined1 *)(lVar5 + 0x100) = 1;
    uVar4 = *(undefined8 *)(lVar6 + 0x110);
    *(undefined4 *)(lVar5 + 0x118) = *(undefined4 *)(lVar6 + 0x118);
    *(undefined8 *)(lVar5 + 0x110) = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x104);
    *(undefined4 *)(lVar5 + 0x10c) = *(undefined4 *)(lVar6 + 0x10c);
    *(undefined8 *)(lVar5 + 0x104) = uVar4;
  }
  return;
}



/* Entry: 10aa16e5c; end: 10aa16eef;  */

float FUN_10aa16e5c(float param_1,float param_2,float param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = *(undefined8 *)(param_4 + 0x168);
  FUN_10a2f1bb8(*(undefined8 *)(param_4 + 0x178));
  uVar1 = (ulong)((*(byte *)(param_4 + 0x2a0) & 2) == 0);
  fVar3 = param_1;
  FUN_10aa199c8(uVar2,uVar1,0x167 < *(int *)(*(long *)(*(long *)(param_4 + 0x170) + 0xa20) + 0x18));
  (**(code **)(**(long **)(param_4 + 0x250) + 0x78))
            (*(long **)(param_4 + 0x250),uVar2,uVar1 & 0xffffffffff);
  return param_3 * param_2 * param_1 * fVar3;
}



/* Entry: 10aa16ef0; end: 10aa16f8b;  */

void FUN_10aa16ef0(float param_1,long param_2)

{
  if (((*(byte *)(param_2 + 0x3b8) >> 1 & 1) != 0) && (*(float *)(param_2 + 0x3bc) == param_1)) {
    return;
  }
  *(byte *)(param_2 + 0x3b8) = *(byte *)(param_2 + 0x3b8) | 2;
  *(float *)(param_2 + 0x3bc) = param_1;
  *(undefined8 *)(param_2 + 0x3a0) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x3a8) = 0;
  return;
}



/* Entry: 10aa16f8c; end: 10aa170db;  */

void FUN_10aa16f8c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  byte bVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uStack_50;
  long *plStack_48;
  
  FUN_10aa29550(&uStack_50);
  puVar5 = *(undefined8 **)(param_1 + 0x310);
  if (puVar5 < *(undefined8 **)(param_1 + 0x318)) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar5[1] = plStack_48;
    *puVar5 = uStack_50;
    uVar2 = *(undefined4 *)(param_3 + 1);
    puVar5[2] = *param_3;
    *(undefined4 *)(puVar5 + 3) = uVar2;
    *(undefined4 *)((long)puVar5 + 0x1c) = 0;
    puVar5[4] = 0;
    bVar6 = 4;
    if (((uint)param_4 & 0xfffffffd) != 1) {
      bVar6 = 0;
    }
    bVar8 = 8;
    if (((uint)param_4 & 0xfe) != 2) {
      bVar8 = 0;
    }
    bVar9 = 0x10;
    if ((int)param_5 == 0) {
      bVar9 = 0;
    }
    *(byte *)(puVar5 + 5) = bVar8 | bVar9 | bVar6;
    puVar5 = puVar5 + 6;
    *(undefined8 **)(param_1 + 0x310) = puVar5;
  }
  else {
    puVar5 = (undefined8 *)(param_1 + 0x308);
    FUN_10aa4cfbc(puVar5,uStack_50,plStack_48,param_3,param_4,param_5);
  }
  *(undefined8 **)(param_1 + 0x310) = puVar5;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_48);
      return;
    }
  }
  return;
}



/* Entry: 10aa170dc; end: 10aa17113;  */

void FUN_10aa170dc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uStack_50;
  long *plStack_48;
  
  if (((*(byte *)(param_1 + 0x3b8) & 1) != 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x250) + 0x3d) & 1) != 0)) {
    return;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x170) + 0xac0);
  FUN_10aa29550(&uStack_50);
  puVar7 = *(undefined8 **)(lVar6 + 0x310);
  if (puVar7 < *(undefined8 **)(lVar6 + 0x318)) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar7[1] = plStack_48;
    *puVar7 = uStack_50;
    uVar2 = *(undefined4 *)(param_2 + 1);
    puVar7[2] = *param_2;
    *(undefined4 *)(puVar7 + 3) = uVar2;
    *(undefined4 *)((long)puVar7 + 0x1c) = 0;
    puVar7[4] = 0;
    bVar8 = 4;
    if (((uint)param_4 & 0xfffffffd) != 1) {
      bVar8 = 0;
    }
    bVar11 = 8;
    if (((uint)param_4 & 0xfe) != 2) {
      bVar11 = 0;
    }
    *(byte *)(puVar7 + 5) = bVar11 | bVar8;
    puVar7 = puVar7 + 6;
    *(undefined8 **)(lVar6 + 0x310) = puVar7;
  }
  else {
    puVar7 = (undefined8 *)(lVar6 + 0x308);
    FUN_10aa4cfbc(puVar7,uStack_50,plStack_48,param_2,param_4,0);
  }
  *(undefined8 **)(lVar6 + 0x310) = puVar7;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  lVar9 = *(long *)(lVar6 + 0x310);
  if (*(long *)(lVar6 + 0x308) == lVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa17270);
    (*pcVar5)();
  }
  uVar10 = *param_3;
  *(undefined4 *)(lVar9 + -0xc) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar9 + -0x14) = uVar10;
  *(byte *)(lVar9 + -8) = *(byte *)(lVar9 + -8) | 2;
  return;
}



/* Entry: 10aa17114; end: 10aa17283;  */

void FUN_10aa17114(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  undefined8 uStack_50;
  long *plStack_48;
  
  FUN_10aa29550(&uStack_50);
  puVar6 = *(undefined8 **)(param_1 + 0x310);
  if (puVar6 < *(undefined8 **)(param_1 + 0x318)) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar6[1] = plStack_48;
    *puVar6 = uStack_50;
    uVar2 = *(undefined4 *)(param_3 + 1);
    puVar6[2] = *param_3;
    *(undefined4 *)(puVar6 + 3) = uVar2;
    *(undefined4 *)((long)puVar6 + 0x1c) = 0;
    puVar6[4] = 0;
    bVar7 = 4;
    if (((uint)param_5 & 0xfffffffd) != 1) {
      bVar7 = 0;
    }
    bVar10 = 8;
    if (((uint)param_5 & 0xfe) != 2) {
      bVar10 = 0;
    }
    bVar11 = 0x10;
    if ((int)param_6 == 0) {
      bVar11 = 0;
    }
    *(byte *)(puVar6 + 5) = bVar10 | bVar11 | bVar7;
    puVar6 = puVar6 + 6;
    *(undefined8 **)(param_1 + 0x310) = puVar6;
  }
  else {
    puVar6 = (undefined8 *)(param_1 + 0x308);
    FUN_10aa4cfbc(puVar6,uStack_50,plStack_48,param_3,param_5,param_6);
  }
  *(undefined8 **)(param_1 + 0x310) = puVar6;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  lVar8 = *(long *)(param_1 + 0x310);
  if (*(long *)(param_1 + 0x308) != lVar8) {
    uVar9 = *param_4;
    *(undefined4 *)(lVar8 + -0xc) = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)(lVar8 + -0x14) = uVar9;
    *(byte *)(lVar8 + -8) = *(byte *)(lVar8 + -8) | 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa17270);
  (*pcVar5)();
}



/* Entry: 10aa17284; end: 10aa172b7;  */

void FUN_10aa17284(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  byte bVar8;
  long lVar9;
  byte bVar10;
  undefined8 uStack_50;
  long *plStack_48;
  
  if (((*(byte *)(param_1 + 0x3b8) & 1) != 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x250) + 0x3d) & 1) != 0)) {
    return;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x170) + 0xac0);
  FUN_10aa29550(&uStack_50);
  puVar7 = *(undefined8 **)(lVar6 + 0x310);
  if (puVar7 < *(undefined8 **)(lVar6 + 0x318)) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar7[1] = plStack_48;
    *puVar7 = uStack_50;
    uVar2 = *(undefined4 *)(param_2 + 1);
    puVar7[2] = *param_2;
    *(undefined4 *)(puVar7 + 3) = uVar2;
    *(undefined4 *)((long)puVar7 + 0x1c) = 0;
    puVar7[4] = 0;
    bVar8 = 4;
    if (((uint)param_3 & 0xfffffffd) != 1) {
      bVar8 = 0;
    }
    bVar10 = 8;
    if (((uint)param_3 & 0xfe) != 2) {
      bVar10 = 0;
    }
    *(byte *)(puVar7 + 5) = bVar10 | bVar8;
    puVar7 = puVar7 + 6;
    *(undefined8 **)(lVar6 + 0x310) = puVar7;
  }
  else {
    puVar7 = (undefined8 *)(lVar6 + 0x308);
    FUN_10aa4cfbc(puVar7,uStack_50,plStack_48,param_2,param_3,0);
  }
  *(undefined8 **)(lVar6 + 0x310) = puVar7;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  lVar9 = *(long *)(lVar6 + 0x310);
  if (*(long *)(lVar6 + 0x308) == lVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa17400);
    (*pcVar5)();
  }
  *(byte *)(lVar9 + -8) = *(byte *)(lVar9 + -8) | 1;
  return;
}



/* Entry: 10aa172b8; end: 10aa17413;  */

void FUN_10aa172b8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  byte bVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uStack_50;
  long *plStack_48;
  
  FUN_10aa29550(&uStack_50);
  puVar6 = *(undefined8 **)(param_1 + 0x310);
  if (puVar6 < *(undefined8 **)(param_1 + 0x318)) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar6[1] = plStack_48;
    *puVar6 = uStack_50;
    uVar2 = *(undefined4 *)(param_3 + 1);
    puVar6[2] = *param_3;
    *(undefined4 *)(puVar6 + 3) = uVar2;
    *(undefined4 *)((long)puVar6 + 0x1c) = 0;
    puVar6[4] = 0;
    bVar7 = 4;
    if (((uint)param_4 & 0xfffffffd) != 1) {
      bVar7 = 0;
    }
    bVar9 = 8;
    if (((uint)param_4 & 0xfe) != 2) {
      bVar9 = 0;
    }
    bVar10 = 0x10;
    if ((int)param_5 == 0) {
      bVar10 = 0;
    }
    *(byte *)(puVar6 + 5) = bVar9 | bVar10 | bVar7;
    puVar6 = puVar6 + 6;
    *(undefined8 **)(param_1 + 0x310) = puVar6;
  }
  else {
    puVar6 = (undefined8 *)(param_1 + 0x308);
    FUN_10aa4cfbc(puVar6,uStack_50,plStack_48,param_3,param_4,param_5);
  }
  *(undefined8 **)(param_1 + 0x310) = puVar6;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  lVar8 = *(long *)(param_1 + 0x310);
  if (*(long *)(param_1 + 0x308) != lVar8) {
    *(byte *)(lVar8 + -8) = *(byte *)(lVar8 + -8) | 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa17400);
  (*pcVar5)();
}



/* Entry: 10aa17414; end: 10aa17523;  */

/* WARNING: Removing unreachable block (ram,0x00010aa1702c) */

void FUN_10aa17414(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uStack_50;
  long *plStack_48;
  
  if (((*(byte *)(param_1 + 0x3b8) & 1) != 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x250) + 0x3d) & 1) != 0)) {
    return;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x170) + 0xac0);
  FUN_10aa29550(&uStack_50);
  puVar6 = *(undefined8 **)(lVar5 + 0x310);
  if (puVar6 < *(undefined8 **)(lVar5 + 0x318)) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar6[1] = plStack_48;
    *puVar6 = uStack_50;
    uVar2 = *(undefined4 *)(param_2 + 1);
    puVar6[2] = *param_2;
    *(undefined4 *)(puVar6 + 3) = uVar2;
    *(undefined4 *)((long)puVar6 + 0x1c) = 0;
    puVar6[4] = 0;
    bVar7 = 4;
    if (((uint)param_3 & 0xfffffffd) != 1) {
      bVar7 = 0;
    }
    bVar8 = 8;
    if (((uint)param_3 & 0xfe) != 2) {
      bVar8 = 0;
    }
    *(byte *)(puVar6 + 5) = bVar8 | 0x10 | bVar7;
    puVar6 = puVar6 + 6;
    *(undefined8 **)(lVar5 + 0x310) = puVar6;
  }
  else {
    puVar6 = (undefined8 *)(lVar5 + 0x308);
    FUN_10aa4cfbc(puVar6,uStack_50,plStack_48,param_2,param_3,1);
  }
  *(undefined8 **)(lVar5 + 0x310) = puVar6;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_48);
      return;
    }
  }
  return;
}



/* Entry: 10aa17524; end: 10aa17db3;  */

void FUN_10aa17524(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65c897,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3d528;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
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
  uStack_58 = 0x98;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3d528;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa17d94;
    FUN_10a054dac(param_1,&UNK_10f68a5c2,FUN_10aa5014c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2dd06f,FUN_10aa50284,FUN_10aa503b8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a5ce,FUN_10aa50730,FUN_10aa507ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a5dc,FUN_10aa50eac,FUN_10aa50f68);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f33c7a6,FUN_10aa5159c,FUN_10aa51658);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a5e3,FUN_10aa51710,FUN_10aa517cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c3bcc8,FUN_10aa51e00);
    FUN_10a0605c4(param_1,&UNK_10f68a5f1,FUN_10aa52c08,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c3bce0,FUN_10aa52d3c);
    FUN_10a0605c4(param_1,&UNK_10f68a601,FUN_10aa53b44,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c3bcf8,FUN_10aa53c78);
    FUN_10a0605c4(param_1,&UNK_10f68a612,FUN_10aa54a80,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c3bd10,FUN_10aa54bb4);
    FUN_10a0605c4(param_1,&UNK_10f68a622,FUN_10aa559bc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c3bd28,FUN_10aa55af0);
    FUN_10a0605c4(param_1,&UNK_10f68a630,FUN_10aa568f8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c3bd40,FUN_10aa56a2c);
    FUN_10a0605c4(param_1,&UNK_10f68a63e,FUN_10aa57834,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f305a7e,FUN_10aa57968,FUN_10aa57a50);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f63975c,FUN_10aa57b6c,FUN_10aa57c1c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"scale",FUN_10aa57da0,FUN_10aa57e50);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a64d,FUN_10aa57f50,FUN_10aa5800c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a65e,FUN_10aa580d8,FUN_10aa58198);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a668,FUN_10aa58288,FUN_10aa58344);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a676,FUN_10aa58434,FUN_10aa584f0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a693,FUN_10aa585e0,FUN_10aa5869c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f609bb0,FUN_10aa58780,FUN_10aa5883c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68a69e,FUN_10aa58920,FUN_10aa589dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68a6b4,FUN_10aa58acc,FUN_10aa58b88);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f409e07,FUN_10aa58c78,FUN_10aa58d30);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68a6c7,FUN_10aa58e0c,FUN_10aa58ec4);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65c897,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa17d94:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa17d98);
  (*pcVar6)();
}



/* Entry: 10aa17db4; end: 10aa17e27;  */

undefined8 * FUN_10aa17db4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10aa17e28; end: 10aa17e37;  */

undefined8 * FUN_10aa17e28(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x280) = uVar2;
  *(long *)(param_1 + 0x288) = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return (undefined8 *)(param_1 + 0x280);
}



/* Entry: 10aa17e38; end: 10aa17f5f;  */

undefined8 * FUN_10aa17e38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10aa17f60; end: 10aa183a7;  */

undefined8 *
FUN_10aa17f60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  param_1[0x77] = &PTR_FUN_110c383b8;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110c38a50,param_2,param_3);
  *puVar1 = &PTR_FUN_110c38778;
  puVar1[2] = &PTR_DAT_110c38898;
  puVar1[7] = &PTR_DAT_110c388f0;
  puVar1[0xd] = &PTR_DAT_110c38910;
  puVar1[0x77] = &PTR_DAT_110c38a10;
  puVar1[0x16] = &PTR_DAT_110c38980;
  puVar1[0x17] = &PTR_DAT_110c389b0;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c3bd68;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110c3bdb8;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10aa59218;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x3e] = puVar1 + 3;
  param_1[0x3f] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c3be10;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = &PTR_FUN_110c3be60;
  puVar1[0x12] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10aa5957c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x40] = puVar1 + 3;
  param_1[0x41] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c3beb8;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110c3bf08;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10aa598e0;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x42] = puVar1 + 3;
  param_1[0x43] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c3bf60;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = &PTR_FUN_110c3bfb0;
  puVar1[0x12] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10aa59c44;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x44] = puVar1 + 3;
  param_1[0x45] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c3c008;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110c3c058;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10aa59fa8;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x46] = puVar1 + 3;
  param_1[0x47] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110c3c0b0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110c3c100;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10aa5a30c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x48] = puVar1 + 3;
  param_1[0x49] = puVar1;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0x41f0000041f00000;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 1;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 1;
  *(undefined8 *)((long)param_1 + 900) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 0x374) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x72] = puVar1 + 3;
  param_1[0x73] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x72);
  param_1[0x74] = 0xffffffffffffffff;
  param_1[0x75] = 0;
  param_1[0x76] = 0xffffffff;
  if (param_1[0x4a] != 0) {
    *(undefined8 *)(param_1[0x4a] + 0x40) = 0;
  }
  FUN_10a91135c(param_1 + 0x4a,param_4);
  *(undefined8 **)(param_1[0x4a] + 0x40) = param_1;
  return param_1;
}



/* Entry: 10aa183a8; end: 10aa184e7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa18484) */
/* WARNING: Removing unreachable block (ram,0x00010aa18488) */
/* WARNING: Removing unreachable block (ram,0x00010aa18490) */
/* WARNING: Removing unreachable block (ram,0x00010aa18498) */
/* WARNING: Removing unreachable block (ram,0x00010aa1849c) */

undefined8 FUN_10aa183a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)0x68;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bd3f60;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined1 *)(plVar4 + 7) = 0;
  *(undefined8 *)((long)plVar4 + 0x3c) = 0;
  *(undefined4 *)((long)plVar4 + 0x44) = 0;
  *(undefined2 *)((long)plVar4 + 0x54) = 0x201;
  plVar4[0xb] = 0;
  plVar4[6] = (long)&PTR_FUN_110bd3ad0;
  *(undefined4 *)(plVar4 + 0xc) = 0x40c00000;
  lVar5 = NEON_fmov(0x40c00000,4);
  plVar4[9] = lVar5;
  *(undefined4 *)(plVar4 + 10) = 0x40c00000;
  plStack_40 = plVar4 + 3;
  *plStack_40 = (long)&PTR_FUN_110bd3a28;
  plStack_38 = plVar4;
  FUN_10aa17f60(param_1,param_2,param_3,&plStack_40);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10aa184e8; end: 10aa1855b;  */

void FUN_10aa184e8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c38778;
  param_1[2] = &PTR_DAT_110c38898;
  param_1[7] = &PTR_DAT_110c388f0;
  param_1[0xd] = &PTR_DAT_110c38910;
  param_1[0x16] = &PTR_DAT_110c38980;
  param_1[0x77] = &PTR_DAT_110c38a10;
  param_1[0x17] = &PTR_DAT_110c389b0;
  if (param_1[0x4a] != 0) {
    *(undefined8 *)(param_1[0x4a] + 0x40) = 0;
  }
  func_0x00010a004e5c(param_1 + 0x72);
  func_0x00010aa3cadc(param_1 + 0x6b);
  func_0x00010aa3cadc(param_1 + 0x68);
  func_0x00010aa3cadc(param_1 + 0x65);
  func_0x00010aa3cadc(param_1 + 0x62);
  FUN_10aa2913c(param_1 + 0x57);
  plVar1 = (long *)param_1[0x56];
  param_1[0x56] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010aa5a44c(param_1 + 0x52);
  func_0x00010aa4dcac(param_1 + 0x50);
  func_0x00010aa5a3f4(param_1 + 0x4e);
  func_0x00010aa4dcac(param_1 + 0x4c);
  FUN_10a409540(param_1 + 0x4a);
  func_0x00010aa5a39c(param_1 + 0x48);
  FUN_10aa5a038(param_1 + 0x46);
  FUN_10aa59cd4(param_1 + 0x44);
  FUN_10aa59970(param_1 + 0x42);
  FUN_10aa5960c(param_1 + 0x40);
  FUN_10aa592a8(param_1 + 0x3e);
  *param_1 = &PTR_FUN_110c3aba0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x77] = &PTR_DAT_110c3acd0;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10aa1855c; end: 10aa18617;  */

void FUN_10aa1855c(undefined8 param_1)

{
  FUN_10aa15f2c(param_1,&PTR_PTR_110c38a48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa18618; end: 10aa1864f;  */

void FUN_10aa18618(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10aa15f2c((long)param_1 + lVar1,&PTR_PTR_110c38a48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10aa18650; end: 10aa187df;  */

void FUN_10aa18650(long *param_1,undefined8 *param_2,undefined ***param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  long lVar11;
  long *plStack_1e0;
  long *plStack_1d8;
  code **ppcStack_1d0;
  undefined ***pppuStack_1c8;
  undefined ***pppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  undefined8 uStack_168;
  long lStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined ***pppuStack_148;
  undefined ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_118;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined ***pppuStack_a8;
  undefined ***pppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  pppuStack_a8 = param_3;
  FUN_109ffe064(&pppuStack_a0,*param_2,param_2[1]);
  ppuStack_88 = (undefined **)FUN_10aa5a530;
  ppuStack_80 = &PTR_FUN_110c3c160;
  pppuStack_78 = pppuStack_a8;
  uStack_68 = uStack_98;
  pppuStack_70 = pppuStack_a0;
  uStack_60 = lStack_90;
  pppuStack_a0 = (undefined ***)0x0;
  uStack_98 = 0;
  lStack_90 = 0;
  func_0x000107c2b054(auStack_c0,&UNK_10f68a4a1);
  pppuVar10 = &ppuStack_88;
  (**(code **)(*param_1 + 0x250))();
  if (cStack_a9 < '\0') {
    __ZdlPv(auStack_c0[0]);
  }
  pppuVar4 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (lStack_90 < 0) {
    pppuVar4 = pppuStack_a0;
    __ZdlPv();
  }
  if (((ulong)param_1 & 1) == 0) {
    param_2 = (undefined8 *)0x0;
    pppuVar10 = (undefined ***)0x0;
    FUN_10aa17db4();
    pppuVar4 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_a9 < '\0') {
    __ZdlPv(auStack_c0[0]);
  }
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_90 < 0) {
    __ZdlPv(pppuStack_a0);
  }
  func_0x00010aa5a3f4(&uStack_d0);
  __Unwind_Resume();
  pcStack_d8 = FUN_10aa187e0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  pppuStack_178 = pppuVar10;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_109ffe064(&pppuStack_170,*param_2,param_2[1]);
  pcStack_158 = FUN_10aa5a6f0;
  ppuStack_150 = &PTR_FUN_110c3c178;
  pppuStack_148 = pppuStack_178;
  uStack_138 = uStack_168;
  pppuStack_140 = pppuStack_170;
  uStack_130 = lStack_160;
  pppuStack_170 = (undefined ***)0x0;
  uStack_168 = 0;
  lStack_160 = 0;
  func_0x000107c2b054(auStack_190,&UNK_10f68a4a1);
  pppuVar5 = pppuVar4;
  (*(code *)(*pppuVar4)[0x4a])(pppuVar4,param_2,&pcStack_158,0,auStack_190);
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  pppuVar6 = &ppuStack_150;
  (*(code *)*ppuStack_150)();
  if (lStack_160 < 0) {
    pppuVar6 = pppuStack_170;
    __ZdlPv();
  }
  if (((ulong)pppuVar5 & 1) == 0) {
    param_2 = (undefined8 *)0x0;
    FUN_10aa17e38(pppuVar10,0,0);
    pppuVar6 = pppuVar10;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  (*(code *)*ppuStack_150)(&ppuStack_150);
  if (lStack_160 < 0) {
    __ZdlPv(pppuStack_170);
  }
  func_0x00010aa4dcac(&uStack_1a0);
  pppuVar10 = pppuVar6;
  __Unwind_Resume(pppuVar6);
  pcStack_1a8 = FUN_10aa18970;
  plVar7 = (long *)0x150;
  puVar9 = param_2;
  ppcStack_1d0 = &pcStack_158;
  pppuStack_1c8 = pppuVar4;
  pppuStack_1c0 = pppuVar5;
  pppuStack_1b8 = pppuVar6;
  ppuStack_1b0 = &puStack_e0;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c3bb98;
  plVar1 = plVar7 + 3;
  plVar8 = plVar7;
  func_0x00010a0fda30();
  FUN_10aa7093c(plVar1,param_2,plVar8,puVar9);
  plVar7[3] = (long)&PTR_FUN_110c39ac0;
  plVar7[5] = (long)&PTR_DAT_110c39b60;
  plVar7[10] = (long)&PTR_DAT_110c39bb8;
  *(undefined1 *)(plVar7 + 0x1f) = 0;
  plVar7[0x21] = 0;
  plVar7[0x20] = 0;
  plVar7[0x23] = 0;
  plVar7[0x22] = 0;
  plVar7[0x25] = 0;
  plVar7[0x24] = 0;
  plVar7[0x27] = 0;
  plVar7[0x26] = 0;
  plVar7[0x29] = 0;
  plVar7[0x28] = 0;
  plStack_1e0 = plVar1;
  plStack_1d8 = plVar7;
  func_0x00010aa4dc00(&plStack_1e0,plVar7 + 8,plVar1);
  FUN_10aa4da60(pppuVar10,&plStack_1e0);
  plVar1 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    plVar8 = plStack_1d8 + 1;
    do {
      lVar11 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10aa187e0; end: 10aa1896f;  */

void FUN_10aa187e0(long *param_1,undefined8 *param_2,undefined ***param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plStack_110;
  long *plStack_108;
  code **ppcStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined ***pppuStack_a8;
  undefined ***pppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  pppuStack_a8 = param_3;
  FUN_109ffe064(&pppuStack_a0,*param_2,param_2[1]);
  pcStack_88 = FUN_10aa5a6f0;
  ppuStack_80 = &PTR_FUN_110c3c178;
  pppuStack_78 = pppuStack_a8;
  uStack_68 = uStack_98;
  pppuStack_70 = pppuStack_a0;
  uStack_60 = lStack_90;
  pppuStack_a0 = (undefined ***)0x0;
  uStack_98 = 0;
  lStack_90 = 0;
  func_0x000107c2b054(auStack_c0,&UNK_10f68a4a1);
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_88,0,auStack_c0);
  if (cStack_a9 < '\0') {
    __ZdlPv(auStack_c0[0]);
  }
  pppuVar4 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (lStack_90 < 0) {
    pppuVar4 = pppuStack_a0;
    __ZdlPv();
  }
  if (((ulong)plVar3 & 1) == 0) {
    param_2 = (undefined8 *)0x0;
    FUN_10aa17e38(param_3,0,0);
    pppuVar4 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_a9 < '\0') {
    __ZdlPv(auStack_c0[0]);
  }
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_90 < 0) {
    __ZdlPv(pppuStack_a0);
  }
  func_0x00010aa4dcac(&uStack_d0);
  pppuVar5 = pppuVar4;
  __Unwind_Resume(pppuVar4);
  pcStack_d8 = FUN_10aa18970;
  plVar6 = (long *)0x150;
  puVar8 = param_2;
  ppcStack_100 = &pcStack_88;
  plStack_f8 = param_1;
  plStack_f0 = plVar3;
  pppuStack_e8 = pppuVar4;
  puStack_e0 = &stack0xfffffffffffffff0;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110c3bb98;
  plVar3 = plVar6 + 3;
  plVar7 = plVar6;
  func_0x00010a0fda30();
  FUN_10aa7093c(plVar3,param_2,plVar7,puVar8);
  plVar6[3] = (long)&PTR_FUN_110c39ac0;
  plVar6[5] = (long)&PTR_DAT_110c39b60;
  plVar6[10] = (long)&PTR_DAT_110c39bb8;
  *(undefined1 *)(plVar6 + 0x1f) = 0;
  plVar6[0x21] = 0;
  plVar6[0x20] = 0;
  plVar6[0x23] = 0;
  plVar6[0x22] = 0;
  plVar6[0x25] = 0;
  plVar6[0x24] = 0;
  plVar6[0x27] = 0;
  plVar6[0x26] = 0;
  plVar6[0x29] = 0;
  plVar6[0x28] = 0;
  plStack_110 = plVar3;
  plStack_108 = plVar6;
  func_0x00010aa4dc00(&plStack_110,plVar6 + 8,plVar3);
  FUN_10aa4da60(pppuVar5,&plStack_110);
  plVar3 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar7 = plStack_108 + 1;
    do {
      lVar9 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 10aa18970; end: 10aa18a97;  */

void FUN_10aa18970(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)0x150;
  uVar6 = param_2;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c3bb98;
  plVar1 = plVar4 + 3;
  plVar5 = plVar4;
  func_0x00010a0fda30();
  FUN_10aa7093c(plVar1,param_2,plVar5,uVar6);
  plVar4[3] = (long)&PTR_FUN_110c39ac0;
  plVar4[5] = (long)&PTR_DAT_110c39b60;
  plVar4[10] = (long)&PTR_DAT_110c39bb8;
  *(undefined1 *)(plVar4 + 0x1f) = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x23] = 0;
  plVar4[0x22] = 0;
  plVar4[0x25] = 0;
  plVar4[0x24] = 0;
  plVar4[0x27] = 0;
  plVar4[0x26] = 0;
  plVar4[0x29] = 0;
  plVar4[0x28] = 0;
  plStack_40 = plVar1;
  plStack_38 = plVar4;
  FUN_10aa4dc00(&plStack_40,plVar4 + 8,plVar1);
  FUN_10aa4da60(param_1,&plStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10aa18a98; end: 10aa18afb;  */

undefined8 * FUN_10aa18a98(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 10aa18afc; end: 10aa18c8b;  */

void FUN_10aa18afc(long *param_1,undefined8 *param_2,undefined ***param_3)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined1 uStack_104;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  long *plStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined ***pppuStack_a8;
  undefined ***pppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  pppuStack_a8 = param_3;
  FUN_109ffe064(&pppuStack_a0,*param_2,param_2[1]);
  pcStack_88 = FUN_10aa5a8b4;
  ppuStack_80 = &PTR_FUN_110c3c190;
  pppuStack_78 = pppuStack_a8;
  uStack_68 = uStack_98;
  pppuStack_70 = pppuStack_a0;
  uStack_60 = lStack_90;
  pppuStack_a0 = (undefined ***)0x0;
  uStack_98 = 0;
  lStack_90 = 0;
  func_0x000107c2b054(auStack_c0,&UNK_10f68a4a1);
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_88,0,auStack_c0);
  if (cStack_a9 < '\0') {
    __ZdlPv(auStack_c0[0]);
  }
  pppuVar3 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (lStack_90 < 0) {
    pppuVar3 = pppuStack_a0;
    __ZdlPv();
  }
  if (((ulong)param_1 & 1) == 0) {
    func_0x00010aa17eac(param_3,0,0);
    pppuVar3 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (cStack_a9 < '\0') {
      __ZdlPv(auStack_c0[0]);
    }
    (*(code *)*ppuStack_80)(&ppuStack_80);
    if (lStack_90 < 0) {
      __ZdlPv(pppuStack_a0);
    }
    func_0x00010aa5a44c(&uStack_d0);
    pppuVar4 = pppuVar3;
    __Unwind_Resume();
    pcStack_d8 = FUN_10aa18c8c;
    pppuVar4[0x74] = (undefined **)0xffffffffffffffff;
    pppuVar4[0x75] = (undefined **)0x0;
    ppuStack_f8 = pppuVar4[0x4b];
    ppuStack_100 = pppuVar4[0x4a];
    if (pppuVar4[0x4b] != (undefined **)0x0) {
      ppuVar5 = pppuVar4[0x4b] + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar2) {
          *ppuVar5 = *ppuVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plStack_f0 = param_1;
    pppuStack_e8 = pppuVar3;
    puStack_e0 = &stack0xfffffffffffffff0;
    if ((*(byte *)(pppuVar4 + 0x54) >> 1 & 1) == 0) {
      ppuVar5 = pppuVar4[0x2d];
      uVar7 = 1;
      FUN_10aa199c8(ppuVar5,1,0x167 < *(int *)(pppuVar4[0x2e][0x144] + 0x18));
      uStack_108 = (undefined4)uVar7;
      uStack_104 = (undefined1)(uVar7 >> 0x20);
      ppuStack_110 = ppuVar5;
      if ((uVar7 >> 0x20 & 1) != 0) {
        (**(code **)(*ppuStack_100 + 0x70))(&ppuStack_120,ppuStack_100,&ppuStack_100,&ppuStack_110);
        ppuVar5 = ppuStack_f8;
        ppuStack_f8 = ppuStack_118;
        ppuStack_100 = ppuStack_120;
        ppuStack_120 = (undefined **)0x0;
        ppuStack_118 = (undefined **)0x0;
        if (ppuVar5 != (undefined **)0x0) {
          ppuVar6 = ppuVar5 + 1;
          do {
            puVar8 = *ppuVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
            if (bVar2) {
              *ppuVar6 = puVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (puVar8 == (undefined *)0x0) {
            (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
          }
        }
        ppuVar5 = ppuStack_118;
        if (ppuStack_118 != (undefined **)0x0) {
          ppuVar6 = ppuStack_118 + 1;
          do {
            puVar8 = *ppuVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
            if (bVar2) {
              *ppuVar6 = puVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (puVar8 == (undefined *)0x0) {
            (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
          }
        }
      }
    }
    pppuVar3 = pppuVar4 + 0x56;
    ppuVar5 = pppuVar4[0x56];
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar5 = pppuVar4[0x4a];
      ppuStack_128 = ppuStack_f8;
      ppuStack_130 = ppuStack_100;
      if (ppuStack_f8 != (undefined **)0x0) {
        ppuVar6 = ppuStack_f8 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar2) {
            *ppuVar6 = *ppuVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      (**(code **)(*ppuVar5 + 0x68))(&ppuStack_110,ppuVar5,&ppuStack_130);
      ppuVar5 = ppuStack_110;
      ppuStack_110 = (undefined **)0x0;
      ppuVar6 = *pppuVar3;
      *pppuVar3 = ppuVar5;
      if (ppuVar6 != (undefined **)0x0) {
        (**(code **)(*ppuVar6 + 8))();
        ppuVar5 = ppuStack_110;
        ppuStack_110 = (undefined **)0x0;
        if (ppuVar5 != (undefined **)0x0) {
          (**(code **)(*ppuVar5 + 8))();
        }
      }
      ppuVar5 = ppuStack_128;
      if (ppuStack_128 != (undefined **)0x0) {
        ppuVar6 = ppuStack_128 + 1;
        do {
          puVar8 = *ppuVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar2) {
            *ppuVar6 = puVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar8 == (undefined *)0x0) {
          (**(code **)(*ppuStack_128 + 0x10))(ppuStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
        }
      }
    }
    else {
      (**(code **)(*ppuVar5 + 0x20))(ppuVar5,pppuVar3,&ppuStack_100);
    }
    ppuVar5 = ppuStack_f8;
    if (ppuStack_f8 != (undefined **)0x0) {
      ppuVar6 = ppuStack_f8 + 1;
      do {
        puVar8 = *ppuVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar2) {
          *ppuVar6 = puVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar8 == (undefined *)0x0) {
        (**(code **)(*ppuStack_f8 + 0x10))(ppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
      }
    }
    return;
  }
  return;
}



/* Entry: 10aa18c8c; end: 10aa18ee3;  */

void FUN_10aa18c8c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  long *plStack_30;
  long *plStack_28;
  
  *(undefined8 *)(param_1 + 0x3a0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  plStack_28 = *(long **)(param_1 + 600);
  plStack_30 = *(long **)(param_1 + 0x250);
  if (*(long *)(param_1 + 600) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 600) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((*(byte *)(param_1 + 0x2a0) >> 1 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x168);
    uVar6 = 1;
    FUN_10aa199c8(plVar3,1,0x167 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18));
    uStack_38 = (undefined4)uVar6;
    uStack_34 = (undefined1)(uVar6 >> 0x20);
    plStack_40 = plVar3;
    if ((uVar6 >> 0x20 & 1) != 0) {
      (**(code **)(*plStack_30 + 0x70))(&plStack_50,plStack_30,&plStack_30,&plStack_40);
      plVar3 = plStack_28;
      plStack_28 = plStack_48;
      plStack_30 = plStack_50;
      plStack_50 = (long *)0x0;
      plStack_48 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        plVar4 = plVar3 + 1;
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      plVar3 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
  }
  plVar3 = (long *)(param_1 + 0x2b0);
  plVar4 = *(long **)(param_1 + 0x2b0);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x250);
    plStack_58 = plStack_28;
    plStack_60 = plStack_30;
    if (plStack_28 != (long *)0x0) {
      plVar5 = plStack_28 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    (**(code **)(*plVar4 + 0x68))(&plStack_40,plVar4,&plStack_60);
    plVar4 = plStack_40;
    plStack_40 = (long *)0x0;
    plVar5 = (long *)*plVar3;
    *plVar3 = (long)plVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      plVar3 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar3,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aa18ee4; end: 10aa18f8f;  */

void FUN_10aa18ee4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f68b921;
  uStack_28 = 0xe;
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_40 = param_3;
  plStack_38 = param_4;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&puStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10aa18f90; end: 10aa1903b;  */

void FUN_10aa18f90(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f68b930;
  uStack_28 = 0xe;
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_40 = param_3;
  plStack_38 = param_4;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&puStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10aa1903c; end: 10aa190e7;  */

void FUN_10aa1903c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f68b93f;
  uStack_28 = 0x1a;
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_40 = param_3;
  plStack_38 = param_4;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&puStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10aa190e8; end: 10aa19533;  */

/* WARNING: Removing unreachable block (ram,0x00010aa19460) */
/* WARNING: Removing unreachable block (ram,0x00010aa19470) */

void FUN_10aa190e8(undefined8 param_1,long *param_2,undefined *param_3)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 ***pppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 ***pppuStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  FUN_10a3c7c48();
  lVar8 = param_2[0x2d];
  if (*(char *)(lVar8 + 0x17f) < '\0') {
    param_3 = *(undefined **)(lVar8 + 0x168);
    func_0x000107c3192c(&uStack_70,param_3,*(undefined8 *)(lVar8 + 0x170));
  }
  else {
    uStack_68 = *(undefined8 *)(lVar8 + 0x170);
    uStack_70 = *(undefined8 *)(lVar8 + 0x168);
    uStack_60 = *(undefined8 *)(lVar8 + 0x178);
  }
  pppuStack_88 = (undefined8 ****)0x0;
  lStack_80 = 0;
  uStack_78 = 0;
  bVar2 = *(byte *)(param_2 + 0x54);
  if ((bVar2 & 6) != 2) {
    uStack_78 = 0x900000000000000;
    lStack_80 = 0x20;
    pppuStack_88 = (undefined8 ****)0x3a7367616c66202c;
    if ((bVar2 >> 1 & 1) == 0) {
      param_3 = &UNK_10f68a6e1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppuStack_88,&UNK_10f68a6e1,10);
    }
    if ((bVar2 >> 2 & 1) != 0) {
      param_3 = &UNK_10f68a6ec;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppuStack_88,&UNK_10f68a6ec,0xb);
    }
    if ((long)uStack_78._7_1_ < 0) {
      if (lStack_80 == 0) goto LAB_10aa194d0;
      lVar8 = lStack_80 + -1;
      ppppuVar9 = (undefined8 ****)pppuStack_88;
      lStack_80 = lVar8;
    }
    else {
      if (uStack_78._7_1_ == '\0') goto LAB_10aa194d0;
      lVar8 = (long)uStack_78._7_1_ + -1;
      uStack_78 = CONCAT17((char)lVar8,(undefined7)uStack_78);
      ppppuVar9 = &pppuStack_88;
    }
    *(undefined1 *)((long)ppppuVar9 + lVar8) = 0;
  }
  if ((*(long *)(param_2[0x3e] + 0x30) == 0) && (*(long *)(param_2[0x40] + 0x30) == 0)) {
    bVar5 = *(long *)(param_2[0x42] + 0x30) != 0;
  }
  else {
    bVar5 = true;
  }
  if ((*(long *)(param_2[0x44] + 0x30) == 0) && (*(long *)(param_2[0x46] + 0x30) == 0)) {
    bVar6 = *(long *)(param_2[0x48] + 0x30) != 0;
    pppuStack_a0 = (undefined8 ****)0x0;
    lStack_98 = 0;
    uStack_90 = 0;
    if (bVar5 || bVar6) goto LAB_10aa1923c;
  }
  else {
    bVar6 = true;
LAB_10aa1923c:
    uStack_90 = 0xa00000000000000;
    pppuStack_a0 = (undefined8 ****)0x6e657473696c202c;
    lStack_98 = 0x203a;
    if (bVar5) {
      param_3 = &UNK_10f68a703;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppuStack_a0,&UNK_10f68a703,10);
    }
    if (bVar6) {
      param_3 = &UNK_10f68a70e;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppuStack_a0,&UNK_10f68a70e,8);
    }
    if ((long)uStack_90._7_1_ < 0) {
      if (lStack_98 == 0) goto LAB_10aa194d0;
      lVar8 = lStack_98 + -1;
      ppppuVar9 = (undefined8 ****)pppuStack_a0;
      lStack_98 = lVar8;
    }
    else {
      if (uStack_90._7_1_ == '\0') goto LAB_10aa194d0;
      lVar8 = (long)uStack_90._7_1_ + -1;
      uStack_90 = CONCAT17((char)lVar8,(undefined7)uStack_90);
      ppppuVar9 = &pppuStack_a0;
    }
    *(undefined1 *)((long)ppppuVar9 + lVar8) = 0;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  lVar8 = param_2[0x52];
  if (lVar8 != 0) {
    lStack_b0 = 0x1200000000002720;
    uStack_b8 = 0x3a73676e69747465;
    uStack_c0 = 0x53646c726f77202c;
    uVar1 = *(ulong *)(lVar8 + 0x60);
    plVar3 = (long *)*(long *)(lVar8 + 0x58);
    if (-1 < (char)*(byte *)(lVar8 + 0x6f)) {
      uVar1 = (ulong)*(byte *)(lVar8 + 0x6f);
      plVar3 = (long *)(lVar8 + 0x58);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_c0,plVar3,uVar1);
    param_3 = &DAT_10f638984;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_c0,&DAT_10f638984,1);
  }
  (**(code **)(*param_2 + 0x38))(param_2);
  if ((undefined *)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
LAB_10aa194d0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa194d4);
    (*pcVar4)();
  }
  if (param_3 < (undefined *)0x17) {
    uStack_c8 = CONCAT17((char)param_3,(undefined7)uStack_c8);
    ppppuVar7 = &pppuStack_d8;
    if (param_3 == (undefined *)0x0) goto LAB_10aa193a0;
  }
  else {
    ppppuVar9 = (undefined8 ****)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      ppppuVar9 = (undefined8 ****)(((ulong)param_3 | 7) + 1);
    }
    ppppuVar7 = ppppuVar9;
    __Znwm();
    uStack_c8 = (ulong)ppppuVar9 | 0x8000000000000000;
    pppuStack_d8 = ppppuVar7;
    puStack_d0 = param_3;
  }
  _memmove(ppppuVar7,param_2,param_3);
LAB_10aa193a0:
  *(undefined1 *)((long)ppppuVar7 + (long)param_3) = 0;
  FUN_10a0ee900(param_1,&UNK_10f68a72a,0x17);
  if ((long)uStack_c8 < 0) {
    __ZdlPv(pppuStack_d8);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if (uStack_90 < 0) {
    __ZdlPv(pppuStack_a0);
  }
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b18d07c; end: 10b18d15f;  */

void FUN_10b18d07c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long alStack_48 [2];
  undefined1 auStack_38 [16];
  long lStack_28;
  
  pbVar1 = (byte *)(param_1 + 0x20);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) == 0) {
    func_0x00010b18cbd4(alStack_48,param_1 + 8);
    if (alStack_48[0] != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      FUN_10b18bf20(auStack_38,alStack_48[0] + 0x60);
      plVar7 = (long *)(lStack_28 + 0x10);
      while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
        for (lVar5 = plVar7[5]; lVar5 != plVar7[6]; lVar5 = lVar5 + 0x28) {
          if (*(long *)(lVar5 + 0x20) == lVar6) {
            lVar5 = lVar5 + 0x28;
            FUN_10b18ca5c(lVar5);
            func_0x00010b18c91c(plVar7 + 5,lVar5);
            if (plVar7[5] == plVar7[6]) {
              lVar6 = lStack_28;
              FUN_10b18d778(lStack_28,plVar7 + 2);
              if (lVar6 != 0) {
                FUN_10b18d84c(lStack_28,lVar6);
              }
            }
            goto LAB_10b18d13c;
          }
        }
      }
LAB_10b18d13c:
      func_0x000107c2798c(auStack_38);
    }
    func_0x00010b18cb3c(alStack_48);
  }
  return;
}



/* Entry: 10b18d160; end: 10b18d16b;  */

void FUN_10b18d160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2088;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b18d16c; end: 10b18d18f;  */

void FUN_10b18d16c(long param_1)

{
  func_0x00010b18e3c4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b18d190; end: 10b18d1a7;  */

void FUN_10b18d190(long *param_1,long param_2)

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



/* Entry: 10b18d1a8; end: 10b18d20f;  */

long * FUN_10b18d1a8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b18c8e0(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b18d210; end: 10b18d327;  */

void FUN_10b18d210(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long alStack_5a0 [2];
  undefined1 auStack_590 [64];
  undefined1 auStack_550 [144];
  undefined8 uStack_4c0;
  char cStack_4b8;
  byte bStack_328;
  undefined1 auStack_2a8 [72];
  long lStack_260;
  char cStack_250;
  long lStack_228;
  byte bStack_220;
  
  lVar2 = *(long *)(param_1 + 0x10);
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010b18cbd4(alStack_5a0,lVar2);
  if (alStack_5a0[0] != 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_10b1f697c(auStack_2a8,*(undefined8 *)(alStack_5a0[0] + 0x28),lVar2 + 0x10,0,1);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((((cStack_250 == '\x01') && ((bStack_220 & 1) != 0)) && (lStack_228 == 0)) &&
       (lStack_260 == 0)) {
      puVar1 = auStack_2a8;
      FUN_10b1c41c0();
      if ((puVar1 != (undefined1 *)0x0) && (((byte)puVar1[0x10] >> 4 & 1) != 0)) {
        FUN_10b20752c(auStack_590);
        if ((bStack_328 & 1) != 0) {
          if (cStack_4b8 == '\0') {
            uStack_4c0 = 0;
          }
          (**(code **)(**(long **)(lVar2 + 0x30) + 0x10))
                    (*(long **)(lVar2 + 0x30),lVar2 + 0x10,uStack_4c0,auStack_550);
        }
        func_0x00010b0faf64(auStack_590);
      }
    }
    func_0x00010b121af0(auStack_2a8);
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  func_0x00010b18e3b4();
  return;
}



/* Entry: 10b18d328; end: 10b18d347;  */

void FUN_10b18d328(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b18bf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b18d348; end: 10b18d34b;  */

void FUN_10b18d348(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b18d34c; end: 10b18d537;  */

undefined1  [16] FUN_10b18d34c(undefined8 param_1,long *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x9;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong unaff_x23;
  undefined1 auVar13 [16];
  long *aplStack_58 [3];
  
  iVar1 = *param_3;
  uVar10 = (ulong)iVar1;
  uVar12 = param_2[1];
  if (uVar12 != 0) {
    uVar6 = uVar12 - 1;
    if ((uVar12 & uVar6) == 0) {
      unaff_x23 = uVar6 & uVar10;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar12 - uVar10) < 0;
      unaff_x23 = uVar10;
      if (uVar12 <= uVar10) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar10 / uVar12;
        }
        unaff_x23 = uVar10 - uVar8 * uVar12;
      }
    }
    plVar11 = *(long **)(*param_2 + unaff_x23 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10b18d3f8;
          uVar8 = plVar11[1];
          if (uVar8 != uVar10) break;
          in_NG = (int)plVar11[2] - iVar1 < 0;
          if ((int)plVar11[2] == iVar1) {
            uVar5 = 0;
            goto LAB_10b18d510;
          }
        }
        if ((uVar12 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar12 <= uVar8) {
          uVar2 = 0;
          if (uVar12 != 0) {
            uVar2 = uVar8 / uVar12;
          }
          uVar8 = uVar8 - uVar2 * uVar12;
        }
        in_NG = (long)(uVar8 - unaff_x23) < 0;
      } while (uVar8 == unaff_x23);
    }
  }
LAB_10b18d3f8:
  FUN_10b18d538(aplStack_58,param_2,uVar10);
  func_0x00010b18e4f8(param_2[3]);
  if ((uVar12 == 0) || (func_0x00010b18e510(param_1,(int)param_2[4],(float)uVar12), (bool)in_NG)) {
    bVar3 = 2 < uVar12;
    bVar4 = uVar12 == 3;
    func_0x00010b18e1e4(uVar12 << 1);
    uVar5 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar5 = extraout_x9;
    }
    func_0x00010b18d58c(param_2,uVar5);
    uVar12 = param_2[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x23 = uVar12 - 1 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar12 <= uVar10) {
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar10 / uVar12;
        }
        unaff_x23 = uVar10 - uVar6 * uVar12;
      }
    }
  }
  plVar11 = aplStack_58[0];
  lVar7 = *param_2;
  plVar9 = *(long **)(lVar7 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_2 + 2;
    *aplStack_58[0] = *plVar9;
    *plVar9 = (long)aplStack_58[0];
    *(long **)(lVar7 + unaff_x23 * 8) = plVar9;
    if (*aplStack_58[0] != 0) {
      uVar10 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar10 = uVar10 & uVar12 - 1;
      }
      else if (uVar12 <= uVar10) {
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar10 / uVar12;
        }
        uVar10 = uVar10 - uVar6 * uVar12;
      }
      *(long **)(lVar7 + uVar10 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar9;
    *plVar9 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_2[3] = param_2[3] + 1;
  FUN_10b18d73c(aplStack_58);
  uVar5 = 1;
LAB_10b18d510:
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = plVar11;
  return auVar13;
}



/* Entry: 10b18d538; end: 10b18d637;  */

void FUN_10b18d538(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)*param_5;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b18d638; end: 10b18d71f;  */

void FUN_10b18d638(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long *plVar3;
  long *plVar4;
  long *extraout_x9_00;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_10b125154(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10b18d720(plVar3);
    FUN_10b125154(param_1,plVar3);
    uVar2 = 0;
    param_1[1] = param_2;
    lVar1 = *param_1;
    while (param_2 != uVar2) {
      func_0x00010b18e4ec();
      lVar1 = extraout_x8;
      uVar2 = extraout_x9;
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
            func_0x00010b18e1bc();
            lVar1 = extraout_x8_00;
            plVar3 = extraout_x9_00;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b18d720; end: 10b18d73b;  */

long FUN_10b18d720(long param_1,ulong param_2)

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
  FUN_10b18d760();
  return param_1;
}



/* Entry: 10b18d73c; end: 10b18d75f;  */

undefined8 FUN_10b18d73c(undefined8 param_1)

{
  FUN_10b18d760(param_1,0);
  return param_1;
}



/* Entry: 10b18d760; end: 10b18d777;  */

void FUN_10b18d760(long *param_1,long param_2)

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



/* Entry: 10b18d778; end: 10b18d84b;  */

long FUN_10b18d778(long *param_1,undefined8 param_2)

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
    func_0x000107c278c4();
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
        func_0x000107c278d0(lVar3,param_2);
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



/* Entry: 10b18d84c; end: 10b18d97f;  */

void FUN_10b18d84c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plStack_28;
  long *plStack_20;
  undefined1 uStack_18;
  undefined4 uStack_17;
  undefined3 uStack_13;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *param_1;
  plVar2 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  plStack_20 = param_1 + 2;
  if (plVar6 == plStack_20) {
LAB_10b18d8d4:
    if (lVar3 == 0) {
LAB_10b18d904:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10b18d90c;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_10b18d904;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_10b18d8d4;
LAB_10b18d90c:
    if (lVar3 == 0) goto LAB_10b18d944;
  }
  uVar9 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *param_2;
  }
LAB_10b18d944:
  *plVar6 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  uStack_18 = 1;
  uStack_17 = 0;
  uStack_13 = 0;
  plStack_28 = param_2;
  FUN_10b18d1a8(&plStack_28);
  return;
}



/* Entry: 10b18d980; end: 10b18d99f;  */

void FUN_10b18d980(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010b18d99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,puVar1 + 2,puVar1[6],puVar1 + 7);
  return;
}



/* Entry: 10b18d9a0; end: 10b18d9bf;  */

void FUN_10b18d9a0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b18c3f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b18d9c0; end: 10b18d9c3;  */

void FUN_10b18d9c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b18d9c4; end: 10b18e133;  */

void FUN_10b18d9c4(long param_1)

{
  char cVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long extraout_x8;
  code *extraout_x8_00;
  long *plVar10;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar11;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar12;
  ulong extraout_x9_01;
  long *plVar13;
  undefined8 uVar14;
  long extraout_x9_02;
  long extraout_x9_03;
  int extraout_w10;
  long *plVar15;
  long *extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar16;
  long *plVar17;
  long *extraout_x11;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  long *unaff_x26;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  plVar20 = (long *)(param_1 + 0x178);
  FUN_10b113e08(param_1 + 0x148,param_1 + 0x58);
  func_0x00010b18e460();
  FUN_10b13d714(param_1 + 0x158,param_1 + 0x148,param_1 + 0x120);
  FUN_10b189e34(*(undefined8 *)(param_1 + 0x158));
  puVar6 = (undefined8 *)0x108;
  __Znwm();
  plVar13 = puVar6 + 1;
  *plVar13 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110cc1fd0;
  puVar22 = puVar6 + 3;
  *puVar22 = &PTR_FUN_110cc2138;
  puVar7 = puVar6;
  func_0x00010b18e324();
  func_0x00010b18e250(extraout_x8 + 0x40);
  *(undefined8 **)(param_1 + 0x168) = puVar22;
  *(undefined8 **)(param_1 + 0x170) = puVar7;
  do {
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = *plVar13 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    puStack_70 = puVar22;
    puStack_68 = puVar7;
  } while (cVar1 != '\0');
  do {
    func_0x00010b18e19c();
  } while (extraout_w10 != 0);
  uStack_80 = 0;
  uStack_78 = 0;
  puVar6[5] = puVar22;
  puVar6[6] = puVar6;
  FUN_10b18cb8c(&uStack_80);
  iVar5 = (int)&puStack_70;
  func_0x00010b18cbb0();
  uVar11 = *(undefined8 *)(param_1 + 0x158);
  lVar19 = *(long *)(param_1 + 0x160);
  if (lVar19 != 0) {
    plVar8 = (long *)(lVar19 + 8);
    do {
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  do {
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = *plVar13 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined ***)(param_1 + 0x90) = &PTR_DAT_110cc2060;
  *(code **)(param_1 + 0x88) = FUN_10b18ccb8;
  *(undefined8 *)(param_1 + 0x98) = uVar11;
  *(long *)(param_1 + 0xa0) = lVar19;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 **)(param_1 + 0xa8) = puVar22;
  *(undefined8 **)(param_1 + 0xb0) = puVar6;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  func_0x00010b18e4a8();
  func_0x00010b18e4d8();
  (*extraout_x8_00)();
  if (((bRam00000001137f40c0 & 1) == 0) && (func_0x00010b18e490(), iVar5 != 0)) {
    __Znwm(0x68);
    func_0x00010b18e1f8();
  }
  lVar19 = lRam00000001137f40b8;
  *(long *)(param_1 + 0xf0) = lRam00000001137f40b8;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  __ZNSt3__15mutex4lockEv(lVar19);
  plVar13 = (long *)(lVar19 + 0x40);
  *(long **)(param_1 + 0x100) = plVar13;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  plVar8 = (long *)(lVar19 + 0x58);
  func_0x000107c278c4(plVar8,param_1 + 0x108);
  plVar25 = *(long **)(lVar19 + 0x48);
  if (plVar25 != (long *)0x0) {
    uVar24 = (long)plVar25 - 1;
    if (((ulong)plVar25 & uVar24) == 0) {
      unaff_x26 = (long *)(uVar24 & (ulong)plVar8);
      in_ZR = true;
      in_NG = false;
    }
    else {
      in_NG = (long)plVar8 - (long)plVar25 < 0;
      in_ZR = plVar8 == plVar25;
      unaff_x26 = plVar8;
      if (plVar25 <= plVar8) {
        uVar12 = 0;
        if (plVar25 != (long *)0x0) {
          uVar12 = (ulong)plVar8 / (ulong)plVar25;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar12 * (long)plVar25);
      }
    }
    plVar21 = *(long **)(*plVar13 + (long)unaff_x26 * 8);
    if (plVar21 != (long *)0x0) {
      do {
        while( true ) {
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) goto LAB_10b18dbdc;
          plVar10 = (long *)plVar21[1];
          in_NG = (long)plVar10 - (long)plVar8 < 0;
          in_ZR = plVar10 == plVar8;
          if (!(bool)in_ZR) break;
          plVar10 = plVar21 + 2;
          func_0x000107c278d0(plVar10,param_1 + 0x108);
          if (((ulong)plVar10 & 1) != 0) goto LAB_10b18de50;
        }
        if (((ulong)plVar25 & uVar24) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar24);
        }
        else if (plVar25 <= plVar10) {
          uVar12 = 0;
          if (plVar25 != (long *)0x0) {
            uVar12 = (ulong)plVar10 / (ulong)plVar25;
          }
          plVar10 = (long *)((long)plVar10 - uVar12 * (long)plVar25);
        }
        in_NG = (long)plVar10 - (long)unaff_x26 < 0;
        in_ZR = plVar10 == unaff_x26;
      } while ((bool)in_ZR);
    }
  }
LAB_10b18dbdc:
  plVar21 = (long *)0x38;
  __Znwm();
  plVar10 = (long *)(lVar19 + 0x50);
  *(long **)(param_1 + 0xd8) = plVar21;
  *(long **)(param_1 + 0xe0) = plVar10;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  plVar15 = plVar21 + 2;
  *plVar21 = 0;
  plVar21[1] = (long)plVar8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar15,param_1 + 0x108);
  plVar21[5] = 0;
  plVar21[6] = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  func_0x00010b18e4f8(*(undefined8 *)(lVar19 + 0x58));
  if ((plVar25 != (long *)0x0) && (func_0x00010b18e510(), !(bool)in_NG)) goto LAB_10b18dddc;
  bVar3 = (long *)0x2 < plVar25;
  bVar4 = plVar25 == (long *)0x3;
  func_0x00010b18e1e4((long)plVar25 << 1);
  plVar23 = extraout_x8_01;
  if (!bVar3 || bVar4) {
    plVar23 = extraout_x9;
  }
  if ((long)plVar23 - 1U == 0) {
    plVar23 = (long *)0x2;
  }
  else if (((ulong)plVar23 & (long)plVar23 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar15 = plVar23;
  }
  plVar25 = *(long **)(lVar19 + 0x48);
  if (plVar25 < plVar23) {
LAB_10b18dc80:
    if ((ulong)plVar23 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b18e020);
      (*pcVar2)();
    }
    lVar9 = (long)plVar23 << 3;
    __Znwm(lVar9);
    FUN_10b18cc54(plVar13,lVar9);
    plVar25 = (long *)0x0;
    *(long **)(lVar19 + 0x48) = plVar23;
    lVar9 = *(long *)(lVar19 + 0x40);
    while (plVar23 != plVar25) {
      func_0x00010b18e4ec();
      lVar9 = extraout_x8_02;
      plVar25 = extraout_x9_00;
    }
    plVar15 = (long *)*plVar10;
    plVar25 = plVar23;
    if (plVar15 != (long *)0x0) {
      plVar16 = (long *)plVar15[1];
      uVar12 = (long)plVar23 - 1;
      uVar24 = 0;
      if (plVar23 != (long *)0x0) {
        uVar24 = (ulong)plVar16 / (ulong)plVar23;
      }
      plVar17 = plVar16;
      if (plVar23 <= plVar16) {
        plVar17 = (long *)((long)plVar16 - uVar24 * (long)plVar23);
      }
      if (((ulong)plVar23 & uVar12) == 0) {
        plVar17 = (long *)((ulong)plVar16 & uVar12);
      }
      *(long **)(lVar9 + (long)plVar17 * 8) = plVar10;
      while (plVar16 = plVar15, plVar15 = (long *)*plVar16, plVar15 != (long *)0x0) {
        plVar18 = (long *)plVar15[1];
        if (((ulong)plVar23 & uVar12) == 0) {
          plVar18 = (long *)((ulong)plVar18 & uVar12);
        }
        else if (plVar23 <= plVar18) {
          uVar24 = 0;
          if (plVar23 != (long *)0x0) {
            uVar24 = (ulong)plVar18 / (ulong)plVar23;
          }
          plVar18 = (long *)((long)plVar18 - uVar24 * (long)plVar23);
        }
        if (plVar18 != plVar17) {
          if (*(long *)(lVar9 + (long)plVar18 * 8) == 0) {
            *(long **)(lVar9 + (long)plVar18 * 8) = plVar16;
            plVar17 = plVar18;
          }
          else {
            *plVar16 = *plVar15;
            func_0x00010b18e1bc();
            lVar9 = extraout_x8_03;
            uVar12 = extraout_x9_01;
            plVar15 = extraout_x10;
            plVar17 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar23 < plVar25) {
    func_0x00010b18e504((float)*(ulong *)(lVar19 + 0x58),*(undefined4 *)(lVar19 + 0x60));
    if ((plVar25 < (long *)0x3) || (((ulong)plVar25 & (long)plVar25 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b18e17c();
    }
    if (plVar23 <= plVar15) {
      plVar23 = plVar15;
    }
    if (plVar23 < plVar25) {
      if (plVar23 != (long *)0x0) goto LAB_10b18dc80;
      FUN_10b18cc54(plVar13,0);
      *(undefined8 *)(lVar19 + 0x48) = 0;
      plVar25 = (long *)0x0;
    }
    else {
      plVar25 = *(long **)(lVar19 + 0x48);
    }
  }
  if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
    in_ZR = 1;
    unaff_x26 = (long *)((long)plVar25 - 1U & (ulong)plVar8);
  }
  else {
    in_ZR = plVar8 == plVar25;
    unaff_x26 = plVar8;
    if (plVar25 <= plVar8) {
      uVar24 = 0;
      if (plVar25 != (long *)0x0) {
        uVar24 = (ulong)plVar8 / (ulong)plVar25;
      }
      unaff_x26 = (long *)((long)plVar8 - uVar24 * (long)plVar25);
    }
  }
LAB_10b18dddc:
  lVar9 = *plVar13;
  plVar13 = *(long **)(lVar9 + (long)unaff_x26 * 8);
  if (plVar13 == (long *)0x0) {
    *plVar21 = *plVar10;
    *plVar10 = (long)plVar21;
    *(long **)(lVar9 + (long)unaff_x26 * 8) = plVar10;
    if (*plVar21 != 0) {
      plVar13 = *(long **)(*plVar21 + 8);
      if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
        plVar13 = (long *)((ulong)plVar13 & (long)plVar25 - 1U);
        in_ZR = true;
      }
      else {
        in_ZR = plVar13 == plVar25;
        if (plVar25 <= plVar13) {
          uVar24 = 0;
          if (plVar25 != (long *)0x0) {
            uVar24 = (ulong)plVar13 / (ulong)plVar25;
          }
          plVar13 = (long *)((long)plVar13 - uVar24 * (long)plVar25);
        }
      }
      *(long **)(lVar9 + (long)plVar13 * 8) = plVar21;
    }
  }
  else {
    *plVar21 = *plVar13;
    *plVar13 = (long)plVar21;
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(long *)(lVar19 + 0x58) = *(long *)(lVar19 + 0x58) + 1;
  func_0x00010b18e37c();
LAB_10b18de50:
  func_0x00010b18e374();
  func_0x00010b18cbd4(plVar20,plVar21 + 5);
  if (*plVar20 == 0) {
    func_0x00010b18cb3c(plVar20);
    (**(code **)(param_1 + 0x58))(plVar20,param_1 + 0x58);
    func_0x00010b18cc10(plVar21 + 5,*(undefined8 *)(param_1 + 0x178),
                        *(undefined8 *)(param_1 + 0x180));
  }
  func_0x00010b18e410();
  func_0x00010b18e23c(*(undefined8 *)(param_1 + 0x60));
  func_0x00010b18e3bc();
  FUN_10b18ce98(param_1 + 0x38);
  func_0x00010b18e294();
  func_0x00010b18e4b4(*(undefined8 *)(param_1 + 0x90));
  func_0x00010b18e3ec();
  func_0x00010b18e3e4();
  func_0x00010b18e3dc();
  func_0x00010b18e39c();
  func_0x00010b18e35c();
  func_0x00010b18e438();
  if ((bool)in_ZR) {
    lVar19 = param_1 + 0x18;
    __ZNSt3__112__get_sp_mutEPKv(lVar19);
    __ZNSt3__18__sp_mut4lockEv();
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    puVar6 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    __ZNSt3__18__sp_mut6unlockEv(lVar19);
    puStack_70 = puVar7;
    puStack_68 = puVar6;
    __ZNSt3__15mutex4lockEv(puVar7 + 9);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    if (*(char *)(puVar7 + 2) == '\x01') {
      uVar14 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      lVar19 = puVar7[1];
      *puVar7 = uVar11;
      puVar7[1] = uVar14;
      puVar6 = puStack_70;
      if (lVar19 != 0) {
        do {
          func_0x00010b18e1d4();
        } while (extraout_w11 != 0);
        puVar6 = puStack_70;
        if (extraout_x9_02 == 0) {
          func_0x00010b18e16c();
          func_0x00010b18e2bc();
          puVar6 = puStack_70;
        }
      }
    }
    else {
      *puVar7 = uVar11;
      puVar7[1] = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(puVar7 + 2) = 1;
      puVar6 = puVar7;
    }
    plVar20 = (long *)puVar6[0x12];
    puVar6[0x12] = 0;
    __ZNSt3__15mutex6unlockEv(puVar7 + 9);
    if (plVar20 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(puVar6 + 3);
    }
    else {
      (**(code **)(*plVar20 + 0x10))(plVar20,&puStack_70);
      func_0x00010b18e1ac();
    }
    if (puStack_68 != (undefined8 *)0x0) {
      do {
        func_0x00010b18e1d4();
      } while (extraout_w11_00 != 0);
      if (extraout_x9_03 == 0) {
        func_0x00010b18e16c();
        func_0x00010b18e2bc();
      }
    }
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&puStack_70,param_1 + 0x38);
    FUN_10b18c770(param_1 + 0x10,&puStack_70);
    __ZNSt13exception_ptrD1Ev(&puStack_70);
  }
  FUN_10b18c850(param_1 + 0x10);
  func_0x00010b18e394();
  return;
}



/* Entry: 10b18e134; end: 10b18e16b;  */

void FUN_10b18e134(long param_1)

{
  if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
    func_0x00010b18e460();
    func_0x00010b18e35c();
  }
  FUN_10b18c850(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b18e16c; end: 10b18e51b;  */

void FUN_10b18e16c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010b18e178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x10))();
  return;
}



/* Entry: 10b18e51c; end: 10b18e5c3;  */

void FUN_10b18e51c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x00010b18f91c(auStack_38);
  func_0x00010b18f910();
  FUN_10b18eac4(lStack_28,auStack_50);
  if ((lStack_28 == 0) ||
     (((*(byte *)(lStack_28 + 0x250) & 1) == 0 && ((*(byte *)(lStack_28 + 0x280) & 1) == 0)))) {
    uVar1 = 0;
    *param_1 = 0;
  }
  else {
    FUN_10b123fcc(param_1,lStack_28 + 0x28);
    uVar3 = *(undefined8 *)(lStack_28 + 0x260);
    uVar2 = *(undefined8 *)(lStack_28 + 600);
    uVar4 = *(undefined8 *)(lStack_28 + 0x268);
    uVar6 = *(undefined8 *)(lStack_28 + 0x280);
    uVar5 = *(undefined8 *)(lStack_28 + 0x278);
    *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(lStack_28 + 0x270);
    *(undefined8 *)(param_1 + 0x240) = uVar4;
    *(undefined8 *)(param_1 + 600) = uVar6;
    *(undefined8 *)(param_1 + 0x250) = uVar5;
    *(undefined8 *)(param_1 + 0x238) = uVar3;
    *(undefined8 *)(param_1 + 0x230) = uVar2;
    uVar1 = 1;
  }
  param_1[0x260] = uVar1;
  func_0x00010b18f85c();
  func_0x00010b18f854();
  return;
}



/* Entry: 10b18e5c4; end: 10b18e5df;  */

void FUN_10b18e5c4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b18f844();
  *(undefined8 *)(param_1 + 0x10) = unaff_x19;
  return;
}



/* Entry: 10b18e5e0; end: 10b18e647;  */

void FUN_10b18e5e0(void)

{
  undefined8 in_x3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x00010b18f91c(auStack_38);
  func_0x00010b18f910();
  FUN_10b18eac4(lStack_28,auStack_50);
  if (lStack_28 != 0) {
    FUN_10b18e648(lStack_28 + 0x28,in_x3);
  }
  func_0x00010b18f85c();
  func_0x00010b18f854();
  return;
}



/* Entry: 10b18e648; end: 10b18e67b;  */

long FUN_10b18e648(long param_1)

{
  if (*(char *)(param_1 + 0x228) == '\x01') {
    func_0x00010b12e64c();
  }
  else {
    FUN_10b124010();
  }
  return param_1;
}



/* Entry: 10b18e67c; end: 10b18e683;  */

void FUN_10b18e67c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x00010b18f91c(auStack_38,param_1 + -8);
  func_0x00010b18f910();
  FUN_10b18eac4(lStack_28,auStack_50);
  if (lStack_28 != 0) {
    FUN_10b18e648(lStack_28 + 0x28,param_4);
  }
  func_0x00010b18f85c();
  func_0x00010b18f854();
  return;
}



/* Entry: 10b18e684; end: 10b18e737;  */

uint FUN_10b18e684(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_4e0 [552];
  undefined1 uStack_2b8;
  undefined1 auStack_2b0 [560];
  undefined1 uStack_80;
  undefined1 uStack_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x00010b18f91c(auStack_38);
  func_0x00010b206f0c(auStack_50,param_2);
  auStack_4e0[0] = 0;
  uStack_2b8 = 0;
  func_0x00010539dcfc(auStack_2b0,auStack_4e0);
  uStack_80 = 0;
  uStack_58 = 0;
  func_0x00010539dd5c(auStack_4e0);
  puVar1 = auStack_50;
  FUN_10b18e738(uStack_28,puVar1,auStack_2b0);
  func_0x00010539dd5c(auStack_2b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  func_0x000107c2798c(auStack_38);
  return (uint)puVar1 & 1;
}



/* Entry: 10b18e738; end: 10b18e76b;  */

void FUN_10b18e738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_10b18eb80(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10b18e76c; end: 10b18e7cf;  */

void FUN_10b18e76c(long param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x00010b18f810();
  FUN_10b18e7d0(auStack_50,param_1 + 0x88);
  FUN_10b18ef8c(uStack_40,auStack_38);
  func_0x00010b18e7ec();
  func_0x00010b18f808();
  func_0x00010b18f800();
  return;
}



/* Entry: 10b18e7d0; end: 10b18e82f;  */

void FUN_10b18e7d0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b18f844();
  *(undefined8 *)(param_1 + 0x10) = unaff_x19;
  return;
}



/* Entry: 10b18e830; end: 10b18e8bf;  */

void FUN_10b18e830(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  lVar1 = param_1;
  func_0x00010b18f810();
  func_0x00010b18f904();
  func_0x00010b18f8c8();
  if (lVar1 != 0) {
    (**(code **)(**(long **)(lVar1 + 0x28) + 0x10))();
    FUN_10b18f524(uStack_40,lVar1);
  }
  func_0x00010b18f808();
  FUN_10b18e5c4(auStack_50,param_1 + 0x20);
  FUN_10b18f648(uStack_40,auStack_38);
  func_0x00010b18f808();
  func_0x00010b18f800();
  return;
}



/* Entry: 10b18e8c0; end: 10b18e90f;  */

bool FUN_10b18e8c0(long param_1)

{
  func_0x00010b18f810();
  func_0x00010b18f904();
  func_0x00010b18f8c8();
  func_0x00010b18f808();
  func_0x00010b18f800();
  return param_1 != 0;
}



/* Entry: 10b18e910; end: 10b18e913;  */

undefined8 * FUN_10b18e910(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110cc2138;
  param_1[1] = &PTR_FUN_110cc2168;
  FUN_10b18e9b8(param_1 + 0x11);
  plVar1 = (long *)param_1[0xe];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10b18ea9c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  FUN_10b18cb8c(param_1 + 2);
  return param_1;
}



/* Entry: 10b18e914; end: 10b18e927;  */

void FUN_10b18e914(void)

{
  FUN_10b18e938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b18e928; end: 10b18e937;  */

undefined8 * FUN_10b18e928(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  param_1[-1] = &PTR_FUN_110cc2138;
  *param_1 = &PTR_FUN_110cc2168;
  FUN_10b18e9b8(param_1 + 0x10);
  plVar1 = (long *)param_1[0xd];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10b18ea9c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  FUN_10b18cb8c(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 10b18e938; end: 10b18e9b7;  */

undefined8 * FUN_10b18e938(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110cc2138;
  param_1[1] = &PTR_FUN_110cc2168;
  FUN_10b18e9b8(param_1 + 0x11);
  plVar1 = (long *)param_1[0xe];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10b18ea9c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  FUN_10b18cb8c(param_1 + 2);
  return param_1;
}



/* Entry: 10b18e9b8; end: 10b18ea83;  */

void FUN_10b18e9b8(long param_1)

{
  func_0x00010b18e9e0(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b18ea84; end: 10b18ea9b;  */

void FUN_10b18ea84(long *param_1)

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



/* Entry: 10b18ea9c; end: 10b18eac3;  */

void FUN_10b18ea9c(long param_1)

{
  func_0x00010539dd5c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b18eac4; end: 10b18eb7f;  */

long FUN_10b18eac4(long *param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *extraout_x8;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar3 = param_1 + 3, *plVar3 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar3 & uVar7);
      uVar2 = true;
    }
    else {
      uVar2 = plVar3 == plVar6;
      plVar8 = plVar3;
      if (plVar6 <= plVar3) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
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
        func_0x00010b18f94c();
        if (!(bool)uVar2) break;
        func_0x00010b18f8f8();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)extraout_x8 & uVar7);
      }
      else {
        plVar4 = extraout_x8;
        if (plVar6 <= extraout_x8) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)extraout_x8 / (ulong)plVar6;
          }
          plVar4 = (long *)((long)extraout_x8 - uVar1 * (long)plVar6);
        }
      }
      uVar2 = 1;
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b18eb80; end: 10b18eef3;  */

undefined1  [16]
FUN_10b18eb80(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long *extraout_x8;
  long *plVar6;
  long *extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  long *plVar8;
  long *extraout_x10;
  long *plVar9;
  long *plVar10;
  long *extraout_x11;
  long *plVar11;
  long *unaff_x19;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x26;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  
  func_0x00010b18f8e0();
  plVar15 = (long *)unaff_x19[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x26 = (long *)(uVar16 & (ulong)param_1);
      uVar3 = true;
    }
    else {
      uVar3 = param_1 == plVar15;
      unaff_x26 = param_1;
      if (plVar15 <= param_1) {
        uVar7 = 0;
        if (plVar15 != (long *)0x0) {
          uVar7 = (ulong)param_1 / (ulong)plVar15;
        }
        unaff_x26 = (long *)((long)param_1 - uVar7 * (long)plVar15);
      }
    }
    plVar12 = *(long **)(*unaff_x19 + (long)unaff_x26 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10b18ec40;
          func_0x00010b18f94c();
          if (!(bool)uVar3) break;
          plVar6 = plVar12 + 2;
          func_0x000107c278d0(plVar6,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10b18eecc;
          }
        }
        if (((ulong)plVar15 & uVar16) == 0) {
          plVar6 = (long *)((ulong)extraout_x8 & uVar16);
        }
        else {
          plVar6 = extraout_x8;
          if (plVar15 <= extraout_x8) {
            uVar7 = 0;
            if (plVar15 != (long *)0x0) {
              uVar7 = (ulong)extraout_x8 / (ulong)plVar15;
            }
            plVar6 = (long *)((long)extraout_x8 - uVar7 * (long)plVar15);
          }
        }
        uVar3 = 1;
      } while (plVar6 == unaff_x26);
    }
  }
LAB_10b18ec40:
  uVar5 = *param_4;
  lVar13 = *param_5;
  plVar6 = unaff_x19 + 2;
  plVar12 = (long *)0x288;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = (long)param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar12 + 2,uVar5);
  plVar8 = plVar12 + 5;
  func_0x00010539dcfc(plVar8,lVar13);
  lVar18 = *(long *)(lVar13 + 0x238);
  lVar17 = *(long *)(lVar13 + 0x230);
  lVar19 = *(long *)(lVar13 + 0x240);
  lVar21 = *(long *)(lVar13 + 600);
  lVar20 = *(long *)(lVar13 + 0x250);
  plVar12[0x4e] = *(long *)(lVar13 + 0x248);
  plVar12[0x4d] = lVar19;
  plVar12[0x50] = lVar21;
  plVar12[0x4f] = lVar20;
  plVar12[0x4c] = lVar18;
  plVar12[0x4b] = lVar17;
  func_0x00010b18f938();
  if ((plVar15 != (long *)0x0) && ((float)lVar17 <= (float)lVar19 * (float)plVar15))
  goto LAB_10b18ee5c;
  bVar2 = (long *)0x2 < plVar15;
  bVar4 = plVar15 == (long *)0x3;
  func_0x00010b18f924((long)plVar15 << 1);
  plVar14 = extraout_x8_00;
  if (!bVar2 || bVar4) {
    plVar14 = extraout_x9;
  }
  if ((long)plVar14 - 1U == 0) {
    plVar14 = (long *)0x2;
  }
  else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = plVar14;
  }
  plVar15 = (long *)unaff_x19[1];
  if (plVar15 < plVar14) {
LAB_10b18ed00:
    if ((ulong)plVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b18eee0);
      (*pcVar1)();
    }
    __Znwm((long)plVar14 << 3);
    FUN_10b18eef4();
    unaff_x19[1] = (long)plVar14;
    lVar13 = *unaff_x19;
    for (plVar15 = (long *)0x0; plVar14 != plVar15; plVar15 = (long *)((long)plVar15 + 1)) {
      *(undefined8 *)(lVar13 + (long)plVar15 * 8) = 0;
    }
    plVar8 = (long *)*plVar6;
    plVar15 = plVar14;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar7 = (long)plVar14 - 1;
      uVar16 = 0;
      if (plVar14 != (long *)0x0) {
        uVar16 = (ulong)plVar9 / (ulong)plVar14;
      }
      plVar10 = plVar9;
      if (plVar14 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar16 * (long)plVar14);
      }
      if (((ulong)plVar14 & uVar7) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar7);
      }
      *(long **)(lVar13 + (long)plVar10 * 8) = plVar6;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (plVar14 <= plVar11) {
          uVar16 = 0;
          if (plVar14 != (long *)0x0) {
            uVar16 = (ulong)plVar11 / (ulong)plVar14;
          }
          plVar11 = (long *)((long)plVar11 - uVar16 * (long)plVar14);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar13 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar13 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            *plVar9 = *plVar8;
            func_0x00010b18f88c();
            lVar13 = extraout_x8_01;
            uVar7 = extraout_x9_00;
            plVar8 = extraout_x10;
            plVar10 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar14 < plVar15) {
    func_0x00010b18f874();
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b18f824();
    }
    if (plVar14 <= plVar8) {
      plVar14 = plVar8;
    }
    if (plVar14 < plVar15) {
      if (plVar14 != (long *)0x0) goto LAB_10b18ed00;
      FUN_10b18eef4();
      unaff_x19[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)unaff_x19[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar15 - 1U & (ulong)param_1);
  }
  else {
    unaff_x26 = param_1;
    if (plVar15 <= param_1) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)param_1 / (ulong)plVar15;
      }
      unaff_x26 = (long *)((long)param_1 - uVar16 * (long)plVar15);
    }
  }
LAB_10b18ee5c:
  lVar13 = *unaff_x19;
  plVar8 = *(long **)(lVar13 + (long)unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar6;
    *plVar6 = (long)plVar12;
    *(long **)(lVar13 + (long)unaff_x26 * 8) = plVar6;
    if (*plVar12 != 0) {
      plVar6 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar6) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar6 / (ulong)plVar15;
        }
        plVar6 = (long *)((long)plVar6 - uVar16 * (long)plVar15);
      }
      *(long **)(lVar13 + (long)plVar6 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  func_0x00010b18f8a4();
  FUN_10b18ef0c();
  uVar5 = 1;
LAB_10b18eecc:
  auVar22._8_8_ = uVar5;
  auVar22._0_8_ = plVar12;
  return auVar22;
}



/* Entry: 10b18eef4; end: 10b18ef0b;  */

void FUN_10b18eef4(long *param_1,long param_2)

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



/* Entry: 10b18ef0c; end: 10b18ef2f;  */

undefined8 FUN_10b18ef0c(undefined8 param_1)

{
  FUN_10b18ef30(param_1,0);
  return param_1;
}



/* Entry: 10b18ef30; end: 10b18ef47;  */

void FUN_10b18ef30(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_10b18ea9c(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10b18ef48; end: 10b18ef8b;  */

void FUN_10b18ef48(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10b18ea9c(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b18ef8c; end: 10b18efbf;  */

long FUN_10b18ef8c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b18efc0(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10b18efc0; end: 10b18f1af;  */

undefined1  [16] FUN_10b18efc0(float param_1,float param_2,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x27;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  func_0x00010b18f8e0();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x27 = uVar8 & param_3;
      uVar1 = true;
    }
    else {
      uVar1 = param_3 == uVar7;
      unaff_x27 = param_3;
      if (uVar7 <= param_3) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = param_3 / uVar7;
        }
        unaff_x27 = param_3 - uVar4 * uVar7;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10b18f084;
          func_0x00010b18f94c();
          if (!(bool)uVar1) break;
          plVar2 = plVar6 + 2;
          func_0x000107c278d0(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            aplStack_78[0] = plVar6;
            goto LAB_10b18f194;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar4 = extraout_x8 & uVar8;
        }
        else {
          uVar4 = extraout_x8;
          if (uVar7 <= extraout_x8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = extraout_x8 / uVar7;
            }
            uVar4 = extraout_x8 - uVar4 * uVar7;
          }
        }
        uVar1 = 1;
      } while (uVar4 == unaff_x27);
    }
  }
LAB_10b18f084:
  FUN_10b18f1b0(aplStack_78);
  func_0x00010b18f938();
  if ((uVar7 == 0) || (param_2 * (float)uVar7 < param_1)) {
    func_0x00010b18f924(uVar7 << 1);
    FUN_10b18f228();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x27 = uVar7 - 1 & param_3;
    }
    else {
      unaff_x27 = param_3;
      if (uVar7 <= param_3) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = param_3 / uVar7;
        }
        unaff_x27 = param_3 - uVar8 * uVar7;
      }
    }
  }
  lVar5 = *unaff_x19;
  plVar6 = *(long **)(lVar5 + unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = unaff_x19 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar5 + unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      *(long **)(lVar5 + uVar8 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  func_0x00010b18f8a4();
  FUN_10b18f3e8();
  uVar3 = 1;
LAB_10b18f194:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = aplStack_78[0];
  return auVar9;
}



/* Entry: 10b18f1b0; end: 10b18f20f;  */

void FUN_10b18f1b0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10b18f210(puVar1 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10b18f210; end: 10b18f227;  */

void FUN_10b18f210(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b18f228; end: 10b18f2c7;  */

void FUN_10b18f228(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long *extraout_x9;
  ulong uVar4;
  ulong extraout_x10;
  long *plVar5;
  long *extraout_x11;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (param_2 <= plVar7) {
    if (param_2 < plVar7) {
      func_0x00010b18f874();
      if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010b18f824();
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar7) goto LAB_10b18f270;
    }
    return;
  }
LAB_10b18f270:
  if (param_2 == (long *)0x0) {
    FUN_10b18f3b4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10b18f3cc(plVar3);
    FUN_10b18f3b4(param_1,plVar3);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar7 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar7 / (ulong)param_2;
      }
      plVar5 = plVar7;
      if (param_2 <= plVar7) {
        plVar5 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar7 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar5 * 8) = param_1 + 2;
      while (plVar7 = plVar3, plVar3 = (long *)*plVar7, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar5) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar5 = plVar6;
          }
          else {
            *plVar7 = *plVar3;
            func_0x00010b18f88c();
            lVar2 = extraout_x8;
            plVar3 = extraout_x9;
            uVar4 = extraout_x10;
            plVar5 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b18f2c8; end: 10b18f3b3;  */

void FUN_10b18f2c8(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_10b18f3b4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10b18f3cc(plVar3);
    FUN_10b18f3b4(param_1,plVar3);
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
            func_0x00010b18f88c();
            lVar1 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b18f3b4; end: 10b18f3cb;  */

void FUN_10b18f3b4(long *param_1,long param_2)

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



/* Entry: 10b18f3cc; end: 10b18f3e7;  */

long FUN_10b18f3cc(long param_1,ulong param_2)

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
  FUN_10b18f40c();
  return param_1;
}



/* Entry: 10b18f3e8; end: 10b18f40b;  */

undefined8 FUN_10b18f3e8(undefined8 param_1)

{
  FUN_10b18f40c(param_1,0);
  return param_1;
}



/* Entry: 10b18f40c; end: 10b18f423;  */

void FUN_10b18f40c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010b18ea38(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10b18f424; end: 10b18f467;  */

void FUN_10b18f424(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010b18ea38(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b18f468; end: 10b18f523;  */

long FUN_10b18f468(long *param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *extraout_x8;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar3 = param_1 + 3, *plVar3 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar3 & uVar7);
      uVar2 = true;
    }
    else {
      uVar2 = plVar3 == plVar6;
      plVar8 = plVar3;
      if (plVar6 <= plVar3) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
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
        func_0x00010b18f94c();
        if (!(bool)uVar2) break;
        func_0x00010b18f8f8();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)extraout_x8 & uVar7);
      }
      else {
        plVar4 = extraout_x8;
        if (plVar6 <= extraout_x8) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)extraout_x8 / (ulong)plVar6;
          }
          plVar4 = (long *)((long)extraout_x8 - uVar1 * (long)plVar6);
        }
      }
      uVar2 = 1;
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b18f524; end: 10b18f553;  */

undefined8 FUN_10b18f524(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10b18f554(auStack_38);
  FUN_10b18f3e8(auStack_38);
  return uVar1;
}



/* Entry: 10b18f554; end: 10b18f647;  */

void FUN_10b18f554(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b18f608;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b18f608;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b18f608:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10b18f648; end: 10b18f6a7;  */

void FUN_10b18f648(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10b18eac4();
  if (lVar1 != 0) {
    func_0x00010b18f678(param_1,lVar1);
  }
  return;
}



/* Entry: 10b18f6a8; end: 10b18f957;  */

void FUN_10b18f6a8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b18f75c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b18f75c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b18f75c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10b18f958; end: 10b18fcb7;  */

void FUN_10b18f958(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  ulong uVar6;
  undefined8 auStack_890 [2];
  undefined1 auStack_880 [632];
  undefined8 uStack_608;
  long lStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  byte bStack_5b8;
  undefined8 uStack_5b0;
  long alStack_5a8 [86];
  undefined1 auStack_2f8 [56];
  undefined1 auStack_2c0 [632];
  undefined8 *puStack_48;
  
  func_0x00010b198ee8();
  uStack_5b0 = 0;
  iVar1 = (int)&uStack_5d0;
  func_0x000107c281f8();
  func_0x00010b199520(uStack_5c0._7_1_);
  if ((extraout_x8_00 != 0) && (*(int *)(unaff_x21 + 100) != 0)) {
    if ((param_4 == 0) || (*(long *)(unaff_x21 + 0x78) != 0)) {
      FUN_10b195a90();
      if ((iVar1 == 0) ||
         ((*(long *)(unaff_x21 + 0x80) < 1 &&
          ((param_5 == 0 || (*(char *)(unaff_x21 + 0x1c0) != '\x01')))))) {
        if (param_4 == 0) {
LAB_10b18fabc:
          uVar6 = unaff_x20[8];
          FUN_10b202630(auStack_2f8,&uStack_5d0);
          func_0x00010b1f68d0(uVar6,auStack_2f8,*(undefined4 *)(unaff_x21 + 0x60));
          func_0x00010b199438();
          if ((uVar6 & 1) != 0) {
            func_0x00010b199500();
            auStack_890[0] = param_1;
            if (extraout_x8_01 != 0) {
              do {
                func_0x00010b198bb4();
              } while (extraout_w10 != 0);
            }
            FUN_10b121c1c(auStack_880);
            uStack_608 = unaff_x20[8];
            lStack_600 = unaff_x20[9];
            if (lStack_600 != 0) {
              do {
                func_0x00010b198bb4();
              } while (extraout_w10_00 != 0);
            }
            uStack_5f0 = uStack_5c8;
            uStack_5f8 = uStack_5d0;
            uStack_5e8 = uStack_5c0;
            uStack_5c0 = 0;
            uStack_5d0 = 0;
            uStack_5c8 = 0;
            FUN_10b196f90(alStack_5a8,auStack_890);
            FUN_10b196f90(auStack_2f8,alStack_5a8);
            puVar2 = (undefined8 *)0x388;
            __Znwm();
            puVar3 = puVar2;
            func_0x00010b198e00();
            *puVar3 = &PTR_SUB_110cc2368;
            puVar3[1] = 0;
            FUN_10b196f90(puVar3 + 0x1b,auStack_2f8);
            *(uint *)(puVar2 + 0x11) = *(uint *)(puVar2 + 0x11) | 8;
            puStack_48 = puVar2;
            func_0x000107c2805c(puVar2);
            FUN_10b197020(&puStack_48);
            FUN_10b18fcb8(auStack_2f8);
            FUN_10b18fcb8(alStack_5a8);
            *extraout_x8 = puVar2;
            uStack_5d8 = 0;
            func_0x00010b12ba18(&uStack_5d8);
            FUN_10b18fcb8(auStack_890);
            goto LAB_10b18fbe4;
          }
        }
        else if ((*(byte *)(unaff_x21 + 0x88) & 1) != 0) {
          func_0x000104bffddc(&uStack_5d0);
          lVar4 = *(long *)(unaff_x21 + 0x68);
          if ((lVar4 == 0) ||
             ((lVar4 != *(long *)(unaff_x21 + 0x78) && (lVar4 != *(long *)(unaff_x21 + 0x70))))) {
            lVar4 = unaff_x21;
            FUN_10b1c4c88();
            if (lVar4 != 0) {
              func_0x00010564c19c(alStack_5a8,lVar4 + 0x10);
              while (alStack_5a8[0] != 0) {
                if ((*(int *)(alStack_5a8[0] + 0x44) == 2) &&
                   (*(long *)(*(long *)(alStack_5a8[0] + 0x38) + 0x10) == 0)) {
                  FUN_10b2026a0(auStack_2f8);
                  func_0x000107c27b98(&uStack_5d0,auStack_2c0);
                  func_0x00010b199438();
                  break;
                }
                func_0x000107c27d54(alStack_5a8);
              }
            }
          }
          else {
            func_0x0001078bbb08(&uStack_5d0);
          }
          if ((bStack_5b8 & 1) != 0) goto LAB_10b18fabc;
        }
      }
    }
    else {
      uVar5 = *unaff_x20;
      func_0x000107c278b8(auStack_2f8,&UNK_10f730eb1);
      FUN_10b20bd54(uVar5,auStack_2f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2f8);
    }
  }
  *extraout_x8 = uStack_5b0;
  uStack_5b0 = 0;
LAB_10b18fbe4:
  func_0x000107c279a4(&uStack_5d0);
  func_0x00010b12b970(&uStack_5b0);
  return;
}



/* Entry: 10b18fcb8; end: 10b18fcef;  */

undefined8 FUN_10b18fcb8(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x298);
  func_0x00010b1257f8(param_1 + 0x288);
  func_0x00010b121af0(param_1 + 0x10);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b18fcf0; end: 10b18ff0f;  */

undefined8 * FUN_10b18fcf0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined **ppuStack_318;
  undefined8 *puStack_310;
  undefined1 auStack_2f0 [640];
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b198bdc();
  uStack_38 = extraout_x8;
  func_0x00010b198e30();
  if (*(char *)(unaff_x19 + 0x7d4) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x7d4) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x338) = 1;
  uVar1 = *(char *)(param_3 + 0xce) == '\x01';
  if ((bool)uVar1) {
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_40 = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    if (*(char *)(unaff_x19 + 0x658) == '\x01') {
      FUN_10b12151c(unaff_x19 + 0x5b8,param_3 + 0x52);
    }
    else {
      FUN_10b1214d0(unaff_x19 + 0x5b8,param_3 + 0x52);
    }
    uVar1 = *(char *)(unaff_x19 + 0x6a0) == '\x01';
    if ((bool)uVar1) {
      FUN_10b1211a8(unaff_x19 + 0x660,param_3 + 0x66);
    }
    else {
      FUN_10b121148(unaff_x19 + 0x660,param_3 + 0x66);
    }
    FUN_10b1151e4(unaff_x19 + 0x340,param_3 + 3);
    iVar2 = (int)*(undefined8 *)(*(long *)(unaff_x19 + 0x6b0) + 0x10);
    FUN_10b18ff10();
    if (iVar2 != 0) {
      FUN_10b1b46f0(auStack_2f0,unaff_x19 + 0x6b0,unaff_x19 + 0x340,unaff_x19 + 0x5b8,
                    unaff_x19 + 0x660,0);
      FUN_10b1151e4(unaff_x19 + 0x340,auStack_2f0);
      FUN_10b1216e0(unaff_x19 + 0x5b8);
      FUN_10b12106c(unaff_x19 + 0x660);
      if (lStack_70 != 0) {
        lStack_60 = lStack_70;
        uStack_58 = uStack_68;
        lStack_70 = 0;
        uStack_68 = 0;
        FUN_10b18ff20(&uStack_50,&lStack_60,1);
        func_0x0001052ac684(&lStack_60);
      }
      FUN_10b125728(auStack_2f0);
    }
    FUN_10b18fffc();
    puVar4 = &uStack_50;
    FUN_10b125534();
  }
  else {
    func_0x00010b199500();
    uStack_50 = param_1;
    uStack_48 = in_register_00005008;
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10 != 0);
    }
    FUN_10b195d34(auStack_2f0,&uStack_50,1);
    FUN_10b18fffc();
    FUN_10b125534(auStack_2f0);
    puVar4 = &uStack_50;
    func_0x0001052ac684();
  }
  func_0x00010b198cc8();
  func_0x00010b198ba0(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001052ac684(&lStack_60);
    FUN_10b125728(auStack_2f0);
    puVar5 = &uStack_50;
    FUN_10b125534();
    func_0x00010b198cc8();
    func_0x00010b198cc0();
    uVar3 = 0;
    puVar5 = puVar5 + 7;
    ppuStack_318 = &PTR_DAT_110cc0c00;
    puStack_310 = puVar4;
    FUN_10b201f80(puVar5,&ppuStack_318);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x000107c2be10(&PTR_DAT_110cc0c00);
    }
    else {
      pbVar6 = (byte *)(puVar5 + 3);
      func_0x000107c29b34();
      uVar3 = (uint)*pbVar6;
    }
    return (undefined8 *)(ulong)(uVar3 & 1);
  }
  return puVar4;
}



/* Entry: 10b18ff10; end: 10b18ff1f;  */

uint FUN_10b18ff10(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  param_1 = param_1 + 0x38;
  ppuStack_28 = &PTR_DAT_110cc0c00;
  FUN_10b201f80(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be10(&PTR_DAT_110cc0c00);
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x18);
    func_0x000107c29b34();
    uVar1 = (uint)*pbVar2;
  }
  return uVar1 & 1;
}



/* Entry: 10b18ff20; end: 10b18fffb;  */

long * FUN_10b18ff20(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_2 + param_3 * 0x10;
  uVar4 = param_3 * 0x10;
  lVar3 = (param_3 << 4) >> 4;
  uVar5 = param_1[2] - *param_1;
  if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
    uVar5 = param_1[1] - *param_1;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      FUN_10b195ca8(param_2,lVar1);
      FUN_10b12546c(param_1,param_2);
      return param_1;
    }
    FUN_10b195ca8(param_2,param_2 + uVar5);
    lVar3 = lVar3 - (param_1[1] - *param_1 >> 4);
    param_2 = param_2 + uVar5;
  }
  else {
    func_0x00010b12542c(param_1);
    plVar2 = param_1;
    FUN_10b195b7c(param_1,lVar3);
    FUN_10b195b48(param_1,plVar2);
  }
  FUN_10b195b14(param_1,param_2,lVar1,lVar3);
  return param_1;
}



/* Entry: 10b18fffc; end: 10b1900bb;  */

void FUN_10b18fffc(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  func_0x00010b198df4();
  lVar7 = *(long *)(*(long *)(param_1 + 0x6b0) + 0x10);
  iVar2 = (int)lVar7 + 0x100;
  FUN_10b127a84();
  if (iVar2 == 0) {
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_70 = *(undefined8 *)(unaff_x20 + 8);
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10 != 0);
    }
    FUN_10b196588(auStack_60);
    FUN_10b192720(&stack0xffffffffffffffc0,lVar7 + 0x100,&uStack_70);
    func_0x000107c27b58(&stack0xffffffffffffffc0);
    FUN_10b192a1c(&uStack_70);
    return;
  }
  lVar7 = unaff_x20 + 0x7a8;
  FUN_10b1900bc();
  if ((int)lVar7 == 0) {
    return;
  }
  plVar6 = (long *)(unaff_x20 + 0x6c0);
  if (plVar6 != unaff_x19) {
    lVar5 = *unaff_x19;
    lVar1 = unaff_x19[1];
    uVar4 = lVar1 - lVar5;
    if ((ulong)(*(long *)(unaff_x20 + 0x6d0) - *(long *)(unaff_x20 + 0x6c0)) < uVar4) {
      func_0x00010b12542c(plVar6);
      plVar3 = plVar6;
      FUN_10b195b7c(plVar6,(long)uVar4 >> 4);
      FUN_10b195b48(plVar6,plVar3);
    }
    else {
      uVar8 = *(long *)(unaff_x20 + 0x6c8) - *(long *)(unaff_x20 + 0x6c0);
      if (uVar4 <= uVar8) {
        func_0x00010b199160();
        FUN_10b19665c();
        FUN_10b12546c(plVar6,lVar7);
        goto LAB_10b192708;
      }
      FUN_10b19665c(lVar5,lVar5 + uVar8);
      lVar5 = lVar5 + uVar8;
    }
    FUN_10b1965dc(plVar6,lVar5,lVar1);
  }
LAB_10b192708:
  func_0x00010b198d38();
  plVar6 = unaff_x19 + 0xe4;
  while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
    (*(code *)plVar6[3])(0);
  }
  if (unaff_x19[0xe5] != 0) {
    func_0x00010b197468(unaff_x19[0xe4]);
    unaff_x19[0xe4] = 0;
    lVar5 = unaff_x19[0xe3];
    for (lVar7 = 0; lVar5 != lVar7; lVar7 = lVar7 + 1) {
      *(undefined8 *)(unaff_x19[0xe2] + lVar7 * 8) = 0;
    }
    unaff_x19[0xe5] = 0;
  }
  lVar5 = unaff_x19[0xe8];
  for (lVar7 = unaff_x19[0xe7]; lVar7 != lVar5; lVar7 = lVar7 + 0x10) {
    func_0x00010b199388();
  }
  FUN_10b19510c(unaff_x19 + 0xe7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 3);
  return;
}



/* Entry: 10b1900bc; end: 10b190107;  */

undefined8 FUN_10b1900bc(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  if (0xffffffff < uVar3) {
    uVar1 = 0;
  }
  if (((uVar3 >> 0x20 == 0) && ((uVar1 & 0xffffffff) == 0)) || (*param_1 == 0x100000003)) {
    uVar2 = 1;
    *param_1 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b190108; end: 10b190177;  */

void FUN_10b190108(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_2b8 [632];
  
  iVar1 = *(int *)(param_3 + 100);
  FUN_10b121c1c(auStack_2b8);
  FUN_10b18f958(param_1,param_2,auStack_2b8,iVar1 == 2,param_4);
  func_0x00010b121af0(auStack_2b8);
  return;
}



/* Entry: 10b190178; end: 10b19030f;  */

undefined8 FUN_10b190178(long param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [24];
  long alStack_68 [3];
  undefined1 auStack_50 [24];
  byte bStack_38;
  
  if (*(char *)(param_2 + 0x88) != '\x01') {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    return 0;
  }
  func_0x00010b199520(*(undefined1 *)(param_2 + 0x17));
  if (extraout_x8 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 100) == 0) {
    return 0;
  }
  if (0 < *(long *)(param_2 + 0x80)) {
    return 0;
  }
  if (*(int *)(param_2 + 100) == 2) {
    if (*(long *)(param_2 + 0x78) == 0) {
      return 0;
    }
    func_0x00010b199320();
    func_0x000104bffddc();
    lVar1 = *(long *)(param_2 + 0x68);
    if ((lVar1 == 0) || (lVar1 != *(long *)(param_2 + 0x78) && lVar1 != *(long *)(param_2 + 0x70)))
    {
      lVar1 = param_2;
      FUN_10b1c4c88();
      if (lVar1 != 0) {
        func_0x00010b1992bc(lVar1);
        while (alStack_68[0] != 0) {
          if ((*(int *)(alStack_68[0] + 0x44) == 2) &&
             (*(long *)(*(long *)(alStack_68[0] + 0x38) + 0x10) == 0)) {
            FUN_10b2026a0(auStack_b8,param_2,alStack_68[0] + 8);
            func_0x000107c27b98(auStack_50,auStack_80);
            func_0x00010b198ef4();
            break;
          }
          func_0x000107c27d54(alStack_68);
        }
      }
    }
    else {
      func_0x000107c27b98(auStack_50,param_2);
    }
    if ((bStack_38 & 1) == 0) {
      uVar2 = 0;
      goto LAB_10b1902bc;
    }
  }
  else {
    func_0x00010b199320();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  FUN_10b202630(auStack_b8,auStack_50);
  func_0x00010b1f68d0(uVar2,auStack_b8,*(undefined4 *)(param_2 + 0x60));
  func_0x00010b198ef4();
LAB_10b1902bc:
  func_0x00010b199094();
  return uVar2;
}



/* Entry: 10b190310; end: 10b19055b;  */

void FUN_10b190310(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [24];
  long alStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  
  if ((*(char *)(param_2 + 0x88) != '\x01') || ((*(byte *)(param_2 + 0x58) & 1) == 0)) {
LAB_10b190384:
    func_0x00010b199394();
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    return;
  }
  lVar3 = param_2;
  func_0x00010b199520(*(undefined1 *)(param_2 + 0x17));
  iVar2 = (int)lVar3;
  if (((extraout_x8 == 0) || (iVar1 = *(int *)(param_2 + 100), iVar1 == 0)) ||
     ((iVar1 == 2 && (*(long *)(param_2 + 0x78) == 0)))) goto LAB_10b190384;
  FUN_10b195a90();
  if (iVar2 == 0) {
    param_3 = 0;
  }
  else {
    if (0 < *(long *)(param_2 + 0x80)) goto LAB_10b190384;
    if ((int)param_3 != 0) {
      param_3 = (ulong)*(byte *)(param_2 + 0x1c0);
    }
  }
  func_0x000107c27f70(&uStack_50,param_2);
  if (iVar1 == 2) {
    func_0x000104bffddc();
    lVar3 = *(long *)(param_2 + 0x68);
    if ((lVar3 == 0) || (lVar3 != *(long *)(param_2 + 0x78) && lVar3 != *(long *)(param_2 + 0x70)))
    {
      lVar3 = param_2;
      FUN_10b1c4c88();
      if (lVar3 != 0) {
        func_0x00010b1992bc(lVar3);
        while (alStack_68[0] != 0) {
          if ((*(int *)(alStack_68[0] + 0x44) == 2) &&
             (*(long *)(*(long *)(alStack_68[0] + 0x38) + 0x10) == 0)) {
            FUN_10b2026a0(auStack_b8,param_2,alStack_68[0] + 8);
            func_0x000107c27b98(&uStack_50,auStack_80);
            func_0x00010b198ef4();
            break;
          }
          func_0x000107c27d54(alStack_68);
        }
      }
    }
    else {
      func_0x000107c27b98(&uStack_50,param_2);
    }
    if ((bStack_38 & 1) == 0) {
      func_0x00010b199394();
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      goto LAB_10b19052c;
    }
  }
  if ((param_3 & 1) == 0) {
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if (bStack_38 == 1) {
      param_1[3] = uStack_48;
      param_1[2] = uStack_50;
      param_1[4] = uStack_40;
      goto LAB_10b1904e8;
    }
  }
  else {
    func_0x00010b199394();
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    if (bStack_38 == 1) {
      param_1[3] = uStack_48;
      param_1[2] = uStack_50;
      param_1[4] = uStack_40;
LAB_10b1904e8:
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_50 = 0;
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x60);
LAB_10b19052c:
  func_0x00010b199094();
  return;
}



/* Entry: 10b19055c; end: 10b19063b;  */

undefined1  [16] FUN_10b19055c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_70 [80];
  
  if (*(char *)(param_2 + 5) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    FUN_10b202630(auStack_70,param_2 + 2);
    func_0x00010b1f68d0(uVar4,auStack_70,*(undefined4 *)(param_2 + 6));
    iVar1 = (int)uVar4;
    func_0x00010b121e00(auStack_70);
  }
  else {
    iVar1 = 0;
  }
  uVar4 = *param_2;
  func_0x000107c27944(uVar4,param_2[1],&UNK_10f730eec,0xb);
  if ((int)uVar4 == 0) {
    lVar3 = param_2[1];
    if (lVar3 == 0) {
      puVar2 = &UNK_10f730f27;
      if (iVar1 == 0) {
        puVar2 = &UNK_10f730f30;
      }
      lVar3 = 8;
      if (iVar1 == 0) {
        lVar3 = 0xc;
      }
    }
    else {
      puVar2 = (undefined *)*param_2;
    }
  }
  else {
    puVar2 = &UNK_10f730f02;
    if (iVar1 == 0) {
      puVar2 = &UNK_10f730f14;
    }
    lVar3 = 0x11;
    if (iVar1 == 0) {
      lVar3 = 0x12;
    }
  }
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Entry: 10b19063c; end: 10b190fc3;  */

void FUN_10b19063c(undefined8 param_1,long *param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  long *param_6,uint param_7,long param_8)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  int in_stack_00000060;
  undefined1 in_stack_00000064;
  long lStack_9d0;
  long lStack_9c8;
  long lStack_9c0;
  undefined1 auStack_9b8 [160];
  undefined1 auStack_918 [632];
  long lStack_6a0;
  long lStack_698;
  undefined1 auStack_690 [16];
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 auStack_668 [632];
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  long lStack_340;
  undefined1 uStack_328;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_10;
  
  func_0x00010b199450();
  uVar8 = param_4;
  func_0x00010b198bf0();
  uVar5 = param_4;
  uStack_10 = extraout_x8_00;
  if ((in_stack_00000060 == 0) || (*(byte *)(uVar8 + 0xa0) == 0)) {
    lVar11 = *param_6;
    if ((*(byte *)(uVar8 + 0xa0) & 1) == 0) {
      uVar5 = param_3;
      FUN_10b1c41c0(param_3);
    }
  }
  else {
    *(int *)(param_4 + 0x98) = in_stack_00000060;
    lVar11 = *param_6;
  }
  FUN_10b1b3e60(lVar11,param_3,uVar5);
  uVar13 = (uint)lVar11;
  bVar9 = false;
  if (((uVar13 == 0) && ((*(byte *)(param_3 + 0x1c0) & 1) != 0)) &&
     ((*(byte *)(param_4 + 0xa0) & 1) != 0)) {
    uVar5 = param_4;
    FUN_10b190fc4();
    if ((uVar5 & 1) == 0) {
      func_0x00010b199230();
      FUN_10b1b46f0();
      func_0x00010b198f58();
      if (puStack_d0 != (undefined8 *)0x0) {
        puStack_b8 = puStack_d0;
        puStack_b0 = puStack_c8;
        puStack_d0 = (undefined8 *)0x0;
        puStack_c8 = (undefined8 *)0x0;
        FUN_10b18ff20(param_2,&puStack_b8,1);
        func_0x0001052ac684(&puStack_b8);
      }
      func_0x00010b199184();
      uVar13 = 0;
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
  }
  lVar11 = *param_6;
  FUN_10b12394c(auStack_668,param_3);
  FUN_10b190108(&puStack_3f0,lVar11,auStack_668,in_stack_00000064);
  func_0x00010b121af0(auStack_668);
  if (((!bVar9 && (uVar13 & 1) == 0) && (puStack_3f0 == (undefined8 *)0x0)) &&
     (((*(byte *)(param_4 + 0xa0) & 1) != 0 && (uVar5 = param_4, FUN_10b190fc4(), (uVar5 & 1) == 0))
     )) {
    iVar4 = (int)*(undefined8 *)(*param_6 + 0x10);
    FUN_10b18ff10();
    if (iVar4 != 0) {
      func_0x00010b199230();
      FUN_10b1b46f0();
      func_0x00010b198f58();
      func_0x00010b199184();
    }
  }
  puVar6 = (undefined8 *)0x870;
  __Znwm();
  plVar12 = puVar6 + 1;
  *plVar12 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110cc23b0;
  FUN_10b121c1c(&puStack_350,param_3);
  FUN_10b121494(&puStack_b8,param_4);
  FUN_10b12110c(&uStack_3b8,param_5);
  lStack_3c8 = param_6[1];
  puStack_3d0 = (undefined8 *)*param_6;
  if (param_6[1] != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  puStack_3e8 = puStack_3f0;
  puStack_3f0 = (undefined8 *)0x0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[3] = &PTR_FUN_110cc21f8;
  __ZNSt3__115recursive_mutexC1Ev(puVar6 + 6);
  FUN_10b1238dc(puVar6 + 0xe,param_1);
  FUN_10b121c1c(puVar6 + 0x6b,&puStack_350);
  FUN_10b121494(puVar6 + 0xba,&puStack_b8);
  FUN_10b12110c(puVar6 + 0xcf,&uStack_3b8);
  *(int *)(puVar6 + 0xd8) = in_stack_00000060;
  puVar6[0xda] = lStack_3c8;
  puVar6[0xd9] = puStack_3d0;
  puStack_3d0 = (undefined8 *)0x0;
  lStack_3c8 = 0;
  *(undefined1 *)(puVar6 + 0xe3) = 0;
  puVar6[0xdb] = 0;
  puVar6[0xdd] = 0;
  puVar6[0xdc] = 0;
  *(undefined1 *)(puVar6 + 0xde) = 0;
  puVar6[0xe5] = 0;
  puVar6[0xe4] = 0;
  puVar6[0xe7] = 0;
  puVar6[0xe6] = 0;
  puVar6[0xe8] = 0;
  *(undefined4 *)(puVar6 + 0xe9) = 0x3f800000;
  puVar6[0xea] = 0;
  puVar6[0xec] = 0;
  puVar6[0xeb] = 0;
  *(undefined1 *)(puVar6 + 0xed) = 0;
  puVar6[0xee] = puStack_3e8;
  puStack_3e8 = (undefined8 *)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0xef,puVar6 + 0x6b);
  *(bool *)(puVar6 + 0xf2) = *(int *)((long)puVar6 + 0x3bc) == 2;
  *(undefined1 *)((long)puVar6 + 0x7bc) = 0;
  puVar6[0xf4] = 0;
  puVar6[0xf6] = 0;
  puVar6[0xf5] = 0;
  *(undefined1 *)(puVar6 + 0xf7) = 0;
  func_0x000107c278b8(&uStack_370,&UNK_10f731917);
  puVar1 = puVar6 + 3;
  puVar6[0xf8] = 0;
  puVar6[0xfb] = uStack_360;
  puVar6[0xfa] = uStack_368;
  puVar6[0xf9] = uStack_370;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_360 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_370);
  puVar6[0xfd] = (ulong)param_7 | 0x100000000;
  *(undefined1 *)(puVar6 + 0xfe) = 0;
  *(undefined1 *)(puVar6 + 0x108) = 0;
  *(undefined1 *)(puVar6 + 0x109) = 0;
  *(undefined1 *)(puVar6 + 0x10c) = 0;
  *(undefined4 *)(puVar6 + 0x10d) = 0;
  puVar6[0x100] = 0;
  puVar6[0xff] = 0;
  puVar6[0x102] = 0;
  puVar6[0x101] = 0;
  *(undefined8 *)((long)puVar6 + 0x819) = 0;
  *(undefined8 *)((long)puVar6 + 0x811) = 0;
  if (puVar6[0xd9] == 0) {
    *(undefined1 *)((long)puVar6 + 0x7ec) = 0;
  }
  if (puVar6[0xee] != 0) {
    puVar6[0xf8] = 0x100000000;
  }
  func_0x00010b12b970(&puStack_3e8);
  func_0x00010b1257d4(&puStack_3d0);
  FUN_10b121398(&uStack_3b8);
  FUN_10b12130c(&puStack_b8);
  func_0x00010b121af0(&puStack_350);
  *extraout_x8 = (long)puVar1;
  extraout_x8[1] = (long)puVar6;
  if ((puVar6[5] == 0) || (*(long *)(puVar6[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puStack_b8 = puVar1;
      puStack_b0 = puVar6;
    } while (cVar2 != '\0');
    do {
      func_0x00010b198d28();
    } while (extraout_w11 != 0);
    puStack_350 = (undefined8 *)puVar6[4];
    puVar6[4] = puVar1;
    puVar6[5] = puVar6;
    puStack_348 = extraout_x8_01;
    FUN_10b12ac80(&puStack_350);
    FUN_10b129c1c(&puStack_b8);
  }
  uVar3 = *param_2 == param_2[1];
  if (!(bool)uVar3) {
    if (((*(byte *)(puVar6 + 0x7c) & 1) == 0) ||
       (uVar3 = *(int *)((long)puVar6 + 0x3bc) == 2, !(bool)uVar3)) {
      puStack_350 = (undefined8 *)((ulong)puStack_350 & 0xffffffffffffff00);
      uStack_328 = 0;
      func_0x00010b19932c();
      func_0x000107c27bb0(&puStack_350);
    }
    else {
      puStack_3d0 = (undefined8 *)(param_8 + -1);
      lStack_3c8 = 0;
      func_0x000107c2793c("bytes=0-{}");
      func_0x000107c3173c(&uStack_370);
      func_0x00010b195df0(&puStack_b8,"Range",&uStack_370);
      func_0x000104bd4884(&uStack_3b8,&puStack_b8,1);
      func_0x000107c27f0c(&puStack_350,&uStack_3b8);
      func_0x00010b19932c();
      func_0x000107c27bb0(&puStack_350);
      func_0x000107c278e0(&uStack_3b8);
      func_0x000107c278c0(&puStack_b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_370);
    }
    puVar6[0xf3] = param_8;
    if (uVar13 == 0) {
      FUN_10b18fffc(puVar1,param_2);
    }
    else {
      uVar10 = *(undefined8 *)*param_6;
      FUN_10b12983c(&puStack_350,*(undefined4 *)(puVar6 + 0x6e));
      func_0x00010b19909c(&puStack_b8,&puStack_350);
      func_0x00010b198d68(uVar10,0xba,&puStack_b8);
      FUN_10b120998(&puStack_b8);
      func_0x00010b198ed4(&puStack_350);
      lStack_698 = param_6[1];
      lStack_6a0 = *param_6;
      if (param_6[1] != 0) {
        do {
          func_0x00010b198bb4();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b12394c(auStack_918,puVar6 + 0x6b);
      puVar7 = puVar1;
      func_0x00010b190fe8(puVar1);
      FUN_10b121300(auStack_9b8,puVar7);
      lStack_9c8 = param_2[1];
      lStack_9d0 = *param_2;
      lStack_9c0 = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      FUN_10b1b3f8c(auStack_690,&lStack_6a0,auStack_918,auStack_9b8,(ulong)param_7,&lStack_9d0);
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar9) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puStack_b0 = (undefined8 *)0x0;
      puStack_b8 = (undefined8 *)0x0;
      uStack_3b0 = 0;
      uStack_3b8 = 0;
      FUN_10b195e24(&puStack_350,auStack_690,&uStack_3b8);
      FUN_10b195e74(&puStack_b8,&puStack_350);
      func_0x00010b1960f8(&puStack_350);
      func_0x00010b1960f8(&uStack_3b8);
      func_0x000107c27b48(&lStack_3d8);
      func_0x000107c27b4c(&uStack_370,lStack_3d8);
      lStack_340 = lStack_3d8;
      lStack_3d8 = 0;
      lStack_3c8 = 0;
      puStack_3d0 = (undefined8 *)0x0;
      puStack_3e8 = puStack_b8 + 0xd6;
      lStack_3e0 = CONCAT71(lStack_3e0._1_7_,1);
      puStack_350 = puVar1;
      puStack_348 = puVar6;
      __ZNSt3__15mutex4lockEv();
      puVar6 = puStack_b8;
      func_0x00010b195eac();
      if ((int)puVar6 == 0) {
        puVar6 = (undefined8 *)0x20;
        __Znwm();
        lVar11 = lStack_340;
        *puVar6 = &PTR_SUB_110cc2288;
        puVar6[2] = puStack_348;
        puVar6[1] = puStack_350;
        puStack_350 = (undefined8 *)0x0;
        puStack_348 = (undefined8 *)0x0;
        lStack_340 = 0;
        puVar6[3] = lVar11;
        lVar11 = puStack_b8[0xdf];
        puStack_b8[0xdf] = puVar6;
        if (lVar11 != 0) {
          func_0x00010b199038();
        }
      }
      else {
        FUN_10b195e74(&puStack_3d0,&puStack_b8);
      }
      func_0x000107c2798c(&puStack_3e8);
      if (puStack_3d0 != (undefined8 *)0x0) {
        puStack_3e8 = puStack_3d0;
        lStack_3e0 = lStack_3c8;
        if (lStack_3c8 != 0) {
          do {
            func_0x00010b198bb4();
          } while (extraout_w10_01 != 0);
        }
        FUN_10b195eec(&puStack_350);
        func_0x00010b1960f8(&puStack_3e8);
      }
      uStack_678 = uStack_368;
      uStack_680 = uStack_370;
      uStack_368 = 0;
      uStack_370 = 0;
      func_0x00010b1960f8(&puStack_3d0);
      func_0x00010b1960d8(&puStack_350);
      func_0x000107c27b58(&uStack_370);
      lVar11 = lStack_3d8;
      lStack_3d8 = 0;
      if (lVar11 != 0) {
        func_0x00010b198d04();
      }
      func_0x00010b1960f8(&puStack_b8);
      func_0x000107c27b58(&uStack_680);
      func_0x00010b1992e0();
      func_0x00010b1960f8(auStack_690);
      FUN_10b125534(&lStack_9d0);
      FUN_10b24f5cc(auStack_9b8);
      func_0x00010b121af0(auStack_918);
      func_0x00010b1257d4(&lStack_6a0);
    }
  }
  func_0x00010b12b970(&puStack_3f0);
  func_0x00010b198ba0(uStack_10);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010b199184();
    func_0x00010b12b970(&puStack_3f0);
    do {
      func_0x00010b198cc0();
      func_0x00010b121af0(auStack_668);
    } while( true );
  }
  return;
}



/* Entry: 10b190fc4; end: 10b190fff;  */

bool FUN_10b190fc4(long param_1)

{
  if (((*(uint *)(param_1 + 0x10) >> 2 & 1) == 0) && ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0)) {
    return *(int *)(param_1 + 0x20) == 0;
  }
  return false;
}



/* Entry: 10b191000; end: 10b1910b3;  */

void FUN_10b191000(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined1 auStack_140 [72];
  undefined1 auStack_f8 [168];
  
  FUN_10b121eac(auStack_f8,param_2 + 0x290);
  func_0x00010b121ec4(auStack_140,param_2 + 0x330);
  FUN_10b19063c(param_1,param_2 + 0x388,param_2,param_2 + 0x18,auStack_f8,auStack_140,param_3,
                param_4,param_5,param_6,param_7);
  func_0x00010b198fb0();
  func_0x00010b198fa0();
  return;
}



/* Entry: 10b1910b4; end: 10b1911ef;  */

void FUN_10b1910b4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined1 auStack_3f0 [64];
  undefined1 uStack_3b0;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [744];
  
  func_0x00010b199450();
  lVar1 = param_1;
  FUN_10b1c41c0();
  lVar2 = param_1;
  FUN_10b1c4ae8();
  if (lVar1 == 0) {
LAB_10b1911a8:
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    if (lVar2 == 0) {
      uVar3 = *(ulong *)(*param_2 + 0x10);
      FUN_10b1911f0();
      if ((uVar3 & 1) == 0) goto LAB_10b1911a8;
    }
    FUN_10b20752c(auStack_2e8,lVar1);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    FUN_10b1b3d48(&uStack_3a8,lVar1);
    if (CONCAT71(uStack_3a7,uStack_3a8) != 0) {
      FUN_10b196388(&uStack_300,&uStack_3a8);
    }
    func_0x0001052ac684(&uStack_3a8);
    uStack_3a8 = 0;
    uStack_308 = 0;
    auStack_3f0[0] = 0;
    uStack_3b0 = 0;
    FUN_10b19063c(extraout_x8,auStack_2e8,&uStack_300,param_1,&uStack_3a8,auStack_3f0,param_2,
                  param_3,param_4,param_5,param_6);
    func_0x00010b198fb0();
    func_0x00010b198fa0();
    FUN_10b125534(&uStack_300);
    func_0x00010b0faf64(auStack_2e8);
  }
  return;
}



/* Entry: 10b1911f0; end: 10b1911ff;  */

uint FUN_10b1911f0(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  param_1 = param_1 + 0x38;
  ppuStack_28 = &PTR_DAT_110cc25f8;
  FUN_10b201f80(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be10(&PTR_DAT_110cc25f8);
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x18);
    func_0x000107c29b34();
    uVar1 = (uint)*pbVar2;
  }
  return uVar1 & 1;
}



/* Entry: 10b191200; end: 10b1912c3;  */

undefined8 * FUN_10b191200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc21f8;
  func_0x000107c279a4(param_1 + 0x106);
  func_0x000107c27f14(param_1 + 0x101);
  if (param_1[0x100] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010b196524(param_1 + 0xfc);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf6);
  func_0x00010b1964f0(param_1 + 0xf1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xec);
  func_0x00010b12b970(param_1 + 0xeb);
  func_0x00010b196524(param_1 + 0xe7);
  FUN_10b197434(param_1 + 0xe2);
  func_0x000107c27bb0(param_1 + 0xdb);
  FUN_10b125534(param_1 + 0xd8);
  func_0x00010b1257d4(param_1 + 0xd6);
  FUN_10b121398(param_1 + 0xcc);
  FUN_10b12130c(param_1 + 0xb7);
  func_0x00010b121af0(param_1 + 0x68);
  func_0x00010b0faf64(param_1 + 0xb);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 3);
  FUN_10b12ac80(param_1 + 1);
  return param_1;
}



/* Entry: 10b1912c4; end: 10b1912c7;  */

undefined8 * FUN_10b1912c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc21f8;
  func_0x000107c279a4(param_1 + 0x106);
  func_0x000107c27f14(param_1 + 0x101);
  if (param_1[0x100] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010b196524(param_1 + 0xfc);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf6);
  func_0x00010b1964f0(param_1 + 0xf1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xec);
  func_0x00010b12b970(param_1 + 0xeb);
  func_0x00010b196524(param_1 + 0xe7);
  FUN_10b197434(param_1 + 0xe2);
  func_0x000107c27bb0(param_1 + 0xdb);
  FUN_10b125534(param_1 + 0xd8);
  func_0x00010b1257d4(param_1 + 0xd6);
  FUN_10b121398(param_1 + 0xcc);
  FUN_10b12130c(param_1 + 0xb7);
  func_0x00010b121af0(param_1 + 0x68);
  func_0x00010b0faf64(param_1 + 0xb);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 3);
  FUN_10b12ac80(param_1 + 1);
  return param_1;
}



/* Entry: 10b1912c8; end: 10b1912db;  */

void FUN_10b1912c8(void)

{
  FUN_10b191200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1912dc; end: 10b19134f;  */

undefined8 FUN_10b1912dc(ulong param_1,int param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  
  func_0x00010b199274();
  if ((bool)in_ZR) {
    return 0;
  }
  if (*(long *)(param_1 + 0x758) == 0) {
    uVar1 = param_1;
    func_0x00010b1990e4();
    FUN_10b190fc4();
    if ((param_2 != 3) && ((uVar1 & 1) == 0)) {
      return 2;
    }
  }
  else if (param_2 != 3) {
    return 2;
  }
  *(undefined8 *)(param_1 + 0x7a8) = 0x100000003;
  return 3;
}



/* Entry: 10b191350; end: 10b191503;  */

undefined4 FUN_10b191350(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined4 uVar3;
  code *extraout_x8;
  ulong uVar4;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [64];
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_40;
  
  func_0x00010b198d38();
  puVar1 = (ulong *)(unaff_x19 + 0x7a8);
  FUN_10b1900bc();
  if ((int)puVar1 == 0) {
    func_0x00010b198cc8();
    uVar3 = 3;
  }
  else {
    lStack_78 = param_2[1];
    lStack_80 = *param_2;
    if (param_2[1] != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10 != 0);
    }
    uStack_40 = 1;
    FUN_10b191504(auStack_c8,&lStack_80);
    FUN_10b11a178(unaff_x19 + 0x758,auStack_c8);
    func_0x00010b12b970(auStack_c8);
    func_0x0001052a4808(&lStack_80);
    func_0x00010b198cc8();
    auStack_c8[0] = 0;
    uStack_88 = 0;
    lVar2 = *param_2;
    lStack_e8 = param_2[1];
    lStack_f0 = lVar2;
    if (lStack_e8 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10_00 != 0);
      lVar2 = *param_2;
    }
    if (lVar2 != 0) {
      func_0x00010b1991c4();
      (*extraout_x8)();
    }
    auStack_110[0] = 0;
    uStack_f8 = 0;
    FUN_10b191588(auStack_e0);
    func_0x000107c279a4(auStack_110);
    func_0x000107c27d78(&lStack_f0);
    func_0x000107c281f4(auStack_128,auStack_e0);
    FUN_10b192534();
    func_0x000107c27f18(auStack_128);
    uVar4 = *(ulong *)(unaff_x19 + 0x7a8);
    uVar3 = (undefined4)uVar4;
    if (uVar4 >> 0x20 != 1) {
      uVar3 = 3;
    }
    func_0x000107c27f18(auStack_e0);
    func_0x0001052a038c(auStack_c8);
  }
  return uVar3;
}



/* Entry: 10b191504; end: 10b191587;  */

void FUN_10b191504(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x00010b198c88();
  puVar1 = (undefined8 *)0xd8;
  __Znwm();
  puVar2 = puVar1;
  func_0x00010b198e00();
  *puVar2 = &PTR_FUN_110cc2338;
  puVar2[1] = 0;
  puStack_40 = puVar2;
  puStack_38 = puVar2;
  func_0x000107c2805c();
  FUN_10b122ffc(puVar1);
  *unaff_x19 = puVar1;
  puStack_40 = (undefined8 *)0x0;
  func_0x00010b12ba18(&puStack_40);
  FUN_10b1974a0(&puStack_38);
  return;
}



/* Entry: 10b191588; end: 10b192533;  */

void FUN_10b191588(long param_1,undefined8 *param_2,long *param_3,long param_4,int param_5,
                  undefined8 param_6,long *param_7)

{
  byte bVar1;
  char cVar2;
  undefined1 in_ZR;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long **pplVar6;
  long lVar7;
  undefined1 *puVar8;
  long **pplVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  long *plVar15;
  long **pplVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 in_stack_00000050;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined1 uStack_d90;
  undefined1 auStack_d80 [632];
  undefined1 auStack_b08 [8];
  long **pplStack_b00;
  long *plStack_af8;
  undefined8 *puStack_af0;
  long **pplStack_ae8;
  undefined8 *puStack_ae0;
  code *pcStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined4 uStack_a98;
  long lStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  ulong uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined1 uStack_a58;
  byte bStack_a38;
  char cStack_a08;
  long *plStack_810;
  long lStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined8 uStack_7dc;
  undefined1 uStack_7d0;
  ulong uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  char cStack_7b0;
  long lStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined1 auStack_790 [384];
  undefined8 uStack_610;
  long lStack_608;
  undefined1 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [48];
  undefined8 uStack_5a0;
  undefined1 auStack_590 [152];
  int iStack_4f8;
  undefined1 uStack_4f0;
  undefined1 auStack_4e8 [64];
  undefined1 uStack_4a8;
  undefined4 uStack_4a0;
  undefined1 uStack_49c;
  undefined4 uStack_498;
  undefined1 uStack_494;
  undefined1 auStack_490 [80];
  long *plStack_440;
  long lStack_438;
  undefined1 uStack_418;
  long lStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  long **applStack_3f8 [3];
  undefined4 uStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long **pplStack_3c8;
  long lStack_3c0;
  undefined1 uStack_3a0;
  byte bStack_388;
  long *plStack_380;
  long lStack_378;
  long **pplStack_370;
  undefined8 *puStack_368;
  long *plStack_360;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  long lStack_338;
  byte bStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  char cStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  byte bStack_2a0;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  byte bStack_208;
  undefined8 uStack_18;
  
  func_0x00010b199450();
  uStack_ad0 = param_6;
  func_0x00010b198bdc();
  plStack_2c0 = param_3;
  lStack_2b8 = param_4;
  uStack_18 = extraout_x8;
  if (param_4 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  uStack_610 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_600 = 1;
  lStack_608 = param_1;
  func_0x00010b19917c();
  uVar17 = *(ulong *)(param_1 + 0x30);
  func_0x00010b19917c();
  puVar18 = (undefined8 *)(uVar17 & 0xfffffffffffffffc);
  uVar17 = (ulong)*(char *)((long)puVar18 + 0x17);
  uVar21 = uVar17;
  if ((long)uVar17 < 0) {
    uVar21 = puVar18[1];
  }
  pplVar16 = &plStack_810;
  if (uVar21 == 0) {
    plStack_2b0 = plStack_2c0;
    lStack_2a8 = lStack_2b8;
    lStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    bStack_2a0 = 1;
  }
  else {
    uVar21 = *(ulong *)(param_1 + 0x38);
    if (plStack_2c0 == (long *)0x0) {
      bVar3 = true;
      if (((uint)(int)*(char *)((long)puVar18 + 0x17) >> 7 & 1) != 0) goto LAB_10b191670;
LAB_10b191640:
      uVar17 = uVar17 & 0xff;
      puVar5 = puVar18;
    }
    else {
      plVar15 = plStack_2c0;
      (**(code **)(*plStack_2c0 + 0x18))();
      bVar3 = plVar15 == (long *)0x0;
      uVar17 = (ulong)*(byte *)((long)puVar18 + 0x17);
      if (-1 < (char)*(byte *)((long)puVar18 + 0x17)) goto LAB_10b191640;
LAB_10b191670:
      puVar5 = (undefined8 *)*puVar18;
      uVar17 = puVar18[1];
    }
    func_0x000107c31544(auStack_490,puVar5,uVar17);
    puVar5 = (undefined8 *)(uVar21 & 0xfffffffffffffffc);
    lVar10 = (long)*(char *)((long)puVar5 + 0x17);
    puVar18 = puVar5;
    if (lVar10 < 0) {
      puVar18 = (undefined8 *)*puVar5;
      lVar10 = puVar5[1];
    }
    func_0x000107c31544(&plStack_340,puVar18);
    lStack_438 = lStack_2b8;
    plStack_440 = plStack_2c0;
    lStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    bVar1 = *(byte *)(param_2 + 0xef);
    pplVar6 = &plStack_440;
    func_0x00010b193ce8();
    if (lStack_338 - (long)plStack_340 == 0xc) {
      func_0x00010bcd5688(&uStack_290,auStack_490,&plStack_340);
      pplStack_3c8 = pplVar6;
      lStack_3c0 = lVar10;
      func_0x00010bcd58c8(&lStack_a90,&uStack_290,&pplStack_3c8);
      if ((char)uStack_a78 == '\x01') {
        func_0x000107c3171c(&plStack_810,&lStack_a90);
        func_0x000107c279c4(&lStack_a90);
      }
      else {
        func_0x000107c279c4(&lStack_a90);
        lStack_808 = 0;
        plStack_810 = (long *)0x0;
      }
    }
    else {
      lStack_a90 = 0;
      uStack_a88 = 0;
      FUN_10b208300(&uStack_290,auStack_490,&plStack_340,(bVar1 ^ 1) & 1,&lStack_a90);
      func_0x000107c27f10(&lStack_a90);
      FUN_10b208438(&uStack_290,pplVar6,lVar10);
      puVar18 = &uStack_290;
      FUN_10b2083b0(puVar18);
      func_0x00010b208420(&plStack_810,&uStack_290,puVar18);
      FUN_10b196950(&uStack_290);
    }
    func_0x000107c27d78(&plStack_440);
    func_0x000107c27914(&plStack_340);
    func_0x000107c27914(auStack_490);
    plVar15 = plStack_810;
    func_0x00010b193ca8(plStack_810,lStack_808);
    if ((int)plVar15 == 0) {
      if (plStack_810 == (long *)0x0) {
LAB_10b19183c:
        uVar19 = *(undefined8 *)param_2[0xd6];
        func_0x00010b198d5c(&uStack_290);
        FUN_10b12983c(&uStack_268,*(undefined4 *)(param_2 + 0x6b));
        func_0x00010b12aca4(auStack_240,*(undefined4 *)(param_2 + 0x72));
        func_0x00010b19913c(&uStack_218);
        func_0x00010b198f68();
        param_3 = &lStack_a90;
        func_0x00010b198d68(uVar19,0x80);
        func_0x00010b198e5c();
        lVar10 = 0x88;
        do {
          func_0x00010b1993e0();
          lVar10 = lVar10 + -0x28;
        } while (lVar10 != -0x18);
        if (!bVar3) goto LAB_10b191934;
      }
      else {
        plVar15 = plStack_810;
        func_0x00010b1991c4();
        (*extraout_x8_00)();
        if (plVar15 == (long *)0x0) goto LAB_10b19183c;
      }
      uVar19 = *(undefined8 *)param_2[0xd6];
      FUN_10b12983c(&uStack_290,*(undefined4 *)(param_2 + 0x6b));
      func_0x00010b12aca4(&uStack_268,*(undefined4 *)(param_2 + 0x72));
      func_0x00010b1993d8(&lStack_a90,&uStack_290);
      puVar18 = &uStack_610;
      func_0x000107c28148(puVar18);
      param_3 = &lStack_a90;
      FUN_10b1135dc(uVar19,0x7d,param_3,puVar18);
      func_0x00010b198e5c();
      lVar10 = 0x38;
      do {
        func_0x00010b1993e0();
        lVar10 = lVar10 + -0x28;
      } while (lVar10 != -0x18);
      lStack_2a8 = lStack_808;
      plStack_2b0 = plStack_810;
      plStack_810 = (long *)0x0;
      lStack_808 = 0;
      bStack_2a0 = 1;
    }
    else {
      uVar19 = *(undefined8 *)param_2[0xd6];
      func_0x00010b198d5c(&uStack_290);
      FUN_10b12983c(&uStack_268,*(undefined4 *)(param_2 + 0x6b));
      func_0x00010b12aca4(auStack_240,*(undefined4 *)(param_2 + 0x72));
      func_0x00010b19913c(&uStack_218);
      func_0x00010b198f68();
      param_3 = &lStack_a90;
      func_0x00010b198d68(uVar19,0x80);
      func_0x00010b198e5c();
      lVar10 = 0x88;
      do {
        func_0x00010b1993e0();
        lVar10 = lVar10 + -0x28;
      } while (lVar10 != -0x18);
LAB_10b191934:
      bStack_2a0 = 0;
      plStack_2b0 = (long *)((ulong)plStack_2b0 & 0xffffffffffffff00);
    }
    in_ZR = 1;
    func_0x000107c27d78(&plStack_810);
  }
  pplVar6 = &plStack_2c0;
  func_0x000107c27d78();
  if ((bStack_2a0 & 1) == 0) {
    func_0x000107c278b8(&uStack_2d8,&UNK_10e5628f7);
    func_0x00010b139e90(&puStack_2f8,&UNK_10f730f3d);
    lStack_280 = lStack_2c8;
    puStack_288 = puStack_2d0;
    uStack_290 = uStack_2d8;
    lStack_2c8 = 0;
    uStack_2d8 = 0;
    puStack_2d0 = (undefined8 *)0x0;
    puStack_278 = (undefined8 *)0x5;
    puStack_270 = (undefined8 *)((ulong)puStack_270 & 0xffffffffffffff00);
    in_ZR = cStack_2e0 == '\x01';
    if ((bool)in_ZR) {
      uStack_268 = uStack_2f0;
      puStack_270 = puStack_2f8;
      uStack_260 = uStack_2e8;
      uStack_2e8 = 0;
      puStack_2f8 = (undefined8 *)0x0;
      uStack_2f0 = 0;
    }
    uStack_258 = in_ZR;
    func_0x00010b199428();
    func_0x0001052a03ac(&uStack_290);
    func_0x000107c279a4(&puStack_2f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2d8);
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 2) = 0;
    goto LAB_10b192214;
  }
  func_0x00010b19917c();
  puVar18 = param_2 + 0x68;
  lStack_358 = lStack_2a8;
  plStack_360 = plStack_2b0;
  pplStack_370 = pplVar6;
  puStack_368 = puVar18;
  if (lStack_2a8 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b1994f4();
  FUN_10b20ecf8(&uStack_290);
  uStack_348 = *(undefined8 *)param_2[0xd6];
  puStack_350 = &uStack_290;
  FUN_10b1b804c(&plStack_340,&pplStack_370);
  func_0x000107c27d78(&plStack_360);
  func_0x00010b0fe8e8(&uStack_290);
  if ((bStack_300 & 1) == 0) {
    func_0x00010b199428();
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 2) = 0;
  }
  else {
    plVar15 = plStack_340;
    func_0x00010b193ca8();
    if ((int)plVar15 == 0) {
      lStack_378 = lStack_338;
      plStack_380 = plStack_340;
      lStack_338 = 0;
      plStack_340 = (long *)0x0;
      pplStack_3c8 = (long **)((ulong)pplStack_3c8 & 0xffffffffffffff00);
      uStack_3a0 = 0;
      bStack_388 = 1;
LAB_10b191bd0:
      puStack_400 = (undefined8 *)0x0;
      puStack_408 = (undefined8 *)0x0;
      lStack_410 = 0;
      FUN_10b19676c(&uStack_290,&pplStack_3c8);
      cVar2 = (char)uStack_268;
      if ((char)uStack_268 == '\x01') {
        func_0x000108976c60(&plStack_380,&uStack_290);
        if (lStack_410 != 0) {
          FUN_10b17df30(&lStack_410);
          __ZdlPv(lStack_410);
        }
        puStack_408 = puStack_278;
        lStack_410 = lStack_280;
        puStack_400 = puStack_270;
        puStack_278 = (undefined8 *)0x0;
        puStack_270 = (undefined8 *)0x0;
        lStack_280 = 0;
      }
      FUN_10b1967f8(&uStack_290);
      if ((param_5 != 0) && (cVar2 != '\0')) {
        FUN_10b206ee4(&lStack_a90,puVar18);
        puVar5 = puStack_408;
        if (puStack_408 < puStack_400) {
          FUN_10b19683c(puStack_408,&lStack_a90,&plStack_2b0);
          puVar5 = puVar5 + 0x13;
        }
        else {
          func_0x00010b1994c0();
          func_0x00010b199300();
          func_0x00010b19901c();
          func_0x00010b19941c();
          FUN_10b19683c(lStack_280,&lStack_a90,&plStack_2b0);
          lStack_280 = lStack_280 + 0x98;
          func_0x00010b19930c();
          puVar5 = puStack_408;
          func_0x00010b19916c();
        }
        puStack_408 = puVar5;
        func_0x00010b19926c();
      }
      plStack_440 = (long *)((ulong)plStack_440 & 0xffffffffffffff00);
      uStack_418 = 0;
      FUN_10b202630(auStack_490,puVar18);
      if (cVar2 == '\0') {
        if (*(char *)(param_2 + 0xef) != '\x01') {
          uVar14 = 1;
          goto LAB_10b191d54;
        }
        *(undefined4 *)((long)param_2 + 0x3a4) = 2;
        func_0x00010b193d38(&plStack_440);
        pplVar16 = &plStack_440;
        FUN_10b1865ac();
        pplVar16[2] = (long *)0x0;
        func_0x000107c278b8(&lStack_a90,&DAT_10f381872);
        FUN_10b2026a0(&uStack_290,auStack_490,&lStack_a90);
        FUN_10b1559a4(auStack_490,&uStack_290);
        func_0x00010b121e00(&uStack_290);
        func_0x00010b19926c();
      }
      else {
        uVar14 = 3;
LAB_10b191d54:
        *(undefined4 *)((long)param_2 + 0x3a4) = uVar14;
      }
      puVar5 = puStack_408;
      if (puStack_408 < puStack_400) {
        FUN_10b1968f8(puStack_408,auStack_490,plStack_380,lStack_378,&plStack_440);
        puVar5 = puVar5 + 0x13;
      }
      else {
        func_0x00010b1994c0();
        func_0x00010b199300();
        func_0x00010b19901c();
        func_0x00010b19941c();
        FUN_10b1968f8(lStack_280,auStack_490,plStack_380,lStack_378,&plStack_440);
        lStack_280 = lStack_280 + 0x98;
        func_0x00010b19930c();
        puVar5 = puStack_408;
        func_0x00010b19916c();
      }
      param_2[0x77] = uStack_ad0;
      puStack_408 = puVar5;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_610,puVar18);
      puVar5 = param_2 + 0x74;
      FUN_10b193d78();
      uStack_5f0 = puVar5[1];
      uStack_5f8 = *puVar5;
      uStack_5e0 = puVar5[3];
      uStack_5e8 = puVar5[2];
      uStack_5d8 = puVar5[4];
      pplVar16 = (long **)(param_2 + 0x6b);
      pplVar6 = pplVar16;
      func_0x00010b193d90(pplVar16);
      puVar8 = auStack_5d0;
      func_0x00010b125750(puVar8,pplVar6);
      auStack_590[0] = 0;
      uStack_4f0 = 0;
      auStack_4e8[0] = 0;
      uStack_4a8 = 0;
      uStack_4a0 = *(undefined4 *)(param_2 + 0xf4);
      uStack_49c = *(undefined1 *)((long)param_2 + 0x7a4);
      uStack_498 = *(undefined4 *)(param_2 + 0xd5);
      uStack_494 = 1;
      func_0x00010b1994f4();
      FUN_10b18ff10();
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010b19917c();
        FUN_10b11fdb8(auStack_590,puVar8);
        if ((*(byte *)(param_2 + 0xd4) & 1) == 0) {
          puVar5 = puVar18;
          FUN_10b1c4ae8();
          if (puVar5 != (undefined8 *)0x0) goto LAB_10b191e8c;
        }
        else {
          puVar5 = param_2 + 0xcc;
LAB_10b191e8c:
          func_0x00010b11fdec(auStack_4e8,puVar5);
        }
        if (*(int *)(param_2 + 0xd5) != 0) {
          iStack_4f8 = *(int *)(param_2 + 0xd5);
        }
      }
      uStack_5a0 = 0;
      uStack_5d8 = 0;
      uVar19 = *(undefined8 *)(param_2[0xd6] + 0x40);
      puVar8 = auStack_790;
      func_0x00010b1213e8(puVar8,&uStack_610);
      func_0x00010b1994f4();
      FUN_10b11b370();
      param_3 = &lStack_410;
      FUN_10b1f6b98(&uStack_290,uVar19,auStack_790,param_3,puVar8);
      iVar4 = (int)auStack_790;
      func_0x00010b1213b8();
      if ((bStack_208 & 1) == 0) {
        func_0x000107c278b8(&lStack_7a8,&UNK_10e5628f7);
        func_0x000105641abc(&uStack_7c8,&UNK_10f730f55);
        uStack_a80 = uStack_798;
        uStack_a88 = uStack_7a0;
        lStack_a90 = lStack_7a8;
        uStack_798 = 0;
        lStack_7a8 = 0;
        uStack_7a0 = 0;
        uStack_a78 = 2;
        uStack_a70 = uStack_a70 & 0xffffffffffffff00;
        in_ZR = cStack_7b0 == '\x01';
        if ((bool)in_ZR) {
          uStack_a68 = uStack_7c0;
          uStack_a70 = uStack_7c8;
          uStack_a60 = uStack_7b8;
          uStack_7b8 = 0;
          uStack_7c8 = 0;
          uStack_7c0 = 0;
        }
        uStack_a58 = in_ZR;
        func_0x00010b199428();
        func_0x00010b198f60();
        func_0x000107c279a4(&uStack_7c8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_7a8);
        uVar13 = 0;
        *(undefined1 *)unaff_x19 = 0;
      }
      else {
        in_ZR = *(char *)(param_2 + 0xef) == '\x01';
        if ((bool)in_ZR) {
          func_0x00010b1994f4();
          func_0x00010b11b6f0();
          if (iVar4 == 0) goto LAB_10b192050;
          uVar17 = (ulong)plStack_810 >> 0x20;
          plStack_810 = (long *)((ulong)plStack_810 & 0xffffffffffffff00);
          uStack_7d0 = *(char *)(param_2 + 0x73) == '\x01';
          if ((bool)uStack_7d0) {
            plStack_810 = (long *)CONCAT44((int)uVar17,*(undefined4 *)(param_2 + 0x6b));
            uStack_800 = param_2[0x6d];
            lStack_808 = param_2[0x6c];
            uStack_7f8 = param_2[0x6e];
            param_2[0x6d] = 0;
            param_2[0x6c] = 0;
            param_2[0x6e] = 0;
            uStack_7f0 = param_2[0x6f];
            uStack_7e8 = (undefined4)param_2[0x70];
            uStack_7dc = *(undefined8 *)((long)param_2 + 0x38c);
            uStack_7e4 = (undefined4)*(undefined8 *)((long)param_2 + 900);
            uStack_7e0 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 900) >> 0x20);
          }
          func_0x00010b198f58();
          if ((*(byte *)(param_2 + 0x73) & 1) == 0) {
            FUN_10b1215e4(pplVar16,&plStack_810);
          }
          FUN_10b1c4a78();
          uVar20 = (int)puVar18 - 3;
          param_7 = (long *)(ulong)uVar20;
          if (uVar20 == 0) {
            puVar11 = &UNK_10f730f6e;
            param_3 = (long *)0x14;
LAB_10b192090:
            if (*(char *)(param_2 + 0x73) == '\x01') {
              uVar14 = *(undefined4 *)pplVar16;
            }
            else {
              uVar14 = 5;
            }
            if (*(char *)(param_2 + 0x79) == '\x01') {
              uVar12 = *(undefined4 *)((long)param_2 + 0x3a4);
            }
            else {
              uVar12 = 0;
            }
            FUN_10b20c010(*(undefined8 *)param_2[0xd6],puVar11,param_3,uVar14,uVar12);
          }
          else if ((int)puVar18 == 4) {
            puVar11 = &UNK_10f730f83;
            param_3 = (long *)0x18;
            goto LAB_10b192090;
          }
          in_ZR = *(char *)(param_2 + 0x73) == '\x01' && uVar20 == 1;
          if (*(char *)(param_2 + 0x73) == '\x01' && uVar20 < 2) {
            uVar19 = *(undefined8 *)(param_2[0xd6] + 0x40);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&uStack_ac8,param_2 + 0x6c);
            uStack_a98 = *(undefined4 *)pplVar16;
            uStack_aa8 = uStack_ac0;
            uStack_ab0 = uStack_ac8;
            uStack_aa0 = uStack_ab8;
            uStack_ac8 = 0;
            uStack_ac0 = 0;
            uStack_ab8 = 0;
            FUN_10b1f697c(&lStack_a90,uVar19,&uStack_ab0,1,1);
            func_0x00010b1992d8();
            func_0x00010b198e7c();
            uVar20 = 0;
            in_ZR = cStack_a08 == '\x01';
            param_7 = (long *)&UNK_10f730fb5;
            if (((bool)in_ZR) && ((bStack_a38 & 1) != 0)) {
              plVar15 = &lStack_a90;
              FUN_10b1c4c88();
              if (plVar15 == (long *)0x0) {
                uVar20 = 0;
                param_7 = (long *)&UNK_10f730fb5;
              }
              else {
                uVar17 = 0;
                FUN_10b1c4c0c();
                uVar20 = (uint)uVar17 ^ 1;
                in_ZR = (uVar17 & 1) == 0;
                if ((bool)in_ZR) {
                  param_7 = (long *)&UNK_10f730f9c;
                }
              }
            }
            pplVar16 = *(long ***)param_2[0xd6];
            param_3 = param_7;
            _strlen();
            func_0x00010b199160();
            FUN_10b20bf78();
            if ((uVar20 & 1) != 0) {
              func_0x00010b198f58();
            }
            func_0x00010b121af0(&lStack_a90);
          }
          FUN_10b121bf4(&plStack_810);
        }
        else {
LAB_10b192050:
          param_2[0x75] = uStack_228;
          param_2[0x74] = uStack_230;
          param_2[0x77] = CONCAT71(uStack_217,uStack_218);
          param_2[0x76] = uStack_220;
          *(ulong *)((long)param_2 + 0x3c1) = CONCAT17(bStack_208,uStack_20f);
          *(ulong *)((long)param_2 + 0x3b9) = CONCAT17(uStack_210,uStack_217);
        }
        unaff_x19[1] = lStack_378;
        *unaff_x19 = plStack_380;
        lStack_378 = 0;
        plStack_380 = (long *)0x0;
        uVar13 = 1;
      }
      *(undefined1 *)(unaff_x19 + 2) = uVar13;
      func_0x00010b121af0(&uStack_290);
      func_0x00010b1213b8(&uStack_610);
      func_0x00010b121e00(auStack_490);
      FUN_10b17d950(&plStack_440);
    }
    else {
      lStack_378 = lStack_2a8;
      plStack_380 = plStack_2b0;
      if (lStack_2a8 != 0) {
        do {
          func_0x00010b198bb4();
        } while (extraout_w10_01 != 0);
      }
      pplVar6 = &plStack_2b0;
      func_0x00010b193ce8();
      uStack_3e0 = 1;
      lVar10 = *(long *)(param_2[0xd6] + 0x10) + 0x38;
      applStack_3f8[0] = pplVar6;
      func_0x00010b2018e4(lVar10,&PTR_DAT_110cc13c0);
      lVar7 = *(long *)(param_2[0xd6] + 0x10) + 0x38;
      lStack_3d8 = lVar10;
      func_0x00010b2018e4(lVar7,&PTR_DAT_110cc13d8);
      uStack_290 = CONCAT44(uStack_290._4_4_,*(undefined4 *)((long)param_2 + 0x3a4));
      lStack_280 = (long)*(char *)((long)param_2 + 0x357);
      puStack_288 = puVar18;
      if (lStack_280 < 0) {
        lStack_280 = param_2[0x69];
        puStack_288 = (undefined8 *)param_2[0x68];
      }
      puStack_270 = (undefined8 *)(long)*(char *)((long)param_2 + 0x377);
      if ((long)puStack_270 < 0) {
        puStack_278 = (undefined8 *)param_2[0x6c];
        puStack_270 = (undefined8 *)param_2[0x6d];
      }
      else {
        puStack_278 = param_2 + 0x6c;
      }
      uStack_268 = CONCAT44(*(undefined4 *)(param_2 + 0x72),*(undefined4 *)(param_2 + 0x6b));
      uStack_260 = *(undefined8 *)param_2[0xd6];
      lStack_3d0 = lVar7;
      FUN_10b212160(&pplStack_3c8,applStack_3f8,&uStack_290);
      FUN_10b17d480(applStack_3f8);
      puStack_408 = (undefined8 *)0x0;
      lStack_410 = 0;
      puStack_400 = (undefined8 *)0x0;
      if ((bStack_388 & 1) != 0) goto LAB_10b191bd0;
      in_ZR = (char)param_7[8] == '\x01';
      if ((bool)in_ZR) {
        FUN_10b12e9a4(param_7,&pplStack_3c8);
      }
      else {
        func_0x0001052a0760(param_7,&pplStack_3c8);
        *(undefined1 *)(param_7 + 8) = 1;
      }
      *(undefined1 *)unaff_x19 = 0;
      *(undefined1 *)(unaff_x19 + 2) = 0;
    }
    FUN_10b17dec8(&lStack_410);
    func_0x00010b196744(&pplStack_3c8);
    func_0x000107c27d78(&plStack_380);
  }
  func_0x0001052a4808(&plStack_340);
LAB_10b192214:
  pplVar6 = &plStack_2b0;
  func_0x000107c27f18();
  func_0x00010b198ba0(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1992d8();
  func_0x00010b198e7c();
  FUN_10b121bf4(&plStack_810);
  func_0x00010b121af0(&uStack_290);
  func_0x00010b1213b8(&uStack_610);
  func_0x00010b121e00(auStack_490);
  FUN_10b17d950(&plStack_440);
  FUN_10b17dec8(&lStack_410);
  func_0x00010b196744(&pplStack_3c8);
  func_0x000107c27d78(&plStack_380);
  func_0x0001052a4808(&plStack_340);
  pplVar9 = &plStack_2b0;
  func_0x000107c27f18(pplVar9);
  func_0x00010b198c78();
  pcStack_ad8 = FUN_10b192534;
  plVar15 = param_3;
  pplStack_b00 = pplVar16;
  plStack_af8 = param_7;
  puStack_af0 = param_2;
  pplStack_ae8 = pplVar6;
  puStack_ae0 = &stack0x00000050;
  func_0x00010b198c88();
  FUN_10b12e97c(pplVar9 + 0x5a,plVar15);
  if ((char)param_3[8] == '\x01') {
    if (param_3[3] == 1) {
      uVar17 = (ulong)*(uint *)(pplVar6 + 0x6b);
      func_0x00010b205694(uVar17);
    }
    else {
      uVar17 = 4;
    }
  }
  else {
    iVar4 = *(int *)(pplVar6 + 0x6b);
    func_0x00010b205558();
    if (iVar4 == 0) {
      uStack_dc8 = param_2[1];
      uStack_dd0 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      uStack_d90 = 1;
      FUN_10b191504(auStack_b08,&uStack_dd0);
      func_0x00010b199288();
      func_0x00010b12b970(auStack_b08);
      func_0x0001052a4808(&uStack_dd0);
    }
    else {
      plVar15 = pplVar6[0xd6];
      FUN_10b12394c(auStack_d80,pplVar6 + 0x68);
      FUN_10b190108(auStack_b08,plVar15,auStack_d80,0);
      func_0x00010b199288();
      func_0x00010b12b970(auStack_b08);
      func_0x00010b121af0(auStack_d80);
    }
    uVar17 = 0;
  }
  func_0x00010b198f78(pplVar6,uVar17);
  return;
}



/* Entry: 10b192534; end: 10b19263b;  */

void FUN_10b192534(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2c0;
  undefined1 auStack_2b0 [632];
  undefined1 auStack_38 [8];
  
  lVar2 = param_3;
  func_0x00010b198c88();
  FUN_10b12e97c(param_1 + 0x2d0,lVar2);
  if (*(char *)(param_3 + 0x40) == '\x01') {
    if (*(long *)(param_3 + 0x18) == 1) {
      func_0x00010b205694(*(undefined4 *)(unaff_x19 + 0x358));
    }
  }
  else {
    iVar1 = *(int *)(unaff_x19 + 0x358);
    func_0x00010b205558();
    if (iVar1 == 0) {
      uStack_2f8 = unaff_x20[1];
      uStack_300 = *unaff_x20;
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      uStack_2c0 = 1;
      FUN_10b191504(auStack_38,&uStack_300);
      func_0x00010b199288();
      func_0x00010b12b970(auStack_38);
      func_0x0001052a4808(&uStack_300);
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x19 + 0x6b0);
      FUN_10b12394c(auStack_2b0,unaff_x19 + 0x340);
      FUN_10b190108(auStack_38,uVar3,auStack_2b0,0);
      func_0x00010b199288();
      func_0x00010b12b970(auStack_38);
      func_0x00010b121af0(auStack_2b0);
    }
  }
  func_0x00010b198f78();
  return;
}



/* Entry: 10b19263c; end: 10b19271f;  */

void FUN_10b19263c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  ulong uVar7;
  
  lVar4 = param_1 + 0x7a8;
  FUN_10b1900bc();
  if ((int)lVar4 == 0) {
    return;
  }
  plVar6 = (long *)(param_1 + 0x6c0);
  if (plVar6 != param_2) {
    lVar5 = *param_2;
    lVar1 = param_2[1];
    uVar3 = lVar1 - lVar5;
    if ((ulong)(*(long *)(param_1 + 0x6d0) - *(long *)(param_1 + 0x6c0)) < uVar3) {
      func_0x00010b12542c(plVar6);
      plVar2 = plVar6;
      FUN_10b195b7c(plVar6,(long)uVar3 >> 4);
      FUN_10b195b48(plVar6,plVar2);
    }
    else {
      uVar7 = *(long *)(param_1 + 0x6c8) - *(long *)(param_1 + 0x6c0);
      if (uVar3 <= uVar7) {
        func_0x00010b199160();
        FUN_10b19665c();
        FUN_10b12546c(plVar6,lVar4);
        goto LAB_10b192708;
      }
      FUN_10b19665c(lVar5,lVar5 + uVar7);
      lVar5 = lVar5 + uVar7;
    }
    FUN_10b1965dc(plVar6,lVar5,lVar1);
  }
LAB_10b192708:
  func_0x00010b198d38(param_1);
  plVar6 = (long *)(unaff_x19 + 0x720);
  while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
    (*(code *)plVar6[3])(0);
  }
  if (*(long *)(unaff_x19 + 0x728) != 0) {
    func_0x00010b197468(*(undefined8 *)(unaff_x19 + 0x720));
    *(undefined8 *)(unaff_x19 + 0x720) = 0;
    lVar5 = *(long *)(unaff_x19 + 0x718);
    for (lVar4 = 0; lVar5 != lVar4; lVar4 = lVar4 + 1) {
      *(undefined8 *)(*(long *)(unaff_x19 + 0x710) + lVar4 * 8) = 0;
    }
    *(undefined8 *)(unaff_x19 + 0x728) = 0;
  }
  lVar5 = *(long *)(unaff_x19 + 0x740);
  for (lVar4 = *(long *)(unaff_x19 + 0x738); lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
    func_0x00010b199388();
  }
  FUN_10b19510c(unaff_x19 + 0x738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b192720; end: 10b192a1b;  */

void FUN_10b192720(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long lVar5;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined **unaff_x20;
  undefined *puVar6;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *apuStack_d0 [2];
  undefined **ppuStack_c0;
  long lStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  
  pppuVar4 = &ppuStack_100;
  func_0x00010b198bf0();
  ppuVar1 = (undefined **)0xa0;
  uStack_48 = extraout_x8;
  __Znwm();
  ppuVar2 = ppuVar1;
  func_0x00010b199218(FUN_10b198988);
  FUN_10b196588(ppuVar2 + 0xc,param_2 + 0x10);
  FUN_10b124f8c(ppuVar1 + 2);
  ppuVar2 = ppuVar1 + 0x11;
  func_0x00010b199350();
  lVar5 = param_1[1];
  puVar6 = (undefined *)*param_1;
  ppuVar1[0x10] = (undefined *)param_1[1];
  ppuVar1[0xf] = puVar6;
  if (lVar5 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  FUN_10b1278fc(ppuVar2,ppuVar1 + 0xf);
  ppuVar3 = ppuVar2;
  FUN_10b12d174();
  if (((ulong)ppuVar3 & 1) == 0) {
    *(undefined1 *)(ppuVar1 + 0x13) = 0;
    ppuStack_100 = ppuVar1;
    ppuStack_f8 = ppuVar2;
    FUN_10b12d1c8(&pcStack_a8,ppuVar2);
    ppuVar1 = ppuStack_a0;
    if (ppuStack_a0 != (undefined **)0x0) {
      do {
        func_0x00010b198ec4();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b19912c();
        ppuVar2 = ppuVar1;
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
      }
    }
    while (func_0x00010b198ba0(uStack_48), !(bool)in_ZR) {
      ___stack_chk_fail();
      if ((int)pppuVar4 == 0) {
        do {
          __Unwind_Resume(ppuVar2);
        } while ((int)pppuVar4 == 0);
        func_0x00010b199158();
      }
      else {
        func_0x00010b198c5c(ppuStack_a0);
        FUN_10b197544(&ppuStack_100);
        func_0x000106e50c54(apuStack_d0);
        FUN_10b129c1c(&ppuStack_c0);
      }
      func_0x00010b198f28();
      ___cxa_begin_catch(ppuVar2);
      func_0x00010b1990d4();
      ___cxa_end_catch();
LAB_10b192888:
      func_0x00010b199144();
      *(undefined1 *)(ppuVar1 + 0x13) = extraout_w8;
      func_0x00010b1994e8();
      if ((bool)in_ZR) {
        ppuStack_c0 = apuStack_d0;
        pppuVar4 = &ppuStack_c0;
        func_0x000107c27b6c(ppuVar1 + 2);
      }
      else {
        func_0x00010b199124(apuStack_d0);
        pppuVar4 = &ppuStack_c0;
        ppuStack_c0 = apuStack_d0;
        func_0x000104bf33ec(ppuVar1 + 2);
        __ZNSt13exception_ptrD1Ev(apuStack_d0);
      }
      func_0x00010b198de4();
      ppuVar2 = unaff_x20;
      FUN_10b192a1c();
      func_0x00010b198dec();
    }
    return;
  }
  FUN_10b12d0d0(ppuVar2);
  func_0x00010b199158();
  func_0x00010b11fa90(&ppuStack_c0);
  if (ppuStack_c0 != (undefined **)0x0) {
    FUN_10b1fe814(apuStack_d0);
    ppuStack_f8 = (undefined **)lStack_b8;
    ppuStack_100 = ppuStack_c0;
    if (lStack_b8 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10_00 != 0);
    }
    FUN_10b196588(&uStack_f0,ppuVar1 + 0xc);
    lStack_90 = (long)ppuStack_f8;
    ppuStack_98 = ppuStack_100;
    pcStack_a8 = FUN_10b197564;
    ppuStack_a0 = &PTR_FUN_110cc23f0;
    ppuStack_100 = (undefined **)0x0;
    ppuStack_f8 = (undefined **)0x0;
    uStack_80 = uStack_e8;
    uStack_88 = uStack_f0;
    uStack_78 = uStack_e0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    (**(code **)(*(long *)CONCAT71(apuStack_d0[0]._1_7_,apuStack_d0[0]._0_1_) + 0x10))
              ((long *)CONCAT71(apuStack_d0[0]._1_7_,apuStack_d0[0]._0_1_),&pcStack_a8);
    func_0x00010b198c5c(ppuStack_a0);
    FUN_10b197544(&ppuStack_100);
    func_0x000106e50c54(apuStack_d0);
  }
  FUN_10b129c1c(&ppuStack_c0);
  func_0x00010b199150();
  func_0x00010b198f28();
  goto LAB_10b192888;
}



/* Entry: 10b192a1c; end: 10b192a3f;  */

long FUN_10b192a1c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b198eac();
  FUN_10b125534();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b192a40; end: 10b192aeb;  */

void FUN_10b192a40(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  
  func_0x00010b198d38();
  plVar3 = (long *)(unaff_x19 + 0x720);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    (*(code *)plVar3[3])(0);
  }
  if (*(long *)(unaff_x19 + 0x728) != 0) {
    func_0x00010b197468(*(undefined8 *)(unaff_x19 + 0x720));
    *(undefined8 *)(unaff_x19 + 0x720) = 0;
    lVar2 = *(long *)(unaff_x19 + 0x718);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(unaff_x19 + 0x710) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(unaff_x19 + 0x728) = 0;
  }
  lVar2 = *(long *)(unaff_x19 + 0x740);
  for (lVar1 = *(long *)(unaff_x19 + 0x738); lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    func_0x00010b199388();
  }
  FUN_10b19510c(unaff_x19 + 0x738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b192aec; end: 10b193173;  */

void FUN_10b192aec(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  long **pplVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long **pplVar11;
  int extraout_w10;
  long **pplVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  long *plVar16;
  long **pplVar17;
  long **pplVar18;
  float fVar19;
  float fVar20;
  long lStack_1d0;
  undefined1 uStack_1c8;
  long lStack_1c0;
  undefined1 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 auStack_1a8 [5];
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long alStack_168 [5];
  undefined1 auStack_140 [120];
  long **pplStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_70;
  
  lVar6 = param_2;
  func_0x00010b198bf0();
  lStack_1c0 = lVar6 + 0x18;
  uStack_1b8 = 1;
  uStack_70 = extraout_x8;
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b199374();
  plVar16 = plStack_178;
  plVar10 = plStack_180;
  pplVar4 = (long **)0x18;
  __Znwm();
  *pplVar4 = (long *)&PTR_FUN_110cc2418;
  pplVar4[2] = plVar16;
  pplVar4[1] = plVar10;
  pplVar11 = pplVar4;
  if (plVar16 != (long *)0x0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b198f18();
  uVar9 = *(ulong *)(param_2 + 0x7a8);
  uVar8 = uVar9;
  if (0xffffffff < uVar9) {
    uVar8 = 0;
  }
  iVar7 = (int)uVar8;
  uVar3 = iVar7 == 0 || iVar7 == 3;
  if ((uVar9 >> 0x20 == 0) && (iVar7 == 0 || iVar7 == 3)) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    pplVar17 = &plStack_180;
    func_0x00010b199374();
    uStack_170 = *param_3;
    (**(code **)(param_3[1] + 0x10))(alStack_168,param_3 + 1);
    FUN_10b121fd0(auStack_140,param_4);
    uStack_c0 = 0;
    uStack_b0 = 1;
    pcStack_a0 = FUN_10b197b70;
    ppuStack_98 = &PTR_FUN_110cc2450;
    puVar5 = (undefined8 *)0xe0;
    pplStack_c8 = pplVar4;
    pplStack_b8 = pplVar11;
    lStack_a8 = param_2;
    __Znwm();
    puVar5[1] = plStack_178;
    *puVar5 = plStack_180;
    plStack_180 = (long *)0x0;
    plStack_178 = (long *)0x0;
    puVar5[2] = uStack_170;
    (**(code **)(alStack_168[0] + 0x10))(puVar5 + 3,alStack_168);
    FUN_10b121fd0(puVar5 + 8,auStack_140);
    puVar5[0x18] = uStack_c0;
    puVar5[0x17] = pplStack_c8;
    puVar5[0x1a] = CONCAT71(uStack_af,uStack_b0);
    puVar5[0x19] = pplStack_b8;
    puVar5[0x1b] = lStack_a8;
    puStack_90 = puVar5;
    FUN_10b193174(&plStack_180);
    plVar10 = (long *)(param_2 + 0x710);
    pplVar11 = pplVar4;
    FUN_10b197d04();
    pplVar18 = *(long ***)(param_2 + 0x718);
    if (pplVar18 != (long **)0x0) {
      uVar8 = (long)pplVar18 - 1;
      if (((ulong)pplVar18 & uVar8) == 0) {
        pplVar17 = (long **)(uVar8 & (ulong)pplVar11);
      }
      else {
        pplVar17 = pplVar11;
        if (pplVar18 <= pplVar11) {
          uVar9 = 0;
          if (pplVar18 != (long **)0x0) {
            uVar9 = (ulong)pplVar11 / (ulong)pplVar18;
          }
          pplVar17 = (long **)((long)pplVar11 - uVar9 * (long)pplVar18);
        }
      }
      plVar16 = *(long **)(*plVar10 + (long)pplVar17 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10b192d84;
            pplVar12 = (long **)plVar16[1];
            if (pplVar12 != pplVar11) break;
            if ((long **)plVar16[2] == pplVar4) {
              uVar3 = 1;
              pcVar2 = FUN_10b197b70;
              goto LAB_10b193054;
            }
          }
          if (((ulong)pplVar18 & uVar8) == 0) {
            pplVar12 = (long **)((ulong)pplVar12 & uVar8);
          }
          else if (pplVar18 <= pplVar12) {
            uVar9 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar9 = (ulong)pplVar12 / (ulong)pplVar18;
            }
            pplVar12 = (long **)((long)pplVar12 - uVar9 * (long)pplVar18);
          }
        } while (pplVar12 == pplVar17);
      }
    }
LAB_10b192d84:
    plVar16 = (long *)0x48;
    __Znwm();
    plVar1 = (long *)(param_2 + 0x720);
    uStack_170 = 1;
    *plVar16 = 0;
    plVar16[1] = (long)pplVar11;
    plVar16[6] = 0;
    plVar16[5] = 0;
    plVar16[8] = 0;
    plVar16[7] = 0;
    plVar16[2] = (long)pplVar4;
    plVar16[3] = 0x10b197d2c;
    plVar16[4] = (long)&PTR_DAT_110873830;
    fVar19 = (float)(*(long *)(param_2 + 0x728) + 1);
    plStack_178 = plVar1;
    if ((pplVar18 == (long **)0x0) ||
       (fVar20 = *(float *)(param_2 + 0x730) * (float)pplVar18, uVar3 = fVar20 == fVar19,
       fVar20 < fVar19)) {
      uVar8 = 1;
      if ((long **)0x2 < pplVar18) {
        uVar8 = (ulong)(((ulong)pplVar18 & (long)pplVar18 - 1U) != 0);
      }
      pplVar17 = (long **)(uVar8 | (long)pplVar18 << 1);
      pplVar12 = (long **)(long)(fVar19 / *(float *)(param_2 + 0x730));
      if (pplVar17 <= pplVar12) {
        pplVar17 = pplVar12;
      }
      plStack_180 = plVar16;
      if ((long)pplVar17 - 1U == 0) {
        pplVar17 = (long **)0x2;
      }
      else if (((ulong)pplVar17 & (long)pplVar17 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        pplVar18 = *(long ***)(param_2 + 0x718);
      }
      if (pplVar18 < pplVar17) {
LAB_10b192e4c:
        if ((ulong)pplVar17 >> 0x3d != 0) goto LAB_10b1930b0;
        lVar6 = (long)pplVar17 << 3;
        __Znwm(lVar6);
        FUN_10b197d3c(plVar10,lVar6);
        *(long ***)(param_2 + 0x718) = pplVar17;
        lVar6 = *(long *)(param_2 + 0x710);
        for (pplVar18 = (long **)0x0; pplVar17 != pplVar18; pplVar18 = (long **)((long)pplVar18 + 1)
            ) {
          *(undefined8 *)(lVar6 + (long)pplVar18 * 8) = 0;
        }
        plVar13 = (long *)*plVar1;
        pplVar18 = pplVar17;
        if (plVar13 != (long *)0x0) {
          pplVar12 = (long **)plVar13[1];
          uVar9 = (long)pplVar17 - 1;
          uVar8 = 0;
          if (pplVar17 != (long **)0x0) {
            uVar8 = (ulong)pplVar12 / (ulong)pplVar17;
          }
          pplVar15 = pplVar12;
          if (pplVar17 <= pplVar12) {
            pplVar15 = (long **)((long)pplVar12 - uVar8 * (long)pplVar17);
          }
          if (((ulong)pplVar17 & uVar9) == 0) {
            pplVar15 = (long **)((ulong)pplVar12 & uVar9);
          }
          *(long **)(lVar6 + (long)pplVar15 * 8) = plVar1;
          while (plVar14 = plVar13, plVar13 = (long *)*plVar14, plVar13 != (long *)0x0) {
            pplVar12 = (long **)plVar13[1];
            if (((ulong)pplVar17 & uVar9) == 0) {
              pplVar12 = (long **)((ulong)pplVar12 & uVar9);
            }
            else if (pplVar17 <= pplVar12) {
              uVar8 = 0;
              if (pplVar17 != (long **)0x0) {
                uVar8 = (ulong)pplVar12 / (ulong)pplVar17;
              }
              pplVar12 = (long **)((long)pplVar12 - uVar8 * (long)pplVar17);
            }
            if (pplVar12 != pplVar15) {
              if (*(long *)(lVar6 + (long)pplVar12 * 8) == 0) {
                *(long **)(lVar6 + (long)pplVar12 * 8) = plVar14;
                pplVar15 = pplVar12;
              }
              else {
                *plVar14 = *plVar13;
                *plVar13 = **(undefined8 **)(lVar6 + (long)pplVar12 * 8);
                **(long **)(lVar6 + (long)pplVar12 * 8) = (long)plVar13;
                plVar13 = plVar14;
              }
            }
          }
        }
      }
      else if (pplVar17 < pplVar18) {
        pplVar12 = (long **)(long)((float)*(ulong *)(param_2 + 0x728) / *(float *)(param_2 + 0x730))
        ;
        if ((pplVar18 < (long **)0x3) || (((ulong)pplVar18 & (long)pplVar18 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long **)0x1 < pplVar12) {
          pplVar12 = (long **)(1L << (-LZCOUNT((long)pplVar12 + -1) & 0x3fU));
        }
        if (pplVar17 <= pplVar12) {
          pplVar17 = pplVar12;
        }
        if (pplVar17 < pplVar18) {
          if (pplVar17 != (long **)0x0) goto LAB_10b192e4c;
          FUN_10b197d3c(plVar10,0);
          *(undefined8 *)(param_2 + 0x718) = 0;
          pplVar18 = (long **)0x0;
        }
        else {
          pplVar18 = *(long ***)(param_2 + 0x718);
        }
      }
      if (((ulong)pplVar18 & (long)pplVar18 - 1U) == 0) {
        uVar3 = true;
        pplVar17 = (long **)((long)pplVar18 - 1U & (ulong)pplVar11);
      }
      else {
        uVar3 = pplVar11 == pplVar18;
        pplVar17 = pplVar11;
        if (pplVar18 <= pplVar11) {
          uVar8 = 0;
          if (pplVar18 != (long **)0x0) {
            uVar8 = (ulong)pplVar11 / (ulong)pplVar18;
          }
          pplVar17 = (long **)((long)pplVar11 - uVar8 * (long)pplVar18);
        }
      }
    }
    lVar6 = *plVar10;
    plVar10 = *(long **)(lVar6 + (long)pplVar17 * 8);
    if (plVar10 == (long *)0x0) {
      *plVar16 = *plVar1;
      *plVar1 = (long)plVar16;
      *(long **)(lVar6 + (long)pplVar17 * 8) = plVar1;
      if (*plVar16 != 0) {
        pplVar11 = *(long ***)(*plVar16 + 8);
        if (((ulong)pplVar18 & (long)pplVar18 - 1U) == 0) {
          pplVar11 = (long **)((ulong)pplVar11 & (long)pplVar18 - 1U);
          uVar3 = true;
        }
        else {
          uVar3 = pplVar11 == pplVar18;
          if (pplVar18 <= pplVar11) {
            uVar8 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar8 = (ulong)pplVar11 / (ulong)pplVar18;
            }
            pplVar11 = (long **)((long)pplVar11 - uVar8 * (long)pplVar18);
          }
        }
        *(long **)(lVar6 + (long)pplVar11 * 8) = plVar16;
      }
    }
    else {
      *plVar16 = *plVar10;
      *plVar10 = (long)plVar16;
    }
    plStack_180 = (long *)0x0;
    *(long *)(param_2 + 0x728) = *(long *)(param_2 + 0x728) + 1;
    FUN_10b197d54(&plStack_180);
    pcVar2 = pcStack_a0;
LAB_10b193054:
    plVar16[3] = (long)pcVar2;
    func_0x000107c2816c(plVar16 + 4,&ppuStack_98);
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
  else {
    lStack_1d0 = lStack_1c0;
    uStack_1c8 = uStack_1b8;
    lStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = *param_3;
    (**(code **)(param_3[1] + 0x10))(auStack_1a8,param_3 + 1);
    FUN_10b19319c(param_2,&lStack_1d0,&uStack_1b0,param_4,pplVar4);
    func_0x00010b198d1c(auStack_1a8[0]);
    func_0x00010b198fb8();
    FUN_10b192a40(param_2);
  }
  *param_1 = pplVar4;
  func_0x000107c281c0(&lStack_1c0);
  func_0x00010b198ba0(uStack_70);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1930b0:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1930b8);
  (*pcVar2)();
}



/* Entry: 10b193174; end: 10b19319b;  */

long FUN_10b193174(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1993b0();
  func_0x00010b1990cc(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b19319c; end: 10b1934e7;  */

void FUN_10b19319c(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x10;
  ulong uVar12;
  long unaff_x19;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [40];
  undefined1 uStack_f0;
  undefined1 auStack_e8 [120];
  undefined8 uStack_70;
  
  func_0x00010b198bdc();
  iVar3 = *(int *)(param_4 + 8);
  uVar15 = *(ulong *)(param_1 + 0x7a8);
  bVar5 = uVar15 >> 0x20 != 1;
  bVar6 = (int)uVar15 == 1;
  uVar7 = bVar5 || bVar6;
  uStack_70 = extraout_x8;
  if (bVar5 || bVar6) {
    if (iVar3 == 4) {
      *(undefined1 *)(unaff_x19 + 0x750) = 1;
    }
    uStack_120 = *param_3;
    uStack_128 = param_5;
    (**(code **)(param_3[1] + 0x10))(auStack_118,param_3 + 1);
    uStack_f0 = 0;
    FUN_10b121fd0(auStack_e8,param_4);
    uVar15 = *(ulong *)(unaff_x19 + 0x790);
    if (uVar15 < *(ulong *)(unaff_x19 + 0x798)) {
      FUN_10b1966a0(uVar15,&uStack_128);
      lVar13 = uVar15 + 0xb8;
LAB_10b1933a0:
      *(long *)(unaff_x19 + 0x790) = lVar13;
      puVar11 = &uStack_128;
      FUN_10b196700();
      piVar2 = (int *)(unaff_x19 + 0x7a0);
      if (*(char *)(unaff_x19 + 0x7a4) == '\0') {
        piVar2 = (int *)0x11336c400;
      }
      iVar1 = *piVar2;
      if (*piVar2 <= iVar3) {
        iVar1 = iVar3;
      }
      *(int *)(unaff_x19 + 0x7a0) = iVar1;
      *(undefined1 *)(unaff_x19 + 0x7a4) = 1;
      func_0x00010b198c94();
      if ((extraout_x9 == 0) && (uVar7 = (extraout_x8_00 & 0xffffffff) == 2, (bool)uVar7)) {
        FUN_10b1934e8();
      }
      else {
        bVar5 = *(ulong *)(unaff_x19 + 0x6c8) <= *(ulong *)(unaff_x19 + 0x6c0);
        uVar7 = *(ulong *)(unaff_x19 + 0x6c0) == *(ulong *)(unaff_x19 + 0x6c8);
        if ((bool)uVar7) {
          func_0x00010b198f78();
        }
        else {
          func_0x00010b1994a0();
          uVar15 = extraout_x10;
          if (bVar5) {
            uVar15 = extraout_x9_00;
          }
          if (extraout_x10 >> 0x20 == 0) {
            uVar7 = (uVar15 & 0xffffffff) == 1;
          }
          *(undefined8 *)(unaff_x19 + 0x7a8) = 2;
          func_0x000107c316c4();
          if ((*(byte *)(unaff_x19 + 0x78) & 1) == 0) {
            *(undefined1 *)(unaff_x19 + 0x78) = 1;
          }
          *(undefined8 *)(unaff_x19 + 0x60) = 0;
          *(undefined8 *)(unaff_x19 + 0x68) = 0;
          *(undefined8 **)(unaff_x19 + 0x58) = puVar11;
          *(undefined4 *)(unaff_x19 + 0x70) = 0;
          FUN_10b193564();
        }
      }
      func_0x00010b198ba0(uStack_70);
      if ((bool)uVar7) {
        return;
      }
      goto LAB_10b1934a8;
    }
    lVar13 = uVar15 - *(long *)(unaff_x19 + 0x788);
    uVar15 = lVar13 / 0xb8 + 1;
    if (uVar15 < 0x1642c8590b21643) {
      uVar4 = (long)(*(ulong *)(unaff_x19 + 0x798) - *(long *)(unaff_x19 + 0x788)) / 0xb8;
      uVar12 = uVar4 * 2;
      if (uVar12 < uVar15 || uVar12 - uVar15 == 0) {
        uVar12 = uVar15;
      }
      if (0xb21642c8590b20 < uVar4) {
        uVar12 = 0x1642c8590b21642;
      }
      if (uVar12 == 0) {
        lVar8 = 0;
      }
      else {
        if (0x1642c8590b21642 < uVar12) {
          func_0x000104bd35f4();
          goto LAB_10b1934b8;
        }
        lVar8 = uVar12 * 0xb8;
        __Znwm();
      }
      lVar13 = lVar8 + lVar13;
      FUN_10b1966a0(lVar13,&uStack_128);
      lVar17 = *(long *)(unaff_x19 + 0x790);
      lVar16 = *(long *)(unaff_x19 + 0x788);
      lVar14 = lVar13 + ((lVar17 - lVar16) / -0xb8) * 0xb8;
      lVar9 = lVar14;
      for (lVar10 = lVar16; lVar10 != lVar17; lVar10 = lVar10 + 0xb8) {
        FUN_10b1966a0(lVar9,lVar10);
        lVar9 = lVar9 + 0xb8;
      }
      for (; lVar16 != lVar17; lVar16 = lVar16 + 0xb8) {
        FUN_10b196700(lVar16);
      }
      lVar13 = lVar13 + 0xb8;
      lVar10 = *(long *)(unaff_x19 + 0x788);
      *(long *)(unaff_x19 + 0x788) = lVar14;
      *(long *)(unaff_x19 + 0x790) = lVar13;
      *(ulong *)(unaff_x19 + 0x798) = lVar8 + uVar12 * 0xb8;
      if (lVar10 != 0) {
        __ZdlPv();
      }
      goto LAB_10b1933a0;
    }
  }
  else {
    func_0x00010731a274(param_2);
    UNRECOVERED_JUMPTABLE = (code *)*param_3;
    func_0x00010b198ba0(uStack_70);
    if ((bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010b19328c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(unaff_x19 + 0x58,uVar15,param_3);
      return;
    }
LAB_10b1934a8:
    ___stack_chk_fail();
  }
  FUN_10b1966f4();
LAB_10b1934b8:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10b1934bc);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 10b1934e8; end: 10b193563;  */

void FUN_10b1934e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long unaff_x19;
  
  func_0x00010b198d38();
  func_0x00010b198cb0(unaff_x19 + 0x7a8);
  if (!(bool)in_ZR) {
    for (plVar1 = *(long **)(unaff_x19 + 0x788); plVar1 != *(long **)(unaff_x19 + 0x790);
        plVar1 = plVar1 + 0x17) {
      if (*plVar1 == param_2) {
        FUN_10b193ad0(plVar1 + 8,param_3);
        FUN_10b193a04();
        break;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b193564; end: 10b19356f;  */

void FUN_10b193564(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  undefined8 *puVar5;
  code *extraout_x8_00;
  int extraout_w11;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  char cStack_120;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  char cStack_d0;
  undefined1 auStack_a0 [64];
  char cStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1;
  func_0x000107c27d0c(param_1,*(undefined8 *)(param_1 + 0x6c0));
  *(long *)(param_1 + 0x708) = lVar1;
  func_0x00010b198fd8(auStack_58);
  func_0x00010b207c58(auStack_a0);
  if (cStack_60 == '\x01') {
    puVar2 = auStack_a0;
    FUN_10b207d14(puVar2,*(undefined4 *)(param_1 + 0x358),*param_2,*(undefined4 *)(param_1 + 0x390))
    ;
    if ((int)puVar2 != 0) {
      uVar6 = **(undefined8 **)(param_1 + 0x6b0);
      func_0x000107c278b8(&puStack_e0,&UNK_10f72f5c9);
      FUN_10b20bd54(uVar6,&puStack_e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_e0);
      FUN_10b207d6c(&puStack_e0);
      func_0x0001056419c0(param_1 + 0x2d0,&puStack_e0);
      ppuVar3 = &puStack_e0;
      func_0x0001052a03ac();
      if (*(char *)(param_1 + 0x78) == '\x01') {
        func_0x000107c316c4();
        *(undefined8 ***)(param_1 + 0x60) = ppuVar3;
      }
      func_0x00010b198f78(param_1,3);
      goto LAB_10b193844;
    }
  }
  FUN_10b1939bc(&puStack_f0,*(undefined8 *)(*(long *)(param_1 + 0x6b0) + 0x40),param_1 + 0x340,
                *(undefined4 *)(param_1 + 0x358));
  puStack_d8 = puStack_e8;
  puStack_e0 = puStack_f0;
  puStack_f0 = (undefined8 *)0x0;
  puStack_e8 = (undefined8 *)0x0;
  cStack_d0 = '\x01';
  func_0x0001052b7ddc(&puStack_f0);
  lVar1 = *(long *)(*(long *)(param_1 + 0x6b0) + 0x10) + 0x100;
  FUN_10b12785c();
  plVar7 = *(long **)(lVar1 + 0x10);
  puVar4 = &uStack_110;
  func_0x00010b197634(puVar4,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  func_0x00010b1993e8();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cc2478;
  puVar5 = puVar4 + 3;
  *puVar5 = &PTR_DAT_110cc24c8;
  puVar4[5] = lStack_108;
  puVar4[4] = uStack_110;
  if (lStack_108 != 0) {
    do {
      func_0x00010b198d28();
      puVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  puStack_f0 = puVar5;
  puStack_e8 = puVar4;
  FUN_10b20549c(*(undefined4 *)(param_1 + 0x358));
  puStack_130 = (undefined8 *)((ulong)puStack_130 & 0xffffffffffffff00);
  cStack_120 = '\0';
  if (cStack_d0 == '\x01') {
    puStack_128 = puStack_d8;
    puStack_130 = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    cStack_120 = cStack_d0;
  }
  func_0x00010b199160(*(undefined8 *)(*plVar7 + 0x10));
  (*extraout_x8_00)();
  func_0x0001052b818c(&puStack_130);
  func_0x0001052b81ac(&puStack_f0);
  FUN_10b198140(&uStack_100);
  func_0x00010b198fc0();
  func_0x0001052b818c(&puStack_e0);
LAB_10b193844:
  FUN_10b12338c(auStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 10b193570; end: 10b19365b;  */

void FUN_10b193570(long param_1,ulong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar4 = param_1;
  func_0x00010b190fe8();
  if ((*(uint *)(lVar4 + 0x10) >> 1 & 1) == 0) {
    uVar3 = (uint)param_2;
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = 3;
    }
    uVar1 = uVar3;
    if ((*(uint *)(lVar4 + 0x10) & 4) == 0) {
      uVar1 = uVar2;
    }
    if (*(int *)(lVar4 + 0x20) == 0) {
      uVar3 = uVar1;
    }
    param_2 = (ulong)uVar3;
  }
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  func_0x00010b199318();
  lVar4 = *(long *)(param_1 + 0x788);
  uStack_38 = *(undefined8 *)(param_1 + 0x798);
  lVar5 = *(long *)(param_1 + 0x790);
  *(undefined8 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x798) = 0;
  *(undefined8 *)(param_1 + 0x788) = 0;
  if (param_3 != 0) {
    *(ulong *)(param_1 + 0x7a8) = param_2 & 0xffffffff | 0x100000000;
  }
  lStack_48 = lVar4;
  lStack_40 = lVar5;
  func_0x00010b194f80(param_1 + 0x788);
  func_0x00010b198cc8();
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0xb8) {
    (**(code **)(lVar4 + 8))(param_1 + 0x58,param_2,(undefined8 *)(lVar4 + 8));
  }
  *(undefined1 *)(param_1 + 0x750) = 0;
  func_0x00010b1964f0(&lStack_48);
  return;
}



/* Entry: 10b19365c; end: 10b1938ff;  */

void FUN_10b19365c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  undefined8 *puVar5;
  code *extraout_x8_00;
  int extraout_w11;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  char cStack_120;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  char cStack_d0;
  undefined1 auStack_a0 [64];
  char cStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1;
  func_0x000107c27d0c();
  *(long *)(param_1 + 0x708) = lVar1;
  func_0x00010b198fd8(auStack_58);
  func_0x00010b207c58(auStack_a0);
  if (cStack_60 == '\x01') {
    puVar2 = auStack_a0;
    FUN_10b207d14(puVar2,*(undefined4 *)(param_1 + 0x358),*param_3,*(undefined4 *)(param_1 + 0x390))
    ;
    if ((int)puVar2 != 0) {
      uVar6 = **(undefined8 **)(param_1 + 0x6b0);
      func_0x000107c278b8(&puStack_e0,&UNK_10f72f5c9);
      FUN_10b20bd54(uVar6,&puStack_e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_e0);
      FUN_10b207d6c(&puStack_e0);
      func_0x0001056419c0(param_1 + 0x2d0,&puStack_e0);
      ppuVar3 = &puStack_e0;
      func_0x0001052a03ac();
      if (*(char *)(param_1 + 0x78) == '\x01') {
        func_0x000107c316c4();
        *(undefined8 ***)(param_1 + 0x60) = ppuVar3;
      }
      func_0x00010b198f78(param_1,3);
      goto LAB_10b193844;
    }
  }
  FUN_10b1939bc(&puStack_f0,*(undefined8 *)(*(long *)(param_1 + 0x6b0) + 0x40),param_1 + 0x340,
                *(undefined4 *)(param_1 + 0x358));
  puStack_d8 = puStack_e8;
  puStack_e0 = puStack_f0;
  puStack_f0 = (undefined8 *)0x0;
  puStack_e8 = (undefined8 *)0x0;
  cStack_d0 = '\x01';
  func_0x0001052b7ddc(&puStack_f0);
  lVar1 = *(long *)(*(long *)(param_1 + 0x6b0) + 0x10) + 0x100;
  FUN_10b12785c();
  plVar7 = *(long **)(lVar1 + 0x10);
  puVar4 = &uStack_110;
  func_0x00010b197634(puVar4,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  func_0x00010b1993e8();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cc2478;
  puVar5 = puVar4 + 3;
  *puVar5 = &PTR_DAT_110cc24c8;
  puVar4[5] = lStack_108;
  puVar4[4] = uStack_110;
  if (lStack_108 != 0) {
    do {
      func_0x00010b198d28();
      puVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  puStack_f0 = puVar5;
  puStack_e8 = puVar4;
  FUN_10b20549c(*(undefined4 *)(param_1 + 0x358));
  puStack_130 = (undefined8 *)((ulong)puStack_130 & 0xffffffffffffff00);
  cStack_120 = '\0';
  if (cStack_d0 == '\x01') {
    puStack_128 = puStack_d8;
    puStack_130 = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    cStack_120 = cStack_d0;
  }
  func_0x00010b199160(*(undefined8 *)(*plVar7 + 0x10));
  (*extraout_x8_00)();
  func_0x0001052b818c(&puStack_130);
  func_0x0001052b81ac(&puStack_f0);
  FUN_10b198140(&uStack_100);
  func_0x00010b198fc0();
  func_0x0001052b818c(&puStack_e0);
LAB_10b193844:
  FUN_10b12338c(auStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 10b193900; end: 10b1939bb;  */

void FUN_10b193900(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [23];
  undefined1 uStack_29;
  
  func_0x00010b198c88();
  func_0x00010b190fe8();
  func_0x000107c27f70(auStack_40,*(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc);
  func_0x00010b199520(uStack_29);
  if (extraout_x8 == 0) {
    func_0x000104bffddc();
  }
  (**(code **)(*(long *)**(undefined8 **)(unaff_x20 + 0x6c0) + 0x60))(auStack_58);
  auStack_68[0] = 0;
  uStack_60 = 0;
  auStack_78[0] = 0;
  uStack_70 = 0;
  FUN_10b205bbc(auStack_58,auStack_40,auStack_68,1,auStack_78);
  func_0x00010b19911c();
  func_0x000107c279a4(auStack_40);
  return;
}



/* Entry: 10b1939bc; end: 10b193a03;  */

void FUN_10b1939bc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  int extraout_w10;
  undefined8 unaff_x19;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 auStack_1e8 [40];
  undefined8 *puStack_1c0;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined4 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [16];
  long lStack_150;
  undefined4 auStack_138 [2];
  undefined8 uStack_130;
  long lStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 auStack_c8 [12];
  undefined8 uStack_68;
  
  puVar4 = param_2;
  FUN_10b1262f4();
  puVar4 = (undefined8 *)*puVar4;
  puVar5 = puVar4;
  func_0x00010b1eaeac(param_1);
  uStack_68 = extraout_x8;
  func_0x00010b1eb674(auStack_160);
  lVar9 = lStack_150;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  if (lStack_150 == 0) {
    func_0x00010b1ecf68();
    FUN_10b1c70ec();
  }
  else {
    func_0x00010b1ee348();
    if ((bool)in_ZR) {
      uVar12 = (uint)(0 < *(int *)(lVar9 + 0x88));
    }
    else {
      uVar12 = 0;
    }
    in_ZR = *(char *)(puVar4 + 0x4f) == '\x01';
    if ((bool)in_ZR) {
      puVar5 = puVar4 + 0x4b;
      FUN_10b1c713c(puVar5,lVar9);
      uVar3 = (uint)puVar5;
      lVar9 = lStack_150;
    }
    else {
      uVar3 = 0;
    }
    puVar5 = *(undefined8 **)(lVar9 + 0x48);
    func_0x00010b1ec6e4(puVar5,*(undefined8 *)(lVar9 + 0x50));
    if (puVar5 == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(puVar5 + 7);
    }
    uStack_168 = uVar11;
    if (((uVar3 | uVar12 | (uint)*(byte *)(lVar9 + 0x148)) & 1) != 0) {
      if (uVar12 == 0) {
        if ((*(byte *)(lVar9 + 0x148) & 1) == 0) {
          FUN_10b1c7218(&pcStack_d0,puVar4,param_2,param_3,param_4);
          FUN_10b1d2fcc((undefined8 *)(lVar9 + 0x138));
          *(undefined8 *)(lVar9 + 0x140) = auStack_c8[0];
          *(undefined8 *)(lVar9 + 0x138) = pcStack_d0;
          pcStack_d0 = (code *)0x0;
          auStack_c8[0] = 0;
          *(undefined1 *)(lVar9 + 0x148) = 1;
          FUN_10b1d2ff0(&pcStack_d0);
          lVar9 = lStack_150;
        }
        uVar2 = *(undefined8 *)(lVar9 + 0x138);
        lVar9 = *(long *)(lVar9 + 0x140);
        uStack_198 = uVar11;
        uStack_190 = uVar2;
        lStack_188 = lVar9;
        if (lVar9 != 0) {
          do {
            func_0x00010b1eb124();
          } while (extraout_w10 != 0);
        }
        func_0x0001052b7b6c(auStack_f8);
        func_0x0001052b7b20(unaff_x19,auStack_f8);
        uStack_110 = uStack_e8;
        uStack_118 = uStack_f0;
        uStack_190 = 0;
        lStack_188 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_100 = uStack_d8;
        uStack_108 = uStack_e0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        ppuStack_120 = &PTR_DAT_1108752b8;
        pcStack_d0 = FUN_10b1d745c;
        auStack_138[0] = uVar11;
        uStack_130 = uVar2;
        lStack_128 = lVar9;
        FUN_10b1d74d0(auStack_c8,auStack_138);
        func_0x00010b1ebe1c();
        func_0x00010b1ebbe0();
        func_0x00010b1eb08c(auStack_c8[0]);
        func_0x00010b1d7434(auStack_138);
        func_0x0001052b7e10(auStack_f8);
        puVar5 = &uStack_190;
        FUN_10b1d2ff0();
        goto LAB_10b1c7070;
      }
      uVar6 = *(ulong *)(lVar9 + 0x80);
      in_ZR = (uVar6 & 1) == 0;
      puVar1 = (ulong *)(lVar9 + 0x80);
      if (!(bool)in_ZR) {
        puVar1 = (ulong *)(uVar6 + 7);
      }
      uVar6 = uStack_178 & 0xff;
      uVar8 = (undefined1)uStack_178;
      uVar7 = uStack_180;
      for (lVar9 = (long)*(int *)(lVar9 + 0x88) << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
        uVar12 = *(uint *)(*puVar1 + 0x44);
        puVar5 = (undefined8 *)(ulong)uVar12;
        if (uVar12 != 0) {
          uVar10 = *(ulong *)(*puVar1 + 0x38);
          if ((uVar6 & 1) != 0) {
            uVar6 = 1;
            in_ZR = uVar10 == uVar7;
            if (uVar10 <= uVar7) goto LAB_10b1c6f50;
          }
          func_0x00010b1c71bc();
          uStack_170._0_5_ = CONCAT14(1,(int)puVar5);
          uVar6 = 1;
          uVar7 = uVar10;
        }
LAB_10b1c6f50:
        uVar8 = (undefined1)uVar6;
        puVar1 = puVar1 + 1;
      }
      uVar6 = uStack_178 >> 8;
      uStack_178 = CONCAT71((int7)uVar6,uVar8);
      uStack_180 = uVar7;
    }
    func_0x00010b1ecf68();
    FUN_10b1c70ec();
  }
LAB_10b1c7070:
  func_0x00010b1ecef4();
  func_0x00010b1eaddc(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1ecef4();
  func_0x00010b1eb598();
  pcStack_1a8 = FUN_10b1c70ec;
  puStack_1c0 = puVar5;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x00010b1eb648();
  func_0x0001052b7b90(auStack_1e8);
  func_0x0001052b8044(auStack_1e8,puVar5);
  func_0x0001052b7b20(unaff_x19,auStack_1e8);
  func_0x0001052b7e10(auStack_1e8);
  return;
}



/* Entry: 10b193a04; end: 10b193acf;  */

void FUN_10b193a04(long param_1)

{
  long lVar1;
  long *extraout_x8;
  long *plVar2;
  int extraout_w11;
  long unaff_x20;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [128];
  long *plStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010b19937c(*(undefined8 *)(param_1 + 0x6b0));
  if ((int)lVar1 == 0) {
    plStack_30 = (long *)0x0;
    lStack_28 = 0;
  }
  else {
    lVar1 = unaff_x20 + 0x100;
    FUN_10b12785c();
    plVar2 = *(long **)(lVar1 + 0x10);
    lStack_28 = *(long *)(lVar1 + 0x18);
    plStack_30 = plVar2;
    if (lStack_28 != 0) {
      do {
        func_0x00010b198d28();
        plVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    if (plVar2 != (long *)0x0) {
      FUN_10b193b10(auStack_b0,param_1);
      plVar2 = plStack_30;
      func_0x00010b198fd8(auStack_c8);
      (**(code **)(*plVar2 + 0x28))(plVar2,auStack_c8,auStack_b0);
      func_0x00010b198e7c();
      FUN_10b0faf98(auStack_b0);
    }
  }
  func_0x0001052a9ef8(&plStack_30);
  return;
}



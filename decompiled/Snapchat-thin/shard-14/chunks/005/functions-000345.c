/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2de948; end: 10b2de963;  */

void FUN_10b2de948(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b2de964(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2de964; end: 10b2de9af;  */

long FUN_10b2de964(long param_1)

{
  FUN_10b2de708(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10b2de9b0(param_1,0);
  return param_1;
}



/* Entry: 10b2de9b0; end: 10b2de9c7;  */

void FUN_10b2de9b0(long *param_1)

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



/* Entry: 10b2de9c8; end: 10b2dea7b;  */

void FUN_10b2de9c8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined8 uStack_58;
  
  func_0x00010b2debbc();
  func_0x00010b2dec00();
  lVar4 = *(long *)(unaff_x21 + 0x70);
  func_0x00010b2dec38(FUN_10b2dea7c);
  func_0x00010b2dec2c();
  func_0x00010b2deba0();
  func_0x00010b2debf8();
  if (lVar4 == 0) {
    func_0x00010b2dec4c();
    if (extraout_x8 != 0) {
      plVar1 = (long *)(extraout_x8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*param_1 + 0x10))();
    func_0x00010b2dec18();
  }
  func_0x000107c359b0(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b2dec18();
  func_0x00010b2dec10();
                    /* WARNING: Could not recover jumptable at 0x00010b2dea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1[2] + 0x40))
            (*(undefined8 **)(param_1[2] + 0x40),param_1[3],param_1[4],1);
  return;
}



/* Entry: 10b2dea7c; end: 10b2deabb;  */

void FUN_10b2dea7c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010b2dea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),1);
  return;
}



/* Entry: 10b2deabc; end: 10b2deb6f;  */

void FUN_10b2deabc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined8 uStack_58;
  
  func_0x00010b2debbc();
  func_0x00010b2dec00();
  lVar4 = *(long *)(unaff_x21 + 0x70);
  func_0x00010b2dec38(0x10b2deb70);
  func_0x00010b2dec2c();
  func_0x00010b2deba0();
  func_0x00010b2debf8();
  if (lVar4 == 0) {
    func_0x00010b2dec4c();
    if (extraout_x8 != 0) {
      plVar1 = (long *)(extraout_x8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*param_1 + 0x10))();
    func_0x00010b2dec18();
  }
  func_0x000107c359b0(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b2dec18();
  func_0x00010b2dec10();
                    /* WARNING: Could not recover jumptable at 0x00010b2deb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1[2] + 0x40))
            (*(undefined8 **)(param_1[2] + 0x40),param_1[3],param_1[4],0);
  return;
}



/* Entry: 10b2deb70; end: 10b2dec5f;  */

void FUN_10b2deb70(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010b2deb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b2dec60; end: 10b2decf3;  */

void FUN_10b2dec60(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if (0 < param_3) {
    func_0x00010b2df9f8();
    lVar1 = param_1;
    uStack_50 = param_5;
    uStack_4c = param_6;
    uStack_48 = param_7;
    FUN_10b2decf4(param_1,&uStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
    if (*(ulong *)(param_1 + 0x28) <= *(ulong *)(lVar1 + 0x28)) {
      FUN_10b2ded28(lVar1);
    }
    uStack_68 = param_4;
    lStack_60 = param_3;
    FUN_10b2ded44(lVar1,&uStack_68);
  }
  return;
}



/* Entry: 10b2decf4; end: 10b2ded27;  */

long FUN_10b2decf4(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b2defc8(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x38;
}



/* Entry: 10b2ded28; end: 10b2ded43;  */

bool FUN_10b2ded28(long param_1)

{
  bool bVar1;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x1ff < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x100;
  }
  return bVar1;
}



/* Entry: 10b2ded44; end: 10b2ded8f;  */

void FUN_10b2ded44(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  puVar2 = param_2;
  FUN_10b2df4c4();
  if (lVar1 == 0) {
    FUN_10b2df4ec(param_1);
  }
  func_0x00010b2de850(param_1);
  uVar3 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar3;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10b2ded90; end: 10b2dedab;  */

undefined8 *
FUN_10b2ded90(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long alStack_88 [3];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  if (*(int *)(param_1 + 6) == 0) {
    func_0x00010b2df9f8();
    plVar9 = alStack_88;
    puVar1 = param_1;
    uStack_70 = param_3;
    uStack_6c = param_4;
    uStack_68 = (int)param_5;
    FUN_10b2decf4();
    plVar2 = alStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar2);
    if ((ulong)(puVar1[5] * 3) < (ulong)param_1[5]) {
      return (undefined8 *)0x0;
    }
    FUN_10b2defa8();
    puVar3 = puVar1;
    FUN_10b2de82c();
    plVar5 = plVar9;
    func_0x00010b2de850(puVar1);
    dVar13 = 0.0;
    dVar14 = 0.0;
    do {
      plVar10 = plVar9 + -0x200;
      do {
        if (plVar9 == plVar5) {
          return (undefined8 *)
                 ((long)(dVar14 / dVar13) & ((long)(dVar14 / dVar13) >> 0x3f ^ 0xffffffffffffffffU))
          ;
        }
        uVar11 = param_1[7];
        _pow(uVar11,(double)((long)plVar2 - *plVar9) / 1000.0);
        dVar12 = (double)NEON_fminnm(uVar11,0x3ff0000000000000);
        dVar14 = dVar14 + (double)plVar9[1] * dVar12;
        dVar13 = dVar13 + dVar12;
        plVar10 = plVar10 + 2;
        plVar9 = plVar9 + 2;
      } while ((long *)*puVar3 != plVar10);
      puVar3 = puVar3 + 1;
      plVar9 = (long *)*puVar3;
    } while( true );
  }
  if (*(int *)(param_1 + 6) == 1) {
    func_0x00010b2df9f8();
    puVar8 = &stack0xffffffffffffffa8;
    FUN_10b2decf4(param_1);
    func_0x00010b2df9b8();
    if ((ulong)(param_5[5] * 3) < (ulong)param_1[5]) {
      return (undefined8 *)0x0;
    }
    puVar1 = param_5;
    FUN_10b2de82c();
    puVar4 = puVar8;
    func_0x00010b2de850(param_5);
    uVar6 = 0;
    do {
      puVar7 = puVar8 + -0x1000;
      do {
        if (puVar8 == puVar4) {
          if (param_5[5] == 0) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)(uVar6 / (ulong)param_5[5]);
        }
        uVar6 = *(long *)(puVar8 + 8) + uVar6;
        puVar7 = puVar7 + 0x10;
        puVar8 = puVar8 + 0x10;
      } while ((undefined1 *)*puVar1 != puVar7);
      puVar1 = puVar1 + 1;
      puVar8 = (undefined1 *)*puVar1;
    } while( true );
  }
  return param_1;
}



/* Entry: 10b2dedac; end: 10b2dee77;  */

ulong FUN_10b2dedac(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [24];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  func_0x00010b2df9f8();
  uStack_38 = SUB84(param_5,0);
  puVar5 = auStack_58;
  uStack_40 = param_3;
  uStack_3c = param_4;
  FUN_10b2decf4(param_1);
  func_0x00010b2df9b8();
  if ((ulong)(param_5[5] * 3) < *(ulong *)(param_1 + 0x28)) {
    return 0;
  }
  puVar1 = param_5;
  FUN_10b2de82c();
  puVar2 = puVar5;
  func_0x00010b2de850(param_5);
  uVar3 = 0;
  do {
    puVar4 = puVar5 + -0x1000;
    do {
      if (puVar5 == puVar2) {
        if (param_5[5] == 0) {
          return 0;
        }
        return uVar3 / (ulong)param_5[5];
      }
      uVar3 = *(long *)(puVar5 + 8) + uVar3;
      puVar4 = puVar4 + 0x10;
      puVar5 = puVar5 + 0x10;
    } while ((undefined1 *)*puVar1 != puVar4);
    puVar1 = puVar1 + 1;
    puVar5 = (undefined1 *)*puVar1;
  } while( true );
}



/* Entry: 10b2dee78; end: 10b2defa7;  */

ulong FUN_10b2dee78(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long alStack_88 [3];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  func_0x00010b2df9f8();
  plVar5 = alStack_88;
  puVar1 = param_1;
  uStack_70 = param_3;
  uStack_6c = param_4;
  uStack_68 = param_5;
  FUN_10b2decf4();
  plVar2 = alStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar2);
  if ((ulong)(puVar1[5] * 3) < (ulong)param_1[5]) {
    return 0;
  }
  FUN_10b2defa8();
  puVar3 = puVar1;
  FUN_10b2de82c();
  plVar4 = plVar5;
  func_0x00010b2de850(puVar1);
  dVar9 = 0.0;
  dVar10 = 0.0;
  do {
    plVar6 = plVar5 + -0x200;
    do {
      if (plVar5 == plVar4) {
        return (long)(dVar10 / dVar9) & ((long)(dVar10 / dVar9) >> 0x3f ^ 0xffffffffffffffffU);
      }
      uVar7 = param_1[7];
      _pow(uVar7,(double)((long)plVar2 - *plVar5) / 1000.0);
      dVar8 = (double)NEON_fminnm(uVar7,0x3ff0000000000000);
      dVar10 = dVar10 + (double)plVar5[1] * dVar8;
      dVar9 = dVar9 + dVar8;
      plVar6 = plVar6 + 2;
      plVar5 = plVar5 + 2;
    } while ((long *)*puVar3 != plVar6);
    puVar3 = puVar3 + 1;
    plVar5 = (long *)*puVar3;
  } while( true );
}



/* Entry: 10b2defa8; end: 10b2defc7;  */

long FUN_10b2defa8(long param_1)

{
  __ZNSt3__16chrono12steady_clock3nowEv();
  return param_1 / 1000000;
}



/* Entry: 10b2defc8; end: 10b2df40b;  */

undefined1  [16] FUN_10b2defc8(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  code *pcVar2;
  long **pplVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  ulong uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  pplVar3 = &plStack_68;
  func_0x000107c278c4();
  uVar13 = (ulong)pplVar3 ^
           ((long)*(int *)(param_2 + 0x1c) * 100 ^ (ulong)*(uint *)(param_2 + 0x18) * 10 ^
           (ulong)*(uint *)(param_2 + 0x20) * 1000) >> 1;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - 1;
    if ((uVar14 & uVar15) == 0) {
      unaff_x25 = uVar13 & uVar15;
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
    plVar11 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10b2df0e4;
          uVar5 = plVar11[1];
          if (uVar5 != uVar13) break;
          lVar6 = param_2;
          func_0x000107c278d0(param_2,plVar11 + 2);
          if (((((int)lVar6 != 0) && (*(int *)(param_2 + 0x18) == (int)plVar11[5])) &&
              (*(int *)(param_2 + 0x20) == (int)plVar11[6])) &&
             (*(int *)(param_2 + 0x1c) == *(int *)((long)plVar11 + 0x2c))) {
            uVar4 = 0;
            goto LAB_10b2df3cc;
          }
        }
        if ((uVar14 & uVar15) == 0) {
          uVar5 = uVar5 & uVar15;
        }
        else if (uVar14 <= uVar5) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar5 / uVar14;
          }
          uVar5 = uVar5 - uVar7 * uVar14;
        }
      } while (uVar5 == unaff_x25);
    }
  }
LAB_10b2df0e4:
  plVar12 = (long *)*param_4;
  plVar1 = param_1 + 2;
  plVar11 = (long *)0x68;
  __Znwm();
  uStack_58 = 1;
  *plVar11 = 0;
  plVar11[1] = uVar13;
  lVar6 = plVar12[2];
  lVar16 = *plVar12;
  plVar11[3] = plVar12[1];
  plVar11[2] = lVar16;
  plVar11[4] = lVar6;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = 0;
  lVar6 = plVar12[4];
  plVar11[5] = plVar12[3];
  *(int *)(plVar11 + 6) = (int)lVar6;
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[10] = 0;
  plVar11[9] = 0;
  plVar11[0xc] = 0;
  plVar11[0xb] = 0;
  plStack_60 = plVar1;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_10b2df350;
  uVar15 = 1;
  if (2 < uVar14) {
    uVar15 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar15 = uVar15 | uVar14 << 1;
  uVar14 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar15 <= uVar14) {
    uVar15 = uVar14;
  }
  plStack_68 = plVar11;
  if (uVar15 - 1 == 0) {
    uVar15 = 2;
  }
  else if ((uVar15 & uVar15 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar14 = param_1[1];
  if (uVar14 < uVar15) {
LAB_10b2df1c4:
    if (uVar15 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b2df3fc);
      (*pcVar2)();
    }
    lVar6 = uVar15 << 3;
    __Znwm(lVar6);
    FUN_10b2df40c(param_1,lVar6);
    param_1[1] = uVar15;
    lVar6 = *param_1;
    for (uVar14 = 0; uVar15 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar6 + uVar14 * 8) = 0;
    }
    plVar12 = (long *)*plVar1;
    uVar14 = uVar15;
    if (plVar12 != (long *)0x0) {
      uVar9 = plVar12[1];
      uVar7 = uVar15 - 1;
      uVar5 = 0;
      if (uVar15 != 0) {
        uVar5 = uVar9 / uVar15;
      }
      uVar10 = uVar9;
      if (uVar15 <= uVar9) {
        uVar10 = uVar9 - uVar5 * uVar15;
      }
      if ((uVar15 & uVar7) == 0) {
        uVar10 = uVar9 & uVar7;
      }
      *(long **)(lVar6 + uVar10 * 8) = plVar1;
      while (plVar8 = plVar12, plVar12 = (long *)*plVar8, plVar12 != (long *)0x0) {
        uVar5 = plVar12[1];
        if ((uVar15 & uVar7) == 0) {
          uVar5 = uVar5 & uVar7;
        }
        else if (uVar15 <= uVar5) {
          uVar9 = 0;
          if (uVar15 != 0) {
            uVar9 = uVar5 / uVar15;
          }
          uVar5 = uVar5 - uVar9 * uVar15;
        }
        if (uVar5 != uVar10) {
          if (*(long *)(lVar6 + uVar5 * 8) == 0) {
            *(long **)(lVar6 + uVar5 * 8) = plVar8;
            uVar10 = uVar5;
          }
          else {
            *plVar8 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar6 + uVar5 * 8);
            **(long **)(lVar6 + uVar5 * 8) = (long)plVar12;
            plVar12 = plVar8;
          }
        }
      }
    }
  }
  else if (uVar15 < uVar14) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar15 <= uVar5) {
      uVar15 = uVar5;
    }
    if (uVar15 < uVar14) {
      if (uVar15 != 0) goto LAB_10b2df1c4;
      FUN_10b2df40c(param_1,0);
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
LAB_10b2df350:
  lVar6 = *param_1;
  plVar12 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar11 = *plVar1;
    *plVar1 = (long)plVar11;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar1;
    if (*plVar11 != 0) {
      uVar13 = *(ulong *)(*plVar11 + 8);
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
      *(long **)(lVar6 + uVar13 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar12;
    *plVar12 = (long)plVar11;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b2df424(&plStack_68);
  uVar4 = 1;
LAB_10b2df3cc:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = plVar11;
  return auVar17;
}



/* Entry: 10b2df40c; end: 10b2df423;  */

void FUN_10b2df40c(long *param_1,long param_2)

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



/* Entry: 10b2df424; end: 10b2df4c3;  */

long * FUN_10b2df424(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b2de744(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b2df4c4; end: 10b2df4eb;  */

long FUN_10b2df4c4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x20 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 10b2df4ec; end: 10b2df80f;  */

void FUN_10b2df4ec(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 uStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  ulong *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  if (param_1[4] < 0x100) {
    puVar12 = (undefined8 *)param_1[1];
    puVar16 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)*param_1;
    uVar17 = (long)puVar16 - (long)puVar12;
    puVar13 = param_1 + 3;
    puVar14 = (undefined8 *)*puVar13;
    if (uVar17 < (ulong)((long)puVar14 - (long)puVar15)) {
      uVar7 = 0x1000;
      __Znwm();
      if (puVar14 == puVar16) {
        if (puVar12 == puVar15) {
          lVar11 = (long)puVar14 - (long)puVar12 >> 2;
          if (puVar16 == puVar12) {
            lVar11 = 1;
          }
          puStack_70 = puVar13;
          FUN_10b2df918();
          func_0x00010b2df9e0(lVar11 * 2 + 6);
          FUN_10b2df8f0(&puStack_90,param_1[1],param_1[2]);
          puVar16 = (undefined8 *)param_1[1];
          puVar12 = (undefined8 *)*param_1;
          puVar15 = (undefined8 *)param_1[3];
          puVar14 = (undefined8 *)param_1[2];
          param_1[1] = (ulong)puStack_88;
          *param_1 = (ulong)puStack_90;
          param_1[3] = (ulong)puStack_78;
          param_1[2] = (ulong)puStack_80;
          puStack_90 = puVar12;
          puStack_88 = puVar16;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x00010b2dfa08();
          puVar12 = (undefined8 *)param_1[1];
        }
        puVar12[-1] = uVar7;
        param_1[1] = (ulong)puVar12;
        FUN_10b2df810(param_1,uVar7);
      }
      else {
        *puVar16 = uVar7;
        param_1[2] = (ulong)(puVar16 + 1);
      }
    }
    else {
      puVar9 = (undefined8 *)((long)puVar14 - (long)puVar15 >> 2);
      if (puVar14 == puVar15) {
        puVar9 = (undefined8 *)0x1;
      }
      puStack_98 = puVar13;
      FUN_10b2df918();
      puVar14 = (undefined8 *)((long)puVar9 + uVar17);
      puVar15 = puVar9 + param_2;
      uVar7 = 0x1000;
      lVar11 = param_2;
      puStack_b8 = puVar9;
      puStack_b0 = puVar14;
      puStack_a8 = puVar14;
      puStack_a0 = puVar15;
      __Znwm();
      puStack_c8 = param_1 + 5;
      uStack_c0 = 0x100;
      puVar10 = puVar14;
      if (uVar17 == param_2 * 8) {
        if (puVar16 == puVar12) {
          puVar12 = (undefined8 *)0x1;
          uStack_d0 = uVar7;
          puStack_70 = puVar13;
          FUN_10b2df918();
          puStack_78 = puVar12 + lVar11;
          puStack_90 = puVar12;
          puStack_88 = puVar12;
          puStack_80 = puVar12;
          FUN_10b2df8f0(&puStack_90,puVar14,puVar14);
          puVar1 = puStack_78;
          puVar10 = puStack_80;
          puVar16 = puStack_88;
          puVar12 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a8 = puStack_80;
          puStack_a0 = puStack_78;
          puStack_90 = puVar9;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x00010b2dfa08();
          puVar9 = puVar12;
          puVar14 = puVar16;
          puVar15 = puVar1;
        }
        else {
          puVar14 = puVar14 + (((long)puVar14 - (long)puVar9 >> 3) + 1) / -2;
          puVar10 = puVar14;
          puStack_b0 = puVar14;
        }
      }
      puVar12 = puVar10 + 1;
      *puVar10 = uVar7;
      uStack_d0 = 0;
      puVar16 = (undefined8 *)param_1[2];
      puStack_a8 = puVar12;
      while (puVar10 = (undefined8 *)param_1[1], puVar16 != puVar10) {
        puVar10 = puVar14;
        if (puVar14 == puVar9) {
          if (puVar12 < puVar15) {
            lVar11 = (long)puVar12 - (long)puVar9;
            puVar1 = puVar12 + (((long)puVar15 - (long)puVar12 >> 3) + 1) / 2;
            puVar10 = (undefined8 *)((long)puVar1 - ((long)puVar12 - (long)puVar9));
            puVar12 = puVar1;
            if (lVar11 != 0) {
              _memmove(puVar10,puVar14,lVar11);
            }
          }
          else {
            lVar11 = (long)puVar15 - (long)puVar9 >> 2;
            if ((long)puVar15 - (long)puVar9 == 0) {
              lVar11 = 1;
            }
            puStack_70 = puVar13;
            FUN_10b2df918(lVar11);
            func_0x00010b2df9e0(lVar11 * 2 + 6);
            FUN_10b2df8f0(&puStack_90,puVar9,puVar12);
            puVar5 = puStack_78;
            puVar4 = puStack_80;
            puVar10 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar9;
            puStack_88 = puVar14;
            puStack_80 = puVar12;
            puStack_78 = puVar15;
            func_0x00010b2dfa08();
            puVar9 = puVar1;
            puVar12 = puVar4;
            puVar15 = puVar5;
          }
        }
        puVar16 = puVar16 + -1;
        puVar14 = puVar10 + -1;
        *puVar14 = *puVar16;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (ulong)puVar9;
      param_1[1] = (ulong)puVar14;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (ulong)puVar12;
      param_1[3] = (ulong)puVar15;
      puStack_b0 = puVar10;
      func_0x00010b2df94c(&uStack_d0);
      func_0x00010b2df978(&puStack_b8);
    }
    return;
  }
  param_1[4] = param_1[4] - 0x100;
  uVar7 = *(undefined8 *)param_1[1];
  param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
  puVar12 = (undefined8 *)param_1[2];
  if (puVar12 == (undefined8 *)param_1[3]) {
    uVar17 = *param_1;
    uVar8 = param_1[1];
    if (uVar8 < uVar17 || uVar8 - uVar17 == 0) {
      puVar13 = (ulong *)((long)((long)puVar12 - uVar17) >> 2);
      if ((long)puVar12 - uVar17 == 0) {
        puVar13 = (ulong *)0x1;
      }
      puVar6 = puVar13;
      FUN_10b2df918();
      puStack_70 = puVar6;
      puStack_68 = puVar6 + ((ulong)puVar13 >> 2);
      FUN_10b2df8f0(&puStack_70,param_1[1],param_1[2]);
      uVar17 = param_1[1];
      puVar18 = (ulong *)*param_1;
      param_1[1] = (ulong)puStack_68;
      *param_1 = (ulong)puStack_70;
      param_1[3] = (ulong)(puVar6 + uVar8);
      param_1[2] = (ulong)(puVar6 + ((ulong)puVar13 >> 2));
      puStack_70 = puVar18;
      puStack_68 = (ulong *)uVar17;
      func_0x00010b2df978(&puStack_70);
      puVar12 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar8 - uVar17) >> 3) + 1) / -2;
      lVar11 = uVar8 + lVar2 * 8;
      lVar3 = (long)puVar12 - uVar8;
      if (lVar3 != 0) {
        _memmove(lVar11,uVar8,lVar3);
        uVar8 = param_1[1];
      }
      puVar12 = (undefined8 *)(lVar11 + lVar3);
      param_1[1] = uVar8 + lVar2 * 8;
    }
  }
  *puVar12 = uVar7;
  param_1[2] = (ulong)(puVar12 + 1);
  return;
}



/* Entry: 10b2df810; end: 10b2df8ef;  */

void FUN_10b2df810(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10b2df918();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10b2df8f0(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010b2df978(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b2df8f0; end: 10b2df917;  */

void FUN_10b2df8f0(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10b2df918; end: 10b2df9b7;  */

undefined1  [16] FUN_10b2df918(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b2df9b8; end: 10b2dfa0f;  */

void FUN_10b2df9b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10b2dfa10; end: 10b2dfbb3;  */

void FUN_10b2dfa10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined4 *puVar3;
  long extraout_x8;
  undefined8 unaff_x20;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_138 [24];
  undefined1 uStack_120;
  undefined4 auStack_118 [2];
  undefined1 auStack_110 [28];
  undefined1 uStack_f4;
  undefined4 uStack_f0;
  
  func_0x000107c35a70();
  lVar2 = param_1 + 0x28;
  func_0x000107c35a68();
  plVar4 = (long *)(lVar2 + 0x18);
  lVar6 = *plVar4;
  plVar5 = *(long **)(param_1 + 0x130);
  func_0x000107c35a08(*(undefined1 *)(lVar6 + 0x120));
  lVar1 = 0xc0;
  if ((bool)in_ZR) {
    lVar1 = extraout_x8;
  }
  func_0x000107c278b8(auStack_118,param_4);
  (**(code **)(*plVar5 + 0x10))(plVar5,lVar6 + lVar1,auStack_118);
  puVar3 = auStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if ((int)plVar5 == 0) {
    auStack_138[0] = 0;
    uStack_120 = 0;
    func_0x000107c2c93c(auStack_118,param_3,plVar4,0,auStack_138);
    func_0x000107c2c7e8(lVar2 + 0x108,auStack_118);
    func_0x000107c2c640(auStack_118);
    puVar3 = (undefined4 *)auStack_138;
    func_0x000107c279a4();
    func_0x00010b2e1af8();
    ___error();
    auStack_118[0] = 0x3ed;
    func_0x00010b2e1ba8(*puVar3);
    uStack_f4 = 0;
    uStack_f0 = 0;
    func_0x000107c359e4();
    func_0x00010b2e1ba0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
  }
  else {
    func_0x000107c316ec();
    *(undefined4 **)(lVar2 + 0x50) = puVar3;
    func_0x000107c2c7e0(plVar4);
    func_0x00010b479730(unaff_x20);
  }
  return;
}



/* Entry: 10b2dfbb4; end: 10b2dfbe7;  */

void FUN_10b2dfbb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long *plVar7;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  int extraout_w10;
  ulong extraout_x10;
  long *plVar8;
  long *extraout_x11;
  long *extraout_x12;
  ulong extraout_x13;
  long extraout_x14;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auStack_340 [24];
  uint auStack_328 [2];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  char cStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined1 uStack_2b0;
  long *plStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [48];
  undefined1 auStack_268 [248];
  uint uStack_170;
  char cStack_f0;
  
  func_0x000107c35a7c();
  lVar4 = param_1;
  func_0x000107c35a6c();
  if (lVar4 == 0) {
    plStack_2e8 = (long *)0x0;
    func_0x000107c2793c(&UNK_10f742c83);
    func_0x00010b2e1b2c(auStack_268);
    FUN_10b2e085c(auStack_268,2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
  }
  else {
    func_0x000107c2c670(auStack_268,lVar4 + 0x40);
    func_0x00010b2e1ac8();
    plVar13 = *(long **)(param_1 + 0x80);
    if ((plVar13 != (long *)0x0) && (plVar11 = (long *)(param_1 + 0x90), *plVar11 != 0)) {
      plVar5 = plVar11;
      func_0x000107c2c85c(plVar11,unaff_x21);
      func_0x000107c35a5c();
      if ((bool)in_ZR) {
        plVar7 = (long *)((ulong)plVar5 & extraout_x8);
        in_ZR = true;
      }
      else {
        in_ZR = plVar5 == plVar13;
        plVar7 = plVar5;
        if (plVar13 <= plVar5) {
          uVar9 = 0;
          if (plVar13 != (long *)0x0) {
            uVar9 = (ulong)plVar5 / (ulong)plVar13;
          }
          plVar7 = (long *)((long)plVar5 - uVar9 * (long)plVar13);
        }
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x78) + (long)plVar7 * 8);
      if (plVar12 != (long *)0x0) {
LAB_10b2e0a00:
        while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
          plVar8 = (long *)plVar12[1];
          if (plVar8 != plVar5) goto LAB_10b2e0a24;
          in_ZR = false;
          if (plVar12[2] == unaff_x21) {
            func_0x00010b2d8dcc(auStack_298,plVar12 + 3);
            do {
              func_0x000107c35a94();
            } while (extraout_x12 != plVar12);
            plStack_2e8 = (long *)(param_1 + 0x88);
            in_ZR = true;
            lVar6 = extraout_x8_03;
            if (extraout_x11 == plStack_2e8) {
LAB_10b2e0c64:
              if (extraout_x8_03 == 0) {
LAB_10b2e0c98:
                *(undefined8 *)(extraout_x14 + extraout_x9_01 * 8) = 0;
                lVar6 = *plVar12;
                goto LAB_10b2e0ca0;
              }
              uVar9 = *(ulong *)(extraout_x8_03 + 8);
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar10 = uVar9 & extraout_x13;
              }
              else {
                uVar10 = uVar9;
                if (extraout_x10 <= uVar9) {
                  uVar10 = 0;
                  if (extraout_x10 != 0) {
                    uVar10 = uVar9 / extraout_x10;
                  }
                  uVar10 = uVar9 - uVar10 * extraout_x10;
                }
              }
              in_ZR = uVar10 == extraout_x9_01;
              if (!(bool)in_ZR) goto LAB_10b2e0c98;
LAB_10b2e0ca8:
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar9 = uVar9 & extraout_x13;
              }
              else if (extraout_x10 <= uVar9) {
                uVar10 = 0;
                if (extraout_x10 != 0) {
                  uVar10 = uVar9 / extraout_x10;
                }
                uVar9 = uVar9 - uVar10 * extraout_x10;
              }
              in_ZR = uVar9 == extraout_x9_01;
              if (!(bool)in_ZR) {
                *(long **)(extraout_x14 + uVar9 * 8) = extraout_x11;
                lVar6 = *plVar12;
              }
            }
            else {
              uVar9 = extraout_x11[1];
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar9 = uVar9 & extraout_x13;
              }
              else if (extraout_x10 <= uVar9) {
                uVar10 = 0;
                if (extraout_x10 != 0) {
                  uVar10 = uVar9 / extraout_x10;
                }
                uVar9 = uVar9 - uVar10 * extraout_x10;
              }
              in_ZR = uVar9 == extraout_x9_01;
              if (!(bool)in_ZR) goto LAB_10b2e0c64;
LAB_10b2e0ca0:
              if (lVar6 != 0) {
                uVar9 = *(ulong *)(lVar6 + 8);
                goto LAB_10b2e0ca8;
              }
            }
            *extraout_x11 = lVar6;
            *plVar12 = 0;
            *plVar11 = *plVar11 + -1;
            uStack_2e0 = 1;
            uStack_2dc = 0;
            plStack_2f0 = plVar12;
            FUN_10b2e1920(&plStack_2f0);
            goto LAB_10b2e0a58;
          }
        }
      }
    }
LAB_10b2e0a4c:
    FUN_10b2e4684(auStack_298,param_4);
LAB_10b2e0a58:
    FUN_10b2e1250(&plStack_2f0,auStack_298);
    func_0x000107c35a80();
    func_0x000107c2c6a0(&plStack_2f0);
    plVar13 = *(long **)(lVar4 + 0x18);
    lStack_2a0 = *(long *)(lVar4 + 0x20);
    plStack_2a8 = plVar13;
    if (lStack_2a0 != 0) {
      do {
        func_0x000107c359b8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c35a08((char)plVar13[0x24]);
    lVar4 = 0xc0;
    if ((bool)in_ZR) {
      lVar4 = extraout_x8_00;
    }
    func_0x000107c35a84();
    (**(code **)(*plVar13 + 0x28))(&plStack_2f0,plVar13);
    func_0x000107c359bc(plStack_2a8);
    lVar6 = 0xc0;
    if ((bool)in_ZR) {
      lVar6 = extraout_x9;
    }
    func_0x000107c35a04(*(undefined8 *)(*plStack_2f0 + 0x38),plStack_2f0,
                        *(undefined8 *)(extraout_x8_01 + lVar6),auStack_268,auStack_298);
    func_0x000107c2c53c(&plStack_2f0);
    uVar1 = *(undefined4 *)((long)plVar13 + lVar4 + 0x38);
    FUN_10b2e1250(auStack_328,auStack_298);
    uVar2 = uStack_310;
    plStack_2f0 = (long *)((ulong)uStack_170 | 0x100000000);
    if (cStack_f0 == '\0') {
      plStack_2f0 = (long *)0x0;
    }
    plStack_2e8 = (long *)CONCAT44(plStack_2e8._4_4_,uVar1);
    uStack_2e0 = uStack_2e0 & 0xffffff00;
    uVar3 = cStack_2f8 == '\x01';
    if ((bool)uVar3) {
      uStack_2e0 = auStack_328[0];
      uStack_2d0 = uStack_318;
      uStack_2d8 = uStack_320;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_2c8 = uVar2;
      uStack_2c0 = uStack_308;
      uStack_2b8 = uStack_300;
    }
    uStack_2b0 = uVar3;
    func_0x000107c2c6a0(auStack_328);
    plVar13 = *(long **)(param_1 + 400);
    func_0x000107c359bc(plStack_2a8);
    lVar4 = 0xc0;
    if ((bool)uVar3) {
      lVar4 = extraout_x9_00;
    }
    __ZNSt3__19to_stringEx(auStack_340,*(undefined8 *)(extraout_x8_02 + lVar4));
    plVar11 = plStack_2a8;
    func_0x000107c30138(plStack_2a8);
    func_0x000107c35a04(*(undefined8 *)(*plVar13 + 0x30),plVar13,auStack_340,plVar11,&plStack_2f0);
    func_0x000107c359e4();
    func_0x000107c35a28();
    func_0x000107c2c578(&plStack_2a8);
    func_0x00010b2e1b8c();
    func_0x000107c2c67c(auStack_268);
  }
  return;
LAB_10b2e0a24:
  if (((ulong)plVar13 & extraout_x8) == 0) {
    plVar8 = (long *)((ulong)plVar8 & extraout_x8);
  }
  else if (plVar13 <= plVar8) {
    uVar9 = 0;
    if (plVar13 != (long *)0x0) {
      uVar9 = (ulong)plVar8 / (ulong)plVar13;
    }
    plVar8 = (long *)((long)plVar8 - uVar9 * (long)plVar13);
  }
  in_ZR = plVar8 == plVar7;
  if (!(bool)in_ZR) goto LAB_10b2e0a4c;
  goto LAB_10b2e0a00;
}



/* Entry: 10b2dfbe8; end: 10b2dfd7b;  */

void FUN_10b2dfbe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long extraout_x8;
  code *extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  undefined8 unaff_x20;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_248 [528];
  
  func_0x000107c35a70();
  lVar1 = param_1 + 0x28;
  func_0x000107c2c864(lVar1,&stack0xffffffffffffffc8);
  lVar2 = param_1 + 0x78;
  func_0x000107c2c86c(lVar2,&stack0xffffffffffffffc8);
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      uStack_298 = 0;
      func_0x000107c2793c(&UNK_10f742cbf);
      func_0x00010b2e1b2c(auStack_248);
      FUN_10b2e085c(auStack_248,3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_248);
    }
    else {
      func_0x000107c2c670(auStack_248,lVar1 + 0x40);
      func_0x00010b2e1ac8();
      uStack_258 = *(undefined8 *)(lVar1 + 0x20);
      uStack_260 = *(undefined8 *)(lVar1 + 0x18);
      if (*(long *)(lVar1 + 0x20) != 0) {
        do {
          func_0x000107c359b8();
        } while (extraout_w10 != 0);
      }
      plStack_2a0 = (long *)((ulong)plStack_2a0 & 0xffffffffffffff00);
      uStack_270 = 0;
      func_0x000107c35a80();
      func_0x000107c2c6a0(&plStack_2a0);
      func_0x000107c35a84();
      func_0x000107c35a00(uStack_260);
      (*extraout_x9)(&plStack_2a0);
      func_0x000107c359bc(uStack_260);
      lVar1 = 0xc0;
      if ((bool)in_ZR) {
        lVar1 = extraout_x9_00;
      }
      (**(code **)(*plStack_2a0 + 0x40))
                (plStack_2a0,*(undefined8 *)(extraout_x8 + lVar1),auStack_248);
      func_0x000107c2c53c(&plStack_2a0);
      func_0x000107c2c578(&uStack_260);
      func_0x000107c2c67c(auStack_248);
    }
  }
  else {
    func_0x00010b2e1b5c(param_1,unaff_x20,param_3);
  }
  return;
}



/* Entry: 10b2dfd7c; end: 10b2e007b;  */

undefined8 * FUN_10b2dfd7c(undefined8 *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  int iVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar5;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar3 = param_1;
    func_0x000107c35a4c();
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    *puVar3 = &PTR_DAT_110cd32e0;
    puVar3[1] = &PTR_FUN_110cd3320;
    puVar3[2] = &PTR_DAT_110cd3338;
    func_0x00010b479718(puVar3[3]);
    func_0x00010b479740(param_1[4]);
    puVar3 = param_1 + 7;
    while (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0) {
      in_ZR = *(char *)(puVar3 + 0x4e) == '\x01';
      if ((bool)in_ZR) {
        func_0x000107c28ac8(puVar3 + 0x4c);
      }
    }
    uVar4 = param_1[0x1d];
    __ZNSt3__17promiseIvEC1Ev((undefined1 *)((long)register0x00000008 + -0x108));
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -0x110),
               (undefined1 *)((long)register0x00000008 + -0x108));
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0x10b2e11c4;
    *(undefined ***)((long)register0x00000008 + -0xf8) = &PTR_DAT_110cd33d0;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x108);
    *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar4;
    *(undefined1 **)((long)register0x00000008 + -200) =
         (undefined1 *)((long)register0x00000008 + -0x108);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x10b2e1164;
    *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110cd33b8;
    lVar1 = 0x40;
    __Znwm();
    FUN_10b16a0a0();
    uVar5 = *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)((long)register0x00000008 + -200);
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
    *(long *)((long)register0x00000008 + -0xb0) = lVar1;
    func_0x00010bcce530(uVar4,(undefined1 *)((long)register0x00000008 + -0xc0));
    func_0x00010b2e1ae8();
    func_0x000107c281f0((undefined1 *)((long)register0x00000008 + -0x100));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -0x110));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0x110));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0x108));
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x100);
    __ZNSt3__17promiseIvEC1Ev();
    unaff_x20 = param_1 + 0x1b;
    unaff_x22 = *unaff_x20;
    func_0x000107c28150();
    unaff_x23 = *(long *)(unaff_x22 + 0x10);
    __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
    unaff_x25 = *(long *)(unaff_x23 + 0x70);
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(code **)((long)register0x00000008 + -0xc0) = FUN_10b2e14d4;
    *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_DAT_110cd3418;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x100);
    *(undefined1 **)((long)register0x00000008 + -0x90) = unaff_x21;
    iVar2 = (int)(undefined1 *)((long)register0x00000008 + -0xc0);
    func_0x000107c28154(unaff_x23 + 0x48);
    func_0x00010b2e1ad8();
    __ZNSt3__15mutex6unlockEv(unaff_x23 + 8);
    if (unaff_x25 == 0) {
      lVar1 = *(long *)(unaff_x22 + 0x18);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(unaff_x22 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar4;
      if (lVar1 != 0) {
        do {
          func_0x000107c359b8();
        } while (extraout_w10 != 0);
      }
      func_0x000107c359f4();
      iVar2 = (int)(undefined1 *)((long)register0x00000008 + -0xc0);
      (*extraout_x8_00)();
      func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0xc0));
    }
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -0xc0),
               (undefined1 *)((long)register0x00000008 + -0x100));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -0xc0));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0xc0));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0x100));
    func_0x000107c27c3c(param_1 + 0x32);
    func_0x000107c2c5ac(param_1 + 0x30);
    func_0x00010b2e14b0(param_1 + 0x2e);
    func_0x00010b2e1480(param_1 + 0x2a);
    func_0x00010b2e145c(param_1 + 0x28);
    FUN_10b2e111c(param_1 + 0x23);
    func_0x000107c2c58c(param_1 + 0x20);
    func_0x000107c2814c(unaff_x20);
    func_0x000107c27e70(param_1 + 0x19);
    func_0x000107c2c844(param_1 + 0x14);
    func_0x00010b2e140c(param_1 + 0xf);
    func_0x00010b2e13bc(param_1 + 10);
    unaff_x19 = param_1 + 5;
    func_0x00010b2e136c();
    func_0x000107c359f8(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (iVar2 == 0) {
      func_0x00010b2e1a10();
    }
    else {
      func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0xc0));
    }
    unaff_x30 = FUN_10b2e007c;
    param_1 = unaff_x19;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  }
  return param_1;
}



/* Entry: 10b2e007c; end: 10b2e007f;  */

undefined8 * FUN_10b2e007c(undefined8 *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  int iVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar5;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar3 = param_1;
    func_0x000107c35a4c();
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    *puVar3 = &PTR_DAT_110cd32e0;
    puVar3[1] = &PTR_FUN_110cd3320;
    puVar3[2] = &PTR_DAT_110cd3338;
    func_0x00010b479718(puVar3[3]);
    func_0x00010b479740(param_1[4]);
    puVar3 = param_1 + 7;
    while (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0) {
      in_ZR = *(char *)(puVar3 + 0x4e) == '\x01';
      if ((bool)in_ZR) {
        func_0x000107c28ac8(puVar3 + 0x4c);
      }
    }
    uVar4 = param_1[0x1d];
    __ZNSt3__17promiseIvEC1Ev((undefined1 *)((long)register0x00000008 + -0x108));
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -0x110),
               (undefined1 *)((long)register0x00000008 + -0x108));
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0x10b2e11c4;
    *(undefined ***)((long)register0x00000008 + -0xf8) = &PTR_DAT_110cd33d0;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x108);
    *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar4;
    *(undefined1 **)((long)register0x00000008 + -200) =
         (undefined1 *)((long)register0x00000008 + -0x108);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x10b2e1164;
    *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110cd33b8;
    lVar1 = 0x40;
    __Znwm();
    FUN_10b16a0a0();
    uVar5 = *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)((long)register0x00000008 + -200);
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
    *(long *)((long)register0x00000008 + -0xb0) = lVar1;
    func_0x00010bcce530(uVar4,(undefined1 *)((long)register0x00000008 + -0xc0));
    func_0x00010b2e1ae8();
    func_0x000107c281f0((undefined1 *)((long)register0x00000008 + -0x100));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -0x110));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0x110));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0x108));
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x100);
    __ZNSt3__17promiseIvEC1Ev();
    unaff_x20 = param_1 + 0x1b;
    unaff_x22 = *unaff_x20;
    func_0x000107c28150();
    unaff_x23 = *(long *)(unaff_x22 + 0x10);
    __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
    unaff_x25 = *(long *)(unaff_x23 + 0x70);
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(code **)((long)register0x00000008 + -0xc0) = FUN_10b2e14d4;
    *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_DAT_110cd3418;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x100);
    *(undefined1 **)((long)register0x00000008 + -0x90) = unaff_x21;
    iVar2 = (int)(undefined1 *)((long)register0x00000008 + -0xc0);
    func_0x000107c28154(unaff_x23 + 0x48);
    func_0x00010b2e1ad8();
    __ZNSt3__15mutex6unlockEv(unaff_x23 + 8);
    if (unaff_x25 == 0) {
      lVar1 = *(long *)(unaff_x22 + 0x18);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(unaff_x22 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar4;
      if (lVar1 != 0) {
        do {
          func_0x000107c359b8();
        } while (extraout_w10 != 0);
      }
      func_0x000107c359f4();
      iVar2 = (int)(undefined1 *)((long)register0x00000008 + -0xc0);
      (*extraout_x8_00)();
      func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0xc0));
    }
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -0xc0),
               (undefined1 *)((long)register0x00000008 + -0x100));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -0xc0));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0xc0));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0x100));
    func_0x000107c27c3c(param_1 + 0x32);
    func_0x000107c2c5ac(param_1 + 0x30);
    func_0x00010b2e14b0(param_1 + 0x2e);
    func_0x00010b2e1480(param_1 + 0x2a);
    func_0x00010b2e145c(param_1 + 0x28);
    FUN_10b2e111c(param_1 + 0x23);
    func_0x000107c2c58c(param_1 + 0x20);
    func_0x000107c2814c(unaff_x20);
    func_0x000107c27e70(param_1 + 0x19);
    func_0x000107c2c844(param_1 + 0x14);
    func_0x00010b2e140c(param_1 + 0xf);
    func_0x00010b2e13bc(param_1 + 10);
    unaff_x19 = param_1 + 5;
    func_0x00010b2e136c();
    func_0x000107c359f8(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (iVar2 == 0) {
      func_0x00010b2e1a10();
    }
    else {
      func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0xc0));
    }
    unaff_x30 = FUN_10b2e007c;
    param_1 = unaff_x19;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  }
  return param_1;
}



/* Entry: 10b2e0080; end: 10b2e0093;  */

void FUN_10b2e0080(void)

{
  FUN_10b2dfd7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e0094; end: 10b2e00fb;  */

void FUN_10b2e0094(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulong param_4)

{
  code *extraout_x9;
  undefined1 auStack_38 [24];
  
  if ((param_4 & 1) == 0) {
    param_3 = 0;
  }
  func_0x000107c359bc(*param_2,param_1,param_2,param_3);
  func_0x000107c35a00();
  (*extraout_x9)(auStack_38);
  func_0x000107c2975c(param_2 + 0x49,auStack_38);
  func_0x000107c28ae0(auStack_38);
  return;
}



/* Entry: 10b2e00fc; end: 10b2e03c3;  */

void FUN_10b2e00fc(long *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 in_ZR;
  undefined8 uVar5;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar6;
  long *plVar7;
  undefined1 auStack_628 [24];
  undefined4 auStack_610 [2];
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined4 uStack_5e8;
  char cStack_5e0;
  undefined1 auStack_5d8 [32];
  undefined1 uStack_5b8;
  undefined1 auStack_5b0 [104];
  undefined1 auStack_548 [176];
  undefined1 uStack_498;
  undefined1 auStack_490 [160];
  undefined1 uStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_3a8;
  undefined1 auStack_328 [200];
  undefined1 auStack_260 [528];
  
  func_0x000107c35a9c();
  lVar6 = *param_2;
  func_0x000107c35a08(*(undefined1 *)(lVar6 + 0x120));
  lVar2 = 0xc0;
  if ((bool)in_ZR) {
    lVar2 = extraout_x8;
  }
  func_0x000107c316c4();
  func_0x000107c35a10(*unaff_x19);
  plVar7 = param_1;
  func_0x000107c316ec();
  auStack_490[0] = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0xffffffffffffffff;
  plStack_3e8 = param_1;
  plStack_3e0 = plVar7;
  func_0x000107c2c618(&uStack_3d0,auStack_490);
  func_0x000107c2c808(auStack_328,&plStack_3e8);
  auStack_548[0] = 0;
  uStack_498 = 0;
  func_0x000107c30170(auStack_5b0);
  auStack_5d8[0] = 0;
  uStack_5b8 = 0;
  func_0x000107c2c614(auStack_260,auStack_328,auStack_548,auStack_5b0,auStack_5d8);
  func_0x000107c27f14(auStack_5d8);
  func_0x000107c2c62c(auStack_5b0);
  func_0x000107c2c63c(auStack_548);
  func_0x000107c2c644(auStack_328);
  func_0x000107c2c648(&uStack_3d0);
  func_0x000107c2c648(auStack_490);
  func_0x000107c35a00(*unaff_x19);
  (*extraout_x9)(&plStack_3e8);
  puVar1 = (undefined8 *)(lVar6 + lVar2);
  func_0x000107c359f4(plStack_3e8);
  (*extraout_x8_00)();
  func_0x00010b2e1b78();
  plVar7 = *(long **)(unaff_x20 + 400);
  __ZNSt3__19to_stringEx(&plStack_3e8,*puVar1);
  uVar5 = *unaff_x19;
  func_0x000107c30138(uVar5);
  (**(code **)(*plVar7 + 0x10))(plVar7,&plStack_3e8,uVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_3e8);
  FUN_10b2d8d08(&plStack_3e8,param_3);
  func_0x000107c2c7d4();
  func_0x000107c2c6a0(&plStack_3e8);
  func_0x000107c35a00(*unaff_x19);
  (*extraout_x9_00)(&plStack_3e8);
  func_0x000107c35a04(*(undefined8 *)(*plStack_3e8 + 0x38),plStack_3e8,*puVar1,auStack_260,param_3);
  func_0x00010b2e1b78();
  uVar3 = *(undefined4 *)(puVar1 + 7);
  FUN_10b2d8d08(auStack_610,param_3);
  uVar5 = uStack_5f8;
  plStack_3e8 = (long *)0x0;
  plStack_3e0 = (long *)CONCAT44(plStack_3e0._4_4_,uVar3);
  uVar4 = uStack_3d8 >> 0x20;
  uStack_3d8 = uStack_3d8 & 0xffffffffffffff00;
  uStack_3a8 = cStack_5e0 == '\x01';
  if ((bool)uStack_3a8) {
    uStack_3d8 = CONCAT44((int)uVar4,auStack_610[0]);
    uStack_3c8 = uStack_600;
    uStack_3d0 = uStack_608;
    uStack_608 = 0;
    uStack_600 = 0;
    uStack_5f8 = 0;
    uStack_3c0 = uVar5;
    uStack_3b8 = uStack_5f0;
    uStack_3b0 = uStack_5e8;
  }
  func_0x000107c2c6a0(auStack_610);
  plVar7 = *(long **)(unaff_x20 + 400);
  __ZNSt3__19to_stringEx(auStack_628,*puVar1);
  uVar5 = *unaff_x19;
  func_0x000107c30138(uVar5);
  func_0x000107c35a04(*(undefined8 *)(*plVar7 + 0x30),plVar7,auStack_628,uVar5,&plStack_3e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_628);
  func_0x000107c2c6a0(&uStack_3d8);
  func_0x000107c2c67c(auStack_260);
  return;
}



/* Entry: 10b2e03c4; end: 10b2e041b;  */

void FUN_10b2e03c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010b2e1a40();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    if ((*(char *)(param_1 + 0x139) == '\x01') && (func_0x00010b2e1b6c(), lVar1 != 0)) {
      *(undefined1 *)(*(long *)(lVar1 + 0x18) + 0x58) = 0;
    }
    func_0x00010b479734(uVar2);
  }
  return;
}



/* Entry: 10b2e041c; end: 10b2e044b;  */

bool FUN_10b2e041c(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  param_1 = param_1 + 0x50;
  uStack_18 = param_2;
  func_0x00010b2e14f4(param_1,&uStack_18);
  return param_1 != 0;
}



/* Entry: 10b2e044c; end: 10b2e04e7;  */

void FUN_10b2e044c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((((*(long *)(param_1 + 0x180) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x180) + 0x1d8), lVar3 != 0)) &&
      (iVar1 = *(int *)(lVar3 + 4), iVar1 != 0)) &&
     (lVar3 = param_1, func_0x00010b2e1a40(), lVar3 != 0)) {
    func_0x00010b2e1b6c();
    if ((lVar3 != 0) &&
       ((lVar2 = *(long *)(lVar3 + 0x18), iVar1 != 1 ||
        (*(int *)(lVar2 + 0x180) != *(int *)(param_3 + 1))))) {
      uVar4 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(lVar2 + 0x180) = param_3[1];
      *(undefined8 *)(lVar2 + 0x178) = uVar4;
      *(undefined8 *)(lVar2 + 400) = uVar6;
      *(undefined8 *)(lVar2 + 0x188) = uVar5;
      func_0x000107c30134();
      FUN_10b48c708(*(undefined8 *)(param_1 + 0x180),param_2,
                    *(undefined4 *)(*(long *)(lVar3 + 0x18) + 0x180));
    }
  }
  return;
}



/* Entry: 10b2e04e8; end: 10b2e05b3;  */

void FUN_10b2e04e8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined4 *puVar2;
  long extraout_x8;
  long extraout_x9;
  undefined1 auStack_60 [28];
  undefined1 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c359bc(*param_2);
  lVar1 = 0xc0;
  if ((bool)in_ZR) {
    lVar1 = extraout_x9;
  }
  uStack_38 = *(undefined8 *)(extraout_x8 + lVar1);
  puVar2 = (undefined4 *)(param_1 + 0x50);
  func_0x000107c2c860(puVar2,&uStack_38);
  if (puVar2 != (undefined4 *)0x0) {
    func_0x00010b2e1af8();
    ___error();
    func_0x00010b2e1ba8(*puVar2);
    uStack_44 = 1;
    uStack_40 = 0;
    func_0x000107c359e4();
    func_0x000107c35a98();
    FUN_10b2e05b4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  }
  return;
}



/* Entry: 10b2e05b4; end: 10b2e0613;  */

void FUN_10b2e05b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  uStack_28 = param_2;
  func_0x000107c2c864(lVar1,&uStack_28);
  if (*(char *)(param_1 + 0x139) == '\x01') {
    *(undefined1 *)(*(long *)(lVar1 + 0x18) + 0x58) = 0;
  }
  FUN_10b2e07c0(param_1 + 0x78,&uStack_28,param_3);
  func_0x00010b479734(uStack_28);
  return;
}



/* Entry: 10b2e0614; end: 10b2e073b;  */

void FUN_10b2e0614(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long unaff_x21;
  long unaff_x22;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_90;
  lVar1 = param_1;
  func_0x000107c35a4c();
  uVar2 = *(undefined8 *)(lVar1 + 200);
  uStack_90 = param_2;
  lStack_88 = lVar1;
  uStack_48 = extraout_x8;
  func_0x000107c35a8c();
  (*extraout_x8_00)();
  if ((int)uVar2 == 0) {
    unaff_x20 = *(long *)(param_1 + 0xd8);
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    func_0x000107c28150();
    unaff_x21 = *(long *)(unaff_x20 + 0x10);
    __ZNSt3__15mutex4lockEv(unaff_x21 + 8);
    unaff_x22 = *(long *)(unaff_x21 + 0x70);
    uStack_80 = 0x10b2e1590;
    ppuStack_78 = &PTR_DAT_110cd3430;
    uStack_50 = uVar2;
    func_0x000107c28154(unaff_x21 + 0x48,&uStack_80);
    func_0x00010b2e1b14();
    puVar3 = (undefined8 *)(unaff_x21 + 8);
    __ZNSt3__15mutex6unlockEv();
    if (unaff_x22 == 0) {
      ppuStack_78 = *(undefined ***)(unaff_x20 + 0x18);
      uStack_80 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(long *)(unaff_x20 + 0x18) != 0) {
        do {
          func_0x000107c359b8();
        } while (extraout_w10 != 0);
      }
      func_0x000107c359f4();
      (*extraout_x8_01)();
      puVar3 = &uStack_80;
      func_0x000107c27e74();
    }
  }
  else {
    FUN_10b2e073c();
  }
  func_0x000107c359f8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar4 = &uStack_80;
    func_0x000107c27e74();
    func_0x00010b2e1a10();
    pcStack_98 = FUN_10b2e073c;
    lVar6 = puVar4[1];
    lVar1 = lVar6 + 0x50;
    lStack_c0 = unaff_x22;
    lStack_b8 = unaff_x21;
    lStack_b0 = unaff_x20;
    puStack_a8 = puVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000107c2c860(lVar1,puVar4);
    if (lVar1 != 0) {
      uStack_c8 = *(undefined8 *)(lVar1 + 0x18);
      lVar6 = lVar6 + 0x28;
      func_0x000107c2c864(lVar6,&uStack_c8);
      plVar5 = (long *)(lVar6 + 0x28);
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        *(undefined8 *)(lVar6 + 0x28) = 0;
        func_0x000107c2c80c(plVar5,0);
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((*(byte *)(lVar6 + 0x288) & 1) == 0) {
          *(undefined1 *)(lVar6 + 0x288) = 1;
        }
        *(long **)(lVar6 + 0x280) = plVar5;
        func_0x000107c2feb4(*(undefined8 *)(lVar1 + 0x18),lVar7);
      }
    }
    return;
  }
  return;
}



/* Entry: 10b2e073c; end: 10b2e07bf;  */

void FUN_10b2e073c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar3 + 0x50;
  func_0x000107c2c860(lVar1,param_1);
  if (lVar1 != 0) {
    uStack_38 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = lVar3 + 0x28;
    func_0x000107c2c864(lVar3,&uStack_38);
    plVar2 = (long *)(lVar3 + 0x28);
    lVar4 = *plVar2;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar3 + 0x28) = 0;
      func_0x000107c2c80c(plVar2,0);
      __ZNSt3__16chrono12steady_clock3nowEv();
      if ((*(byte *)(lVar3 + 0x288) & 1) == 0) {
        *(undefined1 *)(lVar3 + 0x288) = 1;
      }
      *(long **)(lVar3 + 0x280) = plVar2;
      func_0x000107c2feb4(*(undefined8 *)(lVar1 + 0x18),lVar4);
    }
  }
  return;
}



/* Entry: 10b2e07c0; end: 10b2e07ff;  */

void FUN_10b2e07c0(void)

{
  FUN_10b2e15b4();
  return;
}



/* Entry: 10b2e0800; end: 10b2e085b;  */

void FUN_10b2e0800(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x00010b4796c8();
  if (plVar1 != (long *)0x0) {
    func_0x000107c27d78();
  }
  __ZdlPv();
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100786b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10b2e085c; end: 10b2e0927;  */

void FUN_10b2e085c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  
  func_0x000107c31338();
  func_0x00010b2e1b44();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar1 = 3;
  func_0x00010bd3f128(&uStack_b0);
  func_0x000107c316c4();
  auStack_80[0] = 1;
  uStack_68 = uStack_90;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_50 = uStack_a8;
  uStack_58 = uStack_b0;
  uStack_78 = param_2 & 0xffffffff;
  func_0x00010b2e1ba8();
  uStack_40 = uVar1;
  func_0x00010bcc46f8();
  func_0x00010786e114(auStack_80);
  func_0x000107c359e4();
  func_0x00010b2e1b98();
  return;
}



/* Entry: 10b2e0928; end: 10b2e0d83;  */

void FUN_10b2e0928(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long *plVar7;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  int extraout_w10;
  ulong extraout_x10;
  long *plVar8;
  long *extraout_x11;
  long *extraout_x12;
  ulong extraout_x13;
  long extraout_x14;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auStack_340 [24];
  uint auStack_328 [2];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  char cStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined1 uStack_2b0;
  long *plStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [48];
  undefined1 auStack_268 [248];
  uint uStack_170;
  char cStack_f0;
  long *plStack_58;
  
  lVar4 = param_1;
  plStack_58 = param_2;
  func_0x000107c35a6c();
  if (lVar4 == 0) {
    plStack_2f0 = plStack_58;
    plStack_2e8 = (long *)0x0;
    func_0x000107c2793c(&UNK_10f742c83);
    func_0x00010b2e1b2c(auStack_268);
    FUN_10b2e085c(auStack_268,2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
  }
  else {
    func_0x000107c2c670(auStack_268,lVar4 + 0x40);
    func_0x00010b2e1ac8();
    plVar13 = *(long **)(param_1 + 0x80);
    if ((plVar13 != (long *)0x0) && (plVar11 = (long *)(param_1 + 0x90), *plVar11 != 0)) {
      plVar5 = plVar11;
      func_0x000107c2c85c(plVar11,plStack_58);
      func_0x000107c35a5c();
      if ((bool)in_ZR) {
        plVar7 = (long *)((ulong)plVar5 & extraout_x8);
        in_ZR = true;
      }
      else {
        in_ZR = plVar5 == plVar13;
        plVar7 = plVar5;
        if (plVar13 <= plVar5) {
          uVar9 = 0;
          if (plVar13 != (long *)0x0) {
            uVar9 = (ulong)plVar5 / (ulong)plVar13;
          }
          plVar7 = (long *)((long)plVar5 - uVar9 * (long)plVar13);
        }
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x78) + (long)plVar7 * 8);
      if (plVar12 != (long *)0x0) {
LAB_10b2e0a00:
        while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
          plVar8 = (long *)plVar12[1];
          if (plVar8 != plVar5) goto LAB_10b2e0a24;
          in_ZR = false;
          if ((long *)plVar12[2] == plStack_58) {
            func_0x00010b2d8dcc(auStack_298,plVar12 + 3);
            do {
              func_0x000107c35a94();
            } while (extraout_x12 != plVar12);
            plStack_2e8 = (long *)(param_1 + 0x88);
            in_ZR = true;
            lVar6 = extraout_x8_03;
            if (extraout_x11 == plStack_2e8) {
LAB_10b2e0c64:
              if (extraout_x8_03 == 0) {
LAB_10b2e0c98:
                *(undefined8 *)(extraout_x14 + extraout_x9_01 * 8) = 0;
                lVar6 = *plVar12;
                goto LAB_10b2e0ca0;
              }
              uVar9 = *(ulong *)(extraout_x8_03 + 8);
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar10 = uVar9 & extraout_x13;
              }
              else {
                uVar10 = uVar9;
                if (extraout_x10 <= uVar9) {
                  uVar10 = 0;
                  if (extraout_x10 != 0) {
                    uVar10 = uVar9 / extraout_x10;
                  }
                  uVar10 = uVar9 - uVar10 * extraout_x10;
                }
              }
              in_ZR = uVar10 == extraout_x9_01;
              if (!(bool)in_ZR) goto LAB_10b2e0c98;
LAB_10b2e0ca8:
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar9 = uVar9 & extraout_x13;
              }
              else if (extraout_x10 <= uVar9) {
                uVar10 = 0;
                if (extraout_x10 != 0) {
                  uVar10 = uVar9 / extraout_x10;
                }
                uVar9 = uVar9 - uVar10 * extraout_x10;
              }
              in_ZR = uVar9 == extraout_x9_01;
              if (!(bool)in_ZR) {
                *(long **)(extraout_x14 + uVar9 * 8) = extraout_x11;
                lVar6 = *plVar12;
              }
            }
            else {
              uVar9 = extraout_x11[1];
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar9 = uVar9 & extraout_x13;
              }
              else if (extraout_x10 <= uVar9) {
                uVar10 = 0;
                if (extraout_x10 != 0) {
                  uVar10 = uVar9 / extraout_x10;
                }
                uVar9 = uVar9 - uVar10 * extraout_x10;
              }
              in_ZR = uVar9 == extraout_x9_01;
              if (!(bool)in_ZR) goto LAB_10b2e0c64;
LAB_10b2e0ca0:
              if (lVar6 != 0) {
                uVar9 = *(ulong *)(lVar6 + 8);
                goto LAB_10b2e0ca8;
              }
            }
            *extraout_x11 = lVar6;
            *plVar12 = 0;
            *plVar11 = *plVar11 + -1;
            uStack_2e0 = 1;
            uStack_2dc = 0;
            plStack_2f0 = plVar12;
            FUN_10b2e1920(&plStack_2f0);
            goto LAB_10b2e0a58;
          }
        }
      }
    }
LAB_10b2e0a4c:
    FUN_10b2e4684(auStack_298,param_4);
LAB_10b2e0a58:
    FUN_10b2e1250(&plStack_2f0,auStack_298);
    func_0x000107c35a80();
    func_0x000107c2c6a0(&plStack_2f0);
    plVar13 = *(long **)(lVar4 + 0x18);
    lStack_2a0 = *(long *)(lVar4 + 0x20);
    plStack_2a8 = plVar13;
    if (lStack_2a0 != 0) {
      do {
        func_0x000107c359b8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c35a08((char)plVar13[0x24]);
    lVar4 = 0xc0;
    if ((bool)in_ZR) {
      lVar4 = extraout_x8_00;
    }
    func_0x000107c35a84();
    (**(code **)(*plVar13 + 0x28))(&plStack_2f0,plVar13);
    func_0x000107c359bc(plStack_2a8);
    lVar6 = 0xc0;
    if ((bool)in_ZR) {
      lVar6 = extraout_x9;
    }
    func_0x000107c35a04(*(undefined8 *)(*plStack_2f0 + 0x38),plStack_2f0,
                        *(undefined8 *)(extraout_x8_01 + lVar6),auStack_268,auStack_298);
    func_0x000107c2c53c(&plStack_2f0);
    uVar1 = *(undefined4 *)((long)plVar13 + lVar4 + 0x38);
    FUN_10b2e1250(auStack_328,auStack_298);
    uVar2 = uStack_310;
    plStack_2f0 = (long *)((ulong)uStack_170 | 0x100000000);
    if (cStack_f0 == '\0') {
      plStack_2f0 = (long *)0x0;
    }
    plStack_2e8 = (long *)CONCAT44(plStack_2e8._4_4_,uVar1);
    uStack_2e0 = uStack_2e0 & 0xffffff00;
    uVar3 = cStack_2f8 == '\x01';
    if ((bool)uVar3) {
      uStack_2e0 = auStack_328[0];
      uStack_2d0 = uStack_318;
      uStack_2d8 = uStack_320;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_2c8 = uVar2;
      uStack_2c0 = uStack_308;
      uStack_2b8 = uStack_300;
    }
    uStack_2b0 = uVar3;
    func_0x000107c2c6a0(auStack_328);
    plVar13 = *(long **)(param_1 + 400);
    func_0x000107c359bc(plStack_2a8);
    lVar4 = 0xc0;
    if ((bool)uVar3) {
      lVar4 = extraout_x9_00;
    }
    __ZNSt3__19to_stringEx(auStack_340,*(undefined8 *)(extraout_x8_02 + lVar4));
    plVar11 = plStack_2a8;
    func_0x000107c30138(plStack_2a8);
    func_0x000107c35a04(*(undefined8 *)(*plVar13 + 0x30),plVar13,auStack_340,plVar11,&plStack_2f0);
    func_0x000107c359e4();
    func_0x000107c35a28();
    func_0x000107c2c578(&plStack_2a8);
    func_0x00010b2e1b8c();
    func_0x000107c2c67c(auStack_268);
  }
  return;
LAB_10b2e0a24:
  if (((ulong)plVar13 & extraout_x8) == 0) {
    plVar8 = (long *)((ulong)plVar8 & extraout_x8);
  }
  else if (plVar13 <= plVar8) {
    uVar9 = 0;
    if (plVar13 != (long *)0x0) {
      uVar9 = (ulong)plVar8 / (ulong)plVar13;
    }
    plVar8 = (long *)((long)plVar8 - uVar9 * (long)plVar13);
  }
  in_ZR = plVar8 == plVar7;
  if (!(bool)in_ZR) goto LAB_10b2e0a4c;
  goto LAB_10b2e0a00;
}



/* Entry: 10b2e0d84; end: 10b2e1103;  */

void FUN_10b2e0d84(long **param_1,long *param_2,ulong param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  long **pplVar5;
  long **pplVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  long lStack_b8;
  long *plStack_b0;
  long **pplStack_a8;
  undefined1 *puStack_a0;
  char *pcStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long *plStack_80;
  char *pcStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  pplVar5 = param_1;
  (*(code *)(*param_1)[1])();
  if ((int)pplVar5 != 0) {
    plVar13 = param_1[0xb];
    if (plVar13 != (long *)0x0) {
      func_0x000107c35a5c();
      if ((bool)in_ZR) {
        unaff_x25 = (long *)(extraout_x8 & (ulong)param_2);
      }
      else {
        in_NG = (long)param_2 - (long)plVar13 < 0;
        unaff_x25 = param_2;
        if (plVar13 <= param_2) {
          uVar2 = 0;
          if (plVar13 != (long *)0x0) {
            uVar2 = (ulong)param_2 / (ulong)plVar13;
          }
          unaff_x25 = (long *)((long)param_2 - uVar2 * (long)plVar13);
        }
      }
      plVar12 = (long *)param_1[10][(long)unaff_x25];
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10b2e0e4c;
            plVar10 = (long *)plVar12[1];
            if (plVar10 != param_2) break;
            in_NG = plVar12[2] - (long)param_2 < 0;
            if ((long *)plVar12[2] == param_2) goto LAB_10b2e0f4c;
          }
          if (((ulong)plVar13 & extraout_x8) == 0) {
            plVar10 = (long *)((ulong)plVar10 & extraout_x8);
          }
          else if (plVar13 <= plVar10) {
            uVar2 = 0;
            if (plVar13 != (long *)0x0) {
              uVar2 = (ulong)plVar10 / (ulong)plVar13;
            }
            plVar10 = (long *)((long)plVar10 - uVar2 * (long)plVar13);
          }
          in_NG = (long)plVar10 - (long)unaff_x25 < 0;
        } while (plVar10 == unaff_x25);
      }
    }
LAB_10b2e0e4c:
    pplVar5 = param_1 + 0xc;
    plVar12 = (long *)0x28;
    __Znwm();
    puStack_a0 = (undefined1 *)0x1;
    *plVar12 = 0;
    plVar12[1] = (long)param_2;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[2] = (long)param_2;
    plStack_b0 = plVar12;
    pplStack_a8 = pplVar5;
    func_0x000107c35a20(param_1[0xd]);
    if ((plVar13 == (long *)0x0) || (func_0x000107c35a1c(), (bool)in_NG)) {
      func_0x000107c35a58();
      uVar4 = plVar13 == (long *)0x3;
      func_0x000107c359c4();
      func_0x000107c2c854(param_1 + 10);
      plVar13 = param_1[0xb];
      func_0x000107c35a5c();
      if ((bool)uVar4) {
        unaff_x25 = (long *)(extraout_x8_00 & (ulong)param_2);
      }
      else {
        unaff_x25 = param_2;
        if (plVar13 <= param_2) {
          uVar2 = 0;
          if (plVar13 != (long *)0x0) {
            uVar2 = (ulong)param_2 / (ulong)plVar13;
          }
          unaff_x25 = (long *)((long)param_2 - uVar2 * (long)plVar13);
        }
      }
    }
    plVar10 = param_1[10];
    plVar11 = (long *)plVar10[(long)unaff_x25];
    if (plVar11 == (long *)0x0) {
      *plVar12 = (long)*pplVar5;
      *pplVar5 = plVar12;
      plVar10[(long)unaff_x25] = (long)pplVar5;
      if (*plVar12 != 0) {
        plVar11 = *(long **)(*plVar12 + 8);
        if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
          plVar11 = (long *)((ulong)plVar11 & (long)plVar13 - 1U);
        }
        else if (plVar13 <= plVar11) {
          uVar2 = 0;
          if (plVar13 != (long *)0x0) {
            uVar2 = (ulong)plVar11 / (ulong)plVar13;
          }
          plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar13);
        }
        plVar10[(long)plVar11] = (long)plVar12;
      }
    }
    else {
      *plVar12 = *plVar11;
      *plVar11 = (long)plVar12;
    }
    plStack_b0 = (long *)0x0;
    param_1[0xd] = (long *)((long)param_1[0xd] + 1);
    pplVar5 = &plStack_b0;
    func_0x000107c2c858();
LAB_10b2e0f4c:
    lStack_b8 = plVar12[3];
    __ZNSt3__16chrono12steady_clock3nowEv();
    pplVar6 = param_1 + 5;
    func_0x000107c2c7c8(pplVar6,&lStack_b8);
    if ((long)pplVar5 - (long)pplVar6[0x48] < (long)(param_3 * 1000000)) {
      if (param_4 == 1) {
        func_0x000107c2c7d0(param_1[0x2a],pplVar6);
      }
      else if (param_4 == 0) {
        FUN_10b2e0094(param_1[0x2a],pplVar6,param_3,1);
      }
    }
    else {
      pcVar8 = "DEFAULT";
      if (param_4 != 0) {
        pcVar8 = "RTT";
      }
      func_0x000107c278b8(auStack_e8);
      plVar13 = *pplVar6;
      func_0x000107c30138();
      uVar1 = *(uint *)(*pplVar6 + 0x15);
      puVar7 = auStack_e8;
      func_0x000107c27e5c();
      pcVar9 = pcVar8;
      func_0x000107c27e5c();
      pplStack_a8 = (long **)0x0;
      uStack_88 = 0;
      uStack_68 = 0;
      plStack_b0 = param_2;
      puStack_a0 = puVar7;
      pcStack_98 = pcVar8;
      uStack_90 = param_3;
      plStack_80 = plVar13;
      pcStack_78 = pcVar9;
      uStack_70 = (ulong)uVar1;
      func_0x000107c2793c(&UNK_10f742d42);
      func_0x000107c3173c(auStack_d0);
      func_0x00010b2e1b98();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_100,auStack_d0);
      plStack_b0._0_4_ = 0x3eb;
      puStack_a0 = (undefined1 *)uStack_f8;
      pplStack_a8 = (long **)uStack_100;
      pcStack_98 = (char *)uStack_f0;
      func_0x00010b2e1ba8();
      uStack_90 = uStack_90 & 0xffffff0000000000;
      uStack_88 = uStack_88 & 0xffffffff00000000;
      func_0x000107c359e4();
      uVar3 = 0x3eb;
      if ((param_4 != 0) && (uVar3 = plStack_b0._0_4_, param_4 == 1)) {
        uVar3 = 0x44c;
      }
      plStack_b0._0_4_ = uVar3;
      func_0x000107c2c7e0(pplVar6);
      func_0x00010b2e1ba0();
      func_0x00010b2e1b64();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    }
  }
  return;
}



/* Entry: 10b2e1104; end: 10b2e111b;  */

void FUN_10b2e1104(long param_1,long *param_2,ulong param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long **pplVar7;
  char *pcVar8;
  char *pcVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  char *pcStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  char *pcStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  pplVar7 = (long **)(param_1 + -8);
  (*(code *)(*pplVar7)[1])();
  if ((int)pplVar7 != 0) {
    plVar13 = *(long **)(param_1 + 0x50);
    if (plVar13 != (long *)0x0) {
      func_0x000107c35a5c();
      if ((bool)in_ZR) {
        unaff_x25 = (long *)(extraout_x8 & (ulong)param_2);
      }
      else {
        in_NG = (long)param_2 - (long)plVar13 < 0;
        unaff_x25 = param_2;
        if (plVar13 <= param_2) {
          uVar2 = 0;
          if (plVar13 != (long *)0x0) {
            uVar2 = (ulong)param_2 / (ulong)plVar13;
          }
          unaff_x25 = (long *)((long)param_2 - uVar2 * (long)plVar13);
        }
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x48) + (long)unaff_x25 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10b2e0e4c;
            plVar10 = (long *)plVar12[1];
            if (plVar10 != param_2) break;
            in_NG = plVar12[2] - (long)param_2 < 0;
            if ((long *)plVar12[2] == param_2) goto LAB_10b2e0f4c;
          }
          if (((ulong)plVar13 & extraout_x8) == 0) {
            plVar10 = (long *)((ulong)plVar10 & extraout_x8);
          }
          else if (plVar13 <= plVar10) {
            uVar2 = 0;
            if (plVar13 != (long *)0x0) {
              uVar2 = (ulong)plVar10 / (ulong)plVar13;
            }
            plVar10 = (long *)((long)plVar10 - uVar2 * (long)plVar13);
          }
          in_NG = (long)plVar10 - (long)unaff_x25 < 0;
        } while (plVar10 == unaff_x25);
      }
    }
LAB_10b2e0e4c:
    plVar10 = (long *)(param_1 + 0x58);
    plVar12 = (long *)0x28;
    __Znwm();
    puStack_a0 = (undefined1 *)0x1;
    *plVar12 = 0;
    plVar12[1] = (long)param_2;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[2] = (long)param_2;
    plStack_b0 = plVar12;
    plStack_a8 = plVar10;
    func_0x000107c35a20(*(undefined8 *)(param_1 + 0x60));
    if ((plVar13 == (long *)0x0) || (func_0x000107c35a1c(), (bool)in_NG)) {
      func_0x000107c35a58();
      uVar4 = plVar13 == (long *)0x3;
      func_0x000107c359c4();
      func_0x000107c2c854(param_1 + 0x48);
      plVar13 = *(long **)(param_1 + 0x50);
      func_0x000107c35a5c();
      if ((bool)uVar4) {
        unaff_x25 = (long *)(extraout_x8_00 & (ulong)param_2);
      }
      else {
        unaff_x25 = param_2;
        if (plVar13 <= param_2) {
          uVar2 = 0;
          if (plVar13 != (long *)0x0) {
            uVar2 = (ulong)param_2 / (ulong)plVar13;
          }
          unaff_x25 = (long *)((long)param_2 - uVar2 * (long)plVar13);
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x48);
    plVar11 = *(long **)(lVar5 + (long)unaff_x25 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar12 = *plVar10;
      *plVar10 = (long)plVar12;
      *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar10;
      if (*plVar12 != 0) {
        plVar10 = *(long **)(*plVar12 + 8);
        if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
          plVar10 = (long *)((ulong)plVar10 & (long)plVar13 - 1U);
        }
        else if (plVar13 <= plVar10) {
          uVar2 = 0;
          if (plVar13 != (long *)0x0) {
            uVar2 = (ulong)plVar10 / (ulong)plVar13;
          }
          plVar10 = (long *)((long)plVar10 - uVar2 * (long)plVar13);
        }
        *(long **)(lVar5 + (long)plVar10 * 8) = plVar12;
      }
    }
    else {
      *plVar12 = *plVar11;
      *plVar11 = (long)plVar12;
    }
    plStack_b0 = (long *)0x0;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
    pplVar7 = &plStack_b0;
    func_0x000107c2c858();
LAB_10b2e0f4c:
    lStack_b8 = plVar12[3];
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar13 = (long *)(param_1 + 0x20);
    func_0x000107c2c7c8(plVar13,&lStack_b8);
    if ((long)pplVar7 - plVar13[0x48] < (long)(param_3 * 1000000)) {
      if (param_4 == 1) {
        func_0x000107c2c7d0(*(undefined8 *)(param_1 + 0x148),plVar13);
      }
      else if (param_4 == 0) {
        FUN_10b2e0094(*(undefined8 *)(param_1 + 0x148),plVar13,param_3,1);
      }
    }
    else {
      pcVar8 = "DEFAULT";
      if (param_4 != 0) {
        pcVar8 = "RTT";
      }
      func_0x000107c278b8(auStack_e8);
      lVar5 = *plVar13;
      func_0x000107c30138();
      uVar1 = *(uint *)(*plVar13 + 0xa8);
      puVar6 = auStack_e8;
      func_0x000107c27e5c();
      pcVar9 = pcVar8;
      func_0x000107c27e5c();
      plStack_a8 = (long *)0x0;
      uStack_88 = 0;
      uStack_68 = 0;
      plStack_b0 = param_2;
      puStack_a0 = puVar6;
      pcStack_98 = pcVar8;
      uStack_90 = param_3;
      lStack_80 = lVar5;
      pcStack_78 = pcVar9;
      uStack_70 = (ulong)uVar1;
      func_0x000107c2793c(&UNK_10f742d42);
      func_0x000107c3173c(auStack_d0);
      func_0x00010b2e1b98();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_100,auStack_d0);
      plStack_b0._0_4_ = 0x3eb;
      puStack_a0 = (undefined1 *)uStack_f8;
      plStack_a8 = (long *)uStack_100;
      pcStack_98 = (char *)uStack_f0;
      func_0x00010b2e1ba8();
      uStack_90 = uStack_90 & 0xffffff0000000000;
      uStack_88 = uStack_88 & 0xffffffff00000000;
      func_0x000107c359e4();
      uVar3 = 0x3eb;
      if ((param_4 != 0) && (uVar3 = plStack_b0._0_4_, param_4 == 1)) {
        uVar3 = 0x44c;
      }
      plStack_b0._0_4_ = uVar3;
      func_0x000107c2c7e0(plVar13);
      func_0x00010b2e1ba0();
      func_0x00010b2e1b64();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    }
  }
  return;
}



/* Entry: 10b2e111c; end: 10b2e1197;  */

long * FUN_10b2e111c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x000107c2c800();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10b2e1198; end: 10b2e11bf;  */

void FUN_10b2e1198(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c281f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e11c0; end: 10b2e11e3;  */

void FUN_10b2e11c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2e11e4; end: 10b2e124f;  */

void FUN_10b2e11e4(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c35a9c();
  func_0x00010b2e1218();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 10b2e1250; end: 10b2e1277;  */

void FUN_10b2e1250(long param_1)

{
  func_0x00010b2d8dcc();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10b2e1278; end: 10b2e12f7;  */

void FUN_10b2e1278(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107c35a9c();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30;
  _memcpy(lVar2);
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



/* Entry: 10b2e12f8; end: 10b2e1303;  */

bool FUN_10b2e12f8(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  func_0x00010b2e1b80();
  pcVar3 = param_2;
  func_0x000107c28354();
  pcVar4 = pcVar3;
  func_0x000107c28354();
  do {
    if (param_1 == pcVar3 || param_2 == pcVar4) {
      return param_2 == pcVar4;
    }
    cVar1 = *param_1;
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 == cVar2);
  return false;
}



/* Entry: 10b2e1304; end: 10b2e145b;  */

bool FUN_10b2e1304(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_2;
  func_0x000107c28354();
  pcVar4 = pcVar3;
  func_0x000107c28354();
  do {
    if (param_1 == pcVar3 || param_2 == pcVar4) {
      return param_2 == pcVar4;
    }
    cVar1 = *param_1;
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 == cVar2);
  return false;
}



/* Entry: 10b2e145c; end: 10b2e14d3;  */

void FUN_10b2e145c(long param_1)

{
  func_0x000107c35a30();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b2e14d4; end: 10b2e15b3;  */

void FUN_10b2e14d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvE9set_valueEv_1103468a8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b2e15b4; end: 10b2e15d3;  */

void FUN_10b2e15b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b2e15d4(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10b2e15d4; end: 10b2e17c7;  */

undefined1  [16]
FUN_10b2e15d4(undefined8 param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long *plVar4;
  long *extraout_x9;
  long *plVar5;
  ulong extraout_x10;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x26;
  undefined1 auVar9 [16];
  
  plVar4 = param_2 + 3;
  func_0x000107c2c85c(plVar4,*param_3);
  plVar8 = (long *)param_2[1];
  if (plVar8 != (long *)0x0) {
    func_0x000107c35a24();
    if ((bool)in_ZR) {
      unaff_x26 = (long *)(extraout_x8 & (ulong)plVar4);
      in_ZR = true;
    }
    else {
      in_NG = (long)plVar4 - (long)plVar8 < 0;
      in_ZR = plVar4 == plVar8;
      unaff_x26 = plVar4;
      if (plVar8 <= plVar4) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar4 - uVar1 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*param_2 + (long)unaff_x26 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10b2e169c;
          plVar5 = (long *)plVar6[1];
          if (plVar5 != plVar4) break;
          in_NG = plVar6[2] - *param_3 < 0;
          in_ZR = false;
          if (plVar6[2] == *param_3) {
            uVar3 = 0;
            goto LAB_10b2e17ac;
          }
        }
        if (((ulong)plVar8 & extraout_x8) == 0) {
          plVar5 = (long *)((ulong)plVar5 & extraout_x8);
        }
        else if (plVar8 <= plVar5) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar8;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar8);
        }
        in_NG = (long)plVar5 - (long)unaff_x26 < 0;
        in_ZR = plVar5 == unaff_x26;
      } while ((bool)in_ZR);
    }
  }
LAB_10b2e169c:
  lVar7 = *param_4;
  plVar5 = param_2 + 2;
  plVar6 = (long *)0x48;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = (long)plVar4;
  plVar6[2] = lVar7;
  func_0x00010b2d8dcc(plVar6 + 3,param_5);
  func_0x000107c35a20(param_2[3]);
  if ((plVar8 == (long *)0x0) ||
     (func_0x000107c35a1c(param_1,(int)param_2[4],(float)plVar8), (bool)in_NG)) {
    func_0x000107c359e0();
    uVar2 = plVar8 == (long *)0x3;
    func_0x000107c359c4();
    FUN_10b2e17c8(param_2);
    plVar8 = (long *)param_2[1];
    func_0x000107c35a24();
    if ((bool)uVar2) {
      in_ZR = 1;
      unaff_x26 = (long *)(extraout_x8_00 & (ulong)plVar4);
    }
    else {
      in_ZR = plVar4 == plVar8;
      unaff_x26 = plVar4;
      if (plVar8 <= plVar4) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar4 - uVar1 * (long)plVar8);
      }
    }
  }
  lVar7 = *param_2;
  plVar4 = *(long **)(lVar7 + (long)unaff_x26 * 8);
  if (plVar4 == (long *)0x0) {
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
    *(long **)(lVar7 + (long)unaff_x26 * 8) = plVar5;
    if (*plVar6 != 0) {
      func_0x00010b2e1b34();
      if ((bool)in_ZR) {
        plVar4 = (long *)((ulong)extraout_x9 & extraout_x10);
      }
      else {
        plVar4 = extraout_x9;
        if (plVar8 <= extraout_x9) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)extraout_x9 / (ulong)plVar8;
          }
          plVar4 = (long *)((long)extraout_x9 - uVar1 * (long)plVar8);
        }
      }
      *(long **)(extraout_x8_01 + (long)plVar4 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar4;
    *plVar4 = (long)plVar6;
  }
  param_2[3] = param_2[3] + 1;
  func_0x00010b2e1b24();
  uVar3 = 1;
LAB_10b2e17ac:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 10b2e17c8; end: 10b2e1907;  */

void FUN_10b2e17c8(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar6 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x00010b2e1a90();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x00010b2e19d8();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar6) {
      param_2 = plVar6;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10b2e1908(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_10b2e1908(param_1,lVar3);
    func_0x000107c35a48();
    plVar6 = extraout_x9;
    while (param_2 != plVar6) {
      func_0x000107c35a90();
      plVar6 = extraout_x9_00;
    }
    if (param_1[2] != 0) {
      func_0x00010b2e1a2c();
      func_0x00010b2e1a18();
      lVar3 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar5 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar6, plVar6 = (long *)*plVar8, plVar6 != (long *)0x0) {
        plVar7 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar6;
            func_0x00010b2e19f8();
            lVar3 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar5 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar6;
  *plVar6 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e1908; end: 10b2e191f;  */

void FUN_10b2e1908(long *param_1,long param_2)

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



/* Entry: 10b2e1920; end: 10b2e1957;  */

void FUN_10b2e1920(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c35a50();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x20 + 0x20);
    }
    func_0x000107c359e8();
  }
  return;
}



/* Entry: 10b2e1958; end: 10b2e19b3;  */

void FUN_10b2e1958(long param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (*(char *)(puVar1[1] + 0x58) == '\x01') {
    uStack_28 = puVar1[6];
    puVar1[6] = 0;
    func_0x000107c2c7f0(*puVar1,puVar1[4],puVar1[3],puVar1[5],&uStack_28,puVar1[7]);
    func_0x000107c35a38();
  }
  return;
}



/* Entry: 10b2e19b4; end: 10b2e19d3;  */

void FUN_10b2e19b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b2e0830();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e19d4; end: 10b2e1bb3;  */

void FUN_10b2e19d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2e1bb4; end: 10b2e1bd7;  */

void FUN_10b2e1bb4(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c2ad70();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10b2e1bd8; end: 10b2e1c33;  */

void FUN_10b2e1bd8(void)

{
  return;
}



/* Entry: 10b2e1c34; end: 10b2e1c5b;  */

long FUN_10b2e1c34(long param_1)

{
  func_0x00010b4796f0(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10b2e1c5c; end: 10b2e1cf3;  */

long * FUN_10b2e1c5c(long *param_1,undefined8 param_2)

{
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2fea4();
  param_1 = (long *)*param_1;
  uStack_88 = 0x10b2e1d1c;
  ppuStack_80 = &PTR_FUN_110cd3478;
  uStack_78 = param_2;
  (**(code **)(*param_1 + 0x10))(param_1,&uStack_88);
  func_0x00010b2e1d5c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b2e1d5c();
  __Unwind_Resume();
  func_0x00010b4796f0(param_1[1]);
  return param_1;
}



/* Entry: 10b2e1cf4; end: 10b2e1d43;  */

long FUN_10b2e1cf4(long param_1)

{
  func_0x00010b4796f0(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b2e1d44; end: 10b2e1d6f;  */

void FUN_10b2e1d44(void)

{
  return;
}



/* Entry: 10b2e1d70; end: 10b2e1d83;  */

void FUN_10b2e1d70(void)

{
  func_0x00010b2e1d90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e1d84; end: 10b2e1da7;  */

void FUN_10b2e1d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 10b2e1da8; end: 10b2e1deb;  */

void FUN_10b2e1da8(undefined1 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  uStack_11 = param_1;
  func_0x000107c27d18(&uStack_12,&uStack_11,1,puVar2,uVar1);
  return;
}



/* Entry: 10b2e1dec; end: 10b2e1e17;  */

void FUN_10b2e1dec(long param_1)

{
  func_0x000107c35ac4();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10b2e1e18; end: 10b2e1e43;  */

void FUN_10b2e1e18(long *param_1)

{
  func_0x000107c2feb0();
                    /* WARNING: Could not recover jumptable at 0x00010b2e1e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



/* Entry: 10b2e1e44; end: 10b2e2053;  */

undefined8 *
FUN_10b2e1e44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  code *extraout_x8;
  undefined8 *puVar4;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [96];
  undefined8 uStack_b0;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x000107c2c888(param_1,&uStack_50,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c2c804(&uStack_50);
  *param_1 = &PTR_FUN_110cd3548;
  puVar4 = param_1 + 0x10;
  *(undefined1 *)puVar4 = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[0x16] = param_3;
  FUN_10b2e4608(auStack_68,param_2);
  puVar1 = (undefined4 *)param_1[0x16];
  func_0x00010b2e2700(puVar1,auStack_68);
  (*extraout_x8)();
  *(int *)(param_1 + 0x14) = (int)puVar1;
  if ((int)puVar1 == -1) {
    ___error();
    __ZNSt3__19to_stringEi(auStack_80,*puVar1);
    func_0x000107c27f54(auStack_110,&UNK_10f74372f,auStack_80);
    func_0x000107c27b94(puVar4,auStack_110);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
    puVar3 = auStack_80;
  }
  else {
    plVar2 = (long *)param_1[0x16];
    (**(code **)(*plVar2 + 0x38))(plVar2,puVar1,auStack_110);
    if ((int)plVar2 != -1) {
      param_1[0x15] = uStack_b0;
      goto LAB_10b2e1fac;
    }
    ___error();
    __ZNSt3__19to_stringEi(auStack_128,(int)*plVar2);
    func_0x000107c27f54(auStack_80,&UNK_10f743757,auStack_128);
    func_0x000107c27b94(puVar4,auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    puVar3 = auStack_128;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
LAB_10b2e1fac:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return param_1;
}



/* Entry: 10b2e2054; end: 10b2e208f;  */

long FUN_10b2e2054(undefined8 *param_1)

{
  long unaff_x19;
  
  *param_1 = &PTR_FUN_110cd3548;
  FUN_10b2e2090();
  func_0x000107c279a4(param_1 + 0x10);
  func_0x000100683178();
  func_0x00010089b3fc(param_1[0xd]);
  func_0x00010067c884(unaff_x19 + 0x70);
  func_0x000100683368(unaff_x19 + 0x50);
  func_0x00010089b864(unaff_x19 + 0x18);
  func_0x000100554470(unaff_x19 + 8);
  return unaff_x19;
}



/* Entry: 10b2e2090; end: 10b2e20cf;  */

void FUN_10b2e2090(long param_1)

{
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    func_0x000107c2c75c();
  }
  if (*(int *)(param_1 + 0xa0) != -1) {
    _close();
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  }
  return;
}



/* Entry: 10b2e20d0; end: 10b2e20d3;  */

long FUN_10b2e20d0(undefined8 *param_1)

{
  long unaff_x19;
  
  *param_1 = &PTR_FUN_110cd3548;
  FUN_10b2e2090();
  func_0x000107c279a4(param_1 + 0x10);
  func_0x000100683178();
  func_0x00010089b3fc(param_1[0xd]);
  func_0x00010067c884(unaff_x19 + 0x70);
  func_0x000100683368(unaff_x19 + 0x50);
  func_0x00010089b864(unaff_x19 + 0x18);
  func_0x000100554470(unaff_x19 + 8);
  return unaff_x19;
}



/* Entry: 10b2e20d4; end: 10b2e20e7;  */

void FUN_10b2e20d4(void)

{
  FUN_10b2e2054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e20e8; end: 10b2e20ff;  */

undefined8 FUN_10b2e20e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b2e2100; end: 10b2e21cf;  */

void FUN_10b2e2100(code ***param_1,code **param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  code ***pppcVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  code **ppcStack_138;
  code ***pppcStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  code **ppcStack_118;
  code ***pppcStack_110;
  undefined8 uStack_c8;
  code **ppcStack_a0;
  undefined8 uStack_98;
  code ***pppcStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  code **ppcStack_78;
  undefined8 uStack_70;
  code ***pppcStack_68;
  undefined8 uStack_28;
  
  pppcVar2 = &ppcStack_a0;
  func_0x00010b2e26b8();
  if ((bool)in_ZR) {
    pppcVar2 = param_1 + 0x10;
    if (*(char *)((long)param_1 + 0x97) < '\0') {
      pppcVar2 = (code ***)*pppcVar2;
    }
    func_0x00010b2e26d4(pppcVar2);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010088d084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2,extraout_x8);
      return;
    }
  }
  else {
    uVar1 = *(char *)(param_1 + 8) == '\x01';
    ppcStack_a0 = param_2;
    uStack_98 = param_3;
    pppcStack_90 = param_1;
    if ((bool)uVar1) {
      pppcVar2 = (code ***)param_1[7];
      pcStack_88 = FUN_10b2e24f4;
      ppuStack_80 = &PTR_DAT_110cd3598;
      ppcStack_78 = param_2;
      uStack_70 = param_3;
      pppcStack_68 = param_1;
      func_0x00010b2e2700();
      param_2 = &pcStack_88;
      (*extraout_x8_00)();
      func_0x00010b2e2698();
      param_1 = pppcVar2;
    }
    else {
      func_0x000107c2c75c();
      FUN_10b2e2298();
      param_1 = pppcVar2;
    }
    func_0x00010b2e267c(uStack_28);
    if ((bool)uVar1) {
      return;
    }
  }
  uVar1 = 0;
  ___stack_chk_fail();
  func_0x00010b2e26ec();
  func_0x00010b2e26b8();
  if ((bool)uVar1) {
    pppcVar2 = param_1 + 0x10;
    if (*(char *)((long)param_1 + 0x97) < '\0') {
      pppcVar2 = (code ***)*pppcVar2;
    }
    func_0x00010b2e26d4(pppcVar2);
    if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010088d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x28))(param_2,extraout_x8_01);
      return;
    }
  }
  else {
    ppcStack_138 = param_2;
    pppcStack_130 = param_1;
    uVar1 = *(char *)(param_1 + 8) == '\x01';
    if ((bool)uVar1) {
      pppcVar2 = (code ***)param_1[7];
      uStack_128 = 0x10b2e2640;
      ppuStack_120 = &PTR_DAT_110cd35c8;
      ppcStack_118 = param_2;
      pppcStack_110 = param_1;
      func_0x00010b2e2700();
      (*extraout_x8_02)();
      func_0x00010b2e2698();
      param_1 = pppcVar2;
    }
    else {
      func_0x000107c2c75c();
      param_1 = &ppcStack_138;
      FUN_10b2e2588();
    }
    func_0x00010b2e267c(uStack_c8);
    if ((bool)uVar1) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010b2e26ec();
  if (((ulong)param_1[8] & 1) == 0) {
    func_0x000107c2c75c();
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    _close();
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  return;
}



/* Entry: 10b2e21d0; end: 10b2e2293;  */

void FUN_10b2e21d0(long **param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long **pplVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *plStack_98;
  long **pplStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long **pplStack_70;
  undefined8 uStack_28;
  
  func_0x00010b2e26b8();
  if ((bool)in_ZR) {
    pplVar2 = param_1 + 0x10;
    if (*(char *)((long)param_1 + 0x97) < '\0') {
      pplVar2 = (long **)*pplVar2;
    }
    func_0x00010b2e26d4(pplVar2);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010088d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x28))(param_2,extraout_x8);
      return;
    }
  }
  else {
    uVar1 = *(char *)(param_1 + 8) == '\x01';
    plStack_98 = param_2;
    pplStack_90 = param_1;
    if ((bool)uVar1) {
      pplVar2 = (long **)param_1[7];
      uStack_88 = 0x10b2e2640;
      ppuStack_80 = &PTR_DAT_110cd35c8;
      plStack_78 = param_2;
      pplStack_70 = param_1;
      func_0x00010b2e2700();
      (*extraout_x8_00)();
      func_0x00010b2e2698();
      param_1 = pplVar2;
    }
    else {
      func_0x000107c2c75c();
      param_1 = &plStack_98;
      FUN_10b2e2588();
    }
    func_0x00010b2e267c(uStack_28);
    if ((bool)uVar1) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010b2e26ec();
  if (((ulong)param_1[8] & 1) == 0) {
    func_0x000107c2c75c();
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    _close();
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  return;
}



/* Entry: 10b2e2294; end: 10b2e2297;  */

void FUN_10b2e2294(long param_1)

{
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    func_0x000107c2c75c();
  }
  if (*(int *)(param_1 + 0xa0) != -1) {
    _close();
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  }
  return;
}



/* Entry: 10b2e2298; end: 10b2e24f3;  */

void FUN_10b2e2298(undefined8 *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  code *extraout_x8;
  long lVar10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar11;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = (long *)param_1[1];
    plVar2 = (long *)param_1[2];
    func_0x000107c2fe8c();
    uVar6 = param_1[1];
    func_0x000107c2fe90(uVar6);
    plVar7 = (long *)plVar2[0x16];
    (**(code **)(*plVar7 + 0x20))(plVar7,(int)plVar2[0x14],uVar6,unaff_x21);
    uVar5 = plVar7 == (long *)0xffffffffffffffff;
    if ((bool)uVar5) {
      ___error();
      __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0xb0),(int)*plVar7);
      func_0x000107c27f54((undefined1 *)((long)register0x00000008 + -0x80),&UNK_10f74377f,
                          (undefined1 *)((long)register0x00000008 + -0xb0));
      func_0x00010b2e2690();
      uVar5 = *(char *)((long)register0x00000008 + -0x69) == '\0';
      puVar1 = *(undefined1 **)((long)register0x00000008 + -0x80);
      if (-1 < *(char *)((long)register0x00000008 + -0x69)) {
        puVar1 = (undefined1 *)((long)register0x00000008 + -0x80);
      }
      func_0x00010b479724(*param_1,puVar1);
      unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      unaff_x19 = param_1;
    }
    else {
      func_0x000107c2feac(*param_1,plVar7,0);
      lVar10 = plVar2[9];
      *(long *)((long)register0x00000008 + -0xa8) = plVar2[10];
      *(long *)((long)register0x00000008 + -0xb0) = lVar10;
      lVar10 = plVar2[0xb];
      *(long *)((long)register0x00000008 + -0xa0) = lVar10;
      if (lVar10 != 0) {
        plVar7 = (long *)(lVar10 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      unaff_x19 = (undefined8 *)((ulong)((long)register0x00000008 + -0xb0) | 8);
      plVar7 = plVar2;
      (**(code **)(*plVar2 + 0x18))();
      *(long **)((long)register0x00000008 + -0x98) = plVar7;
      unaff_x21 = plVar2;
      (**(code **)(*plVar2 + 0x10))();
      *(long **)((long)register0x00000008 + -0x90) = unaff_x21;
      func_0x000107c28150();
      unaff_x22 = plVar2[5];
      __ZNSt3__15mutex4lockEv(unaff_x22 + 8);
      unaff_x23 = *(long *)(unaff_x22 + 0x70);
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0x10b2e2520;
      *(undefined ***)((long)register0x00000008 + -0x78) = &PTR_FUN_110cd35b0;
      puVar8 = (undefined8 *)0x28;
      __Znwm();
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x80);
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      puVar8[1] = *(undefined8 *)((long)register0x00000008 + -0xa8);
      *puVar8 = uVar6;
      puVar8[2] = *(undefined8 *)((long)register0x00000008 + -0xa0);
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x98);
      puVar8[4] = *(undefined8 *)((long)register0x00000008 + -0x90);
      puVar8[3] = uVar6;
      *(undefined8 **)((long)register0x00000008 + -0x70) = puVar8;
      *(long **)((long)register0x00000008 + -0x50) = unaff_x21;
      func_0x000107c28154(unaff_x22 + 0x48,(undefined1 *)((long)register0x00000008 + -0x80));
      func_0x00010b2e26a8();
      __ZNSt3__15mutex6unlockEv(unaff_x22 + 8);
      if (unaff_x23 == 0) {
        lVar10 = plVar2[3];
        lVar9 = plVar2[6];
        lVar11 = plVar2[5];
        *(long *)((long)register0x00000008 + -0x78) = plVar2[6];
        *(long *)((long)register0x00000008 + -0x80) = lVar11;
        if (lVar9 != 0) {
          plVar2 = (long *)(lVar9 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        func_0x00010b2e2700(lVar10);
        (*extraout_x8)();
        func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x80));
      }
      unaff_x20 = unaff_x19;
      func_0x000107c2c804();
    }
    func_0x00010b2e267c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)uVar5) break;
    ___stack_chk_fail();
    func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000107c2c804(unaff_x19);
    unaff_x30 = FUN_10b2e24f4;
    param_1 = unaff_x20;
    __Unwind_Resume();
    param_1 = param_1 + 2;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  return;
}



/* Entry: 10b2e24f4; end: 10b2e2537;  */

void FUN_10b2e24f4(undefined8 *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  code *extraout_x8;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar12;
  
  while( true ) {
    puVar11 = param_1 + 2;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = (long *)param_1[3];
    plVar2 = (long *)param_1[4];
    func_0x000107c2fe8c();
    uVar6 = param_1[3];
    func_0x000107c2fe90(uVar6);
    plVar7 = (long *)plVar2[0x16];
    (**(code **)(*plVar7 + 0x20))(plVar7,(int)plVar2[0x14],uVar6,unaff_x21);
    uVar5 = plVar7 == (long *)0xffffffffffffffff;
    if ((bool)uVar5) {
      ___error();
      __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0xb0),(int)*plVar7);
      func_0x000107c27f54((undefined1 *)((long)register0x00000008 + -0x80),&UNK_10f74377f,
                          (undefined1 *)((long)register0x00000008 + -0xb0));
      func_0x00010b2e2690();
      uVar5 = *(char *)((long)register0x00000008 + -0x69) == '\0';
      puVar1 = *(undefined1 **)((long)register0x00000008 + -0x80);
      if (-1 < *(char *)((long)register0x00000008 + -0x69)) {
        puVar1 = (undefined1 *)((long)register0x00000008 + -0x80);
      }
      func_0x00010b479724(*puVar11,puVar1);
      unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    else {
      func_0x000107c2feac(*puVar11,plVar7,0);
      lVar10 = plVar2[9];
      *(long *)((long)register0x00000008 + -0xa8) = plVar2[10];
      *(long *)((long)register0x00000008 + -0xb0) = lVar10;
      lVar10 = plVar2[0xb];
      *(long *)((long)register0x00000008 + -0xa0) = lVar10;
      if (lVar10 != 0) {
        plVar7 = (long *)(lVar10 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar11 = (undefined8 *)((ulong)((long)register0x00000008 + -0xb0) | 8);
      plVar7 = plVar2;
      (**(code **)(*plVar2 + 0x18))();
      *(long **)((long)register0x00000008 + -0x98) = plVar7;
      unaff_x21 = plVar2;
      (**(code **)(*plVar2 + 0x10))();
      *(long **)((long)register0x00000008 + -0x90) = unaff_x21;
      func_0x000107c28150();
      unaff_x22 = plVar2[5];
      __ZNSt3__15mutex4lockEv(unaff_x22 + 8);
      unaff_x23 = *(long *)(unaff_x22 + 0x70);
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0x10b2e2520;
      *(undefined ***)((long)register0x00000008 + -0x78) = &PTR_FUN_110cd35b0;
      puVar8 = (undefined8 *)0x28;
      __Znwm();
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x80);
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      puVar8[1] = *(undefined8 *)((long)register0x00000008 + -0xa8);
      *puVar8 = uVar6;
      puVar8[2] = *(undefined8 *)((long)register0x00000008 + -0xa0);
      *puVar11 = 0;
      puVar11[1] = 0;
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x98);
      puVar8[4] = *(undefined8 *)((long)register0x00000008 + -0x90);
      puVar8[3] = uVar6;
      *(undefined8 **)((long)register0x00000008 + -0x70) = puVar8;
      *(long **)((long)register0x00000008 + -0x50) = unaff_x21;
      func_0x000107c28154(unaff_x22 + 0x48,(undefined1 *)((long)register0x00000008 + -0x80));
      func_0x00010b2e26a8();
      __ZNSt3__15mutex6unlockEv(unaff_x22 + 8);
      if (unaff_x23 == 0) {
        lVar10 = plVar2[3];
        lVar9 = plVar2[6];
        lVar12 = plVar2[5];
        *(long *)((long)register0x00000008 + -0x78) = plVar2[6];
        *(long *)((long)register0x00000008 + -0x80) = lVar12;
        if (lVar9 != 0) {
          plVar2 = (long *)(lVar9 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        func_0x00010b2e2700(lVar10);
        (*extraout_x8)();
        func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x80));
      }
      unaff_x20 = puVar11;
      func_0x000107c2c804();
    }
    func_0x00010b2e267c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)uVar5) break;
    ___stack_chk_fail();
    func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x000107c2c804(puVar11);
    unaff_x30 = FUN_10b2e24f4;
    param_1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    unaff_x19 = puVar11;
  }
  return;
}



/* Entry: 10b2e2538; end: 10b2e256f;  */

void FUN_10b2e2538(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000107c2c804(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b2e2570; end: 10b2e2587;  */

void FUN_10b2e2570(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2e2588; end: 10b2e263f;  */

void FUN_10b2e2588(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_50 [24];
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  plVar1 = *(long **)(param_1[1] + 0xb0);
  (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined4 *)(param_1[1] + 0xa0),0,0);
  if (plVar1 != (long *)0xffffffffffffffff) {
                    /* WARNING: Could not recover jumptable at 0x000100787fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x20))();
    return;
  }
  ___error();
  __ZNSt3__19to_stringEi(auStack_50,(int)*plVar1);
  func_0x000107c27f54(appuStack_38,&UNK_10f7437a7,auStack_50);
  func_0x00010b2e2690();
  if (-1 < cStack_21) {
    appuStack_38[0] = appuStack_38;
  }
  func_0x00010b47972c(*param_1,appuStack_38[0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_38);
  return;
}



/* Entry: 10b2e2640; end: 10b2e2717;  */

void FUN_10b2e2640(long param_1)

{
  long *plVar1;
  undefined1 auStack_50 [24];
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0xb0);
  (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0xa0),0,0);
  if (plVar1 != (long *)0xffffffffffffffff) {
                    /* WARNING: Could not recover jumptable at 0x000100787fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
    return;
  }
  ___error();
  __ZNSt3__19to_stringEi(auStack_50,(int)*plVar1);
  func_0x000107c27f54(appuStack_38,&UNK_10f7437a7,auStack_50);
  func_0x00010b2e2690();
  if (-1 < cStack_21) {
    appuStack_38[0] = appuStack_38;
  }
  func_0x00010b47972c(*(undefined8 *)(param_1 + 0x10),appuStack_38[0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_38);
  return;
}



/* Entry: 10b2e2718; end: 10b2e272b;  */

void FUN_10b2e2718(void)

{
  func_0x000107c2c894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e272c; end: 10b2e2733;  */

void FUN_10b2e272c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b2e2734; end: 10b2e281b;  */

undefined8 *
FUN_10b2e2734(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  code *extraout_x8;
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x000107c2c888(param_1,&uStack_40,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c2c804(&uStack_40);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_110cd3650;
  uVar2 = *param_2;
  lVar1 = param_2[1];
  param_1[0x12] = uVar2;
  param_1[0x13] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b2e2ee0();
    } while (extraout_w10 != 0);
    uVar2 = param_1[0x12];
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  func_0x00010b2e2f20();
  (*extraout_x8)();
  param_1[0x15] = uVar2;
  return param_1;
}



/* Entry: 10b2e281c; end: 10b2e285f;  */

long FUN_10b2e281c(undefined8 *param_1)

{
  long unaff_x19;
  
  *param_1 = &PTR_FUN_110cd3650;
  FUN_10b2e2a2c();
  func_0x0001052bb074(param_1 + 0x12);
  func_0x00010b2e2b44(param_1 + 0x10);
  func_0x000100683178();
  func_0x00010089b3fc(param_1[0xd]);
  func_0x00010067c884(unaff_x19 + 0x70);
  func_0x000100683368(unaff_x19 + 0x50);
  func_0x00010089b864(unaff_x19 + 0x18);
  func_0x000100554470(unaff_x19 + 8);
  return unaff_x19;
}



/* Entry: 10b2e2860; end: 10b2e2863;  */

long FUN_10b2e2860(undefined8 *param_1)

{
  long unaff_x19;
  
  *param_1 = &PTR_FUN_110cd3650;
  FUN_10b2e2a2c();
  func_0x0001052bb074(param_1 + 0x12);
  func_0x00010b2e2b44(param_1 + 0x10);
  func_0x000100683178();
  func_0x00010089b3fc(param_1[0xd]);
  func_0x00010067c884(unaff_x19 + 0x70);
  func_0x000100683368(unaff_x19 + 0x50);
  func_0x00010089b864(unaff_x19 + 0x18);
  func_0x000100554470(unaff_x19 + 8);
  return unaff_x19;
}



/* Entry: 10b2e2864; end: 10b2e2877;  */

void FUN_10b2e2864(void)

{
  FUN_10b2e281c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e2878; end: 10b2e2887;  */

undefined8 FUN_10b2e2878(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b2e2888; end: 10b2e2993;  */

code *** FUN_10b2e2888(long param_1,code **param_2,code **param_3)

{
  long *plVar1;
  code **ppcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  code ***pppcVar8;
  code ***pppcVar9;
  code ***pppcVar10;
  code **ppcVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  int extraout_w10;
  code **unaff_x20;
  code **ppcStack_1f8;
  code **ppcStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  code **ppcStack_1d8;
  code **ppcStack_1d0;
  undefined8 uStack_188;
  code **ppcStack_180;
  code ***pppcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  code **ppcStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  code **ppcStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_e8;
  code **ppcStack_e0;
  code ***pppcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  code **ppcStack_c0;
  long lStack_b8;
  code **ppcStack_b0;
  code **ppcStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  code **ppcStack_88;
  long lStack_80;
  code **ppcStack_78;
  code **ppcStack_70;
  long lStack_68;
  undefined8 uStack_38;
  
  pppcVar9 = &ppcStack_c0;
  pppcVar8 = &ppcStack_c0;
  lVar6 = param_1;
  func_0x00010b2e2eb8();
  ppcVar2 = *(code ***)(lVar6 + 0x80);
  lVar6 = *(long *)(lVar6 + 0x88);
  ppcVar11 = param_2;
  ppcStack_c0 = ppcVar2;
  if ((lVar6 == 0) ||
     (uStack_38 = extraout_x8, __ZNSt3__119__shared_weak_count4lockEv(), unaff_x20 = param_3,
     lStack_b8 = lVar6, lVar6 == 0)) {
    param_3 = unaff_x20;
    pppcVar9 = (code ***)0x0;
    func_0x00010527822c();
  }
  else {
    uVar5 = *(char *)(param_1 + 0x40) == '\x01';
    ppcStack_b0 = param_2;
    ppcStack_a8 = param_3;
    lStack_a0 = param_1;
    if ((bool)uVar5) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      pcStack_98 = FUN_10b2e2d58;
      ppuStack_90 = &PTR_DAT_110cd36d0;
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppcStack_88 = ppcVar2;
      lStack_80 = lVar6;
      ppcStack_78 = param_2;
      ppcStack_70 = param_3;
      lStack_68 = param_1;
      func_0x00010b2e2f20(uVar7);
      ppcVar11 = &pcStack_98;
      (*extraout_x8_00)();
      func_0x00010b2e2f10();
      param_3 = &pcStack_98;
    }
    else {
      func_0x000107c2c75c();
      FUN_10b2e2b70(&ppcStack_c0);
    }
    FUN_10b2e2b18();
    func_0x00010b2e2ea4(uStack_38);
    if ((bool)uVar5) {
      return pppcVar9;
    }
  }
  ___stack_chk_fail();
  func_0x00010b2e2f10();
  FUN_10b2e2b18();
  func_0x00010b2e2f2c();
  pcStack_c8 = FUN_10b2e2994;
  ppcStack_e0 = param_3;
  pppcStack_d8 = pppcVar9;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010b2e2eb8();
  uStack_e8 = extraout_x8_01;
  *(undefined8 *)((long)pppcVar8 + 0xa0) = 0;
  uVar5 = *(char *)((long)pppcVar8 + 0x40) == '\x01';
  ppcStack_158 = ppcVar11;
  puStack_150 = (undefined1 *)pppcVar8;
  if ((bool)uVar5) {
    pppcVar9 = *(code ****)((long)pppcVar8 + 0x38);
    uStack_148 = 0x10b2e2e4c;
    ppuStack_140 = &PTR_DAT_110cd3700;
    ppcStack_138 = ppcVar11;
    puStack_130 = (undefined1 *)pppcVar8;
    func_0x00010b2e2f20();
    (*extraout_x8_02)();
    func_0x00010b2e2f00();
  }
  else {
    func_0x000107c2c75c();
    pppcVar9 = &ppcStack_158;
    FUN_10b2e2dfc();
  }
  func_0x00010b2e2ea4(uStack_e8);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    pppcVar8 = pppcVar9;
    func_0x00010b2e2f2c();
    pcStack_168 = FUN_10b2e2a2c;
    pppcVar10 = pppcVar8;
    ppcStack_180 = param_3;
    pppcStack_178 = pppcVar9;
    ppuStack_170 = &puStack_d0;
    func_0x00010b2e2eb8();
    pppcVar9 = pppcVar10 + 0x16;
    uStack_188 = extraout_x8_03;
    func_0x000107897ee0(pppcVar9,5);
    if (((ulong)pppcVar9 & 1) == 0) {
      pppcVar8[0x14] = (code **)0x0;
      ppcStack_1f8 = pppcVar8[0x12];
      ppcStack_1f0 = pppcVar8[0x13];
      if (ppcStack_1f0 != (code **)0x0) {
        ppcVar11 = ppcStack_1f0 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppcVar11,0x10);
          if (bVar4) {
            *ppcVar11 = *ppcVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar5 = *(char *)(pppcVar8 + 8) == '\x01';
      if ((bool)uVar5) {
        uStack_1e8 = 0x10b2e2e70;
        ppuStack_1e0 = &PTR_DAT_110cd3718;
        ppcStack_1d8 = ppcStack_1f8;
        ppcStack_1d0 = ppcStack_1f0;
        if (ppcStack_1f0 != (code **)0x0) {
          do {
            func_0x00010b2e2ee0();
          } while (extraout_w10 != 0);
        }
        func_0x00010b2e2f20();
        (*extraout_x8_04)();
        func_0x00010b2e2f00();
      }
      else {
        func_0x000107c2c75c();
        (**(code **)(*ppcStack_1f8 + 0x30))();
      }
      pppcVar9 = &ppcStack_1f8;
      func_0x0001052bb074(pppcVar9);
    }
    func_0x00010b2e2ea4(uStack_188);
    if (!(bool)uVar5) {
      ___stack_chk_fail();
      func_0x00010b2e2ec8();
      pppcVar9 = &ppcStack_1f8;
      func_0x0001052bb074();
      func_0x00010b2e2f2c();
      if (pppcVar9[1] != (code **)0x0) {
        func_0x000107c278a0();
      }
      return pppcVar9;
    }
  }
  return pppcVar9;
}



/* Entry: 10b2e2994; end: 10b2e2a2b;  */

long ** FUN_10b2e2994(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined8 uStack_c8;
  long *plStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_28;
  
  func_0x00010b2e2eb8();
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar4 = *(char *)(param_1 + 0x40) == '\x01';
  plStack_98 = param_2;
  lStack_90 = param_1;
  uStack_28 = extraout_x8;
  if ((bool)uVar4) {
    pplVar5 = *(long ***)(param_1 + 0x38);
    uStack_88 = 0x10b2e2e4c;
    ppuStack_80 = &PTR_DAT_110cd3700;
    plStack_78 = param_2;
    lStack_70 = param_1;
    func_0x00010b2e2f20();
    (*extraout_x8_00)();
    func_0x00010b2e2f00();
  }
  else {
    func_0x000107c2c75c();
    pplVar5 = &plStack_98;
    FUN_10b2e2dfc();
  }
  func_0x00010b2e2ea4(uStack_28);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x00010b2e2f2c();
    pplVar6 = pplVar5;
    func_0x00010b2e2eb8();
    pplVar6 = pplVar6 + 0x16;
    uStack_c8 = extraout_x8_01;
    func_0x000107897ee0(pplVar6,5);
    if (((ulong)pplVar6 & 1) == 0) {
      pplVar5[0x14] = (long *)0x0;
      plStack_138 = pplVar5[0x12];
      plStack_130 = pplVar5[0x13];
      if (plStack_130 != (long *)0x0) {
        plVar1 = plStack_130 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar4 = *(char *)(pplVar5 + 8) == '\x01';
      if ((bool)uVar4) {
        uStack_128 = 0x10b2e2e70;
        ppuStack_120 = &PTR_DAT_110cd3718;
        plStack_118 = plStack_138;
        plStack_110 = plStack_130;
        if (plStack_130 != (long *)0x0) {
          do {
            func_0x00010b2e2ee0();
          } while (extraout_w10 != 0);
        }
        func_0x00010b2e2f20();
        (*extraout_x8_02)();
        func_0x00010b2e2f00();
      }
      else {
        func_0x000107c2c75c();
        (**(code **)(*plStack_138 + 0x30))();
      }
      pplVar6 = &plStack_138;
      func_0x0001052bb074(pplVar6);
    }
    func_0x00010b2e2ea4(uStack_c8);
    pplVar5 = pplVar6;
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      func_0x00010b2e2ec8();
      pplVar5 = &plStack_138;
      func_0x0001052bb074();
      func_0x00010b2e2f2c();
      if (pplVar5[1] != (long *)0x0) {
        func_0x000107c278a0();
      }
      return pplVar5;
    }
  }
  return pplVar5;
}



/* Entry: 10b2e2a2c; end: 10b2e2b17;  */

long ** FUN_10b2e2a2c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long **pplVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long *plStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_28;
  
  lVar4 = param_1;
  func_0x00010b2e2eb8();
  pplVar5 = (long **)(lVar4 + 0xb0);
  uStack_28 = extraout_x8;
  func_0x000107897ee0(pplVar5,5);
  if (((ulong)pplVar5 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    plStack_98 = *(long **)(param_1 + 0x90);
    lStack_90 = *(long *)(param_1 + 0x98);
    if (lStack_90 != 0) {
      plVar1 = (long *)(lStack_90 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    in_ZR = *(char *)(param_1 + 0x40) == '\x01';
    if ((bool)in_ZR) {
      uStack_88 = 0x10b2e2e70;
      ppuStack_80 = &PTR_DAT_110cd3718;
      plStack_78 = plStack_98;
      lStack_70 = lStack_90;
      if (lStack_90 != 0) {
        do {
          func_0x00010b2e2ee0();
        } while (extraout_w10 != 0);
      }
      func_0x00010b2e2f20();
      (*extraout_x8_00)();
      func_0x00010b2e2f00();
    }
    else {
      func_0x000107c2c75c();
      (**(code **)(*plStack_98 + 0x30))();
    }
    pplVar5 = &plStack_98;
    func_0x0001052bb074(pplVar5);
  }
  func_0x00010b2e2ea4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b2e2ec8();
    pplVar5 = &plStack_98;
    func_0x0001052bb074();
    func_0x00010b2e2f2c();
    if (pplVar5[1] != (long *)0x0) {
      func_0x000107c278a0();
    }
    return pplVar5;
  }
  return pplVar5;
}



/* Entry: 10b2e2b18; end: 10b2e2b6f;  */

long FUN_10b2e2b18(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



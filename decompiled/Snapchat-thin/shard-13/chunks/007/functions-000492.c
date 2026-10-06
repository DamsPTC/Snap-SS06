/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10abdebc8; end: 10abdebcf;  */

void FUN_10abdebc8(void)

{
  return;
}



/* Entry: 10abdebd0; end: 10abdec07;  */

void FUN_10abdebd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110c54358;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10abdec08; end: 10abdec27;  */

void FUN_10abdec08(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110c54358;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10abdec28; end: 10abdec7f;  */

bool FUN_10abdec28(long param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 8) - 1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x58);
  uVar4 = (*(long *)(*(long *)(param_1 + 0x10) + 0x60) - lVar2 >> 3) * -0x3333333333333333;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    lVar2 = lVar2 + (long)(int)uVar3 * 0x28;
    func_0x00010abdea50(lVar2,*param_3);
    return lVar2 == 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abdec80);
  (*pcVar1)();
}



/* Entry: 10abdec80; end: 10abdecbb;  */

long FUN_10abdec80(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c543b8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdecbc; end: 10abdecc7;  */

undefined ** FUN_10abdecbc(void)

{
  return &PTR_DAT_110c543b8;
}



/* Entry: 10abdecc8; end: 10abded3b;  */

long * FUN_10abdecc8(long *param_1)

{
  long lVar1;
  
  func_0x00010abded00(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abded3c; end: 10abded97;  */

long * FUN_10abded3c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a0eb82c(plVar1 + 0x10a);
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



/* Entry: 10abded98; end: 10abdeef3;  */

long FUN_10abded98(long param_1)

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



/* Entry: 10abdeef4; end: 10abdef37;  */

void FUN_10abdeef4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_110c543d8;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10abdef38; end: 10abdef5f;  */

void FUN_10abdef38(long param_1)

{
  FUN_10a19908c(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10abdef60; end: 10abdef6f;  */

void FUN_10abdef60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010abdef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10abdef70; end: 10abdefab;  */

long FUN_10abdef70(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c54438);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdefac; end: 10abdefb7;  */

undefined ** FUN_10abdefac(void)

{
  return &PTR_DAT_110c54438;
}



/* Entry: 10abdefb8; end: 10abdf3b7;  */

undefined1  [16] FUN_10abdefb8(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x25;
  ulong uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  
  plVar8 = param_1;
  FUN_10a18fb54();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x25 = (long *)(uVar16 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar15 <= plVar8) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        plVar7 = (long *)plVar14[1];
        if (plVar7 == plVar8) {
          plVar7 = param_1;
          FUN_10a1990e4(param_1,plVar14 + 2,param_2);
          if (((ulong)plVar7 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10abdf338;
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar16);
          }
          else if (plVar15 <= plVar7) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar15);
          }
          if (plVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar14 = (long *)0x58;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar8;
  lVar3 = *param_3;
  lVar17 = param_3[3];
  lVar4 = param_3[2];
  plVar14[3] = param_3[1];
  plVar14[2] = lVar3;
  plVar14[5] = lVar17;
  plVar14[4] = lVar4;
  lVar3 = param_3[4];
  plVar14[7] = param_3[5];
  plVar14[6] = lVar3;
  plVar14[8] = param_3[6];
  lVar3 = param_3[7];
  plVar14[10] = param_3[8];
  plVar14[9] = lVar3;
  param_3[7] = 0;
  param_3[8] = 0;
  if ((plVar15 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar15 < (float)(param_1[3] + 1))) {
    uVar16 = 1;
    if ((long *)0x2 < plVar15) {
      uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    plVar7 = (long *)(uVar16 | (long)plVar15 << 1);
    plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar7 <= plVar15) {
      plVar7 = plVar15;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar15 = (long *)param_1[1];
    if (plVar15 < plVar7) {
LAB_10abdf148:
      if ((ulong)plVar7 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10abdf3a4);
        (*pcVar2)();
      }
      lVar3 = (long)plVar7 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar15 = (long *)0x0;
      param_1[1] = (long)plVar7;
      do {
        *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
        plVar15 = (long *)((long)plVar15 + 1);
      } while (plVar7 != plVar15);
      plVar9 = (long *)param_1[2];
      plVar15 = plVar7;
      if (plVar9 != (long *)0x0) {
        plVar10 = (long *)plVar9[1];
        uVar16 = (long)plVar7 - 1;
        if (((ulong)plVar7 & uVar16) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar16);
        }
        else if (plVar7 <= plVar10) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar7;
          }
          plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar7);
        }
        *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)plVar7 & uVar16) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar16);
          }
          else if (plVar7 <= plVar13) {
            uVar1 = 0;
            if (plVar7 != (long *)0x0) {
              uVar1 = (ulong)plVar13 / (ulong)plVar7;
            }
            plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar7);
          }
          plVar12 = plVar11;
          if (plVar13 != plVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar13 * 8) = plVar9;
              plVar10 = plVar13;
            }
            else {
              *plVar9 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
              **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar9;
            }
          }
          plVar9 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (plVar7 < plVar15) {
      plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar9) {
        plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
      }
      if (plVar7 <= plVar9) {
        plVar7 = plVar9;
      }
      if (plVar7 < plVar15) {
        if (plVar7 != (long *)0x0) goto LAB_10abdf148;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar15 <= plVar8) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar8 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar16 * (long)plVar15);
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar14 == 0) goto LAB_10abdf328;
    plVar8 = *(long **)(*plVar14 + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      plVar8 = (long *)((ulong)plVar8 & (long)plVar15 - 1U);
    }
    else if (plVar15 <= plVar8) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar8 / (ulong)plVar15;
      }
      plVar8 = (long *)((long)plVar8 - uVar16 * (long)plVar15);
    }
    plVar8 = (long *)(*param_1 + (long)plVar8 * 8);
  }
  else {
    *plVar14 = *plVar8;
  }
  *plVar8 = (long)plVar14;
LAB_10abdf328:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10abdf338:
  auVar18._8_8_ = uVar5;
  auVar18._0_8_ = plVar14;
  return auVar18;
}



/* Entry: 10abdf3b8; end: 10abdf3ff;  */

void FUN_10abdf3b8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a09d364(lVar1 + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10abdf400; end: 10abdf617;  */

void FUN_10abdf400(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0xb8))();
  plVar8 = (long *)plVar5[3];
  plVar6 = plVar8;
  func_0x00010a08f140();
  plVar1 = *(long **)(*plVar6 + 0x10);
  uVar2 = *(undefined8 *)(*plVar6 + 0x18);
  __ZNSt3__115recursive_mutex4lockEv(uVar2);
  if (*(int *)((long)plVar8 + 0x734) == 1) {
    func_0x000109296ea0(plVar1,param_1,plVar5,param_3,param_4,0,5);
  }
  else {
    FUN_10a012fec(&plStack_68,plVar8,plVar1);
    plVar6 = plStack_68;
    (**(code **)(*plStack_68 + 0x48))();
    (**(code **)(*plVar6 + 0x48))();
    FUN_10a168824(param_2,plVar6,7,0x6000,0x400,0x1000,0x100,0);
    (**(code **)(*plVar6 + 0x60))(plVar6,param_1,plVar5,param_3,param_4,7);
    FUN_10a168824(param_2,plVar6,5,0x400,8,0x100,8,0);
    (**(code **)(*plVar6 + 0x40))(plVar6);
    plStack_58 = plStack_68;
    (**(code **)(*plVar1 + 0x30))(plVar1,0,0,0,0,&plStack_58,1);
    if (plStack_60 != (long *)0x0) {
      plVar1 = plStack_60 + 1;
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
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
      }
    }
  }
  __ZNSt3__115recursive_mutex6unlockEv(uVar2);
  return;
}



/* Entry: 10abdf618; end: 10abdf81b;  */

undefined1  [16] FUN_10abdf618(long *param_1,long *param_2)

{
  ulong *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  long *plVar15;
  long *plVar16;
  code **ppcVar17;
  long *plVar18;
  ulong uVar19;
  long *extraout_x8;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  code *pcStack_5a0;
  code *pcStack_598;
  undefined8 *puStack_590;
  code *pcStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 uStack_570;
  code *pcStack_560;
  code *pcStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_498;
  uint uStack_490;
  uint uStack_48c;
  ulong uStack_488;
  uint auStack_480 [2];
  uint uStack_478;
  uint uStack_474;
  ulong uStack_470;
  undefined4 uStack_468;
  uint uStack_460;
  uint uStack_45c;
  ulong uStack_458;
  undefined4 uStack_450;
  long lStack_448;
  long *plStack_440;
  long *plStack_438;
  long *plStack_430;
  long *plStack_428;
  undefined1 **ppuStack_420;
  code *pcStack_418;
  long lStack_410;
  long lStack_408;
  undefined4 uStack_400;
  long lStack_3f8;
  undefined1 auStack_3f0 [72];
  long lStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  undefined1 *puStack_390;
  code *pcStack_388;
  undefined1 auStack_380 [208];
  long lStack_2b0;
  long lStack_2a8;
  undefined4 uStack_2a0;
  undefined8 uStack_298;
  long lStack_248;
  ulong uStack_240;
  uint uStack_238;
  long lStack_230;
  undefined1 auStack_228 [72];
  long lStack_1e0;
  undefined4 auStack_1d8 [24];
  long lStack_178;
  ulong uStack_170;
  uint uStack_168;
  long lStack_160;
  undefined1 auStack_158 [72];
  long *aplStack_110 [2];
  long *plStack_100;
  long lStack_b0;
  ulong uStack_a8;
  uint uStack_a0;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a314fa4(&lStack_1e0);
  if (lStack_1e0 != 0) {
    _memcpy(aplStack_110,auStack_1d8,lStack_1e0 << 5);
  }
  uStack_a8 = uStack_170;
  uVar19 = uStack_a8;
  lStack_b0 = lStack_178;
  uStack_a0 = uStack_168;
  if (lStack_1e0 != 1) {
    FUN_10a00946c(&UNK_10f699f0f);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10abdf814);
    (*pcVar9)();
  }
  uStack_a8._0_4_ = (undefined4)uStack_170;
  lStack_1e0 = lStack_178;
  auStack_1d8[0] = (undefined4)uStack_a8;
  plVar26 = &lStack_1e0;
  uStack_a8 = uVar19;
  func_0x0001096f1ebc();
  if ((int)plVar26 == 0) {
    plVar26 = (long *)-(long)plStack_100;
    if (-1 < (long)plStack_100) {
      plVar26 = plStack_100;
    }
    FUN_10a314fa4(&lStack_1e0,param_1);
    uVar19 = (ulong)uStack_168;
LAB_10abdf710:
    plVar15 = (long *)((long)plVar26 * uVar19);
    plVar12 = aplStack_110[0];
  }
  else {
    plVar26 = (long *)((uStack_a8 >> 0x20) * ((ulong)plVar26 & 0xffffffff));
    plVar12 = (long *)-(long)plStack_100;
    if (-1 < (long)plStack_100) {
      plVar12 = plStack_100;
    }
    FUN_10a314fa4(&lStack_1e0,param_1);
    uVar19 = (ulong)uStack_168;
    if (plVar12 == plVar26) goto LAB_10abdf710;
    uVar19 = (long)plVar26 * uVar19;
    lVar11 = *param_2;
    uVar21 = param_2[1] - lVar11;
    if (uVar19 < uVar21 || uVar19 - uVar21 == 0) {
      if (uVar19 < uVar21) {
        param_2[1] = lVar11 + uVar19;
      }
    }
    else {
      func_0x000107c27d58(param_2,uVar19 - uVar21);
      lVar11 = *param_2;
    }
    lStack_2b0 = *param_1;
    lStack_2a8 = param_1[1];
    uStack_2a0 = (undefined4)param_1[2];
    uStack_298 = 0;
    plVar26 = &lStack_1e0;
    FUN_10abdf81c(&lStack_1e0,lVar11,&lStack_2b0);
    lStack_2b0 = lStack_1e0;
    if (lStack_1e0 != 0) {
      _memcpy(&lStack_2a8,auStack_1d8,lStack_1e0 << 5);
    }
    uStack_240 = uStack_170;
    lStack_248 = lStack_178;
    uStack_238 = uStack_168;
    lStack_230 = lStack_160;
    if (lStack_160 != 0) {
      _memcpy(auStack_228,auStack_158,lStack_160 * 0x18);
    }
    FUN_10a314fa4(auStack_380,param_1);
    func_0x0001096f1c24(&lStack_2b0,auStack_380);
    plVar15 = (long *)(param_2[1] - *param_2);
    plVar12 = (long *)*param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar30._8_8_ = plVar15;
    auVar30._0_8_ = plVar12;
    return auVar30;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar18 = &lStack_410;
  pcStack_388 = FUN_10abdf81c;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_408 = plVar15[1];
  lStack_410 = *plVar15;
  uStack_400 = (undefined4)plVar15[2];
  lStack_3f8 = plVar15[3];
  plStack_3a0 = param_1;
  plStack_398 = param_2;
  puStack_390 = &stack0xfffffffffffffff0;
  if (lStack_3f8 != 0) {
    _memcpy(auStack_3f0,plVar15 + 4,lStack_3f8 * 0x18);
  }
  plVar15 = extraout_x8;
  plVar16 = plVar12;
  FUN_10abdf8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    auVar31._8_8_ = plVar16;
    auVar31._0_8_ = plVar15;
    return auVar31;
  }
  ___stack_chk_fail();
  if ((int)plVar16 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plStack_440 = plVar26;
  plStack_438 = &lStack_1e0;
  plStack_430 = extraout_x8;
  plStack_428 = plVar12;
  ppuStack_420 = &puStack_390;
  pcStack_418 = FUN_10abdf8c0;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *plVar15 = 0;
  lVar22 = plVar18[1];
  lVar11 = *plVar18;
  *(int *)(plVar15 + 0xf) = (int)plVar18[2];
  plVar15[0xe] = lVar22;
  plVar15[0xd] = lVar11;
  plVar15[0x10] = 0;
  lVar11 = plVar18[3];
  plVar15[0x10] = lVar11;
  plVar26 = plVar16;
  if (lVar11 == 0) {
LAB_10abdf960:
    uVar3 = *(uint *)((long)plVar15 + 0x74);
    uVar19 = (ulong)uVar3;
    uVar4 = *(uint *)(plVar15 + 0xf);
    bVar5 = *(byte *)(plVar15 + 0xd);
    if (bVar5 - 0x24 < 2) {
      uStack_490 = uVar3;
      uStack_48c = uVar4;
      uStack_488 = uVar19;
      uStack_478 = uVar3 >> 1;
      auStack_480[0] = 1;
      uStack_474 = uVar4 >> 1;
      uStack_470 = (ulong)uStack_478;
      uStack_468 = 1;
      uStack_460 = uStack_478;
      uStack_45c = uVar4 >> 1;
      uStack_458 = (ulong)uStack_478;
      uStack_450 = 1;
      uStack_498 = 3;
      lVar11 = 0x48;
LAB_10abdf9ec:
      auStack_480[0] = 1;
      uStack_490 = uVar3;
      uStack_48c = uVar4;
      uStack_488 = uVar19;
    }
    else if (bVar5 == 0x26) {
      uStack_490 = uVar3;
      uStack_48c = uVar4;
      uStack_488 = uVar19 << 1;
      auStack_480[0] = 2;
      uStack_478 = uVar3 >> 1;
      uStack_474 = uVar4 >> 1;
      uStack_470 = uVar19 << 1;
      uStack_468 = 4;
      lVar11 = 0x30;
      uStack_498 = 2;
    }
    else {
      if (bVar5 == 0x23) {
        uStack_490 = uVar3;
        uStack_48c = uVar4;
        uStack_488 = uVar19;
        auStack_480[0] = 1;
        uStack_478 = uVar3 >> 1;
        uStack_474 = uVar4 >> 1;
        uStack_470 = uVar19;
        uStack_498 = 2;
        uStack_468 = 2;
        lVar11 = 0x30;
        goto LAB_10abdf9ec;
      }
      uVar10 = (int)plVar15 + 0x68;
      func_0x0001096f1ebc();
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      uStack_490 = uVar3;
      uStack_48c = uVar4;
      uStack_488 = uVar19 * uVar10;
      auStack_480[0] = uVar10;
      uStack_498 = 1;
      lVar11 = 0x18;
    }
  }
  else {
    plVar26 = plVar15 + 0x11;
    plVar18 = plVar18 + 4;
    plVar12 = plVar26;
    do {
      lVar28 = plVar18[1];
      lVar22 = *plVar18;
      plVar12[2] = plVar18[2];
      plVar12[1] = lVar28;
      *plVar12 = lVar22;
      plVar18 = plVar18 + 3;
      lVar11 = lVar11 + -1;
      plVar12 = plVar12 + 3;
    } while (lVar11 != 0);
    uStack_498 = plVar15[0x10];
    if (uStack_498 == 0) goto LAB_10abdf960;
    lVar11 = uStack_498 * 0x18;
    _memcpy(&uStack_490,plVar26,lVar11);
  }
  lVar20 = 0;
  lVar22 = *plVar15;
  lVar28 = 8;
  do {
    lVar27 = 0;
    if (plVar16 != (long *)0x0) {
      lVar27 = (long)plVar16 + lVar20;
    }
    plVar12 = plVar15 + lVar22 * 4 + 1;
    *plVar12 = lVar27;
    *(undefined4 *)(plVar12 + 3) = *(undefined4 *)((long)auStack_480 + lVar28 + -8);
    lVar22 = *(long *)((long)&uStack_498 + lVar28);
    plVar12[2] = *(long *)((long)&uStack_490 + lVar28);
    plVar12[1] = lVar22;
    lVar22 = *plVar15 + 1;
    *plVar15 = lVar22;
    lVar23 = *(long *)((long)&uStack_490 + lVar28);
    lVar27 = -lVar23;
    if (-1 < lVar23) {
      lVar27 = lVar23;
    }
    lVar20 = lVar20 + lVar27 * (ulong)*(uint *)((long)&uStack_498 + lVar28 + 4);
    lVar27 = (long)auStack_480 + lVar28;
    lVar28 = lVar28 + 0x18;
  } while (lVar27 != (long)&uStack_490 + lVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    auVar32._8_8_ = plVar26;
    auVar32._0_8_ = plVar15;
    return auVar32;
  }
  ___stack_chk_fail();
  puVar13 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar13 < (undefined *)0x492492492492493) {
    lVar11 = (long)puVar13 * 0x38;
    __Znwm(lVar11);
    auVar33._8_8_ = puVar13;
    auVar33._0_8_ = lVar11;
    return auVar33;
  }
  func_0x000109ffded8();
  if ((puVar13[0x200] & 1) == 0) {
    plVar26 = *(long **)(puVar13 + 0x48);
    if (((uint)*(undefined8 *)(*(long *)(puVar13 + 0x48) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar26 + 0x12);
      goto LAB_10abe03c8;
    }
    if (plVar26 != (long *)0x0) {
      puVar1 = (ulong *)(plVar26 + 1);
      do {
        uVar19 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar19 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar19 & 0x1fffffffc) == 4) {
        do {
          uVar19 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar19 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar19 - 1 == 0) {
          (**(code **)(*plVar26 + 8))();
        }
      }
    }
    plVar26 = *(long **)(puVar13 + 200);
    if (plVar26 != (long *)0x0) {
      puVar1 = (ulong *)(plVar26 + 1);
      do {
        uVar19 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar19 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar19 & 0x1fffffffc) == 4) {
        do {
          uVar19 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar19 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar19 - 1 == 0) {
          (**(code **)(*plVar26 + 8))();
        }
      }
    }
    FUN_10abd3728(&pcStack_560,puVar13 + 0x1e8);
    FUN_10abd3728(&uStack_548,puVar13 + 0x1f0);
    pcStack_598 = pcStack_558;
    pcStack_5a0 = pcStack_560;
    puStack_590 = puStack_550;
    uStack_580 = uStack_540;
    pcStack_588 = (code *)uStack_548;
    uStack_578 = uStack_538;
    uStack_570 = 1;
    func_0x00010a225c4c(*(long *)(puVar13 + 0x1f8) + 0x90);
    *(code **)(puVar13 + 0x148) = pcStack_598;
    *(code **)(puVar13 + 0x140) = pcStack_5a0;
    *(undefined8 **)(puVar13 + 0x150) = puStack_590;
    pcStack_5a0 = (code *)0x0;
    pcStack_598 = (code *)0x0;
    *(undefined8 *)(puVar13 + 0x160) = uStack_580;
    *(code **)(puVar13 + 0x158) = pcStack_588;
    *(undefined8 *)(puVar13 + 0x168) = uStack_578;
    puStack_590 = (undefined8 *)0x0;
    pcStack_588 = (code *)0x0;
    uStack_580 = 0;
    uStack_578 = 0;
    puVar13[0x170] = 1;
    (**(code **)(**(long **)(puVar13 + 0x1a8) + 0x28))
              (&pcStack_560,*(long **)(puVar13 + 0x1a8),*(long *)(puVar13 + 0x198) + 0x20,
               *(long *)(puVar13 + 0x1f8) + 0x50,*(undefined8 *)(puVar13 + 0x1d8),puVar13 + 0x140);
    func_0x00010abd3858(puVar13 + 0x1c8,&pcStack_560);
    pcVar9 = pcStack_558;
    if (pcStack_558 != (code *)0x0) {
      pcVar2 = pcStack_558 + 8;
      do {
        lVar11 = *(long *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(long *)pcVar2 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*(long *)pcStack_558 + 0x10))(pcStack_558);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar9);
      }
    }
    FUN_10a186da0(puVar13 + 0x140);
    FUN_10a186da0(&pcStack_5a0);
    plVar26 = *(long **)(puVar13 + 0x1f0);
    if (plVar26 != (long *)0x0) {
      puVar1 = (ulong *)(plVar26 + 1);
      do {
        uVar19 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar19 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar19 & 0x1fffffffc) == 4) {
        do {
          uVar19 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar19 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar19 - 1 == 0) {
          (**(code **)(*plVar26 + 8))();
        }
      }
    }
    plVar26 = *(long **)(puVar13 + 0x1e8);
    if (plVar26 != (long *)0x0) {
      puVar1 = (ulong *)(plVar26 + 1);
      do {
        uVar19 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar19 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar19 & 0x1fffffffc) == 4) {
        do {
          uVar19 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar19 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar19 - 1 == 0) {
          (**(code **)(*plVar26 + 8))();
        }
      }
    }
    plVar26 = *(long **)(puVar13 + 0x1e0);
    if (plVar26 != (long *)0x0) {
      plVar12 = plVar26 + 1;
      do {
        lVar11 = *plVar12;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
    }
    puVar25 = *(undefined8 **)(puVar13 + 0x1b8);
    plVar26 = *(long **)(puVar13 + 0x1f8);
    lVar11 = *plVar26;
    *(long *)(puVar13 + 0x48) = lVar11;
    lVar22 = plVar26[1];
    *(long *)(puVar13 + 0x50) = lVar22;
    if (lVar22 != 0) {
      plVar26 = (long *)(lVar22 + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = *plVar26 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar26 = *(long **)(puVar13 + 0x1f8);
    }
    lVar28 = plVar26[2];
    *(long *)(puVar13 + 0x58) = lVar28;
    lVar20 = plVar26[3];
    *(long *)(puVar13 + 0x60) = lVar20;
    if (lVar20 != 0) {
      plVar26 = (long *)(lVar20 + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = *plVar26 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar26 = *(long **)(puVar13 + 0x1f8);
    }
    uVar6 = (undefined1)plVar26[4];
    uVar29 = *(undefined8 *)(puVar13 + 0x1c8);
    puVar24 = (undefined8 *)(puVar13 + 0x70);
    *puVar24 = uVar29;
    puVar13[0x68] = uVar6;
    lVar27 = *(long *)(puVar13 + 0x1d0);
    *(long *)(puVar13 + 0x78) = lVar27;
    if (lVar27 != 0) {
      plVar26 = (long *)(lVar27 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = *plVar26 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar26 = (long *)puVar25[2];
    pcStack_598 = (code *)0x0;
    puStack_590 = (undefined8 *)0x0;
    if (plVar26 == (long *)0x0) {
      *puVar24 = 0;
      *(undefined8 *)(puVar13 + 0x78) = 0;
      *(undefined8 *)(puVar13 + 0x50) = 0;
      *(undefined8 *)(puVar13 + 0x48) = 0;
      *(undefined8 *)(puVar13 + 0x60) = 0;
      *(undefined8 *)(puVar13 + 0x58) = 0;
      puVar24 = (undefined8 *)0x100;
      __Znwm();
      puVar24[2] = 0;
      puVar24[1] = 0x200000006;
      *(undefined2 *)(puVar24 + 3) = 4;
      puVar24[5] = 0;
      puVar24[4] = 0;
      puVar24[7] = 0;
      puVar24[6] = 0;
      puVar24[9] = 0;
      puVar24[8] = 0;
      puVar24[0xb] = 0;
      puVar24[10] = 0;
      puVar24[0xd] = 0;
      puVar24[0xc] = 0;
      puVar24[0xf] = 0;
      puVar24[0xe] = 0;
      puVar24[0x10] = 0;
      puVar24[0x11] = puVar24 + 3;
      puVar24[0x12] = 0;
      *(undefined1 *)(puVar24 + 0x13) = 0;
      *(undefined1 *)(puVar24 + 0x15) = 0;
      *puVar24 = &PTR_DAT_110c50bd0;
      pcStack_5a0 = (code *)(puVar24 + 0x16);
      *(long *)pcStack_5a0 = lVar11;
      puVar24[0x17] = lVar22;
      puVar24[0x18] = lVar28;
      puVar24[0x19] = lVar20;
      *(undefined1 *)(puVar24 + 0x1a) = uVar6;
      puVar24[0x1b] = uVar29;
      puVar24[0x1c] = lVar27;
      *(undefined1 *)(puVar24 + 0x1e) = 1;
      puVar24[0x1f] = 0;
      pcStack_588 = FUN_10abd47d0;
      pcStack_598 = (code *)puVar24;
      puStack_590 = puVar24;
    }
    else {
      pcStack_560 = (code *)0x0;
      (**(code **)(*plVar26 + 0x28))(plVar26,0,&pcStack_560);
      if (pcStack_560 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_560);
        goto LAB_10abe03c8;
      }
      *puVar24 = 0;
      *(undefined8 *)(puVar13 + 0x78) = 0;
      *(undefined8 *)(puVar13 + 0x50) = 0;
      *(undefined8 *)(puVar13 + 0x48) = 0;
      *(undefined8 *)(puVar13 + 0x60) = 0;
      *(undefined8 *)(puVar13 + 0x58) = 0;
      puVar24 = (undefined8 *)0x108;
      __Znwm();
      puVar24[2] = 0;
      puVar24[1] = 0x200000006;
      *(undefined2 *)(puVar24 + 3) = 4;
      puVar24[5] = 0;
      puVar24[4] = 0;
      puVar24[7] = 0;
      puVar24[6] = 0;
      puVar24[9] = 0;
      puVar24[8] = 0;
      puVar24[0xb] = 0;
      puVar24[10] = 0;
      puVar24[0xd] = 0;
      puVar24[0xc] = 0;
      puVar24[0xf] = 0;
      puVar24[0xe] = 0;
      puVar24[0x10] = 0;
      puVar24[0x11] = puVar24 + 3;
      puVar24[0x12] = 0;
      *(undefined1 *)(puVar24 + 0x13) = 0;
      *(undefined1 *)(puVar24 + 0x15) = 0;
      puVar24[0x16] = lVar11;
      *puVar24 = &PTR_FUN_110c50b98;
      puVar24[0x17] = lVar22;
      puVar24[0x18] = lVar28;
      puVar24[0x19] = lVar20;
      *(undefined1 *)(puVar24 + 0x1a) = uVar6;
      puVar24[0x1b] = uVar29;
      puVar24[0x1c] = lVar27;
      *(undefined1 *)(puVar24 + 0x1e) = 1;
      puVar24[0x1f] = 0;
      puVar24[0x20] = plVar26;
      if (pcStack_598 != (code *)0x0) {
        puVar1 = (ulong *)((long)pcStack_598 + 8);
        do {
          uVar19 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar19 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar19 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*(long *)pcStack_598 + 8))();
          }
        }
      }
      pcStack_598 = (code *)puVar24;
      if (puStack_590 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_590);
      }
      pcStack_588 = (code *)0x10abd47a0;
      pcStack_5a0 = (code *)(puVar24 + 0x16);
      puStack_590 = puVar24;
      __ZNSt13exception_ptrD1Ev(&pcStack_560);
    }
    pcVar9 = pcStack_5a0;
    if (*(long *)(pcStack_5a0 + 0x48) != 0) {
      func_0x0001092b4274();
    }
    *(undefined8 **)(pcVar9 + 0x48) = puStack_590;
    puStack_590 = (undefined8 *)0x0;
    pcStack_560 = pcStack_588;
    pcStack_558 = pcStack_5a0;
    puStack_550 = puVar25;
    (**(code **)*puVar25)(puVar25,&pcStack_560);
    *(code **)(puVar13 + 200) = pcStack_598;
    pcStack_598 = (code *)0x0;
    if ((puStack_590 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_590), pcStack_598 != (code *)0x0)) {
      puVar1 = (ulong *)((long)pcStack_598 + 8);
      do {
        uVar19 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar19 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar19 & 0x1fffffffc) == 4) {
        do {
          uVar19 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar19 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar19 - 1 == 0) {
          (**(code **)(*(long *)pcStack_598 + 8))();
        }
      }
    }
    plVar26 = *(long **)(puVar13 + 0x78);
    if (plVar26 != (long *)0x0) {
      plVar12 = plVar26 + 1;
      do {
        lVar11 = *plVar12;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
    }
    if (*(long *)(puVar13 + 0x60) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(puVar13 + 0x50) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(long *)(puVar13 + 0x48) = *(long *)(puVar13 + 200);
    plVar26 = (long *)(*(long *)(puVar13 + 200) + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar8) {
        *plVar26 = *plVar26 + 4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(puVar13 + 0x48) + 0x10) >> 1 & 1) == 0) {
      puVar13[0x200] = 1;
      lVar11 = *(long *)(puVar13 + 0x48);
      plVar26 = (long *)(lVar11 + 0x10);
      puVar25 = *(undefined8 **)(puVar13 + 0x18);
      do {
        lVar22 = *plVar26;
        if (lVar22 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *plVar26 = 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            pcStack_5a0 = (code *)0x0;
            puVar14 = (undefined *)(lVar11 + 0x18);
            ppcVar17 = &pcStack_5a0;
            pcStack_598 = (code *)puVar13;
            puStack_590 = puVar25;
            func_0x000109d1b588(puVar14,ppcVar17);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            goto LAB_10abe0368;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar22 >> 1 & 1) == 0);
    }
  }
  lVar11 = *(long *)(puVar13 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(puVar13 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar11 + 0xa8) & 1) != 0) {
      ppcVar17 = (code **)(lVar11 + 0x98);
      func_0x00010abd38fc(puVar13 + 0x10,ppcVar17);
      plVar26 = *(long **)(puVar13 + 0x48);
      if (plVar26 != (long *)0x0) {
        puVar1 = (ulong *)(plVar26 + 1);
        do {
          uVar19 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar19 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar19 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar26 + 8))();
          }
        }
      }
      plVar26 = *(long **)(puVar13 + 200);
      if (plVar26 != (long *)0x0) {
        puVar1 = (ulong *)(plVar26 + 1);
        do {
          uVar19 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar19 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar19 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar26 + 8))();
          }
        }
      }
      plVar26 = *(long **)(puVar13 + 0x1d0);
      if (plVar26 != (long *)0x0) {
        plVar12 = plVar26 + 1;
        do {
          lVar11 = *plVar12;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      plVar26 = *(long **)(puVar13 + 0x1c0);
      if (plVar26 != (long *)0x0) {
        plVar12 = plVar26 + 1;
        do {
          lVar11 = *plVar12;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      plVar26 = *(long **)(puVar13 + 0x1b0);
      if (plVar26 != (long *)0x0) {
        plVar12 = plVar26 + 1;
        do {
          lVar11 = *plVar12;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      plVar26 = *(long **)(puVar13 + 0x1a0);
      if (plVar26 != (long *)0x0) {
        plVar12 = plVar26 + 1;
        do {
          lVar11 = *plVar12;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      func_0x000109d1a1d0(puVar13 + 0x10);
      __ZdlPv(puVar13);
      puVar14 = puVar13;
LAB_10abe0368:
      auVar34._8_8_ = ppcVar17;
      auVar34._0_8_ = puVar14;
      return auVar34;
    }
  }
  else {
    func_0x0001092af97c(lVar11 + 0x90);
  }
LAB_10abe03c8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10abe03cc);
  (*pcVar9)();
}



/* Entry: 10abdf81c; end: 10abdf8bf;  */

undefined1  [16] FUN_10abdf81c(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  uint uVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  long *plVar14;
  code **ppcVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  code *pcStack_220;
  code *pcStack_218;
  undefined8 *puStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  code *pcStack_1e0;
  code *pcStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_118;
  uint uStack_110;
  uint uStack_10c;
  ulong uStack_108;
  uint auStack_100 [2];
  uint uStack_f8;
  uint uStack_f4;
  ulong uStack_f0;
  undefined4 uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  ulong uStack_d8;
  undefined4 uStack_d0;
  long lStack_c8;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [72];
  long lStack_28;
  
  plVar12 = &lStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  uStack_80 = (undefined4)param_3[2];
  lStack_78 = param_3[3];
  if (lStack_78 != 0) {
    _memcpy(auStack_70,param_3 + 4,lStack_78 * 0x18);
  }
  FUN_10abdf8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar27._8_8_ = param_2;
    auVar27._0_8_ = param_1;
    return auVar27;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  lVar20 = plVar12[1];
  lVar16 = *plVar12;
  *(int *)(param_1 + 0xf) = (int)plVar12[2];
  param_1[0xe] = lVar20;
  param_1[0xd] = lVar16;
  param_1[0x10] = 0;
  lVar16 = plVar12[3];
  param_1[0x10] = lVar16;
  plVar14 = param_2;
  if (lVar16 == 0) {
LAB_10abdf960:
    uVar3 = *(uint *)((long)param_1 + 0x74);
    uVar18 = (ulong)uVar3;
    uVar4 = *(uint *)(param_1 + 0xf);
    bVar5 = *(byte *)(param_1 + 0xd);
    if (bVar5 - 0x24 < 2) {
      uStack_110 = uVar3;
      uStack_10c = uVar4;
      uStack_108 = uVar18;
      uStack_f8 = uVar3 >> 1;
      auStack_100[0] = 1;
      uStack_f4 = uVar4 >> 1;
      uStack_f0 = (ulong)uStack_f8;
      uStack_e8 = 1;
      uStack_e0 = uStack_f8;
      uStack_dc = uVar4 >> 1;
      uStack_d8 = (ulong)uStack_f8;
      uStack_d0 = 1;
      uStack_118 = 3;
      lVar16 = 0x48;
LAB_10abdf9ec:
      auStack_100[0] = 1;
      uStack_110 = uVar3;
      uStack_10c = uVar4;
      uStack_108 = uVar18;
    }
    else if (bVar5 == 0x26) {
      uStack_110 = uVar3;
      uStack_10c = uVar4;
      uStack_108 = uVar18 << 1;
      auStack_100[0] = 2;
      uStack_f8 = uVar3 >> 1;
      uStack_f4 = uVar4 >> 1;
      uStack_f0 = uVar18 << 1;
      uStack_e8 = 4;
      lVar16 = 0x30;
      uStack_118 = 2;
    }
    else {
      if (bVar5 == 0x23) {
        uStack_110 = uVar3;
        uStack_10c = uVar4;
        uStack_108 = uVar18;
        auStack_100[0] = 1;
        uStack_f8 = uVar3 >> 1;
        uStack_f4 = uVar4 >> 1;
        uStack_f0 = uVar18;
        uStack_118 = 2;
        uStack_e8 = 2;
        lVar16 = 0x30;
        goto LAB_10abdf9ec;
      }
      uVar10 = (int)param_1 + 0x68;
      func_0x0001096f1ebc();
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      uStack_110 = uVar3;
      uStack_10c = uVar4;
      uStack_108 = uVar18 * uVar10;
      auStack_100[0] = uVar10;
      uStack_118 = 1;
      lVar16 = 0x18;
    }
  }
  else {
    plVar14 = param_1 + 0x11;
    plVar12 = plVar12 + 4;
    plVar19 = plVar14;
    do {
      lVar25 = plVar12[1];
      lVar20 = *plVar12;
      plVar19[2] = plVar12[2];
      plVar19[1] = lVar25;
      *plVar19 = lVar20;
      plVar12 = plVar12 + 3;
      lVar16 = lVar16 + -1;
      plVar19 = plVar19 + 3;
    } while (lVar16 != 0);
    uStack_118 = param_1[0x10];
    if (uStack_118 == 0) goto LAB_10abdf960;
    lVar16 = uStack_118 * 0x18;
    _memcpy(&uStack_110,plVar14,lVar16);
  }
  lVar17 = 0;
  lVar20 = *param_1;
  lVar25 = 8;
  do {
    lVar24 = 0;
    if (param_2 != (long *)0x0) {
      lVar24 = (long)param_2 + lVar17;
    }
    plVar12 = param_1 + lVar20 * 4 + 1;
    *plVar12 = lVar24;
    *(undefined4 *)(plVar12 + 3) = *(undefined4 *)((long)auStack_100 + lVar25 + -8);
    lVar20 = *(long *)((long)&uStack_118 + lVar25);
    plVar12[2] = *(long *)((long)&uStack_110 + lVar25);
    plVar12[1] = lVar20;
    lVar20 = *param_1 + 1;
    *param_1 = lVar20;
    lVar21 = *(long *)((long)&uStack_110 + lVar25);
    lVar24 = -lVar21;
    if (-1 < lVar21) {
      lVar24 = lVar21;
    }
    lVar17 = lVar17 + lVar24 * (ulong)*(uint *)((long)&uStack_118 + lVar25 + 4);
    lVar24 = (long)auStack_100 + lVar25;
    lVar25 = lVar25 + 0x18;
  } while (lVar24 != (long)&uStack_110 + lVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    auVar28._8_8_ = plVar14;
    auVar28._0_8_ = param_1;
    return auVar28;
  }
  ___stack_chk_fail();
  puVar11 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar11 < (undefined *)0x492492492492493) {
    lVar16 = (long)puVar11 * 0x38;
    __Znwm(lVar16);
    auVar29._8_8_ = puVar11;
    auVar29._0_8_ = lVar16;
    return auVar29;
  }
  func_0x000109ffded8();
  if ((puVar11[0x200] & 1) == 0) {
    plVar12 = *(long **)(puVar11 + 0x48);
    if (((uint)*(undefined8 *)(*(long *)(puVar11 + 0x48) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar12 + 0x12);
      goto LAB_10abe03c8;
    }
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar18 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar18 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar18 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = *(long **)(puVar11 + 200);
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar18 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar18 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar18 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    FUN_10abd3728(&pcStack_1e0,puVar11 + 0x1e8);
    FUN_10abd3728(&uStack_1c8,puVar11 + 0x1f0);
    pcStack_218 = pcStack_1d8;
    pcStack_220 = pcStack_1e0;
    puStack_210 = puStack_1d0;
    uStack_200 = uStack_1c0;
    pcStack_208 = (code *)uStack_1c8;
    uStack_1f8 = uStack_1b8;
    uStack_1f0 = 1;
    func_0x00010a225c4c(*(long *)(puVar11 + 0x1f8) + 0x90);
    *(code **)(puVar11 + 0x148) = pcStack_218;
    *(code **)(puVar11 + 0x140) = pcStack_220;
    *(undefined8 **)(puVar11 + 0x150) = puStack_210;
    pcStack_220 = (code *)0x0;
    pcStack_218 = (code *)0x0;
    *(undefined8 *)(puVar11 + 0x160) = uStack_200;
    *(code **)(puVar11 + 0x158) = pcStack_208;
    *(undefined8 *)(puVar11 + 0x168) = uStack_1f8;
    puStack_210 = (undefined8 *)0x0;
    pcStack_208 = (code *)0x0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    puVar11[0x170] = 1;
    (**(code **)(**(long **)(puVar11 + 0x1a8) + 0x28))
              (&pcStack_1e0,*(long **)(puVar11 + 0x1a8),*(long *)(puVar11 + 0x198) + 0x20,
               *(long *)(puVar11 + 0x1f8) + 0x50,*(undefined8 *)(puVar11 + 0x1d8),puVar11 + 0x140);
    func_0x00010abd3858(puVar11 + 0x1c8,&pcStack_1e0);
    pcVar9 = pcStack_1d8;
    if (pcStack_1d8 != (code *)0x0) {
      pcVar2 = pcStack_1d8 + 8;
      do {
        lVar16 = *(long *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(long *)pcVar2 = lVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*(long *)pcStack_1d8 + 0x10))(pcStack_1d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar9);
      }
    }
    FUN_10a186da0(puVar11 + 0x140);
    FUN_10a186da0(&pcStack_220);
    plVar12 = *(long **)(puVar11 + 0x1f0);
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar18 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar18 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar18 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = *(long **)(puVar11 + 0x1e8);
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar18 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar18 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar18 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = *(long **)(puVar11 + 0x1e0);
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 1;
      do {
        lVar16 = *plVar14;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar8) {
          *plVar14 = lVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    puVar23 = *(undefined8 **)(puVar11 + 0x1b8);
    plVar12 = *(long **)(puVar11 + 0x1f8);
    lVar16 = *plVar12;
    *(long *)(puVar11 + 0x48) = lVar16;
    lVar20 = plVar12[1];
    *(long *)(puVar11 + 0x50) = lVar20;
    if (lVar20 != 0) {
      plVar12 = (long *)(lVar20 + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = *plVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar12 = *(long **)(puVar11 + 0x1f8);
    }
    lVar25 = plVar12[2];
    *(long *)(puVar11 + 0x58) = lVar25;
    lVar17 = plVar12[3];
    *(long *)(puVar11 + 0x60) = lVar17;
    if (lVar17 != 0) {
      plVar12 = (long *)(lVar17 + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = *plVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar12 = *(long **)(puVar11 + 0x1f8);
    }
    uVar6 = (undefined1)plVar12[4];
    uVar26 = *(undefined8 *)(puVar11 + 0x1c8);
    puVar22 = (undefined8 *)(puVar11 + 0x70);
    *puVar22 = uVar26;
    puVar11[0x68] = uVar6;
    lVar24 = *(long *)(puVar11 + 0x1d0);
    *(long *)(puVar11 + 0x78) = lVar24;
    if (lVar24 != 0) {
      plVar12 = (long *)(lVar24 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = *plVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar12 = (long *)puVar23[2];
    pcStack_218 = (code *)0x0;
    puStack_210 = (undefined8 *)0x0;
    if (plVar12 == (long *)0x0) {
      *puVar22 = 0;
      *(undefined8 *)(puVar11 + 0x78) = 0;
      *(undefined8 *)(puVar11 + 0x50) = 0;
      *(undefined8 *)(puVar11 + 0x48) = 0;
      *(undefined8 *)(puVar11 + 0x60) = 0;
      *(undefined8 *)(puVar11 + 0x58) = 0;
      puVar22 = (undefined8 *)0x100;
      __Znwm();
      puVar22[2] = 0;
      puVar22[1] = 0x200000006;
      *(undefined2 *)(puVar22 + 3) = 4;
      puVar22[5] = 0;
      puVar22[4] = 0;
      puVar22[7] = 0;
      puVar22[6] = 0;
      puVar22[9] = 0;
      puVar22[8] = 0;
      puVar22[0xb] = 0;
      puVar22[10] = 0;
      puVar22[0xd] = 0;
      puVar22[0xc] = 0;
      puVar22[0xf] = 0;
      puVar22[0xe] = 0;
      puVar22[0x10] = 0;
      puVar22[0x11] = puVar22 + 3;
      puVar22[0x12] = 0;
      *(undefined1 *)(puVar22 + 0x13) = 0;
      *(undefined1 *)(puVar22 + 0x15) = 0;
      *puVar22 = &PTR_DAT_110c50bd0;
      pcStack_220 = (code *)(puVar22 + 0x16);
      *(long *)pcStack_220 = lVar16;
      puVar22[0x17] = lVar20;
      puVar22[0x18] = lVar25;
      puVar22[0x19] = lVar17;
      *(undefined1 *)(puVar22 + 0x1a) = uVar6;
      puVar22[0x1b] = uVar26;
      puVar22[0x1c] = lVar24;
      *(undefined1 *)(puVar22 + 0x1e) = 1;
      puVar22[0x1f] = 0;
      pcStack_208 = FUN_10abd47d0;
      pcStack_218 = (code *)puVar22;
      puStack_210 = puVar22;
    }
    else {
      pcStack_1e0 = (code *)0x0;
      (**(code **)(*plVar12 + 0x28))(plVar12,0,&pcStack_1e0);
      if (pcStack_1e0 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_1e0);
        goto LAB_10abe03c8;
      }
      *puVar22 = 0;
      *(undefined8 *)(puVar11 + 0x78) = 0;
      *(undefined8 *)(puVar11 + 0x50) = 0;
      *(undefined8 *)(puVar11 + 0x48) = 0;
      *(undefined8 *)(puVar11 + 0x60) = 0;
      *(undefined8 *)(puVar11 + 0x58) = 0;
      puVar22 = (undefined8 *)0x108;
      __Znwm();
      puVar22[2] = 0;
      puVar22[1] = 0x200000006;
      *(undefined2 *)(puVar22 + 3) = 4;
      puVar22[5] = 0;
      puVar22[4] = 0;
      puVar22[7] = 0;
      puVar22[6] = 0;
      puVar22[9] = 0;
      puVar22[8] = 0;
      puVar22[0xb] = 0;
      puVar22[10] = 0;
      puVar22[0xd] = 0;
      puVar22[0xc] = 0;
      puVar22[0xf] = 0;
      puVar22[0xe] = 0;
      puVar22[0x10] = 0;
      puVar22[0x11] = puVar22 + 3;
      puVar22[0x12] = 0;
      *(undefined1 *)(puVar22 + 0x13) = 0;
      *(undefined1 *)(puVar22 + 0x15) = 0;
      puVar22[0x16] = lVar16;
      *puVar22 = &PTR_FUN_110c50b98;
      puVar22[0x17] = lVar20;
      puVar22[0x18] = lVar25;
      puVar22[0x19] = lVar17;
      *(undefined1 *)(puVar22 + 0x1a) = uVar6;
      puVar22[0x1b] = uVar26;
      puVar22[0x1c] = lVar24;
      *(undefined1 *)(puVar22 + 0x1e) = 1;
      puVar22[0x1f] = 0;
      puVar22[0x20] = plVar12;
      if (pcStack_218 != (code *)0x0) {
        puVar1 = (ulong *)((long)pcStack_218 + 8);
        do {
          uVar18 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar18 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar18 & 0x1fffffffc) == 4) {
          do {
            uVar18 = *puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar18 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar18 - 1 == 0) {
            (**(code **)(*(long *)pcStack_218 + 8))();
          }
        }
      }
      pcStack_218 = (code *)puVar22;
      if (puStack_210 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_210);
      }
      pcStack_208 = (code *)0x10abd47a0;
      pcStack_220 = (code *)(puVar22 + 0x16);
      puStack_210 = puVar22;
      __ZNSt13exception_ptrD1Ev(&pcStack_1e0);
    }
    pcVar9 = pcStack_220;
    if (*(long *)(pcStack_220 + 0x48) != 0) {
      func_0x0001092b4274();
    }
    *(undefined8 **)(pcVar9 + 0x48) = puStack_210;
    puStack_210 = (undefined8 *)0x0;
    pcStack_1e0 = pcStack_208;
    pcStack_1d8 = pcStack_220;
    puStack_1d0 = puVar23;
    (**(code **)*puVar23)(puVar23,&pcStack_1e0);
    *(code **)(puVar11 + 200) = pcStack_218;
    pcStack_218 = (code *)0x0;
    if ((puStack_210 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_210), pcStack_218 != (code *)0x0)) {
      puVar1 = (ulong *)((long)pcStack_218 + 8);
      do {
        uVar18 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar18 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar18 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*(long *)pcStack_218 + 8))();
        }
      }
    }
    plVar12 = *(long **)(puVar11 + 0x78);
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 1;
      do {
        lVar16 = *plVar14;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar8) {
          *plVar14 = lVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (*(long *)(puVar11 + 0x60) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(puVar11 + 0x50) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(long *)(puVar11 + 0x48) = *(long *)(puVar11 + 200);
    plVar12 = (long *)(*(long *)(puVar11 + 200) + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar8) {
        *plVar12 = *plVar12 + 4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(puVar11 + 0x48) + 0x10) >> 1 & 1) == 0) {
      puVar11[0x200] = 1;
      lVar16 = *(long *)(puVar11 + 0x48);
      plVar12 = (long *)(lVar16 + 0x10);
      puVar23 = *(undefined8 **)(puVar11 + 0x18);
      do {
        lVar20 = *plVar12;
        if (lVar20 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            pcStack_220 = (code *)0x0;
            puVar13 = (undefined *)(lVar16 + 0x18);
            ppcVar15 = &pcStack_220;
            pcStack_218 = (code *)puVar11;
            puStack_210 = puVar23;
            func_0x000109d1b588(puVar13,ppcVar15);
            *(undefined8 *)(lVar16 + 0x10) = 0;
            goto LAB_10abe0368;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar20 >> 1 & 1) == 0);
    }
  }
  lVar16 = *(long *)(puVar11 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(puVar11 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar16 + 0xa8) & 1) != 0) {
      ppcVar15 = (code **)(lVar16 + 0x98);
      func_0x00010abd38fc(puVar11 + 0x10,ppcVar15);
      plVar12 = *(long **)(puVar11 + 0x48);
      if (plVar12 != (long *)0x0) {
        puVar1 = (ulong *)(plVar12 + 1);
        do {
          uVar18 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar18 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar18 & 0x1fffffffc) == 4) {
          do {
            uVar18 = *puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar18 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar18 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      plVar12 = *(long **)(puVar11 + 200);
      if (plVar12 != (long *)0x0) {
        puVar1 = (ulong *)(plVar12 + 1);
        do {
          uVar18 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar18 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar18 & 0x1fffffffc) == 4) {
          do {
            uVar18 = *puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar18 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar18 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      plVar12 = *(long **)(puVar11 + 0x1d0);
      if (plVar12 != (long *)0x0) {
        plVar14 = plVar12 + 1;
        do {
          lVar16 = *plVar14;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = *(long **)(puVar11 + 0x1c0);
      if (plVar12 != (long *)0x0) {
        plVar14 = plVar12 + 1;
        do {
          lVar16 = *plVar14;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = *(long **)(puVar11 + 0x1b0);
      if (plVar12 != (long *)0x0) {
        plVar14 = plVar12 + 1;
        do {
          lVar16 = *plVar14;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = *(long **)(puVar11 + 0x1a0);
      if (plVar12 != (long *)0x0) {
        plVar14 = plVar12 + 1;
        do {
          lVar16 = *plVar14;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x000109d1a1d0(puVar11 + 0x10);
      __ZdlPv(puVar11);
      puVar13 = puVar11;
LAB_10abe0368:
      auVar30._8_8_ = ppcVar15;
      auVar30._0_8_ = puVar13;
      return auVar30;
    }
  }
  else {
    func_0x0001092af97c(lVar16 + 0x90);
  }
LAB_10abe03c8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10abe03cc);
  (*pcVar9)();
}



/* Entry: 10abdf8c0; end: 10abdfaff;  */

undefined1  [16] FUN_10abdf8c0(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  uint uVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  code **ppcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  code *pcStack_190;
  code *pcStack_188;
  undefined8 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  code *pcStack_150;
  code *pcStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_88;
  uint uStack_80;
  uint uStack_7c;
  ulong uStack_78;
  uint auStack_70 [2];
  uint uStack_68;
  uint uStack_64;
  ulong uStack_60;
  undefined4 uStack_58;
  uint uStack_50;
  uint uStack_4c;
  ulong uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  lVar19 = param_3[1];
  lVar15 = *param_3;
  *(int *)(param_1 + 0xf) = (int)param_3[2];
  param_1[0xe] = lVar19;
  param_1[0xd] = lVar15;
  param_1[0x10] = 0;
  lVar15 = param_3[3];
  param_1[0x10] = lVar15;
  plVar12 = param_2;
  if (lVar15 == 0) {
LAB_10abdf960:
    uVar3 = *(uint *)((long)param_1 + 0x74);
    uVar17 = (ulong)uVar3;
    uVar4 = *(uint *)(param_1 + 0xf);
    bVar5 = *(byte *)(param_1 + 0xd);
    if (bVar5 - 0x24 < 2) {
      uStack_80 = uVar3;
      uStack_7c = uVar4;
      uStack_78 = uVar17;
      uStack_68 = uVar3 >> 1;
      auStack_70[0] = 1;
      uStack_64 = uVar4 >> 1;
      uStack_60 = (ulong)uStack_68;
      uStack_58 = 1;
      uStack_50 = uStack_68;
      uStack_4c = uVar4 >> 1;
      uStack_48 = (ulong)uStack_68;
      uStack_40 = 1;
      uStack_88 = 3;
      lVar15 = 0x48;
LAB_10abdf9ec:
      auStack_70[0] = 1;
      uStack_80 = uVar3;
      uStack_7c = uVar4;
      uStack_78 = uVar17;
    }
    else if (bVar5 == 0x26) {
      uStack_80 = uVar3;
      uStack_7c = uVar4;
      uStack_78 = uVar17 << 1;
      auStack_70[0] = 2;
      uStack_68 = uVar3 >> 1;
      uStack_64 = uVar4 >> 1;
      uStack_60 = uVar17 << 1;
      uStack_58 = 4;
      lVar15 = 0x30;
      uStack_88 = 2;
    }
    else {
      if (bVar5 == 0x23) {
        uStack_80 = uVar3;
        uStack_7c = uVar4;
        uStack_78 = uVar17;
        auStack_70[0] = 1;
        uStack_68 = uVar3 >> 1;
        uStack_64 = uVar4 >> 1;
        uStack_60 = uVar17;
        uStack_88 = 2;
        uStack_58 = 2;
        lVar15 = 0x30;
        goto LAB_10abdf9ec;
      }
      uVar10 = (int)param_1 + 0x68;
      func_0x0001096f1ebc();
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      uStack_80 = uVar3;
      uStack_7c = uVar4;
      uStack_78 = uVar17 * uVar10;
      auStack_70[0] = uVar10;
      uStack_88 = 1;
      lVar15 = 0x18;
    }
  }
  else {
    plVar12 = param_1 + 0x11;
    param_3 = param_3 + 4;
    plVar18 = plVar12;
    do {
      lVar24 = param_3[1];
      lVar19 = *param_3;
      plVar18[2] = param_3[2];
      plVar18[1] = lVar24;
      *plVar18 = lVar19;
      param_3 = param_3 + 3;
      lVar15 = lVar15 + -1;
      plVar18 = plVar18 + 3;
    } while (lVar15 != 0);
    uStack_88 = param_1[0x10];
    if (uStack_88 == 0) goto LAB_10abdf960;
    lVar15 = uStack_88 * 0x18;
    _memcpy(&uStack_80,plVar12,lVar15);
  }
  lVar16 = 0;
  lVar19 = *param_1;
  lVar24 = 8;
  do {
    lVar23 = 0;
    if (param_2 != (long *)0x0) {
      lVar23 = (long)param_2 + lVar16;
    }
    plVar18 = param_1 + lVar19 * 4 + 1;
    *plVar18 = lVar23;
    *(undefined4 *)(plVar18 + 3) = *(undefined4 *)((long)auStack_70 + lVar24 + -8);
    lVar19 = *(long *)((long)&uStack_88 + lVar24);
    plVar18[2] = *(long *)((long)&uStack_80 + lVar24);
    plVar18[1] = lVar19;
    lVar19 = *param_1 + 1;
    *param_1 = lVar19;
    lVar20 = *(long *)((long)&uStack_80 + lVar24);
    lVar23 = -lVar20;
    if (-1 < lVar20) {
      lVar23 = lVar20;
    }
    lVar16 = lVar16 + lVar23 * (ulong)*(uint *)((long)&uStack_88 + lVar24 + 4);
    lVar23 = (long)auStack_70 + lVar24;
    lVar24 = lVar24 + 0x18;
  } while (lVar23 != (long)&uStack_80 + lVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar26._8_8_ = plVar12;
    auVar26._0_8_ = param_1;
    return auVar26;
  }
  ___stack_chk_fail();
  puVar11 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar11 < (undefined *)0x492492492492493) {
    lVar15 = (long)puVar11 * 0x38;
    __Znwm(lVar15);
    auVar27._8_8_ = puVar11;
    auVar27._0_8_ = lVar15;
    return auVar27;
  }
  func_0x000109ffded8();
  if ((puVar11[0x200] & 1) == 0) {
    plVar12 = *(long **)(puVar11 + 0x48);
    if (((uint)*(undefined8 *)(*(long *)(puVar11 + 0x48) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar12 + 0x12);
      goto LAB_10abe03c8;
    }
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar17 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar17 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar17 & 0x1fffffffc) == 4) {
        do {
          uVar17 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar17 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar17 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = *(long **)(puVar11 + 200);
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar17 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar17 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar17 & 0x1fffffffc) == 4) {
        do {
          uVar17 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar17 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar17 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    FUN_10abd3728(&pcStack_150,puVar11 + 0x1e8);
    FUN_10abd3728(&uStack_138,puVar11 + 0x1f0);
    pcStack_188 = pcStack_148;
    pcStack_190 = pcStack_150;
    puStack_180 = puStack_140;
    uStack_170 = uStack_130;
    pcStack_178 = (code *)uStack_138;
    uStack_168 = uStack_128;
    uStack_160 = 1;
    func_0x00010a225c4c(*(long *)(puVar11 + 0x1f8) + 0x90);
    *(code **)(puVar11 + 0x148) = pcStack_188;
    *(code **)(puVar11 + 0x140) = pcStack_190;
    *(undefined8 **)(puVar11 + 0x150) = puStack_180;
    pcStack_190 = (code *)0x0;
    pcStack_188 = (code *)0x0;
    *(undefined8 *)(puVar11 + 0x160) = uStack_170;
    *(code **)(puVar11 + 0x158) = pcStack_178;
    *(undefined8 *)(puVar11 + 0x168) = uStack_168;
    puStack_180 = (undefined8 *)0x0;
    pcStack_178 = (code *)0x0;
    uStack_170 = 0;
    uStack_168 = 0;
    puVar11[0x170] = 1;
    (**(code **)(**(long **)(puVar11 + 0x1a8) + 0x28))
              (&pcStack_150,*(long **)(puVar11 + 0x1a8),*(long *)(puVar11 + 0x198) + 0x20,
               *(long *)(puVar11 + 0x1f8) + 0x50,*(undefined8 *)(puVar11 + 0x1d8),puVar11 + 0x140);
    func_0x00010abd3858(puVar11 + 0x1c8,&pcStack_150);
    pcVar9 = pcStack_148;
    if (pcStack_148 != (code *)0x0) {
      pcVar2 = pcStack_148 + 8;
      do {
        lVar15 = *(long *)pcVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *(long *)pcVar2 = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*(long *)pcStack_148 + 0x10))(pcStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar9);
      }
    }
    FUN_10a186da0(puVar11 + 0x140);
    FUN_10a186da0(&pcStack_190);
    plVar12 = *(long **)(puVar11 + 0x1f0);
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar17 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar17 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar17 & 0x1fffffffc) == 4) {
        do {
          uVar17 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar17 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar17 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = *(long **)(puVar11 + 0x1e8);
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar17 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar17 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar17 & 0x1fffffffc) == 4) {
        do {
          uVar17 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar17 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar17 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = *(long **)(puVar11 + 0x1e0);
    if (plVar12 != (long *)0x0) {
      plVar18 = plVar12 + 1;
      do {
        lVar15 = *plVar18;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar8) {
          *plVar18 = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    puVar22 = *(undefined8 **)(puVar11 + 0x1b8);
    plVar12 = *(long **)(puVar11 + 0x1f8);
    lVar15 = *plVar12;
    *(long *)(puVar11 + 0x48) = lVar15;
    lVar19 = plVar12[1];
    *(long *)(puVar11 + 0x50) = lVar19;
    if (lVar19 != 0) {
      plVar12 = (long *)(lVar19 + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = *plVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar12 = *(long **)(puVar11 + 0x1f8);
    }
    lVar24 = plVar12[2];
    *(long *)(puVar11 + 0x58) = lVar24;
    lVar16 = plVar12[3];
    *(long *)(puVar11 + 0x60) = lVar16;
    if (lVar16 != 0) {
      plVar12 = (long *)(lVar16 + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = *plVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar12 = *(long **)(puVar11 + 0x1f8);
    }
    uVar6 = (undefined1)plVar12[4];
    uVar25 = *(undefined8 *)(puVar11 + 0x1c8);
    puVar21 = (undefined8 *)(puVar11 + 0x70);
    *puVar21 = uVar25;
    puVar11[0x68] = uVar6;
    lVar23 = *(long *)(puVar11 + 0x1d0);
    *(long *)(puVar11 + 0x78) = lVar23;
    if (lVar23 != 0) {
      plVar12 = (long *)(lVar23 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = *plVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar12 = (long *)puVar22[2];
    pcStack_188 = (code *)0x0;
    puStack_180 = (undefined8 *)0x0;
    if (plVar12 == (long *)0x0) {
      *puVar21 = 0;
      *(undefined8 *)(puVar11 + 0x78) = 0;
      *(undefined8 *)(puVar11 + 0x50) = 0;
      *(undefined8 *)(puVar11 + 0x48) = 0;
      *(undefined8 *)(puVar11 + 0x60) = 0;
      *(undefined8 *)(puVar11 + 0x58) = 0;
      puVar21 = (undefined8 *)0x100;
      __Znwm();
      puVar21[2] = 0;
      puVar21[1] = 0x200000006;
      *(undefined2 *)(puVar21 + 3) = 4;
      puVar21[5] = 0;
      puVar21[4] = 0;
      puVar21[7] = 0;
      puVar21[6] = 0;
      puVar21[9] = 0;
      puVar21[8] = 0;
      puVar21[0xb] = 0;
      puVar21[10] = 0;
      puVar21[0xd] = 0;
      puVar21[0xc] = 0;
      puVar21[0xf] = 0;
      puVar21[0xe] = 0;
      puVar21[0x10] = 0;
      puVar21[0x11] = puVar21 + 3;
      puVar21[0x12] = 0;
      *(undefined1 *)(puVar21 + 0x13) = 0;
      *(undefined1 *)(puVar21 + 0x15) = 0;
      *puVar21 = &PTR_DAT_110c50bd0;
      pcStack_190 = (code *)(puVar21 + 0x16);
      *(long *)pcStack_190 = lVar15;
      puVar21[0x17] = lVar19;
      puVar21[0x18] = lVar24;
      puVar21[0x19] = lVar16;
      *(undefined1 *)(puVar21 + 0x1a) = uVar6;
      puVar21[0x1b] = uVar25;
      puVar21[0x1c] = lVar23;
      *(undefined1 *)(puVar21 + 0x1e) = 1;
      puVar21[0x1f] = 0;
      pcStack_178 = FUN_10abd47d0;
      pcStack_188 = (code *)puVar21;
      puStack_180 = puVar21;
    }
    else {
      pcStack_150 = (code *)0x0;
      (**(code **)(*plVar12 + 0x28))(plVar12,0,&pcStack_150);
      if (pcStack_150 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_150);
        goto LAB_10abe03c8;
      }
      *puVar21 = 0;
      *(undefined8 *)(puVar11 + 0x78) = 0;
      *(undefined8 *)(puVar11 + 0x50) = 0;
      *(undefined8 *)(puVar11 + 0x48) = 0;
      *(undefined8 *)(puVar11 + 0x60) = 0;
      *(undefined8 *)(puVar11 + 0x58) = 0;
      puVar21 = (undefined8 *)0x108;
      __Znwm();
      puVar21[2] = 0;
      puVar21[1] = 0x200000006;
      *(undefined2 *)(puVar21 + 3) = 4;
      puVar21[5] = 0;
      puVar21[4] = 0;
      puVar21[7] = 0;
      puVar21[6] = 0;
      puVar21[9] = 0;
      puVar21[8] = 0;
      puVar21[0xb] = 0;
      puVar21[10] = 0;
      puVar21[0xd] = 0;
      puVar21[0xc] = 0;
      puVar21[0xf] = 0;
      puVar21[0xe] = 0;
      puVar21[0x10] = 0;
      puVar21[0x11] = puVar21 + 3;
      puVar21[0x12] = 0;
      *(undefined1 *)(puVar21 + 0x13) = 0;
      *(undefined1 *)(puVar21 + 0x15) = 0;
      puVar21[0x16] = lVar15;
      *puVar21 = &PTR_FUN_110c50b98;
      puVar21[0x17] = lVar19;
      puVar21[0x18] = lVar24;
      puVar21[0x19] = lVar16;
      *(undefined1 *)(puVar21 + 0x1a) = uVar6;
      puVar21[0x1b] = uVar25;
      puVar21[0x1c] = lVar23;
      *(undefined1 *)(puVar21 + 0x1e) = 1;
      puVar21[0x1f] = 0;
      puVar21[0x20] = plVar12;
      if (pcStack_188 != (code *)0x0) {
        puVar1 = (ulong *)((long)pcStack_188 + 8);
        do {
          uVar17 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar17 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar17 & 0x1fffffffc) == 4) {
          do {
            uVar17 = *puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar17 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar17 - 1 == 0) {
            (**(code **)(*(long *)pcStack_188 + 8))();
          }
        }
      }
      pcStack_188 = (code *)puVar21;
      if (puStack_180 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_180);
      }
      pcStack_178 = (code *)0x10abd47a0;
      pcStack_190 = (code *)(puVar21 + 0x16);
      puStack_180 = puVar21;
      __ZNSt13exception_ptrD1Ev(&pcStack_150);
    }
    pcVar9 = pcStack_190;
    if (*(long *)(pcStack_190 + 0x48) != 0) {
      func_0x0001092b4274();
    }
    *(undefined8 **)(pcVar9 + 0x48) = puStack_180;
    puStack_180 = (undefined8 *)0x0;
    pcStack_150 = pcStack_178;
    pcStack_148 = pcStack_190;
    puStack_140 = puVar22;
    (**(code **)*puVar22)(puVar22,&pcStack_150);
    *(code **)(puVar11 + 200) = pcStack_188;
    pcStack_188 = (code *)0x0;
    if ((puStack_180 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_180), pcStack_188 != (code *)0x0)) {
      puVar1 = (ulong *)((long)pcStack_188 + 8);
      do {
        uVar17 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar17 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar17 & 0x1fffffffc) == 4) {
        do {
          uVar17 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar17 - 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (uVar17 - 1 == 0) {
          (**(code **)(*(long *)pcStack_188 + 8))();
        }
      }
    }
    plVar12 = *(long **)(puVar11 + 0x78);
    if (plVar12 != (long *)0x0) {
      plVar18 = plVar12 + 1;
      do {
        lVar15 = *plVar18;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar8) {
          *plVar18 = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (*(long *)(puVar11 + 0x60) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(puVar11 + 0x50) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(long *)(puVar11 + 0x48) = *(long *)(puVar11 + 200);
    plVar12 = (long *)(*(long *)(puVar11 + 200) + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar8) {
        *plVar12 = *plVar12 + 4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(puVar11 + 0x48) + 0x10) >> 1 & 1) == 0) {
      puVar11[0x200] = 1;
      lVar15 = *(long *)(puVar11 + 0x48);
      plVar12 = (long *)(lVar15 + 0x10);
      puVar22 = *(undefined8 **)(puVar11 + 0x18);
      do {
        lVar19 = *plVar12;
        if (lVar19 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            pcStack_190 = (code *)0x0;
            puVar13 = (undefined *)(lVar15 + 0x18);
            ppcVar14 = &pcStack_190;
            pcStack_188 = (code *)puVar11;
            puStack_180 = puVar22;
            func_0x000109d1b588(puVar13,ppcVar14);
            *(undefined8 *)(lVar15 + 0x10) = 0;
            goto LAB_10abe0368;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar19 >> 1 & 1) == 0);
    }
  }
  lVar15 = *(long *)(puVar11 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(puVar11 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar15 + 0xa8) & 1) != 0) {
      ppcVar14 = (code **)(lVar15 + 0x98);
      func_0x00010abd38fc(puVar11 + 0x10,ppcVar14);
      plVar12 = *(long **)(puVar11 + 0x48);
      if (plVar12 != (long *)0x0) {
        puVar1 = (ulong *)(plVar12 + 1);
        do {
          uVar17 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar17 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar17 & 0x1fffffffc) == 4) {
          do {
            uVar17 = *puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar17 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar17 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      plVar12 = *(long **)(puVar11 + 200);
      if (plVar12 != (long *)0x0) {
        puVar1 = (ulong *)(plVar12 + 1);
        do {
          uVar17 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar17 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar17 & 0x1fffffffc) == 4) {
          do {
            uVar17 = *puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar17 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar17 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      plVar12 = *(long **)(puVar11 + 0x1d0);
      if (plVar12 != (long *)0x0) {
        plVar18 = plVar12 + 1;
        do {
          lVar15 = *plVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = *(long **)(puVar11 + 0x1c0);
      if (plVar12 != (long *)0x0) {
        plVar18 = plVar12 + 1;
        do {
          lVar15 = *plVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = *(long **)(puVar11 + 0x1b0);
      if (plVar12 != (long *)0x0) {
        plVar18 = plVar12 + 1;
        do {
          lVar15 = *plVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = *(long **)(puVar11 + 0x1a0);
      if (plVar12 != (long *)0x0) {
        plVar18 = plVar12 + 1;
        do {
          lVar15 = *plVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x000109d1a1d0(puVar11 + 0x10);
      __ZdlPv(puVar11);
      puVar13 = puVar11;
LAB_10abe0368:
      auVar28._8_8_ = ppcVar14;
      auVar28._0_8_ = puVar13;
      return auVar28;
    }
  }
  else {
    func_0x0001092af97c(lVar15 + 0x90);
  }
LAB_10abe03c8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10abe03cc);
  (*pcVar9)();
}



/* Entry: 10abdfb00; end: 10abdfb13;  */

void FUN_10abdfb00(void)

{
  ulong *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  code *pcStack_100;
  code *pcStack_f8;
  undefined8 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  code *pcStack_c0;
  code *pcStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar8 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar8 < (undefined *)0x492492492492493) {
    __Znwm((long)puVar8 * 0x38);
    return;
  }
  func_0x000109ffded8();
  if ((puVar8[0x200] & 1) == 0) {
    plVar9 = *(long **)(puVar8 + 0x48);
    if (((uint)*(undefined8 *)(*(long *)(puVar8 + 0x48) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar9 + 0x12);
      goto LAB_10abe03c8;
    }
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar10 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar10 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar10 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = *(long **)(puVar8 + 200);
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar10 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar10 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar10 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    FUN_10abd3728(&pcStack_c0,puVar8 + 0x1e8);
    FUN_10abd3728(&uStack_a8,puVar8 + 0x1f0);
    pcStack_f8 = pcStack_b8;
    pcStack_100 = pcStack_c0;
    puStack_f0 = puStack_b0;
    uStack_e0 = uStack_a0;
    pcStack_e8 = (code *)uStack_a8;
    uStack_d8 = uStack_98;
    uStack_d0 = 1;
    func_0x00010a225c4c(*(long *)(puVar8 + 0x1f8) + 0x90);
    *(code **)(puVar8 + 0x148) = pcStack_f8;
    *(code **)(puVar8 + 0x140) = pcStack_100;
    *(undefined8 **)(puVar8 + 0x150) = puStack_f0;
    pcStack_100 = (code *)0x0;
    pcStack_f8 = (code *)0x0;
    *(undefined8 *)(puVar8 + 0x160) = uStack_e0;
    *(code **)(puVar8 + 0x158) = pcStack_e8;
    *(undefined8 *)(puVar8 + 0x168) = uStack_d8;
    puStack_f0 = (undefined8 *)0x0;
    pcStack_e8 = (code *)0x0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    puVar8[0x170] = 1;
    (**(code **)(**(long **)(puVar8 + 0x1a8) + 0x28))
              (&pcStack_c0,*(long **)(puVar8 + 0x1a8),*(long *)(puVar8 + 0x198) + 0x20,
               *(long *)(puVar8 + 0x1f8) + 0x50,*(undefined8 *)(puVar8 + 0x1d8),puVar8 + 0x140);
    func_0x00010abd3858(puVar8 + 0x1c8,&pcStack_c0);
    pcVar7 = pcStack_b8;
    if (pcStack_b8 != (code *)0x0) {
      pcVar2 = pcStack_b8 + 8;
      do {
        lVar11 = *(long *)pcVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar6) {
          *(long *)pcVar2 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*(long *)pcStack_b8 + 0x10))(pcStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar7);
      }
    }
    FUN_10a186da0(puVar8 + 0x140);
    FUN_10a186da0(&pcStack_100);
    plVar9 = *(long **)(puVar8 + 0x1f0);
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar10 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar10 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar10 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = *(long **)(puVar8 + 0x1e8);
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar10 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar10 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar10 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = *(long **)(puVar8 + 0x1e0);
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 1;
      do {
        lVar11 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    puVar13 = *(undefined8 **)(puVar8 + 0x1b8);
    plVar9 = *(long **)(puVar8 + 0x1f8);
    lVar11 = *plVar9;
    *(long *)(puVar8 + 0x48) = lVar11;
    lVar14 = plVar9[1];
    *(long *)(puVar8 + 0x50) = lVar14;
    if (lVar14 != 0) {
      plVar9 = (long *)(lVar14 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar9 = *(long **)(puVar8 + 0x1f8);
    }
    lVar16 = plVar9[2];
    *(long *)(puVar8 + 0x58) = lVar16;
    lVar17 = plVar9[3];
    *(long *)(puVar8 + 0x60) = lVar17;
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar9 = *(long **)(puVar8 + 0x1f8);
    }
    uVar4 = (undefined1)plVar9[4];
    uVar18 = *(undefined8 *)(puVar8 + 0x1c8);
    puVar12 = (undefined8 *)(puVar8 + 0x70);
    *puVar12 = uVar18;
    puVar8[0x68] = uVar4;
    lVar15 = *(long *)(puVar8 + 0x1d0);
    *(long *)(puVar8 + 0x78) = lVar15;
    if (lVar15 != 0) {
      plVar9 = (long *)(lVar15 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = (long *)puVar13[2];
    pcStack_f8 = (code *)0x0;
    puStack_f0 = (undefined8 *)0x0;
    if (plVar9 == (long *)0x0) {
      *puVar12 = 0;
      *(undefined8 *)(puVar8 + 0x78) = 0;
      *(undefined8 *)(puVar8 + 0x50) = 0;
      *(undefined8 *)(puVar8 + 0x48) = 0;
      *(undefined8 *)(puVar8 + 0x60) = 0;
      *(undefined8 *)(puVar8 + 0x58) = 0;
      puVar12 = (undefined8 *)0x100;
      __Znwm();
      puVar12[2] = 0;
      puVar12[1] = 0x200000006;
      *(undefined2 *)(puVar12 + 3) = 4;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[7] = 0;
      puVar12[6] = 0;
      puVar12[9] = 0;
      puVar12[8] = 0;
      puVar12[0xb] = 0;
      puVar12[10] = 0;
      puVar12[0xd] = 0;
      puVar12[0xc] = 0;
      puVar12[0xf] = 0;
      puVar12[0xe] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = puVar12 + 3;
      puVar12[0x12] = 0;
      *(undefined1 *)(puVar12 + 0x13) = 0;
      *(undefined1 *)(puVar12 + 0x15) = 0;
      *puVar12 = &PTR_DAT_110c50bd0;
      pcStack_100 = (code *)(puVar12 + 0x16);
      *(long *)pcStack_100 = lVar11;
      puVar12[0x17] = lVar14;
      puVar12[0x18] = lVar16;
      puVar12[0x19] = lVar17;
      *(undefined1 *)(puVar12 + 0x1a) = uVar4;
      puVar12[0x1b] = uVar18;
      puVar12[0x1c] = lVar15;
      *(undefined1 *)(puVar12 + 0x1e) = 1;
      puVar12[0x1f] = 0;
      pcStack_e8 = FUN_10abd47d0;
      pcStack_f8 = (code *)puVar12;
      puStack_f0 = puVar12;
    }
    else {
      pcStack_c0 = (code *)0x0;
      (**(code **)(*plVar9 + 0x28))(plVar9,0,&pcStack_c0);
      if (pcStack_c0 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_c0);
        goto LAB_10abe03c8;
      }
      *puVar12 = 0;
      *(undefined8 *)(puVar8 + 0x78) = 0;
      *(undefined8 *)(puVar8 + 0x50) = 0;
      *(undefined8 *)(puVar8 + 0x48) = 0;
      *(undefined8 *)(puVar8 + 0x60) = 0;
      *(undefined8 *)(puVar8 + 0x58) = 0;
      puVar12 = (undefined8 *)0x108;
      __Znwm();
      puVar12[2] = 0;
      puVar12[1] = 0x200000006;
      *(undefined2 *)(puVar12 + 3) = 4;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[7] = 0;
      puVar12[6] = 0;
      puVar12[9] = 0;
      puVar12[8] = 0;
      puVar12[0xb] = 0;
      puVar12[10] = 0;
      puVar12[0xd] = 0;
      puVar12[0xc] = 0;
      puVar12[0xf] = 0;
      puVar12[0xe] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = puVar12 + 3;
      puVar12[0x12] = 0;
      *(undefined1 *)(puVar12 + 0x13) = 0;
      *(undefined1 *)(puVar12 + 0x15) = 0;
      puVar12[0x16] = lVar11;
      *puVar12 = &PTR_FUN_110c50b98;
      puVar12[0x17] = lVar14;
      puVar12[0x18] = lVar16;
      puVar12[0x19] = lVar17;
      *(undefined1 *)(puVar12 + 0x1a) = uVar4;
      puVar12[0x1b] = uVar18;
      puVar12[0x1c] = lVar15;
      *(undefined1 *)(puVar12 + 0x1e) = 1;
      puVar12[0x1f] = 0;
      puVar12[0x20] = plVar9;
      if (pcStack_f8 != (code *)0x0) {
        puVar1 = (ulong *)((long)pcStack_f8 + 8);
        do {
          uVar10 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar10 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar10 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*(long *)pcStack_f8 + 8))();
          }
        }
      }
      pcStack_f8 = (code *)puVar12;
      if (puStack_f0 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_f0);
      }
      pcStack_e8 = (code *)0x10abd47a0;
      pcStack_100 = (code *)(puVar12 + 0x16);
      puStack_f0 = puVar12;
      __ZNSt13exception_ptrD1Ev(&pcStack_c0);
    }
    pcVar7 = pcStack_100;
    if (*(long *)(pcStack_100 + 0x48) != 0) {
      func_0x0001092b4274();
    }
    *(undefined8 **)(pcVar7 + 0x48) = puStack_f0;
    puStack_f0 = (undefined8 *)0x0;
    pcStack_c0 = pcStack_e8;
    pcStack_b8 = pcStack_100;
    puStack_b0 = puVar13;
    (**(code **)*puVar13)(puVar13,&pcStack_c0);
    *(code **)(puVar8 + 200) = pcStack_f8;
    pcStack_f8 = (code *)0x0;
    if ((puStack_f0 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_f0), pcStack_f8 != (code *)0x0)) {
      puVar1 = (ulong *)((long)pcStack_f8 + 8);
      do {
        uVar10 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar10 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar10 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*(long *)pcStack_f8 + 8))();
        }
      }
    }
    plVar9 = *(long **)(puVar8 + 0x78);
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 1;
      do {
        lVar11 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (*(long *)(puVar8 + 0x60) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(puVar8 + 0x50) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(long *)(puVar8 + 0x48) = *(long *)(puVar8 + 200);
    plVar9 = (long *)(*(long *)(puVar8 + 200) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(puVar8 + 0x48) + 0x10) >> 1 & 1) == 0) {
      puVar8[0x200] = 1;
      lVar11 = *(long *)(puVar8 + 0x48);
      plVar9 = (long *)(lVar11 + 0x10);
      puVar13 = *(undefined8 **)(puVar8 + 0x18);
      do {
        lVar14 = *plVar9;
        if (lVar14 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            pcStack_100 = (code *)0x0;
            pcStack_f8 = (code *)puVar8;
            puStack_f0 = puVar13;
            func_0x000109d1b588(lVar11 + 0x18,&pcStack_100);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
  }
  lVar11 = *(long *)(puVar8 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(puVar8 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar11 + 0xa8) & 1) != 0) {
      func_0x00010abd38fc(puVar8 + 0x10,lVar11 + 0x98);
      plVar9 = *(long **)(puVar8 + 0x48);
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar10 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar10 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar10 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      plVar9 = *(long **)(puVar8 + 200);
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar10 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar10 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar10 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      plVar9 = *(long **)(puVar8 + 0x1d0);
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 1;
        do {
          lVar11 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = *(long **)(puVar8 + 0x1c0);
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 1;
        do {
          lVar11 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = *(long **)(puVar8 + 0x1b0);
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 1;
        do {
          lVar11 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = *(long **)(puVar8 + 0x1a0);
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 1;
        do {
          lVar11 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x000109d1a1d0(puVar8 + 0x10);
      __ZdlPv(puVar8);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar11 + 0x90);
  }
LAB_10abe03c8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10abe03cc);
  (*pcVar7)();
}



/* Entry: 10abdfb14; end: 10abdfb5b;  */

void FUN_10abdfb14(ulong param_1)

{
  ulong *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  code *pcStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  code *pcStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (param_1 < 0x492492492492493) {
    __Znwm(param_1 * 0x38);
    return;
  }
  func_0x000109ffded8();
  if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
    plVar8 = *(long **)(param_1 + 0x48);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar8 + 0x12);
      goto LAB_10abe03c8;
    }
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar9 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = *(long **)(param_1 + 200);
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar9 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    FUN_10abd3728(&pcStack_b0,param_1 + 0x1e8);
    FUN_10abd3728(&uStack_98,param_1 + 0x1f0);
    pcStack_e8 = pcStack_a8;
    pcStack_f0 = pcStack_b0;
    puStack_e0 = puStack_a0;
    uStack_d0 = uStack_90;
    pcStack_d8 = (code *)uStack_98;
    uStack_c8 = uStack_88;
    uStack_c0 = 1;
    func_0x00010a225c4c(*(long *)(param_1 + 0x1f8) + 0x90);
    *(code **)(param_1 + 0x148) = pcStack_e8;
    *(code **)(param_1 + 0x140) = pcStack_f0;
    *(undefined8 **)(param_1 + 0x150) = puStack_e0;
    pcStack_f0 = (code *)0x0;
    pcStack_e8 = (code *)0x0;
    *(undefined8 *)(param_1 + 0x160) = uStack_d0;
    *(code **)(param_1 + 0x158) = pcStack_d8;
    *(undefined8 *)(param_1 + 0x168) = uStack_c8;
    puStack_e0 = (undefined8 *)0x0;
    pcStack_d8 = (code *)0x0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    *(undefined1 *)(param_1 + 0x170) = 1;
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0x28))
              (&pcStack_b0,*(long **)(param_1 + 0x1a8),*(long *)(param_1 + 0x198) + 0x20,
               *(long *)(param_1 + 0x1f8) + 0x50,*(undefined8 *)(param_1 + 0x1d8),param_1 + 0x140);
    func_0x00010abd3858(param_1 + 0x1c8,&pcStack_b0);
    pcVar7 = pcStack_a8;
    if (pcStack_a8 != (code *)0x0) {
      pcVar2 = pcStack_a8 + 8;
      do {
        lVar10 = *(long *)pcVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar6) {
          *(long *)pcVar2 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)pcStack_a8 + 0x10))(pcStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar7);
      }
    }
    FUN_10a186da0(param_1 + 0x140);
    FUN_10a186da0(&pcStack_f0);
    plVar8 = *(long **)(param_1 + 0x1f0);
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar9 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = *(long **)(param_1 + 0x1e8);
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar9 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = *(long **)(param_1 + 0x1e0);
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 1;
      do {
        lVar10 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x1b8);
    plVar8 = *(long **)(param_1 + 0x1f8);
    lVar10 = *plVar8;
    *(long *)(param_1 + 0x48) = lVar10;
    lVar13 = plVar8[1];
    *(long *)(param_1 + 0x50) = lVar13;
    if (lVar13 != 0) {
      plVar8 = (long *)(lVar13 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = *(long **)(param_1 + 0x1f8);
    }
    lVar15 = plVar8[2];
    *(long *)(param_1 + 0x58) = lVar15;
    lVar16 = plVar8[3];
    *(long *)(param_1 + 0x60) = lVar16;
    if (lVar16 != 0) {
      plVar8 = (long *)(lVar16 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = *(long **)(param_1 + 0x1f8);
    }
    uVar4 = (undefined1)plVar8[4];
    uVar17 = *(undefined8 *)(param_1 + 0x1c8);
    puVar11 = (undefined8 *)(param_1 + 0x70);
    *puVar11 = uVar17;
    *(undefined1 *)(param_1 + 0x68) = uVar4;
    lVar14 = *(long *)(param_1 + 0x1d0);
    *(long *)(param_1 + 0x78) = lVar14;
    if (lVar14 != 0) {
      plVar8 = (long *)(lVar14 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8 = (long *)puVar12[2];
    pcStack_e8 = (code *)0x0;
    puStack_e0 = (undefined8 *)0x0;
    if (plVar8 == (long *)0x0) {
      *puVar11 = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      puVar11 = (undefined8 *)0x100;
      __Znwm();
      puVar11[2] = 0;
      puVar11[1] = 0x200000006;
      *(undefined2 *)(puVar11 + 3) = 4;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = puVar11 + 3;
      puVar11[0x12] = 0;
      *(undefined1 *)(puVar11 + 0x13) = 0;
      *(undefined1 *)(puVar11 + 0x15) = 0;
      *puVar11 = &PTR_DAT_110c50bd0;
      pcStack_f0 = (code *)(puVar11 + 0x16);
      *(long *)pcStack_f0 = lVar10;
      puVar11[0x17] = lVar13;
      puVar11[0x18] = lVar15;
      puVar11[0x19] = lVar16;
      *(undefined1 *)(puVar11 + 0x1a) = uVar4;
      puVar11[0x1b] = uVar17;
      puVar11[0x1c] = lVar14;
      *(undefined1 *)(puVar11 + 0x1e) = 1;
      puVar11[0x1f] = 0;
      pcStack_d8 = FUN_10abd47d0;
      pcStack_e8 = (code *)puVar11;
      puStack_e0 = puVar11;
    }
    else {
      pcStack_b0 = (code *)0x0;
      (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_b0);
      if (pcStack_b0 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_b0);
        goto LAB_10abe03c8;
      }
      *puVar11 = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      puVar11 = (undefined8 *)0x108;
      __Znwm();
      puVar11[2] = 0;
      puVar11[1] = 0x200000006;
      *(undefined2 *)(puVar11 + 3) = 4;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = puVar11 + 3;
      puVar11[0x12] = 0;
      *(undefined1 *)(puVar11 + 0x13) = 0;
      *(undefined1 *)(puVar11 + 0x15) = 0;
      puVar11[0x16] = lVar10;
      *puVar11 = &PTR_FUN_110c50b98;
      puVar11[0x17] = lVar13;
      puVar11[0x18] = lVar15;
      puVar11[0x19] = lVar16;
      *(undefined1 *)(puVar11 + 0x1a) = uVar4;
      puVar11[0x1b] = uVar17;
      puVar11[0x1c] = lVar14;
      *(undefined1 *)(puVar11 + 0x1e) = 1;
      puVar11[0x1f] = 0;
      puVar11[0x20] = plVar8;
      if (pcStack_e8 != (code *)0x0) {
        puVar1 = (ulong *)((long)pcStack_e8 + 8);
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar9 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*(long *)pcStack_e8 + 8))();
          }
        }
      }
      pcStack_e8 = (code *)puVar11;
      if (puStack_e0 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_e0);
      }
      pcStack_d8 = (code *)0x10abd47a0;
      pcStack_f0 = (code *)(puVar11 + 0x16);
      puStack_e0 = puVar11;
      __ZNSt13exception_ptrD1Ev(&pcStack_b0);
    }
    pcVar7 = pcStack_f0;
    if (*(long *)(pcStack_f0 + 0x48) != 0) {
      func_0x0001092b4274();
    }
    *(undefined8 **)(pcVar7 + 0x48) = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
    pcStack_b0 = pcStack_d8;
    pcStack_a8 = pcStack_f0;
    puStack_a0 = puVar12;
    (**(code **)*puVar12)(puVar12,&pcStack_b0);
    *(code **)(param_1 + 200) = pcStack_e8;
    pcStack_e8 = (code *)0x0;
    if ((puStack_e0 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_e0), pcStack_e8 != (code *)0x0)) {
      puVar1 = (ulong *)((long)pcStack_e8 + 8);
      do {
        uVar9 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*(long *)pcStack_e8 + 8))();
        }
      }
    }
    plVar8 = *(long **)(param_1 + 0x78);
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 1;
      do {
        lVar10 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 200);
    plVar8 = (long *)(*(long *)(param_1 + 200) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x200) = 1;
      lVar10 = *(long *)(param_1 + 0x48);
      plVar8 = (long *)(lVar10 + 0x10);
      puVar12 = *(undefined8 **)(param_1 + 0x18);
      do {
        lVar13 = *plVar8;
        if (lVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            pcStack_f0 = (code *)0x0;
            pcStack_e8 = (code *)param_1;
            puStack_e0 = puVar12;
            func_0x000109d1b588(lVar10 + 0x18,&pcStack_f0);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
  }
  lVar10 = *(long *)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar10 + 0xa8) & 1) != 0) {
      func_0x00010abd38fc(param_1 + 0x10,lVar10 + 0x98);
      plVar8 = *(long **)(param_1 + 0x48);
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar9 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = *(long **)(param_1 + 200);
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar9 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = *(long **)(param_1 + 0x1d0);
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 1;
        do {
          lVar10 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)(param_1 + 0x1c0);
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 1;
        do {
          lVar10 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)(param_1 + 0x1b0);
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 1;
        do {
          lVar10 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)(param_1 + 0x1a0);
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 1;
        do {
          lVar10 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar10 + 0x90);
  }
LAB_10abe03c8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10abe03cc);
  (*pcVar7)();
}



/* Entry: 10abdfb5c; end: 10abe062b;  */

void FUN_10abdfb5c(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
    plVar8 = *(long **)(param_1 + 0x48);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar8 + 0x12);
      goto LAB_10abe03c8;
    }
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar9 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = *(long **)(param_1 + 200);
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar9 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    FUN_10abd3728(&pcStack_90,param_1 + 0x1e8);
    FUN_10abd3728(&uStack_78,param_1 + 0x1f0);
    pcStack_c8 = pcStack_88;
    pcStack_d0 = pcStack_90;
    puStack_c0 = puStack_80;
    uStack_b0 = uStack_70;
    pcStack_b8 = (code *)uStack_78;
    uStack_a8 = uStack_68;
    uStack_a0 = 1;
    func_0x00010a225c4c(*(long *)(param_1 + 0x1f8) + 0x90);
    *(code **)(param_1 + 0x148) = pcStack_c8;
    *(code **)(param_1 + 0x140) = pcStack_d0;
    *(undefined8 **)(param_1 + 0x150) = puStack_c0;
    pcStack_d0 = (code *)0x0;
    pcStack_c8 = (code *)0x0;
    *(undefined8 *)(param_1 + 0x160) = uStack_b0;
    *(code **)(param_1 + 0x158) = pcStack_b8;
    *(undefined8 *)(param_1 + 0x168) = uStack_a8;
    puStack_c0 = (undefined8 *)0x0;
    pcStack_b8 = (code *)0x0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    *(undefined1 *)(param_1 + 0x170) = 1;
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0x28))
              (&pcStack_90,*(long **)(param_1 + 0x1a8),*(long *)(param_1 + 0x198) + 0x20,
               *(long *)(param_1 + 0x1f8) + 0x50,*(undefined8 *)(param_1 + 0x1d8),param_1 + 0x140);
    func_0x00010abd3858(param_1 + 0x1c8,&pcStack_90);
    pcVar7 = pcStack_88;
    if (pcStack_88 != (code *)0x0) {
      pcVar2 = pcStack_88 + 8;
      do {
        lVar10 = *(long *)pcVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar6) {
          *(long *)pcVar2 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)pcStack_88 + 0x10))(pcStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar7);
      }
    }
    FUN_10a186da0(param_1 + 0x140);
    FUN_10a186da0(&pcStack_d0);
    plVar8 = *(long **)(param_1 + 0x1f0);
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar9 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = *(long **)(param_1 + 0x1e8);
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar9 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = *(long **)(param_1 + 0x1e0);
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 1;
      do {
        lVar10 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x1b8);
    plVar8 = *(long **)(param_1 + 0x1f8);
    lVar10 = *plVar8;
    *(long *)(param_1 + 0x48) = lVar10;
    lVar13 = plVar8[1];
    *(long *)(param_1 + 0x50) = lVar13;
    if (lVar13 != 0) {
      plVar8 = (long *)(lVar13 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = *(long **)(param_1 + 0x1f8);
    }
    lVar15 = plVar8[2];
    *(long *)(param_1 + 0x58) = lVar15;
    lVar16 = plVar8[3];
    *(long *)(param_1 + 0x60) = lVar16;
    if (lVar16 != 0) {
      plVar8 = (long *)(lVar16 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = *(long **)(param_1 + 0x1f8);
    }
    uVar4 = (undefined1)plVar8[4];
    uVar17 = *(undefined8 *)(param_1 + 0x1c8);
    puVar11 = (undefined8 *)(param_1 + 0x70);
    *puVar11 = uVar17;
    *(undefined1 *)(param_1 + 0x68) = uVar4;
    lVar14 = *(long *)(param_1 + 0x1d0);
    *(long *)(param_1 + 0x78) = lVar14;
    if (lVar14 != 0) {
      plVar8 = (long *)(lVar14 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8 = (long *)puVar12[2];
    pcStack_c8 = (code *)0x0;
    puStack_c0 = (undefined8 *)0x0;
    if (plVar8 == (long *)0x0) {
      *puVar11 = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      puVar11 = (undefined8 *)0x100;
      __Znwm();
      puVar11[2] = 0;
      puVar11[1] = 0x200000006;
      *(undefined2 *)(puVar11 + 3) = 4;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = puVar11 + 3;
      puVar11[0x12] = 0;
      *(undefined1 *)(puVar11 + 0x13) = 0;
      *(undefined1 *)(puVar11 + 0x15) = 0;
      *puVar11 = &PTR_DAT_110c50bd0;
      pcStack_d0 = (code *)(puVar11 + 0x16);
      *(long *)pcStack_d0 = lVar10;
      puVar11[0x17] = lVar13;
      puVar11[0x18] = lVar15;
      puVar11[0x19] = lVar16;
      *(undefined1 *)(puVar11 + 0x1a) = uVar4;
      puVar11[0x1b] = uVar17;
      puVar11[0x1c] = lVar14;
      *(undefined1 *)(puVar11 + 0x1e) = 1;
      puVar11[0x1f] = 0;
      pcStack_b8 = FUN_10abd47d0;
      pcStack_c8 = (code *)puVar11;
      puStack_c0 = puVar11;
    }
    else {
      pcStack_90 = (code *)0x0;
      (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_90);
      if (pcStack_90 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_90);
        goto LAB_10abe03c8;
      }
      *puVar11 = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      puVar11 = (undefined8 *)0x108;
      __Znwm();
      puVar11[2] = 0;
      puVar11[1] = 0x200000006;
      *(undefined2 *)(puVar11 + 3) = 4;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = puVar11 + 3;
      puVar11[0x12] = 0;
      *(undefined1 *)(puVar11 + 0x13) = 0;
      *(undefined1 *)(puVar11 + 0x15) = 0;
      puVar11[0x16] = lVar10;
      *puVar11 = &PTR_FUN_110c50b98;
      puVar11[0x17] = lVar13;
      puVar11[0x18] = lVar15;
      puVar11[0x19] = lVar16;
      *(undefined1 *)(puVar11 + 0x1a) = uVar4;
      puVar11[0x1b] = uVar17;
      puVar11[0x1c] = lVar14;
      *(undefined1 *)(puVar11 + 0x1e) = 1;
      puVar11[0x1f] = 0;
      puVar11[0x20] = plVar8;
      if (pcStack_c8 != (code *)0x0) {
        puVar1 = (ulong *)((long)pcStack_c8 + 8);
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar9 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*(long *)pcStack_c8 + 8))();
          }
        }
      }
      pcStack_c8 = (code *)puVar11;
      if (puStack_c0 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_c0);
      }
      pcStack_b8 = (code *)0x10abd47a0;
      pcStack_d0 = (code *)(puVar11 + 0x16);
      puStack_c0 = puVar11;
      __ZNSt13exception_ptrD1Ev(&pcStack_90);
    }
    pcVar7 = pcStack_d0;
    if (*(long *)(pcStack_d0 + 0x48) != 0) {
      func_0x0001092b4274();
    }
    *(undefined8 **)(pcVar7 + 0x48) = puStack_c0;
    puStack_c0 = (undefined8 *)0x0;
    pcStack_90 = pcStack_b8;
    pcStack_88 = pcStack_d0;
    puStack_80 = puVar12;
    (**(code **)*puVar12)(puVar12,&pcStack_90);
    *(code **)(param_1 + 200) = pcStack_c8;
    pcStack_c8 = (code *)0x0;
    if ((puStack_c0 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_c0), pcStack_c8 != (code *)0x0)) {
      puVar1 = (ulong *)((long)pcStack_c8 + 8);
      do {
        uVar9 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*(long *)pcStack_c8 + 8))();
        }
      }
    }
    plVar8 = *(long **)(param_1 + 0x78);
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 1;
      do {
        lVar10 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 200);
    plVar8 = (long *)(*(long *)(param_1 + 200) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x200) = 1;
      lVar10 = *(long *)(param_1 + 0x48);
      plVar8 = (long *)(lVar10 + 0x10);
      puVar12 = *(undefined8 **)(param_1 + 0x18);
      do {
        lVar13 = *plVar8;
        if (lVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            pcStack_d0 = (code *)0x0;
            pcStack_c8 = (code *)param_1;
            puStack_c0 = puVar12;
            func_0x000109d1b588(lVar10 + 0x18,&pcStack_d0);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
  }
  lVar10 = *(long *)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar10 + 0xa8) & 1) != 0) {
      func_0x00010abd38fc(param_1 + 0x10,lVar10 + 0x98);
      plVar8 = *(long **)(param_1 + 0x48);
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar9 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = *(long **)(param_1 + 200);
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar9 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar9 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar9 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = *(long **)(param_1 + 0x1d0);
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 1;
        do {
          lVar10 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)(param_1 + 0x1c0);
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 1;
        do {
          lVar10 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)(param_1 + 0x1b0);
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 1;
        do {
          lVar10 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)(param_1 + 0x1a0);
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 1;
        do {
          lVar10 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar10 + 0x90);
  }
LAB_10abe03c8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10abe03cc);
  (*pcVar7)();
}



/* Entry: 10abe062c; end: 10abe09e7;  */

void FUN_10abe062c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 200);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x1f0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x1e8);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x1e0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0x1d0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0x1c0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0x1b0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0x1a0);
    if (plVar5 == (long *)0x0) goto LAB_10abe09d0;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 200);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x1d0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0x1c0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0x1b0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0x1a0);
    if (plVar5 == (long *)0x0) goto LAB_10abe09d0;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10abe09d0:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10abe09e8; end: 10abe0ceb;  */

void FUN_10abe09e8(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
    FUN_10abd18b0(param_1 + 0x110,param_1 + 0x48);
    *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x110);
    plVar6 = (long *)(*(long *)(param_1 + 0x110) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x100) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x118) = 1;
      lVar9 = *(long *)(param_1 + 0x100);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  lVar9 = *(long *)(param_1 + 0x100);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x100) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(lVar9 + 0x90);
LAB_10abe0c2c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10abe0c30);
    (*pcVar5)();
  }
  if ((*(byte *)(lVar9 + 0xa8) & 1) == 0) goto LAB_10abe0c2c;
  FUN_10abd1870(param_1 + 0x10,lVar9 + 0x98);
  plVar6 = *(long **)(param_1 + 0x100);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x110);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xe0);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (*(char *)(param_1 + 0xd7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xc0));
  }
  plVar6 = *(long **)(param_1 + 0xb0);
  if (plVar6 == (long *)(param_1 + 0x98)) {
    lVar9 = 0x20;
  }
  else {
    if (plVar6 == (long *)0x0) goto LAB_10abe0ba8;
    lVar9 = 0x28;
  }
  (**(code **)(*plVar6 + lVar9))();
LAB_10abe0ba8:
  if (*(char *)(param_1 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10abe0cec; end: 10abe0eb3;  */

void FUN_10abe0cec(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0xe0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_10abe0dd0;
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0x100);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x110);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0xe0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_10abe0dd0:
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (*(char *)(param_1 + 0xd7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xc0));
  }
  plVar5 = *(long **)(param_1 + 0xb0);
  if (plVar5 == (long *)(param_1 + 0x98)) {
    lVar7 = 0x20;
  }
  else {
    if (plVar5 == (long *)0x0) goto LAB_10abe0e28;
    lVar7 = 0x28;
  }
  (**(code **)(*plVar5 + lVar7))();
LAB_10abe0e28:
  if (*(char *)(param_1 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10abe0eb4; end: 10abe1743;  */

undefined8 FUN_10abe0eb4(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong unaff_x22;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *aplStack_e0 [4];
  ulong uStack_c0;
  undefined8 auStack_b8 [6];
  undefined4 uStack_88;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 uStack_51;
  
  uVar19 = *param_2;
  uVar10 = ((ulong)(uint)((int)uVar19 << 3) + 8 ^ uVar19 >> 0x20) * -0x622015f714c7d297;
  uVar10 = (uVar19 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
  uVar17 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar9 = uVar10 - 1;
    if ((uVar10 & uVar9) == 0) {
      unaff_x22 = uVar17 & uVar9;
    }
    else {
      unaff_x22 = uVar17;
      if (uVar10 <= uVar17) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar17 / uVar10;
        }
        unaff_x22 = uVar17 - uVar12 * uVar10;
      }
    }
    puVar11 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar11; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        uVar12 = plVar16[1];
        if (uVar12 == uVar17) {
          if (plVar16[2] == uVar19) goto LAB_10abe1248;
        }
        else {
          if ((uVar10 & uVar9) == 0) {
            uVar12 = uVar12 & uVar9;
          }
          else if (uVar10 <= uVar12) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar12 / uVar10;
            }
            uVar12 = uVar12 - uVar15 * uVar10;
          }
          if (uVar12 != unaff_x22) break;
        }
      }
    }
  }
  plVar16 = (long *)0x48;
  __Znwm();
  aplStack_e0[2] = (long *)0x1;
  *plVar16 = 0;
  plVar16[1] = uVar17;
  plVar16[2] = uVar19;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[8] = 0;
  plVar16[7] = 0;
  aplStack_e0[0] = plVar16;
  aplStack_e0[1] = param_1;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar19 = 1;
    if (2 < uVar10) {
      uVar19 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar19 = uVar19 | uVar10 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar19 <= uVar9) {
      uVar19 = uVar9;
    }
    if (uVar19 - 1 == 0) {
      uVar19 = 2;
    }
    else if ((uVar19 & uVar19 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar19) {
LAB_10abe105c:
      if (uVar19 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10abe1700;
      }
      lVar5 = uVar19 << 3;
      __Znwm();
      lVar6 = *param_1;
      *param_1 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      uVar10 = 0;
      param_1[1] = uVar19;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (uVar19 != uVar10);
      plVar13 = (long *)param_1[2];
      uVar10 = uVar19;
      if (plVar13 != (long *)0x0) {
        uVar9 = plVar13[1];
        uVar12 = uVar19 - 1;
        if ((uVar19 & uVar12) == 0) {
          uVar9 = uVar9 & uVar12;
        }
        else if (uVar19 <= uVar9) {
          uVar15 = 0;
          if (uVar19 != 0) {
            uVar15 = uVar9 / uVar19;
          }
          uVar9 = uVar9 - uVar15 * uVar19;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar14 = (long *)*plVar13;
        while (plVar14 != (long *)0x0) {
          uVar15 = plVar14[1];
          if ((uVar19 & uVar12) == 0) {
            uVar15 = uVar15 & uVar12;
          }
          else if (uVar19 <= uVar15) {
            uVar3 = 0;
            if (uVar19 != 0) {
              uVar3 = uVar15 / uVar19;
            }
            uVar15 = uVar15 - uVar3 * uVar19;
          }
          plVar7 = plVar14;
          if (uVar15 != uVar9) {
            lVar5 = *param_1;
            if (*(long *)(lVar5 + uVar15 * 8) == 0) {
              *(long **)(lVar5 + uVar15 * 8) = plVar13;
              uVar9 = uVar15;
            }
            else {
              *plVar13 = *plVar14;
              *plVar14 = **(undefined8 **)(lVar5 + uVar15 * 8);
              **(long **)(lVar5 + uVar15 * 8) = (long)plVar14;
              plVar7 = plVar13;
            }
          }
          plVar13 = plVar7;
          plVar14 = (long *)*plVar7;
        }
      }
    }
    else if (uVar19 < uVar10) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar19 <= uVar9) {
        uVar19 = uVar9;
      }
      if (uVar19 < uVar10) {
        if (uVar19 != 0) goto LAB_10abe105c;
        lVar5 = *param_1;
        *param_1 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = param_1[1];
      }
    }
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x22 = uVar10 - 1 & uVar17;
    }
    else {
      unaff_x22 = uVar17;
      if (uVar10 <= uVar17) {
        uVar19 = 0;
        if (uVar10 != 0) {
          uVar19 = uVar17 / uVar10;
        }
        unaff_x22 = uVar17 - uVar19 * uVar10;
      }
    }
  }
  lVar5 = *param_1;
  plVar13 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = param_1 + 2;
    *plVar16 = *plVar13;
    *plVar13 = (long)plVar16;
    *(long **)(lVar5 + unaff_x22 * 8) = plVar13;
    if (*plVar16 != 0) {
      uVar17 = *(ulong *)(*plVar16 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar17 = uVar17 & uVar10 - 1;
      }
      else if (uVar10 <= uVar17) {
        uVar19 = 0;
        if (uVar10 != 0) {
          uVar19 = uVar17 / uVar10;
        }
        uVar17 = uVar17 - uVar19 * uVar10;
      }
      plVar13 = (long *)(*param_1 + uVar17 * 8);
      goto LAB_10abe1238;
    }
  }
  else {
    *plVar16 = *plVar13;
LAB_10abe1238:
    *plVar13 = (long)plVar16;
  }
  param_1[3] = param_1[3] + 1;
LAB_10abe1248:
  plVar13 = (long *)plVar16[4];
  if (plVar13 == (long *)0x0) {
    uVar10 = *param_2;
LAB_10abe12a4:
    if (uVar10 != 0) {
LAB_10abe12a8:
      aplStack_e0[3] = (long *)0x0;
      aplStack_e0[2] = (long *)0x0;
      auStack_b8[0] = 0;
      uStack_c0 = 0;
      aplStack_e0[1] = (long *)0x0;
      aplStack_e0[0] = (long *)0x0;
      lVar5 = plVar16[4];
      plVar16[3] = 0;
      plVar16[4] = 0;
      if (lVar5 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar13 = plVar16 + 5;
      plVar14 = (long *)*plVar13;
      if (plVar14 != (long *)0x0) {
        plVar18 = (long *)plVar16[6];
        plVar7 = plVar14;
        if (plVar18 != plVar14) {
          do {
            plVar18 = plVar18 + -1;
            lVar5 = *plVar18;
            *plVar18 = 0;
            if (lVar5 != 0) {
              func_0x00010ac08db4();
            }
          } while (plVar18 != plVar14);
          plVar7 = (long *)*plVar13;
        }
        plVar16[6] = (long)plVar14;
        __ZdlPv(plVar7);
        *plVar13 = 0;
        plVar16[6] = 0;
        plVar16[7] = 0;
      }
      *plVar13 = 0;
      plVar16[6] = 0;
      plVar16[7] = 0;
      aplStack_e0[3] = (long *)0x0;
      uStack_c0 = 0;
      aplStack_e0[2] = (long *)0x0;
      plVar16[8] = 0;
      FUN_10abffbec(aplStack_e0 + 2);
      if (aplStack_e0[1] != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      uVar17 = param_2[1];
      uVar10 = *param_2;
      if (param_2[1] != 0) {
        plVar13 = (long *)(param_2[1] + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = *plVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar5 = plVar16[4];
      plVar16[4] = uVar17;
      plVar16[3] = uVar10;
      if (lVar5 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uVar10 = *param_2;
    if (plVar13 == (long *)0x0) goto LAB_10abe12a4;
    uVar17 = plVar16[3];
    plVar14 = plVar13 + 1;
    do {
      lVar5 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
    if (uVar17 != uVar10) goto LAB_10abe12a8;
  }
  uVar10 = plVar16[8];
  lVar5 = plVar16[5];
  lVar6 = plVar16[6] - lVar5;
  if ((ulong)(lVar6 >> 3) <= uVar10) {
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    aplStack_e0[1] = (long *)0x0;
    aplStack_e0[0] = (long *)0x0;
    aplStack_e0[3] = (long *)0x0;
    aplStack_e0[2] = (long *)0x0;
    auStack_b8[1] = 0;
    auStack_b8[0] = 0;
    auStack_b8[3] = 0;
    auStack_b8[2] = 0;
    auStack_b8[5] = 0;
    auStack_b8[4] = 0;
    uStack_88 = 0;
    FUN_10a0d0194(&plStack_70,&uStack_78);
    plVar14 = plStack_68;
    aplStack_e0[0] = plStack_70;
    plVar13 = aplStack_e0[1];
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    aplStack_e0[1] = plVar14;
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 1;
      do {
        lVar5 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar14 = plStack_68 + 1;
      do {
        lVar5 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    uStack_78 = 0;
    FUN_10a1995d0(&plStack_70,&uStack_51,&uStack_78,aplStack_e0);
    plVar14 = plStack_68;
    aplStack_e0[2] = plStack_70;
    plVar13 = aplStack_e0[3];
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    aplStack_e0[3] = plVar14;
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 1;
      do {
        lVar5 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar14 = plStack_68 + 1;
      do {
        lVar5 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (*(char *)((long)aplStack_e0[2] + 0xb9) != '\x01') {
      *(undefined1 *)((long)aplStack_e0[2] + 0xb9) = 1;
      (**(code **)(*aplStack_e0[2] + 0xa0))();
    }
    if (*(char *)((long)aplStack_e0[2] + 0xba) != '\x01') {
      *(undefined1 *)((long)aplStack_e0[2] + 0xba) = 1;
      (**(code **)(*aplStack_e0[2] + 0xa0))();
    }
    puVar11 = (undefined8 *)0x60;
    __Znwm();
    plVar14 = aplStack_e0[1];
    plVar13 = aplStack_e0[0];
    aplStack_e0[0] = (long *)0x0;
    aplStack_e0[1] = (long *)0x0;
    puVar11[1] = plVar14;
    *puVar11 = plVar13;
    puVar11[3] = aplStack_e0[3];
    puVar11[2] = aplStack_e0[2];
    aplStack_e0[2] = (long *)0x0;
    aplStack_e0[3] = (long *)0x0;
    *(undefined4 *)(puVar11 + 4) = (undefined4)uStack_c0;
    lVar5 = 0x28;
    do {
      uVar20 = *(undefined8 *)((long)aplStack_e0 + lVar5);
      ((undefined8 *)((long)puVar11 + lVar5))[1] = *(undefined8 *)((long)aplStack_e0 + lVar5 + 8);
      *(undefined8 *)((long)puVar11 + lVar5) = uVar20;
      *(undefined8 *)((long)aplStack_e0 + lVar5) = 0;
      *(undefined8 *)((long)aplStack_e0 + lVar5 + 8) = 0;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x58);
    *(undefined4 *)(puVar11 + 0xb) = uStack_88;
    plVar13 = (long *)plVar16[6];
    if (plVar13 < (long *)plVar16[7]) {
      plVar14 = plVar13 + 1;
      *plVar13 = (long)puVar11;
    }
    else {
      lVar5 = plVar16[5];
      lVar6 = (long)plVar13 - lVar5;
      uVar10 = (lVar6 >> 3) + 1;
      if (uVar10 >> 0x3d != 0) {
        FUN_10abffc58();
        goto LAB_10abe1700;
      }
      uVar19 = plVar16[7] - lVar5;
      uVar17 = (long)uVar19 >> 2;
      if (uVar17 <= uVar10) {
        uVar17 = uVar10;
      }
      if (0x7ffffffffffffff7 < uVar19) {
        uVar17 = 0x1fffffffffffffff;
      }
      if (uVar17 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10abe1700;
      }
      lVar8 = uVar17 << 3;
      __Znwm();
      plVar13 = (long *)(lVar8 + lVar6);
      plVar14 = plVar13 + 1;
      *plVar13 = (long)puVar11;
      _memcpy(plVar13 + -(lVar6 >> 3),lVar5,lVar6);
      plVar16[5] = (long)(plVar13 + -(lVar6 >> 3));
      plVar16[6] = (long)plVar14;
      plVar16[7] = lVar8 + uVar17 * 8;
      if (lVar5 != 0) {
        __ZdlPv(lVar5);
      }
    }
    plVar16[6] = (long)plVar14;
    lVar5 = 0x48;
    do {
      func_0x00010a0616d0((long)aplStack_e0 + lVar5);
      plVar13 = aplStack_e0[3];
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0x18);
    if (aplStack_e0[3] != (long *)0x0) {
      plVar14 = aplStack_e0[3] + 1;
      do {
        lVar5 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*aplStack_e0[3] + 0x10))(aplStack_e0[3]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = aplStack_e0[1];
    if (aplStack_e0[1] != (long *)0x0) {
      plVar14 = aplStack_e0[1] + 1;
      do {
        lVar5 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*aplStack_e0[1] + 0x10))(aplStack_e0[1]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    uVar10 = plVar16[8];
    lVar5 = plVar16[5];
    lVar6 = plVar16[6] - lVar5;
  }
  plVar16[8] = uVar10 + 1;
  if (uVar10 < (ulong)(lVar6 >> 3)) {
    return *(undefined8 *)(lVar5 + uVar10 * 8);
  }
LAB_10abe1700:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10abe1704);
  (*pcVar4)();
}



/* Entry: 10abe1744; end: 10abe1937;  */

void FUN_10abe1744(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 0x18);
  while (plVar9 != (long *)0x0) {
    while ((plVar9[4] != 0 && (*(long *)(plVar9[4] + 8) != -1))) {
      lVar1 = plVar9[5];
      plVar4 = (long *)plVar9[6];
      lVar2 = (long)plVar4 - lVar1;
      if (lVar2 == 0) break;
      uVar6 = 0;
      uVar7 = plVar9[8];
      do {
        lVar8 = *(long *)(lVar1 + uVar6 * 8);
        iVar5 = 0;
        if (uVar7 <= uVar6) {
          iVar5 = *(int *)(lVar8 + 0x58) + 1;
        }
        *(int *)(lVar8 + 0x58) = iVar5;
        uVar6 = uVar6 + 1;
      } while (lVar2 >> 3 != uVar6);
      while (plVar4 = plVar4 + -1, 300 < *(uint *)(*plVar4 + 0x58)) {
        *plVar4 = 0;
        func_0x00010ac08db4();
        plVar9[6] = (long)plVar4;
        if (plVar4 == (long *)plVar9[5]) goto LAB_10abe17e0;
      }
      plVar9[8] = 0;
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_10abe1804;
    }
LAB_10abe17e0:
    plVar4 = (long *)(param_1 + 8);
    func_0x00010ac08df8(plVar4,plVar9);
    plVar9 = plVar4;
  }
LAB_10abe1804:
  iVar5 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x58) == 0) {
    if (iVar5 != 0) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f699fa6,&UNK_10f699ff2,0x54,&UNK_10f69a0a5,in_x6,in_x7,iVar5)
        ;
      }
      iVar5 = 0;
      goto LAB_10abe189c;
    }
  }
  else {
    if (iVar5 == 0) {
      if ((bRam000000011330a9e8 & 1) == 0) {
        iVar5 = 0;
      }
      else {
        func_0x00010ae06f08(0,1,&UNK_10f699fa6,&UNK_10f699ff2,0x50,&UNK_10f69a034,in_x6,in_x7,
                            *(int *)(param_1 + 0x58));
        iVar5 = *(int *)(param_1 + 0x5c);
      }
    }
    iVar5 = iVar5 + 1;
LAB_10abe189c:
    *(int *)(param_1 + 0x5c) = iVar5;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar5 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x50) == 0) {
    if (iVar5 == 0) goto LAB_10abe18f8;
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f699fa6,&UNK_10f699ff2,0x5c,&UNK_10f69a0ed,in_x6,in_x7,iVar5);
    }
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + 1;
  }
  *(int *)(param_1 + 0x54) = iVar5;
LAB_10abe18f8:
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar6 = *(long *)(param_1 + 0x30) + 1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  *(ulong *)(param_1 + 0x30) =
       uVar6 - ((SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar6 / 3);
  return;
}



/* Entry: 10abe1938; end: 10abe1983;  */

void FUN_10abe1938(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x38;
  FUN_10a7a3320(&lStack_28);
  FUN_10abffe40(param_1 + 0x20);
  FUN_10a7ad3c4(param_1 + 0x10);
  FUN_10a7ad3c4(param_1);
  return;
}



/* Entry: 10abe1984; end: 10abe27af;  */

void FUN_10abe1984(long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *****pppppuVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined8 ******ppppppuVar10;
  code *pcVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *******pppppppuVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 *******pppppppuVar23;
  ulong uVar24;
  ulong *puVar25;
  long lVar26;
  undefined8 *******pppppppuVar27;
  undefined8 *******pppppppuVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined4 *puVar33;
  long lVar34;
  undefined8 *******pppppppuVar35;
  undefined8 ******ppppppuVar36;
  undefined8 ******ppppppuVar37;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 ******ppppppuStack_128;
  undefined8 ******ppppppuStack_120;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  long lStack_100;
  long lStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  byte bStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  
  puVar33 = *(undefined4 **)(param_4 + 0x18);
  puVar2 = *(undefined4 **)(param_4 + 0x20);
  if (puVar33 == puVar2) {
    return;
  }
  sVar6 = *(short *)(puVar33 + 1);
  if (sVar6 == -1) {
    return;
  }
  plVar21 = (long *)(param_1 + 0x38);
  *(long *)(param_1 + 0x40) = *plVar21;
  do {
    plVar13 = param_2 + 4;
    FUN_10a015150(plVar13,*puVar33);
    lVar30 = plVar13[0x1d];
    if (lVar30 != 0) {
      plVar13 = *(long **)(param_1 + 0x40);
      if (*(long **)(param_1 + 0x48) <= plVar13) {
        lVar14 = *plVar21;
        lVar32 = (long)plVar13 - lVar14;
        uVar29 = (lVar32 >> 3) + 1;
        if (uVar29 >> 0x3d == 0) {
          uVar22 = (long)*(long **)(param_1 + 0x48) - lVar14;
          uVar24 = (long)uVar22 >> 2;
          if (uVar24 <= uVar29) {
            uVar24 = uVar29;
          }
          if (0x7ffffffffffffff7 < uVar22) {
            uVar24 = 0x1fffffffffffffff;
          }
          if (uVar24 >> 0x3d == 0) {
            lVar34 = uVar24 << 3;
            __Znwm();
            plVar13 = (long *)(lVar34 + lVar32);
            plVar16 = plVar13 + 1;
            *plVar13 = lVar30;
            _memcpy(plVar13 + -(lVar32 >> 3),lVar14,lVar32);
            *(long **)(param_1 + 0x38) = plVar13 + -(lVar32 >> 3);
            *(long **)(param_1 + 0x40) = plVar16;
            *(ulong *)(param_1 + 0x48) = lVar34 + uVar24 * 8;
            if (lVar14 != 0) {
              __ZdlPv(lVar14);
            }
            goto LAB_10abe1a8c;
          }
          func_0x000109ffded8();
        }
        FUN_10abffea8();
LAB_10abe26a0:
        FUN_10a7a4fe4();
        goto LAB_10abe26b4;
      }
      plVar16 = plVar13 + 1;
      *plVar13 = lVar30;
LAB_10abe1a8c:
      *(long **)(param_1 + 0x40) = plVar16;
    }
    puVar33 = puVar33 + 0x42;
  } while (puVar33 != puVar2);
  if (*(undefined8 **)(param_1 + 0x38) == *(undefined8 **)(param_1 + 0x40)) {
    return;
  }
  puVar25 = (ulong *)**(undefined8 **)(param_1 + 0x38);
  plVar13 = (long *)puVar25[1];
  if (plVar13 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar13 == (long *)0x0) {
    return;
  }
  uVar29 = *puVar25;
  uStack_88 = uVar29;
  plStack_80 = plVar13;
  if (uVar29 == 0) goto LAB_10abe2614;
  bStack_90 = 0;
  ppppppuStack_a8 = (undefined8 *******)0x0;
  ppppppuStack_b0 = (undefined8 *******)0x0;
  ppppppuStack_98 = (undefined8 *******)0x0;
  ppppppuStack_a0 = (undefined8 *******)0x0;
  plStack_c8 = (long *)0x0;
  lStack_d0 = 0;
  ppppppuStack_b8 = (undefined8 *******)0x0;
  ppppppuStack_c0 = (undefined8 *******)0x0;
  plStack_d8 = (long *)0x0;
  lStack_e0 = 0;
  if ((*(long *)(param_4 + 0x18) != *(long *)(param_4 + 0x20)) &&
     (lVar30 = *(long *)(*(long *)(param_4 + 0x18) + 0xf8), lVar30 != 0)) {
    plVar13 = *(long **)(lVar30 + 0xa8);
    if (plVar13 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar13 != (long *)0x0) {
        lStack_e0 = *(long *)(lVar30 + 0xa0);
        plStack_d8 = plVar13;
        uStack_140 = (undefined8 *******)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
        if (lStack_e0 != 0) {
          uStack_140._0_4_ = 0;
          uStack_140._4_4_ = 0;
          uStack_138._0_4_ = 0;
          uStack_138._4_4_ = 0;
          lVar14 = *(long *)(lVar30 + 200);
          if (lVar14 != 0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            uStack_138._0_4_ = (undefined4)lVar14;
            uStack_138._4_4_ = (undefined4)((ulong)lVar14 >> 0x20);
            if (lVar14 != 0) {
              uStack_140._0_4_ = (undefined4)*(undefined8 *)(lVar30 + 0xc0);
              uStack_140._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20);
            }
          }
          func_0x00010a78ceac(&lStack_d0,&uStack_140);
          plVar13 = (long *)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
          if (plVar13 != (long *)0x0) {
            plVar16 = plVar13 + 1;
            do {
              lVar30 = *plVar16;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar8) {
                *plVar16 = lVar30 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar30 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          lVar30 = *(long *)(param_4 + 0x18);
          lVar14 = *(long *)(param_4 + 0x20);
          if (lVar30 != lVar14) {
            bVar8 = false;
            do {
              lVar32 = *(long *)(lVar30 + 0xf8);
              uStack_140 = (undefined8 *******)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
              if (lVar32 == 0) goto LAB_10abe1f64;
              lVar34 = *(long *)(lVar32 + 0x200);
              lVar31 = *(long *)(lVar32 + 0x208);
              while( true ) {
                ppppppuVar10 = ppppppuStack_a0;
                if (lVar34 == lVar31) break;
                plVar13 = *(long **)(lVar34 + 0x40);
                uStack_140 = (undefined8 *******)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
                if ((plVar13 == (long *)0x0) ||
                   (uStack_140 = (undefined8 *******)
                                 CONCAT44(uStack_140._4_4_,(undefined4)uStack_140),
                   *plVar13 == plVar13[1])) goto LAB_10abe1f64;
                if (ppppppuStack_a8 != ppppppuStack_a0) {
                  pppppppuVar20 = (undefined8 *******)ppppppuStack_a8;
                  do {
                    if (pppppppuVar20[7] == *(undefined8 *******)(lVar34 + 0x38))
                    goto LAB_10abe1d10;
                    pppppppuVar20 = pppppppuVar20 + 0xb;
                  } while (pppppppuVar20 != (undefined8 *******)ppppppuStack_a0);
                }
                if (ppppppuStack_a0 < ppppppuStack_98) {
                  FUN_10abffc6c(ppppppuStack_a0,lVar34);
                  ppppppuStack_a0 = ppppppuVar10 + 0xb;
                }
                else {
                  lVar26 = (long)ppppppuStack_a0 - (long)ppppppuStack_a8;
                  uVar24 = (lVar26 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
                  if (0x2e8ba2e8ba2e8ba < uVar24) goto LAB_10abe26a0;
                  lVar19 = (long)ppppppuStack_98 - (long)ppppppuStack_a8 >> 3;
                  uVar22 = lVar19 * 0x5d1745d1745d1746;
                  if (uVar22 < uVar24 || uVar22 - uVar24 == 0) {
                    uVar22 = uVar24;
                  }
                  if (0x1745d1745d1745c < (ulong)(lVar19 * 0x2e8ba2e8ba2e8ba3)) {
                    uVar22 = 0x2e8ba2e8ba2e8ba;
                  }
                  ppppppuStack_120 = &ppppppuStack_a8;
                  if (uVar22 == 0) {
                    pppppppuVar20 = (undefined8 *******)0x0;
                  }
                  else {
                    pppppppuVar20 = &ppppppuStack_a8;
                    FUN_10a7a4ff8();
                  }
                  lVar26 = (long)pppppppuVar20 + lVar26;
                  uStack_140._0_4_ = SUB84(pppppppuVar20,0);
                  uStack_140._4_4_ = (undefined4)((ulong)pppppppuVar20 >> 0x20);
                  ppppppuStack_128 = pppppppuVar20 + uVar22 * 0xb;
                  uStack_138 = lVar26;
                  uStack_130 = (undefined8 *******)lVar26;
                  FUN_10abffc6c(lVar26,lVar34);
                  uStack_130 = (undefined8 *******)(lVar26 + 0x58);
                  pppppppuVar20 =
                       (undefined8 *******)
                       ((long)ppppppuStack_a8 + (lVar26 - (long)ppppppuStack_a0));
                  func_0x00010a7a5040(&ppppppuStack_a8,ppppppuStack_a8,ppppppuStack_a0,pppppppuVar20
                                     );
                  ppppppuVar10 = ppppppuStack_98;
                  pppppppuVar28 = uStack_130;
                  ppppppuStack_a0 = uStack_130;
                  ppppppuStack_98 = ppppppuStack_128;
                  uStack_130._0_4_ = SUB84(ppppppuStack_a8,0);
                  uStack_130._4_4_ = (undefined4)((ulong)ppppppuStack_a8 >> 0x20);
                  ppppppuStack_128 = ppppppuVar10;
                  uStack_140._0_4_ = (undefined4)uStack_130;
                  uStack_140._4_4_ = uStack_130._4_4_;
                  uStack_138._0_4_ = (undefined4)uStack_130;
                  uStack_138._4_4_ = uStack_130._4_4_;
                  ppppppuStack_a8 = pppppppuVar20;
                  func_0x00010a7a50e4(&uStack_140);
                  ppppppuStack_a0 = pppppppuVar28;
                }
LAB_10abe1d10:
                lVar34 = lVar34 + 0x58;
              }
              lVar34 = (long)*(char *)(lVar32 + 0x1df);
              if (lVar34 < 0) {
                lVar34 = *(long *)(lVar32 + 0x1d0);
              }
              if (lVar34 != 0) {
                plVar13 = *(long **)(lVar32 + 0xb8);
                uStack_140 = (undefined8 *******)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
                if (plVar13 == (long *)0x0) goto LAB_10abe1f64;
                __ZNSt3__119__shared_weak_count4lockEv();
                ppppppuVar10 = ppppppuStack_b8;
                plStack_70 = plVar13;
                uStack_140 = (undefined8 *******)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
                if (plVar13 == (long *)0x0) goto LAB_10abe1f64;
                lVar34 = *(long *)(lVar32 + 0xb0);
                lStack_78 = lVar34;
                if (lVar34 == 0) {
                  plVar13 = plVar13 + 1;
                  do {
                    lVar32 = *plVar13;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar8) {
                      *plVar13 = lVar32 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  uStack_140 = (undefined8 *******)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140)
                  ;
                  if (lVar32 != 0) goto LAB_10abe1f64;
                  bVar8 = true;
LAB_10abe1f20:
                  plVar13 = plStack_70;
                  (**(code **)(*plStack_70 + 0x10))(plStack_70);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  if (lVar34 == 0) {
                    uStack_140 = (undefined8 *******)
                                 CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
                    if (!bVar8) {
                      uStack_140 = &ppppppuStack_a8;
                      FUN_10a7a3320(&uStack_140);
                      FUN_10abffe40(&ppppppuStack_c0);
                      FUN_10a7ad3c4(&lStack_d0);
                      FUN_10a7ad3c4(&lStack_e0);
                    }
                    goto LAB_10abe1f64;
                  }
                }
                else {
                  if (ppppppuStack_c0 != ppppppuStack_b8) {
                    pppppppuVar20 = (undefined8 *******)ppppppuStack_c0;
                    do {
                      if (pppppppuVar20[3] == *(undefined8 *******)(lVar32 + 0x1e0))
                      goto LAB_10abe1f04;
                      pppppppuVar20 = pppppppuVar20 + 6;
                    } while (pppppppuVar20 != (undefined8 *******)ppppppuStack_b8);
                  }
                  if (ppppppuStack_b8 < ppppppuStack_b0) {
                    FUN_10abffd38(ppppppuStack_b8,lVar32 + 0x1c8,&lStack_78);
                    ppppppuStack_b8 = ppppppuVar10 + 6;
                  }
                  else {
                    lVar31 = (long)ppppppuStack_b8 - (long)ppppppuStack_c0;
                    uVar24 = (lVar31 >> 4) * -0x5555555555555555 + 1;
                    if (0x555555555555555 < uVar24) {
                      FUN_10abffda4();
                      goto LAB_10abe26b4;
                    }
                    lVar26 = (long)ppppppuStack_b0 - (long)ppppppuStack_c0 >> 4;
                    uVar22 = lVar26 * 0x5555555555555556;
                    if (uVar22 < uVar24 || uVar22 - uVar24 == 0) {
                      uVar22 = uVar24;
                    }
                    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar26 * -0x5555555555555555)) {
                      uVar22 = 0x555555555555555;
                    }
                    ppppppuStack_120 = &ppppppuStack_c0;
                    if (uVar22 == 0) {
                      lVar26 = 0;
                    }
                    else {
                      if (0x555555555555555 < uVar22) {
                        func_0x000109ffded8();
                        goto LAB_10abe26b4;
                      }
                      lVar26 = uVar22 * 0x30;
                      __Znwm();
                    }
                    lVar31 = lVar26 + lVar31;
                    uStack_140._0_4_ = (undefined4)lVar26;
                    uStack_140._4_4_ = (undefined4)((ulong)lVar26 >> 0x20);
                    pppppppuVar27 = (undefined8 *******)(lVar26 + uVar22 * 0x30);
                    ppppppuStack_128 = pppppppuVar27;
                    uStack_138 = lVar31;
                    uStack_130 = (undefined8 *******)lVar31;
                    FUN_10abffd38(lVar31,lVar32 + 0x1c8,&lStack_78);
                    ppppppuVar10 = ppppppuStack_b8;
                    pppppppuVar28 =
                         (undefined8 *******)
                         ((long)ppppppuStack_c0 + (lVar31 - (long)ppppppuStack_b8));
                    pppppppuVar20 = (undefined8 *******)ppppppuStack_c0;
                    pppppppuVar23 = pppppppuVar28;
                    if (ppppppuStack_b8 != ppppppuStack_c0) {
                      do {
                        ppppppuVar37 = pppppppuVar20[1];
                        ppppppuVar36 = *pppppppuVar20;
                        pppppppuVar23[2] = pppppppuVar20[2];
                        pppppppuVar23[1] = ppppppuVar37;
                        *pppppppuVar23 = ppppppuVar36;
                        pppppppuVar20[1] = (undefined8 ******)0x0;
                        pppppppuVar20[2] = (undefined8 ******)0x0;
                        *pppppppuVar20 = (undefined8 ******)0x0;
                        pppppppuVar23[3] = pppppppuVar20[3];
                        ppppppuVar36 = pppppppuVar20[4];
                        pppppppuVar23[5] = pppppppuVar20[5];
                        pppppppuVar23[4] = ppppppuVar36;
                        pppppppuVar20[4] = (undefined8 ******)0x0;
                        pppppppuVar20[5] = (undefined8 ******)0x0;
                        pppppppuVar20 = pppppppuVar20 + 6;
                        pppppppuVar23 = pppppppuVar23 + 6;
                        pppppppuVar35 = (undefined8 *******)ppppppuStack_c0;
                      } while (pppppppuVar20 != (undefined8 *******)ppppppuStack_b8);
                      do {
                        FUN_10abffdb8(pppppppuVar35);
                        pppppppuVar35 = pppppppuVar35 + 6;
                      } while (pppppppuVar35 != (undefined8 *******)ppppppuVar10);
                    }
                    uStack_130._0_4_ = SUB84(ppppppuStack_c0,0);
                    uStack_130._4_4_ = (undefined4)((ulong)ppppppuStack_c0 >> 0x20);
                    ppppppuStack_128 = ppppppuStack_b0;
                    uStack_140._0_4_ = (undefined4)uStack_130;
                    uStack_140._4_4_ = uStack_130._4_4_;
                    uStack_138._0_4_ = (undefined4)uStack_130;
                    uStack_138._4_4_ = uStack_130._4_4_;
                    ppppppuStack_c0 = pppppppuVar28;
                    ppppppuStack_b8 = (undefined8 *******)(lVar31 + 0x30);
                    ppppppuStack_b0 = pppppppuVar27;
                    func_0x00010abffdf4(&uStack_140);
                    ppppppuStack_b8 = (undefined8 *******)(lVar31 + 0x30);
                  }
LAB_10abe1f04:
                  if (plStack_70 != (long *)0x0) {
                    plVar13 = plStack_70 + 1;
                    do {
                      lVar32 = *plVar13;
                      cVar7 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                      if (bVar9) {
                        *plVar13 = lVar32 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (lVar32 == 0) goto LAB_10abe1f20;
                  }
                }
              }
              lVar30 = lVar30 + 0x108;
            } while (lVar30 != lVar14);
          }
          bStack_90 = 1;
          uStack_140 = (undefined8 *******)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
        }
        goto LAB_10abe1f64;
      }
    }
    lStack_e0 = 0;
    plStack_d8 = (long *)0x0;
  }
LAB_10abe1f64:
  if ((bStack_90 & 1) != 0) {
    *(undefined8 *)(uVar29 + 0x120) = *(undefined8 *)(uVar29 + 0x118);
    uVar24 = uVar29;
    FUN_10a7965a4(uVar29,plVar21);
    if (uVar24 >> 0x20 == 0) {
      if ((*(int *)(param_1 + 0x54) == 0) && (*(int *)(param_1 + 0x50) == 0)) {
        plVar21 = *(long **)(param_1 + 0x38);
        plVar13 = *(long **)(param_1 + 0x40);
        if (plVar21 == plVar13) {
          iVar12 = 0;
        }
        else {
          iVar12 = 0;
          plVar16 = plVar21;
          do {
            plVar15 = plVar16 + 1;
            if (*(int *)(*plVar16 + 0x24) == 0) {
              iVar12 = iVar12 + 1;
            }
            plVar16 = plVar15;
          } while (plVar15 != plVar13);
        }
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f699fa6,&UNK_10f69a142,0xd9,&UNK_10f69a1b7,param_7,param_8,
                              (long)plVar13 - (long)plVar21 >> 3,iVar12,
                              *(undefined4 *)(uVar29 + 0xf8));
        }
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    }
    else {
      plVar21 = (long *)(param_1 + 8);
      FUN_10abe0eb4(plVar21,&uStack_88);
      FUN_10a177570(*plVar21 + 0xf0,uVar29 + 0xb0);
      uVar22 = uStack_88;
      lVar30 = *plVar21;
      iVar12 = *(int *)(uStack_88 + 0xf8);
      *(undefined8 *)(lVar30 + 0xe8) = *(undefined8 *)(uStack_88 + 0xf8);
      if ((int)plVar21[4] == iVar12) {
        uVar17 = (ulong)*(uint *)(uVar29 + 0x80);
        if (*(long *)(lVar30 + 0x30) - *(long *)(lVar30 + 0x28) != uVar17) goto LAB_10abe2024;
      }
      else {
        uVar17 = (ulong)*(uint *)(uVar29 + 0x80);
LAB_10abe2024:
        func_0x000107c2823c(lVar30 + 0x28,uVar17);
        *(undefined4 *)(plVar21 + 4) = *(undefined4 *)(uVar22 + 0xf8);
        (**(code **)(*(long *)plVar21[2] + 0xa0))();
        lVar30 = 0;
        FUN_10a2421c8();
        plVar16 = *(long **)(lVar30 + 0x228);
        plVar13 = plVar21 + 5;
        lVar30 = 0x30;
        do {
          plVar15 = plVar16;
          (**(code **)(*plVar16 + 0x58))(plVar16,*(undefined4 *)(uVar22 + 0xf8));
          FUN_10a174ef8(plVar13,plVar15);
          (**(code **)(*(long *)*plVar13 + 0x18))((long *)*plVar13,*(undefined4 *)(uVar29 + 0x80),1)
          ;
          plVar13 = plVar13 + 2;
          lVar30 = lVar30 + -0x10;
        } while (lVar30 != 0);
      }
      iVar12 = (int)plVar21[2];
      puVar18 = (undefined8 *)0x1;
      FUN_10a061940();
      if (((puVar18 != (undefined8 *)0x0) && (iVar12 == 2)) &&
         (plVar13 = (long *)*puVar18, plVar13 != (long *)0x0)) {
        plVar16 = *(long **)(uVar22 + 0x100);
        if (plVar16 == (long *)0x0) {
          FUN_10a2421c8();
          plVar16 = (long *)plVar16[0x45];
          (**(code **)(*plVar16 + 0x48))();
          FUN_10a174ef8(uVar22 + 0x100,plVar16);
          (**(code **)(**(long **)(uVar22 + 0x100) + 0x18))
                    (*(long **)(uVar22 + 0x100),*(undefined4 *)(uVar29 + 0x40),1);
          (**(code **)(**(long **)(uVar22 + 0x100) + 0x10))
                    (*(long **)(uVar22 + 0x100),*(undefined8 *)(uVar29 + 0x28),
                     *(undefined4 *)(uVar29 + 0x40),0,1);
          *(undefined4 *)(uVar29 + 0x60) = 0xffffffff;
LAB_10abe2178:
          *(undefined4 *)(uVar29 + 100) = 0;
          plVar16 = *(long **)(uVar22 + 0x100);
        }
        else {
          uVar5 = *(uint *)(uVar29 + 100);
          uVar4 = *(uint *)(uVar29 + 0x60);
          if (uVar4 < uVar5) {
            uVar3 = *(uint *)(uVar29 + 0x44);
            if (uVar4 < uVar3) {
              if (uVar5 <= uVar3) {
                uVar3 = uVar5;
              }
              (**(code **)(*plVar16 + 0x10))
                        (plVar16,*(long *)(uVar29 + 0x28) + (ulong)uVar4,uVar3 - uVar4,(ulong)uVar4,
                         1);
            }
            *(undefined4 *)(uVar29 + 0x60) = 0xffffffff;
            goto LAB_10abe2178;
          }
        }
        lStack_e8 = *(long *)(uVar22 + 0x108);
        if (lStack_e8 != 0) {
          plVar15 = (long *)(lStack_e8 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar8) {
              *plVar15 = *plVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        plStack_f0 = plVar16;
        (**(code **)(*plVar13 + 0x88))
                  (plVar13,&plStack_f0,uVar22 + 0xb0,*(undefined4 *)(uVar22 + 0xfc));
        func_0x00010a0616d0(&plStack_f0);
        uVar5 = *(int *)(uVar22 + 0x120) - (int)*(undefined8 *)(uVar22 + 0x118);
        uVar4 = *(uint *)(uVar29 + 0x80);
        if (uVar5 <= *(uint *)(uVar29 + 0x80)) {
          uVar4 = uVar5;
        }
        uVar29 = *(ulong *)(param_1 + 0x30);
        if (2 < uVar29) {
LAB_10abe26b4:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10abe26b8);
          (*pcVar11)();
        }
        if (uVar4 != 0) {
          (**(code **)(*(long *)plVar21[uVar29 * 2 + 5] + 0x10))();
        }
        lStack_f8 = plVar21[uVar29 * 2 + 6];
        lStack_100 = plVar21[uVar29 * 2 + 5];
        if (plVar21[uVar29 * 2 + 6] != 0) {
          plVar16 = (long *)(plVar21[uVar29 * 2 + 6] + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar8) {
              *plVar16 = *plVar16 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        (**(code **)(*plVar13 + 0x90))(plVar13,&lStack_100);
        func_0x00010a0616d0(&lStack_100);
        (**(code **)(*plVar13 + 0x78))(plVar13,uVar24 >> 0x20);
        plVar13 = param_2 + 4;
        FUN_10a01eacc(plVar13,sVar6);
        plVar16 = plVar13;
        lStack_78 = param_1;
        plStack_70 = plVar13;
        FUN_10a776c90();
        FUN_10abe27b0(&uStack_140,lStack_e0);
        *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (uint)(byte)ppppppuStack_128;
        FUN_10a5e1b7c(plVar13,plVar16,(undefined4)uStack_130,uStack_130._4_4_,&uStack_140);
        puVar18 = &uStack_140;
        func_0x00010a045fb4(puVar18);
        pppppppuVar28 = (undefined8 *******)ppppppuStack_c0;
        pppppppuVar20 = (undefined8 *******)ppppppuStack_b8;
        if (lStack_d0 != 0) {
          FUN_10a778124();
          FUN_10abe27b0(&uStack_140,lStack_d0);
          *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (uint)(byte)ppppppuStack_128;
          FUN_10a5e1b7c(plVar13,puVar18,(undefined4)uStack_130,uStack_130._4_4_,&uStack_140);
          func_0x00010a045fb4(&uStack_140);
          pppppppuVar28 = (undefined8 *******)ppppppuStack_c0;
          pppppppuVar20 = (undefined8 *******)ppppppuStack_b8;
        }
        for (; pppppppuVar28 != pppppppuVar20; pppppppuVar28 = pppppppuVar28 + 6) {
          FUN_10abe27b0(&uStack_140,pppppppuVar28[4]);
          *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (uint)(byte)ppppppuStack_128;
          FUN_10a5e1b7c(plVar13,pppppppuVar28,(undefined4)uStack_130,uStack_130._4_4_,&uStack_140);
          plVar16 = (long *)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
          if (plVar16 != (long *)0x0) {
            plVar15 = plVar16 + 1;
            do {
              lVar30 = *plVar15;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar8) {
                *plVar15 = lVar30 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar30 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
          }
        }
        if (*(long *)(param_4 + 0x18) == *(long *)(param_4 + 0x20)) goto LAB_10abe26b4;
        if (1 < *(uint *)(*(long *)(param_4 + 0x18) + 0x100)) {
          plVar16 = (long *)0x1;
          FUN_10a778078();
          if (ppppppuStack_c0 != ppppppuStack_b8) {
            pppppppuVar20 = (undefined8 *******)ppppppuStack_c0;
            do {
              if (pppppppuVar20[3] == (undefined8 ******)plVar16[3]) goto LAB_10abe23d4;
              pppppppuVar20 = pppppppuVar20 + 6;
            } while (pppppppuVar20 != (undefined8 *******)ppppppuStack_b8);
          }
          plVar16 = &lStack_78;
          FUN_10abe27e0(plVar16);
LAB_10abe23d4:
          if (lStack_d0 == 0) {
            FUN_10a778124();
            FUN_10abe27e0(&lStack_78,plVar16);
          }
        }
        plVar16 = *(long **)(param_1 + 0x40);
        plVar15 = *(long **)(param_1 + 0x38);
        do {
          pppppppuVar28 = (undefined8 *******)ppppppuStack_a8;
          pppppppuVar20 = (undefined8 *******)ppppppuStack_a0;
          if (plVar15 == plVar16) goto LAB_10abe2450;
          lVar30 = *plVar15;
          func_0x00010a791170();
          plVar15 = plVar15 + 1;
        } while (lVar30 == 0);
        iVar12 = *(int *)(lVar30 + 0x40) * *(int *)(lVar30 + 0x44);
        FUN_10abe28a8(&uStack_140,*(undefined8 *)(lVar30 + 0x50),iVar12,iVar12);
        *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (uint)(byte)ppppppuStack_128;
        FUN_10a5e1b7c(plVar13,lVar30 + 0x20,(undefined4)uStack_130,uStack_130._4_4_,&uStack_140);
        func_0x00010a045fb4(&uStack_140);
        pppppppuVar28 = (undefined8 *******)ppppppuStack_a8;
        pppppppuVar20 = (undefined8 *******)ppppppuStack_a0;
LAB_10abe2450:
        for (; pppppppuVar28 != pppppppuVar20; pppppppuVar28 = pppppppuVar28 + 0xb) {
          pppppuVar1 = *pppppppuVar28[8];
          FUN_10abe28a8(&uStack_140,pppppuVar1,(long)pppppppuVar28[8][1] - (long)pppppuVar1,0x4000);
          *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (uint)(byte)ppppppuStack_128;
          FUN_10a5e1b7c(plVar13,pppppppuVar28 + 4,(undefined4)uStack_130,uStack_130._4_4_,
                        &uStack_140);
          plVar16 = (long *)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
          if (plVar16 != (long *)0x0) {
            plVar15 = plVar16 + 1;
            do {
              lVar30 = *plVar15;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar8) {
                *plVar15 = lVar30 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar30 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
          }
        }
        *(undefined4 *)(plVar13 + 0xd) = 1;
        uStack_140._0_4_ = 0x3f800000;
        uStack_138._4_4_ = 0;
        uStack_130._0_4_ = 0;
        uStack_140._4_4_ = 0;
        uStack_138._0_4_ = 0;
        uStack_130._4_4_ = 0x3f800000;
        ppppppuStack_128 = (undefined8 *******)0x0;
        ppppppuStack_120 = (undefined8 *******)0x0;
        uStack_118 = 0x3f800000;
        uStack_10c = 0;
        uStack_114 = 0;
        uStack_104 = 0x3f800000;
        (**(code **)(*param_2 + 0x58))(param_2,plVar21[2],sVar6,&uStack_140,1);
      }
    }
  }
  uStack_140 = &ppppppuStack_a8;
  FUN_10a7a3320(&uStack_140);
  FUN_10abffe40(&ppppppuStack_c0);
  plVar21 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar13 = plStack_c8 + 1;
    do {
      lVar30 = *plVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *plVar13 = lVar30 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  plVar21 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar13 = plStack_d8 + 1;
    do {
      lVar30 = *plVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *plVar13 = lVar30 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  if (plStack_80 == (long *)0x0) {
    return;
  }
LAB_10abe2614:
  plVar13 = plStack_80;
  plVar21 = plStack_80 + 1;
  do {
    lVar30 = *plVar21;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar8) {
      *plVar21 = lVar30 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (lVar30 == 0) {
    (**(code **)(*plStack_80 + 0x10))(plStack_80);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
  }
  return;
}



/* Entry: 10abe27b0; end: 10abe27df;  */

void FUN_10abe27b0(undefined8 *param_1,int *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long extraout_x9;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  uVar3 = *param_2 * param_2[0x14];
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    return;
  }
  uVar4 = param_2[1] * *param_2;
  uVar10 = *(undefined8 *)(param_2 + 2);
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    lVar8 = 0;
    FUN_10a2421c8();
    (**(code **)(**(long **)(lVar8 + 0x228) + 0x50))();
    ppuVar9 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    if (((*ppuVar9)[0xc0] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10abe2a0c);
      (*pcVar7)();
    }
    uVar2 = (uVar4 + *(int *)(extraout_x9 + 0x148)) - 1 & -*(int *)(extraout_x9 + 0x148);
    FUN_10abfe7d4(&uStack_60,extraout_x9,*ppuVar9 + 0x18,uVar2);
    if (lStack_48 != 0) {
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      _memcpy(lStack_48,uVar10,uVar3);
    }
    param_1[1] = plStack_58;
    *param_1 = uStack_60;
    if (plStack_58 == (long *)0x0) {
      *(undefined4 *)(param_1 + 2) = uStack_50;
      *(uint *)((long)param_1 + 0x14) = uVar2;
      *(bool *)(param_1 + 3) = lStack_48 == 0;
    }
    else {
      plVar1 = plStack_58 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined4 *)(param_1 + 2) = uStack_50;
      *(uint *)((long)param_1 + 0x14) = uVar2;
      *(bool *)(param_1 + 3) = lStack_48 == 0;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_58);
        return;
      }
    }
  }
  return;
}



/* Entry: 10abe27e0; end: 10abe28a7;  */

void FUN_10abe27e0(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte bStack_28;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar2 != 0) {
    FUN_10abe28a8(auStack_40,&UNK_10e5036a2,0x4000,0x4000);
    lVar5 = param_1[1];
    *(uint *)(*param_1 + 0x58) = *(int *)(*param_1 + 0x58) + (uint)bStack_28;
    FUN_10a5e1b7c(lVar5,param_2,uStack_30,uStack_2c,auStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  return;
}



/* Entry: 10abe28a8; end: 10abe2a0b;  */

void FUN_10abe28a8(undefined8 *param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined **ppuVar7;
  long extraout_x9;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    lVar6 = 0;
    FUN_10a2421c8();
    (**(code **)(**(long **)(lVar6 + 0x228) + 0x50))();
    ppuVar7 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    if (((*ppuVar7)[0xc0] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10abe2a0c);
      (*pcVar5)();
    }
    uVar2 = (param_4 + *(int *)(extraout_x9 + 0x148)) - 1 & -*(int *)(extraout_x9 + 0x148);
    FUN_10abfe7d4(&uStack_60,extraout_x9,*ppuVar7 + 0x18,uVar2);
    if (lStack_48 != 0) {
      if (param_4 <= param_3) {
        param_3 = (ulong)param_4;
      }
      _memcpy(lStack_48,param_2,param_3);
    }
    param_1[1] = plStack_58;
    *param_1 = uStack_60;
    if (plStack_58 == (long *)0x0) {
      *(undefined4 *)(param_1 + 2) = uStack_50;
      *(uint *)((long)param_1 + 0x14) = uVar2;
      *(bool *)(param_1 + 3) = lStack_48 == 0;
    }
    else {
      plVar1 = plStack_58 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined4 *)(param_1 + 2) = uStack_50;
      *(uint *)((long)param_1 + 0x14) = uVar2;
      *(bool *)(param_1 + 3) = lStack_48 == 0;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_58);
        return;
      }
    }
  }
  return;
}



/* Entry: 10abe2a0c; end: 10abe2ae3;  */

void FUN_10abe2a0c(long param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x88);
      puVar5 = *(undefined8 **)(param_1 + 0x80);
      while (puVar5 != puVar2) {
        uStack_38 = *puVar5;
        plVar4 = *(long **)(param_1 + 0x20);
        if (plVar4 == (long *)0x0) {
          FUN_10a06186c();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10abe2ac8);
          (*pcVar3)();
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,&uStack_38);
        puVar5 = puVar5 + 5;
      }
    }
    lVar1 = *(long *)(param_1 + 0x80);
    lVar6 = *(long *)(param_1 + 0x88);
    while (lVar6 != lVar1) {
      lVar6 = lVar6 + -0x28;
      FUN_10a158030(lVar6);
    }
    *(long *)(param_1 + 0x88) = lVar1;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_10abe2ae4(param_1,0);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
  return;
}



/* Entry: 10abe2ae4; end: 10abe2c9f;  */

void FUN_10abe2ae4(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_38;
  
  lVar7 = *(long *)(param_1 + 0x88);
  if (*(long *)(param_1 + 0x80) != lVar7) {
    do {
      if ((*(long *)(lVar7 + -0x10) != 0) && (*(long *)(*(long *)(lVar7 + -0x10) + 8) != -1)) {
        return;
      }
      lVar7 = *(long *)(lVar7 + -0x20);
      if (lVar7 == 0) {
        return;
      }
      plVar8 = (long *)(lVar7 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (*(long *)(lVar7 + 8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        return;
      }
      uVar3 = *(uint *)(param_1 + 0x98);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      if (uVar3 <= param_2) {
        return;
      }
      plVar8 = *(long **)(param_1 + 0x20);
      if (plVar8 != (long *)0x0) {
        if (*(long *)(param_1 + 0x80) == *(long *)(param_1 + 0x88)) goto LAB_10abe2be0;
        uStack_38 = *(undefined8 *)(*(long *)(param_1 + 0x88) + -0x28);
        (**(code **)(*plVar8 + 0x30))(plVar8,&uStack_38);
      }
      lVar2 = *(long *)(param_1 + 0x88);
      if (*(long *)(param_1 + 0x80) == lVar2) {
LAB_10abe2be0:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe2be4);
        (*pcVar6)();
      }
      lVar7 = lVar2 + -0x28;
      iVar1 = *(int *)(lVar2 + -4);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) - *(int *)(lVar2 + -8);
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) - iVar1;
      FUN_10a158030(lVar7);
      *(long *)(param_1 + 0x88) = lVar7;
    } while (*(long *)(param_1 + 0x80) != lVar7);
  }
  return;
}



/* Entry: 10abe2ca0; end: 10abe2eb3;  */

void FUN_10abe2ca0(undefined8 *param_1,long param_2,ulong param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  uVar8 = (*(long *)(param_2 + 0x88) - *(long *)(param_2 + 0x80) >> 3) * -0x3333333333333333;
  if (uVar8 < param_3 || uVar8 - param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe2e90);
    (*pcVar6)();
  }
  plVar12 = (long *)(*(long *)(param_2 + 0x80) + param_3 * 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  plVar11 = plVar12 + 4;
  *(int *)(param_1 + 2) = (int)*plVar11;
  *(int *)((long)param_1 + 0x14) = param_4;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  plVar7 = (long *)plVar12[3];
  if (plVar7 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_58 = plVar7;
    if ((plVar7 != (long *)0x0) && (lStack_60 = plVar12[2], lStack_60 != 0)) goto LAB_10abe2e08;
  }
  lVar10 = *plVar12;
  plVar7 = (long *)0x20;
  lStack_50 = lVar10;
  __Znwm();
  *plVar7 = (long)&PTR_FUN_110c557b0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  lVar9 = 0;
  if (lVar10 != 0) {
    lVar9 = lVar10 + 8;
  }
  plStack_48 = plVar7;
  FUN_10a1b0494(&lStack_50,lVar9,lVar10);
  plVar1 = plStack_48;
  lStack_60 = lStack_50;
  plVar7 = plStack_58;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plStack_58 = plVar1;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar9 = plVar12[3];
  plVar12[3] = (long)plStack_58;
  plVar12[2] = lStack_60;
  if (lVar9 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10abe2e08:
  FUN_10a0e65b0(param_1,&lStack_60);
  plVar7 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar12 = plStack_58 + 1;
    do {
      lVar9 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *(int *)plVar11 = (int)*plVar11 + param_4;
  uVar2 = *(int *)(param_2 + 0xa0) + param_4;
  uVar3 = *(uint *)(param_2 + 0x9c);
  if (*(uint *)(param_2 + 0x9c) <= uVar2) {
    uVar3 = uVar2;
  }
  *(uint *)(param_2 + 0x9c) = uVar3;
  *(uint *)(param_2 + 0xa0) = uVar2;
  return;
}



/* Entry: 10abe2eb4; end: 10abe2fa7;  */

void FUN_10abe2eb4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x28);
  lVar5 = *(long *)(param_2 + 0x80);
  lVar4 = *(long *)(param_2 + 0x88) - lVar5;
  if (lVar4 != 0) {
    uVar6 = 0;
    uVar3 = (lVar4 >> 3) * -0x3333333333333333;
    do {
      uVar1 = uVar6 + *(long *)(param_2 + 0xa8);
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar1 / uVar3;
      }
      lVar4 = uVar1 - uVar2 * uVar3;
      lVar5 = lVar5 + lVar4 * 0x28;
      func_0x00010abe2be4(param_2,lVar5);
      if ((uint)param_3 <= (uint)(*(int *)(lVar5 + 0x24) - *(int *)(lVar5 + 0x20))) {
        *(long *)(param_2 + 0xa8) = lVar4;
        FUN_10abe2ca0(param_1,param_2,lVar4,param_3);
        goto LAB_10abe2f74;
      }
      uVar6 = uVar6 + 1;
      lVar5 = *(long *)(param_2 + 0x80);
      uVar3 = (*(long *)(param_2 + 0x88) - lVar5 >> 3) * -0x3333333333333333;
    } while (uVar6 < uVar3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_10abe2f74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x28);
  return;
}



/* Entry: 10abe2fa8; end: 10abe31fb;  */

void FUN_10abe2fa8(undefined8 param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)((long)param_2 + 0x74);
  uStack_70 = param_3 & 0xffffffff;
  lStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  (**(code **)(*(long *)*param_2 + 0x70))(&uStack_b0,(long *)*param_2,&uStack_70);
  uStack_a0 = uStack_b0;
  uStack_98 = uStack_a8;
  lStack_80 = uStack_70 << 0x20;
  __ZNSt3__15mutex4lockEv(param_2 + 5);
  puVar1 = (undefined8 *)param_2[0x11];
  if (puVar1 < (undefined8 *)param_2[0x12]) {
    *puVar1 = uStack_b0;
    puVar1[1] = uStack_a8;
    uStack_a0 = 0;
    uStack_98 = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    puVar1[4] = lStack_80;
    puVar10 = puVar1 + 5;
LAB_10abe3158:
    param_2[0x11] = puVar10;
    lVar4 = ((long)puVar10 - param_2[0x10] >> 3) * -0x3333333333333333 + -1;
    param_2[0x15] = lVar4;
    *(int *)(param_2 + 0x13) = *(int *)(param_2 + 0x13) + (int)uStack_70;
    FUN_10abe2ca0(param_1,param_2,lVar4,param_4);
    __ZNSt3__15mutex6unlockEv(param_2 + 5);
    return;
  }
  puVar9 = (undefined8 *)param_2[0x10];
  uVar7 = ((long)puVar1 - (long)puVar9 >> 3) * -0x3333333333333333 + 1;
  if (uVar7 < 0x666666666666667) {
    lVar4 = (long)param_2[0x12] - (long)puVar9 >> 3;
    uVar8 = lVar4 * -0x6666666666666666;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    if (uVar8 < 0x666666666666667) {
      puVar3 = (undefined8 *)(uVar8 * 0x28);
      __Znwm();
      puVar10 = (undefined8 *)((long)puVar3 + ((long)puVar1 - (long)puVar9));
      *puVar10 = uStack_b0;
      puVar10[1] = uStack_a8;
      uStack_a0 = 0;
      uStack_98 = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      puVar10[4] = lStack_80;
      puVar10 = puVar10 + 5;
      puVar5 = puVar9;
      puVar6 = puVar3;
      if (puVar9 != puVar1) {
        do {
          uVar11 = *puVar5;
          puVar6[1] = puVar5[1];
          *puVar6 = uVar11;
          *puVar5 = 0;
          puVar5[1] = 0;
          uVar11 = puVar5[2];
          puVar6[3] = puVar5[3];
          puVar6[2] = uVar11;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar6[4] = puVar5[4];
          puVar5 = puVar5 + 5;
          puVar6 = puVar6 + 5;
        } while (puVar5 != puVar1);
        do {
          FUN_10a158030(puVar9);
          puVar9 = puVar9 + 5;
        } while (puVar9 != puVar1);
        puVar9 = (undefined8 *)param_2[0x10];
      }
      param_2[0x10] = puVar3;
      param_2[0x11] = puVar10;
      param_2[0x12] = puVar3 + uVar8 * 5;
      if (puVar9 != (undefined8 *)0x0) {
        __ZdlPv(puVar9);
      }
      param_4 = param_4 & 0xffffffff;
      goto LAB_10abe3158;
    }
    func_0x000109ffded8();
  }
  else {
    func_0x00010abffebc();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10abe31d4);
  (*pcVar2)();
}



/* Entry: 10abe31fc; end: 10abe3227;  */

long FUN_10abe31fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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



/* Entry: 10abe3228; end: 10abe32fb;  */

void FUN_10abe3228(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  long lStack_38;
  
  uVar2 = *(uint *)(param_2 + 0x68);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = ((param_3 + uVar2) - 1) / uVar2;
  }
  uVar5 = uVar5 * uVar2;
  FUN_10abe2eb4(param_1,param_2,uVar5);
  if (*param_1 == 0) {
    uVar2 = *(uint *)(param_2 + 0x70);
    if (*(uint *)(param_2 + 0x70) <= uVar5) {
      uVar2 = uVar5;
    }
    FUN_10abe2fa8(auStack_48,param_2,uVar2,uVar5);
    FUN_10a0e65b0(param_1,auStack_48);
    param_1[2] = lStack_38;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
  }
  return;
}



/* Entry: 10abe32fc; end: 10abe3303;  */

void FUN_10abe32fc(void)

{
  return;
}



/* Entry: 10abe3304; end: 10abe33e7;  */

void FUN_10abe3304(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  
  uVar1 = *param_4;
  plVar2 = param_2 + 4;
  func_0x00010a01e9ec(plVar2,uVar1);
  if (*(char *)(plVar2[0x35] + 0x624) == '\x01') {
    plVar2 = param_2 + 4;
    FUN_10a015150(plVar2,uVar1);
    if (plVar2[0x17] != plVar2[0x18]) {
      param_4[0x1b] = 0x3f800000;
      *(undefined8 *)(param_4 + 0x1c) = 0;
      *(undefined8 *)(param_4 + 0x1e) = 0;
      param_4[0x20] = 0x3f800000;
      *(undefined8 *)(param_4 + 0x23) = 0;
      *(undefined8 *)(param_4 + 0x21) = 0;
      param_4[0x25] = 0x3f800000;
      *(undefined8 *)(param_4 + 0x26) = 0;
      *(undefined8 *)(param_4 + 0x28) = 0;
      param_4[0x2a] = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x00010abe3394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x148))(param_2,param_4);
      return;
    }
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      FUN_10ae06f30(1,2,&UNK_10f69a23e,&UNK_10f69a288,0x2a,&UNK_10f69a2fb,&stack0x00000000);
      return;
    }
  }
  return;
}



/* Entry: 10abe33e8; end: 10abe351f;  */

void FUN_10abe33e8(long *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar7 = 0;
  do {
    lVar2 = *(long *)(param_2 + 0x20 + lVar7 * 8);
    if (lVar2 == 0) {
      lVar2 = 0;
LAB_10abe344c:
      lVar6 = 0;
    }
    else {
      FUN_10aafc4cc();
      lVar6 = *(long *)(param_2 + 0x20 + lVar7 * 8);
      if (lVar6 == 0) goto LAB_10abe344c;
      lVar6 = lVar6 + 0x38;
      FUN_10aafc4cc();
    }
    if (lVar2 != 0 || lVar6 != 0) {
      plVar3 = param_1 + 4;
      FUN_10a5dfd94(plVar3,param_1[0x13c]);
      plVar4 = param_1 + 4;
      FUN_10a01eacc(plVar4,plVar3);
      bVar1 = *(byte *)(lVar7 + 0x113835668);
      *(byte *)(plVar4 + 3) =
           *(byte *)(plVar4 + 3) & 0xf9 | (byte)(((bVar1 & 3) >> 1 | (bVar1 & 1) << 1) << 1);
      uVar8 = 6;
      if ((bVar1 & 4) != 0) {
        uVar8 = 0;
      }
      plVar5 = (long *)(ulong)uVar8;
      FUN_10aaebdec();
      lVar12 = plVar5[3];
      lVar11 = plVar5[2];
      lVar10 = plVar5[5];
      lVar9 = plVar5[4];
      lVar13 = *plVar5;
      plVar4[5] = plVar5[1];
      plVar4[4] = lVar13;
      plVar4[7] = lVar12;
      plVar4[6] = lVar11;
      plVar4[9] = lVar10;
      plVar4[8] = lVar9;
      if (lVar2 != 0) {
        (**(code **)(*param_1 + 0x58))(param_1,*(undefined8 *)(lVar2 + 0xe0),plVar3,param_3,1);
      }
      if (lVar6 != 0) {
        (**(code **)(*param_1 + 0x58))(param_1,*(undefined8 *)(lVar6 + 0xe0),plVar3,param_3,1);
      }
    }
    lVar7 = lVar7 + 1;
    if (lVar7 == 3) {
      return;
    }
  } while( true );
}



/* Entry: 10abe3520; end: 10abe3527;  */

/* WARNING: Removing unreachable block (ram,0x00010abe3af0) */
/* WARNING: Removing unreachable block (ram,0x00010abe3a20) */
/* WARNING: Removing unreachable block (ram,0x00010abe37e0) */
/* WARNING: Removing unreachable block (ram,0x00010abe384c) */
/* WARNING: Removing unreachable block (ram,0x00010abe3734) */
/* WARNING: Removing unreachable block (ram,0x00010abe36c8) */
/* WARNING: Removing unreachable block (ram,0x00010abe379c) */
/* WARNING: Removing unreachable block (ram,0x00010abe38e4) */
/* WARNING: Removing unreachable block (ram,0x00010abe38f0) */
/* WARNING: Removing unreachable block (ram,0x00010abe3914) */
/* WARNING: Removing unreachable block (ram,0x00010abe391c) */
/* WARNING: Removing unreachable block (ram,0x00010abe3928) */
/* WARNING: Removing unreachable block (ram,0x00010abe394c) */
/* WARNING: Removing unreachable block (ram,0x00010abe39b4) */
/* WARNING: Removing unreachable block (ram,0x00010abe3ac0) */
/* WARNING: Removing unreachable block (ram,0x00010abe3acc) */
/* WARNING: Removing unreachable block (ram,0x00010abe3af8) */
/* WARNING: Removing unreachable block (ram,0x00010abe3b04) */
/* WARNING: Removing unreachable block (ram,0x00010abe3b28) */

void FUN_10abe3520(undefined8 param_1,ulong param_2,float param_3,float param_4,long ******param_5)

{
  long *******ppppppplVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  long ******pppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long in_x4;
  long *****ppppplVar13;
  long ****pppplVar14;
  float fVar15;
  long ******pppppplVar16;
  float *pfVar17;
  ulong uVar18;
  long ***ppplVar19;
  long *****ppppplVar20;
  long *****ppppplVar21;
  long ******pppppplVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined4 uVar28;
  ulong uVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  float fStack_298;
  float fStack_294;
  undefined4 auStack_290 [2];
  long ****pppplStack_288;
  long ****pppplStack_280;
  long ****pppplStack_278;
  long ****pppplStack_270;
  long ****pppplStack_268;
  long ****pppplStack_260;
  undefined1 auStack_254 [64];
  undefined4 uStack_214;
  undefined1 uStack_198;
  undefined7 uStack_197;
  long ***ppplStack_190;
  undefined7 uStack_188;
  undefined1 uStack_181;
  long ******pppppplStack_180;
  long ******pppppplStack_178;
  long ***ppplStack_170;
  long *****ppppplStack_168;
  undefined1 auStack_151 [9];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long ******pppppplStack_110;
  long ******pppppplStack_108;
  long ***ppplStack_100;
  long *****ppppplStack_f8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long ***ppplStack_c0;
  long *****ppppplStack_b8;
  undefined8 auStack_b0 [2];
  char acStack_99 [33];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplStack_180 = param_5;
  if (lRam00000001137ec638 != -1) {
    pppppplStack_d0 = (long ******)&pppppplStack_180;
    pppppplStack_110 = (long ******)&pppppplStack_d0;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ec638,&pppppplStack_110,FUN_10ac09df0);
  }
  uStack_128 = 0xc;
  puStack_130 = &DAT_10f69b067;
  uStack_120 = 0xc3e1946cddf186a4;
  FUN_10abfc520(param_5 + 7,0);
  pppppplVar16 = param_5 + 10;
  ppppplVar20 = *pppppplVar16;
  ppppplVar13 = param_5[0xb];
  if (param_5[0xb] != ppppplVar20) {
    do {
      ppppplVar21 = ppppplVar13 + -3;
      FUN_10a0da1b8(ppppplVar21,ppppplVar13[-2]);
      ppppplVar13 = ppppplVar21;
    } while (ppppplVar21 != ppppplVar20);
    param_5[0xb] = ppppplVar20;
  }
  pppppplVar22 = param_5 + 0xd;
  ppppplVar20 = *pppppplVar22;
  ppppplVar13 = param_5[0xe];
  if (param_5[0xe] != ppppplVar20) {
    do {
      ppppplVar21 = ppppplVar13 + -3;
      FUN_10a0da1b8(ppppplVar21,ppppplVar13[-2]);
      ppppplVar13 = ppppplVar21;
    } while (ppppplVar21 != ppppplVar20);
    param_5[0xe] = ppppplVar20;
  }
  uStack_148 = 0xc;
  auStack_151._1_8_ = &DAT_10f69b074;
  uStack_140 = 0x3d769d59ea032204;
  if (0 < *(int *)((long)param_5 + 0xd4)) {
    iVar24 = 0;
    do {
      FUN_10a0ee900(&pppppplStack_d0,&UNK_10f69b081,0xd);
      ppppplVar20 = param_5[8];
      if (ppppplVar20 < param_5[9]) {
        ppppplVar20[2] = (long ****)ppplStack_c0;
        ppppplVar20[3] = (long ****)0x0;
        ppppplVar20[1] = (long ****)pppppplStack_c8;
        *ppppplVar20 = (long ****)pppppplStack_d0;
        pppppplStack_c8 = (long ******)0x0;
        ppplStack_c0 = (long ***)0x0;
        pppppplStack_d0 = (long ******)0x0;
        func_0x000107c2b080(ppppplVar20);
        pppppplVar8 = (long ******)(ppppplVar20 + 4);
      }
      else {
        pppppplVar8 = param_5 + 7;
        FUN_10ab14008(pppppplVar8,&pppppplStack_d0);
      }
      param_5[8] = (long *****)pppppplVar8;
      FUN_10a0ee900(&pppppplStack_d0,&UNK_10f69b08f,10);
      ppppplVar20 = param_5[8];
      if (ppppplVar20 < param_5[9]) {
        ppppplVar20[2] = (long ****)ppplStack_c0;
        ppppplVar20[3] = (long ****)0x0;
        ppppplVar20[1] = (long ****)pppppplStack_c8;
        *ppppplVar20 = (long ****)pppppplStack_d0;
        pppppplStack_c8 = (long ******)0x0;
        ppplStack_c0 = (long ***)0x0;
        pppppplStack_d0 = (long ******)0x0;
        func_0x000107c2b080(ppppplVar20);
        pppppplVar8 = (long ******)(ppppplVar20 + 4);
      }
      else {
        pppppplVar8 = param_5 + 7;
        FUN_10ab14008(pppppplVar8,&pppppplStack_d0);
      }
      param_5[8] = (long *****)pppppplVar8;
      FUN_10a0ee900(&pppppplStack_d0,&UNK_10f69b09a,0xb);
      ppppplVar20 = param_5[8];
      if (ppppplVar20 < param_5[9]) {
        ppppplVar20[2] = (long ****)ppplStack_c0;
        ppppplVar20[3] = (long ****)0x0;
        ppppplVar20[1] = (long ****)pppppplStack_c8;
        *ppppplVar20 = (long ****)pppppplStack_d0;
        pppppplStack_c8 = (long ******)0x0;
        ppplStack_c0 = (long ***)0x0;
        pppppplStack_d0 = (long ******)0x0;
        func_0x000107c2b080(ppppplVar20);
        pppppplVar8 = (long ******)(ppppplVar20 + 4);
      }
      else {
        pppppplVar8 = param_5 + 7;
        FUN_10ab14008(pppppplVar8,&pppppplStack_d0);
      }
      param_5[8] = (long *****)pppppplVar8;
      FUN_10a0ee900(&pppppplStack_d0,&UNK_10f69b0a6,0xe);
      ppplStack_100 = ppplStack_c0;
      pppppplStack_108 = pppppplStack_c8;
      pppppplStack_110 = pppppplStack_d0;
      pppppplStack_c8 = (long ******)0x0;
      ppplStack_c0 = (long ***)0x0;
      pppppplStack_d0 = (long ******)0x0;
      ppppplStack_f8 = (long *****)0x0;
      func_0x000107c2b080(&pppppplStack_110);
      if ((long)ppplStack_100 < 0) {
        func_0x000107c3192c(&pppppplStack_d0,pppppplStack_110,pppppplStack_108);
      }
      else {
        pppppplStack_c8 = pppppplStack_108;
        pppppplStack_d0 = pppppplStack_110;
        ppplStack_c0 = ppplStack_100;
      }
      ppppplStack_b8 = ppppplStack_f8;
      FUN_10a0d9f14(&pppppplStack_180,&pppppplStack_d0,1,auStack_151);
      FUN_10abfc5a0(pppppplVar16,&pppppplStack_180);
      FUN_10a0da1b8(&pppppplStack_180,pppppplStack_178);
      if ((long)ppplStack_100 < 0) {
        func_0x000107c3192c(&pppppplStack_d0,pppppplStack_110,pppppplStack_108);
      }
      else {
        pppppplStack_c8 = pppppplStack_108;
        pppppplStack_d0 = pppppplStack_110;
        ppplStack_c0 = ppplStack_100;
      }
      ppppplStack_b8 = ppppplStack_f8;
      func_0x000107c2b074(auStack_b0,&puStack_130);
      FUN_10a0d9f14(&pppppplStack_180,&pppppplStack_d0,2,auStack_151);
      FUN_10abfc5a0(pppppplVar22,&pppppplStack_180);
      FUN_10a0da1b8(&pppppplStack_180,pppppplStack_178);
      lVar25 = 0;
      do {
        if (acStack_99[lVar25] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_b0 + lVar25));
        }
        lVar25 = lVar25 + -0x20;
      } while (lVar25 != -0x40);
      if ((long)ppplStack_100 < 0) {
        __ZdlPv(pppppplStack_110);
      }
      iVar24 = iVar24 + 1;
    } while (iVar24 < *(int *)((long)param_5 + 0xd4));
  }
  FUN_10a0ee900(&pppppplStack_d0,&UNK_10f69b0a6,0xe);
  ppplStack_170 = ppplStack_c0;
  pppppplStack_178 = pppppplStack_c8;
  pppppplStack_180 = pppppplStack_d0;
  pppppplStack_c8 = (long ******)0x0;
  ppplStack_c0 = (long ***)0x0;
  pppppplStack_d0 = (long ******)0x0;
  ppppplStack_168 = (long *****)0x0;
  func_0x000107c2b080(&pppppplStack_180);
  if ((long)ppplStack_170 < 0) {
    func_0x000107c3192c(&pppppplStack_d0,pppppplStack_180,pppppplStack_178);
  }
  else {
    pppppplStack_c8 = pppppplStack_178;
    pppppplStack_d0 = pppppplStack_180;
    ppplStack_c0 = ppplStack_170;
  }
  ppppplStack_b8 = ppppplStack_168;
  FUN_10a0d9f14(&pppppplStack_110,&pppppplStack_d0,1,auStack_151);
  FUN_10abfc5a0(pppppplVar16,&pppppplStack_110);
  FUN_10a0da1b8(&pppppplStack_110,pppppplStack_108);
  if ((long)ppplStack_170 < 0) {
    func_0x000107c3192c(&pppppplStack_d0,pppppplStack_180,pppppplStack_178);
  }
  else {
    pppppplStack_c8 = pppppplStack_178;
    pppppplStack_d0 = pppppplStack_180;
    ppplStack_c0 = ppplStack_170;
  }
  ppppplStack_b8 = ppppplStack_168;
  func_0x000107c2b074(auStack_b0,&puStack_130);
  puVar12 = (undefined4 *)auStack_151;
  lVar25 = 2;
  FUN_10a0d9f14(&pppppplStack_110,&pppppplStack_d0);
  FUN_10abfc5a0(pppppplVar22,&pppppplStack_110);
  FUN_10a0da1b8(&pppppplStack_110,pppppplStack_108);
  lVar23 = 0;
  do {
    if (acStack_99[lVar23] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_b0 + lVar23));
    }
    lVar23 = lVar23 + -0x20;
  } while (lVar23 != -0x40);
  pppppplStack_110 = (long ******)0x0;
  FUN_10a3b1e74(&pppppplStack_d0,&pppppplStack_110);
  func_0x00010a015c50(param_5 + 4,&pppppplStack_d0);
  ppppplVar20 = param_5[4];
  func_0x000107c2b054(&uStack_198,&UNK_10f69b0b5);
  if (*(char *)((long)ppppplVar20 + 0x6f) < '\0') {
    __ZdlPv(ppppplVar20[0xb]);
  }
  ppppplVar20[0xc] = (long ****)ppplStack_190;
  ppppplVar20[0xb] = (long ****)CONCAT71(uStack_197,uStack_198);
  ppppplVar20[0xd] = (long ****)CONCAT17(uStack_181,uStack_188);
  uStack_181 = 0;
  uStack_198 = 0;
  (*(code *)(*param_5)[9])(param_5);
  pppplVar14 = param_5[4][0x45];
  if (param_5[4][0x46] == pppplVar14) {
    FUN_10a00946c(&UNK_10f6921f0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe3ce4);
    (*pcVar6)();
  }
  ppplVar19 = *pppplVar14;
  ppplStack_100 = ppplVar19 + 8;
  uVar3 = *(ushort *)((long)ppplVar19 + 0x129);
  *(ushort *)((long)ppplVar19 + 0x129) = uVar3 & 0xff80 | uVar3 + 1 & 0x7f;
  *(ushort *)(ppplVar19 + 0xe) =
       *(ushort *)(ppplVar19 + 0xe) & 0xff80 | *(ushort *)(ppplVar19 + 0xe) + 1 & 0x7f;
  ppppplStack_f8 = (long *****)CONCAT71(ppppplStack_f8._1_7_,1);
  pppppplStack_110 = (long ******)FUN_10a1d3648;
  pppppplStack_108 = (long ******)&PTR_FUN_110bad818;
  func_0x00010a332748((long)ppplVar19 + 0x219,0);
  func_0x00010a332700((long)ppplVar19 + 0x21a,0);
  uVar11 = 1;
  func_0x00010a3326b8(ppplVar19 + 0x43,1);
  FUN_10a044790(&pppppplStack_110);
  (*(code *)*pppppplStack_108)(&pppppplStack_108);
  FUN_10a044790(&ppplStack_c0);
  ppppppplVar9 = (long *******)&ppppplStack_b8;
  (*(code *)*ppppplStack_b8)();
  ppppppplVar10 = (long *******)pppppplStack_c8;
  if ((long *******)pppppplStack_c8 != (long *******)0x0) {
    ppppppplVar1 = (long *******)(pppppplStack_c8 + 1);
    do {
      pppppplVar16 = *ppppppplVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
      if (bVar7) {
        *ppppppplVar1 = (long ******)((long)pppppplVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppplVar16 == (long ******)0x0) {
      (*(code *)(*pppppplStack_c8)[2])(pppppplStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppplVar9 = ppppppplVar10;
    }
  }
  if ((long)ppplStack_170 < 0) {
    ppppppplVar9 = (long *******)pppppplStack_180;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((long)ppplStack_170 < 0) {
    __ZdlPv(pppppplStack_180);
  }
  __Unwind_Resume();
  if (in_x4 != 0) {
    ppppplVar20 = *ppppppplVar9[0x20];
    puVar2 = puVar12 + in_x4;
    iVar24 = *(int *)((long)ppppppplVar9 + 0xfc) + 1;
    uVar4 = iVar24 + iVar24 * *(int *)(ppppppplVar9 + 0x1f);
    do {
      uVar28 = (undefined4)param_2;
      uStack_214 = *puVar12;
      lVar23 = lVar25;
      func_0x00010a01e9ec();
      func_0x000109519fd0(auStack_254,uVar11,lVar23 + 0x6c);
      uVar34 = *(undefined4 *)(*(long *)(lVar23 + 0x1a8) + 0x4f0);
      pppplStack_260 = (long ****)0x0;
      pppplStack_268 = (long ****)0x0;
      pppplStack_270 = (long ****)0x0;
      pppplStack_278 = (long ****)0x0;
      pppplStack_280 = (long ****)0x0;
      pppplStack_288 = (long ****)0x0;
      auStack_290[0] = uStack_214;
      FUN_10abac094(&pppplStack_270,&uStack_214);
      FUN_10abe4138(auStack_254);
      uStack_2a0 = uVar34;
      uStack_29c = uVar28;
      fStack_298 = param_3;
      fStack_294 = param_4;
      func_0x00010a67960c(&pppplStack_288,&uStack_2a0);
      if (pppplStack_288 == pppplStack_280) {
LAB_10abe4118:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe411c);
        (*pcVar6)();
      }
      if ((int)uVar4 < 1) {
        fVar36 = 0.0;
        fVar33 = 0.0;
      }
      else {
        param_3 = *(float *)(pppplStack_280 + -2);
        param_4 = *(float *)((long)pppplStack_280 + -0xc);
        fVar33 = 0.0;
        fVar15 = 3.4028235e+38;
        fVar36 = 0.0;
        pfVar17 = (float *)((long)ppppplVar20 + 4);
        uVar18 = (ulong)uVar4;
        do {
          fVar31 = pfVar17[-1] - param_3;
          fVar35 = *pfVar17 - param_4;
          fVar32 = SQRT(fVar35 * fVar35 + fVar31 * fVar31);
          fVar31 = pfVar17[-1];
          fVar35 = *pfVar17;
          if (fVar15 <= fVar32) {
            fVar31 = fVar33;
            fVar35 = fVar36;
            fVar32 = fVar15;
          }
          fVar15 = fVar32;
          fVar36 = fVar35;
          fVar33 = fVar31;
          pfVar17 = pfVar17 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      *(float *)(pppplStack_280 + -2) = fVar33;
      if ((pppplStack_288 == pppplStack_280) ||
         (*(float *)((long)pppplStack_280 + -0xc) = fVar36, pppplStack_288 == pppplStack_280))
      goto LAB_10abe4118;
      if ((int)uVar4 < 1) {
        param_2 = 0x7f7fffff;
        uVar34 = 0x7f7fffff;
      }
      else {
        uVar26 = 0x7f7fffff;
        param_3 = *(float *)(pppplStack_280 + -1);
        param_4 = *(float *)((long)pppplStack_280 + -4);
        pfVar17 = (float *)((long)ppppplVar20 + 4);
        uVar18 = (ulong)uVar4;
        uVar29 = uVar26;
        uVar27 = uVar26;
        do {
          fVar33 = pfVar17[-1] - param_3;
          fVar36 = *pfVar17 - param_4;
          fVar33 = SQRT(fVar36 * fVar36 + fVar33 * fVar33);
          bVar7 = (float)uVar27 <= fVar33;
          uVar30 = (ulong)(uint)fVar33;
          if (bVar7) {
            uVar30 = uVar27;
          }
          uVar27 = (ulong)(uint)*pfVar17;
          if (bVar7) {
            uVar27 = uVar26;
          }
          uVar34 = (undefined4)uVar27;
          param_2 = (ulong)(uint)pfVar17[-1];
          if (bVar7) {
            param_2 = uVar29;
          }
          pfVar17 = pfVar17 + 4;
          uVar18 = uVar18 - 1;
          uVar26 = uVar27;
          uVar29 = param_2;
          uVar27 = uVar30;
        } while (uVar18 != 0);
      }
      *(int *)(pppplStack_280 + -1) = (int)param_2;
      if (pppplStack_288 == pppplStack_280) goto LAB_10abe4118;
      *(undefined4 *)((long)pppplStack_280 + -4) = uVar34;
      pppppplVar16 = ppppppplVar9[2];
      if (pppppplVar16 < ppppppplVar9[3]) {
        *(undefined4 *)pppppplVar16 = auStack_290[0];
        pppppplVar16[1] = (long *****)0x0;
        pppppplVar16[2] = (long *****)0x0;
        pppppplVar16[3] = (long *****)0x0;
        pppppplVar16[4] = (long *****)0x0;
        pppppplVar16[2] = (long *****)pppplStack_280;
        pppppplVar16[1] = (long *****)pppplStack_288;
        pppppplVar16[3] = (long *****)pppplStack_278;
        pppplStack_288 = (long ****)0x0;
        pppplStack_280 = (long ****)0x0;
        pppppplVar16[5] = (long *****)0x0;
        pppppplVar16[6] = (long *****)0x0;
        pppppplVar16[5] = (long *****)pppplStack_268;
        pppppplVar16[4] = (long *****)pppplStack_270;
        pppppplVar16[6] = (long *****)pppplStack_260;
        pppplStack_278 = (long ****)0x0;
        pppplStack_270 = (long ****)0x0;
        pppplStack_268 = (long ****)0x0;
        pppplStack_260 = (long ****)0x0;
        ppppppplVar9[2] = pppppplVar16 + 7;
      }
      else {
        ppppppplVar10 = ppppppplVar9 + 1;
        FUN_10abffed0(ppppppplVar10,auStack_290);
        ppppppplVar9[2] = (long ******)ppppppplVar10;
        if ((long *****)pppplStack_270 != (long *****)0x0) {
          pppplStack_268 = pppplStack_270;
          __ZdlPv();
        }
      }
      if ((long *****)pppplStack_288 != (long *****)0x0) {
        pppplStack_280 = pppplStack_288;
        __ZdlPv();
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar2);
  }
  return;
}



/* Entry: 10abe3528; end: 10abe3e8b;  */

/* WARNING: Removing unreachable block (ram,0x00010abe3af0) */
/* WARNING: Removing unreachable block (ram,0x00010abe39b4) */
/* WARNING: Removing unreachable block (ram,0x00010abe3914) */
/* WARNING: Removing unreachable block (ram,0x00010abe379c) */
/* WARNING: Removing unreachable block (ram,0x00010abe36c8) */
/* WARNING: Removing unreachable block (ram,0x00010abe3734) */
/* WARNING: Removing unreachable block (ram,0x00010abe384c) */
/* WARNING: Removing unreachable block (ram,0x00010abe37e0) */
/* WARNING: Removing unreachable block (ram,0x00010abe3a20) */
/* WARNING: Removing unreachable block (ram,0x00010abe3b28) */
/* WARNING: Removing unreachable block (ram,0x00010abe394c) */

void FUN_10abe3528(undefined8 param_1,ulong param_2,float param_3,float param_4,long ******param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long ******pppppplVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  undefined8 uVar10;
  long ******pppppplVar11;
  undefined4 *puVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  float fVar15;
  float *pfVar16;
  ulong uVar17;
  long ***ppplVar18;
  long *****ppppplVar19;
  long *****ppppplVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 uVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  float fStack_298;
  float fStack_294;
  undefined4 auStack_290 [2];
  long ***ppplStack_288;
  long ***ppplStack_280;
  long ***ppplStack_278;
  long ***ppplStack_270;
  long ***ppplStack_268;
  long ***ppplStack_260;
  undefined1 auStack_254 [64];
  undefined4 uStack_214;
  undefined1 uStack_198;
  undefined7 uStack_197;
  long ***ppplStack_190;
  undefined7 uStack_188;
  undefined1 uStack_181;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  long ***ppplStack_170;
  long ****pppplStack_168;
  undefined1 uStack_151;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *****ppppplStack_110;
  long *****ppppplStack_108;
  long ***ppplStack_100;
  long ****pppplStack_f8;
  long *****ppppplStack_d0;
  long *****ppppplStack_c8;
  long ***ppplStack_c0;
  long ****pppplStack_b8;
  undefined8 auStack_b0 [2];
  char acStack_99 [33];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_180 = (long *****)param_5;
  if (lRam00000001137ec638 != -1) {
    ppppplStack_d0 = (long *****)&ppppplStack_180;
    ppppplStack_110 = (long *****)&ppppplStack_d0;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ec638,&ppppplStack_110,FUN_10ac09df0);
  }
  uStack_128 = 0xc;
  puStack_130 = &DAT_10f69b067;
  uStack_120 = 0xc3e1946cddf186a4;
  FUN_10abfc520(param_5 + 7,0);
  pppppplVar11 = param_5 + 10;
  ppppplVar19 = *pppppplVar11;
  ppppplVar13 = param_5[0xb];
  if (param_5[0xb] != ppppplVar19) {
    do {
      ppppplVar20 = ppppplVar13 + -3;
      FUN_10a0da1b8(ppppplVar20,ppppplVar13[-2]);
      ppppplVar13 = ppppplVar20;
    } while (ppppplVar20 != ppppplVar19);
    param_5[0xb] = ppppplVar19;
  }
  pppppplVar9 = param_5 + 0xd;
  ppppplVar19 = *pppppplVar9;
  ppppplVar13 = param_5[0xe];
  if (param_5[0xe] != ppppplVar19) {
    do {
      ppppplVar20 = ppppplVar13 + -3;
      FUN_10a0da1b8(ppppplVar20,ppppplVar13[-2]);
      ppppplVar13 = ppppplVar20;
    } while (ppppplVar20 != ppppplVar19);
    param_5[0xe] = ppppplVar19;
  }
  uStack_148 = 0xc;
  puStack_150 = &DAT_10f69b074;
  uStack_140 = 0x3d769d59ea032204;
  if (0 < *(int *)((long)param_5 + 0xd4)) {
    iVar21 = 0;
    do {
      FUN_10a0ee900(&ppppplStack_d0,&UNK_10f69b081,0xd);
      ppppplVar19 = param_5[8];
      if (ppppplVar19 < param_5[9]) {
        ppppplVar19[2] = (long ****)ppplStack_c0;
        ppppplVar19[3] = (long ****)0x0;
        ppppplVar19[1] = (long ****)ppppplStack_c8;
        *ppppplVar19 = (long ****)ppppplStack_d0;
        ppppplStack_c8 = (long *****)0x0;
        ppplStack_c0 = (long ***)0x0;
        ppppplStack_d0 = (long *****)0x0;
        func_0x000107c2b080(ppppplVar19);
        pppppplVar8 = (long ******)(ppppplVar19 + 4);
      }
      else {
        pppppplVar8 = param_5 + 7;
        FUN_10ab14008(pppppplVar8,&ppppplStack_d0);
      }
      param_5[8] = (long *****)pppppplVar8;
      FUN_10a0ee900(&ppppplStack_d0,&UNK_10f69b08f,10);
      ppppplVar19 = param_5[8];
      if (ppppplVar19 < param_5[9]) {
        ppppplVar19[2] = (long ****)ppplStack_c0;
        ppppplVar19[3] = (long ****)0x0;
        ppppplVar19[1] = (long ****)ppppplStack_c8;
        *ppppplVar19 = (long ****)ppppplStack_d0;
        ppppplStack_c8 = (long *****)0x0;
        ppplStack_c0 = (long ***)0x0;
        ppppplStack_d0 = (long *****)0x0;
        func_0x000107c2b080(ppppplVar19);
        pppppplVar8 = (long ******)(ppppplVar19 + 4);
      }
      else {
        pppppplVar8 = param_5 + 7;
        FUN_10ab14008(pppppplVar8,&ppppplStack_d0);
      }
      param_5[8] = (long *****)pppppplVar8;
      FUN_10a0ee900(&ppppplStack_d0,&UNK_10f69b09a,0xb);
      ppppplVar19 = param_5[8];
      if (ppppplVar19 < param_5[9]) {
        ppppplVar19[2] = (long ****)ppplStack_c0;
        ppppplVar19[3] = (long ****)0x0;
        ppppplVar19[1] = (long ****)ppppplStack_c8;
        *ppppplVar19 = (long ****)ppppplStack_d0;
        ppppplStack_c8 = (long *****)0x0;
        ppplStack_c0 = (long ***)0x0;
        ppppplStack_d0 = (long *****)0x0;
        func_0x000107c2b080(ppppplVar19);
        pppppplVar8 = (long ******)(ppppplVar19 + 4);
      }
      else {
        pppppplVar8 = param_5 + 7;
        FUN_10ab14008(pppppplVar8,&ppppplStack_d0);
      }
      param_5[8] = (long *****)pppppplVar8;
      FUN_10a0ee900(&ppppplStack_d0,&UNK_10f69b0a6,0xe);
      ppplStack_100 = ppplStack_c0;
      ppppplStack_108 = ppppplStack_c8;
      ppppplStack_110 = ppppplStack_d0;
      ppppplStack_c8 = (long *****)0x0;
      ppplStack_c0 = (long ***)0x0;
      ppppplStack_d0 = (long *****)0x0;
      pppplStack_f8 = (long ****)0x0;
      func_0x000107c2b080(&ppppplStack_110);
      if ((long)ppplStack_100 < 0) {
        func_0x000107c3192c(&ppppplStack_d0,ppppplStack_110,ppppplStack_108);
      }
      else {
        ppppplStack_c8 = ppppplStack_108;
        ppppplStack_d0 = ppppplStack_110;
        ppplStack_c0 = ppplStack_100;
      }
      pppplStack_b8 = pppplStack_f8;
      FUN_10a0d9f14(&ppppplStack_180,&ppppplStack_d0,1,&uStack_151);
      FUN_10abfc5a0(pppppplVar11,&ppppplStack_180);
      FUN_10a0da1b8(&ppppplStack_180,ppppplStack_178);
      if ((long)ppplStack_100 < 0) {
        func_0x000107c3192c(&ppppplStack_d0,ppppplStack_110,ppppplStack_108);
      }
      else {
        ppppplStack_c8 = ppppplStack_108;
        ppppplStack_d0 = ppppplStack_110;
        ppplStack_c0 = ppplStack_100;
      }
      pppplStack_b8 = pppplStack_f8;
      func_0x000107c2b074(auStack_b0,&puStack_130);
      FUN_10a0d9f14(&ppppplStack_180,&ppppplStack_d0,2,&uStack_151);
      FUN_10abfc5a0(pppppplVar9,&ppppplStack_180);
      FUN_10a0da1b8(&ppppplStack_180,ppppplStack_178);
      lVar22 = 0;
      do {
        if (acStack_99[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_b0 + lVar22));
        }
        lVar22 = lVar22 + -0x20;
      } while (lVar22 != -0x40);
      if (param_6 != 0) {
        ppppplVar19 = param_5[0xb];
        if (param_5[10] == ppppplVar19) goto LAB_10abe3ce0;
        func_0x000107c2b074(&ppppplStack_d0,&puStack_150);
        FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_d0,&ppppplStack_d0);
        ppppplVar19 = param_5[0xe];
        if (param_5[0xd] == ppppplVar19) goto LAB_10abe3ce0;
        func_0x000107c2b074(&ppppplStack_d0,&puStack_150);
        FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_d0,&ppppplStack_d0);
      }
      if ((long)ppplStack_100 < 0) {
        __ZdlPv(ppppplStack_110);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < *(int *)((long)param_5 + 0xd4));
  }
  FUN_10a0ee900(&ppppplStack_d0,&UNK_10f69b0a6,0xe);
  ppplStack_170 = ppplStack_c0;
  ppppplStack_178 = ppppplStack_c8;
  ppppplStack_180 = ppppplStack_d0;
  ppppplStack_c8 = (long *****)0x0;
  ppplStack_c0 = (long ***)0x0;
  ppppplStack_d0 = (long *****)0x0;
  pppplStack_168 = (long ****)0x0;
  func_0x000107c2b080(&ppppplStack_180);
  if ((long)ppplStack_170 < 0) {
    func_0x000107c3192c(&ppppplStack_d0,ppppplStack_180,ppppplStack_178);
  }
  else {
    ppppplStack_c8 = ppppplStack_178;
    ppppplStack_d0 = ppppplStack_180;
    ppplStack_c0 = ppplStack_170;
  }
  pppplStack_b8 = pppplStack_168;
  FUN_10a0d9f14(&ppppplStack_110,&ppppplStack_d0,1,&uStack_151);
  FUN_10abfc5a0(pppppplVar11,&ppppplStack_110);
  FUN_10a0da1b8(&ppppplStack_110,ppppplStack_108);
  if ((long)ppplStack_170 < 0) {
    func_0x000107c3192c(&ppppplStack_d0,ppppplStack_180,ppppplStack_178);
  }
  else {
    ppppplStack_c8 = ppppplStack_178;
    ppppplStack_d0 = ppppplStack_180;
    ppplStack_c0 = ppplStack_170;
  }
  pppplStack_b8 = pppplStack_168;
  func_0x000107c2b074(auStack_b0,&puStack_130);
  puVar12 = (undefined4 *)&uStack_151;
  pppppplVar11 = (long ******)0x2;
  FUN_10a0d9f14(&ppppplStack_110,&ppppplStack_d0);
  FUN_10abfc5a0(pppppplVar9,&ppppplStack_110);
  FUN_10a0da1b8(&ppppplStack_110,ppppplStack_108);
  lVar22 = 0;
  do {
    if (acStack_99[lVar22] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_b0 + lVar22));
    }
    lVar22 = lVar22 + -0x20;
  } while (lVar22 != -0x40);
  if (param_6 != 0) {
    ppppplVar19 = param_5[0xb];
    if (param_5[10] == ppppplVar19) goto LAB_10abe3ce0;
    func_0x000107c2b074(&ppppplStack_d0,&puStack_150);
    FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_d0,&ppppplStack_d0);
    ppppplVar19 = param_5[0xe];
    if (param_5[0xd] == ppppplVar19) goto LAB_10abe3ce0;
    func_0x000107c2b074(&ppppplStack_d0,&puStack_150);
    pppppplVar11 = &ppppplStack_d0;
    FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_d0);
  }
  ppppplStack_110 = (long *****)0x0;
  FUN_10a3b1e74(&ppppplStack_d0,&ppppplStack_110);
  func_0x00010a015c50(param_5 + 4,&ppppplStack_d0);
  ppppplVar19 = param_5[4];
  func_0x000107c2b054(&uStack_198,&UNK_10f69b0b5);
  if (*(char *)((long)ppppplVar19 + 0x6f) < '\0') {
    __ZdlPv(ppppplVar19[0xb]);
  }
  ppppplVar19[0xc] = (long ****)ppplStack_190;
  ppppplVar19[0xb] = (long ****)CONCAT71(uStack_197,uStack_198);
  ppppplVar19[0xd] = (long ****)CONCAT17(uStack_181,uStack_188);
  uStack_181 = 0;
  uStack_198 = 0;
  (*(code *)(*param_5)[9])(param_5);
  pppplVar14 = param_5[4][0x45];
  if (param_5[4][0x46] != pppplVar14) {
    ppplVar18 = *pppplVar14;
    ppplStack_100 = ppplVar18 + 8;
    uVar3 = *(ushort *)((long)ppplVar18 + 0x129);
    *(ushort *)((long)ppplVar18 + 0x129) = uVar3 & 0xff80 | uVar3 + 1 & 0x7f;
    *(ushort *)(ppplVar18 + 0xe) =
         *(ushort *)(ppplVar18 + 0xe) & 0xff80 | *(ushort *)(ppplVar18 + 0xe) + 1 & 0x7f;
    pppplStack_f8 = (long ****)CONCAT71(pppplStack_f8._1_7_,1);
    ppppplStack_110 = (long *****)FUN_10a1d3648;
    ppppplStack_108 = (long *****)&PTR_FUN_110bad818;
    func_0x00010a332748((long)ppplVar18 + 0x219,0);
    func_0x00010a332700((long)ppplVar18 + 0x21a,0);
    uVar10 = 1;
    func_0x00010a3326b8(ppplVar18 + 0x43,1);
    FUN_10a044790(&ppppplStack_110);
    (*(code *)*ppppplStack_108)(&ppppplStack_108);
    FUN_10a044790(&ppplStack_c0);
    pppppplVar9 = (long ******)&pppplStack_b8;
    (*(code *)*pppplStack_b8)();
    pppppplVar8 = (long ******)ppppplStack_c8;
    if ((long ******)ppppplStack_c8 != (long ******)0x0) {
      pppppplVar1 = (long ******)(ppppplStack_c8 + 1);
      do {
        ppppplVar19 = *pppppplVar1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
        if (bVar7) {
          *pppppplVar1 = (long *****)((long)ppppplVar19 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppplVar19 == (long *****)0x0) {
        (*(code *)(*ppppplStack_c8)[2])(ppppplStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppplVar9 = pppppplVar8;
      }
    }
    if ((long)ppplStack_170 < 0) {
      pppppplVar9 = (long ******)ppppplStack_180;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    if ((long)ppplStack_170 < 0) {
      __ZdlPv(ppppplStack_180);
    }
    __Unwind_Resume();
    if (param_9 != 0) {
      pppplVar14 = *pppppplVar9[0x20];
      puVar2 = puVar12 + param_9;
      iVar21 = *(int *)((long)pppppplVar9 + 0xfc) + 1;
      uVar4 = iVar21 + iVar21 * *(int *)(pppppplVar9 + 0x1f);
      do {
        uVar25 = (undefined4)param_2;
        uStack_214 = *puVar12;
        pppppplVar8 = pppppplVar11;
        func_0x00010a01e9ec();
        func_0x000109519fd0(auStack_254,uVar10,(long)pppppplVar8 + 0x6c);
        uVar31 = *(undefined4 *)(pppppplVar8[0x35] + 0x9e);
        ppplStack_260 = (long ***)0x0;
        ppplStack_268 = (long ***)0x0;
        ppplStack_270 = (long ***)0x0;
        ppplStack_278 = (long ***)0x0;
        ppplStack_280 = (long ***)0x0;
        ppplStack_288 = (long ***)0x0;
        auStack_290[0] = uStack_214;
        FUN_10abac094(&ppplStack_270,&uStack_214);
        FUN_10abe4138(auStack_254);
        uStack_2a0 = uVar31;
        uStack_29c = uVar25;
        fStack_298 = param_3;
        fStack_294 = param_4;
        func_0x00010a67960c(&ppplStack_288,&uStack_2a0);
        if (ppplStack_288 == ppplStack_280) {
LAB_10abe4118:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe411c);
          (*pcVar6)();
        }
        if ((int)uVar4 < 1) {
          fVar33 = 0.0;
          fVar30 = 0.0;
        }
        else {
          param_3 = *(float *)(ppplStack_280 + -2);
          param_4 = *(float *)((long)ppplStack_280 + -0xc);
          fVar30 = 0.0;
          fVar15 = 3.4028235e+38;
          fVar33 = 0.0;
          pfVar16 = (float *)((long)pppplVar14 + 4);
          uVar17 = (ulong)uVar4;
          do {
            fVar28 = pfVar16[-1] - param_3;
            fVar32 = *pfVar16 - param_4;
            fVar29 = SQRT(fVar32 * fVar32 + fVar28 * fVar28);
            fVar28 = pfVar16[-1];
            fVar32 = *pfVar16;
            if (fVar15 <= fVar29) {
              fVar28 = fVar30;
              fVar32 = fVar33;
              fVar29 = fVar15;
            }
            fVar15 = fVar29;
            fVar33 = fVar32;
            fVar30 = fVar28;
            pfVar16 = pfVar16 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        *(float *)(ppplStack_280 + -2) = fVar30;
        if ((ppplStack_288 == ppplStack_280) ||
           (*(float *)((long)ppplStack_280 + -0xc) = fVar33, ppplStack_288 == ppplStack_280))
        goto LAB_10abe4118;
        if ((int)uVar4 < 1) {
          param_2 = 0x7f7fffff;
          uVar31 = 0x7f7fffff;
        }
        else {
          uVar23 = 0x7f7fffff;
          param_3 = *(float *)(ppplStack_280 + -1);
          param_4 = *(float *)((long)ppplStack_280 + -4);
          pfVar16 = (float *)((long)pppplVar14 + 4);
          uVar17 = (ulong)uVar4;
          uVar26 = uVar23;
          uVar24 = uVar23;
          do {
            fVar30 = pfVar16[-1] - param_3;
            fVar33 = *pfVar16 - param_4;
            fVar30 = SQRT(fVar33 * fVar33 + fVar30 * fVar30);
            bVar7 = (float)uVar24 <= fVar30;
            uVar27 = (ulong)(uint)fVar30;
            if (bVar7) {
              uVar27 = uVar24;
            }
            uVar24 = (ulong)(uint)*pfVar16;
            if (bVar7) {
              uVar24 = uVar23;
            }
            uVar31 = (undefined4)uVar24;
            param_2 = (ulong)(uint)pfVar16[-1];
            if (bVar7) {
              param_2 = uVar26;
            }
            pfVar16 = pfVar16 + 4;
            uVar17 = uVar17 - 1;
            uVar23 = uVar24;
            uVar26 = param_2;
            uVar24 = uVar27;
          } while (uVar17 != 0);
        }
        *(int *)(ppplStack_280 + -1) = (int)param_2;
        if (ppplStack_288 == ppplStack_280) goto LAB_10abe4118;
        *(undefined4 *)((long)ppplStack_280 + -4) = uVar31;
        ppppplVar19 = pppppplVar9[2];
        if (ppppplVar19 < pppppplVar9[3]) {
          *(undefined4 *)ppppplVar19 = auStack_290[0];
          ppppplVar19[1] = (long ****)0x0;
          ppppplVar19[2] = (long ****)0x0;
          ppppplVar19[3] = (long ****)0x0;
          ppppplVar19[4] = (long ****)0x0;
          ppppplVar19[2] = (long ****)ppplStack_280;
          ppppplVar19[1] = (long ****)ppplStack_288;
          ppppplVar19[3] = (long ****)ppplStack_278;
          ppplStack_288 = (long ***)0x0;
          ppplStack_280 = (long ***)0x0;
          ppppplVar19[5] = (long ****)0x0;
          ppppplVar19[6] = (long ****)0x0;
          ppppplVar19[5] = (long ****)ppplStack_268;
          ppppplVar19[4] = (long ****)ppplStack_270;
          ppppplVar19[6] = (long ****)ppplStack_260;
          ppplStack_278 = (long ***)0x0;
          ppplStack_270 = (long ***)0x0;
          ppplStack_268 = (long ***)0x0;
          ppplStack_260 = (long ***)0x0;
          pppppplVar9[2] = ppppplVar19 + 7;
        }
        else {
          pppppplVar8 = pppppplVar9 + 1;
          FUN_10abffed0(pppppplVar8,auStack_290);
          pppppplVar9[2] = (long *****)pppppplVar8;
          if ((long ****)ppplStack_270 != (long ****)0x0) {
            ppplStack_268 = ppplStack_270;
            __ZdlPv();
          }
        }
        if ((long ****)ppplStack_288 != (long ****)0x0) {
          ppplStack_280 = ppplStack_288;
          __ZdlPv();
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar2);
    }
    return;
  }
  FUN_10a00946c(&UNK_10f6921f0);
LAB_10abe3ce0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe3ce4);
  (*pcVar6)();
}



/* Entry: 10abe3e8c; end: 10abe4137;  */

void FUN_10abe3e8c(undefined8 param_1,ulong param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,long param_7,undefined4 *param_8,long param_9)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  float fVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 auStack_f0 [2];
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b4 [64];
  undefined4 uStack_74;
  
  if (param_9 != 0) {
    puVar3 = param_8 + param_9;
    iVar1 = *(int *)(param_5 + 0xfc) + 1;
    uVar5 = iVar1 + iVar1 * *(int *)(param_5 + 0xf8);
    pfVar2 = (float *)(**(long **)(param_5 + 0x100) + 4);
    do {
      uVar14 = (undefined4)param_2;
      uStack_74 = *param_8;
      lVar8 = param_7;
      func_0x00010a01e9ec();
      func_0x000109519fd0(auStack_b4,param_6,lVar8 + 0x6c);
      uVar20 = *(undefined4 *)(*(long *)(lVar8 + 0x1a8) + 0x4f0);
      uStack_c0 = 0;
      lStack_c8 = 0;
      lStack_d0 = 0;
      uStack_d8 = 0;
      lStack_e0 = 0;
      lStack_e8 = 0;
      auStack_f0[0] = uStack_74;
      FUN_10abac094(&lStack_d0,&uStack_74);
      FUN_10abe4138(auStack_b4);
      uStack_100 = uVar20;
      uStack_fc = uVar14;
      fStack_f8 = param_3;
      fStack_f4 = param_4;
      func_0x00010a67960c(&lStack_e8,&uStack_100);
      if (lStack_e8 == lStack_e0) {
LAB_10abe4118:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe411c);
        (*pcVar6)();
      }
      if ((int)uVar5 < 1) {
        fVar22 = 0.0;
        fVar19 = 0.0;
      }
      else {
        param_3 = *(float *)(lStack_e0 + -0x10);
        param_4 = *(float *)(lStack_e0 + -0xc);
        fVar19 = 0.0;
        fVar9 = 3.4028235e+38;
        fVar22 = 0.0;
        pfVar10 = pfVar2;
        uVar11 = (ulong)uVar5;
        do {
          fVar17 = pfVar10[-1] - param_3;
          fVar21 = *pfVar10 - param_4;
          fVar18 = SQRT(fVar21 * fVar21 + fVar17 * fVar17);
          fVar17 = pfVar10[-1];
          fVar21 = *pfVar10;
          if (fVar9 <= fVar18) {
            fVar17 = fVar19;
            fVar21 = fVar22;
            fVar18 = fVar9;
          }
          fVar9 = fVar18;
          fVar22 = fVar21;
          fVar19 = fVar17;
          pfVar10 = pfVar10 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      *(float *)(lStack_e0 + -0x10) = fVar19;
      if ((lStack_e8 == lStack_e0) ||
         (*(float *)(lStack_e0 + -0xc) = fVar22, lStack_e8 == lStack_e0)) goto LAB_10abe4118;
      if ((int)uVar5 < 1) {
        param_2 = 0x7f7fffff;
        uVar20 = 0x7f7fffff;
      }
      else {
        uVar12 = 0x7f7fffff;
        param_3 = *(float *)(lStack_e0 + -8);
        param_4 = *(float *)(lStack_e0 + -4);
        pfVar10 = pfVar2;
        uVar11 = (ulong)uVar5;
        uVar15 = uVar12;
        uVar13 = uVar12;
        do {
          fVar19 = pfVar10[-1] - param_3;
          fVar22 = *pfVar10 - param_4;
          fVar19 = SQRT(fVar22 * fVar22 + fVar19 * fVar19);
          bVar7 = (float)uVar13 <= fVar19;
          uVar16 = (ulong)(uint)fVar19;
          if (bVar7) {
            uVar16 = uVar13;
          }
          uVar13 = (ulong)(uint)*pfVar10;
          if (bVar7) {
            uVar13 = uVar12;
          }
          uVar20 = (undefined4)uVar13;
          param_2 = (ulong)(uint)pfVar10[-1];
          if (bVar7) {
            param_2 = uVar15;
          }
          pfVar10 = pfVar10 + 4;
          uVar11 = uVar11 - 1;
          uVar12 = uVar13;
          uVar15 = param_2;
          uVar13 = uVar16;
        } while (uVar11 != 0);
      }
      *(int *)(lStack_e0 + -8) = (int)param_2;
      if (lStack_e8 == lStack_e0) goto LAB_10abe4118;
      *(undefined4 *)(lStack_e0 + -4) = uVar20;
      puVar4 = *(undefined4 **)(param_5 + 0x10);
      if (puVar4 < *(undefined4 **)(param_5 + 0x18)) {
        *puVar4 = auStack_f0[0];
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(long *)(puVar4 + 4) = lStack_e0;
        *(long *)(puVar4 + 2) = lStack_e8;
        *(undefined8 *)(puVar4 + 6) = uStack_d8;
        lStack_e8 = 0;
        lStack_e0 = 0;
        *(undefined8 *)(puVar4 + 10) = 0;
        *(undefined8 *)(puVar4 + 0xc) = 0;
        *(long *)(puVar4 + 10) = lStack_c8;
        *(long *)(puVar4 + 8) = lStack_d0;
        *(undefined8 *)(puVar4 + 0xc) = uStack_c0;
        uStack_d8 = 0;
        lStack_d0 = 0;
        lStack_c8 = 0;
        uStack_c0 = 0;
        *(undefined4 **)(param_5 + 0x10) = puVar4 + 0xe;
      }
      else {
        lVar8 = param_5 + 8;
        FUN_10abffed0(lVar8,auStack_f0);
        *(long *)(param_5 + 0x10) = lVar8;
        if (lStack_d0 != 0) {
          lStack_c8 = lStack_d0;
          __ZdlPv();
        }
      }
      if (lStack_e8 != 0) {
        lStack_e0 = lStack_e8;
        __ZdlPv();
      }
      param_8 = param_8 + 1;
    } while (param_8 != puVar3);
  }
  return;
}



/* Entry: 10abe4138; end: 10abe4277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10abe4138(float param_1,undefined8 *param_2)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  float fStack_8;
  float fStack_4;
  
  lVar1 = 0;
  fVar2 = -param_1;
  uStack_18 = CONCAT44(param_1,fVar2);
  uStack_20 = CONCAT44(fVar2,fVar2);
  fStack_8 = param_1;
  fStack_4 = param_1;
  uStack_10 = CONCAT44(fVar2,param_1);
  do {
    fVar7 = *(float *)((long)&uStack_20 + lVar1);
    fVar2 = *(float *)((long)&uStack_20 + lVar1 + 4);
    fVar6 = *(float *)((long)param_2 + 0x2c) * 0.0 + *(float *)((long)param_2 + 0x3c) +
            *(float *)((long)param_2 + 0xc) * fVar7 + *(float *)((long)param_2 + 0x1c) * fVar2;
    fVar4 = 0.0;
    fVar5 = 0.0;
    if (9.536743e-07 < ABS(fVar6)) {
      fVar6 = 1.0 / fVar6;
      fVar4 = ((float)param_2[4] * 0.0 + (float)param_2[6] +
              (float)*param_2 * fVar7 + (float)param_2[2] * fVar2) * fVar6;
      fVar5 = ((float)((ulong)param_2[4] >> 0x20) * 0.0 + (float)((ulong)param_2[6] >> 0x20) +
              (float)((ulong)*param_2 >> 0x20) * fVar7 + (float)((ulong)param_2[2] >> 0x20) * fVar2)
              * fVar6;
    }
    auVar3._4_4_ = fVar5;
    auVar3._0_4_ = fVar4;
    auVar3._12_4_ = fVar5;
    auVar3._8_4_ = fVar4;
    NEON_rev64(auVar3,4);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x20);
  NEON_fmov(0xbf800000,4);
  NEON_fmov(0x3f800000,4);
  return;
}



/* Entry: 10abe4278; end: 10abe42b7;  */

long FUN_10abe4278(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abe42b8; end: 10abe459f;  */

void FUN_10abe42b8(long *param_1,undefined8 param_2,long param_3)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong *puVar16;
  float *pfVar17;
  long lVar18;
  float *pfVar19;
  undefined4 *puVar20;
  long *plVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long lVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar24 = *(long *)param_1[0x20];
  lVar6 = param_1[0x1f];
  iVar22 = *(int *)((long)param_1 + 0xfc);
  (**(code **)(*param_1 + 0x30))();
  FUN_10abe45a0(param_1);
  lVar18 = param_1[1];
  if (param_1[2] != lVar18) {
    uVar25 = 0;
    uVar5 = (iVar22 + iVar22 * (int)lVar6) - 1;
    lVar6 = lVar24 + (long)(int)lVar6 * 0x10;
    do {
      plVar12 = param_1;
      FUN_10abe5154();
      puVar16 = (ulong *)0x1;
      FUN_10a061940();
      if (puVar16 == (ulong *)0x0) {
        plVar21 = (long *)0x0;
      }
      else {
        plVar21 = (long *)*puVar16;
      }
      puVar20 = (undefined4 *)(lVar18 + uVar25 * 0x38);
      plVar13 = plVar21;
      (**(code **)(*plVar21 + 0x28))();
      uVar4 = uVar5 * 0x60 * (int)((ulong)(*(long *)(puVar20 + 4) - *(long *)(puVar20 + 2)) >> 4);
      plVar14 = plVar21;
      (**(code **)(*plVar21 + 0xa0))();
      plVar15 = plVar13;
      (**(code **)(*plVar13 + 0x30))(plVar13,uVar4);
      pfVar17 = *(float **)(puVar20 + 2);
      pfVar3 = *(float **)(puVar20 + 4);
      if (pfVar17 == pfVar3) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        do {
          if (0 < (int)uVar5) {
            lVar18 = 0;
            fVar26 = *pfVar17;
            fVar27 = pfVar17[1];
            fVar28 = pfVar17[2];
            fVar29 = pfVar17[3];
            do {
              pfVar1 = (float *)(lVar24 + lVar18);
              lVar2 = lVar6 + lVar18;
              pfVar19 = (float *)(lVar2 + 0x20);
              fVar30 = *pfVar19;
              fVar33 = *pfVar1;
              if (fVar33 < fVar30) {
                fVar34 = pfVar1[1];
                bVar9 = false;
                bVar10 = true;
                if (fVar26 <= fVar33) {
                  bVar9 = false;
                  bVar10 = true;
                  if (!NAN(fVar27) && !NAN(fVar34)) {
                    bVar9 = fVar27 == fVar34;
                    bVar10 = fVar34 <= fVar27;
                  }
                }
                bVar8 = true;
                bVar11 = false;
                if (!bVar10 || bVar9) {
                  bVar8 = false;
                  bVar11 = true;
                  if (!NAN(fVar28) && !NAN(fVar33)) {
                    bVar8 = fVar28 < fVar33;
                    bVar11 = false;
                  }
                }
                bVar9 = true;
                bVar10 = false;
                if (bVar8 == bVar11) {
                  bVar9 = false;
                  bVar10 = true;
                  if (!NAN(fVar29) && !NAN(fVar34)) {
                    bVar9 = fVar29 < fVar34;
                    bVar10 = false;
                  }
                }
                if (bVar9 == bVar10) {
                  lVar32 = lVar6 + lVar18;
                  fVar33 = *(float *)(lVar32 + 0x24);
                  bVar9 = false;
                  bVar10 = true;
                  if (fVar26 <= fVar30) {
                    bVar9 = false;
                    bVar10 = true;
                    if (!NAN(fVar27) && !NAN(fVar33)) {
                      bVar9 = fVar27 == fVar33;
                      bVar10 = fVar33 <= fVar27;
                    }
                  }
                  bVar8 = true;
                  bVar11 = false;
                  if (!bVar10 || bVar9) {
                    bVar8 = false;
                    bVar11 = true;
                    if (!NAN(fVar28) && !NAN(fVar30)) {
                      bVar8 = fVar28 < fVar30;
                      bVar11 = false;
                    }
                  }
                  bVar9 = true;
                  bVar10 = false;
                  if (bVar8 == bVar11) {
                    bVar9 = false;
                    bVar10 = true;
                    if (!NAN(fVar29) && !NAN(fVar33)) {
                      bVar9 = fVar29 < fVar33;
                      bVar10 = false;
                    }
                  }
                  if (bVar9 == bVar10) {
                    iVar22 = (int)uVar23;
                    lVar31 = *(long *)pfVar1;
                    (plVar15 + uVar23 * 2)[1] = *(long *)(pfVar1 + 2);
                    plVar15[uVar23 * 2] = lVar31;
                    lVar31 = *(long *)pfVar19;
                    (plVar15 + (ulong)(iVar22 + 1) * 2)[1] = *(long *)(lVar2 + 0x28);
                    plVar15[(ulong)(iVar22 + 1) * 2] = lVar31;
                    lVar31 = *(long *)(lVar24 + lVar18 + 0x10);
                    (plVar15 + (ulong)(iVar22 + 2) * 2)[1] = *(long *)(lVar24 + lVar18 + 0x18);
                    plVar15[(ulong)(iVar22 + 2) * 2] = lVar31;
                    lVar31 = *(long *)pfVar1;
                    (plVar15 + (ulong)(iVar22 + 3) * 2)[1] = *(long *)(pfVar1 + 2);
                    plVar15[(ulong)(iVar22 + 3) * 2] = lVar31;
                    lVar31 = *(long *)(lVar32 + 0x10);
                    (plVar15 + (ulong)(iVar22 + 4) * 2)[1] = *(long *)(lVar32 + 0x18);
                    plVar15[(ulong)(iVar22 + 4) * 2] = lVar31;
                    uVar23 = (ulong)(iVar22 + 6);
                    lVar32 = *(long *)pfVar19;
                    (plVar15 + (ulong)(iVar22 + 5) * 2)[1] = *(long *)(lVar2 + 0x28);
                    plVar15[(ulong)(iVar22 + 5) * 2] = lVar32;
                  }
                }
              }
              lVar18 = lVar18 + 0x10;
            } while ((ulong)uVar5 << 4 != lVar18);
          }
          pfVar17 = pfVar17 + 4;
        } while (pfVar17 != pfVar3);
      }
      puStack_70 = &UNK_10f696c5b;
      uStack_68 = 0x57;
      if (uVar4 < (uint)((int)uVar23 << 4)) {
        FUN_10a0edfc4(&puStack_70);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10abe455c);
        (*pcVar7)();
      }
      lVar18 = param_3;
      FUN_10a190e68(param_3,*puVar20);
      *(long **)(lVar18 + 0xa8) = plVar12;
      (**(code **)(*plVar21 + 0x78))(plVar21,uVar23);
      (**(code **)(*plVar13 + 0x38))(plVar13);
      (**(code **)(*plVar13 + 0x40))(plVar13,0,0,(int)uVar23 << 4,(ulong)plVar14 & 0xffffffff);
      uVar25 = uVar25 + 1;
      lVar18 = param_1[1];
      uVar23 = (param_1[2] - lVar18 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar25 <= uVar23 && uVar23 - uVar25 != 0);
  }
  return;
}



/* Entry: 10abe45a0; end: 10abe5153;  */

long * FUN_10abe45a0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  bool bVar13;
  int *piVar14;
  long *plVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  bool bVar22;
  ulong uVar23;
  float *pfVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  int *piVar30;
  long lVar31;
  ulong uVar32;
  bool bVar33;
  ushort uVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  int aiStack_9c [3];
  
  lVar21 = param_1[1];
  lVar20 = param_1[2];
  plVar15 = param_1;
  if ((lVar21 != lVar20) && (lVar7 = (lVar20 - lVar21 >> 3) * 0x6db6db6db6db6db7, lVar7 != 1)) {
    uVar26 = 0;
    do {
      uVar23 = (lVar20 - lVar21 >> 3) * 0x6db6db6db6db6db7;
      if (uVar23 < uVar26 || uVar23 - uVar26 == 0) {
LAB_10abe514c:
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10abe5150);
        (*pcVar12)();
      }
      uVar1 = uVar26 + 1;
      if (uVar1 < uVar23) {
        lVar29 = lVar21 + uVar26 * 0x38;
        uVar23 = uVar1;
        do {
          puVar28 = *(undefined8 **)(lVar29 + 8);
          puVar4 = *(undefined8 **)(lVar29 + 0x10);
          if (puVar28 != puVar4) {
            piVar30 = (int *)(lVar21 + uVar23 * 0x38);
            bVar13 = false;
            do {
              bVar22 = bVar13;
              lVar21 = *(long *)(piVar30 + 2);
              lVar20 = *(long *)(piVar30 + 4);
              bVar33 = false;
              if (lVar20 - lVar21 != 0) {
                uVar32 = 0;
                uVar10 = puVar28[1];
                uVar9 = *puVar28;
                fVar39 = (float)uVar9;
                fVar42 = *(float *)(puVar28 + 1);
                fVar41 = *(float *)((long)puVar28 + 0xc);
                lVar31 = 0xc;
                fVar43 = *(float *)((long)puVar28 + 4);
                do {
                  lVar17 = *(long *)(piVar30 + 2);
                  pfVar16 = *(float **)(piVar30 + 4);
                  lVar27 = (long)pfVar16 - lVar17;
                  uVar19 = lVar27 >> 4;
                  if (uVar19 <= uVar32) goto LAB_10abe514c;
                  pfVar24 = (float *)(lVar17 + lVar31);
                  uVar11 = *(undefined8 *)*(undefined1 (*) [12])(pfVar24 + -3);
                  fVar40 = (float)uVar11;
                  sVar35 = -(ushort)(fVar39 < SUB124(*(undefined1 (*) [12])(pfVar24 + -3),8));
                  sVar36 = -(ushort)((float)((ulong)uVar9 >> 0x20) <
                                    (float)((ulong)*(undefined8 *)(pfVar24 + -1) >> 0x20));
                  sVar37 = -(ushort)(fVar40 < (float)uVar10);
                  sVar38 = -(ushort)((float)((ulong)uVar11 >> 0x20) < (float)((ulong)uVar10 >> 0x20)
                                    );
                  uVar34 = NEON_uminv(CONCAT26(sVar38,CONCAT24(sVar37,CONCAT22(sVar36,sVar35))),2);
                  if ((uVar34 & 1) != 0) {
                    fVar44 = pfVar24[-1];
                    fVar46 = *pfVar24;
                    fVar45 = pfVar24[-2];
                    if (((bool)(~(fVar40 < fVar39) & 1)) || (fVar44 <= fVar42)) {
                      if (~(fVar40 < fVar39) == 0) {
                        if (fVar45 < fVar43) {
                          if (pfVar16 < *(float **)(piVar30 + 6)) {
                            *pfVar16 = fVar39;
                            pfVar16[1] = fVar45;
                            pfVar16[2] = fVar44;
                            pfVar16[3] = fVar43;
                            pfVar16 = pfVar16 + 4;
                          }
                          else {
                            uVar19 = uVar19 + 1;
                            if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                            uVar18 = (long)*(float **)(piVar30 + 6) - lVar17;
                            uVar25 = (long)uVar18 >> 3;
                            if (uVar25 <= uVar19) {
                              uVar25 = uVar19;
                            }
                            if (0x7fffffffffffffef < uVar18) {
                              uVar25 = 0xfffffffffffffff;
                            }
                            piVar14 = piVar30 + 2;
                            FUN_10a191cb8();
                            pfVar24 = (float *)((long)piVar14 + lVar27);
                            *pfVar24 = fVar39;
                            pfVar24[1] = fVar45;
                            pfVar24[2] = fVar44;
                            pfVar24[3] = fVar43;
                            pfVar16 = pfVar24 + 4;
                            lVar17 = (long)pfVar24 -
                                     (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2));
                            _memcpy(lVar17);
                            plVar15 = *(long **)(piVar30 + 2);
                            *(long *)(piVar30 + 2) = lVar17;
                            *(float **)(piVar30 + 4) = pfVar16;
                            *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                            if (plVar15 != (long *)0x0) {
                              __ZdlPv();
                            }
                          }
                          *(float **)(piVar30 + 4) = pfVar16;
                        }
                        if (fVar41 < fVar46) {
                          if (pfVar16 < *(float **)(piVar30 + 6)) {
                            *pfVar16 = fVar39;
                            pfVar16[1] = fVar41;
                            pfVar16[2] = fVar44;
                            pfVar16[3] = fVar46;
                            pfVar16 = pfVar16 + 4;
                          }
                          else {
                            lVar17 = (long)pfVar16 - *(long *)(piVar30 + 2);
                            uVar19 = (lVar17 >> 4) + 1;
                            if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                            uVar18 = (long)*(float **)(piVar30 + 6) - *(long *)(piVar30 + 2);
                            uVar25 = (long)uVar18 >> 3;
                            if (uVar25 <= uVar19) {
                              uVar25 = uVar19;
                            }
                            if (0x7fffffffffffffef < uVar18) {
                              uVar25 = 0xfffffffffffffff;
                            }
                            piVar14 = piVar30 + 2;
                            FUN_10a191cb8();
                            pfVar24 = (float *)((long)piVar14 + lVar17);
                            *pfVar24 = fVar39;
                            pfVar24[1] = fVar41;
                            pfVar24[2] = fVar44;
                            pfVar24[3] = fVar46;
                            pfVar16 = pfVar24 + 4;
                            lVar17 = (long)pfVar24 -
                                     (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2));
                            _memcpy(lVar17);
                            plVar15 = *(long **)(piVar30 + 2);
                            *(long *)(piVar30 + 2) = lVar17;
                            *(float **)(piVar30 + 4) = pfVar16;
                            *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                            if (plVar15 != (long *)0x0) {
                              __ZdlPv();
                            }
                          }
                          *(float **)(piVar30 + 4) = pfVar16;
                        }
                        lVar17 = *(long *)(piVar30 + 2);
                        lVar27 = (long)pfVar16 - lVar17;
LAB_10abe4b8c:
                        if ((ulong)(lVar27 >> 4) <= uVar32) goto LAB_10abe514c;
                        *(float *)(lVar17 + lVar31 + -4) = fVar39;
                      }
                      else if (fVar42 < fVar44) {
                        if (fVar45 < fVar43) {
                          if (pfVar16 < *(float **)(piVar30 + 6)) {
                            *pfVar16 = fVar40;
                            pfVar16[1] = fVar45;
                            pfVar16[2] = fVar42;
                            pfVar16[3] = fVar43;
                            pfVar16 = pfVar16 + 4;
                          }
                          else {
                            uVar19 = uVar19 + 1;
                            if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                            uVar18 = (long)*(float **)(piVar30 + 6) - lVar17;
                            uVar25 = (long)uVar18 >> 3;
                            if (uVar25 <= uVar19) {
                              uVar25 = uVar19;
                            }
                            if (0x7fffffffffffffef < uVar18) {
                              uVar25 = 0xfffffffffffffff;
                            }
                            piVar14 = piVar30 + 2;
                            FUN_10a191cb8();
                            pfVar24 = (float *)((long)piVar14 + lVar27);
                            *pfVar24 = fVar40;
                            pfVar24[1] = fVar45;
                            pfVar24[2] = fVar42;
                            pfVar24[3] = fVar43;
                            pfVar16 = pfVar24 + 4;
                            lVar17 = (long)pfVar24 -
                                     (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2));
                            _memcpy(lVar17);
                            plVar15 = *(long **)(piVar30 + 2);
                            *(long *)(piVar30 + 2) = lVar17;
                            *(float **)(piVar30 + 4) = pfVar16;
                            *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                            if (plVar15 != (long *)0x0) {
                              __ZdlPv();
                            }
                          }
                          *(float **)(piVar30 + 4) = pfVar16;
                        }
                        if (fVar41 < fVar46) {
                          if (pfVar16 < *(float **)(piVar30 + 6)) {
                            *pfVar16 = fVar40;
                            pfVar16[1] = fVar41;
                            pfVar16[2] = fVar42;
                            pfVar16[3] = fVar46;
                            pfVar16 = pfVar16 + 4;
                          }
                          else {
                            lVar17 = (long)pfVar16 - *(long *)(piVar30 + 2);
                            uVar19 = (lVar17 >> 4) + 1;
                            if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                            uVar18 = (long)*(float **)(piVar30 + 6) - *(long *)(piVar30 + 2);
                            uVar25 = (long)uVar18 >> 3;
                            if (uVar25 <= uVar19) {
                              uVar25 = uVar19;
                            }
                            if (0x7fffffffffffffef < uVar18) {
                              uVar25 = 0xfffffffffffffff;
                            }
                            piVar14 = piVar30 + 2;
                            FUN_10a191cb8();
                            pfVar24 = (float *)((long)piVar14 + lVar17);
                            *pfVar24 = fVar40;
                            pfVar24[1] = fVar41;
                            pfVar24[2] = fVar42;
                            pfVar24[3] = fVar46;
                            pfVar16 = pfVar24 + 4;
                            lVar17 = (long)pfVar24 -
                                     (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2));
                            _memcpy(lVar17);
                            plVar15 = *(long **)(piVar30 + 2);
                            *(long *)(piVar30 + 2) = lVar17;
                            *(float **)(piVar30 + 4) = pfVar16;
                            *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                            if (plVar15 != (long *)0x0) {
                              __ZdlPv();
                            }
                          }
                          *(float **)(piVar30 + 4) = pfVar16;
                        }
                        if ((ulong)((long)pfVar16 - *(long *)(piVar30 + 2) >> 4) <= uVar32)
                        goto LAB_10abe514c;
                        *(float *)(*(long *)(piVar30 + 2) + lVar31 + -0xc) = fVar42;
                      }
                      else {
                        bVar13 = false;
                        if ((fVar45 < fVar43) && (bVar13 = false, !NAN(fVar41) && !NAN(fVar46))) {
                          bVar13 = fVar41 < fVar46;
                        }
                        if (bVar13) {
                          if (*(float **)(piVar30 + 6) <= pfVar16) {
                            uVar19 = uVar19 + 1;
                            if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                            uVar18 = (long)*(float **)(piVar30 + 6) - lVar17;
                            uVar25 = (long)uVar18 >> 3;
                            if (uVar25 <= uVar19) {
                              uVar25 = uVar19;
                            }
                            if (0x7fffffffffffffef < uVar18) {
                              uVar25 = 0xfffffffffffffff;
                            }
                            piVar14 = piVar30 + 2;
                            FUN_10a191cb8();
                            pfVar16 = (float *)((long)piVar14 + lVar27);
                            goto LAB_10abe4d28;
                          }
                          goto LAB_10abe4984;
                        }
                        if (fVar45 < fVar43) {
                          *pfVar24 = fVar43;
                        }
                        else if (fVar41 < fVar46) {
                          pfVar24[-2] = fVar41;
                        }
                        else {
                          pfVar24[-1] = fVar40;
                          if ((ulong)(*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2) >> 4) <=
                              uVar32) goto LAB_10abe514c;
                          *(float *)(*(long *)(piVar30 + 2) + lVar31) = fVar45;
                        }
                      }
                    }
                    else {
                      pfVar24 = *(float **)(piVar30 + 6);
                      bVar13 = false;
                      if ((fVar45 < fVar43) && (bVar13 = false, !NAN(fVar41) && !NAN(fVar46))) {
                        bVar13 = fVar41 < fVar46;
                      }
                      if (bVar13) {
                        if (pfVar16 < pfVar24) {
                          *pfVar16 = fVar40;
                          pfVar16[1] = fVar43;
                          pfVar24 = pfVar16 + 4;
                          pfVar16[2] = fVar39;
                          pfVar16[3] = fVar41;
                        }
                        else {
                          uVar19 = uVar19 + 1;
                          if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                          uVar25 = (long)pfVar24 - lVar17 >> 3;
                          if (uVar25 <= uVar19) {
                            uVar25 = uVar19;
                          }
                          if (0x7fffffffffffffef < (ulong)((long)pfVar24 - lVar17)) {
                            uVar25 = 0xfffffffffffffff;
                          }
                          piVar14 = piVar30 + 2;
                          FUN_10a191cb8();
                          pfVar16 = (float *)((long)piVar14 + lVar27);
                          *pfVar16 = fVar40;
                          pfVar16[1] = fVar43;
                          pfVar16[2] = fVar39;
                          pfVar16[3] = fVar41;
                          pfVar24 = pfVar16 + 4;
                          lVar17 = (long)pfVar16 - (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2))
                          ;
                          _memcpy(lVar17);
                          plVar15 = *(long **)(piVar30 + 2);
                          *(long *)(piVar30 + 2) = lVar17;
                          *(float **)(piVar30 + 4) = pfVar24;
                          *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                          if (plVar15 != (long *)0x0) {
                            __ZdlPv();
                          }
                        }
                        *(float **)(piVar30 + 4) = pfVar24;
                        if (pfVar24 < *(float **)(piVar30 + 6)) {
                          *pfVar24 = fVar42;
                          pfVar24[1] = fVar43;
                          pfVar16 = pfVar24 + 4;
                          pfVar24[2] = fVar44;
                          pfVar24[3] = fVar41;
                        }
                        else {
                          lVar17 = (long)pfVar24 - *(long *)(piVar30 + 2);
                          uVar19 = (lVar17 >> 4) + 1;
                          if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                          uVar18 = (long)*(float **)(piVar30 + 6) - *(long *)(piVar30 + 2);
                          uVar25 = (long)uVar18 >> 3;
                          if (uVar25 <= uVar19) {
                            uVar25 = uVar19;
                          }
                          if (0x7fffffffffffffef < uVar18) {
                            uVar25 = 0xfffffffffffffff;
                          }
                          piVar14 = piVar30 + 2;
                          FUN_10a191cb8();
                          pfVar24 = (float *)((long)piVar14 + lVar17);
                          *pfVar24 = fVar42;
                          pfVar24[1] = fVar43;
                          pfVar24[2] = fVar44;
                          pfVar24[3] = fVar41;
                          pfVar16 = pfVar24 + 4;
                          lVar17 = (long)pfVar24 - (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2))
                          ;
                          _memcpy(lVar17);
                          plVar15 = *(long **)(piVar30 + 2);
                          *(long *)(piVar30 + 2) = lVar17;
                          *(float **)(piVar30 + 4) = pfVar16;
                          *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                          if (plVar15 != (long *)0x0) {
                            __ZdlPv();
                          }
                        }
                        *(float **)(piVar30 + 4) = pfVar16;
                        if (pfVar16 < *(float **)(piVar30 + 6)) {
LAB_10abe4984:
                          *pfVar16 = fVar40;
                          pfVar16[1] = fVar45;
                          pfVar24 = pfVar16 + 4;
                          pfVar16[2] = fVar44;
                          pfVar16[3] = fVar43;
                        }
                        else {
                          lVar17 = (long)pfVar16 - *(long *)(piVar30 + 2);
                          uVar19 = (lVar17 >> 4) + 1;
                          if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                          uVar18 = (long)*(float **)(piVar30 + 6) - *(long *)(piVar30 + 2);
                          uVar25 = (long)uVar18 >> 3;
                          if (uVar25 <= uVar19) {
                            uVar25 = uVar19;
                          }
                          if (0x7fffffffffffffef < uVar18) {
                            uVar25 = 0xfffffffffffffff;
                          }
                          piVar14 = piVar30 + 2;
                          FUN_10a191cb8();
                          pfVar16 = (float *)((long)piVar14 + lVar17);
LAB_10abe4d28:
                          *pfVar16 = fVar40;
                          pfVar16[1] = fVar45;
                          pfVar16[2] = fVar44;
                          pfVar16[3] = fVar43;
                          pfVar24 = pfVar16 + 4;
                          lVar17 = (long)pfVar16 - (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2))
                          ;
                          _memcpy(lVar17);
                          plVar15 = *(long **)(piVar30 + 2);
                          *(long *)(piVar30 + 2) = lVar17;
                          *(float **)(piVar30 + 4) = pfVar24;
                          *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                          if (plVar15 != (long *)0x0) {
                            __ZdlPv();
                          }
                        }
                        *(float **)(piVar30 + 4) = pfVar24;
                        lVar17 = *(long *)(piVar30 + 2);
                        lVar27 = (long)pfVar24 - lVar17;
                      }
                      else {
                        if (fVar46 <= fVar41) {
                          if (fVar43 <= fVar45) {
                            if (pfVar16 < pfVar24) {
                              *pfVar16 = fVar42;
                              pfVar16[1] = fVar45;
                              pfVar24 = pfVar16 + 4;
                              pfVar16[2] = fVar44;
                              pfVar16[3] = fVar46;
                            }
                            else {
                              uVar19 = uVar19 + 1;
                              if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                              uVar25 = (long)pfVar24 - lVar17 >> 3;
                              if (uVar25 <= uVar19) {
                                uVar25 = uVar19;
                              }
                              if (0x7fffffffffffffef < (ulong)((long)pfVar24 - lVar17)) {
                                uVar25 = 0xfffffffffffffff;
                              }
                              piVar14 = piVar30 + 2;
                              FUN_10a191cb8();
                              pfVar16 = (float *)((long)piVar14 + lVar27);
                              *pfVar16 = fVar42;
                              pfVar16[1] = fVar45;
                              pfVar16[2] = fVar44;
                              pfVar16[3] = fVar46;
                              pfVar24 = pfVar16 + 4;
                              lVar17 = (long)pfVar16 -
                                       (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2));
                              _memcpy(lVar17);
                              plVar15 = *(long **)(piVar30 + 2);
                              *(long *)(piVar30 + 2) = lVar17;
                              *(float **)(piVar30 + 4) = pfVar24;
                              *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                              if (plVar15 != (long *)0x0) {
                                __ZdlPv();
                              }
                            }
                            *(float **)(piVar30 + 4) = pfVar24;
                            lVar17 = *(long *)(piVar30 + 2);
                            lVar27 = (long)pfVar24 - lVar17;
                            goto LAB_10abe4b8c;
                          }
                          if (pfVar24 <= pfVar16) {
                            uVar19 = uVar19 + 1;
                            if (uVar19 >> 0x3c == 0) {
                              uVar25 = (long)pfVar24 - lVar17 >> 3;
                              if (uVar25 <= uVar19) {
                                uVar25 = uVar19;
                              }
                              if (0x7fffffffffffffef < (ulong)((long)pfVar24 - lVar17)) {
                                uVar25 = 0xfffffffffffffff;
                              }
                              piVar14 = piVar30 + 2;
                              FUN_10a191cb8();
                              pfVar16 = (float *)((long)piVar14 + lVar27);
                              *pfVar16 = fVar40;
                              pfVar16[1] = fVar43;
                              pfVar16[2] = fVar39;
                              pfVar16[3] = fVar46;
                              pfVar24 = pfVar16 + 4;
                              lVar17 = (long)pfVar16 -
                                       (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2));
                              _memcpy(lVar17);
                              plVar15 = *(long **)(piVar30 + 2);
                              *(long *)(piVar30 + 2) = lVar17;
                              *(float **)(piVar30 + 4) = pfVar24;
                              *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                              if (plVar15 != (long *)0x0) {
                                __ZdlPv();
                              }
                              goto LAB_10abe4e94;
                            }
LAB_10abe5150:
                            FUN_10a191ca4();
                            if (*(uint *)(plVar15 + 0x1b) < 3) {
                              iVar6 = *(int *)((long)plVar15 + 0xdc);
                              lVar21 = plVar15[(ulong)*(uint *)(plVar15 + 0x1b) * 3 + 0x10];
                              uVar26 = (plVar15 + (ulong)*(uint *)(plVar15 + 0x1b) * 3 + 0x10)[1] -
                                       lVar21 >> 4;
                              if (uVar26 == (long)iVar6) {
                                FUN_10abfbbfc(plVar15,(int)plVar15[0x1c]);
                                if (2 < *(uint *)(plVar15 + 0x1b)) goto LAB_10abe5258;
                                iVar6 = *(int *)((long)plVar15 + 0xdc);
                                lVar21 = plVar15[(ulong)*(uint *)(plVar15 + 0x1b) * 3 + 0x10];
                                uVar26 = (plVar15 + (ulong)*(uint *)(plVar15 + 0x1b) * 3 + 0x10)[1]
                                         - lVar21 >> 4;
                              }
                              if ((ulong)(long)iVar6 < uVar26) {
                                puVar28 = (undefined8 *)(lVar21 + (long)iVar6 * 0x10);
                                plVar3 = (long *)*puVar28;
                                plVar5 = (long *)puVar28[1];
                                if (plVar5 == (long *)0x0) {
                                  *(int *)((long)plVar15 + 0xdc) = iVar6 + 1;
                                }
                                else {
                                  plVar2 = plVar5 + 1;
                                  do {
                                    cVar8 = '\x01';
                                    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                                    if (bVar13) {
                                      *plVar2 = *plVar2 + 1;
                                      cVar8 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar8 != '\0');
                                  *(int *)((long)plVar15 + 0xdc) =
                                       *(int *)((long)plVar15 + 0xdc) + 1;
                                  do {
                                    lVar21 = *plVar2;
                                    cVar8 = '\x01';
                                    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                                    if (bVar13) {
                                      *plVar2 = lVar21 + -1;
                                      cVar8 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar8 != '\0');
                                  if (lVar21 == 0) {
                                    (**(code **)(*plVar5 + 0x10))(plVar5);
                                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
                                  }
                                }
                                return plVar3;
                              }
                            }
LAB_10abe5258:
                    /* WARNING: Does not return */
                            pcVar12 = (code *)SoftwareBreakpoint(1,0x10abe525c);
                            (*pcVar12)();
                          }
                          *pfVar16 = fVar40;
                          pfVar16[1] = fVar43;
                          pfVar24 = pfVar16 + 4;
                          pfVar16[2] = fVar39;
                          pfVar16[3] = fVar46;
LAB_10abe4e94:
                          *(float **)(piVar30 + 4) = pfVar24;
                          if (pfVar24 < *(float **)(piVar30 + 6)) {
                            *pfVar24 = fVar42;
                            pfVar24[1] = fVar43;
                            pfVar16 = pfVar24 + 4;
                            pfVar24[2] = fVar44;
                            pfVar24[3] = fVar46;
                          }
                          else {
                            lVar17 = (long)pfVar24 - *(long *)(piVar30 + 2);
                            uVar19 = (lVar17 >> 4) + 1;
                            if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                            uVar18 = (long)*(float **)(piVar30 + 6) - *(long *)(piVar30 + 2);
                            uVar25 = (long)uVar18 >> 3;
                            if (uVar25 <= uVar19) {
                              uVar25 = uVar19;
                            }
                            if (0x7fffffffffffffef < uVar18) {
                              uVar25 = 0xfffffffffffffff;
                            }
                            piVar14 = piVar30 + 2;
                            FUN_10a191cb8();
                            pfVar24 = (float *)((long)piVar14 + lVar17);
                            *pfVar24 = fVar42;
                            pfVar24[1] = fVar43;
                            pfVar24[2] = fVar44;
                            pfVar24[3] = fVar46;
                            pfVar16 = pfVar24 + 4;
                            lVar17 = (long)pfVar24 -
                                     (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2));
                            _memcpy(lVar17);
                            plVar15 = *(long **)(piVar30 + 2);
                            *(long *)(piVar30 + 2) = lVar17;
                            *(float **)(piVar30 + 4) = pfVar16;
                            *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                            if (plVar15 != (long *)0x0) {
                              __ZdlPv();
                            }
                          }
                          *(float **)(piVar30 + 4) = pfVar16;
                          if (uVar32 < (ulong)((long)pfVar16 - *(long *)(piVar30 + 2) >> 4)) {
                            *(float *)(*(long *)(piVar30 + 2) + lVar31) = fVar43;
                            goto LAB_10abe5008;
                          }
                          goto LAB_10abe514c;
                        }
                        if (pfVar16 < pfVar24) {
                          *pfVar16 = fVar40;
                          pfVar16[1] = fVar45;
                          pfVar24 = pfVar16 + 4;
                          pfVar16[2] = fVar39;
                          pfVar16[3] = fVar41;
                        }
                        else {
                          uVar19 = uVar19 + 1;
                          if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                          uVar25 = (long)pfVar24 - lVar17 >> 3;
                          if (uVar25 <= uVar19) {
                            uVar25 = uVar19;
                          }
                          if (0x7fffffffffffffef < (ulong)((long)pfVar24 - lVar17)) {
                            uVar25 = 0xfffffffffffffff;
                          }
                          piVar14 = piVar30 + 2;
                          FUN_10a191cb8();
                          pfVar16 = (float *)((long)piVar14 + lVar27);
                          *pfVar16 = fVar40;
                          pfVar16[1] = fVar45;
                          pfVar16[2] = fVar39;
                          pfVar16[3] = fVar41;
                          pfVar24 = pfVar16 + 4;
                          lVar17 = (long)pfVar16 - (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2))
                          ;
                          _memcpy(lVar17);
                          plVar15 = *(long **)(piVar30 + 2);
                          *(long *)(piVar30 + 2) = lVar17;
                          *(float **)(piVar30 + 4) = pfVar24;
                          *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                          if (plVar15 != (long *)0x0) {
                            __ZdlPv();
                          }
                        }
                        *(float **)(piVar30 + 4) = pfVar24;
                        if (pfVar24 < *(float **)(piVar30 + 6)) {
                          *pfVar24 = fVar42;
                          pfVar24[1] = fVar45;
                          pfVar16 = pfVar24 + 4;
                          pfVar24[2] = fVar44;
                          pfVar24[3] = fVar41;
                        }
                        else {
                          lVar17 = (long)pfVar24 - *(long *)(piVar30 + 2);
                          uVar19 = (lVar17 >> 4) + 1;
                          if (uVar19 >> 0x3c != 0) goto LAB_10abe5150;
                          uVar18 = (long)*(float **)(piVar30 + 6) - *(long *)(piVar30 + 2);
                          uVar25 = (long)uVar18 >> 3;
                          if (uVar25 <= uVar19) {
                            uVar25 = uVar19;
                          }
                          if (0x7fffffffffffffef < uVar18) {
                            uVar25 = 0xfffffffffffffff;
                          }
                          piVar14 = piVar30 + 2;
                          FUN_10a191cb8();
                          pfVar24 = (float *)((long)piVar14 + lVar17);
                          *pfVar24 = fVar42;
                          pfVar24[1] = fVar45;
                          pfVar24[2] = fVar44;
                          pfVar24[3] = fVar41;
                          pfVar16 = pfVar24 + 4;
                          lVar17 = (long)pfVar24 - (*(long *)(piVar30 + 4) - *(long *)(piVar30 + 2))
                          ;
                          _memcpy(lVar17);
                          plVar15 = *(long **)(piVar30 + 2);
                          *(long *)(piVar30 + 2) = lVar17;
                          *(float **)(piVar30 + 4) = pfVar16;
                          *(int **)(piVar30 + 6) = piVar14 + uVar25 * 4;
                          if (plVar15 != (long *)0x0) {
                            __ZdlPv();
                          }
                        }
                        *(float **)(piVar30 + 4) = pfVar16;
                        lVar17 = *(long *)(piVar30 + 2);
                        lVar27 = (long)pfVar16 - lVar17;
                      }
                      if ((ulong)(lVar27 >> 4) <= uVar32) goto LAB_10abe514c;
                      *(float *)(lVar17 + lVar31 + -8) = fVar41;
                    }
                  }
LAB_10abe5008:
                  bVar33 = (bool)(bVar33 | ((((byte)sVar35 & 1) + ((byte)sVar36 & 2) +
                                             ((byte)sVar37 & 4) + ((byte)sVar38 & 8) ^ 0xff) & 0xf)
                                           == 0);
                  uVar32 = uVar32 + 1;
                  lVar31 = lVar31 + 0x10;
                } while (lVar20 - lVar21 >> 4 != uVar32);
              }
              puVar28 = puVar28 + 2;
              bVar13 = (bool)(bVar22 | bVar33);
            } while (puVar28 != puVar4);
            lVar21 = param_1[1];
            lVar20 = param_1[2];
            if (bVar22 || bVar33) {
              aiStack_9c[0] = *piVar30;
              uVar32 = (lVar20 - lVar21 >> 3) * 0x6db6db6db6db6db7;
              if (uVar32 < uVar26 || uVar32 - uVar26 == 0) goto LAB_10abe514c;
              lVar31 = lVar21 + uVar26 * 0x38;
              plVar15 = (long *)(lVar31 + 0x20);
              piVar30 = (int *)*plVar15;
              piVar14 = *(int **)(lVar31 + 0x28);
              if (piVar30 == piVar14) {
LAB_10abe50e0:
                if (piVar30 != piVar14) goto LAB_10abe50f8;
              }
              else {
                do {
                  if (*piVar30 == aiStack_9c[0]) goto LAB_10abe50e0;
                  piVar30 = piVar30 + 1;
                } while (piVar30 != piVar14);
              }
              FUN_10abac094(plVar15,aiStack_9c);
              lVar21 = param_1[1];
              lVar20 = param_1[2];
            }
          }
LAB_10abe50f8:
          uVar23 = uVar23 + 1;
        } while (uVar23 < (ulong)((lVar20 - lVar21 >> 3) * 0x6db6db6db6db6db7));
      }
      uVar26 = uVar1;
    } while (uVar1 != lVar7 - 1U);
  }
  return plVar15;
}



/* Entry: 10abe5154; end: 10abe525b;  */

undefined8 FUN_10abe5154(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  if (*(uint *)(param_1 + 0xd8) < 3) {
    iVar4 = *(int *)(param_1 + 0xdc);
    plVar8 = (long *)(param_1 + 0x80 + (ulong)*(uint *)(param_1 + 0xd8) * 0x18);
    lVar9 = *plVar8;
    uVar10 = plVar8[1] - lVar9 >> 4;
    if (uVar10 == (long)iVar4) {
      FUN_10abfbbfc(param_1,*(undefined4 *)(param_1 + 0xe0));
      if (2 < *(uint *)(param_1 + 0xd8)) goto LAB_10abe5258;
      iVar4 = *(int *)(param_1 + 0xdc);
      plVar8 = (long *)(param_1 + 0x80 + (ulong)*(uint *)(param_1 + 0xd8) * 0x18);
      lVar9 = *plVar8;
      uVar10 = plVar8[1] - lVar9 >> 4;
    }
    if ((ulong)(long)iVar4 < uVar10) {
      puVar2 = (undefined8 *)(lVar9 + (long)iVar4 * 0x10);
      uVar3 = *puVar2;
      plVar8 = (long *)puVar2[1];
      if (plVar8 == (long *)0x0) {
        *(int *)(param_1 + 0xdc) = iVar4 + 1;
      }
      else {
        plVar1 = plVar8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
        do {
          lVar9 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      return uVar3;
    }
  }
LAB_10abe5258:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10abe525c);
  (*pcVar7)();
}



/* Entry: 10abe525c; end: 10abe532f;  */

undefined8 ** FUN_10abe525c(long param_1)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 auStack_88 [2];
  char cStack_71;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c2b054(auStack_88,&UNK_10f69a315);
  FUN_10ab45dcc(&lStack_70,uVar2,auStack_88,1);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  *(byte *)(lStack_70 + 0x279) = *(byte *)(lStack_70 + 0x279) | 2;
  FUN_10a044790(auStack_68);
  ppuVar1 = apuStack_60;
  (*(code *)*apuStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  __Unwind_Resume();
  *ppuVar1 = &PTR_FUN_110c54ea0;
  ppuVar1[2] = (undefined8 *)0x0;
  ppuVar1[1] = (undefined8 *)0x0;
  ppuVar1[4] = (undefined8 *)0x0;
  ppuVar1[3] = (undefined8 *)0x0;
  ppuVar1[5] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar1 + 6) = 1;
  ppuVar1[8] = (undefined8 *)0x0;
  ppuVar1[7] = (undefined8 *)0x0;
  ppuVar1[10] = (undefined8 *)0x0;
  ppuVar1[9] = (undefined8 *)0x0;
  ppuVar1[0xc] = (undefined8 *)0x0;
  ppuVar1[0xb] = (undefined8 *)0x0;
  ppuVar1[0xe] = (undefined8 *)0x0;
  ppuVar1[0xd] = (undefined8 *)0x0;
  ppuVar1[0x10] = (undefined8 *)0x0;
  ppuVar1[0xf] = (undefined8 *)0x0;
  ppuVar1[0x12] = (undefined8 *)0x0;
  ppuVar1[0x11] = (undefined8 *)0x0;
  ppuVar1[0x14] = (undefined8 *)0x0;
  ppuVar1[0x13] = (undefined8 *)0x0;
  ppuVar1[0x16] = (undefined8 *)0x0;
  ppuVar1[0x15] = (undefined8 *)0x0;
  ppuVar1[0x18] = (undefined8 *)0x0;
  ppuVar1[0x17] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar1 + 0x19) = 1;
  *(undefined8 *)((long)ppuVar1 + 0xd4) = 0;
  *(undefined8 *)((long)ppuVar1 + 0xcc) = 0;
  *(undefined4 *)((long)ppuVar1 + 0xdc) = 0;
  *(undefined4 *)(ppuVar1 + 0x1c) = 4;
  FUN_10abfbb60();
  return ppuVar1;
}



/* Entry: 10abe5330; end: 10abe5427;  */

undefined8 * FUN_10abe5330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c54ea0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 4;
  FUN_10abfbb60(param_1,4);
  return param_1;
}



/* Entry: 10abe5428; end: 10abe54a3;  */

undefined8 * FUN_10abe5428(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c54ea0;
  lVar1 = 0xb0;
  do {
    func_0x00010ac062b0((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x68);
  FUN_10ac0630c(param_1 + 0xd);
  FUN_10ac0630c(param_1 + 10);
  puStack_28 = param_1 + 7;
  FUN_10a044868(&puStack_28);
  FUN_10a0617bc(param_1 + 4);
  func_0x00010ac0637c(param_1 + 1);
  return param_1;
}



/* Entry: 10abe54a4; end: 10abe56f7;  */

void FUN_10abe54a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_68;
  
  plVar10 = (long *)(param_4 + 0x18);
  lVar7 = *(long *)(param_4 + 0x20) - *plVar10;
  if (lVar7 != 0) {
    lVar7 = (lVar7 >> 3) * 0xf83e0f83e0f83e1;
    puVar6 = (undefined4 *)(*plVar10 + 0x38);
    uVar3 = *puVar6;
    do {
      uVar1 = *puVar6;
      *puVar6 = uVar3;
      puVar6[1] = uVar1;
      puVar6 = puVar6 + 0x42;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar7 = *(long *)(param_1 + 0x108);
    for (lVar11 = *(long *)(param_1 + 0x110); lVar11 != lVar7; lVar11 = lVar11 + -0x108) {
      lStack_68 = lVar11 + -0xf0;
      FUN_10a1901f0(&lStack_68);
    }
    *(long *)(param_1 + 0x110) = lVar7;
    lVar7 = *(long *)(param_1 + 0x120);
    for (lVar11 = *(long *)(param_1 + 0x128); lVar11 != lVar7; lVar11 = lVar11 + -0x108) {
      lStack_68 = lVar11 + -0xf0;
      FUN_10a1901f0(&lStack_68);
    }
    *(long *)(param_1 + 0x128) = lVar7;
    lVar7 = *(long *)(param_4 + 0x18);
    lVar11 = *(long *)(param_4 + 0x20);
    uVar9 = (lVar11 - lVar7 >> 3) * 0xf83e0f83e0f83e1;
    if (0 < (int)uVar9) {
      lVar12 = 0;
      uVar13 = 0;
      do {
        if (uVar9 <= uVar13) goto LAB_10abe56f4;
        iVar2 = *(int *)(lVar7 + lVar12 + 0x30);
        plVar5 = (long *)(param_1 + 0x108);
        if ((iVar2 == 3) || (plVar5 = (long *)(param_1 + 0x120), iVar2 == 4)) {
          FUN_10abe56f8(plVar5);
          lVar7 = *(long *)(param_4 + 0x18);
          lVar11 = *(long *)(param_4 + 0x20);
        }
        uVar13 = uVar13 + 1;
        uVar9 = (lVar11 - lVar7 >> 3) * 0xf83e0f83e0f83e1;
        lVar12 = lVar12 + 0x108;
      } while ((long)uVar13 < (long)(int)uVar9);
    }
    if (plVar10 != (long *)(param_1 + 0x108)) {
      FUN_10ac00314(plVar10,*(long *)(param_1 + 0x108),*(long *)(param_1 + 0x110),
                    (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) *
                    0xf83e0f83e0f83e1);
    }
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x10))
              (*(long **)(param_1 + 0xe8),param_2,param_3,param_4);
    lVar7 = *(long *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar7 + 0x98);
    *(long *)(param_1 + 0x100) = lVar7 + 8;
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar7 + 0x90);
    if (plVar10 != (long *)(param_1 + 0x120)) {
      FUN_10ac00314(plVar10,*(long *)(param_1 + 0x120),*(long *)(param_1 + 0x128),
                    (*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 3) *
                    0xf83e0f83e0f83e1);
    }
    FUN_10abe5940(param_1,param_2,param_3,param_4);
    lVar7 = *(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108);
    if (lVar7 != 0) {
      lVar7 = (lVar7 >> 3) * 0xf83e0f83e0f83e1;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x108) + 0x38);
      do {
        uVar14 = NEON_rev64(*puVar8,4);
        *puVar8 = uVar14;
        puVar8 = puVar8 + 0x21;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    lVar7 = *(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120);
    if (lVar7 != 0) {
      lVar7 = (lVar7 >> 3) * 0xf83e0f83e0f83e1;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x120) + 0x38);
      do {
        uVar14 = NEON_rev64(*puVar8,4);
        *puVar8 = uVar14;
        puVar8 = puVar8 + 0x21;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    return;
  }
LAB_10abe56f4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10abe56f8);
  (*pcVar4)();
}



/* Entry: 10abe56f8; end: 10abe593f;  */

/* WARNING: Removing unreachable block (ram,0x00010abe60a8) */

void FUN_10abe56f8(long *param_1,long *param_2,ulong param_3,long param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  ushort uVar17;
  long lVar18;
  undefined4 *puVar19;
  long lVar20;
  ulong uVar21;
  ulong extraout_x9;
  int iVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long lStack_1c0;
  long *plStack_1b8;
  undefined8 ***pppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  undefined1 auStack_198 [24];
  undefined8 uStack_180;
  float fStack_178;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  long *aplStack_138 [7];
  float fStack_fc;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar10 = (long *)param_1[1];
  if (plVar10 < (long *)param_1[2]) {
    lVar20 = param_2[1];
    lVar27 = *param_2;
    *(short *)(plVar10 + 2) = (short)param_2[2];
    plVar10[1] = lVar20;
    *plVar10 = lVar27;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[3] = 0;
    FUN_10ac00130();
    lVar27 = param_2[6];
    lVar18 = param_2[9];
    lVar20 = param_2[8];
    plVar10[7] = param_2[7];
    plVar10[6] = lVar27;
    plVar10[9] = lVar18;
    plVar10[8] = lVar20;
    lVar20 = param_2[0xb];
    lVar27 = param_2[10];
    lVar30 = param_2[0xd];
    lVar18 = param_2[0xc];
    lVar29 = param_2[0xe];
    lVar31 = param_2[0x11];
    lVar26 = param_2[0x10];
    plVar10[0xf] = param_2[0xf];
    plVar10[0xe] = lVar29;
    plVar10[0x11] = lVar31;
    plVar10[0x10] = lVar26;
    plVar10[0xb] = lVar20;
    plVar10[10] = lVar27;
    plVar10[0xd] = lVar30;
    plVar10[0xc] = lVar18;
    lVar20 = param_2[0x13];
    lVar27 = param_2[0x12];
    lVar30 = param_2[0x15];
    lVar18 = param_2[0x14];
    lVar29 = param_2[0x16];
    lVar31 = param_2[0x19];
    lVar26 = param_2[0x18];
    plVar10[0x17] = param_2[0x17];
    plVar10[0x16] = lVar29;
    plVar10[0x19] = lVar31;
    plVar10[0x18] = lVar26;
    plVar10[0x13] = lVar20;
    plVar10[0x12] = lVar27;
    plVar10[0x15] = lVar30;
    plVar10[0x14] = lVar18;
    lVar20 = param_2[0x1b];
    lVar27 = param_2[0x1a];
    lVar30 = param_2[0x1d];
    lVar18 = param_2[0x1c];
    lVar26 = param_2[0x1f];
    lVar29 = param_2[0x1e];
    *(int *)(plVar10 + 0x20) = (int)param_2[0x20];
    plVar10[0x1d] = lVar30;
    plVar10[0x1c] = lVar18;
    plVar10[0x1f] = lVar26;
    plVar10[0x1e] = lVar29;
    plVar10[0x1b] = lVar20;
    plVar10[0x1a] = lVar27;
    plVar10 = plVar10 + 0x21;
    param_1[1] = (long)plVar10;
  }
  else {
    lVar27 = (long)plVar10 - *param_1;
    uVar25 = (lVar27 >> 3) * 0xf83e0f83e0f83e1 + 1;
    if (0xf83e0f83e0f83e < uVar25) {
      plVar10 = param_1;
      FUN_10a193c14();
      param_1[1] = lVar27;
      plVar11 = plVar10;
      __Unwind_Resume();
      puVar19 = *(undefined4 **)(param_4 + 0x18);
      if (puVar19 == *(undefined4 **)(param_4 + 0x20)) {
        FUN_10a00946c(&UNK_10f69b10f);
        uVar25 = extraout_x9;
      }
      else {
        *(undefined1 *)(plVar11 + 0x19) = 1;
        plVar1 = param_2 + 4;
        plVar10 = plVar1;
        func_0x00010a01e9ec(plVar1,*puVar19);
        lVar18 = plVar10[0x35];
        lVar27 = *(long *)(param_4 + 0x18);
        lVar20 = *(long *)(param_4 + 0x20);
        uVar25 = (lVar20 - lVar27 >> 3) * 0xf83e0f83e0f83e1;
        iVar22 = *(int *)((long)plVar11 + 0xd4);
        if (iVar22 == 0) {
          iVar22 = 10;
          *(undefined4 *)((long)plVar11 + 0xd4) = 10;
        }
        if ((uVar25 < (ulong)(long)iVar22 || uVar25 - (long)iVar22 == 0) ||
           (plVar10 = plVar11, *(int *)(*(long *)(*(long *)(lVar18 + 0x170) + 0xa20) + 0x18) < 0x72)
           ) {
          if ((char)plVar11[6] == '\x01') {
            (**(code **)(*plVar11 + 0x20))(plVar11);
            *(undefined1 *)(plVar11 + 6) = 0;
            lVar27 = *(long *)(param_4 + 0x18);
            lVar20 = *(long *)(param_4 + 0x20);
            uVar25 = (lVar20 - lVar27 >> 3) * 0xf83e0f83e0f83e1;
          }
          lVar18 = 0;
          if (lVar20 != lVar27) {
            lVar18 = LZCOUNT(uVar25) * -2 + 0x7e;
          }
          aplStack_138[0] = plVar1;
          FUN_10ac06544(lVar27,lVar20,aplStack_138,lVar18,1);
          lStack_168 = 0;
          lStack_160 = 0;
          uStack_158 = 0;
          FUN_10a5d2e0c(&lStack_168,
                        (*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18) >> 3) *
                        0xf83e0f83e0f83e1);
          puVar2 = *(undefined4 **)(param_4 + 0x20);
          for (puVar19 = *(undefined4 **)(param_4 + 0x18); puVar19 != puVar2;
              puVar19 = puVar19 + 0x42) {
            plVar10 = plVar1;
            func_0x00010a01e9ec(plVar1,*puVar19);
            lVar27 = plVar10[0x35];
            plStack_1b8 = (long *)plVar11[5];
            lStack_1c0 = plVar11[4];
            if (plVar11[5] != 0) {
              plVar10 = (long *)(plVar11[5] + 8);
              do {
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar8) {
                  *plVar10 = *plVar10 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_10a42646c(lVar27,&lStack_1c0);
            plVar10 = plStack_1b8;
            if (plStack_1b8 != (long *)0x0) {
              plVar12 = plStack_1b8 + 1;
              do {
                lVar27 = *plVar12;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar8) {
                  *plVar12 = lVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
            plVar10 = plVar1;
            FUN_10a5dfd94(plVar1,plVar11[4]);
            *(short *)(puVar19 + 1) = (short)plVar10;
            if ((ulong)(lStack_160 - lStack_168 >> 2) < (ulong)(long)*(int *)((long)plVar11 + 0xd4))
            {
              FUN_10abac094(&lStack_168,puVar19);
            }
          }
          plVar12 = plVar1;
          FUN_10a01f6d4(plVar1,param_3);
          plVar10 = param_2 + 0xbc;
          func_0x00010a04a0d4(plVar10,param_3);
          lVar27 = plVar11[1];
          lVar20 = plVar11[2];
          while (lVar20 != lVar27) {
            lVar20 = lVar20 + -0x38;
            FUN_10ac000a0(lVar20);
          }
          plVar11[2] = lVar27;
          lVar27 = 200;
          if ((ulong)plVar10[0x57] < 2) {
            lVar27 = 0x1e0;
          }
          (**(code **)(*plVar11 + 0x40))
                    (plVar11,(long)plVar10 + lVar27 + 0x170,plVar1,lStack_168,
                     lStack_160 - lStack_168 >> 2);
          lVar27 = plVar11[1];
          lVar20 = plVar11[2];
          if (lVar20 != lVar27) {
            uVar25 = 0;
            bVar8 = *(int *)(param_4 + 0x30) == 4;
            uVar23 = param_3;
            do {
              uVar21 = (*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18) >> 3) *
                       0xf83e0f83e0f83e1;
              if (uVar21 < uVar25 || uVar21 - uVar25 == 0) goto LAB_10abe6180;
              puVar19 = (undefined4 *)(*(long *)(param_4 + 0x18) + uVar25 * 0x108);
              uVar3 = *puVar19;
              plVar10 = plVar1;
              func_0x00010a01e9ec();
              if (plVar10[0x35] == 0) {
                FUN_10a0ee900(aplStack_138,&UNK_10f69b0ce,0x40);
                lVar27 = *(long *)(param_4 + 0x18);
                if (*(long *)(param_4 + 0x20) != lVar27) {
                  lVar20 = 0;
                  uVar25 = 0;
                  do {
                    FUN_10abfc768(&pppuStack_150,lVar27 + lVar20);
                    uVar23 = uStack_148;
                    ppppuVar6 = (undefined8 ****)pppuStack_150;
                    if (-1 < (long)uStack_140) {
                      uVar23 = uStack_140 >> 0x38;
                      ppppuVar6 = &pppuStack_150;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (aplStack_138,ppppuVar6,uVar23);
                    uVar25 = uVar25 + 1;
                    lVar27 = *(long *)(param_4 + 0x18);
                    lVar20 = lVar20 + 0x108;
                  } while (uVar25 < (ulong)((*(long *)(param_4 + 0x20) - lVar27 >> 3) *
                                           0xf83e0f83e0f83e1));
                }
                FUN_10a1084cc(aplStack_138);
                goto LAB_10abe6180;
              }
              lVar27 = plVar11[1];
              uVar21 = (plVar11[2] - lVar27 >> 3) * 0x6db6db6db6db6db7;
              if (uVar21 < uVar25 || uVar21 - uVar25 == 0) goto LAB_10abe6180;
              plVar15 = plVar11;
              (**(code **)(*plVar11 + 0x28))(plVar11,plVar10[0x35],plVar12);
              if ((int)plVar15 != 0) {
                lVar27 = lVar27 + uVar25 * 0x38;
                if ((*(undefined4 **)(lVar27 + 0x20) != *(undefined4 **)(lVar27 + 0x28)) &&
                   (*(long *)(lVar27 + 8) != *(long *)(lVar27 + 0x10))) {
                  plVar15 = plVar1;
                  func_0x00010a01e9ec(plVar1,**(undefined4 **)(lVar27 + 0x20));
                  puVar24 = (undefined8 *)plVar15[0x35];
                  if ((undefined8 *)puVar24[0x55] == (undefined8 *)puVar24[0x54])
                  goto LAB_10abe6180;
                  plVar15 = plVar1;
                  FUN_10a5dfd94(plVar1,*(undefined8 *)puVar24[0x54]);
                  plVar13 = plVar1;
                  FUN_10a01eacc(plVar1,plVar15);
                  plVar15 = param_2 + 0xbc;
                  func_0x00010a04a0d4(plVar15,uVar23);
                  lVar18 = *plVar15;
                  lVar20 = 200;
                  if ((ulong)plVar15[0x57] < 2) {
                    lVar20 = 0x1e0;
                  }
                  lVar30 = *(long *)(lVar27 + 0x28) - *(long *)(lVar27 + 0x20);
                  uVar23 = lVar30 >> 2;
                  if (lVar30 != 0) {
                    uVar21 = 0;
                    uVar28 = 2;
                    lVar30 = 0x40;
                    do {
                      if ((ulong)(*(long *)(lVar27 + 0x28) - *(long *)(lVar27 + 0x20) >> 2) <=
                          uVar21) goto LAB_10abe6180;
                      plVar14 = plVar1;
                      func_0x00010a01e9ec(plVar1,*(undefined4 *)
                                                  (*(long *)(lVar27 + 0x20) + uVar21 * 4));
                      lVar31 = plVar14[0x35];
                      lVar26 = *(long *)(*(long *)(lVar31 + 0x168) + 0x140);
                      bVar4 = *(byte *)(lVar26 + 0x2a);
                      lVar29 = lVar26;
                      if ((bVar4 >> 6 & 1) != 0) {
                        func_0x00010a3e933c(lVar26);
                        lVar29 = *(long *)(*(long *)(lVar31 + 0x168) + 0x140);
                        bVar4 = *(byte *)(lVar29 + 0x2a);
                      }
                      if ((bVar4 & 0x24) != 0) {
                        func_0x00010a3e8fd4(lVar29);
                      }
                      func_0x000109519fd0(aplStack_138,(char *)((long)plVar15 + lVar20 + 0x170),
                                          lVar29 + 0xc0);
                      pppuStack_150 =
                           (undefined8 ***)
                           CONCAT44((float)((ulong)aplStack_138[6] >> 0x20) / fStack_fc,
                                    SUB84(aplStack_138[6],0) / fStack_fc);
                      uStack_148 = CONCAT44(*(float *)(lVar31 + 0x4f0) * *(float *)(lVar31 + 0x4f0),
                                            (*(float *)(lVar31 + 0x4f4) + -1.0) * 0.5);
                      if ((ulong)(plVar11[8] - plVar11[7] >> 5) <= uVar28 - 2) goto LAB_10abe6180;
                      FUN_10abac910(plVar13,plVar11[7] + lVar30 + -0x40,lVar26 + 0x100);
                      if ((ulong)(plVar11[8] - plVar11[7] >> 5) <= uVar28 - 1) goto LAB_10abe6180;
                      FUN_10a015dcc(plVar13,plVar11[7] + lVar30 + -0x20,&pppuStack_150);
                      if ((char)lVar18 == '\x01') {
                        fVar32 = *(float *)(plVar15 + 0x18);
                        fVar33 = *(float *)((long)plVar15 + 0xc4);
                        fVar34 = *(float *)(plVar15 + 0x19);
                        fVar35 = 1.0 / SQRT(fVar32 * fVar32 + fVar33 * fVar33 + fVar34 * fVar34);
                        fVar32 = fVar32 * fVar35;
                        fVar33 = fVar33 * fVar35;
                        fVar34 = fVar34 * fVar35;
                        fStack_178 = fVar33 * *(float *)(lVar26 + 0x118) +
                                     fVar32 * *(float *)(lVar26 + 0x108) +
                                     fVar34 * *(float *)(lVar26 + 0x128);
                        uStack_180 = CONCAT44((float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20
                                                     ) * fVar33 +
                                              (float)((ulong)*(undefined8 *)(lVar26 + 0x100) >> 0x20
                                                     ) * fVar32 +
                                              (float)((ulong)*(undefined8 *)(lVar26 + 0x120) >> 0x20
                                                     ) * fVar34,
                                              (float)*(undefined8 *)(lVar26 + 0x110) * fVar33 +
                                              (float)*(undefined8 *)(lVar26 + 0x100) * fVar32 +
                                              (float)*(undefined8 *)(lVar26 + 0x120) * fVar34);
                        if ((ulong)(plVar11[8] - plVar11[7] >> 5) <= uVar28) goto LAB_10abe6180;
                        func_0x00010a01f3c4(plVar13,plVar11[7] + lVar30,&uStack_180);
                      }
                      uVar21 = uVar21 + 1;
                      lVar30 = lVar30 + 0x60;
                      uVar28 = uVar28 + 3;
                    } while (uVar23 != uVar21);
                  }
                  if ((char)lVar18 == '\x01') {
                    lVar27 = plVar11[0xd];
                    lVar20 = plVar11[0xe];
                  }
                  else {
                    lVar27 = plVar11[10];
                    lVar20 = plVar11[0xb];
                  }
                  uVar21 = (lVar20 - lVar27 >> 3) * -0x5555555555555555;
                  if (uVar21 < uVar23 || uVar21 - uVar23 == 0) goto LAB_10abe6180;
                  puVar16 = (undefined8 *)(lVar27 + uVar23 * 0x18);
                  uVar23 = param_3 & 0xffffffff;
                  if ((undefined8 *)plVar13[0x2b] != puVar16) {
                    FUN_10a1f503c((undefined8 *)plVar13[0x2b],*puVar16,puVar16 + 1);
                  }
                  plVar15 = plVar1;
                  FUN_10a190e68(plVar1,uVar3);
                  puVar16 = (undefined8 *)0x1;
                  FUN_10a061940(plVar15[0x15]);
                  plVar15 = (long *)*puVar16;
                  (**(code **)(*plVar15 + 0x70))();
                  bVar9 = (int)plVar15 == 0;
                  uVar17 = 0x400;
                  if (!(bool)(!bVar9 & bVar8)) {
                    uVar17 = 0;
                  }
                  *(ushort *)(puVar19 + 0x18) = *(ushort *)(puVar19 + 0x18) & 0xfbff | uVar17;
                  (**(code **)(*param_2 + 0x148))(param_2);
                  bVar8 = (bool)(bVar9 & bVar8);
                  if (puVar24[0x44] != 0) {
                    FUN_10a66ad54();
                    FUN_10abe33e8(param_2,*puVar24,(long)plVar10 + 0x6c);
                  }
                }
              }
              uVar25 = uVar25 + 1;
              lVar27 = plVar11[1];
              lVar20 = plVar11[2];
              uVar21 = (lVar20 - lVar27 >> 3) * 0x6db6db6db6db6db7;
            } while (uVar25 <= uVar21 && uVar21 - uVar25 != 0);
          }
          while (lVar20 != lVar27) {
            lVar20 = lVar20 + -0x38;
            FUN_10ac000a0(lVar20);
          }
          plVar11[2] = lVar27;
          if (lStack_168 != 0) {
            lStack_160 = lStack_168;
            __ZdlPv();
          }
          return;
        }
      }
      __ZNSt3__19to_stringEm(auStack_198,uVar25);
      FUN_109feb280(&uStack_180,&UNK_10f69b150,auStack_198);
      FUN_10a012db0(&lStack_168,&uStack_180,&UNK_10f69b18f);
      __ZNSt3__19to_stringEi(&pppuStack_1b0,*(undefined4 *)((long)plVar10 + 0xd4));
      if (-1 < (char)bStack_199) {
        uStack_1a8 = (ulong)bStack_199;
        pppuStack_1b0 = &pppuStack_1b0;
      }
      plVar10 = &lStack_168;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar10,pppuStack_1b0,uStack_1a8);
      uStack_148 = plVar10[1];
      pppuStack_150 = (undefined8 ***)*plVar10;
      uStack_140 = plVar10[2];
      plVar10[1] = 0;
      plVar10[2] = 0;
      *plVar10 = 0;
      FUN_10a012db0(aplStack_138,&pppuStack_150,&DAT_10f68f57e);
      FUN_10a0029c0(aplStack_138);
LAB_10abe6180:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10abe6184);
      (*pcVar7)();
    }
    lVar20 = param_1[2] - *param_1 >> 3;
    uVar23 = lVar20 * 0x1f07c1f07c1f07c2;
    if (uVar23 < uVar25 || uVar23 - uVar25 == 0) {
      uVar23 = uVar25;
    }
    if (0x7c1f07c1f07c1e < (ulong)(lVar20 * 0xf83e0f83e0f83e1)) {
      uVar23 = 0xf83e0f83e0f83e;
    }
    plStack_38 = param_1;
    if (uVar23 == 0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = param_1;
      FUN_10a193c28();
    }
    plVar11 = (long *)((long)plVar10 + lVar27);
    plStack_40 = plVar10 + uVar23 * 0x21;
    lVar20 = param_2[1];
    lVar27 = *param_2;
    *(short *)(plVar11 + 2) = (short)param_2[2];
    plVar11[1] = lVar20;
    *plVar11 = lVar27;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plStack_58 = plVar10;
    plStack_50 = plVar11;
    plStack_48 = plVar11;
    FUN_10ac00130();
    lVar27 = param_2[6];
    lVar18 = param_2[9];
    lVar20 = param_2[8];
    plVar11[7] = param_2[7];
    plVar11[6] = lVar27;
    plVar11[9] = lVar18;
    plVar11[8] = lVar20;
    lVar20 = param_2[0xb];
    lVar27 = param_2[10];
    lVar30 = param_2[0xd];
    lVar18 = param_2[0xc];
    lVar29 = param_2[0xe];
    lVar31 = param_2[0x11];
    lVar26 = param_2[0x10];
    plVar11[0xf] = param_2[0xf];
    plVar11[0xe] = lVar29;
    plVar11[0x11] = lVar31;
    plVar11[0x10] = lVar26;
    plVar11[0xb] = lVar20;
    plVar11[10] = lVar27;
    plVar11[0xd] = lVar30;
    plVar11[0xc] = lVar18;
    lVar20 = param_2[0x13];
    lVar27 = param_2[0x12];
    lVar30 = param_2[0x15];
    lVar18 = param_2[0x14];
    lVar29 = param_2[0x16];
    lVar31 = param_2[0x19];
    lVar26 = param_2[0x18];
    plVar11[0x17] = param_2[0x17];
    plVar11[0x16] = lVar29;
    plVar11[0x19] = lVar31;
    plVar11[0x18] = lVar26;
    plVar11[0x13] = lVar20;
    plVar11[0x12] = lVar27;
    plVar11[0x15] = lVar30;
    plVar11[0x14] = lVar18;
    lVar20 = param_2[0x1b];
    lVar27 = param_2[0x1a];
    lVar30 = param_2[0x1d];
    lVar18 = param_2[0x1c];
    lVar26 = param_2[0x1f];
    lVar29 = param_2[0x1e];
    *(int *)(plVar11 + 0x20) = (int)param_2[0x20];
    plVar11[0x1d] = lVar30;
    plVar11[0x1c] = lVar18;
    plVar11[0x1f] = lVar26;
    plVar11[0x1e] = lVar29;
    plVar11[0x1b] = lVar20;
    plVar11[0x1a] = lVar27;
    plStack_48 = plVar11 + 0x21;
    lVar27 = (long)plVar11 + (*param_1 - param_1[1]);
    func_0x00010a193c70(param_1,*param_1,param_1[1],lVar27);
    plVar10 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar27;
    lVar27 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar27;
    func_0x00010a193e00(&plStack_58);
  }
  param_1[1] = (long)plVar10;
  return;
}



/* Entry: 10abe5940; end: 10abe629b;  */

/* WARNING: Removing unreachable block (ram,0x00010abe60a8) */

void FUN_10abe5940(long *param_1,long *param_2,ulong param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  ushort uVar17;
  long lVar18;
  undefined4 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong extraout_x9;
  int iVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long *unaff_x20;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  long lStack_150;
  long *plStack_148;
  undefined8 ***pppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  float fStack_108;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long *aplStack_c8 [7];
  float fStack_8c;
  
  puVar19 = *(undefined4 **)(param_4 + 0x18);
  if (puVar19 == *(undefined4 **)(param_4 + 0x20)) {
    FUN_10a00946c(&UNK_10f69b10f);
    uVar20 = extraout_x9;
  }
  else {
    *(undefined1 *)(param_1 + 0x19) = 1;
    plVar15 = param_2 + 4;
    plVar9 = plVar15;
    func_0x00010a01e9ec(plVar15,*puVar19);
    lVar18 = plVar9[0x35];
    lVar10 = *(long *)(param_4 + 0x18);
    lVar25 = *(long *)(param_4 + 0x20);
    uVar20 = (lVar25 - lVar10 >> 3) * 0xf83e0f83e0f83e1;
    iVar22 = *(int *)((long)param_1 + 0xd4);
    if (iVar22 == 0) {
      iVar22 = 10;
      *(undefined4 *)((long)param_1 + 0xd4) = 10;
    }
    if ((uVar20 < (ulong)(long)iVar22 || uVar20 - (long)iVar22 == 0) ||
       (unaff_x20 = param_1, *(int *)(*(long *)(*(long *)(lVar18 + 0x170) + 0xa20) + 0x18) < 0x72))
    {
      if ((char)param_1[6] == '\x01') {
        (**(code **)(*param_1 + 0x20))(param_1);
        *(undefined1 *)(param_1 + 6) = 0;
        lVar10 = *(long *)(param_4 + 0x18);
        lVar25 = *(long *)(param_4 + 0x20);
        uVar20 = (lVar25 - lVar10 >> 3) * 0xf83e0f83e0f83e1;
      }
      lVar18 = 0;
      if (lVar25 != lVar10) {
        lVar18 = LZCOUNT(uVar20) * -2 + 0x7e;
      }
      aplStack_c8[0] = plVar15;
      FUN_10ac06544(lVar10,lVar25,aplStack_c8,lVar18,1);
      lStack_f8 = 0;
      lStack_f0 = 0;
      uStack_e8 = 0;
      FUN_10a5d2e0c(&lStack_f8,
                    (*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18) >> 3) * 0xf83e0f83e0f83e1
                   );
      puVar1 = *(undefined4 **)(param_4 + 0x20);
      for (puVar19 = *(undefined4 **)(param_4 + 0x18); puVar19 != puVar1; puVar19 = puVar19 + 0x42)
      {
        plVar9 = plVar15;
        func_0x00010a01e9ec(plVar15,*puVar19);
        lVar10 = plVar9[0x35];
        plStack_148 = (long *)param_1[5];
        lStack_150 = param_1[4];
        if (param_1[5] != 0) {
          plVar9 = (long *)(param_1[5] + 8);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar7) {
              *plVar9 = *plVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_10a42646c(lVar10,&lStack_150);
        plVar9 = plStack_148;
        if (plStack_148 != (long *)0x0) {
          plVar11 = plStack_148 + 1;
          do {
            lVar10 = *plVar11;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar7) {
              *plVar11 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_148 + 0x10))(plStack_148);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = plVar15;
        FUN_10a5dfd94(plVar15,param_1[4]);
        *(short *)(puVar19 + 1) = (short)plVar9;
        if ((ulong)(lStack_f0 - lStack_f8 >> 2) < (ulong)(long)*(int *)((long)param_1 + 0xd4)) {
          FUN_10abac094(&lStack_f8,puVar19);
        }
      }
      plVar11 = plVar15;
      FUN_10a01f6d4(plVar15,param_3);
      plVar9 = param_2 + 0xbc;
      func_0x00010a04a0d4(plVar9,param_3);
      lVar10 = param_1[1];
      lVar25 = param_1[2];
      while (lVar25 != lVar10) {
        lVar25 = lVar25 + -0x38;
        FUN_10ac000a0(lVar25);
      }
      param_1[2] = lVar10;
      lVar10 = 200;
      if ((ulong)plVar9[0x57] < 2) {
        lVar10 = 0x1e0;
      }
      (**(code **)(*param_1 + 0x40))
                (param_1,(long)plVar9 + lVar10 + 0x170,plVar15,lStack_f8,lStack_f0 - lStack_f8 >> 2)
      ;
      lVar10 = param_1[1];
      lVar25 = param_1[2];
      if (lVar25 != lVar10) {
        uVar20 = 0;
        bVar7 = *(int *)(param_4 + 0x30) == 4;
        uVar24 = param_3;
        do {
          uVar21 = (*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18) >> 3) * 0xf83e0f83e0f83e1;
          if (uVar21 < uVar20 || uVar21 - uVar20 == 0) goto LAB_10abe6180;
          puVar19 = (undefined4 *)(*(long *)(param_4 + 0x18) + uVar20 * 0x108);
          uVar2 = *puVar19;
          plVar9 = plVar15;
          func_0x00010a01e9ec();
          if (plVar9[0x35] == 0) {
            FUN_10a0ee900(aplStack_c8,&UNK_10f69b0ce,0x40);
            lVar10 = *(long *)(param_4 + 0x18);
            if (*(long *)(param_4 + 0x20) != lVar10) {
              lVar25 = 0;
              uVar20 = 0;
              do {
                FUN_10abfc768(&pppuStack_e0,lVar10 + lVar25);
                uVar24 = uStack_d8;
                ppppuVar5 = (undefined8 ****)pppuStack_e0;
                if (-1 < (long)uStack_d0) {
                  uVar24 = uStack_d0 >> 0x38;
                  ppppuVar5 = &pppuStack_e0;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (aplStack_c8,ppppuVar5,uVar24);
                uVar20 = uVar20 + 1;
                lVar10 = *(long *)(param_4 + 0x18);
                lVar25 = lVar25 + 0x108;
              } while (uVar20 < (ulong)((*(long *)(param_4 + 0x20) - lVar10 >> 3) *
                                       0xf83e0f83e0f83e1));
            }
            FUN_10a1084cc(aplStack_c8);
            goto LAB_10abe6180;
          }
          lVar10 = param_1[1];
          uVar21 = (param_1[2] - lVar10 >> 3) * 0x6db6db6db6db6db7;
          if (uVar21 < uVar20 || uVar21 - uVar20 == 0) goto LAB_10abe6180;
          plVar14 = param_1;
          (**(code **)(*param_1 + 0x28))(param_1,plVar9[0x35],plVar11);
          if ((int)plVar14 != 0) {
            lVar10 = lVar10 + uVar20 * 0x38;
            if ((*(undefined4 **)(lVar10 + 0x20) != *(undefined4 **)(lVar10 + 0x28)) &&
               (*(long *)(lVar10 + 8) != *(long *)(lVar10 + 0x10))) {
              plVar14 = plVar15;
              func_0x00010a01e9ec(plVar15,**(undefined4 **)(lVar10 + 0x20));
              puVar23 = (undefined8 *)plVar14[0x35];
              if ((undefined8 *)puVar23[0x55] == (undefined8 *)puVar23[0x54]) goto LAB_10abe6180;
              plVar14 = plVar15;
              FUN_10a5dfd94(plVar15,*(undefined8 *)puVar23[0x54]);
              plVar12 = plVar15;
              FUN_10a01eacc(plVar15,plVar14);
              plVar14 = param_2 + 0xbc;
              func_0x00010a04a0d4(plVar14,uVar24);
              lVar18 = *plVar14;
              lVar25 = 200;
              if ((ulong)plVar14[0x57] < 2) {
                lVar25 = 0x1e0;
              }
              lVar29 = *(long *)(lVar10 + 0x28) - *(long *)(lVar10 + 0x20);
              uVar24 = lVar29 >> 2;
              if (lVar29 != 0) {
                uVar21 = 0;
                uVar27 = 2;
                lVar29 = 0x40;
                do {
                  if ((ulong)(*(long *)(lVar10 + 0x28) - *(long *)(lVar10 + 0x20) >> 2) <= uVar21)
                  goto LAB_10abe6180;
                  plVar13 = plVar15;
                  func_0x00010a01e9ec(plVar15,*(undefined4 *)(*(long *)(lVar10 + 0x20) + uVar21 * 4)
                                     );
                  lVar30 = plVar13[0x35];
                  lVar26 = *(long *)(*(long *)(lVar30 + 0x168) + 0x140);
                  bVar3 = *(byte *)(lVar26 + 0x2a);
                  lVar28 = lVar26;
                  if ((bVar3 >> 6 & 1) != 0) {
                    func_0x00010a3e933c(lVar26);
                    lVar28 = *(long *)(*(long *)(lVar30 + 0x168) + 0x140);
                    bVar3 = *(byte *)(lVar28 + 0x2a);
                  }
                  if ((bVar3 & 0x24) != 0) {
                    func_0x00010a3e8fd4(lVar28);
                  }
                  func_0x000109519fd0(aplStack_c8,(char *)((long)plVar14 + lVar25 + 0x170),
                                      lVar28 + 0xc0);
                  pppuStack_e0 = (undefined8 ***)
                                 CONCAT44((float)((ulong)aplStack_c8[6] >> 0x20) / fStack_8c,
                                          SUB84(aplStack_c8[6],0) / fStack_8c);
                  uStack_d8 = CONCAT44(*(float *)(lVar30 + 0x4f0) * *(float *)(lVar30 + 0x4f0),
                                       (*(float *)(lVar30 + 0x4f4) + -1.0) * 0.5);
                  if ((ulong)(param_1[8] - param_1[7] >> 5) <= uVar27 - 2) goto LAB_10abe6180;
                  FUN_10abac910(plVar12,param_1[7] + lVar29 + -0x40,lVar26 + 0x100);
                  if ((ulong)(param_1[8] - param_1[7] >> 5) <= uVar27 - 1) goto LAB_10abe6180;
                  FUN_10a015dcc(plVar12,param_1[7] + lVar29 + -0x20,&pppuStack_e0);
                  if ((char)lVar18 == '\x01') {
                    fVar31 = *(float *)(plVar14 + 0x18);
                    fVar32 = *(float *)((long)plVar14 + 0xc4);
                    fVar33 = *(float *)(plVar14 + 0x19);
                    fVar34 = 1.0 / SQRT(fVar31 * fVar31 + fVar32 * fVar32 + fVar33 * fVar33);
                    fVar31 = fVar31 * fVar34;
                    fVar32 = fVar32 * fVar34;
                    fVar33 = fVar33 * fVar34;
                    fStack_108 = fVar32 * *(float *)(lVar26 + 0x118) +
                                 fVar31 * *(float *)(lVar26 + 0x108) +
                                 fVar33 * *(float *)(lVar26 + 0x128);
                    uStack_110 = CONCAT44((float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20) *
                                          fVar32 + (float)((ulong)*(undefined8 *)(lVar26 + 0x100) >>
                                                          0x20) * fVar31 +
                                          (float)((ulong)*(undefined8 *)(lVar26 + 0x120) >> 0x20) *
                                          fVar33,(float)*(undefined8 *)(lVar26 + 0x110) * fVar32 +
                                                 (float)*(undefined8 *)(lVar26 + 0x100) * fVar31 +
                                                 (float)*(undefined8 *)(lVar26 + 0x120) * fVar33);
                    if ((ulong)(param_1[8] - param_1[7] >> 5) <= uVar27) goto LAB_10abe6180;
                    func_0x00010a01f3c4(plVar12,param_1[7] + lVar29,&uStack_110);
                  }
                  uVar21 = uVar21 + 1;
                  lVar29 = lVar29 + 0x60;
                  uVar27 = uVar27 + 3;
                } while (uVar24 != uVar21);
              }
              if ((char)lVar18 == '\x01') {
                lVar10 = param_1[0xd];
                lVar25 = param_1[0xe];
              }
              else {
                lVar10 = param_1[10];
                lVar25 = param_1[0xb];
              }
              uVar21 = (lVar25 - lVar10 >> 3) * -0x5555555555555555;
              if (uVar21 < uVar24 || uVar21 - uVar24 == 0) goto LAB_10abe6180;
              puVar16 = (undefined8 *)(lVar10 + uVar24 * 0x18);
              uVar24 = param_3 & 0xffffffff;
              if ((undefined8 *)plVar12[0x2b] != puVar16) {
                FUN_10a1f503c((undefined8 *)plVar12[0x2b],*puVar16,puVar16 + 1);
              }
              plVar14 = plVar15;
              FUN_10a190e68(plVar15,uVar2);
              puVar16 = (undefined8 *)0x1;
              FUN_10a061940(plVar14[0x15]);
              plVar14 = (long *)*puVar16;
              (**(code **)(*plVar14 + 0x70))();
              bVar8 = (int)plVar14 == 0;
              uVar17 = 0x400;
              if (!(bool)(!bVar8 & bVar7)) {
                uVar17 = 0;
              }
              *(ushort *)(puVar19 + 0x18) = *(ushort *)(puVar19 + 0x18) & 0xfbff | uVar17;
              (**(code **)(*param_2 + 0x148))(param_2);
              bVar7 = (bool)(bVar8 & bVar7);
              if (puVar23[0x44] != 0) {
                FUN_10a66ad54();
                FUN_10abe33e8(param_2,*puVar23,(long)plVar9 + 0x6c);
              }
            }
          }
          uVar20 = uVar20 + 1;
          lVar10 = param_1[1];
          lVar25 = param_1[2];
          uVar21 = (lVar25 - lVar10 >> 3) * 0x6db6db6db6db6db7;
        } while (uVar20 <= uVar21 && uVar21 - uVar20 != 0);
      }
      while (lVar25 != lVar10) {
        lVar25 = lVar25 + -0x38;
        FUN_10ac000a0(lVar25);
      }
      param_1[2] = lVar10;
      if (lStack_f8 != 0) {
        lStack_f0 = lStack_f8;
        __ZdlPv();
      }
      return;
    }
  }
  __ZNSt3__19to_stringEm(auStack_128,uVar20);
  FUN_109feb280(&uStack_110,&UNK_10f69b150,auStack_128);
  FUN_10a012db0(&lStack_f8,&uStack_110,&UNK_10f69b18f);
  __ZNSt3__19to_stringEi(&pppuStack_140,*(undefined4 *)((long)unaff_x20 + 0xd4));
  if (-1 < (char)bStack_129) {
    uStack_138 = (ulong)bStack_129;
    pppuStack_140 = &pppuStack_140;
  }
  plVar15 = &lStack_f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar15,pppuStack_140,uStack_138);
  uStack_d8 = plVar15[1];
  pppuStack_e0 = (undefined8 ***)*plVar15;
  uStack_d0 = plVar15[2];
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = 0;
  FUN_10a012db0(aplStack_c8,&pppuStack_e0,&DAT_10f68f57e);
  FUN_10a0029c0(aplStack_c8);
LAB_10abe6180:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe6184);
  (*pcVar6)();
}



/* Entry: 10abe629c; end: 10abe637f;  */

long * FUN_10abe629c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar11 = puVar2 + 1;
    *puVar2 = uVar5;
    plVar4 = param_1;
LAB_10abe635c:
    param_1[1] = (long)puVar11;
    return plVar4;
  }
  plVar8 = (long *)*param_1;
  lVar10 = (long)puVar2 - (long)plVar8;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar6 = param_1[2] - (long)plVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar3 = uVar7 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar10);
      uVar5 = *param_2;
      *param_2 = 0;
      plVar9 = puVar2 + -(lVar10 >> 3);
      puVar11 = puVar2 + 1;
      *puVar2 = uVar5;
      plVar4 = plVar9;
      _memcpy(plVar9,plVar8,lVar10);
      *param_1 = (long)plVar9;
      param_1[1] = (long)puVar11;
      param_1[2] = lVar3 + uVar7 * 8;
      if (plVar8 != (long *)0x0) {
        __ZdlPv(plVar8);
        plVar4 = plVar8;
      }
      goto LAB_10abe635c;
    }
  }
  else {
    FUN_10ac005e0();
  }
  func_0x000109ffded8();
  lVar10 = 0x48;
  do {
    func_0x00010ac062b0((long)param_1 + lVar10);
    lVar10 = lVar10 + -0x18;
  } while (lVar10 != 0);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abe6380; end: 10abe6487;  */

long * FUN_10abe6380(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  do {
    func_0x00010ac062b0((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abe6488; end: 10abe648b;  */

undefined8 * FUN_10abe6488(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c54878;
  lVar1 = 0x138;
  do {
    func_0x00010ac062b0((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0xf0);
  if (param_1[0x1e] != 0) {
    param_1[0x1f] = param_1[0x1e];
    __ZdlPv();
  }
  FUN_10a0617bc(param_1 + 0x1b);
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  FUN_10ac005f4(param_1 + 0xf);
  lVar1 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar1 != 0) {
    FUN_10ac08ffc();
  }
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abe648c; end: 10abe649f;  */

void FUN_10abe648c(void)

{
  func_0x00010abe63c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abe64a0; end: 10abe68b7;  */

/* WARNING: Removing unreachable block (ram,0x00010abe65e8) */

void FUN_10abe64a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plStack_118;
  long *plStack_110;
  char cStack_101;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined4 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a0d0194(&lStack_98,&lStack_f8);
  *(undefined8 *)(lStack_98 + 0xe8) = 1;
  uStack_a8 = 10;
  puStack_b0 = &DAT_10f69a35b;
  uStack_a0 = 0xd732ac4d99e43116;
  func_0x000107c2b074(&plStack_118,&puStack_b0);
  if (cStack_101 < '\0') {
    func_0x000107c3192c(&plStack_80,plStack_118,plStack_110);
  }
  else {
    plStack_78 = plStack_110;
    plStack_80 = plStack_118;
  }
  uStack_68 = uStack_100;
  uStack_60 = 0x500000000;
  uStack_58 = 4;
  uStack_54 = 0;
  uStack_50 = 0;
  FUN_10ab6f520(&lStack_f8,&plStack_80,1);
  lVar8 = lStack_98;
  *(undefined4 *)(lStack_98 + 0xf0) = (undefined4)lStack_f8;
  if ((long *)(lStack_98 + 0xf0) != &lStack_f8) {
    FUN_10a1903c4(lStack_98 + 0xf8,lStack_f0,lStack_e8,
                  (lStack_e8 - lStack_f0 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar8 + 0x118) = uStack_d0;
  *(long **)(lVar8 + 0x110) = plStack_d8;
  *(undefined8 *)(lVar8 + 0x128) = uStack_c0;
  *(undefined8 *)(lVar8 + 0x120) = uStack_c8;
  *(undefined8 *)(lVar8 + 0x130) = uStack_b8;
  plStack_88 = &lStack_f0;
  func_0x00010a190844(&plStack_88);
  if (cStack_101 < '\0') {
    __ZdlPv(plStack_118);
  }
  lVar8 = *(long *)(lStack_98 + 0x10);
  lVar10 = (long)*(int *)(lStack_98 + 0xf0) +
           (long)*(int *)(lStack_98 + 0xf0) * (long)*(int *)(param_1 + 0x9c);
  uVar11 = lVar10 + lVar10 * *(int *)(param_1 + 0x98);
  uVar12 = *(long *)(lStack_98 + 0x18) - lVar8;
  if (uVar11 < uVar12 || uVar11 - uVar12 == 0) {
    if (uVar11 < uVar12) {
      *(ulong *)(lStack_98 + 0x18) = lVar8 + uVar11;
    }
  }
  else {
    func_0x000107c27d58((long *)(lStack_98 + 0x10),uVar11 - uVar12);
  }
  if (lStack_98 + 0x28 != param_1 + 0x50) {
    FUN_10a0cf2cc();
  }
  lStack_f8 = 0;
  plVar7 = &lStack_f8;
  FUN_10a1995d0(&plStack_80,&plStack_118,plVar7,&lStack_98);
  if (*(char *)((long)plStack_80 + 0xb9) != '\x01') {
    *(undefined1 *)((long)plStack_80 + 0xb9) = 1;
    (**(code **)(*plStack_80 + 0xa0))();
  }
  if (2 < *(uint *)(param_1 + 0xe8)) goto LAB_10abe683c;
  param_1 = param_1 + (ulong)*(uint *)(param_1 + 0xe8) * 0x18;
  plVar1 = (long *)(param_1 + 0x108);
  puVar13 = *(undefined8 **)(param_1 + 0x110);
  if (puVar13 < *(undefined8 **)(param_1 + 0x118)) {
    puVar13[1] = plStack_78;
    *puVar13 = plStack_80;
    if (plStack_78 != (long *)0x0) {
      plVar7 = plStack_78 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar13 = puVar13 + 2;
LAB_10abe6790:
    plVar7 = plStack_78;
    *(undefined8 **)(param_1 + 0x110) = puVar13;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plStack_90 != (long *)0x0) {
      plVar7 = plStack_90 + 1;
      do {
        lVar8 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar8 = (long)puVar13 - *plVar1;
    uVar11 = (lVar8 >> 4) + 1;
    if (uVar11 >> 0x3c == 0) {
      uVar9 = (long)*(undefined8 **)(param_1 + 0x118) - *plVar1;
      uVar12 = (long)uVar9 >> 3;
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
      if (0x7fffffffffffffef < uVar9) {
        uVar12 = 0xfffffffffffffff;
      }
      plStack_d8 = plVar1;
      FUN_10ac00674();
      puVar3 = (undefined8 *)(uVar12 + lVar8);
      puVar3[1] = plStack_78;
      *puVar3 = plStack_80;
      if (plStack_78 != (long *)0x0) {
        plVar2 = plStack_78 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar13 = puVar3 + 2;
      lVar8 = (long)puVar3 - (*(long *)(param_1 + 0x110) - *plVar1);
      _memcpy(lVar8);
      lStack_f8 = *plVar1;
      *plVar1 = lVar8;
      *(undefined8 **)(param_1 + 0x110) = puVar13;
      uStack_e0 = *(undefined8 *)(param_1 + 0x118);
      *(ulong *)(param_1 + 0x118) = uVar12 + (long)plVar7 * 0x10;
      lStack_f0 = lStack_f8;
      lStack_e8 = lStack_f8;
      func_0x00010ac006a8(&lStack_f8);
      goto LAB_10abe6790;
    }
  }
  FUN_10ac00660();
LAB_10abe683c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe6840);
  (*pcVar6)();
}



/* Entry: 10abe68b8; end: 10abe6d0b;  */

void FUN_10abe68b8(long param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  float *pfVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  float *pfVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  int iVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined4 uStack_64;
  
  FUN_10a14a824(*(undefined8 *)(param_2 + 0x538),param_3 + 0x1158,*(undefined8 *)(param_3 + 0x68));
  func_0x00010a14a96c(*(undefined8 *)(param_2 + 0x538),param_3 + 0x111c,
                      *(undefined8 *)(param_3 + 0x58));
  lVar15 = *(long *)(param_2 + 0x590);
  lVar18 = *(long *)(param_2 + 0x588);
  lVar16 = (lVar15 - lVar18 >> 3) * 0x6db6db6db6db6db7;
  uStack_64 = 0;
  func_0x00010954da28(param_1 + 0xf0,lVar16,&uStack_64);
  if (lVar15 != lVar18) {
    uVar5 = 0;
    lVar15 = *(long *)(param_2 + 0x590);
    lVar18 = *(long *)(param_2 + 0x588);
    puVar9 = (undefined4 *)(lVar18 + 0x18);
    do {
      if (((lVar15 - lVar18 >> 3) * 0x6db6db6db6db6db7 - uVar5 == 0) ||
         ((ulong)(*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 2) <= uVar5))
      goto LAB_10abe6d08;
      *(undefined4 *)(*(long *)(param_1 + 0xf0) + uVar5 * 4) = *puVar9;
      uVar5 = uVar5 + 1;
      puVar9 = puVar9 + 0xe;
    } while (lVar16 - uVar5 != 0);
  }
  lVar15 = *(long *)(param_2 + 0x538);
  if (((*(byte *)(lVar15 + 0x1188) & 1) == 0) && ((bRam000000011330a9e8 & 1) != 0)) {
    func_0x00010ae06f08(0,1,&UNK_10f69b64f,&UNK_10f69b681,0x1e,&UNK_10f69b6d3);
  }
  lVar16 = *(long *)(lVar15 + 0x40);
  if (lVar16 != 0) {
    puVar4 = (undefined8 *)(lVar15 + 3000);
    lVar18 = 0x73;
    do {
      if (lVar18 == 0) goto LAB_10abe6d08;
      *puVar4 = *(undefined8 *)((long)puVar4 + -0x564);
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((long)puVar4 + -0x55c);
      puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      lVar18 = lVar18 + -1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  uVar5 = *(ulong *)(lVar15 + 0x48);
  if (uVar5 != 0) {
    uVar8 = 0;
    pfVar7 = (float *)(lVar15 + 0x13a4);
    lVar16 = lVar15 + 0x11cc;
    do {
      if (uVar8 == 0x80) goto LAB_10abe6d08;
      lVar18 = lVar15 + 0x11a8 + uVar8 * 0x778;
      if (0 < *(int *)(lVar18 + 0x20)) {
        lVar13 = 0;
        pfVar3 = pfVar7;
        do {
          if (((lVar13 == 0x74) || (uVar1 = *(uint *)(lVar16 + lVar13 * 4), 0x72 < uVar1)) ||
             ((ulong)(*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 2) <= uVar8))
          goto LAB_10abe6d08;
          puVar4 = (undefined8 *)(lVar15 + 3000 + (ulong)uVar1 * 0xc);
          fVar19 = *(float *)(*(long *)(param_1 + 0xf0) + uVar8 * 4);
          fVar22 = *pfVar3;
          *puVar4 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + -2) >> 0x20) * fVar19 +
                             (float)((ulong)*puVar4 >> 0x20),
                             (float)*(undefined8 *)(pfVar3 + -2) * fVar19 + (float)*puVar4);
          *(float *)(puVar4 + 1) = fVar19 * fVar22 + *(float *)(puVar4 + 1);
          lVar13 = lVar13 + 1;
          pfVar3 = pfVar3 + 3;
        } while (lVar13 < *(int *)(lVar18 + 0x20));
      }
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 0x1de;
      lVar16 = lVar16 + 0x778;
    } while (uVar8 != uVar5);
  }
  lVar15 = *(long *)(param_2 + 0x538);
  uVar24 = *(undefined8 *)(param_3 + 0x14);
  uVar21 = *(undefined8 *)(param_3 + 0xc);
  uVar25 = *(undefined8 *)(param_3 + 0x24);
  uVar23 = *(undefined8 *)(param_3 + 0x1c);
  uVar26 = *(undefined8 *)(param_3 + 0x2c);
  *(undefined8 *)(lVar15 + 0x34) = *(undefined8 *)(param_3 + 0x34);
  *(undefined8 *)(lVar15 + 0x2c) = uVar26;
  *(undefined8 *)(lVar15 + 0x24) = uVar25;
  *(undefined8 *)(lVar15 + 0x1c) = uVar23;
  *(undefined8 *)(lVar15 + 0x14) = uVar24;
  *(undefined8 *)(lVar15 + 0xc) = uVar21;
  uVar21 = NEON_scvtf(*(undefined8 *)(param_1 + 0x90),4);
  uVar24 = NEON_scvtf(*(undefined8 *)(param_1 + 0xa0),4);
  fVar22 = (float)uVar21 / (float)uVar24;
  fVar19 = (float)((ulong)uVar21 >> 0x20) / (float)((ulong)uVar24 >> 0x20);
  if (fVar22 <= fVar19) {
    fVar19 = fVar22;
  }
  fVar22 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar27 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  fVar19 = fVar19 * SQRT(*(float *)(param_3 + 0xc) * *(float *)(param_3 + 0xc) + fVar22 * fVar22 +
                         fVar27 * fVar27) * 0.2;
  uVar21 = 0;
  fVar22 = 1.0;
  if (1.0 <= fVar19) {
    fVar22 = fVar19;
  }
  uVar8 = (ulong)(uint)fVar22;
  *(float *)(param_2 + 0x518) = fVar22;
  uVar5 = (ulong)*(int *)(param_1 + 0xb4);
  lVar16 = *(long *)(param_1 + 0x78);
  if (uVar5 < (ulong)(*(long *)(param_1 + 0x80) - lVar16 >> 3)) {
    lVar18 = *(long *)(param_2 + 0x548);
    lVar13 = *(long *)(param_2 + 0x540);
    lVar17 = lVar18 - lVar13 >> 3;
    FUN_10ad3d7f4(*(undefined8 *)(lVar16 + uVar5 * 8),lVar17);
    plVar6 = *(long **)(lVar16 + uVar5 * 8);
    puVar9 = (undefined4 *)*plVar6;
    lVar11 = plVar6[4];
    lVar16 = 3000;
    if (*(char *)(param_3 + 0x1188) == '\0') {
      lVar16 = 0x654;
    }
    lVar14 = *(long *)(param_2 + 0x548) - (long)*(long **)(param_2 + 0x540);
    if (lVar14 != 0) {
      lVar14 = lVar14 >> 3;
      puVar10 = puVar9;
      plVar6 = *(long **)(param_2 + 0x540);
      do {
        func_0x000109699d9c(param_3 + 0xc,param_3 + lVar16 + *plVar6 * 0xc);
        *puVar10 = (int)uVar8;
        puVar10[lVar11] = (int)uVar21;
        puVar10 = puVar10 + 1;
        lVar14 = lVar14 + -1;
        plVar6 = plVar6 + 1;
      } while (lVar14 != 0);
      lVar16 = 3000;
      if (*(char *)(lVar15 + 0x1188) == '\0') {
        lVar16 = 0x654;
      }
      lVar14 = *(long *)(param_2 + 0x548) - (long)*(long **)(param_2 + 0x540);
      if (lVar14 != 0) {
        lVar14 = lVar14 >> 3;
        plVar6 = *(long **)(param_2 + 0x540);
        pfVar7 = (float *)(puVar9 + lVar11 * 3);
        puVar10 = puVar9 + lVar11 * 2;
        do {
          func_0x000109699d9c(lVar15 + 0xc,lVar15 + lVar16 + *plVar6 * 0xc);
          *puVar10 = (int)uVar8;
          *pfVar7 = (float)uVar21;
          lVar14 = lVar14 + -1;
          plVar6 = plVar6 + 1;
          pfVar7 = pfVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar14 != 0);
      }
    }
    if (lVar18 != lVar13) {
      iVar20 = *(int *)(param_1 + 0xa4);
      lVar15 = *(long *)(param_2 + 0x560) - (long)*(undefined4 **)(param_2 + 0x558) >> 2;
      pfVar7 = (float *)(puVar9 + lVar11);
      puVar10 = puVar9 + lVar11 * 4;
      puVar12 = *(undefined4 **)(param_2 + 0x558);
      pfVar3 = (float *)(puVar9 + lVar11 * 3);
      do {
        *pfVar7 = ((float)iVar20 - *pfVar7) + -1.0;
        *pfVar3 = ((float)iVar20 - *pfVar3) + -1.0;
        if (lVar15 == 0) goto LAB_10abe6d08;
        *puVar10 = *puVar12;
        lVar15 = lVar15 + -1;
        lVar17 = lVar17 + -1;
        pfVar7 = pfVar7 + 1;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
        pfVar3 = pfVar3 + 1;
      } while (lVar17 != 0);
    }
    return;
  }
LAB_10abe6d08:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10abe6d0c);
  (*pcVar2)();
}



/* Entry: 10abe6d0c; end: 10abe815f;  */

void FUN_10abe6d0c(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  undefined2 uVar8;
  code *pcVar9;
  bool bVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  float *pfVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  float *pfVar24;
  ulong uVar25;
  undefined8 *puVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  long *plVar30;
  int iVar31;
  undefined4 *puVar32;
  undefined2 *puVar33;
  long lVar34;
  ulong uVar35;
  float *pfVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  undefined2 *puVar40;
  long lVar41;
  ulong uVar42;
  uint uVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  undefined4 *puVar47;
  long lVar48;
  ulong uVar49;
  long lVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  int iVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  float fVar77;
  float fVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  float fVar87;
  float fVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  float fVar97;
  float fVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  float fVar107;
  float fVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  float fVar117;
  float fVar118;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  long lStack_1c0;
  long *plStack_1b8;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined7 uStack_150;
  undefined1 uStack_149;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined8 *apuStack_138 [3];
  float afStack_120 [4];
  float afStack_110 [4];
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar47 = *(undefined4 **)(param_4 + 0x18);
  if (puVar47 == *(undefined4 **)(param_4 + 0x20)) {
LAB_10abe80ac:
    FUN_10a00946c(&UNK_10f69a366);
  }
  else {
    lVar46 = 0;
    uVar49 = 0;
    param_1[0x18] = param_1[0x17];
    do {
      plVar11 = param_2 + 4;
      func_0x00010a01e9ec(plVar11,*(undefined4 *)((long)puVar47 + lVar46));
      lVar50 = plVar11[0x35];
      plVar11 = (long *)param_1[0x18];
      if ((long *)param_1[0x19] <= plVar11) {
        lVar13 = param_1[0x17];
        lVar48 = (long)plVar11 - lVar13;
        uVar29 = (lVar48 >> 3) + 1;
        if (uVar29 >> 0x3d == 0) {
          uVar15 = param_1[0x19] - lVar13;
          uVar35 = (long)uVar15 >> 2;
          if (uVar35 <= uVar29) {
            uVar35 = uVar29;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar35 = 0x1fffffffffffffff;
          }
          if (uVar35 >> 0x3d == 0) {
            lVar41 = uVar35 << 3;
            __Znwm();
            plVar11 = (long *)(lVar41 + lVar48);
            plVar30 = plVar11 + 1;
            *plVar11 = lVar50;
            _memcpy(plVar11 + -(lVar48 >> 3),lVar13,lVar48);
            param_1[0x17] = (long)(plVar11 + -(lVar48 >> 3));
            param_1[0x18] = (long)plVar30;
            param_1[0x19] = lVar41 + uVar35 * 8;
            if (lVar13 != 0) {
              __ZdlPv(lVar13);
            }
            goto LAB_10abe6e38;
          }
        }
        else {
          FUN_10ac006f4();
        }
        func_0x000109ffded8();
        goto LAB_10abe80ac;
      }
      plVar30 = plVar11 + 1;
      *plVar11 = lVar50;
LAB_10abe6e38:
      param_1[0x18] = (long)plVar30;
      uVar49 = uVar49 + 1;
      puVar47 = *(undefined4 **)(param_4 + 0x18);
      puVar32 = *(undefined4 **)(param_4 + 0x20);
      uVar29 = ((long)puVar32 - (long)puVar47 >> 3) * 0xf83e0f83e0f83e1;
      lVar46 = lVar46 + 0x108;
    } while (uVar49 <= uVar29 && uVar29 - uVar49 != 0);
    iVar27 = (int)param_1[0xd];
    if ((ulong)(long)iVar27 < (ulong)((long)plVar30 - param_1[0x17] >> 3)) {
      iVar56 = (int)((ulong)((long)plVar30 - param_1[0x17]) >> 3) - iVar27;
      if (0 < iVar56) {
        iVar27 = iVar56 + 1;
        do {
          puVar12 = (undefined8 *)0x28;
          __Znwm();
          puVar12[1] = 0;
          *puVar12 = 0;
          puVar12[3] = 0;
          puVar12[2] = 0;
          puVar12[4] = 0;
          puStack_100 = puVar12;
          FUN_10abe629c(param_1 + 0xf,&puStack_100);
          if (puStack_100 != (undefined8 *)0x0) {
            FUN_10ac08ffc();
          }
          iVar27 = iVar27 + -1;
        } while (1 < iVar27);
        iVar27 = (int)param_1[0xd];
        puVar47 = *(undefined4 **)(param_4 + 0x18);
        puVar32 = *(undefined4 **)(param_4 + 0x20);
      }
      *(int *)(param_1 + 0xd) = iVar27 + iVar56;
      param_1[0x14] = -1;
    }
    *(undefined4 *)((long)param_1 + 0xb4) = 0;
    if (puVar47 != puVar32) {
      auVar53 = NEON_fmov(0x3f800000,4);
      do {
        uVar6 = *puVar47;
        plVar11 = param_2 + 4;
        func_0x00010a01e9ec();
        puVar12 = (undefined8 *)plVar11[0x35];
        FUN_10a5ecad4();
        uVar49 = *(ulong *)((long)puVar12 + 0x5a4);
        iVar27 = (int)uVar49;
        iVar56 = (int)(uVar49 >> 0x20);
        if (((int)param_1[0x14] != iVar27) || (*(int *)((long)param_1 + 0xa4) != iVar56)) {
          *(int *)(param_1 + 0x14) = iVar27;
          *(int *)((long)param_1 + 0xa4) = iVar56;
          if (uVar49 >> 0x20 != 0 && iVar27 != 0) {
            iVar28 = 0;
            if (iVar56 != 0) {
              iVar28 = (iVar27 * 0x500) / iVar56;
            }
            fVar51 = (float)iVar28;
            iVar28 = 0;
            if (iVar27 != 0) {
              iVar28 = (iVar56 * 0x2d0) / iVar27;
            }
            fVar54 = 1280.0;
            if (iVar56 * 0x2d0 < iVar27 * 0x500) {
              fVar51 = 720.0;
              fVar54 = (float)iVar28;
            }
            fVar51 = fVar51 / (float)iVar27;
            fVar54 = fVar54 / (float)iVar56;
            if (fVar51 <= fVar54) {
              fVar54 = fVar51;
            }
            fVar51 = fVar54 * (float)iVar27;
            fVar54 = fVar54 * (float)iVar56;
            iVar28 = (int)fVar51;
            iVar31 = (int)fVar54;
            iVar27 = (int)param_1[0x15];
            iVar56 = 0;
            if (iVar27 != 0) {
              iVar56 = iVar31 / iVar27;
            }
            uVar4 = iVar56 + 1U & 0xfffffffe;
            *(float *)(param_1 + 0x16) = (float)(int)fVar54 / (float)(int)uVar4;
            param_1[0x12] = CONCAT44(iVar31,iVar28);
            iVar31 = 0;
            if (iVar27 != 0) {
              iVar31 = iVar28 / iVar27;
            }
            uVar1 = iVar31 + 1;
            uVar38 = uVar1 & 0xfffffffe;
            *(uint *)(param_1 + 0x13) = uVar38;
            *(uint *)((long)param_1 + 0x9c) = uVar4;
            *(float *)((long)param_1 + 0xac) = (float)(int)fVar51 / (float)(int)uVar38;
            uVar23 = uVar1 | 1;
            func_0x00010983d048(param_1 + 1,(long)(int)((iVar56 + 1U | 1) * uVar23));
            iVar27 = uVar4 * uVar38;
            func_0x0001096b5544(param_1 + 4,(long)iVar27);
            func_0x0001096b5544(param_1 + 7,(long)iVar27);
            if (-2 < iVar56) {
              uVar49 = 0;
              uVar37 = 0;
              fVar51 = *(float *)((long)param_1 + 0xac);
              fVar54 = *(float *)(param_1 + 0x16);
              lVar46 = param_1[0x12];
              iVar28 = *(int *)((long)param_1 + 0x94);
              fVar55 = 1.0;
              do {
                if (-2 < iVar31) {
                  lVar50 = uVar49 << 4;
                  fVar59 = -1.0;
                  uVar43 = uVar23;
                  do {
                    if ((ulong)(param_1[2] - param_1[1] >> 4) <= uVar49) goto LAB_10abe80c8;
                    uVar49 = uVar49 + 1;
                    pfVar36 = (float *)(param_1[1] + lVar50);
                    *pfVar36 = fVar59;
                    pfVar36[1] = fVar55;
                    pfVar36[2] = 0.0;
                    pfVar36[3] = 0.0;
                    fVar59 = (fVar51 + fVar51) / (float)(int)lVar46 + fVar59;
                    lVar50 = lVar50 + 0x10;
                    uVar43 = uVar43 - 1;
                  } while (uVar43 != 0);
                }
                fVar55 = fVar55 - (fVar54 + fVar54) / (float)iVar28;
                bVar10 = uVar37 != uVar4;
                uVar37 = uVar37 + 1;
              } while (bVar10);
            }
            uVar49 = -(ulong)((iVar27 * 3 & 0x7fffffffU) >> 0x1e) & 0xfffffffe00000000 |
                     (ulong)(uint)(iVar27 * 6) << 1;
            lVar46 = param_1[10];
            uVar29 = param_1[0xb] - lVar46;
            if (uVar49 < uVar29 || uVar49 - uVar29 == 0) {
              if (uVar49 < uVar29) {
                param_1[0xb] = lVar46 + uVar49;
              }
            }
            else {
              func_0x000107c27d58(param_1 + 10,uVar49 - uVar29);
              lVar46 = param_1[10];
            }
            if (0 < iVar56) {
              iVar27 = 0;
              uVar49 = 0;
              puVar33 = (undefined2 *)(lVar46 + 6);
              uVar37 = uVar23;
              do {
                puVar40 = puVar33;
                uVar29 = (ulong)uVar38;
                uVar43 = uVar37;
                iVar56 = iVar27;
                if (0 < iVar31) {
                  do {
                    puVar40[-3] = (short)iVar56;
                    puVar40[-2] = (short)uVar43;
                    uVar8 = (undefined2)(iVar56 + 1);
                    puVar40[-1] = uVar8;
                    puVar40[1] = (short)uVar43;
                    *puVar40 = uVar8;
                    puVar40[2] = (short)(uVar43 + 1);
                    uVar29 = uVar29 - 1;
                    puVar40 = puVar40 + 6;
                    uVar43 = uVar43 + 1;
                    iVar56 = iVar56 + 1;
                  } while (uVar29 != 0);
                }
                uVar49 = uVar49 + 1;
                uVar37 = uVar37 + uVar23;
                iVar27 = iVar27 + uVar23;
                puVar33 = puVar33 + (((ulong)uVar1 & 0xfffffffffffffffe) + (ulong)(uVar1 >> 1)) * 4;
              } while (uVar49 != uVar4);
            }
            *(undefined4 *)((long)param_1 + 0xec) = 0;
            lVar46 = 0x108;
            do {
              plVar30 = (long *)((long)param_1 + lVar46);
              lVar50 = *plVar30;
              lVar13 = plVar30[1];
              while (lVar13 != lVar50) {
                lVar13 = lVar13 + -0x10;
                func_0x00010a1943a0();
              }
              plVar30[1] = lVar50;
              lVar46 = lVar46 + 0x18;
            } while (lVar46 != 0x150);
            iVar27 = 0;
            do {
              *(int *)(param_1 + 0x1d) = iVar27;
              FUN_10abe64a0(param_1);
              iVar27 = iVar27 + 1;
            } while (iVar27 != 3);
            *(undefined4 *)(param_1 + 0x1d) = 0;
            lVar46 = param_1[0x1b];
            if (lVar46 == 0) {
              uStack_148 = 0;
              FUN_10a3b1e74(&puStack_100,&uStack_148);
              func_0x00010a015c50(param_1 + 0x1b,&puStack_100);
              lVar46 = param_1[0x1b];
              func_0x000107c2b054(&uStack_160,&UNK_10f69a32d);
              if (*(char *)(lVar46 + 0x6f) < '\0') {
                __ZdlPv(*(undefined8 *)(lVar46 + 0x58));
              }
              *(undefined8 *)(lVar46 + 0x60) = uStack_158;
              *(ulong *)(lVar46 + 0x58) = CONCAT71(uStack_15f,uStack_160);
              *(ulong *)(lVar46 + 0x68) = CONCAT17(uStack_149,uStack_150);
              uStack_149 = 0;
              uStack_160 = 0;
              uStack_170 = 0;
              uStack_168 = 0;
              lVar46 = param_1[0x1b];
              puStack_178 = &uStack_170;
              func_0x000107c2b054(auStack_190,&UNK_10f69a34a);
              FUN_10ab45dcc(&uStack_148,lVar46,auStack_190,1);
              if (cStack_179 < '\0') {
                __ZdlPv(auStack_190[0]);
              }
              plVar30 = *(long **)(param_1[0x1b] + 0x228);
              if (*(long **)(param_1[0x1b] + 0x230) == plVar30) goto LAB_10abe80bc;
              lVar46 = *plVar30;
              func_0x00010a332748(lVar46 + 0x219,0);
              func_0x00010a332700(lVar46 + 0x21a,0);
              FUN_10a0e3500(&plStack_1a8,&puStack_178);
              FUN_10a0da1b8((long *)(lVar46 + 0x200),*(undefined8 *)(lVar46 + 0x208));
              *(long **)(lVar46 + 0x200) = plStack_1a8;
              *(long *)(lVar46 + 0x208) = lStack_1a0;
              *(long *)(lVar46 + 0x210) = lStack_198;
              if (lStack_198 == 0) {
                *(long *)(lVar46 + 0x200) = lVar46 + 0x208;
              }
              else {
                *(long *)(lStack_1a0 + 0x10) = lVar46 + 0x208;
                lStack_1a0 = 0;
                lStack_198 = 0;
                plStack_1a8 = &lStack_1a0;
              }
              FUN_10a0da1b8(&plStack_1a8,lStack_1a0);
              func_0x00010a3326b8(lVar46 + 0x218,1);
              *(byte *)(lVar46 + 0x279) = *(byte *)(lVar46 + 0x279) | 2;
              FUN_10a044790(auStack_140);
              (*(code *)*apuStack_138[0])(apuStack_138);
              FUN_10a0da1b8(&puStack_178,uStack_170);
              FUN_10a044790(&uStack_f0);
              (*(code *)*puStack_e8)(&puStack_e8);
              plVar30 = plStack_f8;
              if (plStack_f8 != (long *)0x0) {
                plVar19 = plStack_f8 + 1;
                do {
                  lVar46 = *plVar19;
                  cVar7 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar10) {
                    *plVar19 = lVar46 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar46 == 0) {
                  (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
                }
              }
              lVar46 = param_1[0x1b];
            }
            plVar30 = param_2 + 4;
            FUN_10a5dfd94(plVar30,lVar46);
            FUN_10a01eacc(param_2 + 4,plVar30);
          }
        }
        (**(code **)(*param_1 + 0x18))(param_1,puVar12,puVar12[0xb6]);
        lStack_1c0 = param_1[0x1b];
        plStack_1b8 = (long *)param_1[0x1c];
        if (param_1[0x1c] != 0) {
          plVar30 = (long *)(param_1[0x1c] + 8);
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar10) {
              *plVar30 = *plVar30 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_10a42646c(puVar12,&lStack_1c0);
        plVar30 = plStack_1b8;
        if (plStack_1b8 != (long *)0x0) {
          plVar19 = plStack_1b8 + 1;
          do {
            lVar46 = *plVar19;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar10) {
              *plVar19 = lVar46 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar46 == 0) {
            (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
          }
        }
        plVar30 = param_2 + 4;
        FUN_10a5dfd94(plVar30,param_1[0x1b]);
        *(short *)(puVar47 + 1) = (short)plVar30;
        lVar46 = param_1[0x17];
        lVar50 = param_1[0x18];
        uVar49 = (ulong)*(int *)((long)param_1 + 0xb4);
        if ((lVar46 == lVar50) || (uVar49 + 1 == lVar50 - lVar46 >> 3)) {
          lVar13 = param_1[0xf];
          uVar29 = param_1[0x10] - lVar13 >> 3;
          if (uVar29 <= uVar49) goto LAB_10abe80c8;
          lVar48 = param_1[0x13];
          iVar27 = *(int *)((long)param_1 + 0x9c);
          fVar51 = *(float *)(puVar12 + 0xa3);
          uVar35 = lVar50 - lVar46 >> 3;
          if (uVar35 - 1 == uVar49) {
            if (lVar46 == lVar50) {
              lVar46 = 0;
            }
            else {
              uVar49 = 0;
              iVar56 = 0;
              do {
                lVar50 = *(long *)(lVar46 + uVar49 * 8);
                if (lVar50 != 0) {
                  if (uVar29 <= uVar49) goto LAB_10abe80c8;
                  fVar54 = *(float *)(lVar50 + 0x518);
                  if (fVar51 <= fVar54) {
                    fVar51 = fVar54;
                  }
                  iVar56 = iVar56 + *(int *)(*(long *)(lVar13 + uVar49 * 8) + 0x18);
                }
                uVar49 = uVar49 + 1;
              } while (uVar35 != uVar49);
              lVar46 = (long)iVar56;
            }
            plVar30 = (long *)param_1[0xe];
            FUN_10ad3d7f4(plVar30,lVar46);
            pfVar36 = (float *)*plVar30;
            lVar46 = plVar30[4];
            lVar50 = lVar46 << 3;
            lVar13 = lVar46 * 0xc;
            lVar41 = lVar46 << 4;
            lVar34 = param_1[0x17];
            lVar22 = param_1[0x18] - lVar34;
            if (lVar22 != 0) {
              uVar49 = 0;
              iVar56 = 0;
              do {
                if (*(long *)(lVar34 + uVar49 * 8) != 0) {
                  if ((ulong)(param_1[0x10] - param_1[0xf] >> 3) <= uVar49) goto LAB_10abe80c8;
                  plVar19 = *(long **)(param_1[0xf] + uVar49 * 8);
                  lVar44 = plVar19[3];
                  lVar14 = (long)(int)lVar44;
                  if (0 < lVar14) {
                    pfVar17 = (float *)*plVar19;
                    lVar20 = plVar19[4];
                    pfVar24 = pfVar36 + iVar56;
                    do {
                      *pfVar24 = *pfVar17;
                      pfVar2 = pfVar17 + lVar20;
                      pfVar3 = pfVar24 + lVar46;
                      *pfVar3 = *pfVar2;
                      pfVar2 = pfVar2 + lVar20;
                      pfVar3 = pfVar3 + lVar46;
                      *pfVar3 = *pfVar2;
                      pfVar3[lVar46] = pfVar2[lVar20];
                      (pfVar3 + lVar46)[lVar46] = (pfVar2 + lVar20)[lVar20];
                      pfVar24 = pfVar24 + 1;
                      pfVar17 = pfVar17 + 1;
                      lVar14 = lVar14 + -1;
                    } while (lVar14 != 0);
                  }
                  iVar56 = iVar56 + (int)lVar44;
                }
                uVar49 = uVar49 + 1;
              } while (uVar49 != lVar22 >> 3);
            }
          }
          else {
            plVar30 = *(long **)(lVar13 + uVar49 * 8);
            lVar46 = plVar30[4];
            pfVar36 = (float *)*plVar30;
            lVar50 = lVar46 << 3;
            lVar13 = lVar46 * 0xc;
            lVar41 = lVar46 << 4;
          }
          uVar4 = *(uint *)(param_1 + 0x13);
          uVar1 = *(uint *)((long)param_1 + 0x9c);
          uVar49 = (ulong)uVar1;
          lVar34 = (long)(int)uVar4;
          fVar54 = *(float *)((long)param_1 + 0xac);
          fVar55 = *(float *)(param_1 + 0x16);
          fVar60 = (float)(int)param_1[0x12];
          fVar59 = (float)*(int *)((long)param_1 + 0x94);
          if (lVar46 != 0) {
            fVar58 = fVar60 / (float)(int)param_1[0x14];
            fVar61 = fVar59 / (float)*(int *)((long)param_1 + 0xa4);
            pfVar24 = pfVar36;
            lVar22 = lVar46;
            do {
              *(float *)((long)pfVar24 + lVar50) = fVar58 * *(float *)((long)pfVar24 + lVar50);
              *(float *)((long)pfVar24 + lVar13) = fVar61 * *(float *)((long)pfVar24 + lVar13);
              *pfVar24 = fVar58 * *pfVar24;
              pfVar24[lVar46] = fVar61 * pfVar24[lVar46];
              pfVar24 = pfVar24 + 1;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          uVar29 = (ulong)uVar4;
          if ((int)uVar1 < 1) {
            lVar46 = param_1[4];
            lVar50 = param_1[7];
          }
          else {
            uVar35 = 0;
            do {
              if (0 < (int)uVar4) {
                uVar15 = 0;
                fVar58 = fVar55 * ((float)(uVar35 & 0xffffffff) + 0.5);
                do {
                  fVar61 = fVar54 * ((float)(uVar15 & 0xffffffff) + 0.5);
                  uVar21 = plVar30[4];
                  if (uVar21 == 0) {
                    uVar109 = 0;
                    uVar110 = 0;
                    uVar111 = 0;
                    uVar112 = 0;
                    uVar113 = 0;
                    uVar114 = 0;
                    uVar115 = 0;
                    uVar116 = 0;
                    fVar117 = 0.0;
                    fVar118 = 0.0;
                    uVar89 = 0;
                    uVar90 = 0;
                    uVar91 = 0;
                    uVar92 = 0;
                    uVar93 = 0;
                    uVar94 = 0;
                    uVar95 = 0;
                    uVar96 = 0;
                    fVar97 = 0.0;
                    fVar98 = 0.0;
                    uVar79 = 0;
                    uVar80 = 0;
                    uVar81 = 0;
                    uVar82 = 0;
                    uVar83 = 0;
                    uVar84 = 0;
                    uVar85 = 0;
                    uVar86 = 0;
                    fVar87 = 0.0;
                    fVar88 = 0.0;
                    uVar69 = 0;
                    uVar70 = 0;
                    uVar71 = 0;
                    uVar72 = 0;
                    uVar73 = 0;
                    uVar74 = 0;
                    uVar75 = 0;
                    uVar76 = 0;
                    fVar77 = 0.0;
                    fVar78 = 0.0;
                    uVar99 = 0;
                    uVar100 = 0;
                    uVar101 = 0;
                    uVar102 = 0;
                    uVar103 = 0;
                    uVar104 = 0;
                    uVar105 = 0;
                    uVar106 = 0;
                    fVar107 = 0.0;
                    fVar108 = 0.0;
                  }
                  else {
                    uVar25 = 0;
                    uVar99 = 0;
                    uVar100 = 0;
                    uVar101 = 0;
                    uVar102 = 0;
                    uVar103 = 0;
                    uVar104 = 0;
                    uVar105 = 0;
                    uVar106 = 0;
                    fVar107 = 0.0;
                    fVar108 = 0.0;
                    uVar69 = 0;
                    uVar70 = 0;
                    uVar71 = 0;
                    uVar72 = 0;
                    uVar73 = 0;
                    uVar74 = 0;
                    uVar75 = 0;
                    uVar76 = 0;
                    fVar77 = 0.0;
                    fVar78 = 0.0;
                    uVar79 = 0;
                    uVar80 = 0;
                    uVar81 = 0;
                    uVar82 = 0;
                    uVar83 = 0;
                    uVar84 = 0;
                    uVar85 = 0;
                    uVar86 = 0;
                    fVar87 = 0.0;
                    fVar88 = 0.0;
                    uVar89 = 0;
                    uVar90 = 0;
                    uVar91 = 0;
                    uVar92 = 0;
                    uVar93 = 0;
                    uVar94 = 0;
                    uVar95 = 0;
                    uVar96 = 0;
                    fVar97 = 0.0;
                    fVar98 = 0.0;
                    uVar109 = 0;
                    uVar110 = 0;
                    uVar111 = 0;
                    uVar112 = 0;
                    uVar113 = 0;
                    uVar114 = 0;
                    uVar115 = 0;
                    uVar116 = 0;
                    fVar117 = 0.0;
                    fVar118 = 0.0;
                    pfVar24 = pfVar36;
                    do {
                      uVar57 = ((undefined8 *)((long)pfVar24 + lVar50))[1];
                      uVar52 = *(undefined8 *)((long)pfVar24 + lVar50);
                      uVar120 = ((undefined8 *)((long)pfVar24 + lVar13))[1];
                      uVar119 = *(undefined8 *)((long)pfVar24 + lVar13);
                      uVar122 = *(undefined8 *)(pfVar24 + lVar46 + 2);
                      uVar121 = *(undefined8 *)(pfVar24 + lVar46);
                      uVar124 = *(undefined8 *)(pfVar24 + 2);
                      uVar123 = *(undefined8 *)pfVar24;
                      fVar63 = (float)uVar52;
                      fVar62 = fVar61 - fVar63;
                      fVar65 = (float)((ulong)uVar52 >> 0x20);
                      fVar64 = fVar61 - fVar65;
                      fVar66 = (float)uVar57;
                      fVar67 = fVar61 - fVar66;
                      fVar68 = (float)((ulong)uVar57 >> 0x20);
                      fVar128 = fVar61 - fVar68;
                      fVar130 = (float)uVar119;
                      fVar125 = fVar58 - fVar130;
                      fVar131 = (float)((ulong)uVar119 >> 0x20);
                      fVar126 = fVar58 - fVar131;
                      fVar132 = (float)uVar120;
                      fVar127 = fVar58 - fVar132;
                      fVar134 = (float)((ulong)uVar120 >> 0x20);
                      fVar129 = fVar58 - fVar134;
                      fVar62 = fVar62 * fVar62 + fVar125 * fVar125;
                      fVar125 = fVar64 * fVar64 + fVar126 * fVar126;
                      fVar67 = fVar67 * fVar67 + fVar127 * fVar127;
                      fVar128 = fVar128 * fVar128 + fVar129 * fVar129;
                      uVar57 = ((undefined8 *)((long)pfVar24 + lVar41))[1];
                      uVar52 = *(undefined8 *)((long)pfVar24 + lVar41);
                      fVar64 = (float)uVar52 / (fVar62 * fVar62);
                      fVar125 = (float)((ulong)uVar52 >> 0x20) / (fVar125 * fVar125);
                      fVar67 = (float)uVar57 / (fVar67 * fVar67);
                      fVar128 = (float)((ulong)uVar57 >> 0x20) / (fVar128 * fVar128);
                      *(ulong *)(pfVar24 + lVar46 * 5 + 2) =
                           CONCAT17((char)((uint)fVar128 >> 0x18),
                                    CONCAT16((char)((uint)fVar128 >> 0x10),
                                             CONCAT15((char)((uint)fVar128 >> 8),
                                                      CONCAT14(SUB41(fVar128,0),fVar67))));
                      *(ulong *)(pfVar24 + lVar46 * 5) =
                           CONCAT17((char)((uint)fVar125 >> 0x18),
                                    CONCAT16((char)((uint)fVar125 >> 0x10),
                                             CONCAT15((char)((uint)fVar125 >> 8),
                                                      CONCAT14(SUB41(fVar125,0),fVar64))));
                      fVar62 = (float)CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99))) +
                               fVar64;
                      uVar99 = SUB41(fVar62,0);
                      uVar100 = (undefined1)((uint)fVar62 >> 8);
                      uVar101 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar102 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar62 = (float)CONCAT13(uVar106,CONCAT12(uVar105,CONCAT11(uVar104,uVar103)))
                               + fVar125;
                      uVar103 = SUB41(fVar62,0);
                      uVar104 = (undefined1)((uint)fVar62 >> 8);
                      uVar105 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar106 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar107 = fVar107 + fVar67;
                      fVar108 = fVar108 + fVar128;
                      fVar62 = (float)CONCAT13(uVar112,CONCAT12(uVar111,CONCAT11(uVar110,uVar109)))
                               + fVar63 * fVar64;
                      uVar109 = SUB41(fVar62,0);
                      uVar110 = (undefined1)((uint)fVar62 >> 8);
                      uVar111 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar112 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar62 = (float)CONCAT13(uVar116,CONCAT12(uVar115,CONCAT11(uVar114,uVar113)))
                               + fVar65 * fVar125;
                      uVar113 = SUB41(fVar62,0);
                      uVar114 = (undefined1)((uint)fVar62 >> 8);
                      uVar115 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar116 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar117 = fVar117 + fVar66 * fVar67;
                      fVar118 = fVar118 + fVar68 * fVar128;
                      fVar62 = (float)CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89))) +
                               fVar130 * fVar64;
                      uVar89 = SUB41(fVar62,0);
                      uVar90 = (undefined1)((uint)fVar62 >> 8);
                      uVar91 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar92 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar62 = (float)CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93))) +
                               fVar131 * fVar125;
                      uVar93 = SUB41(fVar62,0);
                      uVar94 = (undefined1)((uint)fVar62 >> 8);
                      uVar95 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar96 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar97 = fVar97 + fVar132 * fVar67;
                      fVar98 = fVar98 + fVar134 * fVar128;
                      fVar62 = (float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79))) +
                               (float)uVar123 * fVar64;
                      uVar79 = SUB41(fVar62,0);
                      uVar80 = (undefined1)((uint)fVar62 >> 8);
                      uVar81 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar82 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar62 = (float)CONCAT13(uVar86,CONCAT12(uVar85,CONCAT11(uVar84,uVar83))) +
                               (float)((ulong)uVar123 >> 0x20) * fVar125;
                      uVar83 = SUB41(fVar62,0);
                      uVar84 = (undefined1)((uint)fVar62 >> 8);
                      uVar85 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar86 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar87 = fVar87 + (float)uVar124 * fVar67;
                      fVar88 = fVar88 + (float)((ulong)uVar124 >> 0x20) * fVar128;
                      fVar62 = (float)CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) +
                               (float)uVar121 * fVar64;
                      uVar69 = SUB41(fVar62,0);
                      uVar70 = (undefined1)((uint)fVar62 >> 8);
                      uVar71 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar72 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar62 = (float)CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) +
                               (float)((ulong)uVar121 >> 0x20) * fVar125;
                      uVar73 = SUB41(fVar62,0);
                      uVar74 = (undefined1)((uint)fVar62 >> 8);
                      uVar75 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar76 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar77 = fVar77 + (float)uVar122 * fVar67;
                      fVar78 = fVar78 + (float)((ulong)uVar122 >> 0x20) * fVar128;
                      uVar25 = uVar25 + 4;
                      pfVar24 = pfVar24 + 4;
                    } while (uVar25 < uVar21);
                  }
                  fVar62 = (fVar58 - 0.0) * (fVar58 - 0.0) + (fVar61 - fVar61) * (fVar61 - fVar61);
                  fVar64 = (fVar58 - fVar58) * (fVar58 - fVar58) + (fVar61 - 0.0) * (fVar61 - 0.0);
                  fVar125 = (fVar58 - fVar58) * (fVar58 - fVar58) +
                            (fVar61 - fVar60) * (fVar61 - fVar60);
                  fVar67 = (fVar58 - fVar59) * (fVar58 - fVar59) +
                           (fVar61 - fVar61) * (fVar61 - fVar61);
                  fVar63 = auVar53._0_4_ / (fVar62 * fVar62);
                  fVar65 = auVar53._4_4_ / (fVar64 * fVar64);
                  fVar66 = auVar53._8_4_ / (fVar125 * fVar125);
                  fVar68 = auVar53._12_4_ / (fVar67 * fVar67);
                  fVar67 = fVar65 + (float)CONCAT13(uVar106,CONCAT12(uVar105,CONCAT11(uVar104,
                                                  uVar103)));
                  *(ulong *)(pfVar36 + lVar46 * 6 + 2) = CONCAT44(fVar68,fVar66);
                  *(ulong *)(pfVar36 + lVar46 * 6) = CONCAT44(fVar65,fVar63);
                  fVar128 = fVar65 * 0.0 +
                            (float)CONCAT13(uVar116,CONCAT12(uVar115,CONCAT11(uVar114,uVar113)));
                  fVar125 = fVar58 * fVar65 +
                            (float)CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93)));
                  fVar64 = fVar65 * 0.0 +
                           (float)CONCAT13(uVar86,CONCAT12(uVar85,CONCAT11(uVar84,uVar83)));
                  fVar62 = fVar58 * fVar65 +
                           (float)CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73)));
                  plStack_f8 = (long *)CONCAT44(fVar61 * fVar68 + fVar118,fVar60 * fVar66 + fVar117)
                  ;
                  puStack_100 = (undefined8 *)
                                CONCAT17((char)((uint)fVar128 >> 0x18),
                                         CONCAT16((char)((uint)fVar128 >> 0x10),
                                                  CONCAT15((char)((uint)fVar128 >> 8),
                                                           CONCAT14(SUB41(fVar128,0),
                                                                    fVar61 * fVar63 +
                                                                    (float)CONCAT13(uVar112,CONCAT12
                                                  (uVar111,CONCAT11(uVar110,uVar109)))))));
                  puStack_e8 = (undefined8 *)
                               CONCAT44(fVar59 * fVar68 + fVar98,fVar58 * fVar66 + fVar97);
                  uStack_f0 = CONCAT17((char)((uint)fVar125 >> 0x18),
                                       CONCAT16((char)((uint)fVar125 >> 0x10),
                                                CONCAT15((char)((uint)fVar125 >> 8),
                                                         CONCAT14(SUB41(fVar125,0),
                                                                  fVar63 * 0.0 +
                                                                  (float)CONCAT13(uVar92,CONCAT12(
                                                  uVar91,CONCAT11(uVar90,uVar89)))))));
                  uStack_d8 = CONCAT44(fVar61 * fVar68 + fVar88,fVar60 * fVar66 + fVar87);
                  uStack_e0 = CONCAT17((char)((uint)fVar64 >> 0x18),
                                       CONCAT16((char)((uint)fVar64 >> 0x10),
                                                CONCAT15((char)((uint)fVar64 >> 8),
                                                         CONCAT14(SUB41(fVar64,0),
                                                                  fVar61 * fVar63 +
                                                                  (float)CONCAT13(uVar82,CONCAT12(
                                                  uVar81,CONCAT11(uVar80,uVar79)))))));
                  uStack_c8 = CONCAT44(fVar59 * fVar68 + fVar78,fVar58 * fVar66 + fVar77);
                  uStack_d0 = CONCAT17((char)((uint)fVar62 >> 0x18),
                                       CONCAT16((char)((uint)fVar62 >> 0x10),
                                                CONCAT15((char)((uint)fVar62 >> 8),
                                                         CONCAT14(SUB41(fVar62,0),
                                                                  fVar63 * 0.0 +
                                                                  (float)CONCAT13(uVar72,CONCAT12(
                                                  uVar71,CONCAT11(uVar70,uVar69)))))));
                  uStack_b8 = CONCAT44(fVar68 + fVar108,fVar66 + fVar107);
                  uStack_c0 = CONCAT17((char)((uint)fVar67 >> 0x18),
                                       CONCAT16((char)((uint)fVar67 >> 0x10),
                                                CONCAT15((char)((uint)fVar67 >> 8),
                                                         CONCAT14(SUB41(fVar67,0),
                                                                  fVar63 + (float)CONCAT13(uVar102,
                                                  CONCAT12(uVar101,CONCAT11(uVar100,uVar99)))))));
                  uVar69 = 0;
                  uVar70 = 0;
                  uVar71 = 0;
                  uVar72 = 0;
                  lVar22 = 0x20;
                  uVar73 = 0;
                  uVar74 = 0;
                  uVar75 = 0;
                  uVar76 = 0;
                  uVar89 = 0;
                  uVar90 = 0;
                  uVar91 = 0;
                  uVar92 = 0;
                  uVar83 = 0;
                  uVar84 = 0;
                  uVar85 = 0;
                  uVar86 = 0;
                  uVar79 = 0;
                  uVar80 = 0;
                  uVar81 = 0;
                  uVar82 = 0;
                  do {
                    fVar88 = (float)CONCAT13(uVar86,CONCAT12(uVar85,CONCAT11(uVar84,uVar83))) +
                             *(float *)((long)afStack_120 + lVar22);
                    uVar83 = SUB41(fVar88,0);
                    uVar84 = (undefined1)((uint)fVar88 >> 8);
                    uVar85 = (undefined1)((uint)fVar88 >> 0x10);
                    uVar86 = (undefined1)((uint)fVar88 >> 0x18);
                    fVar97 = (float)CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89))) +
                             *(float *)((long)afStack_110 + lVar22);
                    uVar89 = SUB41(fVar97,0);
                    uVar90 = (undefined1)((uint)fVar97 >> 8);
                    uVar91 = (undefined1)((uint)fVar97 >> 0x10);
                    uVar92 = (undefined1)((uint)fVar97 >> 0x18);
                    fVar78 = (float)CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) +
                             *(float *)((long)&puStack_100 + lVar22);
                    uVar73 = SUB41(fVar78,0);
                    uVar74 = (undefined1)((uint)fVar78 >> 8);
                    uVar75 = (undefined1)((uint)fVar78 >> 0x10);
                    uVar76 = (undefined1)((uint)fVar78 >> 0x18);
                    fVar77 = (float)CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) +
                             *(float *)((long)&uStack_f0 + lVar22);
                    uVar69 = SUB41(fVar77,0);
                    uVar70 = (undefined1)((uint)fVar77 >> 8);
                    uVar71 = (undefined1)((uint)fVar77 >> 0x10);
                    uVar72 = (undefined1)((uint)fVar77 >> 0x18);
                    fVar87 = (float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79))) +
                             *(float *)((long)&uStack_e0 + lVar22);
                    uVar79 = SUB41(fVar87,0);
                    uVar80 = (undefined1)((uint)fVar87 >> 8);
                    uVar81 = (undefined1)((uint)fVar87 >> 0x10);
                    uVar82 = (undefined1)((uint)fVar87 >> 0x18);
                    lVar22 = lVar22 + 4;
                  } while (lVar22 != 0x30);
                  fVar88 = fVar88 / fVar87;
                  fVar97 = fVar97 / fVar87;
                  fVar98 = fVar61 - fVar88;
                  fVar107 = fVar58 - fVar97;
                  if (plVar30[4] == 0) {
                    uVar69 = 0;
                    uVar70 = 0;
                    uVar71 = 0;
                    uVar72 = 0;
                    uVar73 = 0;
                    uVar74 = 0;
                    uVar75 = 0;
                    uVar76 = 0;
                    uVar79 = 0;
                    uVar80 = 0;
                    uVar81 = 0;
                    uVar82 = 0;
                    uVar83 = 0;
                    uVar84 = 0;
                    uVar85 = 0;
                    uVar86 = 0;
                    fVar108 = 0.0;
                    fVar118 = 0.0;
                    fVar62 = 0.0;
                    fVar117 = 0.0;
                  }
                  else {
                    uVar21 = 0;
                    fVar108 = 0.0;
                    fVar118 = 0.0;
                    fVar62 = 0.0;
                    fVar117 = 0.0;
                    uVar69 = 0;
                    uVar70 = 0;
                    uVar71 = 0;
                    uVar72 = 0;
                    uVar73 = 0;
                    uVar74 = 0;
                    uVar75 = 0;
                    uVar76 = 0;
                    uVar79 = 0;
                    uVar80 = 0;
                    uVar81 = 0;
                    uVar82 = 0;
                    uVar83 = 0;
                    uVar84 = 0;
                    uVar85 = 0;
                    uVar86 = 0;
                    pfVar24 = pfVar36;
                    do {
                      uVar57 = ((undefined8 *)((long)pfVar24 + lVar50))[1];
                      uVar52 = *(undefined8 *)((long)pfVar24 + lVar50);
                      uVar120 = ((undefined8 *)((long)pfVar24 + lVar13))[1];
                      uVar119 = *(undefined8 *)((long)pfVar24 + lVar13);
                      uVar122 = *(undefined8 *)(pfVar24 + lVar46 + 2);
                      uVar121 = *(undefined8 *)(pfVar24 + lVar46);
                      fVar64 = (float)uVar52 - fVar88;
                      fVar67 = (float)((ulong)uVar52 >> 0x20) - fVar88;
                      fVar128 = (float)uVar57 - fVar88;
                      fVar130 = (float)((ulong)uVar57 >> 0x20) - fVar88;
                      fVar125 = (float)uVar119 - fVar97;
                      fVar131 = (float)((ulong)uVar119 >> 0x20) - fVar97;
                      fVar132 = (float)uVar120 - fVar97;
                      fVar134 = (float)((ulong)uVar120 >> 0x20) - fVar97;
                      fVar140 = fVar64 * fVar98 + fVar125 * fVar107;
                      fVar141 = fVar67 * fVar98 + fVar131 * fVar107;
                      fVar142 = fVar128 * fVar98 + fVar132 * fVar107;
                      fVar143 = fVar130 * fVar98 + fVar134 * fVar107;
                      fVar125 = fVar64 * fVar107 - fVar125 * fVar98;
                      fVar67 = fVar67 * fVar107 - fVar131 * fVar98;
                      fVar128 = fVar128 * fVar107 - fVar132 * fVar98;
                      fVar130 = fVar130 * fVar107 - fVar134 * fVar98;
                      fVar131 = (float)*(undefined8 *)pfVar24 - fVar88;
                      fVar132 = (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) - fVar88;
                      fVar134 = (float)*(undefined8 *)(pfVar24 + 2) - fVar88;
                      fVar126 = (float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) - fVar88;
                      fVar127 = (float)uVar121 - fVar97;
                      fVar129 = (float)((ulong)uVar121 >> 0x20) - fVar97;
                      fVar138 = (float)uVar122 - fVar97;
                      fVar139 = (float)((ulong)uVar122 >> 0x20) - fVar97;
                      uVar57 = *(undefined8 *)(pfVar24 + lVar46 * 5 + 2);
                      uVar52 = *(undefined8 *)(pfVar24 + lVar46 * 5);
                      fVar133 = (float)uVar52;
                      fVar135 = (float)((ulong)uVar52 >> 0x20);
                      fVar136 = (float)uVar57;
                      fVar137 = (float)((ulong)uVar57 >> 0x20);
                      fVar64 = (float)CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) +
                               fVar133 * (fVar131 * fVar140 - fVar127 * fVar125);
                      uVar69 = SUB41(fVar64,0);
                      uVar70 = (undefined1)((uint)fVar64 >> 8);
                      uVar71 = (undefined1)((uint)fVar64 >> 0x10);
                      uVar72 = (undefined1)((uint)fVar64 >> 0x18);
                      fVar64 = (float)CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) +
                               fVar135 * (fVar132 * fVar141 - fVar129 * fVar67);
                      uVar73 = SUB41(fVar64,0);
                      uVar74 = (undefined1)((uint)fVar64 >> 8);
                      uVar75 = (undefined1)((uint)fVar64 >> 0x10);
                      uVar76 = (undefined1)((uint)fVar64 >> 0x18);
                      fVar64 = (float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79))) +
                               fVar136 * (fVar134 * fVar142 - fVar138 * fVar128);
                      uVar79 = SUB41(fVar64,0);
                      uVar80 = (undefined1)((uint)fVar64 >> 8);
                      uVar81 = (undefined1)((uint)fVar64 >> 0x10);
                      uVar82 = (undefined1)((uint)fVar64 >> 0x18);
                      fVar64 = (float)CONCAT13(uVar86,CONCAT12(uVar85,CONCAT11(uVar84,uVar83))) +
                               fVar137 * (fVar126 * fVar143 - fVar139 * fVar130);
                      uVar83 = SUB41(fVar64,0);
                      uVar84 = (undefined1)((uint)fVar64 >> 8);
                      uVar85 = (undefined1)((uint)fVar64 >> 0x10);
                      uVar86 = (undefined1)((uint)fVar64 >> 0x18);
                      fVar108 = fVar108 + fVar133 * (fVar131 * fVar125 + fVar127 * fVar140);
                      fVar118 = fVar118 + fVar135 * (fVar132 * fVar67 + fVar129 * fVar141);
                      fVar62 = fVar62 + fVar136 * (fVar134 * fVar128 + fVar138 * fVar142);
                      fVar117 = fVar117 + fVar137 * (fVar126 * fVar130 + fVar139 * fVar143);
                      uVar21 = uVar21 + 4;
                      pfVar24 = pfVar24 + 4;
                    } while (uVar21 < (ulong)plVar30[4]);
                  }
                  fVar126 = fVar61 - fVar88;
                  fVar127 = 0.0 - fVar88;
                  fVar129 = fVar60 - fVar88;
                  fVar61 = fVar61 - fVar88;
                  fVar130 = 0.0 - fVar97;
                  fVar131 = fVar58 - fVar97;
                  fVar132 = fVar58 - fVar97;
                  fVar134 = fVar59 - fVar97;
                  fVar138 = fVar126 * fVar98 + fVar130 * fVar107;
                  fVar139 = fVar127 * fVar98 + fVar131 * fVar107;
                  fVar133 = fVar129 * fVar98 + fVar132 * fVar107;
                  fVar135 = fVar61 * fVar98 + fVar134 * fVar107;
                  fVar136 = fVar126 * fVar107 - fVar130 * fVar98;
                  fVar137 = fVar127 * fVar107 - fVar131 * fVar98;
                  fVar140 = fVar129 * fVar107 - fVar132 * fVar98;
                  fVar141 = fVar61 * fVar107 - fVar134 * fVar98;
                  fVar125 = fVar63 * (fVar126 * fVar138 - fVar130 * fVar136) +
                            (float)CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69)));
                  fVar67 = fVar65 * (fVar127 * fVar139 - fVar131 * fVar137) +
                           (float)CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73)));
                  puStack_100 = (undefined8 *)CONCAT44(fVar67,fVar125);
                  fVar128 = fVar66 * (fVar129 * fVar133 - fVar132 * fVar140) +
                            (float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79)));
                  fVar64 = fVar68 * (fVar61 * fVar135 - fVar134 * fVar141) +
                           (float)CONCAT13(uVar86,CONCAT12(uVar85,CONCAT11(uVar84,uVar83)));
                  plStack_f8 = (long *)CONCAT44(fVar64,fVar128);
                  fVar108 = fVar63 * (fVar126 * fVar136 + fVar130 * fVar138) + fVar108;
                  fVar118 = fVar65 * (fVar127 * fVar137 + fVar131 * fVar139) + fVar118;
                  uStack_f0 = CONCAT44(fVar118,fVar108);
                  fVar62 = fVar66 * (fVar129 * fVar140 + fVar132 * fVar133) + fVar62;
                  fVar117 = fVar68 * (fVar61 * fVar141 + fVar134 * fVar135) + fVar117;
                  puStack_e8 = (undefined8 *)CONCAT44(fVar117,fVar62);
                  uVar21 = uVar15 + uVar35 * uVar29;
                  if ((ulong)(param_1[5] - param_1[4] >> 3) <= uVar21) goto LAB_10abe80c8;
                  fVar117 = fVar108 + 0.0 + fVar118 + fVar62 + fVar117;
                  fVar64 = fVar125 + 0.0 + fVar67 + fVar128 + fVar64;
                  fVar61 = SQRT((fVar107 * fVar107 + fVar98 * fVar98) /
                                (fVar117 * fVar117 + fVar64 * fVar64));
                  pfVar24 = (float *)(param_1[4] + uVar21 * 8);
                  *pfVar24 = ((fVar78 / fVar87 + fVar61 * fVar64) - fVar98) - fVar88;
                  pfVar24[1] = ((fVar77 / fVar87 + fVar61 * fVar117) - fVar107) - fVar97;
                  uVar15 = uVar15 + 1;
                } while (uVar15 != uVar29);
              }
              uVar35 = uVar35 + 1;
            } while (uVar35 != uVar49);
            uVar15 = 0;
            lVar46 = param_1[4];
            lVar50 = param_1[7];
            uVar35 = 0;
            do {
              lVar13 = uVar35 * lVar34;
              uVar21 = uVar35 + 1;
              uVar38 = (uint)lVar13;
              if (uVar21 != uVar49) {
                uVar38 = uVar4 + uVar4 * (int)uVar35;
              }
              uVar52 = *(undefined8 *)(lVar46 + lVar13 * 8);
              uVar57 = *(undefined8 *)(lVar46 + (long)(int)uVar38 * 8);
              fVar54 = (float)uVar52 + (float)uVar57;
              fVar55 = (float)((ulong)uVar52 >> 0x20) + (float)((ulong)uVar57 >> 0x20);
              if (1 < (int)uVar4) {
                puVar16 = (undefined8 *)(lVar46 + 8 + uVar15 * 8);
                puVar18 = (undefined8 *)(lVar50 + uVar15 * 8);
                uVar35 = (ulong)(uVar4 - 1);
                puVar26 = (undefined8 *)(lVar46 + 8 + (ulong)uVar38 * 8);
                fVar59 = fVar54;
                fVar60 = fVar55;
                do {
                  fVar54 = (float)*puVar16 + (float)*puVar26;
                  fVar55 = (float)((ulong)*puVar16 >> 0x20) + (float)((ulong)*puVar26 >> 0x20);
                  uVar52 = NEON_fmov(0x3e800000,4);
                  *puVar18 = CONCAT44((fVar60 + fVar55) * (float)((ulong)uVar52 >> 0x20),
                                      (fVar59 + fVar54) * (float)uVar52);
                  uVar35 = uVar35 - 1;
                  puVar16 = puVar16 + 1;
                  puVar18 = puVar18 + 1;
                  puVar26 = puVar26 + 1;
                  fVar59 = fVar54;
                  fVar60 = fVar55;
                } while (uVar35 != 0);
              }
              *(ulong *)(lVar50 + lVar34 * 8 + -8 + lVar13 * 8) =
                   CONCAT44(fVar55 * 0.5,fVar54 * 0.5);
              uVar15 = (ulong)((int)uVar15 + uVar4);
              uVar35 = uVar21;
            } while (uVar21 != uVar49);
          }
          fVar59 = fVar51 / *(float *)((long)param_1 + 0xac);
          uVar38 = (uint)fVar59;
          fVar55 = (float)(int)fVar59;
          fVar59 = fVar59 - fVar55;
          fVar54 = fVar55;
          if (0 < (int)uVar1) {
            uVar15 = 0;
            uVar35 = 0;
            do {
              lVar13 = lVar50 + uVar35 * lVar34 * 8;
              fVar54 = 0.0;
              fVar60 = 0.0;
              uVar37 = ~uVar38;
              uVar23 = uVar38 << 1 & ((int)(uVar38 << 1) >> 0x1f ^ 0xffffffffU) | 1;
              if (-1 < (int)uVar38) {
                do {
                  uVar52 = *(undefined8 *)
                            (lVar13 + (ulong)(uVar37 & ((int)uVar37 >> 0x1f ^ 0xffffffffU)) * 8);
                  fVar54 = fVar54 + (float)uVar52;
                  fVar60 = fVar60 + (float)((ulong)uVar52 >> 0x20);
                  uVar23 = uVar23 - 1;
                  uVar37 = uVar37 + 1;
                } while (uVar23 != 0);
              }
              if (0 < (int)uVar4) {
                uVar21 = uVar29;
                puVar16 = (undefined8 *)(lVar46 + uVar15 * 8);
                lVar41 = (long)(int)uVar38;
                uVar23 = ~uVar38;
                do {
                  iVar28 = (int)lVar41;
                  iVar56 = iVar28;
                  if (lVar34 <= lVar41) {
                    iVar56 = uVar4 - 1;
                  }
                  lVar41 = lVar41 + 1;
                  iVar31 = uVar4 - 1;
                  if (lVar41 < lVar34) {
                    iVar31 = iVar28 + 1;
                  }
                  uVar52 = *(undefined8 *)
                            (lVar50 + (ulong)((uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU)) +
                                             (int)(uVar35 * lVar34)) * 8);
                  uVar57 = *(undefined8 *)(lVar13 + (long)iVar56 * 8);
                  fVar58 = (float)uVar52;
                  fVar61 = (float)((ulong)uVar52 >> 0x20);
                  fVar54 = (fVar54 - fVar58) + (float)uVar57;
                  fVar60 = (fVar60 - fVar61) + (float)((ulong)uVar57 >> 0x20);
                  uVar52 = *(undefined8 *)(lVar13 + (long)iVar31 * 8);
                  *puVar16 = CONCAT44(fVar60 + (fVar61 + (float)((ulong)uVar52 >> 0x20)) * fVar59,
                                      fVar54 + (fVar58 + (float)uVar52) * fVar59);
                  uVar23 = uVar23 + 1;
                  uVar21 = uVar21 - 1;
                  puVar16 = puVar16 + 1;
                } while (uVar21 != 0);
              }
              uVar35 = uVar35 + 1;
              uVar15 = (ulong)((int)uVar15 + uVar4);
            } while (uVar35 != uVar49);
            fVar54 = fVar51 / *(float *)((long)param_1 + 0xac);
            uVar38 = (uint)fVar54;
            fVar54 = (float)(int)fVar54;
          }
          if (0 < (int)uVar4) {
            uVar35 = 0;
            fVar55 = fVar59 + fVar55 + 0.5;
            lVar50 = param_1[0x12];
            iVar56 = *(int *)((long)param_1 + 0x94);
            fVar59 = fVar51 / *(float *)(param_1 + 0x16) - fVar54;
            fVar51 = fVar54 + fVar59 + 0.5;
            fVar51 = 1.0 / ((fVar55 + fVar55) * (fVar51 + fVar51));
            uVar23 = uVar38 * uVar4;
            do {
              fVar54 = 0.0;
              fVar55 = 0.0;
              uVar39 = (uint)uVar35;
              uVar37 = uVar38 << 1 & ((int)(uVar38 << 1) >> 0x1f ^ 0xffffffffU) | 1;
              uVar43 = uVar4 * ~uVar38;
              if (-1 < (int)uVar38) {
                do {
                  uVar52 = *(undefined8 *)
                            (lVar46 + (ulong)((uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU)) +
                                             uVar39) * 8);
                  fVar54 = fVar54 + (float)uVar52;
                  fVar55 = fVar55 + (float)((ulong)uVar52 >> 0x20);
                  uVar37 = uVar37 - 1;
                  uVar43 = uVar43 + uVar4;
                } while (uVar37 != 0);
              }
              if (0 < (int)uVar1) {
                uVar15 = 0;
                iVar28 = (uVar1 - 1) * uVar4 + uVar39;
                uVar21 = (ulong)-(uVar4 + uVar4 * uVar38);
                lVar13 = (long)(int)uVar23;
                uVar45 = (ulong)uVar23;
                uVar25 = (ulong)(uVar23 + uVar4);
                iVar31 = uVar4 + 2;
                lVar41 = (long)(int)uVar23;
                do {
                  lVar41 = uVar29 + lVar41;
                  uVar37 = uVar39 + (int)uVar21;
                  uVar43 = uVar39;
                  if (-1 < (int)uVar37) {
                    uVar43 = uVar37;
                  }
                  iVar5 = uVar39 + (int)uVar45;
                  if ((long)(int)(uVar1 * uVar4) <= (long)(uVar35 + lVar13)) {
                    iVar5 = iVar28;
                  }
                  uVar42 = (ulong)(int)(uVar39 + iVar31);
                  if ((ulong)(param_1[2] - param_1[1] >> 4) <= uVar42) goto LAB_10abe80c8;
                  uVar52 = *(undefined8 *)(lVar46 + (ulong)uVar43 * 8);
                  fVar60 = (float)uVar52;
                  fVar58 = (float)((ulong)uVar52 >> 0x20);
                  uVar52 = *(undefined8 *)(lVar46 + (long)iVar5 * 8);
                  fVar54 = (fVar54 - fVar60) + (float)uVar52;
                  fVar55 = (fVar55 - fVar58) + (float)((ulong)uVar52 >> 0x20);
                  iVar5 = uVar39 + (int)uVar25;
                  if ((long)(int)(uVar1 * uVar4) <= (long)(uVar35 + lVar41)) {
                    iVar5 = iVar28;
                  }
                  pfVar36 = (float *)(lVar46 + (long)iVar5 * 8);
                  fVar61 = pfVar36[1];
                  *(float *)(param_1[1] + uVar42 * 0x10 + 8) =
                       (2.0 / (float)(int)lVar50) * (fVar54 + fVar59 * (fVar60 + *pfVar36)) * fVar51
                  ;
                  if ((ulong)(param_1[2] - param_1[1] >> 4) <= uVar42) goto LAB_10abe80c8;
                  uVar15 = uVar15 + 1;
                  uVar21 = uVar21 + uVar29;
                  iVar31 = iVar31 + uVar4 + 1;
                  uVar25 = uVar25 + uVar29;
                  *(float *)(param_1[1] + uVar42 * 0x10 + 0xc) =
                       (2.0 / (float)iVar56) * (fVar55 + fVar59 * (fVar58 + fVar61)) * -fVar51;
                  uVar45 = uVar45 + uVar29;
                  lVar13 = lVar13 + uVar29;
                } while (uVar49 != uVar15);
              }
              uVar35 = uVar35 + 1;
            } while (uVar35 != uVar29);
          }
          uVar38 = uVar4 + 1;
          uVar29 = (ulong)uVar38;
          if (0 < (int)uVar1) {
            uVar35 = 0;
            uVar21 = -(ulong)(uVar38 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4;
            uVar15 = uVar21;
            do {
              uVar45 = (long)(int)uVar38 + uVar35;
              uVar25 = uVar45 + 1;
              uVar42 = param_1[2] - param_1[1] >> 4;
              if ((uVar42 <= uVar25) || (uVar42 <= uVar45)) goto LAB_10abe80c8;
              lVar46 = param_1[1] + uVar15;
              *(undefined4 *)(lVar46 + 8) = *(undefined4 *)(lVar46 + 0x18);
              uVar45 = param_1[2] - param_1[1] >> 4;
              if ((uVar45 <= uVar25) || (uVar35 = uVar35 + (long)(int)uVar38, uVar45 <= uVar35))
              goto LAB_10abe80c8;
              lVar46 = param_1[1] + uVar15;
              uVar15 = uVar15 + uVar21;
              *(undefined4 *)(lVar46 + 0xc) = *(undefined4 *)(lVar46 + 0x1c);
              uVar49 = uVar49 - 1;
            } while (uVar49 != 0);
          }
          if (-1 < (int)uVar4) {
            lVar46 = 0;
            lVar50 = uVar29 * 0x10;
            do {
              if ((ulong)(param_1[2] - param_1[1] >> 4) <= uVar29) goto LAB_10abe80c8;
              lVar13 = param_1[1] + lVar46;
              *(undefined4 *)(lVar13 + 8) = *(undefined4 *)(lVar13 + lVar50 + 8);
              if ((ulong)(param_1[2] - param_1[1] >> 4) <= uVar29) goto LAB_10abe80c8;
              lVar13 = param_1[1] + lVar46;
              *(undefined4 *)(lVar13 + 0xc) = *(undefined4 *)(lVar13 + lVar50 + 0xc);
              lVar46 = lVar46 + 0x10;
              uVar29 = uVar29 + 1;
            } while (lVar50 != lVar46);
          }
          if (2 < *(uint *)(param_1 + 0x1d)) goto LAB_10abe80c8;
          iVar56 = *(int *)((long)param_1 + 0xec);
          lVar46 = param_1[(ulong)*(uint *)(param_1 + 0x1d) * 3 + 0x21];
          uVar49 = (param_1 + (ulong)*(uint *)(param_1 + 0x1d) * 3 + 0x21)[1] - lVar46 >> 4;
          if (uVar49 == (long)iVar56) {
            FUN_10abe64a0(param_1);
            if (2 < *(uint *)(param_1 + 0x1d)) goto LAB_10abe80c8;
            iVar56 = *(int *)((long)param_1 + 0xec);
            lVar46 = param_1[(ulong)*(uint *)(param_1 + 0x1d) * 3 + 0x21];
            uVar49 = (param_1 + (ulong)*(uint *)(param_1 + 0x1d) * 3 + 0x21)[1] - lVar46 >> 4;
          }
          if (uVar49 <= (ulong)(long)iVar56) goto LAB_10abe80c8;
          plVar30 = (long *)(lVar46 + (long)iVar56 * 0x10);
          lVar46 = *plVar30;
          plVar30 = (long *)plVar30[1];
          if (plVar30 == (long *)0x0) {
            *(int *)((long)param_1 + 0xec) = iVar56 + 1;
          }
          else {
            plVar19 = plVar30 + 1;
            do {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar10) {
                *plVar19 = *plVar19 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            *(int *)((long)param_1 + 0xec) = *(int *)((long)param_1 + 0xec) + 1;
            do {
              lVar50 = *plVar19;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar10) {
                *plVar19 = lVar50 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar50 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
            }
          }
          puVar16 = (undefined8 *)0x1;
          FUN_10a061940(lVar46);
          if (puVar16 == (undefined8 *)0x0) {
            plVar30 = (long *)0x0;
          }
          else {
            plVar30 = (long *)*puVar16;
          }
          iVar27 = iVar27 + 1;
          uVar4 = iVar27 + iVar27 * (int)lVar48;
          if (0 < (int)uVar4) {
            plVar19 = plVar30;
            (**(code **)(*plVar30 + 0x28))();
            lVar50 = param_1[1];
            (**(code **)(*plVar30 + 0xa0))(plVar30);
            (**(code **)(*plVar19 + 0x10))(plVar19,lVar50,(ulong)uVar4 << 4,0,plVar30);
          }
          plVar30 = param_2 + 4;
          FUN_10a190e68(plVar30,uVar6);
          plVar30[0x15] = lVar46;
          (**(code **)(*param_2 + 0x148))(param_2,puVar47);
          if (puVar12[0x44] != 0) {
            FUN_10a66ad54();
            FUN_10abe33e8(param_2,*puVar12,(long)plVar11 + 0x6c);
          }
        }
        *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + 1;
        puVar47 = puVar47 + 0x42;
      } while (puVar47 != puVar32);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10abe80bc:
  FUN_10a00946c(&UNK_10f6921f0);
LAB_10abe80c8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10abe80cc);
  (*pcVar9)();
}



/* Entry: 10abe8160; end: 10abe967b;  */

undefined8 * FUN_10abe8160(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  code ****ppppcVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  code *******pppppppcVar9;
  undefined8 *puVar10;
  code ******ppppppcVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ulong uVar14;
  code ******ppppppcVar15;
  long *plVar16;
  undefined **ppuVar17;
  code *******pppppppcVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  code ****ppppcVar26;
  code *****pppppcVar27;
  short sVar28;
  long lVar29;
  int iVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  code ******ppppppcVar35;
  undefined *puStack_150;
  code ******ppppppcStack_120;
  code ****ppppcStack_118;
  code ******ppppppcStack_110;
  code ****ppppcStack_108;
  code ******ppppppcStack_100;
  code ****ppppcStack_f8;
  ulong uStack_f0;
  undefined1 uStack_e8;
  code ******ppppppcStack_c0;
  code *****pppppcStack_b8;
  code *****pppppcStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = param_1;
  FUN_10aba1b90();
  *puVar20 = &PTR_DAT_110c548a8;
  puVar20[0x10c] = 0;
  puVar20[0x10b] = 0;
  puVar20[0x10e] = 0;
  puVar20[0x10d] = 0;
  puVar20[0x110] = 0;
  puVar20[0x10f] = 0;
  puVar20[0x112] = 0;
  puVar20[0x111] = 0;
  puVar20[0x114] = 0;
  puVar20[0x113] = 0;
  puVar8 = (undefined8 *)0x12f8;
  __Znwm();
  *puVar8 = &PTR_FUN_110c54878;
  puVar8[2] = 0;
  puVar8[1] = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  puVar8[8] = 0;
  puVar8[7] = 0;
  puVar8[10] = 0;
  puVar8[9] = 0;
  puVar8[0xc] = 0;
  puVar8[0xb] = 0;
  *(undefined4 *)(puVar8 + 0xd) = 3;
  plVar34 = puVar8 + 0xe;
  puVar8[0xf] = 0;
  *plVar34 = 0;
  puVar8[0x11] = 0;
  puVar8[0x10] = 0;
  puVar8[0x13] = 0;
  puVar8[0x12] = 0;
  puVar8[0x14] = 0;
  iVar30 = iRam00000001132ffd98;
  puVar8[0x1c] = 0;
  puVar8[0x1b] = 0;
  uVar21 = 0x10;
  if (iVar30 < 2) {
    uVar21 = 0x18;
  }
  *(undefined4 *)(puVar8 + 0x15) = uVar21;
  *(undefined8 *)((long)puVar8 + 0xb4) = 0;
  *(undefined8 *)((long)puVar8 + 0xac) = 0;
  *(undefined8 *)((long)puVar8 + 0xc4) = 0;
  *(undefined8 *)((long)puVar8 + 0xbc) = 0;
  *(undefined4 *)((long)puVar8 + 0xcc) = 0;
  *(undefined1 *)(puVar8 + 0x1a) = 1;
  puVar8[0x1e] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x20] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x22] = 0;
  puVar8[0x21] = 0;
  puVar8[0x24] = 0;
  puVar8[0x23] = 0;
  puVar8[0x26] = 0;
  puVar8[0x25] = 0;
  puVar8[0x28] = 0;
  puVar8[0x27] = 0;
  *(undefined1 *)(puVar8 + 0x2b) = 0;
  puVar8[0x29] = 0;
  puVar8[0x2a] = &PTR_FUN_110ba7b20;
  puVar8[0x2f] = 0;
  puVar8[0x2e] = 0;
  *(undefined8 *)((long)puVar8 + 0x184) = 0;
  *(undefined8 *)((long)puVar8 + 0x17c) = 0;
  *(undefined4 *)((long)puVar8 + 0x15c) = 0x3f800000;
  *(undefined4 *)(puVar8 + 0x2e) = 0x3f800000;
  *(undefined4 *)((long)puVar8 + 0x184) = 0x3f800000;
  puVar8[0x2d] = 0;
  puVar8[0x2c] = 0;
  pppppppcVar9 = (code *******)(puVar8 + 0x32);
  _bzero(pppppppcVar9,0x10dc);
  *(undefined8 *)((long)puVar8 + 0x12ec) = 0;
  *(undefined8 *)((long)puVar8 + 0x12e4) = 0;
  *(undefined8 *)((long)puVar8 + 0x12dc) = 0;
  *(undefined1 *)(puVar8 + 0x25b) = 1;
  FUN_10a14a3ec();
  FUN_10a14a59c(puVar8 + 0x2a);
  puVar10 = (undefined8 *)0x28;
  __Znwm();
  puVar10[4] = 0;
  puVar10[1] = 0;
  *puVar10 = 0;
  puVar10[3] = 0;
  puVar10[2] = 0;
  lVar22 = *plVar34;
  *plVar34 = (long)puVar10;
  if (lVar22 != 0) {
    FUN_10ac08ffc(lVar22);
  }
  if (0 < *(int *)(puVar8 + 0xd)) {
    iVar30 = 0;
    do {
      ppppppcVar11 = (code ******)0x28;
      __Znwm();
      ppppppcVar11[4] = (code *****)0x0;
      ppppppcVar11[1] = (code *****)0x0;
      *ppppppcVar11 = (code *****)0x0;
      ppppppcVar11[3] = (code *****)0x0;
      ppppppcVar11[2] = (code *****)0x0;
      pppppppcVar9 = &ppppppcStack_c0;
      ppppppcStack_c0 = ppppppcVar11;
      FUN_10abe629c(puVar8 + 0xf);
      if (ppppppcStack_c0 != (code ******)0x0) {
        FUN_10ac08ffc();
      }
      iVar30 = iVar30 + 1;
    } while (iVar30 < *(int *)(puVar8 + 0xd));
  }
  param_1[0x115] = puVar8;
  uVar12 = 0xe8;
  __Znwm();
  FUN_10abfba68();
  param_1[0x116] = uVar12;
  puVar8 = (undefined8 *)0x100;
  __Znwm();
  FUN_10abfba68();
  *puVar8 = &PTR_FUN_110c55308;
  puVar8[0x1f] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1d] = puVar8 + 0x1e;
  param_1[0x117] = puVar8;
  uVar12 = param_1[0x115];
  puVar8 = (undefined8 *)0x140;
  __Znwm();
  FUN_10abe5330();
  *puVar8 = &PTR_DAT_110c54818;
  puVar8[0x1f] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x21] = 0;
  puVar8[0x20] = 0;
  puVar8[0x23] = 0;
  puVar8[0x22] = 0;
  puVar8[0x25] = 0;
  puVar8[0x24] = 0;
  puVar8[0x26] = 0;
  *(undefined4 *)(puVar8 + 0x27) = 4;
  puVar8[0x1d] = uVar12;
  param_1[0x118] = puVar8;
  uVar12 = param_1[0x115];
  puVar8 = (undefined8 *)0x158;
  __Znwm();
  FUN_10abe5330();
  puVar8[0x26] = 0;
  puVar8[0x23] = 0;
  puVar8[0x22] = 0;
  puVar8[0x25] = 0;
  puVar8[0x24] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x21] = 0;
  puVar8[0x20] = 0;
  *(undefined4 *)(puVar8 + 0x27) = 4;
  puVar8[0x1d] = uVar12;
  *puVar8 = &PTR_DAT_110c54e28;
  puVar8[0x28] = 0;
  puVar8[0x2a] = 0;
  puVar8[0x29] = 0;
  param_1[0x119] = puVar8;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  puVar8 = (undefined8 *)0x90;
  __Znwm();
  *puVar8 = &PTR_FUN_110c54e00;
  plVar16 = puVar8 + 1;
  puVar8[2] = 0;
  *plVar16 = 0;
  plVar34 = puVar8 + 4;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  puVar8[8] = 0;
  puVar8[7] = 0;
  puVar8[10] = 0;
  puVar8[9] = 0;
  puVar8[0xb] = 0;
  puVar8[0xd] = 6;
  puVar8[0xc] = 100;
  puVar8[0xe] = 4;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  pbVar13 = (byte *)0x113835028;
  FUN_10a1c6264();
  bRam0000000113306dd8 = *pbVar13 & 1;
  uVar23 = puVar8[0xc];
  uVar14 = uVar23 * 2;
  lVar22 = puVar8[4];
  uVar25 = puVar8[6] - lVar22 >> 4;
  if (uVar14 < uVar25 || uVar14 - uVar25 == 0) {
LAB_10abe8518:
    lVar22 = puVar8[1];
    if ((ulong)(puVar8[3] - lVar22 >> 4) < uVar14) {
      if (uVar14 >> 0x3c != 0) {
        FUN_10ac00660();
        goto LAB_10abe9244;
      }
      lVar32 = puVar8[2];
      plStack_a0 = plVar16;
      FUN_10ac00674();
      lVar22 = uVar14 + (lVar32 - lVar22);
      lVar32 = lVar22 - (puVar8[2] - puVar8[1]);
      _memcpy(lVar32);
      ppppppcStack_c0 = (code ******)puVar8[1];
      puVar8[1] = lVar32;
      puVar8[2] = lVar22;
      uStack_a8 = puVar8[3];
      puVar8[3] = uVar14 + (long)pppppppcVar9 * 0x10;
      pppppcStack_b8 = (code *****)ppppppcStack_c0;
      pppppcStack_b0 = (code *****)ppppppcStack_c0;
      func_0x00010ac006a8(&ppppppcStack_c0);
      uVar23 = puVar8[0xc];
    }
    uVar25 = 0;
    if (uVar23 != 0) {
      uVar14 = 0;
      puStack_150 = &UNK_10f660f7a;
      do {
        FUN_10a199aa4(&ppppppcStack_100,&ppppppcStack_c0);
        if (*(int *)((long)ppppppcStack_100 + 0x1fc) != 1) {
          if (0 < *(int *)((long)ppppppcStack_100 + 0x1fc)) {
            *(undefined4 *)((long)ppppppcStack_100 + 0x1fc) = 1;
            *(undefined1 *)((long)ppppppcStack_100 + 0x1ec) = 1;
            goto LAB_10abe85d4;
          }
LAB_10abe921c:
          FUN_10a00946c(puStack_150);
          goto LAB_10abe9244;
        }
LAB_10abe85d4:
        if (*(int *)(ppppppcStack_100 + 0x3f) != 1) {
          if (*(int *)(ppppppcStack_100 + 0x3f) < 1) {
            puStack_150 = &UNK_10f660f58;
            goto LAB_10abe921c;
          }
          *(undefined4 *)(ppppppcStack_100 + 0x3f) = 1;
          *(undefined1 *)((long)ppppppcStack_100 + 0x1ec) = 1;
        }
        bVar7 = false;
        if ((*(float *)(ppppppcStack_100 + 0x41) == 2.0) &&
           (bVar7 = false, !NAN(*(float *)((long)ppppppcStack_100 + 0x20c)))) {
          bVar7 = *(float *)((long)ppppppcStack_100 + 0x20c) == 2.0;
        }
        if (!bVar7) {
          ppppppcStack_100[0x41] = (code *****)0x4000000040000000;
          *(undefined1 *)((long)ppppppcStack_100 + 0x1ec) = 1;
        }
        ppppppcStack_c0 = (code ******)0x0;
        pppppppcVar9 = &ppppppcStack_c0;
        FUN_10ab149f4(&ppppppcStack_110,&ppppppcStack_120,pppppppcVar9,&ppppppcStack_100);
        if (*(char *)((long)ppppppcStack_110 + 0xb9) != '\x01') {
          *(undefined1 *)((long)ppppppcStack_110 + 0xb9) = 1;
          (*(code *)(*ppppppcStack_110)[0x14])();
        }
        ppppcVar5 = ppppcStack_f8;
        ppppppcVar11 = ppppppcStack_100;
        ppppppcStack_120 = ppppppcStack_100;
        ppppcStack_118 = ppppcStack_f8;
        if ((code *****)ppppcStack_f8 != (code *****)0x0) {
          pppppcVar27 = (code *****)(ppppcStack_f8 + 1);
          do {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppcVar27,0x10);
            if (bVar7) {
              *pppppcVar27 = (code ****)((long)*pppppcVar27 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar31 = (long *)puVar8[5];
        if (plVar31 < (long *)puVar8[6]) {
          *plVar31 = (long)ppppppcStack_100;
          plVar31[1] = (long)ppppcStack_f8;
          plVar31 = plVar31 + 2;
        }
        else {
          lVar22 = (long)plVar31 - *plVar34;
          uVar25 = (lVar22 >> 4) + 1;
          if (uVar25 >> 0x3c != 0) {
            FUN_10ac061c0();
            goto LAB_10abe9244;
          }
          uVar24 = (long)puVar8[6] - *plVar34;
          uVar23 = (long)uVar24 >> 3;
          if (uVar23 <= uVar25) {
            uVar23 = uVar25;
          }
          if (0x7fffffffffffffef < uVar24) {
            uVar23 = 0xfffffffffffffff;
          }
          plStack_a0 = plVar34;
          FUN_10ac061d4();
          plVar1 = (long *)(uVar23 + lVar22);
          lVar22 = (long)pppppppcVar9 * 0x10;
          *plVar1 = (long)ppppppcVar11;
          plVar1[1] = (long)ppppcVar5;
          plVar31 = plVar1 + 2;
          pppppppcVar9 = (code *******)puVar8[4];
          lVar32 = (long)plVar1 - (puVar8[5] - (long)pppppppcVar9);
          _memcpy(lVar32);
          ppppppcStack_c0 = (code ******)puVar8[4];
          puVar8[4] = lVar32;
          puVar8[5] = plVar31;
          uStack_a8 = puVar8[6];
          puVar8[6] = uVar23 + lVar22;
          pppppcStack_b8 = (code *****)ppppppcStack_c0;
          pppppcStack_b0 = (code *****)ppppppcStack_c0;
          func_0x00010ac06208(&ppppppcStack_c0);
        }
        ppppcVar5 = ppppcStack_108;
        ppppppcVar11 = ppppppcStack_110;
        puVar8[5] = plVar31;
        ppppppcStack_120 = ppppppcStack_110;
        ppppcStack_118 = ppppcStack_108;
        if ((code *****)ppppcStack_108 != (code *****)0x0) {
          pppppcVar27 = (code *****)(ppppcStack_108 + 1);
          do {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppcVar27,0x10);
            if (bVar7) {
              *pppppcVar27 = (code ****)((long)*pppppcVar27 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar31 = (long *)puVar8[2];
        if (plVar31 < (long *)puVar8[3]) {
          *plVar31 = (long)ppppppcStack_110;
          plVar31[1] = (long)ppppcStack_108;
          plVar31 = plVar31 + 2;
        }
        else {
          lVar22 = (long)plVar31 - *plVar16;
          uVar25 = (lVar22 >> 4) + 1;
          if (uVar25 >> 0x3c != 0) {
            FUN_10ac00660();
            goto LAB_10abe9244;
          }
          uVar24 = (long)puVar8[3] - *plVar16;
          uVar23 = (long)uVar24 >> 3;
          if (uVar23 <= uVar25) {
            uVar23 = uVar25;
          }
          if (0x7fffffffffffffef < uVar24) {
            uVar23 = 0xfffffffffffffff;
          }
          plStack_a0 = plVar16;
          FUN_10ac00674();
          plVar1 = (long *)(uVar23 + lVar22);
          *plVar1 = (long)ppppppcVar11;
          plVar1[1] = (long)ppppcVar5;
          plVar31 = plVar1 + 2;
          lVar22 = (long)plVar1 - (puVar8[2] - puVar8[1]);
          _memcpy(lVar22);
          ppppppcStack_c0 = (code ******)puVar8[1];
          puVar8[1] = lVar22;
          puVar8[2] = plVar31;
          uStack_a8 = puVar8[3];
          puVar8[3] = uVar23 + (long)pppppppcVar9 * 0x10;
          pppppcStack_b8 = (code *****)ppppppcStack_c0;
          pppppcStack_b0 = (code *****)ppppppcStack_c0;
          func_0x00010ac006a8(&ppppppcStack_c0);
        }
        ppppcVar5 = ppppcStack_108;
        puVar8[2] = plVar31;
        if ((code *****)ppppcStack_108 != (code *****)0x0) {
          pppppcVar27 = (code *****)(ppppcStack_108 + 1);
          do {
            ppppcVar26 = *pppppcVar27;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppcVar27,0x10);
            if (bVar7) {
              *pppppcVar27 = (code ****)((long)ppppcVar26 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppcVar26 == (code ****)0x0) {
            (*(code *)(*ppppcStack_108)[2])(ppppcStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar5);
          }
        }
        ppppcVar5 = ppppcStack_f8;
        if ((code *****)ppppcStack_f8 != (code *****)0x0) {
          pppppcVar27 = (code *****)(ppppcStack_f8 + 1);
          do {
            ppppcVar26 = *pppppcVar27;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppcVar27,0x10);
            if (bVar7) {
              *pppppcVar27 = (code ****)((long)ppppcVar26 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppcVar26 == (code ****)0x0) {
            (*(code *)(*ppppcStack_f8)[2])(ppppcStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar5);
          }
        }
        uVar14 = uVar14 + 1;
        uVar25 = puVar8[0xc];
      } while (uVar14 < uVar25);
    }
    func_0x000108262984(puVar8 + 0xf,puVar8[0xd] * uVar25);
    lVar22 = puVar8[0xc];
    lVar32 = puVar8[0xd];
    uVar25 = lVar22 * lVar32;
    if (uVar25 != 0) {
      uVar23 = 0;
      sVar28 = 0;
      iVar30 = 0;
      lVar33 = puVar8[0xf];
      uVar14 = puVar8[0x10] - lVar33 >> 1;
      do {
        if (uVar14 <= uVar23) goto LAB_10abe9244;
        *(short *)(lVar33 + uVar23 * 2) = sVar28;
        lVar29 = (long)(short)iVar30;
        if (uVar14 <= lVar29 + 1U) goto LAB_10abe9244;
        *(short *)(lVar33 + (lVar29 + 1U) * 2) = sVar28 + 1;
        if (uVar14 <= lVar29 + 2U) goto LAB_10abe9244;
        *(short *)(lVar33 + (lVar29 + 2U) * 2) = sVar28 + 2;
        if (uVar14 <= lVar29 + 3U) goto LAB_10abe9244;
        *(short *)(lVar33 + (lVar29 + 3U) * 2) = sVar28 + 2;
        if (uVar14 <= lVar29 + 4U) goto LAB_10abe9244;
        *(short *)(lVar33 + (lVar29 + 4U) * 2) = sVar28 + 1;
        if (uVar14 <= lVar29 + 5U) goto LAB_10abe9244;
        *(short *)(lVar33 + (lVar29 + 5U) * 2) = sVar28 + 3;
        sVar28 = sVar28 + *(short *)(puVar8 + 0xe);
        iVar30 = iVar30 + (int)lVar32;
        sVar4 = (short)iVar30;
        uVar23 = (ulong)sVar4;
      } while ((ulong)(long)sVar4 <= uVar25 && uVar25 - (long)sVar4 != 0);
    }
    if (lVar22 != 0) {
      uVar25 = 0;
      do {
        if ((ulong)((long)(puVar8[2] - puVar8[1]) >> 4) <= uVar25) goto LAB_10abe9244;
        puVar10 = (undefined8 *)(puVar8[1] + uVar25 * 0x10);
        ppppppcVar35 = (code ******)puVar10[1];
        ppppppcVar11 = (code ******)*puVar10;
        if (ppppppcVar35 != (code ******)0x0) {
          ppppppcVar15 = ppppppcVar35 + 1;
          do {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppcVar15,0x10);
            if (bVar7) {
              *ppppppcVar15 = (code *****)((long)*ppppppcVar15 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppppppcVar15 = ppppppcVar11;
        ppppppcStack_c0 = ppppppcVar11;
        pppppcStack_b8 = (code *****)ppppppcVar35;
        (*(code *)(*ppppppcVar11)[0x12])();
        (*ppppppcVar15)[0x1d] = (code ****)0x1;
        if ((ulong)((long)(puVar8[5] - puVar8[4]) >> 4) <= uVar25) goto LAB_10abe9244;
        lVar32 = *(long *)(puVar8[4] + uVar25 * 0x10);
        plVar34 = (long *)(lVar32 + 0x28);
        lVar22 = *plVar34;
        uVar23 = puVar8[0xd] * puVar8[0xc] * 2;
        uVar14 = *(long *)(lVar32 + 0x30) - lVar22;
        if (uVar23 < uVar14 || uVar23 - uVar14 == 0) {
          if (uVar23 < uVar14) {
            *(ulong *)(lVar32 + 0x30) = lVar22 + uVar23;
          }
        }
        else {
          func_0x000107c27d58(plVar34,uVar23 - uVar14);
          lVar22 = *plVar34;
        }
        _memcpy(lVar22,puVar8[0xf],uVar23);
        if ((ulong)((long)(puVar8[5] - puVar8[4]) >> 4) <= uVar25) goto LAB_10abe9244;
        lVar22 = *(long *)(puVar8[4] + uVar25 * 0x10);
        lVar32 = *(long *)(lVar22 + 0x10);
        uVar14 = puVar8[0xe] * (ulong)*(uint *)(lVar22 + 0xf0) * puVar8[0xc];
        uVar23 = *(long *)(lVar22 + 0x18) - lVar32;
        if (uVar14 < uVar23 || uVar14 - uVar23 == 0) {
          if (uVar14 < uVar23) {
            *(ulong *)(lVar22 + 0x18) = lVar32 + uVar14;
          }
        }
        else {
          func_0x000107c27d58((long *)(lVar22 + 0x10),uVar14 - uVar23);
        }
        puVar10 = (undefined8 *)0x1;
        FUN_10a061940(ppppppcVar11);
        if (puVar10 == (undefined8 *)0x0) {
          plVar34 = (long *)0x0;
        }
        else {
          plVar34 = (long *)*puVar10;
        }
        plVar16 = plVar34;
        (**(code **)(*plVar34 + 0x30))();
        lVar22 = puVar8[0xf];
        lVar32 = puVar8[0x10];
        (**(code **)(*plVar34 + 0xb0))(plVar34);
        (**(code **)(*plVar16 + 0x10))(plVar16,lVar22,lVar32 - lVar22,0,plVar34);
        if (ppppppcVar35 != (code ******)0x0) {
          ppppppcVar11 = ppppppcVar35 + 1;
          do {
            pppppcVar27 = *ppppppcVar11;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
            if (bVar7) {
              *ppppppcVar11 = (code *****)((long)pppppcVar27 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppppcVar27 == (code *****)0x0) {
            (*(code *)(*ppppppcVar35)[2])(ppppppcVar35);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar35);
          }
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < (ulong)puVar8[0xc]);
    }
    param_1[0x11c] = puVar8;
    puVar8 = (undefined8 *)0x60;
    __Znwm();
    *puVar8 = &PTR_DAT_110c54f70;
    puVar8[2] = 0;
    puVar8[1] = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 5) = 0x3f800000;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    param_1[0x11d] = puVar8;
    param_1[0x11f] = 0;
    param_1[0x11e] = 0;
    param_1[0x121] = 0;
    param_1[0x120] = 0;
    param_1[0x123] = 0;
    param_1[0x122] = 0;
    param_1[0x125] = 0;
    param_1[0x124] = 0;
    param_1[0x127] = 0;
    param_1[0x126] = 0;
    param_1[0x129] = 0;
    param_1[0x128] = 0;
    param_1[299] = 0;
    param_1[0x12a] = 0;
    param_1[0x12d] = 0;
    param_1[300] = 0;
    param_1[0x12f] = 0;
    param_1[0x12e] = 0;
    *(undefined8 *)((long)param_1 + 0x97d) = 0;
    func_0x000107c2b054(param_1 + 0x131,&UNK_10f69b436);
    param_1[0x134] = 0;
    func_0x00010a1e4978(param_1 + 0x130);
    ppuVar17 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    ppppppcStack_c0 = (code ******)&UNK_10f63b699;
    pppppcStack_b8 = (code *****)0x28;
    if (*ppuVar17 == (undefined *)0x0) {
      FUN_10a0edfc4(&ppppppcStack_c0);
      goto LAB_10abe9244;
    }
    param_1[0x135] = *(undefined8 *)(*ppuVar17 + 8);
    param_1[0x137] = 0;
    param_1[0x136] = 0;
    *(undefined2 *)(param_1 + 0x138) = 0xffff;
    plVar34 = param_1 + 0x139;
    param_1[0x148] = 0;
    param_1[0x147] = 0;
    param_1[0x13a] = 0;
    *plVar34 = 0;
    param_1[0x13c] = 0;
    param_1[0x13b] = 0;
    param_1[0x13e] = 0;
    param_1[0x13d] = 0;
    param_1[0x140] = 0;
    param_1[0x13f] = 0;
    param_1[0x142] = 0;
    param_1[0x141] = 0;
    param_1[0x144] = 0;
    param_1[0x143] = 0;
    param_1[0x145] = 0;
    param_1[0x146] = param_1 + 0x147;
    param_1[0x14a] = 0;
    param_1[0x149] = 0;
    param_1[0x14c] = 0;
    param_1[0x14b] = 0;
    *(undefined4 *)(param_1 + 0x14d) = 0x3f800000;
    param_1[0x14f] = 0;
    param_1[0x14e] = 0;
    param_1[0x151] = 0;
    param_1[0x150] = 0;
    *(undefined4 *)(param_1 + 0x152) = 0x3f800000;
    *(undefined4 *)((long)param_1 + 0xac4) = 0;
    *(undefined2 *)(param_1 + 0x159) = 0;
    param_1[0x15b] = 0;
    param_1[0x15a] = 0;
    param_1[0x15d] = 0;
    param_1[0x15c] = 0;
    param_1[0x154] = 0;
    param_1[0x153] = 0;
    param_1[0x156] = 0;
    param_1[0x155] = 0;
    *(undefined8 *)((long)param_1 + 0xab9) = 0;
    *(undefined8 *)((long)param_1 + 0xab1) = 0;
    *(undefined4 *)(param_1 + 0x15e) = 0x3f800000;
    *(undefined2 *)(param_1 + 0x15f) = 0x100;
    *(undefined8 *)((long)param_1 + 0xafc) = 0x7fffffff7fffffff;
    *(undefined8 *)((long)param_1 + 0xb14) = 0;
    *(undefined8 *)((long)param_1 + 0xb0c) = 0;
    *(undefined8 *)((long)param_1 + 0xb04) = 0;
    *(undefined2 *)((long)param_1 + 0xb1c) = 1;
    *(undefined1 *)((long)param_1 + 0xb1e) = 1;
    puVar8 = param_1 + 0x164;
    puVar10 = param_1 + 0x167;
    param_1[0x165] = 0;
    param_1[0x164] = 0;
    param_1[0x167] = 0;
    param_1[0x166] = 0;
    param_1[0x169] = 0;
    param_1[0x168] = 0;
    ppppppcStack_c0 = (code ******)0x0;
    pppppcStack_b8 = (code *****)0x0;
    pppppcStack_b0 = (code *****)0x0;
    FUN_10a36f1ec(puVar8,6);
    FUN_10a36f1ec(puVar10,6);
    iVar30 = 0;
    do {
      func_0x000107c2b054(&ppppppcStack_100,&UNK_10f651dd2);
      if ((long)pppppcStack_b0 < 0) {
        __ZdlPv(ppppppcStack_c0);
      }
      pppppcStack_b8 = (code *****)ppppcStack_f8;
      ppppppcStack_c0 = ppppppcStack_100;
      pppppcStack_b0 = (code *****)uStack_f0;
      __ZNSt3__19to_stringEi(&ppppppcStack_100,iVar30);
      pppppcVar27 = (code *****)ppppcStack_f8;
      pppppppcVar9 = (code *******)ppppppcStack_100;
      if (-1 < (long)uStack_f0) {
        pppppcVar27 = (code *****)(uStack_f0 >> 0x38);
        pppppppcVar9 = &ppppppcStack_100;
      }
      pppppppcVar18 = &ppppppcStack_c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppcVar18,pppppppcVar9,pppppcVar27);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
      uVar25 = param_1[0x165];
      if (uVar25 < (ulong)param_1[0x166]) {
        FUN_10a0d09b4(uVar25);
        puVar19 = (undefined8 *)(uVar25 + 0x20);
        param_1[0x165] = puVar19;
      }
      else {
        puVar19 = puVar8;
        FUN_10abdae94(puVar8,pppppppcVar18);
      }
      param_1[0x165] = puVar19;
      if ((long)uStack_f0 < 0) {
        __ZdlPv(ppppppcStack_100);
      }
      func_0x000107c2b054(&ppppppcStack_100,&UNK_10f651dd2);
      if ((long)pppppcStack_b0 < 0) {
        __ZdlPv(ppppppcStack_c0);
      }
      pppppcStack_b8 = (code *****)ppppcStack_f8;
      ppppppcStack_c0 = ppppppcStack_100;
      pppppcStack_b0 = (code *****)uStack_f0;
      __ZNSt3__19to_stringEi(&ppppppcStack_100,iVar30);
      pppppcVar27 = (code *****)ppppcStack_f8;
      pppppppcVar9 = (code *******)ppppppcStack_100;
      if (-1 < (long)uStack_f0) {
        pppppcVar27 = (code *****)(uStack_f0 >> 0x38);
        pppppppcVar9 = &ppppppcStack_100;
      }
      pppppppcVar18 = &ppppppcStack_c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppcVar18,pppppppcVar9,pppppcVar27);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
      uVar25 = param_1[0x168];
      if (uVar25 < (ulong)param_1[0x169]) {
        FUN_10a0d09b4(uVar25);
        puVar19 = (undefined8 *)(uVar25 + 0x20);
        param_1[0x168] = puVar19;
      }
      else {
        puVar19 = puVar10;
        FUN_10abdae94(puVar10,pppppppcVar18);
      }
      param_1[0x168] = puVar19;
      if ((long)uStack_f0 < 0) {
        __ZdlPv(ppppppcStack_100);
      }
      iVar30 = iVar30 + 1;
    } while (iVar30 != 6);
    if ((long)pppppcStack_b0 < 0) {
      __ZdlPv(ppppppcStack_c0);
    }
    *(undefined2 *)(param_1 + 0x16a) = 0;
    *(undefined1 *)((long)param_1 + 0xb52) = 0;
    param_1[0x16b] = 0;
    param_1[0x1a0] = 0;
    param_1[0x1a2] = 0;
    param_1[0x1a1] = 0;
    param_1[0x1a3] = 0xffffffffffffffff;
    param_1[0x1a4] = 0xffffffffffffffff;
    param_1[0x1a5] = 0;
    param_1[0x1a7] = 0;
    param_1[0x1a6] = 0;
    param_1[0x1a8] = 0xffffffffffffffff;
    param_1[0x1a9] = 0xffffffffffffffff;
    param_1[0x1aa] = 0x3f800000;
    param_1[0x1ab] = 0;
    param_1[0x10b] = param_2;
    FUN_10a24435c();
    func_0x00010a04a780(plVar34,param_2);
    uStack_98 = 0;
    plStack_a0 = (long *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    pppppcStack_b0 = (code *****)0x0;
    ppppppcStack_c0 = (code ******)&UNK_1053a6a3c;
    pppppcStack_b8 = (code *****)&PTR_DAT_110ae9180;
    lVar22 = *plVar34;
    if (((lVar22 != 0) && (*(long **)(lVar22 + 0x228) != *(long **)(lVar22 + 0x230))) &&
       (lVar22 = **(long **)(lVar22 + 0x228), lVar22 != 0)) {
      uStack_f0 = lVar22 + 0x40;
      uVar2 = *(ushort *)(lVar22 + 0x129);
      *(ushort *)(lVar22 + 0x129) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
      *(ushort *)(lVar22 + 0x70) =
           *(ushort *)(lVar22 + 0x70) & 0xff80 | *(ushort *)(lVar22 + 0x70) + 1 & 0x7f;
      uStack_e8 = 1;
      ppppppcStack_100 = (code ******)FUN_10a1d3648;
      ppppcStack_f8 = (code ****)&PTR_FUN_110bad818;
      func_0x00010a108320(&ppppppcStack_c0,&ppppppcStack_100);
      FUN_10a044790(&ppppppcStack_100);
      (*(code *)*ppppcStack_f8)(&ppppcStack_f8);
      ppppppcStack_100 = (code ******)(lVar22 + 0x188);
      ppppcStack_f8 = (code ****)((ulong)ppppcStack_f8 & 0xffffffffffffff00);
      uVar12 = *(undefined8 *)(lVar22 + 0x188);
      FUN_10a7a6720(&ppppppcStack_100);
      param_1[0x13b] = uVar12;
    }
    uVar12 = puVar20[0x10b];
    FUN_10a244214(uVar12);
    func_0x00010a04a780(param_1 + 0x13c,uVar12);
    puVar20 = (undefined8 *)0x168;
    __Znwm();
    puVar20[0x2c] = 0;
    puVar20[0x29] = 0;
    puVar20[0x28] = 0;
    puVar20[0x2b] = 0;
    puVar20[0x2a] = 0;
    puVar20[0x25] = 0;
    puVar20[0x24] = 0;
    puVar20[0x27] = 0;
    puVar20[0x26] = 0;
    puVar20[0x21] = 0;
    puVar20[0x20] = 0;
    puVar20[0x23] = 0;
    puVar20[0x22] = 0;
    puVar20[0x1d] = 0;
    puVar20[0x1c] = 0;
    puVar20[0x1f] = 0;
    puVar20[0x1e] = 0;
    puVar20[0x19] = 0;
    puVar20[0x18] = 0;
    puVar20[0x1b] = 0;
    puVar20[0x1a] = 0;
    puVar20[0x15] = 0;
    puVar20[0x14] = 0;
    puVar20[0x17] = 0;
    puVar20[0x16] = 0;
    puVar20[0x11] = 0;
    puVar20[0x10] = 0;
    puVar20[0x13] = 0;
    puVar20[0x12] = 0;
    puVar20[0xd] = 0;
    puVar20[0xc] = 0;
    puVar20[0xf] = 0;
    puVar20[0xe] = 0;
    puVar20[9] = 0;
    puVar20[8] = 0;
    puVar20[0xb] = 0;
    puVar20[10] = 0;
    puVar20[5] = 0;
    puVar20[4] = 0;
    puVar20[7] = 0;
    puVar20[6] = 0;
    puVar20[1] = 0;
    *puVar20 = 0;
    puVar20[3] = 0;
    puVar20[2] = 0;
    *(undefined1 *)((long)puVar20 + 2) = 3;
    *(undefined8 *)((long)puVar20 + 4) = 0;
    *(undefined4 *)((long)puVar20 + 0xb) = 0;
    puVar20[2] = &PTR_FUN_110c54d98;
    puVar20[0xd] = 0;
    puVar20[0xc] = 0;
    puVar20[0xf] = 0;
    puVar20[0xe] = 0;
    *(undefined8 *)((long)puVar20 + 0x81) = 0;
    *(undefined8 *)((long)puVar20 + 0x79) = 0;
    puVar20[0x18] = 0;
    puVar20[0x17] = 0;
    puVar20[0x1a] = 0;
    puVar20[0x19] = 0;
    puVar20[0x1c] = 0;
    puVar20[0x1b] = 0;
    lVar22 = param_1[0x137];
    param_1[0x137] = puVar20;
    if (lVar22 != 0) {
      FUN_10ac09078(lVar22);
    }
    puVar20 = (undefined8 *)0xc8;
    __Znwm();
    puVar20[9] = 0;
    puVar20[8] = 0;
    puVar20[0xb] = 0;
    puVar20[10] = 0;
    puVar20[0xd] = 0;
    puVar20[0xc] = 0;
    puVar20[0xf] = 0;
    puVar20[0xe] = 0;
    puVar20[0x11] = 0;
    puVar20[0x10] = 0;
    puVar20[5] = 0;
    puVar20[4] = 0;
    puVar20[7] = 0;
    puVar20[6] = 0;
    puVar20[1] = 0;
    *puVar20 = 0;
    puVar20[3] = 0;
    puVar20[2] = 0;
    *(undefined2 *)((long)puVar20 + 4) = 0xffff;
    *(undefined4 *)(puVar20 + 1) = 0xffffffff;
    *(undefined2 *)((long)puVar20 + 0xc) = 0xffff;
    *(undefined4 *)(puVar20 + 7) = 0;
    *(undefined2 *)((long)puVar20 + 0x3c) = 0x100;
    puVar20[10] = 0;
    puVar20[9] = 0;
    puVar20[0xc] = 0;
    puVar20[0xb] = 0;
    *(undefined8 *)((long)puVar20 + 0x69) = 0;
    *(undefined8 *)((long)puVar20 + 0x61) = 0;
    puVar20[0x11] = 1;
    puVar20[0x12] = 0;
    puVar20[0x18] = 0;
    puVar20[0x17] = 0;
    puVar20[0x16] = 0;
    puVar20[0x15] = 0;
    puVar20[0x14] = 0;
    puVar20[0x13] = 0;
    lVar22 = param_1[0x136];
    param_1[0x136] = puVar20;
    if (lVar22 != 0) {
      func_0x00010ac09030(lVar22);
    }
    lVar22 = 0x78;
    __Znwm();
    FUN_10aba6ef0();
    lVar32 = param_1[0x154];
    param_1[0x154] = lVar22;
    if (lVar32 != 0) {
      FUN_10ac090e8();
      lVar22 = param_1[0x154];
    }
    uVar12 = 0xd8;
    __Znwm();
    FUN_10aba75e8();
    lVar32 = *(long *)(lVar22 + 8);
    if ((ulong)(*(long *)(lVar22 + 0x10) - lVar32) < 9) goto LAB_10abe9244;
    plVar34 = *(long **)(lVar32 + 8);
    *(undefined8 *)(lVar32 + 8) = uVar12;
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x38))();
    }
    lVar32 = param_1[0x154];
    uVar12 = 0x98;
    __Znwm();
    FUN_10abb213c();
    lVar22 = *(long *)(lVar32 + 8);
    if ((ulong)(*(long *)(lVar32 + 0x10) - lVar22) < 0x19) goto LAB_10abe9244;
    plVar34 = *(long **)(lVar22 + 0x18);
    *(undefined8 *)(lVar22 + 0x18) = uVar12;
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x38))();
    }
    lVar32 = param_1[0x154];
    uVar12 = 0xf0;
    __Znwm();
    FUN_10abae274();
    lVar22 = *(long *)(lVar32 + 8);
    if ((ulong)(*(long *)(lVar32 + 0x10) - lVar22) < 0x11) goto LAB_10abe9244;
    plVar34 = *(long **)(lVar22 + 0x10);
    *(undefined8 *)(lVar22 + 0x10) = uVar12;
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x38))();
    }
    lVar32 = param_1[0x154];
    uVar12 = 0xf8;
    __Znwm();
    FUN_10abafcf8();
    lVar22 = *(long *)(lVar32 + 8);
    if ((ulong)(*(long *)(lVar32 + 0x10) - lVar22) < 0x21) goto LAB_10abe9244;
    plVar34 = *(long **)(lVar22 + 0x20);
    *(undefined8 *)(lVar22 + 0x20) = uVar12;
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x38))();
    }
    lVar32 = param_1[0x154];
    uVar12 = 0xb8;
    __Znwm();
    FUN_10abb18e8();
    lVar22 = *(long *)(lVar32 + 8);
    if ((ulong)(*(long *)(lVar32 + 0x10) - lVar22) < 0x29) goto LAB_10abe9244;
    plVar34 = *(long **)(lVar22 + 0x28);
    *(undefined8 *)(lVar22 + 0x28) = uVar12;
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x38))();
    }
    lVar32 = param_1[0x154];
    uVar12 = 0x118;
    __Znwm();
    FUN_10abaad40();
    lVar22 = *(long *)(lVar32 + 8);
    if ((ulong)(*(long *)(lVar32 + 0x10) - lVar22) < 0x31) goto LAB_10abe9244;
    plVar34 = *(long **)(lVar22 + 0x30);
    *(undefined8 *)(lVar22 + 0x30) = uVar12;
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x38))();
    }
    FUN_10a044790(&ppppppcStack_c0);
    (*(code *)*pppppcStack_b8)(&pppppcStack_b8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  else if ((uVar23 & 0x7fffffffffffffff) >> 0x3b == 0) {
    lVar32 = puVar8[5];
    plStack_a0 = plVar34;
    FUN_10ac061d4();
    lVar32 = uVar14 + (lVar32 - lVar22);
    lVar22 = (long)pppppppcVar9 * 0x10;
    pppppppcVar9 = (code *******)puVar8[4];
    lVar33 = lVar32 - (puVar8[5] - (long)pppppppcVar9);
    _memcpy(lVar33);
    ppppppcStack_c0 = (code ******)puVar8[4];
    puVar8[4] = lVar33;
    puVar8[5] = lVar32;
    uStack_a8 = puVar8[6];
    puVar8[6] = uVar14 + lVar22;
    pppppcStack_b8 = (code *****)ppppppcStack_c0;
    pppppcStack_b0 = (code *****)ppppppcStack_c0;
    func_0x00010ac06208(&ppppppcStack_c0);
    uVar23 = puVar8[0xc];
    uVar14 = uVar23 << 1;
    goto LAB_10abe8518;
  }
  FUN_10ac061c0();
LAB_10abe9244:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe9248);
  (*pcVar6)();
}



/* Entry: 10abe967c; end: 10abe977f;  */

long FUN_10abe967c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  FUN_10a044868(&lStack_28);
  lStack_28 = param_1;
  FUN_10a044868(&lStack_28);
  return param_1;
}



/* Entry: 10abe9780; end: 10abe9913;  */

void FUN_10abe9780(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_38;
  
  *param_1 = &PTR_DAT_110c548a8;
  lVar2 = param_1[0x137];
  lVar1 = *(long *)(lVar2 + 200);
  for (lVar3 = *(long *)(lVar2 + 0xd0); lVar3 != lVar1; lVar3 = lVar3 + -0x108) {
    puStack_38 = (undefined8 *)(lVar3 + -0xf0);
    FUN_10a1901f0(&puStack_38);
  }
  *(long *)(lVar2 + 0xd0) = lVar1;
  func_0x00010a0523dc(param_1 + 0x1a5);
  func_0x00010a0523dc(param_1 + 0x1a0);
  func_0x00010a048e34(param_1 + 0x16c,param_1[0x16b]);
  puStack_38 = param_1 + 0x167;
  FUN_10a044868(&puStack_38);
  puStack_38 = param_1 + 0x164;
  FUN_10a044868(&puStack_38);
  func_0x00010ac09160(param_1 + 0x15a);
  if (param_1[0x155] != 0) {
    param_1[0x156] = param_1[0x155];
    __ZdlPv();
  }
  lVar1 = param_1[0x154];
  param_1[0x154] = 0;
  if (lVar1 != 0) {
    func_0x00010ac090e8();
  }
  FUN_10a5bcdcc(param_1 + 0x14e);
  func_0x00010a5bcd0c(param_1 + 0x149);
  func_0x00010a5bcccc(param_1 + 0x146,param_1[0x147]);
  FUN_10a0617bc(param_1 + 0x13c);
  FUN_10a0617bc(param_1 + 0x139);
  lVar1 = param_1[0x137];
  param_1[0x137] = 0;
  if (lVar1 != 0) {
    FUN_10ac09078();
  }
  lVar1 = param_1[0x136];
  param_1[0x136] = 0;
  if (lVar1 != 0) {
    func_0x00010ac09030();
  }
  if (*(char *)((long)param_1 + 0x99f) < '\0') {
    __ZdlPv(param_1[0x131]);
  }
  func_0x00010ac04854(param_1 + 0x12d);
  if (param_1[0x12a] != 0) {
    param_1[299] = param_1[0x12a];
    __ZdlPv();
  }
  if (param_1[0x127] != 0) {
    param_1[0x128] = param_1[0x127];
    __ZdlPv();
  }
  puStack_38 = param_1 + 0x124;
  FUN_10a1901f0(&puStack_38);
  if (param_1[0x121] != 0) {
    param_1[0x122] = param_1[0x121];
    __ZdlPv();
  }
  if (param_1[0x11e] != 0) {
    param_1[0x11f] = param_1[0x11e];
    __ZdlPv();
  }
  FUN_10ac00708(param_1 + 0x10c);
  FUN_10aba1cb0(param_1);
  return;
}



/* Entry: 10abe9914; end: 10abe9923;  */

void FUN_10abe9914(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xb50) = param_2;
  return;
}



/* Entry: 10abe9924; end: 10abea1c7;  */

/* WARNING: Removing unreachable block (ram,0x00010abe9fa0) */
/* WARNING: Removing unreachable block (ram,0x00010abe9fa8) */
/* WARNING: Removing unreachable block (ram,0x00010abe9ffc) */
/* WARNING: Removing unreachable block (ram,0x00010abea004) */
/* WARNING: Heritage AFTER dead removal. Example location: d1 : 0x00010abe9e44 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10abe9924(undefined8 param_1,undefined8 param_2,byte *******param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  code *pcVar2;
  byte *******pppppppbVar3;
  undefined **ppuVar4;
  long *plVar5;
  byte *******pppppppbVar6;
  byte ******ppppppbVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *****pppppbVar10;
  byte ******ppppppbVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *****pppppbVar15;
  byte ******ppppppbVar16;
  long lVar17;
  byte ******ppppppbVar18;
  byte bVar19;
  undefined7 uVar20;
  undefined8 *******pppppppuStack_228;
  undefined8 *******pppppppuStack_220;
  undefined7 uStack_218;
  char cStack_211;
  undefined8 *******pppppppuStack_210;
  undefined8 *******pppppppuStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  byte *******pppppppbStack_1f0;
  byte *******pppppppbStack_1e8;
  byte *******pppppppbStack_1e0;
  undefined2 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 uStack_1d0;
  undefined2 uStack_1cf;
  undefined8 uStack_1cc;
  undefined2 uStack_1c4;
  long lStack_1c0;
  undefined1 auStack_1b8 [8];
  long lStack_1b0;
  undefined8 auStack_1a8 [8];
  long lStack_168;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  long alStack_140 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  long lStack_d0;
  undefined8 auStack_c8 [4];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  undefined8 uStack_80;
  
  uVar20 = (undefined7)((ulong)param_2 >> 8);
  pppppppbVar3 = param_3;
  FUN_10ad055a0();
  if ((int)pppppppbVar3 == 0) {
LAB_10abe9984:
    FUN_10abea1c8(param_3,param_4);
    FUN_10abea2e4(param_3 + 0x12d);
    if (((param_3[0x10b][0x39] != (byte *****)0x0) && ((*(byte *)(param_3 + 0x6c) >> 1 & 1) != 0))
       && (((ulong)param_3[0xf] & 1) == 0)) {
      FUN_10a01975c(param_3[0x10b][0x39],*param_4,param_3 + 4);
    }
    pppppppbVar3 = param_3 + 4;
    if (*(byte *)((long)param_3 + 0x4c) == 1) {
      pppppppbStack_1f0 = (byte *******)0x0;
      pppppppbStack_1e8 = (byte *******)0x0;
      pppppppbStack_1e0 = (byte *******)0x0;
      FUN_10ac00830(&pppppppbStack_1f0,param_3[0x102],param_3[0x103],
                    (long)param_3[0x103] - (long)param_3[0x102] >> 1);
      pppppppbVar9 = pppppppbStack_1e8;
      pppppppuStack_210 = (undefined8 *******)0x0;
      pppppppuStack_208 = (undefined8 *******)0x0;
      uStack_200 = 0;
      pppppppbVar8 = pppppppbStack_1f0;
      if (*(byte *)((long)param_3 + 0x4a) == 0) {
        for (; pppppppbVar8 != pppppppbVar9; pppppppbVar8 = (byte *******)((long)pppppppbVar8 + 2))
        {
          uVar1 = *(undefined2 *)pppppppbVar8;
          pppppppbVar6 = pppppppbVar3;
          FUN_10abea338(pppppppbVar3,uVar1);
          if (((ulong)*pppppppbVar6 & 1) != 0) {
            if (*(short *)((long)pppppppbVar6 + 2) != -1) {
              pppppppbVar6 = pppppppbVar3;
              FUN_10a01f6d4();
              if (pppppppbVar6[0x2d] == pppppppbVar6[0x2e]) goto LAB_10abea090;
              if (*pppppppbVar6[0x2d] == (byte *****)0x0) goto LAB_10abe9bac;
            }
            FUN_10abea3ac(&pppppppuStack_210,uVar1);
          }
LAB_10abe9bac:
        }
      }
      else {
        ppppppbVar18 = param_3[0x3e];
        for (ppppppbVar7 = param_3[0x3d]; pppppppbStack_1f0 = pppppppbVar8,
            pppppppbStack_1e8 = pppppppbVar9, ppppppbVar7 != ppppppbVar18;
            ppppppbVar7 = ppppppbVar7 + 2) {
          for (; pppppppbVar8 != pppppppbVar9; pppppppbVar8 = (byte *******)((long)pppppppbVar8 + 2)
              ) {
            uVar1 = *(undefined2 *)pppppppbVar8;
            pppppppbVar6 = pppppppbVar3;
            FUN_10abea338(pppppppbVar3,uVar1);
            if (*(short *)((long)pppppppbVar6 + 2) != -1) {
              pppppppbVar6 = pppppppbVar3;
              FUN_10a01f6d4();
              if (pppppppbVar6[0x2d] == pppppppbVar6[0x2e]) goto LAB_10abea090;
              if (*pppppppbVar6[0x2d] == ppppppbVar7[1]) {
                FUN_10abea3ac(&pppppppuStack_210,uVar1);
              }
            }
          }
          pppppppbVar8 = pppppppbStack_1f0;
          pppppppbVar9 = pppppppbStack_1e8;
        }
        for (; pppppppbVar8 != pppppppbVar9; pppppppbVar8 = (byte *******)((long)pppppppbVar8 + 2))
        {
          uVar1 = *(undefined2 *)pppppppbVar8;
          pppppppbVar6 = pppppppbVar3;
          FUN_10abea338(pppppppbVar3,uVar1);
          if (*(short *)((long)pppppppbVar6 + 2) == -1) {
            FUN_10abea3ac(&pppppppuStack_210,uVar1);
          }
        }
      }
      lVar17 = 0;
      if (pppppppuStack_208 != pppppppuStack_210) {
        lVar17 = LZCOUNT((long)pppppppuStack_208 - (long)pppppppuStack_210 >> 1) * -2 + 0x7e;
      }
      pppppppbStack_90 = param_3;
      FUN_10ac008c4(pppppppuStack_210,pppppppuStack_208,&pppppppbStack_90,lVar17,1);
      FUN_10abea46c(param_3,pppppppuStack_210,(long)pppppppuStack_208 - (long)pppppppuStack_210 >> 1
                   );
      if (pppppppuStack_210 != (undefined8 *******)0x0) {
        pppppppuStack_208 = pppppppuStack_210;
        __ZdlPv();
      }
      if (pppppppbStack_1f0 != (byte *******)0x0) {
        pppppppbStack_1e8 = pppppppbStack_1f0;
        __ZdlPv();
      }
    }
    else {
      pppppppbVar8 = param_3 + 0x11e;
      ppppppbVar7 = param_3[0x3d];
      ppppppbVar18 = param_3[0x3e];
      lVar17 = (long)ppppppbVar18 - (long)ppppppbVar7 >> 4;
      FUN_10abeb900(pppppppbVar8,lVar17);
      ppppppbVar11 = *pppppppbVar8;
      ppppppbVar16 = ppppppbVar11;
      if (ppppppbVar18 != ppppppbVar7) {
        lVar13 = 0;
        ppppppbVar7 = param_3[0x3d];
        lVar14 = (long)param_3[0x3e] - (long)ppppppbVar7;
        ppppppbVar18 = ppppppbVar11;
        do {
          if (lVar14 >> 4 == lVar13) goto LAB_10abea090;
          ppppppbVar16 = ppppppbVar18;
          if (*(short *)ppppppbVar7 != -1) {
            ppppppbVar16 = (byte ******)((long)ppppppbVar18 + 2);
            *(short *)ppppppbVar18 = (short)lVar13;
          }
          lVar13 = lVar13 + 1;
          ppppppbVar7 = ppppppbVar7 + 2;
          ppppppbVar18 = ppppppbVar16;
        } while (lVar17 != lVar13);
      }
      FUN_10abeb900(pppppppbVar8,(long)ppppppbVar16 - (long)ppppppbVar11 >> 1);
      pppppppbStack_1f0 = param_3 + 5;
      ppppppbVar7 = *pppppppbVar8;
      lVar17 = 0;
      if (ppppppbVar16 != ppppppbVar7) {
        lVar17 = LZCOUNT((long)ppppppbVar16 - (long)ppppppbVar7 >> 1) * -2 + 0x7e;
      }
      pppppppbStack_1e8 = pppppppbVar3;
      FUN_10ac02694(ppppppbVar7,ppppppbVar16,&pppppppbStack_1f0,lVar17,1);
      ppppppbVar7 = param_3[0x11e];
      ppppppbVar18 = param_3[0x11f];
      pppppppbStack_90 = (byte *******)0x0;
      pppppppbStack_88 = (byte *******)0x0;
      uStack_80 = (byte *******)0x0;
      if (ppppppbVar7 != ppppppbVar18) {
        do {
          if ((ulong)((long)param_3[0x3e] - (long)param_3[0x3d] >> 4) <=
              (ulong)*(ushort *)ppppppbVar7) goto LAB_10abea090;
          ppppppbVar16 = param_3[0x3d] + (ulong)*(ushort *)ppppppbVar7 * 2;
          pppppbVar15 = ppppppbVar16[1];
          uVar1 = *(undefined2 *)ppppppbVar16;
          pppppppbVar8 = pppppppbVar3;
          FUN_10abea338(pppppppbVar3,uVar1);
          pppppppbVar9 = pppppppbVar3;
          FUN_10a01f6d4(pppppppbVar3,*(undefined2 *)((long)pppppppbVar8 + 2));
          pppppppbVar8 = param_3;
          FUN_10abebec4(param_3,pppppppbVar9);
          if (((ulong)pppppppbVar8 & 1) != 0) {
            if (*(char *)((long)pppppbVar15 + 0x2fc) == '\0') {
              FUN_10a1ddfe4(pppppbVar15,param_3 + 0x106);
              FUN_10a1de1fc(pppppbVar15,param_3 + 0x107);
            }
            pppppbVar10 = pppppbVar15;
            func_0x00010a1de5f0();
            pppppppbVar8 = param_3;
            (*(code *)(*param_3)[0x10])();
            uVar12 = (uint)*(byte *)((long)pppppppbVar9 + 0x44);
            if ((int)pppppppbVar8 == 0) {
              uVar12 = 0;
            }
            if ((int)pppppbVar10 >> (uVar12 & 0x1f) != 0 &&
                (int)((ulong)pppppbVar10 >> 0x20) >> (uVar12 & 0x1f) != 0) {
              pppppppbStack_1f0 = (byte *******)0x0;
              pppppppbStack_1e8 = (byte *******)0x0;
              pppppppbStack_1e0 = (byte *******)0x0;
              uStack_1d8 = 0x300;
              uStack_1d4 = 0;
              uStack_1d0 = 0;
              uStack_1cf = 0;
              uStack_1cc = 0x3f800000;
              uStack_1c4 = 0;
              lStack_1c0 = 0;
              lStack_1b0 = 0;
              lStack_168 = 0;
              uStack_158 = 0;
              ppuStack_150 = &PTR_FUN_110c54d98;
              lStack_148 = 0;
              uStack_f8 = 0;
              uStack_100 = 0;
              uStack_e8 = 0;
              uStack_f0 = 0;
              uStack_df = 0;
              uStack_e7 = 0;
              uStack_e0 = 0;
              lStack_d0 = 0;
              uStack_a8 = 0;
              uStack_a0 = 0;
              uStack_98 = 0;
              FUN_10abea3ac(&pppppppbStack_1f0,uVar1);
              bVar19 = ~-((int)pppppbVar15[0x6f] == 0);
              uStack_158 = (ulong)CONCAT14(-((int)((ulong)pppppbVar15[0x6f] >> 0x20) == 1),
                                           (uint)bVar19) & 0x100000001;
              uStack_1d8 = *(undefined2 *)((long)pppppbVar15 + 0x304);
              auStack_1b8[lStack_1c0] = 1;
              lStack_1c0 = lStack_1c0 + 1;
              uStack_1cf = 0x101;
              ppppppbVar16 = pppppppbVar9[0x2d];
              if (ppppppbVar16 == pppppppbVar9[0x2e]) goto LAB_10abea090;
              FUN_10abebf78(*(undefined4 *)(ppppppbVar16 + 3),CONCAT71(uVar20,bVar19),
                            *(undefined4 *)(ppppppbVar16 + 4),
                            *(undefined4 *)((long)ppppppbVar16 + 0x24),&pppppppuStack_210,param_3,
                            ppppppbVar16[1],
                            ((long)pppppppbVar9[0x2e] - (long)ppppppbVar16 >> 4) *
                            -0x5555555555555555,*(undefined1 *)((long)ppppppbVar16 + 0x29),
                            *ppppppbVar16);
              auStack_c8[lStack_d0] = pppppppuStack_210;
              lStack_d0 = lStack_d0 + 1;
              auStack_1a8[lStack_1b0 * 2 + 1] = uStack_200;
              auStack_1a8[lStack_1b0 * 2] = pppppppuStack_208;
              lStack_1b0 = lStack_1b0 + 1;
              auStack_160[lStack_168] = uStack_1f8;
              lStack_168 = lStack_168 + 1;
              pppppbVar10 = pppppbVar15;
              FUN_10a1de960(pppppbVar15,pppppppbVar9 + 9);
              pppppppbVar8 = pppppppbStack_88;
              alStack_140[lStack_148 * 2] = (long)pppppbVar10;
              alStack_140[lStack_148 * 2 + 1] = (long)pppppbVar15;
              lStack_148 = lStack_148 + 1;
              if (pppppppbStack_88 < uStack_80) {
                FUN_10ac04684(pppppppbStack_88,&pppppppbStack_1f0);
                pppppppbVar8 = pppppppbVar8 + 0x2c;
              }
              else {
                pppppppbVar8 = (byte *******)&pppppppbStack_90;
                FUN_10ac043b0(pppppppbVar8,&pppppppbStack_1f0);
              }
              pppppppbStack_88 = pppppppbVar8;
              if (pppppppbStack_1f0 != (byte *******)0x0) {
                pppppppbStack_1e8 = pppppppbStack_1f0;
                __ZdlPv();
              }
            }
          }
          pppppppbVar9 = pppppppbStack_88;
          ppppppbVar7 = (byte ******)((long)ppppppbVar7 + 2);
          pppppppbVar8 = pppppppbStack_90;
        } while (ppppppbVar7 != ppppppbVar18);
        for (; pppppppbVar8 != pppppppbVar9; pppppppbVar8 = pppppppbVar8 + 0x2c) {
          FUN_10abebddc(param_3,pppppppbVar8);
        }
      }
      FUN_10abec180(param_3,&pppppppbStack_90);
      func_0x00010ac04854(&pppppppbStack_90);
    }
    FUN_10abf0de8(param_3,param_4);
    return;
  }
  ppuVar4 = &PTR___tlv_bootstrap_11340dfd8;
  (*(code *)PTR___tlv_bootstrap_11340dfd8)();
  if (*ppuVar4 == (undefined *)0x0) {
    ppuVar4 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    plVar5 = (long *)*ppuVar4;
    if ((plVar5 == (long *)0x0) || ((**(code **)(*plVar5 + 0x18))(), plVar5 == (long *)0x0))
    goto LAB_10abe9984;
    plVar5 = plVar5 + 7;
  }
  else {
    plVar5 = (long *)(*ppuVar4 + 8);
  }
  if (((uint)*(undefined8 *)(*plVar5 + 0x10) >> 1 & 1) == 0) goto LAB_10abe9984;
  func_0x000107c2b054(&pppppppbStack_90,&UNK_10f69a39e);
  func_0x000107c2b054(&pppppppuStack_228,"");
  pppppppuStack_210 = (undefined8 *******)0x10f29b0c6;
  pppppppbStack_1f0 = (byte *******)pppppppuStack_210;
  if (uStack_80._7_1_ != '\0') {
    pppppppbStack_1f0 = (byte *******)&pppppppbStack_90;
  }
  if (cStack_211 < '\0') {
    if (pppppppuStack_220 != (undefined8 *******)0x0) {
      pppppppuStack_210 = pppppppuStack_228;
    }
  }
  else if (cStack_211 != '\0') {
    pppppppuStack_210 = &pppppppuStack_228;
  }
  FUN_10a224324(&pppppppbStack_1f0,&pppppppuStack_210);
  if (uStack_80._7_1_ == '\0') {
    pppppppbStack_1f0 = (byte *******)((ulong)pppppppbStack_1f0 & 0xffffffffffffff00);
  }
  else {
    pppppppbStack_1e8 = pppppppbStack_88;
    pppppppbStack_1f0 = pppppppbStack_90;
    pppppppbStack_1e0 = uStack_80;
  }
  uStack_1d8 = CONCAT11(uStack_1d8._1_1_,uStack_80._7_1_ != '\0');
  if (cStack_211 < '\0') {
    if (pppppppuStack_220 != (undefined8 *******)0x0) {
      func_0x000107c3192c(&pppppppuStack_210,pppppppuStack_228);
LAB_10abea07c:
      uStack_1f8 = 1;
      goto LAB_10abea080;
    }
  }
  else if (cStack_211 != '\0') {
    pppppppuStack_208 = pppppppuStack_220;
    pppppppuStack_210 = pppppppuStack_228;
    uStack_200 = CONCAT17(cStack_211,uStack_218);
    goto LAB_10abea07c;
  }
  uStack_1f8 = 0;
  pppppppuStack_210 = (undefined8 *******)((ulong)pppppppuStack_210 & 0xffffffffffffff00);
LAB_10abea080:
  FUN_10a234a0c(&pppppppbStack_1f0,&pppppppuStack_210);
LAB_10abea090:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10abea094);
  (*pcVar2)();
}



/* Entry: 10abea1c8; end: 10abea2e3;  */

void FUN_10abea1c8(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [48];
  
  FUN_10a18eadc(auStack_50,&UNK_10f69a751);
  lVar3 = param_2[5];
  lVar1 = param_2[4];
  lVar5 = param_2[7];
  lVar4 = param_2[6];
  *(long *)(param_1 + 0xa10) = param_2[8];
  *(long *)(param_1 + 0xa08) = lVar5;
  *(long *)(param_1 + 0xa00) = lVar4;
  *(long *)(param_1 + 0x9f8) = lVar3;
  *(long *)(param_1 + 0x9f0) = lVar1;
  lVar3 = param_2[10];
  lVar1 = param_2[9];
  *(long *)(param_1 + 0xa28) = param_2[0xb];
  *(long *)(param_1 + 0xa20) = lVar3;
  *(long *)(param_1 + 0xa18) = lVar1;
  if ((long *)(param_1 + 0xa18) != param_2 + 9) {
    FUN_10a5e3ba4(param_1 + 0xa30,param_2[0xc],param_2 + 0xd);
    *(int *)(param_1 + 0xa68) = (int)param_2[0x13];
    FUN_10a5e3ec0(param_1 + 0xa48,param_2[0x11],0);
    *(int *)(param_1 + 0xa90) = (int)param_2[0x18];
    FUN_10a5e453c(param_1 + 0xa70,param_2[0x16],0);
  }
  *(char *)(param_1 + 0xac0) = (char)param_2[0x19];
  *(undefined4 *)(param_1 + 0xac4) = *(undefined4 *)((long)param_2 + 0xcc);
  *(short *)(param_1 + 0xac8) = (short)param_2[0x1a];
  *(undefined1 *)(param_1 + 0xaf8) = *(undefined1 *)((long)param_2 + 0xd2);
  *(undefined1 *)(param_1 + 0xaf9) = *(undefined1 *)((long)param_2 + 0xc9);
  lVar1 = *param_2;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x828);
  }
  *(undefined8 *)(param_1 + 0xa98) = uVar2;
  FUN_10a5dcd34(param_1 + 0x20,lVar1,param_2[1],param_2[3],param_2[2],
                *(undefined8 *)(param_1 + 0xaa0));
  FUN_10a1988cc(auStack_50);
  return;
}



/* Entry: 10abea2e4; end: 10abea337;  */

void FUN_10abea2e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -0x2c;
    if (*plVar3 != 0) {
      plVar2[-0x2b] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10abea338; end: 10abea3ab;  */

long FUN_10abea338(long param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((short)param_2 < -1) {
    uVar2 = (ulong)param_2 & 0x7fff;
    uVar3 = (*(long *)(param_1 + 0x728) - *(long *)(param_1 + 0x720) >> 3) * -0x5555555555555555;
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      return *(long *)(param_1 + 0x720) + uVar2 * 0x18;
    }
  }
  else {
    uVar2 = (*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3) * -0x5555555555555555;
    if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
      return *(long *)(param_1 + 0x1b0) + (ulong)param_2 * 0x18;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abea3ac);
  (*pcVar1)();
}



/* Entry: 10abea3ac; end: 10abea46b;  */

/* WARNING: Removing unreachable block (ram,0x00010abeb61c) */
/* WARNING: Removing unreachable block (ram,0x00010abeb624) */
/* WARNING: Removing unreachable block (ram,0x00010abeb4d4) */
/* WARNING: Removing unreachable block (ram,0x00010abeb4e4) */
/* WARNING: Removing unreachable block (ram,0x00010abeaf1c) */
/* WARNING: Removing unreachable block (ram,0x00010abeaf28) */
/* WARNING: Removing unreachable block (ram,0x00010abeafcc) */
/* WARNING: Removing unreachable block (ram,0x00010abeb5d8) */
/* WARNING: Removing unreachable block (ram,0x00010abeb5e8) */
/* WARNING: Removing unreachable block (ram,0x00010abeb684) */
/* WARNING: Removing unreachable block (ram,0x00010abeb68c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10abea3ac(long ****param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  short sVar5;
  undefined2 uVar6;
  long *******ppppppplVar7;
  undefined8 ****ppppuVar8;
  code *pcVar9;
  int iVar10;
  long ***ppplVar11;
  long **pplVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  long lVar18;
  long *******ppppppplVar19;
  long ****pppplVar20;
  undefined *****pppppuVar21;
  long *******ppppppplVar22;
  long *******ppppppplVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long ******pppppplVar27;
  ulong uVar28;
  long ******pppppplVar29;
  long lVar30;
  ulong uVar31;
  long **pplVar32;
  ulong uVar33;
  long *******ppppppplVar34;
  long *plVar35;
  long *plVar36;
  long lVar37;
  long ***ppplVar38;
  undefined *****pppppuVar39;
  undefined8 ****ppppuVar40;
  long *plVar41;
  long ****pppplVar42;
  long lVar43;
  long ****pppplVar44;
  long ****pppplVar45;
  long ***ppplVar46;
  long ****pppplVar47;
  long ****pppplVar48;
  long *plVar49;
  long *plVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  long ******pppppplVar53;
  long ******pppppplStack_358;
  undefined *****pppppuStack_2e0;
  long ****pppplStack_2d8;
  undefined8 uStack_2d0;
  undefined2 uStack_2c8;
  undefined4 uStack_2c4;
  undefined1 uStack_2c0;
  undefined1 uStack_2bf;
  undefined1 uStack_2be;
  undefined8 uStack_2bc;
  undefined2 uStack_2b4;
  long lStack_2b0;
  undefined1 auStack_2a8 [8];
  long lStack_2a0;
  long alStack_298 [8];
  long lStack_258;
  char acStack_250 [8];
  undefined8 uStack_248;
  undefined **ppuStack_240;
  long lStack_238;
  long *plStack_230;
  long ***ppplStack_228;
  long ****pppplStack_1f0;
  long ****pppplStack_1e8;
  long ***ppplStack_1e0;
  long ***ppplStack_1d8;
  undefined4 uStack_1cc;
  long lStack_1c0;
  long alStack_1b8 [4];
  long *plStack_198;
  long *plStack_190;
  undefined2 uStack_188;
  undefined8 *******pppppppuStack_180;
  ulong uStack_178;
  byte bStack_169;
  undefined1 auStack_168 [24];
  long ****pppplStack_150;
  undefined8 ****ppppuStack_148;
  undefined ****ppppuStack_140;
  char cStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined7 uStack_120;
  char cStack_119;
  long ****pppplStack_118;
  long ****pppplStack_110;
  undefined7 uStack_108;
  char cStack_101;
  undefined1 auStack_100 [48];
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  
  ppplVar11 = param_1[1];
  if (ppplVar11 < param_1[2]) {
    ppplVar46 = (long ***)((long)ppplVar11 + 2);
    *(short *)ppplVar11 = (short)param_2;
  }
  else {
    lVar37 = (long)ppplVar11 - (long)*param_1;
    lVar30 = lVar37 >> 1;
    if (lVar30 < -1) {
      FUN_10a5e4f14();
      ppppppplStack_d0 = (long *******)0x0;
      ppppppplStack_c8 = (long *******)0x0;
      ppppppplStack_c0 = (long *******)0x0;
      FUN_10ac04884(auStack_100,&UNK_10f69a3de);
      pplVar12 = param_1[0x10b][0x45];
      (*(code *)(*pplVar12)[0xd])();
      if (param_3 != 0) {
        uVar26 = (ulong)*(int *)((long)pplVar12 + 0x7c);
        ppuVar13 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        pppppplStack_358 = (long ******)0x0;
        lVar30 = 0;
        pppppuVar21 = (undefined *****)ppuVar14;
        do {
          iVar10 = (int)pppppuVar21;
          FUN_10ad055a0();
          if (iVar10 != 0) {
            if (*ppuVar13 == (undefined *)0x0) {
              ppplVar11 = (long ***)*ppuVar14;
              if ((ppplVar11 == (long ***)0x0) ||
                 ((*(code *)(*ppplVar11)[3])(), ppplVar11 == (long ***)0x0)) goto LAB_10abea574;
              ppplVar11 = ppplVar11 + 7;
            }
            else {
              ppplVar11 = (long ***)(*ppuVar13 + 8);
            }
            if (((uint)(*ppplVar11)[2] >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppplStack_118,&UNK_10f69a3f0);
              func_0x000107c2b054(&ppppuStack_130,"");
              pppppuStack_2e0 = (undefined *****)"null";
              if (cStack_101 != '\0') {
                pppppuStack_2e0 = (undefined *****)&pppplStack_118;
              }
              pppplStack_150 = (long ****)"null";
              if (cStack_119 != '\0') {
                pppplStack_150 = (long ****)&ppppuStack_130;
              }
              FUN_10a224324(&pppppuStack_2e0,&pppplStack_150);
              if (cStack_101 == '\0') {
                pppppuStack_2e0 = (undefined *****)((ulong)pppppuStack_2e0 & 0xffffffffffffff00);
              }
              else {
                pppplStack_2d8 = pppplStack_110;
                pppppuStack_2e0 = (undefined *****)pppplStack_118;
                uStack_2d0 = CONCAT17(cStack_101,uStack_108);
              }
              uStack_2c8 = CONCAT11(uStack_2c8._1_1_,cStack_101 != '\0');
              if (cStack_119 == '\0') {
                pppplStack_150 = (long ****)((ulong)pppplStack_150 & 0xffffffffffffff00);
              }
              else {
                ppppuStack_148 = ppppuStack_128;
                pppplStack_150 = ppppuStack_130;
                ppppuStack_140 = (undefined ****)CONCAT17(cStack_119,uStack_120);
              }
              cStack_138 = cStack_119 != '\0';
              FUN_10a234a0c(&pppppuStack_2e0,&pppplStack_150);
              goto LAB_10abeb6d0;
            }
          }
LAB_10abea574:
          uVar6 = *(undefined2 *)(param_2 + lVar30 * 2);
          pppplVar15 = param_1 + 4;
          FUN_10abea338(pppplVar15,uVar6);
          sVar5 = *(short *)((long)pppplVar15 + 2);
          if (sVar5 == -1) {
            pppppuStack_2e0 = (undefined *****)0x0;
            pppplStack_2d8 = (long ****)0x0;
            uStack_2d0 = 0;
            uStack_2c8 = 0x300;
            uStack_2c4 = 0;
            uStack_2c0 = 0;
            uStack_2bf = 0;
            uStack_2be = 0;
            uStack_2bc = 0x3f800000;
            uStack_2b4 = 0;
            lStack_2b0 = 0;
            lStack_2a0 = 0;
            lStack_258 = 0;
            uStack_248 = 0;
            ppuStack_240 = &PTR_FUN_110c54d98;
            lStack_238 = 0;
            pppplStack_1e8 = (long ****)0x0;
            pppplStack_1f0 = (long ****)0x0;
            ppplStack_1e0 = (long ***)0x0;
            uStack_1cc = 0;
            lStack_1c0 = 0;
            plStack_198 = (long *)0x0;
            plStack_190 = (long *)0x0;
            uStack_188 = 0;
            FUN_10abea3ac(&pppppuStack_2e0,uVar6);
            ppppppplVar19 = ppppppplStack_c8;
            uStack_188 = CONCAT11(1,(undefined1)uStack_188);
            if (ppppppplStack_c8 < ppppppplStack_c0) {
              FUN_10ac04684(ppppppplStack_c8,&pppppuStack_2e0);
              ppppppplVar19 = ppppppplVar19 + 0x2c;
            }
            else {
              ppppppplVar19 = (long *******)&ppppppplStack_d0;
              FUN_10ac043b0(ppppppplVar19,&pppppuStack_2e0);
            }
            pppppuVar21 = pppppuStack_2e0;
            ppppppplStack_c8 = ppppppplVar19;
            if (pppppuStack_2e0 == (undefined *****)0x0) goto LAB_10abeacec;
            pppplStack_2d8 = (long ****)pppppuStack_2e0;
            pppppuVar39 = pppppuStack_2e0;
LAB_10abeace8:
            __ZdlPv();
            pppppuVar21 = pppppuVar39;
          }
          else {
            pppplVar15 = param_1 + 4;
            FUN_10a01f6d4(pppplVar15,sVar5);
            pppplVar16 = param_1 + 0xbc;
            func_0x00010a04a0d4(pppplVar16,sVar5);
            pppppuVar21 = (undefined *****)param_1;
            FUN_10abebec4(param_1,pppplVar15);
            if (((ulong)pppppuVar21 & 1) != 0) {
              pppppuVar21 = (undefined *****)param_1;
              (*(code *)(*param_1)[0x10])();
              uVar24 = (uint)*(byte *)((long)pppplVar15 + 0x44);
              if ((int)pppppuVar21 == 0) {
                uVar24 = 0;
              }
              uVar25 = ((long)pppplVar15[0x2e] - (long)pppplVar15[0x2d] >> 4) * -0x5555555555555555;
              if (uVar26 <= uVar25 && uVar25 - uVar26 != 0) {
                __ZNSt3__19to_stringEm(auStack_168,uVar26);
                FUN_109feb280(&ppppuStack_130,&UNK_10f69a416,auStack_168);
                FUN_10a012db0(&pppplStack_118,&ppppuStack_130,&UNK_10f69a434);
                __ZNSt3__19to_stringEm(&pppppppuStack_180,uVar25);
                if (-1 < (char)bStack_169) {
                  uStack_178 = (ulong)bStack_169;
                  pppppppuStack_180 = &pppppppuStack_180;
                }
                pppppuVar21 = (undefined *****)&pppplStack_118;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppuVar21,pppppppuStack_180,uStack_178);
                ppppuStack_148 = (undefined8 ****)pppppuVar21[1];
                pppplStack_150 = (long ****)*pppppuVar21;
                ppppuStack_140 = pppppuVar21[2];
                pppppuVar21[1] = (undefined ****)0x0;
                pppppuVar21[2] = (undefined ****)0x0;
                *pppppuVar21 = (undefined ****)0x0;
                FUN_10a012db0(&pppppuStack_2e0,&pppplStack_150,&UNK_10f69a44c);
                FUN_10a0029c0(&pppppuStack_2e0);
                goto LAB_10abeb6d0;
              }
              if (pppplVar15[0x2e] == pppplVar15[0x2d]) {
                pppplVar48 = (long ****)0x0;
                pppppuVar39 = (undefined *****)0x0;
              }
              else {
                lVar37 = 0;
                pppplVar45 = (long ****)0x0;
                uVar33 = 0;
                pppplVar20 = (long ****)0x0;
                pppplVar47 = (long ****)0x0;
                do {
                  uVar28 = ((long)pppplVar15[0x2e] - (long)pppplVar15[0x2d] >> 4) *
                           -0x5555555555555555;
                  if (uVar28 < uVar33 || uVar28 - uVar33 == 0) goto LAB_10abeb6d0;
                  pppplVar42 = *(long *****)((long)pppplVar15[0x2d] + lVar37);
                  pppppuVar39 = (undefined *****)pppplVar20;
                  pppplVar48 = pppplVar47;
                  if (pppplVar42 == (long ****)0x0) {
                    if (uVar33 == 0) {
                      FUN_10a00946c(&UNK_10f69a4fe);
                      goto LAB_10abeb6d0;
                    }
                    break;
                  }
                  if (pppplVar20 == pppplVar47) {
                    if (*(char *)((long)pppplVar42 + 0x2fc) == '\0') {
                      FUN_10a1ddfe4(pppplVar42,param_1 + 0x106);
                      FUN_10a1de1fc(pppplVar42,param_1 + 0x107);
                    }
                  }
                  else {
                    pppplVar44 = (long ****)*pppplVar20;
                    pppplVar17 = pppplVar44;
                    func_0x00010a1de5f0();
                    pppppuStack_2e0 = (undefined *****)pppplVar17;
                    FUN_10a1ddfe4(pppplVar42,&pppppuStack_2e0);
                    FUN_10a1de1fc(pppplVar42,(long)pppplVar44 + 0x2c4);
                  }
                  pppppuVar21 = (undefined *****)pppplVar42;
                  func_0x00010a1de5f0();
                  if ((int)pppppuVar21 >> (uVar24 & 0x1f) != 0 &&
                      (int)((ulong)pppppuVar21 >> 0x20) >> (uVar24 & 0x1f) != 0) {
                    if (pppplVar47 < pppplVar45) {
                      pppplVar48 = pppplVar47 + 1;
                      *pppplVar47 = (long ***)pppplVar42;
                    }
                    else {
                      lVar43 = (long)pppplVar47 - (long)pppplVar20;
                      uVar28 = (lVar43 >> 3) + 1;
                      if (uVar28 >> 0x3d != 0) {
                        FUN_10ac04afc();
                        goto LAB_10abeb6d0;
                      }
                      uVar31 = (long)pppplVar45 - (long)pppplVar20 >> 2;
                      if (uVar31 <= uVar28) {
                        uVar31 = uVar28;
                      }
                      if (0x7ffffffffffffff7 < (ulong)((long)pppplVar45 - (long)pppplVar20)) {
                        uVar31 = 0x1fffffffffffffff;
                      }
                      if (uVar31 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10abeb6d0;
                      }
                      lVar18 = uVar31 << 3;
                      __Znwm();
                      puVar3 = (undefined8 *)(lVar18 + lVar43);
                      pppplVar45 = (long ****)(lVar18 + uVar31 * 8);
                      pppppuVar39 = (undefined *****)(puVar3 + -(lVar43 >> 3));
                      pppplVar48 = (long ****)(puVar3 + 1);
                      *puVar3 = pppplVar42;
                      pppppuVar21 = pppppuVar39;
                      _memcpy(pppppuVar39,pppplVar20,lVar43);
                      if (pppplVar20 != (long ****)0x0) {
                        __ZdlPv();
                        pppppuVar21 = (undefined *****)pppplVar20;
                      }
                    }
                  }
                  uVar33 = uVar33 + 1;
                  lVar37 = lVar37 + 0x30;
                  pppplVar20 = (long ****)pppppuVar39;
                  pppplVar47 = pppplVar48;
                } while (uVar25 != uVar33);
              }
              pppplVar45 = (long ****)pppplVar15[0x30];
              if (pppplVar45 == (long ****)0x0) {
                pppplVar45 = (long ****)0x0;
              }
              else {
                pppppuVar21 = (undefined *****)pppplVar45;
                ___dynamic_cast(pppplVar45,&PTR_DAT_110c5e408,&PTR_DAT_110c69900,0xfffffffffffffffe)
                ;
                if (pppppuVar21 == (undefined *****)0x0) {
                  if (pppppuVar39 == (undefined *****)pppplVar48) {
                    if (*(char *)((long)pppplVar45 + 0x29c) == '\x01') {
                      pppppuVar21 = (undefined *****)pppplVar45;
                      FUN_10ac26770(pppplVar45,param_1 + 0x106);
                    }
                  }
                  else {
                    pppplVar20 = (long ****)*pppppuVar39;
                    func_0x00010a1de5f0();
                    pppppuVar21 = (undefined *****)pppplVar45;
                    pppppuStack_2e0 = (undefined *****)pppplVar20;
                    FUN_10ac26770(pppplVar45,&pppppuStack_2e0);
                  }
                  if ((int)pppplVar45[0x54] >> (uVar24 & 0x1f) < 1) goto LAB_10abea93c;
                  if ((int)((ulong)pppplVar45[0x54] >> 0x20) >> (uVar24 & 0x1f) < 1) {
                    pppplVar45 = (long ****)0x0;
                  }
                }
                else if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
                  pppplVar45 = (long ****)0x0;
                }
                else {
                  pppppuVar21 = (undefined *****)0x1;
                  func_0x00010ae06f08(1,2,&UNK_10f69a533,&UNK_10f69a578,0x22c,&UNK_10f69a5db);
LAB_10abea93c:
                  pppplVar45 = (long ****)0x0;
                }
              }
              if ((pppppuVar39 != (undefined *****)pppplVar48) || (pppplVar45 != (long ****)0x0)) {
                pppppuStack_2e0 = (undefined *****)0x0;
                pppplStack_2d8 = (long ****)0x0;
                uStack_2d0 = 0;
                uStack_2c8 = 0x300;
                uStack_2c4 = 0;
                uStack_2c0 = 0;
                uStack_2bf = 0;
                uStack_2be = 0;
                uStack_2bc = 0x3f800000;
                uStack_2b4 = 0;
                lStack_2b0 = 0;
                lStack_2a0 = 0;
                lStack_258 = 0;
                uStack_248 = 0;
                ppuStack_240 = &PTR_FUN_110c54d98;
                lStack_238 = 0;
                pppplStack_1e8 = (long ****)0x0;
                pppplStack_1f0 = (long ****)0x0;
                ppplStack_1e0 = (long ***)0x0;
                uStack_1cc = 0;
                lStack_1c0 = 0;
                plStack_198 = (long *)0x0;
                plStack_190 = (long *)0x0;
                uStack_188 = 0;
                FUN_10abea3ac(&pppppuStack_2e0,uVar6);
                if (pppppuVar39 == (undefined *****)pppplVar48) goto LAB_10abeb6d0;
                lVar37 = 0;
                pppppplVar27 = (long ******)*pppppuVar39;
                uStack_2c8 = *(undefined2 *)((long)pppppplVar27 + 0x304);
                uStack_248 = CONCAT44(-(uint)((int)((ulong)pppppplVar27[0x6f] >> 0x20) == 1),
                                      (uint)(byte)~-((int)pppppplVar27[0x6f] == 0)) & 0x100000001;
                uStack_188 = CONCAT11(uStack_188._1_1_,*(int *)(pppplVar16 + 0x120) != 0);
                if (*(char *)((long)pppplVar15 + 0x49) != '\0') {
                  pppppplStack_358 = pppppplVar27;
                }
                uStack_1cc = *(undefined4 *)(pppplVar15 + 8);
                lVar43 = (long)pppplVar48 - (long)pppppuVar39 >> 3;
                do {
                  ppplVar46 = (long ***)pppppuVar39[lVar37];
                  ppplVar11 = ppplVar46;
                  FUN_10a1de960(ppplVar46,pppplVar15 + 9);
                  if (ppplVar46[0x6d] == (long **)0x0) {
                    plVar36 = (long *)0x0;
                  }
                  else {
                    plVar36 = ppplVar46[0x6d][0x4d];
                  }
                  FUN_10abebf78(*(undefined4 *)((long)ppplVar46 + 0x324),
                                *(undefined4 *)(ppplVar46 + 0x65),
                                *(undefined4 *)((long)ppplVar46 + 0x32c),
                                *(undefined4 *)(ppplVar46 + 0x66),&pppplStack_150,param_1,plVar36,
                                lVar43,*(undefined1 *)(ppplVar46 + 100),ppplVar46);
                  (&plStack_230)[lStack_238 * 2] = (long *)ppplVar11;
                  (&plStack_230)[lStack_238 * 2 + 1] = (long *)ppplVar46;
                  lStack_238 = lStack_238 + 1;
                  alStack_1b8[lStack_1c0] = (long)pppplStack_150;
                  lStack_1c0 = lStack_1c0 + 1;
                  alStack_298[lStack_2a0 * 2 + 1] = (long)ppppuStack_140;
                  alStack_298[lStack_2a0 * 2] = (long)ppppuStack_148;
                  lStack_2a0 = lStack_2a0 + 1;
                  acStack_250[lStack_258] = cStack_138;
                  lStack_258 = lStack_258 + 1;
                  auStack_2a8[lStack_2b0] = acStack_250[lVar37] != '\0';
                  lStack_2b0 = lStack_2b0 + 1;
                  lVar37 = lVar37 + 1;
                } while (lVar43 != lVar37);
                uStack_188 = CONCAT11(*(char *)((long)pppplVar15 + 0x49) != '\0',
                                      (undefined1)uStack_188);
                uStack_2bf = *(char *)((long)*pppppuVar39 + 0x334) != '\0';
                uStack_2be = *(char *)((long)*pppppuVar39 + 0x33c) != '\0';
                plVar36 = plStack_190;
                if (pppplVar45 != (long ****)0x0) {
                  pppplVar16 = pppplVar45;
                  FUN_10ac26490(pppplVar45,pppplVar15 + 9);
                  ppplVar11 = (long ***)*pppppuVar39;
                  if (*(char *)((long)ppplVar11 + 0x334) == '\0') {
LAB_10abeab84:
                    pplVar12 = (long **)0x0;
                  }
                  else {
                    uStack_2bf = 1;
                    uStack_2bc = CONCAT44(uStack_2bc._4_4_,*(undefined4 *)(ppplVar11 + 0x67));
                    if (*(char *)((long)ppplVar11 + 0x334) != '\x02') goto LAB_10abeab84;
                    pplVar12 = ppplVar11[0x69];
                  }
                  pppplStack_1f0 = pppplVar16;
                  pppplStack_1e8 = pppplVar45;
                  if (*(char *)((long)ppplVar11 + 0x33c) == '\0') {
LAB_10abeabb8:
                    pplVar32 = (long **)0x0;
                    if (pplVar12 == (long **)0x0) goto LAB_10abeabb0;
LAB_10abeabc0:
                    plVar36 = pplVar12[0x4d];
                    if (plVar36 != (long *)0x0) {
                      plVar50 = plVar36;
                      (**(code **)(*plVar36 + 0xe8))();
                      ppuVar4 = &PTR_DAT_110ae4700 + ((ulong)plVar50 & 0xffffffff) * 4;
                      if (0x56 < (uint)plVar50) {
                        ppuVar4 = &PTR_DAT_110ae4700;
                      }
                      if ((*(byte *)((long)ppuVar4 + 0x14) & 1) == 0) {
                        FUN_10a00946c(&UNK_10f69a686);
                        goto LAB_10abeb6d0;
                      }
                    }
                  }
                  else {
                    uStack_2be = 1;
                    uStack_2bc = CONCAT44(*(undefined4 *)(ppplVar11 + 0x68),(undefined4)uStack_2bc);
                    if (*(char *)((long)ppplVar11 + 0x33c) != '\x02') goto LAB_10abeabb8;
                    pplVar32 = ppplVar11[0x6b];
                    if (pplVar12 != (long **)0x0) goto LAB_10abeabc0;
LAB_10abeabb0:
                    plVar36 = (long *)0x0;
                  }
                  plStack_198 = plVar36;
                  if (pplVar32 == (long **)0x0) {
                    plVar36 = (long *)0x0;
                  }
                  else {
                    plVar36 = pplVar32[0x4d];
                    if (plVar36 != (long *)0x0) {
                      plVar50 = plVar36;
                      (**(code **)(*plVar36 + 0xe8))();
                      ppuVar4 = &PTR_DAT_110ae4700 + ((ulong)plVar50 & 0xffffffff) * 4;
                      if (0x56 < (uint)plVar50) {
                        ppuVar4 = &PTR_DAT_110ae4700;
                      }
                      if ((*(byte *)((long)ppuVar4 + 0x14) >> 1 & 1) == 0) {
                        FUN_10a00946c(&UNK_10f69a6ba);
                        goto LAB_10abeb6d0;
                      }
                    }
                  }
                }
                plStack_190 = plVar36;
                ppplVar11 = pppplVar15[0x34];
                if (ppplVar11 != (long ***)0x0) {
                  ppplVar46 = ppplVar11;
                  FUN_10a1de960(ppplVar11,pppplVar15 + 9);
                  ppplStack_1e0 = ppplVar46;
                  ppplStack_1d8 = ppplVar11;
                }
                ppplVar11 = ppplStack_228;
                if (ppplStack_1d8 != (long ***)0x0) {
                  ppplVar11 = ppplStack_1d8;
                }
                uStack_2bf = *(char *)((long)ppplVar11 + 0x334) != '\0';
                ppplVar11 = pppplVar15[0xfa];
                if ((ppplVar11 != (long ***)0x0) && (FUN_10aafc55c(), (int)ppplVar11 != 0)) {
                  uStack_248 = CONCAT44(2,(undefined4)uStack_248);
                }
                ppppppplVar19 = ppppppplStack_c8;
                if (ppppppplStack_c8 < ppppppplStack_c0) {
                  FUN_10ac04684(ppppppplStack_c8,&pppppuStack_2e0);
                  ppppppplVar19 = ppppppplVar19 + 0x2c;
                }
                else {
                  ppppppplVar19 = (long *******)&ppppppplStack_d0;
                  FUN_10ac043b0(ppppppplVar19,&pppppuStack_2e0);
                }
                ppppppplStack_c8 = ppppppplVar19;
                if (pppppuStack_2e0 != (undefined *****)0x0) {
                  pppplStack_2d8 = (long ****)pppppuStack_2e0;
                  __ZdlPv();
                }
                goto LAB_10abeace8;
              }
              if (pppplVar48 != (long ****)0x0) goto LAB_10abeace8;
            }
          }
LAB_10abeacec:
          lVar30 = lVar30 + 1;
        } while (lVar30 != param_3);
        ppppppplVar19 = ppppppplStack_d0;
        if (pppppplStack_358 != (long ******)0x0) {
          for (; ppppppplVar19 != ppppppplStack_c8; ppppppplVar19 = ppppppplVar19 + 0x2c) {
            if (((*(byte *)((long)ppppppplVar19 + 0x159) & 1) == 0) &&
               (ppppppplVar19[0x17] == pppppplStack_358)) {
              FUN_10a00946c(&UNK_10f69a6ef);
              goto LAB_10abeb6d0;
            }
          }
        }
      }
      ppppppplVar19 = ppppppplStack_c8;
      if (ppppppplStack_d0 != ppppppplStack_c8) {
        ppppppplVar22 = ppppppplStack_d0 + 0x2c;
        ppppppplVar34 = ppppppplStack_d0;
        while (ppppppplVar22 != ppppppplVar19) {
          if (((((ulong)ppppppplVar34[0x2b] & 1) == 0) && (((ulong)ppppppplVar34[0x57] & 1) == 0))
             && (((ppppppplVar34[0x15] != (long ******)0x0 ||
                  ppppppplVar34[0x1f] != (long ******)0x0) ||
                  ppppppplVar34[0x21] != (long ******)0x0 ||
                 (((ppppppplVar34[0x41] != (long ******)0x0 ||
                   (ppppppplVar34[0x4b] != (long ******)0x0)) ||
                  (ppppppplVar34[0x4d] != (long ******)0x0)))))) {
            ppppppplVar22 = ppppppplVar34 + 0x14;
            func_0x00010abf8a04(ppppppplVar22,ppppppplVar34 + 0x40);
            if (((ulong)ppppppplVar22 & 1) != 0) {
              FUN_10ac04b10(ppppppplVar34,ppppppplVar34[1],ppppppplVar34[0x2c],ppppppplVar34[0x2d],
                            (long)ppppppplVar34[0x2d] - (long)ppppppplVar34[0x2c] >> 1);
              if (ppppppplVar34 != ppppppplVar19) {
                ppppppplVar22 = ppppppplVar34 + 0x58;
                goto LAB_10abeade0;
              }
              break;
            }
          }
          ppppppplVar22 = ppppppplVar34 + 0x58;
          ppppppplVar34 = ppppppplVar34 + 0x2c;
        }
      }
      goto LAB_10abeaf00;
    }
    uVar25 = (long)param_1[2] - (long)*param_1;
    uVar26 = uVar25;
    if (uVar25 <= lVar30 + 1U) {
      uVar26 = lVar30 + 1;
    }
    if (0x7ffffffffffffffd < uVar25) {
      uVar26 = 0x7fffffffffffffff;
    }
    pppplVar15 = param_1;
    FUN_10a5e4f28();
    ppplVar11 = *param_1;
    puVar2 = (undefined2 *)((long)pppplVar15 + lVar37);
    ppplVar38 = (long ***)((long)puVar2 - ((long)param_1[1] - (long)ppplVar11));
    ppplVar46 = (long ***)(puVar2 + 1);
    *puVar2 = (short)param_2;
    _memcpy(ppplVar38,ppplVar11);
    ppplVar11 = *param_1;
    *param_1 = ppplVar38;
    param_1[1] = ppplVar46;
    param_1[2] = (long ***)((long)pppplVar15 + uVar26 * 2);
    if (ppplVar11 != (long ***)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = ppplVar46;
  return;
LAB_10abeade0:
  if (ppppppplVar22 == ppppppplVar19) goto LAB_10abeaefc;
  if (((((ulong)ppppppplVar34[0x2b] & 1) == 0) && (((ulong)ppppppplVar22[0x2b] & 1) == 0)) &&
     ((((ppppppplVar34[0x15] != (long ******)0x0 || ppppppplVar34[0x1f] != (long ******)0x0) ||
        ppppppplVar34[0x21] != (long ******)0x0 ||
       ((ppppppplVar22[0x15] != (long ******)0x0 || (ppppppplVar22[0x1f] != (long ******)0x0)))) ||
      (ppppppplVar22[0x21] != (long ******)0x0)))) {
    ppppppplVar23 = ppppppplVar34 + 0x14;
    func_0x00010abf8a04(ppppppplVar23,ppppppplVar22 + 0x14);
    if ((int)ppppppplVar23 == 0) goto LAB_10abeae58;
    FUN_10ac04b10(ppppppplVar34,ppppppplVar34[1],*ppppppplVar22,ppppppplVar22[1],
                  (long)ppppppplVar22[1] - (long)*ppppppplVar22 >> 1);
    ppppppplVar23 = ppppppplVar34;
  }
  else {
LAB_10abeae58:
    ppppppplVar23 = ppppppplVar34 + 0x2c;
    FUN_10ac04e80(ppppppplVar23,ppppppplVar22);
    pppppplVar29 = ppppppplVar22[4];
    pppppplVar27 = ppppppplVar22[3];
    *(undefined8 *)((long)ppppppplVar34 + 0x186) = *(undefined8 *)((long)ppppppplVar22 + 0x26);
    ppppppplVar34[0x30] = pppppplVar29;
    ppppppplVar34[0x2f] = pppppplVar27;
    FUN_10ac04d14(ppppppplVar34 + 0x32,ppppppplVar22 + 6);
    func_0x00010ac04d64(ppppppplVar34 + 0x34,ppppppplVar22 + 8);
    func_0x00010ac04dd8(ppppppplVar34 + 0x3d,ppppppplVar22 + 0x11);
    ppppppplVar34[0x3f] = ppppppplVar22[0x13];
    FUN_10ac04f70(ppppppplVar34 + 0x41,ppppppplVar22 + 0x15);
    uVar52 = *(undefined8 *)((long)ppppppplVar22 + 0x111);
    uVar51 = *(undefined8 *)((long)ppppppplVar22 + 0x109);
    pppppplVar53 = ppppppplVar22[0x1e];
    pppppplVar29 = ppppppplVar22[0x21];
    pppppplVar27 = ppppppplVar22[0x20];
    ppppppplVar34[0x4b] = ppppppplVar22[0x1f];
    ppppppplVar34[0x4a] = pppppplVar53;
    ppppppplVar34[0x4d] = pppppplVar29;
    ppppppplVar34[0x4c] = pppppplVar27;
    *(undefined8 *)((long)ppppppplVar34 + 0x271) = uVar52;
    *(undefined8 *)((long)ppppppplVar34 + 0x269) = uVar51;
    func_0x00010ac04e28(ppppppplVar34 + 0x50,ppppppplVar22 + 0x24);
    pppppplVar29 = ppppppplVar22[0x2a];
    pppppplVar27 = ppppppplVar22[0x29];
    *(undefined2 *)(ppppppplVar34 + 0x57) = *(undefined2 *)(ppppppplVar22 + 0x2b);
    ppppppplVar34[0x56] = pppppplVar29;
    ppppppplVar34[0x55] = pppppplVar27;
  }
  ppppppplVar22 = ppppppplVar22 + 0x2c;
  ppppppplVar34 = ppppppplVar23;
  goto LAB_10abeade0;
code_r0x00010abeb0cc:
  pppppplVar27 = (long ******)((long)pppppplVar27 + -1);
  ppppppplVar23 = (long *******)((long)ppppppplVar23 + 1);
  if (pppppplVar27 == (long ******)0x0) goto LAB_10abeb130;
  goto LAB_10abeb0c4;
LAB_10abeaefc:
  ppppppplVar19 = ppppppplVar34 + 0x2c;
LAB_10abeaf00:
  if (ppppppplVar19 <= ppppppplStack_c8) {
    ppppppplVar22 = ppppppplStack_c8;
    if (ppppppplVar19 != ppppppplStack_c8) {
      while (ppppppplVar34 = ppppppplStack_c8, ppppppplStack_c8 = ppppppplVar19,
            ppppppplVar34 != ppppppplVar19) {
        ppppppplVar23 = ppppppplVar34 + -0x2c;
        ppppppplStack_c8 = ppppppplVar23;
        if (*ppppppplVar23 != (long ******)0x0) {
          ppppppplVar34[-0x2b] = *ppppppplVar23;
          ppppppplStack_c8 = ppppppplVar22;
          __ZdlPv();
          ppppppplStack_c8 = ppppppplVar23;
          ppppppplVar22 = ppppppplStack_c8;
        }
      }
    }
    ppppppplVar23 = ppppppplStack_c8;
    pppppuStack_2e0 = (undefined *****)0x0;
    pppplStack_2d8 = (long ****)0x0;
    uStack_2d0 = 0;
    pppppuVar21 = pppppuStack_2e0;
    pppplVar15 = pppplStack_2d8;
    ppppppplVar22 = ppppppplStack_d0;
    ppppppplVar34 = ppppppplStack_c8;
    for (ppppppplVar19 = ppppppplStack_d0; pppppuStack_2e0 = pppppuVar21,
        pppplStack_2d8 = pppplVar15, ppppppplStack_d0 = ppppppplVar22,
        ppppppplStack_c8 = ppppppplVar34, ppppppplVar19 != ppppppplVar23;
        ppppppplVar19 = ppppppplVar19 + 0x2c) {
      if (pppppuVar21 == (undefined *****)pppplVar15) {
LAB_10abeb04c:
        if (pppppuVar21 == (undefined *****)pppplVar15) goto LAB_10abeb054;
      }
      else {
        do {
          ppppppplVar22 = ppppppplVar19 + 0x14;
          func_0x00010abf8a74(ppppppplVar22,pppppuVar21);
          if (((ulong)ppppppplVar22 & 1) != 0) goto LAB_10abeb04c;
          pppppuVar21 = pppppuVar21 + 0x10;
        } while (pppppuVar21 != (undefined *****)pppplVar15);
LAB_10abeb054:
        FUN_10abec4a4(&pppppuStack_2e0,ppppppplVar19 + 0x14);
      }
      pppppuVar21 = pppppuStack_2e0;
      pppplVar15 = pppplStack_2d8;
      ppppppplVar22 = ppppppplStack_d0;
      ppppppplVar34 = ppppppplStack_c8;
    }
    if (ppppppplVar22 != ppppppplVar34) {
      lVar30 = 0;
      pppppuVar39 = pppppuVar21;
      ppppppplVar19 = ppppppplVar22;
joined_r0x00010abeb090:
      do {
        if (pppppuVar21 != (undefined *****)pppplVar15) {
          ppppppplVar23 = (long *******)((long)ppppppplVar19 + 0xa0);
          func_0x00010abf8a74(ppppppplVar23,pppppuVar21);
          pppppuVar39 = pppppuVar21;
          if (((ulong)ppppppplVar23 & 1) == 0) {
            pppppuVar21 = pppppuVar21 + 0x10;
            pppppuVar39 = (undefined *****)pppplVar15;
            goto joined_r0x00010abeb090;
          }
        }
        pppppplVar27 = *(long *******)((long)ppppppplVar19 + 0x88);
        if (pppppplVar27 != (long ******)0x0) {
          ppppppplVar23 = (long *******)((long)ppppppplVar19 + 0x90);
LAB_10abeb0c4:
          if (*(char *)ppppppplVar23 == '\0') goto code_r0x00010abeb0cc;
          if ((undefined *****)pppplVar15 != pppppuVar39) {
            if (*(long *******)((long)ppppppplVar19 + 0x30) != (long ******)0x0) {
              _memset(ppppppplVar22 + lVar30 * 0x2c + 7,1);
            }
            pppplVar16 = (long ****)(pppppuVar39 + 0x10);
            pppplVar48 = (long ****)pppppuVar39;
            while (pppplVar16 != pppplVar15) {
              FUN_10ac04f70(pppplVar48 + 1,pppplVar48 + 0x11);
              pppplVar48[0xb] = pppplVar48[0x1b];
              pppplVar48[10] = pppplVar48[0x1a];
              pppplVar48[0xd] = pppplVar48[0x1d];
              pppplVar48[0xc] = pppplVar48[0x1c];
              *(undefined8 *)((long)pppplVar48 + 0x71) = *(undefined8 *)((long)pppplVar48 + 0xf1);
              *(undefined8 *)((long)pppplVar48 + 0x69) = *(undefined8 *)((long)pppplVar48 + 0xe9);
              pppplVar16 = pppplVar48 + 0x20;
              pppplVar48 = pppplVar48 + 0x10;
            }
            while (pppplVar15 != pppplVar48) {
              pppplVar15 = pppplVar15 + -0x10;
              (*(code *)**pppplVar15)(pppplVar15);
            }
            goto LAB_10abeb15c;
          }
        }
LAB_10abeb130:
        pppppplVar27 = *(long *******)((long)ppppppplVar19 + 0x30);
        if (pppppplVar27 != (long ******)0x0) {
          pppppplVar29 = (long ******)0x0;
          do {
            *(undefined1 *)((long)ppppppplVar19 + (long)(pppppplVar29 + 7)) = 0;
            *(long *******)((long)ppppppplVar19 + ((long)pppppplVar29 + 0x25) * 8) =
                 (long ******)0x0;
            pppppplVar29 = (long ******)((long)pppppplVar29 + 1);
          } while (pppppplVar27 != pppppplVar29);
        }
        *(undefined2 *)((long)ppppppplVar19 + 0x21) = 0;
        pppplVar48 = pppplVar15;
LAB_10abeb15c:
        ppppppplVar19 = (long *******)((long)ppppppplVar19 + 0x160);
        lVar30 = lVar30 + 1;
        pppplVar15 = pppplVar48;
        pppppuVar21 = pppppuStack_2e0;
        pppppuVar39 = pppppuStack_2e0;
      } while (ppppppplVar19 != ppppppplVar34);
    }
    pppplStack_2d8 = pppplVar15;
    ppppppplVar34 = ppppppplStack_c8;
    pppplStack_150 = (undefined8 ****)0x0;
    ppppuStack_148 = (undefined8 ****)0x0;
    ppppuStack_140 = (undefined ****)0x0;
    pppplVar15 = pppplStack_150;
    ppppuVar40 = ppppuStack_148;
    ppppppplVar22 = ppppppplStack_c8;
    for (ppppppplVar19 = ppppppplStack_d0; pppplStack_150 = pppplVar15, ppppuStack_148 = ppppuVar40,
        ppppppplVar23 = ppppppplStack_d0, ppppppplVar7 = ppppppplVar22,
        ppppppplStack_c8 = ppppppplVar22, ppppppplVar19 != ppppppplVar34;
        ppppppplVar19 = ppppppplVar19 + 0x2c) {
      if (pppplVar15 == ppppuVar40) {
LAB_10abeb1ec:
        if (pppplVar15 == ppppuVar40) goto LAB_10abeb1f4;
      }
      else {
        do {
          ppppppplVar22 = ppppppplVar19 + 0x14;
          func_0x00010abf8ad8(ppppppplVar22,pppplVar15);
          if (((ulong)ppppppplVar22 & 1) != 0) goto LAB_10abeb1ec;
          pppplVar15 = pppplVar15 + 0x10;
        } while (pppplVar15 != ppppuVar40);
LAB_10abeb1f4:
        FUN_10abec4a4(&pppplStack_150,ppppppplVar19 + 0x14);
      }
      pppplVar15 = pppplStack_150;
      ppppuVar40 = ppppuStack_148;
      ppppppplVar22 = ppppppplStack_c8;
    }
    for (; ppppppplVar23 != ppppppplVar22; ppppppplVar23 = ppppppplVar23 + 0x2c) {
      FUN_10abebddc(param_1,ppppppplVar23);
      ppppuVar40 = ppppuStack_148;
      ppppuVar8 = ppppuStack_148;
      pppplVar15 = pppplStack_150;
      pppplVar16 = pppplStack_150;
      if ((*(byte *)((long)ppppppplVar23 + 0x21) & 1) != 0) {
        for (; pppplVar15 != ppppuVar40; pppplVar15 = pppplVar15 + 0x10) {
          ppppppplVar19 = ppppppplVar23 + 0x14;
          func_0x00010abf8ad8(ppppppplVar19,pppplVar15);
          pppplVar16 = pppplVar15;
          if (((ulong)ppppppplVar19 & 1) != 0) break;
          pppplVar16 = ppppuVar40;
        }
        if (ppppuVar40 == pppplVar16) {
          *(undefined1 *)((long)ppppppplVar23 + 0x21) = 0;
          ppppuVar8 = ppppuStack_148;
        }
        else {
          ppppuVar8 = pppplVar16 + 0x10;
          while (ppppuVar8 != ppppuVar40) {
            FUN_10ac04f70(pppplVar16 + 1,pppplVar16 + 0x11);
            pppplVar16[0xb] = pppplVar16[0x1b];
            pppplVar16[10] = pppplVar16[0x1a];
            pppplVar16[0xd] = pppplVar16[0x1d];
            pppplVar16[0xc] = pppplVar16[0x1c];
            *(undefined8 *)((long)pppplVar16 + 0x71) = *(undefined8 *)((long)pppplVar16 + 0xf1);
            *(undefined8 *)((long)pppplVar16 + 0x69) = *(undefined8 *)((long)pppplVar16 + 0xe9);
            ppppuVar8 = pppplVar16 + 0x20;
            pppplVar16 = pppplVar16 + 0x10;
          }
          while (ppppuVar8 = pppplVar16, ppppuVar40 != pppplVar16) {
            ppppuVar40 = ppppuVar40 + -0x10;
            (*(code *)**ppppuVar40)(ppppuVar40);
          }
        }
      }
      ppppuStack_148 = ppppuVar8;
      ppppppplVar7 = ppppppplStack_d0;
    }
    uVar26 = ((long)ppppppplStack_c8 - (long)ppppppplVar7 >> 5) * 0x2e8ba2e8ba2e8ba3;
    if ((int)uVar26 < 1) {
      plVar36 = (long *)0x0;
    }
    else {
      plVar49 = (long *)0x0;
      plVar50 = (long *)0x0;
      plVar35 = (long *)0x0;
      uVar26 = uVar26 & 0x7fffffff;
      do {
        uVar33 = uVar26 - 1;
        uVar25 = ((long)ppppppplStack_c8 - (long)ppppppplStack_d0 >> 5) * 0x2e8ba2e8ba2e8ba3;
        if (uVar25 < uVar33 || uVar25 - uVar33 == 0) goto LAB_10abeb6d0;
        ppppppplVar19 = ppppppplStack_d0 + uVar33 * 0x2c;
        plVar41 = plVar35;
        plVar36 = plVar35;
        if (plVar35 == plVar49) {
LAB_10abeb380:
          if (plVar41 == plVar49) goto LAB_10abeb3a0;
          *(undefined1 *)((long)ppppppplVar19 + 0x2d) = 1;
          *(undefined1 *)(*plVar41 + 0x2c) = 1;
          *plVar41 = (long)ppppppplVar19;
        }
        else {
          do {
            ppppppplVar22 = ppppppplVar19 + 0x14;
            func_0x00010abf8ad8(ppppppplVar22,*plVar41 + 0xa0);
            if (((ulong)ppppppplVar22 & 1) != 0) goto LAB_10abeb380;
            plVar41 = plVar41 + 1;
          } while (plVar41 != plVar49);
LAB_10abeb3a0:
          if (plVar49 < plVar50) {
            *plVar49 = (long)ppppppplVar19;
            plVar49 = plVar49 + 1;
          }
          else {
            lVar30 = (long)plVar49 - (long)plVar35;
            uVar25 = (lVar30 >> 3) + 1;
            if (uVar25 >> 0x3d != 0) {
              func_0x00010ac04ee4();
              goto LAB_10abeb6d0;
            }
            uVar28 = (long)plVar50 - (long)plVar35 >> 2;
            if (uVar28 <= uVar25) {
              uVar28 = uVar25;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plVar50 - (long)plVar35)) {
              uVar28 = 0x1fffffffffffffff;
            }
            if (uVar28 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10abeb6d0;
            }
            lVar37 = uVar28 << 3;
            __Znwm();
            puVar3 = (undefined8 *)(lVar37 + lVar30);
            plVar50 = (long *)(lVar37 + uVar28 * 8);
            plVar36 = puVar3 + -(lVar30 >> 3);
            plVar49 = puVar3 + 1;
            *puVar3 = ppppppplVar19;
            _memcpy(plVar36,plVar35,lVar30);
            if (plVar35 != (long *)0x0) {
              __ZdlPv(plVar35);
            }
          }
        }
        bVar1 = 1 < (long)uVar26;
        plVar35 = plVar36;
        uVar26 = uVar33;
      } while (bVar1);
    }
    FUN_10abec66c(auStack_100);
    FUN_10abec180(param_1,&ppppppplStack_d0);
    if (plVar36 != (long *)0x0) {
      __ZdlPv(plVar36);
    }
    FUN_10ac04ef8(&pppplStack_150);
    FUN_10ac04ef8(&pppppuStack_2e0);
    FUN_10abec66c(auStack_100);
    func_0x00010ac04854(&ppppppplStack_d0);
    return;
  }
LAB_10abeb6d0:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10abeb6d4);
  (*pcVar9)();
}



/* Entry: 10abea46c; end: 10abeb8ff;  */

/* WARNING: Removing unreachable block (ram,0x00010abeb61c) */
/* WARNING: Removing unreachable block (ram,0x00010abeb624) */
/* WARNING: Removing unreachable block (ram,0x00010abeb4d4) */
/* WARNING: Removing unreachable block (ram,0x00010abeb4e4) */
/* WARNING: Removing unreachable block (ram,0x00010abeaf1c) */
/* WARNING: Removing unreachable block (ram,0x00010abeaf28) */
/* WARNING: Removing unreachable block (ram,0x00010abeafcc) */
/* WARNING: Removing unreachable block (ram,0x00010abeb5d8) */
/* WARNING: Removing unreachable block (ram,0x00010abeb5e8) */
/* WARNING: Removing unreachable block (ram,0x00010abeb684) */
/* WARNING: Removing unreachable block (ram,0x00010abeb68c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10abea46c(ulong ****param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  short sVar4;
  undefined2 uVar5;
  long *******ppppppplVar6;
  undefined8 ****ppppuVar7;
  code *pcVar8;
  int iVar9;
  ulong **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong ****ppppuVar13;
  ulong ****ppppuVar14;
  ulong ****ppppuVar15;
  long lVar16;
  long *******ppppppplVar17;
  ulong ****ppppuVar18;
  undefined *****pppppuVar19;
  ulong *puVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  ulong *puVar23;
  uint uVar24;
  ulong uVar25;
  ulong ***pppuVar26;
  long ******pppppplVar27;
  ulong uVar28;
  long ******pppppplVar29;
  ulong uVar30;
  ulong uVar31;
  ulong **ppuVar32;
  long lVar33;
  ulong uVar34;
  long *******ppppppplVar35;
  long *plVar36;
  long *plVar37;
  undefined *****pppppuVar38;
  undefined8 ****ppppuVar39;
  long *plVar40;
  ulong ****ppppuVar41;
  long lVar42;
  ulong ****ppppuVar43;
  ulong ****ppppuVar44;
  long lVar45;
  ulong ***pppuVar46;
  ulong ****ppppuVar47;
  ulong ****ppppuVar48;
  long *plVar49;
  long *plVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  long ******pppppplVar53;
  long ******pppppplStack_318;
  undefined *****pppppuStack_2a0;
  ulong ****ppppuStack_298;
  undefined8 uStack_290;
  undefined2 uStack_288;
  undefined4 uStack_284;
  undefined1 uStack_280;
  undefined1 uStack_27f;
  undefined1 uStack_27e;
  undefined8 uStack_27c;
  undefined2 uStack_274;
  long lStack_270;
  undefined1 auStack_268 [8];
  long lStack_260;
  long alStack_258 [8];
  long lStack_218;
  char acStack_210 [8];
  undefined8 uStack_208;
  undefined **ppuStack_200;
  long lStack_1f8;
  ulong *puStack_1f0;
  ulong ***pppuStack_1e8;
  ulong ****ppppuStack_1b0;
  ulong ****ppppuStack_1a8;
  ulong ***pppuStack_1a0;
  ulong ***pppuStack_198;
  undefined4 uStack_18c;
  long lStack_180;
  long alStack_178 [4];
  ulong *puStack_158;
  ulong *puStack_150;
  undefined2 uStack_148;
  undefined8 *******pppppppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined1 auStack_128 [24];
  ulong ****ppppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined ****ppppuStack_100;
  char cStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined7 uStack_e0;
  char cStack_d9;
  ulong ****ppppuStack_d8;
  ulong ****ppppuStack_d0;
  undefined7 uStack_c8;
  char cStack_c1;
  undefined1 auStack_c0 [48];
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  
  ppppppplStack_90 = (long *******)0x0;
  ppppppplStack_88 = (long *******)0x0;
  ppppppplStack_80 = (long *******)0x0;
  FUN_10ac04884(auStack_c0,&UNK_10f69a3de);
  ppuVar10 = param_1[0x10b][0x45];
  (*(code *)(*ppuVar10)[0xd])();
  if (param_3 != 0) {
    uVar25 = (ulong)*(int *)((long)ppuVar10 + 0x7c);
    ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar12 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    pppppplStack_318 = (long ******)0x0;
    lVar33 = 0;
    pppppuVar19 = (undefined *****)ppuVar12;
    do {
      iVar9 = (int)pppppuVar19;
      FUN_10ad055a0();
      if (iVar9 != 0) {
        if (*ppuVar11 == (undefined *)0x0) {
          pppuVar26 = (ulong ***)*ppuVar12;
          if ((pppuVar26 == (ulong ***)0x0) ||
             ((*(code *)(*pppuVar26)[3])(), pppuVar26 == (ulong ***)0x0)) goto LAB_10abea574;
          pppuVar26 = pppuVar26 + 7;
        }
        else {
          pppuVar26 = (ulong ***)(*ppuVar11 + 8);
        }
        if (((uint)(*pppuVar26)[2] >> 1 & 1) != 0) {
          func_0x000107c2b054(&ppppuStack_d8,&UNK_10f69a3f0);
          func_0x000107c2b054(&ppppuStack_f0,"");
          pppppuStack_2a0 = (undefined *****)"null";
          if (cStack_c1 != '\0') {
            pppppuStack_2a0 = (undefined *****)&ppppuStack_d8;
          }
          ppppuStack_110 = (ulong ****)"null";
          if (cStack_d9 != '\0') {
            ppppuStack_110 = (ulong ****)&ppppuStack_f0;
          }
          FUN_10a224324(&pppppuStack_2a0,&ppppuStack_110);
          if (cStack_c1 == '\0') {
            pppppuStack_2a0 = (undefined *****)((ulong)pppppuStack_2a0 & 0xffffffffffffff00);
          }
          else {
            ppppuStack_298 = ppppuStack_d0;
            pppppuStack_2a0 = (undefined *****)ppppuStack_d8;
            uStack_290 = CONCAT17(cStack_c1,uStack_c8);
          }
          uStack_288 = CONCAT11(uStack_288._1_1_,cStack_c1 != '\0');
          if (cStack_d9 == '\0') {
            ppppuStack_110 = (ulong ****)((ulong)ppppuStack_110 & 0xffffffffffffff00);
          }
          else {
            ppppuStack_108 = ppppuStack_e8;
            ppppuStack_110 = ppppuStack_f0;
            ppppuStack_100 = (undefined ****)CONCAT17(cStack_d9,uStack_e0);
          }
          cStack_f8 = cStack_d9 != '\0';
          FUN_10a234a0c(&pppppuStack_2a0,&ppppuStack_110);
          goto LAB_10abeb6d0;
        }
      }
LAB_10abea574:
      uVar5 = *(undefined2 *)(param_2 + lVar33 * 2);
      ppppuVar13 = param_1 + 4;
      FUN_10abea338(ppppuVar13,uVar5);
      sVar4 = *(short *)((long)ppppuVar13 + 2);
      if (sVar4 == -1) {
        pppppuStack_2a0 = (undefined *****)0x0;
        ppppuStack_298 = (ulong ****)0x0;
        uStack_290 = 0;
        uStack_288 = 0x300;
        uStack_284 = 0;
        uStack_280 = 0;
        uStack_27f = 0;
        uStack_27e = 0;
        uStack_27c = 0x3f800000;
        uStack_274 = 0;
        lStack_270 = 0;
        lStack_260 = 0;
        lStack_218 = 0;
        uStack_208 = 0;
        ppuStack_200 = &PTR_FUN_110c54d98;
        lStack_1f8 = 0;
        ppppuStack_1a8 = (ulong ****)0x0;
        ppppuStack_1b0 = (ulong ****)0x0;
        pppuStack_1a0 = (ulong ***)0x0;
        uStack_18c = 0;
        lStack_180 = 0;
        puStack_158 = (ulong *)0x0;
        puStack_150 = (ulong *)0x0;
        uStack_148 = 0;
        FUN_10abea3ac(&pppppuStack_2a0,uVar5);
        ppppppplVar17 = ppppppplStack_88;
        uStack_148 = CONCAT11(1,(undefined1)uStack_148);
        if (ppppppplStack_88 < ppppppplStack_80) {
          FUN_10ac04684(ppppppplStack_88,&pppppuStack_2a0);
          ppppppplVar17 = ppppppplVar17 + 0x2c;
        }
        else {
          ppppppplVar17 = (long *******)&ppppppplStack_90;
          FUN_10ac043b0(ppppppplVar17,&pppppuStack_2a0);
        }
        pppppuVar19 = pppppuStack_2a0;
        ppppppplStack_88 = ppppppplVar17;
        if (pppppuStack_2a0 == (undefined *****)0x0) goto LAB_10abeacec;
        ppppuStack_298 = (ulong ****)pppppuStack_2a0;
        pppppuVar38 = pppppuStack_2a0;
LAB_10abeace8:
        __ZdlPv();
        pppppuVar19 = pppppuVar38;
      }
      else {
        ppppuVar13 = param_1 + 4;
        FUN_10a01f6d4(ppppuVar13,sVar4);
        ppppuVar14 = param_1 + 0xbc;
        func_0x00010a04a0d4(ppppuVar14,sVar4);
        pppppuVar19 = (undefined *****)param_1;
        FUN_10abebec4(param_1,ppppuVar13);
        if (((ulong)pppppuVar19 & 1) != 0) {
          pppppuVar19 = (undefined *****)param_1;
          (*(code *)(*param_1)[0x10])();
          uVar24 = (uint)*(byte *)((long)ppppuVar13 + 0x44);
          if ((int)pppppuVar19 == 0) {
            uVar24 = 0;
          }
          uVar31 = ((long)ppppuVar13[0x2e] - (long)ppppuVar13[0x2d] >> 4) * -0x5555555555555555;
          if (uVar25 <= uVar31 && uVar31 - uVar25 != 0) {
            __ZNSt3__19to_stringEm(auStack_128,uVar25);
            FUN_109feb280(&ppppuStack_f0,&UNK_10f69a416,auStack_128);
            FUN_10a012db0(&ppppuStack_d8,&ppppuStack_f0,&UNK_10f69a434);
            __ZNSt3__19to_stringEm(&pppppppuStack_140,uVar31);
            if (-1 < (char)bStack_129) {
              uStack_138 = (ulong)bStack_129;
              pppppppuStack_140 = &pppppppuStack_140;
            }
            pppppuVar19 = (undefined *****)&ppppuStack_d8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppuVar19,pppppppuStack_140,uStack_138);
            ppppuStack_108 = (undefined8 ****)pppppuVar19[1];
            ppppuStack_110 = (ulong ****)*pppppuVar19;
            ppppuStack_100 = pppppuVar19[2];
            pppppuVar19[1] = (undefined ****)0x0;
            pppppuVar19[2] = (undefined ****)0x0;
            *pppppuVar19 = (undefined ****)0x0;
            FUN_10a012db0(&pppppuStack_2a0,&ppppuStack_110,&UNK_10f69a44c);
            FUN_10a0029c0(&pppppuStack_2a0);
            goto LAB_10abeb6d0;
          }
          if (ppppuVar13[0x2e] == ppppuVar13[0x2d]) {
            ppppuVar48 = (ulong ****)0x0;
            pppppuVar38 = (undefined *****)0x0;
          }
          else {
            lVar45 = 0;
            ppppuVar44 = (ulong ****)0x0;
            uVar34 = 0;
            ppppuVar18 = (ulong ****)0x0;
            ppppuVar47 = (ulong ****)0x0;
            do {
              uVar28 = ((long)ppppuVar13[0x2e] - (long)ppppuVar13[0x2d] >> 4) * -0x5555555555555555;
              if (uVar28 < uVar34 || uVar28 - uVar34 == 0) goto LAB_10abeb6d0;
              ppppuVar41 = *(ulong *****)((long)ppppuVar13[0x2d] + lVar45);
              pppppuVar38 = (undefined *****)ppppuVar18;
              ppppuVar48 = ppppuVar47;
              if (ppppuVar41 == (ulong ****)0x0) {
                if (uVar34 == 0) {
                  FUN_10a00946c(&UNK_10f69a4fe);
                  goto LAB_10abeb6d0;
                }
                break;
              }
              if (ppppuVar18 == ppppuVar47) {
                if (*(char *)((long)ppppuVar41 + 0x2fc) == '\0') {
                  FUN_10a1ddfe4(ppppuVar41,param_1 + 0x106);
                  FUN_10a1de1fc(ppppuVar41,param_1 + 0x107);
                }
              }
              else {
                ppppuVar43 = (ulong ****)*ppppuVar18;
                ppppuVar15 = ppppuVar43;
                func_0x00010a1de5f0();
                pppppuStack_2a0 = (undefined *****)ppppuVar15;
                FUN_10a1ddfe4(ppppuVar41,&pppppuStack_2a0);
                FUN_10a1de1fc(ppppuVar41,(long)ppppuVar43 + 0x2c4);
              }
              pppppuVar19 = (undefined *****)ppppuVar41;
              func_0x00010a1de5f0();
              if ((int)pppppuVar19 >> (uVar24 & 0x1f) != 0 &&
                  (int)((ulong)pppppuVar19 >> 0x20) >> (uVar24 & 0x1f) != 0) {
                if (ppppuVar47 < ppppuVar44) {
                  ppppuVar48 = ppppuVar47 + 1;
                  *ppppuVar47 = (ulong ***)ppppuVar41;
                }
                else {
                  lVar42 = (long)ppppuVar47 - (long)ppppuVar18;
                  uVar28 = (lVar42 >> 3) + 1;
                  if (uVar28 >> 0x3d != 0) {
                    FUN_10ac04afc();
                    goto LAB_10abeb6d0;
                  }
                  uVar30 = (long)ppppuVar44 - (long)ppppuVar18 >> 2;
                  if (uVar30 <= uVar28) {
                    uVar30 = uVar28;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)ppppuVar44 - (long)ppppuVar18)) {
                    uVar30 = 0x1fffffffffffffff;
                  }
                  if (uVar30 >> 0x3d != 0) {
                    func_0x000109ffded8();
                    goto LAB_10abeb6d0;
                  }
                  lVar16 = uVar30 << 3;
                  __Znwm();
                  puVar2 = (undefined8 *)(lVar16 + lVar42);
                  ppppuVar44 = (ulong ****)(lVar16 + uVar30 * 8);
                  pppppuVar38 = (undefined *****)(puVar2 + -(lVar42 >> 3));
                  ppppuVar48 = (ulong ****)(puVar2 + 1);
                  *puVar2 = ppppuVar41;
                  pppppuVar19 = pppppuVar38;
                  _memcpy(pppppuVar38,ppppuVar18,lVar42);
                  if (ppppuVar18 != (ulong ****)0x0) {
                    __ZdlPv();
                    pppppuVar19 = (undefined *****)ppppuVar18;
                  }
                }
              }
              uVar34 = uVar34 + 1;
              lVar45 = lVar45 + 0x30;
              ppppuVar18 = (ulong ****)pppppuVar38;
              ppppuVar47 = ppppuVar48;
            } while (uVar31 != uVar34);
          }
          ppppuVar44 = (ulong ****)ppppuVar13[0x30];
          if (ppppuVar44 == (ulong ****)0x0) {
            ppppuVar44 = (ulong ****)0x0;
          }
          else {
            pppppuVar19 = (undefined *****)ppppuVar44;
            ___dynamic_cast(ppppuVar44,&PTR_DAT_110c5e408,&PTR_DAT_110c69900,0xfffffffffffffffe);
            if (pppppuVar19 == (undefined *****)0x0) {
              if (pppppuVar38 == (undefined *****)ppppuVar48) {
                if (*(char *)((long)ppppuVar44 + 0x29c) == '\x01') {
                  pppppuVar19 = (undefined *****)ppppuVar44;
                  FUN_10ac26770(ppppuVar44,param_1 + 0x106);
                }
              }
              else {
                ppppuVar18 = (ulong ****)*pppppuVar38;
                func_0x00010a1de5f0();
                pppppuVar19 = (undefined *****)ppppuVar44;
                pppppuStack_2a0 = (undefined *****)ppppuVar18;
                FUN_10ac26770(ppppuVar44,&pppppuStack_2a0);
              }
              if ((int)ppppuVar44[0x54] >> (uVar24 & 0x1f) < 1) goto LAB_10abea93c;
              if ((int)((ulong)ppppuVar44[0x54] >> 0x20) >> (uVar24 & 0x1f) < 1) {
                ppppuVar44 = (ulong ****)0x0;
              }
            }
            else if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
              ppppuVar44 = (ulong ****)0x0;
            }
            else {
              pppppuVar19 = (undefined *****)0x1;
              func_0x00010ae06f08(1,2,&UNK_10f69a533,&UNK_10f69a578,0x22c,&UNK_10f69a5db);
LAB_10abea93c:
              ppppuVar44 = (ulong ****)0x0;
            }
          }
          if ((pppppuVar38 != (undefined *****)ppppuVar48) || (ppppuVar44 != (ulong ****)0x0)) {
            pppppuStack_2a0 = (undefined *****)0x0;
            ppppuStack_298 = (ulong ****)0x0;
            uStack_290 = 0;
            uStack_288 = 0x300;
            uStack_284 = 0;
            uStack_280 = 0;
            uStack_27f = 0;
            uStack_27e = 0;
            uStack_27c = 0x3f800000;
            uStack_274 = 0;
            lStack_270 = 0;
            lStack_260 = 0;
            lStack_218 = 0;
            uStack_208 = 0;
            ppuStack_200 = &PTR_FUN_110c54d98;
            lStack_1f8 = 0;
            ppppuStack_1a8 = (ulong ****)0x0;
            ppppuStack_1b0 = (ulong ****)0x0;
            pppuStack_1a0 = (ulong ***)0x0;
            uStack_18c = 0;
            lStack_180 = 0;
            puStack_158 = (ulong *)0x0;
            puStack_150 = (ulong *)0x0;
            uStack_148 = 0;
            FUN_10abea3ac(&pppppuStack_2a0,uVar5);
            if (pppppuVar38 == (undefined *****)ppppuVar48) goto LAB_10abeb6d0;
            lVar45 = 0;
            pppppplVar27 = (long ******)*pppppuVar38;
            uStack_288 = *(undefined2 *)((long)pppppplVar27 + 0x304);
            uStack_208 = CONCAT44(-(uint)((int)((ulong)pppppplVar27[0x6f] >> 0x20) == 1),
                                  (uint)(byte)~-((int)pppppplVar27[0x6f] == 0)) & 0x100000001;
            uStack_148 = CONCAT11(uStack_148._1_1_,*(int *)(ppppuVar14 + 0x120) != 0);
            if (*(char *)((long)ppppuVar13 + 0x49) != '\0') {
              pppppplStack_318 = pppppplVar27;
            }
            uStack_18c = *(undefined4 *)(ppppuVar13 + 8);
            lVar42 = (long)ppppuVar48 - (long)pppppuVar38 >> 3;
            do {
              pppuVar46 = (ulong ***)pppppuVar38[lVar45];
              pppuVar26 = pppuVar46;
              FUN_10a1de960(pppuVar46,ppppuVar13 + 9);
              if (pppuVar46[0x6d] == (ulong **)0x0) {
                puVar23 = (ulong *)0x0;
              }
              else {
                puVar23 = pppuVar46[0x6d][0x4d];
              }
              FUN_10abebf78(*(undefined4 *)((long)pppuVar46 + 0x324),
                            *(undefined4 *)(pppuVar46 + 0x65),
                            *(undefined4 *)((long)pppuVar46 + 0x32c),
                            *(undefined4 *)(pppuVar46 + 0x66),&ppppuStack_110,param_1,puVar23,lVar42
                            ,*(undefined1 *)(pppuVar46 + 100),pppuVar46);
              (&puStack_1f0)[lStack_1f8 * 2] = (ulong *)pppuVar26;
              (&puStack_1f0)[lStack_1f8 * 2 + 1] = (ulong *)pppuVar46;
              lStack_1f8 = lStack_1f8 + 1;
              alStack_178[lStack_180] = (long)ppppuStack_110;
              lStack_180 = lStack_180 + 1;
              alStack_258[lStack_260 * 2 + 1] = (long)ppppuStack_100;
              alStack_258[lStack_260 * 2] = (long)ppppuStack_108;
              lStack_260 = lStack_260 + 1;
              acStack_210[lStack_218] = cStack_f8;
              lStack_218 = lStack_218 + 1;
              auStack_268[lStack_270] = acStack_210[lVar45] != '\0';
              lStack_270 = lStack_270 + 1;
              lVar45 = lVar45 + 1;
            } while (lVar42 != lVar45);
            uStack_148 = CONCAT11(*(char *)((long)ppppuVar13 + 0x49) != '\0',(undefined1)uStack_148)
            ;
            uStack_27f = *(char *)((long)*pppppuVar38 + 0x334) != '\0';
            uStack_27e = *(char *)((long)*pppppuVar38 + 0x33c) != '\0';
            puVar23 = puStack_150;
            if (ppppuVar44 != (ulong ****)0x0) {
              ppppuVar14 = ppppuVar44;
              FUN_10ac26490(ppppuVar44,ppppuVar13 + 9);
              pppuVar26 = (ulong ***)*pppppuVar38;
              if (*(char *)((long)pppuVar26 + 0x334) == '\0') {
LAB_10abeab84:
                ppuVar10 = (ulong **)0x0;
              }
              else {
                uStack_27f = 1;
                uStack_27c = CONCAT44(uStack_27c._4_4_,*(undefined4 *)(pppuVar26 + 0x67));
                if (*(char *)((long)pppuVar26 + 0x334) != '\x02') goto LAB_10abeab84;
                ppuVar10 = pppuVar26[0x69];
              }
              ppppuStack_1b0 = ppppuVar14;
              ppppuStack_1a8 = ppppuVar44;
              if (*(char *)((long)pppuVar26 + 0x33c) == '\0') {
LAB_10abeabb8:
                ppuVar32 = (ulong **)0x0;
                if (ppuVar10 == (ulong **)0x0) goto LAB_10abeabb0;
LAB_10abeabc0:
                puVar23 = ppuVar10[0x4d];
                if (puVar23 != (ulong *)0x0) {
                  puVar20 = puVar23;
                  (**(code **)(*puVar23 + 0xe8))();
                  ppuVar3 = &PTR_DAT_110ae4700 + ((ulong)puVar20 & 0xffffffff) * 4;
                  if (0x56 < (uint)puVar20) {
                    ppuVar3 = &PTR_DAT_110ae4700;
                  }
                  if ((*(byte *)((long)ppuVar3 + 0x14) & 1) == 0) {
                    FUN_10a00946c(&UNK_10f69a686);
                    goto LAB_10abeb6d0;
                  }
                }
              }
              else {
                uStack_27e = 1;
                uStack_27c = CONCAT44(*(undefined4 *)(pppuVar26 + 0x68),(undefined4)uStack_27c);
                if (*(char *)((long)pppuVar26 + 0x33c) != '\x02') goto LAB_10abeabb8;
                ppuVar32 = pppuVar26[0x6b];
                if (ppuVar10 != (ulong **)0x0) goto LAB_10abeabc0;
LAB_10abeabb0:
                puVar23 = (ulong *)0x0;
              }
              puStack_158 = puVar23;
              if (ppuVar32 == (ulong **)0x0) {
                puVar23 = (ulong *)0x0;
              }
              else {
                puVar23 = ppuVar32[0x4d];
                if (puVar23 != (ulong *)0x0) {
                  puVar20 = puVar23;
                  (**(code **)(*puVar23 + 0xe8))();
                  ppuVar3 = &PTR_DAT_110ae4700 + ((ulong)puVar20 & 0xffffffff) * 4;
                  if (0x56 < (uint)puVar20) {
                    ppuVar3 = &PTR_DAT_110ae4700;
                  }
                  if ((*(byte *)((long)ppuVar3 + 0x14) >> 1 & 1) == 0) {
                    FUN_10a00946c(&UNK_10f69a6ba);
                    goto LAB_10abeb6d0;
                  }
                }
              }
            }
            puStack_150 = puVar23;
            pppuVar26 = ppppuVar13[0x34];
            if (pppuVar26 != (ulong ***)0x0) {
              pppuVar46 = pppuVar26;
              FUN_10a1de960(pppuVar26,ppppuVar13 + 9);
              pppuStack_1a0 = pppuVar46;
              pppuStack_198 = pppuVar26;
            }
            pppuVar26 = pppuStack_1e8;
            if (pppuStack_198 != (ulong ***)0x0) {
              pppuVar26 = pppuStack_198;
            }
            uStack_27f = *(char *)((long)pppuVar26 + 0x334) != '\0';
            pppuVar26 = ppppuVar13[0xfa];
            if ((pppuVar26 != (ulong ***)0x0) && (FUN_10aafc55c(), (int)pppuVar26 != 0)) {
              uStack_208 = CONCAT44(2,(undefined4)uStack_208);
            }
            ppppppplVar17 = ppppppplStack_88;
            if (ppppppplStack_88 < ppppppplStack_80) {
              FUN_10ac04684(ppppppplStack_88,&pppppuStack_2a0);
              ppppppplVar17 = ppppppplVar17 + 0x2c;
            }
            else {
              ppppppplVar17 = (long *******)&ppppppplStack_90;
              FUN_10ac043b0(ppppppplVar17,&pppppuStack_2a0);
            }
            ppppppplStack_88 = ppppppplVar17;
            if (pppppuStack_2a0 != (undefined *****)0x0) {
              ppppuStack_298 = (ulong ****)pppppuStack_2a0;
              __ZdlPv();
            }
            goto LAB_10abeace8;
          }
          if (ppppuVar48 != (ulong ****)0x0) goto LAB_10abeace8;
        }
      }
LAB_10abeacec:
      lVar33 = lVar33 + 1;
    } while (lVar33 != param_3);
    ppppppplVar17 = ppppppplStack_90;
    if (pppppplStack_318 != (long ******)0x0) {
      for (; ppppppplVar17 != ppppppplStack_88; ppppppplVar17 = ppppppplVar17 + 0x2c) {
        if (((*(byte *)((long)ppppppplVar17 + 0x159) & 1) == 0) &&
           (ppppppplVar17[0x17] == pppppplStack_318)) {
          FUN_10a00946c(&UNK_10f69a6ef);
          goto LAB_10abeb6d0;
        }
      }
    }
  }
  ppppppplVar17 = ppppppplStack_88;
  if (ppppppplStack_90 != ppppppplStack_88) {
    ppppppplVar21 = ppppppplStack_90 + 0x2c;
    ppppppplVar35 = ppppppplStack_90;
    while (ppppppplVar21 != ppppppplVar17) {
      if (((((ulong)ppppppplVar35[0x2b] & 1) == 0) && (((ulong)ppppppplVar35[0x57] & 1) == 0)) &&
         (((ppppppplVar35[0x15] != (long ******)0x0 || ppppppplVar35[0x1f] != (long ******)0x0) ||
           ppppppplVar35[0x21] != (long ******)0x0 ||
          (((ppppppplVar35[0x41] != (long ******)0x0 || (ppppppplVar35[0x4b] != (long ******)0x0))
           || (ppppppplVar35[0x4d] != (long ******)0x0)))))) {
        ppppppplVar21 = ppppppplVar35 + 0x14;
        func_0x00010abf8a04(ppppppplVar21,ppppppplVar35 + 0x40);
        if (((ulong)ppppppplVar21 & 1) != 0) {
          FUN_10ac04b10(ppppppplVar35,ppppppplVar35[1],ppppppplVar35[0x2c],ppppppplVar35[0x2d],
                        (long)ppppppplVar35[0x2d] - (long)ppppppplVar35[0x2c] >> 1);
          if (ppppppplVar35 != ppppppplVar17) {
            ppppppplVar21 = ppppppplVar35 + 0x58;
            goto LAB_10abeade0;
          }
          break;
        }
      }
      ppppppplVar21 = ppppppplVar35 + 0x58;
      ppppppplVar35 = ppppppplVar35 + 0x2c;
    }
  }
LAB_10abeaf00:
  if (ppppppplVar17 <= ppppppplStack_88) {
    ppppppplVar21 = ppppppplStack_88;
    if (ppppppplVar17 != ppppppplStack_88) {
      while (ppppppplVar35 = ppppppplStack_88, ppppppplStack_88 = ppppppplVar17,
            ppppppplVar35 != ppppppplVar17) {
        ppppppplVar22 = ppppppplVar35 + -0x2c;
        ppppppplStack_88 = ppppppplVar22;
        if (*ppppppplVar22 != (long ******)0x0) {
          ppppppplVar35[-0x2b] = *ppppppplVar22;
          ppppppplStack_88 = ppppppplVar21;
          __ZdlPv();
          ppppppplStack_88 = ppppppplVar22;
          ppppppplVar21 = ppppppplStack_88;
        }
      }
    }
    ppppppplVar22 = ppppppplStack_88;
    pppppuStack_2a0 = (undefined *****)0x0;
    ppppuStack_298 = (ulong ****)0x0;
    uStack_290 = 0;
    pppppuVar19 = pppppuStack_2a0;
    ppppuVar13 = ppppuStack_298;
    ppppppplVar21 = ppppppplStack_90;
    ppppppplVar35 = ppppppplStack_88;
    for (ppppppplVar17 = ppppppplStack_90; pppppuStack_2a0 = pppppuVar19,
        ppppuStack_298 = ppppuVar13, ppppppplStack_90 = ppppppplVar21,
        ppppppplStack_88 = ppppppplVar35, ppppppplVar17 != ppppppplVar22;
        ppppppplVar17 = ppppppplVar17 + 0x2c) {
      if (pppppuVar19 == (undefined *****)ppppuVar13) {
LAB_10abeb04c:
        if (pppppuVar19 == (undefined *****)ppppuVar13) goto LAB_10abeb054;
      }
      else {
        do {
          ppppppplVar21 = ppppppplVar17 + 0x14;
          func_0x00010abf8a74(ppppppplVar21,pppppuVar19);
          if (((ulong)ppppppplVar21 & 1) != 0) goto LAB_10abeb04c;
          pppppuVar19 = pppppuVar19 + 0x10;
        } while (pppppuVar19 != (undefined *****)ppppuVar13);
LAB_10abeb054:
        FUN_10abec4a4(&pppppuStack_2a0,ppppppplVar17 + 0x14);
      }
      pppppuVar19 = pppppuStack_2a0;
      ppppuVar13 = ppppuStack_298;
      ppppppplVar21 = ppppppplStack_90;
      ppppppplVar35 = ppppppplStack_88;
    }
    if (ppppppplVar21 != ppppppplVar35) {
      lVar33 = 0;
      pppppuVar38 = pppppuVar19;
      ppppppplVar17 = ppppppplVar21;
joined_r0x00010abeb090:
      do {
        if (pppppuVar19 != (undefined *****)ppppuVar13) {
          ppppppplVar22 = (long *******)((long)ppppppplVar17 + 0xa0);
          func_0x00010abf8a74(ppppppplVar22,pppppuVar19);
          pppppuVar38 = pppppuVar19;
          if (((ulong)ppppppplVar22 & 1) == 0) {
            pppppuVar19 = pppppuVar19 + 0x10;
            pppppuVar38 = (undefined *****)ppppuVar13;
            goto joined_r0x00010abeb090;
          }
        }
        pppppplVar27 = *(long *******)((long)ppppppplVar17 + 0x88);
        if (pppppplVar27 != (long ******)0x0) {
          ppppppplVar22 = (long *******)((long)ppppppplVar17 + 0x90);
LAB_10abeb0c4:
          if (*(char *)ppppppplVar22 == '\0') goto code_r0x00010abeb0cc;
          if ((undefined *****)ppppuVar13 != pppppuVar38) {
            if (*(long *******)((long)ppppppplVar17 + 0x30) != (long ******)0x0) {
              _memset(ppppppplVar21 + lVar33 * 0x2c + 7,1);
            }
            ppppuVar14 = (ulong ****)(pppppuVar38 + 0x10);
            ppppuVar48 = (ulong ****)pppppuVar38;
            while (ppppuVar14 != ppppuVar13) {
              FUN_10ac04f70(ppppuVar48 + 1,ppppuVar48 + 0x11);
              ppppuVar48[0xb] = ppppuVar48[0x1b];
              ppppuVar48[10] = ppppuVar48[0x1a];
              ppppuVar48[0xd] = ppppuVar48[0x1d];
              ppppuVar48[0xc] = ppppuVar48[0x1c];
              *(undefined8 *)((long)ppppuVar48 + 0x71) = *(undefined8 *)((long)ppppuVar48 + 0xf1);
              *(undefined8 *)((long)ppppuVar48 + 0x69) = *(undefined8 *)((long)ppppuVar48 + 0xe9);
              ppppuVar14 = ppppuVar48 + 0x20;
              ppppuVar48 = ppppuVar48 + 0x10;
            }
            while (ppppuVar13 != ppppuVar48) {
              ppppuVar13 = ppppuVar13 + -0x10;
              (*(code *)**ppppuVar13)(ppppuVar13);
            }
            goto LAB_10abeb15c;
          }
        }
LAB_10abeb130:
        pppppplVar27 = *(long *******)((long)ppppppplVar17 + 0x30);
        if (pppppplVar27 != (long ******)0x0) {
          pppppplVar29 = (long ******)0x0;
          do {
            *(undefined1 *)((long)ppppppplVar17 + (long)(pppppplVar29 + 7)) = 0;
            *(long *******)((long)ppppppplVar17 + ((long)pppppplVar29 + 0x25) * 8) =
                 (long ******)0x0;
            pppppplVar29 = (long ******)((long)pppppplVar29 + 1);
          } while (pppppplVar27 != pppppplVar29);
        }
        *(undefined2 *)((long)ppppppplVar17 + 0x21) = 0;
        ppppuVar48 = ppppuVar13;
LAB_10abeb15c:
        ppppppplVar17 = (long *******)((long)ppppppplVar17 + 0x160);
        lVar33 = lVar33 + 1;
        ppppuVar13 = ppppuVar48;
        pppppuVar19 = pppppuStack_2a0;
        pppppuVar38 = pppppuStack_2a0;
      } while (ppppppplVar17 != ppppppplVar35);
    }
    ppppuStack_298 = ppppuVar13;
    ppppppplVar35 = ppppppplStack_88;
    ppppuStack_110 = (undefined8 ****)0x0;
    ppppuStack_108 = (undefined8 ****)0x0;
    ppppuStack_100 = (undefined ****)0x0;
    ppppuVar13 = ppppuStack_110;
    ppppuVar39 = ppppuStack_108;
    ppppppplVar21 = ppppppplStack_88;
    for (ppppppplVar17 = ppppppplStack_90; ppppuStack_110 = ppppuVar13, ppppuStack_108 = ppppuVar39,
        ppppppplVar22 = ppppppplStack_90, ppppppplVar6 = ppppppplVar21,
        ppppppplStack_88 = ppppppplVar21, ppppppplVar17 != ppppppplVar35;
        ppppppplVar17 = ppppppplVar17 + 0x2c) {
      if (ppppuVar13 == ppppuVar39) {
LAB_10abeb1ec:
        if (ppppuVar13 == ppppuVar39) goto LAB_10abeb1f4;
      }
      else {
        do {
          ppppppplVar21 = ppppppplVar17 + 0x14;
          func_0x00010abf8ad8(ppppppplVar21,ppppuVar13);
          if (((ulong)ppppppplVar21 & 1) != 0) goto LAB_10abeb1ec;
          ppppuVar13 = ppppuVar13 + 0x10;
        } while (ppppuVar13 != ppppuVar39);
LAB_10abeb1f4:
        FUN_10abec4a4(&ppppuStack_110,ppppppplVar17 + 0x14);
      }
      ppppuVar13 = ppppuStack_110;
      ppppuVar39 = ppppuStack_108;
      ppppppplVar21 = ppppppplStack_88;
    }
    for (; ppppppplVar22 != ppppppplVar21; ppppppplVar22 = ppppppplVar22 + 0x2c) {
      FUN_10abebddc(param_1,ppppppplVar22);
      ppppuVar39 = ppppuStack_108;
      ppppuVar7 = ppppuStack_108;
      ppppuVar13 = ppppuStack_110;
      ppppuVar14 = ppppuStack_110;
      if ((*(byte *)((long)ppppppplVar22 + 0x21) & 1) != 0) {
        for (; ppppuVar13 != ppppuVar39; ppppuVar13 = ppppuVar13 + 0x10) {
          ppppppplVar17 = ppppppplVar22 + 0x14;
          func_0x00010abf8ad8(ppppppplVar17,ppppuVar13);
          ppppuVar14 = ppppuVar13;
          if (((ulong)ppppppplVar17 & 1) != 0) break;
          ppppuVar14 = ppppuVar39;
        }
        if (ppppuVar39 == ppppuVar14) {
          *(undefined1 *)((long)ppppppplVar22 + 0x21) = 0;
          ppppuVar7 = ppppuStack_108;
        }
        else {
          ppppuVar7 = ppppuVar14 + 0x10;
          while (ppppuVar7 != ppppuVar39) {
            FUN_10ac04f70(ppppuVar14 + 1,ppppuVar14 + 0x11);
            ppppuVar14[0xb] = ppppuVar14[0x1b];
            ppppuVar14[10] = ppppuVar14[0x1a];
            ppppuVar14[0xd] = ppppuVar14[0x1d];
            ppppuVar14[0xc] = ppppuVar14[0x1c];
            *(undefined8 *)((long)ppppuVar14 + 0x71) = *(undefined8 *)((long)ppppuVar14 + 0xf1);
            *(undefined8 *)((long)ppppuVar14 + 0x69) = *(undefined8 *)((long)ppppuVar14 + 0xe9);
            ppppuVar7 = ppppuVar14 + 0x20;
            ppppuVar14 = ppppuVar14 + 0x10;
          }
          while (ppppuVar7 = ppppuVar14, ppppuVar39 != ppppuVar14) {
            ppppuVar39 = ppppuVar39 + -0x10;
            (*(code *)**ppppuVar39)(ppppuVar39);
          }
        }
      }
      ppppuStack_108 = ppppuVar7;
      ppppppplVar6 = ppppppplStack_90;
    }
    uVar25 = ((long)ppppppplStack_88 - (long)ppppppplVar6 >> 5) * 0x2e8ba2e8ba2e8ba3;
    if ((int)uVar25 < 1) {
      plVar37 = (long *)0x0;
    }
    else {
      plVar49 = (long *)0x0;
      plVar50 = (long *)0x0;
      plVar36 = (long *)0x0;
      uVar25 = uVar25 & 0x7fffffff;
      do {
        uVar34 = uVar25 - 1;
        uVar31 = ((long)ppppppplStack_88 - (long)ppppppplStack_90 >> 5) * 0x2e8ba2e8ba2e8ba3;
        if (uVar31 < uVar34 || uVar31 - uVar34 == 0) goto LAB_10abeb6d0;
        ppppppplVar17 = ppppppplStack_90 + uVar34 * 0x2c;
        plVar40 = plVar36;
        plVar37 = plVar36;
        if (plVar36 == plVar49) {
LAB_10abeb380:
          if (plVar40 == plVar49) goto LAB_10abeb3a0;
          *(undefined1 *)((long)ppppppplVar17 + 0x2d) = 1;
          *(undefined1 *)(*plVar40 + 0x2c) = 1;
          *plVar40 = (long)ppppppplVar17;
        }
        else {
          do {
            ppppppplVar21 = ppppppplVar17 + 0x14;
            func_0x00010abf8ad8(ppppppplVar21,*plVar40 + 0xa0);
            if (((ulong)ppppppplVar21 & 1) != 0) goto LAB_10abeb380;
            plVar40 = plVar40 + 1;
          } while (plVar40 != plVar49);
LAB_10abeb3a0:
          if (plVar49 < plVar50) {
            *plVar49 = (long)ppppppplVar17;
            plVar49 = plVar49 + 1;
          }
          else {
            lVar33 = (long)plVar49 - (long)plVar36;
            uVar31 = (lVar33 >> 3) + 1;
            if (uVar31 >> 0x3d != 0) {
              func_0x00010ac04ee4();
              goto LAB_10abeb6d0;
            }
            uVar28 = (long)plVar50 - (long)plVar36 >> 2;
            if (uVar28 <= uVar31) {
              uVar28 = uVar31;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plVar50 - (long)plVar36)) {
              uVar28 = 0x1fffffffffffffff;
            }
            if (uVar28 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10abeb6d0;
            }
            lVar45 = uVar28 << 3;
            __Znwm();
            puVar2 = (undefined8 *)(lVar45 + lVar33);
            plVar50 = (long *)(lVar45 + uVar28 * 8);
            plVar37 = puVar2 + -(lVar33 >> 3);
            plVar49 = puVar2 + 1;
            *puVar2 = ppppppplVar17;
            _memcpy(plVar37,plVar36,lVar33);
            if (plVar36 != (long *)0x0) {
              __ZdlPv(plVar36);
            }
          }
        }
        bVar1 = 1 < (long)uVar25;
        plVar36 = plVar37;
        uVar25 = uVar34;
      } while (bVar1);
    }
    FUN_10abec66c(auStack_c0);
    FUN_10abec180(param_1,&ppppppplStack_90);
    if (plVar37 != (long *)0x0) {
      __ZdlPv(plVar37);
    }
    FUN_10ac04ef8(&ppppuStack_110);
    FUN_10ac04ef8(&pppppuStack_2a0);
    FUN_10abec66c(auStack_c0);
    func_0x00010ac04854(&ppppppplStack_90);
    return;
  }
LAB_10abeb6d0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10abeb6d4);
  (*pcVar8)();
LAB_10abeade0:
  if (ppppppplVar21 == ppppppplVar17) goto LAB_10abeaefc;
  if (((((ulong)ppppppplVar35[0x2b] & 1) == 0) && (((ulong)ppppppplVar21[0x2b] & 1) == 0)) &&
     ((((ppppppplVar35[0x15] != (long ******)0x0 || ppppppplVar35[0x1f] != (long ******)0x0) ||
        ppppppplVar35[0x21] != (long ******)0x0 ||
       ((ppppppplVar21[0x15] != (long ******)0x0 || (ppppppplVar21[0x1f] != (long ******)0x0)))) ||
      (ppppppplVar21[0x21] != (long ******)0x0)))) {
    ppppppplVar22 = ppppppplVar35 + 0x14;
    func_0x00010abf8a04(ppppppplVar22,ppppppplVar21 + 0x14);
    if ((int)ppppppplVar22 == 0) goto LAB_10abeae58;
    FUN_10ac04b10(ppppppplVar35,ppppppplVar35[1],*ppppppplVar21,ppppppplVar21[1],
                  (long)ppppppplVar21[1] - (long)*ppppppplVar21 >> 1);
    ppppppplVar22 = ppppppplVar35;
  }
  else {
LAB_10abeae58:
    ppppppplVar22 = ppppppplVar35 + 0x2c;
    FUN_10ac04e80(ppppppplVar22,ppppppplVar21);
    pppppplVar29 = ppppppplVar21[4];
    pppppplVar27 = ppppppplVar21[3];
    *(undefined8 *)((long)ppppppplVar35 + 0x186) = *(undefined8 *)((long)ppppppplVar21 + 0x26);
    ppppppplVar35[0x30] = pppppplVar29;
    ppppppplVar35[0x2f] = pppppplVar27;
    FUN_10ac04d14(ppppppplVar35 + 0x32,ppppppplVar21 + 6);
    func_0x00010ac04d64(ppppppplVar35 + 0x34,ppppppplVar21 + 8);
    func_0x00010ac04dd8(ppppppplVar35 + 0x3d,ppppppplVar21 + 0x11);
    ppppppplVar35[0x3f] = ppppppplVar21[0x13];
    FUN_10ac04f70(ppppppplVar35 + 0x41,ppppppplVar21 + 0x15);
    uVar52 = *(undefined8 *)((long)ppppppplVar21 + 0x111);
    uVar51 = *(undefined8 *)((long)ppppppplVar21 + 0x109);
    pppppplVar53 = ppppppplVar21[0x1e];
    pppppplVar29 = ppppppplVar21[0x21];
    pppppplVar27 = ppppppplVar21[0x20];
    ppppppplVar35[0x4b] = ppppppplVar21[0x1f];
    ppppppplVar35[0x4a] = pppppplVar53;
    ppppppplVar35[0x4d] = pppppplVar29;
    ppppppplVar35[0x4c] = pppppplVar27;
    *(undefined8 *)((long)ppppppplVar35 + 0x271) = uVar52;
    *(undefined8 *)((long)ppppppplVar35 + 0x269) = uVar51;
    func_0x00010ac04e28(ppppppplVar35 + 0x50,ppppppplVar21 + 0x24);
    pppppplVar29 = ppppppplVar21[0x2a];
    pppppplVar27 = ppppppplVar21[0x29];
    *(undefined2 *)(ppppppplVar35 + 0x57) = *(undefined2 *)(ppppppplVar21 + 0x2b);
    ppppppplVar35[0x56] = pppppplVar29;
    ppppppplVar35[0x55] = pppppplVar27;
  }
  ppppppplVar21 = ppppppplVar21 + 0x2c;
  ppppppplVar35 = ppppppplVar22;
  goto LAB_10abeade0;
LAB_10abeaefc:
  ppppppplVar17 = ppppppplVar35 + 0x2c;
  goto LAB_10abeaf00;
code_r0x00010abeb0cc:
  pppppplVar27 = (long ******)((long)pppppplVar27 + -1);
  ppppppplVar22 = (long *******)((long)ppppppplVar22 + 1);
  if (pppppplVar27 == (long ******)0x0) goto LAB_10abeb130;
  goto LAB_10abeb0c4;
}



/* Entry: 10abeb900; end: 10abeba07;  */

void FUN_10abeb900(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [16];
  
  lVar8 = *param_1;
  lVar10 = param_1[1];
  lVar5 = lVar10 - lVar8;
  uVar9 = lVar5 >> 1;
  if (param_2 <= uVar9) {
    if (uVar9 <= param_2) {
      return;
    }
    lVar10 = lVar8 + param_2 * 2;
LAB_10abeb9e4:
    param_1[1] = lVar10;
    return;
  }
  uVar7 = param_2 - uVar9;
  if (uVar7 <= (ulong)(param_1[2] - lVar10 >> 1)) {
    _bzero(lVar10,uVar7 * 2);
    lVar10 = lVar10 + uVar7 * 2;
    goto LAB_10abeb9e4;
  }
  if ((long)param_2 < 0) {
    FUN_10ac02680();
  }
  else {
    uVar3 = param_1[2] - lVar8;
    uVar4 = uVar3;
    if (uVar3 <= param_2) {
      uVar4 = param_2;
    }
    if (0x7ffffffffffffffd < uVar3) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (-1 < (long)uVar4) {
      lVar2 = uVar4 << 1;
      __Znwm();
      lVar10 = lVar2 + lVar5;
      _bzero(lVar10,uVar7 * 2);
      lVar6 = lVar10 + uVar9 * -2;
      _memcpy(lVar6,lVar8,lVar5);
      *param_1 = lVar6;
      param_1[1] = lVar10 + uVar7 * 2;
      param_1[2] = lVar2 + uVar4 * 2;
      if (lVar8 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar8);
      return;
    }
  }
  func_0x000109ffded8();
  FUN_10abea1c8();
  lVar10 = param_1[0x122];
  lVar8 = param_1[0x121];
  lVar5 = lVar10 - lVar8;
  uVar9 = lVar5 >> 3;
  if (uVar9 < param_4) {
    uVar7 = param_4 - uVar9;
    if ((ulong)(param_1[0x123] - lVar10 >> 3) < uVar7) {
      if (param_4 >> 0x3d != 0) {
        FUN_10ac0439c();
LAB_10abebb88:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10abebb8c);
        (*pcVar1)();
      }
      uVar3 = param_1[0x123] - lVar8;
      uVar4 = (long)uVar3 >> 2;
      if (uVar4 <= param_4) {
        uVar4 = param_4;
      }
      if (0x7ffffffffffffff7 < uVar3) {
        uVar4 = 0x1fffffffffffffff;
      }
      if (uVar4 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10abebb88;
      }
      lVar2 = uVar4 << 3;
      __Znwm();
      lVar10 = lVar2 + lVar5;
      _bzero(lVar10,uVar7 * 8);
      lVar6 = lVar10 + uVar9 * -8;
      _memcpy(lVar6,lVar8,lVar5);
      param_1[0x121] = lVar6;
      param_1[0x122] = lVar10 + uVar7 * 8;
      param_1[0x123] = lVar2 + uVar4 * 8;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
    }
    else {
      _bzero(lVar10,uVar7 * 8);
      param_1[0x122] = lVar10 + uVar7 * 8;
    }
  }
  else {
    if (param_4 < uVar9) {
      lVar10 = lVar8 + param_4 * 8;
      param_1[0x122] = lVar10;
    }
    if (param_4 == 0) goto LAB_10abebb44;
  }
  uVar9 = 0;
  do {
    if ((ulong)(param_1[0x122] - param_1[0x121] >> 3) <= uVar9) goto LAB_10abebb88;
    *(undefined8 *)(param_1[0x121] + uVar9 * 8) = *(undefined8 *)(param_3 + uVar9 * 8);
    uVar9 = uVar9 + 1;
  } while (param_4 != uVar9);
  lVar8 = param_1[0x121];
  lVar10 = param_1[0x122];
LAB_10abebb44:
  FUN_10abebba8(param_1,lVar8,lVar10 - lVar8 >> 3);
  FUN_10a18eadc(auStack_c0,&UNK_10f69a766);
  FUN_10a5dfb5c(param_1 + 4,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  param_1[0x153] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x142] = 0;
  lStack_120 = 0;
  lStack_118 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0x3f800000;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x3f800000;
  param_1[0x143] = 0;
  param_1[0x145] = 0;
  param_1[0x144] = 0;
  plStack_128 = &lStack_120;
  FUN_10a5bcccc(param_1 + 0x146,param_1[0x147]);
  param_1[0x146] = (long)plStack_128;
  param_1[0x147] = lStack_120;
  param_1[0x148] = lStack_118;
  if (lStack_118 == 0) {
    param_1[0x146] = (long)(param_1 + 0x147);
  }
  else {
    *(long **)(lStack_120 + 0x10) = param_1 + 0x147;
    lStack_120 = 0;
    lStack_118 = 0;
    plStack_128 = &lStack_120;
  }
  func_0x00010a5e4dd4(param_1 + 0x149,&uStack_110);
  func_0x00010a5e4e74(param_1 + 0x14e,&uStack_e8);
  FUN_10a5bcdcc(&uStack_e8);
  func_0x00010a5bcd0c(&uStack_110);
  FUN_10a5bcccc(&plStack_128,lStack_120);
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined4 *)((long)param_1 + 0xac4) = 0;
  *(undefined2 *)(param_1 + 0x159) = 0;
  *(undefined2 *)(param_1 + 0x15f) = 0x100;
  FUN_10a1988cc(auStack_c0);
  return;
}



/* Entry: 10abeba08; end: 10abebba7;  */

void FUN_10abeba08(long param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  
  FUN_10abea1c8();
  lVar7 = *(long *)(param_1 + 0x910);
  lVar5 = *(long *)(param_1 + 0x908);
  lVar6 = lVar7 - lVar5;
  uVar9 = lVar6 >> 3;
  if (uVar9 < param_4) {
    uVar10 = param_4 - uVar9;
    if ((ulong)(*(long *)(param_1 + 0x918) - lVar7 >> 3) < uVar10) {
      if (param_4 >> 0x3d != 0) {
        FUN_10ac0439c();
LAB_10abebb88:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10abebb8c);
        (*pcVar1)();
      }
      uVar3 = *(long *)(param_1 + 0x918) - lVar5;
      uVar4 = (long)uVar3 >> 2;
      if (uVar4 <= param_4) {
        uVar4 = param_4;
      }
      if (0x7ffffffffffffff7 < uVar3) {
        uVar4 = 0x1fffffffffffffff;
      }
      if (uVar4 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10abebb88;
      }
      lVar2 = uVar4 << 3;
      __Znwm();
      lVar7 = lVar2 + lVar6;
      _bzero(lVar7,uVar10 * 8);
      lVar8 = lVar7 + uVar9 * -8;
      _memcpy(lVar8,lVar5,lVar6);
      *(long *)(param_1 + 0x908) = lVar8;
      *(ulong *)(param_1 + 0x910) = lVar7 + uVar10 * 8;
      *(ulong *)(param_1 + 0x918) = lVar2 + uVar4 * 8;
      if (lVar5 != 0) {
        __ZdlPv(lVar5);
      }
    }
    else {
      _bzero(lVar7,uVar10 * 8);
      *(ulong *)(param_1 + 0x910) = lVar7 + uVar10 * 8;
    }
  }
  else {
    if (param_4 < uVar9) {
      lVar7 = lVar5 + param_4 * 8;
      *(long *)(param_1 + 0x910) = lVar7;
    }
    if (param_4 == 0) goto LAB_10abebb44;
  }
  uVar9 = 0;
  do {
    if ((ulong)(*(long *)(param_1 + 0x910) - *(long *)(param_1 + 0x908) >> 3) <= uVar9)
    goto LAB_10abebb88;
    *(undefined8 *)(*(long *)(param_1 + 0x908) + uVar9 * 8) = *(undefined8 *)(param_3 + uVar9 * 8);
    uVar9 = uVar9 + 1;
  } while (param_4 != uVar9);
  lVar5 = *(long *)(param_1 + 0x908);
  lVar7 = *(long *)(param_1 + 0x910);
LAB_10abebb44:
  FUN_10abebba8(param_1,lVar5,lVar7 - lVar5 >> 3);
  FUN_10a18eadc(auStack_70,&UNK_10f69a766);
  FUN_10a5dfb5c(param_1 + 0x20,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(undefined8 *)(param_1 + 0x9f8) = 0;
  *(undefined8 *)(param_1 + 0x9f0) = 0;
  *(undefined8 *)(param_1 + 0xa08) = 0;
  *(undefined8 *)(param_1 + 0xa00) = 0;
  *(undefined8 *)(param_1 + 0xa10) = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa18) = 0;
  *(undefined8 *)(param_1 + 0xa28) = 0;
  *(undefined8 *)(param_1 + 0xa20) = 0;
  plStack_d8 = &lStack_d0;
  FUN_10a5bcccc((long *)(param_1 + 0xa30),*(undefined8 *)(param_1 + 0xa38));
  *(long **)(param_1 + 0xa30) = plStack_d8;
  *(long *)(param_1 + 0xa38) = lStack_d0;
  *(long *)(param_1 + 0xa40) = lStack_c8;
  if (lStack_c8 == 0) {
    *(long *)(param_1 + 0xa30) = param_1 + 0xa38;
  }
  else {
    *(long *)(lStack_d0 + 0x10) = param_1 + 0xa38;
    lStack_d0 = 0;
    lStack_c8 = 0;
    plStack_d8 = &lStack_d0;
  }
  func_0x00010a5e4dd4(param_1 + 0xa48,&uStack_c0);
  func_0x00010a5e4e74(param_1 + 0xa70,&uStack_98);
  FUN_10a5bcdcc(&uStack_98);
  func_0x00010a5bcd0c(&uStack_c0);
  FUN_10a5bcccc(&plStack_d8,lStack_d0);
  *(undefined1 *)(param_1 + 0xac0) = 0;
  *(undefined4 *)(param_1 + 0xac4) = 0;
  *(undefined2 *)(param_1 + 0xac8) = 0;
  *(undefined2 *)(param_1 + 0xaf8) = 0x100;
  FUN_10a1988cc(auStack_70);
  return;
}



/* Entry: 10abebba8; end: 10abebd23;  */

void FUN_10abebba8(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined1 **ppuVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined2 *puStack_68;
  undefined2 *puStack_60;
  undefined8 uStack_58;
  undefined2 *puVar11;
  
  ppuVar6 = &puStack_80;
  puStack_68 = (undefined2 *)0x0;
  puStack_60 = (undefined2 *)0x0;
  uStack_58 = 0;
  FUN_10ac00830(&puStack_68,*(long *)(param_1 + 0x810),*(long *)(param_1 + 0x818),
                *(long *)(param_1 + 0x818) - *(long *)(param_1 + 0x810) >> 1);
  puStack_80 = (undefined1 *)0x0;
  puStack_78 = (undefined1 *)0x0;
  puStack_70 = (undefined1 *)0x0;
  if ((long)puStack_60 - (long)puStack_68 != 0) {
    lVar8 = (long)puStack_60 - (long)puStack_68 >> 1;
    if (lVar8 < 0) {
      FUN_10a5e4f14();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10abebcf4);
      (*pcVar5)();
    }
    FUN_10a5e4f28();
    puVar9 = (undefined1 *)((long)ppuVar6 + -((long)puStack_78 - (long)puStack_80));
    _memcpy(puVar9);
    bVar2 = puStack_80 != (undefined1 *)0x0;
    puStack_80 = puVar9;
    puStack_78 = (undefined1 *)ppuVar6;
    puStack_70 = (undefined1 *)((long)ppuVar6 + lVar8 * 2);
    if (bVar2) {
      __ZdlPv();
    }
  }
  if (param_3 != 0) {
    plVar1 = param_2 + param_3;
    do {
      puVar4 = puStack_60;
      if (puStack_68 != puStack_60) {
        lVar8 = *param_2;
        puVar10 = puStack_68;
        do {
          puVar11 = puVar10 + 1;
          uVar3 = *puVar10;
          lVar7 = param_1 + 0x20;
          FUN_10abea338(lVar7,uVar3);
          if (*(long *)(lVar7 + 0x10) == lVar8) {
            FUN_10abea3ac(&puStack_80,uVar3);
            break;
          }
          puVar10 = puVar11;
        } while (puVar11 != puVar4);
      }
      param_2 = param_2 + 1;
    } while (param_2 != plVar1);
  }
  FUN_10abea46c(param_1,puStack_80,(long)puStack_78 - (long)puStack_80 >> 1);
  if (puStack_80 != (undefined1 *)0x0) {
    puStack_78 = puStack_80;
    __ZdlPv();
  }
  if (puStack_68 != (undefined2 *)0x0) {
    puStack_60 = puStack_68;
    __ZdlPv();
  }
  return;
}



/* Entry: 10abebd24; end: 10abebd8b;  */

void FUN_10abebd24(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [48];
  
  FUN_10abea1c8();
  FUN_10abebba8(param_1,param_3,param_4);
  FUN_10a18eadc(auStack_70,&UNK_10f69a766);
  FUN_10a5dfb5c(param_1 + 0x20,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(undefined8 *)(param_1 + 0x9f8) = 0;
  *(undefined8 *)(param_1 + 0x9f0) = 0;
  *(undefined8 *)(param_1 + 0xa08) = 0;
  *(undefined8 *)(param_1 + 0xa00) = 0;
  *(undefined8 *)(param_1 + 0xa10) = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa18) = 0;
  *(undefined8 *)(param_1 + 0xa28) = 0;
  *(undefined8 *)(param_1 + 0xa20) = 0;
  plStack_d8 = &lStack_d0;
  FUN_10a5bcccc((long *)(param_1 + 0xa30),*(undefined8 *)(param_1 + 0xa38));
  *(long **)(param_1 + 0xa30) = plStack_d8;
  *(long *)(param_1 + 0xa38) = lStack_d0;
  *(long *)(param_1 + 0xa40) = lStack_c8;
  if (lStack_c8 == 0) {
    *(long *)(param_1 + 0xa30) = param_1 + 0xa38;
  }
  else {
    *(long *)(lStack_d0 + 0x10) = param_1 + 0xa38;
    lStack_d0 = 0;
    lStack_c8 = 0;
    plStack_d8 = &lStack_d0;
  }
  func_0x00010a5e4dd4(param_1 + 0xa48,&uStack_c0);
  func_0x00010a5e4e74(param_1 + 0xa70,&uStack_98);
  FUN_10a5bcdcc(&uStack_98);
  func_0x00010a5bcd0c(&uStack_c0);
  FUN_10a5bcccc(&plStack_d8,lStack_d0);
  *(undefined1 *)(param_1 + 0xac0) = 0;
  *(undefined4 *)(param_1 + 0xac4) = 0;
  *(undefined2 *)(param_1 + 0xac8) = 0;
  *(undefined2 *)(param_1 + 0xaf8) = 0x100;
  FUN_10a1988cc(auStack_70);
  return;
}



/* Entry: 10abebd8c; end: 10abebddb;  */

void FUN_10abebd8c(long param_1,long param_2)

{
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [48];
  
  FUN_10abea1c8();
  FUN_10a18eadc(auStack_70,&UNK_10f69a766);
  FUN_10a5dfb5c(param_1 + 0x20,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(undefined8 *)(param_1 + 0x9f8) = 0;
  *(undefined8 *)(param_1 + 0x9f0) = 0;
  *(undefined8 *)(param_1 + 0xa08) = 0;
  *(undefined8 *)(param_1 + 0xa00) = 0;
  *(undefined8 *)(param_1 + 0xa10) = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa18) = 0;
  *(undefined8 *)(param_1 + 0xa28) = 0;
  *(undefined8 *)(param_1 + 0xa20) = 0;
  plStack_d8 = &lStack_d0;
  FUN_10a5bcccc((long *)(param_1 + 0xa30),*(undefined8 *)(param_1 + 0xa38));
  *(long **)(param_1 + 0xa30) = plStack_d8;
  *(long *)(param_1 + 0xa38) = lStack_d0;
  *(long *)(param_1 + 0xa40) = lStack_c8;
  if (lStack_c8 == 0) {
    *(long *)(param_1 + 0xa30) = param_1 + 0xa38;
  }
  else {
    *(long *)(lStack_d0 + 0x10) = param_1 + 0xa38;
    lStack_d0 = 0;
    lStack_c8 = 0;
    plStack_d8 = &lStack_d0;
  }
  func_0x00010a5e4dd4(param_1 + 0xa48,&uStack_c0);
  func_0x00010a5e4e74(param_1 + 0xa70,&uStack_98);
  FUN_10a5bcdcc(&uStack_98);
  func_0x00010a5bcd0c(&uStack_c0);
  FUN_10a5bcccc(&plStack_d8,lStack_d0);
  *(undefined1 *)(param_1 + 0xac0) = 0;
  *(undefined4 *)(param_1 + 0xac4) = 0;
  *(undefined2 *)(param_1 + 0xac8) = 0;
  *(undefined2 *)(param_1 + 0xaf8) = 0x100;
  FUN_10a1988cc(auStack_70);
  return;
}



/* Entry: 10abebddc; end: 10abebec3;  */

void FUN_10abebddc(long *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long *plVar3;
  int iVar4;
  
  puVar1 = (undefined2 *)*param_2;
  puVar2 = (undefined2 *)param_2[1];
  do {
    if (puVar1 == puVar2) {
      return;
    }
    plVar3 = param_1 + 4;
    FUN_10abea338(plVar3,*puVar1);
    if (*(short *)((long)plVar3 + 2) != -1) {
      plVar3 = param_1 + 0xbc;
      func_0x00010a04a0d4();
      if ((*(char *)((long)plVar3 + 1) == '\x02') &&
         (((*(byte *)(param_1 + 0x159) & 1) != 0 ||
          ((*(char *)((long)param_1 + 0xac9) == '\x01' && (*(char *)(param_2 + 3) == '\x01')))))) {
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x160))();
        if ((int)plVar3 != 0) {
          *(undefined1 *)(param_2 + 3) = 0;
          iVar4 = *(int *)((long)param_1 + 0xac4);
          if ((iVar4 == 0) && (iVar4 = 2, *(char *)((long)param_2 + 0x19) != '\0')) {
            iVar4 = 4;
          }
          *(int *)((long)param_2 + 0x1c) = iVar4;
          return;
        }
        *(undefined1 *)(param_2 + 3) = 1;
        *(undefined4 *)(param_2 + 0x13) = 0;
        *(undefined1 *)(param_2 + 4) = 1;
        return;
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}



/* Entry: 10abebec4; end: 10abebf77;  */

void FUN_10abebec4(long param_1,long param_2)

{
  code *pcVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (((*(ushort *)(param_2 + 0x20) >> 2 & 1) != 0) &&
     (uVar3 = (ulong)*(byte *)(param_2 + 0x22), uVar3 != 0xff)) {
    uVar4 = (*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4) * -0x30c30c30c30c30c3;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10abebf78);
      (*pcVar1)();
    }
    if (*(byte *)(*(long *)(param_1 + 0x140) + uVar3 * 0x150 + 1) < 2) {
      uVar2 = 2;
      goto LAB_10abebf34;
    }
  }
  uVar2 = 1;
LAB_10abebf34:
  if ((uVar2 & *(ushort *)(param_2 + 0x20)) != 0) {
    FUN_10a5e73b0();
  }
  return;
}



/* Entry: 10abebf78; end: 10abec17f;  */

void FUN_10abebf78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,long param_6,long param_7,long param_8,uint param_9,long param_10)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (*(char *)(param_6 + 0x380) != '\x01') {
    if (param_9 == 2) {
      param_7 = 0;
      goto LAB_10abec0fc;
    }
    if (param_9 == 1) {
      if (*(long *)(param_6 + 0xa20) == param_10) {
        lVar1 = 0x9f8;
      }
      else if (*(long *)(param_6 + 0xa28) == param_10) {
        lVar1 = 0xa08;
      }
      else {
        lVar1 = 0xa00;
        if (*(long *)(param_6 + 0xa18) != param_10) {
          lVar1 = 0xa10;
        }
      }
      param_7 = *(long *)(param_6 + lVar1);
    }
    if ((((param_8 != 1) || (param_7 == 0)) || (4 < param_9)) ||
       ((1 << (ulong)(param_9 & 0x1f) & 0x1aU) == 0)) goto LAB_10abec0fc;
    plVar2 = (long *)0x1;
    lVar1 = param_7;
    FUN_10a088744();
    if (plVar2 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar2;
    }
    if ((int)lVar1 != 2) goto LAB_10abec0fc;
    lVar1 = 0;
    FUN_10a2421c8();
    if (*(long *)(lVar1 + 0x118) != lVar3) {
      if (*(long *)(lVar1 + 0xf8) != lVar3) {
        if (*(long *)(lVar1 + 0x128) == lVar3) {
          param_7 = 0;
          param_1 = 0x3f800000;
          param_9 = 2;
          param_2 = 0x3f800000;
          param_3 = 0x3f800000;
          param_4 = 0;
          goto LAB_10abec0fc;
        }
        if (*(long *)(lVar1 + 0x108) == lVar3) {
          param_7 = 0;
          param_1 = 0x3f800000;
          param_9 = 2;
          param_2 = 0x3f800000;
          param_3 = 0x3f800000;
          param_4 = 0x3f800000;
          goto LAB_10abec0fc;
        }
        lVar1 = param_10;
        FUN_10a1dd000();
        if (((lVar1 == 0) || (___dynamic_cast(), *(char *)(param_10 + 0x304) == '\x01')) ||
           ((lVar1 == 0 || (*(long *)(lVar1 + 0x290) != lVar3)))) goto LAB_10abec0fc;
        param_9 = 0;
        goto LAB_10abebfb4;
      }
      uVar4 = 0x3f800000;
    }
    param_9 = 2;
  }
LAB_10abebfb4:
  param_7 = 0;
  param_1 = 0;
  param_2 = 0;
  param_3 = 0;
  param_4 = uVar4;
LAB_10abec0fc:
  *param_5 = param_7;
  *(undefined4 *)(param_5 + 1) = param_1;
  *(undefined4 *)((long)param_5 + 0xc) = param_2;
  *(undefined4 *)(param_5 + 2) = param_3;
  *(undefined4 *)((long)param_5 + 0x14) = param_4;
  *(char *)(param_5 + 3) = (char)param_9;
  return;
}



/* Entry: 10abec180; end: 10abec4a3;  */

/* WARNING: Removing unreachable block (ram,0x00010abec2d0) */
/* WARNING: Removing unreachable block (ram,0x00010abec2e0) */
/* WARNING: Removing unreachable block (ram,0x00010abec34c) */
/* WARNING: Removing unreachable block (ram,0x00010abec354) */

void FUN_10abec180(undefined **param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  undefined8 ***pppuStack_b0;
  long lStack_a8;
  undefined1 uStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  undefined1 uStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  char cStack_59;
  ulong *puStack_58;
  undefined8 uStack_50;
  char cStack_41;
  
  (**(code **)(*param_1 + 0x110))();
  FUN_10abaa078(*(undefined8 *)(param_1[0x10b] + 0x1f0));
  (**(code **)(*param_1 + 0x140))(param_1);
  lVar8 = *param_2;
  lVar1 = param_2[1];
  if (lVar8 != lVar1) {
    ppuVar4 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar5 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    ppuVar6 = ppuVar5;
    do {
      iVar3 = (int)ppuVar6;
      FUN_10ad055a0();
      if (iVar3 != 0) {
        if (*ppuVar4 == (undefined *)0x0) {
          plVar7 = (long *)*ppuVar5;
          if ((plVar7 == (long *)0x0) || ((**(code **)(*plVar7 + 0x18))(), plVar7 == (long *)0x0))
          goto LAB_10abec220;
          plVar7 = plVar7 + 7;
        }
        else {
          plVar7 = (long *)(*ppuVar4 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar7 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&puStack_58,&UNK_10f69a734);
          func_0x000107c2b054(&pppuStack_70,"");
          ppuStack_90 = (undefined8 **)"null";
          if (cStack_41 != '\0') {
            ppuStack_90 = &puStack_58;
          }
          if (cStack_59 < '\0') {
            pppuStack_b0 = (undefined8 ***)"null";
            if (lStack_68 != 0) {
              pppuStack_b0 = pppuStack_70;
            }
          }
          else {
            pppuStack_b0 = (undefined8 ***)"null";
            if (cStack_59 != '\0') {
              pppuStack_b0 = &pppuStack_70;
            }
          }
          FUN_10a224324(&ppuStack_90,&pppuStack_b0);
          if (cStack_41 == '\0') {
            ppuStack_90 = (undefined8 **)((ulong)ppuStack_90 & 0xffffffffffffff00);
          }
          else {
            uStack_88 = uStack_50;
            ppuStack_90 = (undefined8 **)puStack_58;
          }
          uStack_78 = cStack_41 != '\0';
          if (cStack_59 < '\0') {
            if (lStack_68 == 0) {
LAB_10abec3b0:
              uStack_98 = 0;
              pppuStack_b0 = (undefined8 ***)((ulong)pppuStack_b0 & 0xffffffffffffff00);
              goto LAB_10abec3d0;
            }
            func_0x000107c3192c(&pppuStack_b0,pppuStack_70);
          }
          else {
            if (cStack_59 == '\0') goto LAB_10abec3b0;
            lStack_a8 = lStack_68;
            pppuStack_b0 = pppuStack_70;
          }
          uStack_98 = 1;
LAB_10abec3d0:
          FUN_10a234a0c(&ppuStack_90,&pppuStack_b0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10abec3e4);
          (*pcVar2)();
        }
      }
LAB_10abec220:
      (**(code **)(*param_1 + 0x120))(param_1,lVar8);
      FUN_10abec83c(param_1,lVar8);
      ppuVar6 = param_1;
      (**(code **)(*param_1 + 0x128))(param_1,lVar8);
      lVar8 = lVar8 + 0x160;
    } while (lVar8 != lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010abec2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}



/* Entry: 10abec4a4; end: 10abec66b;  */

void FUN_10abec4a4(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong *puVar11;
  long *plVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  puVar24 = (undefined8 *)param_1[1];
  if (puVar24 < (undefined8 *)param_1[2]) {
    *puVar24 = &PTR_FUN_110c54d98;
    puVar24[1] = 0;
    lVar14 = param_2[1];
    puVar24[1] = lVar14;
    puVar22 = puVar24;
    puVar2 = param_2;
    for (; lVar14 != 0; lVar14 = lVar14 + -1) {
      uVar26 = puVar2[2];
      puVar22[3] = puVar2[3];
      puVar22[2] = uVar26;
      puVar22 = puVar22 + 2;
      puVar2 = puVar2 + 2;
    }
    uVar27 = param_2[0xb];
    uVar26 = param_2[10];
    uVar29 = param_2[0xd];
    uVar28 = param_2[0xc];
    uVar30 = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)((long)puVar24 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
    *(undefined8 *)((long)puVar24 + 0x69) = uVar30;
    puVar24[0xb] = uVar27;
    puVar24[10] = uVar26;
    puVar24[0xd] = uVar29;
    puVar24[0xc] = uVar28;
    puVar24 = puVar24 + 0x10;
LAB_10abec644:
    param_1[1] = (ulong)puVar24;
    return;
  }
  puVar22 = (undefined8 *)*param_1;
  lVar14 = (long)puVar24 - (long)puVar22;
  uVar1 = (lVar14 >> 7) + 1;
  if (uVar1 >> 0x39 == 0) {
    uVar15 = (long)param_1[2] - (long)puVar22;
    uVar20 = (long)uVar15 >> 6;
    if (uVar20 <= uVar1) {
      uVar20 = uVar1;
    }
    if (0x7fffffffffffff7f < uVar15) {
      uVar20 = 0x1ffffffffffffff;
    }
    if (uVar20 >> 0x39 == 0) {
      lVar8 = uVar20 << 7;
      __Znwm();
      puVar2 = (undefined8 *)(lVar8 + lVar14);
      lVar16 = param_2[1];
      *puVar2 = &PTR_FUN_110c54d98;
      puVar2[1] = lVar16;
      if (lVar16 != 0) {
        _memcpy(lVar14 + lVar8 + 0x10,param_2 + 2,lVar16 << 4);
      }
      uVar26 = param_2[10];
      uVar28 = param_2[0xd];
      uVar27 = param_2[0xc];
      puVar2[0xb] = param_2[0xb];
      puVar2[10] = uVar26;
      puVar2[0xd] = uVar28;
      puVar2[0xc] = uVar27;
      uVar26 = *(undefined8 *)((long)param_2 + 0x69);
      *(undefined8 *)((long)puVar2 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
      *(undefined8 *)((long)puVar2 + 0x69) = uVar26;
      puVar17 = puVar22;
      puVar19 = puVar2 + (lVar14 >> 7) * -0x10;
      if (puVar22 != puVar24) {
        do {
          lVar16 = puVar17[1];
          *puVar19 = &PTR_FUN_110c54d98;
          puVar19[1] = lVar16;
          if (lVar16 != 0) {
            lVar21 = 0;
            do {
              uVar26 = *(undefined8 *)((long)puVar17 + lVar21 + 0x10);
              *(undefined8 *)((long)puVar19 + lVar21 + 0x18) =
                   *(undefined8 *)((long)puVar17 + lVar21 + 0x18);
              *(undefined8 *)((long)puVar19 + lVar21 + 0x10) = uVar26;
              lVar21 = lVar21 + 0x10;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          uVar27 = puVar17[0xb];
          uVar26 = puVar17[10];
          uVar29 = puVar17[0xd];
          uVar28 = puVar17[0xc];
          uVar30 = *(undefined8 *)((long)puVar17 + 0x69);
          *(undefined8 *)((long)puVar19 + 0x71) = *(undefined8 *)((long)puVar17 + 0x71);
          *(undefined8 *)((long)puVar19 + 0x69) = uVar30;
          puVar19[0xb] = uVar27;
          puVar19[10] = uVar26;
          puVar19[0xd] = uVar29;
          puVar19[0xc] = uVar28;
          puVar17 = puVar17 + 0x10;
          puVar19 = puVar19 + 0x10;
        } while (puVar17 != puVar24);
        do {
          puVar17 = puVar22 + 0x10;
          (**(code **)*puVar22)(puVar22);
          puVar22 = puVar17;
        } while (puVar17 != puVar24);
        puVar22 = (undefined8 *)*param_1;
      }
      puVar24 = puVar2 + 0x10;
      *param_1 = (ulong)(puVar2 + (lVar14 >> 7) * -0x10);
      param_1[1] = (ulong)puVar24;
      param_1[2] = lVar8 + uVar20 * 0x80;
      if (puVar22 != (undefined8 *)0x0) {
        __ZdlPv(puVar22);
      }
      goto LAB_10abec644;
    }
  }
  else {
    FUN_10ac04ed0();
  }
  func_0x000109ffded8();
  if (((*param_1 & 0x100) == 0) &&
     (*(undefined1 *)((long)param_1 + 1) = 1, (char)*param_1 == '\x01')) {
    *(undefined1 *)param_1 = 0;
    puVar6 = PTR___tlv_bootstrap_11340d750;
    ppuVar13 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar13;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar6)();
      *(undefined1 *)ppuVar13 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    uVar1 = uRam00000001137ec648;
    puVar23 = (ulong *)ppuVar10[2];
    if (puVar23 != (ulong *)0x0) {
      if (param_1[3] != 0) {
        uVar20 = puVar23[1];
        bVar5 = *(byte *)(uVar20 + 0x42) | *(byte *)(uVar20 + 0x43);
        if (((bVar5 & 1) != 0) || (*(char *)(uVar20 + 0x3f) == '\x01')) {
          uVar20 = cntfrq_el0;
          InstructionSynchronizationBarrier();
          uVar15 = cntvct_el0;
          if (uVar20 != 1000000000) {
            uVar25 = 0;
            if (uVar20 != 0) {
              uVar25 = uVar15 / uVar20;
            }
            uVar4 = 0;
            if (uVar20 != 0) {
              uVar4 = ((uVar15 - uVar25 * uVar20) * 1000000000) / uVar20;
            }
            uVar15 = uVar4 + uVar25 * 1000000000;
          }
          if ((bVar5 & 1) != 0) {
            uVar20 = param_1[2];
            uVar3 = *(undefined2 *)((long)param_1 + 2);
            uVar25 = param_1[1];
            puVar11 = puVar23;
            FUN_10a1333cc();
            if (puVar11 != (ulong *)0x0) {
              uVar18 = 6;
              if (uRam00000001137ec648 != uVar1) {
                uVar18 = 8;
              }
              uVar4 = 0;
              if (uRam00000001137ec648 != uVar1) {
                uVar4 = uVar1;
              }
              *puVar11 = uVar25;
              puVar11[1] = uVar4;
              puVar11[2] = uVar15;
              *(int *)(puVar11 + 3) = (int)uVar20;
              *(undefined2 *)((long)puVar11 + 0x1c) = uVar3;
              *(undefined1 *)((long)puVar11 + 0x1e) = uVar18;
              if ((puVar23[0x38] & 1) == 0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10abec83c);
                (*pcVar7)();
              }
              puVar23[0x18] = puVar23[0x18] + 1;
            }
          }
        }
      }
      if (((*(char *)(puVar23[1] + 0x41) == '\x01') && ((char)param_1[5] == '\x01')) &&
         (plVar12 = (long *)puVar23[0xb], plVar12 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010abec7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x30))(plVar12,param_1[4]);
        return;
      }
    }
  }
  return;
}



/* Entry: 10abec66c; end: 10abec83b;  */

void FUN_10abec66c(char *param_1)

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
  
  if ((param_1[1] & 1U) == 0) {
    param_1[1] = '\x01';
    if (*param_1 == '\x01') {
      *param_1 = '\0';
      puVar7 = PTR___tlv_bootstrap_11340d750;
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
      lVar8 = lRam00000001137ec648;
      puVar17 = (undefined8 *)ppuVar11[2];
      if (puVar17 != (undefined8 *)0x0) {
        if (*(long *)(param_1 + 0x18) != 0) {
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
                if (lRam00000001137ec648 != lVar8) {
                  uVar15 = 8;
                }
                lVar16 = 0;
                if (lRam00000001137ec648 != lVar8) {
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
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x10abec83c);
                  (*pcVar9)();
                }
                puVar17[0x18] = puVar17[0x18] + 1;
              }
            }
          }
        }
        if (((*(char *)(puVar17[1] + 0x41) == '\x01') && (param_1[0x28] == '\x01')) &&
           (plVar13 = (long *)puVar17[0xb], plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010abec7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar13 + 0x30))(plVar13,*(undefined8 *)(param_1 + 0x20));
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10abec83c; end: 10abf09db;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10abec83c(long *param_1,long *param_2)

{
  long *plVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  ushort uVar8;
  uint uVar9;
  long *****ppppplVar10;
  long ******pppppplVar11;
  undefined8 *******pppppppuVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined5 uVar17;
  undefined5 uVar18;
  undefined3 uVar19;
  undefined3 uVar20;
  code *pcVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  int iVar25;
  byte *pbVar26;
  long *plVar27;
  long *plVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  long *plVar32;
  float *pfVar33;
  int *piVar34;
  long *******ppppppplVar35;
  long *******ppppppplVar36;
  long *******ppppppplVar37;
  long *******ppppppplVar38;
  long *******ppppppplVar39;
  undefined8 uVar40;
  float *pfVar41;
  ulong uVar42;
  int *piVar43;
  long lVar44;
  ulong uVar45;
  char cVar46;
  byte bVar47;
  byte bVar48;
  undefined1 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  long *plVar52;
  long lVar53;
  undefined8 uVar54;
  undefined *puVar55;
  undefined1 *puVar56;
  ulong uVar57;
  ulong uVar58;
  undefined4 *extraout_x9;
  byte bVar59;
  ulong uVar60;
  long extraout_x10;
  char *pcVar61;
  char *pcVar62;
  byte bVar63;
  undefined1 uVar64;
  long lVar65;
  undefined4 *puVar66;
  undefined4 *puVar67;
  undefined8 *puVar68;
  long *******ppppppplVar69;
  long *******ppppppplVar70;
  int iVar71;
  undefined2 *puVar72;
  ulong uVar73;
  undefined8 *******pppppppuVar74;
  undefined8 *puVar75;
  undefined4 *puVar76;
  long ******pppppplVar77;
  ulong uVar78;
  char cVar79;
  undefined1 uVar80;
  long lVar81;
  long lVar82;
  byte bVar83;
  long *plVar84;
  long *plVar85;
  ulong uVar86;
  byte bVar87;
  long lVar88;
  float fVar89;
  undefined1 auVar90 [16];
  undefined4 uVar91;
  long *****ppppplVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  long *****ppppplVar95;
  long *****ppppplVar96;
  uint uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  long *****ppppplVar100;
  long *****ppppplVar101;
  undefined8 uVar102;
  long *****ppppplVar103;
  float fVar104;
  undefined4 uVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  long *in_stack_fffffffffffff910;
  long in_stack_fffffffffffff918;
  uint uStack_660;
  undefined1 uStack_654;
  undefined1 uStack_650;
  byte bStack_630;
  byte bStack_62c;
  ulong uStack_5a8;
  undefined8 uStack_598;
  long *plStack_590;
  undefined7 uStack_588;
  char cStack_581;
  undefined8 *******pppppppuStack_580;
  long *plStack_578;
  undefined7 uStack_570;
  char cStack_569;
  undefined8 *******pppppppuStack_560;
  undefined2 uStack_558;
  undefined1 uStack_556;
  undefined1 uStack_555;
  uint uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long *******ppppppplStack_4f0;
  long *plStack_4e8;
  undefined8 uStack_4e0;
  undefined8 ******ppppppuStack_4d8;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4c0;
  float fStack_4b8;
  float fStack_4b4;
  undefined4 uStack_4b0;
  uint uStack_4ac;
  undefined4 uStack_4a8;
  undefined1 uStack_4a4;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  long *plStack_488;
  ulong uStack_480;
  ulong auStack_478 [4];
  long lStack_458;
  long alStack_450 [8];
  long *******ppppppplStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 *******pppppppuStack_3f0;
  ulong auStack_3e8 [2];
  undefined5 uStack_3d8;
  undefined3 uStack_3d3;
  undefined4 uStack_3d0;
  undefined1 auStack_3cc [4];
  undefined4 uStack_3c8;
  byte bStack_3c4;
  undefined8 auStack_3c3 [32];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  byte abStack_2b0 [3];
  uint uStack_2ad;
  char cStack_2a9;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  byte abStack_298 [8];
  undefined1 auStack_290 [4];
  undefined1 auStack_28c [8];
  undefined1 auStack_284 [8];
  undefined1 auStack_27c [8];
  undefined1 auStack_274 [28];
  undefined4 auStack_258 [80];
  long lStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
  uStack_2b8 = (long ******)CONCAT44(uStack_2b8._4_4_,(uint)uStack_2b8);
  if ((undefined2 *)*param_2 == (undefined2 *)param_2[1]) goto LAB_10abf0654;
  plVar52 = param_1 + 4;
  FUN_10abea338(plVar52,*(undefined2 *)*param_2);
  sVar5 = *(short *)((long)plVar52 + 2);
  if (sVar5 != -1) {
    plVar52 = param_1 + 0xbc;
    func_0x00010a04a0d4(plVar52,sVar5);
    FUN_10aba7050(param_1[0x154],plVar52);
  }
  lVar81 = param_1[0x137];
  plVar52 = (long *)(lVar81 + 200);
  lVar65 = *plVar52;
  for (lVar53 = *(long *)(lVar81 + 0xd0); lVar53 != lVar65; lVar53 = lVar53 + -0x108) {
    uStack_2c0 = (long *******)(lVar53 - 0xf0);
    FUN_10a1901f0(&uStack_2c0);
  }
  *(long *)(lVar81 + 0xd0) = lVar65;
  lVar65 = param_1[0x124];
  for (lVar53 = param_1[0x125]; lVar53 != lVar65; lVar53 = lVar53 + -0x108) {
    uStack_2c0 = (long *******)(lVar53 - 0xf0);
    FUN_10a1901f0(&uStack_2c0);
  }
  param_1[0x125] = lVar65;
  *(undefined1 *)(param_1[0x137] + 8) = 0;
  if ((*(char *)((long)param_1 + 0x369) == '\0') && ((char)param_1[0x6e] == '\0')) {
    bVar22 = (char)param_1[0x70] != '\0';
  }
  else {
    bVar22 = true;
  }
  pppppppuStack_560 = (undefined8 *******)0x0;
  uStack_558 = 0xffff;
  uStack_556 = 0;
  uStack_54c = 0;
  uStack_548 = 0;
  uStack_554 = 0;
  uStack_550 = 0;
  pppppppuStack_3f0 = (undefined8 *******)param_1[0x10b];
  ppppppplStack_410 = (long *******)0x0;
  uStack_408._0_2_ = 0xffff;
  uStack_408._2_1_ = 0;
  uStack_3fc = 0;
  uStack_3f8 = 0;
  uStack_408._4_4_ = 0;
  uStack_400 = 0;
  ppppppplVar69 = (long *******)&ppppppplStack_410;
  if (!bVar22) {
    ppppppplVar69 = (long *******)&pppppppuStack_560;
  }
  puVar72 = (undefined2 *)*param_2;
  puVar2 = (undefined2 *)param_2[1];
  if (puVar72 != puVar2) {
    pppppplVar11 = (long ******)(param_1 + 0x124);
    plVar28 = param_1 + 0x12a;
    ppppppplVar35 = (long *******)&ppppppplStack_410;
    if (!bVar22) {
      ppppppplVar35 = (long *******)&pppppppuStack_560;
    }
    do {
      plVar32 = param_1 + 4;
      FUN_10abea338(plVar32,*puVar72);
      sVar6 = *(short *)((long)plVar32 + 2);
      if (sVar6 != -1) {
        plVar32 = param_1 + 0xbc;
        func_0x00010a04a0d4(plVar32,sVar6);
        fVar104 = *(float *)(plVar32 + 0x18);
        fVar106 = *(float *)((long)plVar32 + 0xc4);
        fVar107 = *(float *)(plVar32 + 0x19);
        fVar108 = *(float *)(plVar32 + 0x1a);
        fVar109 = *(float *)((long)plVar32 + 0xd4);
        fVar110 = *(float *)(plVar32 + 0x1b);
        lVar65 = param_1[0x124];
        for (lVar53 = param_1[0x125]; lVar53 != lVar65; lVar53 = lVar53 + -0x108) {
          uStack_2c0 = (long *******)(lVar53 - 0xf0);
          FUN_10a1901f0(&uStack_2c0);
        }
        fVar89 = 1.0 / SQRT(fVar104 * fVar104 + fVar106 * fVar106 + fVar107 * fVar107);
        param_1[0x125] = lVar65;
        *(undefined1 *)((long)ppppppplVar35 + 10) = 0;
        *ppppppplVar69 = pppppplVar11;
        *(short *)(ppppppplVar35 + 1) = sVar6;
        *(float *)((long)ppppppplVar35 + 0xc) = fVar104 * fVar89;
        *(float *)(ppppppplVar35 + 2) = fVar106 * fVar89;
        *(float *)((long)ppppppplVar35 + 0x14) = fVar107 * fVar89;
        *(float *)(ppppppplVar35 + 3) = fVar108 * fVar108 + fVar109 * fVar109 + fVar110 * fVar110;
        puVar66 = (undefined4 *)plVar32[0x11c];
        puVar76 = (undefined4 *)plVar32[0x11d];
        puVar67 = puVar66;
        if (puVar66 != puVar76) {
          do {
            uStack_2c0._4_4_ = (undefined4)((ulong)uStack_2c0 >> 0x20);
            uStack_2c0._0_4_ = (float)*puVar66;
            pbVar26 = (byte *)(param_1 + 4);
            func_0x00010a01e9ec();
            if ((code *)(&PTR_FUN_110baa628)[(ulong)*pbVar26 * 0xf] != (code *)0x0) {
              (*(code *)(&PTR_FUN_110baa628)[(ulong)*pbVar26 * 0xf])(param_1 + 4,&uStack_2c0,1);
            }
            puVar66 = puVar66 + 1;
          } while (puVar66 != puVar76);
          puVar66 = (undefined4 *)plVar32[0x11d];
          puVar67 = (undefined4 *)plVar32[0x11c];
        }
        uVar86 = (plVar32[0x128] - plVar32[0x127] >> 2) + ((long)puVar66 - (long)puVar67 >> 2);
        lVar53 = param_1[299];
        plVar84 = (long *)param_1[0x12a];
        uVar57 = lVar53 - (long)plVar84 >> 2;
        if (uVar57 < uVar86) {
          uVar57 = uVar86 - uVar57;
          if ((ulong)(param_1[300] - lVar53 >> 2) < uVar57) {
            if (uVar86 >> 0x3e != 0) {
              FUN_10a1941c0();
              ppppppplVar70 = uStack_2c0;
              goto LAB_10abf0654;
            }
            uVar58 = param_1[300] - (long)plVar84;
            uVar60 = (long)uVar58 >> 1;
            if (uVar60 <= uVar86) {
              uVar60 = uVar86;
            }
            if (0x7ffffffffffffffb < uVar58) {
              uVar60 = 0x3fffffffffffffff;
            }
            plVar85 = plVar28;
            FUN_10a1941d4();
            plVar27 = param_1 + 0x12a;
            lVar65 = *plVar27;
            lVar88 = param_1[299] - lVar65;
            lVar53 = (long)plVar85 + (lVar53 - (long)plVar84);
            _bzero(lVar53,uVar57 * 4);
            plVar84 = (long *)(lVar53 - lVar88);
            _memcpy(plVar84,lVar65,lVar88);
            lVar65 = *plVar27;
            *plVar27 = (long)plVar84;
            param_1[299] = lVar53 + uVar57 * 4;
            param_1[300] = (long)plVar85 + uVar60 * 4;
            if (lVar65 != 0) {
              __ZdlPv();
              plVar84 = (long *)*plVar28;
            }
          }
          else {
            _bzero(lVar53,uVar57 * 4);
            puVar66 = (undefined4 *)(lVar53 + uVar57 * 4);
LAB_10abecc38:
            param_1[299] = (long)puVar66;
          }
        }
        else if (uVar86 < uVar57) {
          puVar66 = (undefined4 *)((long)plVar84 + uVar86 * 4);
          goto LAB_10abecc38;
        }
        puVar67 = (undefined4 *)plVar32[0x11d];
        for (puVar66 = (undefined4 *)plVar32[0x11c]; puVar66 != puVar67; puVar66 = puVar66 + 1) {
          ppppppplStack_4f0 = (long *******)CONCAT44(ppppppplStack_4f0._4_4_,*puVar66);
          pbVar26 = (byte *)(param_1 + 4);
          func_0x00010a01e9ec();
          bVar59 = *pbVar26;
          plVar27 = (long *)plVar32[0x126];
          if (plVar27 == (long *)0x0) {
LAB_10abecc88:
            plVar27 = param_1 + 4;
            FUN_10a01f6d4(plVar27,sVar6);
            if (((code *)(&PTR_DAT_110baa630)[(ulong)bVar59 * 0xf] == (code *)0x0) ||
               ((*(ushort *)(plVar27 + 4) >> 9 & 1) != 0)) {
              plVar85 = (long *)((long)plVar84 + 4);
              *(undefined4 *)plVar84 = ppppppplStack_4f0._0_4_;
            }
            else {
              plVar85 = param_1 + 4;
              (*(code *)(&PTR_DAT_110baa630)[(ulong)bVar59 * 0xf])
                        (fVar104 * fVar89,fVar106 * fVar89,fVar107 * fVar89,plVar85,
                         &ppppppplStack_4f0,1,sVar6,plVar84);
            }
          }
          else {
            uStack_2c0._0_4_ = (float)ppppppplStack_4f0._0_4_;
            (**(code **)(*plVar27 + 0x30))(plVar27,param_1 + 4,&uStack_2c0);
            plVar85 = plVar84;
            if ((int)plVar27 != 0) goto LAB_10abecc88;
          }
          plVar84 = plVar85;
        }
        puVar67 = (undefined4 *)plVar32[0x128];
        for (puVar66 = (undefined4 *)plVar32[0x127]; puVar66 != puVar67; puVar66 = puVar66 + 1) {
          *(undefined4 *)plVar84 = *puVar66;
          plVar84 = (long *)((long)plVar84 + 4);
        }
        FUN_10aba7418(param_1[0x154],param_1 + 4,plVar28,plVar84);
        plVar27 = (long *)param_1[0x12a];
        ppppppplVar70 = uStack_2c0;
        if (bVar22) {
          for (; uStack_2c0._4_4_ = (undefined4)((ulong)ppppppplVar70 >> 0x20), plVar27 != plVar84;
              plVar27 = (long *)((long)plVar27 + 4)) {
            uStack_2c0._0_4_ = (float)*plVar27;
            pbVar26 = (byte *)(param_1 + 4);
            func_0x00010a01e9ec();
            if ((code *)(&PTR_DAT_110baa640)[(ulong)*pbVar26 * 0xf] != (code *)0x0) {
              (*(code *)(&PTR_DAT_110baa640)[(ulong)*pbVar26 * 0xf])
                        (param_1 + 4,&uStack_2c0,1,&ppppppplStack_410);
            }
            ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
          }
        }
        else {
          for (; uStack_2c0._4_4_ = (undefined4)((ulong)ppppppplVar70 >> 0x20), plVar27 != plVar84;
              plVar27 = (long *)((long)plVar27 + 4)) {
            uStack_2c0._0_4_ = (float)*plVar27;
            pbVar26 = (byte *)(param_1 + 4);
            func_0x00010a01e9ec();
            (*(code *)(&PTR_FUN_110baa638)[(ulong)*pbVar26 * 0xf])
                      (param_1 + 4,&uStack_2c0,1,&pppppppuStack_560);
            ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
          }
        }
        if (((int)plVar32[0x120] == 1) || ((*(byte *)((long)ppppppplVar35 + 10) & 1) == 0)) {
          bVar59 = *(byte *)(param_1[0x137] + 8);
        }
        else {
          bVar59 = 1;
        }
        lVar53 = param_1[0x124];
        lVar65 = param_1[0x125];
        *(byte *)(param_1[0x137] + 8) = ((int)plVar32[0x120] != 1 && lVar65 == lVar53) | bVar59 & 1;
        uStack_2c0 = ppppppplVar70;
        func_0x000107380640(param_1 + 0x127,(lVar65 - lVar53 >> 3) * 0xf83e0f83e0f83e1);
        lVar65 = param_1[0x125];
        lVar53 = param_1[0x124];
        lVar88 = param_1[0x127];
        lVar82 = param_1[0x128];
        if (lVar65 - lVar53 == 0) {
          uVar86 = lVar82 - lVar88 >> 3;
        }
        else {
          uVar57 = 0;
          uVar86 = lVar82 - lVar88 >> 3;
          do {
            ppppppplVar70 = uStack_2c0;
            if (uVar86 == uVar57) goto LAB_10abf0654;
            *(ulong *)(lVar88 + uVar57 * 8) = uVar57;
            uVar57 = uVar57 + 1;
          } while ((lVar65 - lVar53 >> 3) * 0xf83e0f83e0f83e1 - uVar57 != 0);
        }
        uStack_2c0 = (long *******)&ppppppplStack_4f0;
        uVar57 = uVar86;
        ppppppplStack_4f0 = (long *******)(param_1 + 5);
        uStack_2b8 = pppppplVar11;
        if ((long)uVar86 < 0x81) {
          uVar60 = 0;
        }
        else {
          do {
            lVar53 = uVar57 << 3;
            __ZnwmRKSt9nothrow_t(lVar53,PTR___ZSt7nothrow_1103469d8);
            if (lVar53 != 0) {
              FUN_10ac091a8(lVar88,lVar82,&uStack_2c0,uVar86,lVar53,uVar57);
              __ZdlPv(lVar53);
              goto LAB_10abecf1c;
            }
            uVar60 = uVar57 >> 1;
            bVar23 = 1 < uVar57;
            uVar57 = uVar60;
          } while (bVar23);
        }
        FUN_10ac091a8(lVar88,lVar82,&uStack_2c0,uVar86,0,uVar60);
LAB_10abecf1c:
        lVar65 = param_1[0x128];
        lVar53 = param_1[0x127];
        if ((int)param_1[8] < 0x170 || lVar65 == lVar53) {
          uVar57 = lVar65 - lVar53 >> 3;
        }
        else {
          uVar86 = 0;
          uVar57 = lVar65 - lVar53 >> 3;
          do {
            uVar58 = *(ulong *)(lVar53 + uVar86 * 8);
            lVar88 = param_1[0x124];
            uVar60 = (param_1[0x125] - lVar88 >> 3) * 0xf83e0f83e0f83e1;
            ppppppplVar70 = uStack_2c0;
            if (uVar60 < uVar58 || uVar60 - uVar58 == 0) goto LAB_10abf0654;
            lVar82 = lVar88 + uVar58 * 0x108;
            if ((((*(ushort *)(lVar82 + 0x60) >> 7 & 1) == 0) ||
                ((*(byte *)(lVar82 + 0x58) & 1) != 0)) || (*(short *)(lVar82 + 4) == -1)) {
              uVar86 = uVar86 + 1;
            }
            else {
              uVar58 = uVar86 + 1;
              uVar78 = uVar57;
              if (uVar57 <= uVar58) {
                uVar78 = uVar86 + 1;
              }
              uVar45 = uVar86;
              while (uVar42 = uVar78 - 1, uVar73 = uVar78, uVar58 < uVar57) {
                uVar42 = *(ulong *)(lVar53 + uVar58 * 8);
                if (uVar60 < uVar42 || uVar60 - uVar42 == 0) goto LAB_10abf0654;
                uVar73 = uVar45 + 1;
                lVar44 = lVar88 + uVar42 * 0x108;
                uVar42 = uVar45;
                if ((((*(ushort *)(lVar44 + 0x60) >> 7 & 1) == 0) ||
                    ((*(byte *)(lVar44 + 0x58) & 1) != 0)) || (*(short *)(lVar44 + 4) == -1)) break;
                if (*(int *)(lVar82 + 0x38) != *(int *)(lVar44 + 0x38)) {
                  uVar42 = uVar58 - 1;
                  uVar73 = uVar58;
                  break;
                }
                if (*(int *)(lVar82 + 0x3c) != *(int *)(lVar44 + 0x3c)) break;
                if ((int)param_1[8] < 0xff) {
                  iVar71 = *(int *)(lVar44 + 0x30);
                }
                else {
                  iVar71 = *(int *)(lVar44 + 0x30);
                  if ((*(int *)(lVar82 + 0x30) == 3) == (iVar71 != 3)) break;
                }
                if (((*(int *)(lVar82 + 0x30) == 4) == (iVar71 != 4)) ||
                   (uVar58 = uVar58 + 1, uVar45 = uVar73,
                   ((*(ushort *)(lVar44 + 0x60) ^ *(ushort *)(lVar82 + 0x60)) >> 8 & 1) != 0))
                break;
              }
              if (uVar86 != uVar73) {
                do {
                  ppppppplVar70 = uStack_2c0;
                  if ((ulong)(param_1[0x128] - param_1[0x127] >> 3) <= uVar86) goto LAB_10abf0654;
                  uVar57 = *(ulong *)(param_1[0x127] + uVar86 * 8);
                  uVar60 = (param_1[0x125] - param_1[0x124] >> 3) * 0xf83e0f83e0f83e1;
                  if (uVar60 < uVar57 || uVar60 - uVar57 == 0) goto LAB_10abf0654;
                  uVar60 = uVar86 + 1;
                  lVar53 = uVar42 - uVar86;
                  if (lVar53 != 0) {
                    sVar6 = *(short *)(param_1[0x124] + uVar57 * 0x108 + 4);
                    lVar65 = uVar86 * 8;
                    uVar86 = uVar60;
                    do {
                      lVar65 = lVar65 + 8;
                      lVar88 = param_1[0x127];
                      ppppppplVar70 = uStack_2c0;
                      if ((ulong)(param_1[0x128] - lVar88 >> 3) <= uVar86) goto LAB_10abf0654;
                      uVar57 = *(ulong *)(lVar88 + lVar65);
                      uVar58 = (param_1[0x125] - param_1[0x124] >> 3) * 0xf83e0f83e0f83e1;
                      if (uVar58 < uVar57 || uVar58 - uVar57 == 0) goto LAB_10abf0654;
                      if (*(short *)(param_1[0x124] + uVar57 * 0x108 + 4) == sVar6) {
                        FUN_10ac051a0(lVar88 + uVar60 * 8,lVar65 + lVar88,lVar65 + lVar88 + 8);
                        uVar60 = uVar60 + 1;
                      }
                      uVar86 = uVar86 + 1;
                      lVar53 = lVar53 + -1;
                    } while (lVar53 != 0);
                  }
                  uVar86 = uVar60;
                } while (uVar86 != uVar73);
                lVar65 = param_1[0x128];
                lVar53 = param_1[0x127];
                uVar86 = uVar73;
              }
            }
            uVar57 = lVar65 - lVar53 >> 3;
          } while (uVar86 < uVar57);
        }
        lVar88 = *(long *)(lVar81 + 0xd0) - *(long *)(lVar81 + 200);
        uVar57 = uVar57 + (lVar88 >> 3) * 0xf83e0f83e0f83e1;
        if ((ulong)((*(long *)(lVar81 + 0xd8) - *(long *)(lVar81 + 200) >> 3) * 0xf83e0f83e0f83e1) <
            uVar57) {
          if (0xf83e0f83e0f83e < uVar57) {
            FUN_10a193c14();
            ppppppplVar70 = uStack_2c0;
            goto LAB_10abf0654;
          }
          plVar32 = plVar52;
          plStack_2a0 = plVar52;
          FUN_10a193c28();
          pppppplVar77 = (long ******)((long)plVar32 + lVar88);
          uStack_2c0._0_4_ = SUB84(plVar32,0);
          uStack_2c0._4_4_ = (undefined4)((ulong)plVar32 >> 0x20);
          abStack_2b0[0] = (byte)pppppplVar77;
          abStack_2b0[1] = (byte)((ulong)pppppplVar77 >> 8);
          abStack_2b0[2] = (byte)((ulong)pppppplVar77 >> 0x10);
          uStack_2ad = (uint)((ulong)pppppplVar77 >> 0x18);
          cStack_2a9 = (char)((ulong)pppppplVar77 >> 0x38);
          lVar53 = (long)pppppplVar77 + (*(long *)(lVar81 + 200) - *(long *)(lVar81 + 0xd0));
          uStack_2a8 = (undefined8 *******)(plVar32 + uVar57 * 0x21);
          uStack_2b8 = pppppplVar77;
          func_0x00010a193c70(plVar52,*(long *)(lVar81 + 200),*(long *)(lVar81 + 0xd0),lVar53);
          uVar54 = *(undefined8 *)(lVar81 + 200);
          *(long *)(lVar81 + 200) = lVar53;
          *(long *******)(lVar81 + 0xd0) = pppppplVar77;
          uStack_2a8 = *(undefined8 ********)(lVar81 + 0xd8);
          *(long **)(lVar81 + 0xd8) = plVar32 + uVar57 * 0x21;
          abStack_2b0[0] = (byte)uVar54;
          abStack_2b0[1] = (byte)((ulong)uVar54 >> 8);
          abStack_2b0[2] = (byte)((ulong)uVar54 >> 0x10);
          uStack_2ad = (uint)((ulong)uVar54 >> 0x18);
          cStack_2a9 = (char)((ulong)uVar54 >> 0x38);
          uStack_2b8._0_4_ = (uint)uVar54;
          uStack_2b8._4_4_ = (uint)((ulong)uVar54 >> 0x20);
          uStack_2c0._0_4_ = (float)(uint)uStack_2b8;
          uStack_2c0._4_4_ = uStack_2b8._4_4_;
          func_0x00010a193e00(&uStack_2c0);
          lVar65 = param_1[0x128];
          lVar53 = param_1[0x127];
        }
        if (lVar65 != lVar53) {
          uVar86 = 0;
          do {
            uVar57 = *(ulong *)(lVar53 + uVar86 * 8);
            uVar60 = (param_1[0x125] - param_1[0x124] >> 3) * 0xf83e0f83e0f83e1;
            ppppppplVar70 = uStack_2c0;
            if (uVar60 < uVar57 || uVar60 - uVar57 == 0) goto LAB_10abf0654;
            puVar68 = (undefined8 *)(param_1[0x124] + uVar57 * 0x108);
            puVar75 = *(undefined8 **)(lVar81 + 0xd0);
            if (puVar75 < *(undefined8 **)(lVar81 + 0xd8)) {
              uVar54 = *puVar68;
              uVar40 = puVar68[1];
              *(undefined2 *)(puVar75 + 2) = *(undefined2 *)(puVar68 + 2);
              puVar75[1] = uVar40;
              *puVar75 = uVar54;
              puVar75[4] = 0;
              puVar75[5] = 0;
              puVar75[3] = 0;
              uVar54 = puVar68[3];
              puVar75[4] = puVar68[4];
              puVar75[3] = uVar54;
              puVar75[5] = puVar68[5];
              puVar68[4] = 0;
              puVar68[5] = 0;
              puVar68[3] = 0;
              uVar54 = puVar68[0xe];
              uVar93 = puVar68[0x11];
              uVar40 = puVar68[0x10];
              uVar102 = puVar68[0xb];
              uVar99 = puVar68[10];
              uVar98 = puVar68[0xd];
              uVar94 = puVar68[0xc];
              puVar75[0xf] = puVar68[0xf];
              puVar75[0xe] = uVar54;
              puVar75[0x11] = uVar93;
              puVar75[0x10] = uVar40;
              puVar75[0xb] = uVar102;
              puVar75[10] = uVar99;
              puVar75[0xd] = uVar98;
              puVar75[0xc] = uVar94;
              uVar54 = puVar68[0x16];
              uVar93 = puVar68[0x19];
              uVar40 = puVar68[0x18];
              uVar102 = puVar68[0x13];
              uVar99 = puVar68[0x12];
              uVar98 = puVar68[0x15];
              uVar94 = puVar68[0x14];
              puVar75[0x17] = puVar68[0x17];
              puVar75[0x16] = uVar54;
              puVar75[0x19] = uVar93;
              puVar75[0x18] = uVar40;
              puVar75[0x13] = uVar102;
              puVar75[0x12] = uVar99;
              puVar75[0x15] = uVar98;
              puVar75[0x14] = uVar94;
              uVar94 = puVar68[0x1d];
              uVar93 = puVar68[0x1c];
              uVar54 = puVar68[0x1e];
              uVar40 = puVar68[0x1f];
              uVar99 = puVar68[0x1b];
              uVar98 = puVar68[0x1a];
              *(undefined4 *)(puVar75 + 0x20) = *(undefined4 *)(puVar68 + 0x20);
              puVar75[0x1d] = uVar94;
              puVar75[0x1c] = uVar93;
              puVar75[0x1f] = uVar40;
              puVar75[0x1e] = uVar54;
              puVar75[0x1b] = uVar99;
              puVar75[0x1a] = uVar98;
              uVar54 = puVar68[6];
              uVar93 = puVar68[9];
              uVar40 = puVar68[8];
              puVar75[7] = puVar68[7];
              puVar75[6] = uVar54;
              puVar75[9] = uVar93;
              puVar75[8] = uVar40;
              pppppplVar77 = (long ******)(puVar75 + 0x21);
            }
            else {
              lVar53 = (long)puVar75 - *plVar52;
              uVar57 = (lVar53 >> 3) * 0xf83e0f83e0f83e1 + 1;
              if (0xf83e0f83e0f83e < uVar57) {
                FUN_10a193c14();
                ppppppplVar70 = uStack_2c0;
                goto LAB_10abf0654;
              }
              lVar65 = (long)*(undefined8 **)(lVar81 + 0xd8) - *plVar52 >> 3;
              uVar60 = lVar65 * 0x1f07c1f07c1f07c2;
              if (uVar60 < uVar57 || uVar60 - uVar57 == 0) {
                uVar60 = uVar57;
              }
              if (0x7c1f07c1f07c1e < (ulong)(lVar65 * 0xf83e0f83e0f83e1)) {
                uVar60 = 0xf83e0f83e0f83e;
              }
              if (uVar60 == 0) {
                plVar32 = (long *)0x0;
                plStack_2a0 = plVar52;
              }
              else {
                plVar32 = plVar52;
                plStack_2a0 = plVar52;
                FUN_10a193c28();
              }
              uStack_2b8 = (long ******)((long)plVar32 + lVar53);
              uStack_2c0._0_4_ = SUB84(plVar32,0);
              uStack_2c0._4_4_ = (undefined4)((ulong)plVar32 >> 0x20);
              ppppplVar10 = (long *****)*puVar68;
              ppppplVar92 = (long *****)puVar68[1];
              *(undefined2 *)(uStack_2b8 + 2) = *(undefined2 *)(puVar68 + 2);
              uStack_2b8[1] = ppppplVar92;
              *uStack_2b8 = ppppplVar10;
              uStack_2b8[4] = (long *****)0x0;
              uStack_2b8[5] = (long *****)0x0;
              uStack_2b8[3] = (long *****)0x0;
              ppppplVar10 = (long *****)puVar68[3];
              uStack_2b8[4] = (long *****)puVar68[4];
              uStack_2b8[3] = ppppplVar10;
              uStack_2b8[5] = (long *****)puVar68[5];
              puVar68[4] = 0;
              puVar68[5] = 0;
              puVar68[3] = 0;
              ppppplVar10 = (long *****)puVar68[0xe];
              ppppplVar95 = (long *****)puVar68[0x11];
              ppppplVar92 = (long *****)puVar68[0x10];
              ppppplVar103 = (long *****)puVar68[0xb];
              ppppplVar101 = (long *****)puVar68[10];
              ppppplVar100 = (long *****)puVar68[0xd];
              ppppplVar96 = (long *****)puVar68[0xc];
              uStack_2b8[0xf] = (long *****)puVar68[0xf];
              uStack_2b8[0xe] = ppppplVar10;
              uStack_2b8[0x11] = ppppplVar95;
              uStack_2b8[0x10] = ppppplVar92;
              uStack_2b8[0xb] = ppppplVar103;
              uStack_2b8[10] = ppppplVar101;
              uStack_2b8[0xd] = ppppplVar100;
              uStack_2b8[0xc] = ppppplVar96;
              ppppplVar10 = (long *****)puVar68[0x16];
              ppppplVar95 = (long *****)puVar68[0x19];
              ppppplVar92 = (long *****)puVar68[0x18];
              ppppplVar103 = (long *****)puVar68[0x13];
              ppppplVar101 = (long *****)puVar68[0x12];
              ppppplVar100 = (long *****)puVar68[0x15];
              ppppplVar96 = (long *****)puVar68[0x14];
              uStack_2b8[0x17] = (long *****)puVar68[0x17];
              uStack_2b8[0x16] = ppppplVar10;
              uStack_2b8[0x19] = ppppplVar95;
              uStack_2b8[0x18] = ppppplVar92;
              uStack_2b8[0x13] = ppppplVar103;
              uStack_2b8[0x12] = ppppplVar101;
              uStack_2b8[0x15] = ppppplVar100;
              uStack_2b8[0x14] = ppppplVar96;
              ppppplVar96 = (long *****)puVar68[0x1d];
              ppppplVar95 = (long *****)puVar68[0x1c];
              ppppplVar10 = (long *****)puVar68[0x1e];
              ppppplVar92 = (long *****)puVar68[0x1f];
              ppppplVar101 = (long *****)puVar68[0x1b];
              ppppplVar100 = (long *****)puVar68[0x1a];
              *(undefined4 *)(uStack_2b8 + 0x20) = *(undefined4 *)(puVar68 + 0x20);
              uStack_2b8[0x1d] = ppppplVar96;
              uStack_2b8[0x1c] = ppppplVar95;
              uStack_2b8[0x1f] = ppppplVar92;
              uStack_2b8[0x1e] = ppppplVar10;
              uStack_2b8[0x1b] = ppppplVar101;
              uStack_2b8[0x1a] = ppppplVar100;
              ppppplVar10 = (long *****)puVar68[6];
              ppppplVar95 = (long *****)puVar68[9];
              ppppplVar92 = (long *****)puVar68[8];
              uStack_2b8[7] = (long *****)puVar68[7];
              uStack_2b8[6] = ppppplVar10;
              uStack_2b8[9] = ppppplVar95;
              uStack_2b8[8] = ppppplVar92;
              pppppplVar77 = uStack_2b8 + 0x21;
              abStack_2b0[0] = (byte)pppppplVar77;
              abStack_2b0[1] = (byte)((ulong)pppppplVar77 >> 8);
              abStack_2b0[2] = (byte)((ulong)pppppplVar77 >> 0x10);
              uStack_2ad = (uint)((ulong)pppppplVar77 >> 0x18);
              cStack_2a9 = (char)((ulong)pppppplVar77 >> 0x38);
              lVar53 = (long)uStack_2b8 + (*(long *)(lVar81 + 200) - *(long *)(lVar81 + 0xd0));
              uStack_2a8 = (undefined8 *******)(plVar32 + uVar60 * 0x21);
              func_0x00010a193c70(plVar52,*(long *)(lVar81 + 200),*(long *)(lVar81 + 0xd0),lVar53);
              uVar54 = *(undefined8 *)(lVar81 + 200);
              *(long *)(lVar81 + 200) = lVar53;
              *(long *******)(lVar81 + 0xd0) = pppppplVar77;
              uStack_2a8 = *(undefined8 ********)(lVar81 + 0xd8);
              *(long **)(lVar81 + 0xd8) = plVar32 + uVar60 * 0x21;
              abStack_2b0[0] = (byte)uVar54;
              abStack_2b0[1] = (byte)((ulong)uVar54 >> 8);
              abStack_2b0[2] = (byte)((ulong)uVar54 >> 0x10);
              uStack_2ad = (uint)((ulong)uVar54 >> 0x18);
              cStack_2a9 = (char)((ulong)uVar54 >> 0x38);
              uStack_2b8._0_4_ = (uint)uVar54;
              uStack_2b8._4_4_ = (uint)((ulong)uVar54 >> 0x20);
              uStack_2c0._0_4_ = (float)(uint)uStack_2b8;
              uStack_2c0._4_4_ = uStack_2b8._4_4_;
              func_0x00010a193e00(&uStack_2c0);
            }
            *(long *******)(lVar81 + 0xd0) = pppppplVar77;
            uVar86 = uVar86 + 1;
            lVar53 = param_1[0x127];
          } while (uVar86 < (ulong)(param_1[0x128] - lVar53 >> 3));
        }
        lVar88 = param_1[0x124];
        lVar65 = param_1[0x125];
        if (param_1[0x125] != lVar88) {
          do {
            lVar53 = lVar65 + -0x108;
            uStack_2c0 = (long *******)(lVar65 - 0xf0);
            FUN_10a1901f0(&uStack_2c0);
            lVar65 = lVar53;
          } while (lVar53 != lVar88);
          lVar53 = param_1[0x127];
        }
        param_1[0x125] = lVar88;
        param_1[0x128] = lVar53;
      }
      puVar72 = puVar72 + 1;
    } while (puVar72 != puVar2);
  }
  (**(code **)(*param_1 + 0x1a0))(param_1,param_2);
  lVar53 = param_1[0x137];
  if (*(long *)(lVar53 + 0x18) != 0) {
    lVar65 = 0;
    uVar86 = 0;
    do {
      lVar81 = *(long *)(lVar53 + lVar65 + 0x28);
      if (lVar81 != 0) {
        FUN_10a1dd000();
        *(long *)(lVar53 + lVar65 + 0x20) = lVar81;
        lVar53 = param_1[0x137];
      }
      uVar86 = uVar86 + 1;
      uVar57 = *(ulong *)(lVar53 + 0x18);
      lVar65 = lVar65 + 0x10;
    } while (uVar86 < uVar57);
    if (uVar57 != 0) {
      plVar52 = (long *)(lVar53 + 0x20);
      do {
        if (*plVar52 != 0) {
          *(undefined1 *)(*plVar52 + 0x36c) = 1;
        }
        uVar57 = uVar57 - 1;
        plVar52 = plVar52 + 2;
      } while (uVar57 != 0);
    }
  }
  if (*(char *)((long)param_1 + 0x4c) == '\x01') {
    if (sVar5 != -1) {
      plVar52 = param_1 + 4;
      FUN_10a01f6d4(plVar52,sVar5);
      if (plVar52[0x2e] != plVar52[0x2d]) {
        uVar86 = 0;
        lVar53 = 0x29;
        lVar65 = 0x20;
        do {
          plVar28 = (long *)(*(long *)(param_1[0x137] + lVar65) + 8);
          (**(code **)(*plVar28 + 0xe0))();
          iVar71 = (int)plVar28;
          if ((*(byte *)((long)param_2 + uVar86 + 0x38) & 1) == 0) {
            uVar57 = (plVar52[0x2e] - plVar52[0x2d] >> 4) * -0x5555555555555555;
            ppppppplVar70 = uStack_2c0;
            if (uVar57 < uVar86 || uVar57 - uVar86 == 0) goto LAB_10abf0654;
            if (*(char *)(plVar52[0x2d] + lVar53) != '\0' && iVar71 != 3) goto LAB_10abed5b0;
LAB_10abed5bc:
            FUN_10abf1f8c(param_1[0x137] + 0x10,uVar86);
          }
          else {
            if (iVar71 == 3) goto LAB_10abed5bc;
LAB_10abed5b0:
            if (iVar71 - 1U < 2) goto LAB_10abed5bc;
          }
          uVar86 = uVar86 + 1;
          lVar53 = lVar53 + 0x30;
          lVar65 = lVar65 + 0x10;
        } while (uVar86 < (ulong)((plVar52[0x2e] - plVar52[0x2d] >> 4) * -0x5555555555555555));
      }
      if ((((*(byte *)((long)param_2 + 0x21) & 1) == 0) &&
          (*(char *)((long)plVar52 + 0x19d) == '\0')) ||
         (((*(byte *)((long)param_2 + 0x22) & 1) == 0 && (*(char *)((long)plVar52 + 0x19e) == '\0'))
         )) {
        FUN_10abf2074(param_1[0x137] + 0x10,2);
      }
    }
    lVar53 = param_1[0x137];
    if (*(long *)(lVar53 + 0x18) != 0) {
      plVar52 = *(long **)(lVar53 + 0x20);
      (**(code **)(*plVar52 + 0x50))();
      plVar28 = *(long **)(lVar53 + 0x20);
      FUN_10abf1b04();
      if ((*plVar52 != 0 && *plVar52 == *plVar28) &&
         (lVar53 = param_1[0x137], *(long *)(lVar53 + 0x18) != 0)) {
        uVar86 = 0;
        do {
          FUN_10abf1f8c(lVar53 + 0x10,uVar86 & 0xffffffff);
          uVar86 = uVar86 + 1;
        } while (uVar86 < *(ulong *)(lVar53 + 0x18));
      }
    }
  }
  if (param_2[1] - *param_2 != 0) {
    uVar57 = param_2[1] - *param_2 >> 1;
    ppuVar29 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    ppuVar30 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar31 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    auVar90 = NEON_fmov(0x3f800000,4);
    uVar86 = 0;
LAB_10abed788:
    ppppppplVar70 = uStack_2c0;
    if (uVar86 < (ulong)(param_2[1] - *param_2 >> 1)) {
      plVar52 = param_1 + 4;
      FUN_10abea338(plVar52,*(undefined2 *)(*param_2 + uVar86 * 2));
      plVar28 = (long *)plVar52[2];
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0xf0))(plVar28,param_1);
      }
      sVar6 = *(short *)((long)plVar52 + 2);
      uVar60 = uVar86 + 1;
      if (sVar6 == -1) goto LAB_10abf003c;
      (**(code **)(*param_1 + 0x130))(param_1,sVar6);
      (**(code **)(*param_1 + 400))(param_1,sVar6);
      uVar58 = param_2[0x15];
      lStack_458 = 0;
      uStack_480 = 0;
      plVar52 = param_1 + 4;
      FUN_10a01f6d4(plVar52,sVar6);
      uVar78 = uVar58 & 0xffffffff;
      plVar28 = param_1 + 0xbc;
      func_0x00010a04a0d4(plVar28,sVar6);
      iVar71 = (int)uVar58;
      if (iVar71 == 0) {
        uStack_5a8 = 0;
      }
      else {
        lVar53 = 0;
        uVar58 = 0;
        lVar65 = 0x48;
        ppppppplVar70 = uStack_2c0;
        pppppplVar11 = uStack_2b8;
        do {
          uVar45 = (plVar52[0x2e] - plVar52[0x2d] >> 4) * -0x5555555555555555;
          uStack_2b8 = pppppplVar11;
          if (uVar45 < uVar58 || uVar45 - uVar58 == 0) goto LAB_10abf0654;
          puVar75 = (undefined8 *)(plVar52[0x2d] + lVar53);
          uStack_2c0 = ppppppplVar70;
          if (*(char *)((long)puVar75 + 0x29) == '\0') {
            lVar81 = *(long *)((long)param_2 + lVar65);
            alStack_450[lStack_458 * 2 + 1] = ((long *)((long)param_2 + lVar65))[1];
            alStack_450[lStack_458 * 2] = lVar81;
            lStack_458 = lStack_458 + 1;
            if ((uVar86 == 0) && (*(char *)((long)param_2 + uVar58 + 0x38) == '\x01')) {
              uStack_2c0 = (long *******)param_2[uVar58 + 0x25];
              goto LAB_10abed8c8;
            }
            auStack_478[uStack_480] = 0;
          }
          else {
            FUN_10abebf78(*(undefined4 *)(puVar75 + 3),*(undefined4 *)((long)puVar75 + 0x1c),
                          *(undefined4 *)(puVar75 + 4),*(undefined4 *)((long)puVar75 + 0x24),
                          &uStack_2c0,param_1,puVar75[1],uVar45,*(char *)((long)puVar75 + 0x29),
                          *puVar75);
            alStack_450[lStack_458 * 2 + 1] =
                 CONCAT17(cStack_2a9,
                          CONCAT43(uStack_2ad,
                                   CONCAT12(abStack_2b0[2],CONCAT11(abStack_2b0[1],abStack_2b0[0])))
                         );
            alStack_450[lStack_458 * 2] = (long)uStack_2b8;
            lStack_458 = lStack_458 + 1;
            ppppppplVar70 = uStack_2c0;
            pppppplVar11 = uStack_2b8;
LAB_10abed8c8:
            auStack_478[uStack_480] = (ulong)uStack_2c0;
            uStack_2c0 = ppppppplVar70;
            uStack_2b8 = pppppplVar11;
          }
          uStack_480 = uStack_480 + 1;
          uVar58 = uVar58 + 1;
          lVar53 = lVar53 + 0x30;
          lVar65 = lVar65 + 0x10;
          ppppppplVar70 = uStack_2c0;
          pppppplVar11 = uStack_2b8;
        } while (uVar78 * 0x30 - lVar53 != 0);
        uStack_5a8 = uVar78;
        if (uStack_480 <= uVar78 && uVar78 - uStack_480 != 0) {
          _bzero(auStack_478 + uStack_480,(uVar78 - uStack_480) * 8);
          uStack_480 = uVar78;
        }
      }
      if (*(char *)((long)plVar52 + 0x19d) == '\0') {
        uVar105 = *(undefined4 *)((long)param_2 + 0x24);
        if (uVar86 == 0) {
          lVar53 = param_2[0x29];
          if (*(char *)((long)param_2 + 0x21) == '\0') {
            lVar53 = 0;
          }
          cVar46 = *(char *)((long)plVar52 + 0x19e);
          if (cVar46 == '\0') {
            uStack_660 = *(uint *)(param_2 + 5);
            goto LAB_10abf014c;
          }
        }
        else {
          cVar46 = *(char *)((long)plVar52 + 0x19e);
          if (cVar46 == '\0') {
            lVar53 = 0;
            lVar65 = 0;
            uStack_660 = *(uint *)(param_2 + 5);
            goto LAB_10abed9fc;
          }
          lVar53 = 0;
        }
LAB_10abed9e8:
        uStack_660 = (uint)*(byte *)((long)plVar52 + 0x19c);
        lVar65 = plVar52[0x32];
        if (cVar46 != '\x02') {
          lVar65 = 0;
        }
      }
      else {
        uVar105 = (undefined4)plVar52[0x33];
        lVar53 = plVar52[0x31];
        if (*(char *)((long)plVar52 + 0x19d) != '\x02') {
          lVar53 = 0;
        }
        cVar46 = *(char *)((long)plVar52 + 0x19e);
        if (cVar46 != '\0') goto LAB_10abed9e8;
        uStack_660 = *(uint *)(param_2 + 5);
        if (uVar86 == 0) {
LAB_10abf014c:
          lVar65 = param_2[0x2a];
          if (*(char *)((long)param_2 + 0x22) == '\0') {
            lVar65 = 0;
          }
        }
        else {
          lVar65 = 0;
        }
      }
LAB_10abed9fc:
      plVar32 = *(long **)(param_1[0x10b] + 0x228);
      (**(code **)(*plVar32 + 0x68))();
      if (*(int *)((long)plVar32 + 0x7c) == 1 && (lVar53 != 0 || lVar65 != 0)) {
        FUN_10a00946c(&UNK_10f69a928);
        ppppppplVar70 = uStack_2c0;
      }
      else {
        (**(code **)(*param_1 + 0x198))(param_1,&uStack_480,lVar53,lVar65);
        if ((*(long *)(param_1[0x137] + 0x90) != 0) && (iVar71 != 0)) {
          plVar84 = (long *)(param_1[0x137] + 0x98);
          plVar32 = alStack_450;
          uVar58 = uStack_5a8;
          do {
            if (*plVar84 != 0) {
              plVar32[1] = (long)auVar90._8_8_;
              *plVar32 = (long)auVar90._0_8_;
            }
            plVar32 = plVar32 + 2;
            uVar58 = uVar58 - 1;
            plVar84 = plVar84 + 1;
          } while (uVar58 != 0);
        }
        plVar32 = param_1 + 4;
        FUN_10a01f6d4(plVar32,sVar6);
        lVar53 = param_1[0x137];
        if (uVar86 == 0) {
          bVar22 = false;
        }
        else if (*(uint *)(lVar53 + 0x80) == (uint)*(byte *)((long)plVar32 + 0x44)) {
          bVar22 = *(int *)(lVar53 + 0x84) != (int)plVar32[8];
        }
        else {
          bVar22 = true;
        }
        cVar46 = *(char *)((long)param_1 + 0x4c);
        bVar59 = *(byte *)((long)param_1 + 0xb52);
        pppppppuVar74 = (undefined8 *******)param_2[6];
        pppppppuStack_560 = pppppppuVar74;
        if (pppppppuVar74 != (undefined8 *******)0x0) {
          _memcpy(&uStack_558,param_2 + 7,pppppppuVar74);
          if (uVar86 == 0) {
            bStack_62c = *(byte *)((long)param_2 + 0x21);
            bStack_630 = *(byte *)((long)param_2 + 0x22);
          }
          else {
            _bzero(&uStack_558,pppppppuVar74);
            bStack_62c = 0;
            bStack_630 = 0;
          }
          lVar65 = plVar32[0x2e] - plVar32[0x2d];
          if (lVar65 != 0) {
            lVar65 = (lVar65 >> 4) * -0x5555555555555555;
            pcVar61 = (char *)(plVar32[0x2d] + 0x29);
            pcVar62 = (char *)&uStack_558;
            do {
              ppppppplVar70 = uStack_2c0;
              if (lVar65 == 0) goto LAB_10abf0654;
              if (*pcVar61 != '\0') {
                *pcVar62 = '\x01';
              }
              pcVar62 = pcVar62 + 1;
              pcVar61 = pcVar61 + 0x30;
              lVar65 = lVar65 + -1;
            } while (lVar65 != 0);
          }
          if (*(char *)((long)plVar32 + 0x19d) != '\0') {
            bStack_62c = 1;
          }
          if (*(char *)((long)plVar32 + 0x19e) != '\0') {
            bStack_630 = 1;
          }
          if (cVar46 != '\x01') {
            bStack_62c = 1;
            _memset(&uStack_558,1,pppppppuVar74);
            bStack_630 = 1;
          }
          lVar65 = *(long *)(lVar53 + 0x90);
          bVar87 = 0;
          if (lVar65 != 0) {
            if (lVar65 == *(long *)(lVar53 + 0x18)) {
              plVar84 = (long *)(lVar53 + 0x98);
              plVar27 = (long *)(lVar53 + 0x28);
              do {
                if ((*plVar84 == 0) || (*plVar84 != *plVar27)) goto LAB_10abedbd8;
                lVar65 = lVar65 + -1;
                plVar84 = plVar84 + 1;
                plVar27 = plVar27 + 2;
              } while (lVar65 != 0);
              bVar87 = 1;
            }
            else {
LAB_10abedbd8:
              bVar87 = 0;
            }
          }
          if (*(long *)(lVar53 + 0xb8) == 0) {
            bVar23 = true;
          }
          else {
            bVar23 = *(long *)(lVar53 + 0xb8) != *(long *)(lVar53 + 0x68);
          }
          if (*(long *)(lVar53 + 0xc0) == 0) {
            bVar24 = true;
          }
          else {
            bVar24 = *(long *)(lVar53 + 0xc0) != *(long *)(lVar53 + 0x68);
          }
          lVar65 = 8;
          do {
            bVar47 = 0;
            if ((bVar87 & *(byte *)((long)&pppppppuStack_560 + lVar65)) == 0) {
              bVar47 = *(byte *)((long)&pppppppuStack_560 + lVar65);
            }
            *(byte *)((long)&pppppppuStack_560 + lVar65) = bVar47;
            lVar65 = lVar65 + 1;
            pppppppuVar74 = (undefined8 *******)((long)pppppppuVar74 + -1);
          } while (pppppppuVar74 != (undefined8 *******)0x0);
          if (!bVar23 && ((bStack_62c ^ 0xff) & 1) == 0) {
            bStack_62c = 0;
          }
          if (!bVar24 && ((bStack_630 ^ 0xff) & 1) == 0) {
            bStack_630 = 0;
          }
          if ((*(byte *)(lVar53 + 0xb) & 1) == 0) {
            bVar87 = 0;
            if ((0xc2 < (int)param_1[8]) && (bStack_62c != 0)) {
              bVar87 = *(byte *)(lVar53 + 0xe);
            }
          }
          else {
            bVar87 = 1;
          }
          if ((*(byte *)(lVar53 + 0xc) & 1) == 0) {
            bVar47 = 0;
            if ((0xc2 < (int)param_1[8]) && (bStack_630 != 0)) {
              bVar47 = *(byte *)(lVar53 + 0xe);
            }
          }
          else {
            bVar47 = 1;
          }
          bVar47 = bVar47 & 1;
          cVar4 = *(char *)(lVar53 + 10);
          plVar84 = param_1 + 0xbc;
          func_0x00010a04a0d4(plVar84,sVar6);
          pppppppuVar12 = pppppppuStack_560;
          bVar87 = (((int)plVar84[0x120] == 1 && *(short *)((long)plVar84 + 0x906) == 1) &&
                   (int)param_1[8] < 0xc3) & bStack_62c | bVar87 & 1;
          pcVar61 = (char *)&uStack_558;
          pppppppuVar74 = pppppppuStack_560;
          bVar63 = bVar87;
          if ((uVar86 == 0) && (0xa0 < (int)param_1[8])) {
            lVar53 = param_1[0x137];
            if (((*(byte *)(lVar53 + 0xb) & 1) == 0) && ((*(byte *)(lVar53 + 0xc) & 1) == 0)) {
              bVar48 = *(long *)(lVar53 + 0x60) == 0 & (*(byte *)(lVar53 + 0xe) ^ 0xff);
            }
            else {
              bVar48 = 0;
            }
            if (bVar48 == 0 && ((bStack_62c ^ 0xff) & 1) == 0) {
              bVar63 = 1;
            }
            if (*(char *)((long)param_2 + 0x21) == '\0') {
              bVar63 = bVar87;
            }
            bVar87 = bVar47;
            if (bVar48 == 0 && ((bStack_630 ^ 0xff) & 1) == 0) {
              bVar87 = 1;
            }
            if (*(char *)((long)param_2 + 0x22) == '\x01') {
              bVar47 = bVar87;
            }
          }
          for (; pppppppuVar74 != (undefined8 *******)0x0;
              pppppppuVar74 = (undefined8 *******)((long)pppppppuVar74 + -1)) {
            if (*pcVar61 == '\0' && bVar59 == 0) {
              cVar4 = '\0';
              break;
            }
            pcVar61 = pcVar61 + 1;
          }
          lVar53 = param_1[0x137];
          if (*(long *)(lVar53 + 0x90) != 0) {
            lVar81 = *(long *)(lVar53 + 0x90) << 3;
            lVar65 = 0x98;
            do {
              if (*(long *)(lVar53 + lVar65) != 0) {
                if (*(long *)(lVar53 + 0x18) == 0) {
                  uStack_654 = 1;
                  uStack_650 = 0;
                  goto LAB_10abedec8;
                }
                uVar86 = 1;
                uVar58 = 0;
                goto LAB_10abeddf4;
              }
              lVar65 = lVar65 + 8;
              lVar81 = lVar81 + -8;
            } while (lVar81 != 0);
          }
          uStack_654 = 0;
          uStack_650 = 0;
          goto LAB_10abedec8;
        }
        ppppppplStack_410 = (long *******)&UNK_10f69a78a;
        uStack_408._0_2_ = 0x3b;
        uStack_408._2_1_ = 0;
        uStack_408._3_1_ = 0;
        uStack_408._4_4_ = 0;
        FUN_10a0edfc4(&ppppppplStack_410);
        ppppppplVar70 = uStack_2c0;
      }
    }
    goto LAB_10abf0654;
  }
LAB_10abf01a8:
  if (sVar5 != -1) {
    plVar52 = param_1 + 0xbc;
    func_0x00010a04a0d4(plVar52);
    FUN_10aba70c4(param_1[0x154],plVar52);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
LAB_10abf02bc:
  func_0x000107c2b054(&pppppppuStack_560,&UNK_10f69ab0d);
  func_0x000107c2b054(&ppppppplStack_4f0,"");
  if (uStack_54c < 0) {
    pppppppuVar74 = (undefined8 *******)"null";
    if (CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT12(uStack_556,uStack_558))) != 0) {
      pppppppuVar74 = pppppppuStack_560;
    }
  }
  else {
    pppppppuVar74 = (undefined8 *******)"null";
    if (uStack_54c._3_1_ != '\0') {
      pppppppuVar74 = &pppppppuStack_560;
    }
  }
  uStack_2c0._0_4_ = SUB84(pppppppuVar74,0);
  uStack_2c0._4_4_ = (undefined4)((ulong)pppppppuVar74 >> 0x20);
  if ((long)uStack_4e0 < 0) {
    ppppppplStack_410 = (long *******)"null";
    if (plStack_4e8 != (long *)0x0) {
      ppppppplStack_410 = ppppppplStack_4f0;
    }
  }
  else {
    ppppppplStack_410 = (long *******)"null";
    if (uStack_4e0._7_1_ != '\0') {
      ppppppplStack_410 = (long *******)&ppppppplStack_4f0;
    }
  }
  FUN_10a224324(&uStack_2c0,&ppppppplStack_410);
  if (uStack_54c < 0) {
    if (CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT12(uStack_556,uStack_558))) == 0)
    goto LAB_10abf04c4;
    func_0x000107c3192c(&uStack_2c0,pppppppuStack_560);
LAB_10abf0574:
    uVar49 = 1;
  }
  else {
    if (uStack_54c._3_1_ != '\0') {
      uStack_2b8 = (long ******)
                   CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT12(uStack_556,uStack_558)));
      uStack_2c0._0_4_ = SUB84(pppppppuStack_560,0);
      uStack_2c0._4_4_ = (undefined4)((ulong)pppppppuStack_560 >> 0x20);
      abStack_2b0[0] = (byte)uStack_550;
      abStack_2b0[1] = (byte)((uint)uStack_550 >> 8);
      abStack_2b0[2] = (byte)((uint)uStack_550 >> 0x10);
      uStack_2ad = (uint)(CONCAT44(uStack_54c,uStack_550) >> 0x18);
      cStack_2a9 = uStack_54c._3_1_;
      goto LAB_10abf0574;
    }
LAB_10abf04c4:
    uVar49 = 0;
    uStack_2c0._0_4_ = (float)((uint)(float)uStack_2c0 & 0xffffff00);
  }
  uStack_2a8 = (undefined8 *******)CONCAT71(uStack_2a8._1_7_,uVar49);
  if ((long)uStack_4e0 < 0) {
    if (plStack_4e8 == (long *)0x0) goto LAB_10abf05a0;
    func_0x000107c3192c(&ppppppplStack_410,ppppppplStack_4f0);
LAB_10abf0610:
    uVar49 = 1;
  }
  else {
    if (uStack_4e0._7_1_ != '\0') {
      uStack_408._0_2_ = SUB82(plStack_4e8,0);
      uStack_408._2_1_ = (undefined1)((ulong)plStack_4e8 >> 0x10);
      uStack_408._3_1_ = (undefined1)((ulong)plStack_4e8 >> 0x18);
      uStack_408._4_4_ = (undefined4)((ulong)plStack_4e8 >> 0x20);
      ppppppplStack_410 = ppppppplStack_4f0;
      uStack_400 = SUB84(uStack_4e0,0);
      uStack_3fc = (undefined4)((ulong)uStack_4e0 >> 0x20);
      goto LAB_10abf0610;
    }
LAB_10abf05a0:
    uVar49 = 0;
    ppppppplStack_410 = (long *******)((ulong)ppppppplStack_410 & 0xffffffffffffff00);
  }
  uStack_3f8 = CONCAT31(uStack_3f8._1_3_,uVar49);
  FUN_10a234a0c(&uStack_2c0,&ppppppplStack_410);
  ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
LAB_10abf0654:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x10abf0658);
  uStack_2c0 = ppppppplVar70;
  (*pcVar21)();
  while( true ) {
    (**(code **)(*plVar84 + 0xb0))();
    if ((int)plVar84 != *piVar34) goto LAB_10abedeb0;
    plVar84 = *(long **)(lVar65 + uVar58 * 8);
    (**(code **)(*plVar84 + 0xb8))();
    if ((int)plVar84 != piVar34[1]) goto LAB_10abedeb0;
    plVar84 = *(long **)(lVar65 + uVar58 * 8);
    (**(code **)(*plVar84 + 0xe8))();
    plVar27 = *(long **)(param_1[0x137] + uVar58 * 0x10 + 0x28);
    (**(code **)(*plVar27 + 0xe8))();
    if (((int)plVar84 != (int)plVar27) ||
       (lVar53 = param_1[0x137], *(long *)(lVar65 + uVar58 * 8) == *(long *)(lVar53 + 0x28)))
    goto LAB_10abedeb0;
    uVar86 = (ulong)((int)uVar45 + 1);
    uVar58 = uVar45;
    if (*(ulong *)(lVar53 + 0x18) <= uVar45) break;
LAB_10abeddf4:
    uVar45 = uVar86;
    piVar34 = *(int **)(lVar53 + uVar58 * 0x10 + 0x20);
    FUN_10abf1a58(piVar34,0);
    lVar65 = lVar53 + 0x98;
    plVar84 = *(long **)(lVar65 + uVar58 * 8);
    if (plVar84 == (long *)0x0) {
LAB_10abedeb0:
      uStack_650 = 1;
      goto LAB_10abedeb8;
    }
  }
  uStack_650 = 0;
LAB_10abedeb8:
  uStack_654 = 1;
LAB_10abedec8:
  if (0 < (long)pppppppuVar12) {
    _bzero(&uStack_408,pppppppuVar12);
  }
  lVar53 = param_1[0x137];
  if ((cVar46 == '\x01') && (*(long *)(lVar53 + 0x90) != 0)) {
    if (*(long *)(lVar53 + 0x90) == *(long *)(lVar53 + 0x18)) {
      uVar86 = 0;
      lVar65 = 0x20;
      do {
        if (*(long *)(lVar53 + uVar86 * 8 + 0x98) != 0) {
          plVar84 = (long *)0x1;
          FUN_10a088744();
          if (plVar84 == (long *)0x0) {
            lVar53 = 0;
          }
          else {
            lVar53 = *plVar84;
          }
          plVar84 = *(long **)(param_1[0x137] + lVar65);
          FUN_10abf1b04();
          if (*plVar84 != lVar53) {
            *(byte *)((long)&uStack_408 + uVar86) = bVar22 ^ 1;
          }
        }
        uVar86 = uVar86 + 1;
        lVar53 = param_1[0x137];
        lVar65 = lVar65 + 0x10;
      } while (uVar86 < *(ulong *)(lVar53 + 0x90));
    }
    else if (pppppppuVar12 != (undefined8 *******)0x0) {
      _memset(&uStack_408,1,pppppppuVar12);
    }
  }
  lVar53 = *(long *)(lVar53 + 0xb8);
  if (lVar53 == 0) {
LAB_10abedff4:
    bVar23 = false;
    uVar49 = 0;
    uVar80 = 0;
    bVar87 = 0;
  }
  else {
    lVar65 = lVar53;
    ___dynamic_cast(lVar53,&PTR_DAT_110bb3788,&PTR_DAT_110bab2a8,0xfffffffffffffffe);
    if (lVar65 == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f69a533,&UNK_10f69a7c6,0x5e5,&UNK_10f69a83d);
      }
      goto LAB_10abedff4;
    }
    plVar84 = (long *)0x1;
    FUN_10a088744();
    if (plVar84 == (long *)0x0) {
      lVar65 = 0;
    }
    else {
      lVar65 = *plVar84;
    }
    if ((int)lVar53 == 2) {
      plVar84 = *(long **)(param_1[0x137] + 0x60);
      if (plVar84 == (long *)0x0) {
LAB_10abee04c:
        bVar87 = 0;
      }
      else {
        FUN_10abf1b04();
        if (*plVar84 == lVar65) goto LAB_10abee04c;
        bVar87 = bVar22 ^ 1;
      }
      pfVar33 = *(float **)(param_1[0x137] + 0xb8);
      if (pfVar33 == (float *)0x0) {
        pfVar33 = (float *)0x0;
      }
      else {
        ___dynamic_cast(pfVar33,&PTR_DAT_110bb3788,&PTR_DAT_110bab2a8,0xfffffffffffffffe);
      }
      plVar84 = param_1 + 0xbc;
      func_0x00010a04a0d4(plVar84,sVar6);
      if (cVar4 != '\0') {
LAB_10abee0a8:
        uVar80 = 2;
        goto LAB_10abee0b0;
      }
      pfVar41 = pfVar33;
      (**(code **)(*(long *)pfVar33 + 0x10))();
      lVar53 = 200;
      if ((ulong)plVar84[0x57] < 2) {
        lVar53 = 0x1e0;
      }
      if (*pfVar41 != *(float *)((long)plVar84 + lVar53 + 0x158)) goto LAB_10abee0a8;
      pfVar41 = pfVar33;
      (**(code **)(*(long *)pfVar33 + 0x10))();
      lVar53 = 200;
      if ((ulong)plVar84[0x57] < 2) {
        lVar53 = 0x1e0;
      }
      if (pfVar41[1] != *(float *)((long)plVar84 + lVar53 + 0x168)) goto LAB_10abee0a8;
      (**(code **)(*(long *)pfVar33 + 0x10))();
      lVar53 = 200;
      if ((ulong)plVar84[0x57] < 2) {
        lVar53 = 0x1e0;
      }
      if (pfVar33[2] != *(float *)((long)plVar84 + lVar53 + 0x15c)) goto LAB_10abee0a8;
      bStack_62c = 0;
      bVar23 = true;
      uVar49 = 1;
      uVar80 = 1;
    }
    else {
      uVar80 = 0;
      bVar87 = 0;
LAB_10abee0b0:
      uVar49 = 0;
      bVar23 = true;
    }
  }
  lVar53 = *(long *)(param_1[0x137] + 0xc0);
  if (lVar53 == 0) {
    bVar48 = 0;
    cVar79 = '\0';
    bVar83 = 0;
    cVar46 = '\0';
    if (bVar23) goto LAB_10abee15c;
  }
  else {
    plVar84 = (long *)0x1;
    FUN_10a088744();
    if (plVar84 == (long *)0x0) {
      lVar65 = 0;
    }
    else {
      lVar65 = *plVar84;
    }
    if ((int)lVar53 == 2) {
      plVar84 = *(long **)(param_1[0x137] + 0x60);
      if (plVar84 == (long *)0x0) {
LAB_10abee134:
        bVar48 = 0;
      }
      else {
        FUN_10abf1b04();
        if (*plVar84 == lVar65) goto LAB_10abee134;
        bVar48 = bVar22 ^ 1;
      }
      bVar83 = 0;
      if (cVar4 != '\0') {
        bVar83 = bStack_630;
      }
      bStack_630 = bVar83;
      cVar46 = '\x01';
      if (cVar4 != '\0') {
        cVar46 = '\x02';
      }
    }
    else {
      cVar46 = '\0';
      bVar48 = 0;
    }
    if (cVar46 != '\0') {
      uVar49 = 1;
    }
LAB_10abee15c:
    cVar79 = cVar46;
    bVar83 = bVar48 | bVar87;
  }
  uVar86 = param_2[0x15];
  if (uVar86 != 0) {
    uVar58 = 0;
    lVar53 = 0x10;
    do {
      uVar45 = (plVar32[0x2e] - plVar32[0x2d] >> 4) * -0x5555555555555555;
      ppppppplVar70 = uStack_2c0;
      if (uVar45 < uVar58 || uVar45 - uVar58 == 0) goto LAB_10abf0654;
      lVar65 = *(long *)(plVar32[0x2d] + lVar53);
      if (lVar65 != 0) {
        FUN_10a088744(lVar65,1);
        if ((int)lVar65 == 2) {
          lVar53 = param_1[0x137];
          plVar32 = (long *)(lVar53 + 0x98);
          plVar84 = (long *)(lVar53 + 0x28);
          goto LAB_10abee67c;
        }
      }
      uVar58 = uVar58 + 1;
      lVar53 = lVar53 + 0x30;
    } while (uVar86 != uVar58);
  }
  uVar64 = 0;
LAB_10abee1d0:
  uStack_2c0._0_4_ = SUB84(pppppppuVar12,0);
  uStack_2c0._4_4_ = (undefined4)((ulong)pppppppuVar12 >> 0x20);
  if (pppppppuVar12 == (undefined8 *******)0x0) {
    uStack_2ad = CONCAT31(uStack_2ad._1_3_,bVar47);
    abStack_2b0[0] = bVar83;
    abStack_2b0[1] = cVar4;
    abStack_2b0[2] = bVar63;
  }
  else {
    _memcpy(&uStack_2b8,&uStack_408,pppppppuVar12);
    uStack_2ad = CONCAT31(uStack_2ad._1_3_,bVar47);
    abStack_2b0[0] = bVar83;
    abStack_2b0[1] = cVar4;
    abStack_2b0[2] = bVar63;
    _memcpy(&plStack_2a0,&uStack_558,pppppppuVar12);
  }
  uStack_2a8 = pppppppuVar12;
  abStack_298[5] = bVar59 ^ 1;
  abStack_298[0] = bStack_62c;
  abStack_298[1] = bStack_630;
  abStack_298[3] = uStack_650;
  lVar53 = param_1[0x136];
  abStack_298[2] = uVar49;
  abStack_298[4] = uVar64;
  abStack_298[6] = bVar22;
  abStack_298[7] = uStack_654;
  auStack_290[0] = uVar80;
  auStack_290[1] = cVar79;
  FUN_10ac04d14(lVar53 + 0x10,&uStack_2c0);
  *(uint *)(lVar53 + 0x20) =
       CONCAT13((undefined1)uStack_2ad,
                CONCAT12(abStack_2b0[2],CONCAT11(abStack_2b0[1],abStack_2b0[0])));
  FUN_10ac04d14(lVar53 + 0x28,&uStack_2a8);
  *(ulong *)(lVar53 + 0x38) =
       CONCAT17(abStack_298[7],
                CONCAT16(abStack_298[6],
                         CONCAT15(abStack_298[5],
                                  CONCAT14(abStack_298[4],
                                           CONCAT13(abStack_298[3],
                                                    CONCAT12(abStack_298[2],
                                                             CONCAT11(abStack_298[1],abStack_298[0])
                                                            ))))));
  *(ushort *)(lVar53 + 0x40) = CONCAT11(auStack_290[1],auStack_290[0]);
  lVar53 = param_1[0x136];
  if (*(long *)(lVar53 + 0x10) != 0) {
    uVar86 = 0;
    do {
      if (*(char *)(lVar53 + uVar86 + 0x18) == '\x01') {
        FUN_10abf1f8c(param_1[0x137] + 0x10,uVar86);
        lVar53 = param_1[0x136];
      }
      uVar86 = uVar86 + 1;
    } while (uVar86 < *(ulong *)(lVar53 + 0x10));
  }
  if ((*(byte *)(lVar53 + 0x20) & 1) != 0) {
    FUN_10abf2074(param_1[0x137] + 0x10,2);
  }
  plStack_488 = (long *)0x0;
  lStack_490 = 0;
  lVar53 = *(long *)(param_1[0x10b] + 0x1c8);
  if (((lVar53 != 0) && ((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0)) &&
     (((*(byte *)(param_1 + 0xf) & 1) == 0 && ((char)plVar52[0x40] == '\x01')))) {
    FUN_10a18da5c(&uStack_2c0,param_1 + 0x16b);
    lStack_118 = param_1[0x1a0];
    plStack_110 = (long *)param_1[0x1a1];
    if (param_1[0x1a1] != 0) {
      plVar32 = (long *)(param_1[0x1a1] + 8);
      do {
        cVar46 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar22) {
          *plVar32 = *plVar32 + 1;
          cVar46 = ExclusiveMonitorsStatus();
        }
      } while (cVar46 != '\0');
    }
    lStack_108 = param_1[0x1a2];
    lStack_100 = param_1[0x1a3];
    lStack_f8 = param_1[0x1a4];
    lStack_f0 = param_1[0x1a5];
    plStack_e8 = (long *)param_1[0x1a6];
    if (plStack_e8 != (long *)0x0) {
      plVar32 = plStack_e8 + 1;
      do {
        cVar46 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar22) {
          *plVar32 = *plVar32 + 1;
          cVar46 = ExclusiveMonitorsStatus();
        }
      } while (cVar46 != '\0');
    }
    lStack_e0 = param_1[0x1a7];
    lStack_d8 = param_1[0x1a8];
    lStack_d0 = param_1[0x1a9];
    lStack_c8 = param_1[0x1aa];
    uStack_c0 = param_1[0x1ab];
    cVar46 = *(char *)((long)param_1 + 0xb52);
    if (cVar46 == '\x01') {
      uStack_c0._4_4_ = (int)((ulong)uStack_c0 >> 0x20);
      uVar50 = 3;
      uVar91 = uVar50;
      if (CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0) != 0) {
        uVar91 = 0;
      }
      if ((int)uStack_c0 != 2) {
        uVar50 = 0;
      }
      uVar51 = 3;
      if (uStack_c0._4_4_ != 2) {
        uVar51 = 0;
      }
      (**(code **)(*param_1 + 0x90))(param_1,uVar91,uVar50,uVar51);
    }
    puVar55 = *ppuVar29;
    if (((puVar55 != (undefined *)0x0) && (puVar55[0xc0] == '\x01')) &&
       (*(long *)(puVar55 + 0x80) != 0)) {
      FUN_10a08dbac(puVar55 + 0x18);
    }
    *(undefined1 *)((long)param_1 + 0xb1d) = 1;
    FUN_10a026b30(&ppppppplStack_410,lVar53,param_1,param_1[0x136] + 0x48,sVar6);
    FUN_10a026ab4(&lStack_490,&ppppppplStack_410);
    plVar32 = (long *)CONCAT44(uStack_408._4_4_,
                               CONCAT13(uStack_408._3_1_,
                                        CONCAT12(uStack_408._2_1_,(undefined2)uStack_408)));
    if (plVar32 != (long *)0x0) {
      plVar84 = plVar32 + 1;
      do {
        lVar53 = *plVar84;
        cVar4 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
        if (bVar22) {
          *plVar84 = lVar53 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar53 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
      }
    }
    *(undefined1 *)((long)param_1 + 0xb1d) = 0;
    if (cVar46 != '\0') {
      if (CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0) != 0) {
        lVar53 = CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0) * 0x68;
        puVar66 = extraout_x9;
        do {
          puVar66 = puVar66 + 0x1a;
          *puVar66 = 1;
          lVar53 = lVar53 + -0x68;
        } while (lVar53 != 0);
      }
      if ((int)uStack_c0 != 2) {
        uStack_c0 = CONCAT44(uStack_c0._4_4_,1);
      }
      if (uStack_c0._4_4_ != 2) {
        uStack_c0 = CONCAT44(1,(int)uStack_c0);
      }
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_2c0);
    }
    plVar32 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar84 = plStack_e8 + 1;
      do {
        lVar53 = *plVar84;
        cVar46 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
        if (bVar22) {
          *plVar84 = lVar53 + -1;
          cVar46 = ExclusiveMonitorsStatus();
        }
      } while (cVar46 != '\0');
      if (lVar53 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
      }
    }
    plVar32 = plStack_110;
    if (plStack_110 != (long *)0x0) {
      plVar84 = plStack_110 + 1;
      do {
        lVar53 = *plVar84;
        cVar46 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
        if (bVar22) {
          *plVar84 = lVar53 + -1;
          cVar46 = ExclusiveMonitorsStatus();
        }
      } while (cVar46 != '\0');
      if (lVar53 == 0) {
        (**(code **)(*plStack_110 + 0x10))(plStack_110);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
      }
    }
    func_0x00010a048e34(&uStack_2b8,CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0));
  }
  lVar53 = *(long *)(param_1[0x137] + 0x68);
  if (lVar53 != 0) {
    plVar32 = param_1 + 0xbc;
    func_0x00010a04a0d4(plVar32,sVar6);
    lVar65 = 200;
    if ((ulong)plVar32[0x57] < 2) {
      lVar65 = 0x1e0;
    }
    uVar91 = *(undefined4 *)((long)plVar32 + lVar65 + 0x168);
    uVar97 = *(uint *)((long)plVar32 + lVar65 + 0x15c);
    *(undefined4 *)(lVar53 + 0x2f8) = *(undefined4 *)((long)plVar32 + lVar65 + 0x158);
    *(undefined4 *)(lVar53 + 0x2fc) = uVar91;
    *(ulong *)(lVar53 + 0x300) = (ulong)uVar97;
  }
  uVar91 = (undefined4)in_stack_fffffffffffff918;
  lVar53 = param_1[0x136];
  if (*(char *)(lVar53 + 0x3d) == '\x01') {
    in_stack_fffffffffffff918 =
         CONCAT62((int6)(CONCAT44(uStack_660,uVar91) >> 0x10),*(undefined2 *)(lVar53 + 0x38));
    in_stack_fffffffffffff910 = &lStack_458;
    FUN_10abf2180(uVar105,param_1[0x137] + 0x10,param_1,*(undefined1 *)((long)plVar52 + 0x44),
                  (int)plVar52[8],*(undefined1 *)(lVar53 + 0x21),*(undefined1 *)(lVar53 + 0x22),
                  *(undefined1 *)(lVar53 + 0x23),lVar53 + 0x28,in_stack_fffffffffffff910,
                  in_stack_fffffffffffff918,*(undefined1 *)(lVar53 + 0x3a));
    FUN_10abf1f44(param_1,*(undefined8 *)(param_1[0x137] + 0x20),
                  *(undefined1 *)((long)plVar52 + 0x44));
  }
  else {
    lVar65 = *(long *)(lVar53 + 0x28);
    if (lVar65 != 0) {
      pcVar61 = (char *)(lVar53 + 0x30);
      do {
        if (*pcVar61 == '\x01') {
          if (uStack_480 == 0) goto LAB_10abee6d0;
          break;
        }
        lVar65 = lVar65 + -1;
        pcVar61 = pcVar61 + 1;
      } while (lVar65 != 0);
    }
    if ((((*(byte *)(lVar53 + 0x38) & 1) != 0) || ((*(byte *)(lVar53 + 0x39) & 1) != 0)) ||
       (*(char *)(lVar53 + 0x3e) == '\x01')) {
LAB_10abee6d0:
      lVar65 = param_1[0x137];
      if (*(char *)((long)param_1 + 0xb52) == '\x01') {
        lVar53 = *(long *)(lVar65 + 0x20);
        bVar47 = *(byte *)(lVar53 + 0x318);
        bVar87 = *(byte *)(lVar53 + 0x319);
        bVar59 = *(byte *)(lVar53 + 0x31a);
        (**(code **)(*param_1 + 0x90))(param_1,0,0,0);
        lVar65 = param_1[0x137];
        lVar53 = param_1[0x136];
      }
      else {
        bVar59 = *(byte *)(lVar53 + 0x23);
        bVar87 = *(byte *)(lVar53 + 0x22);
        bVar47 = *(byte *)(lVar53 + 0x21);
      }
      in_stack_fffffffffffff918 =
           CONCAT62((int6)(CONCAT44(uStack_660,uVar91) >> 0x10),*(undefined2 *)(lVar53 + 0x38));
      in_stack_fffffffffffff910 = &lStack_458;
      FUN_10abf2180(uVar105,lVar65 + 0x10,param_1,*(undefined1 *)((long)plVar52 + 0x44),
                    (int)plVar52[8],bVar47 & 1,bVar87 & 1,bVar59 & 1,lVar53 + 0x28,
                    in_stack_fffffffffffff910,in_stack_fffffffffffff918,
                    *(undefined1 *)(lVar53 + 0x3a));
    }
  }
  puVar75 = *(undefined8 **)(param_1[0x137] + 0x20);
  if (*(short *)(param_1[0x136] + 4) == -1) {
    uVar86 = 0;
  }
  else {
    plVar32 = param_1 + 4;
    FUN_10a01f6d4();
    uVar86 = (ulong)*(byte *)((long)plVar32 + 0x44);
  }
  lVar53 = puVar75[0x69];
  lVar65 = puVar75[0x6a];
  if (lVar53 == lVar65) {
    FUN_10abf1a58(puVar75,uVar86);
    uStack_4a0 = 0;
  }
  else {
    func_0x000107c2b054(&uStack_2c0,&UNK_10f69acbe);
    if ((uint)((ulong)(lVar65 - lVar53) >> 4) <= (uint)uVar86) {
      FUN_10a109200(&uStack_2c0);
      ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
      goto LAB_10abf0654;
    }
    if (cStack_2a9 < '\0') {
      __ZdlPv(CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0));
    }
    ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
    if ((ulong)((long)(puVar75[0x6a] - puVar75[0x69]) >> 4) <= uVar86) goto LAB_10abf0654;
    puVar68 = (undefined8 *)(puVar75[0x69] + uVar86 * 0x10);
    puVar75 = puVar68 + 1;
    uStack_4a0 = *puVar68;
  }
  uStack_498 = *puVar75;
  (**(code **)(*param_1 + 0xc0))(param_1,&uStack_4a0);
  ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
  lVar53 = param_1[0x136];
  if (*(char *)(lVar53 + 0x3f) == '\x01') {
    ppppppplVar69 = (long *******)0x0;
    ppppppplVar70 = (long *******)0x0;
    if (iVar71 != 0) {
      uVar86 = 0;
      do {
        uVar19 = uStack_3d3;
        uVar17 = uStack_3d8;
        uVar15 = uStack_3f4;
        uVar13 = uStack_3f8;
        uVar50 = uStack_3fc;
        uVar105 = uStack_400;
        lVar53 = *(long *)(param_1[0x137] + uVar86 * 8 + 0x98);
        uStack_400 = auVar90._0_4_;
        uVar91 = uStack_400;
        uStack_3fc = auVar90._4_4_;
        uVar51 = uStack_3fc;
        uStack_3f8 = auVar90._8_4_;
        uVar14 = uStack_3f8;
        uStack_3f4 = auVar90._12_4_;
        uVar16 = uStack_3f4;
        uStack_3d3 = 0;
        uVar20 = uStack_3d3;
        uStack_3d8 = 0;
        uVar18 = uStack_3d8;
        uStack_2c0 = ppppppplVar69;
        if (lVar53 == 0) {
          uStack_408._0_2_ = 0;
          uStack_408._2_1_ = 0;
          uStack_408._3_1_ = 0;
          uStack_408._4_4_ = 0;
          ppppppplStack_410 = (long *******)0x0;
          auStack_3e8[0] = 0;
          pppppppuStack_3f0 = (undefined8 *******)0x3f800000;
          auStack_3e8[1] = 0x3f800000;
          uStack_3d0 = 0x3f800000;
          auStack_3cc = (undefined1  [4])0x0;
          uStack_3c8 = 0;
          bStack_3c4 = 0;
          plVar32 = (long *)param_1[0x10b];
          FUN_10a243348(plVar32,5);
          puVar75 = (undefined8 *)0x1;
          FUN_10a088744(*(undefined8 *)(*plVar32 + 0x268));
          if (puVar75 == (undefined8 *)0x0) {
            plVar32 = (long *)0x0;
            ppppppplStack_410 = (long *******)0x0;
          }
          else {
            ppppppplStack_410 = (long *******)*puVar75;
            plVar32 = (long *)puVar75[1];
            if (plVar32 != (long *)0x0) {
              plVar84 = plVar32 + 1;
              do {
                cVar46 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
                if (bVar22) {
                  *plVar84 = *plVar84 + 1;
                  cVar46 = ExclusiveMonitorsStatus();
                }
              } while (cVar46 != '\0');
            }
          }
          uStack_408._0_2_ = SUB82(plVar32,0);
          uStack_408._2_1_ = (undefined1)((ulong)plVar32 >> 0x10);
          uStack_408._3_1_ = (undefined1)((ulong)plVar32 >> 0x18);
          uStack_408._4_4_ = (undefined4)((ulong)plVar32 >> 0x20);
          lVar65 = alStack_450[uVar86 * 2];
          lVar81 = alStack_450[uVar86 * 2 + 1];
          uStack_3f8 = (undefined4)lVar81;
          uStack_3f4 = (undefined4)((ulong)lVar81 >> 0x20);
          uStack_400 = (undefined4)lVar65;
          uStack_3fc = (undefined4)((ulong)lVar65 >> 0x20);
          auStack_3cc = (undefined1  [4])0x0;
          bVar59 = *(byte *)(param_1[0x136] + uVar86 + 0x30);
          bStack_3c4 = bVar59 ^ 1;
          lVar53 = (long)uStack_2c0 * 0x50;
          (&uStack_2b8)[(long)uStack_2c0 * 10] = ppppppplStack_410;
          *(long **)(abStack_2b0 + lVar53) = plVar32;
          if (plVar32 == (long *)0x0) {
            *(ulong *)(auStack_274 + lVar53 + 1) =
                 (ulong)CONCAT14(bVar59,uStack_3c8) << 0x18 ^ 0x100000000000000;
            *(ulong *)(auStack_27c + lVar53 + 1) = (ulong)CONCAT43(uStack_3d0,uStack_3d3);
            *(long *)(abStack_298 + lVar53 + -8) = lVar81;
            (&uStack_2a8)[(long)uStack_2c0 * 10] = lVar65;
            *(ulong *)(abStack_298 + lVar53 + 8) = auStack_3e8[0];
            *(undefined8 ********)(abStack_298 + lVar53) = pppppppuStack_3f0;
            *(ulong *)(auStack_284 + lVar53 + 4) = CONCAT35(uStack_3d3,uStack_3d8);
            *(ulong *)(auStack_28c + lVar53 + 4) = auStack_3e8[1];
            ppppppplVar69 = (long *******)((long)uStack_2c0 + 1);
          }
          else {
            plVar84 = plVar32 + 1;
            do {
              cVar46 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
              if (bVar22) {
                *plVar84 = *plVar84 + 1;
                cVar46 = ExclusiveMonitorsStatus();
              }
            } while (cVar46 != '\0');
            *(ulong *)(auStack_274 + lVar53 + 1) =
                 (ulong)CONCAT14(bVar59,uStack_3c8) << 0x18 ^ 0x100000000000000;
            *(ulong *)(auStack_27c + lVar53 + 1) = (ulong)CONCAT43(uStack_3d0,uStack_3d3);
            *(long *)(abStack_298 + lVar53 + -8) = lVar81;
            (&uStack_2a8)[(long)uStack_2c0 * 10] = lVar65;
            *(ulong *)(abStack_298 + lVar53 + 8) = auStack_3e8[0];
            *(undefined8 ********)(abStack_298 + lVar53) = pppppppuStack_3f0;
            *(ulong *)(auStack_284 + lVar53 + 4) = CONCAT35(uStack_3d3,uStack_3d8);
            *(ulong *)(auStack_28c + lVar53 + 4) = auStack_3e8[1];
            uStack_2c0 = (long *******)((long)uStack_2c0 + 1);
            do {
              lVar53 = *plVar84;
              cVar46 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
              if (bVar22) {
                *plVar84 = lVar53 + -1;
                cVar46 = ExclusiveMonitorsStatus();
              }
            } while (cVar46 != '\0');
            ppppppplVar69 = uStack_2c0;
            if (lVar53 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
              ppppppplVar69 = uStack_2c0;
            }
          }
        }
        else {
          puVar75 = (undefined8 *)0x1;
          uStack_400 = uVar105;
          uStack_3fc = uVar50;
          uStack_3f8 = uVar13;
          uStack_3f4 = uVar15;
          uStack_3d8 = uVar17;
          uStack_3d3 = uVar19;
          FUN_10a088744();
          ppppppplStack_4f0 = (long *******)CONCAT44(ppppppplStack_4f0._4_4_,(int)lVar53);
          if (puVar75 == (undefined8 *)0x0) {
            plStack_4e8 = (long *)0x0;
            uStack_4e0 = (long *)0x0;
          }
          else {
            plStack_4e8 = (long *)*puVar75;
            uStack_4e0 = (long *)puVar75[1];
            if (puVar75[1] != 0) {
              plVar32 = (long *)(puVar75[1] + 8);
              do {
                cVar46 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                if (bVar22) {
                  *plVar32 = *plVar32 + 1;
                  cVar46 = ExclusiveMonitorsStatus();
                }
              } while (cVar46 != '\0');
            }
          }
          uStack_400 = uVar91;
          uStack_3fc = uVar51;
          uStack_3f8 = uVar14;
          uStack_3f4 = uVar16;
          uStack_3d8 = uVar18;
          uStack_3d3 = uVar20;
          if ((int)lVar53 == 2) {
            uStack_408._0_2_ = 0;
            uStack_408._2_1_ = 0;
            uStack_408._3_1_ = 0;
            uStack_408._4_4_ = 0;
            ppppppplStack_410 = (long *******)0x0;
            auStack_3e8[0] = 0;
            pppppppuStack_3f0 = (undefined8 *******)0x3f800000;
            auStack_3e8[1] = 0x3f800000;
            uStack_3d0 = 0x3f800000;
            auStack_3cc = (undefined1  [4])0x0;
            uStack_3c8 = 0;
            bStack_3c4 = 0;
            FUN_10a026ab4(&ppppppplStack_410,&plStack_4e8);
            (**(code **)(**(long **)(param_1[0x137] + uVar86 * 8 + 0x98) + 0x90))
                      (&pppppppuStack_560);
            auStack_3e8[0] =
                 CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT12(uStack_556,uStack_558)));
            auStack_3e8[1] = CONCAT44(uStack_54c,uStack_550);
            pppppppuStack_3f0 = pppppppuStack_560;
            uStack_3d8 = (undefined5)CONCAT44(uStack_544,uStack_548);
            uStack_3d3 = (undefined3)((uint)uStack_544 >> 8);
            uStack_3d0 = (undefined4)uStack_540;
            auStack_3cc = (undefined1  [4])0x0;
            lVar53 = (long)uStack_2c0 * 0x50;
            lVar65 = CONCAT44(uStack_408._4_4_,
                              CONCAT13(uStack_408._3_1_,
                                       CONCAT12(uStack_408._2_1_,(undefined2)uStack_408)));
            *(ulong *)(abStack_2b0 + lVar53) =
                 CONCAT44(uStack_408._4_4_,
                          CONCAT13(uStack_408._3_1_,
                                   CONCAT12(uStack_408._2_1_,(undefined2)uStack_408)));
            (&uStack_2b8)[(long)uStack_2c0 * 10] = ppppppplStack_410;
            if (lVar65 == 0) {
              *(ulong *)(auStack_274 + lVar53 + 1) = (ulong)CONCAT14(bStack_3c4,uStack_3c8) << 0x18;
              *(ulong *)(auStack_27c + lVar53 + 1) =
                   (ulong)CONCAT43((undefined4)uStack_540,uStack_3d3);
              *(ulong *)(abStack_298 + lVar53 + -8) = CONCAT44(uStack_3f4,uStack_3f8);
              (&uStack_2a8)[(long)uStack_2c0 * 10] = CONCAT44(uStack_3fc,uStack_400);
              *(ulong *)(abStack_298 + lVar53 + 8) = auStack_3e8[0];
              *(undefined8 ********)(abStack_298 + lVar53) = pppppppuStack_560;
              *(ulong *)(auStack_284 + lVar53 + 4) = CONCAT35(uStack_3d3,uStack_3d8);
              *(ulong *)(auStack_28c + lVar53 + 4) = auStack_3e8[1];
LAB_10abeec28:
              auStack_3cc = (undefined1  [4])0x0;
              uStack_2c0 = (long *******)((long)uStack_2c0 + 1);
            }
            else {
              plVar32 = (long *)(lVar65 + 8);
              do {
                cVar46 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                if (bVar22) {
                  *plVar32 = *plVar32 + 1;
                  cVar46 = ExclusiveMonitorsStatus();
                }
              } while (cVar46 != '\0');
              plVar32 = (long *)CONCAT44(uStack_408._4_4_,
                                         CONCAT13(uStack_408._3_1_,
                                                  CONCAT12(uStack_408._2_1_,(undefined2)uStack_408))
                                        );
              *(ulong *)(auStack_274 + lVar53 + 1) = (ulong)CONCAT14(bStack_3c4,uStack_3c8) << 0x18;
              *(ulong *)(auStack_27c + lVar53 + 1) =
                   (ulong)CONCAT43((undefined4)uStack_540,uStack_3d3);
              *(ulong *)(abStack_298 + lVar53 + -8) = CONCAT44(uStack_3f4,uStack_3f8);
              (&uStack_2a8)[(long)uStack_2c0 * 10] = CONCAT44(uStack_3fc,uStack_400);
              *(ulong *)(abStack_298 + lVar53 + 8) = auStack_3e8[0];
              *(undefined8 ********)(abStack_298 + lVar53) = pppppppuStack_560;
              *(ulong *)(auStack_284 + lVar53 + 4) = CONCAT35(uStack_3d3,uStack_3d8);
              *(ulong *)(auStack_28c + lVar53 + 4) = auStack_3e8[1];
              uStack_2c0 = (long *******)((long)uStack_2c0 + 1);
              if (plVar32 != (long *)0x0) {
                plVar84 = plVar32 + 1;
                do {
                  lVar53 = *plVar84;
                  cVar46 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
                  if (bVar22) {
                    *plVar84 = lVar53 + -1;
                    cVar46 = ExclusiveMonitorsStatus();
                  }
                } while (cVar46 != '\0');
                goto LAB_10abeebf0;
              }
            }
          }
          else {
            uStack_408._0_2_ = 0;
            uStack_408._2_1_ = 0;
            uStack_408._3_1_ = 0;
            uStack_408._4_4_ = 0;
            ppppppplStack_410 = (long *******)0x0;
            auStack_3e8[0] = 0;
            pppppppuStack_3f0 = (undefined8 *******)0x3f800000;
            auStack_3e8[1] = 0x3f800000;
            uStack_3d0 = 0x3f800000;
            auStack_3cc = (undefined1  [4])0x0;
            uStack_3c8 = 0;
            bStack_3c4 = 0;
            plVar32 = (long *)param_1[0x10b];
            FUN_10a243348(plVar32,5);
            puVar75 = (undefined8 *)0x1;
            FUN_10a088744(*(undefined8 *)(*plVar32 + 0x268));
            if (puVar75 == (undefined8 *)0x0) {
              plVar32 = (long *)0x0;
              ppppppplStack_410 = (long *******)0x0;
            }
            else {
              ppppppplStack_410 = (long *******)*puVar75;
              plVar32 = (long *)puVar75[1];
              if (plVar32 != (long *)0x0) {
                plVar84 = plVar32 + 1;
                do {
                  cVar46 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
                  if (bVar22) {
                    *plVar84 = *plVar84 + 1;
                    cVar46 = ExclusiveMonitorsStatus();
                  }
                } while (cVar46 != '\0');
              }
            }
            uStack_408._0_2_ = SUB82(plVar32,0);
            uStack_408._2_1_ = (undefined1)((ulong)plVar32 >> 0x10);
            uStack_408._3_1_ = (undefined1)((ulong)plVar32 >> 0x18);
            uStack_408._4_4_ = (undefined4)((ulong)plVar32 >> 0x20);
            lVar65 = alStack_450[uVar86 * 2];
            lVar81 = alStack_450[uVar86 * 2 + 1];
            uStack_3f8 = (undefined4)lVar81;
            uStack_3f4 = (undefined4)((ulong)lVar81 >> 0x20);
            uStack_400 = (undefined4)lVar65;
            uStack_3fc = (undefined4)((ulong)lVar65 >> 0x20);
            lVar53 = (long)uStack_2c0 * 0x50;
            (&uStack_2b8)[(long)uStack_2c0 * 10] = ppppppplStack_410;
            *(long **)(abStack_2b0 + lVar53) = plVar32;
            if (plVar32 == (long *)0x0) {
              *(ulong *)(auStack_274 + lVar53 + 1) = (ulong)CONCAT14(bStack_3c4,uStack_3c8) << 0x18;
              *(ulong *)(auStack_27c + lVar53 + 1) = (ulong)CONCAT43(uStack_3d0,uStack_3d3);
              *(long *)(abStack_298 + lVar53 + -8) = lVar81;
              (&uStack_2a8)[(long)uStack_2c0 * 10] = lVar65;
              *(ulong *)(abStack_298 + lVar53 + 8) = auStack_3e8[0];
              *(undefined8 ********)(abStack_298 + lVar53) = pppppppuStack_3f0;
              *(ulong *)(auStack_284 + lVar53 + 4) = CONCAT35(uStack_3d3,uStack_3d8);
              *(ulong *)(auStack_28c + lVar53 + 4) = auStack_3e8[1];
              goto LAB_10abeec28;
            }
            plVar84 = plVar32 + 1;
            do {
              cVar46 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
              if (bVar22) {
                *plVar84 = *plVar84 + 1;
                cVar46 = ExclusiveMonitorsStatus();
              }
            } while (cVar46 != '\0');
            *(ulong *)(auStack_274 + lVar53 + 1) = (ulong)CONCAT14(bStack_3c4,uStack_3c8) << 0x18;
            *(ulong *)(auStack_27c + lVar53 + 1) = (ulong)CONCAT43(uStack_3d0,uStack_3d3);
            *(long *)(abStack_298 + lVar53 + -8) = lVar81;
            (&uStack_2a8)[(long)uStack_2c0 * 10] = lVar65;
            *(ulong *)(abStack_298 + lVar53 + 8) = auStack_3e8[0];
            *(undefined8 ********)(abStack_298 + lVar53) = pppppppuStack_3f0;
            *(ulong *)(auStack_284 + lVar53 + 4) = CONCAT35(uStack_3d3,uStack_3d8);
            *(ulong *)(auStack_28c + lVar53 + 4) = auStack_3e8[1];
            uStack_2c0 = (long *******)((long)uStack_2c0 + 1);
            do {
              lVar53 = *plVar84;
              cVar46 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
              if (bVar22) {
                *plVar84 = lVar53 + -1;
                cVar46 = ExclusiveMonitorsStatus();
              }
            } while (cVar46 != '\0');
LAB_10abeebf0:
            auStack_3cc = (undefined1  [4])0x0;
            if (lVar53 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
            }
          }
          plVar32 = uStack_4e0;
          ppppppplVar69 = uStack_2c0;
          if (uStack_4e0 != (long *)0x0) {
            plVar84 = uStack_4e0 + 1;
            do {
              lVar53 = *plVar84;
              cVar46 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
              if (bVar22) {
                *plVar84 = lVar53 + -1;
                cVar46 = ExclusiveMonitorsStatus();
              }
            } while (cVar46 != '\0');
            if (lVar53 == 0) {
              (**(code **)(*uStack_4e0 + 0x10))(uStack_4e0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
              ppppppplVar69 = uStack_2c0;
            }
          }
        }
        uStack_2c0._4_4_ = (undefined4)((ulong)ppppppplVar69 >> 0x20);
        uVar86 = uVar86 + 1;
      } while (uVar86 != uStack_5a8);
      ppppppplVar70 = ppppppplVar69;
      if (ppppppplVar69 != (long *******)0x0) {
        uStack_408._0_2_ = SUB82(ppppppplVar69,0);
        uStack_408._2_1_ = (undefined1)((ulong)ppppppplVar69 >> 0x10);
        uStack_408._3_1_ = (undefined1)((ulong)ppppppplVar69 >> 0x18);
        uStack_408._4_4_ = uStack_2c0._4_4_;
        ppppppplStack_410 = (long *******)&uStack_2b8;
        uStack_2c0 = ppppppplVar69;
        FUN_10abf2724(param_1,&ppppppplStack_410);
        ppppppplVar70 = uStack_2c0;
        if (uStack_2c0 != (long *******)0x0) {
          puVar66 = extraout_x9 + (long)uStack_2c0 * 0x14 + -0x12;
          ppppppplVar69 = uStack_2c0;
          do {
            ppppppplVar69 = (long *******)((long)ppppppplVar69 - 1);
            func_0x00010a0523dc(puVar66);
            puVar66 = puVar66 + -0x14;
            ppppppplVar70 = uStack_2c0;
          } while (ppppppplVar69 != (long *******)0x0);
        }
      }
    }
    lVar53 = param_1[0x136];
  }
  if (*(char *)(lVar53 + 0x40) == '\x02') {
    plVar84 = *(long **)(param_1[0x137] + 0xb8);
    puVar75 = (undefined8 *)0x1;
    plVar32 = plVar84;
    uStack_2c0 = ppppppplVar70;
    FUN_10a088744();
    pppppppuStack_560 = (undefined8 *******)CONCAT44(pppppppuStack_560._4_4_,(int)plVar32);
    if (puVar75 == (undefined8 *)0x0) {
      lVar53 = 0;
      uVar54 = 0;
    }
    else {
      uVar54 = *puVar75;
      lVar53 = puVar75[1];
      if (lVar53 != 0) {
        plVar32 = (long *)(lVar53 + 8);
        do {
          cVar46 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar22) {
            *plVar32 = *plVar32 + 1;
            cVar46 = ExclusiveMonitorsStatus();
          }
        } while (cVar46 != '\0');
      }
    }
    plVar32 = *(long **)(param_1[0x137] + 0xb8);
    if (plVar32 == (long *)0x0) {
      plVar32 = (long *)0x0;
    }
    else {
      ___dynamic_cast(plVar32,&PTR_DAT_110bb3788,&PTR_DAT_110bab2a8,0xfffffffffffffffe);
    }
    plVar27 = param_1 + 0xbc;
    func_0x00010a04a0d4(plVar27,sVar6);
    uStack_2a8 = (undefined8 *******)0x0;
    abStack_2b0[0] = 0;
    abStack_2b0[1] = 0;
    abStack_2b0[2] = 0x80;
    uStack_2ad = 0x3f;
    cStack_2a9 = 0;
    abStack_298[0] = 0;
    abStack_298[1] = 0;
    abStack_298[2] = 0;
    abStack_298[3] = 0;
    abStack_298[4] = 0;
    abStack_298[5] = 0;
    abStack_298[6] = 0;
    abStack_298[7] = 0;
    plStack_2a0 = (long *)0x3f800000;
    auStack_290[0] = 0;
    auStack_290[1] = 0;
    auStack_290._2_2_ = 0x3f80;
    auStack_284 = (undefined1  [8])0x0;
    auStack_28c = (undefined1  [8])0x0;
    auStack_274._0_8_ = 0;
    auStack_27c = (undefined1  [8])0x0;
    uStack_554 = 0;
    uStack_555 = 0;
    uStack_556 = 0;
    uStack_558 = 0;
    uStack_54c = 0;
    uStack_550 = 0;
    uStack_2c0._0_4_ = (float)uVar54;
    uStack_2c0._4_4_ = (undefined4)((ulong)uVar54 >> 0x20);
    uStack_2b8._0_4_ = (uint)lVar53;
    uStack_2b8._4_4_ = (uint)((ulong)lVar53 >> 0x20);
    (**(code **)(*plVar84 + 0x90))(&ppppppplStack_410,plVar84);
    uStack_2a8 = (undefined8 *******)
                 CONCAT44(uStack_408._4_4_,
                          CONCAT13(uStack_408._3_1_,
                                   CONCAT12(uStack_408._2_1_,(undefined2)uStack_408)));
    plStack_2a0 = (long *)CONCAT44(uStack_3fc,uStack_400);
    abStack_2b0[0] = (byte)ppppppplStack_410;
    abStack_2b0[1] = (byte)((ulong)ppppppplStack_410 >> 8);
    abStack_2b0[2] = (byte)((ulong)ppppppplStack_410 >> 0x10);
    uStack_2ad = (uint)((ulong)ppppppplStack_410 >> 0x18);
    cStack_2a9 = (char)((ulong)ppppppplStack_410 >> 0x38);
    abStack_298[0] = (byte)uStack_3f8;
    abStack_298[1] = (byte)((uint)uStack_3f8 >> 8);
    abStack_298[2] = (byte)((uint)uStack_3f8 >> 0x10);
    abStack_298[3] = (byte)((uint)uStack_3f8 >> 0x18);
    abStack_298[4] = (byte)uStack_3f4;
    abStack_298[5] = (byte)((uint)uStack_3f4 >> 8);
    abStack_298[6] = (byte)((uint)uStack_3f4 >> 0x10);
    abStack_298[7] = (byte)((uint)uStack_3f4 >> 0x18);
    auStack_290[0] = SUB81(pppppppuStack_3f0,0);
    auStack_290[1] = (char)((ulong)pppppppuStack_3f0 >> 8);
    auStack_290._2_2_ = (undefined2)((ulong)pppppppuStack_3f0 >> 0x10);
    lVar53 = 200;
    if ((ulong)plVar27[0x57] < 2) {
      lVar53 = 0x1e0;
    }
    auStack_28c._4_4_ = *(undefined4 *)((long)plVar27 + lVar53 + 0x168);
    auStack_28c._0_4_ = *(undefined4 *)((long)plVar27 + lVar53 + 0x158);
    auStack_284._0_4_ = *(undefined4 *)((long)plVar27 + lVar53 + 0x15c);
    (**(code **)(*plVar32 + 0x10))();
    auStack_27c = (undefined1  [8])*plVar32;
    auStack_274._0_8_ = plVar32[1];
    FUN_10a244c44(param_1[0x10b]);
    FUN_10ab12228();
    plVar32 = (long *)CONCAT44(uStack_2b8._4_4_,(uint)uStack_2b8);
    if (plVar32 != (long *)0x0) {
      plVar84 = plVar32 + 1;
      do {
        lVar53 = *plVar84;
        cVar46 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
        if (bVar22) {
          *plVar84 = lVar53 + -1;
          cVar46 = ExclusiveMonitorsStatus();
        }
      } while (cVar46 != '\0');
      if (lVar53 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
      }
    }
    plVar32 = (long *)CONCAT44(uStack_54c,uStack_550);
    if (plVar32 != (long *)0x0) {
      plVar84 = plVar32 + 1;
      do {
        lVar53 = *plVar84;
        cVar46 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
        if (bVar22) {
          *plVar84 = lVar53 + -1;
          cVar46 = ExclusiveMonitorsStatus();
        }
      } while (cVar46 != '\0');
      if (lVar53 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
      }
    }
    ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
    lVar53 = param_1[0x136];
  }
  if (*(char *)(lVar53 + 0x3c) == '\x01') {
    lVar53 = *(long *)(param_1[0x137] + 0x20);
    uVar80 = *(undefined1 *)(lVar53 + 0x318);
    uVar49 = uVar80;
    if (*(char *)(lVar53 + 0x319) == '\0') {
      uVar49 = 3;
    }
    uVar64 = uVar80;
    if (*(char *)(lVar53 + 0x31a) == '\0') {
      uVar64 = 3;
    }
    plVar32 = param_1;
    uStack_2c0 = ppppppplVar70;
    (**(code **)(*param_1 + 0x90))(param_1,uVar80,uVar49,uVar64);
    iVar25 = (int)plVar32;
    *(undefined8 *)(param_1[0x137] + 0x90) = 0;
    lStack_118 = 0;
    plStack_110 = (long *)0x0;
    lStack_108 = 0;
    lStack_100 = -1;
    lStack_f8 = -1;
    lStack_f0 = 0;
    plStack_e8 = (long *)0x0;
    lStack_e0 = 0;
    lStack_d8 = -1;
    lStack_d0 = -1;
    uStack_2c0._0_4_ = 0.0;
    uStack_2c0._4_4_ = 0;
    lStack_c8 = 0x3f800000;
    uStack_c0 = 0x200000002;
    ppppppplStack_410 = (long *******)0x0;
    if (iVar71 != 0) {
      uVar86 = 0;
      do {
        plStack_4e8 = (long *)0x0;
        ppppppplStack_4f0 = (long *******)0x0;
        uStack_4c8 = 0;
        uStack_4d0 = 0x3f800000;
        fStack_4b8 = 0.0;
        fStack_4b4 = 0.0;
        uStack_4c0 = 0x3f800000;
        uStack_4b0 = 0x3f800000;
        uStack_4ac = 0;
        uStack_4a8 = 0;
        uStack_4a4 = 0;
        plVar32 = (long *)(param_1[0x137] + uVar86 * 0x10 + 0x20);
        lVar53 = *plVar32;
        uStack_4e0 = auVar90._0_8_;
        ppppppuStack_4d8 = auVar90._8_8_;
        FUN_10abf27cc(lVar53);
        FUN_10a026ab4(&ppppppplStack_4f0,lVar53);
        uStack_4ac = (uint)*(byte *)((long)plVar52 + 0x44);
        piVar34 = (int *)*plVar32;
        FUN_10abf1a58();
        fStack_4b8 = (float)*(int *)((long)param_1 + 0xb0c) / (float)*piVar34;
        fVar104 = (float)(int)param_1[0x162] / (float)piVar34[1];
        uStack_4c8 = 0;
        uStack_4d0 = (ulong)(uint)((float)*(int *)((long)param_1 + 0xb14) / (float)*piVar34 -
                                  fStack_4b8);
        uStack_4c0 = (ulong)(uint)((float)(int)param_1[0x163] / (float)piVar34[1] - fVar104);
        uStack_4b0 = 0x3f800000;
        (&uStack_408)[(long)ppppppplStack_410 * 10] = ppppppplStack_4f0;
        *(long **)(&uStack_400 + (long)ppppppplStack_410 * 0x14) = plStack_4e8;
        if (plStack_4e8 != (long *)0x0) {
          plVar32 = plStack_4e8 + 1;
          do {
            cVar46 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar22) {
              *plVar32 = *plVar32 + 1;
              cVar46 = ExclusiveMonitorsStatus();
            }
          } while (cVar46 != '\0');
        }
        fStack_4b4._1_3_ = (undefined3)((uint)fVar104 >> 8);
        auStack_3c3[(long)ppppppplStack_410 * 10] =
             CONCAT17(uStack_4a4,CONCAT43(uStack_4a8,uStack_4ac._1_3_));
        *(ulong *)(auStack_3cc + (long)ppppppplStack_410 * 0x50 + 1) =
             CONCAT17((undefined1)uStack_4ac,CONCAT43(0x3f800000,fStack_4b4._1_3_));
        (&pppppppuStack_3f0)[(long)ppppppplStack_410 * 10] = (undefined8 *******)ppppppuStack_4d8;
        *(long **)(&uStack_3f8 + (long)ppppppplStack_410 * 0x14) = uStack_4e0;
        auStack_3e8[(long)ppppppplStack_410 * 10 + 1] = 0;
        auStack_3e8[(long)ppppppplStack_410 * 10] = uStack_4d0;
        *(ulong *)(&uStack_3d0 + (long)ppppppplStack_410 * 0x14) = CONCAT44(fVar104,fStack_4b8);
        *(ulong *)((long)&stack0xfffffffffffffc28 + (long)ppppppplStack_410 * 0x50) = uStack_4c0;
        ppppppplStack_410 = (long *******)((long)ppppppplStack_410 + 1);
        uVar54 = *(undefined8 *)(param_1[0x10b] + 0x1e0);
        ppppppplVar70 = ppppppplStack_4f0;
        fStack_4b4 = fVar104;
        (*(code *)(*ppppppplStack_4f0)[4])();
        ppppppplVar69 = ppppppplStack_4f0;
        (*(code *)(*ppppppplStack_4f0)[5])();
        ppppppplVar35 = ppppppplStack_4f0;
        (*(code *)(*ppppppplStack_4f0)[6])();
        ppppppplVar36 = ppppppplStack_4f0;
        (*(code *)(*ppppppplStack_4f0)[9])();
        ppppppplVar37 = ppppppplStack_4f0;
        (*(code *)(*ppppppplStack_4f0)[10])();
        ppppppplVar38 = ppppppplStack_4f0;
        (*(code *)(*ppppppplStack_4f0)[0xd])();
        ppppppplVar39 = ppppppplStack_4f0;
        (*(code *)(*ppppppplStack_4f0)[0xe])();
        in_stack_fffffffffffff910 =
             (long *)CONCAT71((int7)((ulong)in_stack_fffffffffffff910 >> 8),(char)ppppppplVar39);
        FUN_10a048e7c(&pppppppuStack_580,uVar54,ppppppplVar70,ppppppplVar69,ppppppplVar35,
                      ppppppplVar36,ppppppplVar37,1,ppppppplVar38,in_stack_fffffffffffff910);
        uStack_550 = 0;
        uStack_54c = 0;
        uStack_558 = 0;
        uStack_556 = 0;
        uStack_555 = 0;
        uStack_554 = 0;
        pppppppuStack_560 = (undefined8 *******)0x0;
        uStack_548 = 0xffffffff;
        uStack_544 = 0xffffffff;
        uStack_540 = 0xffffffffffffffff;
        uStack_538 = 0;
        plStack_530 = (long *)0x0;
        uStack_528 = 0;
        uStack_520 = 0xffffffffffffffff;
        uStack_510 = 0;
        uStack_508 = 0;
        uStack_518 = 0xffffffffffffffff;
        uStack_500 = 0;
        FUN_10a061728(&uStack_2c0,&pppppppuStack_560);
        plVar32 = plStack_530;
        if (plStack_530 != (long *)0x0) {
          plVar84 = plStack_530 + 1;
          do {
            lVar53 = *plVar84;
            cVar46 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
            if (bVar22) {
              *plVar84 = lVar53 + -1;
              cVar46 = ExclusiveMonitorsStatus();
            }
          } while (cVar46 != '\0');
          if (lVar53 == 0) {
            (**(code **)(*plStack_530 + 0x10))(plStack_530);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
          }
        }
        plVar32 = (long *)CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT12(uStack_556,uStack_558)));
        if (plVar32 != (long *)0x0) {
          plVar84 = plVar32 + 1;
          do {
            lVar53 = *plVar84;
            cVar46 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
            if (bVar22) {
              *plVar84 = lVar53 + -1;
              cVar46 = ExclusiveMonitorsStatus();
            }
          } while (cVar46 != '\0');
          if (lVar53 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
          }
        }
        uStack_558 = SUB82(plStack_578,0);
        uStack_556 = (undefined1)((ulong)plStack_578 >> 0x10);
        uStack_555 = (undefined1)((ulong)plStack_578 >> 0x18);
        uStack_554 = (uint)((ulong)plStack_578 >> 0x20);
        pppppppuStack_560 = pppppppuStack_580;
        if (plStack_578 != (long *)0x0) {
          plVar32 = plStack_578 + 1;
          do {
            cVar46 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar22) {
              *plVar32 = *plVar32 + 1;
              cVar46 = ExclusiveMonitorsStatus();
            }
          } while (cVar46 != '\0');
        }
        uStack_550 = 0;
        uStack_54c = 0;
        ppppppplVar70 = (long *******)(&uStack_2b8 + uVar86 * 0xd);
        uStack_548 = 0xffffffff;
        uStack_544 = 0xffffffff;
        uStack_540 = 0xffffffffffffffff;
        FUN_10a00e5c4(ppppppplVar70,&pppppppuStack_560);
        iVar25 = (int)ppppppplVar70;
        *(ulong *)(abStack_298 + uVar86 * 0x68 + -8) = CONCAT44(uStack_544,uStack_548);
        (&uStack_2a8)[uVar86 * 0xd] = CONCAT44(uStack_54c,uStack_550);
        *(undefined8 *)(abStack_298 + uVar86 * 0x68) = uStack_540;
        plVar32 = (long *)CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT12(uStack_556,uStack_558)));
        if (plVar32 != (long *)0x0) {
          plVar84 = plVar32 + 1;
          do {
            lVar53 = *plVar84;
            cVar46 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
            if (bVar22) {
              *plVar84 = lVar53 + -1;
              cVar46 = ExclusiveMonitorsStatus();
            }
          } while (cVar46 != '\0');
          if (lVar53 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            iVar25 = (int)plVar32;
          }
        }
        plVar32 = plStack_578;
        auStack_258[uVar86 * 0x1a] = 2;
        if (plStack_578 != (long *)0x0) {
          plVar84 = plStack_578 + 1;
          do {
            lVar53 = *plVar84;
            cVar46 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
            if (bVar22) {
              *plVar84 = lVar53 + -1;
              cVar46 = ExclusiveMonitorsStatus();
            }
          } while (cVar46 != '\0');
          if (lVar53 == 0) {
            (**(code **)(*plStack_578 + 0x10))(plStack_578);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            iVar25 = (int)plVar32;
          }
        }
        plVar32 = plStack_4e8;
        if (plStack_4e8 != (long *)0x0) {
          plVar84 = plStack_4e8 + 1;
          do {
            lVar53 = *plVar84;
            cVar46 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
            if (bVar22) {
              *plVar84 = lVar53 + -1;
              cVar46 = ExclusiveMonitorsStatus();
            }
          } while (cVar46 != '\0');
          if (lVar53 == 0) {
            (**(code **)(*plStack_4e8 + 0x10))(plStack_4e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            iVar25 = (int)plVar32;
          }
        }
        uVar86 = uVar86 + 1;
      } while (uVar86 != uStack_5a8);
    }
    FUN_10ad055a0();
    if (iVar25 != 0) {
      if (*ppuVar30 == (undefined *)0x0) {
        plVar32 = (long *)*ppuVar31;
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 0x18))();
          if (plVar32 != (long *)0x0) {
            plVar32 = plVar32 + 7;
            goto LAB_10abef2e0;
          }
        }
      }
      else {
        plVar32 = (long *)(*ppuVar30 + 8);
LAB_10abef2e0:
        if (((uint)*(undefined8 *)(*plVar32 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&pppppppuStack_580,&UNK_10f69a9ac);
          func_0x000107c2b054(&uStack_598,"");
          if (cStack_569 < '\0') {
            pppppppuStack_560 = (undefined8 *******)"null";
            if (plStack_578 != (long *)0x0) {
              pppppppuStack_560 = pppppppuStack_580;
            }
          }
          else {
            pppppppuStack_560 = (undefined8 *******)"null";
            if (cStack_569 != '\0') {
              pppppppuStack_560 = &pppppppuStack_580;
            }
          }
          if (cStack_581 < '\0') {
            ppppppplStack_4f0 = (long *******)"null";
            if (plStack_590 != (long *)0x0) {
              ppppppplStack_4f0 = (long *******)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598);
            }
          }
          else {
            ppppppplStack_4f0 = (long *******)"null";
            if (cStack_581 != '\0') {
              ppppppplStack_4f0 = (long *******)&uStack_598;
            }
          }
          FUN_10a224324(&pppppppuStack_560,&ppppppplStack_4f0);
          if (cStack_569 < '\0') {
            if (plStack_578 == (long *)0x0) goto LAB_10abf03bc;
            func_0x000107c3192c(&pppppppuStack_560,pppppppuStack_580);
LAB_10abf03d8:
            uVar49 = 1;
          }
          else {
            if (cStack_569 != '\0') {
              uStack_558 = SUB82(plStack_578,0);
              uStack_556 = (undefined1)((ulong)plStack_578 >> 0x10);
              uStack_555 = (undefined1)((ulong)plStack_578 >> 0x18);
              uStack_554 = (uint)((ulong)plStack_578 >> 0x20);
              pppppppuStack_560 = pppppppuStack_580;
              uStack_550 = (undefined4)uStack_570;
              uStack_54c = (int)(CONCAT17(cStack_569,uStack_570) >> 0x20);
              goto LAB_10abf03d8;
            }
LAB_10abf03bc:
            uVar49 = 0;
            pppppppuStack_560 = (undefined8 *******)((ulong)pppppppuStack_560 & 0xffffffffffffff00);
          }
          uStack_548 = CONCAT31(uStack_548._1_3_,uVar49);
          if (cStack_581 < '\0') {
            if (plStack_590 == (long *)0x0) {
LAB_10abf0404:
              uVar49 = 0;
              ppppppplStack_4f0 = (long *******)((ulong)ppppppplStack_4f0 & 0xffffffffffffff00);
              goto LAB_10abf042c;
            }
            func_0x000107c3192c(&ppppppplStack_4f0,CONCAT44(uStack_598._4_4_,(undefined4)uStack_598)
                               );
          }
          else {
            if (cStack_581 == '\0') goto LAB_10abf0404;
            ppppppplStack_4f0 = (long *******)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598);
            plStack_4e8 = plStack_590;
            uStack_4e0 = (long *)CONCAT17(cStack_581,uStack_588);
          }
          uVar49 = 1;
LAB_10abf042c:
          ppppppuStack_4d8 = (undefined8 ******)CONCAT71(ppppppuStack_4d8._1_7_,uVar49);
          FUN_10a234a0c(&pppppppuStack_560,&ppppppplStack_4f0);
          ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
          goto LAB_10abf0654;
        }
      }
    }
    (**(code **)(*param_1 + 0x88))(param_1,&uStack_2c0);
    FUN_10abf1f44(param_1,*(undefined8 *)(param_1[0x137] + 0x20),
                  *(undefined1 *)((long)plVar52 + 0x44));
    uStack_558 = SUB82(ppppppplStack_410,0);
    uStack_556 = (undefined1)((ulong)ppppppplStack_410 >> 0x10);
    uStack_555 = (undefined1)((ulong)ppppppplStack_410 >> 0x18);
    uStack_554 = (uint)((ulong)ppppppplStack_410 >> 0x20);
    pppppppuStack_560 = (undefined8 *******)&uStack_408;
    FUN_10abf2724(param_1,&pppppppuStack_560);
    (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
    FUN_10abf285c(param_1[0x137] + 0x10,param_1,*(undefined1 *)((long)plVar52 + 0x44),
                  (int)plVar52[8],1);
    *(undefined8 *)(param_1[0x137] + 0x90) = 0;
    if (uStack_5a8 != 0) {
      uVar86 = 0;
      ppppppplVar70 = (long *******)&uStack_2b8;
      lVar53 = extraout_x10 + 0x28;
      do {
        puVar75 = (undefined8 *)param_1[0x137];
        FUN_10abf2a00(puVar75,uVar86);
        FUN_10a1db4cc(*puVar75,ppppppplVar70);
        (**(code **)(*(long *)*puVar75 + 0x98))((long *)*puVar75,lVar53);
        uVar54 = 0;
        if (puVar75[2] != 0) {
          uVar54 = *(undefined8 *)(puVar75[2] + 0x268);
        }
        lVar65 = param_1[0x137];
        lVar81 = *(long *)(lVar65 + 0x90);
        *(undefined8 *)(lVar65 + lVar81 * 8 + 0x98) = uVar54;
        *(long *)(lVar65 + 0x90) = lVar81 + 1;
        uVar86 = uVar86 + 1;
        lVar53 = lVar53 + 0x50;
        ppppppplVar70 = ppppppplVar70 + 0xd;
      } while (uStack_5a8 != uVar86);
    }
    if (ppppppplStack_410 != (long *******)0x0) {
      lVar53 = extraout_x10 + -0x48 + (long)ppppppplStack_410 * 0x50;
      ppppppplVar70 = ppppppplStack_410;
      do {
        ppppppplVar70 = (long *******)((long)ppppppplVar70 + -1);
        func_0x00010a0523dc(lVar53);
        lVar53 = lVar53 + -0x50;
      } while (ppppppplVar70 != (long *******)0x0);
    }
    plVar32 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar84 = plStack_e8 + 1;
      do {
        lVar53 = *plVar84;
        cVar46 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
        if (bVar22) {
          *plVar84 = lVar53 + -1;
          cVar46 = ExclusiveMonitorsStatus();
        }
      } while (cVar46 != '\0');
      if (lVar53 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
      }
    }
    plVar32 = plStack_110;
    if (plStack_110 != (long *)0x0) {
      plVar84 = plStack_110 + 1;
      do {
        lVar53 = *plVar84;
        cVar46 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
        if (bVar22) {
          *plVar84 = lVar53 + -1;
          cVar46 = ExclusiveMonitorsStatus();
        }
      } while (cVar46 != '\0');
      if (lVar53 == 0) {
        (**(code **)(*plStack_110 + 0x10))(plStack_110);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
      }
    }
    func_0x00010a048e34(&uStack_2b8,CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0));
    ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
    lVar53 = param_1[0x136];
  }
  uVar7 = *(undefined2 *)(lVar53 + 4);
  puVar68 = *(undefined8 **)(lVar53 + 0x50);
  for (puVar75 = *(undefined8 **)(lVar53 + 0x48); puVar75 != puVar68; puVar75 = puVar75 + 1) {
    piVar34 = (int *)*puVar75;
    if ((*(ushort *)(piVar34 + 0x18) >> 6 & 1) == 0) {
      uStack_2c0 = ppppppplVar70;
      if (*(long *)(piVar34 + 2) == 0) {
        pbVar26 = (byte *)(param_1 + 4);
        func_0x00010a01e9ec(pbVar26,*piVar34);
        pcVar21 = *(code **)(&UNK_110baa648 + (ulong)*pbVar26 * 0x78);
        if (pcVar21 != (code *)0x0) {
          if (*piVar34 != -1) {
            func_0x00010abf2d50(param_1,piVar34);
          }
          (*pcVar21)(param_1,uVar7,piVar34,1);
          goto LAB_10abef594;
        }
        uStack_2c0._0_4_ = (float)CONCAT31(uStack_2c0._1_3_,1);
        if (*(code **)(&UNK_110baa650 + (ulong)*pbVar26 * 0x78) == (code *)0x0) {
LAB_10abef5f8:
          FUN_10ad5ea28(param_1[0x109],pbVar26);
          func_0x00010abf2d50(param_1,piVar34);
          func_0x00010a01e9ec(param_1 + 4,*piVar34);
          func_0x00010a01e9ec(param_1 + 4,*piVar34);
          (**(code **)(*param_1 + 0x148))(param_1,piVar34);
          func_0x00010ad5e690(param_1[0x109]);
          plVar32 = *(long **)(pbVar26 + 0x1a8);
          if ((plVar32 != (long *)0x0) && (plVar32[0x44] != 0)) {
            FUN_10a66ad54();
            lVar53 = *plVar32;
            FUN_10abe33e8(param_1,lVar53,pbVar26 + 0x6c);
            if (*(char *)(lVar53 + 0x18) == '\x01') {
              func_0x00010aafc5c0(lVar53);
            }
          }
        }
        else {
          (**(code **)(&UNK_110baa650 + (ulong)*pbVar26 * 0x78))
                    (param_1,uVar7,piVar34,1,&uStack_2c0,1);
          if ((char)uStack_2c0 == '\x01') goto LAB_10abef5f8;
        }
        ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        puVar56 = (undefined1 *)param_1[0x137];
      }
      else {
        iVar25 = *piVar34;
        lVar53 = param_1[0x109];
        iVar3 = iVar25;
        if (iVar25 == -1) {
          if (*(int **)(piVar34 + 8) == *(int **)(piVar34 + 6)) goto LAB_10abf0654;
          iVar3 = **(int **)(piVar34 + 6);
        }
        plVar32 = param_1 + 4;
        func_0x00010a01e9ec(plVar32,iVar3);
        FUN_10ad5ea28(lVar53,plVar32);
        piVar43 = piVar34;
        if ((iVar25 == -1) &&
           (piVar43 = *(int **)(piVar34 + 6), ppppppplVar70 = uStack_2c0,
           *(int **)(piVar34 + 8) == piVar43)) goto LAB_10abf0654;
        func_0x00010abf2d50(param_1,piVar43);
        (**(code **)(**(long **)(piVar34 + 2) + 0x10))
                  (*(long **)(piVar34 + 2),param_1,uVar7,piVar34);
        func_0x00010ad5e690(param_1[0x109]);
LAB_10abef594:
        lVar53 = param_1[0x136];
        *(undefined4 *)(lVar53 + 8) = 0xffffffff;
        *(undefined2 *)(lVar53 + 0xc) = 0xffff;
        puVar56 = (undefined1 *)param_1[0x137];
        *puVar56 = 0;
        ppppppplVar70 = uStack_2c0;
      }
      puVar56[9] = 1;
    }
  }
  if (param_1[0x71] != 0) {
    uStack_2b8._4_4_ = 0;
    abStack_2b0[0] = 0;
    abStack_2b0[1] = '\0';
    abStack_2b0[2] = 0;
    uStack_2c0._4_4_ = 0;
    uStack_2b8._0_4_ = 0;
    uStack_2c0._0_4_ = 1.0;
    uStack_2ad = 0x80000000;
    cStack_2a9 = '?';
    uStack_2a8 = (undefined8 *******)0x0;
    plStack_2a0 = (long *)0x0;
    auStack_28c = (undefined1  [8])0x0;
    abStack_298[4] = 0;
    abStack_298[5] = 0;
    abStack_298[6] = 0;
    abStack_298[7] = 0;
    auStack_290[0] = 0;
    auStack_290[1] = '\0';
    auStack_290._2_2_ = 0;
    abStack_298[0] = 0;
    abStack_298[1] = 0;
    abStack_298[2] = 0x80;
    abStack_298[3] = 0x3f;
    auStack_284._0_4_ = 0x3f800000;
    FUN_10abe33e8(param_1,param_1[0x71],&uStack_2c0);
    ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
  }
  plVar32 = param_1 + 4;
  uStack_2c0 = ppppppplVar70;
  FUN_10a01f6d4(plVar32,uVar7);
  if (plVar32[0xfa] != 0) {
    uStack_2b8._4_4_ = 0;
    abStack_2b0[0] = 0;
    abStack_2b0[1] = '\0';
    abStack_2b0[2] = 0;
    uStack_2c0._4_4_ = 0;
    uStack_2b8._0_4_ = 0;
    uStack_2c0._0_4_ = 1.0;
    uStack_2ad = 0x80000000;
    cStack_2a9 = '?';
    uStack_2a8 = (undefined8 *******)0x0;
    plStack_2a0 = (long *)0x0;
    auStack_28c = (undefined1  [8])0x0;
    abStack_298[4] = 0;
    abStack_298[5] = 0;
    abStack_298[6] = 0;
    abStack_298[7] = 0;
    auStack_290[0] = 0;
    auStack_290[1] = '\0';
    auStack_290._2_2_ = 0;
    abStack_298[0] = 0;
    abStack_298[1] = 0;
    abStack_298[2] = 0x80;
    abStack_298[3] = 0x3f;
    auStack_284._0_4_ = 0x3f800000;
    FUN_10abe33e8(param_1,plVar32[0xfa],&uStack_2c0);
  }
  if (lStack_490 != 0) {
    FUN_10a244c44(param_1[0x10b]);
    FUN_10ab11d88();
  }
  uStack_598._0_4_ = 0;
  if (iVar71 == 0) {
    bVar22 = false;
  }
  else {
    uVar86 = 0;
    bVar22 = false;
    lVar53 = 0x10;
    do {
      uVar58 = (plVar52[0x2e] - plVar52[0x2d] >> 4) * -0x5555555555555555;
      ppppppplVar70 = uStack_2c0;
      if (uVar58 < uVar86 || uVar58 - uVar86 == 0) goto LAB_10abf0654;
      lVar65 = *(long *)(plVar52[0x2d] + lVar53);
      if (lVar65 != 0) {
        lVar81 = lVar65;
        FUN_10a088744(lVar65,1);
        if ((int)lVar81 == 2) {
          ppppppplVar70 = uStack_2c0;
          if (3 < uVar86) goto LAB_10abf0654;
          bVar22 = true;
          *(undefined1 *)((long)&uStack_598 + uVar86) = 1;
        }
        *(undefined8 *)((long)param_1 + 0xafc) = 0x100000001;
        uStack_2a8 = *(undefined8 ********)((long)param_1 + 0xb04);
        abStack_2b0[0] = (byte)param_1;
        abStack_2b0[1] = (byte)((ulong)param_1 >> 8);
        abStack_2b0[2] = (byte)((ulong)param_1 >> 0x10);
        uStack_2ad = (uint)((ulong)param_1 >> 0x18);
        cStack_2a9 = (char)((ulong)param_1 >> 0x38);
        uStack_2c0._0_4_ = 1.8548078e-32;
        uStack_2c0._4_4_ = 1;
        uStack_2b8._0_4_ = 0x10c55800;
        uStack_2b8._4_4_ = 1;
        func_0x00010abf2cc4(param_1,lVar65,0);
        FUN_10a044790(&uStack_2c0);
        (**(code **)CONCAT44(uStack_2b8._4_4_,(uint)uStack_2b8))(&uStack_2b8);
      }
      uVar86 = uVar86 + 1;
      lVar53 = lVar53 + 0x30;
    } while (uVar78 != uVar86);
  }
  if ((*(byte *)(plVar28 + 0x12a) & 1) != 0) {
    FUN_10aba75a8(param_1[0x154]);
  }
  if (uVar60 == uVar57) {
    lVar53 = param_1[0x137];
    bVar23 = 4 < *(byte *)(lVar53 + 1) || (1 << (ulong)(*(byte *)(lVar53 + 1) & 0x1f) & 0x13U) == 0;
LAB_10abef884:
    cVar46 = *(char *)(*(long *)(lVar53 + 0x20) + 0x318);
    uVar105 = 2;
    if (cVar46 == '\0') {
      uVar105 = 0;
    }
    if (cVar46 == '\0' || *(long *)(lVar53 + 0x60) == 0) {
      uVar91 = 0;
      if ((uVar60 == uVar57 && (*(byte *)((long)param_2 + 0x2d) & 1) == 0) &&
          *(long *)(lVar53 + 0x60) == 0) {
        uVar91 = 3;
      }
    }
    else {
      uVar91 = 1;
      if (*(char *)((long)param_2 + 0x2d) == '\0') {
        uVar91 = 2;
      }
    }
    (**(code **)(*param_1 + 0x90))(param_1,uVar105,uVar91,uVar91);
    uVar8 = *(ushort *)(plVar52 + 4);
  }
  else {
    uVar8 = *(ushort *)(plVar52 + 4);
    bVar23 = false;
    if (bVar22 || (uVar8 >> 2 & 1) != 0) {
      lVar53 = param_1[0x137];
      goto LAB_10abef884;
    }
  }
  if ((uVar8 & 0x104) == 0) {
    if (iVar71 != 0) {
      uVar86 = 0;
      do {
        plVar27 = (long *)(param_1[0x137] + uVar86 * 0x10 + 0x20);
        plVar32 = (long *)*plVar27;
        (**(code **)(*plVar32 + 0x50))();
        plVar84 = (long *)*plVar27;
        FUN_10abf1b04();
        piVar34 = (int *)*plVar27;
        FUN_10abf1a58(piVar34,*(undefined1 *)((long)plVar52 + 0x44));
        fVar104 = (float)*(int *)((long)param_1 + 0xb0c) / (float)*piVar34;
        fVar106 = (float)(int)param_1[0x162] / (float)piVar34[1];
        uStack_2b8._0_4_ = 0;
        uStack_2b8._4_4_ = 0;
        uStack_2b8 = (long ******)0x0;
        uStack_2c0._4_4_ = 0;
        cStack_2a9 = '\0';
        plStack_2a0 = (long *)CONCAT44(plStack_2a0._4_4_,0x3f800000);
        uStack_2a8 = (undefined8 *******)CONCAT44(fVar106,fVar104);
        uStack_2c0._0_4_ = (float)*(int *)((long)param_1 + 0xb14) / (float)*piVar34 - fVar104;
        fVar106 = (float)(int)param_1[0x163] / (float)piVar34[1] - fVar106;
        abStack_2b0[0] = SUB41(fVar106,0);
        abStack_2b0[1] = (byte)((uint)fVar106 >> 8);
        abStack_2b0[2] = (byte)((uint)fVar106 >> 0x10);
        uStack_2ad = (uint)fVar106 >> 0x18;
        bVar22 = false;
        if (uVar86 == 0) {
          bVar22 = bVar23;
        }
        if (bVar22) {
LAB_10abefa84:
          plVar85 = plVar84;
          if (*plVar32 != 0) {
            plVar85 = plVar32;
          }
          puVar75 = (undefined8 *)*plVar27;
          FUN_10abf27cc();
          ppppppplStack_410 = (long *******)*puVar75;
          lVar53 = puVar75[1];
          uStack_408._0_2_ = (undefined2)lVar53;
          uStack_408._2_1_ = (undefined1)((ulong)lVar53 >> 0x10);
          uStack_408._3_1_ = (undefined1)((ulong)lVar53 >> 0x18);
          uStack_408._4_4_ = (undefined4)((ulong)lVar53 >> 0x20);
          if (lVar53 != 0) {
            plVar1 = (long *)(lVar53 + 8);
            do {
              cVar46 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar22) {
                *plVar1 = *plVar1 + 1;
                cVar46 = ExclusiveMonitorsStatus();
              }
            } while (cVar46 != '\0');
          }
          if (ppppppplStack_410 == (long *******)*plVar85) {
            lVar65 = *plVar27;
            lVar53 = lVar65;
            FUN_10abf1b04(lVar65);
            FUN_10abf1b94(param_1,lVar65,plVar85,lVar53,*(undefined1 *)((long)plVar52 + 0x44),
                          &uStack_2c0);
            lVar53 = *plVar27;
            FUN_10abf1b04(lVar53);
            FUN_10a026ab4(&ppppppplStack_410,lVar53);
          }
          lVar53 = param_1[0x137];
          if (*(long *)(lVar53 + 0x90) == 0) {
            uVar54 = 0;
          }
          else {
            uVar54 = *(undefined8 *)(lVar53 + uVar86 * 8 + 0x98);
          }
          uVar58 = (plVar52[0x2e] - plVar52[0x2d] >> 4) * -0x5555555555555555;
          ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
          if (uVar58 < uVar86 || uVar58 - uVar86 == 0) goto LAB_10abf0654;
          lVar65 = plVar52[0x2d] + uVar86 * 0x30;
          in_stack_fffffffffffff910 = alStack_450 + uVar86 * 2;
          in_stack_fffffffffffff918 = lVar65 + 0x28;
          (**(code **)(*param_1 + 0x180))
                    (param_1,*(undefined1 *)(lVar53 + 1),*(undefined1 *)(lVar53 + 2),
                     &ppppppplStack_410,&uStack_2c0,plVar85,*(undefined8 *)(lVar65 + 0x10),uVar54,
                     in_stack_fffffffffffff910,in_stack_fffffffffffff918);
          if ((uVar60 != uVar57) || ((*plVar32 != 0 && (*plVar32 != *plVar84)))) {
            FUN_10abf1f8c(param_1[0x137] + 0x10,uVar86);
          }
          plVar32 = (long *)CONCAT44(uStack_408._4_4_,
                                     CONCAT13(uStack_408._3_1_,
                                              CONCAT12(uStack_408._2_1_,(undefined2)uStack_408)));
          if (plVar32 != (long *)0x0) {
            plVar84 = plVar32 + 1;
            do {
              lVar53 = *plVar84;
              cVar46 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar84,0x10);
              if (bVar22) {
                *plVar84 = lVar53 + -1;
                cVar46 = ExclusiveMonitorsStatus();
              }
            } while (cVar46 != '\0');
            if (lVar53 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
            }
          }
        }
        else {
          ppppppplVar70 = (long *******)(ulong)(uint)(float)uStack_2c0;
          if (3 < uVar86) goto LAB_10abf0654;
          if (*(char *)((long)&uStack_598 + uVar86) == '\x01') goto LAB_10abefa84;
          if ((*(byte *)((long)param_1 + 0xb52) & 1) == 0) {
            FUN_10abf1f8c(param_1[0x137] + 0x10,uVar86);
            plVar85 = (long *)*plVar27;
            FUN_10abf1b04();
            if ((*plVar32 != 0) && (*plVar32 != *plVar85)) {
              FUN_10abf1b94(param_1,*plVar27,plVar84,plVar32,*(undefined1 *)((long)plVar52 + 0x44),
                            &uStack_2c0);
              FUN_10abf1f8c(param_1[0x137] + 0x10,uVar86);
            }
          }
        }
        uVar86 = uVar86 + 1;
      } while (uVar86 != uStack_5a8);
    }
    if ((uVar60 == uVar57) || (*(char *)((long)param_1 + 0xb52) == '\0')) {
      FUN_10abf2074(param_1[0x137] + 0x10,2);
    }
    if ((int)plVar28[0x120] != 0) {
      FUN_10a5e2990(param_1 + 0xbc,param_1 + 4);
    }
    goto LAB_10abefff4;
  }
  *(short *)(param_1 + 0x138) = sVar6;
  lVar53 = param_1[0x137];
  if (*(char *)((long)plVar52 + 0x22) != -1) {
    uVar54 = *(undefined8 *)(lVar53 + 0x20);
    FUN_10abf27cc(uVar54);
    puVar75 = *(undefined8 **)(param_1[0x137] + 0x20);
    FUN_10abf1b04();
    plVar52 = param_1 + 4;
    FUN_10a01f6d4(plVar52,sVar6);
    uVar86 = (ulong)*(byte *)((long)plVar52 + 0x22);
    uVar58 = (param_1[0x29] - param_1[0x28] >> 4) * -0x30c30c30c30c30c3;
    ppppppplVar70 = uStack_2c0;
    if (uVar58 < uVar86 || uVar58 - uVar86 == 0) goto LAB_10abf0654;
    lVar53 = param_1[0x28] + uVar86 * 0x150;
    if ((int)param_1[8] < 0x52) {
      if (0.1 < *(float *)(lVar53 + 0x24) || 2 < *(byte *)(lVar53 + 2)) goto LAB_10abefcb0;
    }
    else if (0.0 < *(float *)(lVar53 + 0x20)) {
LAB_10abefcb0:
      plVar28 = (long *)*puVar75;
      (**(code **)(*plVar28 + 0x28))();
      uVar97 = (uint)plVar28 >> (ulong)(*(byte *)((long)plVar52 + 0x44) & 0x1f);
      if (uVar97 < 2) {
        uVar97 = 1;
      }
      plVar28 = (long *)*puVar75;
      (**(code **)(*plVar28 + 0x30))();
      uVar9 = (uint)plVar28 >> (ulong)(*(byte *)((long)plVar52 + 0x44) & 0x1f);
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      uVar40 = *(undefined8 *)(param_1[0x10b] + 0x1e0);
      in_stack_fffffffffffff910 = (long *)((ulong)in_stack_fffffffffffff910 & 0xffffffffffffff00);
      FUN_10a048e7c(&pppppppuStack_580,uVar40,0,uVar97,uVar9,1,4,1,0,in_stack_fffffffffffff910);
      iVar71 = (int)uVar40;
      FUN_10ad055a0();
      if (iVar71 != 0) {
        if (*ppuVar30 == (undefined *)0x0) {
          plVar28 = (long *)*ppuVar31;
          if (plVar28 != (long *)0x0) {
            (**(code **)(*plVar28 + 0x18))();
            if (plVar28 != (long *)0x0) {
              plVar28 = plVar28 + 7;
              goto LAB_10abefd38;
            }
          }
        }
        else {
          plVar28 = (long *)(*ppuVar30 + 8);
LAB_10abefd38:
          if (((uint)*(undefined8 *)(*plVar28 + 0x10) >> 1 & 1) != 0) goto LAB_10abf02bc;
        }
      }
      FUN_10a025e68(&uStack_2c0,&pppppppuStack_580,*(undefined1 *)((long)plVar52 + 0x44),
                    (int)plVar52[8],2,2,2,0xffffffffffffffff,0xffffffffffffffff);
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_2c0);
      plVar28 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar32 = plStack_e8 + 1;
        do {
          lVar65 = *plVar32;
          cVar46 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar22) {
            *plVar32 = lVar65 + -1;
            cVar46 = ExclusiveMonitorsStatus();
          }
        } while (cVar46 != '\0');
        if (lVar65 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        }
      }
      plVar28 = plStack_110;
      if (plStack_110 != (long *)0x0) {
        plVar32 = plStack_110 + 1;
        do {
          lVar65 = *plVar32;
          cVar46 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar22) {
            *plVar32 = lVar65 + -1;
            cVar46 = ExclusiveMonitorsStatus();
          }
        } while (cVar46 != '\0');
        if (lVar65 == 0) {
          (**(code **)(*plStack_110 + 0x10))(plStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        }
      }
      func_0x00010a048e34(&uStack_2b8,uStack_2c0);
      FUN_10abf1f44(param_1,*(undefined8 *)(param_1[0x137] + 0x20),
                    *(undefined1 *)((long)plVar52 + 0x44));
      uStack_2c0._0_4_ = 0.0;
      uStack_2c0._4_4_ = 0;
      uStack_2b8._0_4_ = uVar97;
      uStack_2b8._4_4_ = uVar9;
      (**(code **)(*param_1 + 0xc0))(param_1,&uStack_2c0);
      FUN_10abf3f04(*(undefined4 *)(lVar53 + 0x20),*(undefined4 *)(lVar53 + 0x24),
                    *(undefined4 *)(lVar53 + 0x28),param_1,uVar54,0,*(undefined1 *)(lVar53 + 2));
      plVar28 = param_1;
      (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
      iVar71 = (int)plVar28;
      FUN_10ad055a0();
      if (iVar71 != 0) {
        if (*ppuVar30 == (undefined *)0x0) {
          plVar28 = (long *)*ppuVar31;
          if ((plVar28 == (long *)0x0) || ((**(code **)(*plVar28 + 0x18))(), plVar28 == (long *)0x0)
             ) goto LAB_10abefe98;
          plVar28 = plVar28 + 7;
        }
        else {
          plVar28 = (long *)(*ppuVar30 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar28 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&pppppppuStack_560,&UNK_10f69ab35);
          func_0x000107c2b054(&ppppppplStack_4f0,"");
          if (uStack_54c < 0) {
            pppppppuVar74 = (undefined8 *******)"null";
            if (CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT12(uStack_556,uStack_558))) != 0) {
              pppppppuVar74 = pppppppuStack_560;
            }
          }
          else {
            pppppppuVar74 = (undefined8 *******)"null";
            if (uStack_54c._3_1_ != '\0') {
              pppppppuVar74 = &pppppppuStack_560;
            }
          }
          uStack_2c0._0_4_ = SUB84(pppppppuVar74,0);
          uStack_2c0._4_4_ = (undefined4)((ulong)pppppppuVar74 >> 0x20);
          if ((long)uStack_4e0 < 0) {
            ppppppplStack_410 = (long *******)"null";
            if (plStack_4e8 != (long *)0x0) {
              ppppppplStack_410 = ppppppplStack_4f0;
            }
          }
          else {
            ppppppplStack_410 = (long *******)"null";
            if (uStack_4e0._7_1_ != '\0') {
              ppppppplStack_410 = (long *******)&ppppppplStack_4f0;
            }
          }
          FUN_10a224324(&uStack_2c0,&ppppppplStack_410);
          if (uStack_54c < 0) {
            if (CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT12(uStack_556,uStack_558))) == 0)
            goto LAB_10abf0554;
            func_0x000107c3192c(&uStack_2c0,pppppppuStack_560);
LAB_10abf05c0:
            uVar49 = 1;
          }
          else {
            if (uStack_54c._3_1_ != '\0') {
              uStack_2b8._0_4_ = CONCAT13(uStack_555,CONCAT12(uStack_556,uStack_558));
              uStack_2b8._4_4_ = uStack_554;
              uStack_2c0._0_4_ = SUB84(pppppppuStack_560,0);
              uStack_2c0._4_4_ = (undefined4)((ulong)pppppppuStack_560 >> 0x20);
              abStack_2b0[0] = (byte)uStack_550;
              abStack_2b0[1] = (byte)((uint)uStack_550 >> 8);
              abStack_2b0[2] = (byte)((uint)uStack_550 >> 0x10);
              uStack_2ad = (uint)(CONCAT44(uStack_54c,uStack_550) >> 0x18);
              cStack_2a9 = uStack_54c._3_1_;
              goto LAB_10abf05c0;
            }
LAB_10abf0554:
            uVar49 = 0;
            uStack_2c0._0_4_ = (float)((uint)(float)uStack_2c0 & 0xffffff00);
          }
          uStack_2a8 = (undefined8 *******)CONCAT71(uStack_2a8._1_7_,uVar49);
          if ((long)uStack_4e0 < 0) {
            if (plStack_4e8 == (long *)0x0) {
LAB_10abf05ec:
              uVar49 = 0;
              ppppppplStack_410 = (long *******)((ulong)ppppppplStack_410 & 0xffffffffffffff00);
              goto LAB_10abf0644;
            }
            func_0x000107c3192c(&ppppppplStack_410,ppppppplStack_4f0);
          }
          else {
            if (uStack_4e0._7_1_ == '\0') goto LAB_10abf05ec;
            uStack_408._0_2_ = SUB82(plStack_4e8,0);
            uStack_408._2_1_ = (undefined1)((ulong)plStack_4e8 >> 0x10);
            uStack_408._3_1_ = (undefined1)((ulong)plStack_4e8 >> 0x18);
            uStack_408._4_4_ = (undefined4)((ulong)plStack_4e8 >> 0x20);
            ppppppplStack_410 = ppppppplStack_4f0;
            uStack_400 = SUB84(uStack_4e0,0);
            uStack_3fc = (undefined4)((ulong)uStack_4e0 >> 0x20);
          }
          uVar49 = 1;
LAB_10abf0644:
          uStack_3f8 = CONCAT31(uStack_3f8._1_3_,uVar49);
          FUN_10a234a0c(&uStack_2c0,&ppppppplStack_410);
          ppppppplVar70 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
          goto LAB_10abf0654;
        }
      }
LAB_10abefe98:
      FUN_10a025e68(&uStack_2c0,puVar75,*(undefined1 *)((long)plVar52 + 0x44),(int)plVar52[8],2,2,2,
                    0xffffffffffffffff,0xffffffffffffffff);
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_2c0);
      plVar28 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar32 = plStack_e8 + 1;
        do {
          lVar65 = *plVar32;
          cVar46 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar22) {
            *plVar32 = lVar65 + -1;
            cVar46 = ExclusiveMonitorsStatus();
          }
        } while (cVar46 != '\0');
        if (lVar65 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        }
      }
      plVar28 = plStack_110;
      if (plStack_110 != (long *)0x0) {
        plVar32 = plStack_110 + 1;
        do {
          lVar65 = *plVar32;
          cVar46 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar22) {
            *plVar32 = lVar65 + -1;
            cVar46 = ExclusiveMonitorsStatus();
          }
        } while (cVar46 != '\0');
        if (lVar65 == 0) {
          (**(code **)(*plStack_110 + 0x10))(plStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        }
      }
      func_0x00010a048e34(&uStack_2b8,CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0));
      FUN_10abf1f44(param_1,*(undefined8 *)(param_1[0x137] + 0x20),
                    *(undefined1 *)((long)plVar52 + 0x44));
      uStack_2c0._0_4_ = 0.0;
      uStack_2c0._4_4_ = 0;
      uStack_2b8._0_4_ = uVar97;
      uStack_2b8._4_4_ = uVar9;
      (**(code **)(*param_1 + 0xc0))(param_1,&uStack_2c0);
      FUN_10abf3f04(*(undefined4 *)(lVar53 + 0x20),*(undefined4 *)(lVar53 + 0x24),
                    *(undefined4 *)(lVar53 + 0x28),param_1,&pppppppuStack_580,1,
                    *(undefined1 *)(lVar53 + 2));
      (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
      plVar52 = plStack_578;
      uStack_2c0 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
      uStack_2b8 = (long ******)CONCAT44(uStack_2b8._4_4_,(uint)uStack_2b8);
      if (plStack_578 != (long *)0x0) {
        plVar28 = plStack_578 + 1;
        do {
          lVar53 = *plVar28;
          cVar46 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar22) {
            *plVar28 = lVar53 + -1;
            cVar46 = ExclusiveMonitorsStatus();
          }
        } while (cVar46 != '\0');
        uStack_2c0 = (long *******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        uStack_2b8 = (long ******)CONCAT44(uStack_2b8._4_4_,(uint)uStack_2b8);
        if (lVar53 == 0) {
          (**(code **)(*plStack_578 + 0x10))(plStack_578);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar52);
        }
      }
      goto LAB_10abefff4;
    }
    lVar53 = param_1[0x137];
  }
  FUN_10abf2074(lVar53 + 0x10,0);
LAB_10abefff4:
  plVar52 = plStack_488;
  if (plStack_488 != (long *)0x0) {
    plVar28 = plStack_488 + 1;
    do {
      lVar53 = *plVar28;
      cVar46 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar22) {
        *plVar28 = lVar53 + -1;
        cVar46 = ExclusiveMonitorsStatus();
      }
    } while (cVar46 != '\0');
    if (lVar53 == 0) {
      (**(code **)(*plStack_488 + 0x10))(plStack_488);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar52);
    }
  }
  (**(code **)(*param_1 + 0x138))(param_1);
LAB_10abf003c:
  uVar86 = uVar60;
  if (uVar60 == uVar57) goto LAB_10abf01a8;
  goto LAB_10abed788;
  while( true ) {
    plVar84 = plVar84 + 2;
    plVar32 = plVar32 + 1;
    uVar86 = uVar86 - 1;
    if (uVar86 == 0) break;
LAB_10abee67c:
    if (((*(long *)(lVar53 + 0x90) != 0) && (*plVar32 != 0)) && (*plVar32 != *plVar84)) {
      uVar64 = 0;
      goto LAB_10abee1d0;
    }
  }
  uVar64 = 1;
  goto LAB_10abee1d0;
}



/* Entry: 10abf09dc; end: 10abf0c93;  */

/* WARNING: Removing unreachable block (ram,0x00010abf0b04) */
/* WARNING: Removing unreachable block (ram,0x00010abf0b14) */
/* WARNING: Removing unreachable block (ram,0x00010abf0b80) */
/* WARNING: Removing unreachable block (ram,0x00010abf0b88) */

void FUN_10abf09dc(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 ***pppuStack_b0;
  long lStack_a8;
  undefined1 uStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  undefined1 uStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  char cStack_59;
  ulong *puStack_58;
  undefined8 uStack_50;
  char cStack_41;
  
  puVar8 = *(undefined8 **)(param_1 + 0x1a0);
  puVar1 = *(undefined8 **)(param_1 + 0x1a8);
  if (puVar8 != puVar1) {
    ppuVar4 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar5 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    ppuVar6 = ppuVar5;
    do {
      iVar3 = (int)ppuVar6;
      FUN_10ad055a0();
      if (iVar3 != 0) {
        if (*ppuVar4 == (undefined *)0x0) {
          plVar7 = (long *)*ppuVar5;
          if ((plVar7 == (long *)0x0) || ((**(code **)(*plVar7 + 0x18))(), plVar7 == (long *)0x0))
          goto LAB_10abf0a50;
          plVar7 = plVar7 + 7;
        }
        else {
          plVar7 = (long *)(*ppuVar4 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar7 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&puStack_58,&UNK_10f69a3ba);
          func_0x000107c2b054(&pppuStack_70,"");
          ppuStack_90 = (undefined8 **)"null";
          if (cStack_41 != '\0') {
            ppuStack_90 = &puStack_58;
          }
          if (cStack_59 < '\0') {
            pppuStack_b0 = (undefined8 ***)"null";
            if (lStack_68 != 0) {
              pppuStack_b0 = pppuStack_70;
            }
          }
          else {
            pppuStack_b0 = (undefined8 ***)"null";
            if (cStack_59 != '\0') {
              pppuStack_b0 = &pppuStack_70;
            }
          }
          FUN_10a224324(&ppuStack_90,&pppuStack_b0);
          if (cStack_41 == '\0') {
            ppuStack_90 = (undefined8 **)((ulong)ppuStack_90 & 0xffffffffffffff00);
          }
          else {
            uStack_88 = uStack_50;
            ppuStack_90 = (undefined8 **)puStack_58;
          }
          uStack_78 = cStack_41 != '\0';
          if (cStack_59 < '\0') {
            if (lStack_68 == 0) {
LAB_10abf0be4:
              uStack_98 = 0;
              pppuStack_b0 = (undefined8 ***)((ulong)pppuStack_b0 & 0xffffffffffffff00);
              goto LAB_10abf0c04;
            }
            func_0x000107c3192c(&pppuStack_b0,pppuStack_70);
          }
          else {
            if (cStack_59 == '\0') goto LAB_10abf0be4;
            lStack_a8 = lStack_68;
            pppuStack_b0 = pppuStack_70;
          }
          uStack_98 = 1;
LAB_10abf0c04:
          FUN_10a234a0c(&ppuStack_90,&pppuStack_b0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10abf0c18);
          (*pcVar2)();
        }
      }
LAB_10abf0a50:
      ppuVar6 = (undefined **)*puVar8;
      if (ppuVar6 != (undefined **)0x0) {
        if ((*(char *)((long)ppuVar6 + 0x11) == '\x01') && (ppuVar6[1] != (undefined *)0x0)) {
          iVar3 = *(int *)(*(long *)(ppuVar6[1] + 0x850) + 0x2c);
          if (*(int *)((long)ppuVar6 + 0x14) == iVar3) goto LAB_10abf0a94;
          *(int *)((long)ppuVar6 + 0x14) = iVar3;
        }
        (**(code **)(*ppuVar6 + 0x10))(ppuVar6,param_1);
      }
LAB_10abf0a94:
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
  }
  return;
}



/* Entry: 10abf0c94; end: 10abf0d4b;  */

undefined1 * FUN_10abf0c94(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_34 [36];
  
  if (((*(byte *)(param_2 + 0x34) & 1) == 0) &&
     (lVar2 = *(long *)(param_1 + 0x9b8), *(long *)(lVar2 + 0x18) != 0)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    lVar4 = *(long *)(lVar5 + 0x348);
    lVar3 = *(long *)(lVar5 + 0x350);
    if (lVar4 == lVar3) {
      lVar3 = *(long *)(lVar5 + 0x338);
      lVar4 = *(long *)(lVar5 + 0x330);
      lVar5 = 3;
    }
    else {
      lVar5 = 4;
    }
    if (((((ulong)(lVar3 - lVar4 >> lVar5) < 2) &&
         (*(char *)(*(long *)(param_1 + 0x9b0) + 0x3f) == '\x01')) &&
        ((*(byte *)(*(long *)(param_1 + 0x9b0) + 0x3b) & 1) == 0)) &&
       (((*(byte *)(lVar2 + 9) & 1) == 0 && (*(long *)(lVar2 + 0x90) != 0)))) {
      (**(code **)(**(long **)(lVar2 + 0x98) + 0x90))(auStack_34);
      puVar1 = auStack_34;
      FUN_10abf0d4c(puVar1,&UNK_10e482b24);
      return puVar1;
    }
  }
  return (undefined1 *)0x0;
}



/* Entry: 10abf0d4c; end: 10abf0de7;  */

bool FUN_10abf0d4c(float *param_1,float *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
     ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))))) {
    return param_1[8] == param_2[8];
  }
  return false;
}



/* Entry: 10abf0de8; end: 10abf0f2f;  */

void FUN_10abf0de8(long param_1,long param_2)

{
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [48];
  
  FUN_10a18eadc(auStack_70,&UNK_10f69a766);
  FUN_10a5dfb5c(param_1 + 0x20,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(undefined8 *)(param_1 + 0x9f8) = 0;
  *(undefined8 *)(param_1 + 0x9f0) = 0;
  *(undefined8 *)(param_1 + 0xa08) = 0;
  *(undefined8 *)(param_1 + 0xa00) = 0;
  *(undefined8 *)(param_1 + 0xa10) = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa18) = 0;
  *(undefined8 *)(param_1 + 0xa28) = 0;
  *(undefined8 *)(param_1 + 0xa20) = 0;
  plStack_d8 = &lStack_d0;
  FUN_10a5bcccc((long *)(param_1 + 0xa30),*(undefined8 *)(param_1 + 0xa38));
  *(long **)(param_1 + 0xa30) = plStack_d8;
  *(long *)(param_1 + 0xa38) = lStack_d0;
  *(long *)(param_1 + 0xa40) = lStack_c8;
  if (lStack_c8 == 0) {
    *(long *)(param_1 + 0xa30) = param_1 + 0xa38;
  }
  else {
    *(long *)(lStack_d0 + 0x10) = param_1 + 0xa38;
    lStack_d0 = 0;
    lStack_c8 = 0;
    plStack_d8 = &lStack_d0;
  }
  func_0x00010a5e4dd4(param_1 + 0xa48,&uStack_c0);
  func_0x00010a5e4e74(param_1 + 0xa70,&uStack_98);
  FUN_10a5bcdcc(&uStack_98);
  func_0x00010a5bcd0c(&uStack_c0);
  FUN_10a5bcccc(&plStack_d8,lStack_d0);
  *(undefined1 *)(param_1 + 0xac0) = 0;
  *(undefined4 *)(param_1 + 0xac4) = 0;
  *(undefined2 *)(param_1 + 0xac8) = 0;
  *(undefined2 *)(param_1 + 0xaf8) = 0x100;
  FUN_10a1988cc(auStack_70);
  return;
}



/* Entry: 10abf0f30; end: 10abf1023;  */

void FUN_10abf0f30(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  ulong uStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  
  func_0x00010ad5e044(param_1[0x109]);
  lVar1 = param_1[8];
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x80))();
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&uStack_70,param_1[1],param_1[2]);
  }
  else {
    lStack_68 = param_1[2];
    uStack_70 = param_1[1];
    uStack_60 = param_1[3];
  }
  uStack_40 = uStack_60;
  uStack_54 = SUB81(plVar2,0);
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  lStack_38 = 0;
  uStack_58 = (int)lVar1;
  func_0x00010a1e4978(&uStack_58);
  *(undefined4 *)(param_1 + 0x130) = uStack_58;
  *(undefined1 *)((long)param_1 + 0x984) = uStack_54;
  if (*(char *)((long)param_1 + 0x99f) < '\0') {
    __ZdlPv(param_1[0x131]);
  }
  param_1[0x132] = lStack_48;
  param_1[0x131] = uStack_50;
  param_1[0x133] = uStack_40;
  uStack_40 = uStack_40 & 0xffffffffffffff;
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  param_1[0x134] = lStack_38;
  if ((long)uStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  return;
}



/* Entry: 10abf1024; end: 10abf1157;  */

void FUN_10abf1024(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  if (*(char *)((long)param_1 + 0xb52) == '\x01') {
    (**(code **)(*param_1 + 0x90))(param_1,3,3,3);
  }
  *(undefined2 *)(param_1 + 0x138) = 0xffff;
  func_0x00010ad5e0dc(param_1[0x109]);
  FUN_10a18eadc(&uStack_60,&UNK_10f69a779);
  FUN_10abf1158(param_1 + 0x10c);
  plVar1 = *(long **)(param_1[0x154] + 0x10);
  for (plVar2 = *(long **)(param_1[0x154] + 8); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*plVar2 != 0) {
      FUN_10aba56fc();
    }
  }
  func_0x00010abf11e8(param_1[0x136]);
  FUN_10abf125c(param_1[0x137]);
  FUN_10a1988cc(&uStack_60);
  uStack_60 = 0;
  uStack_5c = 0;
  func_0x000107c2b054(&lStack_58,&UNK_10f69b436);
  lStack_40 = 0;
  func_0x00010a1e4978(&uStack_60);
  *(undefined4 *)(param_1 + 0x130) = uStack_60;
  *(undefined1 *)((long)param_1 + 0x984) = uStack_5c;
  if (*(char *)((long)param_1 + 0x99f) < '\0') {
    __ZdlPv(param_1[0x131]);
  }
  param_1[0x132] = lStack_50;
  param_1[0x131] = lStack_58;
  param_1[0x133] = lStack_48;
  param_1[0x134] = lStack_40;
  return;
}



/* Entry: 10abf1158; end: 10abf125b;  */

void FUN_10abf1158(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))();
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))();
  (**(code **)(**(long **)(param_1 + 0x68) + 0x18))();
  (**(code **)(**(long **)(param_1 + 0x58) + 0x18))();
  lVar6 = *(long *)(param_1 + 0x48);
  *(int *)(lVar6 + 0xe8) = (*(int *)(lVar6 + 0xe8) + 1) % 3;
  *(undefined4 *)(lVar6 + 0xec) = 0;
  lVar6 = *(long *)(param_1 + 0x88);
  plVar10 = *(long **)(lVar6 + 0x18);
  while (plVar10 != (long *)0x0) {
    while ((plVar10[4] != 0 && (*(long *)(plVar10[4] + 8) != -1))) {
      lVar1 = plVar10[5];
      plVar4 = (long *)plVar10[6];
      lVar2 = (long)plVar4 - lVar1;
      if (lVar2 == 0) break;
      uVar7 = 0;
      uVar8 = plVar10[8];
      do {
        lVar9 = *(long *)(lVar1 + uVar7 * 8);
        iVar5 = 0;
        if (uVar8 <= uVar7) {
          iVar5 = *(int *)(lVar9 + 0x58) + 1;
        }
        *(int *)(lVar9 + 0x58) = iVar5;
        uVar7 = uVar7 + 1;
      } while (lVar2 >> 3 != uVar7);
      while (plVar4 = plVar4 + -1, 300 < *(uint *)(*plVar4 + 0x58)) {
        *plVar4 = 0;
        func_0x00010ac08db4();
        plVar10[6] = (long)plVar4;
        if (plVar4 == (long *)plVar10[5]) goto LAB_10abe17e0;
      }
      plVar10[8] = 0;
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_10abe1804;
    }
LAB_10abe17e0:
    plVar4 = (long *)(lVar6 + 8);
    func_0x00010ac08df8(plVar4,plVar10);
    plVar10 = plVar4;
  }
LAB_10abe1804:
  iVar5 = *(int *)(lVar6 + 0x5c);
  if (*(int *)(lVar6 + 0x58) == 0) {
    if (iVar5 != 0) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f699fa6,&UNK_10f699ff2,0x54,&UNK_10f69a0a5,in_x6,in_x7,iVar5)
        ;
      }
      iVar5 = 0;
      goto LAB_10abe189c;
    }
  }
  else {
    if (iVar5 == 0) {
      if ((bRam000000011330a9e8 & 1) == 0) {
        iVar5 = 0;
      }
      else {
        func_0x00010ae06f08(0,1,&UNK_10f699fa6,&UNK_10f699ff2,0x50,&UNK_10f69a034,in_x6,in_x7,
                            *(int *)(lVar6 + 0x58));
        iVar5 = *(int *)(lVar6 + 0x5c);
      }
    }
    iVar5 = iVar5 + 1;
LAB_10abe189c:
    *(int *)(lVar6 + 0x5c) = iVar5;
  }
  *(undefined4 *)(lVar6 + 0x58) = 0;
  iVar5 = *(int *)(lVar6 + 0x54);
  if (*(int *)(lVar6 + 0x50) == 0) {
    if (iVar5 == 0) goto LAB_10abe18f8;
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f699fa6,&UNK_10f699ff2,0x5c,&UNK_10f69a0ed,in_x6,in_x7,iVar5);
    }
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + 1;
  }
  *(int *)(lVar6 + 0x54) = iVar5;
LAB_10abe18f8:
  *(undefined4 *)(lVar6 + 0x50) = 0;
  uVar7 = *(long *)(lVar6 + 0x30) + 1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar7;
  *(ulong *)(lVar6 + 0x30) =
       uVar7 - ((SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar7 / 3);
  return;
}



/* Entry: 10abf125c; end: 10abf1327;  */

void FUN_10abf125c(undefined2 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_38;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 3;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  lVar1 = *(long *)(param_1 + 100);
  for (lVar2 = *(long *)(param_1 + 0x68); lVar2 != lVar1; lVar2 = lVar2 + -0x108) {
    lStack_38 = lVar2 + -0xf0;
    FUN_10a1901f0(&lStack_38);
  }
  *(long *)(param_1 + 0x68) = lVar1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((long)param_1 + 0x81) = 0;
  *(undefined8 *)((long)param_1 + 0x79) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar1 = *(long *)(param_1 + 0x70) << 5;
    plVar3 = (long *)(param_1 + 0x74);
    do {
      lVar2 = *plVar3;
      FUN_10a18cbd8(lVar2 + 0x288);
      FUN_10a1da3a4(lVar2,0,0,0,4,0,0,0);
      lVar1 = lVar1 + -0x20;
      plVar3 = plVar3 + 4;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 10abf1328; end: 10abf132b;  */

void FUN_10abf1328(void)

{
  return;
}



/* Entry: 10abf132c; end: 10abf13e3;  */

void FUN_10abf132c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x9b8);
  if (*(long *)(lVar1 + 0x18) != 0) {
    uVar2 = 0;
    lVar3 = 0x20;
    do {
      lVar4 = *(long *)(lVar1 + lVar3);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x2b8) == '\x01')) {
        FUN_10a18cbd8(lVar4 + 0x2a8);
        *(undefined1 *)(lVar4 + 0x2b8) = 0;
        lVar1 = *(long *)(param_1 + 0x9b8);
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 < *(ulong *)(lVar1 + 0x18));
  }
  return;
}



/* Entry: 10abf13e4; end: 10abf13f7;  */

void FUN_10abf13e4(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long *plVar14;
  undefined1 uVar15;
  undefined *puVar16;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  ushort uVar23;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puVar22;
  
  plVar14 = *(long **)(param_1 + 0x848);
  if ((((int)plVar14[4] == 0) || (*plVar14 == 0)) || ((int)plVar14[5] != 1)) {
    return;
  }
  *(undefined4 *)(plVar14 + 5) = 0;
  ppuVar12 = (undefined **)(plVar14 + 0xe);
  ppuVar11 = (undefined **)(plVar14 + 0x28);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = ppuVar11;
  if (((*(byte *)((long)plVar14 + 0x71) & 1) == 0) &&
     (*(undefined1 *)((long)plVar14 + 0x71) = 1, unaff_x19 = ppuVar12, *(char *)ppuVar12 == '\x01'))
  {
    *(undefined1 *)ppuVar12 = 0;
    puVar16 = PTR___tlv_bootstrap_11340d750;
    ppuVar17 = &PTR___tlv_bootstrap_11340d750;
    ppuVar10 = ppuVar17;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar12 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar10 & 1) == 0) {
      ppuVar13 = ppuVar12;
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      __tlv_atexit(0x10a132a8c,ppuVar13,0x100000000);
      (*(code *)puVar16)();
      *(undefined1 *)ppuVar17 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    unaff_x20 = (undefined **)ppuVar12[2];
    if (unaff_x20 != (undefined **)0x0) {
      if (plVar14[0x11] != 0) {
        puVar16 = unaff_x20[1];
        if ((((puVar16[0x42] | puVar16[0x43]) & 1) != 0) || (puVar16[0x3f] == '\x01')) {
          uVar8 = cntfrq_el0;
          InstructionSynchronizationBarrier();
          puVar18 = (undefined *)cntvct_el0;
          if (uVar8 != 1000000000) {
            uVar6 = 0;
            if (uVar8 != 0) {
              uVar6 = (ulong)puVar18 / uVar8;
            }
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = (((long)puVar18 - uVar6 * uVar8) * 1000000000) / uVar8;
            }
            puVar18 = (undefined *)(uVar7 + uVar6 * 1000000000);
          }
          if (((puVar16[0x42] | puVar16[0x43]) & 1) != 0) {
            uVar19 = (undefined4)plVar14[0x10];
            uVar23 = *(ushort *)((long)plVar14 + 0x72);
            puVar16 = (undefined *)plVar14[0xf];
            puVar21 = (undefined8 *)*ppuVar11;
            puVar2 = (undefined8 *)plVar14[0x29];
            if (puVar2 == puVar21) {
              ppuVar12 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar12 != (undefined **)0x0) {
                ppuVar17 = (undefined **)0x0;
                ppuVar11 = ppuVar12;
                goto LAB_10ad5e3a0;
              }
            }
            else {
              uStack_80 = (uint)uVar23;
              puVar20 = unaff_x20[2];
              ppuVar12 = &puStack_78;
              uStack_7c = uVar19;
              puStack_70 = puVar20;
              FUN_10ad605e8();
              *ppuVar12 = (undefined *)0x0;
              ppuVar12[1] = (undefined *)0x0;
              ppuVar12[2] = (undefined *)0x0;
              ppuVar12[4] = puVar20;
              func_0x00010ad60458();
              iVar3 = *(int *)((long)unaff_x20 + 0x34);
              do {
                puVar22 = puVar21 + 1;
                puStack_78 = (undefined *)*puVar21;
                ppuVar13 = &puStack_78;
                if (iVar3 != (int)((ulong)puStack_78 >> 0x20)) {
                  ppuVar13 = (undefined **)&UNK_10e510508;
                }
                func_0x00010ad60504(ppuVar12);
                puVar21 = puVar22;
              } while (puVar22 != puVar2);
              ppuVar11 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar11 == (undefined **)0x0) {
                puVar18 = unaff_x20[2];
                puVar16 = *ppuVar12;
                if (puVar16 != (undefined *)0x0) {
                  ppuVar12[1] = puVar16;
                  puVar20 = ppuVar12[2];
                  plVar1 = (long *)(ppuVar12[4] + 8);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = *plVar1 - ((long)puVar20 - (long)puVar16);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  __ZdlPv();
                }
                plVar1 = (long *)(puVar18 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = *plVar1 + -0x28;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                __ZdlPv();
              }
              else {
                uVar23 = (ushort)uStack_80;
                ppuVar17 = ppuVar12;
                uVar19 = uStack_7c;
LAB_10ad5e3a0:
                ppuVar12 = ppuVar11;
                uVar15 = 6;
                if (ppuVar17 != (undefined **)0x0) {
                  uVar15 = 0xe;
                }
                *ppuVar12 = puVar16;
                ppuVar12[1] = (undefined *)ppuVar17;
                ppuVar12[2] = puVar18;
                *(undefined4 *)(ppuVar12 + 3) = uVar19;
                *(ushort *)((long)ppuVar12 + 0x1c) = uVar23;
                *(undefined1 *)((long)ppuVar12 + 0x1e) = uVar15;
                if (((ulong)unaff_x20[0x38] & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ad5e50c);
                  (*pcVar9)();
                }
                unaff_x20[0x18] = unaff_x20[0x18] + 1;
              }
            }
          }
        }
      }
      if (((unaff_x20[1][0x41] == '\x01') && ((char)plVar14[0x13] == '\x01')) &&
         (ppuVar12 = (undefined **)unaff_x20[0xb], ppuVar12 != (undefined **)0x0)) {
        ppuVar13 = (undefined **)plVar14[0x12];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5e494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*ppuVar12 + 0x30))();
          return;
        }
        goto LAB_10ad5e50c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10ad5e50c:
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*(int *)(ppuVar12 + 4) != 0) {
    pcStack_88 = FUN_10ad5e514;
    if ((*ppuVar12 != (undefined *)0x0) && (*(int *)((long)ppuVar12 + 0x2c) == 0)) {
      *(undefined4 *)((long)ppuVar12 + 0x2c) = 1;
      ppuStack_a0 = unaff_x20;
      ppuStack_98 = unaff_x19;
      puStack_90 = &stack0xfffffffffffffff0;
      FUN_10ad61728(ppuVar12[2]);
      ppuVar12[0x2c] = ppuVar12[0x2b];
      puVar16 = ppuVar12[1];
      if ((puVar16 != (undefined *)0x0) &&
         (FUN_10ad5dad4(puVar16,ppuVar13[3],ppuVar13[4]), uStack_c0 = puVar16,
         puVar16 != (undefined *)0x0)) {
        FUN_10ad60104(ppuVar12 + 0x2b,&uStack_c0);
      }
      FUN_10ad60210(&uStack_c0);
      *(undefined4 *)(ppuVar12 + 0x14) = (undefined4)uStack_c0;
      *(undefined4 *)((long)ppuVar12 + 0xa4) = uStack_c0._4_4_;
      ppuVar12[0x16] = puStack_b0;
      ppuVar12[0x15] = puStack_b8;
      *(undefined1 *)(ppuVar12 + 0x17) = uStack_a8;
    }
  }
  return;
}



/* Entry: 10abf13f8; end: 10abf1507;  */

/* WARNING: Removing unreachable block (ram,0x00010abf1450) */

void FUN_10abf13f8(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x150))();
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x158))(param_1,*(undefined1 *)(param_2 + 0x18));
  if (((((int)plVar1 == 0) || ((*(byte *)(param_1[0x137] + 8) & 1) == 0)) &&
      ((*(byte *)(param_2 + 0x20) & 1) == 0)) || ((int)plVar2 == 0)) {
    lVar4 = param_1[0x137];
    *(undefined1 *)(lVar4 + 1) = 0;
    uVar3 = 3;
  }
  else {
    lVar4 = param_1[0x137];
    *(undefined1 *)(lVar4 + 1) = *(undefined1 *)(param_2 + 0x18);
    uVar3 = *(undefined1 *)(param_2 + 0x19);
  }
  *(undefined1 *)(lVar4 + 2) = uVar3;
  *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(param_2 + 0x1c);
  FUN_10ac04f70(lVar4 + 0x18,param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xf8);
  uVar5 = *(undefined8 *)(param_2 + 0xf0);
  uVar8 = *(undefined8 *)(param_2 + 0x108);
  uVar7 = *(undefined8 *)(param_2 + 0x100);
  uVar9 = *(undefined8 *)(param_2 + 0x109);
  *(undefined8 *)(lVar4 + 0x81) = *(undefined8 *)(param_2 + 0x111);
  *(undefined8 *)(lVar4 + 0x79) = uVar9;
  *(undefined8 *)(lVar4 + 0x68) = uVar6;
  *(undefined8 *)(lVar4 + 0x60) = uVar5;
  *(undefined8 *)(lVar4 + 0x78) = uVar8;
  *(undefined8 *)(lVar4 + 0x70) = uVar7;
  lVar4 = param_1[0x137];
  *(undefined1 *)(lVar4 + 9) = 0;
  uVar3 = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)(lVar4 + 0xd) = uVar3;
  *(undefined1 *)(lVar4 + 0xe) = *(undefined1 *)(param_2 + 0x2d);
  FUN_10abf1508(param_1 + 4,lVar4 + 200,param_2 + 0x98,param_2 + 0x9c,uVar3,
                *(char *)(lVar4 + 1) == '\x01',lVar4 + 10,lVar4 + 0xb,lVar4 + 0xc);
  return;
}



/* Entry: 10abf1508; end: 10abf17a3;  */

void FUN_10abf1508(long param_1,long *param_2,int *param_3,int *param_4,byte param_5,uint param_6,
                  undefined1 *param_7,undefined1 *param_8,byte *param_9)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  ushort uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iStack_78;
  int iStack_74;
  
  iVar8 = 0x7fffffff;
  if (*param_4 != 2) {
    iVar8 = -0x80000000;
  }
  iVar10 = -0x80000000;
  if (*param_4 != 2) {
    iVar10 = 0x7fffffff;
  }
  bVar4 = (param_6 & *param_3 == 0) == 0;
  iStack_74 = 0x7fffffff;
  if (bVar4) {
    iStack_74 = -0x80000000;
  }
  iStack_78 = -0x80000000;
  if (bVar4) {
    iStack_78 = 0x7fffffff;
  }
  lVar17 = *param_2;
  lVar7 = param_2[1];
  if (lVar7 == lVar17) {
    uVar9 = 0;
  }
  else {
    lVar15 = 0;
    uVar16 = 0;
    do {
      iVar12 = (int)uVar16;
      if (*param_4 == 1) {
        bVar5 = 0;
        if (param_6 == 0) goto LAB_10abf1604;
LAB_10abf15e0:
        if ((*param_3 != 1) ||
           (lVar7 = param_1, func_0x00010a01e9ec(param_1,*(undefined4 *)(lVar17 + lVar15)),
           (*(byte *)(lVar7 + 0x18) & 1) == 0)) goto LAB_10abf1604;
        if (iVar12 <= iStack_78) {
          iStack_78 = iVar12;
        }
        if (iStack_74 <= iVar12) {
          iStack_74 = iVar12;
        }
LAB_10abf1624:
        if (iVar12 <= iVar10) {
          iVar10 = iVar12;
        }
        if (iVar8 <= iVar12) {
          iVar8 = iVar12;
        }
        *param_9 = *(byte *)(lVar17 + lVar15 + 0x60) >> 2 & 1 | *param_9;
      }
      else {
        uVar14 = *(ushort *)(lVar17 + lVar15 + 0x60);
        bVar5 = (uVar14 & 0x24) != 0;
        if ((uVar14 & 0x10) != 0) {
          bVar5 = param_5 | bVar5;
        }
        if (param_6 != 0) goto LAB_10abf15e0;
LAB_10abf1604:
        if ((bVar5 & 1) != 0) goto LAB_10abf1624;
      }
      uVar16 = uVar16 + 1;
      lVar17 = *param_2;
      lVar7 = param_2[1];
      uVar9 = (lVar7 - lVar17 >> 3) * 0xf83e0f83e0f83e1;
      lVar15 = lVar15 + 0x108;
    } while (uVar16 <= uVar9 && uVar9 - uVar16 != 0);
  }
  if ((param_6 == 0) || (lVar17 != lVar7)) {
    iVar12 = iVar10;
    iVar11 = iVar8;
    if (iVar10 <= iVar8) {
      iVar11 = 0x7fffffff;
      iVar12 = -0x80000000;
    }
    iVar3 = iStack_78;
    if (iVar10 <= iStack_78) {
      iVar3 = iVar10;
    }
    if (iVar8 <= iStack_74) {
      iVar8 = iStack_74;
    }
    if (iStack_78 <= iStack_74) {
      iVar12 = iVar3;
      iVar11 = iVar8;
      iStack_78 = iVar3;
      iStack_74 = iVar8;
    }
    *param_8 = iVar12 <= iVar11;
    *param_7 = iStack_78 <= iStack_74;
    if (uVar9 != 0) {
      uVar16 = 0;
      puVar13 = (ushort *)(lVar17 + 0x60);
      bVar5 = *param_9;
      do {
        uVar14 = 8;
        if ((long)iStack_74 < (long)uVar16) {
          uVar14 = 0;
        }
        uVar1 = 0;
        if ((long)iStack_78 <= (long)uVar16) {
          uVar1 = uVar14;
        }
        uVar14 = 2;
        if ((long)iVar11 < (long)uVar16) {
          uVar14 = 0;
        }
        uVar6 = 4;
        if ((long)iVar11 < (long)uVar16) {
          uVar6 = 0;
        }
        uVar2 = 0;
        if ((long)iVar12 <= (long)uVar16) {
          uVar2 = uVar14;
        }
        uVar14 = 0;
        if ((long)iVar12 <= (long)uVar16) {
          uVar14 = uVar6;
        }
        uVar14 = uVar2 | uVar1 | *puVar13 & 0xfff1 | uVar14;
        if (bVar5 == 0) {
          uVar14 = uVar2 | uVar1 | *puVar13 & 0xfff5;
        }
        *puVar13 = uVar14;
        uVar16 = uVar16 + 1;
        puVar13 = puVar13 + 0x84;
      } while (uVar9 != uVar16);
    }
  }
  else {
    *param_8 = 1;
    *param_7 = 1;
  }
  return;
}



/* Entry: 10abf17a4; end: 10abf19fb;  */

void FUN_10abf17a4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_38;
  
  func_0x00010abf11e8(*(undefined8 *)(param_1 + 0x9b0));
  puVar2 = *(undefined4 **)(param_1 + 0x9b0);
  *puVar2 = 0x80000000;
  *(short *)(puVar2 + 1) = (short)param_2;
  FUN_10a01f6d4(param_1 + 0x20,param_2);
  FUN_10a01f6d4(param_1 + 0x20,param_2);
  lVar3 = *(long *)(param_1 + 0x9b8);
  lVar4 = *(long *)(lVar3 + 0x18);
  puVar2 = *(undefined4 **)(param_1 + 0x9b0);
  if (lVar4 != 0) {
    uVar1 = *puVar2;
    plVar5 = (long *)(lVar3 + 0x20);
    do {
      *(undefined4 *)(*plVar5 + 0x364) = uVar1;
      lVar4 = lVar4 + -1;
      plVar5 = plVar5 + 2;
    } while (lVar4 != 0);
  }
  if (*(long *)(lVar3 + 0x60) != 0) {
    *(undefined4 *)(*(long *)(lVar3 + 0x60) + 0x364) = *puVar2;
  }
  *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(puVar2 + 0x12);
  lVar4 = *(long *)(lVar3 + 200);
  lVar3 = *(long *)(lVar3 + 0xd0);
  if (lVar4 != lVar3) {
    do {
      if ((uint)*(ushort *)(lVar4 + 0x10) == (uint)param_2) {
        lStack_38 = lVar4;
        func_0x00010abf1890(*(long *)(param_1 + 0x9b0) + 0x48,&lStack_38);
      }
      lVar4 = lVar4 + 0x108;
    } while (lVar4 != lVar3);
    puVar2 = *(undefined4 **)(param_1 + 0x9b0);
  }
  func_0x00010abf1954(param_1 + 0x860,param_1 + 0x20,puVar2 + 0x12);
  return;
}



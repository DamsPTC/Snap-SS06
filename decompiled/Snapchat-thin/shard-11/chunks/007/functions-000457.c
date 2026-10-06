/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108835258; end: 1088352ff;  */

long FUN_108835258(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar2 = param_3 + 0x20;
    FUN_108664d0c(lVar2,param_2);
    lVar1 = 8;
    if (-1 < (char)lVar2) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 108835300; end: 108835343;  */

long * FUN_108835300(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000108834df8(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 108835344; end: 1088353f3;  */

void FUN_108835344(void)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 uStack_11;
  
  FUN_108664d40(*unaff_x20,unaff_x20[1],*(undefined8 *)(unaff_x21 + 0x20),
                *(undefined8 *)(unaff_x21 + 0x28),&uStack_11);
  return;
}



/* Entry: 1088353f4; end: 108835423;  */

uint FUN_1088353f4(long param_1)

{
  uint uVar1;
  
  FUN_10883479c(param_1 + 8);
  uVar1 = 0;
  FUN_10867b1ac();
  return uVar1 & 1;
}



/* Entry: 108835424; end: 108835493;  */

bool FUN_108835424(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 8;
  uStack_38 = param_3;
  FUN_1088351d8();
  if (param_1 + 0x10 != lVar1) {
    FUN_10869b200(lVar1 + 0x38,&uStack_38);
    if (*(long *)(lVar1 + 0x50) == 0) {
      FUN_108835228(param_1 + 8,lVar1);
    }
  }
  return param_1 + 0x10 != lVar1;
}



/* Entry: 108835494; end: 108835527;  */

void FUN_108835494(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  func_0x000107c33cb0(*(undefined8 *)(**(long **)(param_1 + 0x30) + 0x48),*(long **)(param_1 + 0x30)
                      ,0x1d8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c27994(auStack_70,param_2);
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  FUN_108868694(uVar1,auStack_70);
  func_0x000107c33ca4();
  func_0x000108835e04();
  return;
}



/* Entry: 108835528; end: 108835587;  */

void FUN_108835528(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x000107c33cb4();
  puVar1 = (undefined4 *)(param_1 + 0x40);
  uStack_38 = param_3;
  FUN_108835588(puVar1,auStack_50);
  *puVar1 = (int)param_4;
  *(char *)(puVar1 + 1) = (char)((ulong)param_4 >> 0x20);
  func_0x000107c33ca4();
  return;
}



/* Entry: 108835588; end: 1088355bb;  */

long FUN_108835588(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108835984(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x30;
}



/* Entry: 1088355bc; end: 10883573b;  */

void FUN_1088355bc(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_40;
  long *plStack_38;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined3 uStack_2b;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 0x28) != '\x01') {
    return;
  }
  func_0x000107c33cb4();
  uStack_28 = *(undefined8 *)(param_2 + 0x20);
  plVar2 = (long *)(param_1 + 0x40);
  func_0x000107c29d38(plVar2,&plStack_40);
  func_0x000107c33ca4();
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x48);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
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
  lVar8 = *(long *)(param_1 + 0x40);
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  plStack_38 = (long *)(param_1 + 0x50);
  if (plVar6 == plStack_38) {
LAB_108835680:
    if (lVar3 == 0) {
LAB_1088356b4:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1088356bc;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_1088356b4;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_108835680;
LAB_1088356bc:
    if (lVar3 == 0) goto LAB_1088356f4;
    uVar9 = *(ulong *)(lVar3 + 8);
  }
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
    lVar3 = *plVar2;
  }
LAB_1088356f4:
  *plVar6 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
  uStack_30 = 1;
  uStack_2f = 0;
  uStack_2b = 0;
  plStack_40 = plVar2;
  FUN_108835db8(&plStack_40);
  return;
}



/* Entry: 10883573c; end: 10883573f;  */

undefined8 * FUN_10883573c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a79b00;
  plVar1 = (long *)param_1[10];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c27914(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[8];
  param_1[8] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c288a4(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000108834e20(param_1 + 1);
  return param_1;
}



/* Entry: 108835740; end: 10883576f;  */

void FUN_108835740(void)

{
  FUN_108835770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108835770; end: 1088357ef;  */

undefined8 * FUN_108835770(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a79b00;
  plVar1 = (long *)param_1[10];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c27914(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[8];
  param_1[8] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c288a4(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000108834e20(param_1 + 1);
  return param_1;
}



/* Entry: 1088357f0; end: 10883581f;  */

void FUN_1088357f0(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c33cbc();
  func_0x000107c3194c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 108835820; end: 10883583b;  */

void FUN_108835820(long param_1)

{
  FUN_10883583c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10883583c; end: 10883586f;  */

void FUN_10883583c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Entry: 108835870; end: 108835907;  */

long * FUN_108835870(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f4bd00c,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 108835908; end: 108835967;  */

void FUN_108835908(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_40 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_30 = param_1[4];
  uStack_38 = param_1[3];
  uStack_28 = *(undefined4 *)(param_1 + 5);
  FUN_1088357f0();
  FUN_1088357f0(param_2,&uStack_50);
  func_0x000107c33ca4();
  return;
}



/* Entry: 108835968; end: 108835983;  */

void FUN_108835968(long param_1)

{
  FUN_10883583c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 108835984; end: 108835d5b;  */

undefined1  [16] FUN_108835984(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x25;
  ulong uVar14;
  undefined1 auVar15 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar7 = param_2;
  FUN_108835d5c();
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar14 = uVar13 - 1;
    if ((uVar13 & uVar14) == 0) {
      unaff_x25 = uVar14 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar13 <= uVar7) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar7 / uVar13;
        }
        unaff_x25 = uVar7 - uVar5 * uVar13;
      }
    }
    plVar11 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_108835a48;
          uVar5 = plVar11[1];
          if (uVar5 != uVar7) break;
          plVar2 = plVar11 + 2;
          FUN_108835d84(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar4 = 0;
            goto LAB_108835d24;
          }
        }
        if ((uVar13 & uVar14) == 0) {
          uVar5 = uVar5 & uVar14;
        }
        else if (uVar13 <= uVar5) {
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar6 * uVar13;
        }
      } while (uVar5 == unaff_x25);
    }
  }
LAB_108835a48:
  plVar12 = (long *)*param_4;
  plVar2 = param_1 + 2;
  plVar11 = (long *)0x38;
  __Znwm();
  uStack_58 = 1;
  lVar3 = *plVar12;
  plVar11[3] = plVar12[1];
  plVar11[2] = lVar3;
  lVar3 = plVar12[3];
  plVar11[4] = plVar12[2];
  *plVar11 = 0;
  plVar11[1] = uVar7;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = 0;
  plVar11[5] = lVar3;
  *(undefined1 *)(plVar11 + 6) = 0;
  *(undefined1 *)((long)plVar11 + 0x34) = 0;
  plStack_60 = plVar2;
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_108835ca8;
  uVar14 = 1;
  if (2 < uVar13) {
    uVar14 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar14 = uVar14 | uVar13 << 1;
  uVar13 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar14 <= uVar13) {
    uVar14 = uVar13;
  }
  plStack_68 = plVar11;
  if (uVar14 - 1 == 0) {
    uVar14 = 2;
  }
  else if ((uVar14 & uVar14 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar13 = param_1[1];
  if (uVar13 < uVar14) {
LAB_108835b14:
    if (uVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108835d4c);
      (*pcVar1)();
    }
    lVar3 = uVar14 << 3;
    __Znwm(lVar3);
    func_0x000108835da0(param_1,lVar3);
    param_1[1] = uVar14;
    lVar3 = *param_1;
    for (uVar13 = 0; uVar14 != uVar13; uVar13 = uVar13 + 1) {
      *(undefined8 *)(lVar3 + uVar13 * 8) = 0;
    }
    plVar12 = (long *)*plVar2;
    uVar13 = uVar14;
    if (plVar12 != (long *)0x0) {
      uVar9 = plVar12[1];
      uVar6 = uVar14 - 1;
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar9 / uVar14;
      }
      uVar10 = uVar9;
      if (uVar14 <= uVar9) {
        uVar10 = uVar9 - uVar5 * uVar14;
      }
      if ((uVar14 & uVar6) == 0) {
        uVar10 = uVar9 & uVar6;
      }
      *(long **)(lVar3 + uVar10 * 8) = plVar2;
      while (plVar8 = plVar12, plVar12 = (long *)*plVar8, plVar12 != (long *)0x0) {
        uVar5 = plVar12[1];
        if ((uVar14 & uVar6) == 0) {
          uVar5 = uVar5 & uVar6;
        }
        else if (uVar14 <= uVar5) {
          uVar9 = 0;
          if (uVar14 != 0) {
            uVar9 = uVar5 / uVar14;
          }
          uVar5 = uVar5 - uVar9 * uVar14;
        }
        if (uVar5 != uVar10) {
          if (*(long *)(lVar3 + uVar5 * 8) == 0) {
            *(long **)(lVar3 + uVar5 * 8) = plVar8;
            uVar10 = uVar5;
          }
          else {
            *plVar8 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar3 + uVar5 * 8);
            **(long **)(lVar3 + uVar5 * 8) = (long)plVar12;
            plVar12 = plVar8;
          }
        }
      }
    }
  }
  else if (uVar14 < uVar13) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar14 <= uVar5) {
      uVar14 = uVar5;
    }
    if (uVar14 < uVar13) {
      if (uVar14 != 0) goto LAB_108835b14;
      func_0x000108835da0(param_1,0);
      param_1[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x25 = uVar13 - 1 & uVar7;
  }
  else {
    unaff_x25 = uVar7;
    if (uVar13 <= uVar7) {
      uVar14 = 0;
      if (uVar13 != 0) {
        uVar14 = uVar7 / uVar13;
      }
      unaff_x25 = uVar7 - uVar14 * uVar13;
    }
  }
LAB_108835ca8:
  lVar3 = *param_1;
  plVar12 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar11 = *plVar2;
    *plVar2 = (long)plVar11;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar2;
    if (*plVar11 != 0) {
      uVar7 = *(ulong *)(*plVar11 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar7 = uVar7 & uVar13 - 1;
      }
      else if (uVar13 <= uVar7) {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar7 / uVar13;
        }
        uVar7 = uVar7 - uVar14 * uVar13;
      }
      *(long **)(lVar3 + uVar7 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar12;
    *plVar12 = (long)plVar11;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_108835db8(&plStack_68);
  uVar4 = 1;
LAB_108835d24:
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = plVar11;
  return auVar15;
}



/* Entry: 108835d5c; end: 108835d83;  */

ulong FUN_108835d5c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_108848654();
  return *(ulong *)(param_1 + 0x18) ^ uVar1;
}



/* Entry: 108835d84; end: 108835db7;  */

bool FUN_108835d84(long *param_1,long *param_2)

{
  long lVar1;
  
  if (param_1[3] != param_2[3]) {
    return false;
  }
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    func_0x000107c610b0(lVar1,*param_2,param_1[1] - lVar1);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 108835db8; end: 108835dfb;  */

long * FUN_108835db8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 108835dfc; end: 108835e13;  */

void FUN_108835dfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108835e14; end: 108835f3f;  */

void FUN_108835e14(long *param_1,int param_2,uint param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_b0 [24];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  uStack_88 = 0;
  uStack_80 = 0;
  ppuStack_98 = &PTR_FUN_110a609a8;
  uStack_90 = 0;
  uStack_78 = 0x1d1;
  func_0x000107c278b8(auStack_b0,&DAT_10f6389e8);
  pppuVar1 = &ppuStack_98;
  func_0x000107c28824(pppuVar1,auStack_b0,(&PTR_DAT_110a79bc0)[param_2]);
  func_0x000107c278b8(auStack_48,PTR_DAT_113268c20);
  func_0x000107c28824(pppuVar1,auStack_48,(&PTR_s_success_113269028)[param_3 & 0x7f]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000107c2884c(auStack_70,pppuVar1);
  (**(code **)(*param_1 + 0x50))(param_1,auStack_70);
  func_0x000107c2882c(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  func_0x000107c2882c(&ppuStack_98);
  return;
}



/* Entry: 108835f40; end: 108835feb;  */

undefined8 * FUN_108835f40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a79b40;
  func_0x000107c27914(param_1 + 0x21);
  func_0x000107c29b80(param_1 + 0x1e);
  func_0x000107c289fc(param_1 + 0x1c);
  func_0x000107c2814c(param_1 + 0x1a);
  func_0x000107c29174(param_1 + 0x18);
  func_0x000107c29134(param_1 + 0x16);
  func_0x000107c288a4(param_1 + 0x14);
  func_0x000107c29bd0(param_1 + 0x12);
  func_0x000107c28ae4(param_1 + 0x10);
  func_0x000107c29bcc(param_1 + 0xe);
  func_0x000107c28808(param_1 + 0xc);
  func_0x000107c29190(param_1 + 10);
  func_0x000107c28ab4(param_1 + 8);
  func_0x000107c2959c(param_1 + 6);
  func_0x000107c27914(param_1 + 3);
  func_0x000107c29d3c(param_1 + 1);
  return param_1;
}



/* Entry: 108835fec; end: 108835fef;  */

undefined8 * FUN_108835fec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a79b40;
  func_0x000107c27914(param_1 + 0x21);
  func_0x000107c29b80(param_1 + 0x1e);
  func_0x000107c289fc(param_1 + 0x1c);
  func_0x000107c2814c(param_1 + 0x1a);
  func_0x000107c29174(param_1 + 0x18);
  func_0x000107c29134(param_1 + 0x16);
  func_0x000107c288a4(param_1 + 0x14);
  func_0x000107c29bd0(param_1 + 0x12);
  func_0x000107c28ae4(param_1 + 0x10);
  func_0x000107c29bcc(param_1 + 0xe);
  func_0x000107c28808(param_1 + 0xc);
  func_0x000107c29190(param_1 + 10);
  func_0x000107c28ab4(param_1 + 8);
  func_0x000107c2959c(param_1 + 6);
  func_0x000107c27914(param_1 + 3);
  func_0x000107c29d3c(param_1 + 1);
  return param_1;
}



/* Entry: 108835ff0; end: 108836003;  */

void FUN_108835ff0(void)

{
  FUN_108835f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108836004; end: 1088376cf;  */

void FUN_108836004(long param_1,uint param_2,undefined ***param_3,long param_4,undefined8 *param_5)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined8 extraout_x8;
  long lVar20;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  code *extraout_x8_12;
  undefined **ppuVar21;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  code *extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  undefined **extraout_x8_24;
  code *extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w9_07;
  int extraout_w9_08;
  int extraout_w9_09;
  int extraout_w9_10;
  int extraout_w9_11;
  int extraout_w9_12;
  int extraout_w9_13;
  int extraout_w9_14;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w11;
  ulong uVar22;
  uint uVar23;
  long *plVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [40];
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  long lStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined4 uStack_230;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_70;
  undefined ***pppuVar13;
  
  puVar17 = param_5;
  func_0x000107c33cc8();
  ppuVar10 = (undefined **)0x30;
  lStack_288 = param_4;
  uStack_70 = extraout_x8;
  __Znwm();
  ppuVar10[1] = (undefined *)0x0;
  ppuVar10[2] = (undefined *)0x0;
  *ppuVar10 = (undefined *)&PTR_SUB_110a79c40;
  ppuVar21 = ppuVar10 + 3;
  *ppuVar21 = (undefined *)&PTR_FUN_110a79c90;
  lVar20 = param_5[1];
  ppuVar29 = (undefined **)param_5[1];
  ppuVar28 = (undefined **)*param_5;
  ppuVar10[5] = (undefined *)ppuVar29;
  ppuVar10[4] = (undefined *)ppuVar28;
  if (lVar20 != 0) {
    do {
      func_0x000107c33cc4();
    } while (extraout_w10 != 0);
  }
  ppuStack_2a0 = ppuVar21;
  ppuStack_298 = ppuVar10;
  FUN_10886ba9c(&ppuStack_250,*(undefined8 *)(param_1 + 0x60),param_3,&lStack_288);
  FUN_10867b070(&lStack_2b8,&ppuStack_250);
  func_0x000107c28948(&ppuStack_250);
  uVar5 = lStack_2b8 == lStack_2b0;
  lVar20 = lStack_2b8;
  if ((bool)uVar5) {
    func_0x000108838aa0(*(undefined8 *)(param_1 + 0xa0),param_2,0x70);
    func_0x000108838b5c();
    do {
      func_0x000108838960();
    } while (extraout_w9 != 0);
    func_0x000107c28150();
    func_0x000108838b98();
    func_0x000108838a4c();
    lVar20 = *(long *)(lStack_2b0 + 0x70);
    func_0x000108838b50(0x1088383bc);
    do {
      func_0x000108838960();
    } while (extraout_w9_00 != 0);
    func_0x0001088389ac();
    func_0x00010883893c();
    func_0x000108838a44();
    if (lVar20 != 0) goto LAB_1088362e0;
    func_0x000108838918();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001088389fc();
    func_0x000108838a08();
    goto LAB_1088362dc;
  }
  for (; (lVar26 = lStack_2b0, lVar20 != lStack_2b0 &&
         (lVar26 = lVar20, *(long *)(lVar20 + 0x18) != lStack_288)); lVar20 = lVar20 + 0x1a8) {
  }
  uVar8 = (int)lVar26 + 0x50;
  func_0x000107c29e78();
  uVar5 = (uVar8 & 0xfffffffb) == 1;
  if (!(bool)uVar5) {
    func_0x000108838aa0(*(undefined8 *)(param_1 + 0xa0),param_2,0x71);
    func_0x000108838b5c();
    do {
      func_0x000108838960();
    } while (extraout_w9_01 != 0);
    func_0x000107c28150();
    func_0x000108838b98();
    func_0x000108838a4c();
    lVar20 = *(long *)(lVar26 + 0x70);
    func_0x000108838b50(0x1088383f4);
    do {
      func_0x000108838960();
    } while (extraout_w9_02 != 0);
    func_0x0001088389ac();
    func_0x00010883893c();
    func_0x000108838a44();
    if (lVar20 == 0) {
      func_0x000108838918();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_01 != 0);
      }
      func_0x0001088389fc();
      func_0x000108838a08();
      goto LAB_1088362dc;
    }
    goto LAB_1088362e0;
  }
  uVar22 = lVar26 + 0x50;
  func_0x000107c29eac();
  uVar14 = param_1 + 0x18;
  func_0x000107c28f14(uVar14,lVar26,*(undefined4 *)(*(long *)(param_1 + 0x50) + 8));
  uVar23 = (uint)uVar22;
  if (((uVar23 | (uint)uVar14 ^ 0xffffffff) & 1) == 0) {
    uVar18 = 1;
LAB_10883624c:
    uVar5 = param_2 == 0;
    if ((param_2 == 0) && (uVar18 != 0)) {
      func_0x000108838aa0(*(undefined8 *)(param_1 + 0xa0),0,0x72);
      func_0x000108838b5c();
      do {
        func_0x000108838960();
      } while (extraout_w9_03 != 0);
      func_0x000107c28150();
      func_0x000108838b98();
      func_0x000108838a4c();
      lVar20 = *(long *)(lVar26 + 0x70);
      func_0x000108838b50(0x10883842c);
      do {
        func_0x000108838960();
      } while (extraout_w9_04 != 0);
      func_0x0001088389ac();
      func_0x00010883893c();
      func_0x000108838a44();
      if (lVar20 == 0) {
        func_0x000108838918();
        if (extraout_x8_02 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_02 != 0);
        }
        func_0x0001088389fc();
        func_0x000108838a08();
        goto LAB_1088362dc;
      }
      goto LAB_1088362e0;
    }
  }
  else {
    func_0x000108838aa8();
    if ((uVar14 & 1) != 0) {
      func_0x000108838aec();
      func_0x000108838af8();
      uVar18 = (uint)uVar14 ^ 1;
      goto LAB_10883624c;
    }
  }
  uVar5 = *(long *)(lVar26 + 0x68) == 0;
  func_0x000108838c30();
  if ((int)uVar14 == 0) {
LAB_108836358:
    ppuVar1 = &PTR_PTR_113280c30;
    if (*(undefined ***)(lVar26 + 0x78) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar26 + 0x78);
    }
    uVar5 = param_2 == 3;
    if (3 < param_2) goto LAB_108836c64;
    uVar19 = (uint)(*(int *)((long)ppuVar1 + 0xac) == 3);
    uVar18 = uVar19 | uVar23;
    uVar22 = (ulong)uVar18;
    switch(param_2) {
    case 0:
      uVar5 = *(undefined ***)(lVar26 + 0x80) == (undefined **)0x0;
      ppuVar21 = &PTR_PTR_113286e08;
      if (!(bool)uVar5) {
        ppuVar21 = *(undefined ***)(lVar26 + 0x80);
      }
      func_0x000108838b10();
      func_0x000107c28f0c();
      func_0x000108838c74();
      lVar11 = lStack_288;
      iVar9 = *(int *)(ppuVar21 + 10);
      uVar12 = *(undefined8 *)(param_1 + 0x50);
      func_0x000108838c94(*(undefined8 *)(lVar26 + 0x68));
      lVar20 = extraout_x9 + 0xb58;
      if (!(bool)uVar5) {
        lVar20 = extraout_x8_03;
      }
      func_0x000107c29ee0(&ppuStack_280,lVar20);
      if (uVar23 == 0) {
        ppuStack_250 = (undefined **)((ulong)ppuStack_250 & 0xffffffffffffff00);
        ppuStack_238 = (undefined **)((ulong)ppuStack_238 & 0xffffffffffffff00);
      }
      else {
        func_0x000107c279d4(&ppuStack_250,lVar26 + 0x150);
      }
      ppuVar21 = &PTR_PTR_113280c30;
      if (*(undefined ***)(lVar26 + 0x78) != (undefined **)0x0) {
        ppuVar21 = *(undefined ***)(lVar26 + 0x78);
      }
      if (((*(byte *)(ppuVar21 + 2) >> 6 & 1) == 0) ||
         (bVar6 = *(int *)(ppuVar21[0x13] + 0x1c) == 1, !bVar6)) {
        bVar6 = false;
        uVar7 = 0;
      }
      else {
        func_0x000108838c94(*(undefined8 *)(lVar26 + 0x68));
        lVar20 = extraout_x9_00 + 0xb58;
        if (!bVar6) {
          lVar20 = extraout_x8_18;
        }
        func_0x000107c29ee0(&ppuStack_90,lVar20);
        pppuVar13 = &ppuStack_90;
        func_0x000107c2a620(pppuVar13,param_1 + 0x18);
        uVar7 = SUB81(pppuVar13,0);
        bVar6 = true;
      }
      uVar5 = uVar22 + (long)iVar9 * 8 == uVar14;
      FUN_108838ccc(uVar12,param_3,lVar11,&ppuStack_280,uVar8 == 5,uVar19 | uVar23 & 1,!(bool)uVar5,
                    &ppuStack_250,&ppuStack_360,uVar7);
      if (bVar6) {
        func_0x000108838b88();
      }
      func_0x000108838b70();
      func_0x000108838b00();
      ppuVar10 = ppuStack_298;
      ppuVar21 = ppuStack_2a0;
      if ((int)uVar12 != 0) {
        uVar5 = (int)ppuStack_360 == 1;
        if ((bool)uVar5) {
          uStack_2d0 = 0;
          uStack_2c8 = 0;
          ppuStack_2e0 = &PTR_FUN_110a609a8;
          uStack_2d8 = 0;
          uStack_2c0 = 0x1d2;
          (**(code **)(**(long **)(param_1 + 0xa0) + 0x50))
                    (*(long **)(param_1 + 0xa0),&ppuStack_2e0);
          func_0x000107c2882c(&ppuStack_2e0);
          func_0x000108838c88();
          ppuStack_248 = ppuStack_298;
          ppuStack_250 = ppuStack_2a0;
          if (ppuStack_298 != (undefined **)0x0) {
            do {
              func_0x000107c33cc4();
            } while (extraout_w10_15 != 0);
          }
          func_0x0001088389fc();
          func_0x000108838a80();
          func_0x000108838c3c();
          if (uVar23 != 0) {
            func_0x0001088389fc(*(undefined8 *)(param_1 + 0xf0));
            (*extraout_x8_19)();
code_r0x000108836f78:
            lVar20 = lStack_288;
            ppuStack_278 = (undefined **)0x0;
            puStack_270 = (undefined *)0x0;
            ppuStack_280 = (undefined **)0x0;
            uVar14 = (lStack_2b0 - lStack_2b8) / 0x1a8;
            uVar5 = uVar14 == 2;
            if (1 < uVar14) {
              FUN_10867d03c(&ppuStack_280,uVar14 - 1);
              for (lVar26 = lStack_2b8; lVar26 != lStack_2b0; lVar26 = lVar26 + 0x1a8) {
                if (*(long *)(lVar26 + 0x18) != lVar20) {
                  uVar14 = *(ulong *)(param_1 + 0x50);
                  func_0x000108838af8();
                  if ((uVar14 & 1) == 0) {
                    lVar11 = param_1 + 0x18;
                    func_0x000107c28f08(lVar11,lVar26 + 0x50);
                    lVar15 = param_1 + 0x18;
                    func_0x000107c28f10(lVar15,lVar26);
                    iVar9 = (int)lVar15;
                    ppuVar21 = &PTR_PTR_113286e08;
                    if (*(undefined ***)(lVar26 + 0x80) != (undefined **)0x0) {
                      ppuVar21 = *(undefined ***)(lVar26 + 0x80);
                    }
                    func_0x000108838b10();
                    func_0x000107c28f0c();
                    func_0x000108838c74();
                    iVar3 = *(int *)(ppuVar21 + 10);
                    bVar6 = *(undefined ***)(lVar26 + 0x78) == (undefined **)0x0;
                    ppuVar21 = &PTR_PTR_113280c30;
                    if (!bVar6) {
                      ppuVar21 = *(undefined ***)(lVar26 + 0x78);
                    }
                    iVar2 = *(int *)((long)ppuVar21 + 0xac);
                    uVar12 = *(undefined8 *)(param_1 + 0x50);
                    uVar27 = *(undefined8 *)(lVar26 + 0x18);
                    func_0x000108838c94(*(undefined8 *)(lVar26 + 0x68));
                    lVar16 = extraout_x9_01 + 0xb58;
                    if (!bVar6) {
                      lVar16 = extraout_x8_27;
                    }
                    func_0x000107c29ee0(&ppuStack_250,lVar16);
                    lVar16 = lVar26 + 0x50;
                    func_0x000107c29e78(lVar16);
                    FUN_108838ed8(uVar12,param_3,uVar27,&ppuStack_250,lVar26 + 0x150,
                                  (int)lVar16 == 5,iVar2 == 4,uVar22 + (long)iVar3 * 8 != lVar15,
                                  iVar9 + (int)lVar11);
                    func_0x000107c27914(&ppuStack_250);
                    if ((int)uVar12 != 0) {
                      FUN_10867b444(&ppuStack_280,lVar26);
                    }
                  }
                }
              }
              uVar5 = ppuStack_280 == ppuStack_278;
              if (!(bool)uVar5) {
                func_0x000108838c4c(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28));
              }
            }
            func_0x000108838bb0();
          }
        }
        else {
          if ((int)ppuStack_360 < 0) {
            uVar22 = *(ulong *)(param_1 + 0xd0);
            ppuStack_280 = ppuStack_2a0;
            ppuStack_278 = ppuStack_298;
            if (ppuStack_298 != (undefined **)0x0) {
              do {
                func_0x000107c33cc4();
              } while (extraout_w10_25 != 0);
            }
            func_0x000107c28150();
            lVar20 = *(long *)(uVar22 + 0x10);
            func_0x000108838a4c();
            lVar20 = *(long *)(lVar20 + 0x70);
            ppuStack_250 = (undefined **)0x10883849c;
            ppuStack_248 = &PTR_DAT_110a79d28;
            ppuStack_240 = ppuVar21;
            ppuStack_238 = ppuVar10;
            if (ppuVar10 != (undefined **)0x0) {
              do {
                func_0x000107c33cc4();
              } while (extraout_w10_26 != 0);
            }
            func_0x0001088389ac();
            func_0x00010883892c();
            func_0x000108838a44();
            if (lVar20 == 0) {
              func_0x000108838918();
              if (extraout_x8_26 != 0) {
                do {
                  func_0x000107c33cc4();
                } while (extraout_w10_27 != 0);
              }
              func_0x0001088389fc();
              func_0x000108838a08();
              func_0x000108838a10();
            }
            func_0x000108838c58();
          }
          else {
            plVar24 = *(long **)(param_1 + 0xa0);
            ppuStack_240 = (undefined **)0x0;
            ppuStack_238 = (undefined **)0x0;
            ppuStack_250 = &PTR_FUN_110a609a8;
            ppuStack_248 = (undefined **)0x0;
            uStack_230 = 0x1d3;
            func_0x000107c278b8(auStack_320,&UNK_10f4bd037);
            pppuVar13 = &ppuStack_250;
            func_0x000107c2881c(pppuVar13,auStack_320,(int)ppuStack_360 + -1);
            func_0x000107c2884c(auStack_308,pppuVar13);
            (**(code **)(*plVar24 + 0x50))(plVar24,auStack_308);
            func_0x000107c2882c(auStack_308);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_320);
            pppuVar13 = &ppuStack_250;
            func_0x000107c2882c();
            func_0x000108838c88();
            ppuStack_248 = ppuStack_298;
            ppuStack_250 = ppuStack_2a0;
            if (ppuStack_298 != (undefined **)0x0) {
              do {
                func_0x000107c33cc4();
              } while (extraout_w10_24 != 0);
            }
            (*(code *)(*pppuVar13)[3])();
            func_0x000108838c3c();
          }
          if (uVar23 != 0) goto code_r0x000108836f78;
        }
        goto LAB_108836c64;
      }
      func_0x000108838aa0(*(undefined8 *)(param_1 + 0xa0),0,0x73);
      func_0x0001088389fc();
      func_0x000108838c44();
      ppuVar10 = ppuStack_298;
      ppuVar21 = ppuStack_2a0;
      lVar20 = *(long *)(param_1 + 0xd0);
      ppuStack_280 = ppuStack_2a0;
      ppuStack_278 = ppuStack_298;
      if (ppuStack_298 != (undefined **)0x0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_16 != 0);
      }
      func_0x000107c28150();
      lVar20 = *(long *)(lVar20 + 0x10);
      func_0x000108838a3c();
      lVar20 = *(long *)(lVar20 + 0x70);
      ppuStack_250 = (undefined **)0x1088384d4;
      ppuStack_248 = &PTR_DAT_110a79d40;
      ppuStack_240 = ppuVar21;
      ppuStack_238 = ppuVar10;
      if (ppuVar10 != (undefined **)0x0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_17 != 0);
      }
      func_0x0001088389a0();
      func_0x00010883893c();
      func_0x000108838a20();
      if (lVar20 == 0) {
        func_0x000108838918();
        if (extraout_x8_20 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_18 != 0);
        }
        func_0x0001088389fc();
        func_0x000108838a08();
LAB_1088362dc:
        func_0x000108838a10();
      }
LAB_1088362e0:
      func_0x000108838c58();
      break;
    case 1:
      ppuStack_360 = (undefined **)((ulong)ppuStack_360 & 0xffffffff00000000);
      func_0x000108838aec();
      iVar9 = (int)uVar14;
      FUN_10883911c();
      if (iVar9 == 0) {
        func_0x000108838aa0(*(undefined8 *)(param_1 + 0xa0),1,0x74);
        uStack_338 = 0;
        uStack_330 = 0;
        ppuStack_348 = &PTR_FUN_110a609a8;
        uStack_340 = 0;
        uStack_328 = 0x1d2;
        (**(code **)(**(long **)(param_1 + 0xa0) + 0x50))(*(long **)(param_1 + 0xa0),&ppuStack_348);
        uVar22 = 0;
        func_0x000107c2882c();
        func_0x000108838aa8();
        if ((uVar22 & 1) != 0) {
          func_0x000108838b5c();
          do {
            func_0x000108838960();
          } while (extraout_w9_12 != 0);
          func_0x000107c28150();
          func_0x000108838b98();
          func_0x000108838a4c();
          lVar20 = *(long *)(lVar26 + 0x70);
          func_0x000108838b50(0x108838558);
          do {
            func_0x000108838960();
          } while (extraout_w9_13 != 0);
          func_0x0001088389ac();
          func_0x00010883893c();
          func_0x000108838a44();
          if (lVar20 == 0) {
            func_0x000108838918();
            if (extraout_x8_17 != 0) {
              do {
                func_0x000107c33cc4();
              } while (extraout_w10_14 != 0);
            }
            func_0x0001088389fc();
            func_0x000108838a08();
            goto LAB_1088362dc;
          }
          goto LAB_1088362e0;
        }
        func_0x000108838c88();
        ppuStack_250 = ppuVar21;
        ppuStack_248 = ppuVar10;
        do {
          func_0x000108838960();
        } while (extraout_w9_14 != 0);
        func_0x0001088389fc();
        func_0x000108838a80();
        func_0x000108838c3c();
        break;
      }
      plVar24 = *(long **)(param_1 + 0x40);
      func_0x000108838b78(&ppuStack_280);
      pppuVar13 = &ppuStack_280;
      func_0x000108838b08(&ppuStack_250);
      func_0x000108838c1c(*(undefined8 *)(*plVar24 + 200));
      func_0x000108838ab4();
      func_0x000108838b00();
      func_0x0001088389fc(*(undefined8 *)(param_1 + 0x90));
      func_0x000108838c44();
      ppuStack_90 = (undefined **)0x0;
      ppuStack_88 = (undefined **)0x0;
      puStack_80 = (undefined4 *)0x0;
      if ((uVar18 & 1 < (int)ppuStack_360) == 1) {
        iVar9 = (int)*(undefined8 *)(param_1 + 0xc0);
        func_0x0001088389fc();
        (*extraout_x8_12)();
        pppuVar13 = param_3;
        if (iVar9 == 0) goto code_r0x000108836c74;
        ppuVar10 = (undefined **)0x1;
        FUN_108838248();
        ppuVar21 = (undefined **)((long)ppuVar10 + 4);
        *(undefined4 *)ppuVar10 = 0;
        puStack_80 = (undefined4 *)((long)ppuVar10 + (long)param_3 * 4);
        ppuStack_90 = ppuVar10;
        ppuStack_88 = ppuVar21;
      }
      else {
code_r0x000108836c74:
        param_3 = pppuVar13;
        ppuVar21 = (undefined **)0x0;
        ppuVar10 = (undefined **)0x0;
      }
      lVar20 = *(long *)(param_1 + 0xd0);
      ppuStack_278 = (undefined **)puVar17[1];
      ppuStack_280 = (undefined **)*puVar17;
      if (puVar17[1] != 0) {
        do {
          func_0x000107c33cd4();
          ppuVar21 = extraout_x8_24;
        } while (extraout_w11 != 0);
      }
      ppuStack_250 = &puStack_270;
      puStack_270 = (undefined *)0x0;
      puStack_268 = (undefined *)0x0;
      puStack_260 = (undefined *)0x0;
      ppuStack_248 = (undefined **)((ulong)ppuStack_248 & 0xffffffffffffff00);
      lVar26 = (long)ppuVar21 - (long)ppuVar10;
      uVar5 = lVar26 == 0;
      if (!(bool)uVar5) {
        puVar25 = (undefined *)(lVar26 >> 2);
        if ((ulong)puVar25 >> 0x3e != 0) goto code_r0x0001088370f4;
        FUN_108838248();
        puStack_260 = puVar25 + (long)param_3 * 4;
        puStack_270 = puVar25;
        puStack_268 = puVar25;
        _memmove();
        puStack_268 = puVar25 + lVar26;
      }
      ppuStack_248 = (undefined **)CONCAT71(ppuStack_248._1_7_,1);
      func_0x00010883827c();
      func_0x000107c28150();
      lVar26 = *(long *)(lVar20 + 0x10);
      func_0x000108838a3c();
      lVar26 = *(long *)(lVar26 + 0x70);
      ppuStack_250 = (undefined **)0x10883850c;
      ppuStack_248 = &PTR_FUN_110a79d58;
      ppuVar21 = (undefined **)0x28;
      __Znwm();
      ppuVar21[1] = (undefined *)ppuStack_278;
      *ppuVar21 = (undefined *)ppuStack_280;
      if (ppuStack_278 != (undefined **)0x0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_22 != 0);
      }
      ppuVar21[3] = puStack_268;
      ppuVar21[2] = puStack_270;
      ppuVar21[4] = puStack_260;
      puStack_268 = (undefined *)0x0;
      puStack_260 = (undefined *)0x0;
      puStack_270 = (undefined *)0x0;
      ppuStack_240 = ppuVar21;
      func_0x0001088389a0();
      (*(code *)*ppuStack_248)(&ppuStack_248);
      func_0x000108838a20();
      if (lVar26 == 0) {
        ppuStack_248 = *(undefined ***)(lVar20 + 0x18);
        ppuStack_250 = *(undefined ***)(lVar20 + 0x10);
        if (*(long *)(lVar20 + 0x18) != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_23 != 0);
        }
        func_0x0001088389fc();
        func_0x000108838a08();
        func_0x000108838a10();
      }
      uVar8 = 0;
      func_0x000108837710();
      func_0x000108838aec();
      func_0x000107c29d5c();
      uVar23 = uVar8;
      func_0x000108838aec();
      func_0x0001088389fc();
      func_0x000108838c44();
      if (((uVar8 | uVar23) & 1) == 0) {
        func_0x0001088389fc(*(undefined8 *)(param_1 + 0xb0));
        (*extraout_x8_25)();
      }
      FUN_1088382a8(&ppuStack_90);
      goto LAB_108836c64;
    case 2:
      goto LAB_10883645c;
    case 3:
      func_0x000108838aec();
      iVar9 = (int)uVar14;
      func_0x000108838af8();
      if (iVar9 != 0) {
        func_0x000108838b5c();
        do {
          func_0x000108838960();
        } while (extraout_w9_07 != 0);
        func_0x000107c28150();
        func_0x000108838b98();
        func_0x000108838a4c();
        lVar20 = *(long *)(lVar26 + 0x70);
        func_0x000108838b50(0x108838590);
        do {
          func_0x000108838960();
        } while (extraout_w9_08 != 0);
        func_0x0001088389ac();
        func_0x00010883893c();
        func_0x000108838a44();
        if (lVar20 == 0) {
          func_0x000108838918();
          if (extraout_x8_11 != 0) {
            do {
              func_0x000107c33cc4();
            } while (extraout_w10_09 != 0);
          }
          func_0x0001088389fc();
          func_0x000108838a08();
          goto LAB_1088362dc;
        }
        goto LAB_1088362e0;
      }
      func_0x000108838c88();
      ppuStack_250 = ppuVar21;
      ppuStack_248 = ppuVar10;
      do {
        func_0x000108838960();
      } while (extraout_w9_11 != 0);
      func_0x0001088389fc();
      func_0x000108838a80();
      pppuVar13 = &ppuStack_250;
      goto LAB_108836c5c;
    }
  }
  else {
    if (param_2 == 0) {
      func_0x000108838aec();
      func_0x000108838af8();
      if ((uVar14 & 1) == 0) {
        func_0x000108838b5c();
        do {
          func_0x000108838960();
        } while (extraout_w9_09 != 0);
        func_0x000107c28150();
        func_0x000108838b98();
        func_0x000108838a4c();
        lVar20 = *(long *)(lVar26 + 0x70);
        func_0x000108838b50(0x108838464);
        do {
          func_0x000108838960();
        } while (extraout_w9_10 != 0);
        func_0x0001088389ac();
        func_0x00010883893c();
        func_0x000108838a44();
        if (lVar20 == 0) {
          func_0x000108838918();
          if (extraout_x8_13 != 0) {
            do {
              func_0x000107c33cc4();
            } while (extraout_w10_10 != 0);
          }
          func_0x0001088389fc();
          func_0x000108838a08();
          goto LAB_1088362dc;
        }
        goto LAB_1088362e0;
      }
    }
    uVar5 = param_2 == 2;
    if (!(bool)uVar5 || (uVar22 & 1) != 0) goto LAB_108836358;
    func_0x000108838aa8();
    if ((uVar14 & 1) == 0) {
      func_0x000108838aec();
      func_0x000108838af8();
      if ((uVar14 & 1) == 0) {
        func_0x000108838aec();
        uVar5 = uVar8 == 5;
        ppuStack_250 = (undefined **)((ulong)ppuStack_250 & 0xffffffffffffff00);
        ppuStack_238 = (undefined **)((ulong)ppuStack_238 & 0xffffffffffffff00);
        FUN_108839024();
        func_0x000108838b70();
      }
    }
LAB_10883645c:
    lVar20 = lStack_288;
    ppuStack_90 = ppuVar21;
    ppuStack_88 = ppuVar10;
    if (uVar23 == 0) {
      do {
        func_0x000108838960();
      } while (extraout_w9_06 != 0);
      uVar12 = *(undefined8 *)(param_1 + 0x50);
      FUN_10883977c(uVar12,param_3,lVar20);
      if ((int)uVar12 == 0) {
        func_0x000108838a8c();
        if (extraout_x8_14 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_11 != 0);
        }
        func_0x000107c28150();
        func_0x000108838ba4();
        func_0x000108838a3c();
        puVar25 = ppuVar10[0xe];
        func_0x0001088389d0(0x10883879c);
        if (extraout_x8_15 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_12 != 0);
        }
        func_0x000108838cb4();
        func_0x0001088389a0();
        func_0x00010883892c();
        func_0x000108838a20();
        if (puVar25 == (undefined *)0x0) {
          func_0x000108838918();
          if (extraout_x8_16 != 0) {
            do {
              func_0x000107c33cc4();
            } while (extraout_w10_13 != 0);
          }
          func_0x0001088389fc();
          func_0x000108838a08();
          goto LAB_1088368f8;
        }
      }
      else {
        plVar24 = *(long **)(param_1 + 0x40);
        func_0x000108838b78(&ppuStack_280);
        func_0x000108838b08(&ppuStack_250,&ppuStack_280);
        (**(code **)(*plVar24 + 200))(plVar24,&ppuStack_250);
        func_0x000108838ab4();
        func_0x000108838b00();
        func_0x0001088389fc(*(undefined8 *)(param_1 + 0x90));
        (*extraout_x8_04)();
        func_0x000108838a8c();
        if (extraout_x8_05 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_03 != 0);
        }
        func_0x000107c28150();
        func_0x000108838ba4();
        func_0x000108838a3c();
        lVar20 = plVar24[0xe];
        func_0x0001088389d0(0x108838764);
        if (extraout_x8_06 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_04 != 0);
        }
        func_0x000108838cb4();
        func_0x0001088389a0();
        func_0x00010883892c();
        func_0x000108838a20();
        if (lVar20 == 0) {
          func_0x000108838918();
          if (extraout_x8_07 != 0) {
            do {
              func_0x000107c33cc4();
            } while (extraout_w10_05 != 0);
          }
          func_0x0001088389fc();
          func_0x000108838a08();
LAB_1088368f8:
          func_0x000108838a10();
        }
      }
      func_0x000108838ad4();
      pppuVar13 = &ppuStack_90;
    }
    else {
      do {
        ppuStack_358 = ppuVar10;
        ppuStack_360 = ppuVar21;
        func_0x000108838960();
        ppuVar21 = ppuStack_360;
        ppuVar10 = ppuStack_358;
      } while (extraout_w9_05 != 0);
      func_0x000108838c94(*(undefined8 *)(lStack_2b8 + 0x68));
      func_0x000108838c30();
      lVar20 = lStack_2b8 + 0x50;
      func_0x000107c29e78(lVar20);
      ppuStack_280 = (undefined **)0x0;
      ppuStack_278 = (undefined **)0x0;
      puStack_270 = (undefined *)0x0;
      FUN_10867d03c(&ppuStack_280,(lStack_2b0 - lStack_2b8) / 0x1a8);
      for (lVar26 = lStack_2b8; lVar26 != lStack_2b0; lVar26 = lVar26 + 0x1a8) {
        if ((int)uVar14 != 0) {
          lVar11 = param_1 + 0x18;
          func_0x000107c28f10(lVar11,lVar26);
          FUN_108839024(*(undefined8 *)(param_1 + 0x50),param_3,*(undefined8 *)(lVar26 + 0x18),
                        param_1 + 0x18,(int)lVar20 == 5,lVar26 + 0x150,(int)lVar11 + 1);
        }
        uVar12 = *(undefined8 *)(param_1 + 0x50);
        FUN_10883977c(uVar12,param_3,*(undefined8 *)(lVar26 + 0x18));
        if ((int)uVar12 != 0) {
          FUN_1086a125c(&ppuStack_250,*(undefined8 *)(param_1 + 0x60),lVar26);
          FUN_10867b444(&ppuStack_280,&ppuStack_250);
          func_0x000107c288e0(&ppuStack_250);
        }
      }
      uVar5 = ppuStack_280 == ppuStack_278;
      if ((bool)uVar5) {
        func_0x000108838bd0();
        ppuStack_90 = ppuVar28;
        ppuStack_88 = ppuVar29;
        if (extraout_x8_21 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_19 != 0);
        }
        func_0x000107c28150();
        func_0x000108838ba4();
        func_0x000108838a3c();
        func_0x000108838be0(0x108838844);
        if (extraout_x8_22 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_20 != 0);
        }
        func_0x000108838cb4();
        func_0x0001088389a0();
        func_0x00010883892c();
        func_0x000108838a20();
        if (uVar14 == 0) {
          func_0x000108838918();
          if (extraout_x8_23 != 0) {
            do {
              func_0x000107c33cc4();
            } while (extraout_w10_21 != 0);
          }
          func_0x0001088389fc();
          func_0x000108838a08();
          goto LAB_108836c48;
        }
      }
      else {
        plVar24 = *(long **)(param_1 + 0x40);
        func_0x000108838b78(&ppuStack_90);
        func_0x000108838b08(&ppuStack_250,&ppuStack_90);
        func_0x000108838c1c(*(undefined8 *)(*plVar24 + 200));
        func_0x000108838ab4();
        func_0x000108838b88();
        func_0x000108838c4c(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28));
        func_0x000108838bd0();
        ppuStack_90 = ppuVar28;
        ppuStack_88 = ppuVar29;
        if (extraout_x8_08 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_06 != 0);
        }
        func_0x000107c28150();
        func_0x000108838ba4();
        func_0x000108838a3c();
        func_0x000108838be0(0x10883880c);
        if (extraout_x8_09 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_07 != 0);
        }
        func_0x000108838cb4();
        func_0x0001088389a0();
        func_0x00010883892c();
        func_0x000108838a20();
        if (plVar24 == (long *)0x0) {
          func_0x000108838918();
          if (extraout_x8_10 != 0) {
            do {
              func_0x000107c33cc4();
            } while (extraout_w10_08 != 0);
          }
          func_0x0001088389fc();
          func_0x000108838a08();
LAB_108836c48:
          func_0x000108838a10();
        }
      }
      func_0x000104be3970(&ppuStack_90);
      func_0x000108838bb0();
      pppuVar13 = &ppuStack_360;
    }
LAB_108836c5c:
    func_0x000104be3970(pppuVar13);
LAB_108836c64:
    func_0x000108838aa0(*(undefined8 *)(param_1 + 0xa0),param_2,0x6f);
  }
  func_0x00010867b9fc(&lStack_2b8);
  func_0x000108837738(&ppuStack_2a0);
  func_0x000107c33cc0(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
code_r0x0001088370f4:
  FUN_108838234();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1088370fc);
  (*pcVar4)();
}



/* Entry: 1088376d0; end: 10883775f;  */

ulong FUN_1088376d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x18;
  func_0x000107c287fc();
  if ((int)uVar1 != 0) {
    func_0x0001006760a8(param_3,param_1 + 0x108);
    return (ulong)((uint)param_3 ^ 1);
  }
  return uVar1;
}



/* Entry: 108837760; end: 108837c9b;  */

void FUN_108837760(long param_1,long param_2,long *param_3,long *param_4,long *param_5,long *param_6
                  )

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  undefined8 extraout_x8_18;
  code *extraout_x8_19;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x24;
  long lVar13;
  long *unaff_x25;
  long *unaff_x26;
  long lVar14;
  undefined **in_register_00005008;
  undefined **ppuVar15;
  long lStack_5d0;
  long lStack_5c8;
  undefined4 uStack_5c0;
  long lStack_5b0;
  undefined **ppuStack_5a8;
  long lStack_5a0;
  long lStack_598;
  undefined4 uStack_590;
  long *plStack_580;
  undefined8 uStack_578;
  long lStack_570;
  long *plStack_568;
  long *plStack_560;
  long *plStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined1 **ppuStack_540;
  code *pcStack_538;
  undefined **ppuStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined4 uStack_508;
  long lStack_500;
  undefined **ppuStack_4f8;
  undefined4 uStack_4f0;
  long lStack_4e0;
  undefined **ppuStack_4d8;
  undefined4 uStack_4c0;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  long lStack_490;
  long *plStack_488;
  long *plStack_480;
  long *plStack_478;
  long lStack_470;
  long *plStack_468;
  undefined1 *puStack_460;
  code *pcStack_458;
  long alStack_448 [3];
  long lStack_430;
  undefined **ppuStack_428;
  undefined4 uStack_420;
  undefined8 uStack_418;
  long *plStack_410;
  char cStack_408;
  char cStack_288;
  long lStack_280;
  undefined **ppuStack_278;
  long lStack_260;
  undefined **ppuStack_258;
  long lStack_250;
  undefined **ppuStack_248;
  undefined4 uStack_240;
  long *plStack_230;
  long lStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar6 = param_3;
  plVar8 = param_4;
  func_0x000107c33cc8();
  uStack_68 = extraout_x8;
  if ((int)plVar6 == 0) {
    bVar1 = true;
LAB_1088377cc:
    unaff_x26 = &lStack_280;
    plVar8 = param_5;
    FUN_108862cf0(&lStack_260,*(undefined8 *)(param_2 + 0x60),param_4);
    func_0x000107c28998(&lStack_430,&lStack_260);
    func_0x000107c28948(&lStack_260);
    uVar2 = cStack_288 == '\x01';
    if (((bool)uVar2) && (uVar2 = cStack_408 == '\x01', (bool)uVar2)) {
      uVar4 = *(undefined8 *)(param_2 + 0x80);
      if (bVar1) {
        FUN_1088353f4(uVar4,param_4);
        iVar3 = (int)uVar4;
      }
      else {
        FUN_108835424(uVar4,param_4,plStack_410);
        iVar3 = (int)uVar4;
      }
      uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x60) + 0x18);
      func_0x000107c278b8(alStack_448,"");
      plVar8 = alStack_448;
      func_0x000107c31420(&lStack_260,uVar4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_448);
      if (bVar1) {
LAB_108837938:
        if (iVar3 != 0) goto LAB_108837954;
      }
      else {
        uVar5 = *(ulong *)(param_2 + 0x80);
        plVar8 = plStack_410;
        func_0x000107c29d14(uVar5,param_4);
        if ((uVar5 >> 0x20 != 0) && (uVar2 = (int)param_3 == (int)uVar5, (bool)uVar2))
        goto LAB_108837938;
        FUN_108835494(*(undefined8 *)(param_2 + 0x80),param_4,uStack_418,plStack_410,param_3);
LAB_108837954:
        param_3 = *(long **)(param_2 + 0x40);
        func_0x000108838b78(&lStack_280);
        func_0x000108838b08(&lStack_a0,&lStack_280);
        (**(code **)(*param_3 + 200))(param_3,&lStack_a0);
        func_0x000107c27a04(&lStack_a0);
        func_0x000107c27914(&lStack_280);
        func_0x0001088389fc(*(undefined8 *)(param_2 + 0x90));
        plVar8 = param_5;
        (*extraout_x8_03)();
      }
      func_0x000107c31428(&lStack_260);
      func_0x000108838a5c();
      lStack_280 = param_1;
      ppuStack_278 = in_register_00005008;
      if (extraout_x8_04 != 0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c28150();
      func_0x000108838cc0();
      func_0x000108838bb8();
      unaff_x24 = param_3[0xe];
      lStack_a0 = 0x108838604;
      ppuStack_98 = &PTR_DAT_110a79db8;
      ppuStack_88 = ppuStack_278;
      lStack_90 = lStack_280;
      param_1 = lStack_280;
      in_register_00005008 = ppuStack_278;
      if (ppuStack_278 != (undefined **)0x0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_03 != 0);
      }
      unaff_x25 = &lStack_a0;
      plVar6 = &lStack_a0;
      plStack_70 = param_5;
      func_0x000107c28154(param_3 + 9);
      func_0x0001088389b8(ppuStack_98);
      func_0x000108838a54();
      if (unaff_x24 == 0) {
        func_0x000108838adc();
        lStack_a0 = param_1;
        ppuStack_98 = in_register_00005008;
        if (extraout_x8_05 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_04 != 0);
        }
        func_0x0001088389fc();
        plVar6 = &lStack_a0;
        (*extraout_x8_06)();
        func_0x000107c27e74(&lStack_a0);
      }
      func_0x000104be3970(&lStack_280);
      func_0x000107c31424(&lStack_260);
    }
    else {
      func_0x000108838a5c();
      lStack_a0 = param_1;
      ppuStack_98 = in_register_00005008;
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10 != 0);
      }
      func_0x000107c28150();
      func_0x000108838cc0();
      func_0x000108838bb8();
      unaff_x24 = param_3[0xe];
      lStack_260 = 0x10883863c;
      ppuStack_258 = &PTR_DAT_110a79dd0;
      ppuStack_248 = ppuStack_98;
      lStack_250 = lStack_a0;
      param_1 = lStack_a0;
      in_register_00005008 = ppuStack_98;
      if (ppuStack_98 != (undefined **)0x0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_00 != 0);
      }
      unaff_x25 = &lStack_260;
      plVar6 = &lStack_260;
      plStack_230 = param_5;
      func_0x000107c28154(param_3 + 9);
      func_0x0001088389b8(ppuStack_258);
      func_0x000108838a54();
      if (unaff_x24 == 0) {
        func_0x000108838adc();
        lStack_260 = param_1;
        ppuStack_258 = in_register_00005008;
        if (extraout_x8_01 != 0) {
          do {
            func_0x000107c33cc4();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001088389fc();
        plVar6 = &lStack_260;
        (*extraout_x8_02)();
        func_0x000108838b30();
      }
      func_0x000104be3970(&lStack_a0);
    }
    func_0x000107c288dc(&lStack_430);
  }
  else {
    if ((int)param_3 == 2) {
      bVar1 = false;
      param_3 = (long *)0x1;
      goto LAB_1088377cc;
    }
    uVar2 = 0;
    if ((int)param_3 == 1) {
      param_3 = (long *)0x0;
      bVar1 = false;
      goto LAB_1088377cc;
    }
  }
  while( true ) {
    func_0x000107c33cc0(uStack_68);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108838a28();
    func_0x000107c27e74(&lStack_a0);
    func_0x000104be3970(&lStack_280);
    func_0x000107c31424(&lStack_260);
    func_0x000107c288dc(&lStack_430);
    uVar2 = (int)param_4 == 1;
    if (!(bool)uVar2) break;
    ___cxa_begin_catch();
    func_0x000108848514();
    param_2 = *(long *)(param_2 + 0xd0);
    ppuStack_428 = (undefined **)param_6[1];
    lStack_430 = *param_6;
    if (param_6[1] != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_05 != 0);
    }
    uStack_420 = SUB84(param_5,0);
    func_0x000107c28150();
    param_4 = *(long **)(param_2 + 0x10);
    __ZNSt3__15mutex4lockEv(param_4 + 1);
    plVar11 = (long *)param_4[0xe];
    lStack_260 = 0x108838684;
    ppuStack_258 = &PTR_DAT_110a79de8;
    unaff_x26[7] = (long)ppuStack_428;
    unaff_x26[6] = lStack_430;
    param_1 = lStack_430;
    in_register_00005008 = ppuStack_428;
    if (ppuStack_428 != (undefined **)0x0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_06 != 0);
    }
    param_3 = &lStack_260;
    uStack_240 = uStack_420;
    plVar6 = &lStack_260;
    plStack_230 = param_5;
    func_0x000107c28154(param_4 + 9);
    func_0x0001088389e4(ppuStack_258);
    func_0x000108838b68();
    if (plVar11 == (long *)0x0) {
      func_0x000108838bc0();
      unaff_x26[5] = (long)in_register_00005008;
      unaff_x26[4] = param_1;
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_07 != 0);
      }
      func_0x0001088389fc();
      plVar6 = &lStack_260;
      (*extraout_x8_08)();
      func_0x000108838b30();
    }
    func_0x000104be3970(&lStack_430);
    ___cxa_end_catch();
    param_6 = param_5;
    param_5 = plVar11;
  }
  __Unwind_Resume(param_5);
  plVar9 = param_5;
  func_0x000104bd46a0();
  pcStack_458 = FUN_108837c9c;
  plVar11 = plVar9;
  plVar10 = plVar8;
  plStack_4a0 = unaff_x26;
  plStack_498 = unaff_x25;
  lStack_490 = unaff_x24;
  plStack_488 = param_3;
  plStack_480 = param_4;
  plStack_478 = param_5;
  lStack_470 = param_2;
  plStack_468 = param_6;
  puStack_460 = &stack0xfffffffffffffff0;
  func_0x000107c33cc8();
  uStack_518 = 0;
  uStack_510 = 0;
  ppuStack_528 = &PTR_FUN_110a609a8;
  uStack_520 = 0;
  uStack_508 = 0x1d4;
  uStack_4a8 = extraout_x8_09;
  (**(code **)(*(long *)plVar11[0x14] + 0x50))((long *)plVar11[0x14],&ppuStack_528);
  func_0x000107c2882c(&ppuStack_528);
  iVar3 = (int)plVar9[10];
  plVar11 = plVar6;
  FUN_108839610();
  plStack_4b0 = plVar6;
  if (iVar3 == 0) {
    func_0x000108838a5c();
    lStack_500 = param_1;
    ppuStack_4f8 = in_register_00005008;
    if (extraout_x8_13 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_11 != 0);
    }
    func_0x000107c28150();
    func_0x000108838cc0();
    func_0x000108838bb8();
    lVar13 = param_3[0xe];
    func_0x000108838a6c(0x1088386f4);
    if (extraout_x8_14 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_12 != 0);
    }
    func_0x000108838c14(param_3 + 9);
    func_0x0001088389b8(ppuStack_4d8);
    func_0x000108838a54();
    if (lVar13 != 0) goto LAB_108837e74;
    func_0x000108838adc();
    lStack_4e0 = param_1;
    ppuStack_4d8 = in_register_00005008;
    if (extraout_x8_15 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_13 != 0);
    }
    func_0x0001088389fc();
    func_0x000108838c0c();
  }
  else {
    param_4 = (long *)plVar9[8];
    func_0x000107c27994(&lStack_500,plVar6);
    func_0x000108838b08(&lStack_4e0,&lStack_500);
    plVar11 = &lStack_4e0;
    (**(code **)(*param_4 + 200))(param_4);
    func_0x000107c27a04(&lStack_4e0);
    func_0x000107c27914(&lStack_500);
    func_0x000108838a5c();
    lStack_500 = param_1;
    ppuStack_4f8 = in_register_00005008;
    if (extraout_x8_10 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_08 != 0);
    }
    func_0x000107c28150();
    func_0x000108838cc0();
    func_0x000108838bb8();
    lVar13 = param_3[0xe];
    func_0x000108838a6c(0x1088386bc);
    if (extraout_x8_11 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_09 != 0);
    }
    func_0x000108838c14(param_3 + 9);
    func_0x0001088389b8(ppuStack_4d8);
    func_0x000108838a54();
    if (lVar13 != 0) goto LAB_108837e74;
    func_0x000108838adc();
    lStack_4e0 = param_1;
    ppuStack_4d8 = in_register_00005008;
    if (extraout_x8_12 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_10 != 0);
    }
    func_0x0001088389fc();
    func_0x000108838c0c();
  }
  func_0x000108838b48();
LAB_108837e74:
  func_0x000108838b90();
  while( true ) {
    func_0x000107c33cc0(uStack_4a8);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108838a28();
    func_0x000108838b48();
    func_0x000108838b90();
    uVar2 = (int)param_4 == 1;
    if (!(bool)uVar2) break;
    ___cxa_begin_catch();
    func_0x000108848514();
    plVar9 = (long *)plVar9[0x1a];
    ppuVar15 = (undefined **)plVar8[1];
    lVar14 = *plVar8;
    lStack_500 = lVar14;
    ppuStack_4f8 = ppuVar15;
    if (plVar8[1] != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_14 != 0);
    }
    uStack_4f0 = SUB84(plVar6,0);
    func_0x000107c28150();
    param_4 = (long *)plVar9[2];
    __ZNSt3__15mutex4lockEv(param_4 + 1);
    plVar12 = (long *)param_4[0xe];
    func_0x000108838a6c(0x10883872c);
    if (extraout_x8_16 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_15 != 0);
    }
    param_3 = &lStack_4e0;
    uStack_4c0 = uStack_4f0;
    plStack_4b0 = plVar6;
    func_0x000108838c14(param_4 + 9);
    func_0x0001088389e4(ppuStack_4d8);
    func_0x000108838b68();
    if (plVar12 == (long *)0x0) {
      func_0x000108838bc0();
      lStack_4e0 = lVar14;
      ppuStack_4d8 = ppuVar15;
      if (extraout_x8_17 != 0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_16 != 0);
      }
      func_0x0001088389fc();
      func_0x000108838c0c();
      func_0x000108838b48();
    }
    func_0x000108838b90();
    ___cxa_end_catch();
    plVar8 = plVar6;
    plVar6 = plVar12;
  }
  plVar12 = plVar6;
  __Unwind_Resume();
  pcStack_538 = FUN_108838034;
  plVar7 = plVar12;
  lStack_570 = lVar13;
  plStack_568 = param_3;
  plStack_560 = param_4;
  plStack_558 = plVar6;
  plStack_550 = plVar9;
  plStack_548 = plVar8;
  ppuStack_540 = &puStack_460;
  func_0x000107c33cc8();
  uStack_578 = extraout_x8_18;
  FUN_108839f70(&lStack_5b0,plVar7[10]);
  (**(code **)(*(long *)plVar12[0xe] + 0x20))((long *)plVar12[0xe],plVar11,&lStack_5b0,plVar10);
  plVar8 = &lStack_5b0;
  func_0x000107c27ae4();
  while( true ) {
    iVar3 = (int)plVar11;
    func_0x000107c33cc0(uStack_578);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c27ae4(&lStack_5b0);
    uVar2 = iVar3 == 1;
    if (!(bool)uVar2) break;
    ___cxa_begin_catch();
    func_0x000108848514();
    plVar12 = (long *)plVar12[0x1a];
    lStack_5c8 = plVar10[1];
    lStack_5d0 = *plVar10;
    if (plVar10[1] != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_17 != 0);
    }
    uStack_5c0 = SUB84(plVar8,0);
    func_0x000107c28150();
    plVar10 = (long *)plVar12[2];
    __ZNSt3__15mutex4lockEv(plVar10 + 1);
    lVar13 = plVar10[0xe];
    lStack_5b0 = 0x1088388b4;
    ppuStack_5a8 = &PTR_DAT_110a79ed8;
    lStack_598 = lStack_5c8;
    lStack_5a0 = lStack_5d0;
    if (lStack_5c8 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_18 != 0);
    }
    uStack_590 = uStack_5c0;
    plVar11 = &lStack_5b0;
    plStack_580 = plVar8;
    func_0x000107c28154(plVar10 + 9);
    func_0x0001088389e4(ppuStack_5a8);
    __ZNSt3__15mutex6unlockEv(plVar10 + 1);
    if (lVar13 == 0) {
      ppuStack_5a8 = (undefined **)plVar12[3];
      lStack_5b0 = plVar12[2];
      if (plVar12[3] != 0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_19 != 0);
      }
      func_0x0001088389fc();
      plVar11 = &lStack_5b0;
      (*extraout_x8_19)();
      func_0x000107c27e74(&lStack_5b0);
    }
    plVar8 = &lStack_5d0;
    func_0x000104be3970();
    ___cxa_end_catch();
  }
  func_0x000108838b80();
  func_0x000104bd46a0();
  *(undefined1 *)(plVar8 + 0x20) = 1;
  return;
}



/* Entry: 108837c9c; end: 108838033;  */

void FUN_108837c9c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  code *extraout_x8_09;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long lVar6;
  undefined8 uVar7;
  undefined8 in_register_00005008;
  undefined8 uVar8;
  undefined8 uStack_180;
  long lStack_178;
  undefined4 uStack_170;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined4 uStack_140;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_70;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar6 = param_2;
  puVar3 = param_4;
  func_0x000107c33cc8();
  uStack_c8 = 0;
  uStack_c0 = 0;
  ppuStack_d8 = &PTR_FUN_110a609a8;
  uStack_d0 = 0;
  uStack_b8 = 0x1d4;
  uStack_58 = extraout_x8;
  (**(code **)(**(long **)(lVar6 + 0xa0) + 0x50))(*(long **)(lVar6 + 0xa0),&ppuStack_d8);
  func_0x000107c2882c(&ppuStack_d8);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x50);
  puVar2 = param_3;
  FUN_108839610();
  puStack_60 = param_3;
  if (iVar1 == 0) {
    func_0x000108838a5c();
    uStack_b0 = param_1;
    uStack_a8 = in_register_00005008;
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_02 != 0);
    }
    func_0x000107c28150();
    func_0x000108838cc0();
    func_0x000108838bb8();
    lVar6 = unaff_x23[0xe];
    func_0x000108838a6c(0x1088386f4);
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_03 != 0);
    }
    func_0x000108838c14(unaff_x23 + 9);
    func_0x0001088389b8(uStack_88);
    func_0x000108838a54();
    if (lVar6 != 0) goto LAB_108837e74;
    func_0x000108838adc();
    uStack_90 = param_1;
    uStack_88 = in_register_00005008;
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_04 != 0);
    }
    func_0x0001088389fc();
    func_0x000108838c0c();
  }
  else {
    unaff_x22 = *(long **)(param_2 + 0x40);
    func_0x000107c27994(&uStack_b0,param_3);
    func_0x000108838b08(&uStack_90,&uStack_b0);
    puVar2 = &uStack_90;
    (**(code **)(*unaff_x22 + 200))(unaff_x22);
    func_0x000107c27a04(&uStack_90);
    func_0x000107c27914(&uStack_b0);
    func_0x000108838a5c();
    uStack_b0 = param_1;
    uStack_a8 = in_register_00005008;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x000108838cc0();
    func_0x000108838bb8();
    lVar6 = unaff_x23[0xe];
    func_0x000108838a6c(0x1088386bc);
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108838c14(unaff_x23 + 9);
    func_0x0001088389b8(uStack_88);
    func_0x000108838a54();
    if (lVar6 != 0) goto LAB_108837e74;
    func_0x000108838adc();
    uStack_90 = param_1;
    uStack_88 = in_register_00005008;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001088389fc();
    func_0x000108838c0c();
  }
  func_0x000108838b48();
LAB_108837e74:
  func_0x000108838b90();
  while( true ) {
    func_0x000107c33cc0(uStack_58);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108838a28();
    func_0x000108838b48();
    func_0x000108838b90();
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    ___cxa_begin_catch();
    func_0x000108848514();
    param_2 = *(long *)(param_2 + 0xd0);
    uVar8 = param_4[1];
    uVar7 = *param_4;
    uStack_b0 = uVar7;
    uStack_a8 = uVar8;
    if (param_4[1] != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_05 != 0);
    }
    uStack_a0 = SUB84(param_3,0);
    func_0x000107c28150();
    unaff_x22 = *(long **)(param_2 + 0x10);
    __ZNSt3__15mutex4lockEv(unaff_x22 + 1);
    puVar4 = (undefined8 *)unaff_x22[0xe];
    func_0x000108838a6c(0x10883872c);
    if (extraout_x8_06 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_06 != 0);
    }
    unaff_x23 = &uStack_90;
    uStack_70 = uStack_a0;
    puStack_60 = param_3;
    func_0x000108838c14(unaff_x22 + 9);
    func_0x0001088389e4(uStack_88);
    func_0x000108838b68();
    if (puVar4 == (undefined8 *)0x0) {
      func_0x000108838bc0();
      uStack_90 = uVar7;
      uStack_88 = uVar8;
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_07 != 0);
      }
      func_0x0001088389fc();
      func_0x000108838c0c();
      func_0x000108838b48();
    }
    func_0x000108838b90();
    ___cxa_end_catch();
    param_4 = param_3;
    param_3 = puVar4;
  }
  puVar5 = param_3;
  __Unwind_Resume();
  pcStack_e8 = FUN_108838034;
  puVar4 = puVar5;
  lStack_120 = lVar6;
  puStack_118 = unaff_x23;
  plStack_110 = unaff_x22;
  puStack_108 = param_3;
  lStack_100 = param_2;
  puStack_f8 = param_4;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000107c33cc8();
  uStack_128 = extraout_x8_08;
  FUN_108839f70(&uStack_160,puVar4[10]);
  (**(code **)(*(long *)puVar5[0xe] + 0x20))((long *)puVar5[0xe],puVar2,&uStack_160,puVar3);
  puVar4 = &uStack_160;
  func_0x000107c27ae4();
  while( true ) {
    iVar1 = (int)puVar2;
    func_0x000107c33cc0(uStack_128);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c27ae4(&uStack_160);
    in_ZR = iVar1 == 1;
    if (!(bool)in_ZR) break;
    ___cxa_begin_catch();
    func_0x000108848514();
    puVar5 = (undefined8 *)puVar5[0x1a];
    lStack_178 = puVar3[1];
    uStack_180 = *puVar3;
    if (puVar3[1] != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_08 != 0);
    }
    uStack_170 = SUB84(puVar4,0);
    func_0x000107c28150();
    puVar3 = (undefined8 *)puVar5[2];
    __ZNSt3__15mutex4lockEv(puVar3 + 1);
    lVar6 = puVar3[0xe];
    uStack_160 = 0x1088388b4;
    ppuStack_158 = &PTR_DAT_110a79ed8;
    lStack_148 = lStack_178;
    uStack_150 = uStack_180;
    if (lStack_178 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_09 != 0);
    }
    uStack_140 = uStack_170;
    puVar2 = &uStack_160;
    puStack_130 = puVar4;
    func_0x000107c28154(puVar3 + 9);
    func_0x0001088389e4(ppuStack_158);
    __ZNSt3__15mutex6unlockEv(puVar3 + 1);
    if (lVar6 == 0) {
      ppuStack_158 = (undefined **)puVar5[3];
      uStack_160 = puVar5[2];
      if (puVar5[3] != 0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_10 != 0);
      }
      func_0x0001088389fc();
      puVar2 = &uStack_160;
      (*extraout_x8_09)();
      func_0x000107c27e74(&uStack_160);
    }
    puVar4 = &uStack_180;
    func_0x000104be3970();
    ___cxa_end_catch();
  }
  func_0x000108838b80();
  func_0x000104bd46a0();
  *(undefined1 *)(puVar4 + 0x20) = 1;
  return;
}



/* Entry: 108838034; end: 108838227;  */

void FUN_108838034(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int iVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar3;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 uStack_60;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1;
  func_0x000107c33cc8();
  uStack_48 = extraout_x8;
  FUN_108839f70(&uStack_80,*(undefined8 *)(lVar3 + 0x50));
  (**(code **)(**(long **)(param_1 + 0x70) + 0x20))
            (*(long **)(param_1 + 0x70),param_2,&uStack_80,param_3);
  puVar1 = &uStack_80;
  func_0x000107c27ae4();
  while( true ) {
    iVar2 = (int)param_2;
    func_0x000107c33cc0(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c27ae4(&uStack_80);
    in_ZR = iVar2 == 1;
    if (!(bool)in_ZR) break;
    ___cxa_begin_catch();
    func_0x000108848514();
    param_1 = *(long *)(param_1 + 0xd0);
    lStack_98 = param_3[1];
    uStack_a0 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10 != 0);
    }
    uStack_90 = SUB84(puVar1,0);
    func_0x000107c28150();
    param_3 = *(undefined8 **)(param_1 + 0x10);
    __ZNSt3__15mutex4lockEv(param_3 + 1);
    lVar3 = param_3[0xe];
    uStack_80 = 0x1088388b4;
    ppuStack_78 = &PTR_DAT_110a79ed8;
    lStack_68 = lStack_98;
    uStack_70 = uStack_a0;
    if (lStack_98 != 0) {
      do {
        func_0x000107c33cc4();
      } while (extraout_w10_00 != 0);
    }
    uStack_60 = uStack_90;
    param_2 = &uStack_80;
    puStack_50 = puVar1;
    func_0x000107c28154(param_3 + 9);
    func_0x0001088389e4(ppuStack_78);
    __ZNSt3__15mutex6unlockEv(param_3 + 1);
    if (lVar3 == 0) {
      ppuStack_78 = *(undefined ***)(param_1 + 0x18);
      uStack_80 = *(undefined8 *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x18) != 0) {
        do {
          func_0x000107c33cc4();
        } while (extraout_w10_01 != 0);
      }
      func_0x0001088389fc();
      param_2 = &uStack_80;
      (*extraout_x8_00)();
      func_0x000107c27e74(&uStack_80);
    }
    puVar1 = &uStack_a0;
    func_0x000104be3970();
    ___cxa_end_catch();
  }
  func_0x000108838b80();
  func_0x000104bd46a0();
  *(undefined1 *)(puVar1 + 0x20) = 1;
  return;
}



/* Entry: 108838228; end: 108838233;  */

void FUN_108838228(long param_1)

{
  *(undefined1 *)(param_1 + 0x100) = 1;
  return;
}



/* Entry: 108838234; end: 108838247;  */

undefined1  [16] FUN_108838234(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((ulong)puVar1 >> 0x3e == 0) {
    lVar2 = (long)puVar1 << 2;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(puVar1 + 1) & 1) == 0) {
    FUN_1088382a8(*puVar1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = puVar1;
  return auVar3;
}



/* Entry: 108838248; end: 1088382a7;  */

undefined1  [16] FUN_108838248(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar1 = (long)param_1 << 2;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_1088382a8(*param_1);
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1088382a8; end: 1088382c3;  */

void FUN_1088382a8(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1088382c4; end: 1088382d7;  */

void FUN_1088382c4(void)

{
  func_0x0001088382e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088382d8; end: 1088382ff;  */

void FUN_1088382d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108838c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108838300; end: 108838313;  */

void FUN_108838300(void)

{
  func_0x0001088382f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108838314; end: 10883831b;  */

void FUN_108838314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108838c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10883831c; end: 108838347;  */

undefined8 * FUN_10883831c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a79c90;
  func_0x000104be5d60(param_1 + 1);
  return param_1;
}



/* Entry: 108838348; end: 10883835b;  */

void FUN_108838348(void)

{
  FUN_10883831c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883835c; end: 1088383ab;  */

void FUN_10883835c(long param_1)

{
  code *extraout_x8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001088389fc(*(undefined8 *)(param_1 + 8));
  (*extraout_x8)();
  FUN_1088382a8(&uStack_38);
  return;
}



/* Entry: 1088383ac; end: 10883851f;  */

void FUN_1088383ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001088383b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 108838520; end: 10883853f;  */

void FUN_108838520(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108837710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108838540; end: 108838ccb;  */

void FUN_108838540(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108838ccc; end: 108838e47;  */

undefined8
FUN_108838ccc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,int param_6,undefined1 param_7,undefined8 param_8,int *param_9,
             undefined1 param_10)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_d8 [24];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  undefined1 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined1 uStack_6c;
  
  lVar2 = param_1;
  func_0x00010883cc84();
  if (param_6 != 0) {
    puVar3 = (undefined1 *)(param_1 + 0x68);
    FUN_108838e48(puVar3,param_2);
    func_0x000108838e68();
    *puVar3 = 1;
    puVar3[1] = param_7;
  }
  if (unaff_x19 == lVar2) {
    func_0x00010883cdc8(auStack_d8);
    uStack_c0 = param_5;
    func_0x00010883ccd4(auStack_b8);
    func_0x000107c279d4(auStack_a0,param_8);
    uStack_80 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010883cbbc(*(undefined8 *)(param_1 + 0xb8));
    (*extraout_x8)();
    iStack_70 = 1;
    uStack_6c = param_10;
    uStack_78 = uVar4;
    func_0x00010883cda8();
    *param_9 = iStack_70;
    func_0x00010883cc44();
  }
  else if (*(int *)(lVar2 + 0x18) == 2) {
    *(undefined4 *)(lVar2 + 0x18) = 0;
    iVar1 = *(int *)(lVar2 + 0x88) + 1;
    *(int *)(lVar2 + 0x88) = iVar1;
    *param_9 = iVar1;
  }
  else {
    if ((*(int *)(lVar2 + 0x18) != 1) || ((*(byte *)(lVar2 + 0x70) & 1) == 0)) {
      *param_9 = -1;
      return 0;
    }
    *param_9 = -*(int *)(lVar2 + 0x88);
    *(undefined4 *)(lVar2 + 0x18) = 0;
  }
  return 1;
}



/* Entry: 108838e48; end: 108838e87;  */

long FUN_108838e48(long param_1)

{
  func_0x00010883ca94();
  FUN_10883a894();
  return param_1 + 0x28;
}



/* Entry: 108838e88; end: 108838ed7;  */

void FUN_108838e88(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c33d08();
  func_0x00010883a0a4();
  lVar1 = unaff_x20;
  FUN_10883a0e4();
  plVar2 = (long *)(unaff_x20 + 0x18);
  FUN_10883a0ec(plVar2,unaff_x19 + 0x30);
  func_0x00010883a10c();
  *plVar2 = lVar1;
  *(long *)(unaff_x20 + 0x40) = *(long *)(unaff_x20 + 0x40) + 1;
  return;
}



/* Entry: 108838ed8; end: 108839023;  */

undefined8
FUN_108838ed8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,int param_7,undefined1 param_8,int param_9)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *extraout_x8;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  undefined1 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  
  if (0 < param_9) {
    uStack_58 = param_3;
    if (param_7 != 0) {
      puVar2 = (undefined1 *)(param_1 + 0x68);
      FUN_108838e48(puVar2,param_2);
      func_0x000108838e68();
      *puVar2 = 1;
      puVar2[1] = param_8;
    }
    lVar1 = param_1 + 0x10;
    lVar3 = lVar1;
    func_0x000107c29d40(lVar1,param_2,&uStack_58);
    if (lVar1 == lVar3) {
      uStack_d8 = uStack_58;
      uStack_d0 = 1;
      func_0x00010883cdc8(auStack_c8);
      uStack_b0 = param_6;
      func_0x00010883ccd4(auStack_a8);
      FUN_108691254(auStack_90,param_5);
      uStack_70 = 0;
      uVar4 = *(undefined8 *)(param_1 + 0xa0);
      func_0x00010883cbbc(*(undefined8 *)(param_1 + 0xb8));
      (*extraout_x8)();
      iStack_60 = param_9;
      uStack_5c = 0;
      uStack_68 = uVar4;
      FUN_108838e88(lVar1,&uStack_d8);
      func_0x00010883cc44();
      return 1;
    }
  }
  return 0;
}



/* Entry: 108839024; end: 10883911b;  */

bool FUN_108839024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_d8 [24];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  lVar1 = param_1;
  func_0x00010883cc84();
  if (unaff_x19 == lVar1) {
    func_0x000107c27994(auStack_d8,param_4);
    uStack_c0 = param_5;
    func_0x00010883cdc8(auStack_b8);
    func_0x000107c279d4(auStack_a0,param_6);
    uStack_80 = 1;
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010883cbbc(*(undefined8 *)(param_1 + 0xb8));
    (*extraout_x8)();
    uStack_6c = 0;
    uStack_78 = uVar2;
    uStack_70 = param_7;
    func_0x00010883cda8();
    func_0x00010883cc44();
  }
  return unaff_x19 == lVar1;
}



/* Entry: 10883911c; end: 108839197;  */

undefined8 FUN_10883911c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = param_1;
  func_0x000107c33cd8();
  if ((unaff_x19 != lVar1) &&
     (*param_4 = *(undefined4 *)(lVar1 + 0x88), *(int *)(lVar1 + 0x18) == 0)) {
    FUN_108839198(param_1,lVar1 + 0x10);
    if ((int)param_1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 1;
      return 1;
    }
    FUN_1088391d0();
    return 1;
  }
  return 0;
}



/* Entry: 108839198; end: 1088391cf;  */

byte FUN_108839198(long param_1,long param_2)

{
  byte bVar1;
  
  if ((*(byte *)(param_2 + 0x7c) & 1) == 0) {
    if (*(int *)(param_1 + 8) < *(int *)(param_2 + 0x78) && *(int *)(param_1 + 8) != -1) {
      bVar1 = *(byte *)(param_2 + 0x60);
    }
    else {
      bVar1 = 1;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 1088391d0; end: 10883928b;  */

long * FUN_1088391d0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x000107c33d00();
  lVar2 = *param_2;
  if ((*(char *)(lVar2 + 0x70) == '\x01') && (unaff_x19[9] != 0)) {
    func_0x00010883a12c(lVar2 + 0x58);
    func_0x00010883ccac();
    lVar2 = *unaff_x20;
  }
  plVar1 = unaff_x19 + 3;
  func_0x000107c29d60(plVar1,lVar2 + 0x40);
  if ((int)plVar1 != 0) {
    func_0x00010883cb84();
    func_0x00010883a144();
    if (((ulong)plVar1 & 1) != 0) {
      func_0x00010883cb84();
      FUN_10883c76c();
      func_0x00010883cb84();
      if (plVar1[3] == 0) {
        FUN_10883c8b8(unaff_x19 + 3,*unaff_x20 + 0x40);
      }
      unaff_x19[8] = unaff_x19[8] + -1;
      lVar2 = *(long *)*unaff_x20;
      plVar1 = (long *)((long *)*unaff_x20)[1];
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      unaff_x19[2] = unaff_x19[2] + -1;
      func_0x00010883a870();
      return plVar1;
    }
  }
  return unaff_x19;
}



/* Entry: 10883928c; end: 10883938b;  */

void FUN_10883928c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_48 [24];
  
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    func_0x00010883cbec(param_1,param_2);
    FUN_1088394dc(auStack_48);
    func_0x00010883cdd0();
    FUN_1086d2c8c(auStack_48);
    func_0x00010883cccc();
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  iVar1 = (int)param_2 + 0x28;
  func_0x000107c29d60();
  if (iVar1 != 0) {
    lVar2 = param_2 + 0x28;
    FUN_10883a0ec(lVar2,param_3);
    plVar3 = (long *)(lVar2 + 0x10);
    while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
      func_0x00010883cde8();
      FUN_10867b1ac();
    }
    FUN_1088393e0(param_2 + 0x10,param_3);
  }
  lVar2 = param_2 + 0x68;
  FUN_10883af7c(lVar2,param_3);
  if (lVar2 != 0) {
    lVar2 = param_2 + 0x68;
    FUN_108838e48(lVar2,param_3);
    plVar3 = (long *)(lVar2 + 0x10);
    while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
      func_0x00010883cde8();
      FUN_10867b1ac();
    }
    FUN_10883b040(param_2 + 0x68,param_3);
  }
  return;
}



/* Entry: 10883938c; end: 1088393df;  */

void FUN_10883938c(void)

{
  undefined1 auStack_48 [40];
  
  func_0x00010883cbec();
  FUN_1088394dc(auStack_48);
  func_0x00010883cdd0();
  FUN_1086d2c8c(auStack_48);
  func_0x00010883cccc();
  return;
}



/* Entry: 1088393e0; end: 108839477;  */

void FUN_1088393e0(int param_1)

{
  long lVar1;
  long unaff_x20;
  long *plVar2;
  
  func_0x000107c33d08();
  param_1 = param_1 + 0x18;
  func_0x000107c29d60();
  if (param_1 != 0) {
    lVar1 = unaff_x20 + 0x18;
    FUN_10883a0ec();
    plVar2 = (long *)(lVar1 + 0x10);
    while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
      if ((*(char *)(plVar2[3] + 0x70) == '\x01') && (*(long *)(unaff_x20 + 0x48) != 0)) {
        func_0x00010883a12c(plVar2[3] + 0x58);
        func_0x00010883ccac();
      }
      FUN_10883a160();
      *(long *)(unaff_x20 + 0x40) = *(long *)(unaff_x20 + 0x40) + -1;
    }
    lVar1 = unaff_x20 + 0x18;
    func_0x000107c29d74();
    if (lVar1 != 0) {
      func_0x00010883cee4();
      func_0x00010883c8e4();
    }
    return;
  }
  return;
}



/* Entry: 108839478; end: 1088394db;  */

void FUN_108839478(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [40];
  
  func_0x00010883cbec();
  FUN_108691254(auStack_68);
  FUN_1088394dc(auStack_48,param_1,auStack_68);
  func_0x00010883cdd0();
  FUN_1086d2c8c(auStack_48);
  func_0x00010883cccc();
  return;
}



/* Entry: 1088394dc; end: 1088395b3;  */

void FUN_1088394dc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  long lStack_48;
  
  func_0x000107c33d28();
  func_0x00010883cbec();
  plVar2 = *(long **)(param_1 + 0xa0);
  (**(code **)(*plVar2 + 0x20))();
  lVar1 = unaff_x21 + 0x10;
  lVar4 = *(long *)(unaff_x21 + 0x18);
  while ((lVar4 != lVar1 && (*(long *)(lVar4 + 0x80) <= (long)plVar2))) {
    lStack_48 = lVar4;
    if ((*(char *)(unaff_x20 + 0x18) == '\x01') &&
       (lVar3 = unaff_x20, func_0x000107c28078(), (int)lVar3 != 0)) {
      lVar4 = *(long *)(lVar4 + 8);
    }
    else {
      FUN_1086c4ca0();
      FUN_10867b1ac();
      FUN_1088395b4();
      lVar4 = lVar1;
      FUN_1088391d0(lVar1,&lStack_48);
    }
  }
  return;
}



/* Entry: 1088395b4; end: 10883960f;  */

void FUN_1088395b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000107c33d08();
  uStack_38 = param_3;
  func_0x000107c33d18();
  if ((param_1 != 0) && (FUN_10883b9b0(param_1 + 0x28,&uStack_38), *(long *)(param_1 + 0x40) == 0))
  {
    FUN_10883b040(unaff_x20 + 0x68);
  }
  return;
}



/* Entry: 108839610; end: 108839703;  */

undefined8 FUN_108839610(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  func_0x000107c33d08();
  func_0x000107c33d14();
  if ((int)param_1 == 0) {
    return 0;
  }
  func_0x00010883cddc();
  plStack_48 = (long *)0x0;
  plStack_40 = (long *)0x0;
  uStack_38 = 0;
  FUN_108839704(&plStack_48,*(undefined8 *)(param_1 + 0x18));
  iVar4 = 0;
  plVar2 = (long *)(param_1 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    lVar1 = plVar2[3];
    if (*(int *)(lVar1 + 0x18) == 1) {
      if (*(int *)(lVar1 + 0x88) == 1) {
        iVar4 = iVar4 + 1;
        *(undefined4 *)(lVar1 + 0x18) = 2;
      }
      else {
        FUN_10883a2c0(&plStack_48);
      }
    }
  }
  if (iVar4 == 0) {
    plVar2 = plStack_48;
    if (plStack_48 == plStack_40) {
      uVar3 = 0;
      goto LAB_1088396a8;
    }
    for (; plVar2 != plStack_40; plVar2 = plVar2 + 1) {
      *(undefined4 *)(*plVar2 + 0x18) = 2;
    }
  }
  uVar3 = 1;
LAB_1088396a8:
  FUN_10883a3e0(&plStack_48);
  return uVar3;
}



/* Entry: 108839704; end: 10883977b;  */

long *** FUN_108839704(long ***param_1,ulong param_2)

{
  long ***ppplVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar1 = param_1 + 2;
  pplVar2 = *param_1;
  if ((ulong)((long)*ppplVar1 - (long)pplVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      func_0x00010883a1ac();
      func_0x00010883cc04();
      FUN_10883a270();
      func_0x00010883cb48();
      func_0x000107c33cd8();
      if ((param_1 == ppplVar1) || (*(int *)(ppplVar1 + 3) != 1)) {
        ppplVar1 = (long ***)0x0;
      }
      else {
        *(undefined4 *)(ppplVar1 + 3) = 2;
        ppplVar1 = (long ***)0x1;
      }
      return ppplVar1;
    }
    pplVar3 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    FUN_10883a234();
    lStack_40 = (long)ppplVar1 + ((long)pplVar3 - (long)pplVar2);
    pplStack_30 = (long **)(ppplVar1 + param_2);
    pplStack_48 = (long **)ppplVar1;
    lStack_38 = lStack_40;
    func_0x00010883cd9c();
    ppplVar1 = &pplStack_48;
    FUN_10883a270(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 10883977c; end: 1088397bf;  */

undefined8 FUN_10883977c(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107c33cd8();
  if ((unaff_x19 == param_1) || (*(int *)(param_1 + 0x18) != 1)) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 2;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1088397c0; end: 10883986f;  */

void FUN_1088397c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined2 *puVar4;
  long unaff_x20;
  long *aplStack_48 [2];
  undefined8 uStack_38;
  
  func_0x000107c33d08();
  uStack_38 = param_3;
  FUN_10867a634(aplStack_48,param_1 + 0x90);
  if (aplStack_48[0] == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*aplStack_48[0] + 0x10))();
    uVar2 = (uint)aplStack_48[0];
  }
  lVar3 = unaff_x20;
  func_0x000107c29d48();
  uVar1 = 0;
  if (lVar3 == 0) {
    uVar1 = uVar2;
  }
  if ((uVar1 & 1) != 0) {
    puVar4 = (undefined2 *)(unaff_x20 + 0x68);
    FUN_108838e48();
    func_0x000108838e68();
    *puVar4 = 0;
  }
  func_0x000107c28a70(aplStack_48);
  return;
}



/* Entry: 108839870; end: 108839893;  */

void FUN_108839870(void)

{
  FUN_10883a42c();
  return;
}



/* Entry: 108839894; end: 108839efb;  */

void FUN_108839894(long ****param_1,long ****param_2,long ****param_3,long ****param_4)

{
  long ****pppplVar1;
  long ***ppplVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  ulong uVar6;
  long ***ppplVar7;
  long ****pppplVar8;
  long lVar9;
  long lVar10;
  long ***ppplVar11;
  ulong uVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  undefined8 uStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long ***ppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  
  pppplVar13 = param_1;
  pppplVar16 = param_2;
  func_0x000107c29460();
  if (param_3 == pppplVar16) {
    pppplVar13 = (long ****)0x0;
  }
  else {
    pppplVar13 = (long ****)
                 ((((long)param_3 - (long)*param_2 >> 3) + ((long)param_2 - (long)pppplVar13) * 0x40
                  ) - ((long)pppplVar16 - (long)*pppplVar13 >> 3));
  }
  pppplVar19 = (long ****)param_1[5];
  pppplVar18 = (long ****)((long)pppplVar19 - (long)pppplVar13);
  if (pppplVar13 < pppplVar18) {
    if (param_1[4] == (long ***)0x0) {
      pppplVar18 = param_1;
      FUN_10883b2c0();
      if (pppplVar18 < (long ****)0x200) {
        ppplVar7 = *param_1;
        ppplVar11 = param_1[3];
        uVar12 = (long)ppplVar11 - (long)ppplVar7;
        if ((ulong)((long)param_1[2] - (long)param_1[1]) < uVar12) {
          pppplVar18 = (long ****)0x1000;
          if (param_1[1] == ppplVar7) {
            __Znwm();
            pppplVar16 = &ppplStack_a0;
            ppplStack_a0 = (long ***)pppplVar18;
            FUN_10883b598(param_1);
            FUN_10883cd24();
          }
          else {
            __Znwm();
            pppplVar16 = &ppplStack_a0;
            ppplStack_a0 = (long ***)pppplVar18;
            FUN_10883b4f8(param_1);
          }
          if ((long)param_1[2] - (long)param_1[1] == 8) {
            ppplVar7 = (long ***)0x100;
          }
          else {
            ppplVar7 = param_1[4] + 0x40;
          }
          param_1[4] = ppplVar7;
        }
        else {
          pppplVar18 = (long ****)((long)uVar12 >> 2);
          if (ppplVar11 == ppplVar7) {
            pppplVar18 = (long ****)0x1;
          }
          ppplStack_b0 = (long ***)(param_1 + 3);
          FUN_10883b6f0();
          ppplStack_b8 = (long ***)(pppplVar18 + (long)pppplVar16);
          pppplVar19 = (long ****)0x1000;
          ppplStack_d0 = (long ***)pppplVar18;
          ppplStack_c8 = (long ***)pppplVar18;
          ppplStack_c0 = (long ***)pppplVar18;
          __Znwm();
          uStack_d8 = 0x200;
          pppplVar16 = &ppplStack_a0;
          ppplStack_e8 = (long ***)pppplVar19;
          ppplStack_e0 = (long ***)(param_1 + 5);
          ppplStack_a0 = (long ***)pppplVar19;
          FUN_10883b624(&ppplStack_d0);
          ppplStack_e8 = (long ***)0x0;
          for (ppplVar7 = param_1[1]; ppplVar11 = param_1[2], ppplVar7 != ppplVar11;
              ppplVar7 = ppplVar7 + 1) {
            if (ppplStack_c0 == ppplStack_b8) {
              if (ppplStack_c8 < ppplStack_d0 || (long)ppplStack_c8 - (long)ppplStack_d0 == 0) {
                pppplVar16 = (long ****)((long)ppplStack_c0 - (long)ppplStack_d0 >> 2);
                if ((long)ppplStack_c0 - (long)ppplStack_d0 == 0) {
                  pppplVar16 = (long ****)0x1;
                }
                ppplStack_80 = ppplStack_b0;
                pppplVar18 = pppplVar16;
                pppplVar19 = (long ****)ppplStack_c8;
                FUN_10883b6f0();
                ppplStack_98 = (long ***)(pppplVar18 + ((ulong)pppplVar16 >> 2));
                ppplStack_88 = (long ***)(pppplVar18 + (long)pppplVar19);
                pppplVar16 = (long ****)ppplStack_c8;
                ppplStack_a0 = (long ***)pppplVar18;
                ppplStack_90 = ppplStack_98;
                FUN_10883b6bc(&ppplStack_a0,ppplStack_c8,ppplStack_c0);
                ppplVar3 = ppplStack_b8;
                ppplVar2 = ppplStack_c0;
                ppplVar5 = ppplStack_c8;
                ppplVar11 = ppplStack_d0;
                ppplStack_c8 = ppplStack_98;
                ppplStack_d0 = ppplStack_a0;
                ppplStack_b8 = ppplStack_88;
                ppplStack_c0 = ppplStack_90;
                ppplStack_98 = ppplVar5;
                ppplStack_a0 = ppplVar11;
                ppplStack_88 = ppplVar3;
                ppplStack_90 = ppplVar2;
                func_0x00010883b74c(&ppplStack_a0);
              }
              else {
                lVar10 = (((long)ppplStack_c8 - (long)ppplStack_d0 >> 3) + 1) / -2;
                pppplVar16 = (long ****)(ppplStack_c8 + lVar10);
                lVar9 = (long)ppplStack_c0 - (long)ppplStack_c8;
                if (lVar9 != 0) {
                  _memmove(pppplVar16,ppplStack_c8,lVar9);
                }
                ppplStack_c0 = (long ***)((long)pppplVar16 + lVar9);
                pppplVar16 = (long ****)ppplStack_c8;
                ppplStack_c8 = ppplStack_c8 + lVar10;
              }
            }
            *ppplStack_c0 = *ppplVar7;
            ppplStack_c0 = ppplStack_c0 + 1;
          }
          pppplVar19 = (long ****)param_1[1];
          pppplVar18 = (long ****)*param_1;
          ppplVar7 = param_1[3];
          param_1[1] = ppplStack_c8;
          *param_1 = ppplStack_d0;
          param_1[3] = ppplStack_b8;
          param_1[2] = ppplStack_c0;
          if ((long)ppplStack_c0 - (long)ppplStack_c8 == 8) {
            ppplVar5 = (long ***)0x100;
          }
          else {
            ppplVar5 = param_1[4] + 0x40;
          }
          param_1[4] = ppplVar5;
          ppplStack_d0 = (long ***)pppplVar18;
          ppplStack_c8 = (long ***)pppplVar19;
          ppplStack_c0 = ppplVar11;
          ppplStack_b8 = ppplVar7;
          func_0x00010883b720(&ppplStack_e8);
          func_0x00010883b74c(&ppplStack_d0);
        }
      }
      else {
        param_1[4] = (long ***)0x200;
        FUN_10883cd24();
      }
    }
    if (pppplVar13 == (long ****)0x0) {
      pppplVar18 = param_1;
      func_0x000107c29460();
      if ((long ****)*pppplVar18 == pppplVar16) {
        pppplVar16 = (long ****)(pppplVar18[-1] + 0x200);
      }
      pppplVar16[-1] = *param_4;
      param_1[5] = (long ***)((long)param_1[5] + 1);
      param_1[4] = (long ***)((long)param_1[4] + -1);
      pppplVar8 = pppplVar16;
    }
    else {
      pppplVar19 = param_1;
      func_0x000107c29460();
      pppplVar8 = pppplVar16;
      ppplStack_f8 = (long ***)pppplVar19;
      ppplStack_f0 = (long ***)pppplVar16;
      FUN_10883b270();
      pppplVar18 = pppplVar8;
      if (param_4 != pppplVar16) {
        pppplVar18 = param_4;
      }
      *pppplVar8 = *pppplVar16;
      param_1[5] = (long ***)((long)param_1[5] + 1);
      param_1[4] = (long ***)((long)param_1[4] + -1);
      if (pppplVar13 != (long ****)0x1) {
        ppplStack_a0 = (long ***)pppplVar19;
        ppplStack_98 = (long ***)pppplVar16;
        FUN_10883a51c(&ppplStack_a0,1);
        ppplVar11 = ppplStack_98;
        ppplVar7 = ppplStack_a0;
        pppplVar15 = &ppplStack_f8;
        pppplVar8 = pppplVar13;
        func_0x00010883b298();
        ppplStack_e8 = (long ***)pppplVar19;
        ppplStack_e0 = (long ***)pppplVar16;
        ppplStack_d0 = (long ***)pppplVar15;
        ppplStack_c8 = (long ***)pppplVar8;
        ppplStack_a0 = ppplVar7;
        ppplStack_98 = ppplVar11;
        func_0x00010883ce14();
        for (; pppplVar4 = (long ****)ppplStack_98, 0 < (long)pppplVar15;
            pppplVar15 = (long ****)((long)pppplVar15 - (long)pppplVar14)) {
          pppplVar8 = (long ****)((long)(*ppplStack_a0 + 0x200) - (long)ppplStack_98 >> 3);
          pppplVar14 = pppplVar8;
          if ((long)pppplVar15 <= (long)pppplVar8) {
            pppplVar14 = pppplVar15;
          }
          pppplVar1 = (long ****)(ppplStack_98 + (long)pppplVar15);
          if ((long)pppplVar8 <= (long)pppplVar15) {
            pppplVar1 = (long ****)(*ppplStack_a0 + 0x200);
          }
          if (ppplStack_98 <= pppplVar18 && pppplVar18 < pppplVar1) {
            pppplVar16 = &ppplStack_a0;
            FUN_1086f6b4c(pppplVar16,&ppplStack_e8);
            ppplStack_78 = ppplStack_a0;
            ppplStack_70 = (long ***)pppplVar18;
            FUN_10883b78c(&ppplStack_78,-(long)pppplVar16);
            pppplVar16 = (long ****)ppplStack_e0;
            pppplVar19 = (long ****)ppplStack_e8;
            pppplVar18 = (long ****)ppplStack_70;
          }
          if (pppplVar4 != pppplVar1) {
            pppplVar8 = (long ****)*pppplVar19;
            while( true ) {
              pppplVar17 = pppplVar19 + 1;
              lVar9 = (long)pppplVar8 + (0x1000 - (long)pppplVar16) >> 3;
              lVar10 = (long)pppplVar1 - (long)pppplVar4 >> 3;
              if (lVar9 <= lVar10) {
                lVar10 = lVar9;
              }
              if (lVar10 != 0) {
                _memmove(pppplVar16,pppplVar4,lVar10 * 8);
              }
              pppplVar4 = pppplVar4 + lVar10;
              if (pppplVar1 == pppplVar4) break;
              pppplVar8 = (long ****)*pppplVar17;
              pppplVar16 = pppplVar8;
              pppplVar19 = pppplVar17;
            }
            pppplVar16 = pppplVar16 + lVar10;
            if (pppplVar16 == (long ****)(*pppplVar19 + 0x200)) {
              pppplVar16 = (long ****)*pppplVar17;
              pppplVar19 = pppplVar17;
            }
          }
          pppplVar8 = pppplVar14;
          ppplStack_e8 = (long ***)pppplVar19;
          ppplStack_e0 = (long ***)pppplVar16;
          FUN_10883a51c(&ppplStack_a0);
        }
      }
      *pppplVar16 = *pppplVar18;
    }
  }
  else {
    pppplVar15 = param_1;
    FUN_10883b2c0();
    if (pppplVar15 == (long ****)0x0) {
      FUN_10883b2e8(param_1);
      pppplVar19 = (long ****)param_1[5];
      pppplVar18 = (long ****)((long)pppplVar19 - (long)pppplVar13);
    }
    pppplVar15 = param_1;
    func_0x000107c29464();
    if (pppplVar19 == pppplVar13) {
      func_0x00010883ce40(*param_4);
      pppplVar8 = pppplVar16;
    }
    else {
      pppplVar4 = pppplVar15;
      pppplVar8 = pppplVar16;
      FUN_10883b270();
      pppplVar19 = pppplVar16;
      if (param_4 != pppplVar8) {
        pppplVar19 = param_4;
      }
      func_0x00010883ce40(*pppplVar8);
      if ((long ****)0x1 < pppplVar18) {
        pppplVar14 = &ppplStack_a0;
        ppplStack_a0 = (long ***)pppplVar15;
        ppplStack_98 = (long ***)pppplVar16;
        FUN_10883b90c();
        ppplStack_e8 = (long ***)pppplVar15;
        ppplStack_e0 = (long ***)pppplVar16;
        ppplStack_d0 = (long ***)pppplVar4;
        ppplStack_c8 = (long ***)pppplVar8;
        func_0x00010883ce14();
        for (; pppplVar8 = pppplVar18, 0 < (long)pppplVar14;
            pppplVar14 = (long ****)((long)pppplVar14 - (long)pppplVar4)) {
          pppplVar18 = (long ****)ppplStack_c8;
          if (ppplStack_c8 == (long ***)*ppplStack_d0) {
            ppplStack_d0 = ppplStack_d0 + -1;
            pppplVar18 = (long ****)(*ppplStack_d0 + 0x200);
          }
          ppplStack_c8 = (long ***)(pppplVar18 + -1);
          pppplVar8 = (long ****)((long)pppplVar18 - (long)*ppplStack_d0 >> 3);
          pppplVar4 = pppplVar8;
          if ((long)pppplVar14 <= (long)pppplVar8) {
            pppplVar4 = pppplVar14;
          }
          pppplVar1 = pppplVar18 + -(long)pppplVar14;
          if ((long)pppplVar8 <= (long)pppplVar14) {
            pppplVar1 = (long ****)*ppplStack_d0;
          }
          if (pppplVar19 < pppplVar18 && pppplVar1 <= pppplVar19) {
            pppplVar16 = &ppplStack_e8;
            FUN_1086f6b4c(pppplVar16,&ppplStack_d0);
            ppplStack_78 = ppplStack_d0;
            ppplStack_70 = (long ***)pppplVar19;
            FUN_10883b78c(&ppplStack_78,(long)pppplVar16 + -1);
            pppplVar15 = (long ****)ppplStack_e8;
            pppplVar16 = (long ****)ppplStack_e0;
            pppplVar19 = (long ****)ppplStack_70;
          }
          if (pppplVar1 != pppplVar18) {
            ppplVar7 = *pppplVar15;
            while( true ) {
              uVar6 = (long)pppplVar16 - (long)ppplVar7 >> 3;
              uVar12 = (long)pppplVar18 - (long)pppplVar1 >> 3;
              if ((long)uVar6 <= (long)uVar12) {
                uVar12 = uVar6;
              }
              pppplVar18 = pppplVar18 + -uVar12;
              pppplVar16 = pppplVar16 + -uVar12;
              if ((uVar12 & 0x1fffffffffffffff) != 0) {
                _memmove(pppplVar16,pppplVar18,uVar12 << 3);
              }
              if (pppplVar1 == pppplVar18) break;
              pppplVar15 = pppplVar15 + -1;
              ppplVar7 = *pppplVar15;
              pppplVar16 = (long ****)(ppplVar7 + 0x200);
            }
            if (pppplVar16 == (long ****)(*pppplVar15 + 0x200)) {
              pppplVar15 = pppplVar15 + 1;
              pppplVar16 = (long ****)*pppplVar15;
            }
          }
          pppplVar18 = (long ****)((long)pppplVar4 + -1);
          ppplStack_e8 = (long ***)pppplVar15;
          ppplStack_e0 = (long ***)pppplVar16;
          FUN_10883b90c(&ppplStack_d0);
        }
      }
      if (pppplVar16 == (long ****)*pppplVar15) {
        pppplVar16 = (long ****)(pppplVar15[-1] + 0x200);
      }
      pppplVar16[-1] = *pppplVar19;
    }
  }
  func_0x000107c29460();
  ppplStack_a0 = (long ***)param_1;
  ppplStack_98 = (long ***)pppplVar8;
  func_0x00010883b298(&ppplStack_a0,pppplVar13);
  return;
}



/* Entry: 108839efc; end: 108839f4b;  */

undefined8 FUN_108839efc(undefined8 param_1,long param_2)

{
  undefined8 unaff_x19;
  
  param_2 = param_2 + 0x10;
  func_0x000107c29d54(param_2);
  func_0x00010054f8c8(param_1,param_2 + 0x20);
  func_0x000100292164();
  return unaff_x19;
}



/* Entry: 108839f4c; end: 108839f67;  */

bool FUN_108839f4c(long param_1)

{
  func_0x000107c29d48();
  return param_1 != 0;
}



/* Entry: 108839f68; end: 108839f6f;  */

undefined8 FUN_108839f68(void)

{
  return 1;
}



/* Entry: 108839f70; end: 108839fff;  */

void FUN_108839f70(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  if ((*(char *)(param_2 + 0xb0) == '\x01') && (func_0x000107c33d18(), param_2 != 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x000107c27acc(param_1,*(undefined8 *)(param_2 + 0x40));
    plVar1 = (long *)(param_2 + 0x38);
    while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
      if ((*(char *)(plVar1 + 3) == '\x01') && ((*(byte *)((long)plVar1 + 0x19) & 1) == 0)) {
        func_0x000107c28944(param_1,plVar1 + 2);
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10883a000; end: 10883a06b;  */

bool FUN_10883a000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c33d08();
  param_1 = param_1 + 0x10;
  lVar1 = param_1;
  uStack_38 = param_3;
  func_0x000107c29d40();
  lStack_40 = lVar1;
  if (param_1 != lVar1) {
    FUN_1088391d0(param_1,&lStack_40);
  }
  FUN_1088395b4();
  return param_1 != lVar1;
}



/* Entry: 10883a06c; end: 10883a0e3;  */

bool FUN_10883a06c(long param_1)

{
  bool bVar1;
  long unaff_x19;
  
  func_0x000107c33cd8();
  if (unaff_x19 == param_1) {
    bVar1 = false;
  }
  else {
    bVar1 = 1 < *(int *)(param_1 + 0x88);
  }
  return bVar1;
}



/* Entry: 10883a0e4; end: 10883a0eb;  */

undefined8 FUN_10883a0e4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10883a674(&uStack_18,0xffffffffffffffff);
  return uStack_18;
}



/* Entry: 10883a0ec; end: 10883a15f;  */

long FUN_10883a0ec(long param_1)

{
  func_0x00010883ca94();
  FUN_10883bc10();
  return param_1 + 0x28;
}



/* Entry: 10883a160; end: 10883a193;  */

long * FUN_10883a160(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  func_0x00010883a870();
  return plVar2;
}



/* Entry: 10883a194; end: 10883a197;  */

undefined8 * FUN_10883a194(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_110a79f00;
  func_0x000107c28800(param_1 + 0x14);
  func_0x000107c28a6c(param_1 + 0x12);
  plVar3 = (long *)param_1[0xf];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    FUN_10883a794(plVar3 + 2);
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c29b80(param_1 + 0xb);
  plVar3 = (long *)param_1[7];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    FUN_10883a848(plVar3 + 2);
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[5];
  param_1[5] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    plVar3 = (long *)param_1[3];
    plVar1 = *(long **)(param_1[2] + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[4] = 0;
    while (plVar3 != param_1 + 2) {
      plVar3 = (long *)plVar3[1];
      func_0x00010883a870(param_1 + 2);
    }
  }
  return param_1;
}



/* Entry: 10883a198; end: 10883a1bf;  */

void FUN_10883a198(void)

{
  FUN_10883a6a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883a1c0; end: 10883a233;  */

void FUN_10883a1c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107c33d08();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
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



/* Entry: 10883a234; end: 10883a253;  */

void FUN_10883a234(void)

{
  FUN_10883a254();
  return;
}



/* Entry: 10883a254; end: 10883a26f;  */

long * FUN_10883a254(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10883a29c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10883a270; end: 10883a29b;  */

long * FUN_10883a270(long *param_1)

{
  FUN_10883a29c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10883a29c; end: 10883a2bf;  */

void FUN_10883a29c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10883a2c0; end: 10883a303;  */

undefined8 * FUN_10883a2c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_10883a304();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10883a304; end: 10883a39f;  */

long FUN_10883a304(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x000107c33d00();
  FUN_10883a3a0();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10883a234();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  func_0x00010883cd9c();
  lVar2 = unaff_x19[1];
  FUN_10883a270(&plStack_58);
  return lVar2;
}



/* Entry: 10883a3a0; end: 10883a3df;  */

long * FUN_10883a3a0(long *param_1,long *param_2)

{
  long *plVar1;
  long *plStack_38;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  func_0x00010883a1ac();
  plStack_38 = param_1;
  FUN_10883a414(&plStack_38);
  return param_1;
}



/* Entry: 10883a3e0; end: 10883a413;  */

undefined8 FUN_10883a3e0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10883a414(&uStack_28);
  return param_1;
}



/* Entry: 10883a414; end: 10883a42b;  */

void FUN_10883a414(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10883a42c; end: 10883a51b;  */

undefined1  [16]
FUN_10883a42c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long *plStack_50;
  long *plStack_48;
  
  uVar2 = param_1;
  FUN_1086f6b20();
  uVar3 = uVar2;
  func_0x000107c33d08(param_1,param_2,param_5,uVar2,param_6,param_7);
  lVar4 = *param_5;
  while (uVar1 = uVar2, uVar3 != 0) {
    uVar3 = uVar1 >> 1;
    plStack_50 = unaff_x20;
    plStack_48 = unaff_x19;
    FUN_10883a51c(&plStack_50,uVar3);
    uVar2 = uVar3;
    if (*plStack_48 < lVar4) {
      unaff_x19 = plStack_48 + 1;
      if ((long)unaff_x19 - *plStack_50 == 0x1000) {
        plStack_50 = plStack_50 + 1;
        unaff_x19 = (long *)*plStack_50;
      }
      uVar3 = uVar1 + ~uVar3;
      uVar2 = uVar3;
      unaff_x20 = plStack_50;
    }
  }
  auVar5._8_8_ = unaff_x19;
  auVar5._0_8_ = unaff_x20;
  return auVar5;
}



/* Entry: 10883a51c; end: 10883a563;  */

void FUN_10883a51c(long *param_1,long param_2)

{
  ulong uVar1;
  long *extraout_x8;
  long *plVar2;
  long extraout_x9;
  long lVar3;
  
  if (param_2 != 0) {
    uVar1 = param_2 + (param_1[1] - *(long *)*param_1 >> 3);
    if ((long)uVar1 < 1) {
      func_0x00010883cef0();
      plVar2 = extraout_x8;
      lVar3 = extraout_x9;
    }
    else {
      plVar2 = (long *)*param_1 + (uVar1 >> 9);
      lVar3 = *plVar2 + (uVar1 & 0x1ff) * 8;
    }
    *param_1 = (long)plVar2;
    param_1[1] = lVar3;
  }
  return;
}



/* Entry: 10883a564; end: 10883a57f;  */

void FUN_10883a564(long param_1)

{
  FUN_10883a580();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10883a580; end: 10883a5ab;  */

void FUN_10883a580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}



/* Entry: 10883a5ac; end: 10883a5c7;  */

void FUN_10883a5ac(long param_1)

{
  FUN_10883a5c8();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 10883a5c8; end: 10883a64b;  */

void FUN_10883a5c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c33d00();
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  func_0x000107c27994(param_1 + 2,param_2 + 2);
  *(undefined1 *)(unaff_x19 + 0x28) = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c27994(unaff_x19 + 0x30,unaff_x20 + 0x30);
  func_0x000107c279d4(unaff_x19 + 0x48,unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x75) = *(undefined8 *)(unaff_x20 + 0x75);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar1;
  return;
}



/* Entry: 10883a64c; end: 10883a673;  */

undefined8 FUN_10883a64c(undefined8 param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10883a674(&uStack_18,-param_2);
  return uStack_18;
}



/* Entry: 10883a674; end: 10883a6a7;  */

void FUN_10883a674(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (param_2 < 0) {
    for (; param_2 != 0; param_2 = param_2 + 1) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *param_1 = puVar1;
    return;
  }
  while (0 < param_2) {
    puVar1 = (undefined8 *)puVar1[1];
    *param_1 = puVar1;
    param_2 = param_2 + -1;
  }
  return;
}



/* Entry: 10883a6a8; end: 10883a793;  */

undefined8 * FUN_10883a6a8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_110a79f00;
  func_0x000107c28800(param_1 + 0x14);
  func_0x000107c28a6c(param_1 + 0x12);
  plVar3 = (long *)param_1[0xf];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    FUN_10883a794(plVar3 + 2);
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c29b80(param_1 + 0xb);
  plVar3 = (long *)param_1[7];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    FUN_10883a848(plVar3 + 2);
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[5];
  param_1[5] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    plVar3 = (long *)param_1[3];
    plVar1 = *(long **)(param_1[2] + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[4] = 0;
    while (plVar3 != param_1 + 2) {
      plVar3 = (long *)plVar3[1];
      func_0x00010883a870(param_1 + 2);
    }
  }
  return param_1;
}



/* Entry: 10883a794; end: 10883a82f;  */

long FUN_10883a794(long param_1)

{
  long lStack_28;
  
  func_0x00010883a7bc(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10883a830; end: 10883a847;  */

void FUN_10883a830(long *param_1)

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



/* Entry: 10883a848; end: 10883a893;  */

long FUN_10883a848(long param_1)

{
  long lStack_28;
  
  FUN_10883c67c(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10883a894; end: 10883ab7f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010883a970 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_10883a894(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_NG;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong extraout_x8;
  ulong uVar8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x9;
  ulong uVar10;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  long *extraout_x10;
  long *plVar11;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar12;
  ulong uVar13;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar14;
  long *unaff_x23;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x25;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined8 *puStack_68;
  
  func_0x00010883cc70();
  uVar16 = unaff_x19[1];
  uVar10 = param_3;
  if (uVar16 != 0) {
    uVar17 = uVar16 - 1;
    in_NG = (long)(uVar16 & uVar17) < 0;
    uVar5 = (uVar16 & uVar17) == 0;
    if ((bool)uVar5) {
      func_0x00010883ce88();
    }
    else {
      in_NG = (long)(param_3 - uVar16) < 0;
      uVar5 = param_3 == uVar16;
      unaff_x25 = param_3;
      if (uVar16 <= param_3) {
        uVar1 = 0;
        uVar15 = (uint)uVar16;
        if (uVar15 != 0) {
          uVar1 = (uint)param_3 / uVar15;
        }
        unaff_x25 = (ulong)((uint)param_3 - uVar1 * uVar15);
      }
    }
    puVar14 = *(undefined8 **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x21 = (undefined8 *)0x0;
    if (puVar14 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (undefined8 *)*puVar14;
          if (unaff_x21 == (undefined8 *)0x0) goto LAB_10883a93c;
          func_0x00010883cea0();
          puVar14 = unaff_x21;
          if (!(bool)uVar5) break;
          func_0x00010883cdf4();
          if ((uVar10 & 1) != 0) {
            uVar7 = 0;
            goto LAB_10883ab5c;
          }
        }
        if ((uVar16 & uVar17) == 0) {
          uVar8 = extraout_x8 & uVar17;
        }
        else {
          uVar8 = extraout_x8;
          if (uVar16 <= extraout_x8) {
            uVar8 = 0;
            if (uVar16 != 0) {
              uVar8 = extraout_x8 / uVar16;
            }
            uVar8 = extraout_x8 - uVar8 * uVar16;
          }
        }
        in_NG = (long)(uVar8 - unaff_x25) < 0;
        uVar5 = 1;
      } while (uVar8 == unaff_x25);
    }
  }
LAB_10883a93c:
  func_0x00010883ccdc();
  func_0x00010883ceb8();
  func_0x00010883ccd4();
  unaff_x21[8] = 0;
  unaff_x21[7] = 0;
  unaff_x21[6] = 0;
  unaff_x21[5] = 0;
  *(undefined4 *)(unaff_x21 + 9) = 0x3f800000;
  func_0x00010883cb08();
  if ((uVar16 != 0) && (func_0x00010883cd60(param_1,param_2,(float)uVar16), !(bool)in_NG))
  goto LAB_10883aafc;
  func_0x00010883cd48();
  bVar4 = 2 < uVar16;
  bVar6 = uVar16 == 3;
  func_0x00010883caf4();
  uVar17 = extraout_x8_00;
  if (!bVar4 || bVar6) {
    uVar17 = extraout_x9;
  }
  if (uVar17 - 1 == 0) {
    uVar17 = 2;
  }
  else if ((uVar17 & uVar17 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar10 = uVar17;
  }
  uVar16 = unaff_x19[1];
  if (uVar16 < uVar17) {
LAB_10883a9bc:
    if (uVar17 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10883ab70);
      (*pcVar3)();
    }
    __Znwm(uVar17 << 3);
    FUN_10883ab80();
    uVar10 = 0;
    unaff_x19[1] = uVar17;
    while (uVar17 != uVar10) {
      func_0x00010883ce7c();
      uVar10 = extraout_x9_00;
    }
    uVar16 = uVar17;
    if (*unaff_x23 != 0) {
      func_0x00010883ce68();
      func_0x00010883ce54();
      lVar9 = extraout_x8_01;
      uVar10 = extraout_x9_01;
      plVar12 = extraout_x10;
      uVar8 = extraout_x11;
      while (plVar11 = plVar12, plVar12 = (long *)*plVar11, plVar12 != (long *)0x0) {
        uVar13 = plVar12[1];
        if ((uVar17 & uVar10) == 0) {
          uVar13 = uVar13 & uVar10;
        }
        else if (uVar17 <= uVar13) {
          uVar2 = 0;
          if (uVar17 != 0) {
            uVar2 = uVar13 / uVar17;
          }
          uVar13 = uVar13 - uVar2 * uVar17;
        }
        if (uVar13 != uVar8) {
          if (*(long *)(lVar9 + uVar13 * 8) == 0) {
            *(long **)(lVar9 + uVar13 * 8) = plVar11;
            uVar8 = uVar13;
          }
          else {
            *plVar11 = *plVar12;
            func_0x00010883caac();
            lVar9 = extraout_x8_02;
            uVar10 = extraout_x9_02;
            plVar12 = extraout_x10_00;
            uVar8 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (uVar17 < uVar16) {
    func_0x00010883cbd4();
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010883ca48();
    }
    if (uVar17 <= uVar10) {
      uVar17 = uVar10;
    }
    if (uVar17 < uVar16) {
      if (uVar17 != 0) goto LAB_10883a9bc;
      FUN_10883ab80();
      unaff_x19[1] = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = unaff_x19[1];
    }
  }
  if ((uVar16 & uVar16 - 1) == 0) {
    func_0x00010883ce88();
  }
  else {
    unaff_x25 = param_3;
    if (uVar16 <= param_3) {
      uVar10 = 0;
      if (uVar16 != 0) {
        uVar10 = param_3 / uVar16;
      }
      unaff_x25 = param_3 - uVar10 * uVar16;
    }
  }
LAB_10883aafc:
  puVar14 = *(undefined8 **)(*unaff_x19 + unaff_x25 * 8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x00010883cd6c();
    if (extraout_x9_03 != 0) {
      uVar10 = *(ulong *)(extraout_x9_03 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar10 = uVar10 & uVar16 - 1;
      }
      else if (uVar16 <= uVar10) {
        uVar17 = 0;
        if (uVar16 != 0) {
          uVar17 = uVar10 / uVar16;
        }
        uVar10 = uVar10 - uVar17 * uVar16;
      }
      *(undefined8 **)(extraout_x8_03 + uVar10 * 8) = puStack_68;
    }
  }
  else {
    *puStack_68 = *puVar14;
    *puVar14 = puStack_68;
  }
  func_0x00010883ca68();
  FUN_10883ab98();
  uVar7 = 1;
  unaff_x21 = puStack_68;
LAB_10883ab5c:
  auVar18._8_8_ = uVar7;
  auVar18._0_8_ = unaff_x21;
  return auVar18;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081335dc; end: 1081335ff;  */

void FUN_1081335dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x14;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108133600; end: 108133663;  */

void FUN_108133600(void)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001081348c0();
  func_0x0001081348cc();
  lVar1 = *(long *)(unaff_x20 + 0x50);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010813493c();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(unaff_x19 + 0x50) = lVar1;
  lVar1 = *(long *)(unaff_x20 + 0x58);
  if (lVar1 != 0) {
    func_0x0001081348d4();
  }
  *(long *)(unaff_x19 + 0x58) = lVar1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x79);
  *(undefined8 *)(unaff_x19 + 0x81) = *(undefined8 *)(unaff_x20 + 0x81);
  *(undefined8 *)(unaff_x19 + 0x79) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  return;
}



/* Entry: 108133664; end: 108133693;  */

long FUN_108133664(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108133694(param_1,param_1);
  }
  return param_1;
}



/* Entry: 108133694; end: 1081336af;  */

void FUN_108133694(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1081336b0; end: 1081336f7;  */

long * FUN_1081336b0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if (param_2 < (long *)0x333333333333334) {
    uVar1 = (param_1[2] - *param_1) / 0x50;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x199999999999998 < uVar1) {
      plVar2 = (long *)0x333333333333333;
    }
    return plVar2;
  }
  func_0x00010bdb1730();
  func_0x00010014c548();
  func_0x00010813492c();
  func_0x00010813481c();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010813474c();
  return param_1;
}



/* Entry: 1081336f8; end: 108133797;  */

void FUN_1081336f8(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010014c548();
  func_0x00010813492c();
  func_0x00010813481c();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010813474c();
  return;
}



/* Entry: 108133798; end: 10813380b;  */

long * FUN_108133798(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x50;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10813380c; end: 10813385b;  */

void FUN_10813380c(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar4 = 0.0;
  for (; param_1 != param_2; param_1 = param_1 + 0x90) {
    fVar6 = *(float *)(param_1 + 0x10) + (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x18));
    if (fVar6 <= fVar1) {
      fVar6 = fVar1;
    }
    fVar3 = *(float *)(param_1 + 0x30);
    if (fVar2 <= *(float *)(param_1 + 0x30)) {
      fVar3 = fVar2;
    }
    fVar5 = *(float *)(param_1 + 0x34);
    if (*(float *)(param_1 + 0x34) <= fVar4) {
      fVar5 = fVar4;
    }
    fVar1 = fVar6;
    fVar2 = fVar3;
    fVar4 = fVar5;
  }
  return;
}



/* Entry: 10813385c; end: 1081339e7;  */

long * FUN_10813385c(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long extraout_x8;
  int extraout_w11;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  
  plVar9 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  puVar12 = (undefined8 *)(param_2[1] + (((long)plVar1 - (long)plVar9) / -0x38) * 0x38);
  plVar5 = param_1;
  plVar6 = param_2;
  puVar13 = puVar12;
  plVar14 = plVar9;
  do {
    if (plVar14 == plVar1) {
      for (; plVar9 != plVar1; plVar9 = plVar9 + 7) {
        plVar5 = plVar9;
        FUN_10812fa18(plVar9);
      }
      param_2[1] = (long)puVar12;
      lVar8 = *param_1;
      *param_1 = (long)puVar12;
      param_1[1] = lVar8;
      param_2[1] = lVar8;
      lVar8 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar8;
      lVar8 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar8;
      *param_2 = param_2[1];
      return plVar5;
    }
    piVar7 = (int *)*plVar14;
    if (piVar7 != (int *)0x0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = *piVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *puVar13 = piVar7;
    lVar15 = plVar14[2];
    lVar8 = plVar14[1];
    *(undefined8 *)((long)puVar13 + 0x15) = *(undefined8 *)((long)plVar14 + 0x15);
    puVar13[2] = lVar15;
    puVar13[1] = lVar8;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[4] = 0;
    plVar11 = (long *)plVar14[4];
    plVar2 = (long *)plVar14[5];
    lVar8 = (long)plVar2 - (long)plVar11;
    if (lVar8 != 0) {
      plVar5 = (long *)(lVar8 / 0x30);
      if ((long *)0x555555555555555 < plVar5) {
        func_0x00010bdb1718();
        func_0x0001081348c0();
        plVar5[3] = 0;
        plVar5[4] = param_4;
        if (plVar6 == (long *)0x0) {
          param_1 = (long *)0x0;
        }
        else {
          if ((long *)0x492492492492492 < param_1) {
            func_0x000104bfe188();
            lVar8 = plVar5[1];
            while (lVar8 != plVar5[2]) {
              plVar5[2] = plVar5[2] + -0x38;
              FUN_10812fa18();
            }
            if (*plVar5 != 0) {
              __ZdlPv();
            }
            return plVar5;
          }
          param_1 = (long *)((long)param_1 * 0x38);
          __Znwm(param_1);
        }
        func_0x0001081349a0(0x38);
        return param_1;
      }
      func_0x000108133464();
      puVar13[4] = plVar5;
      puVar13[5] = plVar5;
      puVar13[6] = plVar5 + (long)plVar6 * 6;
      plVar10 = plVar5;
      for (; plVar11 != plVar2; plVar11 = plVar11 + 6) {
        lVar8 = *plVar11;
        plVar10[1] = plVar11[1];
        *plVar10 = lVar8;
        lVar8 = plVar11[2];
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x10) != 0)) {
          do {
            func_0x00010813493c();
            lVar8 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        plVar10[2] = lVar8;
        plVar5 = plVar10 + 3;
        plVar6 = plVar11 + 3;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar5);
        plVar10 = plVar10 + 6;
      }
      puVar13[5] = plVar10;
    }
    plVar14 = plVar14 + 7;
    puVar13 = puVar13 + 7;
  } while( true );
}



/* Entry: 1081339e8; end: 108133a47;  */

long * FUN_1081339e8(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ulong unaff_x20;
  long lVar2;
  
  func_0x0001081348c0();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    if (0x492492492492492 < unaff_x20) {
      func_0x000104bfe188();
      lVar2 = param_1[1];
      while (lVar2 != param_1[2]) {
        param_1[2] = param_1[2] + -0x38;
        FUN_10812fa18();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    plVar1 = (long *)(unaff_x20 * 0x38);
    __Znwm(plVar1);
  }
  func_0x0001081349a0(0x38);
  return plVar1;
}



/* Entry: 108133a48; end: 108133a8f;  */

long * FUN_108133a48(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x38;
    FUN_10812fa18();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108133a90; end: 108133b97;  */

void FUN_108133a90(float param_1,float param_2,float param_3,long *param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_58 [8];
  
  FUN_10813380c(param_6,param_7);
  plVar1 = (long *)*param_4;
  uVar2 = *(undefined4 *)param_4[1];
  fVar7 = *(float *)param_4[2];
  while (uVar4 = plVar1[1], uVar4 <= param_5 - 1U) {
    puVar3 = (undefined8 *)(*plVar1 + uVar4 * 0xc);
    if (uVar4 == plVar1[2]) {
      FUN_108133b98(auStack_58,plVar1);
    }
    else {
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      plVar1[1] = plVar1[1] + 1;
    }
  }
  pfVar5 = (float *)(*plVar1 + (param_5 - 1U) * 0xc);
  pfVar5[1] = param_2;
  pfVar5[2] = param_3;
  fVar6 = 0.0;
  switch(uVar2) {
  case 0:
  case 3:
    break;
  case 1:
    fVar6 = fVar7 - param_1;
    break;
  case 2:
    fVar6 = fVar7 * 0.5 - param_1 * 0.5;
    break;
  default:
    goto LAB_108133b7c;
  }
  *pfVar5 = fVar6;
LAB_108133b7c:
  return;
}



/* Entry: 108133b98; end: 108133cef;  */

void FUN_108133b98(ulong param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  ulong extraout_x9;
  undefined8 *puVar4;
  long *plVar5;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  
  if ((ulong)((*(long *)(param_2 + 8) + 1) - *(long *)(param_2 + 0x10)) <=
      0xaaaaaaaaaaaaaaaU - *(long *)(param_2 + 0x10)) {
    func_0x0001081348c0();
    if (extraout_x9 >> 0x3d == 0) {
      puVar4 = (undefined8 *)((extraout_x9 << 3) / 5);
    }
    else {
      puVar4 = (undefined8 *)(extraout_x9 << 3);
      if (4 < extraout_x9 >> 0x3d) {
        puVar4 = (undefined8 *)0xffffffffffffffff;
      }
    }
    lVar6 = *unaff_x20;
    if ((undefined8 *)0xaaaaaaaaaaaaaa9 < puVar4) {
      puVar4 = (undefined8 *)0xaaaaaaaaaaaaaaa;
    }
    puVar1 = extraout_x8;
    if (extraout_x8 <= puVar4) {
      puVar1 = puVar4;
    }
    puVar3 = puVar1;
    FUN_108133cf0();
    plVar2 = (long *)*unaff_x20;
    lVar7 = unaff_x20[1];
    puVar4 = puVar3;
    if ((plVar2 != (long *)0x0) && (plVar2 != param_3)) {
      _memmove(puVar3,plVar2,(long)param_3 - (long)plVar2);
      puVar4 = (undefined8 *)((long)puVar3 + ((long)param_3 - (long)plVar2));
    }
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = 0;
    if ((param_3 != (long *)0x0) &&
       (plVar5 = (long *)((long)plVar2 + lVar7 * 0xc), param_3 != plVar5)) {
      _memmove((long)puVar4 + 0xc,param_3,(long)plVar5 - (long)param_3);
    }
    uStack_78 = 0;
    if ((plVar2 != (long *)0x0) && (unaff_x20 + 3 != plVar2)) {
      __ZdlPv(plVar2);
      lVar7 = unaff_x20[1];
    }
    *unaff_x20 = (long)puVar3;
    unaff_x20[1] = lVar7 + 1;
    unaff_x20[2] = (long)puVar1;
    FUN_108133d1c(&uStack_78);
    *unaff_x19 = (long)param_3 + (*unaff_x20 - lVar6);
    return;
  }
  _abort();
  if (param_1 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 * 0xc);
    return;
  }
  _abort();
  func_0x000108134a6c();
  if ((param_1 != 0) && (unaff_x19[1] + 0x18U != param_1)) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108133cf0; end: 108133d1b;  */

void FUN_108133cf0(ulong param_1)

{
  long unaff_x19;
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 * 0xc);
    return;
  }
  _abort();
  func_0x000108134a6c();
  if ((param_1 != 0) && (*(long *)(unaff_x19 + 8) + 0x18U != param_1)) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108133d1c; end: 108133d4f;  */

void FUN_108133d1c(long param_1)

{
  long unaff_x19;
  
  func_0x000108134a6c();
  if ((param_1 != 0) && (*(long *)(unaff_x19 + 8) + 0x18 != param_1)) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108133d50; end: 108133e1f;  */

void FUN_108133d50(long param_1,long param_2)

{
  ulong unaff_x19;
  ulong unaff_x20;
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auStack_e0 [80];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  func_0x00010014c548();
  fVar3 = *(float *)(param_1 + 0x10);
  uVar2 = unaff_x20;
  uVar1 = unaff_x19;
  if (param_1 != param_2) {
    for (; uVar1 = uVar1 - 0x90, uVar2 < uVar1; uVar2 = uVar2 + 0x90) {
      func_0x0001081348cc(auStack_e0,uVar2);
      uStack_88 = *(undefined8 *)(uVar2 + 0x58);
      uStack_90 = *(undefined8 *)(uVar2 + 0x50);
      uStack_78 = *(undefined8 *)(uVar2 + 0x68);
      uStack_80 = *(undefined8 *)(uVar2 + 0x60);
      *(undefined8 *)(uVar2 + 0x50) = 0;
      *(undefined8 *)(uVar2 + 0x58) = 0;
      uStack_70 = *(undefined8 *)(uVar2 + 0x70);
      uStack_68 = (undefined1)*(undefined8 *)(uVar2 + 0x78);
      uStack_5f = *(undefined8 *)(uVar2 + 0x81);
      uStack_67 = (undefined7)*(undefined8 *)(uVar2 + 0x79);
      uStack_60 = (undefined1)((ulong)*(undefined8 *)(uVar2 + 0x79) >> 0x38);
      func_0x000108132cc8(uVar2,uVar1);
      func_0x000108132cc8(uVar1,auStack_e0);
      func_0x000108132a10(auStack_e0);
    }
  }
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x90) {
    *(float *)(unaff_x20 + 0x10) = fVar3;
    fVar3 = fVar3 + (*(float *)(unaff_x20 + 0x20) - *(float *)(unaff_x20 + 0x18));
  }
  return;
}



/* Entry: 108133e20; end: 108133e43;  */

void FUN_108133e20(undefined8 *param_1)

{
  func_0x0001077feacc(param_1,*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}



/* Entry: 108133e44; end: 108133e93;  */

void FUN_108133e44(long param_1,ulong param_2)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (0x155555555555555 < param_2) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x108133e68;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (0x155555555555555 < param_2) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010772e264();
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x18) = 0x108133e94;
    func_0x000108133eb8();
    *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x60);
  return;
}



/* Entry: 108133e94; end: 108133f43;  */

void FUN_108133e94(long param_1,long param_2)

{
  func_0x000108133eb8();
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  return;
}



/* Entry: 108133f44; end: 108133fdf;  */

void FUN_108133f44(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x19;
  ulong uVar7;
  
  func_0x0001081348c0();
  uVar7 = (long)(param_3 - param_2) >> 5;
  if (uVar7 <= *(ulong *)(param_1 + 0x10)) {
    func_0x000108134a4c();
    func_0x000108134040();
    unaff_x19[1] = uVar7;
    return;
  }
  puVar2 = unaff_x19;
  uVar4 = uVar7;
  FUN_1081340a8();
  plVar3 = (long *)*unaff_x19;
  if ((plVar3 != (long *)0x0) && (unaff_x19[1] = 0, unaff_x19 + 3 != plVar3)) {
    __ZdlPv();
  }
  unaff_x19[1] = 0;
  unaff_x19[2] = uVar7;
  *unaff_x19 = puVar2;
  func_0x000108134a4c();
  lVar5 = plVar3[1];
  lVar1 = *plVar3 + lVar5 * 0x20;
  lVar6 = lVar1;
  if (((uVar4 != 0) && (uVar4 != param_3)) && (*plVar3 != 0)) {
    _memmove(lVar1);
    lVar5 = plVar3[1];
    lVar6 = lVar1 + (param_3 - uVar4);
  }
  plVar3[1] = lVar5 + (lVar6 - lVar1 >> 5);
  return;
}



/* Entry: 108133fe0; end: 1081340a7;  */

void FUN_108133fe0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  lVar1 = *param_1 + lVar2 * 0x20;
  lVar3 = lVar1;
  if (((param_2 != 0) && (param_2 != param_3)) && (*param_1 != 0)) {
    _memmove(lVar1,param_2,param_3 - param_2);
    lVar2 = param_1[1];
    lVar3 = lVar1 + (param_3 - param_2);
  }
  param_1[1] = lVar2 + (lVar3 - lVar1 >> 5);
  return;
}



/* Entry: 1081340a8; end: 1081340db;  */

void FUN_1081340a8(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lVar2;
  
  if (param_2 >> 0x3a != 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1081340c0;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (param_2 >> 0x3a != 0) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010772e264();
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_1081340dc;
    func_0x0001081348c0();
    if (param_2 != param_1) {
      puVar1 = (undefined8 *)*unaff_x20;
      if (unaff_x20 + 3 == puVar1) {
        FUN_108133f44();
        unaff_x20[1] = 0;
      }
      else {
        unaff_x19[1] = 0;
        if (*unaff_x19 != 0) {
          func_0x0001077feb30();
          puVar1 = (undefined8 *)*unaff_x20;
        }
        *unaff_x19 = (long)puVar1;
        lVar2 = unaff_x20[1];
        unaff_x19[2] = unaff_x20[2];
        unaff_x19[1] = lVar2;
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
      }
    }
    *(undefined1 *)(unaff_x19 + 0xb) = *(undefined1 *)(unaff_x20 + 0xb);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 5);
  return;
}



/* Entry: 1081340dc; end: 108134167;  */

void FUN_1081340dc(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001081348c0();
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)*unaff_x20;
    if (unaff_x20 + 3 == puVar1) {
      FUN_108133f44();
      unaff_x20[1] = 0;
    }
    else {
      unaff_x19[1] = 0;
      if (*unaff_x19 != 0) {
        func_0x0001077feb30();
        puVar1 = (undefined8 *)*unaff_x20;
      }
      *unaff_x19 = (long)puVar1;
      lVar2 = unaff_x20[1];
      unaff_x19[2] = unaff_x20[2];
      unaff_x19[1] = lVar2;
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
    }
  }
  *(undefined1 *)(unaff_x19 + 0xb) = *(undefined1 *)(unaff_x20 + 0xb);
  return;
}



/* Entry: 108134168; end: 108134347;  */

void FUN_108134168(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack0000000000000020;
  long in_stack_00000028;
  
  func_0x000108134a78();
  lVar2 = param_1[1];
  lVar8 = *(long *)(lVar2 + 0x90);
  *(undefined8 *)(*param_1 + 8) = 0;
  lVar5 = *(long *)(lVar2 + 0x98);
  lVar6 = param_2[2];
  for (; param_2 != param_3; param_2 = param_2 + 0x12) {
    plVar14 = (long *)*param_1;
    lVar15 = *(long *)(lVar2 + 0x78) + *param_2 * 0x14;
    lVar9 = 0;
    for (lVar13 = param_2[1] * 0x14; lVar13 != 0; lVar13 = lVar13 + -0x14) {
      uVar4 = *(uint *)(lVar15 + 0x10) & 0x7fffffff;
      FUN_108139a4c();
      if (uVar4 == 0) {
        lVar16 = lVar15;
        if (lVar9 != 0) {
          lVar16 = lVar9;
        }
      }
      else {
        if (lVar9 != 0) {
          func_0x000108134a58();
          FUN_108134348();
        }
        lVar9 = *(long *)(lVar2 + 0x98) - *(long *)(lVar2 + 0x90);
        if (((lVar9 != 0) &&
            (lVar9 = lVar9 / 0x90, in_stack_00000028 = lVar9 + -1,
            *(long *)(*(long *)(lVar2 + 0x90) + lVar9 * 0x90 + -0x68) == param_2[5])) &&
           ((plVar14[1] == 0 || (*(long *)(*plVar14 + plVar14[1] * 8 + -8) != in_stack_00000028))))
        {
          FUN_108134484(plVar14,&stack0x00000028);
        }
        lVar16 = 0;
      }
      lVar15 = lVar15 + 0x14;
      lVar9 = lVar16;
    }
    if (lVar9 != 0) {
      func_0x000108134a58();
      FUN_108134348();
    }
  }
  uVar7 = ((long *)*param_1)[1];
  if (uVar7 != 0) {
    lVar15 = 0;
    uVar3 = (*(long *)(lVar2 + 0x98) - *(long *)(lVar2 + 0x90)) / 0x90;
    lVar9 = *(long *)*param_1;
    uVar10 = (lVar5 - lVar8) / 0x90;
    fStack0000000000000020 = (float)lVar6;
    fVar17 = *(float *)param_1[2];
    uVar1 = uVar7 - 1;
    if (*(long *)(lVar9 + (uVar7 - 1) * 8) != uVar3 - 1) {
      uVar1 = uVar7;
    }
    pfVar11 = (float *)(*(long *)(lVar2 + 0x90) + uVar10 * 0x90 + 0x10);
    fVar18 = 0.0;
    for (; uVar10 < uVar3; uVar10 = uVar10 + 1) {
      *pfVar11 = fVar18 + *pfVar11;
      uVar12 = *(ulong *)(lVar9 + lVar15 * 8);
      fVar19 = (fVar17 - fStack0000000000000020) / (float)uVar1 + fVar18;
      if (uVar10 != uVar12) {
        fVar19 = fVar18;
      }
      if (lVar15 + 1U < uVar7 && uVar10 == uVar12) {
        lVar15 = lVar15 + 1;
      }
      pfVar11 = pfVar11 + 0x24;
      fVar18 = fVar19;
    }
  }
  return;
}



/* Entry: 108134348; end: 108134483;  */

void FUN_108134348(float param_1,long param_2,long param_3,long param_4,long param_5,float *param_6,
                  long *param_7)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  uVar1 = param_7[1];
  if (uVar1 < (ulong)param_7[2]) {
    FUN_108133600(uVar1,param_2);
    lVar2 = uVar1 + 0x90;
  }
  else {
    FUN_108132b10(param_7,(long)(uVar1 - *param_7) / 0x90 + 1);
    func_0x000108134868(param_7[1]);
    FUN_108133600(lStack_68,param_2);
    func_0x00010813494c(lStack_68 + 0x90);
    FUN_108132b68(param_7);
    lVar2 = param_7[1];
    func_0x000108132c80(auStack_78);
  }
  param_7[1] = lVar2;
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined8 *)(lVar2 + -0x80) = *(undefined8 *)param_6;
    param_1 = *param_6 + (*(float *)(param_2 + 0x20) - *(float *)(param_2 + 0x18));
  }
  else {
    *(long *)(lVar2 + -0x90) = (param_4 - param_3) / 0x14;
    *(long *)(lVar2 + -0x88) = (param_5 - param_4) / 0x14;
    *(undefined8 *)(lVar2 + -0x80) = *(undefined8 *)param_6;
    FUN_108130698(param_4);
    *(float *)(lVar2 + -0x70) = param_1 + *(float *)(lVar2 + -0x78);
    *(float *)(lVar2 + -0x6c) =
         *(float *)(lVar2 + -0x74) + (*(float *)(lVar2 + -0x6c) - *(float *)(lVar2 + -0x74));
    param_1 = param_1 + *param_6;
  }
  *param_6 = param_1;
  return;
}



/* Entry: 108134484; end: 1081344df;  */

undefined8 * FUN_108134484(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_18;
  
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 8);
  if (param_1[1] == param_1[2]) {
    FUN_1081344e0(&puStack_18,param_1,puVar1,1);
  }
  else {
    *puVar1 = *param_2;
    param_1[1] = param_1[1] + 1;
    puStack_18 = puVar1;
  }
  return puStack_18;
}



/* Entry: 1081344e0; end: 10813455b;  */

void FUN_1081344e0(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  plVar1 = param_2;
  FUN_10813455c(param_2,param_4);
  plVar2 = param_2;
  func_0x0001081345c4(param_2,plVar1);
  FUN_1081345dc(param_2,plVar2,plVar1,param_3,param_4,param_5);
  *param_1 = *param_2 + (param_3 - lVar3);
  return;
}



/* Entry: 10813455c; end: 1081345db;  */

ulong * FUN_10813455c(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5,
                     long param_6,ulong *param_7)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uStack_78;
  ulong *puStack_70;
  ulong uStack_68;
  
  uVar2 = param_1[2];
  if ((param_2 - uVar2) + param_1[1] <= 0xfffffffffffffff - uVar2) {
    if (uVar2 >> 0x3d == 0) {
      puVar3 = (ulong *)((uVar2 << 3) / 5);
    }
    else {
      puVar3 = (ulong *)(uVar2 << 3);
      if (4 < uVar2 >> 0x3d) {
        puVar3 = (ulong *)0xffffffffffffffff;
      }
    }
    puVar1 = (ulong *)(param_1[1] + param_2);
    if ((ulong *)0xffffffffffffffe < puVar3) {
      puVar3 = (ulong *)0xfffffffffffffff;
    }
    if (puVar1 <= puVar3) {
      puVar1 = puVar3;
    }
    return puVar1;
  }
  _abort();
  if (param_2 >> 0x3c != 0) {
    _abort();
    uVar2 = *param_1;
    puStack_70 = param_1;
    uStack_68 = param_3;
    FUN_108134690();
    uStack_78 = 0;
    if (uVar2 != 0) {
      FUN_108133694(param_1,param_1,param_1[2]);
    }
    *param_1 = param_2;
    param_1[1] = param_1[1] + (long)param_5;
    param_1[2] = param_3;
    puVar3 = &uStack_78;
    FUN_108134718(puVar3);
    return puVar3;
  }
  if (param_2 >> 0x3c == 0) {
    puVar3 = (ulong *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar3);
    return puVar3;
  }
  func_0x00010772e264();
  if (((param_2 != 0) && (param_2 != param_3)) && (param_5 != (ulong *)0x0)) {
    param_1 = param_5;
    _memmove(param_5);
    param_5 = (ulong *)((long)param_5 + (param_3 - param_2));
  }
  *param_5 = *param_7;
  if ((param_3 != 0) && (param_3 != param_4)) {
    param_5 = param_5 + param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_5,param_3,param_4 - param_3);
    return param_5;
  }
  return param_1;
}



/* Entry: 1081345dc; end: 108134673;  */

void FUN_1081345dc(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  lVar1 = *param_1;
  plStack_50 = param_1;
  lStack_48 = param_3;
  FUN_108134690(param_1,lVar1,param_4,lVar1 + param_1[1] * 8,param_2,param_5,param_6);
  uStack_58 = 0;
  if (lVar1 != 0) {
    FUN_108133694(param_1,param_1,param_1[2]);
  }
  *param_1 = param_2;
  param_1[1] = param_1[1] + param_5;
  param_1[2] = param_3;
  FUN_108134718(&uStack_58);
  return;
}



/* Entry: 108134674; end: 10813468f;  */

void FUN_108134674(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 *param_5,
                  long param_6,undefined8 *param_7)

{
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x00010772e264();
  if (((param_2 != 0) && (param_2 != param_3)) && (param_5 != (undefined8 *)0x0)) {
    _memmove(param_5);
    param_5 = (undefined8 *)((long)param_5 + (param_3 - param_2));
  }
  *param_5 = *param_7;
  if ((param_3 != 0) && (param_3 != param_4)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_5 + param_6,param_3,param_4 - param_3);
    return;
  }
  return;
}



/* Entry: 108134690; end: 108134717;  */

void FUN_108134690(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 *param_5,
                  long param_6,undefined8 *param_7)

{
  if (((param_2 != 0) && (param_2 != param_3)) && (param_5 != (undefined8 *)0x0)) {
    _memmove(param_5,param_2,param_3 - param_2);
    param_5 = (undefined8 *)((long)param_5 + (param_3 - param_2));
  }
  *param_5 = *param_7;
  if ((param_3 != 0) && (param_3 != param_4)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_5 + param_6,param_3,param_4 - param_3);
    return;
  }
  return;
}



/* Entry: 108134718; end: 10813474b;  */

void FUN_108134718(long param_1)

{
  long unaff_x19;
  
  func_0x000108134a6c();
  if ((param_1 != 0) && (*(long *)(unaff_x19 + 8) + 0x18 != param_1)) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10813474c; end: 108134a93;  */

void FUN_10813474c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  unaff_x19[1] = param_1;
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108134a94; end: 108134c0b;  */

void FUN_108134a94(long *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_24 = 2;
  if (param_2 == 0) {
    uStack_24 = 0;
  }
  func_0x000108134b18(&uStack_30);
  func_0x000108134b44(&lStack_38,&uStack_30,&uStack_24);
  if (lStack_38 == 0) {
    lVar4 = 0;
  }
  else {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lVar4 = lStack_38;
    } while (cVar2 != '\0');
  }
  *param_1 = lStack_38;
  func_0x000108134bdc(lVar4);
  func_0x000108134bb8(uStack_30);
  return;
}



/* Entry: 108134c0c; end: 108134ca7;  */

long FUN_108134c0c(float param_1,ulong param_2,long param_3,int param_4,long param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 0xc6a4a7935bd1e995;
  uVar1 = 0;
  if (param_1 != 0.0) {
    uVar1 = (ulong)(uint)param_1 * -0x395b586ca42e166b;
  }
  if (param_4 == 0) {
    uVar2 = 0;
  }
  FUN_108135040(param_5,param_5 + param_6 * 4);
  return ((param_5 * -0x395b586ca42e166b ^ (ulong)(param_5 * -0x395b586ca42e166b) >> 0x2f) *
          -0x395b586ca42e166b ^
         ((((uVar1 ^ uVar1 >> 0x2f) * -0x395b586ca42e166b ^ param_2) * -0x395b586ca42e166b +
           0xe6546b64 ^
          (param_3 * -0x395b586ca42e166b ^ (ulong)(param_3 * -0x395b586ca42e166b) >> 0x2f) *
          -0x395b586ca42e166b) * -0x395b586ca42e166b + 0xe6546b64 ^
         (uVar2 ^ uVar2 >> 0x2f) * -0x395b586ca42e166b) * -0x395b586ca42e166b + 0xe6546b64) *
         -0x395b586ca42e166b + 0xe6546b64;
}



/* Entry: 108134ca8; end: 108134d27;  */

undefined8 *
FUN_108134ca8(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  FUN_108134c0c(param_3,param_4,param_5,param_6,param_7);
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 1) = param_1;
  *(undefined4 *)((long)param_2 + 0xc) = param_4;
  *(char *)(param_2 + 2) = (char)param_5;
  param_2[3] = param_6;
  param_2[4] = param_7;
  param_2[5] = uVar1;
  return param_2;
}



/* Entry: 108134d28; end: 108134e43;  */

void FUN_108134d28(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,long param_6,long param_7,long param_8,long param_9,
                  undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  
  puVar1 = (undefined8 *)(param_7 * 4 + 0x60 + param_9 * 0x14);
  puVar3 = puVar1;
  __Znwm();
  if (param_6 != 0) {
    _memcpy(puVar3 + 0xc,param_6,param_7 * 4);
  }
  lVar2 = (long)puVar3 + (long)puVar1 + param_9 * -0x14;
  if (param_8 != 0) {
    _memcpy(lVar2,param_8,param_9 * 0x14);
  }
  puVar3[1] = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = param_3;
  *(undefined4 *)(puVar3 + 5) = param_2;
  *(undefined4 *)((long)puVar3 + 0x2c) = param_4;
  *(undefined1 *)(puVar3 + 6) = param_5;
  puVar3[7] = puVar3 + 0xc;
  puVar3[8] = param_7;
  puVar3[9] = param_10;
  puVar3[10] = lVar2;
  puVar3[0xb] = param_9;
  *puVar3 = &PTR_FUN_110a264f8;
  do {
    func_0x00010813610c();
  } while (extraout_w10 != 0);
  *param_1 = puVar3;
  return;
}



/* Entry: 108134e44; end: 108134fab;  */

void FUN_108134e44(long param_1)

{
  int extraout_w11;
  undefined1 auStack_28 [8];
  
  FUN_1081353bc();
  while (*(long *)(param_1 + 0x38) != 0) {
    do {
      func_0x0001081360c4();
    } while (extraout_w11 != 0);
    func_0x00010813525c(param_1 + 0x30,auStack_28);
    func_0x0001081360d4();
  }
  return;
}



/* Entry: 108134fac; end: 108135027;  */

void FUN_108134fac(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_38;
  
  FUN_108135828(param_2,*param_3 + 0x20);
  func_0x0001081357c0();
  uStack_38 = 0;
  if (*param_3 != 0) {
    do {
      func_0x0001081360c4();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x0001081356c4(param_1,param_2,&uStack_38);
  func_0x0001081360d4();
  FUN_108135850(param_2);
  return;
}



/* Entry: 108135028; end: 10813502b;  */

undefined8 * FUN_108135028(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7e800;
  func_0x00010b9a0948();
  func_0x00010b9a0a78(param_1 + 3);
  return param_1;
}



/* Entry: 10813502c; end: 10813503f;  */

void FUN_10813502c(void)

{
  func_0x00010b9a0910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108135040; end: 1081351bb;  */

void FUN_108135040(long param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x0001003af524(&uStack_11,param_1,param_2 - param_1);
  return;
}



/* Entry: 1081351bc; end: 1081352f7;  */

long FUN_1081351bc(long param_1)

{
  func_0x0001081351e8(param_1 + 0x30);
  FUN_10813531c(param_1);
  return param_1;
}



/* Entry: 1081352f8; end: 10813531b;  */

void FUN_1081352f8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081360fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10813531c; end: 108135397;  */

void FUN_10813531c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 0x30;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        func_0x000108135804(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0x38;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 108135398; end: 1081353bb;  */

void FUN_108135398(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081360fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1081353bc; end: 10813547f;  */

void FUN_1081353bc(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1[2] != 0) {
    uVar3 = param_1[3];
    if (0x7f < uVar3) {
      lVar1 = param_1[3];
      if (lVar1 != 0) {
        lVar4 = 0x30;
        for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
          if (-1 < *(char *)(*param_1 + lVar2)) {
            func_0x000108135804(param_1[1] + lVar4);
            lVar1 = param_1[3];
          }
          lVar4 = lVar4 + 0x38;
        }
        __ZdlPv();
        param_1[5] = 0;
        *param_1 = (long)&UNK_10dd5b8b0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      return;
    }
    if (uVar3 != 0) {
      lVar1 = 0x30;
      for (uVar5 = 0; uVar5 != uVar3; uVar5 = uVar5 + 1) {
        if (-1 < *(char *)(*param_1 + uVar5)) {
          func_0x000108135804(param_1[1] + lVar1);
          uVar3 = param_1[3];
        }
        lVar1 = lVar1 + 0x38;
      }
      param_1[2] = 0;
      _memset(*param_1,0x80,uVar3 + 8);
      *(undefined1 *)(*param_1 + uVar3) = 0xff;
      uVar3 = param_1[3];
      lVar1 = 6;
      if (uVar3 != 7) {
        lVar1 = uVar3 - (uVar3 >> 3);
      }
      param_1[5] = lVar1 - param_1[2];
    }
  }
  return;
}



/* Entry: 108135480; end: 1081354a3;  */

void FUN_108135480(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_108135674(&lStack_18);
  return;
}



/* Entry: 1081354a4; end: 1081354f7;  */

long FUN_1081354a4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_1081354f8();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1081354f8; end: 1081355e7;  */

bool FUN_1081354f8(long *param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_68;
  
  lStack_68 = 0;
  uVar2 = param_3 >> 7;
  uVar5 = param_1[3];
  lVar6 = *param_1;
  while( true ) {
    uVar2 = uVar2 & uVar5;
    uVar7 = *(ulong *)(lVar6 + uVar2);
    uVar3 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar3 = uVar3 + 0xfefefefefefefeff & (uVar3 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar1 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar5;
      *param_4 = uVar4;
      uVar1 = param_2;
      FUN_1081355e8(param_2,param_1[1] + uVar4 * 0x38);
      if ((uVar1 & 1) != 0) goto LAB_1081355c0;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lStack_68 = lStack_68 + 8;
    uVar2 = lStack_68 + uVar2;
  }
LAB_1081355c0:
  return uVar3 != 0;
}



/* Entry: 1081355e8; end: 108135673;  */

bool FUN_1081355e8(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  if ((((*param_2 == *param_1) && (*(float *)(param_2 + 1) == *(float *)(param_1 + 1))) &&
      ((bool)(char)param_1[2] ==
       ((bool)(char)param_2[2] != (*(int *)((long)param_2 + 0xc) != *(int *)((long)param_1 + 0xc))))
      ) && (lVar4 = param_2[4], lVar4 == param_1[4])) {
    piVar5 = (int *)param_1[3];
    piVar6 = (int *)param_2[3];
    do {
      bVar3 = lVar4 == 0;
      if (lVar4 == 0) {
        return bVar3;
      }
      iVar1 = *piVar6;
      iVar2 = *piVar5;
      lVar4 = lVar4 + -1;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar1 == iVar2);
    return bVar3;
  }
  return false;
}



/* Entry: 108135674; end: 108135693;  */

void FUN_108135674(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 108135694; end: 108135827;  */

long FUN_108135694(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar2 = param_1;
  FUN_108135480();
  plVar1 = param_1;
  FUN_1081354f8(param_1,param_2,plVar2,&lStack_28);
  if ((int)plVar1 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 108135828; end: 10813584f;  */

long FUN_108135828(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_108135890(auStack_28);
  return lStack_20 + 0x30;
}



/* Entry: 108135850; end: 10813588f;  */

void FUN_108135850(long param_1)

{
  while (*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x10)) {
    FUN_108135e5c(param_1,*(long *)(param_1 + 0x38) + 0x20);
  }
  return;
}



/* Entry: 108135890; end: 108135a0f;  */

void FUN_108135890(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  plVar2 = param_2;
  FUN_108135480();
  lVar7 = 0;
  uVar4 = (ulong)plVar2 >> 7;
  uVar8 = param_2[3];
  lVar11 = *param_2;
  while( true ) {
    uVar4 = uVar4 & uVar8;
    uVar9 = *(ulong *)(lVar11 + uVar4);
    uVar5 = uVar9 ^ ((ulong)plVar2 & 0x7f) * 0x101010101010101;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar1 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar12 = param_2[1];
      plVar10 = (long *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar8);
      puVar6 = param_3;
      FUN_1081355e8(param_3,lVar12 + (long)plVar10 * 0x38);
      if (((ulong)puVar6 & 1) != 0) {
        uVar3 = 0;
        goto LAB_108135980;
      }
    }
    if ((uVar9 & ~uVar9 << 6 & 0x8080808080808080) != 0) break;
    lVar7 = lVar7 + 8;
    uVar4 = lVar7 + uVar4;
  }
  plVar10 = param_2;
  FUN_108135a10(param_2,plVar2);
  puVar6 = (undefined8 *)(param_2[1] + (long)plVar10 * 0x38);
  uVar14 = param_3[1];
  uVar13 = *param_3;
  uVar15 = param_3[2];
  uVar17 = param_3[5];
  uVar16 = param_3[4];
  puVar6[3] = param_3[3];
  puVar6[2] = uVar15;
  puVar6[5] = uVar17;
  puVar6[4] = uVar16;
  puVar6[1] = uVar14;
  *puVar6 = uVar13;
  puVar6[6] = 0;
  *(byte *)(*param_2 + (long)plVar10) = (byte)plVar2 & 0x7f;
  func_0x0001081360dc();
  lVar11 = *param_2;
  lVar12 = param_2[1];
  uVar3 = 1;
LAB_108135980:
  *param_1 = lVar11 + (long)plVar10;
  param_1[1] = lVar12 + (long)plVar10 * 0x38;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}



/* Entry: 108135a10; end: 108135ad7;  */

void FUN_108135a10(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_108135ad8(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_108135a58;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_108135a58;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_108135aac:
    FUN_108135b18(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_108135aac;
    }
    func_0x000108135c44(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_108135ad8(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_108135a58:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 108135ad8; end: 108135b17;  */

ulong FUN_108135ad8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 108135b18; end: 108135e17;  */

void FUN_108135b18(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x38;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_108135e18();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_108135ad8(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_108135e38(param_1[1] + lVar4 * 0x38,lVar5);
    }
    lVar5 = lVar5 + 0x38;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108135e18; end: 108135e37;  */

void FUN_108135e18(long param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108135e38; end: 108135e5b;  */

undefined8 * FUN_108135e38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2 = param_2 + 6;
  param_1[6] = *param_2;
  *param_2 = 0;
  FUN_1081352f8(*param_2);
  return param_2;
}



/* Entry: 108135e5c; end: 108135f43;  */

bool FUN_108135e5c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  long lVar4;
  long lStack_38;
  
  plVar1 = param_1;
  FUN_108135694();
  lVar2 = *param_1;
  lVar3 = param_1[3];
  if ((long *)(lVar2 + lVar3) != plVar1) {
    lVar4 = *(long *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    func_0x000108135ef0(param_1,plVar1,param_2);
    if (lVar4 != 0) {
      do {
        func_0x00010813610c();
      } while (extraout_w10 != 0);
    }
    lStack_38 = lVar4;
    func_0x00010813525c(param_1 + 6,&lStack_38);
    func_0x0001081360d4();
    FUN_1081352f8(lVar4);
  }
  return (long *)(lVar2 + lVar3) != plVar1;
}



/* Entry: 108135f44; end: 108135f77;  */

long * FUN_108135f44(long *param_1)

{
  param_1[1] = param_1[1] + 0x38;
  *param_1 = *param_1 + 1;
  FUN_108135fb8();
  return param_1;
}



/* Entry: 108135f78; end: 108135fb7;  */

void FUN_108135f78(long *param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x000108135804(param_3 + 0x30);
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 108135fb8; end: 10813600b;  */

void FUN_108135fb8(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x0001003acc00();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x38;
  }
  return;
}



/* Entry: 10813600c; end: 10813611b;  */

void FUN_10813600c(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10813611c; end: 108137013;  */

undefined8 * FUN_10813611c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110a26558;
  param_1[2] = 0x32aaaba7;
  param_1[1] = 1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  puVar1 = param_1;
  func_0x0001096f6e38();
  param_1[0xb] = puVar1;
  return param_1;
}



/* Entry: 108137014; end: 108137157;  */

void FUN_108137014(long param_1,ulong *param_2,long *param_3,undefined1 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uStack_38;
  
  func_0x000108137bf4();
  *(undefined8 *)(param_1 + 0x10) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar4 = (long *)*param_2;
  *param_2 = 0;
  *(long **)(unaff_x19 + 0x58) = plVar4;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  lVar5 = *param_3;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = *(long **)(unaff_x19 + 0x58);
  }
  *(long *)(unaff_x19 + 0x68) = lVar5;
  (**(code **)(*plVar4 + 0x28))();
  func_0x00010812dc88(unaff_x19 + 0x70,(ulong)plVar4 & 0xffffffff);
  plVar4 = (long *)(unaff_x19 + 0x78);
  *plVar4 = 0;
  *(undefined1 *)(unaff_x19 + 0x73) = param_4;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined **)(unaff_x19 + 0x88) = &UNK_10dd5b8b0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  func_0x00010812e774(&uStack_38,*(undefined8 *)(unaff_x19 + 0x58));
  func_0x00010812e560(plVar4,&uStack_38);
  func_0x00010812e53c(&uStack_38);
  if (*plVar4 != 0) {
    func_0x00010812e868(&uStack_38,*(undefined8 *)(unaff_x19 + 0x58),plVar4);
    func_0x00010812e724(unaff_x19 + 0x80,&uStack_38);
    func_0x00010812e700(&uStack_38);
  }
  func_0x00010812e58c(&uStack_38,plVar4);
  FUN_108137158((undefined8 *)(unaff_x19 + 0x60),&uStack_38);
  FUN_1081374b8(uStack_38);
  lVar5 = unaff_x19;
  FUN_108137190();
  *(char *)(unaff_x19 + 0x74) = (char)lVar5;
  return;
}



/* Entry: 108137158; end: 10813718f;  */

undefined8 * FUN_108137158(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_1081374b8(uVar1);
  }
  return param_1;
}



/* Entry: 108137190; end: 108137197;  */

uint FUN_108137190(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x60);
  uVar1 = param_2 >> 8;
  if ((*(uint *)(lVar2 + 0x10) <= uVar1) && (uVar1 <= *(uint *)(lVar2 + 0x14))) {
    return *(uint *)(*(long *)(lVar2 + 0x20) +
                     (ulong)*(ushort *)
                             (*(long *)(lVar2 + 0x18) + (ulong)(uVar1 - *(uint *)(lVar2 + 0x10)) * 2
                             ) * 0x20 + (ulong)(param_2 >> 5 & 7) * 4) >> (ulong)(param_2 & 0x1f) &
           1;
  }
  return 0;
}



/* Entry: 108137198; end: 108137207;  */

void FUN_108137198(long param_1)

{
  long unaff_x19;
  
  func_0x000108137bf4();
  if (*(long *)(param_1 + 0xa0) != 0) {
    __ZdlPv(*(undefined8 *)(unaff_x19 + 0x88));
    *(undefined8 *)(unaff_x19 + 0xb0) = 0;
    *(undefined **)(unaff_x19 + 0x88) = &UNK_10dd5b8b0;
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
    *(undefined8 *)(unaff_x19 + 0x98) = 0;
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  }
  func_0x00010812e700(unaff_x19 + 0x80);
  func_0x00010812e53c(unaff_x19 + 0x78);
  func_0x0001003a8c94(unaff_x19 + 0x68);
  FUN_108137494(unaff_x19 + 0x60);
  func_0x0001081298a0(unaff_x19 + 0x58);
  func_0x00010b9a1f08(unaff_x19 + 0x10);
  return;
}



/* Entry: 108137208; end: 10813720b;  */

void FUN_108137208(long param_1)

{
  long unaff_x19;
  
  func_0x000108137bf4();
  if (*(long *)(param_1 + 0xa0) != 0) {
    __ZdlPv(*(undefined8 *)(unaff_x19 + 0x88));
    *(undefined8 *)(unaff_x19 + 0xb0) = 0;
    *(undefined **)(unaff_x19 + 0x88) = &UNK_10dd5b8b0;
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
    *(undefined8 *)(unaff_x19 + 0x98) = 0;
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  }
  func_0x00010812e700(unaff_x19 + 0x80);
  func_0x00010812e53c(unaff_x19 + 0x78);
  func_0x0001003a8c94(unaff_x19 + 0x68);
  FUN_108137494(unaff_x19 + 0x60);
  func_0x0001081298a0(unaff_x19 + 0x58);
  func_0x00010b9a1f08(unaff_x19 + 0x10);
  return;
}



/* Entry: 10813720c; end: 10813721f;  */

void FUN_10813720c(void)

{
  FUN_108137198();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108137220; end: 10813746b;  */

void FUN_108137220(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_30;
  long *plStack_28;
  
  (**(code **)(**(long **)(param_2 + 0x58) + 0x68))
            (&plStack_28,*(long **)(param_2 + 0x58),&lStack_30);
  if (plStack_28 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    plVar1 = plStack_28;
    (**(code **)(*plStack_28 + 0x58))();
    func_0x000104bd9060(&lStack_30);
    func_0x00010b99d964(lStack_30,plVar1);
    plVar2 = plStack_28;
    (**(code **)(*plStack_28 + 0x10))(plStack_28,*(undefined8 *)(lStack_30 + 0x20),plVar1);
    func_0x00010b99da54(lStack_30,plVar2);
    func_0x00010b99daa0(param_1,lStack_30);
    func_0x000104bdb368(lStack_30);
    plVar1 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  return;
}



/* Entry: 10813746c; end: 108137493;  */

long FUN_10813746c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10813762c(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 108137494; end: 1081374b7;  */

undefined8 * FUN_108137494(undefined8 *param_1)

{
  FUN_1081374b8(*param_1);
  return param_1;
}



/* Entry: 1081374b8; end: 1081374e3;  */

void FUN_1081374b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081374dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1081374e4; end: 108137537;  */

long FUN_1081374e4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10813755c();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 108137538; end: 10813755b;  */

void FUN_108137538(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_108137600(&lStack_18);
  return;
}



/* Entry: 10813755c; end: 1081375ff;  */

bool FUN_10813755c(long *param_1,double *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    dVar8 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar7 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar4 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      *param_4 = uVar7;
      if (*(double *)(param_1[1] + uVar7 * 0x28) == dVar8) goto LAB_1081375f4;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_1081375f4:
  return uVar5 != 0;
}



/* Entry: 108137600; end: 10813762b;  */

void FUN_108137600(undefined8 param_1,double *param_2)

{
  double dVar1;
  undefined1 uStack_11;
  
  dVar1 = 0.0;
  if (*param_2 != 0.0) {
    dVar1 = *param_2;
  }
  func_0x0001003a85b8(&uStack_11,dVar1);
  return;
}



/* Entry: 10813762c; end: 1081376c7;  */

void FUN_10813762c(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined1 extraout_w8;
  undefined8 *puVar5;
  long extraout_x9;
  long extraout_x10;
  long extraout_x11;
  
  plVar2 = param_2;
  FUN_108137538();
  plVar3 = param_2;
  puVar5 = param_3;
  FUN_1081376c8(param_2,param_3,plVar2);
  uVar4 = SUB81(puVar5,0);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = (undefined8 *)(param_2[1] + (long)plVar3 * 0x28);
    *puVar5 = *param_3;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(byte *)(*param_2 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x000108137bcc();
    *(undefined1 *)(extraout_x9 + extraout_x10 + extraout_x11 + 1) = extraout_w8;
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 0x28;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 1081376c8; end: 108137787;  */

undefined1  [16] FUN_1081376c8(long *param_1,double *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  lVar6 = 0;
  uVar3 = param_3 >> 7;
  while( true ) {
    uVar3 = uVar3 & param_1[3];
    uVar7 = *(ulong *)(*param_1 + uVar3);
    uVar4 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar4 = uVar4 + 0xfefefefefefefeff & (uVar4 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      plVar5 = (long *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3]);
      if (*(double *)(param_1[1] + (long)plVar5 * 0x28) == *param_2) {
        uVar2 = 0;
        goto LAB_108137768;
      }
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  FUN_108137788(param_1,param_3);
  uVar2 = 1;
  plVar5 = param_1;
LAB_108137768:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = plVar5;
  return auVar8;
}



/* Entry: 108137788; end: 10813784b;  */

void FUN_108137788(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  plVar1 = param_1;
  FUN_108137bbc();
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_1081377c4;
  if (*(char *)(lVar3 + (long)plVar1) == -2) {
    lVar2 = 0;
    goto LAB_1081377c4;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_108137820:
    FUN_10813788c(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_108137820;
    }
    func_0x0001081379b0(param_1);
  }
  lVar3 = *param_1;
  plVar1 = (long *)lVar3;
  FUN_10813784c(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_1081377c4:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + (long)plVar1) == -0x80);
  return;
}



/* Entry: 10813784c; end: 10813788b;  */

ulong FUN_10813784c(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10813788c; end: 108137b8f;  */

void FUN_10813788c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 extraout_w8;
  undefined8 *puVar3;
  long extraout_x9;
  undefined8 uVar4;
  long extraout_x10;
  long extraout_x11;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = *param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar2 = lVar8 + param_2 * 0x28;
  __Znwm();
  *param_1 = lVar2;
  param_1[1] = lVar2 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar2 + param_2) = 0xff;
  lVar2 = 6;
  if (param_2 != 7) {
    lVar2 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar2 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      puVar3 = puVar5;
      FUN_108137b90();
      lVar6 = *param_1;
      lVar2 = lVar6;
      FUN_10813784c(lVar6,param_1[3],puVar3);
      *(byte *)(lVar6 + lVar2) = (byte)puVar3 & 0x7f;
      func_0x000108137bcc();
      *(undefined1 *)(extraout_x9 + extraout_x11 + extraout_x10 + 1) = extraout_w8;
      puVar3 = (undefined8 *)(param_1[1] + lVar2 * 0x28);
      uVar4 = puVar5[4];
      uVar11 = *puVar5;
      uVar10 = puVar5[3];
      uVar9 = puVar5[2];
      puVar3[1] = puVar5[1];
      *puVar3 = uVar11;
      puVar3[3] = uVar10;
      puVar3[2] = uVar9;
      puVar3[4] = uVar4;
    }
    puVar5 = puVar5 + 5;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108137b90; end: 108137bbb;  */

void FUN_108137b90(double *param_1)

{
  double dVar1;
  undefined1 uStack_11;
  
  dVar1 = 0.0;
  if (*param_1 != 0.0) {
    dVar1 = *param_1;
  }
  func_0x0001003a85b8(&uStack_11,dVar1);
  return;
}



/* Entry: 108137bbc; end: 108137c4f;  */

ulong FUN_108137bbc(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  lVar2 = 0;
  uVar3 = unaff_x20 >> 7;
  while( true ) {
    uVar3 = uVar3 & unaff_x22;
    uVar1 = *(ulong *)(unaff_x21 + uVar3) & ~*(ulong *)(unaff_x21 + uVar3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    uVar3 = lVar2 + uVar3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x22;
}



/* Entry: 108137c50; end: 108137c93;  */

long FUN_108137c50(long param_1)

{
  FUN_108138758(param_1 + 0xd0);
  FUN_108138800(param_1 + 0xa0);
  FUN_108138800(param_1 + 0x70);
  FUN_108138800(param_1 + 0x40);
  FUN_108138894(param_1 + 0x10);
  return param_1;
}



/* Entry: 108137c94; end: 108137ef7;  */

void FUN_108137c94(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                  undefined2 *param_5)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  uint uVar6;
  uint extraout_w8;
  undefined8 ***extraout_x8;
  undefined8 ***extraout_x8_00;
  undefined8 ***pppuVar7;
  undefined8 ***extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined8 ****ppppuVar8;
  undefined1 auStack_e8 [8];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***apppuStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  byte bStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001081383bc(&pppuStack_98,param_4);
  ppppuVar8 = &pppuStack_98;
  func_0x00010812dfe8(&lStack_80);
  lVar1 = lStack_80;
  if (lStack_80 == 1) {
    func_0x0001003b1eb0(&pppuStack_98,auStack_78);
    ppppuVar4 = (undefined8 ****)pppuStack_98;
    uVar6 = (uint)bStack_70;
    if ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
      do {
        func_0x000108139914();
        uVar6 = extraout_w8;
      } while (extraout_w11 != 0);
    }
    ppppuVar8 = (undefined8 ****)(ulong)(uVar6 << 8 | 4);
    func_0x0001003a8cb8(0);
  }
  else {
    func_0x0001003a8364();
    puStack_88 = &UNK_1003ab990;
    pppuStack_90 = &pppuStack_98;
    func_0x0001003a91d4(&UNK_10f47bd25);
    func_0x0001081398ec();
    func_0x0001003ac750(&uStack_a0,ppppuVar8,apppuStack_b8);
    func_0x00010b99fa14(&pppuStack_90,auStack_78,&uStack_a0);
    ppppuVar4 = (undefined8 ****)pppuStack_90;
    pppuStack_90 = (undefined8 ***)0x0;
    func_0x0001081398fc();
    func_0x0001003a8cb8(uStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_b8);
  }
  func_0x000107807e18(&lStack_80);
  func_0x0001003a8cb8(pppuStack_98);
  uVar2 = lVar1 == 1;
  if ((bool)uVar2) {
    if (param_5 != (undefined2 *)0x0) {
      *param_5 = (short)ppppuVar8;
      *(char *)(param_5 + 1) = (char)((ulong)ppppuVar8 >> 0x10);
    }
    apppuStack_b8[0] = ppppuVar4;
    func_0x00010813997c(param_2 + 0x40);
    func_0x000108139964(*(undefined8 *)(param_2 + 0x40));
    if ((bool)uVar2) {
      ppppuVar4 = apppuStack_b8;
      func_0x000108137f24(param_2 + 0x10);
      func_0x000108139964(*(undefined8 *)(param_2 + 0x10));
      if ((bool)uVar2) {
        uVar5 = 0x2d;
        plVar3 = param_4;
        func_0x00010b9a5f34(param_4);
        if ((uVar5 & 1) == 0) {
          pppuVar7 = (undefined8 ***)0x0;
          if (*param_4 != 0) {
            do {
              func_0x000108139914();
              pppuVar7 = extraout_x8_01;
            } while (extraout_w11_02 != 0);
          }
        }
        else {
          func_0x00010b9a6724(&lStack_80,param_4,plVar3);
          pppuVar7 = (undefined8 ***)0x0;
          if (lStack_80 != 0) {
            do {
              func_0x000108139914();
              pppuVar7 = extraout_x8_00;
            } while (extraout_w11_01 != 0);
          }
          pppuStack_90 = pppuVar7;
          FUN_10812e450(&lStack_80);
          pppuVar7 = pppuStack_90;
        }
      }
      else {
        pppuVar7 = (undefined8 ***)0x0;
        if (ppppuVar4[1] != (undefined8 ***)0x0) {
          do {
            func_0x000108139914();
            pppuVar7 = extraout_x8;
          } while (extraout_w11_00 != 0);
        }
      }
      pppuStack_90 = pppuVar7;
      func_0x000108137f50(param_1,param_2,param_3,&pppuStack_90,(ulong)ppppuVar8 & 0xffffff);
      func_0x0001003a8cb8(pppuStack_90);
    }
    else {
      func_0x000108137fa0(param_1);
    }
    func_0x0001081398e4();
    ppppuVar8 = (undefined8 ****)0x0;
    func_0x0001003a8cb8(0);
  }
  else {
    *param_1 = 2;
    param_1[1] = ppppuVar4;
    func_0x0001081398fc();
    ppppuVar8 = (undefined8 ****)pppuStack_98;
  }
  func_0x0001081398b4(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    uStack_c8 = 0x108137ef8;
    puStack_e0 = param_1;
    uStack_d8 = param_3;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x0001081398c8();
    FUN_108138bd0();
    FUN_108138bf4(param_1,param_3,ppppuVar8,auStack_e8);
    if ((int)param_1 != 0) {
      func_0x0001081399d4();
    }
    return;
  }
  return;
}



/* Entry: 108137ef8; end: 108137f4f;  */

void FUN_108137ef8(void)

{
  int unaff_w20;
  
  func_0x0001081398c8();
  FUN_108138bd0();
  FUN_108138bf4();
  if (unaff_w20 != 0) {
    func_0x0001081399d4();
  }
  return;
}



/* Entry: 108137f50; end: 108138313;  */

void FUN_108137f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_38;
  
  func_0x0001081380a0(&uStack_38,param_2,param_4);
  func_0x000108137fa0(param_1);
  FUN_10812cca8(uStack_38);
  return;
}



/* Entry: 108138314; end: 10813832f;  */

void FUN_108138314(void)

{
  FUN_108138900();
  return;
}



/* Entry: 108138330; end: 10813843b;  */

undefined8 * FUN_108138330(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  int extraout_w11;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = 0;
    if (*param_2 != 0) {
      do {
        func_0x000108139904();
        uVar3 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = param_1;
    FUN_108138924();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10813843c; end: 10813845f;  */

long FUN_10813843c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_108138d84(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 108138460; end: 108138587;  */

void FUN_108138460(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar5;
  long lVar6;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar7;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  plVar7 = *(long **)(param_2 + 0xd0);
  plVar1 = *(long **)(param_2 + 0xd8);
  do {
    if (plVar7 == plVar1) {
      uVar3 = param_2 + 0xa0;
      FUN_108138588();
      lVar4 = *(long *)(param_2 + 0xa0);
      lVar6 = *(long *)(param_2 + 0xb8);
      uStack_60 = uVar3;
      lStack_58 = param_3;
      while( true ) {
        lVar2 = lStack_58;
        if (uStack_60 == lVar4 + lVar6) {
          *param_1 = 0;
          return;
        }
        func_0x000108139984(&uStack_68);
        if ((uStack_68 != 0) &&
           (uVar3 = uStack_68, FUN_108137190(uStack_68,param_4), (uVar3 & 1) != 0)) break;
        func_0x000107807b00(uStack_68);
        FUN_1081385b4(&uStack_60);
      }
      uVar5 = 0;
      if (*(long *)(lVar2 + 8) != 0) {
        do {
          func_0x000108139904();
          uVar5 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      *param_1 = uVar5;
LAB_10813857c:
      func_0x000107807b00(uStack_68);
      return;
    }
    func_0x000108139984(&uStack_60);
    if ((uStack_60 != 0) &&
       (uVar3 = uStack_60, param_3 = param_4, FUN_108137190(), (uVar3 & 1) != 0)) {
      uVar5 = 0;
      if (*plVar7 != 0) {
        do {
          func_0x000108139904();
          uVar5 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *param_1 = uVar5;
      uStack_68 = uStack_60;
      goto LAB_10813857c;
    }
    func_0x000107807b00(uStack_60);
    plVar7 = plVar7 + 1;
  } while( true );
}



/* Entry: 108138588; end: 1081385b3;  */

undefined1  [16] FUN_108138588(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_1081392f4(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1081385b4; end: 108138613;  */

long * FUN_1081385b4(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_1081392f4();
  return param_1;
}



/* Entry: 108138614; end: 108138637;  */

long FUN_108138614(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_108139344(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 108138638; end: 1081386b7;  */

void FUN_108138638(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if ((lVar4 != 0) && (___dynamic_cast(lVar4,&PTR_DAT_110a260c0,&PTR_DAT_110a26110,0), lVar4 != 0))
  {
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
  *param_1 = lVar4;
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b48ea4c; end: 10b48ea9f;  */

long FUN_10b48ea4c(double param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = *param_2;
  dVar4 = param_2[2] * dVar5 * 1000000000.0;
  bVar1 = false;
  bVar2 = false;
  if (0.0 < param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dVar4) && !NAN(param_1)) {
      bVar1 = dVar4 == param_1;
      bVar2 = param_1 <= dVar4;
    }
  }
  if (bVar2 && !bVar1) {
    dVar4 = dVar4 / param_1;
    _log(dVar4);
    lVar3 = (long)(dVar4 / dVar5);
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



/* Entry: 10b48eaa0; end: 10b48eb8b;  */

void FUN_10b48eaa0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  if (*(long *)(param_2 + 0x58) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x48);
    puVar4 = (undefined8 *)(lVar3 + 0x40);
    uStack_68 = *(undefined8 *)(lVar3 + 0x48);
    uStack_70 = *puVar4;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *puVar4 = 0;
    lStack_58 = *(long *)(lVar3 + 0x58);
    uStack_60 = *(undefined8 *)(lVar3 + 0x50);
    uStack_50 = *(undefined8 *)(lVar3 + 0x60);
    uStack_48 = (undefined4)*(undefined8 *)(lVar3 + 0x68);
    uStack_3c = *(undefined8 *)(lVar3 + 0x74);
    uStack_44 = (undefined4)*(undefined8 *)(lVar3 + 0x6c);
    uStack_40 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x6c) >> 0x20);
    FUN_10b48f360((long *)(param_2 + 0x48),lVar3);
    func_0x000107c27e74(puVar4);
    __ZdlPv(lVar3);
    lStack_78 = lStack_58;
    if (lStack_58 != 0) {
      param_2 = param_2 + 0x80;
      FUN_10b48f270(param_2,&lStack_78);
      if (((param_2 != 0) && (*(long *)(param_2 + 0x60) != 0)) &&
         (lVar3 = *(long *)(param_2 + 0x60) + -1, *(long *)(param_2 + 0x60) = lVar3, lVar3 == 0)) {
        *(undefined1 *)(param_2 + 0x30) = 0;
      }
    }
    uVar2 = uStack_68;
    uVar1 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_1[3] = lStack_58;
    param_1[2] = uStack_60;
    param_1[5] = CONCAT44(uStack_44,uStack_48);
    param_1[4] = uStack_50;
    *(undefined8 *)((long)param_1 + 0x34) = uStack_3c;
    *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_40,uStack_44);
    *(undefined1 *)(param_1 + 8) = 1;
    func_0x000107c27e74(&uStack_70);
  }
  return;
}



/* Entry: 10b48eb8c; end: 10b48ec1f;  */

void FUN_10b48eb8c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  FUN_10b48e8dc();
  FUN_10b48eaa0(&uStack_80,param_2);
  FUN_10b48ec20(param_2,&uStack_80,param_3);
  if (30000000000 < param_3 - *(long *)(param_2 + 0xb0)) {
    func_0x00010b48ecd0(param_2,param_3);
  }
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10b48efd0(&uStack_80);
  return;
}



/* Entry: 10b48ec20; end: 10b48ed57;  */

void FUN_10b48ec20(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong extraout_x8;
  double dStack_38;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar1 = param_1;
    FUN_10b48e6e0(param_1,*(undefined4 *)(param_2 + 0x38));
    func_0x00010b48ff2c(*(undefined8 *)(lVar1 + 8));
    dStack_38 = (double)(long)((double)extraout_x8 * 0.6931471805599453 * 1000000.0);
    param_1 = param_1 + 0x80;
    FUN_10b48e724(param_1,(long *)(param_2 + 0x18));
    dStack_38 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x30));
    dStack_38 = dStack_38 * 8.0;
    FUN_10b48ed58(param_1 + 0x38,&dStack_38,param_3);
  }
  return;
}



/* Entry: 10b48ed58; end: 10b48ed8b;  */

double * FUN_10b48ed58(void)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *unaff_x19;
  long unaff_x20;
  
  func_0x00010b48ff08();
  FUN_10b48e7ec();
  pdVar2 = (double *)(unaff_x20 + 0x10);
  pdVar3 = pdVar2;
  for (pdVar1 = (double *)(unaff_x20 + 0x10); pdVar1 != (double *)(unaff_x20 + 0x18);
      pdVar1 = pdVar1 + 1) {
    *pdVar3 = *pdVar1 + *unaff_x19;
    pdVar2 = pdVar2 + 1;
    unaff_x19 = unaff_x19 + 1;
    pdVar3 = pdVar3 + 1;
  }
  return pdVar2;
}



/* Entry: 10b48ed8c; end: 10b48ee67;  */

long * FUN_10b48ed8c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long alStack_a8 [5];
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long alStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b48ee68(param_1,*(undefined8 *)(param_2 + 0x58));
  lVar5 = *(long *)(param_2 + 0x48);
  while (lVar5 != param_2 + 0x50) {
    func_0x00010b48f160(param_1,lVar5 + 0x40);
    func_0x000107c27be0();
  }
  FUN_10b48fdfc(param_2 + 0x48);
  func_0x00010b48fe2c(param_2 + 0x80);
  alStack_58[0] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  plVar3 = alStack_58;
  func_0x00010b48fe80(param_2 + 0x60);
  plVar1 = alStack_58;
  FUN_10b48db2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar2 = param_1;
  FUN_10b48d78c();
  FUN_10b48fee4();
  pcStack_68 = FUN_10b48ee68;
  if ((long *)(plVar2[2] - *plVar2 >> 4) < plVar3) {
    plStack_80 = param_1;
    plStack_78 = plVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    if ((ulong)plVar3 >> 0x3c != 0) {
      func_0x00010b48eff0();
      func_0x00010b48ff24();
      FUN_10b48fee4();
      func_0x00010b48fefc();
      lVar5 = *plVar2;
      if (lVar5 != 0) {
        lVar4 = plVar2[1];
        while (lVar4 != lVar5) {
          lVar4 = lVar4 + -0x10;
          func_0x00010b48f3a4(lVar4);
        }
        plVar2[1] = lVar5;
        __ZdlPv(*plVar2);
      }
      return plVar2;
    }
    plVar2 = alStack_a8;
    FUN_10b48f070(plVar2);
    func_0x00010b48ff58();
    func_0x00010b48ff24();
  }
  return plVar2;
}



/* Entry: 10b48ee68; end: 10b48eed7;  */

long * FUN_10b48ee68(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long alStack_48 [5];
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      func_0x00010b48eff0();
      func_0x00010b48ff24();
      func_0x00010b48fee4();
      func_0x00010b48fefc();
      lVar2 = *param_1;
      if (lVar2 != 0) {
        lVar3 = param_1[1];
        while (lVar3 != lVar2) {
          lVar3 = lVar3 + -0x10;
          func_0x00010b48f3a4(lVar3);
        }
        param_1[1] = lVar2;
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    plVar1 = param_1 + 1;
    param_1 = alStack_48;
    FUN_10b48f070(param_1,param_2,*plVar1 - lVar2 >> 4);
    func_0x00010b48ff58();
    func_0x00010b48ff24();
  }
  return param_1;
}



/* Entry: 10b48eed8; end: 10b48eee3;  */

long * FUN_10b48eed8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010b48fefc();
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x00010b48f3a4(lVar1);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10b48eee4; end: 10b48ef33;  */

long * FUN_10b48eee4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x00010b48f3a4(lVar1);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10b48ef34; end: 10b48efcf;  */

long FUN_10b48ef34(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10b48efd0; end: 10b48effb;  */

void FUN_10b48efd0(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000107c27e74();
  }
  return;
}



/* Entry: 10b48effc; end: 10b48f06f;  */

void FUN_10b48effc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b48ff08();
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



/* Entry: 10b48f070; end: 10b48f0db;  */

long * FUN_10b48f070(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b48f0b8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b48f0dc; end: 10b48f0f7;  */

long * FUN_10b48f0dc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10b48f124();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b48f0f8; end: 10b48f123;  */

long * FUN_10b48f0f8(long *param_1)

{
  FUN_10b48f124();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b48f124; end: 10b48f12b;  */

void FUN_10b48f124(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b48ff08(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x000107c27e74();
  }
  return;
}



/* Entry: 10b48f12c; end: 10b48f1a7;  */

void FUN_10b48f12c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b48ff08();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x000107c27e74();
  }
  return;
}



/* Entry: 10b48f1a8; end: 10b48f22f;  */

long FUN_10b48f1a8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10b48f230(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_10b48f070(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_38 = puStack_38 + 2;
  func_0x00010b48ff58();
  lVar2 = param_1[1];
  func_0x00010b48ff24();
  return lVar2;
}



/* Entry: 10b48f230; end: 10b48f26f;  */

ulong * FUN_10b48f230(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar3 = (ulong *)(param_1[2] - *param_1 >> 3);
    if (puVar3 <= param_2) {
      puVar3 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar3 = (ulong *)0xfffffffffffffff;
    }
    return puVar3;
  }
  func_0x00010b48eff0();
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    puVar3 = *(ulong **)(*param_1 + uVar6 * 8);
    if (puVar3 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    do {
      while( true ) {
        puVar3 = (ulong *)*puVar3;
        if (puVar3 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        uVar7 = puVar3[1];
        if (uVar7 != uVar4) break;
        if (puVar3[2] == uVar4) {
          return puVar3;
        }
      }
      if ((uVar2 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar2 <= uVar7) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = uVar7 / uVar2;
        }
        uVar7 = uVar7 - uVar1 * uVar2;
      }
    } while (uVar7 == uVar6);
  }
  return (ulong *)0x0;
}



/* Entry: 10b48f270; end: 10b48f30b;  */

long FUN_10b48f270(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10b48f30c; end: 10b48f35f;  */

long * FUN_10b48f30c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  while (plVar5 = (long *)*plVar3, plVar5 != (long *)0x0) {
    lVar2 = (long)(plVar5 + 4);
    func_0x00010b48e01c(lVar2,param_2);
    bVar1 = (int)lVar2 == 0;
    lVar2 = 8;
    if (bVar1) {
      lVar2 = 0;
    }
    plVar3 = (long *)((long)plVar5 + lVar2);
    if (bVar1) {
      plVar4 = plVar5;
    }
  }
  return plVar4;
}



/* Entry: 10b48f360; end: 10b48f3ff;  */

/* WARNING: Possible PIC construction at 0x00010530d72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010530d824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010530d858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010530d828) */
/* WARNING: Removing unreachable block (ram,0x00010530d730) */
/* WARNING: Removing unreachable block (ram,0x00010530d738) */
/* WARNING: Removing unreachable block (ram,0x00010530d85c) */

void FUN_10b48f360(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *unaff_x19;
  long *plVar10;
  undefined8 *unaff_x20;
  
  func_0x00010b48ff08();
  func_0x000107c27be0();
  if ((long *)*unaff_x20 == unaff_x19) {
    *unaff_x20 = param_2;
  }
  plVar3 = (long *)unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + -1;
  plVar5 = (long *)*unaff_x19;
  plVar4 = unaff_x19;
  if (plVar5 == (long *)0x0) {
code_r0x00010530d654:
    plVar5 = (long *)plVar4[1];
    if (plVar5 != (long *)0x0) goto code_r0x00010530d66c;
    puVar8 = (undefined8 *)plVar4[2];
    bVar2 = true;
  }
  else {
    if (unaff_x19[1] != 0) {
      func_0x00010530d878();
      plVar5 = (long *)*plVar4;
      if (plVar5 == (long *)0x0) goto code_r0x00010530d654;
    }
code_r0x00010530d66c:
    bVar2 = false;
    puVar8 = (undefined8 *)plVar4[2];
    plVar5[2] = (long)puVar8;
  }
  plVar10 = (long *)*puVar8;
  if (plVar4 == plVar10) {
    *puVar8 = plVar5;
    if (plVar4 == plVar3) {
      plVar10 = (long *)0x0;
      plVar3 = plVar5;
    }
    else {
      plVar10 = (long *)puVar8[1];
    }
  }
  else {
    puVar8[1] = plVar5;
  }
  lVar6 = plVar4[3];
  plVar9 = plVar3;
  if (plVar4 != unaff_x19) {
    puVar8 = (undefined8 *)unaff_x19[2];
    plVar4[2] = (long)puVar8;
    if (unaff_x19 == (long *)*puVar8) {
      *puVar8 = plVar4;
    }
    else {
      puVar8[1] = plVar4;
    }
    lVar7 = *unaff_x19;
    lVar1 = unaff_x19[1];
    *(long **)(lVar7 + 0x10) = plVar4;
    *plVar4 = lVar7;
    plVar4[1] = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = plVar4;
    }
    *(char *)(plVar4 + 3) = (char)unaff_x19[3];
    plVar9 = plVar4;
    if (plVar3 != unaff_x19) {
      plVar9 = plVar3;
    }
  }
  if ((plVar9 != (long *)0x0) && ((char)lVar6 != '\0')) {
    if (bVar2) {
      while( true ) {
        plVar3 = (long *)plVar10[2];
        if (plVar10 != (long *)*plVar3) break;
        plVar4 = plVar9;
        if ((*(byte *)(plVar10 + 3) & 1) == 0) {
          *(undefined1 *)(plVar10 + 3) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          func_0x00010015dd98();
          plVar4 = plVar10;
          if (plVar9 != (long *)plVar10[1]) {
            plVar4 = plVar9;
          }
          plVar10 = *(long **)plVar10[1];
        }
        lVar6 = *plVar10;
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x18) != '\x01')) {
code_r0x00010530d864:
          func_0x00010530da08();
code_r0x00010015dd98:
          lVar6 = *plVar3;
          lVar7 = *(long *)(lVar6 + 8);
          *plVar3 = lVar7;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar3;
          }
          plVar4 = (long *)plVar3[2];
          *(long **)(lVar6 + 0x10) = plVar4;
          if (plVar3 == (long *)*plVar4) {
            *plVar4 = lVar6;
          }
          else {
            plVar4[1] = lVar6;
          }
          *(long **)(lVar6 + 8) = plVar3;
          plVar3[2] = lVar6;
          return;
        }
        if ((plVar10[1] != 0) && (*(char *)(plVar10[1] + 0x18) != '\x01')) {
          if ((lVar6 == 0) || (*(char *)(lVar6 + 0x18) == '\x01')) {
            func_0x00010530da5c();
            goto code_r0x00010002c89c;
          }
          goto code_r0x00010530d864;
        }
        *(undefined1 *)(plVar10 + 3) = 0;
        plVar5 = (long *)plVar10[2];
        plVar9 = plVar4;
        if ((char)plVar5[3] != '\x01' || plVar5 == plVar4) goto code_r0x00010530d7fc;
code_r0x00010530d7e4:
        lVar6 = 8;
        if (plVar5 != *(long **)plVar5[2]) {
          lVar6 = 0;
        }
        plVar10 = *(long **)((long)plVar5[2] + lVar6);
      }
      if ((*(byte *)(plVar10 + 3) & 1) == 0) {
        *(undefined1 *)(plVar10 + 3) = 1;
        *(undefined1 *)(plVar3 + 3) = 0;
        goto code_r0x00010002c89c;
      }
      if ((*plVar10 != 0) && (*(char *)(*plVar10 + 0x18) != '\x01')) {
        if ((plVar10[1] == 0) || (*(char *)(plVar10[1] + 0x18) == '\x01')) {
          func_0x00010530da5c();
          goto code_r0x00010015dd98;
        }
code_r0x00010530d830:
        func_0x00010530da08();
code_r0x00010002c89c:
        plVar4 = (long *)plVar3[1];
        lVar6 = *plVar4;
        plVar3[1] = lVar6;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar3;
        }
        puVar8 = (undefined8 *)plVar3[2];
        plVar4[2] = (long)puVar8;
        if (plVar3 == (long *)*puVar8) {
          *puVar8 = plVar4;
        }
        else {
          puVar8[1] = plVar4;
        }
        *plVar4 = (long)plVar3;
        plVar3[2] = (long)plVar4;
        return;
      }
      if ((plVar10[1] != 0) && (*(char *)(plVar10[1] + 0x18) != '\x01')) goto code_r0x00010530d830;
      *(undefined1 *)(plVar10 + 3) = 0;
      plVar5 = (long *)plVar10[2];
      if ((plVar5 != plVar9) && ((*(byte *)(plVar5 + 3) & 1) != 0)) goto code_r0x00010530d7e4;
    }
code_r0x00010530d7fc:
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}



/* Entry: 10b48f400; end: 10b48f4f7;  */

void FUN_10b48f400(long *param_1,long param_2,long *param_3)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_3;
  if (lVar6 == 0) {
    *param_1 = param_2 + 8;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    plVar5 = (long *)(param_2 + 8);
    plVar4 = plVar5;
    plVar2 = (long *)*plVar5;
    if ((long *)*plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = plVar2;
          lVar3 = lVar6 + 0x20;
          func_0x00010b48e01c(lVar3,plVar5 + 4);
          if ((int)lVar3 == 0) break;
          plVar4 = plVar5;
          plVar2 = (long *)*plVar5;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_10b48f48c;
        }
        plVar4 = plVar5 + 4;
        func_0x00010b48e01c(plVar4,lVar6 + 0x20);
        if ((int)plVar4 == 0) {
          *param_1 = (long)plVar5;
          *(undefined1 *)(param_1 + 1) = 0;
          param_1[2] = lVar6;
          uVar1 = *(ushort *)(param_3 + 1);
          *(ushort *)(param_1 + 3) = uVar1;
          *param_3 = 0;
          if ((uVar1 >> 8 & 1) == 0) {
            return;
          }
          *(undefined1 *)((long)param_3 + 9) = 0;
          return;
        }
        plVar2 = (long *)plVar5[1];
      } while ((long *)plVar5[1] != (long *)0x0);
      plVar4 = plVar5 + 1;
    }
LAB_10b48f48c:
    FUN_10b48f4f8(param_2,plVar5,plVar4,lVar6);
    *param_3 = 0;
    if (*(char *)((long)param_3 + 9) == '\x01') {
      *(undefined1 *)((long)param_3 + 9) = 0;
    }
    *param_1 = lVar6;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 10b48f4f8; end: 10b48f543;  */

void FUN_10b48f4f8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10b48f544; end: 10b48f947;  */

undefined1  [16]
FUN_10b48f544(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4,long *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long extraout_x10;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x25;
  long lVar16;
  undefined1 auVar17 [16];
  
  uVar14 = *param_2;
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar6 = uVar15 - 1;
    if ((uVar15 & uVar6) == 0) {
      unaff_x25 = uVar6 & uVar14;
    }
    else {
      unaff_x25 = uVar14;
      if (uVar15 <= uVar14) {
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar14 / uVar15;
        }
        unaff_x25 = uVar14 - uVar7 * uVar15;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10b48f5f8;
          uVar7 = plVar12[1];
          if (uVar7 != uVar14) break;
          if (plVar12[2] == uVar14) {
            uVar5 = 0;
            goto LAB_10b48f914;
          }
        }
        if ((uVar15 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar15 <= uVar7) {
          uVar8 = 0;
          if (uVar15 != 0) {
            uVar8 = uVar7 / uVar15;
          }
          uVar7 = uVar7 - uVar8 * uVar15;
        }
      } while (uVar7 == unaff_x25);
    }
  }
LAB_10b48f5f8:
  plVar13 = (long *)*param_4;
  plVar1 = param_1 + 2;
  plVar12 = (long *)0x88;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar14;
  plVar9 = (long *)*param_5;
  puVar2 = (undefined8 *)param_5[1];
  plVar12[2] = *plVar13;
  uVar5 = *puVar2;
  lVar16 = plVar9[1];
  lVar4 = *plVar9;
  plVar12[5] = plVar9[2];
  plVar12[4] = lVar16;
  plVar12[3] = lVar4;
  *(undefined2 *)(plVar12 + 6) = 0;
  plVar9 = plVar12;
  func_0x00010b48ff2c(uVar5);
  plVar9[7] = (long)(0.6931471805599453 / (double)extraout_x8);
  plVar9[8] = 0x7fffffffffffffff;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = extraout_x10;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  *(undefined8 *)((long)plVar9 + 0x6c) = 0;
  *(undefined8 *)((long)plVar9 + 0x7c) = 0;
  *(undefined8 *)((long)plVar9 + 0x74) = 0;
  *(undefined4 *)((long)plVar9 + 0x84) = 0;
  if ((uVar15 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar15))
  goto LAB_10b48f898;
  uVar6 = 1;
  if (2 < uVar15) {
    uVar6 = (ulong)((uVar15 & uVar15 - 1) != 0);
  }
  uVar6 = uVar6 | uVar15 << 1;
  uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar15 = param_1[1];
  }
  if (uVar15 < uVar6) {
LAB_10b48f704:
    if (uVar6 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10b48f93c);
      (*pcVar3)();
    }
    lVar4 = uVar6 << 3;
    __Znwm(lVar4);
    FUN_10b48f948(param_1,lVar4);
    param_1[1] = uVar6;
    lVar4 = *param_1;
    for (uVar15 = 0; uVar6 != uVar15; uVar15 = uVar15 + 1) {
      *(undefined8 *)(lVar4 + uVar15 * 8) = 0;
    }
    plVar9 = (long *)*plVar1;
    uVar15 = uVar6;
    if (plVar9 != (long *)0x0) {
      uVar10 = plVar9[1];
      uVar8 = uVar6 - 1;
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar10 / uVar6;
      }
      uVar11 = uVar10;
      if (uVar6 <= uVar10) {
        uVar11 = uVar10 - uVar7 * uVar6;
      }
      if ((uVar6 & uVar8) == 0) {
        uVar11 = uVar10 & uVar8;
      }
      *(long **)(lVar4 + uVar11 * 8) = plVar1;
      while (plVar13 = plVar9, plVar9 = (long *)*plVar13, plVar9 != (long *)0x0) {
        uVar7 = plVar9[1];
        if ((uVar6 & uVar8) == 0) {
          uVar7 = uVar7 & uVar8;
        }
        else if (uVar6 <= uVar7) {
          uVar10 = 0;
          if (uVar6 != 0) {
            uVar10 = uVar7 / uVar6;
          }
          uVar7 = uVar7 - uVar10 * uVar6;
        }
        if (uVar7 != uVar11) {
          if (*(long *)(lVar4 + uVar7 * 8) == 0) {
            *(long **)(lVar4 + uVar7 * 8) = plVar13;
            uVar11 = uVar7;
          }
          else {
            *plVar13 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar4 + uVar7 * 8);
            **(long **)(lVar4 + uVar7 * 8) = (long)plVar9;
            plVar9 = plVar13;
          }
        }
      }
    }
  }
  else if (uVar6 < uVar15) {
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 < uVar15) {
      if (uVar6 != 0) goto LAB_10b48f704;
      FUN_10b48f948(param_1,0);
      param_1[1] = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = param_1[1];
    }
  }
  if ((uVar15 & uVar15 - 1) == 0) {
    unaff_x25 = uVar15 - 1 & uVar14;
  }
  else {
    unaff_x25 = uVar14;
    if (uVar15 <= uVar14) {
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = uVar14 / uVar15;
      }
      unaff_x25 = uVar14 - uVar6 * uVar15;
    }
  }
LAB_10b48f898:
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar1;
    if (*plVar12 != 0) {
      uVar14 = *(ulong *)(*plVar12 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar14 = uVar14 & uVar15 - 1;
      }
      else if (uVar15 <= uVar14) {
        uVar6 = 0;
        if (uVar15 != 0) {
          uVar6 = uVar14 / uVar15;
        }
        uVar14 = uVar14 - uVar6 * uVar15;
      }
      *(long **)(lVar4 + uVar14 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar9;
    *plVar9 = (long)plVar12;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010b48ff50();
  uVar5 = 1;
LAB_10b48f914:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar12;
  return auVar17;
}



/* Entry: 10b48f948; end: 10b48f95f;  */

void FUN_10b48f948(long *param_1,long param_2)

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



/* Entry: 10b48f960; end: 10b48f983;  */

undefined8 FUN_10b48f960(undefined8 param_1)

{
  FUN_10b48f984(param_1,0);
  return param_1;
}



/* Entry: 10b48f984; end: 10b48f99b;  */

void FUN_10b48f984(long *param_1,long param_2)

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



/* Entry: 10b48f99c; end: 10b48f9bb;  */

void FUN_10b48f99c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b48fb2c(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10b48f9bc; end: 10b48f9ff;  */

undefined8 * FUN_10b48f9bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_10b48fa00();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10b48fa00; end: 10b48fadf;  */

long * FUN_10b48fa00(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar4 = *param_1;
  lVar7 = param_1[1] - lVar4;
  uVar1 = (lVar7 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    plStack_58 = param_1 + 2;
    lVar8 = *plStack_58;
    uVar5 = lVar8 - lVar4;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 >> 0x3c == 0) {
      lVar3 = uVar6 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar7);
      uVar9 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar9;
      _memcpy(puVar2 + (lVar7 >> 4) * -2,lVar4,lVar7);
      *param_1 = (long)(puVar2 + (lVar7 >> 4) * -2);
      param_1[1] = (long)(puVar2 + 2);
      param_1[2] = lVar3 + uVar6 * 0x10;
      lStack_78 = lVar4;
      lStack_70 = lVar4;
      lStack_68 = lVar4;
      lStack_60 = lVar8;
      FUN_10b48faec(&lStack_78);
      return puVar2 + 2;
    }
  }
  else {
    FUN_10b48fae0();
  }
  func_0x000104bd35f4();
  func_0x00010b48fefc();
  lVar4 = param_1[2];
  while (lVar4 != param_1[1]) {
    lVar4 = lVar4 + -0x10;
    param_1[2] = lVar4;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b48fae0; end: 10b48faeb;  */

long * FUN_10b48fae0(long *param_1)

{
  long lVar1;
  
  func_0x00010b48fefc();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b48faec; end: 10b48fb2b;  */

long * FUN_10b48faec(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b48fb2c; end: 10b48fbaf;  */

void FUN_10b48fb2c(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  lVar5 = param_2 - param_1 >> 4;
  if (1 < lVar5) {
    uVar6 = lVar5 - 2U >> 1;
    plVar2 = (long *)(param_1 + uVar6 * 0x10);
    lVar5 = *(long *)(param_2 + -0x10);
    lVar3 = *(long *)(param_2 + -8);
    bVar1 = lVar3 < plVar2[1];
    if (*plVar2 != lVar5) {
      bVar1 = lVar5 < *plVar2;
    }
    plVar4 = (long *)(param_2 + -0x10);
    if (bVar1) {
      do {
        plVar7 = plVar2;
        lVar8 = *plVar7;
        plVar4[1] = plVar7[1];
        *plVar4 = lVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1 >> 1;
        plVar2 = (long *)(param_1 + uVar6 * 0x10);
        bVar1 = lVar3 < plVar2[1];
        if (*plVar2 != lVar5) {
          bVar1 = lVar5 < *plVar2;
        }
        plVar4 = plVar7;
      } while (bVar1);
      *plVar7 = lVar5;
      plVar7[1] = lVar3;
    }
  }
  return;
}



/* Entry: 10b48fbb0; end: 10b48fcab;  */

void FUN_10b48fbb0(long param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x00010b48fbd8(param_1,param_2,&uStack_11,param_2 - param_1 >> 4);
  return;
}



/* Entry: 10b48fcac; end: 10b48fcdf;  */

undefined8 FUN_10b48fcac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10b48fce0(auStack_38);
  func_0x00010b48ff50();
  return uVar1;
}



/* Entry: 10b48fce0; end: 10b48fdfb;  */

void FUN_10b48fce0(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10b48fd94;
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
    if (uVar8 == uVar3) goto LAB_10b48fd94;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b48fd94:
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



/* Entry: 10b48fdfc; end: 10b48fee3;  */

void FUN_10b48fdfc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x00010b48db94(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10b48fee4; end: 10b48ff77;  */

void FUN_10b48fee4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b48ff78; end: 10b490007;  */

undefined8 * FUN_10b48ff78(undefined8 *param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (ulong)(param_3 * 8000000) / param_2;
  }
  if (param_3 * 8000000 - uVar1 * param_2 != 0) {
    uVar1 = uVar1 + 1;
  }
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = uVar1;
  param_1[10] = uVar1 * param_4;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  func_0x00010b49014c();
  func_0x00010b490144();
  return param_1;
}



/* Entry: 10b490008; end: 10b490143;  */

void FUN_10b490008(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b490144; end: 10b490157;  */

undefined8 * FUN_10b490144(void)

{
  undefined8 in_stack_00000008;
  char in_stack_00000010;
  
  if (in_stack_00000010 == '\x01') {
    func_0x000107c60d8c(in_stack_00000008);
  }
  return &stack0x00000008;
}



/* Entry: 10b490158; end: 10b49016b;  */

void FUN_10b490158(void)

{
  func_0x00010b49017c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b49016c; end: 10b49018b;  */

void FUN_10b49016c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b490174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 10b49018c; end: 10b4901d7;  */

void FUN_10b49018c(undefined8 param_1,long param_2,undefined8 param_3)

{
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  FUN_10b4901d8(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 8);
  return;
}



/* Entry: 10b4901d8; end: 10b490433;  */

void FUN_10b4901d8(undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long **pplVar7;
  long **pplVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_110;
  long **pplStack_108;
  undefined8 uStack_100;
  long alStack_f8 [2];
  long *plStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long *aplStack_80 [2];
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  
  plVar10 = (long *)(param_2 + 0x60);
  puVar4 = param_1;
  plVar5 = plVar10;
  plVar11 = plVar10;
  while( true ) {
    uVar3 = (uint)puVar4;
    plVar12 = (long *)*plVar5;
    if (plVar12 == (long *)0x0) break;
    puVar4 = plVar12 + 4;
    func_0x00010b490a64();
    bVar2 = -1 < (char)puVar4;
    lVar9 = 8;
    if (bVar2) {
      lVar9 = 0;
    }
    plVar5 = (long *)((long)plVar12 + lVar9);
    if (bVar2) {
      plVar11 = plVar12;
    }
  }
  if ((plVar10 == plVar11) || (func_0x00010b490a6c(), (uVar3 >> 7 & 1) != 0)) {
    uVar6 = *(ulong *)(param_2 + 0x48);
    if (uVar6 != 0) {
      FUN_10b491b9c(uVar6,param_3);
      if ((uVar6 & 1) != 0) {
        FUN_10b4911fc(aplStack_80,*(undefined8 *)(param_2 + 0x48),param_3);
        if (aplStack_80[0] == (long *)0x0) {
          auStack_70[0] = 0;
          uStack_58 = 0;
          func_0x00010b490a04();
          func_0x00010b490a20();
          *(undefined1 *)param_1 = 0;
          *(undefined1 *)(param_1 + 3) = 0;
        }
        else {
          func_0x000107c27fdc(&lStack_98,*(undefined8 *)(*aplStack_80[0] + 8));
          FUN_10b4925bc(aplStack_80[0],lStack_98,lStack_90 - lStack_98);
          if (((ulong)aplStack_80[0] & 1) == 0) {
            auStack_70[0] = 0;
            uStack_58 = 0;
            func_0x00010b490a04();
            func_0x00010b490a20();
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 3) = 0;
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                      (&uStack_b0,lStack_98,lStack_90 - lStack_98);
            func_0x000107c281f8(auStack_70,&uStack_b0);
            func_0x00010b490a04();
            func_0x00010b490a20();
            if (*(char *)(param_2 + 0x90) == '\x01') {
              *(long *)(param_2 + 0x70) = *(long *)(param_2 + 0x70) + 1;
            }
            param_1[1] = uStack_a8;
            *param_1 = uStack_b0;
            param_1[2] = uStack_a0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b0 = 0;
            *(undefined1 *)(param_1 + 3) = 1;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
          }
          func_0x000107c27914(&lStack_98);
        }
        func_0x000105640484(aplStack_80);
        return;
      }
      auStack_70[0] = 0;
      uStack_58 = 0;
      func_0x00010b490a04();
      func_0x00010b490a20();
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    if (*(char *)(param_2 + 0x90) == '\x01') {
      *(long *)(param_2 + 0x80) = *(long *)(param_2 + 0x80) + 1;
    }
    plVar5 = (long *)(param_2 + 0x58);
    plVar12 = &lStack_98;
    lVar9 = param_3;
    FUN_10b490944(plVar5,plVar12);
    if (*plVar5 == 0) {
      func_0x000104c03f28("map::at:  key not found");
      func_0x00010b490a14();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
      func_0x000107c27914(&lStack_98);
      pplVar7 = aplStack_80;
      func_0x000105640484();
      func_0x00010b490a3c();
      alStack_f8[1] = 8;
      pcStack_b8 = FUN_10b490434;
      plStack_e8 = plVar10;
      plStack_e0 = plVar11;
      lStack_d8 = param_3;
      lStack_d0 = param_2;
      puStack_c8 = param_1;
      puStack_c0 = &stack0xfffffffffffffff0;
      if (*(char *)(pplVar7 + 0x12) == '\x01') {
        pplVar7[0x11] = (long *)((long)pplVar7[0x11] + 1);
      }
      pplVar8 = pplVar7 + 0xb;
      FUN_10b490944(pplVar8,alStack_f8,plVar12);
      plVar10 = *pplVar8;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x58;
        __Znwm();
        uStack_100 = 0;
        plStack_110 = plVar10;
        pplStack_108 = pplVar7 + 0xc;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (plVar10 + 4,plVar12);
        *(undefined1 *)(plVar10 + 7) = 0;
        *(undefined1 *)(plVar10 + 10) = 0;
        uStack_100 = CONCAT71(uStack_100._1_7_,1);
        *plVar10 = 0;
        plVar10[1] = 0;
        plVar10[2] = alStack_f8[0];
        *pplVar8 = plVar10;
        if ((long *)*pplVar7[0xb] != (long *)0x0) {
          pplVar7[0xb] = (long *)*pplVar7[0xb];
        }
        func_0x000107c27be4(pplVar7[0xc],plVar10);
        pplVar7[0xd] = (long *)((long)pplVar7[0xd] + 1);
        plStack_110 = (long *)0x0;
        FUN_10b4909c0(&plStack_110);
      }
      plVar5 = plVar10 + 7;
      cVar1 = (char)plVar10[10];
      if (cVar1 == *(char *)(lVar9 + 0x18)) {
        if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                    ();
          return;
        }
        return;
      }
      if (cVar1 != '\0') {
        if ((char)plVar10[10] == '\x01') {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          *(undefined1 *)(plVar5 + 3) = 0;
        }
        return;
      }
      func_0x000107c60c94();
      func_0x00010028b5dc();
      return;
    }
    func_0x000107c279a0(auStack_70,*plVar5 + 0x38);
    func_0x000107c279a0(param_1,auStack_70);
    func_0x00010b490a20();
  }
  return;
}



/* Entry: 10b490434; end: 10b490533;  */

void FUN_10b490434(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x58);
  FUN_10b490944(puVar2,&uStack_48,param_2);
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x58;
    __Znwm();
    uStack_50 = 0;
    puStack_60 = puVar3;
    lStack_58 = param_1 + 0x60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 4,param_2);
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    uStack_50 = CONCAT71(uStack_50._1_7_,1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = uStack_48;
    *puVar2 = puVar3;
    if (**(long **)(param_1 + 0x58) != 0) {
      *(long *)(param_1 + 0x58) = **(long **)(param_1 + 0x58);
    }
    func_0x000107c27be4(*(undefined8 *)(param_1 + 0x60),puVar3);
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    puStack_60 = (undefined8 *)0x0;
    FUN_10b4909c0(&puStack_60);
  }
  puVar2 = puVar3 + 7;
  cVar1 = *(char *)(puVar3 + 10);
  if (cVar1 == *(char *)(param_3 + 0x18)) {
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)();
      return;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(puVar3 + 10) == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      *(undefined1 *)(puVar2 + 3) = 0;
    }
    return;
  }
  func_0x000107c60c94();
  func_0x00010028b5dc();
  return;
}



/* Entry: 10b490534; end: 10b490563;  */

void FUN_10b490534(void)

{
  long unaff_x19;
  
  func_0x00010b490a28();
  func_0x00010b490a44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 8);
  return;
}



/* Entry: 10b490564; end: 10b4906a7;  */

void FUN_10b490564(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 in_ZR;
  ulong *puVar7;
  undefined1 **ppuVar8;
  undefined8 *unaff_x21;
  undefined1 *puStack_f0;
  long lStack_e8;
  char cStack_d9;
  char cStack_d8;
  undefined1 auStack_98 [32];
  ulong auStack_78 [2];
  code *pcStack_68;
  undefined **ppuStack_60;
  ulong *puStack_58;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (ulong *)0x0;
  if (param_1[9] != 0) {
    FUN_10b4912d0(auStack_78,param_1[9],param_2,0);
    if (auStack_78[0] != 0) {
      pcStack_68 = FUN_10b490920;
      ppuStack_60 = &PTR_DAT_110cec438;
      puStack_58 = auStack_78;
      bVar4 = *(byte *)((long)param_3 + 0x17);
      in_ZR = bVar4 == 0;
      uVar1 = param_3[1];
      puVar6 = (undefined8 *)*param_3;
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
        puVar6 = param_3;
      }
      FUN_10b4928b4(auStack_78[0],puVar6,uVar1);
      if ((auStack_78[0] & 1) != 0) {
        in_ZR = (char)param_1[0x12] == '\x01';
        if ((bool)in_ZR) {
          param_1[0xf] = param_1[0xf] + 1;
        }
        func_0x000107c27f70(auStack_98,param_3);
        FUN_10b490434(param_1,param_2,auStack_98);
        func_0x000107c279a4(auStack_98);
      }
      func_0x000107c281f0(&pcStack_68);
    }
    puVar7 = auStack_78;
    func_0x000105640438();
    unaff_x21 = param_3;
  }
  func_0x000107c39434(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c279a4(auStack_98);
  func_0x000107c281f0(&pcStack_68);
  func_0x000105640438(auStack_78);
  func_0x00010b490a3c();
  func_0x00010b490a28();
  FUN_10b4901d8(&puStack_f0,puVar7,unaff_x21);
  if (cStack_d8 == '\x01') {
    ppuVar8 = (undefined1 **)puStack_f0;
    if (-1 < (long)cStack_d9) {
      ppuVar8 = &puStack_f0;
    }
    if (-1 < cStack_d9) {
      lStack_e8 = (long)cStack_d9;
    }
    cVar5 = *(char *)((long)param_1 + 0x17);
    plVar2 = (long *)*param_1;
    if (-1 < (long)cVar5) {
      plVar2 = param_1;
    }
    lVar3 = param_1[1];
    if (-1 < cVar5) {
      lVar3 = (long)cVar5;
    }
    func_0x00010688d7cc(ppuVar8,(undefined1 *)((long)ppuVar8 + lStack_e8),plVar2,
                        (long)plVar2 + lVar3);
    if (((ulong)ppuVar8 & 1) != 0) goto LAB_10b490724;
  }
  func_0x00010b490a44();
LAB_10b490724:
  func_0x000107c279a4(&puStack_f0);
  func_0x00010b490a54();
  return;
}



/* Entry: 10b4906a8; end: 10b49075f;  */

void FUN_10b4906a8(void)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 **ppuVar4;
  long *unaff_x20;
  undefined1 *puStack_50;
  long lStack_48;
  char cStack_39;
  char cStack_38;
  
  func_0x00010b490a28();
  FUN_10b4901d8(&puStack_50);
  if (cStack_38 == '\x01') {
    ppuVar4 = (undefined1 **)puStack_50;
    if (-1 < (long)cStack_39) {
      ppuVar4 = &puStack_50;
    }
    if (-1 < cStack_39) {
      lStack_48 = (long)cStack_39;
    }
    cVar3 = *(char *)((long)unaff_x20 + 0x17);
    plVar1 = (long *)*unaff_x20;
    if (-1 < (long)cVar3) {
      plVar1 = unaff_x20;
    }
    lVar2 = unaff_x20[1];
    if (-1 < cVar3) {
      lVar2 = (long)cVar3;
    }
    func_0x00010688d7cc(ppuVar4,(undefined1 *)((long)ppuVar4 + lStack_48),plVar1,
                        (long)plVar1 + lVar2);
    if (((ulong)ppuVar4 & 1) != 0) goto LAB_10b490724;
  }
  func_0x00010b490a44();
LAB_10b490724:
  func_0x000107c279a4(&puStack_50);
  func_0x00010b490a54();
  return;
}



/* Entry: 10b490760; end: 10b49082f;  */

void FUN_10b490760(long param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar4 = *(long *)(param_1 + 0x48);
  FUN_10b491414();
  plVar5 = (long *)(param_1 + 0x60);
  plVar6 = plVar5;
  plVar7 = plVar5;
  while( true ) {
    uVar3 = (uint)lVar4;
    plVar8 = (long *)*plVar6;
    if (plVar8 == (long *)0x0) break;
    lVar4 = (long)(plVar8 + 4);
    func_0x00010b490a64();
    bVar2 = -1 < (char)lVar4;
    lVar1 = 8;
    if (bVar2) {
      lVar1 = 0;
    }
    plVar6 = (long *)((long)plVar8 + lVar1);
    if (bVar2) {
      plVar7 = plVar8;
    }
  }
  if ((plVar5 != plVar7) && (func_0x00010b490a6c(), (uVar3 >> 7 & 1) == 0)) {
    plVar5 = plVar7;
    func_0x000107c27be0();
    if (*(long **)(param_1 + 0x58) == plVar7) {
      *(long **)(param_1 + 0x58) = plVar5;
    }
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
    func_0x00010530d618(*(undefined8 *)(param_1 + 0x60),plVar7);
    func_0x00010b4908f8(plVar7 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar7);
    return;
  }
  return;
}



/* Entry: 10b490830; end: 10b490833;  */

undefined8 * FUN_10b490830(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cec3e0;
  func_0x00010b49088c(param_1 + 0xb);
  func_0x000107c281dc(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b490834; end: 10b490847;  */

void FUN_10b490834(void)

{
  FUN_10b490848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b490848; end: 10b49091f;  */

undefined8 * FUN_10b490848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cec3e0;
  func_0x00010b49088c(param_1 + 0xb);
  func_0x000107c281dc(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b490920; end: 10b490943;  */

void FUN_10b490920(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)**(undefined8 **)(param_1 + 0x10);
  if (puVar1[1] != -1) {
    FUN_10b490b24(puVar1[1],1,*puVar1);
    _close(puVar1[1]);
    puVar1[1] = 0xffffffff;
  }
  return;
}



/* Entry: 10b490944; end: 10b4909bf;  */

long * FUN_10b490944(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = param_1 + 1;
  plVar1 = (long *)*plVar2;
  plVar3 = plVar2;
  while (plVar1 != (long *)0x0) {
    while (plVar3 = plVar1, func_0x00010b490a6c(), ((uint)param_1 >> 7 & 1) != 0) {
      plVar1 = (long *)*plVar3;
      plVar2 = plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_10b4909a8;
    }
    param_1 = plVar3 + 4;
    func_0x00010b490a64();
    if (((uint)param_1 >> 7 & 1) == 0) break;
    plVar2 = plVar3 + 1;
    plVar1 = (long *)*plVar2;
  }
LAB_10b4909a8:
  *param_2 = plVar3;
  return plVar2;
}



/* Entry: 10b4909c0; end: 10b490a03;  */

long * FUN_10b4909c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b4908f8(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b490a04; end: 10b490a87;  */

void FUN_10b490a04(void)

{
  char cVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 *puVar3;
  char in_stack_00000058;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    *(long *)(unaff_x20 + 0x88) = *(long *)(unaff_x20 + 0x88) + 1;
  }
  puVar2 = (undefined8 *)(unaff_x20 + 0x58);
  FUN_10b490944(puVar2,&uStack_48);
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x58;
    __Znwm();
    uStack_50 = 0;
    puStack_60 = puVar3;
    lStack_58 = unaff_x20 + 0x60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 4);
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    uStack_50 = CONCAT71(uStack_50._1_7_,1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = uStack_48;
    *puVar2 = puVar3;
    if (**(long **)(unaff_x20 + 0x58) != 0) {
      *(long *)(unaff_x20 + 0x58) = **(long **)(unaff_x20 + 0x58);
    }
    func_0x000107c27be4(*(undefined8 *)(unaff_x20 + 0x60),puVar3);
    *(long *)(unaff_x20 + 0x68) = *(long *)(unaff_x20 + 0x68) + 1;
    puStack_60 = (undefined8 *)0x0;
    FUN_10b4909c0(&puStack_60);
  }
  puVar2 = puVar3 + 7;
  cVar1 = *(char *)(puVar3 + 10);
  if (cVar1 == in_stack_00000058) {
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)();
      return;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(puVar3 + 10) == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      *(undefined1 *)(puVar2 + 3) = 0;
    }
    return;
  }
  func_0x000107c60c94();
  func_0x00010028b5dc();
  return;
}



/* Entry: 10b490a88; end: 10b490b1f;  */

void FUN_10b490a88(undefined8 *param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  byte bStack_28;
  
  func_0x000107c2ff4c(auStack_40,4);
  if ((bStack_28 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    func_0x000107c27d14(&uStack_58,auStack_40,&UNK_10f76f1d6);
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[2] = uStack_48;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  }
  func_0x000107c279a4(auStack_40);
  return;
}



/* Entry: 10b490b20; end: 10b490b23;  */

undefined8 * FUN_10b490b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cec460;
  func_0x000107c278a8(param_1 + 1);
  return param_1;
}



/* Entry: 10b490b24; end: 10b490bcb;  */

uint * FUN_10b490b24(uint *param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 auStack_f0 [48];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c39458();
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  _gettimeofday(&uStack_60,0);
  if (param_2 == 0) {
    _fstat(param_1,auStack_f0);
    uStack_50 = uStack_c0;
    uStack_48 = CONCAT44(uStack_48._4_4_,(int)(lStack_b8 / 1000));
  }
  else {
    uStack_48 = uStack_58;
    uStack_50 = uStack_60;
  }
  _futimes(param_1,&uStack_60);
  if ((int)param_1 != 0) {
    ___error();
    param_1 = (uint *)(ulong)*param_1;
    func_0x00010b490d0c(param_1,0xd);
  }
  func_0x000107c3944c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    iVar1 = (int)param_1;
    _fcopyfile();
    return (uint *)(ulong)(iVar1 == 0);
  }
  return param_1;
}



/* Entry: 10b490bcc; end: 10b490bef;  */

bool FUN_10b490bcc(undefined8 param_1,undefined8 param_2)

{
  _fcopyfile(param_1,param_2,0,8);
  return (int)param_1 == 0;
}



/* Entry: 10b490bf0; end: 10b490c23;  */

undefined8 * FUN_10b490bf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cec460;
  func_0x000107c278a8(param_1 + 1);
  return param_1;
}



/* Entry: 10b490c24; end: 10b490c33;  */

void FUN_10b490c24(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b490c28);
  (*pcVar1)();
}



/* Entry: 10b490c34; end: 10b490ca7;  */

undefined8 FUN_10b490c34(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3;
  _strlen(param_3);
  FUN_10b490ca8(param_1,&uStack_40,param_3,uVar1);
  func_0x00010b490d34();
  return param_1;
}



/* Entry: 10b490ca8; end: 10b490ce7;  */

long FUN_10b490ca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x000107c27940(param_1 + 8);
  func_0x000107c27950(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 10b490ce8; end: 10b490cfb;  */

void FUN_10b490ce8(void)

{
  FUN_10b490bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b490cfc; end: 10b490d5b;  */

undefined4 FUN_10b490cfc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10b490d5c; end: 10b490fc3;  */

void FUN_10b490d5c(undefined8 *param_1,int *param_2,ulong *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [96];
  ulong uStack_80;
  
  piVar2 = *(int **)param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    piVar2 = param_2;
  }
  _open(piVar2,0x1000000);
  if ((int)piVar2 == -1) {
    func_0x00010b490fec();
    ___error();
    uVar7 = 1;
    if (*piVar2 != 2) {
      uVar7 = 2;
    }
  }
  else {
    _bzero(auStack_e0,0x90);
    piVar3 = piVar2;
    _fstat(piVar2,auStack_e0);
    if ((int)piVar3 == -1) {
      func_0x00010b491004();
      func_0x00010b490fec();
      uVar7 = 3;
    }
    else if (((long)uStack_80 < 1) || (uStack_80 < *param_3)) {
      func_0x00010b491004();
      func_0x00010b490fec();
      uVar7 = 4;
    }
    else {
      piVar3 = (int *)0x0;
      _mmap(0,uStack_80,1,2,piVar2,0);
      piVar2 = piVar3;
      ___error();
      iVar1 = *piVar2;
      func_0x00010b491004();
      if (piVar3 == (int *)0xffffffffffffffff) {
        func_0x00010b490fec();
        uVar7 = 6;
        if (iVar1 == 0xc) {
          uVar7 = 7;
        }
      }
      else {
        uVar8 = param_3[1];
        if (uVar8 != 0) {
          if (uStack_80 <= uVar8) {
            uVar8 = uStack_80;
          }
          _madvise(piVar3,uVar8,3);
        }
        puVar4 = (undefined8 *)0x10;
        __ZnwmRKSt9nothrow_t(0x10,PTR___ZSt7nothrow_1103469d8);
        if (puVar4 == (undefined8 *)0x0) {
          func_0x00010b490ff8();
        }
        else {
          *puVar4 = piVar3;
          puVar4[1] = uStack_80;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_100 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          pcStack_f8 = FUN_10b490fc4;
          uStack_f0 = 0;
          lVar5 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
          puStack_128 = puVar4;
          _CFAllocatorCreate(lVar5,&uStack_130);
          if (lVar5 != 0) {
            lVar6 = 0;
            _CFDataCreateWithBytesNoCopy(0,piVar3,uStack_80,lVar5);
            _CFRelease(lVar5);
            if (lVar6 != 0) {
              func_0x000107c31720(&uStack_140,lVar6);
              _CFRelease(lVar6);
              param_1[1] = uStack_138;
              *param_1 = uStack_140;
              uStack_140 = 0;
              uStack_138 = 0;
              *(undefined1 *)(param_1 + 2) = 1;
              *(undefined4 *)(param_1 + 3) = 0;
              func_0x000107c27d78(&uStack_140);
              return;
            }
          }
          func_0x00010b490ff8();
          __ZdlPv(puVar4);
        }
        func_0x00010b490fec();
        uVar7 = 8;
      }
    }
  }
  *(undefined4 *)(param_1 + 3) = uVar7;
  return;
}



/* Entry: 10b490fc4; end: 10b490feb;  */

void FUN_10b490fc4(undefined8 param_1,undefined8 *param_2)

{
  _munmap(*param_2,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b490fec; end: 10b49100b;  */

void FUN_10b490fec(void)

{
  undefined1 *unaff_x19;
  
  *unaff_x19 = 0;
  unaff_x19[0x10] = 0;
  return;
}



/* Entry: 10b49100c; end: 10b49102f;  */

undefined8 FUN_10b49100c(undefined8 param_1)

{
  FUN_10b491030();
  func_0x0001005d80dc(param_1,0);
  return param_1;
}



/* Entry: 10b491030; end: 10b491043;  */

void FUN_10b491030(long *param_1)

{
  long lVar1;
  
  if (*param_1 == 0) {
    return;
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b492248(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b491044; end: 10b4910d3;  */

void FUN_10b491044(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_60 [24];
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  ppuStack_48 = &PTR_FUN_110cec4b0;
  uStack_40 = 0;
  uStack_28 = param_2;
  func_0x000107c278b8(auStack_60,&UNK_10f76f240);
  pppuVar1 = &ppuStack_48;
  FUN_10b491cc0(pppuVar1,auStack_60,param_3);
  FUN_10b492194(param_1,pppuVar1);
  func_0x00010b4924b0();
  FUN_10b490bf0(&ppuStack_48);
  return;
}



/* Entry: 10b4910d4; end: 10b4911c3;  */

void FUN_10b4910d4(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [5];
  undefined1 auStack_48 [40];
  
  FUN_10b491bf8();
  FUN_10b491044(auStack_70);
  uVar4 = param_2 >> 0x10 & 0xffff;
  if ((uint)uVar4 < 3) {
    puVar3 = (&PTR_DAT_113374a90)[uVar4];
  }
  else {
    puVar3 = &UNK_10f76f26e;
  }
  func_0x000107c278b8(auStack_88,puVar3);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x17) {
    puVar3 = (&PTR_DAT_113374aa8)[uVar1];
  }
  else {
    puVar3 = &UNK_10f76f27f;
  }
  puVar2 = auStack_70;
  FUN_10b490c34(puVar2,auStack_88,puVar3);
  FUN_10b492194(auStack_48,puVar2);
  func_0x00010b49248c();
  puVar2 = auStack_70;
  FUN_10b490bf0();
  FUN_10b494a20();
  func_0x00010b4924e4(*(undefined8 *)(*(long *)*puVar2 + 8),(long *)*puVar2,auStack_48);
  FUN_10b490bf0(auStack_48);
  return;
}



/* Entry: 10b4911c4; end: 10b4911fb;  */

void FUN_10b4911c4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    plVar1 = (long *)*(long *)(lVar2 + 8);
    if (-1 < *(char *)(lVar2 + 0x1f)) {
      plVar1 = (long *)(lVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__nftw_11034c708)(plVar1,FUN_10b491f18,0x20,5);
    return;
  }
  return;
}



/* Entry: 10b4911fc; end: 10b49127b;  */

void FUN_10b4911fc(undefined8 *param_1)

{
  undefined4 uVar1;
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [24];
  
  func_0x00010b49253c();
  if (extraout_x9 == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    func_0x00010b492474();
    if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)*param_1;
    }
    FUN_10b492708(auStack_40,auStack_38,uVar1);
    FUN_10b4922cc();
    func_0x00010b492274(auStack_40);
    func_0x00010b49248c();
  }
  return;
}



/* Entry: 10b49127c; end: 10b4912cf;  */

void FUN_10b49127c(void)

{
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b49253c();
  if (extraout_x9 == 0) {
    *(undefined1 *)unaff_x19 = 0;
  }
  else {
    func_0x00010b492474();
    unaff_x19[1] = uStack_30;
    *unaff_x19 = uStack_38;
    unaff_x19[2] = uStack_28;
    func_0x00010b49248c();
  }
  *(bool *)(unaff_x19 + 3) = extraout_x9 != 0;
  return;
}



/* Entry: 10b4912d0; end: 10b49135b;  */

void FUN_10b4912d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  func_0x00010b49253c();
  if (extraout_x9 == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    func_0x00010b492474();
    if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)*param_1;
    }
    FUN_10b492a24(auStack_50,auStack_48,param_3,uVar1);
    FUN_10b4923cc();
    FUN_10b492374(auStack_50);
    func_0x00010b49248c();
  }
  return;
}



/* Entry: 10b49135c; end: 10b491413;  */

undefined8 FUN_10b49135c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 auStack_40 [2];
  undefined8 *apuStack_30 [2];
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_10b4911fc(apuStack_30,param_2,param_3);
    if (apuStack_30[0] == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      FUN_10b4912d0(auStack_40,param_1,param_4,0);
      uVar1 = auStack_40[0];
      FUN_10b4929ac(auStack_40[0],*apuStack_30[0]);
      func_0x00010b4929dc(auStack_40[0]);
      FUN_10b4926c0(apuStack_30[0]);
      func_0x000105640438(auStack_40);
    }
    func_0x000105640484(apuStack_30);
  }
  return uVar1;
}



/* Entry: 10b491414; end: 10b49153b;  */

bool FUN_10b491414(long *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 auStack_88 [10];
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 uStack_50;
  undefined8 auStack_48 [3];
  
  if (*param_1 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = auStack_48;
    plVar2 = param_1;
    func_0x00010b49249c(auStack_48);
    uStack_60 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_50 = 1;
    plStack_58 = plVar2;
    _remove();
    puVar4 = puVar3;
    FUN_10b494a20();
    if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)*param_1;
    }
    FUN_10b491044(auStack_88,0x28,uVar7);
    puVar5 = &uStack_60;
    func_0x000107c28148(puVar5);
    (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,auStack_88,puVar5);
    puVar6 = auStack_88;
    FUN_10b490bf0();
    bVar1 = (int)puVar3 == 0;
    if ((int)puVar3 != 0) {
      ___error();
      if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)*param_1;
      }
      func_0x00010b492568(*puVar6,0xe,uVar7);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  }
  return bVar1;
}



/* Entry: 10b49153c; end: 10b4915c7;  */

undefined1  [16] FUN_10b49153c(long *param_1)

{
  char in_NG;
  char in_OV;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 *extraout_x9;
  undefined1 auVar5 [16];
  undefined4 auStack_c8 [30];
  undefined8 uStack_50;
  
  if (*param_1 != 0) {
    FUN_10b492470();
    func_0x00010b49252c();
    puVar1 = extraout_x9;
    if (in_NG == in_OV) {
      puVar1 = auStack_c8;
    }
    func_0x00010b492570();
    puVar2 = puVar1;
    func_0x00010b49248c();
    if ((int)puVar1 == 0) {
      uVar3 = 1;
      goto LAB_10b4915b0;
    }
    ___error();
    if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)*param_1;
    }
    func_0x00010b492568(*puVar2,0xc,uVar4);
  }
  uVar3 = 0;
  uStack_50 = 0;
LAB_10b4915b0:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uStack_50;
  return auVar5;
}



/* Entry: 10b4915c8; end: 10b491817;  */

void FUN_10b4915c8(undefined8 *param_1,long *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined1 extraout_w8;
  undefined *puVar8;
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_78 = 0;
    plVar4 = param_2;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_68 = 1;
    ppuVar2 = &PTR___tlv_bootstrap_11340da38;
    plStack_70 = plVar4;
    func_0x00010b4924cc();
    *ppuVar2 = (undefined *)0x0;
    ppuVar2 = &PTR___tlv_bootstrap_11340da50;
    func_0x00010b4924cc();
    *ppuVar2 = (undefined *)0x0;
    ppuVar2 = &PTR___tlv_bootstrap_11340da68;
    func_0x00010b4924cc();
    *ppuVar2 = param_3;
    ppuVar2 = &PTR___tlv_bootstrap_11340da80;
    func_0x00010b4924cc();
    *ppuVar2 = param_4;
    puVar8 = PTR___tlv_bootstrap_11340dab0;
    ppuVar2 = &PTR___tlv_bootstrap_11340dab0;
    ppuVar3 = ppuVar2;
    (*(code *)PTR___tlv_bootstrap_11340dab0)();
    ppuVar6 = &PTR___tlv_bootstrap_11340da98;
    if (((ulong)*ppuVar3 & 1) == 0) {
      ppuVar3 = ppuVar6;
      (*(code *)PTR___tlv_bootstrap_11340da98)();
      func_0x00010b4924d4();
      *(undefined1 *)ppuVar3 = extraout_w8;
    }
    puVar1 = PTR___tlv_bootstrap_11340da98;
    ppuVar3 = ppuVar6;
    (*(code *)PTR___tlv_bootstrap_11340da98)();
    func_0x00010563d420();
    plVar4 = (long *)(*param_2 + 8);
    if (*(char *)(*param_2 + 0x1f) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    _nftw(plVar4,FUN_10b491818,0x20,5);
    FUN_10b494a20();
    if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)*param_2;
    }
    FUN_10b491044(auStack_a0,1,uVar7);
    func_0x000107c28148(&uStack_78);
    puVar5 = (undefined8 *)*plVar4;
    func_0x00010b492548(*(undefined8 *)*puVar5);
    func_0x00010b492514();
    FUN_10b494a20();
    if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)*param_2;
    }
    FUN_10b491044(auStack_a0,2,uVar7);
    plVar4 = (long *)*puVar5;
    func_0x00010b492548(*(undefined8 *)(*plVar4 + 0x10));
    func_0x00010b492514();
    FUN_10b494a20();
    if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)*param_2;
    }
    FUN_10b491044(auStack_a0,3,uVar7);
    func_0x00010b492548(*(undefined8 *)(*(long *)*plVar4 + 0x10));
    func_0x00010b492514();
    (*(code *)puVar8)();
    if (((ulong)*ppuVar2 & 1) == 0) {
      (*(code *)puVar1)();
      func_0x00010b4924d4();
      *(undefined1 *)ppuVar6 = 1;
    }
    puVar8 = *ppuVar3;
    param_1[1] = ppuVar3[1];
    *param_1 = puVar8;
    param_1[2] = ppuVar3[2];
    ppuVar3[1] = (undefined *)0x0;
    ppuVar3[2] = (undefined *)0x0;
    *ppuVar3 = (undefined *)0x0;
  }
  return;
}



/* Entry: 10b491818; end: 10b491b9b;  */

undefined8 FUN_10b491818(long param_1,long param_2,int param_3,int *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar10;
  long extraout_x8_01;
  code *extraout_x9;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  if (param_3 == 0) {
    func_0x000107c278b8(auStack_78,param_1 + *param_4);
    lVar17 = *(long *)(param_2 + 0x20);
    lVar8 = *(long *)(param_2 + 0x28);
    ppuVar5 = &PTR___tlv_bootstrap_11340dab0;
    (*(code *)PTR___tlv_bootstrap_11340dab0)();
    ppuVar7 = &PTR___tlv_bootstrap_11340da98;
    if (((ulong)*ppuVar5 & 1) == 0) {
      ppuVar5 = ppuVar7;
      (*(code *)PTR___tlv_bootstrap_11340da98)();
      *ppuVar5 = (undefined *)0x0;
      ppuVar5[1] = (undefined *)0x0;
      ppuVar5[2] = (undefined *)0x0;
      puVar6 = extraout_x8;
      (*extraout_x9)();
      *puVar6 = 1;
    }
    func_0x00010b492550(&uStack_c8);
    (*(code *)PTR___tlv_bootstrap_11340da98)(lVar8 / 1000000 + lVar17 * 1000);
    uStack_a0 = uStack_b8;
    uVar19 = uStack_c0;
    uVar18 = uStack_c8;
    uStack_98 = *(undefined8 *)(param_2 + 0x60);
    uStack_a8 = uStack_c0;
    uStack_b0 = uStack_c8;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_88 = 0;
    puVar16 = (undefined8 *)ppuVar7[1];
    if (puVar16 < ppuVar7[2]) {
      puVar16[2] = uStack_a0;
      puVar16[1] = uVar19;
      *puVar16 = uVar18;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b0 = 0;
      puVar16[4] = extraout_x8_00;
      puVar16[3] = uStack_98;
      puVar16[5] = 0;
      puVar16 = puVar16 + 6;
    }
    else {
      puVar15 = (undefined8 *)*ppuVar7;
      lVar17 = (long)puVar16 - (long)puVar15;
      uVar1 = lVar17 / 0x30 + 1;
      if (0x555555555555555 < uVar1) {
        FUN_10b492180();
LAB_10b491b44:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10b491b48);
        (*pcVar4)();
      }
      uVar3 = ((long)ppuVar7[2] - (long)puVar15) / 0x30;
      uVar12 = uVar3 * 2;
      if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
        uVar12 = uVar1;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar3) {
        uVar12 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar12) {
        func_0x000104bd35f4();
        goto LAB_10b491b44;
      }
      lVar8 = uVar12 * 0x30;
      uStack_90 = extraout_x8_00;
      __Znwm();
      puVar2 = (undefined8 *)(lVar8 + lVar17);
      puVar2[1] = uStack_a8;
      *puVar2 = uStack_b0;
      puVar2[2] = uStack_a0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b0 = 0;
      puVar2[4] = uStack_90;
      puVar2[3] = uStack_98;
      puVar2[5] = uStack_88;
      puVar10 = puVar2 + (lVar17 / -0x30) * 6;
      for (puVar11 = puVar15; puVar11 != puVar16; puVar11 = puVar11 + 6) {
        uVar19 = puVar11[1];
        uVar18 = *puVar11;
        puVar10[2] = puVar11[2];
        puVar10[1] = uVar19;
        *puVar10 = uVar18;
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = 0;
        uVar19 = puVar11[4];
        uVar18 = puVar11[3];
        puVar10[5] = puVar11[5];
        puVar10[4] = uVar19;
        puVar10[3] = uVar18;
        puVar10 = puVar10 + 6;
      }
      for (; puVar15 != puVar16; puVar15 = puVar15 + 6) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar15);
      }
      puVar16 = puVar2 + 6;
      puVar14 = *ppuVar7;
      *ppuVar7 = (undefined *)(puVar2 + (lVar17 / -0x30) * 6);
      ppuVar7[1] = (undefined *)puVar16;
      ppuVar7[2] = (undefined *)(lVar8 + uVar12 * 0x30);
      if (puVar14 != (undefined *)0x0) {
        __ZdlPv();
      }
    }
    ppuVar7[1] = (undefined *)puVar16;
    func_0x00010b4924b8();
    func_0x00010b49248c();
    ppuVar5 = &PTR___tlv_bootstrap_11340da80;
    (*(code *)PTR___tlv_bootstrap_11340da80)();
    plVar13 = (long *)*ppuVar5;
    if (plVar13 == (long *)0x0) {
      func_0x00010b4924f4();
      puVar14 = *ppuVar5;
      if (puVar14 != (undefined *)0x0) {
        func_0x00010b492550(&uStack_b0);
        uStack_98 = CONCAT71(uStack_98._1_7_,1);
        FUN_10b491f54(puVar14,&uStack_b0);
        func_0x00010b4924b8();
      }
    }
    else {
      plVar9 = plVar13;
      __ZNSt3__15mutex4lockEv();
      func_0x00010b4924f4();
      lVar17 = *plVar9;
      if (lVar17 != 0) {
        func_0x00010b492550(&uStack_b0);
        uStack_98 = CONCAT71(uStack_98._1_7_,1);
        FUN_10b491f54(lVar17,&uStack_b0);
        func_0x00010b4924b8();
      }
      __ZNSt3__15mutex6unlockEv(plVar13);
    }
    ppuVar5 = &PTR___tlv_bootstrap_11340da38;
    (*(code *)PTR___tlv_bootstrap_11340da38)();
    *ppuVar5 = *ppuVar5 + 1;
    ppuVar5 = &PTR___tlv_bootstrap_11340da50;
    func_0x00010b4924cc(*(undefined8 *)(param_2 + 0x60));
    *ppuVar5 = *ppuVar5 + extraout_x8_01;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  }
  return 0;
}



/* Entry: 10b491b9c; end: 10b491bf7;  */

bool FUN_10b491b9c(long *param_1)

{
  char in_NG;
  char in_OV;
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *extraout_x9;
  undefined1 auStack_c8 [168];
  
  if (*param_1 == 0) {
    bVar1 = false;
  }
  else {
    FUN_10b492470();
    func_0x00010b49252c();
    puVar2 = extraout_x9;
    if (in_NG == in_OV) {
      puVar2 = auStack_c8;
    }
    func_0x00010b492570(puVar2);
    bVar1 = (int)puVar2 == 0;
    func_0x00010b49248c();
  }
  return bVar1;
}



/* Entry: 10b491bf8; end: 10b491cbf;  */

undefined8 FUN_10b491bf8(int param_1)

{
  switch(param_1) {
  case 0xb:
    return 0x1f;
  case 0xc:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x19:
  case 0x1a:
  case 0x1b:
    goto code_r0x00010b491c64;
  case 0xd:
    return 0x14;
  case 0xe:
    return 0x22;
  case 0x11:
    return 0x1e;
  case 0x16:
    return 0x1d;
  case 0x17:
    return 0x1a;
  case 0x18:
    return 0x19;
  case 0x1c:
    return 0x17;
  default:
    if (param_1 == 0x45) {
      return 0x18;
    }
    if (param_1 == 5) {
      return 0x16;
    }
    if (param_1 == 0x23) {
      return 0x20;
    }
    if (param_1 == 0x2d) {
      return 0x21;
    }
    if (param_1 == 0x42) {
      return 0x1b;
    }
    if (param_1 == 2) {
      return 0x15;
    }
code_r0x00010b491c64:
    return 0x1c;
  }
}



/* Entry: 10b491cc0; end: 10b491d37;  */

undefined8 FUN_10b491cc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__19to_stringEi(auStack_58,param_3);
  func_0x00010b4921fc(param_1,&uStack_40,auStack_58);
  func_0x00010b492480();
  func_0x00010b4924b8();
  return param_1;
}



/* Entry: 10b491d38; end: 10b491d73;  */

void FUN_10b491d38(undefined8 param_1)

{
  char ***pppcVar1;
  undefined8 ***pppuVar2;
  char ***pppcVar3;
  undefined8 ***pppuVar4;
  char ***pppcVar5;
  char ***pppcVar6;
  undefined8 uVar7;
  char ***pppcVar8;
  undefined1 auStack_d0 [24];
  char **ppcStack_b8;
  char **ppcStack_b0;
  byte bStack_a1;
  undefined8 **appuStack_a0 [2];
  char cStack_89;
  char cStack_88;
  char **ppcStack_80;
  char **ppcStack_78;
  char **ppcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  
  func_0x00010b492560(1);
  func_0x00010b492560(2);
  func_0x00010b492560(3);
  uVar7 = param_1;
  func_0x000107c2ff4c(appuStack_a0);
  if (cStack_88 == '\x01') {
    pppuVar2 = (undefined8 ***)appuStack_a0[0];
    if (-1 < cStack_89) {
      pppuVar2 = appuStack_a0;
    }
    _opendir();
    if (pppuVar2 != (undefined8 ***)0x0) {
      func_0x000107c27e5c();
      ppcStack_80 = (char **)0x10ef12930;
      ppcStack_78 = (char **)0x0;
      ppcStack_70 = (char **)0x4;
      uStack_68 = 0;
      pcStack_50 = "";
      uStack_48 = 0;
      uStack_60 = param_1;
      uStack_58 = uVar7;
      func_0x000107c39478();
      func_0x000107c3173c(&ppcStack_b8);
      ppcStack_78 = ppcStack_b0;
      ppcStack_80 = ppcStack_b8;
      if (-1 < (char)bStack_a1) {
        ppcStack_78 = (char **)(ulong)bStack_a1;
        ppcStack_80 = (char **)&ppcStack_b8;
      }
      pppcVar3 = &ppcStack_80;
      uVar7 = 1;
      func_0x000107c2810c(pppcVar3,1,(long)ppcStack_78 + -2);
      while (pppuVar4 = pppuVar2, _readdir(), pppuVar4 != (undefined8 ***)0x0) {
        if (*(char *)((long)pppuVar4 + 0x14) == '\x04') {
          pppcVar1 = (char ***)((long)pppuVar4 + 0x15);
          pppcVar5 = pppcVar1;
          ppcStack_80 = (char **)pppcVar1;
          _strlen();
          pppcVar6 = &ppcStack_80;
          pppcVar8 = pppcVar3;
          ppcStack_78 = (char **)pppcVar5;
          func_0x000105394f0c(pppcVar6,pppcVar3,uVar7);
          if (((ulong)pppcVar6 & 1) != 0) {
            pppcVar6 = (char ***)appuStack_a0;
            func_0x000107c27e5c();
            uStack_68 = 0;
            ppcStack_80 = (char **)pppcVar6;
            ppcStack_78 = (char **)pppcVar8;
            ppcStack_70 = (char **)pppcVar1;
            func_0x000107c2793c(&UNK_10f409b65);
            func_0x000107c3173c(auStack_d0);
            func_0x00010b4911d8(auStack_d0);
            func_0x00010b4924b0();
          }
        }
      }
      _closedir(pppuVar2);
      func_0x00010b4924ec();
    }
  }
  func_0x000107c279a4(appuStack_a0);
  return;
}



/* Entry: 10b491d74; end: 10b491f17;  */

void FUN_10b491d74(ulong param_1,undefined8 param_2)

{
  char ***pppcVar1;
  undefined8 ***pppuVar2;
  char ***pppcVar3;
  undefined8 ***pppuVar4;
  char ***pppcVar5;
  char ***pppcVar6;
  undefined8 uVar7;
  char ***pppcVar8;
  undefined1 auStack_d0 [24];
  char **ppcStack_b8;
  char **ppcStack_b0;
  byte bStack_a1;
  undefined8 **appuStack_a0 [2];
  char cStack_89;
  char cStack_88;
  char **ppcStack_80;
  char **ppcStack_78;
  char **ppcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  
  uVar7 = param_2;
  func_0x000107c2ff4c(appuStack_a0);
  if (cStack_88 == '\x01') {
    pppuVar2 = (undefined8 ***)appuStack_a0[0];
    if (-1 < cStack_89) {
      pppuVar2 = appuStack_a0;
    }
    _opendir();
    if (pppuVar2 != (undefined8 ***)0x0) {
      func_0x000107c27e5c();
      ppcStack_80 = (char **)0x10ef12930;
      ppcStack_78 = (char **)0x0;
      ppcStack_70 = (char **)(param_1 & 0xffffffff);
      uStack_68 = 0;
      pcStack_50 = "";
      uStack_48 = 0;
      uStack_60 = param_2;
      uStack_58 = uVar7;
      func_0x000107c39478();
      func_0x000107c3173c(&ppcStack_b8);
      ppcStack_78 = ppcStack_b0;
      ppcStack_80 = ppcStack_b8;
      if (-1 < (char)bStack_a1) {
        ppcStack_78 = (char **)(ulong)bStack_a1;
        ppcStack_80 = (char **)&ppcStack_b8;
      }
      pppcVar3 = &ppcStack_80;
      uVar7 = 1;
      func_0x000107c2810c(pppcVar3,1,(long)ppcStack_78 + -2);
      while (pppuVar4 = pppuVar2, _readdir(), pppuVar4 != (undefined8 ***)0x0) {
        if (*(char *)((long)pppuVar4 + 0x14) == '\x04') {
          pppcVar1 = (char ***)((long)pppuVar4 + 0x15);
          pppcVar5 = pppcVar1;
          ppcStack_80 = (char **)pppcVar1;
          _strlen();
          pppcVar6 = &ppcStack_80;
          pppcVar8 = pppcVar3;
          ppcStack_78 = (char **)pppcVar5;
          func_0x000105394f0c(pppcVar6,pppcVar3,uVar7);
          if (((ulong)pppcVar6 & 1) != 0) {
            pppcVar6 = (char ***)appuStack_a0;
            func_0x000107c27e5c();
            uStack_68 = 0;
            ppcStack_80 = (char **)pppcVar6;
            ppcStack_78 = (char **)pppcVar8;
            ppcStack_70 = (char **)pppcVar1;
            func_0x000107c2793c(&UNK_10f409b65);
            func_0x000107c3173c(auStack_d0);
            func_0x00010b4911d8(auStack_d0);
            func_0x00010b4924b0();
          }
        }
      }
      _closedir(pppuVar2);
      func_0x00010b4924ec();
    }
  }
  func_0x000107c279a4(appuStack_a0);
  return;
}



/* Entry: 10b491f18; end: 10b491f53;  */

undefined8 FUN_10b491f18(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if ((*(int *)(param_4 + 4) != 0) && (_remove(), (int)param_1 != 0)) {
    ___error();
    FUN_10b4910d4(*param_1,0x1000f,0);
  }
  return 0;
}



/* Entry: 10b491f54; end: 10b49217f;  */

void FUN_10b491f54(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *unaff_x24;
  long *plVar7;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar4 = param_1 + 3;
  func_0x000107c278c4();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar5 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar5) == 0) {
      unaff_x24 = (long *)(uVar5 & (ulong)plVar4);
    }
    else {
      unaff_x24 = plVar4;
      if (plVar6 <= plVar4) {
        uVar2 = 0;
        if (plVar6 != (long *)0x0) {
          uVar2 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar4 - uVar2 * (long)plVar6);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10b492014;
          plVar1 = (long *)plVar7[1];
          if (plVar1 != plVar4) break;
          uVar2 = (ulong)(plVar7 + 2);
          func_0x000107c278d0(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return;
          }
        }
        if (((ulong)plVar6 & uVar5) == 0) {
          plVar1 = (long *)((ulong)plVar1 & uVar5);
        }
        else if (plVar6 <= plVar1) {
          uVar2 = 0;
          if (plVar6 != (long *)0x0) {
            uVar2 = (ulong)plVar1 / (ulong)plVar6;
          }
          plVar1 = (long *)((long)plVar1 - uVar2 * (long)plVar6);
        }
      } while (plVar1 == unaff_x24);
    }
  }
LAB_10b492014:
  plVar7 = param_1 + 2;
  plVar1 = (long *)0x30;
  __Znwm();
  uStack_58 = 0;
  *plVar1 = 0;
  plVar1[1] = (long)plVar4;
  plStack_68 = plVar1;
  plStack_60 = plVar7;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar1 + 2,param_2);
  *(undefined1 *)(plVar1 + 5) = *(undefined1 *)(param_2 + 0x18);
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar5 = 1;
    if ((long *)0x2 < plVar6) {
      uVar5 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar5 = uVar5 | (long)plVar6 << 1;
    uVar2 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar2) {
      uVar5 = uVar2;
    }
    func_0x00010730c3f4(param_1,uVar5);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar6 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x24 = plVar4;
      if (plVar6 <= plVar4) {
        uVar5 = 0;
        if (plVar6 != (long *)0x0) {
          uVar5 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar4 - uVar5 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + (long)unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
    *(long **)(lVar3 + (long)unaff_x24 * 8) = plVar7;
    if (*plStack_68 != 0) {
      plVar4 = *(long **)(*plStack_68 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar4 = (long *)((ulong)plVar4 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar4) {
        uVar5 = 0;
        if (plVar6 != (long *)0x0) {
          uVar5 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar5 * (long)plVar6);
      }
      *(long **)(lVar3 + (long)plVar4 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar4;
    *plVar4 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x00010730c5cc(&plStack_68);
  return;
}



/* Entry: 10b492180; end: 10b492193;  */

void FUN_10b492180(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x00010b4921c8();
  *puVar1 = &PTR_FUN_110cec4b0;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 10b492194; end: 10b49222b;  */

void FUN_10b492194(undefined8 *param_1,long param_2)

{
  func_0x00010b4921c8();
  *param_1 = &PTR_FUN_110cec4b0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 10b49222c; end: 10b492247;  */

void FUN_10b49222c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b492248(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b492248; end: 10b492297;  */

long FUN_10b492248(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10b492298; end: 10b4922af;  */

void FUN_10b492298(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b492bd8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b4922b0; end: 10b4922cb;  */

void FUN_10b4922b0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b492bd8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4922cc; end: 10b492317;  */

void FUN_10b4922cc(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  func_0x00010b49259c();
  if (unaff_x21 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_FUN_110cec500;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = unaff_x21;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 10b492318; end: 10b49231b;  */

void FUN_10b492318(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b49231c; end: 10b49232f;  */

void FUN_10b49231c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



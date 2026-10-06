/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10816bb84; end: 10816bb97;  */

void FUN_10816bb84(void)

{
  FUN_10816bb44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816bb98; end: 10816be5b;  */

long FUN_10816bb98(undefined8 param_1,undefined8 param_2,undefined4 param_3,float param_4,
                  long param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  undefined4 uVar14;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float afStack_50 [4];
  undefined4 uStack_40;
  float fStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar13 = (float)NEON_fminnm((float)(double)(long)(*(float *)(param_5 + 0x90) + 0.5),0x4effffff);
  uVar14 = 0xceffffff;
  if (fVar13 <= -2.1474835e+09) {
    fVar13 = -2.1474835e+09;
  }
  iVar12 = (int)fVar13;
  iVar10 = 1;
  if (iVar12 != 1) {
    iVar10 = 2;
  }
  if (iVar10 != *(int *)(param_5 + 0x40)) {
    uVar14 = 0xceffffff;
    if (iVar12 == 1) {
      FUN_10816bff0(&uStack_78);
    }
    else {
      FUN_10816c02c(&uStack_78);
    }
    uVar11 = uStack_78;
    uStack_78 = 0;
    uStack_60 = 0;
    uVar6 = *(undefined8 *)(param_5 + 0x38);
    *(undefined8 *)(param_5 + 0x38) = uVar11;
    FUN_10816bec0(uVar6);
    FUN_10816be9c(&uStack_60);
    if (iVar12 == 1) {
      FUN_10816c17c();
    }
    else {
      FUN_10816c13c(&uStack_78);
    }
    uVar11 = *(undefined8 *)(param_5 + 0x30);
    lStack_80 = *(long *)(param_5 + 0x38);
    if (lStack_80 != 0) {
      piVar1 = (int *)(lStack_80 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10818b968(uVar11,&lStack_80);
    FUN_10816be5c(&lStack_80);
    *(int *)(param_5 + 0x40) = iVar10;
  }
  uVar11 = *(undefined8 *)(param_5 + 0x38);
  uStack_60 = uStack_60 & 0xffffffff00000000;
  FUN_10816385c(param_5 + 0x48);
  uStack_60 = CONCAT44(fVar13,(undefined4)uStack_60);
  afStack_50[1] = 1.0;
  uStack_58 = uVar14;
  uStack_54 = param_3;
  afStack_50[0] = param_4;
  FUN_10816385c(param_5 + 0x60);
  lStack_90 = 0;
  lStack_88 = 0;
  plStack_98 = (long *)0x0;
  pplStack_70 = &plStack_98;
  uStack_68 = 0;
  plVar7 = &lStack_88;
  lVar9 = 2;
  afStack_50[2] = fVar13;
  afStack_50[3] = (float)uVar14;
  uStack_40 = param_3;
  fStack_3c = param_4;
  FUN_10816c330();
  lStack_90 = 0;
  lStack_88 = (long)plVar7 + lVar9 * 0x14;
  for (lVar9 = 0; lVar9 != 0x28; lVar9 = lVar9 + 0x14) {
    puVar2 = (undefined8 *)((long)plVar7 + lVar9);
    uVar6 = *(undefined8 *)((long)&uStack_60 + lVar9);
    puVar2[1] = *(undefined8 *)((long)&uStack_58 + lVar9);
    *puVar2 = uVar6;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((long)afStack_50 + lVar9);
    lStack_90 = lStack_90 + -0x14;
  }
  lStack_90 = (long)plVar7 - lStack_90;
  uStack_68 = 1;
  plStack_98 = plVar7;
  FUN_10816c37c(&pplStack_70);
  FUN_10816c068(uVar11,&plStack_98);
  FUN_10816c3c0(&plStack_98);
  uVar11 = *(undefined8 *)(param_5 + 0x78);
  plStack_98 = *(long **)(param_5 + 0x80);
  lVar9 = *(long *)(param_5 + 0x38);
  uStack_60 = uVar11;
  if (iVar12 == 1) {
    FUN_10816bf30(lVar9,&uStack_60);
    func_0x00010816bf54(lVar9,&plStack_98);
  }
  else {
    func_0x00010816bf78(lVar9,&uStack_60);
    uVar14 = (undefined4)uVar11;
    func_0x00010816bf9c(lVar9,&uStack_60);
    func_0x00010816bfdc(&uStack_60,&plStack_98);
    pplStack_70 = (long **)CONCAT44(pplStack_70._4_4_,uVar14);
    func_0x00010816bfc0(lVar9,&pplStack_70);
  }
  uVar5 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38;
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    lVar8 = lVar9;
    func_0x00010816c43c();
    func_0x00010816c40c();
    if (lVar8 != 0) {
      do {
        func_0x00010816c454();
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
        if (bVar4) {
          *extraout_x8 = extraout_w9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((bool)uVar5) {
        func_0x00010816c430();
        (*extraout_x8_00)();
      }
    }
    return lVar9;
  }
  return lVar9;
}



/* Entry: 10816be5c; end: 10816be9b;  */

void FUN_10816be5c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x00010816c40c();
  if (param_1 != 0) {
    do {
      func_0x00010816c454();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010816c430();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 10816be9c; end: 10816bebf;  */

void FUN_10816be9c(void)

{
  func_0x00010816c40c();
  FUN_10816bec0();
  return;
}



/* Entry: 10816bec0; end: 10816beef;  */

void FUN_10816bec0(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x00010816c454();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010816bee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10816bef0; end: 10816bf2f;  */

void FUN_10816bef0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x00010816c40c();
  if (param_1 != 0) {
    do {
      func_0x00010816c454();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010816c430();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 10816bf30; end: 10816bfef;  */

void FUN_10816bf30(long param_1,float *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  bVar3 = false;
  if ((*(float *)(param_1 + 0x54) == *param_2) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x58)) && !NAN(param_2[1]))) {
    bVar3 = *(float *)(param_1 + 0x58) == param_2[1];
  }
  if (bVar3) {
    return;
  }
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)param_2;
  uStack_21 = 1;
  func_0x00010818add8(auStack_38);
  if ((bStack_2c & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x28);
    uVar5 = (uint)uVar2;
    if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar2 | 8;
        *(short *)(param_1 + 0x28) = (short)uVar5;
        uStack_21 = 0;
      }
      *(ushort *)(param_1 + 0x28) = (ushort)uVar5 | 4;
      puStack_40 = &uStack_21;
      puVar4 = *(undefined8 **)(param_1 + 0x10);
      if ((uVar5 >> 4 & 1) == 0) {
        if (puVar4 != (undefined8 *)0x0) {
          func_0x00010818ad34(&puStack_40);
        }
      }
      else {
        puVar1 = (undefined8 *)puVar4[1];
        for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
          func_0x00010818ad34(&puStack_40,*puVar4);
        }
      }
    }
  }
  func_0x00010818a9f8(auStack_38);
  return;
}



/* Entry: 10816bff0; end: 10816c02b;  */

void FUN_10816bff0(undefined8 *param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  lVar1 = 0x68;
  __Znwm();
  func_0x00010816c418();
  *(undefined8 *)(lVar1 + 0x60) = 0;
  FUN_10816c0b0();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10816c02c; end: 10816c067;  */

void FUN_10816c02c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  undefined8 in_register_00005008;
  
  lVar1 = 0x70;
  __Znwm();
  func_0x00010816c418();
  *(undefined8 *)(lVar1 + 0x68) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0x60) = param_2;
  func_0x00010816c10c();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10816c068; end: 10816c0af;  */

void FUN_10816c068(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  uVar3 = param_1 + 0x38;
  FUN_10816c1bc();
  if ((uVar3 & 1) == 0) {
    FUN_10816c2b8(param_1 + 0x38,param_2);
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(param_1 + 0x28);
      uVar5 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2 | 8;
          *(short *)(param_1 + 0x28) = (short)uVar5;
          uStack_21 = 0;
        }
        *(ushort *)(param_1 + 0x28) = (ushort)uVar5 | 4;
        puStack_40 = &uStack_21;
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        if ((uVar5 >> 4 & 1) == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar4[1];
          for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar4);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10816c0b0; end: 10816c13b;  */

void FUN_10816c0b0(undefined8 *param_1)

{
  func_0x00010816c0dc();
  *param_1 = &PTR_FUN_110a2b940;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  return;
}



/* Entry: 10816c13c; end: 10816c17b;  */

void FUN_10816c13c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x00010816c40c();
  if (param_1 != 0) {
    do {
      func_0x00010816c454();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010816c430();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 10816c17c; end: 10816c1bb;  */

void FUN_10816c17c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x00010816c40c();
  if (param_1 != 0) {
    do {
      func_0x00010816c454();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010816c430();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 10816c1bc; end: 10816c1df;  */

long FUN_10816c1bc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    FUN_10816c200();
    return lVar1;
  }
  return 0;
}



/* Entry: 10816c1e0; end: 10816c1ff;  */

void FUN_10816c1e0(void)

{
  FUN_10816c200();
  return;
}



/* Entry: 10816c200; end: 10816c257;  */

bool FUN_10816c200(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  while ((param_1 != param_2 && (lVar1 = param_1, FUN_10816c258(param_1,param_3), (int)lVar1 != 0)))
  {
    param_1 = param_1 + 0x14;
    param_3 = param_3 + 0x14;
  }
  return param_1 == param_2;
}



/* Entry: 10816c258; end: 10816c2b7;  */

bool FUN_10816c258(float *param_1,float *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[4] == param_2[4])) && (param_1[1] == param_2[1])) &&
     (param_1[2] == param_2[2])) {
    return param_1[3] == param_2[3];
  }
  return false;
}



/* Entry: 10816c2b8; end: 10816c31b;  */

void FUN_10816c2b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010816c2f0();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10816c31c; end: 10816c32f;  */

void FUN_10816c31c(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_10816c354();
  return;
}



/* Entry: 10816c330; end: 10816c353;  */

void FUN_10816c330(void)

{
  FUN_10816c354();
  return;
}



/* Entry: 10816c354; end: 10816c37b;  */

long FUN_10816c354(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0xccccccccccccccd) {
    lVar1 = param_2 * 0x14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10816c3a8(param_1);
  }
  return param_1;
}



/* Entry: 10816c37c; end: 10816c3a7;  */

long FUN_10816c37c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10816c3a8(param_1);
  }
  return param_1;
}



/* Entry: 10816c3a8; end: 10816c3bf;  */

void FUN_10816c3a8(undefined8 *param_1)

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



/* Entry: 10816c3c0; end: 10816c3f3;  */

undefined8 FUN_10816c3c0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10816c3a8(&uStack_28);
  return param_1;
}



/* Entry: 10816c3f4; end: 10816c45f;  */

void FUN_10816c3f4(void)

{
  return;
}



/* Entry: 10816c460; end: 10816c653;  */

void FUN_10816c460(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar4 = *param_2;
  plVar3 = (long *)*param_4;
  *param_4 = 0;
  uStack_80 = 0;
  plVar2 = (long *)0x48;
  plStack_78 = plVar3;
  __Znwm();
  plStack_78 = (long *)0x0;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[2] = 0;
  *(undefined2 *)(plVar2 + 5) = 0;
  *plVar2 = (long)&PTR_FUN_110a29918;
  uStack_68 = 0;
  plStack_48 = plVar3;
  FUN_1081874f0(plVar2 + 6,&plStack_48);
  FUN_108154cb4(&plStack_48);
  plVar2[8] = 0;
  plVar2[7] = 0;
  plStack_60 = param_3;
  lStack_58 = lVar4;
  plStack_50 = plVar2;
  FUN_108164708(&plStack_60,0);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  plStack_70 = plVar2;
  FUN_108154cb4(&uStack_68);
  FUN_108154cb4(&plStack_78);
  FUN_108164674(&uStack_80,plVar2 + 6);
  plStack_70 = (long *)0x0;
  if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
    plStack_48 = plVar2;
    (**(code **)(*plVar2 + 0x18))(0,plVar2);
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_60 = plVar2;
    FUN_108155570(*(undefined8 *)(lVar4 + 0x70),&plStack_60);
    FUN_108155920(&plStack_60);
  }
  FUN_10816c654(&plStack_48);
  FUN_10816c654(&plStack_70);
  uVar1 = uStack_80;
  uStack_80 = 0;
  *param_1 = uVar1;
  FUN_108164628(&uStack_80);
  return;
}



/* Entry: 10816c654; end: 10816c6a3;  */

long * FUN_10816c654(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816c6a4; end: 10816c6cb;  */

undefined8 * FUN_10816c6a4(undefined8 *param_1)

{
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816c6cc; end: 10816c6df;  */

void FUN_10816c6cc(void)

{
  FUN_10816c6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816c6e0; end: 10816ca2b;  */

void FUN_10816c6e0(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  long unaff_x20;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  long lStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong uStack_38;
  
  uStack_38 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  uStack_c8 = 0;
  uVar3 = (int)*(float *)(param_3 + 0x38) != 0;
  uVar4 = (int)*(float *)(param_3 + 0x38) == 1;
  if (!(bool)uVar4) goto LAB_10816c8e0;
  fVar7 = *(float *)(param_3 + 0x3c);
  func_0x00010816ca58();
  if ((bool)uVar3 && !(bool)uVar4) {
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_7c = 0;
    uStack_64 = 0;
    fStack_6c = 0.0;
    uStack_68 = 0;
    uStack_44 = 0;
    uStack_4c = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    lStack_5c = 0;
    param_2 = 0x43b40000;
    fStack_90 = 1.0;
    fStack_80 = fVar7 / 360.0;
    fStack_78 = 1.0;
    fStack_60 = 1.0;
    uStack_48 = 0x3f800000;
    FUN_1083ae048(auStack_a8,&fStack_90);
    func_0x00010816ca98();
    func_0x00010816ca2c();
    func_0x00010816ca90();
  }
  fVar7 = *(float *)(param_3 + 0x40);
  func_0x00010816ca58();
  fVar8 = (float)param_2;
  if (!(bool)uVar3 || (bool)uVar4) goto LAB_10816c840;
  func_0x00010816ca6c();
  fVar9 = fVar8 / (fVar8 - fVar7);
  fStack_94 = 126.0;
  if (fVar9 <= 126.0) {
    fStack_94 = fVar9;
  }
  param_2 = (ulong)(uint)(fVar7 + fVar8);
  uVar3 = 0.0 <= fVar7;
  uVar4 = fVar7 == 0.0;
  if (fVar7 < 0.0) {
    fStack_94 = fVar7 + fVar8;
  }
  if ((bRam0000000113729fa8 & 1) == 0) goto LAB_10816c924;
  while( true ) {
    uVar1 = uRam0000000113729fa0;
    FUN_108346318(auStack_a8,&fStack_94,4);
    uVar2 = auStack_a8[0];
    auStack_a8[0] = 0;
    fStack_90 = (float)uVar2;
    uStack_8c = (undefined4)((ulong)uVar2 >> 0x20);
    FUN_1083948e4(auStack_c0,uVar1,&fStack_90);
    FUN_108154c48(&fStack_90);
    func_0x0001078bddf8(auStack_a8);
    FUN_10811e68c(&uStack_b8,&uStack_c8,auStack_c0);
    uVar2 = uStack_b8;
    uVar1 = uStack_c8;
    uStack_b8 = 0;
    uStack_c8 = uVar2;
    func_0x00010816ca2c(uVar1);
    FUN_108115b2c(&uStack_b8);
    FUN_108115b2c(auStack_c0);
LAB_10816c840:
    fVar7 = *(float *)(param_3 + 0x44);
    func_0x00010816ca58();
    fVar8 = (float)param_2;
    unaff_x20 = param_3;
    if ((bool)uVar3 && !(bool)uVar4) {
      func_0x00010816ca6c();
      fStack_90 = fVar8 - ABS(fVar7);
      fStack_80 = 0.0;
      if (0.0 <= fVar7) {
        fStack_80 = fVar8 - fStack_90;
      }
      param_2 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_7c = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      lStack_5c = (ulong)(uint)fStack_80 << 0x20;
      uStack_4c = 0;
      uStack_48 = 0x3f800000;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_44 = 0;
      fStack_78 = fStack_90;
      fStack_6c = fStack_80;
      fStack_60 = fStack_90;
      FUN_1083ae048(&uStack_b0,&fStack_90,1);
      FUN_10811e68c(auStack_a8,&uStack_c8,&uStack_b0);
      func_0x00010816ca98();
      func_0x00010816ca2c();
      func_0x00010816ca90();
      FUN_108115b2c(&uStack_b0);
    }
LAB_10816c8e0:
    param_3 = unaff_x20;
    FUN_1081648e4(uVar6,&uStack_c8);
    FUN_108115b2c(&uStack_c8);
    uVar3 = uStack_38 <= *(ulong *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = *(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_38;
    if ((bool)uVar4) break;
    ___stack_chk_fail();
LAB_10816c924:
    iVar5 = 0x13729fa8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_1083a3348(&uStack_b0,&UNK_10df04f94);
      uStack_70 = 0;
      fStack_6c = 0.0;
      uStack_88 = 0;
      uStack_84 = 0;
      fStack_90 = 0.0;
      uStack_8c = 0;
      fStack_78 = 0.0;
      uStack_74 = 0;
      fStack_80 = 0.0;
      uStack_7c = 0;
      FUN_108394238(auStack_a8,&uStack_b0,&fStack_90);
      uVar1 = auStack_a8[0];
      auStack_a8[0] = 0;
      FUN_108154bd8(auStack_a8);
      FUN_1083a3ca0(uStack_b0);
      uRam0000000113729fa0 = uVar1;
      ___cxa_guard_release(0x113729fa8);
    }
  }
  return;
}



/* Entry: 10816ca2c; end: 10816caab;  */

void FUN_10816ca2c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010816ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10816caac; end: 10816cc73;  */

void FUN_10816caac(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar3 = *param_2;
  plVar4 = (long *)*param_4;
  *param_4 = 0;
  uStack_80 = 0;
  plVar2 = (long *)0x40;
  plStack_78 = plVar4;
  __Znwm();
  plStack_78 = (long *)0x0;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[2] = 0;
  *(undefined2 *)(plVar2 + 5) = 0;
  *plVar2 = (long)&PTR_FUN_110a29968;
  uStack_68 = 0;
  plStack_48 = plVar4;
  FUN_1081874f0(plVar2 + 6,&plStack_48);
  FUN_108154cb4(&plStack_48);
  *(undefined4 *)(plVar2 + 7) = 0;
  plStack_60 = param_3;
  lStack_58 = lVar3;
  plStack_50 = plVar2;
  FUN_108164708(&plStack_60,0);
  plStack_70 = plVar2;
  FUN_108154cb4(&uStack_68);
  FUN_108154cb4(&plStack_78);
  FUN_108164674(&uStack_80,plVar2 + 6);
  plStack_70 = (long *)0x0;
  if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
    plStack_48 = plVar2;
    (**(code **)(*plVar2 + 0x18))(0,plVar2);
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_60 = plVar2;
    FUN_108155570(*(undefined8 *)(lVar3 + 0x70),&plStack_60);
    FUN_108155920(&plStack_60);
  }
  FUN_10816cc74(&plStack_48);
  FUN_10816cc74(&plStack_70);
  uVar1 = uStack_80;
  uStack_80 = 0;
  *param_1 = uVar1;
  FUN_108164628(&uStack_80);
  return;
}



/* Entry: 10816cc74; end: 10816ccc3;  */

long * FUN_10816cc74(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816ccc4; end: 10816cceb;  */

undefined8 * FUN_10816ccc4(undefined8 *param_1)

{
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816ccec; end: 10816ccff;  */

void FUN_10816ccec(void)

{
  FUN_10816ccc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816cd00; end: 10816cf0f;  */

void FUN_10816cd00(long param_1)

{
  int extraout_w8;
  int extraout_w9;
  long extraout_x10;
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uVar1 = 0x3f800000;
  if ((int)*(float *)(param_1 + 0x38) - 1U < 0x10) {
    FUN_10816cf10();
                    /* WARNING: Could not recover jumptable at 0x00010816cd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df050e4)[extraout_x10] * 4 + 0x10816cd64))();
    return;
  }
  FUN_10816cf10();
  uStack_70 = 0x3f800000;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_2c = 0;
  uStack_28 = uVar1;
  if (extraout_w9 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    if (extraout_w8 != 0) {
      FUN_1083ae1cc(auStack_78,&uStack_70);
      goto LAB_10816ced8;
    }
  }
  else {
    FUN_10816b6b4(&uStack_70,&UNK_10df0512c);
    func_0x00010816b6c0(&uStack_70,&UNK_10df0517c);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_1083ae1cc(auStack_78,&uStack_70,1);
LAB_10816ced8:
  FUN_1081648e4(uVar1,auStack_78);
  FUN_108115b2c(auStack_78);
  return;
}



/* Entry: 10816cf10; end: 10816cf1b;  */

void FUN_10816cf10(void)

{
  return;
}



/* Entry: 10816cf1c; end: 10816d163;  */

void FUN_10816cf1c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  lVar3 = *param_2;
  uStack_90 = 0;
  plVar2 = (long *)0x58;
  __Znwm();
  uStack_60 = *param_4;
  *param_4 = 0;
  uStack_80 = 0;
  FUN_1081874f0(&plStack_58,&uStack_60);
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(undefined2 *)(plVar2 + 5) = 0;
  *plVar2 = (long)&PTR_DAT_110a29a20;
  plVar2[6] = (long)plStack_58;
  plStack_58 = (long *)0x0;
  FUN_108164628(&plStack_58);
  FUN_108154cb4(&uStack_60);
  *plVar2 = (long)&PTR_FUN_110a299b8;
  plVar2[8] = 0x3f80000000000000;
  plVar2[7] = 0x3f80000000000000;
  auVar4 = NEON_fmov(0x3f800000,4);
  plVar2[10] = auVar4._8_8_;
  plVar2[9] = auVar4._0_8_;
  plStack_78 = param_3;
  lStack_70 = lVar3;
  plStack_68 = plVar2;
  FUN_108164708(&plStack_78,0,(long)plVar2 + 0x54);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  plStack_88 = plVar2;
  FUN_108154cb4(&uStack_80);
  FUN_10816040c(plVar2 + 2);
  FUN_108164674(&uStack_90,plVar2 + 6);
  plStack_88 = (long *)0x0;
  if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
    plStack_58 = plVar2;
    func_0x00010816daa8(*(undefined8 *)(*plVar2 + 0x18));
  }
  else {
    plStack_58 = (long *)0x0;
    plStack_78 = plVar2;
    FUN_108155570(*(undefined8 *)(lVar3 + 0x70),&plStack_78);
    FUN_108155920(&plStack_78);
  }
  FUN_10816d4d8(&plStack_58);
  FUN_10816d4d8(&plStack_88);
  uVar1 = uStack_90;
  uStack_90 = 0;
  *param_1 = uVar1;
  FUN_108164628(&uStack_90);
  return;
}



/* Entry: 10816d164; end: 10816d4d7;  */

void FUN_10816d164(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  lVar3 = *param_2;
  uStack_a0 = 0;
  plVar2 = (long *)0xa8;
  __Znwm();
  uStack_70 = *param_4;
  *param_4 = 0;
  uStack_90 = 0;
  FUN_1081874f0(&plStack_68,&uStack_70);
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(undefined2 *)(plVar2 + 5) = 0;
  *plVar2 = (long)&PTR_DAT_110a29ac0;
  plVar2[6] = (long)plStack_68;
  plStack_68 = (long *)0x0;
  FUN_108164628(&plStack_68);
  FUN_108154cb4(&uStack_70);
  plVar2[8] = 0x3f80000000000000;
  plVar2[7] = 0x3f80000000000000;
  plVar2[10] = 0x3f800000;
  plVar2[9] = 0x3f800000;
  plVar2[0xc] = 0x3f80000000000000;
  plVar2[0xb] = 0x3f8000003f800000;
  plVar2[0xe] = 0x3f800000;
  plVar2[0xd] = 0x3f80000000000000;
  plVar2[0x10] = 0x3f8000003f800000;
  plVar2[0xf] = 0x3f800000;
  plVar2[0x12] = 0x3f80000000000000;
  plVar2[0x11] = 0x3f80000000000000;
  lVar4 = NEON_fmov(0x3f800000,4);
  plVar2[0x13] = lVar4;
  *plVar2 = (long)&PTR_FUN_110a29a58;
  *(undefined4 *)(plVar2 + 0x14) = 0x3f800000;
  plStack_88 = param_3;
  lStack_80 = lVar3;
  plStack_78 = plVar2;
  FUN_108164708(&plStack_88,3);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  plStack_98 = plVar2;
  FUN_108154cb4(&uStack_90);
  FUN_10816040c(plVar2 + 2);
  FUN_108164674(&uStack_a0,plVar2 + 6);
  plStack_98 = (long *)0x0;
  if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
    plStack_68 = plVar2;
    func_0x00010816daa8(*(undefined8 *)(*plVar2 + 0x18));
  }
  else {
    plStack_68 = (long *)0x0;
    plStack_88 = plVar2;
    FUN_108155570(*(undefined8 *)(lVar3 + 0x70),&plStack_88);
    FUN_108155920(&plStack_88);
  }
  FUN_10816d878(&plStack_68);
  FUN_10816d878(&plStack_98);
  uVar1 = uStack_a0;
  uStack_a0 = 0;
  *param_1 = uVar1;
  FUN_108164628(&uStack_a0);
  return;
}



/* Entry: 10816d4d8; end: 10816d527;  */

long * FUN_10816d4d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816d528; end: 10816d557;  */

undefined8 * FUN_10816d528(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29a20;
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816d558; end: 10816d55b;  */

undefined8 * FUN_10816d558(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29a20;
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816d55c; end: 10816d56f;  */

void FUN_10816d55c(void)

{
  FUN_10816d528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816d570; end: 10816d68f;  */

float * FUN_10816d570(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 *puVar9;
  float *pfVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar13;
  float *pfVar14;
  uint uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 extraout_s1;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float afStack_140 [2];
  undefined1 auStack_138 [256];
  undefined8 uStack_38;
  
  pfVar14 = afStack_140;
  pfVar10 = afStack_140;
  pfVar7 = afStack_140;
  pfVar8 = afStack_140;
  func_0x00010816dab4();
  fVar17 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 0x54),0x4effffff);
  if (fVar17 <= -2.1474835e+09) {
    fVar17 = -2.1474835e+09;
  }
  uVar15 = (uint)fVar17;
  uVar5 = uVar15 - 6 == 0xfffffffb;
  uStack_38 = extraout_x8;
  if (0xfffffffa < uVar15 - 6) {
    fVar17 = *(float *)(unaff_x19 + 0x4c);
    lVar16 = unaff_x19 + 0x38;
    FUN_10816d690(lVar16,auStack_138);
    if (lVar16 != 0) {
      puVar9 = auStack_138;
      if (uVar15 == 5) {
        puVar11 = (undefined1 *)0x0;
        uVar5 = true;
        puVar6 = puVar9;
        puVar9 = (undefined1 *)0x0;
LAB_10816d62c:
        puVar12 = (undefined1 *)0x0;
      }
      else {
        if (1 < uVar15 - 1) {
          puVar9 = (undefined1 *)0x0;
        }
        puVar11 = auStack_138;
        if ((uVar15 | 2) != 3) {
          puVar11 = (undefined1 *)0x0;
        }
        puVar6 = (undefined1 *)0x0;
        uVar5 = uVar15 == 4 || uVar15 == 1;
        if (uVar15 != 4 && uVar15 != 1) goto LAB_10816d62c;
        puVar12 = auStack_138;
      }
      uVar13 = *(undefined8 *)(unaff_x19 + 0x30);
      FUN_1083ae930(afStack_140,puVar6,puVar9,puVar11,puVar12);
      FUN_1081648e4(uVar13);
      pfVar14 = pfVar10;
      goto LAB_10816d648;
    }
  }
  afStack_140[0] = 0.0;
  afStack_140[1] = 0.0;
  FUN_1081648e4(*(undefined8 *)(unaff_x19 + 0x30));
LAB_10816d648:
  FUN_108115b2c();
  func_0x00010816dac8(uStack_38);
  if ((bool)uVar5) {
    return pfVar7;
  }
  ___stack_chk_fail();
  FUN_108115b2c();
  func_0x00010816daa0();
  fVar22 = *pfVar8;
  fVar24 = pfVar8[1];
  fVar26 = pfVar8[2];
  fVar23 = pfVar8[3];
  fVar25 = 0.0;
  if (0.0 <= pfVar8[4]) {
    fVar25 = pfVar8[4];
  }
  fVar17 = (float)NEON_fminnm(fVar17,0x4effffff);
  if (fVar17 <= -2.1474835e+09) {
    fVar17 = -2.1474835e+09;
  }
  fVar18 = 1.0;
  if (fVar26 <= 1.0) {
    fVar18 = fVar26;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  fVar21 = fVar18;
  if (fVar26 <= fVar23) {
    fVar21 = 1.0;
  }
  fVar19 = 0.0;
  if (fVar26 <= fVar23) {
    fVar19 = fVar18;
  }
  fVar18 = 1.0;
  if ((int)fVar17 == 1) {
    fVar18 = fVar21;
  }
  fVar21 = (float)NEON_fminnm(extraout_s1,0x4effffff);
  if (fVar21 <= -2.1474835e+09) {
    fVar21 = -2.1474835e+09;
  }
  fVar20 = 0.0;
  if ((int)fVar17 == 1) {
    fVar20 = fVar19;
  }
  fVar17 = 1.0;
  if (fVar23 <= 1.0) {
    fVar17 = fVar23;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar19 = fVar20;
  if (fVar23 < fVar26) {
    fVar19 = fVar17;
    fVar17 = fVar18;
  }
  if ((int)fVar21 == 1) {
    fVar20 = fVar19;
    fVar18 = fVar17;
  }
  fVar17 = ABS(fVar24 - fVar23);
  bVar1 = false;
  bVar3 = true;
  if (ABS(fVar22 - fVar26) <= 0.00024414062) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(fVar17)) {
      bVar1 = fVar17 == 0.00024414062;
      bVar3 = 0.00024414062 <= fVar17;
    }
  }
  fVar17 = ABS(1.0 / fVar25 + -1.0);
  bVar2 = false;
  bVar4 = true;
  if (!bVar3 || bVar1) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(fVar17)) {
      bVar2 = fVar17 == 0.00024414062;
      bVar4 = 0.00024414062 <= fVar17;
    }
  }
  if (!bVar4 || bVar2) {
    pfVar14 = (float *)0x0;
  }
  else {
    fVar17 = fVar24 - fVar22;
    if (ABS(fVar24 - fVar22) <= 0.00024414062) {
      fVar17 = fVar17 + (float)((uint)fVar17 ^ ((uint)fVar17 ^ 0x3a000000) & 0x7fffffff);
      fVar22 = fVar22 + (float)((uint)(0.5 - fVar22) & 0x80000000 ^ 0x3a000000);
    }
    fVar22 = -fVar22 / fVar17;
    for (lVar16 = 0; lVar16 != 0x100; lVar16 = lVar16 + 1) {
      fVar24 = 0.0;
      if (0.0 <= fVar22) {
        fVar24 = fVar22;
      }
      _powf(fVar24,1.0 / fVar25);
      fVar21 = fVar26 + fVar24 * (fVar23 - fVar26);
      fVar24 = fVar18;
      if (fVar21 <= fVar18) {
        fVar24 = fVar21;
      }
      if (fVar24 <= fVar20) {
        fVar24 = fVar20;
      }
      *(char *)((long)pfVar14 + lVar16) = (char)(int)(fVar24 * 255.0);
      fVar22 = 0.003921569 / fVar17 + fVar22;
    }
  }
  return (float *)(undefined1 *)pfVar14;
}



/* Entry: 10816d690; end: 10816d84b;  */

long FUN_10816d690(undefined4 param_1,undefined4 param_2,float *param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar11 = *param_3;
  fVar13 = param_3[1];
  fVar15 = param_3[2];
  fVar12 = param_3[3];
  fVar14 = 0.0;
  if (0.0 <= param_3[4]) {
    fVar14 = param_3[4];
  }
  fVar6 = (float)NEON_fminnm(param_1,0x4effffff);
  if (fVar6 <= -2.1474835e+09) {
    fVar6 = -2.1474835e+09;
  }
  fVar7 = 1.0;
  if (fVar15 <= 1.0) {
    fVar7 = fVar15;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar10 = fVar7;
  if (fVar15 <= fVar12) {
    fVar10 = 1.0;
  }
  fVar8 = 0.0;
  if (fVar15 <= fVar12) {
    fVar8 = fVar7;
  }
  fVar7 = 1.0;
  if ((int)fVar6 == 1) {
    fVar7 = fVar10;
  }
  fVar10 = (float)NEON_fminnm(param_2,0x4effffff);
  if (fVar10 <= -2.1474835e+09) {
    fVar10 = -2.1474835e+09;
  }
  fVar9 = 0.0;
  if ((int)fVar6 == 1) {
    fVar9 = fVar8;
  }
  fVar6 = 1.0;
  if (fVar12 <= 1.0) {
    fVar6 = fVar12;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar8 = fVar9;
  if (fVar12 < fVar15) {
    fVar8 = fVar6;
    fVar6 = fVar7;
  }
  if ((int)fVar10 == 1) {
    fVar9 = fVar8;
    fVar7 = fVar6;
  }
  fVar6 = ABS(fVar13 - fVar12);
  bVar1 = false;
  bVar3 = true;
  if (ABS(fVar11 - fVar15) <= 0.00024414062) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 == 0.00024414062;
      bVar3 = 0.00024414062 <= fVar6;
    }
  }
  fVar6 = ABS(1.0 / fVar14 + -1.0);
  bVar2 = false;
  bVar4 = true;
  if (!bVar3 || bVar1) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(fVar6)) {
      bVar2 = fVar6 == 0.00024414062;
      bVar4 = 0.00024414062 <= fVar6;
    }
  }
  if (!bVar4 || bVar2) {
    param_4 = 0;
  }
  else {
    fVar6 = fVar13 - fVar11;
    if (ABS(fVar13 - fVar11) <= 0.00024414062) {
      fVar6 = fVar6 + (float)((uint)fVar6 ^ ((uint)fVar6 ^ 0x3a000000) & 0x7fffffff);
      fVar11 = fVar11 + (float)((uint)(0.5 - fVar11) & 0x80000000 ^ 0x3a000000);
    }
    fVar11 = -fVar11 / fVar6;
    for (lVar5 = 0; lVar5 != 0x100; lVar5 = lVar5 + 1) {
      fVar13 = 0.0;
      if (0.0 <= fVar11) {
        fVar13 = fVar11;
      }
      _powf(fVar13,1.0 / fVar14);
      fVar10 = fVar15 + fVar13 * (fVar12 - fVar15);
      fVar13 = fVar7;
      if (fVar10 <= fVar7) {
        fVar13 = fVar10;
      }
      if (fVar13 <= fVar9) {
        fVar13 = fVar9;
      }
      *(char *)(param_4 + lVar5) = (char)(int)(fVar13 * 255.0);
      fVar11 = 0.003921569 / fVar6 + fVar11;
    }
  }
  return param_4;
}



/* Entry: 10816d84c; end: 10816d877;  */

void FUN_10816d84c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010816d870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10816d878; end: 10816d8c7;  */

long * FUN_10816d878(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816d8c8; end: 10816d8f7;  */

undefined8 * FUN_10816d8c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29ac0;
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816d8f8; end: 10816d8fb;  */

undefined8 * FUN_10816d8f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29ac0;
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816d8fc; end: 10816d90f;  */

void FUN_10816d8fc(void)

{
  FUN_10816d8c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816d910; end: 10816da93;  */

/* WARNING: Possible PIC construction at 0x00010816d950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010816d970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010816d954) */
/* WARNING: Removing unreachable block (ram,0x00010816d974) */
/* WARNING: Removing unreachable block (ram,0x00010816d9b4) */
/* WARNING: Removing unreachable block (ram,0x00010816da0c) */
/* WARNING: Removing unreachable block (ram,0x00010816da4c) */
/* WARNING: Removing unreachable block (ram,0x00010816da64) */
/* WARNING: Removing unreachable block (ram,0x00010816da80) */
/* WARNING: Removing unreachable block (ram,0x00010816da90) */
/* WARNING: Removing unreachable block (ram,0x00010816da2c) */

undefined1 * FUN_10816d910(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_168 [264];
  
  func_0x00010816dab4();
  puVar5 = auStack_168;
  fVar12 = *(float *)(param_1 + 0x88);
  fVar14 = *(float *)(param_1 + 0x8c);
  fVar16 = *(float *)(param_1 + 0x90);
  fVar13 = *(float *)(param_1 + 0x94);
  fVar15 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x98)) {
    fVar15 = *(float *)(param_1 + 0x98);
  }
  fVar7 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 0x9c),0x4effffff);
  if (fVar7 <= -2.1474835e+09) {
    fVar7 = -2.1474835e+09;
  }
  fVar8 = 1.0;
  if (fVar16 <= 1.0) {
    fVar8 = fVar16;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar11 = fVar8;
  if (fVar16 <= fVar13) {
    fVar11 = 1.0;
  }
  fVar9 = 0.0;
  if (fVar16 <= fVar13) {
    fVar9 = fVar8;
  }
  fVar8 = 1.0;
  if ((int)fVar7 == 1) {
    fVar8 = fVar11;
  }
  fVar11 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 0xa0),0x4effffff);
  if (fVar11 <= -2.1474835e+09) {
    fVar11 = -2.1474835e+09;
  }
  fVar10 = 0.0;
  if ((int)fVar7 == 1) {
    fVar10 = fVar9;
  }
  fVar7 = 1.0;
  if (fVar13 <= 1.0) {
    fVar7 = fVar13;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar9 = fVar10;
  if (fVar13 < fVar16) {
    fVar9 = fVar7;
    fVar7 = fVar8;
  }
  if ((int)fVar11 == 1) {
    fVar10 = fVar9;
    fVar8 = fVar7;
  }
  fVar7 = ABS(fVar14 - fVar13);
  bVar1 = false;
  bVar3 = true;
  if (ABS(fVar12 - fVar16) <= 0.00024414062) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(fVar7)) {
      bVar1 = fVar7 == 0.00024414062;
      bVar3 = 0.00024414062 <= fVar7;
    }
  }
  fVar7 = ABS(1.0 / fVar15 + -1.0);
  bVar2 = false;
  bVar4 = true;
  if (!bVar3 || bVar1) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(fVar7)) {
      bVar2 = fVar7 == 0.00024414062;
      bVar4 = 0.00024414062 <= fVar7;
    }
  }
  if (!bVar4 || bVar2) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    fVar7 = fVar14 - fVar12;
    if (ABS(fVar14 - fVar12) <= 0.00024414062) {
      fVar7 = fVar7 + (float)((uint)fVar7 ^ ((uint)fVar7 ^ 0x3a000000) & 0x7fffffff);
      fVar12 = fVar12 + (float)((uint)(0.5 - fVar12) & 0x80000000 ^ 0x3a000000);
    }
    fVar12 = -fVar12 / fVar7;
    for (lVar6 = 0; lVar6 != 0x100; lVar6 = lVar6 + 1) {
      fVar14 = 0.0;
      if (0.0 <= fVar12) {
        fVar14 = fVar12;
      }
      _powf(fVar14,1.0 / fVar15);
      fVar11 = fVar16 + fVar14 * (fVar13 - fVar16);
      fVar14 = fVar8;
      if (fVar11 <= fVar8) {
        fVar14 = fVar11;
      }
      if (fVar14 <= fVar10) {
        fVar14 = fVar10;
      }
      puVar5[lVar6] = (char)(int)(fVar14 * 255.0);
      fVar12 = 0.003921569 / fVar7 + fVar12;
    }
  }
  return puVar5;
}



/* Entry: 10816da94; end: 10816dadb;  */

long FUN_10816da94(float *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 unaff_s8;
  float fVar15;
  undefined4 unaff_s9;
  
  fVar11 = *param_1;
  fVar13 = param_1[1];
  fVar15 = param_1[2];
  fVar12 = param_1[3];
  fVar14 = 0.0;
  if (0.0 <= param_1[4]) {
    fVar14 = param_1[4];
  }
  fVar6 = (float)NEON_fminnm(unaff_s8,0x4effffff);
  if (fVar6 <= -2.1474835e+09) {
    fVar6 = -2.1474835e+09;
  }
  fVar7 = 1.0;
  if (fVar15 <= 1.0) {
    fVar7 = fVar15;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar10 = fVar7;
  if (fVar15 <= fVar12) {
    fVar10 = 1.0;
  }
  fVar8 = 0.0;
  if (fVar15 <= fVar12) {
    fVar8 = fVar7;
  }
  fVar7 = 1.0;
  if ((int)fVar6 == 1) {
    fVar7 = fVar10;
  }
  fVar10 = (float)NEON_fminnm(unaff_s9,0x4effffff);
  if (fVar10 <= -2.1474835e+09) {
    fVar10 = -2.1474835e+09;
  }
  fVar9 = 0.0;
  if ((int)fVar6 == 1) {
    fVar9 = fVar8;
  }
  fVar6 = 1.0;
  if (fVar12 <= 1.0) {
    fVar6 = fVar12;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar8 = fVar9;
  if (fVar12 < fVar15) {
    fVar8 = fVar6;
    fVar6 = fVar7;
  }
  if ((int)fVar10 == 1) {
    fVar9 = fVar8;
    fVar7 = fVar6;
  }
  fVar6 = ABS(fVar13 - fVar12);
  bVar1 = false;
  bVar3 = true;
  if (ABS(fVar11 - fVar15) <= 0.00024414062) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 == 0.00024414062;
      bVar3 = 0.00024414062 <= fVar6;
    }
  }
  fVar6 = ABS(1.0 / fVar14 + -1.0);
  bVar2 = false;
  bVar4 = true;
  if (!bVar3 || bVar1) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(fVar6)) {
      bVar2 = fVar6 == 0.00024414062;
      bVar4 = 0.00024414062 <= fVar6;
    }
  }
  if (!bVar4 || bVar2) {
    param_2 = 0;
  }
  else {
    fVar6 = fVar13 - fVar11;
    if (ABS(fVar13 - fVar11) <= 0.00024414062) {
      fVar6 = fVar6 + (float)((uint)fVar6 ^ ((uint)fVar6 ^ 0x3a000000) & 0x7fffffff);
      fVar11 = fVar11 + (float)((uint)(0.5 - fVar11) & 0x80000000 ^ 0x3a000000);
    }
    fVar11 = -fVar11 / fVar6;
    for (lVar5 = 0; lVar5 != 0x100; lVar5 = lVar5 + 1) {
      fVar13 = 0.0;
      if (0.0 <= fVar11) {
        fVar13 = fVar11;
      }
      _powf(fVar13,1.0 / fVar14);
      fVar10 = fVar15 + fVar13 * (fVar12 - fVar15);
      fVar13 = fVar7;
      if (fVar10 <= fVar7) {
        fVar13 = fVar10;
      }
      if (fVar13 <= fVar9) {
        fVar13 = fVar9;
      }
      *(char *)(param_2 + lVar5) = (char)(int)(fVar13 * 255.0);
      fVar11 = 0.003921569 / fVar6 + fVar11;
    }
  }
  return param_2;
}



/* Entry: 10816dadc; end: 10816dcaf;  */

void FUN_10816dadc(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar3 = *param_2;
  plVar4 = (long *)*param_4;
  *param_4 = 0;
  uStack_80 = 0;
  plVar2 = (long *)0x50;
  plStack_78 = plVar4;
  __Znwm();
  plStack_78 = (long *)0x0;
  uStack_68 = 0;
  plStack_48 = plVar4;
  FUN_108169684();
  FUN_108154cb4(&plStack_48);
  *plVar2 = (long)&PTR_FUN_110a29af8;
  *(undefined4 *)((long)plVar2 + 0x44) = 0;
  *(undefined4 *)(plVar2 + 8) = 0;
  *(undefined4 *)(plVar2 + 9) = 0;
  plStack_60 = param_3;
  lStack_58 = lVar3;
  plStack_50 = plVar2;
  FUN_108164708(&plStack_60,0);
  FUN_108164708();
  FUN_108164708();
  plStack_70 = plVar2;
  FUN_108154cb4(&uStack_68);
  FUN_108154cb4(&plStack_78);
  FUN_10816dd04(&uStack_80,plVar2 + 6);
  plStack_70 = (long *)0x0;
  if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
    plStack_48 = plVar2;
    (**(code **)(*plVar2 + 0x18))(0,plVar2);
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_60 = plVar2;
    FUN_108155570(*(undefined8 *)(lVar3 + 0x70),&plStack_60);
    FUN_108155920(&plStack_60);
  }
  FUN_10816dd4c(&plStack_48);
  FUN_10816dd4c(&plStack_70);
  uVar1 = uStack_80;
  uStack_80 = 0;
  *param_1 = uVar1;
  FUN_10816dcb0(&uStack_80);
  return;
}



/* Entry: 10816dcb0; end: 10816dcd7;  */

undefined8 * FUN_10816dcb0(undefined8 *param_1)

{
  FUN_10816dcd8(*param_1);
  return param_1;
}



/* Entry: 10816dcd8; end: 10816dd03;  */

void FUN_10816dcd8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010816dcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10816dd04; end: 10816dd4b;  */

long * FUN_10816dd04(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10816df68(param_1);
  }
  return param_1;
}



/* Entry: 10816dd4c; end: 10816dd97;  */

long * FUN_10816dd4c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816dd98; end: 10816ddcb;  */

undefined8 * FUN_10816dd98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a29600;
  FUN_10816dcb0(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816ddcc; end: 10816ddcf;  */

undefined8 * FUN_10816ddcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a29600;
  FUN_10816dcb0(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816ddd0; end: 10816dde3;  */

void FUN_10816ddd0(void)

{
  FUN_10816dd98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816dde4; end: 10816df67;  */

void FUN_10816dde4(undefined8 *param_1,undefined8 *param_2,undefined *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar6 = *(float *)(param_2 + 8);
  if (100.0 <= fVar6) {
    param_2 = (undefined8 *)0x0;
    FUN_1083bae14(param_1);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    if (fVar6 <= 0.0) {
      *param_1 = 0;
    }
    else {
      fVar7 = 1.0;
      if (fVar6 * 0.01 <= 1.0) {
        fVar7 = fVar6 * 0.01;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      fVar6 = 0.0;
      if (0.0 <= *(float *)(param_2 + 9)) {
        fVar6 = *(float *)(param_2 + 9);
      }
      fVar10 = 0.017453292;
      fVar8 = (90.0 - *(float *)((long)param_2 + 0x44)) * 0.017453292;
      ___sincosf_stret();
      fVar11 = (float)param_2[7];
      fVar12 = (float)((ulong)param_2[7] >> 0x20);
      fVar9 = fVar8 * (float)((uint)fVar8 ^ ((uint)fVar8 ^ (uint)fVar12) & 0x7fffffff) +
              fVar10 * (float)((uint)fVar10 ^ ((uint)fVar10 ^ (uint)fVar11) & 0x7fffffff);
      fVar13 = fVar9 + fVar6 * 2.0;
      uStack_48 = CONCAT44(fVar12 * 0.5 + -fVar8 * fVar13 * 0.5,fVar11 * 0.5 + fVar10 * fVar13 * 0.5
                          );
      uStack_50 = CONCAT44(fVar12 * 0.5 - -fVar8 * fVar13 * 0.5,fVar11 * 0.5 - fVar10 * fVar13 * 0.5
                          );
      fStack_58 = (fVar7 * (fVar6 + fVar9)) / fVar13;
      fStack_54 = fVar6 / fVar13 + fStack_58;
      param_3 = &UNK_10df053a8;
      param_2 = &uStack_50;
      FUN_1083c1ad4(param_1,param_2,&UNK_10df053a8,&fStack_58,2,0,0,0);
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  plVar5 = (long *)*param_2;
  *param_2 = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010816dcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10816df68; end: 10816df7f;  */

void FUN_10816df68(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010816dcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10816df80; end: 10816e277;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10816df80(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long alStack_98 [2];
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *aplStack_60 [2];
  
  plVar7 = param_2;
  func_0x00010816ebbc();
  lVar11 = *plVar7;
  alStack_98[0] = 0;
  plVar7 = (long *)0x60;
  __Znwm();
  plVar10 = (long *)*param_4;
  *param_4 = 0;
  puVar8 = (undefined8 *)0x88;
  plStack_88 = plVar10;
  __Znwm();
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  aplStack_60[0] = plVar10;
  FUN_1081659f0(&plStack_78,aplStack_60,1);
  FUN_10818d360(puVar8,&plStack_78);
  FUN_10815640c(&plStack_78);
  FUN_108154cb4(aplStack_60);
  *puVar8 = &PTR_SUB_110a29bb8;
  puVar8[9] = param_2[2];
  puVar8[0xb] = 0x3f8000003f800000;
  puVar8[10] = 0;
  uVar12 = NEON_fmov(0x3f800000,4);
  puVar8[0xc] = uVar12;
  *(undefined4 *)(puVar8 + 0xd) = 0;
  *(undefined2 *)((long)puVar8 + 0x6c) = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0xe] = 0;
  FUN_108154cb4(&lStack_80);
  *(undefined4 *)(plVar7 + 1) = 1;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(undefined2 *)(plVar7 + 5) = 0;
  *plVar7 = (long)&PTR_DAT_110a29c10;
  aplStack_60[0] = (long *)0x0;
  plVar7[6] = (long)puVar8;
  FUN_10816e278(aplStack_60);
  plVar7[8] = 0x3f8000003f800000;
  plVar7[7] = 0;
  *plVar7 = (long)&PTR_FUN_110a29b50;
  plVar7[10] = 0;
  plVar7[9] = 0x3f8000003f800000;
  *(undefined4 *)(plVar7 + 0xb) = 0;
  plStack_78 = param_3;
  lStack_70 = lVar11;
  plStack_68 = plVar7;
  FUN_1081662b4(&plStack_78,0);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108154cb4(&plStack_88);
  FUN_10816040c(plVar7 + 2);
  lVar9 = plVar7[6];
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  alStack_98[1] = 0;
  uVar6 = plVar7[2] == plVar7[3];
  alStack_98[0] = lVar9;
  if (((bool)uVar6) && ((*(byte *)((long)plVar7 + 0x29) & 1) == 0)) {
    aplStack_60[0] = plVar7;
    (**(code **)(*plVar7 + 0x18))(0,plVar7);
  }
  else {
    aplStack_60[0] = (long *)0x0;
    plStack_78 = plVar7;
    FUN_108155570(*(undefined8 *)(lVar11 + 0x70),&plStack_78);
    FUN_108155920(&plStack_78);
  }
  FUN_10816e2c8(aplStack_60);
  FUN_10816e2c8(alStack_98 + 1);
  alStack_98[0] = 0;
  *param_1 = lVar9;
  plVar7 = alStack_98;
  FUN_10816e278();
  func_0x00010816eb9c();
  if ((bool)uVar6) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_10816e2c8(aplStack_60);
  FUN_10816e2c8(alStack_98 + 1);
  FUN_10816e278(alStack_98);
  __Unwind_Resume();
  plVar10 = (long *)*plVar7;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  return plVar7;
}



/* Entry: 10816e278; end: 10816e2c7;  */

long * FUN_10816e278(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816e2c8; end: 10816e317;  */

long * FUN_10816e2c8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816e318; end: 10816e347;  */

undefined8 * FUN_10816e318(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29c10;
  FUN_10816e278(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816e348; end: 10816e34b;  */

undefined8 * FUN_10816e348(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29c10;
  FUN_10816e278(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816e34c; end: 10816e35f;  */

void FUN_10816e34c(void)

{
  FUN_10816e318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816e360; end: 10816e4b3;  */

void FUN_10816e360(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  lVar4 = *(long *)(param_1 + 0x30);
  fVar7 = *(float *)(param_1 + 0x3c);
  bVar3 = false;
  if ((*(float *)(lVar4 + 0x50) == *(float *)(param_1 + 0x38)) &&
     (bVar3 = false, !NAN(*(float *)(lVar4 + 0x54)) && !NAN(fVar7))) {
    bVar3 = *(float *)(lVar4 + 0x54) == fVar7;
  }
  if (!bVar3) {
    *(float *)(lVar4 + 0x50) = *(float *)(param_1 + 0x38);
    *(float *)(lVar4 + 0x54) = fVar7;
    func_0x00010816eb7c();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar4 + 0x58) != *(float *)(param_1 + 0x40)) {
    *(float *)(lVar4 + 0x58) = *(float *)(param_1 + 0x40);
    func_0x00010816eb7c();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar4 + 0x5c) != *(float *)(param_1 + 0x44)) {
    *(float *)(lVar4 + 0x5c) = *(float *)(param_1 + 0x44);
    func_0x00010816eb7c();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar4 + 0x60) != *(float *)(param_1 + 0x48)) {
    *(float *)(lVar4 + 0x60) = *(float *)(param_1 + 0x48);
    func_0x00010816eb7c();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar4 + 100) != *(float *)(param_1 + 0x4c)) {
    *(float *)(lVar4 + 100) = *(float *)(param_1 + 0x4c);
    func_0x00010816eb7c();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar4 + 0x68) != *(float *)(param_1 + 0x54)) {
    *(float *)(lVar4 + 0x68) = *(float *)(param_1 + 0x54);
    func_0x00010816eb7c();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  bVar3 = *(float *)(param_1 + 0x50) != 0.0;
  if ((bool)*(char *)(lVar4 + 0x6c) != bVar3) {
    *(bool *)(lVar4 + 0x6c) = bVar3;
    func_0x00010816eb7c();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  bVar3 = *(float *)(param_1 + 0x58) != 0.0;
  if ((bool)*(char *)(lVar4 + 0x6d) != bVar3) {
    *(bool *)(lVar4 + 0x6d) = bVar3;
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(lVar4 + 0x28);
      uVar6 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar6 = uVar2 | 8;
          *(short *)(lVar4 + 0x28) = (short)uVar6;
          uStack_21 = 0;
        }
        *(ushort *)(lVar4 + 0x28) = (ushort)uVar6 | 4;
        puStack_40 = &uStack_21;
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        if ((uVar6 >> 4 & 1) == 0) {
          if (puVar5 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar5[1];
          for (puVar5 = (undefined8 *)*puVar5; puVar5 != puVar1; puVar5 = puVar5 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar5);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10816e4b4; end: 10816e4c7;  */

void FUN_10816e4b4(void)

{
  func_0x00010816e47c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816e4c8; end: 10816e8ff;  */

void FUN_10816e4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar15;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  float fVar20;
  float fVar22;
  ulong uVar21;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  ulong uVar26;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [40];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [48];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  puVar13 = &uStack_110;
  lVar15 = param_1;
  func_0x00010816ebbc();
  if ((*(long *)(lVar15 + 0x70) == 0) || (lVar10 = param_1, FUN_10818d4a4(), (int)lVar10 != 0)) {
    puVar17 = *(undefined8 **)(param_1 + 0x30);
    FUN_10818a8b4(*puVar17,param_2,param_3);
    FUN_108383398(auStack_98);
    uVar16 = *puVar17;
    uStack_d8 = 0;
    uStack_d0 = *(undefined8 *)(param_1 + 0x48);
    puVar12 = auStack_98;
    FUN_1083835c4(puVar12,&uStack_d8,0);
    FUN_10818c910(uVar16,puVar12,0);
    FUN_10838362c(&uStack_d8,auStack_98);
    uVar16 = uStack_d8;
    uStack_d8 = 0;
    func_0x000108113b38((long *)(lVar15 + 0x70),uVar16);
    func_0x00010811496c(&uStack_d8);
    FUN_108383490(auStack_98);
  }
  fVar20 = (float)*(undefined8 *)(param_1 + 0x58);
  iVar2 = -(uint)(100.0 < fVar20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  iVar3 = -(uint)(100.0 < fVar22);
  iVar4 = -(uint)(0.0 < fVar20);
  iVar6 = -(uint)(0.0 < fVar22);
  bVar23 = (byte)((uint)iVar6 >> 8);
  bVar24 = (byte)((uint)iVar6 >> 0x10);
  bVar25 = (byte)((uint)iVar6 >> 0x18);
  uVar26 = NEON_fmov(0x3f800000,4);
  uVar21 = CONCAT44(fVar22 * 0.01,fVar20 * 0.01);
  uVar21 = uVar21 ^ (uVar21 ^ CONCAT17(bVar25,CONCAT16(bVar24,CONCAT15(bVar23,CONCAT14((byte)iVar6,
                                                                                       iVar4)))) &
                              uVar26) &
                    CONCAT17((byte)((uint)iVar3 >> 0x18) | ~bVar25,
                             CONCAT16((byte)((uint)iVar3 >> 0x10) | ~bVar24,
                                      CONCAT15((byte)((uint)iVar3 >> 8) | ~bVar23,
                                               CONCAT14((byte)iVar3 | ~(byte)iVar6,
                                                        CONCAT13((byte)((uint)iVar2 >> 0x18) |
                                                                 ~(byte)((uint)iVar4 >> 0x18),
                                                                 CONCAT12((byte)((uint)iVar2 >> 0x10
                                                                                ) | ~(byte)((uint)
                                                  iVar4 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar2 >> 8) |
                                                           ~(byte)((uint)iVar4 >> 8),
                                                           (byte)iVar2 | ~(byte)iVar4)))))));
  uStack_d0 = *(undefined8 *)(param_1 + 0x48);
  fVar20 = (float)uStack_d0 * (float)uVar21;
  fVar22 = (float)((ulong)uStack_d0 >> 0x20) * (float)(uVar21 >> 0x20);
  uVar9 = (undefined1)((uint)fVar22 >> 8);
  uVar18 = (undefined1)((uint)fVar22 >> 0x10);
  uVar19 = (undefined1)((uint)fVar22 >> 0x18);
  uVar21 = CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar9,CONCAT14(SUB41(fVar22,0),fVar20)))) ^
           (CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar9,CONCAT14(SUB41(fVar22,0),fVar20)))) ^
           uVar26) & CONCAT44(-(uint)(fVar22 < (float)(uVar26 >> 0x20)),
                              -(uint)(fVar20 < (float)uVar26));
  fVar20 = (float)uVar21;
  fVar22 = (float)(uVar21 >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_1 + 0x50) + fVar20 * -0.5;
  fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) + fVar22 * -0.5;
  fVar22 = fVar22 + fVar7;
  uStack_a8 = CONCAT17((char)((uint)fVar7 >> 0x18),
                       CONCAT16((char)((uint)fVar7 >> 0x10),
                                CONCAT15((char)((uint)fVar7 >> 8),CONCAT14(SUB41(fVar7,0),fVar5))));
  uStack_a0 = CONCAT17((char)((uint)fVar22 >> 0x18),
                       CONCAT16((char)((uint)fVar22 >> 0x10),
                                CONCAT15((char)((uint)fVar22 >> 8),
                                         CONCAT14(SUB41(fVar22,0),fVar20 + fVar5))));
  uStack_d8 = 0;
  FUN_10814c9e0(auStack_98,&uStack_d8,&uStack_a8,0);
  uVar14 = 1;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    uVar14 = 2;
  }
  puVar12 = (undefined1 *)(ulong)uVar14;
  FUN_1083bd100(&lStack_b0,*(undefined8 *)(param_1 + 0x70),puVar12,puVar12,1,auStack_98,0);
  uVar9 = *(float *)(param_1 + 0x68) == 0.0;
  if ((!(bool)uVar9) && (lStack_b0 != 0)) {
    bVar1 = NAN(((float)uStack_a8 - (float)uStack_a8) * uStack_a8._4_4_ * (float)uStack_a0 *
                uStack_a0._4_4_);
    uVar9 = !bVar1;
    if (!bVar1) {
      fVar20 = (float)uStack_a0 - (float)uStack_a8;
      uVar9 = *(char *)(param_1 + 0x6d) == '\0';
      fVar22 = 0.0;
      if ((bool)uVar9) {
        fVar20 = 0.0;
        fVar22 = uStack_a0._4_4_ - uStack_a8._4_4_;
      }
      FUN_10814bdfc(&uStack_d8);
      fStack_60 = (float)uStack_a8 + (((float)uStack_a0 - (float)uStack_a8) - fVar20) * 2.0;
      fStack_68 = (float)uStack_a8;
      fStack_64 = uStack_a8._4_4_;
      fStack_5c = uStack_a8._4_4_ + ((uStack_a0._4_4_ - uStack_a8._4_4_) - fVar22) * 2.0;
      FUN_1083c1ad4(&lStack_e0,&fStack_68,&UNK_10df05494,&UNK_10df0549c,2,1,0,0);
      uStack_f0 = 0;
      if (lStack_e0 != 0) {
        do {
          func_0x00010816eb6c();
          uStack_f0 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      uStack_f8 = 0;
      if (lStack_b0 != 0) {
        do {
          func_0x00010816eb6c();
          uStack_f8 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      FUN_1083ba7d0(&lStack_e8,5,&uStack_f0,&uStack_f8);
      lVar15 = lStack_e8;
      lStack_e8 = 0;
      func_0x000108114f18(param_1 + 0x78,lVar15);
      func_0x00010816eb94();
      func_0x000106f47224(&uStack_f8);
      func_0x000106f47224(&uStack_f0);
      uStack_108 = 0;
      if (lStack_e0 != 0) {
        do {
          func_0x00010816eb6c();
          uStack_108 = extraout_x8_01;
        } while (extraout_w11_01 != 0);
      }
      uStack_110 = 0;
      if (lStack_b0 != 0) {
        do {
          func_0x00010816eb6c();
          uStack_110 = extraout_x8_02;
        } while (extraout_w11_02 != 0);
      }
      FUN_1083ba7d0(&uStack_100,7,&uStack_108);
      FUN_1083be074(&lStack_e8,uStack_100,&uStack_d8);
      lVar15 = lStack_e8;
      lStack_e8 = 0;
      func_0x000108114f18(param_1 + 0x80);
      func_0x00010816eb94();
      func_0x00010816ebb4();
      func_0x000106f47224(&uStack_110);
      func_0x000106f47224(&uStack_108);
      func_0x000106f47224(&lStack_e0);
      puVar12 = (undefined1 *)puVar13;
      goto LAB_10816e7fc;
    }
  }
  lStack_b0 = 0;
  func_0x000108114f18(param_1 + 0x78);
  lVar15 = 0;
  func_0x000108114f18(param_1 + 0x80);
LAB_10816e7fc:
  plVar11 = &lStack_b0;
  func_0x000106f47224();
  func_0x00010816eb9c();
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    func_0x00010816eb94();
    func_0x00010816ebb4();
    func_0x000106f47224(&uStack_110);
    func_0x000106f47224(&uStack_108);
    func_0x000106f47224(&lStack_e0);
    func_0x000106f47224(&lStack_b0);
    __Unwind_Resume();
    if (((*(float *)(plVar11 + 3) < *(float *)(plVar11 + 4)) &&
        (*(float *)((long)plVar11 + 0x1c) < *(float *)((long)plVar11 + 0x24))) &&
       ((0.0 < *(float *)(plVar11 + 0xb) || (0.0 < *(float *)((long)plVar11 + 0x5c))))) {
      uStack_1ac = 0;
      uStack_1b0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1c0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1a4 = 0x3f800000;
      uStack_19c = 0x140800000;
      if (puVar12 != (undefined1 *)0x0) {
        lVar15 = *(long *)(lVar15 + 0xc40);
        uStack_188 = *(undefined8 *)(lVar15 + 0x20);
        uStack_190 = *(undefined8 *)(lVar15 + 0x18);
        uStack_180 = *(undefined8 *)(lVar15 + 0x28);
        uStack_178 = *(undefined8 *)(lVar15 + 0x30);
        uStack_168 = *(undefined8 *)(lVar15 + 0x40);
        uStack_170 = *(undefined8 *)(lVar15 + 0x38);
        uStack_160 = *(undefined8 *)(lVar15 + 0x48);
        uStack_158 = *(undefined8 *)(lVar15 + 0x50);
        FUN_10816eab0(auStack_208,&uStack_190);
        FUN_10818ca28(puVar12,auStack_208,&uStack_1e0,0);
      }
      uVar16 = 0;
      if (plVar11[0xf] != 0) {
        do {
          func_0x00010816eb6c();
          uVar16 = extraout_x8_03;
        } while (extraout_w11_03 != 0);
      }
      uVar8 = uStack_1d8;
      uStack_210 = 0;
      uStack_1d8 = uVar16;
      func_0x00010816ea84(uVar8);
      func_0x00010816ebb4();
      func_0x00010816eb84();
      if (plVar11[0x10] != 0) {
        do {
          func_0x00010816eb6c();
        } while (extraout_w11_04 != 0);
        uStack_218 = 0;
        uVar16 = extraout_x8_04;
        func_0x00010816ea84(uStack_1d8);
        uStack_1d8 = uVar16;
        func_0x000106f47224(&uStack_218);
        func_0x00010816eb84();
      }
      FUN_108375e94(&uStack_1e0);
    }
    return;
  }
  return;
}



/* Entry: 10816e900; end: 10816ea7b;  */

void FUN_10816e900(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 extraout_x8_00;
  long lVar3;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [40];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (((*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x20)) &&
      (*(float *)(param_1 + 0x1c) < *(float *)(param_1 + 0x24))) &&
     ((0.0 < *(float *)(param_1 + 0x58) || (0.0 < *(float *)(param_1 + 0x5c))))) {
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_94 = 0x3f800000;
    uStack_8c = 0x140800000;
    if (param_3 != 0) {
      lVar3 = *(long *)(param_2 + 0xc40);
      uStack_78 = *(undefined8 *)(lVar3 + 0x20);
      uStack_80 = *(undefined8 *)(lVar3 + 0x18);
      uStack_68 = *(undefined8 *)(lVar3 + 0x30);
      uStack_70 = *(undefined8 *)(lVar3 + 0x28);
      uStack_58 = *(undefined8 *)(lVar3 + 0x40);
      uStack_60 = *(undefined8 *)(lVar3 + 0x38);
      uStack_48 = *(undefined8 *)(lVar3 + 0x50);
      uStack_50 = *(undefined8 *)(lVar3 + 0x48);
      FUN_10816eab0(auStack_f8,&uStack_80);
      FUN_10818ca28(param_3,auStack_f8,&uStack_d0,0);
    }
    uVar2 = 0;
    if (*(long *)(param_1 + 0x78) != 0) {
      do {
        FUN_10816eb6c();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uVar1 = uStack_c8;
    uStack_100 = 0;
    uStack_c8 = uVar2;
    func_0x00010816ea84(uVar1);
    func_0x00010816ebb4();
    func_0x00010816eb84();
    if (*(long *)(param_1 + 0x80) != 0) {
      do {
        FUN_10816eb6c();
      } while (extraout_w11_00 != 0);
      uStack_108 = 0;
      uVar2 = extraout_x8_00;
      func_0x00010816ea84(uStack_c8);
      uStack_c8 = uVar2;
      func_0x000106f47224(&uStack_108);
      func_0x00010816eb84();
    }
    FUN_108375e94(&uStack_d0);
  }
  return;
}



/* Entry: 10816ea7c; end: 10816eaaf;  */

undefined8 FUN_10816ea7c(void)

{
  return 0;
}



/* Entry: 10816eab0; end: 10816eae7;  */

void FUN_10816eab0(undefined4 *param_1)

{
  FUN_10816eae8(*param_1,param_1[4],param_1[0xc],param_1[1],param_1[5],param_1[0xd],param_1[3],
                param_1[7]);
  return;
}



/* Entry: 10816eae8; end: 10816eb6b;  */

void FUN_10816eae8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined4 in_stack_00000000;
  
  FUN_10810c9b4();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  param_1[8] = in_stack_00000000;
  param_1[9] = 0x80;
  return;
}



/* Entry: 10816eb6c; end: 10816ebcf;  */

void FUN_10816eb6c(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10816ebd0; end: 10816ee6f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10816ebd0(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long alStack_98 [2];
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *aplStack_60 [2];
  
  func_0x00010816f368();
  lVar11 = *param_2;
  alStack_98[0] = 0;
  plVar7 = (long *)0x50;
  __Znwm();
  plVar10 = (long *)*param_4;
  *param_4 = 0;
  puVar8 = (undefined8 *)0x70;
  plStack_88 = plVar10;
  __Znwm();
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  aplStack_60[0] = plVar10;
  FUN_1081659f0(&plStack_78,aplStack_60,1);
  FUN_10818d360(puVar8,&plStack_78);
  FUN_10815640c(&plStack_78);
  FUN_108154cb4(aplStack_60);
  *puVar8 = &PTR_SUB_110a29cb0;
  puVar8[10] = 0;
  puVar8[9] = 0;
  puVar8[0xc] = 0;
  puVar8[0xb] = 0;
  FUN_108154cb4(&lStack_80);
  *(undefined4 *)(plVar7 + 1) = 1;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(undefined2 *)(plVar7 + 5) = 0;
  *plVar7 = (long)&PTR_DAT_110a29d08;
  aplStack_60[0] = (long *)0x0;
  plVar7[6] = (long)puVar8;
  FUN_10816ee70(aplStack_60);
  *plVar7 = (long)&PTR_FUN_110a29c48;
  plVar7[7] = 0;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plStack_78 = param_3;
  lStack_70 = lVar11;
  plStack_68 = plVar7;
  FUN_108164708(&plStack_78,0);
  FUN_108164708();
  FUN_1081662b4();
  FUN_108164708();
  FUN_108164708();
  FUN_108154cb4(&plStack_88);
  FUN_10816040c(plVar7 + 2);
  lVar9 = plVar7[6];
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  alStack_98[1] = 0;
  uVar6 = plVar7[2] == plVar7[3];
  alStack_98[0] = lVar9;
  if (((bool)uVar6) && ((*(byte *)((long)plVar7 + 0x29) & 1) == 0)) {
    aplStack_60[0] = plVar7;
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  else {
    aplStack_60[0] = (long *)0x0;
    plStack_78 = plVar7;
    FUN_108155570(*(undefined8 *)(lVar11 + 0x70),&plStack_78);
    FUN_108155920(&plStack_78);
  }
  FUN_10816eec0(aplStack_60);
  FUN_10816eec0(alStack_98 + 1);
  alStack_98[0] = 0;
  *param_1 = lVar9;
  plVar7 = alStack_98;
  FUN_10816ee70();
  func_0x00010816f350();
  if ((bool)uVar6) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_10816eec0(aplStack_60);
  FUN_10816eec0(alStack_98 + 1);
  FUN_10816ee70(alStack_98);
  __Unwind_Resume();
  plVar10 = (long *)*plVar7;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  return plVar7;
}



/* Entry: 10816ee70; end: 10816eebf;  */

long * FUN_10816ee70(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816eec0; end: 10816ef0f;  */

long * FUN_10816eec0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816ef10; end: 10816ef3f;  */

undefined8 * FUN_10816ef10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29d08;
  FUN_10816ee70(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816ef40; end: 10816ef43;  */

undefined8 * FUN_10816ef40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29d08;
  FUN_10816ee70(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816ef44; end: 10816ef57;  */

void FUN_10816ef44(void)

{
  FUN_10816ef10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816ef58; end: 10816f037;  */

void FUN_10816ef58(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (*(float *)(lVar4 + 0x50) != *(float *)(param_1 + 0x40)) {
    *(float *)(lVar4 + 0x50) = *(float *)(param_1 + 0x40);
    func_0x00010816f348();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar4 + 0x54) != *(float *)(param_1 + 0x44)) {
    *(float *)(lVar4 + 0x54) = *(float *)(param_1 + 0x44);
    func_0x00010816f348();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  fVar7 = *(float *)(param_1 + 0x3c);
  bVar3 = false;
  if ((*(float *)(lVar4 + 0x48) == *(float *)(param_1 + 0x38)) &&
     (bVar3 = false, !NAN(*(float *)(lVar4 + 0x4c)) && !NAN(fVar7))) {
    bVar3 = *(float *)(lVar4 + 0x4c) == fVar7;
  }
  if (!bVar3) {
    *(float *)(lVar4 + 0x48) = *(float *)(param_1 + 0x38);
    *(float *)(lVar4 + 0x4c) = fVar7;
    func_0x00010816f348();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar4 + 0x58) != *(float *)(param_1 + 0x48)) {
    *(float *)(lVar4 + 0x58) = *(float *)(param_1 + 0x48);
    func_0x00010816f348();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar4 + 0x5c) != *(float *)(param_1 + 0x4c)) {
    *(float *)(lVar4 + 0x5c) = *(float *)(param_1 + 0x4c);
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(lVar4 + 0x28);
      uVar6 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar6 = uVar2 | 8;
          *(short *)(lVar4 + 0x28) = (short)uVar6;
          uStack_21 = 0;
        }
        *(ushort *)(lVar4 + 0x28) = (ushort)uVar6 | 4;
        puStack_40 = &uStack_21;
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        if ((uVar6 >> 4 & 1) == 0) {
          if (puVar5 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar5[1];
          for (puVar5 = (undefined8 *)*puVar5; puVar5 != puVar1; puVar5 = puVar5 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar5);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10816f038; end: 10816f04b;  */

void FUN_10816f038(void)

{
  func_0x00010816f010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816f04c; end: 10816f253;  */

/* WARNING: Heritage AFTER dead removal. Example location: d2 : 0x00010816f1d0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_10816f04c(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 uVar5;
  long lVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar15;
  byte bVar16;
  float fVar12;
  float fVar13;
  byte bVar17;
  undefined1 auVar14 [16];
  undefined1 auStack_220 [40];
  long lStack_1f8;
  undefined1 auStack_1f0 [144];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [136];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = param_1;
  func_0x00010816f368();
  puVar7 = (uint *)**(long **)(lVar6 + 0x30);
  FUN_10818a8b4();
  fVar8 = *(float *)(param_1 + 0x50);
  uVar10 = 0;
  uVar5 = fVar8 == 100.0;
  if (fVar8 < 100.0) {
    uVar10 = (ulong)*puVar7;
    uVar5 = fVar8 == 0.0;
    if (fVar8 <= 0.0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      puVar7 = (uint *)(param_1 + 0x60);
      param_2 = 0;
      func_0x000108114f18(puVar7,0);
    }
    else {
      fVar12 = 0.0;
      if (0.0 <= *(float *)(param_1 + 0x5c)) {
        fVar12 = *(float *)(param_1 + 0x5c);
      }
      *(float *)(param_1 + 0x68) = fVar12 * 0.3;
      fVar12 = (float)NEON_fminnm((float)(double)(long)(*(float *)(param_1 + 0x58) + 0.5),0x4effffff
                                 );
      if (fVar12 <= -2.1474835e+09) {
        fVar12 = -2.1474835e+09;
      }
      fVar9 = -360.0;
      if ((int)fVar12 != 2) {
        fVar9 = 0.0;
      }
      fVar13 = -180.0;
      if ((int)fVar12 != 3) {
        fVar13 = fVar9;
      }
      fVar9 = *(float *)(param_1 + 0x54) + -90.0 + fVar13 * fVar8 * 0.01;
      _fmodf(fVar9,0x43b40000);
      fVar12 = fVar9 + 360.0;
      if (0.0 <= fVar9) {
        fVar12 = fVar9;
      }
      fVar9 = fVar12 + fVar8 * 0.01 * 360.0;
      _fmodf(fVar9,0x43b40000);
      fVar8 = fVar9 + 360.0;
      if (0.0 <= fVar9) {
        fVar8 = fVar9;
      }
      auVar14._0_4_ = -(uint)(fVar8 < fVar12);
      auVar14._4_4_ = auVar14._0_4_;
      auVar14._8_4_ = auVar14._0_4_;
      auVar14._12_4_ = auVar14._0_4_;
      bVar11 = (byte)auVar14._0_4_;
      bVar15 = (byte)((uint)auVar14._0_4_ >> 8);
      bVar16 = (byte)((uint)auVar14._0_4_ >> 0x10);
      bVar17 = (byte)((uint)auVar14._0_4_ >> 0x18);
      auVar4[1] = ~bVar15;
      auVar4[0] = ~bVar11;
      auVar4[2] = ~bVar16;
      auVar4[3] = ~bVar17;
      auVar4[4] = ~bVar11;
      auVar4[5] = ~bVar15;
      auVar4[6] = ~bVar16;
      auVar4[7] = ~bVar17;
      auVar4[8] = ~bVar11;
      auVar4[9] = ~bVar15;
      auVar4[10] = ~bVar16;
      auVar4[0xb] = ~bVar17;
      auVar4[0xc] = ~bVar11;
      auVar4[0xd] = ~bVar15;
      auVar4[0xe] = ~bVar16;
      auVar4[0xf] = ~bVar17;
      auVar14 = auVar14 ^ (auVar14 ^ auVar4) & ~_UNK_10df054b0;
      uVar5 = fVar12 == fVar8;
      if (fVar12 <= fVar8) {
        fVar12 = fVar8;
      }
      uStack_78 = 0x3f8000003f800000;
      uStack_80 = 0;
      uStack_68 = auVar14._8_8_;
      uStack_70 = auVar14._0_8_;
      FUN_1083c2570(&uStack_88,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                    CONCAT17(~bVar17,CONCAT16(~bVar16,CONCAT15(~bVar15,CONCAT14(~bVar11,CONCAT13(~
                                                  bVar17,CONCAT12(~bVar16,CONCAT11(~bVar15,~bVar11))
                                                  ))))),fVar12,&uStack_70,&uStack_80,4,0,0,0);
      param_2 = uStack_88;
      uStack_88 = 0;
      func_0x000108114f18(param_1 + 0x60,param_2);
      puVar7 = (uint *)&uStack_88;
      func_0x000106f47224();
    }
  }
  func_0x00010816f350();
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x000106f47224(&uStack_88);
    __Unwind_Resume();
    uVar10 = (ulong)puVar7[0x14];
    if ((float)puVar7[0x14] < 100.0) {
      FUN_10818ccbc(auStack_1f0);
      lStack_1f8 = *(long *)(puVar7 + 0x18);
      if (lStack_1f8 != 0) {
        piVar1 = (int *)(lStack_1f8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010833b800(auStack_220,param_2);
      FUN_10818ceb4(auStack_1f0,&lStack_1f8,auStack_220);
      FUN_1081660c4(auStack_160,auStack_1f0);
      func_0x000106f47224(&lStack_1f8);
      FUN_10818cd40(auStack_1f0);
      FUN_10818c910(**(undefined8 **)(puVar7 + 0xc),param_2,auStack_158);
      FUN_10818cd40(auStack_160);
    }
    return uVar10;
  }
  return uVar10;
}



/* Entry: 10816f254; end: 10816f33f;  */

void FUN_10816f254(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_180 [40];
  long lStack_158;
  undefined1 auStack_150 [144];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [136];
  
  if (*(float *)(param_1 + 0x50) < 100.0) {
    FUN_10818ccbc(auStack_150);
    lStack_158 = *(long *)(param_1 + 0x60);
    if (lStack_158 != 0) {
      piVar1 = (int *)(lStack_158 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010833b800(auStack_180,param_2);
    FUN_10818ceb4(auStack_150,&lStack_158,auStack_180);
    FUN_1081660c4(auStack_c0,auStack_150);
    func_0x000106f47224(&lStack_158);
    FUN_10818cd40(auStack_150);
    FUN_10818c910(**(undefined8 **)(param_1 + 0x30),param_2,auStack_b8);
    FUN_10818cd40(auStack_c0);
  }
  return;
}



/* Entry: 10816f340; end: 10816f37b;  */

undefined8 FUN_10816f340(void)

{
  return 0;
}



/* Entry: 10816f37c; end: 10816f3bb;  */

void FUN_10816f37c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auStack_28 [8];
  
  func_0x00010816fb60();
  FUN_10816f3bc(extraout_x8,param_2,extraout_x9,auStack_28,0);
  func_0x00010816fb00();
  return;
}



/* Entry: 10816f3bc; end: 10816f63b;  */

void FUN_10816f3bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  uStack_70 = 0;
  plVar1 = (long *)0x68;
  __Znwm();
  *(undefined4 *)(plVar1 + 1) = 1;
  plVar1[2] = 0;
  plVar1[3] = 0;
  plVar1[4] = 0;
  *(undefined2 *)(plVar1 + 5) = 0;
  *plVar1 = (long)&PTR_DAT_110a29da8;
  plVar2 = plVar1;
  FUN_10816798c(plVar1 + 6);
  *plVar1 = (long)&PTR_SUB_110a29d40;
  *(undefined4 *)(plVar1 + 7) = param_5;
  plVar1[8] = 0;
  plVar1[9] = 0;
  plVar1[10] = 0;
  plVar1[0xc] = 0;
  plVar1[0xb] = 0x42c80000;
  func_0x00010816fb14();
  FUN_108154e4c();
  plVar3 = plVar1;
  FUN_108163f1c(plVar1,param_3,plVar2,plVar1 + 8);
  func_0x00010816fb14();
  FUN_108154e4c();
  FUN_108161330(plVar1,param_3,plVar3,plVar1 + 0xb);
  func_0x00010816fb14();
  FUN_108154e4c();
  func_0x00010816fb08();
  func_0x00010816fb14();
  FUN_108154e4c();
  func_0x00010816fb08();
  func_0x00010816fb14();
  FUN_108154e4c();
  func_0x00010816fb08();
  plStack_60 = plVar1;
  FUN_10816040c(plVar1 + 2);
  FUN_1081678f8(&uStack_70,plVar1 + 6);
  plStack_60 = (long *)0x0;
  if ((plVar1[2] == plVar1[3]) && ((*(byte *)((long)plVar1 + 0x29) & 1) == 0)) {
    plStack_68 = plVar1;
    (**(code **)(*plVar1 + 0x18))(0,plVar1);
  }
  else {
    plStack_68 = (long *)0x0;
    plStack_58 = plVar1;
    FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_58);
    FUN_108155920(&plStack_58);
  }
  FUN_10816f67c(&plStack_68);
  FUN_10816f67c(&plStack_60);
  uStack_80 = uStack_70;
  uStack_78 = *param_4;
  *param_4 = 0;
  uStack_70 = 0;
  FUN_10818bb98(param_1,&uStack_78,&uStack_80);
  FUN_108159600(&uStack_80);
  func_0x00010816fb00();
  FUN_1081678ac(&uStack_70);
  return;
}



/* Entry: 10816f63c; end: 10816f67b;  */

void FUN_10816f63c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auStack_28 [8];
  
  func_0x00010816fb60();
  FUN_10816f3bc(extraout_x8,param_2,extraout_x9,auStack_28,1);
  func_0x00010816fb00();
  return;
}



/* Entry: 10816f67c; end: 10816f6cb;  */

long * FUN_10816f67c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816f6cc; end: 10816f723;  */

undefined8 * FUN_10816f6cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29da8;
  FUN_1081678ac(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816f724; end: 10816f737;  */

void FUN_10816f724(void)

{
  func_0x00010816f6fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816f738; end: 10816fad3;  */

void FUN_10816f738(long param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s3;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  float fStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  float fStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  float fStack_78;
  undefined4 uStack_74;
  
  fVar7 = *(float *)(param_1 + 0x58);
  fVar9 = (*(float *)(param_1 + 0x5c) + 180.0) * 0.017453292;
  fVar11 = *(float *)(param_1 + 0x60);
  fVar8 = 1.0;
  if (fVar7 / 100.0 <= 1.0) {
    fVar8 = fVar7 / 100.0;
  }
  fVar5 = 0.0;
  fVar1 = fVar8;
  if (fVar8 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_10816385c(param_1 + 0x40);
  fVar10 = *(float *)(param_1 + 100);
  fVar6 = fVar5;
  ___sincosf_stret();
  fStack_78 = in_s3 * fVar1;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_74 = 0;
  fStack_b0 = fVar8;
  fStack_9c = fVar5;
  fStack_88 = fVar7;
  if (*(int *)(param_1 + 0x38) == 1) {
    uStack_110 = 0x3f800000;
    uStack_104 = 0;
    uStack_10c = 0;
    uStack_fc = 0x3f80000000000000;
    uStack_ec = 0;
    uStack_f4 = 0;
    uStack_e4 = 0x3f80000000000000;
    uStack_d4 = 0;
    uStack_dc = 0;
    uStack_cc = 0;
    dStack_c8 = (double)NEON_fmov(0xbf800000,4);
    dStack_c8 = -dStack_c8;
    FUN_10816b6b4(&uStack_c0,&uStack_110);
  }
  FUN_1083ae1cc(auStack_120,&uStack_c0,1);
  uStack_128 = 0;
  func_0x00010816fb34();
  FUN_1083b07f0(&uStack_118,auStack_120,&uStack_128,&uStack_110);
  fVar11 = fVar11 * 0.3;
  FUN_10811e834(&uStack_128);
  FUN_108115b2c(auStack_120);
  uVar4 = uStack_118;
  if (0.0 < fVar11) {
    uStack_118 = 0;
    uStack_138 = uVar4;
    func_0x00010816fb34();
    FUN_108167b54(&uStack_130,fVar11,fVar11,&uStack_138,&uStack_110);
    func_0x00010816fb4c();
    func_0x00010816fad4();
    func_0x00010816fb1c();
    FUN_10811e834(&uStack_138);
  }
  uVar4 = uStack_118;
  fVar8 = ABS(-(fVar10 * fVar9));
  bVar2 = false;
  bVar3 = true;
  if (ABS(fVar6 * fVar10) <= 0.00024414062) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar8)) {
      bVar2 = fVar8 == 0.00024414062;
      bVar3 = 0.00024414062 <= fVar8;
    }
  }
  if (bVar3 && !bVar2) {
    uStack_118 = 0;
    uStack_140 = uVar4;
    func_0x00010816fb34();
    FUN_1083b40a0(&uStack_130,&uStack_140,&uStack_110);
    func_0x00010816fb4c();
    func_0x00010816fad4();
    func_0x00010816fb1c();
    FUN_10811e834(&uStack_140);
  }
  uVar4 = uStack_118;
  uStack_130 = 0;
  uStack_168 = 0;
  if (*(int *)(param_1 + 0x38) == 1) {
    uStack_118 = 0;
    uStack_158 = 0;
    uStack_150 = uVar4;
    func_0x00010816fb34();
    FUN_1083aebac(&uStack_148,6,&uStack_150,&uStack_158,&uStack_110);
    uVar4 = uStack_118;
    uStack_118 = uStack_148;
    uStack_148 = 0;
    func_0x00010816fad4(uVar4);
    func_0x00010816fb2c();
    FUN_10811e834(&uStack_158);
    FUN_10811e834(&uStack_150);
    FUN_10816b6c8(&uStack_130,&uStack_118);
    uStack_168 = uStack_130;
  }
  uStack_160 = uStack_118;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = 0;
  uStack_130 = 0;
  func_0x00010816fb34();
  FUN_10816b714(&uStack_148,&uStack_160,&uStack_168,&uStack_110);
  FUN_108167ba8(uVar4,&uStack_148);
  func_0x00010816fb2c();
  FUN_10811e834(&uStack_168);
  FUN_10811e834(&uStack_160);
  func_0x00010816fb1c();
  FUN_10811e834(&uStack_118);
  return;
}



/* Entry: 10816fad4; end: 10816fb73;  */

void FUN_10816fad4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010816faf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10816fb74; end: 10816fd67;  */

void FUN_10816fb74(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar2 = *param_2;
  uStack_80 = 0;
  plVar1 = (long *)0x40;
  __Znwm();
  FUN_10816798c(&plStack_58);
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 1) = 1;
  plVar1[3] = 0;
  plVar1[4] = 0;
  *(undefined2 *)(plVar1 + 5) = 0;
  *plVar1 = (long)&PTR_DAT_110a29e48;
  plVar1[6] = (long)plStack_58;
  plStack_58 = (long *)0x0;
  FUN_1081678ac(&plStack_58);
  *plVar1 = (long)&PTR_FUN_110a29de0;
  *(undefined4 *)(plVar1 + 7) = 0;
  plStack_70 = param_3;
  lStack_68 = lVar2;
  plStack_60 = plVar1;
  FUN_108164708(&plStack_70,0);
  plStack_78 = plVar1;
  FUN_10816040c(plVar1 + 2);
  FUN_1081678f8(&uStack_80,plVar1 + 6);
  plStack_78 = (long *)0x0;
  if ((plVar1[2] == plVar1[3]) && ((*(byte *)((long)plVar1 + 0x29) & 1) == 0)) {
    plStack_58 = plVar1;
    (**(code **)(*plVar1 + 0x18))(0,plVar1);
  }
  else {
    plStack_58 = (long *)0x0;
    plStack_70 = plVar1;
    FUN_108155570(*(undefined8 *)(lVar2 + 0x70),&plStack_70);
    FUN_108155920(&plStack_70);
  }
  FUN_10816fd68(&plStack_58);
  FUN_10816fd68(&plStack_78);
  uStack_90 = uStack_80;
  uStack_88 = *param_4;
  *param_4 = 0;
  uStack_80 = 0;
  FUN_10818bb98(param_1,&uStack_88,&uStack_90);
  FUN_108159600(&uStack_90);
  FUN_108154cb4(&uStack_88);
  FUN_1081678ac(&uStack_80);
  return;
}



/* Entry: 10816fd68; end: 10816fdb7;  */

long * FUN_10816fd68(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10816fdb8; end: 10816fde7;  */

undefined8 * FUN_10816fdb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29e48;
  FUN_1081678ac(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816fde8; end: 10816fdeb;  */

undefined8 * FUN_10816fde8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29e48;
  FUN_1081678ac(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816fdec; end: 10816fdff;  */

void FUN_10816fdec(void)

{
  FUN_10816fdb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



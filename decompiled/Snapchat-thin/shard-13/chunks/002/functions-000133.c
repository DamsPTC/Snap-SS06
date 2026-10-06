/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1d5ab0; end: 10a1d5b5b;  */

void FUN_10a1d5ab0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a1ce9fc(param_1,param_2,FUN_10a1c5878,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a1d5b5c; end: 10a1d5b7f;  */

void FUN_10a1d5b5c(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  if ((uint)param_1 < 2) {
    return;
  }
  uVar1 = 1;
  lVar2 = 1;
  FUN_10a052ee0(1,1,param_1);
  **(undefined1 **)(lVar2 + 0x10) = uVar1;
  return;
}



/* Entry: 10a1d5b80; end: 10a1d5c07;  */

void FUN_10a1d5b80(undefined1 param_1,long param_2)

{
  **(undefined1 **)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10a1d5c08; end: 10a1d5cff;  */

undefined8 * FUN_10a1d5c08(undefined8 *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [271];
  undefined1 uStack_31;
  
  pbVar1 = (byte *)(param_1 + 6);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while ((bVar3 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    return param_1 + 4;
  }
  FUN_109febc44(auStack_150);
  FUN_10a002568(auStack_140,&UNK_10f643d4e,10);
  uVar2 = param_1[1];
  puVar6 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar6 = param_1;
  }
  FUN_10a002568(auStack_140,puVar6,uVar2);
  FUN_10a002568(auStack_140,&UNK_10f643d59,0x13);
  FUN_10a05168c(&uStack_31,auStack_140);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1d5ce0);
  (*pcVar7)();
}



/* Entry: 10a1d5d00; end: 10a1d5d53;  */

undefined4 FUN_10a1d5d00(undefined4 *param_1)

{
  return *param_1;
}



/* Entry: 10a1d5d54; end: 10a1d5de3;  */

byte * FUN_10a1d5d54(byte *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((param_1[8] & 1) == 0) {
    pcVar5 = *(code **)(param_1 + 0x78);
    iVar4 = (int)param_1 + 0x10;
    FUN_10a08fec0();
    (*pcVar5)();
    *(int *)(param_1 + 4) = iVar4;
    param_1[8] = 1;
  }
  *param_1 = 0;
  return param_1 + 4;
}



/* Entry: 10a1d5de4; end: 10a1d5e2f;  */

void FUN_10a1d5de4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    if (*(long *)(lVar2 + -0x18) != 0) {
      *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x18);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a1d5e30; end: 10a1d5ea7;  */

void FUN_10a1d5e30(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a1d5ea8(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a1d5ea8; end: 10a1d5edf;  */

void FUN_10a1d5ea8(long *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 in_stack_ffffffffffffff58;
  long in_stack_ffffffffffffff68;
  
  if (param_2 >> 0x3e == 0) {
    plVar3 = param_1;
    FUN_10a1d5ef4();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)plVar3 + param_2 * 4;
    return;
  }
  FUN_10a1d5ee0();
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a1d6040(plVar3,param_2);
  FUN_10a1d60a8(param_4);
  plVar5 = plVar3;
  func_0x00010a137904(plVar3,param_3);
  func_0x000109898570(&stack0xffffffffffffff58,plVar3,param_3 + 0x10);
  FUN_10a605f08(plVar5,&stack0xffffffffffffff58);
  if (in_stack_ffffffffffffff68 < 0) {
    __ZdlPv(in_stack_ffffffffffffff58);
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)((ulong)plVar5 & 0xffffffff);
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_b8 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_d8 = lVar6;
          lStack_d0 = lVar6;
          lStack_c8 = lVar6;
          lStack_c0 = lVar12;
          func_0x00010988c1b8(&lStack_d8);
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a1d5ee0; end: 10a1d5ef3;  */

void FUN_10a1d5ee0(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 in_stack_ffffffffffffff78;
  long in_stack_ffffffffffffff88;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a1d6040(plVar3,param_2);
  FUN_10a1d60a8(param_4);
  plVar5 = plVar3;
  func_0x00010a137904(plVar3,param_3);
  func_0x000109898570(&stack0xffffffffffffff78,plVar3,param_3 + 0x10);
  FUN_10a605f08(plVar5,&stack0xffffffffffffff78);
  if (in_stack_ffffffffffffff88 < 0) {
    __ZdlPv(in_stack_ffffffffffffff78);
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)((ulong)plVar5 & 0xffffffff);
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_98 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_b8 = lVar6;
          lStack_b0 = lVar6;
          lStack_a8 = lVar6;
          lStack_a0 = lVar12;
          func_0x00010988c1b8(&lStack_b8);
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a1d5ef4; end: 10a1d5f27;  */

void FUN_10a1d5ef4(long *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 in_stack_ffffffffffffff88;
  long in_stack_ffffffffffffff98;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10a1d6040(param_1,param_2);
  FUN_10a1d60a8(param_4);
  plVar4 = param_1;
  func_0x00010a137904(param_1,param_3);
  func_0x000109898570(&stack0xffffffffffffff88,param_1,param_3 + 0x10);
  FUN_10a605f08(plVar4,&stack0xffffffffffffff88);
  if (in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(in_stack_ffffffffffffff88);
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)((ulong)plVar4 & 0xffffffff);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_a8 = lVar5;
          lStack_a0 = lVar5;
          lStack_98 = lVar5;
          lStack_90 = lVar11;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a1d5f28; end: 10a1d603f;  */

void FUN_10a1d5f28(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10a1d6040(param_2,param_3);
  FUN_10a1d60a8(param_5);
  plVar4 = param_2;
  func_0x00010a137904(param_2,param_4);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4 + 0x10);
  FUN_10a605f08(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((ulong)plVar4 & 0xffffffff);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
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
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a1d6040; end: 10a1d60a7;  */

void FUN_10a1d6040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 in_stack_ffffffffffffff78;
  long in_stack_ffffffffffffff88;
  
  lVar9 = param_1;
  func_0x000109898688();
  if (lVar9 != 0) {
    FUN_10a052c2c(param_1,lVar9);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  uVar7 = 0;
  FUN_10a052ee0(2,0,puVar3);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a1d61f4(plVar4,uVar7);
  FUN_10a1d625c(param_4);
  func_0x000109898570(&stack0xffffffffffffff78,plVar4,puVar3);
  func_0x00010989847c(plVar4,puVar3 + 0x10);
  uVar8 = 0;
  FUN_10a605f08(0,&stack0xffffffffffffff78);
  if ((int)plVar4 == 0) {
    uVar8 = *(uint *)((long)plVar6 + 0x2c) & (uVar8 ^ 0xffffffff);
  }
  else {
    uVar8 = *(uint *)((long)plVar6 + 0x2c) | uVar8;
  }
  *(uint *)((long)plVar6 + 0x2c) = uVar8;
  if (in_stack_ffffffffffffff88 < 0) {
    __ZdlPv(in_stack_ffffffffffffff78);
  }
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar10 = lVar9 - 1;
  plVar5[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar4[lVar9 + 2];
    if (plVar5[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar10) {
      return;
    }
  }
  lVar9 = *plVar4;
  lVar14 = plVar5[0x4c];
  lVar12 = lVar14 - lVar9;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar5[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar9 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_98 = plVar4;
        if (uVar11 >> 0x3c == 0) {
          lVar2 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar2 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar12);
          *plVar4 = lVar13;
          plVar5[0x4c] = lVar14 + uVar17 * 0x10;
          plVar5[0x4d] = lVar2 + uVar11 * 0x10;
          lStack_b8 = lVar9;
          lStack_b0 = lVar9;
          lStack_a8 = lVar9;
          lStack_a0 = lVar15;
          func_0x00010988c1b8(&lStack_b8);
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar5[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar14 != lVar9) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar10;
  return;
}



/* Entry: 10a1d60a8; end: 10a1d60cb;  */

void FUN_10a1d60a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar6 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a1d61f4(plVar3,uVar6);
  FUN_10a1d625c(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar3,param_1);
  func_0x00010989847c(plVar3,param_1 + 0x10);
  uVar7 = 0;
  FUN_10a605f08(0,&stack0xffffffffffffff98);
  if ((int)plVar3 == 0) {
    uVar7 = *(uint *)((long)plVar5 + 0x2c) & (uVar7 ^ 0xffffffff);
  }
  else {
    uVar7 = *(uint *)((long)plVar5 + 0x2c) | uVar7;
  }
  *(uint *)((long)plVar5 + 0x2c) = uVar7;
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar9 = lVar8 - 1;
  plVar4[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar3[lVar8 + 2];
    if (plVar4[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar3;
  lVar13 = plVar4[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar4[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar3 = lVar12;
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
          plVar4[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar14;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar4[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar9;
  return;
}



/* Entry: 10a1d60cc; end: 10a1d61f3;  */

void FUN_10a1d60cc(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  FUN_10a1d61f4(param_2,param_3);
  FUN_10a1d625c(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x00010989847c(param_2,param_4 + 0x10);
  uVar5 = 0;
  FUN_10a605f08(0,&stack0xffffffffffffffa8);
  if ((int)param_2 == 0) {
    uVar5 = *(uint *)((long)plVar4 + 0x2c) & (uVar5 ^ 0xffffffff);
  }
  else {
    uVar5 = *(uint *)((long)plVar4 + 0x2c) | uVar5;
  }
  *(uint *)((long)plVar4 + 0x2c) = uVar5;
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a1d61f4; end: 10a1d625b;  */

void FUN_10a1d61f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar7 = param_1;
  func_0x000109898688();
  if (lVar7 != 0) {
    FUN_10a053854(param_1,lVar7);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  uVar6 = 0;
  FUN_10a052ee0(2,0,puVar3);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a1d6040(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  lVar7 = plVar4[5];
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)lVar7;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_98 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_b8 = lVar7;
          lStack_b0 = lVar7;
          lStack_a8 = lVar7;
          lStack_a0 = lVar13;
          func_0x00010988c1b8(&lStack_b8);
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
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a1d625c; end: 10a1d627f;  */

void FUN_10a1d625c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar5 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a1d6040(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  lVar6 = plVar3[5];
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)lVar6;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a1d6280; end: 10a1d6337;  */

void FUN_10a1d6280(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a1d6040(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[5];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a1d6338; end: 10a1d63f7;  */

void FUN_10a1d6338(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
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
  FUN_10a1d61f4(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 5) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
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
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a1d63f8; end: 10a1d64b3;  */

void FUN_10a1d63f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a1d6040(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar14 = NEON_ucvtf((ulong)*(uint *)((long)param_2 + 0x2c));
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a1d64b4; end: 10a1d6573;  */

void FUN_10a1d64b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
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
  FUN_10a1d61f4(param_2,param_3);
  FUN_10a1d6574(param_5);
  func_0x00010a137904(param_2,param_4);
  *(int *)((long)plVar4 + 0x2c) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
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
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a1d6574; end: 10a1d6597;  */

undefined8 * FUN_10a1d6574(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = puVar1 + 1;
  FUN_10a1d65ec();
  return puVar1;
}



/* Entry: 10a1d6598; end: 10a1d65eb;  */

undefined8 * FUN_10a1d6598(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10a1d65ec(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 10a1d65ec; end: 10a1d66ef;  */

void FUN_10a1d65ec(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x00010a1d666c(param_1,param_1 + 8,(long)param_2 + 0x1c,(long)param_2 + 0x1c);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a1d66f0; end: 10a1d6897;  */

long * FUN_10a1d66f0(undefined8 *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1 + 1;
  if (plVar4 != param_2) {
    uVar1 = *param_5;
    if (*(uint *)((long)param_2 + 0x1c) <= uVar1) {
      if (uVar1 <= *(uint *)((long)param_2 + 0x1c)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar6 = (long *)param_2[1];
      plVar7 = param_2;
      plVar5 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar3 = (long *)plVar7[2];
          bVar2 = (long *)*plVar3 != plVar7;
          plVar7 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar5;
          plVar5 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((plVar3 == plVar4) || (uVar1 < *(uint *)((long)plVar3 + 0x1c))) {
        if (plVar6 != (long *)0x0) {
          *param_3 = (long)plVar3;
          return plVar3;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      plVar7 = (long *)*plVar4;
      while (plVar5 = plVar4, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, *(uint *)((long)plVar5 + 0x1c) <= uVar1) {
          if (uVar1 <= *(uint *)((long)plVar5 + 0x1c)) goto LAB_10a1d6890;
          plVar4 = plVar5 + 1;
          plVar7 = (long *)*plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_10a1d6890;
        }
        plVar4 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_10a1d6890:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar3 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar2 = (long *)*plVar7 == plVar6;
        plVar6 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    uVar1 = *param_5;
    if (uVar1 <= *(uint *)((long)plVar7 + 0x1c)) {
      plVar7 = (long *)*plVar4;
      while (plVar5 = plVar4, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, *(uint *)((long)plVar5 + 0x1c) <= uVar1) {
          if (uVar1 <= *(uint *)((long)plVar5 + 0x1c)) goto LAB_10a1d67f8;
          plVar4 = plVar5 + 1;
          plVar7 = (long *)*plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_10a1d67f8;
        }
        plVar4 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_10a1d67f8:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar7;
    param_2 = plVar7 + 1;
  }
  return param_2;
}



/* Entry: 10a1d6898; end: 10a1d68eb;  */

void FUN_10a1d6898(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a1d68ec; end: 10a1d68ff;  */

long * FUN_10a1d68ec(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x18;
    FUN_10a1ce910(lVar3 + -0x18,*(undefined8 *)(lVar3 + -0x10));
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a1d6900; end: 10a1d69c7;  */

long * FUN_10a1d6900(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x18;
    FUN_10a1ce910(lVar2 + -0x18,*(undefined8 *)(lVar2 + -0x10));
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d69c8; end: 10a1d69df;  */

void FUN_10a1d69c8(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d69dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,param_1);
  return;
}



/* Entry: 10a1d69e0; end: 10a1d6a77;  */

void FUN_10a1d69e0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *puVar1 = &PTR_FUN_110bad578;
  puVar1[1] = 2;
  *(undefined4 *)(puVar1 + 2) = 4;
  *(undefined8 *)((long)puVar1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  FUN_10a07b634();
  *puVar1 = &PTR_DAT_110badb98;
  *param_1 = puVar1;
  return;
}



/* Entry: 10a1d6a78; end: 10a1d6a8b;  */

long * FUN_10a1d6a78(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar2[2] = (long)(lVar3 + -0x38);
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a1d6a8c; end: 10a1d6b17;  */

long * FUN_10a1d6a8c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = (long)(lVar2 + -0x38);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d6b18; end: 10a1d6b2f;  */

void FUN_10a1d6b18(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d6b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1);
  return;
}



/* Entry: 10a1d6b30; end: 10a1d6bc7;  */

void FUN_10a1d6b30(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *puVar1 = &PTR_FUN_110bad578;
  puVar1[1] = 4;
  *(undefined4 *)(puVar1 + 2) = 4;
  *(undefined8 *)((long)puVar1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  FUN_10a07b634();
  *puVar1 = &PTR_FUN_110badbe0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10a1d6bc8; end: 10a1d6bdb;  */

undefined * FUN_10a1d6bc8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((puVar2[0x18] & 1) == 0) {
    puVar3 = (undefined8 *)**(undefined8 **)(puVar2 + 8);
    puVar4 = (undefined8 *)**(undefined8 **)(puVar2 + 0x10);
    while (puVar1 = puVar4, puVar1 != puVar3) {
      puVar4 = puVar1 + -7;
      *puVar4 = &PTR_FUN_110bad578;
      if (puVar1[-3] != 0) {
        puVar1[-2] = puVar1[-3];
        __ZdlPv();
      }
    }
  }
  return puVar2;
}



/* Entry: 10a1d6bdc; end: 10a1d6cc3;  */

long FUN_10a1d6bdc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 8);
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
    while (puVar1 = puVar3, puVar1 != puVar2) {
      puVar3 = puVar1 + -7;
      *puVar3 = &PTR_FUN_110bad578;
      if (puVar1[-3] != 0) {
        puVar1[-2] = puVar1[-3];
        __ZdlPv();
      }
    }
  }
  return param_1;
}



/* Entry: 10a1d6cc4; end: 10a1d6d3b;  */

undefined8 * FUN_10a1d6cc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad578;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d6d3c; end: 10a1d6d53;  */

void FUN_10a1d6d3c(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d6d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1);
  return;
}



/* Entry: 10a1d6d54; end: 10a1d6de7;  */

void FUN_10a1d6d54(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *puVar1 = &PTR_FUN_110bad578;
  *(undefined4 *)(puVar1 + 1) = 0x80;
  *(undefined8 *)((long)puVar1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)((long)puVar1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  FUN_10a07b634();
  *puVar1 = &PTR_FUN_110badc28;
  *param_1 = puVar1;
  return;
}



/* Entry: 10a1d6de8; end: 10a1d6dfb;  */

long * FUN_10a1d6de8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar2[2] = (long)(lVar3 + -0x38);
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a1d6dfc; end: 10a1d6ec3;  */

long * FUN_10a1d6dfc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = (long)(lVar2 + -0x38);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d6ec4; end: 10a1d6edb;  */

void FUN_10a1d6ec4(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d6ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return;
}



/* Entry: 10a1d6edc; end: 10a1d6f7f;  */

void FUN_10a1d6edc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  *puVar1 = &PTR_FUN_110bad578;
  *(undefined4 *)(puVar1 + 1) = 8;
  *(undefined8 *)((long)puVar1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)((long)puVar1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  FUN_10a07b634();
  *puVar1 = &PTR_DAT_110badc70;
  *(undefined4 *)(puVar1 + 7) = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10a1d6f80; end: 10a1d6f93;  */

long * FUN_10a1d6f80(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x40);
    plVar2[2] = (long)(lVar3 + -0x40);
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a1d6f94; end: 10a1d705b;  */

long * FUN_10a1d6f94(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x40);
    param_1[2] = (long)(lVar2 + -0x40);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d705c; end: 10a1d7073;  */

void FUN_10a1d705c(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d7070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_1);
  return;
}



/* Entry: 10a1d7074; end: 10a1d7117;  */

void FUN_10a1d7074(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  *puVar1 = &PTR_FUN_110bad578;
  *(undefined4 *)(puVar1 + 1) = 0x40;
  *(undefined8 *)((long)puVar1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)((long)puVar1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  FUN_10a07b634();
  *puVar1 = &PTR_DAT_110badcb8;
  *(undefined4 *)(puVar1 + 7) = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10a1d7118; end: 10a1d712b;  */

long * FUN_10a1d7118(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x40);
    plVar2[2] = (long)(lVar3 + -0x40);
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a1d712c; end: 10a1d71f3;  */

long * FUN_10a1d712c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x40);
    param_1[2] = (long)(lVar2 + -0x40);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d71f4; end: 10a1d720b;  */

void FUN_10a1d71f4(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d7208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return;
}



/* Entry: 10a1d720c; end: 10a1d72b7;  */

void FUN_10a1d720c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  *puVar2 = &PTR_FUN_110bad578;
  *(undefined4 *)(puVar2 + 1) = 0x10;
  *(undefined8 *)((long)puVar2 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)((long)puVar2 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[4] = 0;
  FUN_10a07b634();
  *puVar2 = &PTR_DAT_110badd00;
  puVar2[7] = uVar3;
  *(undefined4 *)(puVar2 + 8) = uVar1;
  *param_1 = puVar2;
  return;
}



/* Entry: 10a1d72b8; end: 10a1d72cb;  */

long * FUN_10a1d72b8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x48);
    plVar2[2] = (long)(lVar3 + -0x48);
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a1d72cc; end: 10a1d7393;  */

long * FUN_10a1d72cc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x48);
    param_1[2] = (long)(lVar2 + -0x48);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d7394; end: 10a1d73ab;  */

void FUN_10a1d7394(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d73a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,param_1);
  return;
}



/* Entry: 10a1d73ac; end: 10a1d7443;  */

void FUN_10a1d73ac(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *puVar2 = &PTR_FUN_110bad578;
  puVar2[1] = 0x100;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  *(undefined8 *)((long)puVar2 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[4] = 0;
  FUN_10a07b634();
  *puVar2 = &PTR_DAT_110badd48;
  *param_1 = puVar2;
  return;
}



/* Entry: 10a1d7444; end: 10a1d7457;  */

long * FUN_10a1d7444(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar2[2] = (long)(lVar3 + -0x38);
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a1d7458; end: 10a1d751f;  */

long * FUN_10a1d7458(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = (long)(lVar2 + -0x38);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d7520; end: 10a1d7537;  */

void FUN_10a1d7520(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d7534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))(param_2,param_1);
  return;
}



/* Entry: 10a1d7538; end: 10a1d759b;  */

void FUN_10a1d7538(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  puVar2[1] = 0x200;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  *(undefined8 *)((long)puVar2 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_DAT_110badd90;
  puVar2[7] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = puVar2;
  return;
}



/* Entry: 10a1d759c; end: 10a1d75af;  */

long * FUN_10a1d759c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x40);
    plVar2[2] = (long)(lVar3 + -0x40);
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a1d75b0; end: 10a1d7657;  */

long * FUN_10a1d75b0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x40);
    param_1[2] = (long)(lVar2 + -0x40);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1d7658; end: 10a1d769f;  */

void FUN_10a1d7658(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x6f8;
  __Znwm();
  FUN_10a1d76a0();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a1d76a0; end: 10a1d76e7;  */

undefined8 * FUN_10a1d76a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110baddd8;
  func_0x00010a1d7728(param_1 + 3);
  return param_1;
}



/* Entry: 10a1d76e8; end: 10a1d76f7;  */

void FUN_10a1d76e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baddd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1d76f8; end: 10a1d7717;  */

void FUN_10a1d76f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baddd8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1d7718; end: 10a1d7917;  */

void FUN_10a1d7718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1d7720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1d7918; end: 10a1d795f;  */

void FUN_10a1d7918(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a1d7918(*param_1);
    FUN_10a1d7918(param_1[1]);
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      __ZdlPv(param_1[5]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a1d7960; end: 10a1d7977;  */

void FUN_10a1d7960(void)

{
  return;
}



/* Entry: 10a1d7978; end: 10a1d7b77;  */

float FUN_10a1d7978(float param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_4;
  
  lVar4 = *(long *)(param_2 + 0x10);
  if (param_1 <= *(float *)(lVar4 + 0x4c)) {
    fVar10 = *(float *)(lVar4 + 0x50);
  }
  else if (*(float *)(lVar4 + 100) <= param_1) {
    fVar10 = *(float *)(lVar4 + 0x68);
  }
  else {
    fVar10 = *(float *)(lVar4 + 0x2c);
    fVar13 = *(float *)(lVar4 + 0x44);
    fStack_4 = param_1;
    pfVar1 = (float *)(lVar4 + 0x44);
    if (param_1 <= fVar13) {
      pfVar1 = &fStack_4;
    }
    pfVar2 = (float *)(lVar4 + 0x2c);
    if (fVar10 <= param_1) {
      pfVar2 = pfVar1;
    }
    fVar9 = *pfVar2;
    fVar12 = 0.0;
    lVar7 = 1;
    lVar8 = 9;
    do {
      if (fVar9 < *(float *)(lVar4 + lVar7 * 4)) {
        lVar8 = lVar7 + -1;
        break;
      }
      fVar12 = fVar12 + 0.1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 10);
    fVar11 = *(float *)(lVar4 + lVar8 * 4);
    fVar11 = fVar12 + ((fVar9 - fVar11) / (*(float *)(lVar4 + lVar7 * 4) - fVar11)) * 0.1;
    fVar15 = *(float *)(lVar4 + 0x34);
    fVar13 = (fVar13 - fVar10) + fVar15 * 3.0 + *(float *)(lVar4 + 0x3c) * -3.0;
    fVar14 = fVar15 * -6.0 + fVar10 * 3.0 + *(float *)(lVar4 + 0x3c) * 3.0;
    fVar15 = fVar10 * -3.0 + fVar15 * 3.0;
    fVar16 = fVar15 + fVar11 * (fVar14 + fVar14) + fVar11 * fVar11 * fVar13 * 3.0;
    if (0.001 <= fVar16) {
      iVar6 = 4;
      do {
        fVar12 = fVar15 + (fVar14 + fVar14) * fVar11 + fVar11 * fVar13 * 3.0 * fVar11;
        if (ABS(fVar12) < 1.1920929e-07) break;
        fVar11 = fVar11 - ((fVar10 + fVar11 * (fVar15 + fVar11 * (fVar14 + fVar11 * fVar13))) -
                          fVar9) / fVar12;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    else if (1.1920929e-07 <= ABS(fVar16)) {
      uVar5 = 0;
      fVar11 = fVar12 + 0.1;
      do {
        fVar16 = fVar12 + (fVar11 - fVar12) * 0.5;
        fVar17 = fVar10 + fVar16 * (fVar15 + fVar16 * (fVar14 + fVar16 * fVar13));
        if (fVar17 - fVar9 <= 0.0) {
          fVar12 = fVar16;
          fVar16 = fVar11;
        }
        fVar11 = fVar16;
        bVar3 = uVar5 < 9;
        uVar5 = uVar5 + 1;
      } while (1e-07 < ABS(fVar17 - fVar9) && bVar3);
    }
    fVar10 = *(float *)(lVar4 + 0x50);
    fVar13 = *(float *)(lVar4 + 0x58);
    fVar10 = fVar10 + fVar11 * (fVar10 * -3.0 + fVar13 * 3.0 +
                               fVar11 * (fVar13 * -6.0 + fVar10 * 3.0 +
                                         *(float *)(lVar4 + 0x60) * 3.0 +
                                        fVar11 * ((*(float *)(lVar4 + 0x68) - fVar10) + fVar13 * 3.0
                                                 + *(float *)(lVar4 + 0x60) * -3.0)));
  }
  return fVar10;
}



/* Entry: 10a1d7b78; end: 10a1d7b9f;  */

void FUN_10a1d7b78(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a1d7ba0; end: 10a1d7dcf;  */

ulong FUN_10a1d7ba0(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  ulong uVar10;
  
  iVar4 = *(int *)(param_2 + 0x50);
  if (iVar4 == 0) {
    fVar14 = (float)(ulong)((*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 2) *
                           -0x71c71c71c71c71c7);
    _logf();
    iVar4 = (int)fVar14;
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    *(int *)(param_2 + 0x50) = iVar4;
  }
  uVar8 = *(uint *)(param_2 + 0x24);
  uVar9 = (ulong)uVar8;
  if (*(float *)(param_2 + 0x28) <= param_1) {
    uVar9 = (long)(int)uVar8 + 1;
    pfVar5 = *(float **)(param_2 + 8);
    lVar7 = *(long *)(param_2 + 0x10);
    uVar6 = (lVar7 - (long)pfVar5 >> 2) * -0x71c71c71c71c71c7;
    uVar2 = (int)uVar6 - 1;
    uVar12 = (ulong)uVar2;
    uVar8 = (int)uVar9 + iVar4;
    if ((int)uVar2 <= (int)uVar8) {
      uVar8 = uVar2;
    }
    uVar10 = uVar9;
    if ((int)uVar9 < (int)uVar8) {
      pfVar11 = pfVar5 + uVar9 * 9;
      lVar13 = 0;
      if (uVar9 <= uVar6) {
        lVar13 = uVar6 - uVar9;
      }
      do {
        if (lVar13 == 0) goto LAB_10a1d7dcc;
        uVar10 = uVar9;
        if (param_1 < *pfVar11) break;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        uVar10 = (ulong)uVar8;
        pfVar11 = pfVar11 + 9;
        lVar13 = lVar13 + -1;
      } while (uVar8 != uVar1);
    }
    uVar8 = (uint)uVar10;
    if (uVar8 != uVar2) {
      if (uVar6 < (ulong)(long)(int)uVar8 || uVar6 - (long)(int)uVar8 == 0) goto LAB_10a1d7dcc;
      uVar12 = uVar10;
      if (pfVar5[(long)(int)uVar8 * 9] <= param_1) goto LAB_10a1d7d20;
    }
  }
  else {
    uVar2 = uVar8 - iVar4 & ((int)(uVar8 - iVar4) >> 0x1f ^ 0xffffffffU);
    uVar12 = uVar9;
    if ((int)uVar2 < (int)uVar8) {
      uVar6 = (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 2) * -0x71c71c71c71c71c7;
      pfVar5 = (float *)(*(long *)(param_2 + 8) + (ulong)uVar8 * 0x24);
      do {
        if (uVar6 < uVar9 || uVar6 - uVar9 == 0) goto LAB_10a1d7dcc;
        uVar12 = uVar9;
      } while ((param_1 <= *pfVar5) &&
              (uVar9 = uVar9 - 1, uVar12 = (ulong)uVar2, pfVar5 = pfVar5 + -9,
              (long)(ulong)uVar2 < (long)uVar9));
    }
    iVar4 = (int)uVar12;
    if (iVar4 == 0) {
      pfVar5 = *(float **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
    }
    else {
      pfVar5 = *(float **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
      uVar9 = (lVar7 - (long)pfVar5 >> 2) * -0x71c71c71c71c71c7;
      if (uVar9 < (ulong)(long)iVar4 || uVar9 - (long)iVar4 == 0) goto LAB_10a1d7dcc;
      if (param_1 <= pfVar5[(long)iVar4 * 9]) {
LAB_10a1d7d20:
        *(float *)(param_2 + 0x2c) = param_1;
        lVar13 = (lVar7 + -0x24) - (long)pfVar5;
        pfVar11 = pfVar5;
        if (lVar13 != 0) {
          uVar9 = (lVar13 >> 2) * -0x71c71c71c71c71c7;
          do {
            uVar6 = uVar9 >> 1;
            uVar12 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
            uVar9 = uVar6;
            if (pfVar11[uVar6 * 9] <= param_1) {
              uVar9 = uVar12;
              pfVar11 = pfVar11 + uVar6 * 9 + 9;
            }
          } while (uVar9 != 0);
        }
        uVar12 = (ulong)(uint)((int)((ulong)((long)pfVar11 - (long)pfVar5) >> 2) * 0x38e38e39);
        goto LAB_10a1d7d8c;
      }
    }
    uVar12 = (ulong)(iVar4 + 1);
  }
LAB_10a1d7d8c:
  uVar8 = (int)uVar12 - 1;
  uVar9 = (lVar7 - (long)pfVar5 >> 2) * -0x71c71c71c71c71c7;
  if ((ulong)(long)(int)uVar8 <= uVar9 && uVar9 - (long)(int)uVar8 != 0) {
    fVar14 = pfVar5[(long)(int)uVar8 * 9];
    *(uint *)(param_2 + 0x24) = uVar8;
    *(float *)(param_2 + 0x28) = fVar14;
    return (ulong)uVar8 | uVar12 << 0x20;
  }
LAB_10a1d7dcc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1d7dd0);
  (*pcVar3)();
}



/* Entry: 10a1d7dd0; end: 10a1d7f3f;  */

void FUN_10a1d7dd0(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar7 = param_1[2];
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)((lVar7 - (long)puVar10 >> 2) * -0x71c71c71c71c71c7) < param_4) {
    puVar11 = param_1;
    uVar8 = param_2;
    if (puVar10 != (undefined8 *)0x0) {
      param_1[1] = puVar10;
      __ZdlPv();
      lVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar11 = puVar10;
    }
    if (0x71c71c71c71c71c < param_4) {
      FUN_10a1d7f8c();
      pcStack_58 = FUN_10a1d7f40;
      uStack_70 = param_2;
      puStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      if (uVar8 < 0x71c71c71c71c71d) {
        puVar10 = puVar11;
        FUN_10a1d7fa0();
        *puVar11 = puVar10;
        puVar11[1] = puVar10;
        puVar11[2] = (long)puVar10 + uVar8 * 0x24;
        return;
      }
      FUN_10a1d7f8c();
      pcStack_78 = FUN_10a1d7f8c;
      puVar5 = &DAT_10f62a4d8;
      ppuStack_80 = &puStack_60;
      FUN_109ffde64();
      pcStack_88 = FUN_10a1d7fa0;
      uStack_a0 = param_2;
      puStack_98 = param_1;
      if (0x71c71c71c71c71c < uVar8) {
        puStack_90 = (undefined1 *)&ppuStack_80;
        func_0x000109ffded8();
        pcStack_a8 = FUN_10a1d7fe8;
        uStack_d0 = param_4;
        lStack_c8 = param_3;
        uStack_c0 = param_2;
        puStack_b8 = param_1;
        ppuStack_b0 = &puStack_90;
        if ((puVar5[0x88] & 1) == 0) {
          FUN_10a1c9e04(puVar5 + 0x80,puVar5 + 0x48);
          *(long *)(puVar5 + 0x70) = *(long *)(puVar5 + 0x80);
          plVar6 = (long *)(*(long *)(puVar5 + 0x80) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (((uint)*(undefined8 *)(*(long *)(puVar5 + 0x70) + 0x10) >> 1 & 1) == 0) {
            puVar5[0x88] = 1;
            lVar7 = *(long *)(puVar5 + 0x70);
            plVar6 = (long *)(lVar7 + 0x10);
            uStack_d8 = *(undefined8 *)(puVar5 + 0x18);
            do {
              lVar9 = *plVar6;
              if (lVar9 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  uStack_e8 = 0;
                  puStack_e0 = puVar5;
                  func_0x000109d1b588(lVar7 + 0x18,&uStack_e8);
                  *(undefined8 *)(lVar7 + 0x10) = 0;
                  return;
                }
              }
              else {
                ClearExclusiveLocal();
              }
            } while (((uint)lVar9 >> 1 & 1) == 0);
          }
        }
        lVar7 = *(long *)(puVar5 + 0x70);
        if (((uint)*(undefined8 *)(*(long *)(puVar5 + 0x70) + 0x10) >> 5 & 1) == 0) {
          if ((*(byte *)(lVar7 + 0xb0) & 1) != 0) {
            func_0x00010a1c9dc4(puVar5 + 0x10,lVar7 + 0x98);
            plVar6 = *(long **)(puVar5 + 0x70);
            if (plVar6 != (long *)0x0) {
              puVar1 = (ulong *)(plVar6 + 1);
              do {
                uVar8 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar8 - 4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((uVar8 & 0x1fffffffc) == 4) {
                do {
                  uVar8 = *puVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = uVar8 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (uVar8 - 1 == 0) {
                  (**(code **)(*plVar6 + 8))();
                }
              }
            }
            plVar6 = *(long **)(puVar5 + 0x80);
            if (plVar6 != (long *)0x0) {
              puVar1 = (ulong *)(plVar6 + 1);
              do {
                uVar8 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar8 - 4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((uVar8 & 0x1fffffffc) == 4) {
                do {
                  uVar8 = *puVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = uVar8 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (uVar8 - 1 == 0) {
                  (**(code **)(*plVar6 + 8))();
                }
              }
            }
            if ((char)puVar5[0x6f] < '\0') {
              __ZdlPv(*(undefined8 *)(puVar5 + 0x58));
            }
            if ((puVar5[0x50] == '\x01') &&
               (plVar6 = *(long **)(puVar5 + 0x48), plVar6 != (long *)0x0)) {
              puVar1 = (ulong *)(plVar6 + 1);
              do {
                uVar8 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar8 - 4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((uVar8 & 0x1fffffffc) == 4) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                do {
                  uVar8 = *puVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = uVar8 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (uVar8 - 1 == 0) {
                  (**(code **)(*plVar6 + 8))(plVar6);
                }
              }
            }
            func_0x000109d1a1d0(puVar5 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(puVar5);
            return;
          }
        }
        else {
          func_0x0001092af97c(lVar7 + 0x90);
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1d820c);
        (*pcVar4)();
      }
      puStack_90 = (undefined1 *)&ppuStack_80;
      __Znwm(uVar8 * 0x24);
      return;
    }
    uVar8 = (lVar7 >> 2) * 0x1c71c71c71c71c72;
    if (uVar8 < param_4 || uVar8 - param_4 == 0) {
      uVar8 = param_4;
    }
    if (0x38e38e38e38e38d < (ulong)((lVar7 >> 2) * -0x71c71c71c71c71c7)) {
      uVar8 = 0x71c71c71c71c71c;
    }
    FUN_10a1d7f40(param_1,uVar8);
    lVar7 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar7,param_2,param_3);
    }
    lVar7 = lVar7 + param_3;
  }
  else {
    puVar11 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar11 - (long)puVar10 >> 2) * -0x71c71c71c71c71c7) < param_4) {
      lVar7 = param_2 + ((long)puVar11 - (long)puVar10);
      if (puVar11 != puVar10) {
        _memmove(puVar10,param_2);
        puVar11 = (undefined8 *)param_1[1];
      }
      param_3 = param_3 - lVar7;
      if (param_3 != 0) {
        _memmove(puVar11,lVar7,param_3);
      }
      lVar7 = (long)puVar11 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memmove(puVar10,param_2,param_3);
      }
      lVar7 = (long)puVar10 + param_3;
    }
  }
  param_1[1] = lVar7;
  return;
}



/* Entry: 10a1d7f40; end: 10a1d7f8b;  */

void FUN_10a1d7f40(long *param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  if (param_2 < 0x71c71c71c71c71d) {
    plVar6 = param_1;
    FUN_10a1d7fa0();
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)plVar6 + param_2 * 0x24;
    return;
  }
  FUN_10a1d7f8c();
  puVar5 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (0x71c71c71c71c71c < param_2) {
    func_0x000109ffded8();
    if ((puVar5[0x88] & 1) == 0) {
      FUN_10a1c9e04(puVar5 + 0x80,puVar5 + 0x48);
      *(long *)(puVar5 + 0x70) = *(long *)(puVar5 + 0x80);
      plVar6 = (long *)(*(long *)(puVar5 + 0x80) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(*(long *)(puVar5 + 0x70) + 0x10) >> 1 & 1) == 0) {
        puVar5[0x88] = 1;
        lVar9 = *(long *)(puVar5 + 0x70);
        plVar6 = (long *)(lVar9 + 0x10);
        uStack_88 = *(undefined8 *)(puVar5 + 0x18);
        do {
          lVar8 = *plVar6;
          if (lVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              uStack_98 = 0;
              puStack_90 = puVar5;
              func_0x000109d1b588(lVar9 + 0x18,&uStack_98);
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
    lVar9 = *(long *)(puVar5 + 0x70);
    if (((uint)*(undefined8 *)(*(long *)(puVar5 + 0x70) + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar9 + 0xb0) & 1) != 0) {
        func_0x00010a1c9dc4(puVar5 + 0x10,lVar9 + 0x98);
        plVar6 = *(long **)(puVar5 + 0x70);
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar7 & 0x1fffffffc) == 4) {
            do {
              uVar7 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar7 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar7 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        plVar6 = *(long **)(puVar5 + 0x80);
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar7 & 0x1fffffffc) == 4) {
            do {
              uVar7 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar7 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar7 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        if ((char)puVar5[0x6f] < '\0') {
          __ZdlPv(*(undefined8 *)(puVar5 + 0x58));
        }
        if ((puVar5[0x50] == '\x01') && (plVar6 = *(long **)(puVar5 + 0x48), plVar6 != (long *)0x0))
        {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar7 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            do {
              uVar7 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar7 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar7 - 1 == 0) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        func_0x000109d1a1d0(puVar5 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar5);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar9 + 0x90);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1d820c);
    (*pcVar4)();
  }
  __Znwm(param_2 * 0x24);
  return;
}



/* Entry: 10a1d7f8c; end: 10a1d7f9f;  */

void FUN_10a1d7f8c(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar5 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x71c71c71c71c71d) {
    __Znwm(param_2 * 0x24);
    return;
  }
  func_0x000109ffded8();
  if ((puVar5[0x88] & 1) == 0) {
    FUN_10a1c9e04(puVar5 + 0x80,puVar5 + 0x48);
    *(long *)(puVar5 + 0x70) = *(long *)(puVar5 + 0x80);
    plVar6 = (long *)(*(long *)(puVar5 + 0x80) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(puVar5 + 0x70) + 0x10) >> 1 & 1) == 0) {
      puVar5[0x88] = 1;
      lVar9 = *(long *)(puVar5 + 0x70);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_68 = *(undefined8 *)(puVar5 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_78 = 0;
            puStack_70 = puVar5;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_78);
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
  lVar9 = *(long *)(puVar5 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(puVar5 + 0x70) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar9 + 0xb0) & 1) != 0) {
      func_0x00010a1c9dc4(puVar5 + 0x10,lVar9 + 0x98);
      plVar6 = *(long **)(puVar5 + 0x70);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(puVar5 + 0x80);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      if ((char)puVar5[0x6f] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar5 + 0x58));
      }
      if ((puVar5[0x50] == '\x01') && (plVar6 = *(long **)(puVar5 + 0x48), plVar6 != (long *)0x0)) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      func_0x000109d1a1d0(puVar5 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar9 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1d820c);
  (*pcVar4)();
}



/* Entry: 10a1d7fa0; end: 10a1d7fe7;  */

void FUN_10a1d7fa0(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if (param_2 < 0x71c71c71c71c71d) {
    __Znwm(param_2 * 0x24);
    return;
  }
  func_0x000109ffded8();
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    FUN_10a1c9e04(param_1 + 0x80,param_1 + 0x48);
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
      uStack_58 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_68 = 0;
            lStack_60 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_68);
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
  lVar8 = *(long *)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xb0) & 1) != 0) {
      func_0x00010a1c9dc4(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x70);
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
      if (*(char *)(param_1 + 0x6f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x58));
      }
      if ((*(char *)(param_1 + 0x50) == '\x01') &&
         (plVar5 = *(long **)(param_1 + 0x48), plVar5 != (long *)0x0)) {
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
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1d820c);
  (*pcVar4)();
}



/* Entry: 10a1d7fe8; end: 10a1d82cf;  */

void FUN_10a1d7fe8(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    FUN_10a1c9e04(param_1 + 0x80,param_1 + 0x48);
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
  lVar8 = *(long *)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xb0) & 1) != 0) {
      func_0x00010a1c9dc4(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x70);
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
      if (*(char *)(param_1 + 0x6f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x58));
      }
      if ((*(char *)(param_1 + 0x50) == '\x01') &&
         (plVar5 = *(long **)(param_1 + 0x48), plVar5 != (long *)0x0)) {
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
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1d820c);
  (*pcVar4)();
}



/* Entry: 10a1d82d0; end: 10a1d840f;  */

void FUN_10a1d82d0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
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
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x50) == '\x01' && plVar4 != (long *)0x0) {
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a1d8410; end: 10a1d8743;  */

void FUN_10a1d8410(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  plVar9 = (long *)(param_1 + 0x58);
  plVar6 = (long *)*plVar9;
  if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar6 + 0x15) & 1) != 0) {
      lVar7 = plVar6[0x14];
      lVar10 = plVar6[0x13];
      *(long *)(param_1 + 0x50) = plVar6[0x14];
      *(long *)(param_1 + 0x48) = lVar10;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar2 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_10a1328e8(auStack_60,plVar9,*(undefined8 *)(param_1 + 0x60),(long *)(param_1 + 0x48));
        FUN_10a1cb720(auStack_50,**(undefined8 **)(param_1 + 0x60),auStack_60);
        FUN_10a00bca8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 8),auStack_50);
        if (plStack_48 != (long *)0x0) {
          plVar6 = plStack_48 + 1;
          do {
            lVar7 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
        if (plStack_58 != (long *)0x0) {
          plVar6 = plStack_58 + 1;
          do {
            lVar7 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
          }
        }
        plVar6 = *(long **)(param_1 + 0x50);
        if (plVar6 != (long *)0x0) {
          plVar9 = plVar6 + 1;
          do {
            lVar7 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        func_0x0001092ba100(param_1 + 0x10);
        func_0x000109d1a1d0(param_1 + 0x10);
        __ZdlPv(param_1);
        return;
      }
      FUN_10a00946c(&UNK_10f643be5);
    }
  }
  else {
    func_0x0001092af97c(plVar6 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1d85f0);
  (*pcVar5)();
}



/* Entry: 10a1d8744; end: 10a1d87b3;  */

void FUN_10a1d8744(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x58);
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



/* Entry: 10a1d87b4; end: 10a1d8af7;  */

void FUN_10a1d87b4(long param_1)

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
  
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    FUN_10a1cb310(param_1 + 0xb8,param_1 + 0x48);
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xb8);
    plVar6 = (long *)(*(long *)(param_1 + 0xb8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      lVar9 = *(long *)(param_1 + 0xa8);
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
  plVar6 = *(long **)(param_1 + 0xa8);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1d8a34);
    (*pcVar5)();
  }
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
  plVar6 = *(long **)(param_1 + 0xb8);
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
  func_0x0001092ba100(param_1 + 0x10);
  plVar6 = *(long **)(param_1 + 0xa0);
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
  plVar6 = *(long **)(param_1 + 0x90);
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
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  plVar6 = *(long **)(param_1 + 0x68);
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
  plVar6 = *(long **)(param_1 + 0x58);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a1d8af8; end: 10a1d8cab;  */

void FUN_10a1d8af8(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    plVar5 = *(long **)(param_1 + 0xa8);
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
    plVar5 = *(long **)(param_1 + 0xb8);
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
  }
  plVar5 = *(long **)(param_1 + 0xa0);
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
  plVar5 = *(long **)(param_1 + 0x90);
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
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 0x68);
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
  plVar5 = *(long **)(param_1 + 0x58);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a1d8cac; end: 10a1d9513;  */

void FUN_10a1d8cac(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  plVar12 = (long *)(param_1 + 0x48);
  lVar8 = *plVar12;
  if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(lVar8 + 0x90);
    goto LAB_10a1d92ac;
  }
  if ((*(byte *)(lVar8 + 0xb0) & 1) == 0) goto LAB_10a1d92ac;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_10a05151c(param_1 + 0x1d8,*(long *)(lVar8 + 0x98),*(long *)(lVar8 + 0xa0),
                *(long *)(lVar8 + 0xa0) - *(long *)(lVar8 + 0x98));
  plVar6 = (long *)*plVar12;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if (*(long *)(param_1 + 0x1d8) == *(long *)(param_1 + 0x1e0)) {
LAB_10a1d9288:
    FUN_10a1cacc4(&UNK_10f643af7);
  }
  else {
    plVar6 = *(long **)(param_1 + 0x230);
    if ((char)plVar6[3] == '\x01') {
      if (((uint)*(undefined8 *)(plVar6[2] + 0x10) >> 1 & 1) != 0) goto LAB_10a1d9288;
      plVar6 = *(long **)(param_1 + 0x230);
    }
    lVar8 = *plVar6;
    FUN_10a2421c8();
    lVar11 = *(long *)(lVar8 + 0x1d0);
    puStack_78 = &UNK_10f646e68;
    uStack_70 = 0x20;
    if (lVar11 != 0) {
      lVar9 = *(long *)(**(long **)(param_1 + 0x230) + 0x100);
      if (*(char *)(lVar9 + 0x21f) < '\0') {
        func_0x000107c3192c(plVar12,*(undefined8 *)(lVar9 + 0x208),*(undefined8 *)(lVar9 + 0x210));
      }
      else {
        uVar7 = *(undefined8 *)(lVar9 + 0x210);
        lVar16 = *(long *)(lVar9 + 0x208);
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar9 + 0x218);
        *(undefined8 *)(param_1 + 0x50) = uVar7;
        *plVar12 = lVar16;
      }
      *(undefined1 *)(param_1 + 0x60) = 0;
      puVar13 = (undefined4 *)(param_1 + 0x78);
      *puVar13 = 0;
      *(undefined1 *)(param_1 + 0x70) = 0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined8 *)(param_1 + 0x80) = &PTR_PTR_1132fed50;
      *(undefined **)(param_1 + 0x88) = &UNK_1053a6a3c;
      puVar15 = (undefined8 *)(param_1 + 0x90);
      *puVar15 = &PTR_DAT_110ae9180;
      *(undefined8 *)(param_1 + 200) = &PTR_PTR_1132fed50;
      *(undefined **)(param_1 + 0xd0) = &UNK_1053a6a3c;
      puVar14 = (undefined8 *)(param_1 + 0xd8);
      *puVar14 = &PTR_DAT_110ae9180;
      plVar6 = (long *)0x38;
      __Znwm();
      lVar9 = *(long *)(param_1 + 0x1d8);
      lVar16 = *(long *)(param_1 + 0x1e0);
      plVar6[2] = 0;
      plVar6[3] = 0;
      *plVar6 = (long)&PTR_FUN_110ba5138;
      plVar6[1] = 0;
      plVar6[4] = 0;
      plVar6[5] = lVar9;
      plVar6[6] = lVar16 - lVar9;
      uVar7 = 0x90;
      __Znwm();
      *(undefined8 *)(param_1 + 0x210) = 0;
      plStack_e0 = plVar6;
      FUN_10a1b11d8();
      *(undefined8 *)(param_1 + 0x218) = uVar7;
      if (plStack_e0 != (long *)0x0) {
        (**(code **)(*plStack_e0 + 8))();
      }
      plStack_e0 = (long *)(CONCAT71(plStack_e0._1_7_,*(undefined1 *)puVar13) & 0xffffffffffffff01);
      FUN_10a1cad34(param_1 + 0x1f0,param_1 + 0x200,param_1 + 0x218,&plStack_e0);
      *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x50);
      *(long *)(param_1 + 0x110) = *plVar12;
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *plVar12 = 0;
      *(undefined1 *)(param_1 + 0x128) = 0;
      *(undefined1 *)(param_1 + 0x138) = 0;
      if (*(char *)(param_1 + 0x70) == '\x01') {
        *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined1 *)(param_1 + 0x138) = 1;
      }
      *(undefined4 *)(param_1 + 0x140) = *puVar13;
      *(undefined2 *)(param_1 + 0x144) = *(undefined2 *)(param_1 + 0x7c);
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x88);
      *(undefined ***)(param_1 + 0x158) = &PTR_DAT_110ae9180;
      (**(code **)(*(long *)(param_1 + 0x90) + 0x10))(param_1 + 0x158,puVar15);
      *(undefined **)(param_1 + 0x88) = &UNK_1053a6a3c;
      (*(code *)**(undefined8 **)(param_1 + 0x90))(puVar15);
      *(undefined ***)(param_1 + 0x90) = &PTR_DAT_110ae9180;
      *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 200);
      *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0xd0);
      *(undefined ***)(param_1 + 0x1a0) = &PTR_DAT_110ae9180;
      (**(code **)(*(long *)(param_1 + 0xd8) + 0x10))(param_1 + 0x1a0,puVar14);
      *(undefined **)(param_1 + 0xd0) = &UNK_1053a6a3c;
      (*(code *)**(undefined8 **)(param_1 + 0xd8))(puVar14);
      *(undefined ***)(param_1 + 0xd8) = &PTR_DAT_110ae9180;
      FUN_10a25684c(param_1 + 0x200,lVar11,lVar8,param_1 + 0x1f0,param_1 + 0x110);
      func_0x0001092ba41c(param_1 + 400);
      func_0x0001092ba41c(param_1 + 0x148);
      if ((*(char *)(param_1 + 0x138) == '\x01') && (*(long *)(param_1 + 0x130) != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (*(char *)(param_1 + 0x127) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x110));
      }
      puVar14 = *(undefined8 **)(param_1 + 0x230);
      plStack_e0 = (long *)*puVar14;
      uVar7 = puVar14[1];
      plStack_d0 = (long *)puVar14[5];
      uStack_d8 = puVar14[4];
      plStack_c0 = (long *)puVar14[7];
      uStack_c8 = puVar14[6];
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      lStack_b0 = *(long *)(param_1 + 0x1e0);
      lStack_b8 = *(long *)(param_1 + 0x1d8);
      uStack_a8 = *(undefined8 *)(param_1 + 0x1e8);
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      plStack_98 = *(long **)(param_1 + 0x1f8);
      uStack_a0 = *(undefined8 *)(param_1 + 0x1f0);
      plStack_88 = *(long **)(param_1 + 0x208);
      uStack_90 = *(undefined8 *)(param_1 + 0x200);
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined8 *)(param_1 + 0x200) = 0;
      *(undefined8 *)(param_1 + 0x208) = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      FUN_10a1caf00(param_1 + 0x220,uVar7,&plStack_e0);
      plVar6 = *(long **)(param_1 + 0x220);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar2 = plStack_88 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar2 = plStack_98 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (lStack_b8 != 0) {
        lStack_b0 = lStack_b8;
        __ZdlPv();
      }
      plVar6 = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar2 = plStack_c0 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        plVar2 = plStack_d0 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = *(long **)(param_1 + 0x208);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = *(long **)(param_1 + 0x1f8);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      lVar8 = *(long *)(param_1 + 0x218);
      *(undefined8 *)(param_1 + 0x218) = 0;
      if (lVar8 != 0) {
        func_0x00010a0e32bc(param_1 + 0x218);
      }
      lVar8 = *(long *)(param_1 + 0x210);
      *(undefined8 *)(param_1 + 0x210) = 0;
      if (lVar8 != 0) {
        func_0x00010a1cbbe4(param_1 + 0x210);
      }
      func_0x0001092ba41c((undefined8 *)(param_1 + 200));
      func_0x0001092ba41c((undefined8 *)(param_1 + 0x80));
      if ((*(char *)(param_1 + 0x70) == '\x01') && (*(long *)(param_1 + 0x68) != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (*(char *)(param_1 + 0x5f) < '\0') {
        __ZdlPv(*plVar12);
      }
      if (*(long *)(param_1 + 0x1d8) != 0) {
        *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1d8);
        __ZdlPv();
      }
      func_0x0001092ba100(param_1 + 0x10);
      func_0x000109d1a1d0(param_1 + 0x10);
      __ZdlPv(param_1);
      return;
    }
    FUN_10a0edfc4(&puStack_78);
  }
LAB_10a1d92ac:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1d92b0);
  (*pcVar5)();
}



/* Entry: 10a1d9514; end: 10a1d9583;  */

void FUN_10a1d9514(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
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



/* Entry: 10a1d9584; end: 10a1d9903;  */

void FUN_10a1d9584(long param_1)

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
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    FUN_10a1c9f94(param_1 + 0xa0,param_1 + 0x48);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0xa0);
    plVar6 = (long *)(*(long *)(param_1 + 0xa0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar9 = *(long *)(param_1 + 0x90);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_48);
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
  plVar6 = *(long **)(param_1 + 0x90);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1d9840);
    (*pcVar5)();
  }
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
  plVar6 = *(long **)(param_1 + 0xa0);
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
  func_0x0001092ba100(param_1 + 0x10);
  plVar6 = *(long **)(param_1 + 0x88);
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
  plVar6 = *(long **)(param_1 + 0x80);
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
  plVar6 = *(long **)(param_1 + 0x70);
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
  if ((*(char *)(param_1 + 0x60) == '\x01') &&
     (plVar6 = *(long **)(param_1 + 0x58), plVar6 != (long *)0x0)) {
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
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
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a1d9904; end: 10a1d9aef;  */

void FUN_10a1d9904(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x90);
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
    plVar5 = *(long **)(param_1 + 0xa0);
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
  }
  plVar5 = *(long **)(param_1 + 0x88);
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
  plVar5 = *(long **)(param_1 + 0x80);
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
  plVar5 = *(long **)(param_1 + 0x70);
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
  if ((*(char *)(param_1 + 0x60) == '\x01') &&
     (plVar5 = *(long **)(param_1 + 0x58), plVar5 != (long *)0x0)) {
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a1d9af0; end: 10a1d9b0f;  */

undefined1  [16] FUN_10a1d9af0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x22;
  auVar1._0_8_ = &UNK_10f64578a;
  return auVar1;
}



/* Entry: 10a1d9b10; end: 10a1d9b77;  */

bool FUN_10a1d9b10(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf64578a;
    _memcmp(&UNK_10f64578a,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a1d9b78; end: 10a1d9bc7;  */

bool FUN_10a1d9b78(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a1d9bc8; end: 10a1da04b;  */

void FUN_10a1d9bc8(ulong param_1)

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
  ulong uVar10;
  undefined8 **ppuStack_110;
  char *pcStack_108;
  undefined8 uStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000109887da8(&ppuStack_110,&UNK_10f64578a,0x22);
  pppuVar1 = (undefined8 ***)ppuStack_110;
  if (-1 < (long)uStack_100) {
    pppuVar1 = &ppuStack_110;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb0248;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  ppuStack_c8 = (undefined8 **)0x0;
  uStack_c0 = 0;
  uStack_b0 = 0xffffffffffffffff;
  uStack_b8 = 0x100000064;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_90 = 0;
  puStack_98 = (undefined *)0x0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_d0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_d0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_e0 = &PTR_DAT_110bb0248;
    uStack_d8 = 0;
    ppuStack_d0 = (undefined8 **)&PTR_DAT_110bb3788;
    ppuStack_c8 = (undefined8 **)0x0;
    uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_e0,&ppuStack_d0);
  }
  if (uStack_100._7_1_ < '\0') {
    __ZdlPv(ppuStack_110);
  }
  pcStack_108 = "y";
  ppuStack_110 = (undefined8 **)&DAT_10f62b0e2;
  pcStack_f8 = "height";
  uStack_100 = "width";
  pcStack_f0 = "data";
  ppuStack_d0 = (undefined8 **)&UNK_10f643dad;
  uStack_c0 = 5;
  uStack_b0 = 0xffffffffffffffff;
  uStack_b8 = 0x200000019;
  puStack_a8 = &UNK_10f643dac;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puStack_98 = (undefined *)0x0;
  uStack_84 = 0x124;
  uStack_80 = 0x13c;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar7 = param_1;
  ppuStack_c8 = &ppuStack_110;
  FUN_10a1f75cc(param_1,&ppuStack_d0);
  pcStack_108 = "y";
  ppuStack_110 = (undefined8 **)&DAT_10f62b0e2;
  pcStack_f8 = "height";
  uStack_100 = "width";
  pcStack_f0 = "data";
  ppuStack_d0 = (undefined8 **)&UNK_10f643dbc;
  uStack_c0 = 5;
  uStack_b0 = 0xffffffffffffffff;
  uStack_b8 = 0x100000064;
  puStack_a8 = &UNK_10f643dac;
  uStack_a0 = 0;
  uStack_90 = 0;
  puStack_98 = (undefined *)0x0;
  uStack_88 = 0;
  uStack_84 = 0x124;
  uStack_80 = 0x13c;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_c8 = &ppuStack_110;
  FUN_10a1f75cc();
  pcStack_108 = "y";
  ppuStack_110 = (undefined8 **)&DAT_10f62b0e2;
  pcStack_f8 = "height";
  uStack_100 = "width";
  pcStack_f0 = "data";
  ppuStack_d0 = (undefined8 **)&UNK_10f643dc6;
  uStack_c0 = 5;
  uStack_b0 = 0xffffffffffffffff;
  uStack_b8 = 0x200000019;
  puStack_a8 = &UNK_10f643dac;
  puStack_98 = (undefined *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_c8 = &ppuStack_110;
  FUN_10a1f7968();
  pcStack_108 = "y";
  ppuStack_110 = (undefined8 **)&DAT_10f62b0e2;
  pcStack_f8 = "height";
  uStack_100 = "width";
  pcStack_f0 = "data";
  ppuStack_d0 = (undefined8 **)&UNK_10f643dd5;
  uStack_c0 = 5;
  uStack_b0 = 0xffffffffffffffff;
  uStack_b8 = 0x10000000064;
  puStack_a8 = &UNK_10f643dac;
  puStack_98 = (undefined *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_c8 = &ppuStack_110;
  FUN_10a1f7968();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1da02c;
    FUN_10a054dac(param_1,&UNK_10f643ddf,FUN_10a1f7b40,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1da02c;
    FUN_10a054dac(param_1,&UNK_10f643df0,FUN_10a1f81b8,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"transform",FUN_10a1f8270,FUN_10a1f8390);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    ppuStack_c8 = *(undefined8 ***)(lVar3 + -0x60);
    ppuStack_d0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_a8 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_c0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_98 = *(undefined **)(lVar3 + -0x30);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x38);
    uStack_90 = *(undefined8 *)(lVar3 + -0x28);
    uStack_70 = *(undefined8 *)(lVar3 + -8);
    uStack_78 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_88 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_84 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_80 = (undefined4)uVar10;
    uStack_7c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_b8._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_b8._4_4_;
    uStack_b0._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_b0._4_4_;
    uVar7 = param_1;
    uStack_b8 = uVar9;
    uStack_b0 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_d0,param_1 + 0x1b8,&UNK_10f64578a,0x22);
      FUN_10a05431c(param_1);
    }
    ppuStack_c8 = (undefined8 ***)0x0;
    uStack_c0 = 0;
    ppuStack_d0 = (undefined8 **)&UNK_10f643e01;
    uStack_b0 = 0xffffffffffffffff;
    uStack_b8 = 0x100000064;
    puStack_a8 = &UNK_10f643dac;
    uStack_a0 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    puStack_98 = &UNK_10f643dac;
    uStack_80 = 0xffffffff;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_d0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a1da02c;
      FUN_10a054dac(param_1,&UNK_10f643e1b,FUN_10a1f86ac,1,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a1da02c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1da030);
  (*pcVar6)();
}



/* Entry: 10a1da04c; end: 10a1da3a3;  */

long * FUN_10a1da04c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  
  plVar1 = param_1;
  FUN_10ac63120(param_1,param_3);
  lVar3 = param_2[1];
  *plVar1 = lVar3;
  plVar1[2] = (long)&PTR_FUN_110b9f848;
  plVar1[5] = (long)&PTR_DAT_110b9f878;
  *(long *)((long)plVar1 + *(long *)(lVar3 + -0x18)) = param_2[2];
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_3;
    if (param_3 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = (long)&UNK_10e52b660;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = (long)&UNK_10e52b660;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x2b] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x15] = (long)&PTR_FUN_110b9f768;
  *(ushort *)((long)param_1 + 0x101) = *(ushort *)((long)param_1 + 0x101) & 0xfc00 | 1;
  lVar3 = *param_2;
  *param_1 = lVar3;
  param_1[2] = (long)&PTR_FUN_110bb3968;
  param_1[5] = (long)&PTR_DAT_110bb3998;
  *(long *)((long)param_1 + *(long *)(lVar3 + -0x18)) = param_2[3];
  param_1[0x15] = (long)&PTR_DAT_110bb39f0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (sRam0000000113300862 == -1) {
    sRam0000000113300862 = 0x1e8;
  }
  func_0x00010a1bd170(auStack_48);
  *(undefined4 *)((long)param_1 + 0x1ec) = 0;
  if (sRam0000000113300864 == -1) {
    sRam0000000113300864 = 0x1ec;
  }
  func_0x00010a1bd170(auStack_48);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (sRam0000000113300866 == -1) {
    sRam0000000113300866 = 0x1f0;
  }
  func_0x00010a1bd170(auStack_48);
  *(undefined8 *)((long)param_1 + 500) = 0x400000000;
  if (sRam0000000113300860 == -1) {
    sRam0000000113300860 = 0x1f8;
  }
  func_0x00010a1bd170(auStack_48);
  *(undefined4 *)((long)param_1 + 0x1fc) = 0;
  if ((bRam00000001137eab30 & 1) == 0) {
    bRam00000001137eab30 = 1;
  }
  func_0x00010a1bd170(auStack_48);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x224) = 0x3f800000;
  if ((bRam00000001137eab32 & 1) == 0) {
    bRam00000001137eab32 = 1;
  }
  func_0x00010a1bd170(auStack_48);
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  if ((bRam00000001137eab34 & 1) == 0) {
    bRam00000001137eab34 = 1;
  }
  func_0x00010a1bd170(auStack_48);
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  puVar2 = (undefined8 *)0x88;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bb2408;
  puVar2[0x10] = 0;
  puVar2[3] = 0x32aaaba7;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  *(undefined8 *)((long)puVar2 + 0x7d) = 0;
  param_1[0x4d] = (long)(puVar2 + 3);
  param_1[0x4e] = (long)puVar2;
  param_1[0x4f] = -1;
  param_1[0x50] = -1;
  return param_1;
}



/* Entry: 10a1da3a4; end: 10a1da57f;  */

undefined ***
FUN_10a1da3a4(long param_1,long param_2,int *param_3,ulong param_4,int *param_5,undefined8 param_6,
             int *param_7,undefined8 param_8)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  long lVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  int *piVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int *piVar16;
  ulong uVar17;
  uint uVar18;
  undefined ***pppuVar19;
  int *unaff_x26;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  int *piStack_100;
  int *piStack_f8;
  int *piStack_f0;
  undefined8 uStack_e8;
  int *piStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = param_1 + 0xa8;
  uVar2 = *(ushort *)(param_1 + 0x101);
  *(ushort *)(param_1 + 0x101) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  uStack_90 = 1;
  pcStack_a8 = FUN_10a1d0710;
  ppuStack_a0 = &PTR_FUN_110bad6c8;
  piVar10 = param_3;
  uVar11 = param_4;
  piVar12 = param_5;
  uVar14 = param_6;
  piVar16 = param_7;
  if (*(int *)(param_1 + 0x1e8) != (int)param_2) {
    unaff_x26 = (int *)(param_1 + 0x1e8);
    *unaff_x26 = (int)param_2;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20efac(unaff_x26);
  }
  iVar13 = (int)uVar14;
  uVar15 = SUB84(piVar16,0);
  uVar18 = (uint)piVar12;
  if (*(int *)(param_1 + 0x1ec) != (int)param_3) {
    unaff_x26 = (int *)(param_1 + 0x1ec);
    *unaff_x26 = (int)param_3;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f0c4(unaff_x26);
  }
  if (*(int *)(param_1 + 0x1f8) != (int)param_5) {
    param_3 = (int *)(param_1 + 0x1f8);
    *param_3 = (int)param_5;
    func_0x00010a1bd170(auStack_b0);
    FUN_10a1fd58c(param_3);
  }
  if (*(int *)(param_1 + 0x1fc) != (int)param_6) {
    param_5 = (int *)(param_1 + 0x1fc);
    *param_5 = (int)param_6;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f1dc(param_5);
  }
  *(char *)(param_1 + 0x200) = (char)param_7;
  if (*(int *)(param_1 + 0x1f0) != (int)param_4) {
    param_7 = (int *)(param_1 + 0x1f0);
    *param_7 = (int)param_4;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f328(param_7);
  }
  *(int *)(param_1 + 500) = (int)param_8;
  *(undefined1 *)(param_1 + 0x201) = 1;
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    func_0x00010a042d30(param_1 + 0x1d0);
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  FUN_10a044790(&pcStack_a8);
  pppuVar19 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar19;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pppuVar5 = pppuVar19;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a1da580;
  piStack_100 = unaff_x26;
  piStack_f8 = param_3;
  piStack_f0 = param_5;
  uStack_e8 = param_6;
  piStack_e0 = param_7;
  uStack_d8 = param_4;
  uStack_d0 = param_8;
  pppuStack_c8 = pppuVar19;
  puStack_c0 = &stack0xfffffffffffffff0;
  pppuVar5[0x58] = &PTR_FUN_110c383b8;
  *(undefined2 *)(pppuVar5 + 0x5b) = 0x100;
  pppuVar5[0x5a] = (undefined **)0x0;
  pppuVar5[0x59] = (undefined **)0x0;
  pppuVar19 = pppuVar5;
  FUN_10a1da04c();
  *pppuVar19 = &PTR_DAT_110bae008;
  pppuVar19[2] = &PTR_FUN_110bae138;
  pppuVar19[5] = &PTR_FUN_110bae168;
  pppuVar19[0x58] = &PTR_FUN_110bae210;
  pppuVar19[0x15] = &PTR_FUN_110bae1c0;
  uVar1 = 4;
  if (0x26 < uVar18 - 0x30) {
    uVar1 = uVar18;
  }
  pppuVar19[0x52] = (undefined **)0x0;
  pppuVar19[0x51] = (undefined **)0x0;
  pppuVar19[0x54] = (undefined **)0x0;
  pppuVar19[0x53] = (undefined **)0x0;
  pppuVar19[0x56] = (undefined **)0x0;
  pppuVar19[0x55] = (undefined **)0x0;
  pppuVar19[0x57] = (undefined **)0x0;
  lVar6 = param_2;
  FUN_10a2421c8();
  plVar7 = *(long **)(lVar6 + 0x228);
  (**(code **)(*plVar7 + 0x68))();
  uVar18 = *(uint *)(plVar7 + 0x11);
  if ((0 < (int)uVar18) && (uVar18 < (uint)piVar10 || uVar18 < (uint)uVar11)) {
    FUN_10a0ee900(&lStack_148,&UNK_10f643e2d,0x5c);
    FUN_10a0029c0(&lStack_148);
LAB_10a1da858:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1da85c);
    (*pcVar4)();
  }
  uVar18 = uVar1;
  if (uVar1 == 0x22) {
    uVar18 = 0x25;
  }
  uVar3 = 0x24;
  if (uVar1 != 0x21) {
    uVar3 = uVar18;
  }
  uVar18 = 1;
  FUN_109fc8e58(1,1,uVar3);
  if (uVar18 != 0) {
    uVar17 = (uVar11 & 0xffffffff) * ((ulong)piVar10 & 0xffffffff);
    uVar3 = 0;
    if (uVar18 != 0) {
      uVar3 = 0xffffffff / uVar18;
    }
    if (uVar3 <= uVar17 && uVar17 - uVar3 != 0) {
      FUN_10a0ee900(&lStack_148,&UNK_10f643e8a,0x8b);
      FUN_10a0029c0(&lStack_148);
      goto LAB_10a1da858;
    }
  }
  FUN_10a1da3a4(pppuVar5,piVar10,uVar11,0,0,uVar1,0,0);
  FUN_10a2421c8();
  plVar7 = *(long **)(param_2 + 0x228);
  lStack_148 = (long)piVar10 << 0x20;
  uStack_140 = CONCAT44(1,(uint)uVar11);
  uStack_138 = (ulong)uVar1;
  uStack_12c = 0x100000001;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = uVar15;
  (**(code **)(*plVar7 + 0x20))(plVar7,&lStack_148);
  FUN_10a099d88(pppuVar19 + 0x51,plVar7);
  if (iVar13 != 0) {
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    pppuVar19 = pppuVar5;
    (*(code *)(*pppuVar5)[0x1d])();
    if ((int)pppuVar19 == 0x21) {
      pppuVar19 = (undefined ***)0x24;
    }
    else if ((int)pppuVar19 == 0x22) {
      pppuVar19 = (undefined ***)0x25;
    }
    pppuVar8 = pppuVar5;
    (*(code *)(*pppuVar5)[0x16])();
    pppuVar9 = pppuVar5;
    (*(code *)(*pppuVar5)[0x17])(pppuVar5);
    FUN_109fc8e58(pppuVar8,pppuVar9,pppuVar19);
    if (((ulong)pppuVar8 & 0xffffffff) != 0) {
      func_0x000107c27d58(&lStack_148);
    }
    pppuVar19 = pppuVar5;
    (*(code *)(*pppuVar5)[0x16])();
    pppuVar8 = pppuVar5;
    (*(code *)(*pppuVar5)[0x17])();
    uStack_108 = (ulong)pppuVar19 & 0xffffffff | (long)pppuVar8 << 0x20;
    uStack_110 = 0;
    FUN_10a1daa20(pppuVar5,&uStack_110,lStack_148);
    if (lStack_148 != 0) {
      uStack_140 = lStack_148;
      __ZdlPv();
    }
  }
  return pppuVar5;
}



/* Entry: 10a1da580; end: 10a1da8d7;  */

long * FUN_10a1da580(long *param_1,long param_2,ulong param_3,ulong param_4,uint param_5,int param_6
                    ,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  param_1[0x58] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x5b) = 0x100;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  plVar9 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110bae250,param_2);
  *plVar9 = (long)&PTR_DAT_110bae008;
  plVar9[2] = (long)&PTR_FUN_110bae138;
  plVar9[5] = (long)&PTR_FUN_110bae168;
  plVar9[0x58] = (long)&PTR_FUN_110bae210;
  plVar9[0x15] = (long)&PTR_FUN_110bae1c0;
  uVar1 = 4;
  if (0x26 < param_5 - 0x30) {
    uVar1 = param_5;
  }
  plVar9[0x52] = 0;
  plVar9[0x51] = 0;
  plVar9[0x54] = 0;
  plVar9[0x53] = 0;
  plVar9[0x56] = 0;
  plVar9[0x55] = 0;
  plVar9[0x57] = 0;
  lVar4 = param_2;
  FUN_10a2421c8();
  plVar5 = *(long **)(lVar4 + 0x228);
  (**(code **)(*plVar5 + 0x68))();
  uVar8 = *(uint *)(plVar5 + 0x11);
  if ((0 < (int)uVar8) && (uVar8 < (uint)param_3 || uVar8 < (uint)param_4)) {
    FUN_10a0ee900(&lStack_98,&UNK_10f643e2d,0x5c);
    FUN_10a0029c0(&lStack_98);
LAB_10a1da858:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1da85c);
    (*pcVar3)();
  }
  uVar8 = uVar1;
  if (uVar1 == 0x22) {
    uVar8 = 0x25;
  }
  uVar2 = 0x24;
  if (uVar1 != 0x21) {
    uVar2 = uVar8;
  }
  uVar8 = 1;
  FUN_109fc8e58(1,1,uVar2);
  if (uVar8 != 0) {
    uVar7 = (param_4 & 0xffffffff) * (param_3 & 0xffffffff);
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = 0xffffffff / uVar8;
    }
    if (uVar2 <= uVar7 && uVar7 - uVar2 != 0) {
      FUN_10a0ee900(&lStack_98,&UNK_10f643e8a,0x8b);
      FUN_10a0029c0(&lStack_98);
      goto LAB_10a1da858;
    }
  }
  FUN_10a1da3a4(param_1,param_3,param_4,0,0,uVar1,0,0);
  FUN_10a2421c8();
  plVar5 = *(long **)(param_2 + 0x228);
  lStack_98 = param_3 << 0x20;
  uStack_90 = CONCAT44(1,(uint)param_4);
  uStack_88 = (ulong)uVar1;
  uStack_7c = 0x100000001;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = param_7;
  (**(code **)(*plVar5 + 0x20))(plVar5,&lStack_98);
  FUN_10a099d88(plVar9 + 0x51,plVar5);
  if (param_6 != 0) {
    lStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    plVar9 = param_1;
    (**(code **)(*param_1 + 0xe8))();
    if ((int)plVar9 == 0x21) {
      plVar9 = (long *)0x24;
    }
    else if ((int)plVar9 == 0x22) {
      plVar9 = (long *)0x25;
    }
    plVar5 = param_1;
    (**(code **)(*param_1 + 0xb0))();
    plVar6 = param_1;
    (**(code **)(*param_1 + 0xb8))(param_1);
    FUN_109fc8e58(plVar5,plVar6,plVar9);
    if (((ulong)plVar5 & 0xffffffff) != 0) {
      func_0x000107c27d58(&lStack_98);
    }
    plVar9 = param_1;
    (**(code **)(*param_1 + 0xb0))();
    plVar5 = param_1;
    (**(code **)(*param_1 + 0xb8))();
    uStack_58 = (ulong)plVar9 & 0xffffffff | (long)plVar5 << 0x20;
    uStack_60 = 0;
    FUN_10a1daa20(param_1,&uStack_60,lStack_98);
    if (lStack_98 != 0) {
      uStack_90 = lStack_98;
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10a1da8d8; end: 10a1da8f7;  */

void FUN_10a1da8d8(void)

{
  return;
}



/* Entry: 10a1da8f8; end: 10a1daa1f;  */

void FUN_10a1da8f8(long *param_1,uint *param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  uint *puVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  uint uVar17;
  code *pcVar18;
  ulong unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_1[0x51] == 0) {
    FUN_10a00946c(&UNK_10f643f16);
    puVar13 = param_2;
    uVar14 = param_3;
    param_3 = unaff_x19;
    param_2 = unaff_x20;
    param_1 = unaff_x21;
    param_4 = unaff_x22;
    plVar12 = unaff_x23;
LAB_10a1daa08:
    FUN_10a00946c(&UNK_10f643f28);
  }
  else {
    if ((int)param_2[2] <= (int)*param_2 || (int)param_2[3] <= (int)param_2[1]) {
      return;
    }
    plVar12 = param_1;
    puVar13 = param_2;
    uVar14 = param_3;
    (**(code **)(*param_1 + 0xb0))();
    plVar11 = param_1;
    (**(code **)(*param_1 + 0xb8))();
    if ((int)(param_2[1] | *param_2) < 0) goto LAB_10a1daa08;
    uVar17 = param_2[3];
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if ((int)param_2[2] <= (int)plVar12) {
      uVar7 = (uint)plVar11;
      bVar6 = SBORROW4(uVar17,uVar7);
      bVar4 = (int)(uVar17 - uVar7) < 0;
      bVar5 = uVar17 == uVar7;
    }
    if (!bVar5 && bVar4 == bVar6) goto LAB_10a1daa08;
    plVar12 = param_1;
    (**(code **)(*param_1 + 0xe8))();
    uVar7 = (uint)plVar12;
    uVar17 = uVar7;
    if (uVar7 == 0x22) {
      uVar17 = 0x25;
    }
    uVar10 = 0x24;
    if (uVar7 != 0x21) {
      uVar10 = uVar17;
    }
    uVar14 = (ulong)uVar10;
    uVar17 = (param_2[3] - param_2[1]) * (param_2[2] - *param_2);
    iVar8 = 1;
    puVar13 = (uint *)0x1;
    FUN_109fc8e58(1,1,uVar14);
    plVar12 = (long *)(ulong)uVar17;
    if (uVar17 * iVar8 <= param_4) goto code_r0x00010a1daa20;
  }
  unaff_x23 = plVar12;
  unaff_x22 = param_4;
  unaff_x21 = param_1;
  unaff_x20 = param_2;
  unaff_x19 = param_3;
  param_3 = uVar14;
  param_2 = puVar13;
  param_1 = (long *)&UNK_10f643f47;
  unaff_x30 = FUN_10a1daa20;
  FUN_10a00946c();
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
  unaff_x29 = puVar1;
code_r0x00010a1daa20:
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar17 = *param_2;
  uVar7 = param_2[1];
  iVar8 = param_2[2] - uVar17;
  iVar3 = param_2[3] - uVar7;
  plVar12 = param_1;
  (**(code **)(*param_1 + 0xe8))();
  iVar9 = (int)plVar12;
  uVar15 = 0x24;
  if (iVar9 != 0x21) {
    uVar15 = 0;
  }
  uVar2 = 0x25;
  if (iVar9 != 0x22) {
    uVar2 = uVar15;
  }
  plVar12 = (long *)param_1[0x51];
  pcVar18 = *(code **)(*plVar12 + 0xa0);
  *(undefined4 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x5c) = uVar2;
  (*pcVar18)(plVar12,uVar17,uVar7,0,iVar8,iVar3,1,param_3);
  if (iVar9 == 0x21) {
    iVar9 = 0x24;
  }
  else if (iVar9 == 0x22) {
    iVar9 = 0x25;
  }
  uVar10 = 1;
  FUN_109fc8e58(1,1,iVar9);
  lVar16 = param_1[0x53];
  if (lVar16 != 0) {
    FUN_10a1b7ee0(*(long *)(lVar16 + 0x28) + *(long *)(lVar16 + 0x18) * (long)(int)uVar7 +
                  (ulong)(*(int *)(lVar16 + 0x20) * uVar17 <<
                         ((*(uint *)(lVar16 + 0x24) & 0xfffffffb) == 0xb)),param_3,
                  *(long *)(lVar16 + 0x18),iVar8 * uVar10,iVar3);
  }
  if (iVar9 - 0x20U < 6) {
    plVar12 = param_1;
    (**(code **)(*param_1 + 0xb0))(param_1);
    plVar11 = param_1;
    (**(code **)(*param_1 + 0xb8))(param_1);
    *(undefined4 *)((long)register0x00000008 + -0x54) = 0;
    func_0x00010817850c(param_1 + 0x55,
                        (ulong)(uVar10 >> 2) * (ulong)(uint)((int)plVar11 * (int)plVar12),
                        (undefined1 *)((long)register0x00000008 + -0x54));
    uVar14 = (ulong)((int)plVar12 * uVar10);
    FUN_10a1b7ee0(param_1[0x55] + (ulong)(uVar17 * uVar10) + uVar7 * uVar14,param_3,uVar14,
                  iVar8 * uVar10,iVar3);
  }
  return;
}



/* Entry: 10a1daa20; end: 10a1dabab;  */

void FUN_10a1daa20(long *param_1,int *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 uStack_54;
  
  iVar2 = *param_2;
  uVar3 = param_2[1];
  iVar4 = param_2[2] - iVar2;
  iVar5 = param_2[3] - uVar3;
  plVar8 = param_1;
  (**(code **)(*param_1 + 0xe8))();
  iVar6 = (int)plVar8;
  uVar11 = 0x24;
  if (iVar6 != 0x21) {
    uVar11 = 0;
  }
  uVar1 = 0x25;
  if (iVar6 != 0x22) {
    uVar1 = uVar11;
  }
  (**(code **)(*(long *)param_1[0x51] + 0xa0))
            ((long *)param_1[0x51],iVar2,uVar3,0,iVar4,iVar5,1,param_3,0,uVar1);
  if (iVar6 == 0x21) {
    iVar6 = 0x24;
  }
  else if (iVar6 == 0x22) {
    iVar6 = 0x25;
  }
  uVar7 = 1;
  FUN_109fc8e58(1,1,iVar6);
  lVar12 = param_1[0x53];
  if (lVar12 != 0) {
    FUN_10a1b7ee0(*(long *)(lVar12 + 0x28) + *(long *)(lVar12 + 0x18) * (long)(int)uVar3 +
                  (ulong)(uint)(*(int *)(lVar12 + 0x20) * iVar2 <<
                               ((*(uint *)(lVar12 + 0x24) & 0xfffffffb) == 0xb)),param_3,
                  *(long *)(lVar12 + 0x18),iVar4 * uVar7,iVar5);
  }
  if (iVar6 - 0x20U < 6) {
    plVar8 = param_1;
    (**(code **)(*param_1 + 0xb0))(param_1);
    plVar9 = param_1;
    (**(code **)(*param_1 + 0xb8))(param_1);
    uStack_54 = 0;
    func_0x00010817850c(param_1 + 0x55,
                        (ulong)(uVar7 >> 2) * (ulong)(uint)((int)plVar9 * (int)plVar8),&uStack_54);
    uVar10 = (ulong)((int)plVar8 * uVar7);
    FUN_10a1b7ee0(param_1[0x55] + (ulong)(iVar2 * uVar7) + uVar3 * uVar10,param_3,uVar10,
                  iVar4 * uVar7,iVar5);
  }
  return;
}



/* Entry: 10a1dabac; end: 10a1dafab;  */

void FUN_10a1dabac(long *param_1,uint *param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  undefined8 unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar16;
  long *plVar17;
  ulong unaff_x24;
  ulong unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  long *plStack_98;
  long *plStack_90;
  int aiStack_88 [2];
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_1[0x51] != 0) {
    if ((int)param_2[2] <= (int)*param_2 || (int)param_2[3] <= (int)param_2[1]) {
      return;
    }
    plVar10 = param_1;
    (**(code **)(*param_1 + 0xb0))();
    plVar16 = param_1;
    (**(code **)(*param_1 + 0xb8))();
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x21 = param_1;
    if ((int)(param_2[1] | *param_2) < 0) goto LAB_10a1daf10;
    uVar2 = param_2[3];
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    if ((int)param_2[2] <= (int)plVar10) {
      uVar8 = (uint)plVar16;
      bVar7 = SBORROW4(uVar2,uVar8);
      bVar5 = (int)(uVar2 - uVar8) < 0;
      bVar6 = uVar2 == uVar8;
    }
    if (!bVar6 && bVar5 == bVar7) goto LAB_10a1daf10;
    plVar10 = param_1;
    (**(code **)(*param_1 + 0xe8))();
    iVar9 = (int)plVar10;
    iVar15 = iVar9;
    if (iVar9 == 0x22) {
      iVar15 = 0x25;
    }
    iVar1 = 0x24;
    if (iVar9 != 0x21) {
      iVar1 = iVar15;
    }
    uVar11 = 1;
    FUN_109fc8e58(1,1,iVar1);
    unaff_x24 = uVar11 & 0xffffffff;
    unaff_w26 = *param_2;
    unaff_w27 = param_2[1];
    unaff_x25 = (ulong)(param_2[2] - unaff_w26);
    unaff_x20 = (uint *)(ulong)(param_2[3] - unaff_w27);
    uVar11 = unaff_x24 * (long)(int)((param_2[3] - unaff_w27) * (param_2[2] - unaff_w26));
    if (param_4 <= uVar11 && uVar11 - param_4 != 0) goto LAB_10a1daf1c;
    if (iVar1 - 0x20U < 6) {
      plVar10 = param_1;
      (**(code **)(*param_1 + 0xb0))(param_1);
      plVar16 = param_1;
      (**(code **)(*param_1 + 0xb8))(param_1);
      aiStack_88[0] = 0;
      func_0x00010817850c(param_1 + 0x55,
                          (unaff_x24 >> 2) * (ulong)(uint)((int)plVar16 * (int)plVar10),aiStack_88);
      lVar14 = unaff_x24 * ((ulong)plVar10 & 0xffffffff);
      lVar12 = param_1[0x55] + unaff_x24 * unaff_w26 + lVar14 * (ulong)unaff_w27;
      goto LAB_10a1daed4;
    }
    lVar12 = param_1[0x53];
    if (lVar12 == 0) {
      if ((bRam00000001137eab48 & 1) == 0) goto LAB_10a1daf28;
      goto LAB_10a1dad0c;
    }
LAB_10a1daea8:
    lVar14 = *(long *)(lVar12 + 0x18);
    lVar12 = *(long *)(lVar12 + 0x28) + lVar14 * (int)unaff_w27 +
             (ulong)(*(int *)(lVar12 + 0x20) * unaff_w26 <<
                    ((*(uint *)(lVar12 + 0x24) & 0xfffffffb) == 0xb));
LAB_10a1daed4:
    FUN_10a1b7ee0(unaff_x19,lVar12,(unaff_x24 & 0xffffffff) * (unaff_x25 & 0xffffffff),lVar14,
                  unaff_x20);
    return;
  }
  FUN_10a00946c(&UNK_10f643f16);
LAB_10a1daf10:
  FUN_10a00946c(&UNK_10f643f28);
LAB_10a1daf1c:
  FUN_10a00946c(&UNK_10f643f47);
LAB_10a1daf28:
  iVar15 = 0x137eab48;
  ___cxa_guard_acquire();
  if (iVar15 != 0) {
    uRam00000001137eab58 = 0;
    uRam00000001137eab50 = 0x3f800000;
    uRam00000001137eab68 = 0x3f80000000000000;
    uRam00000001137eab60 = 0xbf800000;
    uRam00000001137eab70 = 0x3f800000;
    ___cxa_guard_release(0x1137eab48);
  }
LAB_10a1dad0c:
  if (unaff_x21[0x12] == 0) {
    FUN_10a00946c(&UNK_10f643f90);
  }
  else {
    puVar13 = (undefined8 *)0x1;
    plVar10 = unaff_x21;
    FUN_10a088744();
    aiStack_88[0] = (int)plVar10;
    if (puVar13 == (undefined8 *)0x0) {
      uStack_80 = 0;
      plStack_78 = (long *)0x0;
    }
    else {
      plStack_78 = (long *)puVar13[1];
      uStack_80 = *puVar13;
      if (puVar13[1] != 0) {
        plVar10 = (long *)(puVar13[1] + 8);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if (aiStack_88[0] == 2) {
      uVar11 = (ulong)*(byte *)(unaff_x21[0x12] + 0x29);
      if (5 < uVar11) goto LAB_10a1daf80;
      plVar17 = *(long **)(unaff_x21[0x12] + uVar11 * 8 + 0x30);
      plVar10 = unaff_x21;
      (**(code **)(*unaff_x21 + 0xb0))(unaff_x21);
      plVar16 = unaff_x21;
      (**(code **)(*unaff_x21 + 0xb8))(unaff_x21);
      (**(code **)(*plVar17 + 0x30))(&plStack_98,plVar17,&uStack_80,plVar10,plVar16,0x1137eab50,1);
      (**(code **)(*plStack_98 + 0x40))(plStack_98,1);
      FUN_10a1b9b14(&lStack_70,plStack_98);
      plVar10 = unaff_x21 + 0x53;
      plVar16 = (long *)unaff_x21[0x54];
      lVar14 = unaff_x21[0x54];
      lVar12 = *plVar10;
      unaff_x21[0x54] = lStack_68;
      *plVar10 = lStack_70;
      lStack_70 = lVar12;
      lStack_68 = lVar14;
      if (plVar16 != (long *)0x0) {
        plVar17 = plVar16 + 1;
        do {
          lVar12 = *plVar17;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      if (plStack_90 != (long *)0x0) {
        plVar16 = plStack_90 + 1;
        do {
          lVar12 = *plVar16;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
        }
      }
      plVar16 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar17 = plStack_78 + 1;
        do {
          lVar12 = *plVar17;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      lVar12 = *plVar10;
      goto LAB_10a1daea8;
    }
  }
  FUN_10a00946c(&UNK_10f643fd8);
LAB_10a1daf80:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1daf84);
  (*pcVar4)();
}



/* Entry: 10a1dafac; end: 10a1db037;  */

undefined1  [16] FUN_10a1dafac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f6457ad;
  return auVar1;
}



/* Entry: 10a1db038; end: 10a1db13f;  */

void FUN_10a1db038(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f643dac;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0x148;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a1db140(param_1,&puStack_a8);
  FUN_10a1f9430();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64412c;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a004eb4(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f644141;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x148;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1db218(param_1,&puStack_a8);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a1db140; end: 10a1db217;  */

/* WARNING: Removing unreachable block (ram,0x00010a1db1d8) */

undefined1  [16] FUN_10a1db140(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6457ad,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a1f9334(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1db218; end: 10a1db27f;  */

ulong FUN_10a1db218(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1db280);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a1f99fc,0,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



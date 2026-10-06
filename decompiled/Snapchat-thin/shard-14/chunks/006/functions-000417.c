/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b53fc0c; end: 10b53fc3f;  */

long FUN_10b53fc0c(long param_1)

{
  func_0x00010b547fb4();
  func_0x000107c282dc(param_1 + 0x28);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53fc40; end: 10b53fc43;  */

long FUN_10b53fc40(long param_1)

{
  func_0x00010b547fb4();
  func_0x000107c282dc(param_1 + 0x28);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53fc44; end: 10b53fc57;  */

void FUN_10b53fc44(void)

{
  FUN_10b53fc0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53fc58; end: 10b53fc7f;  */

undefined ** FUN_10b53fc58(void)

{
  return &PTR_DAT_110d03470;
}



/* Entry: 10b53fc80; end: 10b53fdb3;  */

long * FUN_10b53fc80(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  long unaff_x20;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  func_0x00010b547ee8();
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 != 0) {
    func_0x00010b547da4();
    puVar4 = (undefined1 *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 10;
    while (0x7f < uVar2) {
      func_0x00010b548578();
    }
    puVar4[-1] = (char)uVar2;
    piVar6 = *(int **)(unaff_x20 + 0x18);
    piVar1 = piVar6 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x00010b547da4();
      uVar5 = (ulong)*piVar6;
      param_4 = (long *)((long)param_1 + 1);
      while (0x7f < uVar5) {
        func_0x00010b54854c();
        uVar5 = extraout_x8;
      }
      piVar6 = piVar6 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar5;
    } while (piVar6 < piVar1);
  }
  uVar2 = *(uint *)(unaff_x20 + 0x38);
  if (uVar2 != 0) {
    func_0x00010b547da4();
    puVar4 = (undefined1 *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 0x12;
    while (0x7f < uVar2) {
      func_0x00010b548578();
    }
    puVar4[-1] = (char)uVar2;
    piVar6 = *(int **)(unaff_x20 + 0x30);
    piVar1 = piVar6 + *(int *)(unaff_x20 + 0x28);
    do {
      func_0x00010b547da4();
      uVar5 = (ulong)*piVar6;
      param_4 = (long *)((long)param_1 + 1);
      while (0x7f < uVar5) {
        func_0x00010b54854c();
        uVar5 = extraout_x8_00;
      }
      piVar6 = piVar6 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar5;
    } while (piVar6 < piVar1);
  }
  if (*(char *)(unaff_x20 + 0x3c) == '\x01') {
    func_0x00010b547da4();
    func_0x00010b5481d0();
    func_0x00010b547e28();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_01 + 8);
      param_3 = *(ulong *)(extraout_x8_01 + 0x10);
    }
    else {
      lVar3 = extraout_x8_01 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar2 = iVar7 - iVar8;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b53fdb4; end: 10b53feb3;  */

long FUN_10b53fdb4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = 0;
  lVar1 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar2 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  lVar5 = 0;
  lVar4 = 0;
  *(int *)(param_1 + 0x20) = (int)lVar1;
  for (lVar1 = (long)*(int *)(param_1 + 0x28); lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x30) + (lVar5 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar4;
    lVar5 = lVar5 + 0x100000000;
  }
  lVar2 = lVar4 + lVar2;
  if (lVar4 != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x38) = (int)lVar4;
  lVar2 = lVar2 + (ulong)*(byte *)(param_1 + 0x3c) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x40) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b53feb4; end: 10b53ff07;  */

void FUN_10b53feb4(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b548080();
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  func_0x000107c282d0();
  if (*(char *)(unaff_x20 + 0x3c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x3c) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b53ff08; end: 10b53ff1f;  */

void FUN_10b53ff08(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b53ff20; end: 10b53ff43;  */

undefined8 FUN_10b53ff20(undefined8 param_1)

{
  func_0x00010b547fb4();
  return param_1;
}



/* Entry: 10b53ff44; end: 10b53ff47;  */

undefined8 FUN_10b53ff44(undefined8 param_1)

{
  func_0x00010b547fb4();
  return param_1;
}



/* Entry: 10b53ff48; end: 10b53ff5b;  */

void FUN_10b53ff48(void)

{
  FUN_10b53ff20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53ff5c; end: 10b53ffe7;  */

undefined ** FUN_10b53ff5c(void)

{
  return &PTR_DAT_110d034c8;
}



/* Entry: 10b53ffe8; end: 10b54000f;  */

undefined8 FUN_10b53ffe8(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b540010; end: 10b540013;  */

undefined8 FUN_10b540010(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b540014; end: 10b540027;  */

void FUN_10b540014(void)

{
  FUN_10b53ffe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b540028; end: 10b540033;  */

undefined ** FUN_10b540028(void)

{
  return &PTR_DAT_110d03520;
}



/* Entry: 10b540034; end: 10b54005f;  */

void FUN_10b540034(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b540060; end: 10b5400f3;  */

long * FUN_10b540060(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00010b5482f0();
  func_0x00010b547e34();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5400bc;
  }
  else if ((int)param_2 == 0) goto LAB_10b5400bc;
  func_0x00010b547fe4();
  unaff_x19 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar3 = unaff_x22;
LAB_10b5400bc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00010b548024();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x19 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x19) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x19 + (long)iVar4;
      unaff_x19 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar2);
  }
  _memcpy(unaff_x19,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)plVar3);
}



/* Entry: 10b5400f4; end: 10b54014b;  */

void FUN_10b5400f4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b547d4c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b54014c; end: 10b54014f;  */

void FUN_10b54014c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b540150; end: 10b540197;  */

void FUN_10b540150(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b540198; end: 10b540203;  */

void FUN_10b540198(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b540204; end: 10b540227;  */

undefined8 FUN_10b540204(undefined8 param_1)

{
  func_0x00010b547fb4();
  return param_1;
}



/* Entry: 10b540228; end: 10b54022b;  */

undefined8 FUN_10b540228(undefined8 param_1)

{
  func_0x00010b547fb4();
  return param_1;
}



/* Entry: 10b54022c; end: 10b54023f;  */

void FUN_10b54022c(void)

{
  FUN_10b540204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b540240; end: 10b540263;  */

undefined ** FUN_10b540240(void)

{
  return &PTR_DAT_110d03578;
}



/* Entry: 10b540264; end: 10b540357;  */

long * FUN_10b540264(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b547ee8();
  lVar2 = param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00010b547da4();
    lVar2 = 0xd;
    func_0x000107c280a8(0xd,param_1);
    func_0x00010b548424();
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b547da4();
    func_0x00010b548498();
    func_0x00010b548424();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b547da4();
    func_0x000107c280a8(0x1d,lVar2);
    func_0x00010b548424();
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b547da4();
    func_0x00010b548490();
    func_0x00010b548424();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b547da4();
    func_0x00010b548488();
    func_0x00010b548424();
  }
  plVar3 = param_4;
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    plVar3 = unaff_x19;
    func_0x0001089f53c8();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar3 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)plVar3) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        plVar3 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar3 + (long)iVar4);
    }
    _memcpy(plVar3,lVar2,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)param_3);
  }
  return plVar3;
}



/* Entry: 10b540358; end: 10b5403ef;  */

long FUN_10b540358(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5403f0; end: 10b540417;  */

undefined8 FUN_10b5403f0(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b540418; end: 10b54041b;  */

undefined8 FUN_10b540418(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b54041c; end: 10b54042f;  */

void FUN_10b54041c(void)

{
  FUN_10b5403f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b540430; end: 10b54043b;  */

undefined ** FUN_10b540430(void)

{
  return &PTR_DAT_110d035e8;
}



/* Entry: 10b54043c; end: 10b54046f;  */

void FUN_10b54043c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b540470; end: 10b54052b;  */

long * FUN_10b540470(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b547d1c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5404b4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b5404b4;
  param_4 = (long *)&UNK_10f7783ec;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b5404b4:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b548248();
    func_0x00010598f43c();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x1c) != 0) {
    func_0x00010b5481e8();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    func_0x00010b547e94();
    uVar2 = *(undefined4 *)(unaff_x21 + 0x20);
    func_0x00010b548490();
    unaff_x20 = (long *)((long)param_1 + 4);
    *(undefined4 *)param_1 = uVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b548118();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar4);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10b54052c; end: 10b5405b7;  */

void FUN_10b54052c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b547d4c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  iVar1 = (int)param_1;
  func_0x00010b548520();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x24) = iVar1;
  return;
}



/* Entry: 10b5405b8; end: 10b5405bb;  */

void FUN_10b5405b8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x20 + 0x1c);
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5405bc; end: 10b54062b;  */

void FUN_10b5405bc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x20 + 0x1c);
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b54062c; end: 10b540653;  */

undefined8 FUN_10b54062c(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b540654; end: 10b540657;  */

undefined8 FUN_10b540654(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b540658; end: 10b54066b;  */

void FUN_10b540658(void)

{
  FUN_10b54062c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54066c; end: 10b540677;  */

undefined ** FUN_10b54066c(void)

{
  return &PTR_DAT_110d03668;
}



/* Entry: 10b540678; end: 10b5406a3;  */

void FUN_10b540678(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b547dbc();
  func_0x00010b548418();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10b5406a4; end: 10b540733;  */

long * FUN_10b5406a4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b547d1c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5406e8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b5406e8;
  param_4 = (long *)&UNK_10f77844e;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b5406e8:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b547e94();
    func_0x00010b547f7c();
    func_0x00010b547fd8();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b548024();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b548118();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b540734; end: 10b54079b;  */

void FUN_10b540734(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b547d4c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x00010b547de0();
    func_0x00010b54837c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b54079c; end: 10b54079f;  */

void FUN_10b54079c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5407a0; end: 10b5407f3;  */

void FUN_10b5407a0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5407f4; end: 10b54081b;  */

undefined8 FUN_10b5407f4(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b54081c; end: 10b54081f;  */

undefined8 FUN_10b54081c(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b540820; end: 10b540833;  */

void FUN_10b540820(void)

{
  FUN_10b5407f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b540834; end: 10b54083f;  */

undefined ** FUN_10b540834(void)

{
  return &PTR_DAT_110d036e8;
}



/* Entry: 10b540840; end: 10b54086b;  */

void FUN_10b540840(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b547dbc();
  func_0x00010b548418();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10b54086c; end: 10b5408fb;  */

long * FUN_10b54086c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b547d1c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5408b0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b5408b0;
  param_4 = (long *)&UNK_10f7784b0;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b5408b0:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b547e94();
    func_0x00010b547f7c();
    func_0x00010b547fd8();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b548024();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b548118();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b5408fc; end: 10b540963;  */

void FUN_10b5408fc(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b547d4c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x00010b547de0();
    func_0x00010b54837c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b540964; end: 10b540967;  */

void FUN_10b540964(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b540968; end: 10b540a1f;  */

void FUN_10b540968(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b540a20; end: 10b540a7f;  */

long FUN_10b540a20(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b548150();
  func_0x00010b5484cc();
  func_0x00010b5482d4();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5403f0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5407f4();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x60) != 0) {
    func_0x00010b5409bc(param_1);
  }
  return param_1;
}



/* Entry: 10b540a80; end: 10b540a83;  */

long FUN_10b540a80(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b548150();
  func_0x00010b5484cc();
  func_0x00010b5482d4();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5403f0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5407f4();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x60) != 0) {
    func_0x00010b5409bc(param_1);
  }
  return param_1;
}



/* Entry: 10b540a84; end: 10b540a97;  */

void FUN_10b540a84(void)

{
  FUN_10b540a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b540a98; end: 10b540aa3;  */

undefined ** FUN_10b540a98(void)

{
  return &PTR_DAT_110d03770;
}



/* Entry: 10b540aa4; end: 10b540b0b;  */

void FUN_10b540aa4(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b54821c();
  func_0x00010b5484d4();
  func_0x00010b5482dc();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b54043c(unaff_x19[6]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b540840(unaff_x19[7]);
    }
  }
  unaff_x19[8] = 0;
  unaff_x19[9] = 0;
  *(undefined4 *)(unaff_x19 + 10) = 0;
  func_0x00010b5409bc();
  func_0x00010b54856c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10b540b0c; end: 10b540d37;  */

long * FUN_10b540b0c(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  func_0x00010b547f8c();
  func_0x00010b548038(param_1[3]);
  if (param_2 < 0) {
    if (unaff_x22[1] != 0) goto LAB_10b540b48;
  }
  else if ((int)param_2 != 0) {
LAB_10b540b48:
    param_4 = (long *)&UNK_10f778522;
    func_0x00010b547fe4();
    param_1 = unaff_x19;
    func_0x00010b547e08();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    param_1 = unaff_x19;
    func_0x00010598f43c();
    param_3 = unaff_x21;
    unaff_x21 = param_1;
  }
  plVar4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x44);
  if (*(uint *)(unaff_x20 + 0x44) != 0) {
    param_1 = unaff_x19;
    func_0x000107c282ac();
    param_3 = unaff_x21;
    unaff_x21 = param_1;
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)plVar4 < 0) {
    plVar4 = (long *)unaff_x22[1];
    if (plVar4 != (long *)0x0) {
      plVar3 = (long *)*unaff_x22;
      goto LAB_10b540bb8;
    }
  }
  else {
    plVar3 = unaff_x22;
    if ((int)plVar4 != 0) {
LAB_10b540bb8:
      param_4 = (long *)&UNK_10f778578;
      func_0x00010b547fe4();
      func_0x00010b548430();
      func_0x00010b547e08();
      param_1 = plVar3;
      unaff_x21 = plVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b547db0();
    unaff_x22 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
    plVar4 = param_1;
    func_0x00010b548488();
    func_0x00010b54840c();
  }
  plVar3 = param_1;
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    func_0x00010b547db0();
    plVar3 = (long *)0x30;
    func_0x000107c280a8();
    func_0x00010b547e54();
    plVar4 = param_1;
    unaff_x21 = plVar3;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar4 = *(long **)(unaff_x20 + 0x30);
    param_3 = (long *)(ulong)*(uint *)((long)plVar4 + 0x24);
    plVar3 = (long *)0x7;
    func_0x00010b547f38();
    unaff_x21 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x60) == 9) {
    plVar4 = *(long **)(unaff_x20 + 0x58);
    param_3 = (long *)(ulong)*(uint *)((long)plVar4 + 0x1c);
    plVar3 = (long *)0x9;
    func_0x00010b547f38();
    unaff_x21 = plVar3;
  }
  else if (*(int *)(unaff_x20 + 0x60) == 8) {
    func_0x00010b548038(*(undefined8 *)(unaff_x20 + 0x58));
    plVar3 = unaff_x22;
    if ((long)plVar4 < 0) {
      plVar3 = (long *)*unaff_x22;
    }
    param_4 = (long *)&UNK_10f7785d4;
    func_0x00010b547fe4(plVar3);
    plVar4 = (long *)0x8;
    plVar3 = unaff_x19;
    func_0x00010b547e08();
    unaff_x21 = plVar3;
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)plVar4 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b540cc8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar4 == 0) goto LAB_10b540cc8;
  param_4 = (long *)&UNK_10f778631;
  func_0x00010b547fe4(unaff_x22);
  func_0x00010b547e08();
  plVar3 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10b540cc8:
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x1c);
    plVar3 = (long *)0xb;
    func_0x00010b547f38();
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    func_0x00010b547db0();
    plVar4 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar3);
    func_0x00010b547e54();
    unaff_x21 = plVar4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b548024();
  if ((long)param_3 < 0) {
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b548254();
  if (*plVar4 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*plVar4 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar6);
      param_4 = plVar4;
      func_0x000107c303e4(plVar4,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b540d38; end: 10b540e8b;  */

void FUN_10b540d38(long param_1)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  
  lVar2 = param_1;
  func_0x00010b548010(*(undefined8 *)(param_1 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b548010(*(undefined8 *)(param_1 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(param_1 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b5480ac();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b54052c(*(undefined8 *)(param_1 + 0x30));
      func_0x00010b547ca8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5408fc(*(undefined8 *)(param_1 + 0x38));
      func_0x00010b547ca8();
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010b547e80(0xfffffff7);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    func_0x00010b547e80();
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    func_0x00010b548234();
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    func_0x00010b548064();
  }
  if (*(int *)(param_1 + 0x60) == 9) {
    FUN_10b540734(*(undefined8 *)(param_1 + 0x58));
    func_0x00010b547ccc();
  }
  else if (*(int *)(param_1 + 0x60) == 8) {
    func_0x000107c282a0(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b54812c();
  }
  func_0x00010b548388();
  return;
}



/* Entry: 10b540e8c; end: 10b540e8f;  */

void FUN_10b540e8c(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  ulong *puVar3;
  ulong *puVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b547ed8();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar3 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010b548560();
    puVar3 = unaff_x22;
  }
  func_0x00010b547f44();
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b548480();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = unaff_x21 + 4;
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = unaff_x21 + 5;
    func_0x000107c30248();
  }
  func_0x00010b5483dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b548540();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x00010b546c6c();
        unaff_x21[6] = (ulong)param_1;
      }
      else {
        FUN_10b5405bc();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5484f4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x00010b546cd4();
        unaff_x21[7] = (ulong)param_1;
      }
      else {
        FUN_10b540968();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 8) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)((long)unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 9) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)((long)unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 10) = *(int *)(unaff_x20 + 0x50);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | unaff_w23;
  iVar1 = *(int *)(unaff_x20 + 0x60);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[0xc];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x00010b5409bc();
      }
      *(int *)(unaff_x21 + 0xc) = iVar1;
    }
    if (iVar1 == 9) {
      if (iVar2 == 9) {
        param_1 = (ulong *)unaff_x21[0xb];
        FUN_10b5407a0();
      }
      else {
        func_0x00010b546d20();
        unaff_x21[0xb] = (ulong)puVar3;
        param_1 = puVar3;
      }
    }
    else if (iVar1 == 8) {
      func_0x00010b5480a0();
      if (iVar2 != 8) {
        unaff_x21[0xb] = extraout_x8_02;
      }
      uVar6 = *(ulong *)(unaff_x20 + 0x58) & 0xfffffffffffffffc;
      if (*(int *)(unaff_x20 + 0x60) != 8) {
        uVar6 = extraout_x8_02;
      }
      param_1 = unaff_x21 + 0xb;
      func_0x000107c30248(param_1,uVar6,puVar3);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547eb0();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b540e90; end: 10b54107f;  */

void FUN_10b540e90(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  ulong *puVar3;
  ulong *puVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b547ed8();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar3 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010b548560();
    puVar3 = unaff_x22;
  }
  func_0x00010b547f44();
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b548480();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = unaff_x21 + 4;
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = unaff_x21 + 5;
    func_0x000107c30248();
  }
  func_0x00010b5483dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b548540();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x00010b546c6c();
        unaff_x21[6] = (ulong)param_1;
      }
      else {
        FUN_10b5405bc();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5484f4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x00010b546cd4();
        unaff_x21[7] = (ulong)param_1;
      }
      else {
        FUN_10b540968();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 8) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)((long)unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 9) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)((long)unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 10) = *(int *)(unaff_x20 + 0x50);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | unaff_w23;
  iVar1 = *(int *)(unaff_x20 + 0x60);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[0xc];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x00010b5409bc();
      }
      *(int *)(unaff_x21 + 0xc) = iVar1;
    }
    if (iVar1 == 9) {
      if (iVar2 == 9) {
        param_1 = (ulong *)unaff_x21[0xb];
        FUN_10b5407a0();
      }
      else {
        func_0x00010b546d20();
        unaff_x21[0xb] = (ulong)puVar3;
        param_1 = puVar3;
      }
    }
    else if (iVar1 == 8) {
      func_0x00010b5480a0();
      if (iVar2 != 8) {
        unaff_x21[0xb] = extraout_x8_02;
      }
      uVar6 = *(ulong *)(unaff_x20 + 0x58) & 0xfffffffffffffffc;
      if (*(int *)(unaff_x20 + 0x60) != 8) {
        uVar6 = extraout_x8_02;
      }
      param_1 = unaff_x21 + 0xb;
      func_0x000107c30248(param_1,uVar6,puVar3);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547eb0();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b541080; end: 10b5410ab;  */

undefined8 FUN_10b541080(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  return param_1;
}



/* Entry: 10b5410ac; end: 10b5410af;  */

undefined8 FUN_10b5410ac(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  return param_1;
}



/* Entry: 10b5410b0; end: 10b5410c3;  */

void FUN_10b5410b0(void)

{
  FUN_10b541080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5410c4; end: 10b5410cf;  */

undefined ** FUN_10b5410c4(void)

{
  return &PTR_DAT_110d037e8;
}



/* Entry: 10b5410d0; end: 10b541103;  */

void FUN_10b5410d0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
  func_0x00010b548214();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b541104; end: 10b5411db;  */

long * FUN_10b541104(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b547d1c();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b541134;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b541134:
      param_4 = (long *)&UNK_10f778690;
      func_0x00010b547fe4();
      func_0x00010b547d38();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b541184;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b541184;
  param_4 = (long *)&UNK_10f77870e;
  func_0x00010b547fe4();
  func_0x00010b54843c();
  func_0x00010b547dc8();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b541184:
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    func_0x00010b5481e8();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x24) != 0) {
    func_0x00010b548248();
    func_0x0001088bdd44();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b548118();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar4);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10b5411dc; end: 10b541277;  */

long FUN_10b5411dc(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b547d4c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5480ac();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b547e80(0xfffffff7);
    lVar2 = extraout_x9 + lVar2;
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x00010b548500();
    lVar2 = extraout_x8_01 + lVar2;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar1 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar1 = *(long *)(extraout_x9_00 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x28) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b541278; end: 10b54127b;  */

void FUN_10b541278(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  func_0x00010b547f44();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54820c();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b54127c; end: 10b54134b;  */

void FUN_10b54127c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  func_0x00010b547f44();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54820c();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b54134c; end: 10b54137f;  */

long FUN_10b54134c(long param_1)

{
  func_0x00010b547fb4();
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b5412fc(param_1);
  }
  return param_1;
}



/* Entry: 10b541380; end: 10b541383;  */

long FUN_10b541380(long param_1)

{
  func_0x00010b547fb4();
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b5412fc(param_1);
  }
  return param_1;
}



/* Entry: 10b541384; end: 10b541397;  */

void FUN_10b541384(void)

{
  FUN_10b54134c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b541398; end: 10b5413a3;  */

undefined ** FUN_10b541398(void)

{
  return &PTR_DAT_110d03870;
}



/* Entry: 10b5413a4; end: 10b5413d7;  */

void FUN_10b5413a4(long param_1)

{
  ulong *puVar1;
  
  *(undefined2 *)(param_1 + 0x10) = 0;
  func_0x00010b5412fc();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b5413d8; end: 10b541483;  */

long * FUN_10b5413d8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b547ee8();
  uVar2 = (char)param_1[2] == '\x01';
  if ((bool)uVar2) {
    func_0x00010b547da4();
    func_0x00010b548110();
    func_0x00010b547e28();
    param_4 = param_1;
  }
  func_0x00010b548514();
  if ((bool)uVar2) {
    func_0x00010b547da4();
    func_0x00010b5480e0();
    func_0x00010b547e28();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) == 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    param_4 = (long *)0x3;
    func_0x00010b547fac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b541484; end: 10b5414df;  */

long FUN_10b541484(void)

{
  long lVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b548350();
  if (extraout_w8 == 3) {
    lVar1 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5411dc();
    func_0x00010b547cec();
    unaff_x20 = lVar1 + unaff_x20 + extraout_x8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x20) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b5414e0; end: 10b5414e3;  */

void FUN_10b5414e0(ulong *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b547e14();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  bVar2 = *(char *)(unaff_x20 + 0x10) == '\x01';
  if (bVar2) {
    *(undefined1 *)(unaff_x21 + 2) = 1;
  }
  func_0x00010b548514();
  if (bVar2) {
    *(undefined1 *)((long)unaff_x21 + 0x11) = extraout_w8;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 3) {
        param_1 = (ulong *)unaff_x21[3];
        FUN_10b54127c();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        func_0x00010b5412fc();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 3) {
        func_0x00010b548260();
        func_0x00010b546d6c();
        unaff_x21[3] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547eb0();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5414e4; end: 10b54158b;  */

void FUN_10b5414e4(ulong *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b547e14();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  bVar2 = *(char *)(unaff_x20 + 0x10) == '\x01';
  if (bVar2) {
    *(undefined1 *)(unaff_x21 + 2) = 1;
  }
  func_0x00010b548514();
  if (bVar2) {
    *(undefined1 *)((long)unaff_x21 + 0x11) = extraout_w8;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 3) {
        param_1 = (ulong *)unaff_x21[3];
        FUN_10b54127c();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        func_0x00010b5412fc();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 3) {
        func_0x00010b548260();
        func_0x00010b546d6c();
        unaff_x21[3] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547eb0();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b54158c; end: 10b5415e3;  */

long FUN_10b54158c(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b548150();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b540204();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b540a20();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b54134c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5415e4; end: 10b5415e7;  */

long FUN_10b5415e4(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b548150();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b540204();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b540a20();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b54134c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5415e8; end: 10b5415fb;  */

void FUN_10b5415e8(void)

{
  FUN_10b54158c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5415fc; end: 10b541607;  */

undefined ** FUN_10b5415fc(void)

{
  return &PTR_DAT_110d038e8;
}



/* Entry: 10b541608; end: 10b541677;  */

void FUN_10b541608(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b54821c();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b54024c(*(undefined8 *)(unaff_x19 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b540aa4(*(undefined8 *)(unaff_x19 + 0x28));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5413a4(*(undefined8 *)(unaff_x19 + 0x30));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b541678; end: 10b541863;  */

long * FUN_10b541678(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b547f8c();
  if ((int)param_1[7] != 0) {
    func_0x00010b547db0();
    param_2 = param_1;
    func_0x00010b548110();
    func_0x00010b547e54();
    unaff_x21 = param_1;
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5416e8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b5416e8;
  param_4 = (long *)&UNK_10f77878a;
  func_0x00010b547fe4();
  func_0x00010b54843c();
  func_0x00010b547e08();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_10b5416e8:
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    func_0x00010b547db0();
    func_0x00010b5481d0();
    func_0x00010b547e28();
    unaff_x21 = param_1;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    param_1 = (long *)0x4;
    func_0x00010b547f38();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_1 = (long *)0x5;
    func_0x00010b547f38();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x20);
    param_1 = (long *)0x6;
    func_0x00010b547f38();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b548254();
    if ((long)(int)param_3 <= *param_1 - (long)param_4) {
      _memcpy(param_4);
      return (long *)((long)param_4 + (long)(int)param_3);
    }
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  return unaff_x21;
}



/* Entry: 10b541864; end: 10b541963;  */

void FUN_10b541864(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b547ed8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b548560();
    puVar2 = unaff_x22;
  }
  func_0x00010b547f44();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b548480();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5484dc();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b546dbc();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b540198();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b546e24();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b540e90();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b548540();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b546f20();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b5414e4();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  func_0x00010b547e6c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b547eb0();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b541964; end: 10b54198f;  */

undefined8 FUN_10b541964(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  return param_1;
}



/* Entry: 10b541990; end: 10b541993;  */

undefined8 FUN_10b541990(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  return param_1;
}



/* Entry: 10b541994; end: 10b5419a7;  */

void FUN_10b541994(void)

{
  FUN_10b541964();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5419a8; end: 10b5419b3;  */

undefined ** FUN_10b5419a8(void)

{
  return &PTR_DAT_110d03948;
}



/* Entry: 10b5419b4; end: 10b5419eb;  */

void FUN_10b5419b4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
  func_0x00010b548214();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b5419ec; end: 10b541b4b;  */

long * FUN_10b5419ec(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar4;
  undefined8 *unaff_x22;
  int iVar5;
  
  func_0x00010b547f8c();
  if ((char)param_1[4] == '\x01') {
    func_0x00010b547db0();
    param_2 = param_1;
    func_0x00010b548110();
    func_0x00010b547e28();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b547db0();
    unaff_x22 = (undefined8 *)(ulong)*(uint *)(unaff_x20 + 0x24);
    param_2 = param_1;
    func_0x00010b548498();
    func_0x00010b54840c();
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b547db0();
    unaff_x22 = (undefined8 *)(ulong)*(uint *)(unaff_x20 + 0x28);
    plVar2 = (long *)0x1d;
    func_0x000107c280a8();
    func_0x00010b54840c();
    param_2 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b547db0();
    unaff_x22 = (undefined8 *)(ulong)*(uint *)(unaff_x20 + 0x2c);
    param_2 = plVar2;
    func_0x00010b548490();
    func_0x00010b54840c();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x00010b547db0();
    unaff_x22 = (undefined8 *)(ulong)*(uint *)(unaff_x20 + 0x30);
    param_2 = plVar2;
    func_0x00010b548488();
    func_0x00010b54840c();
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x20 + 0x10));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) {
      puVar3 = (undefined8 *)*unaff_x22;
      goto LAB_10b541abc;
    }
  }
  else {
    puVar3 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b541abc:
      param_4 = (long *)&UNK_10f7787d0;
      func_0x00010b547fe4(puVar3);
      param_2 = (long *)0x6;
      plVar2 = unaff_x19;
      func_0x00010b547e08();
      unaff_x21 = plVar2;
    }
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b541b18;
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b541b18;
  param_4 = (long *)&UNK_10f778824;
  func_0x00010b547fe4(unaff_x22);
  func_0x00010b547e08();
  plVar2 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10b541b18:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b548024();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b548254();
  if (*plVar2 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b541b4c; end: 10b541bff;  */

void FUN_10b541b4c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b547d4c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5480ac();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2;
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    iVar1 = iVar1 + 5;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    iVar1 = iVar1 + 5;
  }
  if (*(int *)(unaff_x19 + 0x2c) != 0) {
    iVar1 = iVar1 + 5;
  }
  if (*(int *)(unaff_x19 + 0x30) != 0) {
    iVar1 = iVar1 + 5;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x34) = iVar1;
  return;
}



/* Entry: 10b541c00; end: 10b541c03;  */

void FUN_10b541c00(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  func_0x00010b547f44();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54820c();
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b541c04; end: 10b541cbb;  */

void FUN_10b541c04(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  func_0x00010b547f44();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54820c();
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b541cbc; end: 10b541ce7;  */

undefined8 FUN_10b541cbc(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  return param_1;
}



/* Entry: 10b541ce8; end: 10b541ceb;  */

undefined8 FUN_10b541ce8(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  return param_1;
}



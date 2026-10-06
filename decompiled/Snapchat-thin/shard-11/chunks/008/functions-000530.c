/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108916110; end: 10891613b;  */

undefined8 FUN_108916110(undefined8 param_1)

{
  func_0x000108916b10();
  FUN_10891613c(param_1);
  return param_1;
}



/* Entry: 10891613c; end: 10891617b;  */

long FUN_10891613c(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (0 < *(int *)(param_1 + 0x1c)) {
    FUN_1088f267c(param_1 + 0x18);
  }
  return param_1 + 0x18;
}



/* Entry: 10891617c; end: 10891617f;  */

undefined8 FUN_10891617c(undefined8 param_1)

{
  func_0x000108916b10();
  FUN_10891613c(param_1);
  return param_1;
}



/* Entry: 108916180; end: 108916193;  */

void FUN_108916180(void)

{
  FUN_108916110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108916194; end: 10891619f;  */

undefined ** FUN_108916194(void)

{
  return &PTR_DAT_110a943e0;
}



/* Entry: 1089161a0; end: 1089161f7;  */

void FUN_1089161a0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1089161f8; end: 1089162fb;  */

byte * FUN_1089161f8(byte *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *unaff_x19;
  long unaff_x20;
  uint uVar7;
  int iVar8;
  ulong *puVar9;
  int iVar10;
  
  func_0x000108916af8();
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_1 = (byte *)0x1;
    func_0x000108916af0(1,*(long *)(unaff_x20 + 0x30),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x18));
    param_4 = param_1;
  }
  uVar7 = *(uint *)(unaff_x20 + 0x28);
  if (0 < (int)uVar7) {
    func_0x000108916a94();
    pbVar4 = param_1 + 2;
    *param_1 = 0x12;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar4[-1] = (byte)uVar7 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar7;
    puVar9 = *(ulong **)(unaff_x20 + 0x20);
    puVar1 = puVar9 + *(int *)(unaff_x20 + 0x18);
    do {
      func_0x000108916a94();
      uVar5 = *puVar9;
      pbVar4 = param_1;
      while( true ) {
        param_4 = pbVar4 + 1;
        if (uVar5 < 0x80) break;
        *pbVar4 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar4 = param_4;
      }
      puVar9 = puVar9 + 1;
      *pbVar4 = (byte)uVar5;
    } while (puVar9 < puVar1);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_4 = (byte *)0x3;
    func_0x000108916af0(3,*(long *)(unaff_x20 + 0x38),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar3 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar3 = uVar6 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)uVar5) {
      while( true ) {
        iVar10 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar8 = (int)uVar5;
        uVar2 = iVar8 - iVar10;
        uVar5 = (ulong)uVar2;
        if (uVar2 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return param_4 + iVar8;
    }
    _memcpy(param_4,lVar3,uVar5 & 0xffffffff);
    return param_4 + (int)uVar5;
  }
  return param_4;
}



/* Entry: 1089162fc; end: 1089163a3;  */

long FUN_1089162fc(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x18;
  func_0x00010b4d3edc();
  *(int *)(param_1 + 0x28) = (int)lVar2;
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = lVar4 + lVar2;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      func_0x000107c2a268();
      lVar4 = lVar4 + lVar2 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      func_0x000107c2a268();
      lVar4 = lVar4 + lVar2 + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 1089163a4; end: 10891645b;  */

void FUN_1089163a4(void)

{
  uint uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x000108916b24();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_1088f1584(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        uVar2 = unaff_x22;
        func_0x000107c2a26c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x30));
        *(ulong *)(unaff_x21 + 0x30) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x38) == 0) {
        func_0x000107c2a26c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x38));
        *(ulong *)(unaff_x21 + 0x38) = unaff_x22;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10891645c; end: 1089164af;  */

void FUN_10891645c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        func_0x000107c2a5a4();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 1089164b0; end: 1089164e3;  */

long FUN_1089164b0(long param_1)

{
  func_0x000108916b10();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10891645c(param_1);
  }
  return param_1;
}



/* Entry: 1089164e4; end: 1089164e7;  */

long FUN_1089164e4(long param_1)

{
  func_0x000108916b10();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10891645c(param_1);
  }
  return param_1;
}



/* Entry: 1089164e8; end: 1089164fb;  */

void FUN_1089164e8(void)

{
  FUN_1089164b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089164fc; end: 108916507;  */

undefined ** FUN_1089164fc(void)

{
  return &PTR_DAT_110a94430;
}



/* Entry: 108916508; end: 10891653b;  */

void FUN_108916508(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_10891645c();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10891653c; end: 10891661b;  */

long * FUN_10891653c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  func_0x000108916af8();
  plVar6 = param_1;
  if (param_1[2] != 0) {
    func_0x000108916a94();
    plVar6 = *(long **)(unaff_x20 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280ac(plVar6,uVar2);
    param_4 = plVar6;
  }
  if (*(int *)(unaff_x20 + 0x24) == 3) {
    func_0x000108916a94();
    if (*(int *)(unaff_x20 + 0x24) == 3) {
      param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x18);
    }
    else {
      param_4 = (long *)0x0;
    }
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,plVar6);
    func_0x000107c280a8(param_4,uVar2);
  }
  else if (*(int *)(unaff_x20 + 0x24) == 2) {
    param_4 = (long *)0x2;
    func_0x000108916af0(2,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar4;
        uVar1 = iVar7 - iVar8;
        uVar4 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 10891661c; end: 1089166a7;  */

ulong FUN_10891661c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar3 = uVar3 + 2;
  }
  else if (*(int *)(param_1 + 0x24) == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_1088f34c8();
    uVar3 = uVar3 + lVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    uVar3 = lVar1 + uVar3;
  }
  *(int *)(param_1 + 0x20) = (int)uVar3;
  return uVar3;
}



/* Entry: 1089166a8; end: 108916777;  */

void FUN_1089166a8(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x000108916b24();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    *(long *)(unaff_x21 + 0x10) = *(long *)(unaff_x20 + 0x10);
  }
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x24);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10891645c();
      }
      *(int *)(unaff_x21 + 0x24) = iVar2;
    }
    if (iVar2 == 3) {
      *(undefined1 *)(unaff_x21 + 0x18) = *(undefined1 *)(unaff_x20 + 0x18);
    }
    else if (iVar2 == 2) {
      if (iVar3 == 2) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
        if (*(int *)(unaff_x20 + 0x24) != 2) {
          ppuVar1 = &PTR_PTR_113286f90;
        }
        FUN_10891988c(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      }
      else {
        func_0x0001088f38e0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108916778; end: 1089167a3;  */

long FUN_108916778(long param_1)

{
  func_0x000108916b10();
  FUN_108916998(param_1 + 0x10);
  return param_1;
}



/* Entry: 1089167a4; end: 1089167a7;  */

long FUN_1089167a4(long param_1)

{
  func_0x000108916b10();
  FUN_108916998(param_1 + 0x10);
  return param_1;
}



/* Entry: 1089167a8; end: 1089167bb;  */

void FUN_1089167a8(void)

{
  FUN_108916778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089167bc; end: 1089167c7;  */

undefined ** FUN_1089167bc(void)

{
  return &PTR_DAT_110a94490;
}



/* Entry: 1089167c8; end: 108916807;  */

void FUN_1089167c8(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 108916808; end: 10891692f;  */

long * FUN_108916808(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x000108916af8();
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    param_4 = (long *)0x1;
    func_0x000108916af0(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)uVar4;
        uVar2 = iVar6 - iVar7;
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 108916930; end: 10891697f;  */

void FUN_108916930(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108916980; end: 108916997;  */

void FUN_108916980(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0x40;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0(param_2,0x40);
  }
  func_0x000108916b38(&PTR_FUN_110a94300);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 108916998; end: 1089169c7;  */

long * FUN_108916998(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1089169c8; end: 108916a93;  */

void FUN_1089169c8(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x40;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0(param_1,0x40);
  }
  func_0x000108916b38(&PTR_FUN_110a94300);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 108916a94; end: 108916b4b;  */

ulong * FUN_108916a94(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 108916b4c; end: 108916ccf;  */

void FUN_108916b4c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_108917820();
    }
    break;
  default:
    goto LAB_108916c64;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c2a5a4();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10891b058();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1088f9390();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1088fc38c();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1089176a0();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_108917e78();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1089172fc();
    }
  }
  __ZdlPv();
LAB_108916c64:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 108916cd0; end: 108916cfb;  */

undefined8 FUN_108916cd0(undefined8 param_1)

{
  func_0x0001089189dc();
  FUN_108916cfc(param_1);
  return param_1;
}



/* Entry: 108916cfc; end: 108916d0f;  */

void FUN_108916cfc(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_108917820();
    }
    break;
  default:
    goto LAB_108916c64;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c2a5a4();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10891b058();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1088f9390();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1088fc38c();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1089176a0();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_108917e78();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_108916c64;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1089172fc();
    }
  }
  __ZdlPv();
LAB_108916c64:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 108916d10; end: 108916d23;  */

void FUN_108916d10(void)

{
  FUN_108916cd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108916d24; end: 108916d3f;  */

undefined8 FUN_108916d24(undefined8 param_1)

{
  func_0x0001089189dc();
  FUN_10891784c(param_1);
  return param_1;
}



/* Entry: 108916d40; end: 108916eb3;  */

void FUN_108916d40(long param_1)

{
  ulong *puVar1;
  
  FUN_108916b4c();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 108916eb4; end: 108917153;  */

void FUN_108916eb4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x000108918970();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108918b28();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_108916b4c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x000108918918();
        func_0x0001089170bc();
        goto LAB_1089170a0;
      }
      func_0x000108918a00();
      FUN_108918504();
      break;
    default:
      goto LAB_1089170a0;
    case 3:
      if (iVar2 == iVar1) {
        func_0x000108918918();
        FUN_10891988c();
        goto LAB_1089170a0;
      }
      func_0x000108918a00();
      func_0x0001088f38e0();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x000108918918();
        FUN_10891b2ac();
        goto LAB_1089170a0;
      }
      func_0x000108918a00();
      func_0x000108918590();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x000108918918();
        FUN_1088f954c();
        goto LAB_1089170a0;
      }
      func_0x000108918a00();
      func_0x0001089185d0();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x000108918918();
        FUN_1088fc698();
        goto LAB_1089170a0;
      }
      func_0x000108918a00();
      FUN_1089015e0();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x000108918918();
        FUN_108917154();
        goto LAB_1089170a0;
      }
      func_0x000108918a00();
      FUN_108918608();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x000108918918();
        FUN_1089171bc();
        goto LAB_1089170a0;
      }
      func_0x000108918a00();
      FUN_108918674();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x000108918918();
        FUN_108917294();
        goto LAB_1089170a0;
      }
      func_0x000108918a00();
      FUN_1089186b4();
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_1089170a0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108918980();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108917154; end: 1089171bb;  */

void FUN_108917154(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108918970();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x0001088b6ce4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_108905d54();
      puVar1 = puVar2;
    }
  }
  func_0x000108918a74();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108918980();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1089171bc; end: 108917293;  */

void FUN_1089171bc(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x000108918970();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000108918b28();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_108915a40();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_108927928();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000107c2a26c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x000108918848();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_108917c2c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x000108918b48();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000108918980();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108917294; end: 1089172fb;  */

void FUN_108917294(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108918970();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000108918720();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_108917490();
      puVar1 = puVar2;
    }
  }
  func_0x000108918a74();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108918980();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1089172fc; end: 108917327;  */

undefined8 FUN_1089172fc(undefined8 param_1)

{
  func_0x0001089189dc();
  FUN_108917328(param_1);
  return param_1;
}



/* Entry: 108917328; end: 108917357;  */

void FUN_108917328(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_108917538();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108917358; end: 108917363;  */

undefined ** FUN_108917358(void)

{
  return &PTR_DAT_110a94840;
}



/* Entry: 108917364; end: 10891748b;  */

void FUN_108917364(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108918ab0();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089173a0(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10891748c; end: 10891748f;  */

void FUN_10891748c(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108918970();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000108918720();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_108917490();
      puVar1 = puVar2;
    }
  }
  func_0x000108918a74();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108918980();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108917490; end: 108917503;  */

void FUN_108917490(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108918970();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088bf398();
      puVar1 = puVar2;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x000108918a74();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108918980();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108917504; end: 108917533;  */

void FUN_108917504(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108918a88();
  FUN_108917364();
  func_0x000108918b5c();
  func_0x000108918970();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000108918720();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_108917490();
      puVar1 = puVar2;
    }
  }
  func_0x000108918a74();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108918980();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108917534; end: 108917537;  */

void FUN_108917534(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  return;
}



/* Entry: 108917538; end: 108917563;  */

undefined8 FUN_108917538(undefined8 param_1)

{
  func_0x0001089189dc();
  FUN_108917564(param_1);
  return param_1;
}



/* Entry: 108917564; end: 10891757f;  */

void FUN_108917564(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108917580; end: 108917583;  */

undefined8 FUN_108917580(undefined8 param_1)

{
  func_0x0001089189dc();
  FUN_108917564(param_1);
  return param_1;
}



/* Entry: 108917584; end: 108917597;  */

void FUN_108917584(void)

{
  FUN_108917538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108917598; end: 1089175a3;  */

undefined ** FUN_108917598(void)

{
  return &PTR_DAT_110a94888;
}



/* Entry: 1089175a4; end: 10891762b;  */

long * FUN_1089175a4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108918928();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_1 = (long *)0x1;
    func_0x0001089189d4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000108918b04();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x000108918b10();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108918a3c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10891762c; end: 10891769b;  */

void FUN_10891762c(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108918ab0();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x000107c2a268();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108918a30();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10891769c; end: 10891769f;  */

void FUN_10891769c(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108918970();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088bf398();
      puVar1 = puVar2;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x000108918a74();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108918980();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1089176a0; end: 1089176cb;  */

undefined8 FUN_1089176a0(undefined8 param_1)

{
  func_0x0001089189dc();
  FUN_1089176cc(param_1);
  return param_1;
}



/* Entry: 1089176cc; end: 1089176fb;  */

void FUN_1089176cc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1089058f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089176fc; end: 108917707;  */

undefined ** FUN_1089176fc(void)

{
  return &PTR_DAT_110a948d8;
}



/* Entry: 108917708; end: 1089177e7;  */

void FUN_108917708(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108918ab0();
  if ((extraout_x8 & 1) != 0) {
    FUN_108905998(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1089177e8; end: 1089177eb;  */

void FUN_1089177e8(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108918970();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x0001088b6ce4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_108905d54();
      puVar1 = puVar2;
    }
  }
  func_0x000108918a74();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108918980();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1089177ec; end: 10891781b;  */

void FUN_1089177ec(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108918a88();
  FUN_108917708();
  func_0x000108918b5c();
  func_0x000108918970();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x0001088b6ce4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_108905d54();
      puVar1 = puVar2;
    }
  }
  func_0x000108918a74();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108918980();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891781c; end: 10891781f;  */

void FUN_10891781c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  return;
}



/* Entry: 108917820; end: 10891784b;  */

undefined8 FUN_108917820(undefined8 param_1)

{
  func_0x0001089189dc();
  FUN_10891784c(param_1);
  return param_1;
}



/* Entry: 10891784c; end: 108917883;  */

void FUN_10891784c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a5a4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10892a544();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108917884; end: 108917897;  */

void FUN_108917884(void)

{
  FUN_108917820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108917898; end: 1089178a3;  */

undefined ** FUN_108917898(void)

{
  return &PTR_DAT_110a94928;
}



/* Entry: 1089178a4; end: 1089178f7;  */

void FUN_1089178a4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c2a5a8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10892a600(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1089178f8; end: 1089179eb;  */

long * FUN_1089178f8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108918928();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001089188ec();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)0x2;
    func_0x0001089189d4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108918a3c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1089179ec; end: 1089179ef;  */

void FUN_1089179ec(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x000108918970();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000108918b28();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088f38e0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10891988c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_108901388();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10892a898();
      }
    }
  }
  func_0x000108918b48();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000108918980();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1089179f0; end: 108917a1f;  */

void FUN_1089179f0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108918a88();
  FUN_1089178a4();
  func_0x000108918b5c();
  func_0x000108918970();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000108918b28();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088f38e0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10891988c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_108901388();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10892a898();
      }
    }
  }
  func_0x000108918b48();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000108918980();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108917a20; end: 108917a37;  */

undefined1  [16] FUN_108917a20(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  func_0x000108918a0c();
  puVar3 = (undefined1 *)(param_2 + 0x18);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x18); puVar2 != (undefined1 *)(param_1 + 0x28);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar5;
}



/* Entry: 108917a38; end: 108917ab7;  */

void FUN_108917a38(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_108917a94;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10891826c();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_108917a94;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_108917a94;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_108918134();
    }
  }
  __ZdlPv();
LAB_108917a94:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 108917ab8; end: 108917ae3;  */

undefined8 FUN_108917ab8(undefined8 param_1)

{
  func_0x0001089189dc();
  FUN_108917ae4(param_1);
  return param_1;
}



/* Entry: 108917ae4; end: 108917af7;  */

void FUN_108917ae4(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_108917a94;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10891826c();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_108917a94;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089189f4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_108917a94;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_108918134();
    }
  }
  __ZdlPv();
LAB_108917a94:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 108917af8; end: 108917b0b;  */

void FUN_108917af8(void)

{
  FUN_108917ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108917b0c; end: 108917b1f;  */

long FUN_108917b0c(long param_1)

{
  func_0x0001089189dc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 108917b20; end: 108917c27;  */

void FUN_108917b20(long param_1)

{
  ulong *puVar1;
  
  FUN_108917a38();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 108917c28; end: 108917c2b;  */

void FUN_108917c28(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x000108918970();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108918b28();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_108917ce4;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_108917a38();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x000108918918();
      func_0x000108917d68();
      goto LAB_108917ce4;
    }
    func_0x000108918a00();
    func_0x0001089187f4();
  }
  else {
    if (iVar1 != 1) goto LAB_108917ce4;
    if (iVar2 == 1) {
      func_0x000108918918();
      FUN_108917d00();
      goto LAB_108917ce4;
    }
    func_0x000108918a00();
    func_0x0001089187a0();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_108917ce4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108918980();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108917c2c; end: 108917cff;  */

void FUN_108917c2c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x000108918970();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108918b28();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_108917ce4;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_108917a38();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x000108918918();
      func_0x000108917d68();
      goto LAB_108917ce4;
    }
    func_0x000108918a00();
    func_0x0001089187f4();
  }
  else {
    if (iVar1 != 1) goto LAB_108917ce4;
    if (iVar2 == 1) {
      func_0x000108918918();
      FUN_108917d00();
      goto LAB_108917ce4;
    }
    func_0x000108918a00();
    func_0x0001089187a0();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_108917ce4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108918980();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108917d00; end: 108917dcf;  */

void FUN_108917d00(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108918a94();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108917dd0; end: 108917e77;  */

undefined8 * FUN_108917dd0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a94678;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010891890c();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_108915a40(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108918848(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  param_1[6] = *(undefined8 *)(param_3 + 0x30);
  return param_1;
}



/* Entry: 108917e78; end: 108917ea3;  */

undefined8 FUN_108917e78(undefined8 param_1)

{
  func_0x0001089189dc();
  FUN_108917ea4(param_1);
  return param_1;
}



/* Entry: 108917ea4; end: 108917eeb;  */

void FUN_108917ea4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_108927694();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_108917ab8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108917eec; end: 108917eff;  */

void FUN_108917eec(void)

{
  FUN_108917e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108917f00; end: 108917f0b;  */

undefined ** FUN_108917f00(void)

{
  return &PTR_DAT_110a949d8;
}



/* Entry: 108917f0c; end: 108917f7b;  */

void FUN_108917f0c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_108927704(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_108917b20(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 108917f7c; end: 1089180e7;  */

long * FUN_108917f7c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108918928();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001089188ec();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_1 = (long *)0x2;
    func_0x0001089189d4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000108918b04();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x000108918b10();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x18);
    param_4 = (long *)0x4;
    func_0x0001089189d4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108918a3c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1089180e8; end: 1089180eb;  */

void FUN_1089180e8(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x000108918970();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000108918b28();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_108915a40();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_108927928();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000107c2a26c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x000108918848();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_108917c2c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x000108918b48();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000108918980();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1089180ec; end: 10891811b;  */

void FUN_1089180ec(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108918a88();
  FUN_108917f0c();
  func_0x000108918b5c();
  func_0x000108918970();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000108918b28();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_108915a40();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_108927928();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000107c2a26c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x000108918848();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_108917c2c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x000108918b48();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000108918980();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10891811c; end: 108918133;  */

undefined1  [16] FUN_10891811c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  func_0x000108918a0c();
  puVar3 = (undefined1 *)(param_2 + 0x18);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x18); puVar2 != (undefined1 *)(param_1 + 0x38);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = (undefined1 *)(param_1 + 0x38);
  return auVar5;
}



/* Entry: 108918134; end: 10891815f;  */

long FUN_108918134(long param_1)

{
  func_0x0001089189dc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 108918160; end: 108918173;  */

void FUN_108918160(void)

{
  FUN_108918134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108918174; end: 10891817f;  */

undefined ** FUN_108918174(void)

{
  return &PTR_DAT_110a94a28;
}



/* Entry: 108918180; end: 108918267;  */

void FUN_108918180(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108918b1c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 108918268; end: 10891826b;  */

void FUN_108918268(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108918a94();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891826c; end: 108918297;  */

long FUN_10891826c(long param_1)

{
  func_0x0001089189dc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 108918298; end: 1089182ab;  */

void FUN_108918298(void)

{
  FUN_10891826c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089182ac; end: 1089182b7;  */

undefined ** FUN_1089182ac(void)

{
  return &PTR_DAT_110a94a80;
}



/* Entry: 1089182b8; end: 10891839f;  */

void FUN_1089182b8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108918b1c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1089183a0; end: 1089183eb;  */

void FUN_1089183a0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108918a94();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



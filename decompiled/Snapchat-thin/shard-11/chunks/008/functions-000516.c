/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088f2ad8; end: 1088f2b4b;  */

undefined8 * FUN_1088f2ad8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a8c1a8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1088f1b2c();
  return puVar1;
}



/* Entry: 1088f2b4c; end: 1088f2b8b;  */

long FUN_1088f2b4c(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w22;
  
  func_0x0001088f2e0c();
  if (param_1 == 0) {
    unaff_x20 = 0x28;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0();
  }
  func_0x000108924924();
  func_0x000107c34a44(&PTR_DAT_110a95fa0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924e18();
  if ((unaff_w22 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000108924ca4();
    func_0x000107c2a558();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
  if ((unaff_w22 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000108924e0c();
    func_0x000107c2a558();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1088f2b8c; end: 1088f2ee3;  */

long FUN_1088f2b8c(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1088f2ee4; end: 1088f2eff;  */

void FUN_1088f2ee4(long param_1)

{
  func_0x0001088f27f0(param_1 + 0x18);
  return;
}



/* Entry: 1088f2f00; end: 1088f2f17;  */

void FUN_1088f2f00(void)

{
  return;
}



/* Entry: 1088f2f18; end: 1088f2f43;  */

undefined8 FUN_1088f2f18(undefined8 param_1)

{
  func_0x0001088f39a0();
  FUN_1088f2f44(param_1);
  return param_1;
}



/* Entry: 1088f2f44; end: 1088f2f83;  */

long FUN_1088f2f44(long param_1)

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



/* Entry: 1088f2f84; end: 1088f2f87;  */

undefined8 FUN_1088f2f84(undefined8 param_1)

{
  func_0x0001088f39a0();
  FUN_1088f2f44(param_1);
  return param_1;
}



/* Entry: 1088f2f88; end: 1088f2f9b;  */

void FUN_1088f2f88(void)

{
  FUN_1088f2f18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f2f9c; end: 1088f2fa7;  */

undefined ** FUN_1088f2f9c(void)

{
  return &PTR_DAT_110a8cbf8;
}



/* Entry: 1088f2fa8; end: 1088f2fff;  */

void FUN_1088f2fa8(long param_1)

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



/* Entry: 1088f3000; end: 1088f3103;  */

byte * FUN_1088f3000(byte *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

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
  
  func_0x0001088f3988();
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_1 = (byte *)0x1;
    func_0x0001088f3980(1,*(long *)(unaff_x20 + 0x30),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x18));
    param_4 = param_1;
  }
  uVar7 = *(uint *)(unaff_x20 + 0x28);
  if (0 < (int)uVar7) {
    func_0x0001088f3924();
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
      func_0x0001088f3924();
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
    func_0x0001088f3980(3,*(long *)(unaff_x20 + 0x38),
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



/* Entry: 1088f3104; end: 1088f31ab;  */

long FUN_1088f3104(long param_1)

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



/* Entry: 1088f31ac; end: 1088f3263;  */

void FUN_1088f31ac(void)

{
  uint uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f39c8();
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



/* Entry: 1088f3264; end: 1088f32b7;  */

void FUN_1088f3264(long param_1)

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



/* Entry: 1088f32b8; end: 1088f32eb;  */

long FUN_1088f32b8(long param_1)

{
  func_0x0001088f39a0();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1088f3264(param_1);
  }
  return param_1;
}



/* Entry: 1088f32ec; end: 1088f32ef;  */

long FUN_1088f32ec(long param_1)

{
  func_0x0001088f39a0();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1088f3264(param_1);
  }
  return param_1;
}



/* Entry: 1088f32f0; end: 1088f3303;  */

void FUN_1088f32f0(void)

{
  FUN_1088f32b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f3304; end: 1088f330f;  */

undefined ** FUN_1088f3304(void)

{
  return &PTR_DAT_110a8cc50;
}



/* Entry: 1088f3310; end: 1088f3343;  */

void FUN_1088f3310(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1088f3264();
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



/* Entry: 1088f3344; end: 1088f3423;  */

long * FUN_1088f3344(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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
  
  func_0x0001088f3988();
  plVar6 = param_1;
  if (param_1[2] != 0) {
    func_0x0001088f3924();
    plVar6 = *(long **)(unaff_x20 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280ac(plVar6,uVar2);
    param_4 = plVar6;
  }
  if (*(int *)(unaff_x20 + 0x24) == 3) {
    func_0x0001088f3924();
    if (*(int *)(unaff_x20 + 0x24) == 3) {
      param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x18);
    }
    else {
      param_4 = (long *)0x0;
    }
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,plVar6);
    func_0x000107c280b8(param_4,uVar2);
  }
  else if (*(int *)(unaff_x20 + 0x24) == 2) {
    param_4 = (long *)0x2;
    func_0x0001088f3980(2,*(long *)(unaff_x20 + 0x18),
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



/* Entry: 1088f3424; end: 1088f34c7;  */

ulong FUN_1088f3424(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6);
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_1088f3498;
    uVar1 = *(ulong *)(param_1 + 0x18);
    FUN_1088f34c8();
  }
  uVar3 = uVar3 + uVar1 + 1;
LAB_1088f3498:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    uVar3 = lVar2 + uVar3;
  }
  *(int *)(param_1 + 0x20) = (int)uVar3;
  return uVar3;
}



/* Entry: 1088f34c8; end: 1088f34f3;  */

long FUN_1088f34c8(long param_1)

{
  func_0x000108919718();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1088f34f4; end: 1088f35c3;  */

void FUN_1088f34f4(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f39c8();
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
        FUN_1088f3264();
      }
      *(int *)(unaff_x21 + 0x24) = iVar2;
    }
    if (iVar2 == 3) {
      *(undefined4 *)(unaff_x21 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
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



/* Entry: 1088f35c4; end: 1088f35ef;  */

long FUN_1088f35c4(long param_1)

{
  func_0x0001088f39a0();
  FUN_1088f37e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088f35f0; end: 1088f35f3;  */

long FUN_1088f35f0(long param_1)

{
  func_0x0001088f39a0();
  FUN_1088f37e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088f35f4; end: 1088f3607;  */

void FUN_1088f35f4(void)

{
  FUN_1088f35c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f3608; end: 1088f3613;  */

undefined ** FUN_1088f3608(void)

{
  return &PTR_DAT_110a8ccb8;
}



/* Entry: 1088f3614; end: 1088f3653;  */

void FUN_1088f3614(long param_1)

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



/* Entry: 1088f3654; end: 1088f377b;  */

long * FUN_1088f3654(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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
  
  func_0x0001088f3988();
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    param_4 = (long *)0x1;
    func_0x0001088f3980(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20));
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



/* Entry: 1088f377c; end: 1088f37cb;  */

void FUN_1088f377c(long param_1,long param_2)

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



/* Entry: 1088f37cc; end: 1088f37e3;  */

void FUN_1088f37cc(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0x40;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0(param_2,0x40);
  }
  func_0x0001088f39b4(&PTR_FUN_110a8cb18);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 1088f37e4; end: 1088f3813;  */

long * FUN_1088f37e4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1088f3814; end: 1088f3923;  */

void FUN_1088f3814(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x40;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0(param_1,0x40);
  }
  func_0x0001088f39b4(&PTR_FUN_110a8cb18);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1088f3924; end: 1088f39db;  */

ulong * FUN_1088f3924(void)

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



/* Entry: 1088f39dc; end: 1088f3a2f;  */

void FUN_1088f39dc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_1088f3d1c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1088f3a30; end: 1088f3a67;  */

long FUN_1088f3a30(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088f39dc(param_1);
  }
  return param_1;
}



/* Entry: 1088f3a68; end: 1088f3a6b;  */

long FUN_1088f3a68(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088f39dc(param_1);
  }
  return param_1;
}



/* Entry: 1088f3a6c; end: 1088f3a7f;  */

void FUN_1088f3a6c(void)

{
  FUN_1088f3a30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f3a80; end: 1088f3a8f;  */

long FUN_1088f3a80(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f3a90; end: 1088f3b8f;  */

void FUN_1088f3a90(long param_1)

{
  ulong *puVar1;
  
  FUN_1088f39dc();
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



/* Entry: 1088f3b90; end: 1088f3bbb;  */

long FUN_1088f3b90(long param_1)

{
  FUN_1088f3e64();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1088f3bbc; end: 1088f3c7b;  */

void FUN_1088f3bbc(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        FUN_1088f3c7c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_1088f39dc(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_1088f3f80(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
      }
    }
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



/* Entry: 1088f3c7c; end: 1088f3d1b;  */

void FUN_1088f3c7c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x000107c2a26c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1088bf398(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 1088f3d1c; end: 1088f3d53;  */

long FUN_1088f3d1c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f3d54; end: 1088f3d67;  */

void FUN_1088f3d54(void)

{
  FUN_1088f3d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f3d68; end: 1088f3d73;  */

undefined ** FUN_1088f3d68(void)

{
  return &PTR_DAT_110a8ce50;
}



/* Entry: 1088f3d74; end: 1088f3dbb;  */

void FUN_1088f3d74(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1088bf358(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 1088f3dbc; end: 1088f3e63;  */

long * FUN_1088f3dbc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = param_1;
    func_0x0001088f401c(param_1,param_1[3],*(undefined4 *)(param_1[3] + 0x18));
  }
  if ((int)param_1[4] != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 4);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 1088f3e64; end: 1088f3edf;  */

void FUN_1088f3e64(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x000107c2a268();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 1088f3ee0; end: 1088f3ef3;  */

void FUN_1088f3ee0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x000107c2a26c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1088bf398(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 1088f3ef4; end: 1088f3f7f;  */

void FUN_1088f3ef4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a8cd68;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1088f3f80; end: 1088f4013;  */

undefined8 * FUN_1088f3f80(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110a8cd68;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c2a26c(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20);
  return puVar2;
}



/* Entry: 1088f4014; end: 1088f403b;  */

void FUN_1088f4014(void)

{
  return;
}



/* Entry: 1088f403c; end: 1088f4067;  */

undefined8 FUN_1088f403c(undefined8 param_1)

{
  func_0x0001088f44d8();
  FUN_1088f4068(param_1);
  return param_1;
}



/* Entry: 1088f4068; end: 1088f4083;  */

void FUN_1088f4068(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088f42d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f4084; end: 1088f4087;  */

undefined8 FUN_1088f4084(undefined8 param_1)

{
  func_0x0001088f44d8();
  FUN_1088f4068(param_1);
  return param_1;
}



/* Entry: 1088f4088; end: 1088f409b;  */

void FUN_1088f4088(void)

{
  FUN_1088f403c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f409c; end: 1088f40a7;  */

undefined ** FUN_1088f409c(void)

{
  return &PTR_DAT_110a8cf68;
}



/* Entry: 1088f40a8; end: 1088f41fb;  */

void FUN_1088f40a8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088f4524();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f40ec(*(undefined8 *)(unaff_x19 + 0x18));
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



/* Entry: 1088f41fc; end: 1088f42d3;  */

void FUN_1088f41fc(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088f4544();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_1088f4444();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088f4268(*(long *)(unaff_x21 + 0x18));
    }
  }
  func_0x0001088f4510();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 1088f42d4; end: 1088f42ff;  */

undefined8 FUN_1088f42d4(undefined8 param_1)

{
  func_0x0001088f44d8();
  FUN_1088f4300(param_1);
  return param_1;
}



/* Entry: 1088f4300; end: 1088f431b;  */

void FUN_1088f4300(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f431c; end: 1088f431f;  */

undefined8 FUN_1088f431c(undefined8 param_1)

{
  func_0x0001088f44d8();
  FUN_1088f4300(param_1);
  return param_1;
}



/* Entry: 1088f4320; end: 1088f4333;  */

void FUN_1088f4320(void)

{
  FUN_1088f42d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f4334; end: 1088f433f;  */

undefined ** FUN_1088f4334(void)

{
  return &PTR_DAT_110a8cfc8;
}



/* Entry: 1088f4340; end: 1088f43f3;  */

long * FUN_1088f4340(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0001088f4530();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f44e0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar5 = (int)uVar3;
      uVar1 = iVar5 - iVar6;
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)uVar3);
}



/* Entry: 1088f43f4; end: 1088f4407;  */

void FUN_1088f43f4(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088f4544();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x000107c2a26c();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      FUN_1088bf398(*(long *)(unaff_x21 + 0x18));
    }
  }
  func_0x0001088f4510();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 1088f4408; end: 1088f4443;  */

void FUN_1088f4408(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x0001088f4504();
  }
  *puVar1 = &PTR_FUN_110a8cf28;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 1088f4444; end: 1088f44cf;  */

undefined8 * FUN_1088f4444(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x0001088f4504();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110a8ced8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c2a26c(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  return puVar2;
}



/* Entry: 1088f44d0; end: 1088f4557;  */

void FUN_1088f44d0(void)

{
  return;
}



/* Entry: 1088f4558; end: 1088f457b;  */

undefined8 FUN_1088f4558(undefined8 param_1)

{
  func_0x000107c348e0();
  return param_1;
}



/* Entry: 1088f457c; end: 1088f457f;  */

undefined8 FUN_1088f457c(undefined8 param_1)

{
  func_0x000107c348e0();
  return param_1;
}



/* Entry: 1088f4580; end: 1088f4593;  */

void FUN_1088f4580(void)

{
  FUN_1088f4558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f4594; end: 1088f45b3;  */

undefined ** FUN_1088f4594(void)

{
  return &PTR_DAT_110a8d638;
}



/* Entry: 1088f45b4; end: 1088f461b;  */

long * FUN_1088f45b4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if (param_1[2] != 0) {
    func_0x0001088f83a4();
    func_0x0001088f8588();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088f8544();
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



/* Entry: 1088f461c; end: 1088f4667;  */

long FUN_1088f461c(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0001088f8794();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088f4668; end: 1088f4697;  */

void FUN_1088f4668(long param_1)

{
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_1088b8704();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffdf;
  return;
}



/* Entry: 1088f4698; end: 1088f469b;  */

undefined8 FUN_1088f4698(undefined8 param_1)

{
  func_0x00010066b60c();
  func_0x00010066b640(param_1);
  return param_1;
}



/* Entry: 1088f469c; end: 1088f46af;  */

void FUN_1088f469c(void)

{
  func_0x000107c2a3a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f46b0; end: 1088f470f;  */

void FUN_1088f46b0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c34940();
  FUN_1086ebb04();
  FUN_1086ebb04(unaff_x19 + 0x30);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088f6670(*(undefined8 *)(unaff_x19 + 0x48));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
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



/* Entry: 1088f4710; end: 1088f4753;  */

void FUN_1088f4710(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 1088f4754; end: 1088f479b;  */

void FUN_1088f4754(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c34940();
  func_0x000107c3025c();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088b7bb8(*(undefined8 *)(unaff_x19 + 0x20));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088f479c; end: 1088f47af;  */

void FUN_1088f479c(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x10) = 0;
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



/* Entry: 1088f47b0; end: 1088f47e3;  */

void FUN_1088f47b0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088f872c();
  FUN_1088f80fc();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088f47e4; end: 1088f4d1f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1088f47e4(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long extraout_x8;
  int iVar8;
  long *plVar9;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 2);
  plVar3 = param_1;
  plVar6 = param_3;
  if ((uVar2 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0xd] + 0x18);
    plVar3 = (long *)0x1;
    func_0x0001088f8400();
    param_2 = plVar3;
  }
  plVar9 = (long *)(param_1[0xc] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)plVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = plVar9[1];
    if (lVar5 == 0) goto LAB_1088f4874;
    plVar4 = (long *)*plVar9;
  }
  else {
    plVar4 = plVar9;
    if (*(char *)((long)plVar9 + 0x17) == '\0') goto LAB_1088f4874;
  }
  func_0x000107c303d4(plVar4,lVar5,1,&UNK_10f4ec176);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,2,plVar9,param_2);
  plVar6 = plVar9;
  param_2 = plVar3;
LAB_1088f4874:
  lVar5 = param_1[4];
  for (iVar8 = 0; (int)lVar5 != iVar8; iVar8 = iVar8 + 1) {
    func_0x0001088f8610();
    plVar3 = (long *)0x3;
    func_0x0001088f8400();
    param_2 = plVar3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0xe] + 0x18);
    plVar3 = (long *)0x4;
    func_0x0001088f8400();
    param_2 = plVar3;
  }
  if (param_1[0x1c] != 0) {
    func_0x0001088f842c();
    func_0x0001088f8654();
    func_0x0001088f83e8();
    param_2 = plVar3;
  }
  plVar9 = plVar3;
  if ((int)param_1[0x1e] != 0) {
    func_0x0001088f842c();
    plVar9 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar3);
    func_0x0001088f8478();
    param_2 = plVar9;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0xf] + 0x18);
    plVar9 = (long *)0x7;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  if (param_1[0x1d] != 0) {
    func_0x0001088f842c();
    func_0x0001088f874c();
    func_0x0001088f83e8();
    param_2 = plVar9;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x10] + 0x14);
    plVar9 = (long *)0x9;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x11] + 0x14);
    plVar9 = (long *)0xa;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if (param_1[0x1f] != 0) {
    func_0x0001088f842c();
    plVar3 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar9);
    func_0x0001088f83e8();
    param_2 = plVar3;
  }
  plVar9 = plVar3;
  if (*(int *)((long)param_1 + 0xf4) != 0) {
    func_0x0001088f842c();
    plVar9 = (long *)0x80;
    func_0x000107c280a8(0x80,plVar3);
    func_0x0001088f8478();
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if ((char)param_1[0x20] == '\x01') {
    func_0x0001088f842c();
    plVar3 = (long *)0x88;
    func_0x000107c280a8(0x88,plVar9);
    func_0x0001088f83f4();
    param_2 = plVar3;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x12] + 0x14);
    plVar3 = (long *)0x12;
    func_0x0001088f8400();
    param_2 = plVar3;
  }
  plVar9 = plVar3;
  if (*(char *)((long)param_1 + 0x101) == '\x01') {
    func_0x0001088f842c();
    plVar9 = (long *)0x98;
    func_0x000107c280a8(0x98,plVar3);
    func_0x0001088f83f4();
    param_2 = plVar9;
  }
  lVar5 = param_1[7];
  for (iVar8 = 0; (int)lVar5 != iVar8; iVar8 = iVar8 + 1) {
    func_0x0001088f8610();
    plVar9 = (long *)0x14;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if ((*(byte *)((long)param_1 + 0x102) & 1) != 0) {
    func_0x0001088f842c();
    plVar3 = (long *)0xa8;
    func_0x000107c280a8(0xa8,plVar9);
    func_0x0001088f83f4();
    param_2 = plVar3;
  }
  plVar9 = plVar3;
  if (*(char *)((long)param_1 + 0x103) == '\x01') {
    func_0x0001088f842c();
    plVar9 = (long *)0xb0;
    func_0x000107c280a8(0xb0,plVar3);
    func_0x0001088f83f4();
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if (*(int *)((long)param_1 + 0x104) != 0) {
    func_0x0001088f842c();
    plVar3 = (long *)0xb8;
    func_0x000107c280a8(0xb8,plVar9);
    func_0x0001088f8478();
    param_2 = plVar3;
  }
  plVar9 = plVar3;
  if ((int)param_1[0x21] != 0) {
    func_0x0001088f842c();
    plVar9 = (long *)0xc0;
    func_0x000107c280a8(0xc0,plVar3);
    func_0x0001088f8478();
    param_2 = plVar9;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x13] + 0x14);
    plVar9 = (long *)0x19;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if (*(int *)((long)param_1 + 0x10c) != 0) {
    func_0x0001088f842c();
    plVar3 = (long *)0xd0;
    func_0x000107c280a8(0xd0,plVar9);
    func_0x0001088f8478();
    param_2 = plVar3;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x14] + 0x18);
    plVar3 = (long *)0x1b;
    func_0x0001088f8400();
    param_2 = plVar3;
  }
  plVar9 = plVar3;
  if ((int)param_1[0x22] != 0) {
    func_0x0001088f842c();
    plVar9 = (long *)0xe0;
    func_0x000107c280a8(0xe0,plVar3);
    func_0x0001088f8478();
    param_2 = plVar9;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x15] + 0x1c);
    plVar9 = (long *)0x1d;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  if (*(char *)((long)param_1 + 0x114) == '\x01') {
    func_0x0001088f842c();
    param_2 = (long *)0xf0;
    func_0x000107c280a8(0xf0,plVar9);
    func_0x0001088f83f4();
    plVar9 = param_2;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x16] + 0x24);
    plVar9 = (long *)0x1f;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x17] + 0x14);
    plVar9 = (long *)0x20;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x18] + 0x14);
    plVar9 = (long *)0x21;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x19] + 0x14);
    plVar9 = (long *)0x22;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x1a] + 0x14);
    plVar9 = (long *)0x23;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[0x1b] + 0x30);
    plVar9 = (long *)0x24;
    func_0x0001088f8400();
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if (*(char *)((long)param_1 + 0x115) == '\x01') {
    func_0x0001088f842c();
    plVar3 = (long *)0x128;
    func_0x000107c280a8(0x128,plVar9);
    func_0x0001088f83f4();
    param_2 = plVar3;
  }
  lVar5 = param_1[10];
  for (iVar8 = 0; (int)lVar5 != iVar8; iVar8 = iVar8 + 1) {
    uVar7 = param_1[9];
    puVar1 = (ulong *)(param_1 + 9);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + (long)iVar8 * 8 + 7);
    }
    plVar6 = (long *)(ulong)*(uint *)(*puVar1 + 0x18);
    plVar3 = (long *)0x26;
    func_0x0001088f8400();
    param_2 = plVar3;
  }
  if ((*(byte *)((long)param_1 + 0x116) & 1) != 0) {
    func_0x0001088f842c();
    param_2 = (long *)0x138;
    func_0x000107c280a8(0x138,plVar3);
    func_0x0001088f83f4();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x0001088f8544();
  if ((long)plVar6 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if ((long)(int)plVar6 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar5,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  while( true ) {
    iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar8 = (int)plVar6;
    plVar6 = (long *)(ulong)(uint)(iVar8 - iVar10);
    if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
    func_0x00010b4d5738();
    lVar5 = (long)param_2 + (long)iVar10;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar5);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar8);
}



/* Entry: 1088f4d20; end: 1088f503b;  */

/* WARNING: Removing unreachable block (ram,0x0001088f4d68) */
/* WARNING: Removing unreachable block (ram,0x0001088f4d94) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1088f4d20(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_w8;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  int extraout_w9;
  long extraout_x9;
  int extraout_w12;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x0001088f8380();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    FUN_1088f503c();
    func_0x0001088f865c();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x0001088f8528();
  func_0x0001088f8528();
  func_0x0001088f8604(*(undefined8 *)(unaff_x19 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x0001088f8560();
  }
  uVar2 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x0001088f8560();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_1088e5e54(*(undefined8 *)(unaff_x19 + 0x70));
      func_0x0001088f8560();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x78));
      func_0x0001088f8560();
    }
    if ((uVar2 >> 3 & 1) != 0) {
      FUN_1088f68d4(*(undefined8 *)(unaff_x19 + 0x80));
      func_0x0001088f834c();
    }
    if ((uVar2 >> 4 & 1) != 0) {
      func_0x0001088ec204(*(undefined8 *)(unaff_x19 + 0x88));
      func_0x0001088f8560();
    }
    if ((uVar2 >> 5 & 1) != 0) {
      func_0x0001088b88a8(*(undefined8 *)(unaff_x19 + 0x90));
      func_0x0001088f834c();
      func_0x0001088f856c();
    }
    if ((uVar2 >> 6 & 1) != 0) {
      FUN_1088f5a14(*(undefined8 *)(unaff_x19 + 0x98));
      func_0x0001088f834c();
      func_0x0001088f856c();
    }
    if ((uVar2 >> 7 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0xa0));
      func_0x0001088f8708();
    }
  }
  if ((uVar2 & 0x7f00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      FUN_1088f6e48(*(undefined8 *)(unaff_x19 + 0xa8));
      func_0x0001088f834c();
      func_0x0001088f856c();
    }
    if ((uVar2 >> 9 & 1) != 0) {
      FUN_1088f6f4c(*(undefined8 *)(unaff_x19 + 0xb0));
      func_0x0001088f834c();
      func_0x0001088f856c();
    }
    if ((uVar2 >> 10 & 1) != 0) {
      FUN_1088efe00(*(undefined8 *)(unaff_x19 + 0xb8));
      func_0x0001088f8708();
    }
    if ((uVar2 >> 0xb & 1) != 0) {
      func_0x0001088ec23c(*(undefined8 *)(unaff_x19 + 0xc0));
      func_0x0001088f8708();
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      func_0x0001088ec258(*(undefined8 *)(unaff_x19 + 200));
      func_0x0001088f8708();
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      FUN_1088f57a0(*(undefined8 *)(unaff_x19 + 0xd0));
      func_0x0001088f834c();
      func_0x0001088f856c();
    }
    if ((uVar2 >> 0xe & 1) != 0) {
      func_0x0001088f5058(*(undefined8 *)(unaff_x19 + 0xd8));
      func_0x0001088f8708();
    }
  }
  if (*(long *)(unaff_x19 + 0xe0) != 0) {
    func_0x0001088f84d4(0xfffffff7);
  }
  if (*(long *)(unaff_x19 + 0xe8) != 0) {
    func_0x0001088f84d4();
  }
  if (*(int *)(unaff_x19 + 0xf0) != 0) {
    func_0x0001088f86f0();
  }
  if (*(int *)(unaff_x19 + 0xf4) != 0) {
    func_0x0001088f86f0();
  }
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    func_0x0001088f84d4();
  }
  func_0x0001088f86d0();
  func_0x0001088f86d0();
  func_0x0001088f86d0();
  func_0x0001088f850c();
  func_0x0001088f850c();
  func_0x0001088f850c();
  iVar1 = extraout_w9;
  if (*(int *)(unaff_x19 + 0x110) != 0) {
    iVar1 = extraout_w9 +
            ((uint)(extraout_w12 + (int)LZCOUNT((long)*(int *)(unaff_x19 + 0x110)) * extraout_w8) >>
            6) + 2;
  }
  iVar3 = iVar1 + 3;
  if (*(char *)(unaff_x19 + 0x114) == '\0') {
    iVar3 = iVar1;
  }
  iVar1 = iVar3 + 3;
  if (*(char *)(unaff_x19 + 0x115) == '\0') {
    iVar1 = iVar3;
  }
  iVar3 = iVar1 + 3;
  if (*(char *)(unaff_x19 + 0x116) == '\0') {
    iVar3 = iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f8590();
    lVar4 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(unaff_x19 + 0x14) = iVar3;
  return;
}



/* Entry: 1088f503c; end: 1088f5073;  */

long FUN_1088f503c(long param_1)

{
  long extraout_x8;
  
  FUN_1088f64b4();
  FUN_1088f834c();
  return param_1 + extraout_x8;
}



/* Entry: 1088f5074; end: 1088f5077;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088f5074(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088f84a4();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  func_0x0001088f8714();
  func_0x000107c2a3cc();
  func_0x000107c2a3d0(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  lVar3 = unaff_x20 + 0x48;
  func_0x000107c2a3d4();
  func_0x0001088f8648(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088f8630();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x0001088f85e8();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x000107c2a2f4();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_1088bc418();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        func_0x0001088f85e8();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x000107c2a41c();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x0001088f546c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1088f8110();
        *(ulong **)(unaff_x21 + 0x90) = puVar2;
      }
      else {
        FUN_1088b8998();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1088f8150();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        func_0x0001088f5560();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        func_0x0001088f85e8();
        *(ulong **)(unaff_x21 + 0xa0) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1088f81ac();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
      }
      else {
        func_0x0001088f557c();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x000107c2a42c();
        *(ulong **)(unaff_x21 + 0xb0) = puVar2;
      }
      else {
        func_0x000107c2a3d8();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1088f8210();
        *(ulong **)(unaff_x21 + 0xb8) = puVar2;
      }
      else {
        FUN_1088f55a8();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xc0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x0001088eea90();
        *(ulong **)(unaff_x21 + 0xc0) = puVar2;
      }
      else {
        FUN_1088bb6ac();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 200);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x0001088eeac4();
        *(ulong **)(unaff_x21 + 200) = puVar2;
      }
      else {
        FUN_1088bc084();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xd0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1088f82ac();
        *(ulong **)(unaff_x21 + 0xd0) = puVar2;
      }
      else {
        FUN_1088f564c();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xd8);
      if (puVar2 == (ulong *)0x0) {
        FUN_1088f830c();
        *(ulong **)(unaff_x21 + 0xd8) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        FUN_1088f566c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    *(long *)(unaff_x21 + 0xe0) = *(long *)(unaff_x20 + 0xe0);
  }
  if (*(long *)(unaff_x20 + 0xe8) != 0) {
    *(long *)(unaff_x21 + 0xe8) = *(long *)(unaff_x20 + 0xe8);
  }
  if (*(int *)(unaff_x20 + 0xf0) != 0) {
    *(int *)(unaff_x21 + 0xf0) = *(int *)(unaff_x20 + 0xf0);
  }
  if (*(int *)(unaff_x20 + 0xf4) != 0) {
    *(int *)(unaff_x21 + 0xf4) = *(int *)(unaff_x20 + 0xf4);
  }
  if (*(long *)(unaff_x20 + 0xf8) != 0) {
    *(long *)(unaff_x21 + 0xf8) = *(long *)(unaff_x20 + 0xf8);
  }
  if (*(char *)(unaff_x20 + 0x100) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x100) = 1;
  }
  if (*(char *)(unaff_x20 + 0x101) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x101) = 1;
  }
  if (*(char *)(unaff_x20 + 0x102) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x102) = 1;
  }
  if (*(char *)(unaff_x20 + 0x103) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x103) = 1;
  }
  if (*(int *)(unaff_x20 + 0x104) != 0) {
    *(int *)(unaff_x21 + 0x104) = *(int *)(unaff_x20 + 0x104);
  }
  if (*(int *)(unaff_x20 + 0x108) != 0) {
    *(int *)(unaff_x21 + 0x108) = *(int *)(unaff_x20 + 0x108);
  }
  if (*(int *)(unaff_x20 + 0x10c) != 0) {
    *(int *)(unaff_x21 + 0x10c) = *(int *)(unaff_x20 + 0x10c);
  }
  if (*(int *)(unaff_x20 + 0x110) != 0) {
    *(int *)(unaff_x21 + 0x110) = *(int *)(unaff_x20 + 0x110);
  }
  if (*(char *)(unaff_x20 + 0x114) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x114) = 1;
  }
  if (*(char *)(unaff_x20 + 0x115) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x115) = 1;
  }
  if (*(char *)(unaff_x20 + 0x116) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x116) = 1;
  }
  func_0x0001088f8490();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088f84c4();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 1088f5078; end: 1088f555f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088f5078(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088f84a4();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  func_0x0001088f8714();
  func_0x000107c2a3cc();
  func_0x000107c2a3d0(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  lVar3 = unaff_x20 + 0x48;
  func_0x000107c2a3d4();
  func_0x0001088f8648(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088f8630();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x0001088f85e8();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x000107c2a2f4();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_1088bc418();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        func_0x0001088f85e8();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x000107c2a41c();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x0001088f546c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1088f8110();
        *(ulong **)(unaff_x21 + 0x90) = puVar2;
      }
      else {
        FUN_1088b8998();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1088f8150();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        func_0x0001088f5560();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        func_0x0001088f85e8();
        *(ulong **)(unaff_x21 + 0xa0) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1088f81ac();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
      }
      else {
        func_0x0001088f557c();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x000107c2a42c();
        *(ulong **)(unaff_x21 + 0xb0) = puVar2;
      }
      else {
        func_0x000107c2a3d8();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1088f8210();
        *(ulong **)(unaff_x21 + 0xb8) = puVar2;
      }
      else {
        FUN_1088f55a8();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xc0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x0001088eea90();
        *(ulong **)(unaff_x21 + 0xc0) = puVar2;
      }
      else {
        FUN_1088bb6ac();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 200);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x0001088eeac4();
        *(ulong **)(unaff_x21 + 200) = puVar2;
      }
      else {
        FUN_1088bc084();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xd0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1088f82ac();
        *(ulong **)(unaff_x21 + 0xd0) = puVar2;
      }
      else {
        FUN_1088f564c();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xd8);
      if (puVar2 == (ulong *)0x0) {
        FUN_1088f830c();
        *(ulong **)(unaff_x21 + 0xd8) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        FUN_1088f566c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    *(long *)(unaff_x21 + 0xe0) = *(long *)(unaff_x20 + 0xe0);
  }
  if (*(long *)(unaff_x20 + 0xe8) != 0) {
    *(long *)(unaff_x21 + 0xe8) = *(long *)(unaff_x20 + 0xe8);
  }
  if (*(int *)(unaff_x20 + 0xf0) != 0) {
    *(int *)(unaff_x21 + 0xf0) = *(int *)(unaff_x20 + 0xf0);
  }
  if (*(int *)(unaff_x20 + 0xf4) != 0) {
    *(int *)(unaff_x21 + 0xf4) = *(int *)(unaff_x20 + 0xf4);
  }
  if (*(long *)(unaff_x20 + 0xf8) != 0) {
    *(long *)(unaff_x21 + 0xf8) = *(long *)(unaff_x20 + 0xf8);
  }
  if (*(char *)(unaff_x20 + 0x100) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x100) = 1;
  }
  if (*(char *)(unaff_x20 + 0x101) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x101) = 1;
  }
  if (*(char *)(unaff_x20 + 0x102) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x102) = 1;
  }
  if (*(char *)(unaff_x20 + 0x103) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x103) = 1;
  }
  if (*(int *)(unaff_x20 + 0x104) != 0) {
    *(int *)(unaff_x21 + 0x104) = *(int *)(unaff_x20 + 0x104);
  }
  if (*(int *)(unaff_x20 + 0x108) != 0) {
    *(int *)(unaff_x21 + 0x108) = *(int *)(unaff_x20 + 0x108);
  }
  if (*(int *)(unaff_x20 + 0x10c) != 0) {
    *(int *)(unaff_x21 + 0x10c) = *(int *)(unaff_x20 + 0x10c);
  }
  if (*(int *)(unaff_x20 + 0x110) != 0) {
    *(int *)(unaff_x21 + 0x110) = *(int *)(unaff_x20 + 0x110);
  }
  if (*(char *)(unaff_x20 + 0x114) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x114) = 1;
  }
  if (*(char *)(unaff_x20 + 0x115) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x115) = 1;
  }
  if (*(char *)(unaff_x20 + 0x116) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x116) = 1;
  }
  func_0x0001088f8490();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088f84c4();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 1088f5560; end: 1088f55a7;  */

void FUN_1088f5560(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 1088f55a8; end: 1088f564b;  */

void FUN_1088f55a8(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c348d0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x0001088f8648(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x0001088f8630();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088eea60();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1088b7f30();
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x0001088f8490();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088f84c4();
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



/* Entry: 1088f564c; end: 1088f566b;  */

void FUN_1088f564c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 1088f566c; end: 1088f56eb;  */

void FUN_1088f566c(ulong *param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001088f872c();
  FUN_1088f71b8();
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088f86c0();
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



/* Entry: 1088f56ec; end: 1088f570f;  */

undefined8 FUN_1088f56ec(undefined8 param_1)

{
  func_0x000107c348e0();
  return param_1;
}



/* Entry: 1088f5710; end: 1088f5713;  */

undefined8 FUN_1088f5710(undefined8 param_1)

{
  func_0x000107c348e0();
  return param_1;
}



/* Entry: 1088f5714; end: 1088f5727;  */

void FUN_1088f5714(void)

{
  FUN_1088f56ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f5728; end: 1088f5733;  */

undefined ** FUN_1088f5728(void)

{
  return &PTR_DAT_110a8d6d8;
}



/* Entry: 1088f5734; end: 1088f579f;  */

long * FUN_1088f5734(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((char)param_1[2] == '\x01') {
    func_0x0001088f83a4();
    func_0x0001088f8588();
    func_0x0001088f83f4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088f8544();
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



/* Entry: 1088f57a0; end: 1088f57d3;  */

long FUN_1088f57a0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



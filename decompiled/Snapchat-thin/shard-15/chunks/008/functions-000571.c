/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bceb5f8; end: 10bceb60b;  */

void FUN_10bceb5f8(void)

{
  FUN_10bceb594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bceb60c; end: 10bceb647;  */

void FUN_10bceb60c(void)

{
  Hint_Prefetch(0x113405730,0,0,0);
  Hint_Prefetch(PTR_DAT_113405730,0,0,0);
  return;
}



/* Entry: 10bceb648; end: 10bceb69b;  */

long * FUN_10bceb648(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  plVar3 = param_1;
  if (param_1[2] != 0) {
    plVar3 = param_3;
    func_0x000105991a14();
    param_2 = plVar3;
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010bcec158();
  lVar11 = 0;
  plVar4 = plVar3;
  do {
    if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) <= lVar11) {
      return param_2;
    }
    piVar1 = (int *)(*plVar3 + lVar11 * 0x10);
    func_0x00010bd3caf8();
    plVar7 = plVar4;
    param_2 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar7 = *(long **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar5);
      func_0x000107c280ac(plVar7,uVar5);
      param_2 = plVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar7 = iVar2;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar9 = *(long *)(piVar1 + 2);
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar7 = lVar9;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar9 = *(long *)(piVar1 + 2);
      lVar10 = (long)*(char *)(lVar9 + 0x17);
      if ((-1 < lVar10) || (lVar10 = *(long *)(lVar9 + 8), lVar10 < 0x80)) {
        lVar12 = *param_3;
        uVar8 = iVar2 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar10 <= lVar12 + ~((long)plVar4 + (long)(int)plVar7) + 0x10) {
          lVar9 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar9 + -2) = (byte)uVar8 | 0x80;
            lVar9 = lVar9 + 1;
          }
          *(byte *)(lVar9 + -2) = (byte)uVar8;
          *(char *)(lVar9 + -1) = (char)lVar10;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar9 + lVar10);
          break;
        }
      }
      plVar7 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar9,plVar4);
      param_2 = plVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar6,uVar5,param_3);
      func_0x00010bd3ca0c();
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar11 = lVar11 + 1;
    plVar4 = plVar7;
  } while( true );
}



/* Entry: 10bceb69c; end: 10bceb6c3;  */

ulong FUN_10bceb69c(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar2;
    return uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + uVar2);
  return param_1 + uVar2;
}



/* Entry: 10bceb6c4; end: 10bceb6e7;  */

undefined8 FUN_10bceb6c4(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb6e8; end: 10bceb723;  */

undefined8 FUN_10bceb6e8(undefined8 param_1)

{
  func_0x00010bcec234(&PTR_FUN_110d9b410);
  func_0x00010bceb748();
  return param_1;
}



/* Entry: 10bceb724; end: 10bceb727;  */

undefined8 FUN_10bceb724(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb728; end: 10bceb73b;  */

void FUN_10bceb728(void)

{
  FUN_10bceb6c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bceb73c; end: 10bceb777;  */

void FUN_10bceb73c(void)

{
  Hint_Prefetch(0x1134057e0,0,0,0);
  Hint_Prefetch(PTR_DAT_1134057e0,0,0,0);
  return;
}



/* Entry: 10bceb778; end: 10bceb7d3;  */

long * FUN_10bceb778(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  func_0x00010bcec188();
  plVar8 = param_1;
  if (param_1[2] != 0) {
    func_0x00010bcec164();
    plVar8 = *(long **)(unaff_x20 + 0x10);
    func_0x00010bcec204();
    func_0x000107c280ac(plVar8,param_1);
    param_2 = plVar8;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010bcec138();
  lVar11 = 0;
  plVar3 = plVar8;
  do {
    if ((int)((ulong)(plVar8[1] - *plVar8) >> 4) <= lVar11) {
      return param_2;
    }
    piVar1 = (int *)(*plVar8 + lVar11 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar4);
      func_0x000107c280ac(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar9 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar9;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar9 = *(long *)(piVar1 + 2);
      lVar10 = (long)*(char *)(lVar9 + 0x17);
      if ((-1 < lVar10) || (lVar10 = *(long *)(lVar9 + 8), lVar10 < 0x80)) {
        lVar12 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x000107c280a4();
        if (lVar10 <= lVar12 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar9 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar9 + -2) = (byte)uVar7 | 0x80;
            lVar9 = lVar9 + 1;
          }
          *(byte *)(lVar9 + -2) = (byte)uVar7;
          *(char *)(lVar9 + -1) = (char)lVar10;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar9 + lVar10);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar9,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar4,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar11 = lVar11 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 10bceb7d4; end: 10bceb7fb;  */

ulong FUN_10bceb7d4(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar2;
    return uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + uVar2);
  return param_1 + uVar2;
}



/* Entry: 10bceb7fc; end: 10bceb833;  */

void FUN_10bceb7fc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bceb764();
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(*(long *)(uVar1 + 0x10) - *(long *)(uVar1 + 8)) >> 4)) {
      func_0x00010bd374f4();
      for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bceb834; end: 10bceb857;  */

undefined8 FUN_10bceb834(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb858; end: 10bceb897;  */

undefined8 * FUN_10bceb858(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d9b550;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010bceb8bc(param_1,param_3);
  return param_1;
}



/* Entry: 10bceb898; end: 10bceb89b;  */

undefined8 FUN_10bceb898(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb89c; end: 10bceb8af;  */

void FUN_10bceb89c(void)

{
  FUN_10bceb834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bceb8b0; end: 10bceb8eb;  */

void FUN_10bceb8b0(void)

{
  Hint_Prefetch(0x113405890,0,0,0);
  Hint_Prefetch(PTR_DAT_113405890,0,0,0);
  return;
}



/* Entry: 10bceb8ec; end: 10bceb93f;  */

long * FUN_10bceb8ec(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  plVar3 = param_1;
  if ((int)param_1[2] != 0) {
    plVar3 = param_3;
    func_0x000107c282e4();
    param_2 = plVar3;
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010bcec158();
  lVar11 = 0;
  plVar4 = plVar3;
  do {
    if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) <= lVar11) {
      return param_2;
    }
    piVar1 = (int *)(*plVar3 + lVar11 * 0x10);
    func_0x00010bd3caf8();
    plVar7 = plVar4;
    param_2 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar7 = *(long **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar5);
      func_0x000107c280ac(plVar7,uVar5);
      param_2 = plVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar7 = iVar2;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar9 = *(long *)(piVar1 + 2);
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar7 = lVar9;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar9 = *(long *)(piVar1 + 2);
      lVar10 = (long)*(char *)(lVar9 + 0x17);
      if ((-1 < lVar10) || (lVar10 = *(long *)(lVar9 + 8), lVar10 < 0x80)) {
        lVar12 = *param_3;
        uVar8 = iVar2 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar10 <= lVar12 + ~((long)plVar4 + (long)(int)plVar7) + 0x10) {
          lVar9 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar9 + -2) = (byte)uVar8 | 0x80;
            lVar9 = lVar9 + 1;
          }
          *(byte *)(lVar9 + -2) = (byte)uVar8;
          *(char *)(lVar9 + -1) = (char)lVar10;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar9 + lVar10);
          break;
        }
      }
      plVar7 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar9,plVar4);
      param_2 = plVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar6,uVar5,param_3);
      func_0x00010bd3ca0c();
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar11 = lVar11 + 1;
    plVar4 = plVar7;
  } while( true );
}



/* Entry: 10bceb940; end: 10bceb967;  */

ulong FUN_10bceb940(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar2;
    return uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + uVar2);
  return param_1 + uVar2;
}



/* Entry: 10bceb968; end: 10bceb98b;  */

undefined8 FUN_10bceb968(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb98c; end: 10bceb9cb;  */

undefined8 * FUN_10bceb98c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d9b460;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010bceb9f0(param_1,param_3);
  return param_1;
}



/* Entry: 10bceb9cc; end: 10bceb9cf;  */

undefined8 FUN_10bceb9cc(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb9d0; end: 10bceb9e3;  */

void FUN_10bceb9d0(void)

{
  FUN_10bceb968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bceb9e4; end: 10bceba1f;  */

void FUN_10bceb9e4(void)

{
  Hint_Prefetch(0x113405940,0,0,0);
  Hint_Prefetch(PTR_DAT_113405940,0,0,0);
  return;
}



/* Entry: 10bceba20; end: 10bceba73;  */

long * FUN_10bceba20(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bcec188();
  if ((int)param_1[2] != 0) {
    func_0x00010bcec164();
    func_0x00010bcec204();
    func_0x00010bcec1ac();
    param_2 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010bcec138();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar4);
      func_0x000107c280ac(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x000107c280a4();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar4,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 10bceba74; end: 10bceba97;  */

ulong FUN_10bceba74(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  puVar1 = (uint *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = uVar3;
    return (ulong)uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  uVar2 = param_1 + (ulong)uVar3;
  *puVar1 = (uint)uVar2;
  return uVar2;
}



/* Entry: 10bceba98; end: 10bcebabb;  */

undefined8 FUN_10bceba98(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bcebabc; end: 10bcebaff;  */

undefined8 * FUN_10bcebabc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d9b690;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x00010bcebb24(param_1,param_3);
  return param_1;
}



/* Entry: 10bcebb00; end: 10bcebb03;  */

undefined8 FUN_10bcebb00(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bcebb04; end: 10bcebb17;  */

void FUN_10bcebb04(void)

{
  FUN_10bceba98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcebb18; end: 10bcebb57;  */

void FUN_10bcebb18(void)

{
  Hint_Prefetch(0x1134059f0,0,0,0);
  Hint_Prefetch(PTR_DAT_1134059f0,0,0,0);
  return;
}



/* Entry: 10bcebb58; end: 10bcebbaf;  */

long * FUN_10bcebb58(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bcec188();
  if ((char)param_1[2] == '\x01') {
    func_0x00010bcec164();
    func_0x00010bcec204();
    func_0x00010bcec1ac();
    param_2 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010bcec138();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar4);
      func_0x000107c280ac(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x000107c280a4();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar4,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 10bcebbb0; end: 10bcebbbb;  */

long FUN_10bcebbb0(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar2;
    return lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + lVar2);
  return param_1 + lVar2;
}



/* Entry: 10bcebbbc; end: 10bcebbf3;  */

void FUN_10bcebbbc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bcebb44();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(*(long *)(uVar1 + 0x10) - *(long *)(uVar1 + 8)) >> 4)) {
      func_0x00010bd374f4();
      for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bcebbf4; end: 10bcebc37;  */

void FUN_10bcebbf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  
  func_0x00010bcec220();
  *unaff_x19 = &PTR_FUN_110d9b4b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010bcec1ec();
  }
  func_0x00010bcec1f8();
  unaff_x19[2] = param_1;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  return;
}



/* Entry: 10bcebc38; end: 10bcebc63;  */

long FUN_10bcebc38(long param_1)

{
  func_0x00010bcec148();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bcebc64; end: 10bcebc67;  */

long FUN_10bcebc64(long param_1)

{
  func_0x00010bcec148();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bcebc68; end: 10bcebc7b;  */

void FUN_10bcebc68(void)

{
  FUN_10bcebc38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcebc7c; end: 10bcebc87;  */

void FUN_10bcebc7c(void)

{
  Hint_Prefetch(0x113405aa0,0,0,0);
  Hint_Prefetch(PTR_DAT_113405aa0,0,0,0);
  return;
}



/* Entry: 10bcebc88; end: 10bcebd13;  */

void FUN_10bcebc88(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010bcec194();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  uVar2 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)(*(long *)(uVar2 + 0x10) - *(long *)(uVar2 + 8)) >> 4)) {
    func_0x00010bd374f4();
    for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bcebd14; end: 10bcebda7;  */

long * FUN_10bcebd14(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar11 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar9 = (long)*(char *)((long)puVar11 + 0x17);
  plVar4 = param_1;
  if (lVar9 < 0) {
    lVar9 = puVar11[1];
    if (lVar9 == 0) goto LAB_10bcebd80;
    puVar3 = (undefined8 *)*puVar11;
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_10bcebd80;
  }
  func_0x000107c303d4(puVar3,lVar9,1,&UNK_10f8319e5);
  plVar4 = param_3;
  func_0x000107c280a0(param_3,1,puVar11,param_2);
  param_2 = plVar4;
LAB_10bcebd80:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010bcec158();
  lVar9 = 0;
  plVar5 = plVar4;
  do {
    if ((int)((ulong)(plVar4[1] - *plVar4) >> 4) <= lVar9) {
      return param_2;
    }
    piVar1 = (int *)(*plVar4 + lVar9 * 0x10);
    func_0x00010bd3caf8();
    plVar8 = plVar5;
    param_2 = plVar5;
    switch(piVar1[1]) {
    case 0:
      plVar8 = *(long **)(piVar1 + 2);
      uVar6 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar6);
      func_0x000107c280ac(plVar8,uVar6);
      param_2 = plVar8;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar8 = iVar2;
      param_2 = (long *)((long)plVar8 + 4);
      break;
    case 2:
      lVar12 = *(long *)(piVar1 + 2);
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar8 = lVar12;
      param_2 = plVar8 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar12 = *(long *)(piVar1 + 2);
      lVar13 = (long)*(char *)(lVar12 + 0x17);
      if ((-1 < lVar13) || (lVar13 = *(long *)(lVar12 + 8), lVar13 < 0x80)) {
        lVar14 = *param_3;
        uVar10 = iVar2 << 3;
        plVar8 = (long *)(ulong)uVar10;
        func_0x000107c280a4();
        if (lVar13 <= lVar14 + ~((long)plVar5 + (long)(int)plVar8) + 0x10) {
          lVar12 = (long)plVar5 + 2;
          for (uVar10 = uVar10 | 2; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
            *(byte *)(lVar12 + -2) = (byte)uVar10 | 0x80;
            lVar12 = lVar12 + 1;
          }
          *(byte *)(lVar12 + -2) = (byte)uVar10;
          *(char *)(lVar12 + -1) = (char)lVar13;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar12 + lVar13);
          break;
        }
      }
      plVar8 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar12,plVar5);
      param_2 = plVar8;
      break;
    case 4:
      uVar6 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar6);
      uVar7 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar7,uVar6,param_3);
      func_0x00010bd3ca0c();
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar8,uVar7);
      param_2 = plVar8;
    }
    lVar9 = lVar9 + 1;
    plVar5 = plVar8;
  } while( true );
}



/* Entry: 10bcebda8; end: 10bcebdeb;  */

long FUN_10bcebda8(long param_1)

{
  undefined4 *puVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x00010bcec20c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  puVar1 = (undefined4 *)(unaff_x19 + 0x18);
  if ((*(byte *)(unaff_x19 + 8) & 1) == 0) {
    *puVar1 = (int)param_1;
    return param_1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    unaff_x19 = (*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(unaff_x19 + param_1);
  return unaff_x19 + param_1;
}



/* Entry: 10bcebdec; end: 10bcebe2f;  */

void FUN_10bcebdec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  
  func_0x00010bcec220();
  *unaff_x19 = &PTR_FUN_110d9b640;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010bcec1ec();
  }
  func_0x00010bcec1f8();
  unaff_x19[2] = param_1;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  return;
}



/* Entry: 10bcebe30; end: 10bcebe5b;  */

long FUN_10bcebe30(long param_1)

{
  func_0x00010bcec148();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bcebe5c; end: 10bcebe5f;  */

long FUN_10bcebe5c(long param_1)

{
  func_0x00010bcec148();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bcebe60; end: 10bcebe73;  */

void FUN_10bcebe60(void)

{
  FUN_10bcebe30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcebe74; end: 10bcebe7f;  */

void FUN_10bcebe74(void)

{
  Hint_Prefetch(0x113405b78,0,0,0);
  Hint_Prefetch(PTR_DAT_113405b78,0,0,0);
  return;
}



/* Entry: 10bcebe80; end: 10bcebfb7;  */

void FUN_10bcebe80(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010bcec194();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  uVar2 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)(*(long *)(uVar2 + 0x10) - *(long *)(uVar2 + 8)) >> 4)) {
    func_0x00010bd374f4();
    for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bcebfb8; end: 10bcebfff;  */

void FUN_10bcebfb8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110d9b410;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10bcec000; end: 10bcec0f7;  */

void FUN_10bcec000(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010bcec1c0();
  }
  *puVar1 = &PTR_FUN_110d9b460;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10bcec0f8; end: 10bcec253;  */

void FUN_10bcec0f8(undefined8 *param_1)

{
  Hint_Prefetch(param_1,0,0,0);
  Hint_Prefetch(*param_1,0,0,0);
  return;
}



/* Entry: 10bcec254; end: 10bcec337;  */

void FUN_10bcec254(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined1 auStack_68 [24];
  
  uVar1 = *param_1;
  func_0x00010b4d1294(&puStack_80,param_3);
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
    puStack_80 = (undefined1 *)&puStack_80;
  }
  func_0x00010b4becac(auStack_68,puStack_80,uStack_78,param_4,param_5);
  func_0x000107c3024c(uVar1,auStack_68,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_80);
  uVar1 = param_1[1];
  func_0x000107c30250(uVar1,param_2);
  func_0x000107c30364(param_3,uVar1);
  return;
}



/* Entry: 10bcec338; end: 10bcec467;  */

void FUN_10bcec338(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x00010b4d1294(&pppuStack_48,param_2);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuStack_48 = &pppuStack_48;
  }
  lVar3 = param_1;
  func_0x00010b4bee4c(param_1,pppuStack_48,uStack_40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_48);
  if ((int)lVar3 != 0) {
    puVar1 = (undefined8 *)(**(ulong **)(param_1 + 8) & 0xfffffffffffffffc);
    lVar3 = (long)*(char *)((long)puVar1 + 0x17);
    puVar2 = puVar1;
    if (lVar3 < 0) {
      puVar2 = (undefined8 *)*puVar1;
      lVar3 = puVar1[1];
    }
    func_0x000107c30344(param_2,puVar2,lVar3);
  }
  return;
}



/* Entry: 10bcec468; end: 10bcec493;  */

long FUN_10bcec468(long param_1)

{
  func_0x000107c30e04(param_1 + 8);
  return param_1;
}



/* Entry: 10bcec494; end: 10bcec497;  */

long FUN_10bcec494(long param_1)

{
  func_0x000107c30e04(param_1 + 8);
  return param_1;
}



/* Entry: 10bcec498; end: 10bcec4ab;  */

void FUN_10bcec498(void)

{
  FUN_10bcec468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcec4ac; end: 10bcec533;  */

void FUN_10bcec4ac(void)

{
  Hint_Prefetch(0x113405ca0,0,0,0);
  Hint_Prefetch(PTR_DAT_113405ca0,0,0,0);
  return;
}



/* Entry: 10bcec534; end: 10bcec5df;  */

long * FUN_10bcec534(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 & 1) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x18);
    uVar4 = 8;
    func_0x000107c280a8(8,plVar3);
    func_0x000107c280a8(param_2,uVar4);
  }
  if ((uVar8 >> 1 & 1) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x1c);
    uVar4 = 0x10;
    func_0x000107c280a8(0x10,plVar3);
    func_0x000107c280b8(param_2,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  plVar3 = (long *)(uVar9 + 8);
  lVar12 = 0;
  plVar5 = plVar3;
  do {
    lVar10 = *plVar3;
    if ((int)((ulong)(*(long *)(uVar9 + 0x10) - lVar10) >> 4) <= lVar12) {
      return param_2;
    }
    piVar1 = (int *)(lVar10 + lVar12 * 0x10);
    func_0x00010bd3caf8();
    plVar7 = plVar5;
    param_2 = plVar5;
    switch(piVar1[1]) {
    case 0:
      plVar7 = *(long **)(piVar1 + 2);
      uVar6 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar6);
      func_0x000107c280ac(plVar7,uVar6);
      param_2 = plVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar7 = iVar2;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar7 = lVar10;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *param_3;
        uVar8 = iVar2 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar11 <= lVar13 + ~((long)plVar5 + (long)(int)plVar7) + 0x10) {
          lVar10 = (long)plVar5 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar8 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar8;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar10 + lVar11);
          break;
        }
      }
      plVar7 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar10,plVar5);
      param_2 = plVar7;
      break;
    case 4:
      uVar6 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar6);
      uVar4 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar4,uVar6,param_3);
      func_0x00010bd3ca0c();
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar7,uVar4);
      param_2 = plVar7;
    }
    lVar12 = lVar12 + 1;
    plVar5 = plVar7;
  } while( true );
}



/* Entry: 10bcec5e0; end: 10bcec643;  */

long FUN_10bcec5e0(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = ((ulong)uVar2 & 1) * 2;
    if ((uVar2 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + lVar3 + 1;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar3;
    return lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + lVar3);
  return param_1 + lVar3;
}



/* Entry: 10bcec644; end: 10bcec793;  */

void FUN_10bcec644(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d9b800;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10bcec794; end: 10bcec7df;  */

void FUN_10bcec794(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x000107c3a6bc();
  *param_1 = extraout_x8;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = extraout_x8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = extraout_x8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = extraout_x8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = extraout_x8;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  return;
}



/* Entry: 10bcec7e0; end: 10bcec803;  */

void FUN_10bcec7e0(void)

{
  long extraout_x8;
  
  func_0x00010bd0afb0();
  if (extraout_x8 != 0) {
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bcec804; end: 10bcec8b3;  */

long FUN_10bcec804(long param_1)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bcfdfb8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bcfdfb8();
  }
  __ZdlPv();
  func_0x00010ae7c720(param_1 + 0xc0);
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    pcVar1 = *(char **)(param_1 + 0xa0);
    while (lVar2 != 0) {
      if (-1 < *pcVar1) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00010bd0af28();
    }
    __ZdlPv(*(long *)(param_1 + 0xa0) + -8);
  }
  FUN_10bcec7e0(param_1 + 0x78);
  FUN_10bcec7e0(param_1 + 0x58);
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x38) + -8);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bd0a3fc();
  }
  return param_1;
}



/* Entry: 10bcec8b4; end: 10bceca2b;  */

undefined8 **** FUN_10bcec8b4(long param_1,undefined8 ****param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar6;
  ulong extraout_x14;
  undefined8 ****unaff_x23;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 ***apppuStack_130 [14];
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_58;
  
  ppppuVar4 = param_2;
  func_0x00010bd0a30c();
  ppppuVar4 = (undefined8 ****)*ppppuVar4;
  uStack_58 = extraout_x8;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    apppuStack_130[0] = ppppuVar4;
    func_0x00010ae7ccdc();
    if ((*(long *)(param_1 + 0x50) == 0) && (*(long *)(param_1 + 0x30) == 0)) {
      func_0x00010bd0a8ec();
      FUN_10bceca2c();
      func_0x00010bd0b820();
      in_ZR = extraout_w8_01 == 0;
      bVar3 = (bool)in_ZR;
    }
    else {
      bVar3 = true;
    }
    func_0x00010bd0baa8();
    if (!bVar3) goto LAB_10bcec96c;
  }
  ppppuVar4 = apppuStack_130;
  FUN_10bcfe530(ppppuVar4,param_2);
  func_0x00010bd0b6d4();
  if (param_2[1] != (undefined8 ***)0x0) {
    FUN_10bcecadc(param_1 + 0x38);
    ppppuVar4 = (undefined8 ****)(param_1 + 0x18);
    FUN_10bcecadc();
  }
  func_0x00010bd0a8ec();
  FUN_10bceca2c();
  func_0x00010bd0b820();
  if (extraout_w8 == 0) {
    if (param_2[3] != (undefined8 ***)0x0) {
      ppppuVar4 = (undefined8 ****)param_2[3][5];
      func_0x00010bd0c5a4();
      FUN_10bcec8b4();
      func_0x00010bd0b820();
      if (extraout_w8_00 != 0) goto LAB_10bcec950;
    }
    func_0x00010bd0ad80();
    FUN_10bcecb20();
    ppppuVar4 = param_2;
    if ((int)param_2 != 0) {
      func_0x00010bd0a8ec();
      FUN_10bceca2c();
      ppppuVar4 = param_2;
      unaff_x23 = param_2;
    }
  }
LAB_10bcec950:
  func_0x00010bd0aefc();
  func_0x00010bd0b6dc();
  in_ZR = (int)ppppuVar4 == 0;
  if ((bool)in_ZR) {
    unaff_x23 = (undefined8 ****)&UNK_10e607c03;
  }
  func_0x00010bd0af04();
LAB_10bcec96c:
  func_0x000107c3a64c(uStack_58);
  if ((bool)in_ZR) {
    return unaff_x23;
  }
  ___stack_chk_fail();
  func_0x00010bd0aa64();
  func_0x00010bd0af04();
  func_0x00010bd0a974();
  pcVar5 = FUN_10bceca2c;
  func_0x00010bd0b250();
  puStack_c0 = &stack0xfffffffffffffff0;
  pcStack_b8 = pcVar5;
  func_0x000107c3a688();
  Hint_Prefetch(ppppuVar4[0x19],0,2,0);
  func_0x00010bd0ba80(ppppuVar4[0x19]);
  lVar8 = 0;
  lVar1 = *(long *)(param_4 + 0xd0);
  uVar2 = *(ulong *)(param_4 + 0xd8);
  func_0x00010bd0a4e0(*(ulong *)(param_4 + 200) >> 0xc);
  func_0x00010bd0c58c();
  uVar9 = extraout_x8_00;
  while( true ) {
    uVar9 = uVar9 & uVar2;
    func_0x00010bd0addc();
    uVar6 = extraout_x8_01 & 0x8080808080808080;
    while (uVar6 != 0) {
      func_0x00010bd0c580();
      uVar7 = uVar9 + (extraout_x8_02 >> 3) & uVar2;
      ppppuVar4 = *(undefined8 *****)(lVar1 + uVar7 * 8);
      FUN_10bcfe45c();
      func_0x000107c27944();
      if (((ulong)ppppuVar4 & 1) != 0) {
        return *(undefined8 *****)(*(long *)(param_4 + 0xd0) + uVar7 * 8);
      }
      func_0x00010bd0c58c(uVar6 - 1);
      uVar6 = extraout_x14;
    }
    func_0x00010bd0a514();
    if ((extraout_x8_03 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar9 = lVar8 + uVar9;
  }
  return ppppuVar4;
}



/* Entry: 10bceca2c; end: 10bcecadb;  */

void FUN_10bceca2c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar4;
  ulong extraout_x14;
  long unaff_x19;
  long lVar5;
  ulong uVar6;
  
  func_0x00010bd0b250();
  func_0x000107c3a688();
  Hint_Prefetch(*(undefined8 *)(param_1 + 200),0,2,0);
  func_0x00010bd0ba80(*(undefined8 *)(param_1 + 200));
  lVar5 = 0;
  lVar1 = *(long *)(unaff_x19 + 0xd0);
  uVar2 = *(ulong *)(unaff_x19 + 0xd8);
  func_0x00010bd0a4e0(*(ulong *)(unaff_x19 + 200) >> 0xc);
  func_0x00010bd0c58c();
  uVar6 = extraout_x8;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    func_0x00010bd0addc();
    uVar4 = extraout_x8_00 & 0x8080808080808080;
    while (uVar4 != 0) {
      func_0x00010bd0c580();
      uVar3 = *(ulong *)(lVar1 + (uVar6 + (extraout_x8_01 >> 3) & uVar2) * 8);
      FUN_10bcfe45c();
      func_0x000107c27944();
      if ((uVar3 & 1) != 0) {
        return;
      }
      func_0x00010bd0c58c(uVar4 - 1);
      uVar4 = extraout_x14;
    }
    func_0x00010bd0a514();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6;
  }
  return;
}



/* Entry: 10bcecadc; end: 10bcecb1f;  */

void FUN_10bcecadc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1[2];
  if (uVar2 != 0) {
    FUN_10bcdb984();
    param_1[3] = 0;
    if (uVar2 < 0x80) {
      lVar3 = param_1[2];
      lVar1 = *param_1;
      _memset(lVar1,0x80,lVar3 + 8);
      *(undefined1 *)(lVar1 + lVar3) = 0xff;
      uVar2 = param_1[2];
      lVar1 = 6;
      if (uVar2 != 7) {
        lVar1 = uVar2 - (uVar2 >> 3);
      }
      *(long *)(*param_1 + -8) = lVar1 - param_1[3];
    }
    else {
      (*(code *)&DAT_104c32e5c)(param_1);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (long)&UNK_10e52b660;
    }
    return;
  }
  return;
}



/* Entry: 10bcecb20; end: 10bcecc1b;  */

undefined8 FUN_10bcecb20(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar1 = *(long *)(param_1 + 0x28) + 0x38;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10bcedbc0(uVar1,&uStack_40);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  func_0x000107c27958(auStack_58,&uStack_40);
  FUN_10bcee994();
  uVar1 = param_1;
  FUN_10bceeb04(param_1,uStack_40,uStack_38);
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x18))();
    if ((int)plVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00010bd0b7fc(*(undefined8 *)(param_4 + 0xb0));
      FUN_10bcedbdc();
      if (lVar3 == 0) {
        func_0x00010bd0ac5c();
        FUN_10bceea2c();
        if (lVar3 != 0) {
          uVar4 = 1;
          goto LAB_10bcecbdc;
        }
      }
    }
  }
  FUN_10bd0263c(auStack_70,*(long *)(param_1 + 0x28) + 0x38,auStack_58);
  uVar4 = 0;
LAB_10bcecbdc:
  func_0x00010bd0aacc();
  return uVar4;
}



/* Entry: 10bcecc1c; end: 10bcece6f;  */

uint FUN_10bcecc1c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000058;
  long in_stack_00000060;
  long *in_stack_00000070;
  long *in_stack_00000078;
  
  func_0x00010bd0bcb4();
  if (*(long *)(param_1 + 0xb8) == 0) {
    uVar6 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    FUN_10bcede94(uVar5,"google.protobuf.FeatureSet",0x1a);
    in_stack_00000048 = *(long **)(param_1 + 0xa8);
    in_stack_00000040 = *(long **)(param_1 + 0xa0);
    FUN_10bcfe56c(&stack0x00000040);
    uVar6 = 0;
    plVar2 = in_stack_00000048;
    plVar3 = in_stack_00000040;
    while (in_stack_00000078 = plVar2, plVar3 != (long *)0x0) {
      lVar1 = *plVar2;
      puVar13 = (undefined8 *)plVar2[2];
      for (puVar12 = (undefined8 *)plVar2[1]; puVar12 != puVar13; puVar12 = puVar12 + 6) {
        FUN_10bd1af4c(&stack0x00000040,*(undefined4 *)(lVar1 + 0x20),*puVar12,uVar5);
        plVar4 = in_stack_00000048;
        for (plVar10 = in_stack_00000040; lVar7 = in_stack_00000060, lVar11 = in_stack_00000058,
            plVar10 != plVar4; plVar10 = plVar10 + 3) {
          if (*(long *)(param_1 + 0x98) == 0) {
            func_0x00010bdb2988(&stack0x00000030,&UNK_10f831aca,0x55d);
            func_0x00010ae6bdd0(&stack0x00000030,puVar12[4],puVar12[5]);
            func_0x00010bd0c0d0();
            func_0x00010ae6bdd0();
            func_0x00010bd0c0b0();
            func_0x00010ae6c448();
            func_0x00010bd0c0bc();
          }
          else {
            lVar7 = (long)*(char *)((long)plVar10 + 0x17);
            if (lVar7 < 0) {
              lVar7 = plVar10[1];
            }
            func_0x00010bd0c54c(lVar7);
            func_0x00010bd0c0e4();
          }
          uVar6 = 1;
        }
        for (; lVar11 != lVar7; lVar11 = lVar11 + 0x18) {
          if (*(long *)(param_1 + 0x98) == 0) {
            func_0x00010bdb2980(&stack0x00000030,&UNK_10f831aca,0x567);
            func_0x00010ae6bdd0(&stack0x00000030,puVar12[4],puVar12[5]);
            func_0x00010bd0c0d0();
            func_0x00010ae6bdd0();
            func_0x00010bd0c0b0();
            func_0x00010ae6c448();
            func_0x00010bd0c0bc();
          }
          else {
            lVar8 = (long)*(char *)(lVar11 + 0x17);
            if (lVar8 < 0) {
              lVar8 = *(long *)(lVar11 + 8);
            }
            func_0x00010bd0c54c(lVar8);
            func_0x00010bd0c0e4();
          }
        }
        FUN_10bcfe5a8(&stack0x00000040);
      }
      in_stack_00000070 = (long *)((long)plVar3 + 1);
      in_stack_00000078 = plVar2 + 4;
      FUN_10bcfe56c(&stack0x00000070);
      plVar2 = in_stack_00000078;
      plVar3 = in_stack_00000070;
    }
    uVar9 = *(ulong *)(param_1 + 0xb0);
    if (uVar9 != 0) {
      func_0x00010bcfe5d0(param_1 + 0xa0);
      func_0x00010ae6cbe8(param_1 + 0xa0,&UNK_110d9b980,uVar9 < 0x80);
    }
    uVar6 = uVar6 ^ 1;
  }
  return uVar6;
}



/* Entry: 10bcece70; end: 10bceceb3;  */

ulong FUN_10bcece70(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 1) >> 3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
  }
  else {
    lVar4 = param_1;
    func_0x00010bd0b708();
    if (lVar4 != 0) {
      if ((*(byte *)(param_1 + 1) >> 3 & 1) != 0) {
        return *(ulong *)(param_1 + 0x28);
      }
      func_0x0001080df67c(&uStack_30,&UNK_10f7cda64);
      FUN_10bdb2a88(&stack0xffffffffffffffe0,&UNK_10f7cd9c7,0xa70,uStack_30,uStack_28);
      puVar1 = &stack0xffffffffffffffe0;
      func_0x00010ae6c700();
      puVar2 = puVar1;
      func_0x00010787827c();
      if ((int)puVar2 == 0xb) {
        uVar5 = (uint)*(byte *)(*(long *)(*(long *)(puVar1 + 0x30) + 0x20) + 0x53);
      }
      else {
        uVar5 = 0;
      }
      return (ulong)(uVar5 & 1);
    }
    uVar3 = *(ulong *)(param_1 + 0x10);
  }
  return uVar3;
}



/* Entry: 10bceceb4; end: 10bcecf4b;  */

void FUN_10bceceb4(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x21;
  long lStack_40;
  long lStack_38;
  
  plVar1 = param_1;
  func_0x00010bd0b628();
  func_0x00010bd0a948();
  lVar2 = *param_1;
  lVar4 = param_1[1];
  FUN_10bcecf4c();
  lStack_40 = lVar2;
  lStack_38 = lVar4;
  while (lStack_40 != 0) {
    func_0x00010bd0c4c0();
    if ((bool)in_ZR) {
      plVar3 = unaff_x21;
      FUN_10bcece70();
      plVar5 = (long *)(unaff_x21[1] + ((ulong)*(byte *)((long)unaff_x21 + 3) & 3) * 0x18);
      if (*(char *)((long)plVar5 + 0x17) < '\0') {
        plVar5 = (long *)*plVar5;
      }
      func_0x00010bd0c048(plVar5);
      func_0x00010bd0b97c();
      *plVar3 = (long)unaff_x21;
    }
    FUN_10bced038(&lStack_40);
  }
  param_1[5] = (long)plVar1;
  return;
}



/* Entry: 10bcecf4c; end: 10bcecf73;  */

undefined1  [16] FUN_10bcecf4c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10bd0300c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10bcecf74; end: 10bced037;  */

long FUN_10bcecf74(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 uVar3;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  func_0x000107c3a6a4();
  func_0x00010bd0a5a0();
  func_0x00010bcfec44();
  lVar4 = 0;
  uVar5 = unaff_x19[2];
  func_0x00010bd0abe4(*unaff_x19 >> 0xc);
  uVar6 = extraout_x8;
  while( true ) {
    uVar6 = uVar6 & uVar5;
    func_0x00010bd0addc();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      uVar2 = (extraout_x8_00 & 0x8080808080808080) >> 7;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      param_2 = uVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar5;
      uVar2 = unaff_x19[1] + param_2 * 0x20;
      func_0x00010bcfec1c();
      if ((uVar2 & 1) != 0) goto LAB_10bced024;
      func_0x00010bd0bdc0();
      param_2 = uVar2;
    }
    func_0x00010bd0a514();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar6 = lVar4 + uVar6;
  }
  func_0x00010bd0ac5c();
  FUN_10bd03048();
  puVar1 = (undefined8 *)(unaff_x19[1] + param_2 * 0x20);
  uVar3 = unaff_x20[2];
  uVar7 = *unaff_x20;
  puVar1[1] = unaff_x20[1];
  *puVar1 = uVar7;
  puVar1[2] = uVar3;
  puVar1[3] = 0;
LAB_10bced024:
  return unaff_x19[1] + param_2 * 0x20 + 0x18;
}



/* Entry: 10bced038; end: 10bced06b;  */

long * FUN_10bced038(long *param_1)

{
  param_1[1] = param_1[1] + 8;
  *param_1 = *param_1 + 1;
  FUN_10bd0300c();
  return param_1;
}



/* Entry: 10bced06c; end: 10bced1a3;  */

bool FUN_10bced06c(long param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 *extraout_x8_01;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  func_0x00010bd0b914();
  func_0x00010bd0a9fc();
  Hint_Prefetch(*(undefined8 *)(param_1 + 200),0,2,0);
  in_stack_00000000 = param_2;
  FUN_10bd026b4(*(undefined8 *)(param_1 + 200));
  func_0x00010bd0bc04();
  func_0x00010bd0adb8();
  do {
    func_0x00010bd0addc();
    for (uVar6 = extraout_x8 & 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      param_2 = (undefined1 *)register0x00000008;
      FUN_10bd026d4();
      if (((ulong)param_2 & 1) != 0) goto LAB_10bced194;
    }
    func_0x00010bd0a514();
  } while ((extraout_x8_00 & 1) == 0);
  func_0x00010bd0c650();
  FUN_10bd036e0();
  *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + (long)param_2 * 8) = unaff_x20;
  puVar1 = *(undefined8 **)(unaff_x19 + 0x160);
  if (puVar1 < *(undefined8 **)(unaff_x19 + 0x168)) {
    puVar5 = puVar1 + 1;
    *puVar1 = unaff_x20;
  }
  else {
    lVar4 = unaff_x19 + 0x158;
    func_0x00010bcfe034(lVar4,((long)puVar1 - *(long *)(unaff_x19 + 0x158) >> 3) + 1);
    lVar2 = *(long *)(unaff_x19 + 0x158);
    lVar3 = *(long *)(unaff_x19 + 0x160);
    in_stack_00000028 = unaff_x19 + 0x168;
    if (lVar4 != 0) {
      FUN_10bcfe088();
    }
    func_0x00010bd0c44c(lVar3 - lVar2);
    in_stack_00000018 = extraout_x8_01 + 1;
    *extraout_x8_01 = unaff_x20;
    FUN_10bcfe05c(unaff_x19 + 0x158,&stack0x00000008);
    puVar5 = *(undefined8 **)(unaff_x19 + 0x160);
    func_0x00010bcfe0b0(&stack0x00000008);
  }
  *(undefined8 **)(unaff_x19 + 0x160) = puVar5;
LAB_10bced194:
  return uVar6 == 0;
}



/* Entry: 10bced1a4; end: 10bced293;  */

bool FUN_10bced1a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 unaff_x19;
  ulong *unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  
  func_0x00010bd0aa10();
  Hint_Prefetch(*param_1,0,2,0);
  puVar1 = &uStack_a8;
  uStack_a8 = param_2;
  FUN_10bd037c4(*param_1);
  lVar2 = 0;
  uVar3 = unaff_x20[2];
  func_0x00010bd0abe4(*unaff_x20 >> 0xc);
  uVar4 = extraout_x8;
  while( true ) {
    uVar4 = uVar4 & uVar3;
    func_0x00010bd0addc();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      func_0x000107c3a6e4();
      FUN_10bcfec74(auStack_88,unaff_x20[1] + (uVar4 + (extraout_x8_01 >> 3) & uVar3) * 8);
      puVar1 = auStack_a0;
      FUN_10bcfec74(puVar1,&uStack_a8);
      func_0x00010bd0bf58();
      if (((ulong)puVar1 & 1) != 0) goto LAB_10bced268;
      func_0x000107c3a6dc();
    }
    func_0x00010bd0a514();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar2 = lVar2 + 8;
    uVar4 = lVar2 + uVar4;
  }
  func_0x00010bd0b808();
  FUN_10bd037f0();
  *(undefined8 *)(unaff_x20[1] + (long)puVar1 * 8) = unaff_x19;
LAB_10bced268:
  return (extraout_x8_00 & 0x8080808080808080) == 0;
}



/* Entry: 10bced294; end: 10bced467;  */

bool FUN_10bced294(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong extraout_x10;
  long extraout_x11;
  ulong extraout_x12;
  ulong uVar5;
  ulong extraout_x12_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  
  func_0x00010bd0aa10();
  lVar4 = *(long *)(param_2 + 0x20);
  uVar1 = *(uint *)(param_2 + 4);
  if ((lVar4 == 0 || (int)uVar1 < 1) || (*(ushort *)(lVar4 + 2) < uVar1)) {
    puVar6 = (undefined8 *)(unaff_x20 + 0x38);
    Hint_Prefetch(*puVar6,0,2,0);
    func_0x00010bd0b69c();
    func_0x00010bd0aba8(0);
    do {
      func_0x00010bd0bcf4();
      for (uVar5 = extraout_x12; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
        uVar2 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        lVar4 = *(long *)(*(long *)(unaff_x20 + 0x40) +
                         (extraout_x11 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                         extraout_x10) * 8);
        if (*(long *)(lVar4 + 0x20) == *(long *)(unaff_x19 + 0x20) &&
            *(int *)(lVar4 + 4) == *(int *)(unaff_x19 + 4)) goto LAB_10bced37c;
      }
      func_0x00010bd0b32c();
    } while ((extraout_x12_00 & 1) == 0);
    FUN_10bd039c8();
    *(long *)(*(long *)(unaff_x20 + 0x40) + (long)puVar6 * 8) = unaff_x19;
    bVar3 = true;
  }
  else if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) {
    bVar3 = *(long *)(lVar4 + 0x38) + (ulong)uVar1 * 0x58 + -0x58 == unaff_x19;
  }
  else {
LAB_10bced37c:
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 10bced468; end: 10bced743;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10bced468(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 ******ppppppuVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  byte bVar11;
  undefined8 ******unaff_x20;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 uVar17;
  undefined8 ******ppppppuStack_88;
  uint uStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 *puStack_68;
  
  func_0x00010bd0a9fc();
  ppppppuVar15 = *(undefined8 *******)(param_2 + 0x20);
  uStack_80 = *(uint *)(param_2 + 4);
  ppppppuVar16 = (undefined8 ******)(ulong)uStack_80;
  ppppppuStack_88 = ppppppuVar15;
  if (*(long *)(param_1 + 0x118) == 0) {
    uVar2 = 1;
    FUN_10bd03adc();
    *(undefined8 *)(unaff_x19 + 0x108) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
  }
  pppppppuVar3 = (undefined8 *******)(unaff_x19 + 0x108);
  ppppppuVar14 = &ppppppuStack_88;
  FUN_10bcfe924();
  pppppppuVar4 = pppppppuVar3;
  ppppppuVar6 = ppppppuVar14;
  FUN_10bcfe9b4();
  if (pppppppuVar4 != (undefined8 *******)0x0) {
    if (ppppppuStack_88 == pppppppuVar4[(long)(int)ppppppuVar6 * 3 + 2]) {
      if (*(int *)(pppppppuVar4 + (long)(int)ppppppuVar6 * 3 + 3) <= (int)uStack_80) {
        return 0;
      }
    }
    else if (pppppppuVar4[(long)(int)ppppppuVar6 * 3 + 2] <= ppppppuStack_88) {
      return 0;
    }
  }
  bVar11 = *(byte *)((long)pppppppuVar3 + 0xb);
  pppppppuStack_78 = pppppppuVar3;
  ppppppuStack_70 = ppppppuVar14;
  if (bVar11 == 0) {
    pppppppuVar4 = &pppppppuStack_78;
    func_0x00010bd02800();
    ppppppuVar14 = (undefined8 ******)(ulong)((int)ppppppuStack_70 + 1U);
    ppppppuStack_70 = (undefined8 ******)CONCAT44(ppppppuStack_70._4_4_,(int)ppppppuStack_70 + 1U);
    bVar11 = *(byte *)((long)pppppppuStack_78 + 0xb);
  }
  pppppppuVar3 = pppppppuStack_78;
  uVar13 = (uint)ppppppuVar14;
  uVar8 = 10;
  if (bVar11 != 0) {
    uVar8 = (uint)bVar11;
  }
  pppppppuVar5 = pppppppuStack_78;
  if (*(byte *)((long)pppppppuStack_78 + 10) == uVar8) {
    if (uVar8 < 10) {
      uVar8 = (uVar8 & 0x7f) << 1;
      if (9 < uVar8) {
        uVar8 = 10;
      }
      pppppppuVar5 = (undefined8 *******)(ulong)uVar8;
      FUN_10bd03adc();
      bVar11 = *(byte *)((long)pppppppuVar3 + 10);
      for (lVar9 = 0x10; (ulong)bVar11 * -0x18 + lVar9 != 0x10; lVar9 = lVar9 + 0x18) {
        puVar12 = (undefined8 *)((long)pppppppuVar3 + lVar9);
        puVar1 = (undefined8 *)((long)pppppppuVar5 + lVar9);
        uVar17 = puVar12[1];
        uVar2 = *puVar12;
        puVar1[2] = puVar12[2];
        puVar1[1] = uVar17;
        *puVar1 = uVar2;
      }
      *(undefined1 *)((long)pppppppuVar5 + 10) = *(undefined1 *)((long)pppppppuVar3 + 10);
      *(undefined1 *)((long)pppppppuVar3 + 10) = 0;
      pppppppuStack_78 = pppppppuVar5;
      FUN_10bcfdb00();
      *(undefined8 ********)(unaff_x19 + 0x108) = pppppppuVar5;
      *(undefined8 ********)(unaff_x19 + 0x110) = pppppppuVar5;
      pppppppuVar4 = pppppppuVar3;
    }
    else {
      pppppppuVar4 = (undefined8 *******)(unaff_x19 + 0x108);
      FUN_10bd03b34(pppppppuVar4,&pppppppuStack_78);
      uVar13 = (uint)(byte)ppppppuStack_70;
      pppppppuVar5 = pppppppuStack_78;
    }
  }
  uVar7 = (ulong)(uVar13 & 0xff);
  bVar11 = *(byte *)((long)pppppppuVar5 + 10);
  if ((uVar13 & 0xff) < (uint)bVar11) {
    uVar10 = (ulong)(bVar11 - uVar13) & 0xff;
    pppppppuVar3 = pppppppuVar5 + uVar7 * 3 + uVar10 * 3 + -1;
    for (lVar9 = uVar10 * -0x18; lVar9 != 0; lVar9 = lVar9 + 0x18) {
      pppppppuVar3[4] = pppppppuVar3[1];
      pppppppuVar3[3] = *pppppppuVar3;
      pppppppuVar3[5] = pppppppuVar3[2];
      pppppppuVar3 = pppppppuVar3 + -3;
    }
    bVar11 = *(byte *)((long)pppppppuVar5 + 10);
  }
  pppppppuVar5[uVar7 * 3 + 2] = ppppppuVar15;
  pppppppuVar5[uVar7 * 3 + 3] = ppppppuVar16;
  pppppppuVar5[uVar7 * 3 + 4] = unaff_x20;
  bVar11 = bVar11 + 1;
  *(byte *)((long)pppppppuVar5 + 10) = bVar11;
  if ((*(char *)((long)pppppppuVar5 + 0xb) == '\0') && (uVar8 = (uVar13 & 0xff) + 1, uVar8 < bVar11)
     ) {
    while (uVar8 < bVar11) {
      func_0x00010bd0bae0();
      ppppppuVar15 = pppppppuVar4[(byte)(bVar11 - 1)];
      pppppppuVar4 = pppppppuVar5;
      FUN_10bd02bcc();
      pppppppuVar4[bVar11] = ppppppuVar15;
      *(byte *)(ppppppuVar15 + 1) = bVar11;
      bVar11 = bVar11 - 1;
    }
  }
  pppppppuVar3 = pppppppuStack_78;
  *(long *)(unaff_x19 + 0x118) = *(long *)(unaff_x19 + 0x118) + 1;
  uVar7 = (ulong)ppppppuStack_70 & 0xff;
  puVar12 = *(undefined8 **)(unaff_x19 + 400);
  if (puVar12 < *(undefined8 **)(unaff_x19 + 0x198)) {
    ppppppuVar15 = pppppppuStack_78[uVar7 * 3 + 2];
    puVar12[1] = pppppppuStack_78[uVar7 * 3 + 3];
    *puVar12 = ppppppuVar15;
    puVar12 = puVar12 + 2;
  }
  else {
    lVar9 = unaff_x19 + 0x188;
    FUN_10bcfe1a4(lVar9,((long)puVar12 - *(long *)(unaff_x19 + 0x188) >> 4) + 1);
    FUN_10bcfe210(&pppppppuStack_78,lVar9,
                  *(long *)(unaff_x19 + 400) - *(long *)(unaff_x19 + 0x188) >> 4,unaff_x19 + 0x198);
    ppppppuVar15 = pppppppuVar3[uVar7 * 3 + 2];
    puStack_68[1] = pppppppuVar3[uVar7 * 3 + 3];
    *puStack_68 = ppppppuVar15;
    puStack_68 = puStack_68 + 2;
    FUN_10bcfe1e4(unaff_x19 + 0x188,&pppppppuStack_78);
    puVar12 = *(undefined8 **)(unaff_x19 + 400);
    FUN_10bcfe268(&pppppppuStack_78);
  }
  *(undefined8 **)(unaff_x19 + 400) = puVar12;
  return 1;
}



/* Entry: 10bced744; end: 10bced8a3;  */

void FUN_10bced744(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  char in_NG;
  char in_OV;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long lVar6;
  long extraout_x9;
  undefined8 *extraout_x10;
  ulong extraout_x10_00;
  undefined8 extraout_x11;
  long extraout_x11_00;
  long unaff_x20;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  
  func_0x00010bd0c844();
  func_0x00010bd0aa10();
  func_0x00010b4d1804(&stack0x00000008,param_2);
  Hint_Prefetch(*(undefined8 *)(unaff_x20 + 0x120),0,2,0);
  func_0x00010bd0ac0c(*(undefined8 *)(unaff_x20 + 0x120));
  uVar1 = extraout_x11;
  puVar4 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    puVar4 = &stack0x00000008;
  }
  lVar6 = unaff_x20 + 0x120;
  func_0x000107c284ac(lVar6,puVar4,uVar1);
  lVar9 = 0;
  uVar10 = *(ulong *)(unaff_x20 + 0x130);
  func_0x00010bd0abe4(*(ulong *)(unaff_x20 + 0x120) >> 0xc);
  uVar11 = extraout_x8_00;
  while( true ) {
    uVar11 = uVar11 & uVar10;
    func_0x00010bd0addc();
    while ((extraout_x8_01 & 0x8080808080808080) != 0) {
      func_0x00010bd0c77c();
      uVar8 = uVar11 + (extraout_x8_02 >> 3) & uVar10;
      func_0x00010bd0c770(*(long *)(unaff_x20 + 0x128) + uVar8 * 0x20);
      uVar2 = in_stack_00000010;
      puVar4 = in_stack_00000008;
      if (-1 < (long)in_stack_00000018) {
        uVar2 = in_stack_00000018 >> 0x38;
        puVar4 = &stack0x00000008;
      }
      uVar5 = extraout_x10_00;
      if (-1 < extraout_x9) {
        uVar5 = extraout_x8_03;
      }
      lVar3 = extraout_x11_00;
      if (-1 < (int)extraout_x9) {
        lVar3 = extraout_x9;
      }
      func_0x000107c27944(uVar5,lVar3,puVar4,uVar2);
      if ((uVar5 & 1) != 0) goto LAB_10bced848;
      func_0x00010bd0c758();
    }
    func_0x00010bd0a514();
    if ((extraout_x8_04 & 1) != 0) break;
    lVar9 = lVar9 + 8;
    uVar11 = lVar9 + uVar11;
  }
  uVar8 = unaff_x20 + 0x120;
  FUN_10bd03f44(uVar8,lVar6);
  func_0x00010bd0c740(*(long *)(unaff_x20 + 0x128) + uVar8 * 0x20,in_stack_00000008);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = (undefined8 *)0x0;
  *(undefined8 *)(extraout_x8_05 + 0x18) = 0;
LAB_10bced848:
  lVar6 = *(long *)(unaff_x20 + 0x128);
  func_0x00010bd0aab8();
  plVar7 = (long *)(lVar6 + uVar8 * 0x20 + 0x18);
  lVar6 = *plVar7;
  if (lVar6 == 0) {
    __Znwm(0x48);
    FUN_10bd00070();
    in_stack_00000008 = (undefined8 *)0x0;
    func_0x00010bd0b808();
    FUN_10bd0408c();
    FUN_10bd0406c(&stack0x00000008);
    lVar6 = *plVar7;
  }
  func_0x00010bd0c820(lVar6);
  return;
}



/* Entry: 10bced8a4; end: 10bced963;  */

int * FUN_10bced8a4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_78 [16];
  long *plStack_68;
  undefined8 *puStack_58;
  
  func_0x00010bd0c370();
  if (param_2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar3 = (int *)((long)param_2 + 8);
    __Znwm();
    puStack_58 = (undefined8 *)(param_1 + 0xa8);
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 < (long *)*puStack_58) {
      plVar6 = plVar5 + 1;
      *plVar5 = (long)piVar3;
    }
    else {
      piVar4 = piVar3;
      func_0x00010bd0c6ec(*(undefined8 *)(param_1 + 0x98));
      func_0x00010bcfe398();
      lVar1 = *(long *)(param_1 + 0x98);
      lVar2 = *(long *)(param_1 + 0xa0);
      if (piVar4 != (int *)0x0) {
        FUN_10bcfe3ec();
      }
      func_0x00010bd0c44c(lVar2 - lVar1);
      plStack_68 = extraout_x8 + 1;
      *extraout_x8 = (long)piVar3;
      FUN_10bcfe3c0(param_1 + 0x98,auStack_78);
      plVar6 = *(long **)(param_1 + 0xa0);
      func_0x00010bcfe414(auStack_78);
    }
    *(long **)(param_1 + 0xa0) = plVar6;
    piVar4 = piVar3 + 2;
    *piVar3 = param_2;
  }
  return piVar4;
}



/* Entry: 10bced964; end: 10bcedb13;  */

void FUN_10bced964(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar11;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 extraout_x11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  func_0x00010bd0b914();
  uVar17 = 0;
  uVar10 = (ulong)(*(uint *)(param_1[1] + 0x18) &
                  ((int)*(uint *)(param_1[1] + 0x18) >> 0x1f ^ 0xffffffffU));
  do {
    cVar5 = SBORROW8(uVar17,uVar10);
    cVar6 = (long)(uVar17 - uVar10) < 0;
    bVar7 = uVar17 == uVar10;
    if (bVar7) {
      return;
    }
    lVar3 = *param_1;
    func_0x00010bd0b128();
    plVar1 = extraout_x8;
    if (!bVar7) {
      plVar1 = extraout_x10;
    }
    lVar12 = *plVar1;
    iVar4 = *(int *)(lVar12 + 0x18);
    puVar13 = *(undefined4 **)(lVar12 + 0x20);
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000018 = 0;
    func_0x00010bd0b5a0();
    for (lVar14 = (long)iVar4 << 2; lVar14 != 0; lVar14 = lVar14 + -4) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&stack0x00000018)
      ;
      FUN_10bd040b4(&stack0x00000018,*puVar13);
      puVar13 = puVar13 + 1;
    }
    Hint_Prefetch(*(undefined8 *)(lVar3 + 0xa0),0,2,0);
    func_0x00010bd0abf8(*(undefined8 *)(lVar3 + 0xa0));
    uVar2 = extraout_x11;
    puVar9 = extraout_x10_00;
    if (cVar6 == cVar5) {
      uVar2 = extraout_x8_00;
      puVar9 = &stack0x00000018;
    }
    uVar8 = lVar3 + 0xa0;
    func_0x000107c284ac(uVar8,puVar9,uVar2);
    lVar14 = 0;
    uVar16 = *(ulong *)(lVar3 + 0xb0);
    uVar11 = *(ulong *)(lVar3 + 0xa0) >> 0xc ^ uVar8 >> 7;
    while( true ) {
      uVar11 = uVar11 & uVar16;
      func_0x000107c3a6b8();
      while ((extraout_x8_01 & 0x8080808080808080) != 0) {
        func_0x000107c3a6e4();
        uVar15 = uVar11 + (extraout_x8_02 >> 3) & uVar16;
        puVar9 = &stack0x00000018;
        FUN_10bd04160(puVar9,*(long *)(lVar3 + 0xa8) + uVar15 * 0x20);
        if (((ulong)puVar9 & 1) != 0) goto LAB_10bcedac8;
        func_0x000107c3a6dc();
      }
      func_0x000107c3a674();
      if ((extraout_x8_03 & 1) != 0) break;
      lVar14 = lVar14 + 8;
      uVar11 = lVar14 + uVar11;
    }
    uVar15 = lVar3 + 0xa0;
    func_0x00010bd040f0(uVar15,uVar8);
    func_0x00010bd0c740(*(long *)(lVar3 + 0xa8) + uVar15 * 0x20,in_stack_00000018);
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000018 = 0;
    *(undefined8 *)(extraout_x8_04 + 0x18) = 0;
LAB_10bcedac8:
    *(long *)(*(long *)(lVar3 + 0xa8) + uVar15 * 0x20 + 0x18) = lVar12;
    func_0x00010bd0aacc();
    uVar17 = uVar17 + 1;
  } while( true );
}



/* Entry: 10bcedb14; end: 10bcedb7b;  */

void FUN_10bcedb14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar1 = 0x1a0;
  __Znwm();
  func_0x000107c31564();
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((long)param_1 + 0x31) = 0;
  func_0x000107c3a6bc();
  func_0x000107c3a6e0();
  return;
}



/* Entry: 10bcedb7c; end: 10bcedbbf;  */

void FUN_10bcedb7c(long param_1)

{
  long unaff_x19;
  
  func_0x000107c3a6ac();
  if (param_1 != 0) {
    func_0x00010ae7c720();
    __ZdlPv();
  }
  FUN_10bd042c8(unaff_x19 + 0x58);
  FUN_10bcfe794(unaff_x19 + 0x38);
  func_0x00010bd04274(unaff_x19 + 0x28);
  func_0x00010bd0c2d0();
  return;
}



/* Entry: 10bcedbc0; end: 10bcedbdb;  */

bool FUN_10bcedbc0(long param_1)

{
  FUN_10bd0431c();
  return param_1 != 0;
}



/* Entry: 10bcedbdc; end: 10bcedc87;  */

undefined8 FUN_10bcedbdc(ulong param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  
  func_0x00010bd0b250();
  func_0x000107c3a688();
  Hint_Prefetch(*(undefined8 *)(param_1 + 0xe8),0,2,0);
  func_0x00010bd0ba80(*(undefined8 *)(param_1 + 0xe8));
  uVar1 = *(ulong *)(unaff_x19 + 0xf8);
  func_0x00010bd0a4e0(*(ulong *)(unaff_x19 + 0xe8) >> 0xc);
  do {
    func_0x00010bd0addc();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x00010bd0bc14();
      func_0x00010bd0b114();
      func_0x000107c27944();
      if ((param_1 & 1) != 0) {
        return *(undefined8 *)(*(long *)(unaff_x19 + 0xf0) + (extraout_x8_00 & uVar1) * 8);
      }
      func_0x00010bd0bdc0();
    }
    func_0x00010bd0a514();
  } while ((extraout_x8_01 & 1) == 0);
  return 0;
}



/* Entry: 10bcedc88; end: 10bcedcaf;  */

undefined8 FUN_10bcedc88(undefined8 param_1)

{
  func_0x000107c31578();
  func_0x00010bcfe840();
  func_0x00010bcfe84c();
  return param_1;
}



/* Entry: 10bcedcb0; end: 10bceddab;  */

long FUN_10bcedcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  bool bVar1;
  undefined1 in_ZR;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined8 *unaff_x21;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined1 auStack_120 [216];
  undefined8 uStack_48;
  
  func_0x00010bd0a9ec();
  func_0x00010bd0a30c();
  uStack_48 = extraout_x8;
  func_0x00010bd0b42c();
  uVar5 = *unaff_x21;
  func_0x00010bd0b6d4();
  if (unaff_x21[1] != 0) {
    func_0x00010bd0b694(unaff_x21[5]);
    func_0x00010bd0b5d0(unaff_x21[5]);
  }
  lVar2 = unaff_x21[5];
  func_0x00010bd0ad80();
  FUN_10bcedbdc();
  if (lVar2 == 0) {
    lVar2 = unaff_x21[3];
    if (lVar2 != 0) {
      func_0x00010bd0ad80();
      FUN_10bcedcb0();
      if (lVar2 != 0) goto LAB_10bcedd0c;
    }
    param_4 = auStack_120;
    func_0x00010bd0a8ec();
    FUN_10bceddac();
    if ((int)lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar2 = unaff_x21[5];
      func_0x00010bd0ad80();
      FUN_10bcedbdc();
      lVar4 = lVar2;
    }
    bVar1 = true;
  }
  else {
LAB_10bcedd0c:
    bVar1 = false;
    lVar4 = lVar2;
  }
  func_0x00010bd0aefc();
  if (bVar1) {
    func_0x00010bd0b6dc();
    in_ZR = (int)lVar2 == 0;
    if ((bool)in_ZR) {
      lVar4 = 0;
    }
  }
  func_0x00010bd0af04();
  func_0x000107c3a64c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0af04();
    func_0x00010bd0a974();
    if (*(long *)(lVar2 + 8) != 0) {
      uVar3 = *(long *)(lVar2 + 0x28) + 0x18;
      uStack_170 = uVar5;
      uStack_168 = param_3;
      lStack_160 = lVar4;
      FUN_10bcedbc0(uVar3,&uStack_170);
      if ((uVar3 & 1) == 0) {
        FUN_10bcee994(param_4);
        lVar4 = *(long *)(lVar2 + 8);
        FUN_10bcee9cc(lVar4,uStack_170,uStack_168,param_4);
        if ((int)lVar4 != 0) {
          func_0x00010bd0ac5c();
          FUN_10bceea2c();
          if (lVar4 != 0) {
            return 1;
          }
        }
        FUN_10bceeae8(auStack_188,*(long *)(lVar2 + 0x28) + 0x18,&uStack_170);
      }
    }
    return 0;
  }
  return lVar4;
}



/* Entry: 10bceddac; end: 10bcede4b;  */

undefined8 FUN_10bceddac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = *(long *)(param_1 + 0x28) + 0x18;
    uStack_40 = param_2;
    uStack_38 = param_3;
    FUN_10bcedbc0(uVar1,&uStack_40);
    if ((uVar1 & 1) == 0) {
      FUN_10bcee994(param_4);
      lVar2 = *(long *)(param_1 + 8);
      FUN_10bcee9cc(lVar2,uStack_40,uStack_38,param_4);
      if ((int)lVar2 != 0) {
        func_0x00010bd0ac5c();
        FUN_10bceea2c();
        if (lVar2 != 0) {
          return 1;
        }
      }
      FUN_10bceeae8(auStack_58,*(long *)(param_1 + 0x28) + 0x18,&uStack_40);
    }
  }
  return 0;
}



/* Entry: 10bcede4c; end: 10bcede93;  */

undefined1 * FUN_10bcede4c(undefined1 *param_1)

{
  switch(*param_1) {
  case 1:
  case 2:
  case 4:
  case 7:
    goto code_r0x00010bcede80;
  case 3:
  case 5:
  case 8:
    param_1 = *(undefined1 **)(param_1 + 0x10);
code_r0x00010bcede80:
    return *(undefined1 **)(param_1 + 0x10);
  default:
    return (undefined1 *)0x0;
  case 9:
    return param_1;
  case 10:
    return *(undefined1 **)(param_1 + 8);
  }
}



/* Entry: 10bcede94; end: 10bcedf03;  */

undefined8 FUN_10bcede94(undefined8 param_1)

{
  undefined1 in_ZR;
  
  func_0x00010bd0a9dc();
  func_0x00010bd0c218();
  func_0x00010bd0adc4();
  if (!(bool)in_ZR) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10bcedf04; end: 10bcee04f;  */

long * FUN_10bcedf04(long *param_1,long param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  long *plVar4;
  long unaff_x20;
  long *unaff_x21;
  long lStack_160;
  undefined4 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_120;
  undefined8 uStack_48;
  
  func_0x00010bd0a30c();
  uStack_48 = extraout_x8;
  uVar3 = param_3;
  if (*(int *)(param_2 + 0x88) == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    func_0x00010bd0b168();
    if (*param_1 != 0) {
      lStack_120 = *param_1;
      func_0x00010ae7ccdc();
      plVar1 = (long *)unaff_x21[5];
      func_0x00010bd0b498();
      param_1 = plVar1;
      func_0x00010bd0baa8();
      if (plVar1 != (long *)0x0) goto LAB_10bcee008;
    }
    func_0x00010bd0b42c();
    param_2 = *unaff_x21;
    func_0x00010bd0b6d4();
    if (unaff_x21[1] != 0) {
      func_0x00010bd0b694(unaff_x21[5]);
      func_0x00010bd0b5d0(unaff_x21[5]);
    }
    param_1 = (long *)unaff_x21[5];
    func_0x00010bd0b498();
    if ((param_1 == (long *)0x0) &&
       ((param_1 = (long *)unaff_x21[3], param_1 == (long *)0x0 ||
        (uVar3 = param_3, FUN_10bcedf04(), param_2 = unaff_x20, param_1 == (long *)0x0)))) {
      func_0x00010bd0b114();
      uVar3 = param_3;
      FUN_10bcee0ac();
      if ((int)param_1 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        param_1 = (long *)unaff_x21[5];
        func_0x00010bd0b498();
        plVar4 = param_1;
      }
      plVar1 = (long *)0x0;
      unaff_x20 = 1;
    }
    else {
      unaff_x20 = 0;
      plVar4 = param_1;
      plVar1 = param_1;
    }
    func_0x00010bd0aefc();
    if ((int)unaff_x20 != 0) {
      func_0x00010bd0b6dc();
      in_ZR = (int)param_1 == 0;
      plVar1 = plVar4;
      if ((bool)in_ZR) {
        plVar1 = (long *)0x0;
      }
    }
    func_0x00010bd0af04();
  }
LAB_10bcee008:
  func_0x000107c3a64c(uStack_48);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar4 = param_1;
  func_0x00010bd0af04();
  func_0x00010bd0a974();
  plVar2 = &lStack_160;
  pcStack_138 = FUN_10bcee050;
  plVar1 = plVar4 + 0x21;
  lStack_160 = param_2;
  uStack_158 = uVar3;
  lStack_150 = unaff_x20;
  plStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10bcfe858();
  if ((long *)plVar4[0x22] == plVar1 && (uint)plVar2 == (uint)*(byte *)(plVar4[0x22] + 10)) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = (long *)plVar1[((ulong)plVar2 & 0xff) * 3 + 4];
  }
  return plVar1;
}



/* Entry: 10bcee050; end: 10bcee0ab;  */

undefined8 FUN_10bcee050(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar3 = &uStack_30;
  lVar1 = param_1 + 0x108;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_10bcfe858();
  if (*(long *)(param_1 + 0x110) == lVar1 &&
      (uint)puVar3 == (uint)*(byte *)(*(long *)(param_1 + 0x110) + 10)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + ((ulong)puVar3 & 0xff) * 0x18 + 0x20);
  }
  return uVar2;
}



/* Entry: 10bcee0ac; end: 10bcee157;  */

long * FUN_10bcee0ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10bcee994();
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x20))();
    if ((int)plVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010bd0b7fc(*(undefined8 *)(param_4 + 0xb0));
      FUN_10bcedbdc();
      if (lVar2 == 0) {
        func_0x00010bd0b808();
        FUN_10bceea2c();
        plVar1 = (long *)(ulong)(lVar2 != 0);
      }
      else {
        plVar1 = (long *)0x0;
      }
    }
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 10bcee158; end: 10bcee1ab;  */

long FUN_10bcee158(long param_1,long param_2)

{
  long lVar1;
  long unaff_x21;
  
  if (*(int *)(param_2 + 0x88) != 0) {
    func_0x00010bd0b168();
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_10bcee050();
    if ((lVar1 == 0) &&
       ((lVar1 = *(long *)(unaff_x21 + 0x18), lVar1 == 0 || (FUN_10bcee158(), lVar1 == 0)))) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 10bcee1ac; end: 10bcee28b;  */

long FUN_10bcee1ac(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_2 + 0x88) == 0) {
    return 0;
  }
  lVar4 = param_1;
  func_0x00010bd0c5bc();
  func_0x00010bcedeb4();
  if ((lVar4 == 0) || (in_ZR = *(long *)(lVar4 + 0x20) == param_2, !(bool)in_ZR)) {
    func_0x00010bd0bde4(*(undefined8 *)(param_2 + 0x20));
    if ((bool)in_ZR) {
      func_0x00010bcede94(param_1,param_3,param_4);
      if (param_1 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 0x8c);
      lVar3 = param_1;
      for (lVar4 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar4 != 0;
          lVar4 = lVar4 + 0x58) {
        lVar5 = *(long *)(param_1 + 0x60);
        if (*(long *)(lVar5 + lVar4 + 0x20) == param_2) {
          func_0x00010bd0b120();
          bVar2 = (int)lVar3 == 0xb;
          if (((bVar2) && (func_0x00010bd0b814(*(undefined1 *)(lVar5 + lVar4 + 1)), bVar2)) &&
             (func_0x00010bd0af68(), lVar3 == param_1)) {
            return lVar5 + lVar4;
          }
        }
      }
    }
    lVar4 = 0;
  }
  return lVar4;
}



/* Entry: 10bcee28c; end: 10bcee2cf;  */

undefined8 FUN_10bcee28c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bd0aa3c();
  }
  if ((*(byte *)(param_1 + 2) & 0xfe) == 10) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10bcee2d0; end: 10bcee2ff;  */

void FUN_10bcee2d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x98);
  FUN_10bcee300(lVar1,param_1,param_2);
  if (lVar1 != 0) {
    func_0x00010bd0c4f4();
  }
  return;
}



/* Entry: 10bcee300; end: 10bcee3eb;  */

long FUN_10bcee300(ulong param_1,long param_2,uint param_3)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x10;
  long extraout_x11;
  byte bVar4;
  int extraout_w12;
  ulong uVar5;
  ulong extraout_x13;
  ulong uVar6;
  ulong extraout_x14;
  ulong extraout_x15;
  long unaff_x19;
  long unaff_x20;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined8 uVar16;
  
  func_0x00010bd0aa10();
  if (((param_2 == 0) || ((int)param_3 < 1)) || (*(ushort *)(unaff_x19 + 2) < param_3)) {
    func_0x00010bd0c2e8(*(undefined8 *)(unaff_x20 + 0x38));
    lVar1 = 0;
    uVar3 = *(ulong *)(unaff_x20 + 0x48);
    uVar2 = *(ulong *)(unaff_x20 + 0x38);
    uVar5 = uVar2 >> 0xc ^ param_1 >> 7;
    bVar4 = (byte)param_1 & 0x7f;
    uVar14 = 0x8080808080808080;
    bVar7 = bVar4;
    bVar8 = bVar4;
    bVar9 = bVar4;
    bVar10 = bVar4;
    bVar11 = bVar4;
    bVar12 = bVar4;
    bVar13 = bVar4;
    while( true ) {
      uVar5 = uVar5 & uVar3;
      uVar16 = *(undefined8 *)(uVar2 + uVar5);
      uVar6 = CONCAT17(-((byte)((ulong)uVar16 >> 0x38) == bVar13),
                       CONCAT16(-((byte)((ulong)uVar16 >> 0x30) == bVar12),
                                CONCAT15(-((byte)((ulong)uVar16 >> 0x28) == bVar11),
                                         CONCAT14(-((byte)((ulong)uVar16 >> 0x20) == bVar10),
                                                  CONCAT13(-((byte)((ulong)uVar16 >> 0x18) == bVar9)
                                                           ,CONCAT12(-((byte)((ulong)uVar16 >> 0x10)
                                                                      == bVar8),
                                                                     CONCAT11(-((byte)((ulong)uVar16
                                                                                      >> 8) == bVar7
                                                                               ),-((byte)uVar16 ==
                                                                                  bVar4)))))))) &
              0x8080808080808080;
      while (uVar6 != 0) {
        func_0x00010bd0bc44();
        lVar1 = *(long *)(extraout_x11 + (extraout_x15 & extraout_x10) * 8);
        if (*(long *)(lVar1 + 0x20) == unaff_x19 && *(int *)(lVar1 + 4) == extraout_w12) {
          if (extraout_x9 == 0) {
            return 0;
          }
          return lVar1;
        }
        uVar5 = extraout_x13;
        lVar1 = extraout_x8;
        uVar2 = extraout_x9;
        uVar3 = extraout_x10;
        uVar6 = extraout_x14 - 1 & extraout_x14;
      }
      bVar15 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar16 >> 0x38) == (char)((ulong)uVar14 >> 0x38))
                                   ,CONCAT16(-((char)((ulong)uVar16 >> 0x30) ==
                                              (char)((ulong)uVar14 >> 0x30)),
                                             CONCAT15(-((char)((ulong)uVar16 >> 0x28) ==
                                                       (char)((ulong)uVar14 >> 0x28)),
                                                      CONCAT14(-((char)((ulong)uVar16 >> 0x20) ==
                                                                (char)((ulong)uVar14 >> 0x20)),
                                                               CONCAT13(-((char)((ulong)uVar16 >>
                                                                                0x18) ==
                                                                         (char)((ulong)uVar14 >>
                                                                               0x18)),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar16 >> 0x10) == (char)((ulong)uVar14 >> 0x10)),
                                                  CONCAT11(-((char)((ulong)uVar16 >> 8) ==
                                                            (char)((ulong)uVar14 >> 8)),
                                                           -((char)uVar16 == (char)uVar14)))))))),1)
      ;
      if ((bVar15 & 1) != 0) break;
      lVar1 = lVar1 + 8;
      uVar5 = lVar1 + uVar5;
    }
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(unaff_x19 + 0x38) + (ulong)param_3 * 0x58 + -0x58;
  }
  return lVar1;
}



/* Entry: 10bcee3ec; end: 10bcee40f;  */

void FUN_10bcee3ec(long param_1)

{
  func_0x00010bd0a8d4();
  FUN_10bcee410();
  if (param_1 != 0) {
    func_0x00010bd0c4f4();
  }
  return;
}



/* Entry: 10bcee410; end: 10bcee47f;  */

void FUN_10bcee410(long param_1)

{
  long lStack_38;
  
  func_0x00010bd0b07c();
  lStack_38 = param_1;
  FUN_10bcfead0(param_1 + 0x20,&stack0xffffffffffffffb0,&lStack_38);
  FUN_10bcfeaf0();
  return;
}



/* Entry: 10bcee480; end: 10bcee4af;  */

undefined8 FUN_10bcee480(undefined8 param_1)

{
  undefined1 in_ZR;
  
  func_0x00010bd0a8d4();
  FUN_10bcee4b0();
  func_0x00010bd0c5b0();
  if ((bool)in_ZR) {
    func_0x00010bd0c4f4();
    if (!(bool)in_ZR) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



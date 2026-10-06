/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd1337c; end: 10bd133a7;  */

long FUN_10bd1337c(long param_1)

{
  func_0x000107c3a718();
  FUN_10bd0955c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bd133a8; end: 10bd133ab;  */

long FUN_10bd133a8(long param_1)

{
  func_0x000107c3a718();
  FUN_10bd0955c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bd133ac; end: 10bd133bf;  */

void FUN_10bd133ac(void)

{
  FUN_10bd1337c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd133c0; end: 10bd133cb;  */

void FUN_10bd133c0(void)

{
  Hint_Prefetch(0x1134096f0,0,0,0);
  Hint_Prefetch(PTR_DAT_1134096f0,0,0,0);
  return;
}



/* Entry: 10bd133cc; end: 10bd13403;  */

void FUN_10bd133cc(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  func_0x00010bd151f8();
  puVar1 = (ulong *)(param_1 + 0x10);
  plVar2 = (long *)(param_2 + 0x10);
  FUN_10bd1349c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14fa0();
    if ((*puVar1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(plVar2[1] - *plVar2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd13404; end: 10bd1349b;  */

long * FUN_10bd13404(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bd14e8c();
  func_0x00010bd1553c();
  while (unaff_w22 != unaff_w21) {
    func_0x00010bd14c28();
    param_1 = (long *)0x1;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
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



/* Entry: 10bd1349c; end: 10bd134ab;  */

void FUN_10bd1349c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_10bd095ac(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bd134ac; end: 10bd134db;  */

void FUN_10bd134ac(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bd15154();
  func_0x00010bd0ccf8();
  func_0x00010bd151e4();
  func_0x00010bd151f8();
  puVar1 = (ulong *)(param_1 + 0x10);
  plVar2 = (long *)(param_2 + 0x10);
  FUN_10bd1349c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14fa0();
    if ((*puVar1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(plVar2[1] - *plVar2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd134dc; end: 10bd134f7;  */

undefined1  [16] FUN_10bd134dc(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 10bd134f8; end: 10bd13523;  */

undefined8 FUN_10bd134f8(undefined8 param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a760();
  func_0x00010bd155cc();
  return param_1;
}



/* Entry: 10bd13524; end: 10bd13527;  */

undefined8 FUN_10bd13524(undefined8 param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a760();
  func_0x00010bd155cc();
  return param_1;
}



/* Entry: 10bd13528; end: 10bd1353b;  */

void FUN_10bd13528(void)

{
  FUN_10bd134f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd1353c; end: 10bd13547;  */

void FUN_10bd1353c(void)

{
  Hint_Prefetch(0x1134097a8,0,0,0);
  Hint_Prefetch(PTR_DAT_1134097a8,0,0,0);
  return;
}



/* Entry: 10bd13548; end: 10bd135d7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd13548(ulong *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x00010bd151a0();
  func_0x000107c282d0();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd14f38(*(undefined8 *)(unaff_x20 + 0x30));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x19 + 0x30);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x20 + 0x38);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x3c) = *(undefined4 *)(unaff_x20 + 0x3c);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x20 + 0x40);
    }
  }
  func_0x00010bd14f4c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14fa0();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
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



/* Entry: 10bd135d8; end: 10bd13623;  */

void FUN_10bd135d8(ulong *param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = param_1[2];
  if ((uVar1 & 1) != 0) {
    func_0x00010bd154bc();
  }
  if ((uVar1 & 0xe) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    param_1[7] = 0;
  }
  func_0x00010bd1529c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*param_1 != param_1[1]) {
    lVar2 = (long)((param_1[1] - *param_1) * 0x10000000) >> 0x20;
    lVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_10bd36708(*param_1 + lVar2);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    param_1[1] = *param_1;
    return;
  }
  return;
}



/* Entry: 10bd13624; end: 10bd137ab;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10bd13624(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong extraout_x8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  func_0x00010bd14e8c();
  uVar7 = *(uint *)(param_1 + 5);
  if (0 < (int)uVar7) {
    func_0x00010bd14e28();
    *(undefined1 *)param_1 = 10;
    while (0x7f < uVar7) {
      func_0x00010bd15344();
    }
    func_0x00010bd156bc();
    do {
      func_0x00010bd14e28();
      uVar8 = (ulong)*(int *)(ulong)uVar7;
      param_4 = (long *)((long)param_1 + 1);
      while (bVar3 = 0x7f < uVar8, bVar3) {
        func_0x00010bd15330();
        uVar8 = extraout_x8;
      }
      func_0x00010bd1551c();
    } while (!bVar3);
  }
  uVar7 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar7 & 1) != 0) {
    func_0x00010bd14f18(*(undefined8 *)(unaff_x20 + 0x30));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x38);
    func_0x00010bd153a0();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x3c);
    func_0x00010bd153a0();
    func_0x0001088bdd44();
    param_4 = param_1;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd152dc();
    func_0x00010bd14e34();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
  lVar12 = 0;
  plVar4 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar12) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar12 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar4;
    param_2 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar8 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar8);
      func_0x000107c280ac(plVar6,uVar8);
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
      lVar10 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar10;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x000107c280a4();
        if (lVar11 <= (long)(lVar13 + ~(ulong)((long)plVar4 + (long)(int)plVar6) + 0x10)) {
          puVar9 = (undefined1 *)((long)plVar4 + 2);
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            puVar9[-2] = (byte)uVar7 | 0x80;
            puVar9 = puVar9 + 1;
          }
          puVar9[-2] = (byte)uVar7;
          puVar9[-1] = (char)lVar11;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(puVar9 + lVar11);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar10,plVar4);
      param_2 = plVar6;
      break;
    case 4:
      uVar8 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar8);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar8,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar12 = lVar12 + 1;
    plVar4 = plVar6;
  } while( true );
}



/* Entry: 10bd137ac; end: 10bd137e3;  */

long FUN_10bd137ac(long param_1)

{
  func_0x000107c3a718();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10bd137e4; end: 10bd137e7;  */

long FUN_10bd137e4(long param_1)

{
  func_0x000107c3a718();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10bd137e8; end: 10bd137fb;  */

void FUN_10bd137e8(void)

{
  FUN_10bd137ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd137fc; end: 10bd13807;  */

void FUN_10bd137fc(void)

{
  Hint_Prefetch(0x113409938,0,0,0);
  Hint_Prefetch(PTR_DAT_113409938,0,0,0);
  return;
}



/* Entry: 10bd13808; end: 10bd13887;  */

void FUN_10bd13808(ulong *param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  long unaff_x22;
  
  func_0x00010bd151f8();
  if ((int)param_2[3] != 0) {
    func_0x00010bd155fc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14fa0();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd13888; end: 10bd1391f;  */

long * FUN_10bd13888(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bd14e8c();
  func_0x00010bd1553c();
  while (unaff_w22 != unaff_w21) {
    func_0x00010bd14c28();
    param_1 = (long *)0x1;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
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



/* Entry: 10bd13920; end: 10bd139f7;  */

void FUN_10bd13920(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    func_0x000107c3a60c();
  }
  else {
    func_0x00010bcdd1d0();
  }
  func_0x000107c3a5f0(&UNK_110d9be30);
  *(undefined8 *)(param_2 + 0x18) = extraout_x8;
  *(undefined1 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10bd139f8; end: 10bd13a97;  */

void FUN_10bd139f8(void)

{
  func_0x00010bd14ff8();
  FUN_10bd0d1cc();
  return;
}



/* Entry: 10bd13a98; end: 10bd13abf;  */

void FUN_10bd13a98(void)

{
  long extraout_x8;
  
  func_0x000107c3a728();
  if (extraout_x8 != 0) {
    func_0x000107c3a720();
  }
  return;
}



/* Entry: 10bd13ac0; end: 10bd13aeb;  */

long * FUN_10bd13ac0(long *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x000107c31644(param_1 + 7);
  FUN_10bd13a98(param_1 + 4);
  if (*param_1 == 0) {
    puVar3 = (undefined8 *)param_1[2];
    if ((long)*(short *)((long)param_1 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        func_0x000107c30280(lVar2 + 0x18);
        func_0x000107c398e8();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        func_0x000107c30280(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)param_1 + 10) < 0) {
      if (param_1[2] != 0) {
        func_0x000107c302a0();
      }
      func_0x000107c60e14();
    }
    else {
      func_0x000107c60e10();
    }
  }
  return param_1;
}



/* Entry: 10bd13aec; end: 10bd13b13;  */

void FUN_10bd13aec(void)

{
  long extraout_x8;
  
  func_0x000107c3a728();
  if (extraout_x8 != 0) {
    func_0x000107c3a720();
  }
  return;
}



/* Entry: 10bd13b14; end: 10bd13b2f;  */

void FUN_10bd13b14(void)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x000107c3a70c();
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        func_0x000107c30280(lVar2 + 0x18);
        func_0x000107c398e8();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        func_0x000107c30280(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        func_0x000107c302a0();
      }
      func_0x000107c60e14();
    }
    else {
      func_0x000107c60e10();
    }
  }
  return;
}



/* Entry: 10bd13b30; end: 10bd13b57;  */

void FUN_10bd13b30(void)

{
  long extraout_x8;
  
  func_0x000107c3a728();
  if (extraout_x8 != 0) {
    func_0x000107c3a720();
  }
  return;
}



/* Entry: 10bd13b58; end: 10bd13c37;  */

long * FUN_10bd13b58(long *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x000107c31644(param_1 + 9);
  FUN_10bd13b30(param_1 + 6);
  func_0x000107c282dc(param_1 + 4);
  if (*param_1 == 0) {
    puVar3 = (undefined8 *)param_1[2];
    if ((long)*(short *)((long)param_1 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        func_0x000107c30280(lVar2 + 0x18);
        func_0x000107c398e8();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        func_0x000107c30280(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)param_1 + 10) < 0) {
      if (param_1[2] != 0) {
        func_0x000107c302a0();
      }
      func_0x000107c60e14();
    }
    else {
      func_0x000107c60e10();
    }
  }
  return param_1;
}



/* Entry: 10bd13c38; end: 10bd13c5f;  */

void FUN_10bd13c38(void)

{
  long extraout_x8;
  
  func_0x000107c3a728();
  if (extraout_x8 != 0) {
    func_0x000107c3a720();
  }
  return;
}



/* Entry: 10bd13c60; end: 10bd13c87;  */

void FUN_10bd13c60(void)

{
  long extraout_x8;
  
  func_0x000107c3a728();
  if (extraout_x8 != 0) {
    func_0x000107c3a720();
  }
  return;
}



/* Entry: 10bd13c88; end: 10bd13e87;  */

void FUN_10bd13c88(long param_1)

{
  if (param_1 == 0) {
    func_0x00010bd15624();
  }
  else {
    func_0x00010bd1562c();
  }
  func_0x00010bd1538c(&PTR_FUN_110d9bee0);
  *(undefined **)(param_1 + 0x30) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10bd13e88; end: 10bd13e9b;  */

void FUN_10bd13e88(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10bd13e9c; end: 10bd1402f;  */

undefined8 * FUN_10bd13e9c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0xe0;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0xe0);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d9c7f0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd15570();
  func_0x00010598fd00();
  FUN_10bd139f8(puVar2 + 6,param_1,param_2 + 0x30);
  func_0x00010bd13a18(puVar2 + 9,param_1,param_2 + 0x48);
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = param_1;
  func_0x00010bd0d1fc(puVar2 + 0xc,param_2 + 0x60);
  func_0x00010bd13a38(puVar2 + 0xf,param_1,param_2 + 0x78);
  func_0x00010bd15614(puVar2 + 0x12);
  func_0x00010bd15614(puVar2 + 0x14);
  lVar3 = param_2 + 0xb0;
  func_0x00010bd15178();
  puVar2[0x16] = lVar3;
  lVar3 = param_2 + 0xb8;
  func_0x00010bd15178();
  puVar2[0x17] = lVar3;
  lVar3 = param_2 + 0xc0;
  func_0x00010bd15178();
  puVar2[0x18] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 >> 3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    FUN_10bd14030(param_1,*(undefined8 *)(param_2 + 200));
  }
  puVar2[0x19] = puVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10bd1406c(param_1,*(undefined8 *)(param_2 + 0xd0));
  }
  puVar2[0x1a] = param_1;
  *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  return puVar2;
}



/* Entry: 10bd14030; end: 10bd1406b;  */

long FUN_10bd14030(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    __Znwm(0xb0);
  }
  else {
    func_0x00010b4d80e0();
  }
  func_0x00010bd1526c();
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9c390);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14d54();
  func_0x00010bd14f28();
  lVar1 = unaff_x20 + 0x48;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x48) = lVar1;
  lVar1 = unaff_x20 + 0x50;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x50) = lVar1;
  lVar1 = unaff_x20 + 0x58;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x58) = lVar1;
  lVar1 = unaff_x20 + 0x60;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x60) = lVar1;
  lVar1 = unaff_x20 + 0x68;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x68) = lVar1;
  lVar1 = unaff_x20 + 0x70;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x70) = lVar1;
  lVar1 = unaff_x20 + 0x78;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x78) = lVar1;
  lVar1 = unaff_x20 + 0x80;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x80) = lVar1;
  lVar1 = unaff_x20 + 0x88;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x88) = lVar1;
  lVar1 = unaff_x20 + 0x90;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x90) = lVar1;
  func_0x00010bd14e40();
  if ((*(byte *)(unaff_x19 + 0x29) >> 2 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bd152a8();
  }
  *(long *)(unaff_x19 + 0x98) = lVar1;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa5) = *(undefined8 *)(unaff_x20 + 0xa5);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  return unaff_x19;
}



/* Entry: 10bd1406c; end: 10bd140cb;  */

void FUN_10bd1406c(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15204();
  }
  else {
    func_0x00010bd15148();
  }
  func_0x00010bd152fc();
  func_0x00010bd15360(&PTR_FUN_110d9c160);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  *(undefined8 *)(unaff_x21 + 0x10) = 0;
  *(undefined8 *)(unaff_x21 + 0x18) = 0;
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x20;
  FUN_10bd1349c((undefined8 *)(unaff_x21 + 0x10),unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  return;
}



/* Entry: 10bd140cc; end: 10bd1425f;  */

undefined8 * FUN_10bd140cc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xe8;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0xe8);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110d9c7a0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd1554c();
  func_0x00010bd13a38();
  func_0x00010bd139f8(puVar1 + 6,param_1,param_2 + 0x30);
  func_0x00010bd13a18(puVar1 + 9,param_1,param_2 + 0x48);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = param_1;
  FUN_10bd0db80(puVar1 + 0xc,param_2 + 0x60);
  func_0x00010bd13a38(puVar1 + 0xf,param_1,param_2 + 0x78);
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = param_1;
  func_0x00010bd0db98(puVar1 + 0x12,param_2 + 0x90);
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = param_1;
  func_0x00010bd0dbb0(puVar1 + 0x15,param_2 + 0xa8);
  func_0x00010598fd00(puVar1 + 0x18,param_1,param_2 + 0xc0);
  lVar2 = param_2 + 0xd8;
  func_0x00010bd151b4();
  puVar1[0x1b] = lVar2;
  if ((*(byte *)(puVar1 + 2) >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010bd144d0(param_1,*(undefined8 *)(param_2 + 0xe0));
  }
  puVar1[0x1c] = param_1;
  return puVar1;
}



/* Entry: 10bd14260; end: 10bd14333;  */

undefined8 * FUN_10bd14260(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010bd15654();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110d9c750;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd153d0();
  FUN_10bd0ee84();
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_1;
  func_0x00010bd0ee9c(puVar1 + 6,param_2 + 0x30);
  func_0x00010bd15448();
  lVar2 = param_2 + 0x60;
  func_0x00010bd151b4();
  puVar1[0xc] = lVar2;
  if ((*(byte *)(puVar1 + 2) >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010bd147c4(param_1,*(undefined8 *)(param_2 + 0x68));
  }
  puVar1[0xd] = param_1;
  return puVar1;
}



/* Entry: 10bd14334; end: 10bd143cf;  */

undefined8 * FUN_10bd14334(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010bd15640();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d9c700;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd153d0();
  FUN_10bd0f3c8();
  lVar2 = param_2 + 0x30;
  func_0x00010bd151b4();
  puVar1[6] = lVar2;
  if ((*(byte *)(puVar1 + 2) >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010bd148f8(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  puVar1[7] = param_1;
  return puVar1;
}



/* Entry: 10bd143d0; end: 10bd1449b;  */

undefined8 * FUN_10bd143d0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010bd155d4();
  }
  else {
    func_0x00010bd155dc();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d9c610;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010bd14e1c();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x00010bd15178();
  puVar1[3] = lVar2;
  lVar2 = param_2 + 0x20;
  func_0x00010bd15178();
  puVar1[4] = lVar2;
  lVar2 = param_2 + 0x28;
  func_0x00010bd15178();
  puVar1[5] = lVar2;
  lVar2 = param_2 + 0x30;
  func_0x00010bd15178();
  puVar1[6] = lVar2;
  lVar2 = param_2 + 0x38;
  func_0x00010bd15178();
  puVar1[7] = lVar2;
  if ((*(byte *)(puVar1 + 2) >> 5 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010bd1474c(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar1[8] = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(puVar1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  puVar1[10] = uVar4;
  puVar1[9] = uVar3;
  return puVar1;
}



/* Entry: 10bd1449c; end: 10bd144ff;  */

long FUN_10bd1449c(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    __Znwm(0x70);
  }
  else {
    func_0x00010bd15654();
  }
  func_0x00010bd1526c();
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9c480);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14d54();
  func_0x00010bd13a58(unaff_x22 + 0x20);
  lVar1 = unaff_x19 + 0x48;
  func_0x00010bd13a78();
  func_0x00010bd14e40();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bd152a8();
  }
  *(long *)(unaff_x19 + 0x60) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
  return unaff_x19;
}



/* Entry: 10bd14500; end: 10bd145fb;  */

void FUN_10bd14500(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15410();
  }
  else {
    func_0x00010bd153c4();
  }
  func_0x00010bd152fc();
  func_0x00010bd15360(&PTR_FUN_110d9c6b0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10bd1449c();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 10bd145fc; end: 10bd1465f;  */

undefined8 * FUN_10bd145fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010bd15608();
  }
  *puVar1 = &PTR_FUN_110d9c0c0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x00010bd0d530();
  return puVar1;
}



/* Entry: 10bd14660; end: 10bd14693;  */

long FUN_10bd14660(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15624();
  }
  else {
    func_0x00010bd1562c();
  }
  func_0x00010bd1526c();
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9bfd0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  func_0x00010b4c043c((undefined8 *)(unaff_x19 + 0x10),unaff_x19,unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return unaff_x19;
}



/* Entry: 10bd14694; end: 10bd1469f;  */

void FUN_10bd14694(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_10bd146a0(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bd146a0; end: 10bd1470b;  */

void FUN_10bd146a0(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15204();
  }
  else {
    func_0x00010bd15148();
  }
  func_0x00010bd152fc();
  func_0x00010bd15360(&PTR_FUN_110d9c020);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14e9c();
  *(long *)(unaff_x21 + 0x18) = param_1;
  lVar2 = unaff_x19 + 0x20;
  func_0x00010bd151b4();
  *(long *)(unaff_x21 + 0x20) = lVar2;
  uVar1 = *(undefined2 *)(unaff_x19 + 0x2c);
  *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined2 *)(unaff_x21 + 0x2c) = uVar1;
  return;
}



/* Entry: 10bd1470c; end: 10bd14717;  */

void FUN_10bd1470c(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_10bd14718(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bd14718; end: 10bd147f3;  */

long FUN_10bd14718(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd155d4();
  }
  else {
    func_0x00010bd155dc();
  }
  func_0x00010bd1526c();
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9c110);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd15570();
  func_0x00010bd13c18();
  lVar1 = unaff_x20 + 0x30;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x30) = lVar1;
  lVar1 = unaff_x20 + 0x38;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x38) = lVar1;
  lVar1 = unaff_x20 + 0x40;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x40) = lVar1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  return unaff_x19;
}



/* Entry: 10bd147f4; end: 10bd1485f;  */

void FUN_10bd147f4(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15204();
  }
  else {
    func_0x00010bd15148();
  }
  func_0x00010bd152fc();
  func_0x00010bd15360(&PTR_DAT_110d9c660);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14e9c();
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((*(byte *)(unaff_x21 + 0x10) >> 1 & 1) != 0) {
    FUN_10bd148c4();
  }
  func_0x00010bd15758();
  return;
}



/* Entry: 10bd14860; end: 10bd148c3;  */

undefined8 * FUN_10bd14860(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010bd15608();
  }
  *puVar1 = &PTR_FUN_110d9c070;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x00010bd0ea60();
  return puVar1;
}



/* Entry: 10bd148c4; end: 10bd14927;  */

long FUN_10bd148c4(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd155d4();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010bd155dc();
  }
  func_0x00010bd1526c();
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9c4d0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14d54();
  func_0x00010bd14f28();
  func_0x00010bd14e40();
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bd15130();
  }
  *(long *)(unaff_x19 + 0x48) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_10bd149ec();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  *(undefined2 *)(unaff_x19 + 0x58) = *(undefined2 *)(unaff_x20 + 0x58);
  return unaff_x19;
}



/* Entry: 10bd14928; end: 10bd149bb;  */

void FUN_10bd14928(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    param_1 = 0x40;
    __Znwm();
  }
  else {
    func_0x00010bd15640();
  }
  func_0x00010bd152fc();
  func_0x00010bd15360(&PTR_FUN_110d9c5c0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14e9c();
  *(long *)(unaff_x21 + 0x18) = param_1;
  lVar1 = unaff_x19 + 0x20;
  func_0x00010bd151b4();
  *(long *)(unaff_x21 + 0x20) = lVar1;
  lVar1 = unaff_x19 + 0x28;
  func_0x00010bd151b4();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  if ((*(byte *)(unaff_x21 + 0x10) >> 3 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10bd149bc();
  }
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x20;
  *(undefined2 *)(unaff_x21 + 0x38) = *(undefined2 *)(unaff_x19 + 0x38);
  return;
}



/* Entry: 10bd149bc; end: 10bd149eb;  */

long FUN_10bd149bc(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15468();
  }
  else {
    func_0x00010bd151d0();
  }
  func_0x00010bd1526c();
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9c2f0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14d54();
  func_0x00010bd14f28();
  func_0x00010bd14e40();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bd15130();
  }
  *(long *)(unaff_x19 + 0x48) = param_1;
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  return unaff_x19;
}



/* Entry: 10bd149ec; end: 10bd14a4b;  */

void FUN_10bd149ec(long param_1)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15204();
  }
  else {
    func_0x00010bd15148();
  }
  func_0x00010bd152fc();
  func_0x00010bd15360(&PTR_FUN_110d9bf30);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14e9c();
  *(long *)(unaff_x21 + 0x18) = param_1;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x21 + 0x28) = uVar1;
  return;
}



/* Entry: 10bd14a4c; end: 10bd14a7b;  */

long FUN_10bd14a4c(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15410();
  }
  else {
    func_0x00010bd153c4();
  }
  func_0x00010bd1526c();
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9bf80);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar1 = unaff_x20 + 0x18;
  func_0x00010bd15178();
  *(long *)(unaff_x19 + 0x18) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
  return unaff_x19;
}



/* Entry: 10bd14a7c; end: 10bd14a87;  */

void FUN_10bd14a7c(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_10bd14a88(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bd14a88; end: 10bd14adf;  */

void FUN_10bd14a88(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15410();
  }
  else {
    func_0x00010bd153c4();
  }
  func_0x00010bd152fc();
  func_0x00010bd15360(&PTR_FUN_110d9be40);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14e9c();
  *(long *)(unaff_x21 + 0x18) = param_1;
  *(undefined1 *)(unaff_x21 + 0x20) = *(undefined1 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 10bd14ae0; end: 10bd14aeb;  */

void FUN_10bd14ae0(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_10bd14aec(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bd14aec; end: 10bd14b67;  */

void FUN_10bd14aec(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15204();
  }
  else {
    func_0x00010bd15148();
  }
  func_0x00010bd152fc();
  func_0x00010bd15360(&PTR_FUN_110d9c200);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bd1564c();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010bd1564c();
  }
  func_0x00010bd15758();
  return;
}



/* Entry: 10bd14b68; end: 10bd14bfb;  */

void FUN_10bd14b68(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010bd15154();
  if (param_1 == 0) {
    func_0x00010bd15624();
  }
  else {
    func_0x00010bd1562c();
  }
  func_0x00010bd152fc();
  func_0x00010bd15360(&PTR_FUN_110d9bee0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  func_0x000107c282d4(unaff_x21 + 0x18);
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  lVar1 = unaff_x19 + 0x30;
  func_0x00010bd151b4();
  *(long *)(unaff_x21 + 0x30) = lVar1;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined4 *)(unaff_x21 + 0x40) = *(undefined4 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x21 + 0x38) = uVar2;
  return;
}



/* Entry: 10bd14bfc; end: 10bd15057;  */

void FUN_10bd14bfc(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 unaff_x19;
  int unaff_w21;
  ulong *unaff_x23;
  
  if ((*unaff_x23 & 1) != 0) {
    unaff_x23 = (ulong *)(*unaff_x23 + (long)unaff_w21 * 8 + 7);
  }
  plVar2 = (long *)*unaff_x23;
  uVar3 = (ulong)*(uint *)((long)plVar2 + 0x14);
  func_0x0001001a597c();
  uVar1 = 0x1f3a;
  func_0x0001001a59d0(0x1f3a,unaff_x19);
  func_0x0001001a59d0(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,uVar3);
  return;
}



/* Entry: 10bd15058; end: 10bd15073;  */

void FUN_10bd15058(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010bd0e2b8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  return;
}



/* Entry: 10bd15074; end: 10bd1576b;  */

void FUN_10bd15074(void)

{
  return;
}



/* Entry: 10bd1576c; end: 10bd1578b;  */

void FUN_10bd1576c(void)

{
  func_0x00010bd17790();
  func_0x00010bd1771c();
  return;
}



/* Entry: 10bd1578c; end: 10bd15857;  */

void FUN_10bd1578c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char in_NG;
  char in_OV;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  int extraout_w12;
  long unaff_x20;
  int unaff_w25;
  ulong uVar13;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [56];
  
  FUN_10bd17704();
  uVar1 = extraout_x11;
  uVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    uVar2 = param_2;
  }
  func_0x00010bd17940();
  lVar12 = *(long *)(unaff_x20 + 0x38);
  uVar3 = *(long *)(unaff_x20 + 0x40) - *(long *)(unaff_x20 + 0x38) >> 5;
  while (lVar11 = lVar12, uVar3 != 0) {
    uVar13 = uVar3 >> 1;
    lVar12 = lVar11 + uVar13 * 0x20;
    lVar9 = lVar12;
    FUN_10bd16518(lVar12,uVar2,uVar1);
    lVar12 = lVar12 + 0x20;
    uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
    if ((int)lVar9 == 0) {
      lVar12 = lVar11;
      uVar3 = uVar13;
    }
  }
  lVar12 = *(long *)(unaff_x20 + 0x40);
  cVar4 = SBORROW8(lVar12,lVar11);
  cVar5 = lVar12 - lVar11 < 0;
  uVar6 = lVar12 == lVar11;
  if (!(bool)uVar6) {
    func_0x00010bd179fc(lVar11);
    lVar12 = extraout_x9;
    iVar10 = extraout_w12;
    if (cVar5 == cVar4) {
      lVar12 = extraout_x8_00;
      iVar10 = extraout_w10;
    }
    func_0x00010bd17a3c();
    if ((int)lVar12 != 0) {
      func_0x00010bd17960();
      goto LAB_10bd15838;
    }
  }
  lVar12 = 0;
  iVar10 = 0;
LAB_10bd15838:
  if (lVar12 == 0) {
    return;
  }
  lVar11 = (long)iVar10;
  plVar7 = param_3;
  func_0x00010bd0a0d0();
  lStack_a8 = lVar12;
  lStack_a0 = lVar11;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  func_0x000107c30388(auStack_98,uRam0000000113375758,0,&plStack_b0,&lStack_a8);
  plVar7 = param_3;
  func_0x000107c3032c(param_3,plStack_b0,auStack_98);
  plVar8 = (long *)0x0;
  plStack_b0 = plVar7;
  if ((plVar7 != (long *)0x0) && (unaff_w25 == 0)) {
    func_0x000107c3037c();
    plVar8 = param_3;
  }
  func_0x000107c3a63c();
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x00010bcf1650();
    if ((((ulong)plVar8 & 1) == 0) && (func_0x00010bd0c2a4(), plVar8 != (long *)0x0)) {
      func_0x00010bd0c2a4();
      func_0x00010bd0bbf4();
    }
    return;
  }
  return;
}



/* Entry: 10bd15858; end: 10bd15867;  */

void FUN_10bd15858(long param_1,int param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [80];
  int iStack_48;
  
  if (param_1 == 0) {
    return;
  }
  lVar3 = (long)param_2;
  plVar1 = param_3;
  func_0x00010bd0a0d0();
  lStack_a8 = param_1;
  lStack_a0 = lVar3;
  (**(code **)(*plVar1 + 0x18))(plVar1);
  func_0x000107c30388(auStack_98,uRam0000000113375758,0,&plStack_b0,&lStack_a8);
  plVar1 = param_3;
  func_0x000107c3032c(param_3,plStack_b0,auStack_98);
  plVar2 = (long *)0x0;
  plStack_b0 = plVar1;
  if ((plVar1 != (long *)0x0) && (iStack_48 == 0)) {
    func_0x000107c3037c();
    plVar2 = param_3;
  }
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bcf1650();
    if ((((ulong)plVar2 & 1) == 0) && (func_0x00010bd0c2a4(), plVar2 != (long *)0x0)) {
      func_0x00010bd0c2a4();
      func_0x00010bd0bbf4();
    }
    return;
  }
  return;
}



/* Entry: 10bd15868; end: 10bd15a4f;  */

void FUN_10bd15868(undefined8 *****param_1,undefined8 *****param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  ulong uVar4;
  char in_NG;
  char in_OV;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined8 *****pppppuVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong extraout_x8;
  undefined8 *****extraout_x10;
  ulong extraout_x11;
  ulong uVar15;
  undefined8 *unaff_x20;
  int unaff_w25;
  ulong *puVar16;
  uint uVar17;
  undefined8 ****ppppuStack_b8;
  long *plStack_b0;
  undefined8 ****ppppuStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ****ppppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_10bd17704();
  uVar2 = extraout_x11;
  pppppuVar3 = extraout_x10;
  if (in_NG == in_OV) {
    uVar2 = extraout_x8;
    pppppuVar3 = param_2;
  }
  func_0x00010bd17940();
  iVar10 = (int)param_2;
  puVar16 = (ulong *)unaff_x20[0xb];
  lVar11 = unaff_x20[0xe];
  uVar4 = (long)(unaff_x20[0xf] - unaff_x20[0xe]) >> 5;
  while (uVar4 != 0) {
    uVar15 = uVar4 >> 1;
    lVar1 = lVar11 + uVar15 * 0x20;
    uStack_70 = (undefined8 *****)0x0;
    uStack_68 = 0;
    plVar12 = (long *)*puVar16;
    ppppuStack_80 = pppppuVar3;
    uStack_78 = uVar2;
    func_0x000107c316a8(&lStack_a0,plVar12,lVar1);
    pppppuVar9 = &ppppuStack_80;
    func_0x000107c3a870();
    ppppuStack_b8 = pppppuVar9;
    plStack_b0 = plVar12;
    func_0x000107c3a870(&lStack_a0);
    iVar10 = (int)plVar12;
    param_1 = &ppppuStack_b8;
    func_0x000107c3a8b4();
    if ((uint)param_1 == 0) {
      cVar5 = SBORROW8(uStack_78,uStack_98);
      cVar6 = (long)(uStack_78 - uStack_98) < 0;
      if (uStack_78 == uStack_98) {
        param_1 = uStack_70;
        uVar13 = uStack_68;
        func_0x000107c27bd8(uStack_70,uStack_68,uStack_90,uStack_88);
        iVar10 = (int)uVar13;
        func_0x000107c3a8cc();
        uVar17 = (uint)(cVar6 != cVar5);
      }
      else {
        func_0x000107c3165c(&ppppuStack_b8,lVar1,*puVar16);
        cVar6 = (long)ppppuStack_a8 < 0;
        cVar5 = '\0';
        plVar12 = plStack_b0;
        pppppuVar9 = (undefined8 *****)ppppuStack_b8;
        if (!(bool)cVar6) {
          plVar12 = (long *)((ulong)ppppuStack_a8 >> 0x38);
          pppppuVar9 = &ppppuStack_b8;
        }
        uVar14 = uVar2;
        func_0x000107c27bd8(pppppuVar3,uVar2,pppppuVar9,plVar12);
        iVar10 = (int)uVar14;
        func_0x000107c3a8cc();
        uVar17 = (uint)(cVar6 != cVar5);
        param_1 = &ppppuStack_b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    else {
      uVar17 = (uint)param_1 >> 0x1f;
    }
    uVar14 = uVar4 + ~uVar15;
    uVar4 = uVar15;
    if (uVar17 == 0) {
      lVar11 = lVar1 + 0x20;
      uVar4 = uVar14;
    }
  }
  lVar1 = 0;
  if (unaff_x20[0xe] != lVar11) {
    lVar1 = -0x20;
  }
  if (lVar11 + lVar1 == unaff_x20[0xf]) {
    uVar7 = 1;
  }
  else {
    func_0x000107c3165c(&ppppuStack_80,lVar11 + lVar1,*unaff_x20);
    uVar7 = uStack_70._7_1_ == 0;
    pppppuVar9 = (undefined8 *****)ppppuStack_80;
    if (-1 < (long)uStack_70) {
      uStack_78 = (ulong)uStack_70._7_1_;
      pppppuVar9 = &ppppuStack_80;
    }
    func_0x000107c31660(pppppuVar9,uStack_78,pppppuVar3,uVar2);
    iVar10 = (int)uStack_78;
    param_1 = &ppppuStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x000107c3a858();
  if (param_1 != (undefined8 *****)0x0) {
    lVar11 = (long)iVar10;
    plVar12 = param_3;
    func_0x00010bd0a0d0();
    ppppuStack_a8 = param_1;
    lStack_a0 = lVar11;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    func_0x000107c30388(&uStack_98,uRam0000000113375758,0,&plStack_b0,&ppppuStack_a8);
    plVar12 = param_3;
    func_0x000107c3032c(param_3,plStack_b0,&uStack_98);
    plVar8 = (long *)0x0;
    plStack_b0 = plVar12;
    if ((plVar12 != (long *)0x0) && (unaff_w25 == 0)) {
      func_0x000107c3037c();
      plVar8 = param_3;
    }
    func_0x000107c3a63c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    ppppuStack_b8 = (undefined8 ****)0x10bcfd6b8;
    func_0x00010bcf1650();
    if ((((ulong)plVar8 & 1) == 0) && (func_0x00010bd0c2a4(), plVar8 != (long *)0x0)) {
      func_0x00010bd0c2a4();
      func_0x00010bd0bbf4();
    }
    return;
  }
  return;
}



/* Entry: 10bd15a50; end: 10bd15b87;  */

void FUN_10bd15a50(undefined8 param_1,undefined8 param_2,int param_3,long *param_4)

{
  char in_NG;
  char in_OV;
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x10;
  long unaff_x20;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [64];
  undefined8 auStack_58 [2];
  int iStack_48;
  
  FUN_10bd17704();
  auStack_58[0] = extraout_x10;
  if (in_NG == in_OV) {
    auStack_58[0] = param_2;
  }
  func_0x00010bd17940();
  lVar6 = *(long *)(unaff_x20 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xb0);
  iStack_48 = param_3;
  FUN_10bd1617c(lVar6,uVar7,auStack_58);
  iVar5 = (int)uVar7;
  uVar1 = *(long *)(unaff_x20 + 0xb0) == lVar6;
  if (!(bool)uVar1) {
    lVar4 = lVar6;
    FUN_10bd1620c();
    func_0x000107c27944();
    if (((int)lVar4 != 0) && (uVar1 = *(int *)(lVar6 + 0x20) == param_3, (bool)uVar1)) {
      func_0x00010bd17960();
      goto FUN_10bd15858;
    }
  }
  lVar4 = 0;
  iVar5 = 0;
FUN_10bd15858:
  if (lVar4 == 0) {
    return;
  }
  lVar6 = (long)iVar5;
  plVar2 = param_4;
  func_0x00010bd0a0d0();
  lStack_a8 = lVar4;
  lStack_a0 = lVar6;
  (**(code **)(*plVar2 + 0x18))(plVar2);
  func_0x000107c30388(auStack_98,uRam0000000113375758,0,&plStack_b0,&lStack_a8);
  plVar2 = param_4;
  func_0x000107c3032c(param_4,plStack_b0,auStack_98);
  plVar3 = (long *)0x0;
  plStack_b0 = plVar2;
  if ((plVar2 != (long *)0x0) && (iStack_48 == 0)) {
    func_0x000107c3037c();
    plVar3 = param_4;
  }
  func_0x000107c3a63c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bcf1650();
  if ((((ulong)plVar3 & 1) == 0) && (func_0x00010bd0c2a4(), plVar3 != (long *)0x0)) {
    func_0x00010bd0c2a4();
    func_0x00010bd0bbf4();
  }
  return;
}



/* Entry: 10bd15b88; end: 10bd1617b;  */

void FUN_10bd15b88(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  long in_register_00005008;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  ulong uStack_68;
  
  plVar4 = &lStack_b0;
  plVar6 = &lStack_b0;
  plVar7 = &lStack_b0;
  uVar9 = param_2[1] - *param_2;
  plVar5 = param_2;
  if (uVar9 < (ulong)(param_2[2] - *param_2)) {
    lVar10 = (long)uVar9 / 0x28;
    func_0x000107c31668(&lStack_b0,lVar10,lVar10);
    if ((ulong)(lStack_98 - lStack_b0) < (ulong)(param_2[2] - *param_2)) {
      func_0x000107c31664(param_2,&lStack_b0);
    }
    func_0x000107c3166c();
    plVar5 = plVar4;
  }
  if (param_2[6] != 0) {
    uVar9 = param_2[6] + (param_2[8] - param_2[7] >> 5);
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    puStack_70 = (undefined1 *)&lStack_b0;
    if (uVar9 != 0) {
      if (uVar9 >> 0x3b != 0) {
        puStack_70 = (undefined1 *)&lStack_b0;
        FUN_10bd17434();
        goto LAB_10bd160fc;
      }
      puStack_70 = (undefined1 *)&lStack_b0;
      func_0x00010bd17a1c();
      func_0x00010bd179ac(plVar5 + uVar9 * 4);
      for (lVar10 = uVar9 * 0x20; lStack_a8 = extraout_x8, lVar10 != 0; lVar10 = lVar10 + -0x20) {
        plVar5[1] = in_register_00005008;
        *plVar5 = param_1;
        plVar5[3] = in_register_00005008;
        plVar5[2] = param_1;
        plVar5 = plVar5 + 4;
      }
    }
    func_0x00010bd179ec();
    FUN_10bd17440();
    uVar14 = 0;
    puVar13 = *(undefined1 **)param_2[3];
    puVar12 = (undefined1 *)param_2[5];
    bVar2 = puVar12[10];
    lVar10 = param_2[7];
    lVar1 = param_2[8];
    uStack_78 = 0;
    lVar11 = lStack_b0;
    puStack_80 = puVar13;
    while (puVar13 != puVar12 || uVar14 != bVar2) {
      if (lVar10 == lVar1) {
        uStack_68 = uStack_78 & 0xffffffff;
        uVar9 = uStack_78;
        puStack_70 = puVar13;
        while (puStack_70 != puVar12 || (uint)uVar9 != (uint)bVar2) {
          func_0x00010bd1746c(lVar11,puStack_70 + (ulong)((uint)uVar9 & 0xff) * 0x20 + 0x10);
          func_0x00010bd1748c(&puStack_70);
          lVar11 = lVar11 + 0x20;
          uVar9 = uStack_68 & 0xffffffff;
        }
        goto LAB_10bd15d08;
      }
      lVar8 = lVar10;
      func_0x000107c316a0(lVar10,puVar13 + (ulong)(uVar14 & 0xff) * 0x20 + 0x10);
      if ((int)lVar8 == 0) {
        func_0x00010bd1746c(lVar11,puVar13 + (ulong)(uVar14 & 0xff) * 0x20 + 0x10);
        func_0x00010bd1748c(&puStack_80);
        puVar13 = puStack_80;
        uVar14 = (uint)uStack_78;
      }
      else {
        func_0x000107c3a858();
        func_0x00010bd1746c();
        lVar10 = lVar10 + 0x20;
      }
      lVar11 = lVar11 + 0x20;
    }
    for (; lVar10 != lVar1; lVar10 = lVar10 + 0x20) {
      func_0x000107c3a858();
      func_0x00010bd1746c();
    }
LAB_10bd15d08:
    if (param_2[7] != 0) {
      FUN_10bd16680(param_2 + 7);
      __ZdlPv(param_2[7]);
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
    }
    in_register_00005008 = lStack_a8;
    param_1 = lStack_b0;
    param_2[8] = lStack_a8;
    param_2[7] = lStack_b0;
    param_2[9] = lStack_a0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    FUN_10bd166bc(param_2 + 3);
    FUN_10bd16628();
    plVar5 = plVar6;
  }
  if (param_2[0xd] != 0) {
    uVar9 = param_2[0xd] + (param_2[0xf] - param_2[0xe] >> 5);
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    puStack_70 = (undefined1 *)&lStack_b0;
    if (uVar9 != 0) {
      if (uVar9 >> 0x3b != 0) {
        puStack_70 = (undefined1 *)&lStack_b0;
        FUN_10bd17504();
        goto LAB_10bd160fc;
      }
      puStack_70 = (undefined1 *)&lStack_b0;
      func_0x00010bd17a1c();
      func_0x00010bd179ac(plVar5 + uVar9 * 4);
      for (lVar10 = uVar9 * 0x20; lStack_a8 = extraout_x8_00, lVar10 != 0; lVar10 = lVar10 + -0x20)
      {
        plVar5[1] = in_register_00005008;
        *plVar5 = param_1;
        plVar5[3] = in_register_00005008;
        plVar5[2] = param_1;
        plVar5 = plVar5 + 4;
      }
    }
    func_0x00010bd179ec();
    FUN_10bd17510();
    uVar14 = 0;
    lStack_88 = param_2[0xb];
    puVar13 = *(undefined1 **)param_2[10];
    puVar12 = (undefined1 *)param_2[0xc];
    bVar2 = puVar12[10];
    lVar10 = param_2[0xe];
    lVar1 = param_2[0xf];
    uStack_78 = 0;
    lVar11 = lStack_b0;
    puStack_80 = puVar13;
    while (puVar13 != puVar12 || uVar14 != bVar2) {
      if (lVar10 == lVar1) {
        uStack_68 = uStack_78 & 0xffffffff;
        uVar9 = uStack_78;
        puStack_70 = puVar13;
        while (puStack_70 != puVar12 || (uint)uVar9 != (uint)bVar2) {
          func_0x00010bd1753c(lVar11,puStack_70 + (ulong)((uint)uVar9 & 0xff) * 0x20 + 0x10);
          FUN_10bd173bc(&puStack_70);
          lVar11 = lVar11 + 0x20;
          uVar9 = uStack_68 & 0xffffffff;
        }
        goto LAB_10bd15e50;
      }
      plVar5 = &lStack_88;
      func_0x000107c316a4(plVar5,lVar10,puVar13 + (ulong)(uVar14 & 0xff) * 0x20 + 0x10);
      if ((int)plVar5 == 0) {
        func_0x00010bd1753c(lVar11,puVar13 + (ulong)(uVar14 & 0xff) * 0x20 + 0x10);
        FUN_10bd173bc(&puStack_80);
        puVar13 = puStack_80;
        uVar14 = (uint)uStack_78;
      }
      else {
        func_0x000107c3a858();
        func_0x00010bd1753c();
        lVar10 = lVar10 + 0x20;
      }
      lVar11 = lVar11 + 0x20;
    }
    for (; lVar10 != lVar1; lVar10 = lVar10 + 0x20) {
      func_0x000107c3a858();
      func_0x00010bd1753c();
    }
LAB_10bd15e50:
    if (param_2[0xe] != 0) {
      FUN_10bd1659c(param_2 + 0xe);
      __ZdlPv(param_2[0xe]);
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0x10] = 0;
    }
    in_register_00005008 = lStack_a8;
    param_1 = lStack_b0;
    param_2[0xf] = lStack_a8;
    param_2[0xe] = lStack_b0;
    param_2[0x10] = lStack_a0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    FUN_10bd165d8(param_2 + 10);
    FUN_10bd16544();
    plVar5 = plVar7;
  }
  if (param_2[0x14] != 0) {
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    uVar9 = (param_2[0x16] - param_2[0x15]) / 0x28 + param_2[0x14];
    puStack_70 = (undefined1 *)&lStack_b0;
    if (uVar9 != 0) {
      if (0x666666666666666 < uVar9) {
        puStack_70 = (undefined1 *)&lStack_b0;
        FUN_10bd1755c();
LAB_10bd160fc:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10bd16100);
        (*pcVar3)();
      }
      puStack_70 = (undefined1 *)&lStack_b0;
      func_0x00010bd17a1c();
      func_0x00010bd179ac(plVar5 + uVar9 * 5);
      for (lVar10 = uVar9 * 0x28; lStack_a8 = extraout_x8_01, lVar10 != 0; lVar10 = lVar10 + -0x28)
      {
        plVar5[4] = 0;
        plVar5[1] = in_register_00005008;
        *plVar5 = param_1;
        plVar5[3] = in_register_00005008;
        plVar5[2] = param_1;
        plVar5 = plVar5 + 5;
      }
    }
    func_0x00010bd179ec();
    FUN_10bd17568();
    uVar14 = 0;
    puVar13 = *(undefined1 **)param_2[0x11];
    puVar12 = (undefined1 *)param_2[0x13];
    bVar2 = puVar12[10];
    lVar10 = param_2[0x15];
    lVar1 = param_2[0x16];
    uStack_78 = 0;
    lVar11 = lStack_b0;
    puStack_80 = puVar13;
    while (puVar13 != puVar12 || uVar14 != bVar2) {
      if (lVar10 == lVar1) {
        uStack_68 = uStack_78 & 0xffffffff;
        uVar9 = uStack_78;
        puStack_70 = puVar13;
        while (puStack_70 != puVar12 || (uint)uVar9 != (uint)bVar2) {
          FUN_10bd17608(lVar11,puStack_70 + (ulong)((uint)uVar9 & 0xff) * 0x28 + 0x10);
          func_0x00010bd17630(&puStack_70);
          lVar11 = lVar11 + 0x28;
          uVar9 = uStack_68 & 0xffffffff;
        }
        goto LAB_10bd15fb0;
      }
      lVar8 = lVar10;
      FUN_10bd16cec(lVar10,puVar13 + (ulong)(uVar14 & 0xff) * 0x28 + 0x10);
      if ((int)lVar8 == 0) {
        FUN_10bd17608(lVar11,puVar13 + (ulong)(uVar14 & 0xff) * 0x28 + 0x10);
        func_0x00010bd17630(&puStack_80);
        puVar13 = puStack_80;
        uVar14 = (uint)uStack_78;
      }
      else {
        func_0x000107c3a858();
        FUN_10bd17608();
        lVar10 = lVar10 + 0x28;
      }
      lVar11 = lVar11 + 0x28;
    }
    for (; lVar10 != lVar1; lVar10 = lVar10 + 0x28) {
      func_0x000107c3a858();
      FUN_10bd17608();
    }
LAB_10bd15fb0:
    if (param_2[0x15] != 0) {
      FUN_10bd175c8(param_2 + 0x15);
      __ZdlPv(param_2[0x15]);
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
    }
    param_2[0x16] = lStack_a8;
    param_2[0x15] = lStack_b0;
    param_2[0x17] = lStack_a0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    func_0x00010bd176a8(param_2 + 0x11);
    func_0x00010bd176e0(&lStack_b0);
  }
  return;
}



/* Entry: 10bd1617c; end: 10bd1620b;  */

long FUN_10bd1617c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  func_0x000107c3a8c4();
  uVar1 = (param_2 - param_1) / 0x28;
  while (lVar2 = unaff_x20, uVar1 != 0) {
    uVar5 = uVar1 >> 1;
    lVar4 = lVar2 + uVar5 * 0x28;
    func_0x000107c3a8a8();
    uStack_60 = *(undefined8 *)(unaff_x19 + 0x10);
    lVar3 = lVar4;
    FUN_10bd1648c(lVar4,auStack_70);
    uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
    unaff_x20 = lVar4 + 0x28;
    if ((int)lVar3 == 0) {
      uVar1 = uVar5;
      unaff_x20 = lVar2;
    }
  }
  return lVar2;
}



/* Entry: 10bd1620c; end: 10bd16243;  */

void FUN_10bd1620c(undefined8 param_1)

{
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 auStack_20 [2];
  
  func_0x000107c3a7e8();
  auStack_20[0] = extraout_x8;
  if (in_NG == in_OV) {
    auStack_20[0] = param_1;
  }
  func_0x000107c2810c(auStack_20,1,0xffffffffffffffff);
  return;
}



/* Entry: 10bd16244; end: 10bd163bb;  */

undefined8 FUN_10bd16244(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  
  lVar14 = *(long *)(param_1 + 8);
  func_0x0001095649e4(param_2,*(long *)(lVar14 + 0x30) +
                              (*(long *)(lVar14 + 0x40) - *(long *)(lVar14 + 0x38) >> 5));
  plVar15 = *(long **)(lVar14 + 0x28);
  bVar2 = *(byte *)((long)plVar15 + 10);
  uVar17 = 0;
  plVar12 = (long *)**(undefined8 **)(lVar14 + 0x18);
  while( true ) {
    plVar9 = plVar12;
    cVar6 = false;
    bVar7 = false;
    cVar8 = false;
    if (plVar9 == plVar15) {
      uVar16 = (uint)bVar2;
      cVar8 = SBORROW4(uVar16,uVar17);
      cVar6 = (int)(uVar16 - uVar17) < 0;
      bVar7 = uVar16 == uVar17;
    }
    if (bVar7) break;
    func_0x00010bd179fc(plVar9 + (ulong)(uVar17 & 0xff) * 4 + 2);
    uVar5 = extraout_x9;
    if (cVar6 == cVar8) {
      uVar5 = extraout_x8;
    }
    func_0x00010bd17948(uVar5);
    func_0x00010bd17930();
    func_0x00010bd17848();
    if (*(char *)((long)plVar9 + 0xb) == '\0') {
      FUN_10bd1670c();
      plVar12 = (long *)plVar9[uVar17 + 1 & 0xff];
      while (*(char *)((long)plVar12 + 0xb) == '\0') {
        FUN_10bd166f4();
      }
      uVar17 = 0;
    }
    else {
      uVar16 = uVar17 + 1;
      bVar3 = *(byte *)((long)plVar9 + 10);
      plVar10 = plVar9;
      uVar17 = uVar16;
      plVar12 = plVar9;
      if ((int)(uint)bVar3 <= (int)uVar16) {
        while ((plVar12 = plVar10, uVar17 == bVar3 &&
               (plVar11 = (long *)*plVar10, uVar17 = uVar16, plVar12 = plVar9,
               *(char *)((long)plVar11 + 0xb) == '\0'))) {
          pbVar1 = (byte *)(plVar10 + 1);
          bVar3 = *(byte *)((long)plVar11 + 10);
          plVar10 = plVar11;
          uVar17 = (uint)*pbVar1;
        }
      }
    }
  }
  lVar13 = *(long *)(lVar14 + 0x38);
  lVar14 = *(long *)(lVar14 + 0x40);
  while( true ) {
    cVar8 = SBORROW8(lVar13,lVar14);
    cVar6 = lVar13 - lVar14 < 0;
    if (lVar13 == lVar14) break;
    func_0x000107c3a7fc();
    lVar4 = extraout_x8_00;
    if (cVar6 == cVar8) {
      lVar4 = lVar13;
    }
    func_0x00010bd17948(lVar4);
    func_0x00010bd17930();
    func_0x00010bd17848();
    lVar13 = lVar13 + 0x18;
  }
  return 1;
}



/* Entry: 10bd163bc; end: 10bd16473;  */

void FUN_10bd163bc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  func_0x000107c3a8d4();
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  for (puVar3 = *(undefined8 **)(param_1 + 0x10); puVar3 != puVar5; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  func_0x00010b4d8138((undefined8 *)(param_1 + 0x10));
  plVar2 = *(long **)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 8) = 0;
  if (plVar2 != (long *)0x0) {
    func_0x00010bd176e0(plVar2 + 0x15);
    func_0x00010bd176a8(plVar2 + 0x11);
    FUN_10bd16544(plVar2 + 0xe);
    FUN_10bd165d8(plVar2 + 10);
    FUN_10bd16628(plVar2 + 7);
    FUN_10bd166bc(plVar2 + 3);
    lVar4 = *plVar2;
    if (lVar4 != 0) {
      for (lVar1 = plVar2[1]; lVar1 != lVar4; lVar1 = lVar1 + -0x28) {
        func_0x00010bd1797c();
      }
      plVar2[1] = lVar4;
      __ZdlPv(*plVar2);
    }
    func_0x00010bd17928();
  }
  return;
}



/* Entry: 10bd16474; end: 10bd16477;  */

void FUN_10bd16474(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  func_0x000107c3a8d4();
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  for (puVar3 = *(undefined8 **)(param_1 + 0x10); puVar3 != puVar5; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  func_0x00010b4d8138((undefined8 *)(param_1 + 0x10));
  plVar2 = *(long **)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 8) = 0;
  if (plVar2 != (long *)0x0) {
    func_0x00010bd176e0(plVar2 + 0x15);
    func_0x00010bd176a8(plVar2 + 0x11);
    FUN_10bd16544(plVar2 + 0xe);
    FUN_10bd165d8(plVar2 + 10);
    FUN_10bd16628(plVar2 + 7);
    FUN_10bd166bc(plVar2 + 3);
    lVar4 = *plVar2;
    if (lVar4 != 0) {
      for (lVar1 = plVar2[1]; lVar1 != lVar4; lVar1 = lVar1 + -0x28) {
        func_0x00010bd1797c();
      }
      plVar2[1] = lVar4;
      __ZdlPv(*plVar2);
    }
    func_0x00010bd17928();
  }
  return;
}



/* Entry: 10bd16478; end: 10bd1648b;  */

void FUN_10bd16478(void)

{
  FUN_10bd163bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd1648c; end: 10bd16517;  */

uint FUN_10bd1648c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x000107c3a810();
  FUN_10bd1620c();
  uStack_28 = *(undefined4 *)(unaff_x20 + 0x20);
  puVar1 = &uStack_38;
  uStack_38 = param_1;
  uStack_30 = param_2;
  func_0x00010bd164d0(puVar1);
  return (uint)puVar1 >> 7 & 1;
}



/* Entry: 10bd16518; end: 10bd16543;  */

uint FUN_10bd16518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x11;
  
  func_0x000107c3a7e8(param_1,param_2,param_2,param_3);
  uVar1 = extraout_x11;
  uVar2 = extraout_x8;
  if (in_NG == in_OV) {
    uVar1 = extraout_x9;
    uVar2 = param_1;
  }
  func_0x000107c27bd8(uVar2,uVar1);
  return (uint)uVar2 >> 7 & 1;
}



/* Entry: 10bd16544; end: 10bd1659b;  */

void FUN_10bd16544(void)

{
  func_0x00010bd179dc();
  func_0x00010bd16568();
  return;
}



/* Entry: 10bd1659c; end: 10bd165d7;  */

void FUN_10bd1659c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    func_0x00010bd1797c();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10bd165d8; end: 10bd1660f;  */

void FUN_10bd165d8(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    func_0x000107c31674(*param_1);
  }
  *param_1 = &PTR_LOOP_110d9cd20;
  param_1[2] = &PTR_LOOP_110d9cd20;
  param_1[3] = 0;
  return;
}



/* Entry: 10bd16610; end: 10bd16627;  */

undefined8 FUN_10bd16610(undefined8 *param_1)

{
  func_0x000107c3167c();
  return *param_1;
}



/* Entry: 10bd16628; end: 10bd1667f;  */

void FUN_10bd16628(void)

{
  func_0x00010bd179dc();
  func_0x00010bd1664c();
  return;
}



/* Entry: 10bd16680; end: 10bd166bb;  */

void FUN_10bd16680(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    func_0x00010bd1797c();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10bd166bc; end: 10bd166f3;  */

void FUN_10bd166bc(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    func_0x000107c31680(*param_1);
  }
  *param_1 = &PTR_LOOP_110d9cd10;
  param_1[2] = &PTR_LOOP_110d9cd10;
  param_1[3] = 0;
  return;
}



/* Entry: 10bd166f4; end: 10bd1670b;  */

undefined8 FUN_10bd166f4(undefined8 *param_1)

{
  FUN_10bd1670c();
  return *param_1;
}



/* Entry: 10bd1670c; end: 10bd167a3;  */

long FUN_10bd1670c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3a780(1,4);
  func_0x000107c31688();
  return param_1 + lVar1;
}



/* Entry: 10bd167a4; end: 10bd16c2f;  */

undefined8 FUN_10bd167a4(long param_1,char *param_2,long param_3,long param_4)

{
  undefined8 **ppuVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined4 extraout_w8;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 **extraout_x10;
  undefined8 **extraout_x10_00;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 **ppuVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  undefined4 uStack_c8;
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 **appuStack_98 [2];
  undefined4 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 ***pppuStack_78;
  undefined4 uStack_70;
  
  func_0x000107c3a85c(*(undefined8 *)(param_4 + 0x20));
  if (param_3 < 0) {
    if (*(long *)(param_2 + 8) == 0) {
      return 1;
    }
    param_2 = *(char **)param_2;
  }
  else if ((int)param_3 == 0) {
    return 1;
  }
  if (*param_2 == '.') {
    func_0x000107c3a84c(*(undefined8 *)(param_1 + 8));
    puVar4 = &uStack_b8;
    auStack_c0[0] = extraout_w8;
    func_0x000107c31658();
    uStack_a0 = *(undefined4 *)(param_4 + 0x48);
    if (*(long *)(param_1 + 0xa0) == 0) {
      puVar4 = (undefined8 *)0x1;
      FUN_10bd16c3c();
      *(undefined8 **)(param_1 + 0x98) = puVar4;
      *(undefined8 **)(param_1 + 0x88) = puVar4;
    }
    puVar5 = (undefined8 *)(param_1 + 0x88);
    puVar14 = puVar5;
    while( true ) {
      uVar20 = 0;
      puVar14 = (undefined8 *)*puVar14;
      uVar13 = (ulong)*(byte *)((long)puVar14 + 10);
      while (uVar19 = uVar13, uVar20 != uVar19) {
        uVar13 = uVar20 + uVar19 >> 1;
        puVar4 = puVar14 + uVar13 * 5 + 2;
        FUN_10bd16cec(puVar4,auStack_c0);
        if ((int)puVar4 != 0) {
          uVar20 = uVar13 + 1;
          uVar13 = uVar19;
        }
      }
      bVar17 = *(byte *)((long)puVar14 + 0xb);
      if (bVar17 != 0) break;
      func_0x00010bd17920();
      puVar14 = puVar4 + (uVar19 & 0xff);
    }
    puVar12 = puVar14;
    uVar20 = uVar19;
    do {
      if ((uint)uVar20 != (uint)*(byte *)((long)puVar12 + 10)) {
        puVar4 = (undefined8 *)auStack_c0;
        FUN_10bd16cec(puVar4,puVar12 + (long)(int)(uint)uVar20 * 5 + 2);
        if ((int)puVar4 == 0) {
          func_0x00010bd17984();
          goto LAB_10bd16b84;
        }
        bVar17 = *(byte *)((long)puVar14 + 0xb);
        break;
      }
      uVar20 = (ulong)*(byte *)(puVar12 + 1);
      puVar12 = (undefined8 *)*puVar12;
    } while (*(char *)((long)puVar12 + 0xb) == '\0');
    uStack_d8 = uVar19 & 0xffffffff;
    if (bVar17 == 0) {
      puStack_e0 = puVar14;
      func_0x00010bd17920();
      puVar14 = puVar4 + (uVar19 & 0xff);
      while( true ) {
        puVar14 = (undefined8 *)*puVar14;
        bVar17 = *(byte *)((long)puVar14 + 0xb);
        uVar19 = (ulong)*(byte *)((long)puVar14 + 10);
        if (bVar17 != 0) break;
        puStack_e0 = puVar14;
        func_0x00010bd17920();
        puVar14 = puVar4 + uVar19;
      }
      uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)*(byte *)((long)puVar14 + 10));
      uVar20 = uVar19;
    }
    else {
      uVar20 = (ulong)*(byte *)((long)puVar14 + 10);
    }
    uVar18 = (uint)uVar19;
    uVar11 = (uint)uVar20;
    puStack_e0 = puVar14;
    if (uVar11 == bVar17) {
      if (uVar11 < 6) {
        uVar11 = (uVar11 & 0x7f) << 1;
        if (5 < uVar11) {
          uVar11 = 6;
        }
        puVar5 = (undefined8 *)(ulong)uVar11;
        FUN_10bd16c3c();
        puStack_e0 = puVar5;
        FUN_10bd17008();
        *(undefined1 *)((long)puVar5 + 10) = *(undefined1 *)((long)puVar14 + 10);
        *(undefined1 *)((long)puVar14 + 10) = 0;
        func_0x00010bd17058();
        *(undefined8 **)(param_1 + 0x98) = puVar5;
        *(undefined8 **)(param_1 + 0x88) = puVar5;
        puVar4 = puVar14;
        puVar14 = puVar5;
      }
      else {
        FUN_10bd16d7c(puVar5,&puStack_e0);
        uVar18 = (uint)(byte)uStack_d8;
        puVar4 = puVar5;
        puVar14 = puStack_e0;
      }
    }
    uVar11 = uVar18 & 0xff;
    uVar20 = (ulong)uVar11;
    bVar17 = *(byte *)((long)puVar14 + 10);
    uVar18 = uVar18 & 0xff;
    cVar2 = SBORROW4((uint)bVar17,uVar18);
    uVar10 = (uint)bVar17;
    cVar3 = (int)(uVar10 - uVar18) < 0;
    if (uVar18 <= bVar17 && uVar10 != uVar18) {
      puVar4 = puVar14;
      FUN_10bd17358(puVar14,uVar10 - uVar11,uVar11 + 1,uVar20,puVar14);
    }
    *(undefined4 *)(puVar14 + uVar20 * 5 + 2) = auStack_c0[0];
    puVar14[uVar20 * 5 + 5] = uStack_a8;
    puVar14[uVar20 * 5 + 4] = uStack_b0;
    puVar14[uVar20 * 5 + 3] = uStack_b8;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    *(undefined4 *)(puVar14 + uVar20 * 5 + 6) = uStack_a0;
    bVar17 = *(char *)((long)puVar14 + 10) + 1;
    *(byte *)((long)puVar14 + 10) = bVar17;
    if (*(char *)((long)puVar14 + 0xb) == '\0') {
      uVar11 = uVar11 + 1;
      uVar18 = (uint)bVar17;
      cVar2 = SBORROW4(uVar11,uVar18);
      cVar3 = (int)(uVar11 - uVar18) < 0;
      if (uVar11 < uVar18) {
        while( true ) {
          uVar18 = (uint)bVar17;
          cVar2 = SBORROW4(uVar11,uVar18);
          cVar3 = (int)(uVar11 - uVar18) < 0;
          if (uVar18 <= uVar11) break;
          func_0x00010bd17920();
          lVar15 = puVar4[(byte)(bVar17 - 1)];
          puVar4 = puVar14;
          FUN_10bd17320();
          puVar4[bVar17] = lVar15;
          *(byte *)(lVar15 + 8) = bVar17;
          bVar17 = bVar17 - 1;
        }
      }
    }
    ppuVar7 = *(undefined8 ***)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    ppuVar16 = *(undefined8 ***)(param_1 + 0xb0);
    pppuVar9 = (undefined8 ***)0x1;
    func_0x000107c27fb4(&uStack_f8,*(ulong *)(param_4 + 0x20) & 0xfffffffffffffffc,1,
                        0xffffffffffffffff);
    uStack_c8 = *(undefined4 *)(param_4 + 0x48);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uVar20 = ((long)ppuVar16 - (long)ppuVar7) / 0x28;
    while (ppuVar1 = ppuVar7, uVar20 != 0) {
      uVar13 = uVar20 >> 1;
      func_0x00010bd17a50();
      ppuStack_80 = extraout_x10;
      if (cVar3 == cVar2) {
        ppuStack_80 = &puStack_e0;
      }
      uStack_70 = uStack_c8;
      pppuVar9 = &ppuStack_80;
      ppuVar6 = ppuVar1 + uVar13 * 5;
      FUN_10bd1648c();
      cVar2 = '\0';
      cVar3 = (int)ppuVar6 < 0;
      ppuVar7 = ppuVar1 + uVar13 * 5 + 5;
      uVar20 = uVar20 + ~uVar13;
      if ((int)ppuVar6 == 0) {
        ppuVar7 = ppuVar1;
        uVar20 = uVar13;
      }
    }
    cVar2 = SBORROW8((long)ppuVar16,(long)ppuVar1);
    cVar3 = (long)ppuVar16 - (long)ppuVar1 < 0;
    if (ppuVar16 == ppuVar1) {
      func_0x00010bd17a2c();
      func_0x00010bd17848();
      func_0x00010bd17984();
    }
    else {
      func_0x00010bd17a50();
      appuStack_98[0] = extraout_x10_00;
      if (cVar3 == cVar2) {
        appuStack_98[0] = &puStack_e0;
      }
      uStack_88 = uStack_c8;
      ppuVar7 = ppuVar1;
      FUN_10bd1620c();
      uStack_70 = *(undefined4 *)(ppuVar1 + 4);
      pppuVar8 = appuStack_98;
      ppuStack_80 = ppuVar7;
      pppuStack_78 = pppuVar9;
      func_0x00010bd164d0(pppuVar8,&ppuStack_80);
      func_0x00010bd17a2c();
      func_0x00010bd17848();
      func_0x00010bd17984();
      if (((uint)pppuVar8 >> 7 & 1) == 0) {
LAB_10bd16b84:
        func_0x00010bd17820();
        func_0x00010bdb2988();
        func_0x00010ae6bd08(auStack_c0,&UNK_10f8348ed,0x3f);
        func_0x00010bd17958(*(undefined8 *)(param_4 + 0x20),auStack_c0);
        func_0x00010b4d8394(auStack_c0,&UNK_10f4936fb);
        func_0x00010bd17958(*(undefined8 *)(param_4 + 0x18));
        func_0x00010b4d8394();
        func_0x00010b4c31f4();
        func_0x00010bd16764();
        func_0x00010ae6bdd0();
        func_0x00010bd17a34();
        return 0;
      }
    }
  }
  return 1;
}



/* Entry: 10bd16c30; end: 10bd16c3b;  */

void FUN_10bd16c30(ulong param_1)

{
  func_0x00010bd177e4();
  FUN_10bd16c64(param_1 & 0xffffffff);
  func_0x00010bd16c88();
  func_0x000107c3a83c();
  return;
}



/* Entry: 10bd16c3c; end: 10bd16c63;  */

void FUN_10bd16c3c(undefined4 param_1)

{
  FUN_10bd16c64(param_1);
  func_0x00010bd16c88();
  func_0x000107c3a83c();
  return;
}



/* Entry: 10bd16c64; end: 10bd16c9f;  */

void FUN_10bd16c64(void)

{
  func_0x000107c3a7ec(1);
  FUN_10bd16ca0();
  return;
}



/* Entry: 10bd16ca0; end: 10bd16cc3;  */

long FUN_10bd16ca0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10bd16cc4();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 10bd16cc4; end: 10bd16ceb;  */

ulong FUN_10bd16cc4(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + param_1[3] * 0x28 + 7U & 0xfffffffffffffff8;
}



/* Entry: 10bd16cec; end: 10bd16d7b;  */

uint FUN_10bd16cec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x000107c3a810();
  FUN_10bd1620c();
  uStack_28 = *(undefined4 *)(unaff_x20 + 0x20);
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_10bd1620c();
  uStack_40 = *(undefined4 *)(unaff_x19 + 0x20);
  puVar1 = &uStack_38;
  uStack_48 = param_2;
  func_0x00010bd164d0(puVar1,auStack_50);
  return (uint)puVar1 >> 7 & 1;
}



/* Entry: 10bd16d7c; end: 10bd17007;  */

void FUN_10bd16d7c(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar5;
  char cVar6;
  ulong uVar7;
  undefined4 extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int iVar8;
  ulong extraout_x8;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  ulong *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar9;
  long unaff_x23;
  uint uVar10;
  ulong unaff_x24;
  
  func_0x000107c3a8e0();
  func_0x000107c3a7c8();
  if ((bool)in_ZR) {
    FUN_10bd171a8(0);
    func_0x000107c3a8a0();
    FUN_10bd171e8();
    *unaff_x22 = unaff_x23;
    unaff_x21 = (long *)*unaff_x19;
LAB_10bd16f1c:
    func_0x000107c3a898();
    if (extraout_w8_01 == 0) {
      unaff_x20 = (long *)(ulong)((uint)unaff_x21 & 0xff);
      FUN_10bd171a8(unaff_x20,unaff_x23);
      func_0x00010bd177bc();
      FUN_10bd1720c();
    }
    else {
      FUN_10bd16c64(6);
      func_0x00010bd16c88();
      func_0x000107c3a794();
      FUN_10bd1720c();
      func_0x000107c3a89c();
      if ((bool)in_ZR) {
        unaff_x22[2] = (long)unaff_x20;
      }
    }
  }
  else {
    bVar3 = *(byte *)(unaff_x21 + 1);
    uVar10 = (uint)unaff_x24;
    if (bVar3 != 0) {
      unaff_x20 = (long *)(ulong)(bVar3 - 1);
      func_0x00010bd17920();
      func_0x000107c3a868();
      if (*(byte *)((long)unaff_x20 + 10) < 6) {
        func_0x000107c3a7e4();
        bVar1 = uVar10 <= (extraout_w10 & 0xff);
        cVar6 = !bVar1 && (int)((extraout_w9 & 0xff) - 5) < 0;
        if (bVar1 || (extraout_w9 & 0xff) < 6) {
          func_0x000107c3a828(unaff_x20 + (extraout_x8 & 0xffffffff) * 5);
          FUN_10bd1712c();
          func_0x000107c3a7a8();
          FUN_10bd17008();
          func_0x000107c3a828(*unaff_x20 + (ulong)*(byte *)(unaff_x20 + 1) * 0x28);
          FUN_10bd1712c();
          func_0x000107c3a7bc();
          FUN_10bd17008();
          if (*(char *)((long)unaff_x20 + 0xb) == '\0') {
            func_0x00010bd17a48();
            uVar7 = 0;
            while( true ) {
              cVar5 = SBORROW8(unaff_x24,uVar7);
              cVar6 = (long)(unaff_x24 - uVar7) < 0;
              if (unaff_x24 == uVar7) break;
              func_0x00010bd177a0();
              FUN_10bd171e8();
              uVar7 = 0x28;
            }
            while (func_0x00010bd1798c(), cVar6 == cVar5) {
              func_0x00010bd17808();
              FUN_10bd171e8();
            }
          }
          func_0x000107c3a788();
          *(undefined4 *)(unaff_x19 + 1) = extraout_w8;
          if (!(bool)cVar6) {
            return;
          }
          func_0x000107c3a884();
          iVar8 = extraout_w8_00;
          goto LAB_10bd16f74;
        }
      }
    }
    bVar4 = *(byte *)(unaff_x23 + 10);
    if ((uint)bVar4 <= (uint)bVar3) {
LAB_10bd16ee4:
      in_OV = SBORROW4((uint)bVar4,6);
      in_NG = (int)(bVar4 - 6) < 0;
      in_ZR = bVar4 == 6;
      if ((bool)in_ZR) {
        func_0x00010bd1790c();
        FUN_10bd16d7c();
        unaff_x21 = (long *)*unaff_x19;
        unaff_x23 = *unaff_x21;
      }
      goto LAB_10bd16f1c;
    }
    unaff_x20 = (long *)(ulong)(bVar3 + 1);
    func_0x00010bd17920();
    func_0x000107c3a868();
    uVar7 = (ulong)*(byte *)((long)unaff_x20 + 10);
    cVar5 = SBORROW8(uVar7,5);
    cVar6 = (long)(uVar7 - 5) < 0;
    if (5 < uVar7) goto LAB_10bd16ee4;
    func_0x000107c3a778(6);
    uVar9 = extraout_w10_00 & 0xff;
    bVar1 = cVar6 != cVar5;
    in_OV = bVar1 && SBORROW4(uVar9,5);
    in_ZR = bVar1 && uVar9 == 5;
    in_NG = bVar1 && (int)(uVar9 - 5) < 0;
    if ((bVar1 && 4 < uVar9) && (!bVar1 || uVar9 != 5)) goto LAB_10bd16ee4;
    func_0x000107c3a81c();
    FUN_10bd17358();
    FUN_10bd1712c(unaff_x20 + (unaff_x24 & 0xffffffff) * 5 + -3,
                  *unaff_x21 + (ulong)*(byte *)(unaff_x21 + 1) * 0x28 + 0x10);
    func_0x000107c3a7c0();
    FUN_10bd17008();
    func_0x000107c3a828(*unaff_x21 + (ulong)*(byte *)(unaff_x21 + 1) * 0x28);
    FUN_10bd1712c();
    if (*(char *)((long)unaff_x21 + 0xb) == '\0') {
      func_0x00010bd17860();
      do {
        func_0x00010bd179cc();
        func_0x00010bd16d44();
        func_0x00010bd178b8();
        FUN_10bd171e8();
      } while (bVar3 != 0);
      func_0x00010bd17a48();
      uVar9 = 1;
      while( true ) {
        uVar2 = uVar9 & 0xff;
        in_OV = SBORROW4(uVar10,uVar2);
        in_NG = (int)(uVar10 - uVar2) < 0;
        in_ZR = uVar10 == uVar2;
        if (uVar10 < uVar2) break;
        func_0x00010bd1775c();
        FUN_10bd171e8();
        uVar9 = uVar9 + 1;
      }
    }
    func_0x000107c3a7c4();
    func_0x000107c3a87c();
  }
  func_0x000107c3a848();
  if ((bool)in_ZR || in_NG != in_OV) {
    return;
  }
  iVar8 = extraout_w8_02 + ~extraout_w9_00;
LAB_10bd16f74:
  *(int *)(unaff_x19 + 1) = iVar8;
  *unaff_x19 = (ulong)unaff_x20;
  return;
}



/* Entry: 10bd17008; end: 10bd1712b;  */

void FUN_10bd17008(undefined8 param_1,long param_2)

{
  for (param_2 = param_2 * 0x28; param_2 != 0; param_2 = param_2 + -0x28) {
    func_0x000107c3a80c();
    FUN_10bd1712c();
  }
  return;
}



/* Entry: 10bd1712c; end: 10bd1715b;  */

void FUN_10bd1712c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  param_1[8] = param_2[8];
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2 + 2);
  return;
}



/* Entry: 10bd1715c; end: 10bd1718f;  */

void FUN_10bd1715c(long param_1,uint param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  for (lVar1 = (ulong)param_2 * 0x28; lVar1 != 0; lVar1 = lVar1 + -0x28) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



/* Entry: 10bd17190; end: 10bd171a7;  */

undefined8 FUN_10bd17190(undefined8 *param_1)

{
  func_0x00010bd16d44();
  return *param_1;
}



/* Entry: 10bd171a8; end: 10bd171e7;  */

void FUN_10bd171a8(void)

{
  func_0x00010bd17874(1,4);
  FUN_10bd16ca0();
  func_0x00010bd16c88();
  func_0x000107c3a820();
  return;
}



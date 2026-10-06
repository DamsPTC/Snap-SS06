/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd0dfbc; end: 10bd0dfcf;  */

void FUN_10bd0dfbc(void)

{
  FUN_10bd0df5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0dfd0; end: 10bd0dfdb;  */

void FUN_10bd0dfd0(void)

{
  Hint_Prefetch(0x1134071d8,0,0,0);
  Hint_Prefetch(PTR_DAT_1134071d8,0,0,0);
  return;
}



/* Entry: 10bd0dfdc; end: 10bd0e027;  */

void FUN_10bd0dfdc(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c3a72c(param_1,&PTR_PTR_113406340);
  if ((int)lVar2 != 0) {
    iVar1 = (int)param_1 + 0x48;
    func_0x000107c315d4();
    if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      func_0x00010bd126a0();
    }
  }
  return;
}



/* Entry: 10bd0e028; end: 10bd0e0bf;  */

void FUN_10bd0e028(ulong *param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong unaff_x22;
  
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  func_0x00010bd15260();
  FUN_10bd0e2a8();
  func_0x00010bd15678();
  func_0x00010bd0e2b8();
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x00010bd151dc(0,*(undefined8 *)(unaff_x20 + 0x60));
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_10bd126b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
    }
  }
  func_0x00010bd15048();
  ppuVar2 = &PTR_PTR_113406340;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)((long)ppuVar2[1] - (long)*ppuVar2) >> 4)) {
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



/* Entry: 10bd0e0c0; end: 10bd0e0ff;  */

void FUN_10bd0e0c0(void)

{
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  long lVar2;
  
  func_0x00010bd14f60();
  if ((unaff_x19[5] & 0x3f) != 0) {
    unaff_x19[6] = 0;
    unaff_x19[7] = 0;
    unaff_x19[8] = 0;
  }
  func_0x00010bd1536c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 10bd0e100; end: 10bd0e26f;  */

undefined ** FUN_10bd0e100(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  uint uVar9;
  ulong extraout_x8;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  
  iVar2 = *(int *)(param_1 + 7);
  ppuVar3 = param_1;
  while (iVar2 != 0) {
    func_0x00010bd14c28();
    ppuVar3 = (undefined **)0x2;
    func_0x00010bd14e50();
    func_0x00010bd152bc();
  }
  uVar9 = *(uint *)(param_1 + 5);
  if ((uVar9 >> 1 & 1) != 0) {
    func_0x00010bd14de0();
    func_0x00010bd15294();
    func_0x00010bd14e34();
  }
  if ((uVar9 & 1) != 0) {
    param_3 = (undefined **)(ulong)*(uint *)(param_1[0xc] + 0x2c);
    ppuVar3 = (undefined **)0x32;
    func_0x00010bd14e50();
  }
  iVar2 = *(int *)(param_1 + 10);
  while (iVar2 != 0) {
    func_0x00010bd14bfc();
    func_0x00010bd152bc();
  }
  ppuVar8 = &PTR_PTR_113406340;
  func_0x00010bd14d40();
  func_0x00010bd152f0();
  if ((extraout_x8 & 1) == 0) {
    return ppuVar8;
  }
  func_0x00010bd15018();
  lVar12 = 0;
  ppuVar4 = ppuVar3;
  do {
    if ((int)((ulong)((long)ppuVar3[1] - (long)*ppuVar3) >> 4) <= lVar12) {
      return ppuVar8;
    }
    piVar1 = (int *)(*ppuVar3 + lVar12 * 0x10);
    func_0x00010bd3caf8();
    ppuVar7 = ppuVar4;
    ppuVar8 = ppuVar4;
    switch(piVar1[1]) {
    case 0:
      ppuVar7 = *(undefined ***)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar5);
      func_0x000107c280ac(ppuVar7,uVar5);
      ppuVar8 = ppuVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      ppuVar7 = (undefined **)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)ppuVar7 = iVar2;
      ppuVar8 = (undefined **)((long)ppuVar7 + 4);
      break;
    case 2:
      puVar13 = *(undefined **)(piVar1 + 2);
      ppuVar7 = (undefined **)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *ppuVar7 = puVar13;
      ppuVar8 = ppuVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        puVar13 = *param_3;
        uVar9 = iVar2 << 3;
        ppuVar7 = (undefined **)(ulong)uVar9;
        func_0x000107c280a4();
        if (lVar11 <= (long)(puVar13 + ~((long)ppuVar4 + (long)(int)ppuVar7) + 0x10)) {
          lVar10 = (long)ppuVar4 + 2;
          for (uVar9 = uVar9 | 2; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar9 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar9;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x00010bd3cc08();
          _memcpy();
          ppuVar8 = (undefined **)(lVar10 + lVar11);
          break;
        }
      }
      ppuVar7 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar10,ppuVar4);
      ppuVar8 = ppuVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar6,uVar5,param_3);
      func_0x00010bd3ca0c();
      ppuVar7 = (undefined **)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(ppuVar7,uVar6);
      ppuVar8 = ppuVar7;
    }
    lVar12 = lVar12 + 1;
    ppuVar4 = ppuVar7;
  } while( true );
}



/* Entry: 10bd0e270; end: 10bd0e2a7;  */

long FUN_10bd0e270(long param_1)

{
  long extraout_x8;
  
  func_0x00010bd124ec();
  func_0x00010bd14c8c();
  return param_1 + extraout_x8;
}



/* Entry: 10bd0e2a8; end: 10bd0e2c7;  */

void FUN_10bd0e2a8(long *param_1,long param_2)

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



/* Entry: 10bd0e2c8; end: 10bd0e2f7;  */

void FUN_10bd0e2c8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bd15154();
  func_0x00010bd0d394();
  func_0x00010bd151e4();
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  func_0x00010bd15260();
  FUN_10bd0e2a8();
  func_0x00010bd15678();
  func_0x00010bd0e2b8();
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x00010bd151dc(0,*(undefined8 *)(unaff_x20 + 0x60));
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_10bd126b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
    }
  }
  func_0x00010bd15048();
  ppuVar2 = &PTR_PTR_113406340;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)((long)ppuVar2[1] - (long)*ppuVar2) >> 4)) {
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



/* Entry: 10bd0e2f8; end: 10bd0e307;  */

long FUN_10bd0e2f8(long param_1)

{
  func_0x000100067dc8();
  func_0x000100068474();
  func_0x0001000684e8();
  func_0x000100067de0(param_1 + 0x28);
  func_0x0001000684f0();
  func_0x000100067de0(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000107c31600();
  }
  func_0x000107c60e14();
  return param_1;
}



/* Entry: 10bd0e308; end: 10bd0e49b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd0e308(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  func_0x00010bd14edc();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010bd156b0();
    puVar2 = unaff_x22;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd150b8(*(undefined8 *)(unaff_x20 + 0x18));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x18);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bd152b0(*(undefined8 *)(unaff_x20 + 0x20));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x20);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bd152b0(*(undefined8 *)(unaff_x20 + 0x28));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x28);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bd152b0(*(undefined8 *)(unaff_x20 + 0x30));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x30);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010bd152b0(*(undefined8 *)(unaff_x20 + 0x38));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x38);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      param_2 = *(long **)(unaff_x20 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x00010bd1474c();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10bd10a78();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x48) = *(undefined4 *)(unaff_x20 + 0x48);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x4c) = *(undefined4 *)(unaff_x20 + 0x4c);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x00010bd15564();
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x54) = *(undefined4 *)(unaff_x20 + 0x54);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x58) = *(undefined4 *)(unaff_x20 + 0x58);
    }
  }
  func_0x00010bd14e5c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010bd14ecc();
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x00010bd374f4();
    for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd0e49c; end: 10bd0e5cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd0e49c(void)

{
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x00010bd15254();
  if ((unaff_w20 & 0x3f) != 0) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bd15278();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd155b4();
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 5);
    }
    if ((unaff_w20 >> 3 & 1) != 0) {
      func_0x00010bd154bc();
    }
    if ((unaff_w20 >> 4 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 7);
    }
    if ((unaff_w20 >> 5 & 1) != 0) {
      func_0x00010bd0e544(unaff_x19[8]);
    }
  }
  if ((unaff_w20 & 0xc0) != 0) {
    unaff_x19[9] = 0;
  }
  if ((unaff_w20 & 0x700) != 0) {
    *(undefined1 *)(unaff_x19 + 10) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x54) = 0x100000001;
  }
  func_0x00010bd1529c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 == unaff_x19[1]) {
    return;
  }
  lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
  lVar2 = lVar1 + 1;
  lVar1 = lVar1 * 0x10;
  do {
    lVar1 = lVar1 + -0x10;
    FUN_10bd36708(*unaff_x19 + lVar1);
    lVar2 = lVar2 + -1;
  } while (1 < lVar2);
  unaff_x19[1] = *unaff_x19;
  return;
}



/* Entry: 10bd0e5d0; end: 10bd0e83b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10bd0e5d0(long *param_1,long *param_2,long *param_3,long *param_4)

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
  
  func_0x00010bd14e8c();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 1) != 0) {
    func_0x00010bd14dec(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x00010bd14f18(*(undefined8 *)(unaff_x20 + 0x20));
    param_4 = param_1;
  }
  if ((uVar7 >> 6 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
    func_0x00010bd153a0();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if ((uVar7 >> 9 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd15400();
    func_0x00010bd14e34();
    param_4 = param_1;
  }
  if ((uVar7 >> 10 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd152dc();
    func_0x00010bd14e34();
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    func_0x00010bd15160(*(undefined8 *)(unaff_x20 + 0x28));
    param_2 = (long *)0x6;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    func_0x00010bd15160(*(undefined8 *)(unaff_x20 + 0x30));
    param_2 = (long *)0x7;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((uVar7 >> 5 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x40);
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x2c);
    param_1 = (long *)0x8;
    func_0x00010bd150c8();
    param_4 = param_1;
  }
  if ((uVar7 >> 7 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x4c);
    func_0x00010bd153a0();
    func_0x000108b3207c();
    param_4 = param_1;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    func_0x00010bd15160(*(undefined8 *)(unaff_x20 + 0x38));
    param_2 = (long *)0xa;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((uVar7 >> 8 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd155bc();
    func_0x00010bd14dfc();
    param_4 = param_1;
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



/* Entry: 10bd0e83c; end: 10bd0e84b;  */

long FUN_10bd0e83c(long param_1)

{
  func_0x000100067dc8();
  func_0x000100068474();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c31608();
  }
  func_0x000107c60e14();
  return param_1;
}



/* Entry: 10bd0e84c; end: 10bd0e8db;  */

void FUN_10bd0e84c(ulong *param_1,long *param_2)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010bd14edc();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010bd156b0();
    puVar1 = unaff_x22;
  }
  func_0x00010bd1566c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010bd150b8(*(undefined8 *)(unaff_x20 + 0x18));
      if (((ulong)puVar2 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x18);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      param_2 = *(long **)(unaff_x20 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010bd14788();
        *(ulong **)(unaff_x21 + 0x20) = puVar1;
        param_1 = puVar1;
      }
      else {
        FUN_10bd1118c();
      }
    }
  }
  func_0x00010bd14e5c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; (long)unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd0e8dc; end: 10bd0e95b;  */

void FUN_10bd0e8dc(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x00010bd1520c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bd15278();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd0e920(unaff_x19[4]);
    }
  }
  func_0x00010bd1529c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 10bd0e95c; end: 10bd0ea17;  */

long * FUN_10bd0e95c(long *param_1,long *param_2,long *param_3,long *param_4)

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
  
  func_0x00010bd14e8c();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 1) != 0) {
    func_0x00010bd14dec(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x20);
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x2c);
    param_1 = (long *)0x2;
    func_0x00010bd150c8();
    param_4 = param_1;
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



/* Entry: 10bd0ea18; end: 10bd0ea3b;  */

undefined8 FUN_10bd0ea18(undefined8 param_1)

{
  func_0x000107c3a718();
  return param_1;
}



/* Entry: 10bd0ea3c; end: 10bd0ea3f;  */

undefined8 FUN_10bd0ea3c(undefined8 param_1)

{
  func_0x000107c3a718();
  return param_1;
}



/* Entry: 10bd0ea40; end: 10bd0ea53;  */

void FUN_10bd0ea40(void)

{
  FUN_10bd0ea18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0ea54; end: 10bd0eac3;  */

void FUN_10bd0ea54(void)

{
  Hint_Prefetch(0x1134076e0,0,0,0);
  Hint_Prefetch(PTR_DAT_1134076e0,0,0,0);
  return;
}



/* Entry: 10bd0eac4; end: 10bd0eb0f;  */

long * FUN_10bd0eac4(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  uint unaff_w21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bd156dc();
  if ((unaff_w21 & 1) != 0) {
    func_0x00010bd155f0();
    param_3 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010bd155e4();
    param_3 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_3;
  }
  func_0x00010bd156f0();
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



/* Entry: 10bd0eb10; end: 10bd0eb7b;  */

ulong FUN_10bd0eb10(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x00010bd155a0();
      uVar3 = extraout_x8 + uVar3;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar3;
    return uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + uVar3);
  return param_1 + uVar3;
}



/* Entry: 10bd0eb7c; end: 10bd0ec1b;  */

void FUN_10bd0eb7c(ulong *param_1,long *param_2)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010bd14dc0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  func_0x00010bd15684();
  FUN_10bd0ee84();
  func_0x00010bd15260();
  func_0x00010bd0ee9c();
  func_0x00010bd15678();
  func_0x00010598fce8();
  func_0x00010bd1566c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010bd150b8(*(undefined8 *)(unaff_x20 + 0x60));
      if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x60);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      param_2 = *(long **)(unaff_x20 + 0x68);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010bd147c4();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        FUN_10bd11418();
      }
    }
  }
  func_0x00010bd14e5c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar1 = 0; (long)unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd0ec1c; end: 10bd0eccf;  */

void FUN_10bd0ec1c(void)

{
  char in_NG;
  char in_OV;
  undefined1 uVar1;
  ulong extraout_x8;
  long lVar2;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar3;
  
  func_0x00010bd153ac();
  if (in_NG == in_OV) {
    func_0x00010bd15470();
  }
  uVar1 = (int)unaff_x19[7] == 1;
  if (0 < (int)unaff_x19[7]) {
    func_0x0001053936e4(unaff_x19 + 6);
  }
  func_0x000107c282c0(unaff_x19 + 9);
  func_0x00010bd15738();
  if (!(bool)uVar1) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bd1561c();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd0ec88(unaff_x19[0xd]);
    }
  }
  func_0x00010bd1529c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar2 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_10bd36708(*unaff_x19 + lVar2);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 10bd0ecd0; end: 10bd0edd3;  */

/* WARNING: Removing unreachable block (ram,0x00010bd0ed6c) */

long * FUN_10bd0ecd0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int extraout_w8;
  uint uVar9;
  long *unaff_x19;
  long unaff_x20;
  uint uVar10;
  long unaff_x22;
  long lVar11;
  uint unaff_w23;
  long lVar12;
  undefined8 *unaff_x24;
  long lVar13;
  long lVar14;
  
  func_0x00010bd14e8c();
  uVar9 = *(uint *)(param_1 + 2);
  if ((uVar9 & 1) != 0) {
    func_0x00010bd14dec(*(undefined8 *)(unaff_x20 + 0x60));
    param_4 = param_1;
  }
  func_0x00010bd1550c();
  while (uVar10 = (uint)unaff_x22, unaff_w23 != uVar10) {
    func_0x00010bd14ce4(*unaff_x24);
    param_1 = (long *)0x2;
    func_0x00010bd150c8();
    func_0x00010bd1543c();
  }
  if ((uVar9 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x68);
    func_0x00010bd1508c();
    param_4 = param_1;
  }
  func_0x00010bd1509c();
  while( true ) {
    cVar3 = SBORROW4(uVar10,uVar9);
    cVar4 = (int)(uVar10 - uVar9) < 0;
    if (uVar10 == uVar9) break;
    func_0x00010bd14c28();
    param_1 = (long *)0x4;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  func_0x00010bd15718();
  for (; unaff_x24 != (undefined8 *)0x0; unaff_x24 = (undefined8 *)((long)unaff_x24 + -1)) {
    func_0x00010bd150d0();
    func_0x00010bd1518c();
    if (cVar4 == cVar3) {
      func_0x00010bd154fc();
      if (extraout_w8 < 0) {
        param_3 = (long *)*param_3;
      }
      func_0x00010bd14fbc();
      param_4 = (long *)(unaff_x22 + (ulong)uVar9);
    }
    else {
      param_2 = (long *)0x5;
      param_1 = unaff_x19;
      func_0x00010b4d5120();
      param_4 = param_1;
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
  lVar13 = 0;
  plVar5 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar13) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar13 * 0x10);
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
      lVar11 = *(long *)(piVar1 + 2);
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar8 = lVar11;
      param_2 = plVar8 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar11 = *(long *)(piVar1 + 2);
      lVar12 = (long)*(char *)(lVar11 + 0x17);
      if ((-1 < lVar12) || (lVar12 = *(long *)(lVar11 + 8), lVar12 < 0x80)) {
        lVar14 = *param_3;
        uVar9 = iVar2 << 3;
        plVar8 = (long *)(ulong)uVar9;
        func_0x000107c280a4();
        if (lVar12 <= lVar14 + ~((long)plVar5 + (long)(int)plVar8) + 0x10) {
          lVar11 = (long)plVar5 + 2;
          for (uVar9 = uVar9 | 2; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
            *(byte *)(lVar11 + -2) = (byte)uVar9 | 0x80;
            lVar11 = lVar11 + 1;
          }
          *(byte *)(lVar11 + -2) = (byte)uVar9;
          *(char *)(lVar11 + -1) = (char)lVar12;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar11 + lVar12);
          break;
        }
      }
      plVar8 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar11,plVar5);
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
    lVar13 = lVar13 + 1;
    plVar5 = plVar8;
  } while( true );
}



/* Entry: 10bd0edd4; end: 10bd0ee83;  */

/* WARNING: Removing unreachable block (ram,0x00010bd0ee1c) */

long FUN_10bd0edd4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  func_0x00010bd153f4();
  func_0x00010bd14d94();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    func_0x00010bd0f08c();
    func_0x00010bd14c48();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010bd14ca4();
  uVar1 = *(uint *)(unaff_x19 + 0x50);
  while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010bd14e70();
    func_0x00010bd15308();
  }
  func_0x00010bd15690();
  if (!(bool)in_ZR) {
    if ((unaff_x19 + 0x48U & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00010bd15180();
    }
    if (((uint)(unaff_x19 + 0x48U) >> 1 & 1) != 0) {
      param_1 = *(long *)(unaff_x19 + 0x68);
      FUN_10bd11594();
      func_0x00010bd14c68();
    }
  }
  func_0x00010bd14f84();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = uVar2;
    return CONCAT44(uVar3,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  param_1 = param_1 + CONCAT44(uVar3,uVar2);
  *param_3 = (int)param_1;
  return param_1;
}



/* Entry: 10bd0ee84; end: 10bd0eec3;  */

void FUN_10bd0ee84(long *param_1,long param_2)

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
    FUN_10bd147f4(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bd0eec4; end: 10bd0ef73;  */

void FUN_10bd0eec4(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  func_0x00010bd14edc();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010bd156b0();
    puVar2 = unaff_x22;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd150b8(*(undefined8 *)(unaff_x20 + 0x18));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x18);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      param_2 = *(long **)(unaff_x20 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10bd148c4();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10bd11774();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    }
  }
  func_0x00010bd14e5c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010bd14ecc();
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x00010bd374f4();
    for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd0ef74; end: 10bd0f013;  */

void FUN_10bd0ef74(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x00010bd1520c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bd15278();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd0efbc(unaff_x19[4]);
    }
  }
  func_0x00010bd1536c();
  *(undefined4 *)(unaff_x19 + 1) = 0;
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 10bd0f014; end: 10bd0f0f3;  */

long * FUN_10bd0f014(long *param_1,long *param_2,long *param_3,long *param_4)

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
  
  func_0x00010bd14e8c();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 1) != 0) {
    func_0x00010bd14dec(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    func_0x00010bd153a0();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x20);
    func_0x00010bd1508c();
    param_4 = param_1;
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



/* Entry: 10bd0f0f4; end: 10bd0f133;  */

long FUN_10bd0f0f4(long param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a760();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10bd11a18();
  }
  __ZdlPv();
  FUN_10bd13aec(param_1 + 0x18);
  return param_1;
}



/* Entry: 10bd0f134; end: 10bd0f137;  */

long FUN_10bd0f134(long param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a760();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10bd11a18();
  }
  __ZdlPv();
  FUN_10bd13aec(param_1 + 0x18);
  return param_1;
}



/* Entry: 10bd0f138; end: 10bd0f14b;  */

void FUN_10bd0f138(void)

{
  FUN_10bd0f0f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0f14c; end: 10bd0f157;  */

void FUN_10bd0f14c(void)

{
  Hint_Prefetch(0x113407a78,0,0,0);
  Hint_Prefetch(PTR_DAT_113407a78,0,0,0);
  return;
}



/* Entry: 10bd0f158; end: 10bd0f1b7;  */

void FUN_10bd0f158(ulong param_1)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000107c3a74c();
  do {
    func_0x000107c3a73c();
    if (in_NG != in_OV) {
      if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
        return;
      }
      FUN_10bd11a94();
      return;
    }
    func_0x000107c3a700();
    FUN_10bd0f448();
  } while ((uVar1 & 1) != 0);
  return;
}



/* Entry: 10bd0f1b8; end: 10bd0f247;  */

void FUN_10bd0f1b8(ulong *param_1,long *param_2)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010bd14dc0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  func_0x00010bd15684();
  FUN_10bd0f3c8();
  func_0x00010bd1566c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010bd150b8(*(undefined8 *)(unaff_x20 + 0x30));
      if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x30);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      param_2 = *(long **)(unaff_x20 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010bd148f8();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_10bd11ad8();
      }
    }
  }
  func_0x00010bd14e5c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar1 = 0; (long)unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd0f248; end: 10bd0f2db;  */

void FUN_10bd0f248(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x00010bd153ac();
  if (in_NG == in_OV) {
    func_0x00010bd15470();
  }
  func_0x00010bd15738();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bd154bc();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd0f298(unaff_x19[7]);
    }
  }
  func_0x00010bd1529c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 10bd0f2dc; end: 10bd0f3c7;  */

long * FUN_10bd0f2dc(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  int unaff_w22;
  long lVar8;
  int unaff_w23;
  long lVar9;
  undefined8 *unaff_x24;
  long lVar10;
  long lVar11;
  
  func_0x00010bd14e8c();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 1) != 0) {
    func_0x00010bd14dec(*(undefined8 *)(unaff_x20 + 0x30));
    param_4 = param_1;
  }
  func_0x00010bd1550c();
  while (unaff_w23 != unaff_w22) {
    func_0x00010bd14ce4(*unaff_x24);
    param_1 = (long *)0x2;
    func_0x00010bd150c8();
    func_0x00010bd1543c();
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x38);
    func_0x00010bd1508c();
    param_4 = param_1;
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



/* Entry: 10bd0f3c8; end: 10bd0f3df;  */

void FUN_10bd0f3c8(long *param_1,long param_2)

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
    FUN_10bd14928(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bd0f3e0; end: 10bd0f423;  */

long FUN_10bd0f3e0(long param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a734();
  func_0x000107c3a750();
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10bd11ccc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10bd0f424; end: 10bd0f427;  */

long FUN_10bd0f424(long param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a734();
  func_0x000107c3a750();
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10bd11ccc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10bd0f428; end: 10bd0f43b;  */

void FUN_10bd0f428(void)

{
  FUN_10bd0f3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0f43c; end: 10bd0f447;  */

void FUN_10bd0f43c(void)

{
  Hint_Prefetch(0x113407bb0,0,0,0);
  Hint_Prefetch(PTR_DAT_113407bb0,0,0,0);
  return;
}



/* Entry: 10bd0f448; end: 10bd0f46f;  */

void FUN_10bd0f448(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) != 0) {
    FUN_10bd11d48();
  }
  return;
}



/* Entry: 10bd0f470; end: 10bd0f57f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd0f470(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  func_0x00010bd14edc();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010bd156b0();
    puVar2 = unaff_x22;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd150b8(*(undefined8 *)(unaff_x20 + 0x18));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x18);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bd152b0(*(undefined8 *)(unaff_x20 + 0x20));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x20);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bd152b0(*(undefined8 *)(unaff_x20 + 0x28));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x28);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      param_2 = *(long **)(unaff_x20 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_10bd149bc();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10bd11d8c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x39) = *(undefined1 *)(unaff_x20 + 0x39);
    }
  }
  func_0x00010bd14e5c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010bd14ecc();
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x00010bd374f4();
    for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd0f580; end: 10bd0f63b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd0f580(void)

{
  long lVar1;
  long unaff_x19;
  ulong *puVar2;
  uint unaff_w20;
  long lVar3;
  
  func_0x00010bd15254();
  if ((unaff_w20 & 0xf) != 0) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bd15278();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd155b4();
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 0x28);
    }
    if ((unaff_w20 >> 3 & 1) != 0) {
      func_0x00010bd0f5f4(*(undefined8 *)(unaff_x19 + 0x30));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined2 *)(unaff_x19 + 0x38) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*puVar2 == puVar2[1]) {
    return;
  }
  lVar1 = (long)((puVar2[1] - *puVar2) * 0x10000000) >> 0x20;
  lVar3 = lVar1 + 1;
  lVar1 = lVar1 * 0x10;
  do {
    lVar1 = lVar1 + -0x10;
    FUN_10bd36708(*puVar2 + lVar1);
    lVar3 = lVar3 + -1;
  } while (1 < lVar3);
  puVar2[1] = *puVar2;
  return;
}



/* Entry: 10bd0f63c; end: 10bd0f7b7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10bd0f63c(long *param_1,long *param_2,long *param_3,long *param_4)

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
  
  func_0x00010bd14e8c();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 1) != 0) {
    func_0x00010bd14dec(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x00010bd14f18(*(undefined8 *)(unaff_x20 + 0x20));
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    func_0x00010bd14fd0(*(undefined8 *)(unaff_x20 + 0x28));
    param_4 = param_1;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x2c);
    param_1 = (long *)0x4;
    func_0x00010bd150c8();
    param_4 = param_1;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd152dc();
    func_0x00010bd14dfc();
    param_4 = param_1;
  }
  if ((uVar7 >> 5 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd15428();
    func_0x00010bd14dfc();
    param_4 = param_1;
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



/* Entry: 10bd0f7b8; end: 10bd0f8b7;  */

void FUN_10bd0f7b8(void)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
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
  return;
}



/* Entry: 10bd0f8b8; end: 10bd0f8bb;  */

undefined8 FUN_10bd0f8b8(undefined8 param_1)

{
  func_0x000100067dc8();
  func_0x000100067e98(param_1);
  return param_1;
}



/* Entry: 10bd0f8bc; end: 10bd0f8cf;  */

void FUN_10bd0f8bc(void)

{
  func_0x000107c315f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0f8d0; end: 10bd0f8db;  */

void FUN_10bd0f8d0(void)

{
  Hint_Prefetch(0x113407d58,0,0,0);
  Hint_Prefetch(PTR_DAT_113407d58,0,0,0);
  return;
}



/* Entry: 10bd0f8dc; end: 10bd0fe8b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd0f8dc(ulong *param_1,undefined8 param_2,uint param_3)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_w23 & 0xff) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x48));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x48);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x50));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x50);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x58));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x58);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x60));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x60);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 4 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x68));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x68);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 5 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x70));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x70);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 6 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x78));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x78);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 7 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x80));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x80);
      func_0x00010bd150f0();
    }
  }
  if ((unaff_w23 & 0xff00) != 0) {
    if ((unaff_w23 >> 8 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x88));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x88);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 9 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x90));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x90);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x98);
      if (param_1 == (ulong *)0x0) {
        func_0x00010bd151dc(0,*(undefined8 *)(unaff_x20 + 0x98));
        *(ulong **)(unaff_x21 + 0x98) = param_1;
      }
      else {
        FUN_10bd126b0();
      }
    }
    if ((unaff_w23 >> 0xb & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa0) = *(undefined1 *)(unaff_x20 + 0xa0);
    }
    if ((unaff_w23 >> 0xc & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa1) = *(undefined1 *)(unaff_x20 + 0xa1);
    }
    if ((unaff_w23 >> 0xd & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa2) = *(undefined1 *)(unaff_x20 + 0xa2);
    }
    if ((unaff_w23 >> 0xe & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa3) = *(undefined1 *)(unaff_x20 + 0xa3);
    }
    if ((unaff_w23 >> 0xf & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa4) = *(undefined1 *)(unaff_x20 + 0xa4);
    }
  }
  if ((unaff_w23 & 0x1f0000) != 0) {
    if ((unaff_w23 >> 0x10 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa5) = *(undefined1 *)(unaff_x20 + 0xa5);
    }
    if ((unaff_w23 >> 0x11 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa6) = *(undefined1 *)(unaff_x20 + 0xa6);
    }
    if ((unaff_w23 >> 0x12 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa7) = *(undefined1 *)(unaff_x20 + 0xa7);
    }
    if ((unaff_w23 >> 0x13 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xa8) = *(undefined4 *)(unaff_x20 + 0xa8);
    }
    if ((unaff_w23 >> 0x14 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xac) = *(undefined1 *)(unaff_x20 + 0xac);
    }
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_1134061c0;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010bd14ecc();
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x00010bd374f4();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd0fe8c; end: 10bd10037;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10bd0fe8c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  func_0x00010bd14fb0();
  func_0x00010bd14cc0();
  while (unaff_x22 != 0) {
    func_0x00010bd15280();
    func_0x00010bd15228();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x00010bd15180();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x00010bd15180();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x58));
      func_0x00010bd15180();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00010bd1523c();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x00010bd1523c();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x70));
      func_0x00010bd1523c();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x78));
      func_0x00010bd1523c();
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x80));
      func_0x00010bd1523c();
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x88));
      func_0x00010bd1523c();
    }
    if ((uVar1 >> 9 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x90));
      func_0x00010bd1523c();
    }
    if ((uVar1 >> 10 & 1) != 0) {
      param_1 = *(long *)(unaff_x19 + 0x98);
      func_0x00010bd0e28c();
      func_0x00010bd1523c();
    }
    func_0x00010bd1572c(unaff_x20 + ((ulong)(uVar1 >> 10) & 2));
    func_0x00010bd1572c();
    func_0x00010bd1572c();
    unaff_x20 = extraout_x8;
    if ((uVar1 & 0x8000) != 0) {
      unaff_x20 = extraout_x9;
    }
  }
  if ((uVar1 & 0x1f0000) != 0) {
    if ((uVar1 & 0x10000) != 0) {
      unaff_x20 = unaff_x20 + 3;
    }
    func_0x00010bd1572c(unaff_x20);
  }
  func_0x00010bd15038();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = uVar2;
    return CONCAT44(uVar3,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  param_1 = param_1 + CONCAT44(uVar3,uVar2);
  *param_3 = (int)param_1;
  return param_1;
}



/* Entry: 10bd10038; end: 10bd10067;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd10038(ulong *param_1,ulong *param_2,uint param_3)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bd15154();
  FUN_10bd0cbdc();
  func_0x00010bd151e4();
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_w23 & 0xff) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x48));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x48);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x50));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x50);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x58));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x58);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x60));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x60);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 4 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x68));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x68);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 5 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x70));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x70);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 6 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x78));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x78);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 7 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x80));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x80);
      func_0x00010bd150f0();
    }
  }
  if ((unaff_w23 & 0xff00) != 0) {
    if ((unaff_w23 >> 8 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x88));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x88);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 9 & 1) != 0) {
      func_0x00010bd152e4(*(undefined8 *)(unaff_x20 + 0x90));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x21 + 0x90);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x98);
      if (param_1 == (ulong *)0x0) {
        func_0x00010bd151dc(0,*(undefined8 *)(unaff_x20 + 0x98));
        *(ulong **)(unaff_x21 + 0x98) = param_1;
      }
      else {
        FUN_10bd126b0();
      }
    }
    if ((unaff_w23 >> 0xb & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa0) = *(undefined1 *)(unaff_x20 + 0xa0);
    }
    if ((unaff_w23 >> 0xc & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa1) = *(undefined1 *)(unaff_x20 + 0xa1);
    }
    if ((unaff_w23 >> 0xd & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa2) = *(undefined1 *)(unaff_x20 + 0xa2);
    }
    if ((unaff_w23 >> 0xe & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa3) = *(undefined1 *)(unaff_x20 + 0xa3);
    }
    if ((unaff_w23 >> 0xf & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa4) = *(undefined1 *)(unaff_x20 + 0xa4);
    }
  }
  if ((unaff_w23 & 0x1f0000) != 0) {
    if ((unaff_w23 >> 0x10 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa5) = *(undefined1 *)(unaff_x20 + 0xa5);
    }
    if ((unaff_w23 >> 0x11 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa6) = *(undefined1 *)(unaff_x20 + 0xa6);
    }
    if ((unaff_w23 >> 0x12 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa7) = *(undefined1 *)(unaff_x20 + 0xa7);
    }
    if ((unaff_w23 >> 0x13 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xa8) = *(undefined4 *)(unaff_x20 + 0xa8);
    }
    if ((unaff_w23 >> 0x14 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xac) = *(undefined1 *)(unaff_x20 + 0xac);
    }
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_1134061c0;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010bd14ecc();
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x00010bd374f4();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd10068; end: 10bd100d7;  */

void FUN_10bd10068(undefined8 param_1)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9c340);
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
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x50);
  *(undefined1 *)(unaff_x19 + 0x54) = *(undefined1 *)(unaff_x20 + 0x54);
  *(undefined4 *)(unaff_x19 + 0x50) = uVar1;
  return;
}



/* Entry: 10bd100d8; end: 10bd10103;  */

undefined8 FUN_10bd100d8(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd10104(param_1);
  return param_1;
}



/* Entry: 10bd10104; end: 10bd1012f;  */

long * FUN_10bd10104(long param_1)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00010bd154c4();
  if (param_1 != 0) {
    FUN_10bd12650();
  }
  __ZdlPv();
  func_0x000107c3a70c(unaff_x19 + 2);
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
  return unaff_x19;
}



/* Entry: 10bd10130; end: 10bd10133;  */

undefined8 FUN_10bd10130(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd10104(param_1);
  return param_1;
}



/* Entry: 10bd10134; end: 10bd10147;  */

void FUN_10bd10134(void)

{
  FUN_10bd100d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd10148; end: 10bd10153;  */

void FUN_10bd10148(void)

{
  Hint_Prefetch(0x1134081e8,0,0,0);
  Hint_Prefetch(PTR_DAT_1134081e8,0,0,0);
  return;
}



/* Entry: 10bd10154; end: 10bd10197;  */

void FUN_10bd10154(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c3a72c(param_1,&PTR_PTR_113406168);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x000107c3a738(), iVar1 != 0)) &&
     ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00010bd15320();
  }
  return;
}



/* Entry: 10bd10198; end: 10bd1037b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd10198(ulong *param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_w23 & 0x3f) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010bd15478();
      if (param_1 == (ulong *)0x0) {
        func_0x00010bd151dc();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_10bd126b0();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010bd15564();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x51) = *(undefined1 *)(unaff_x20 + 0x51);
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x52) = *(undefined1 *)(unaff_x20 + 0x52);
    }
    if ((unaff_w23 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x53) = *(undefined1 *)(unaff_x20 + 0x53);
    }
    if ((unaff_w23 >> 5 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x54) = *(undefined1 *)(unaff_x20 + 0x54);
    }
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_113406168;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010bd14ecc();
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x00010bd374f4();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd1037c; end: 10bd103ef;  */

long FUN_10bd1037c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x22;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  func_0x00010bd14fb0();
  func_0x00010bd14cc0();
  while (unaff_x22 != 0) {
    func_0x00010bd15280();
    func_0x00010bd15228();
  }
  if ((*(uint *)(unaff_x19 + 0x28) & 0x3f) != 0) {
    if ((*(uint *)(unaff_x19 + 0x28) & 1) != 0) {
      func_0x00010bd15328();
      func_0x00010bd15180();
    }
    func_0x00010bd15588();
  }
  func_0x00010bd15038();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10bd36610();
    }
    else {
      param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_10bd37a78();
    param_1 = param_1 + CONCAT44(uVar2,uVar1);
    *param_3 = (int)param_1;
    return param_1;
  }
  *param_3 = uVar1;
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 10bd103f0; end: 10bd1041f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd103f0(ulong *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bd15154();
  func_0x00010bd0d7c4();
  func_0x00010bd151e4();
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_w23 & 0x3f) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010bd15478();
      if (param_1 == (ulong *)0x0) {
        func_0x00010bd151dc();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_10bd126b0();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010bd15564();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x51) = *(undefined1 *)(unaff_x20 + 0x51);
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x52) = *(undefined1 *)(unaff_x20 + 0x52);
    }
    if ((unaff_w23 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x53) = *(undefined1 *)(unaff_x20 + 0x53);
    }
    if ((unaff_w23 >> 5 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x54) = *(undefined1 *)(unaff_x20 + 0x54);
    }
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_113406168;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010bd14ecc();
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x00010bd374f4();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd10420; end: 10bd1046f;  */

void FUN_10bd10420(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
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
  return;
}



/* Entry: 10bd10470; end: 10bd10497;  */

undefined8 FUN_10bd10470(undefined8 param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a734();
  return param_1;
}



/* Entry: 10bd10498; end: 10bd1049b;  */

undefined8 FUN_10bd10498(undefined8 param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a734();
  return param_1;
}



/* Entry: 10bd1049c; end: 10bd104af;  */

void FUN_10bd1049c(void)

{
  FUN_10bd10470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd104b0; end: 10bd104bb;  */

void FUN_10bd104b0(void)

{
  Hint_Prefetch(0x113408370,0,0,0);
  Hint_Prefetch(PTR_DAT_113408370,0,0,0);
  return;
}



/* Entry: 10bd104bc; end: 10bd1051f;  */

void FUN_10bd104bc(ulong *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x00010bd151f8();
  uVar1 = *(uint *)(param_2 + 2);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd14f38(*(undefined8 *)(unaff_x20 + 0x18));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x19 + 0x18);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
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



/* Entry: 10bd10520; end: 10bd1055f;  */

void FUN_10bd10520(long param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bd15278();
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*puVar2 != puVar2[1]) {
    lVar1 = (long)((puVar2[1] - *puVar2) * 0x10000000) >> 0x20;
    lVar3 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*puVar2 + lVar1);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    puVar2[1] = *puVar2;
    return;
  }
  return;
}



/* Entry: 10bd10560; end: 10bd105c3;  */

long * FUN_10bd10560(long *param_1,long *param_2,long *param_3,long *param_4)

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
  
  func_0x00010bd14e8c();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 1) != 0) {
    func_0x00010bd14f18(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd15294();
    func_0x00010bd14e34();
    param_4 = param_1;
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



/* Entry: 10bd105c4; end: 10bd10617;  */

long FUN_10bd105c4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x00010bd1520c();
  if ((bool)in_ZR) {
    lVar1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      lVar1 = 0;
    }
    else {
      func_0x00010bd1500c();
      lVar1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd14f6c((long)*(int *)(unaff_x19 + 0x20));
      lVar1 = lVar1 + extraout_x8 + 1;
    }
  }
  func_0x00010bd151bc();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = (int)lVar1;
    return lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *param_3 = (int)(param_1 + lVar1);
  return param_1 + lVar1;
}



/* Entry: 10bd10618; end: 10bd1063f;  */

undefined8 FUN_10bd10618(undefined8 param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a734();
  return param_1;
}



/* Entry: 10bd10640; end: 10bd10643;  */

undefined8 FUN_10bd10640(undefined8 param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a734();
  return param_1;
}



/* Entry: 10bd10644; end: 10bd10657;  */

void FUN_10bd10644(void)

{
  FUN_10bd10618();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd10658; end: 10bd10663;  */

void FUN_10bd10658(void)

{
  Hint_Prefetch(0x113408480,0,0,0);
  Hint_Prefetch(PTR_DAT_113408480,0,0,0);
  return;
}



/* Entry: 10bd10664; end: 10bd106ef;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd10664(ulong *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x00010bd151f8();
  uVar1 = *(uint *)(param_2 + 2);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd14f38(*(undefined8 *)(unaff_x20 + 0x18));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x19 + 0x18);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x20 + 0x24);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
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



/* Entry: 10bd106f0; end: 10bd10733;  */

void FUN_10bd106f0(void)

{
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  ulong unaff_x20;
  long lVar2;
  
  func_0x00010bd15254();
  if ((unaff_x20 & 1) != 0) {
    func_0x00010bd15278();
  }
  if ((unaff_x20 & 0xe) != 0) {
    *(undefined4 *)(unaff_x19 + 5) = 0;
    unaff_x19[4] = 0;
  }
  func_0x00010bd1529c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 10bd10734; end: 10bd107df;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10bd10734(long *param_1,long *param_2,long *param_3,long *param_4)

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
  
  func_0x00010bd14e8c();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd15408();
    func_0x00010bd14e34();
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd15358();
    func_0x00010bd14e34();
    param_4 = param_1;
  }
  if ((uVar7 & 1) != 0) {
    func_0x00010bd14fd0(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd15400();
    func_0x00010bd14e34();
    param_4 = param_1;
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



/* Entry: 10bd107e0; end: 10bd10887;  */

long FUN_10bd107e0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long extraout_x8;
  uint unaff_w20;
  
  func_0x00010bd15254();
  if ((unaff_w20 & 0xf) == 0) {
    lVar1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      lVar1 = 0;
    }
    else {
      func_0x00010bd1500c();
      lVar1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd154a0(0xfffffff7);
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      func_0x00010bd154a0();
    }
    if ((unaff_w20 >> 3 & 1) != 0) {
      func_0x00010bd15378();
      lVar1 = lVar1 + extraout_x8 + 1;
    }
  }
  func_0x00010bd151bc();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10bd36610();
    }
    else {
      param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_10bd37a78();
    *param_3 = (int)(param_1 + lVar1);
    return param_1 + lVar1;
  }
  *param_3 = (int)lVar1;
  return lVar1;
}



/* Entry: 10bd10888; end: 10bd108b3;  */

void FUN_10bd10888(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 10bd108b4; end: 10bd1099b;  */

void FUN_10bd108b4(void)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9c3e0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14d54();
  func_0x00010bd15614(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  FUN_10bd10fec((undefined8 *)(unaff_x19 + 0x40),unaff_x20 + 0x40);
  lVar2 = unaff_x19 + 0x58;
  func_0x00010bd13a78();
  func_0x00010bd14e40();
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bd152a8();
  }
  *(long *)(unaff_x19 + 0x70) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_10bd149ec();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined4 *)(unaff_x19 + 0x90) = *(undefined4 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  return;
}



/* Entry: 10bd1099c; end: 10bd109c7;  */

undefined8 FUN_10bd1099c(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd109c8(param_1);
  return param_1;
}



/* Entry: 10bd109c8; end: 10bd10a07;  */

long * FUN_10bd109c8(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10bd12650();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10bd10618();
  }
  __ZdlPv();
  func_0x000107c31644(param_1 + 0x58);
  FUN_10bd13b30(param_1 + 0x40);
  func_0x000107c282dc(param_1 + 0x30);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    if ((long)*(short *)(param_1 + 0x1a) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        func_0x000107c30280(lVar2 + 0x18);
        func_0x000107c398e8();
      }
    }
    else {
      for (lVar4 = (long)*(short *)(param_1 + 0x1a) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        func_0x000107c30280(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)(param_1 + 0x1a) < 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        func_0x000107c302a0();
      }
      func_0x000107c60e14();
    }
    else {
      func_0x000107c60e10();
    }
  }
  return (long *)(param_1 + 0x10);
}



/* Entry: 10bd10a08; end: 10bd10a0b;  */

undefined8 FUN_10bd10a08(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd109c8(param_1);
  return param_1;
}



/* Entry: 10bd10a0c; end: 10bd10a1f;  */

void FUN_10bd10a0c(void)

{
  FUN_10bd1099c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd10a20; end: 10bd10a2b;  */

void FUN_10bd10a20(void)

{
  Hint_Prefetch(0x1134085e0,0,0,0);
  Hint_Prefetch(PTR_DAT_1134085e0,0,0,0);
  return;
}



/* Entry: 10bd10a2c; end: 10bd10a77;  */

void FUN_10bd10a2c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c3a72c(param_1,&PTR_PTR_113406270);
  if ((int)lVar2 != 0) {
    iVar1 = (int)param_1 + 0x58;
    func_0x000107c315d4();
    if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      func_0x00010bd126a0();
    }
  }
  return;
}



/* Entry: 10bd10a78; end: 10bd10fcf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd10a78(void)

{
  uint uVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  func_0x00010bd14dc0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  func_0x00010bd15260();
  func_0x000107c282d0();
  FUN_10bd10fec(unaff_x21 + 0x40,unaff_x20 + 0x40);
  puVar2 = (ulong *)(unaff_x21 + 0x58);
  func_0x00010bd0e2b8(puVar2,unaff_x20 + 0x58);
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010bd151dc(0,*(undefined8 *)(unaff_x20 + 0x70));
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_10bd126b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10bd149ec();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_10bd10664();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x80) = *(undefined4 *)(unaff_x20 + 0x80);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x84) = *(undefined4 *)(unaff_x20 + 0x84);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x88) = *(undefined1 *)(unaff_x20 + 0x88);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x89) = *(undefined1 *)(unaff_x20 + 0x89);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8a) = *(undefined1 *)(unaff_x20 + 0x8a);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8b) = *(undefined1 *)(unaff_x20 + 0x8b);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8c) = *(undefined1 *)(unaff_x20 + 0x8c);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8d) = *(undefined1 *)(unaff_x20 + 0x8d);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x90) = *(undefined4 *)(unaff_x20 + 0x90);
    }
  }
  func_0x00010bd15048();
  ppuVar3 = &PTR_PTR_113406270;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*puVar2 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)((long)ppuVar3[1] - (long)*ppuVar3) >> 4)) {
      func_0x00010bd374f4();
      for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd10fd0; end: 10bd10feb;  */

long FUN_10bd10fd0(long param_1)

{
  long extraout_x8;
  
  FUN_10bd107e0();
  func_0x00010bd14c8c();
  return param_1 + extraout_x8;
}



/* Entry: 10bd10fec; end: 10bd11003;  */

void FUN_10bd10fec(long *param_1,long param_2)

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
    FUN_10bd14a4c(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bd11004; end: 10bd11033;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd11004(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bd15154();
  func_0x00010bd0e544();
  func_0x00010bd151e4();
  func_0x00010bd14dc0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  func_0x00010bd15260();
  func_0x000107c282d0();
  FUN_10bd10fec(unaff_x21 + 0x40,unaff_x20 + 0x40);
  puVar2 = (ulong *)(unaff_x21 + 0x58);
  func_0x00010bd0e2b8(puVar2,unaff_x20 + 0x58);
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010bd151dc(0,*(undefined8 *)(unaff_x20 + 0x70));
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_10bd126b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10bd149ec();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_10bd10664();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x80) = *(undefined4 *)(unaff_x20 + 0x80);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x84) = *(undefined4 *)(unaff_x20 + 0x84);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x88) = *(undefined1 *)(unaff_x20 + 0x88);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x89) = *(undefined1 *)(unaff_x20 + 0x89);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8a) = *(undefined1 *)(unaff_x20 + 0x8a);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8b) = *(undefined1 *)(unaff_x20 + 0x8b);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8c) = *(undefined1 *)(unaff_x20 + 0x8c);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8d) = *(undefined1 *)(unaff_x20 + 0x8d);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x90) = *(undefined4 *)(unaff_x20 + 0x90);
    }
  }
  func_0x00010bd15048();
  ppuVar3 = &PTR_PTR_113406270;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*puVar2 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)((long)ppuVar3[1] - (long)*ppuVar3) >> 4)) {
      func_0x00010bd374f4();
      for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd11034; end: 10bd110cb;  */

void FUN_10bd11034(long param_1,undefined8 param_2,long param_3)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar1;
  
  func_0x00010bd151f8();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010bd15248(&PTR_FUN_110d9c2a0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  puVar1 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar1 = unaff_x20;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  func_0x00010bd13a78(unaff_x19 + 0x30);
  func_0x00010b4c043c();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010bd1564c();
  }
  *(undefined8 **)(unaff_x19 + 0x48) = puVar1;
  return;
}



/* Entry: 10bd110cc; end: 10bd110f7;  */

undefined8 FUN_10bd110cc(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd110f8(param_1);
  return param_1;
}



/* Entry: 10bd110f8; end: 10bd11123;  */

long * FUN_10bd110f8(long param_1)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00010bd154c4();
  if (param_1 != 0) {
    FUN_10bd12650();
  }
  __ZdlPv();
  func_0x000107c3a70c(unaff_x19 + 2);
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
  return unaff_x19;
}



/* Entry: 10bd11124; end: 10bd11127;  */

undefined8 FUN_10bd11124(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd110f8(param_1);
  return param_1;
}



/* Entry: 10bd11128; end: 10bd1113b;  */

void FUN_10bd11128(void)

{
  FUN_10bd110cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd1113c; end: 10bd11147;  */

void FUN_10bd1113c(void)

{
  Hint_Prefetch(0x113408868,0,0,0);
  Hint_Prefetch(PTR_DAT_113408868,0,0,0);
  return;
}



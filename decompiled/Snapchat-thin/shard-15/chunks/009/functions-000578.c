/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd11148; end: 10bd1118b;  */

void FUN_10bd11148(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c3a72c(param_1,&PTR_PTR_1134060c0);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x000107c3a738(), iVar1 != 0)) &&
     ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00010bd15320();
  }
  return;
}



/* Entry: 10bd1118c; end: 10bd11273;  */

void FUN_10bd1118c(ulong *param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  ulong unaff_x23;
  
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_x23 & 1) != 0) {
    func_0x00010bd15478();
    if (param_1 == (ulong *)0x0) {
      func_0x00010bd151dc();
      *(ulong **)(unaff_x21 + 0x48) = param_1;
    }
    else {
      FUN_10bd126b0();
    }
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_1134060c0;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return;
}



/* Entry: 10bd11274; end: 10bd112b7;  */

long FUN_10bd11274(long param_1,undefined8 param_2,undefined4 *param_3)

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
  if ((*(byte *)(unaff_x19 + 0x28) & 1) != 0) {
    func_0x00010bd15328();
    func_0x00010bd15180();
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



/* Entry: 10bd112b8; end: 10bd112e7;  */

void FUN_10bd112b8(ulong *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  ulong unaff_x23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bd15154();
  func_0x00010bd0e920();
  func_0x00010bd151e4();
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_x23 & 1) != 0) {
    func_0x00010bd15478();
    if (param_1 == (ulong *)0x0) {
      func_0x00010bd151dc();
      *(ulong **)(unaff_x21 + 0x48) = param_1;
    }
    else {
      FUN_10bd126b0();
    }
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_1134060c0;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return;
}



/* Entry: 10bd112e8; end: 10bd11357;  */

void FUN_10bd112e8(undefined8 param_1)

{
  undefined2 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9c520);
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
  uVar1 = *(undefined2 *)(unaff_x20 + 0x50);
  *(undefined1 *)(unaff_x19 + 0x52) = *(undefined1 *)(unaff_x20 + 0x52);
  *(undefined2 *)(unaff_x19 + 0x50) = uVar1;
  return;
}



/* Entry: 10bd11358; end: 10bd11383;  */

undefined8 FUN_10bd11358(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd11384(param_1);
  return param_1;
}



/* Entry: 10bd11384; end: 10bd113af;  */

long * FUN_10bd11384(long param_1)

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



/* Entry: 10bd113b0; end: 10bd113b3;  */

undefined8 FUN_10bd113b0(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd11384(param_1);
  return param_1;
}



/* Entry: 10bd113b4; end: 10bd113c7;  */

void FUN_10bd113b4(void)

{
  FUN_10bd11358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd113c8; end: 10bd113d3;  */

void FUN_10bd113c8(void)

{
  Hint_Prefetch(0x113408970,0,0,0);
  Hint_Prefetch(PTR_DAT_113408970,0,0,0);
  return;
}



/* Entry: 10bd113d4; end: 10bd11417;  */

void FUN_10bd113d4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c3a72c(param_1,&PTR_PTR_113406410);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x000107c3a738(), iVar1 != 0)) &&
     ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00010bd15320();
  }
  return;
}



/* Entry: 10bd11418; end: 10bd11593;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd11418(ulong *param_1)

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
  if ((unaff_w23 & 0xf) != 0) {
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
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_113406410;
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



/* Entry: 10bd11594; end: 10bd115ef;  */

long FUN_10bd11594(long param_1,undefined8 param_2,undefined4 *param_3)

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
  if ((*(uint *)(unaff_x19 + 0x28) & 0xf) != 0) {
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



/* Entry: 10bd115f0; end: 10bd1161f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd115f0(ulong *param_1,ulong *param_2)

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
  func_0x00010bd0ec88();
  func_0x00010bd151e4();
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_w23 & 0xf) != 0) {
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
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_113406410;
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



/* Entry: 10bd11620; end: 10bd116a3;  */

void FUN_10bd11620(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
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
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_10bd149ec();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  *(undefined2 *)(unaff_x19 + 0x58) = *(undefined2 *)(unaff_x20 + 0x58);
  return;
}



/* Entry: 10bd116a4; end: 10bd116cf;  */

undefined8 FUN_10bd116a4(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd116d0(param_1);
  return param_1;
}



/* Entry: 10bd116d0; end: 10bd1170b;  */

long * FUN_10bd116d0(long param_1)

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
  if (unaff_x19[10] != 0) {
    FUN_10bd10618();
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



/* Entry: 10bd1170c; end: 10bd1170f;  */

undefined8 FUN_10bd1170c(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd116d0(param_1);
  return param_1;
}



/* Entry: 10bd11710; end: 10bd11723;  */

void FUN_10bd11710(void)

{
  FUN_10bd116a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd11724; end: 10bd1172f;  */

void FUN_10bd11724(void)

{
  Hint_Prefetch(0x113408ae0,0,0,0);
  Hint_Prefetch(PTR_DAT_113408ae0,0,0,0);
  return;
}



/* Entry: 10bd11730; end: 10bd11773;  */

void FUN_10bd11730(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c3a72c(param_1,&PTR_PTR_1134063b0);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x000107c3a738(), iVar1 != 0)) &&
     ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00010bd15320();
  }
  return;
}



/* Entry: 10bd11774; end: 10bd1190b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd11774(ulong *param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010bd14dc0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_w23 & 0xf) != 0) {
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
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10bd149ec();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_10bd10664();
      }
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x58) = *(undefined1 *)(unaff_x20 + 0x58);
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x59) = *(undefined1 *)(unaff_x20 + 0x59);
    }
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_1134063b0;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
      func_0x00010bd374f4();
      for (lVar2 = 0; (long)unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd1190c; end: 10bd1197f;  */

long FUN_10bd1190c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x19;
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
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd15328();
      func_0x00010bd15180();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(long *)(unaff_x19 + 0x50);
      FUN_10bd10fd0();
      func_0x00010bd15180();
    }
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



/* Entry: 10bd11980; end: 10bd119af;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd11980(ulong *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong *unaff_x22;
  uint unaff_w23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bd15154();
  func_0x00010bd0efbc();
  func_0x00010bd151e4();
  func_0x00010bd14dc0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_w23 & 0xf) != 0) {
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
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10bd149ec();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_10bd10664();
      }
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x58) = *(undefined1 *)(unaff_x20 + 0x58);
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x59) = *(undefined1 *)(unaff_x20 + 0x59);
    }
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_1134063b0;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
      func_0x00010bd374f4();
      for (lVar2 = 0; (long)unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd119b0; end: 10bd11a17;  */

void FUN_10bd119b0(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9c250);
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
  *(undefined1 *)(unaff_x19 + 0x50) = *(undefined1 *)(unaff_x20 + 0x50);
  return;
}



/* Entry: 10bd11a18; end: 10bd11a43;  */

undefined8 FUN_10bd11a18(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd11a44(param_1);
  return param_1;
}



/* Entry: 10bd11a44; end: 10bd11a6f;  */

long * FUN_10bd11a44(long param_1)

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



/* Entry: 10bd11a70; end: 10bd11a73;  */

undefined8 FUN_10bd11a70(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd11a44(param_1);
  return param_1;
}



/* Entry: 10bd11a74; end: 10bd11a87;  */

void FUN_10bd11a74(void)

{
  FUN_10bd11a18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd11a88; end: 10bd11a93;  */

void FUN_10bd11a88(void)

{
  Hint_Prefetch(0x113408c58,0,0,0);
  Hint_Prefetch(PTR_DAT_113408c58,0,0,0);
  return;
}



/* Entry: 10bd11a94; end: 10bd11ad7;  */

void FUN_10bd11a94(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c3a72c(param_1,&PTR_PTR_113406068);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x000107c3a738(), iVar1 != 0)) &&
     ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00010bd15320();
  }
  return;
}



/* Entry: 10bd11ad8; end: 10bd11bdb;  */

void FUN_10bd11ad8(ulong *param_1)

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
  if ((unaff_w23 & 3) != 0) {
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
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_113406068;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return;
}



/* Entry: 10bd11bdc; end: 10bd11c33;  */

long FUN_10bd11bdc(long param_1,undefined8 param_2,undefined4 *param_3)

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
  if (((*(uint *)(unaff_x19 + 0x28) & 3) != 0) && ((*(uint *)(unaff_x19 + 0x28) & 1) != 0)) {
    func_0x00010bd15328();
    func_0x00010bd1523c();
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



/* Entry: 10bd11c34; end: 10bd11c63;  */

void FUN_10bd11c34(ulong *param_1,ulong *param_2)

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
  func_0x00010bd0f298();
  func_0x00010bd151e4();
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_w23 & 3) != 0) {
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
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_113406068;
  func_0x00010bd14f94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return;
}



/* Entry: 10bd11c64; end: 10bd11ccb;  */

void FUN_10bd11c64(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
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
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  return;
}



/* Entry: 10bd11ccc; end: 10bd11cf7;  */

undefined8 FUN_10bd11ccc(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd11cf8(param_1);
  return param_1;
}



/* Entry: 10bd11cf8; end: 10bd11d23;  */

long * FUN_10bd11cf8(long param_1)

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



/* Entry: 10bd11d24; end: 10bd11d27;  */

undefined8 FUN_10bd11d24(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd11cf8(param_1);
  return param_1;
}



/* Entry: 10bd11d28; end: 10bd11d3b;  */

void FUN_10bd11d28(void)

{
  FUN_10bd11ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd11d3c; end: 10bd11d47;  */

void FUN_10bd11d3c(void)

{
  Hint_Prefetch(0x113408d78,0,0,0);
  Hint_Prefetch(PTR_DAT_113408d78,0,0,0);
  return;
}



/* Entry: 10bd11d48; end: 10bd11d8b;  */

void FUN_10bd11d48(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c3a72c(param_1,&PTR_PTR_113406110);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x000107c3a738(), iVar1 != 0)) &&
     ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00010bd15320();
  }
  return;
}



/* Entry: 10bd11d8c; end: 10bd11ed3;  */

void FUN_10bd11d8c(ulong *param_1)

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
  if ((unaff_w23 & 7) != 0) {
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
      *(undefined4 *)(unaff_x21 + 0x54) = *(undefined4 *)(unaff_x20 + 0x54);
    }
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_113406110;
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



/* Entry: 10bd11ed4; end: 10bd11f3f;  */

long FUN_10bd11ed4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x19;
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
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd15328();
      func_0x00010bd1523c();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bd14f6c((long)*(int *)(unaff_x19 + 0x54));
    }
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
    param_1 = param_1 + CONCAT44(uVar3,uVar2);
    *param_3 = (int)param_1;
    return param_1;
  }
  *param_3 = uVar2;
  return CONCAT44(uVar3,uVar2);
}



/* Entry: 10bd11f40; end: 10bd11f6f;  */

void FUN_10bd11f40(ulong *param_1,ulong *param_2)

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
  func_0x00010bd0f5f4();
  func_0x00010bd151e4();
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  FUN_10bd15058();
  if ((unaff_w23 & 7) != 0) {
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
      *(undefined4 *)(unaff_x21 + 0x54) = *(undefined4 *)(unaff_x20 + 0x54);
    }
  }
  func_0x00010bd15048();
  ppuVar1 = &PTR_PTR_113406110;
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



/* Entry: 10bd11f70; end: 10bd11f97;  */

undefined8 FUN_10bd11f70(undefined8 param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a734();
  return param_1;
}



/* Entry: 10bd11f98; end: 10bd11f9b;  */

undefined8 FUN_10bd11f98(undefined8 param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a734();
  return param_1;
}



/* Entry: 10bd11f9c; end: 10bd11faf;  */

void FUN_10bd11f9c(void)

{
  FUN_10bd11f70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd11fb0; end: 10bd11fcf;  */

void FUN_10bd11fb0(void)

{
  Hint_Prefetch(0x113408ee8,0,0,0);
  Hint_Prefetch(PTR_DAT_113408ee8,0,0,0);
  return;
}



/* Entry: 10bd11fd0; end: 10bd12033;  */

void FUN_10bd11fd0(ulong *param_1,long *param_2,uint param_3)

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
      *(undefined1 *)(unaff_x19 + 0x20) = *(undefined1 *)(unaff_x20 + 0x20);
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



/* Entry: 10bd12034; end: 10bd12073;  */

void FUN_10bd12034(long param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bd15278();
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x20) = 0;
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



/* Entry: 10bd12074; end: 10bd120d7;  */

long * FUN_10bd12074(long *param_1,long *param_2,long *param_3,long *param_4)

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
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd15358();
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



/* Entry: 10bd120d8; end: 10bd12123;  */

long FUN_10bd120d8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar2 = 0;
    }
    else {
      func_0x00010bd1500c();
      lVar2 = param_1 + 1;
    }
    lVar2 = lVar2 + ((ulong)uVar1 & 2);
  }
  func_0x00010bd151bc();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = (int)lVar2;
    return lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *param_3 = (int)(param_1 + lVar2);
  return param_1 + lVar2;
}



/* Entry: 10bd12124; end: 10bd121a3;  */

void FUN_10bd12124(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  return;
}



/* Entry: 10bd121a4; end: 10bd121cf;  */

undefined8 FUN_10bd121a4(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd121d0(param_1);
  return param_1;
}



/* Entry: 10bd121d0; end: 10bd12207;  */

undefined8 FUN_10bd121d0(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c3a728(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x000107c3a720();
  }
  return unaff_x19;
}



/* Entry: 10bd12208; end: 10bd1220b;  */

undefined8 FUN_10bd12208(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd121d0(param_1);
  return param_1;
}



/* Entry: 10bd1220c; end: 10bd1221f;  */

void FUN_10bd1220c(void)

{
  FUN_10bd121a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd12220; end: 10bd1222b;  */

void FUN_10bd12220(void)

{
  Hint_Prefetch(0x113408ff0,0,0,0);
  Hint_Prefetch(PTR_DAT_113408ff0,0,0,0);
  return;
}



/* Entry: 10bd1222c; end: 10bd1235b;  */

bool FUN_10bd1222c(ulong param_1)

{
  int iVar1;
  char in_NG;
  char in_OV;
  
  iVar1 = *(int *)(param_1 + 0x20);
  do {
    func_0x000107c3a73c();
    if (in_NG != in_OV) break;
    func_0x00010bd1569c();
    func_0x00010bd11fbc();
  } while ((param_1 & 1) != 0);
  return iVar1 + 1 < 1;
}



/* Entry: 10bd1235c; end: 10bd123d7;  */

void FUN_10bd1235c(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  ulong extraout_x8;
  long lVar2;
  ulong *unaff_x19;
  long lVar3;
  
  func_0x00010bd153ac();
  if (in_NG == in_OV) {
    func_0x00010bd15470();
  }
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd154bc();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 7);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 8);
    }
  }
  if ((uVar1 & 0x38) != 0) {
    unaff_x19[9] = 0;
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
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



/* Entry: 10bd123d8; end: 10bd125a7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10bd123d8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  func_0x00010bd14e8c();
  lVar11 = param_1[4];
  while ((int)lVar11 != 0) {
    func_0x00010bd14c28();
    param_1 = (long *)0x2;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  uVar8 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar8 & 1) != 0) {
    func_0x00010bd14fd0(*(undefined8 *)(unaff_x20 + 0x30));
    param_4 = param_1;
  }
  plVar3 = param_1;
  if ((uVar8 >> 3 & 1) != 0) {
    func_0x00010bd14e28();
    param_4 = *(long **)(unaff_x20 + 0x48);
    func_0x00010bd15400();
    func_0x000107c280ac(param_4,param_1);
    plVar3 = param_4;
    param_2 = param_1;
  }
  if ((uVar8 >> 4 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x50);
    func_0x00010bd153a0();
    func_0x000107c282c4();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if ((uVar8 >> 5 & 1) != 0) {
    func_0x00010bd14e28();
    lVar11 = *(long *)(unaff_x20 + 0x58);
    plVar4 = (long *)0x31;
    func_0x000107c280a8(0x31,plVar3);
    param_4 = plVar4 + 1;
    *plVar4 = lVar11;
    param_2 = plVar3;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    func_0x00010bd15160(*(undefined8 *)(unaff_x20 + 0x38));
    param_2 = (long *)0x7;
    func_0x000107c280a0();
    param_4 = plVar4;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    func_0x00010bd15160(*(undefined8 *)(unaff_x20 + 0x40));
    param_2 = (long *)0x8;
    func_0x000107c280a0();
    param_4 = plVar4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
  lVar11 = 0;
  plVar3 = plVar4;
  do {
    if ((int)((ulong)(plVar4[1] - *plVar4) >> 4) <= lVar11) {
      return param_2;
    }
    piVar1 = (int *)(*plVar4 + lVar11 * 0x10);
    func_0x00010bd3caf8();
    plVar7 = plVar3;
    param_2 = plVar3;
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
        if (lVar10 <= lVar12 + ~((long)plVar3 + (long)(int)plVar7) + 0x10) {
          lVar9 = (long)plVar3 + 2;
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
      func_0x00010b4d5120(param_3,iVar2,lVar9,plVar3);
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
    plVar3 = plVar7;
  } while( true );
}



/* Entry: 10bd125a8; end: 10bd125b7;  */

void FUN_10bd125a8(long *param_1,long param_2)

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



/* Entry: 10bd125b8; end: 10bd125e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd125b8(ulong *param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bd15154();
  FUN_10bd1235c();
  func_0x00010bd151e4();
  func_0x00010bd151a0();
  FUN_10bd125a8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd14f38(*(undefined8 *)(unaff_x20 + 0x30));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x19 + 0x30);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bd152c8(*(undefined8 *)(unaff_x20 + 0x38));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x19 + 0x38);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bd152c8(*(undefined8 *)(unaff_x20 + 0x40));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x19 + 0x40);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x20 + 0x48);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
    }
  }
  func_0x00010bd14f4c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14fa0();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)(param_2[1] - *param_2 >> 4)) {
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



/* Entry: 10bd125e8; end: 10bd1264f;  */

void FUN_10bd125e8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  func_0x00010b4c043c();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 10bd12650; end: 10bd1267b;  */

long FUN_10bd12650(long param_1)

{
  func_0x000107c3a718();
  func_0x000107c3027c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bd1267c; end: 10bd1267f;  */

long FUN_10bd1267c(long param_1)

{
  func_0x000107c3a718();
  func_0x000107c3027c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bd12680; end: 10bd12693;  */

void FUN_10bd12680(void)

{
  FUN_10bd12650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd12694; end: 10bd126af;  */

void FUN_10bd12694(void)

{
  Hint_Prefetch(0x1134091a8,0,0,0);
  Hint_Prefetch(PTR_DAT_1134091a8,0,0,0);
  return;
}



/* Entry: 10bd126b0; end: 10bd12767;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd126b0(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  func_0x00010bd151f8();
  uVar1 = *(uint *)(param_2 + 0x28);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = *(undefined4 *)(unaff_x20 + 0x34);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x20 + 0x38);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x3c) = *(undefined4 *)(unaff_x20 + 0x3c);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x20 + 0x40);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(unaff_x20 + 0x44);
    }
  }
  *(uint *)(unaff_x19 + 0x28) = *(uint *)(unaff_x19 + 0x28) | uVar1;
  ppuVar3 = &PTR_PTR_113405ec0;
  puVar2 = (ulong *)(unaff_x19 + 0x10);
  func_0x00010b4c043c(puVar2,&PTR_PTR_113405ec0,unaff_x20 + 0x10);
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14fa0();
    if ((*puVar2 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)((long)ppuVar3[1] - (long)*ppuVar3) >> 4)) {
      func_0x00010bd374f4();
      for (lVar4 = 0; unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd12768; end: 10bd12877;  */

/* WARNING: Type propagation algorithm not settling */

undefined ** FUN_10bd12768(void)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  uint uVar10;
  ulong extraout_x8;
  long unaff_x20;
  uint unaff_w22;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  func_0x00010bd14f04();
  if ((unaff_w22 & 1) != 0) {
    func_0x00010bd14de0();
    func_0x00010bd15408();
    func_0x00010bd14e34();
  }
  if ((unaff_w22 >> 1 & 1) != 0) {
    func_0x00010bd14de0();
    func_0x00010bd15358();
    func_0x00010bd14e34();
  }
  if ((unaff_w22 >> 2 & 1) != 0) {
    func_0x00010bd14de0();
    func_0x00010bd15294();
    func_0x00010bd14e34();
  }
  if ((unaff_w22 >> 3 & 1) != 0) {
    func_0x00010bd14de0();
    func_0x00010bd15400();
    func_0x00010bd14e34();
  }
  if ((unaff_w22 >> 4 & 1) != 0) {
    func_0x00010bd14de0();
    func_0x00010bd152dc();
    func_0x00010bd14e34();
  }
  if ((unaff_w22 >> 5 & 1) != 0) {
    func_0x00010bd14de0();
    func_0x00010bd15428();
    func_0x00010bd14e34();
  }
  ppuVar8 = &PTR_PTR_113405ec0;
  ppuVar3 = (undefined **)(unaff_x20 + 0x10);
  ppuVar9 = (undefined **)0x3e8;
  func_0x00010b4cf48c(ppuVar3,&PTR_PTR_113405ec0,1000,0x2711);
  func_0x00010bd152f0();
  if ((extraout_x8 & 1) == 0) {
    return ppuVar8;
  }
  func_0x00010bd15018();
  lVar13 = 0;
  ppuVar4 = ppuVar3;
  do {
    if ((int)((ulong)((long)ppuVar3[1] - (long)*ppuVar3) >> 4) <= lVar13) {
      return ppuVar8;
    }
    piVar1 = (int *)(*ppuVar3 + lVar13 * 0x10);
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
      puVar14 = *(undefined **)(piVar1 + 2);
      ppuVar7 = (undefined **)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *ppuVar7 = puVar14;
      ppuVar8 = ppuVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar11 = *(long *)(piVar1 + 2);
      lVar12 = (long)*(char *)(lVar11 + 0x17);
      if ((-1 < lVar12) || (lVar12 = *(long *)(lVar11 + 8), lVar12 < 0x80)) {
        puVar14 = *ppuVar9;
        uVar10 = iVar2 << 3;
        ppuVar7 = (undefined **)(ulong)uVar10;
        func_0x000107c280a4();
        if (lVar12 <= (long)(puVar14 + ~((long)ppuVar4 + (long)(int)ppuVar7) + 0x10)) {
          lVar11 = (long)ppuVar4 + 2;
          for (uVar10 = uVar10 | 2; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
            *(byte *)(lVar11 + -2) = (byte)uVar10 | 0x80;
            lVar11 = lVar11 + 1;
          }
          *(byte *)(lVar11 + -2) = (byte)uVar10;
          *(char *)(lVar11 + -1) = (char)lVar12;
          func_0x00010bd3cc08();
          _memcpy();
          ppuVar8 = (undefined **)(lVar11 + lVar12);
          break;
        }
      }
      ppuVar7 = ppuVar9;
      func_0x00010b4d5120(ppuVar9,iVar2,lVar11,ppuVar4);
      ppuVar8 = ppuVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar6,uVar5,ppuVar9);
      func_0x00010bd3ca0c();
      ppuVar7 = (undefined **)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(ppuVar7,uVar6);
      ppuVar8 = ppuVar7;
    }
    lVar13 = lVar13 + 1;
    ppuVar4 = ppuVar7;
  } while( true );
}



/* Entry: 10bd12878; end: 10bd12993;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10bd12878(long param_1)

{
  undefined4 *puVar1;
  long extraout_x8;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint uVar2;
  long unaff_x19;
  
  func_0x00010bd14fb0();
  uVar2 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010bd14eb0(0xfffffff7);
      uVar2 = extraout_w9;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x00010bd14eb0();
      uVar2 = extraout_w9_00;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      func_0x00010bd14eb0();
      uVar2 = extraout_w9_01;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      func_0x00010bd14eb0();
      uVar2 = extraout_w9_02;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      func_0x00010bd14eb0();
      uVar2 = extraout_w9_03;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      func_0x00010bd15378();
      param_1 = param_1 + extraout_x8 + 1;
    }
  }
  puVar1 = (undefined4 *)(unaff_x19 + 0x2c);
  if ((*(byte *)(unaff_x19 + 8) & 1) != 0) {
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
  *puVar1 = (int)param_1;
  return param_1;
}



/* Entry: 10bd12994; end: 10bd129bf;  */

undefined8 FUN_10bd12994(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd129c0(param_1);
  return param_1;
}



/* Entry: 10bd129c0; end: 10bd129f7;  */

void FUN_10bd129c0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10bd12650();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10bd12650();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd129f8; end: 10bd129fb;  */

undefined8 FUN_10bd129f8(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd129c0(param_1);
  return param_1;
}



/* Entry: 10bd129fc; end: 10bd12a0f;  */

void FUN_10bd129fc(void)

{
  FUN_10bd12994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd12a10; end: 10bd12a1b;  */

void FUN_10bd12a10(void)

{
  Hint_Prefetch(0x113409338,0,0,0);
  Hint_Prefetch(PTR_DAT_113409338,0,0,0);
  return;
}



/* Entry: 10bd12a1c; end: 10bd12a5f;  */

void FUN_10bd12a1c(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010bd126a0();
    if (iVar1 == 0) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    func_0x00010bd126a0();
  }
  return;
}



/* Entry: 10bd12a60; end: 10bd12b07;  */

void FUN_10bd12a60(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  
  func_0x00010bd14dc0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      param_2 = *(long **)(unaff_x20 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010bd151dc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10bd126b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      param_2 = *(long **)(unaff_x20 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010bd151dc();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10bd126b0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
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
      for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd12b08; end: 10bd12b53;  */

void FUN_10bd12b08(void)

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
      FUN_10bd0e0c0(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_10bd0e0c0(unaff_x19[4]);
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



/* Entry: 10bd12b54; end: 10bd12c57;  */

long * FUN_10bd12b54(long *param_1,long *param_2,long *param_3,long *param_4)

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
  if ((uVar7 >> 2 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd15294();
    func_0x00010bd14e34();
    param_4 = param_1;
  }
  if ((uVar7 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x18);
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x2c);
    param_1 = (long *)0x4;
    func_0x00010bd150c8();
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x20);
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x2c);
    param_1 = (long *)0x5;
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



/* Entry: 10bd12c58; end: 10bd12c83;  */

long FUN_10bd12c58(long param_1)

{
  func_0x000107c3a718();
  FUN_10bd13c60(param_1 + 0x18);
  return param_1;
}



/* Entry: 10bd12c84; end: 10bd12c87;  */

long FUN_10bd12c84(long param_1)

{
  func_0x000107c3a718();
  FUN_10bd13c60(param_1 + 0x18);
  return param_1;
}



/* Entry: 10bd12c88; end: 10bd12c9b;  */

void FUN_10bd12c88(void)

{
  FUN_10bd12c58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd12c9c; end: 10bd12ca7;  */

void FUN_10bd12c9c(void)

{
  Hint_Prefetch(0x113409448,0,0,0);
  Hint_Prefetch(PTR_DAT_113409448,0,0,0);
  return;
}



/* Entry: 10bd12ca8; end: 10bd12ceb;  */

void FUN_10bd12ca8(uint param_1)

{
  char in_NG;
  char in_OV;
  
  do {
    func_0x000107c3a748();
    if (in_NG != in_OV) break;
    func_0x000107c3a704();
    FUN_10bd12a1c();
  } while ((param_1 & 1) != 0);
  func_0x000107c3a744();
  return;
}



/* Entry: 10bd12cec; end: 10bd12d8f;  */

void FUN_10bd12cec(ulong *param_1,long *param_2)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x00010bd151a0();
  FUN_10bd12eb4();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = *(undefined4 *)(unaff_x20 + 0x34);
    }
  }
  *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 10bd12d90; end: 10bd12eb3;  */

long * FUN_10bd12d90(long *param_1,long *param_2,long *param_3,long *param_4)

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
  lVar10 = param_1[4];
  while ((int)lVar10 != 0) {
    func_0x00010bd14c28();
    param_1 = (long *)0x1;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  uVar7 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar7 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd15400();
    func_0x00010bd14e34();
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
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



/* Entry: 10bd12eb4; end: 10bd12ec3;  */

void FUN_10bd12eb4(long *param_1,long param_2)

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



/* Entry: 10bd12ec4; end: 10bd12eef;  */

undefined8 * FUN_10bd12ec4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d9be90;
  param_1[1] = param_2;
  FUN_10bd12ef0();
  return param_1;
}



/* Entry: 10bd12ef0; end: 10bd12f1b;  */

void FUN_10bd12ef0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x68) = &DAT_11383d918;
  return;
}



/* Entry: 10bd12f1c; end: 10bd12fbb;  */

void FUN_10bd12f1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010bd151f8();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010bd15248(&PTR_FUN_110d9be90);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd1554c();
  func_0x000107c282d4();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  func_0x000107c282d4(unaff_x19 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  func_0x00010bd15448();
  lVar1 = param_3 + 0x60;
  func_0x00010bd151b4();
  *(long *)(unaff_x19 + 0x60) = lVar1;
  param_3 = param_3 + 0x68;
  func_0x00010bd151b4();
  *(long *)(unaff_x19 + 0x68) = param_3;
  return;
}



/* Entry: 10bd12fbc; end: 10bd12ffb;  */

long FUN_10bd12fbc(long param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a75c();
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c3a740();
  func_0x000107c282dc(param_1 + 0x30);
  func_0x00010bd155cc();
  return param_1;
}



/* Entry: 10bd12ffc; end: 10bd12fff;  */

long FUN_10bd12ffc(long param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a75c();
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c3a740();
  func_0x000107c282dc(param_1 + 0x30);
  func_0x00010bd155cc();
  return param_1;
}



/* Entry: 10bd13000; end: 10bd13013;  */

void FUN_10bd13000(void)

{
  FUN_10bd12fbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd13014; end: 10bd1301f;  */

void FUN_10bd13014(void)

{
  Hint_Prefetch(0x113409538,0,0,0);
  Hint_Prefetch(PTR_DAT_113409538,0,0,0);
  return;
}



/* Entry: 10bd13020; end: 10bd130b7;  */

void FUN_10bd13020(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  func_0x00010bd151a0();
  func_0x000107c282d0();
  func_0x000107c282d0(unaff_x19 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x19 + 0x48);
  plVar3 = (long *)(unaff_x20 + 0x48);
  func_0x00010598fce8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd14f38(*(undefined8 *)(unaff_x20 + 0x60));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      puVar2 = (ulong *)(unaff_x19 + 0x60);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bd152c8(*(undefined8 *)(unaff_x20 + 0x68));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      puVar2 = (ulong *)(unaff_x19 + 0x68);
      func_0x00010bd150f0();
    }
  }
  func_0x00010bd14f4c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14fa0();
    if ((*puVar2 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(plVar3[1] - *plVar3) >> 4)) {
      func_0x00010bd374f4();
      for (lVar4 = 0; unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd130b8; end: 10bd1310f;  */

void FUN_10bd130b8(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long lVar1;
  uint unaff_w20;
  long lVar2;
  
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  func_0x000107c282c0(param_1 + 9);
  func_0x00010bd15738();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bd1561c();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x000106af6874(param_1 + 0xd);
    }
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
    lVar1 = (long)((param_1[1] - *param_1) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*param_1 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    param_1[1] = *param_1;
    return;
  }
  return;
}



/* Entry: 10bd13110; end: 10bd13287;  */

/* WARNING: Removing unreachable block (ram,0x00010bd13220) */

long * FUN_10bd13110(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 *puVar8;
  int extraout_w8;
  uint uVar9;
  ulong uVar10;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int *piVar11;
  int *unaff_x22;
  long lVar12;
  long lVar13;
  long unaff_x24;
  long lVar14;
  long lVar15;
  
  func_0x00010bd14e8c();
  uVar9 = *(uint *)(param_1 + 5);
  if (0 < (int)uVar9) {
    func_0x00010bd14e28();
    *(undefined1 *)param_1 = 10;
    while (0x7f < uVar9) {
      func_0x00010bd15344();
    }
    func_0x00010bd156bc();
    do {
      func_0x00010bd14e28();
      uVar10 = (ulong)*(int *)(ulong)uVar9;
      param_4 = (long *)((long)param_1 + 1);
      while (bVar2 = 0x7f < uVar10, bVar2) {
        func_0x00010bd15330();
        uVar10 = extraout_x8;
      }
      func_0x00010bd1551c();
    } while (!bVar2);
  }
  uVar9 = *(uint *)(unaff_x20 + 0x40);
  cVar3 = SBORROW4(uVar9,1);
  cVar4 = (int)(uVar9 - 1) < 0;
  if (0 < (int)uVar9) {
    func_0x00010bd14e28();
    puVar8 = (undefined1 *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 0x12;
    while (0x7f < uVar9) {
      func_0x00010bd15344();
    }
    puVar8[-1] = (char)uVar9;
    piVar11 = *(int **)(unaff_x20 + 0x38);
    unaff_x22 = piVar11 + *(int *)(unaff_x20 + 0x30);
    do {
      func_0x00010bd14e28();
      uVar10 = (ulong)*piVar11;
      param_4 = (long *)((long)param_1 + 1);
      while( true ) {
        bVar2 = 0x7f < uVar10;
        cVar3 = SBORROW8(uVar10,0x80);
        cVar4 = (long)(uVar10 - 0x80) < 0;
        if (!bVar2) break;
        func_0x00010bd15330();
        uVar10 = extraout_x8_00;
      }
      func_0x00010bd1551c();
    } while (!bVar2);
  }
  uVar9 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar9 & 1) != 0) {
    func_0x00010bd14fd0(*(undefined8 *)(unaff_x20 + 0x60));
    param_4 = param_1;
  }
  if ((uVar9 >> 1 & 1) != 0) {
    func_0x00010bd15160(*(undefined8 *)(unaff_x20 + 0x68));
    param_2 = (long *)0x4;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  func_0x00010bd15718();
  for (; unaff_x24 != 0; unaff_x24 = unaff_x24 + -1) {
    func_0x00010bd150d0();
    func_0x00010bd1518c();
    if (cVar4 == cVar3) {
      func_0x00010bd154fc();
      if (extraout_w8 < 0) {
        param_3 = (long *)*param_3;
      }
      func_0x00010bd14fbc();
      param_4 = (long *)((long)unaff_x22 + (ulong)uVar9);
    }
    else {
      param_2 = (long *)0x6;
      param_1 = unaff_x19;
      func_0x00010b4d5120();
      param_4 = param_1;
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
  lVar14 = 0;
  plVar5 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar14) {
      return param_2;
    }
    piVar11 = (int *)(*param_1 + lVar14 * 0x10);
    func_0x00010bd3caf8();
    plVar7 = plVar5;
    param_2 = plVar5;
    switch(piVar11[1]) {
    case 0:
      plVar7 = *(long **)(piVar11 + 2);
      uVar10 = (ulong)(uint)(*piVar11 << 3);
      func_0x00010bd3c9d8(uVar10);
      func_0x000107c280ac(plVar7,uVar10);
      param_2 = plVar7;
      break;
    case 1:
      iVar1 = piVar11[2];
      plVar7 = (long *)(ulong)(*piVar11 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar7 = iVar1;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar12 = *(long *)(piVar11 + 2);
      plVar7 = (long *)(ulong)(*piVar11 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar7 = lVar12;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar1 = *piVar11;
      lVar12 = *(long *)(piVar11 + 2);
      lVar13 = (long)*(char *)(lVar12 + 0x17);
      if ((-1 < lVar13) || (lVar13 = *(long *)(lVar12 + 8), lVar13 < 0x80)) {
        lVar15 = *param_3;
        uVar9 = iVar1 << 3;
        plVar7 = (long *)(ulong)uVar9;
        func_0x000107c280a4();
        if (lVar13 <= (long)(lVar15 + ~(ulong)((long)plVar5 + (long)(int)plVar7) + 0x10)) {
          puVar8 = (undefined1 *)((long)plVar5 + 2);
          for (uVar9 = uVar9 | 2; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
            puVar8[-2] = (byte)uVar9 | 0x80;
            puVar8 = puVar8 + 1;
          }
          puVar8[-2] = (byte)uVar9;
          puVar8[-1] = (char)lVar13;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(puVar8 + lVar13);
          break;
        }
      }
      plVar7 = param_3;
      func_0x00010b4d5120(param_3,iVar1,lVar12,plVar5);
      param_2 = plVar7;
      break;
    case 4:
      uVar10 = (ulong)(*piVar11 << 3 | 3);
      func_0x00010bd3c9d8(uVar10);
      uVar6 = *(undefined8 *)(piVar11 + 2);
      FUN_10bd377f0(uVar6,uVar10,param_3);
      func_0x00010bd3ca0c();
      plVar7 = (long *)(ulong)(*piVar11 << 3 | 4);
      func_0x000107c280a8(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar14 = lVar14 + 1;
    plVar5 = plVar7;
  } while( true );
}



/* Entry: 10bd13288; end: 10bd1334b;  */

long FUN_10bd13288(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long unaff_x19;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (undefined4)param_2;
  func_0x00010bd154d0();
  *(undefined4 *)(unaff_x19 + 0x28) = param_1;
  lVar3 = unaff_x19 + 0x30;
  func_0x00010b4d3e0c();
  *(int *)(unaff_x19 + 0x40) = (int)lVar3;
  uVar2 = lVar3 == 0;
  uVar1 = *(uint *)(unaff_x19 + 0x50);
  while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010bd14e70();
    func_0x00010bd15308();
  }
  func_0x00010bd15690();
  if (!(bool)uVar2) {
    if ((unaff_x19 + 0x48U & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00010bd15180();
    }
    if (((uint)(unaff_x19 + 0x48U) >> 1 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x00010bd15180();
    }
  }
  func_0x00010bd14f84();
  if ((*(byte *)(lVar3 + 8) & 1) != 0) {
    if ((*(ulong *)(lVar3 + 8) & 1) == 0) {
      FUN_10bd36610();
    }
    else {
      lVar3 = (*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_10bd37a78();
    lVar3 = lVar3 + CONCAT44(uVar5,uVar4);
    *param_3 = (int)lVar3;
    return lVar3;
  }
  *param_3 = uVar4;
  return CONCAT44(uVar5,uVar4);
}



/* Entry: 10bd1334c; end: 10bd1337b;  */

void FUN_10bd1334c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010bd15154();
  FUN_10bd130b8();
  func_0x00010bd151e4();
  func_0x00010bd151a0();
  func_0x000107c282d0();
  func_0x000107c282d0(unaff_x19 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x19 + 0x48);
  plVar3 = (long *)(unaff_x20 + 0x48);
  func_0x00010598fce8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd14f38(*(undefined8 *)(unaff_x20 + 0x60));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      puVar2 = (ulong *)(unaff_x19 + 0x60);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bd152c8(*(undefined8 *)(unaff_x20 + 0x68));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      puVar2 = (ulong *)(unaff_x19 + 0x68);
      func_0x00010bd150f0();
    }
  }
  func_0x00010bd14f4c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14fa0();
    if ((*puVar2 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(plVar3[1] - *plVar3) >> 4)) {
      func_0x00010bd374f4();
      for (lVar4 = 0; unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}


